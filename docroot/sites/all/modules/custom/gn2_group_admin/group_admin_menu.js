(function ($) {
  'use strict';
  Drupal.behaviors.GAM = {
    attach: function (context, settings) {
      $(window).load(function () {
        $('h2.pane-title').removeClass('ui-state-active');
        $('.sidebar .group_admin_menu').each(function () {
          $(this).html($('.main .group_admin_menu').html());
          $(this).addClass('grou-menu-2');
        });
        var contentType = dataLayer[0].contentType;
        var elementType = $('h2.pane-title');
        if (contentType === 'Course' || contentType === 'Course_group') {
          var elementType = $('h2.pane-title', this);
        }

        elementType.click(function (e) {
          if ($(this).hasClass('ui-state-active')) {
            $('.ui-accordion-content').slideUp();
            $(this).removeClass('ui-state-active');
          }
          else {
            $('.ui-accordion-content').slideDown();
            $(this).addClass('ui-state-active');
          }
        });
      });
    }
  };
})(jQuery);
