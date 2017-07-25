(function ($) {
  Drupal.behaviors.folder_blocks = {
    attach: function (context, settings) {
      $(window).load(function () {
        if ($('input[name="hide_blocks_settings"]').length > 0) {
          var val = $('input[name="hide_blocks_settings"]').val();
          if (val == 0) {
            $('.vertical-tabs').hide();
          }
        }
      });
    }
  };
})(jQuery);
