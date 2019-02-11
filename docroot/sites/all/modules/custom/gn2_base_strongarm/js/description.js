(function ($) {
  Drupal.behaviors.gn2Description = {
    attach: function (context, settings) {
      if ($('.panel-pane .field-name-body').height() > 160) {
        $('.field-name-body').addClass('small');
        $('.small').prepend('<div class="gradient"></div>').after('<div class="body-readmore"><a href="#" class="readmore">Continue reading</a></div>');
        $('.body-wrapper').on('click', '.readmore', function (e) {
          e.preventDefault();
          this.expand = !this.expand;
          $(this).text(this.expand ? 'Click to collapse' : 'Continue reading');
          $(this).closest('.body-wrapper').find('.small, .big').toggleClass('small big');
        });
      }
    }
  }
})(jQuery);
