(function ($) {
  Drupal.behaviors.gn2Cac = {
    attach: function (context, settings) {
      $('.pki_save').click(function () {
        $('#user-profile-form #edit-submit--2').trigger('click');
      });

      // Ajax function to see if the user's CAC session is still active.
      if (Drupal.settings.gn2Cac !== undefined && Drupal.settings.gn2Cac.cacURL !== undefined) {
        var cacURL = Drupal.settings.gn2Cac.cacURL;
        if (cacURL.length > 0) {
          window.setInterval(function () {
            $.ajax({
              url: cacURL,
              dataType: 'json',
              success: function (result) {
                var logOut = checkUserString(result['pki_string']);
                if (logOut === true) {
                  window.location.href = '/user/logout';
                }
              },
              error: function (e) {
                window.location.href = '/user/logout';
              },
              statusCode: {
                403: function () {
                  window.location.href = '/user/logout';
                }
              }
            });
          }, 20000);
        }

        // Get the user's PKI String and check it against the returned result.
        function checkUserString(pkiString) {
          var uid = Drupal.settings.gn2Cac.uid;
          var active = false;
          $.ajax({
            url: '/cac/ajax/' + uid,
            dataType: 'json',
            success: function (result) {
              var inactive = (pkiString !== result['pki_string']) ? true : false;
              return inactive;
            },
            error: function (e) {
              return
            }
          });
          if (active === false) {
            window.location.href = '/user/logout';
          }
        }
      }
    }
  };
})(jQuery);
