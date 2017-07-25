(function($) {
  Drupal.behaviors.GAM = {
    attach: function(context, settings) {
      $(window).load(function() {
        $('.sidebar .group_admin_menu').once().each(function() {
          var that = this;
          $(this).html($('.main .group_admin_menu').html());
          $(this).addClass('grou-menu-2');
          $('h2.pane-title', this).click(function (e) {
            $(this).toggleClass('ui-state-active');
            $('.ui-accordion-content', that).slideToggle();
          });
        });
      });
    }
  };
})(jQuery);
