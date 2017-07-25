(function ($, Drupal, window, document, undefined) {

  Drupal.behaviors.gn2_sessions_accordions = {
    attach: function (context, settings) {
      function tab_field() {

        // Hide or show the default ul legend depending on screen size.
        $('.ui-tabs-nav, .horizontal-tabs-list').each(function () {
          if (window.innerWidth < 768) {
            $(this).hide();
          }
          if (window.innerWidth > 767) {
            $(this).show();
          }
        });

        $('.ui-tabs-panel, .horizontal-tabs-pane').each(function () {
          // We are on a smaller device - wrap in fieldsets.
          if (window.innerWidth < 768) {
            if ($(this).attr('aria-labelledby')) {
              var legendFind = $(this).attr('aria-labelledby');
              var legendText = $('a#' + legendFind).text();
            }
            if (!$(this).attr('aria-labelledby')) {
              var legendFind = $(this).index();
              var legendText = $('.horizontal-tab-button-' + legendFind + ' a strong').text();
            }
            if (!$(this).parent('.gn2_accordion-fieldset').length) {
              $(this).wrap('<fieldset class="gn2_accordion-fieldset"></fieldset>');
              $(this).parent().prepend('<legend class="gn2_accordion-fieldset-legend">' + legendText + '</legend>');
            }
          }

          // We are on a wider device - revert to default.
          if (window.innerWidth > 767) {
            if ($(".gn2_accordion-fieldset").length) {
              $('.gn2_accordion-fieldset-legend').remove();
              $(this).unwrap($(".gn2_accordion-fieldset"));
            }
          }
        });

        $(".gn2_accordion-fieldset-legend").click(function () {
          // Toggle our fieldsets when legend is clicked.
          $(this).parent().find(".ui-tabs-panel").toggle();
          $(this).toggleClass('clicked');
          $(this).parent().find(".horizontal-tabs-pane").toggleClass('horizontal-tab-hidden');
        });
      }

      // Fire our function.
      $(document).ready(function () {
        if (!Drupal.settings.gn2_sessions_fc) {
          tab_field();
        }
      })
      $(window).on('resize', function () {
        // If browser is manually resized, fire function when width dictates necessary.
        if (!Drupal.settings.gn2_sessions_fc) {
          tab_field();
        }
      })
    }
  }


})(jQuery, Drupal, this, this.document);
