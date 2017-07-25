(function ($) {
  Drupal.behaviors.autosubmit = {
    attach: function (context, settings) {
      var isInIFrame = (window.location != window.parent.location);
      if (isInIFrame == true) {
        $('body.page-media-format-form #media-wysiwyg-format-form').hide(0);
        $(window).load(function () {
          $('body.page-media-format-form #media-wysiwyg-format-form a.fake-ok').click();
        });
      }
    }
  };
})(jQuery);