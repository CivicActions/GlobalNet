(function ($) {
  Drupal.behaviors.admin_files = {
    attach: function (context, settings) {
      $(window).load(function () {
        $('body.page-admin-content-file .media-bulk-upload-multiedit-form h2').each(function(){
          var elem = $(this).next();
          if ($(elem).hasClass('file-image-form') || $(elem).hasClass('file-video-form')
          || $(elem).hasClass('file-document-form') || $(elem).hasClass('file-audio-form')) {
            $(this).click(function() {
              $(elem).toggleClass('active');
              $(this).toggleClass('active');
            });
          }
        });
      });
    }
  };
})(jQuery);
