(function ($) {
  Drupal.behaviors.contacts = {
    attach: function (context, settings) {
      $(window).load(function () {
        if ($('body').hasClass('page-account')) {
          setInterval(function() {
            $('.user-contacts--row:not(.processed)').addClass('processed').each(function() {
              var href = $('.views-field-status-link-1 a', this).attr('href');
              href = href.split('?');
              if (href.length > 1) {
                href = href[0] + '?destination=account';
                $('.views-field-status-link-1 a', this).attr('href', href);
              }
            });

            // RD-2359 hides the "Find new contacts" button temporally while the results are sorted.
            $('.user__tab--contacts .view--user-contacts #views-exposed-form-user-panel-pane-1 #edit-sort-by:not(.processed)').addClass('processed').each(function(){
              $(this).change(function() {
                $('.user__tab--contacts .view--user-contacts .view-footer .general-content-button').hide();
              });
            });
          },1000);
        }
      });
    }
  };
})(jQuery);