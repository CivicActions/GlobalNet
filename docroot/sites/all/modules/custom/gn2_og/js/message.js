(function($) {
  Drupal.behaviors.message = {
    attach: function(context, settings) {
      $(window).load(function() {
        if ($('#group_admin_menu_accordion').length > 0) {

          $('#group_admin_menu_accordion li').each(function(){
            var url = $('a.menu__link', this).attr('href');
            if (url === "/messages/new") {
              $('a.menu__link', this).attr('href', '/messages/new?destination=' + location.pathname + '&to=' + Drupal.settings.gn2_privatemsg.current_og + '&admin=' + Drupal.settings.gn2_privatemsg.admin + '&name=' + Drupal.settings.gn2_privatemsg.group_name);
            }
          });
        }

        // Use this to grab query params.
        function getUrlVars() {
          var vars = [],
            hash;
          var hashes = window.location.href.slice(window.location.href.indexOf('?') + 1).split('&');
          for (var i = 0; i < hashes.length; i++) {
            hash = hashes[i].split('=');
            vars.push(hash[0]);
            vars[hash[0]] = hash[1];
          }
          return vars;
        }

        // This is where we add our name to the autocomplete "To" field.
        var search = location.search;
        if (search.indexOf('admin=admin') >= 0) {
          var name = getUrlVars()["name"];
          var name2 = decodeURIComponent(name);
          $('#privatemsg-new #edit-recipient').val(name2);
        }
      });
    }
  };


})(jQuery);
