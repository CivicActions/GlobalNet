(function ($) {
  Drupal.behaviors.gn2_media_gallery = {
    attach: function (context, settings) {
      $('#media-gallery-node-form #edit-settings-wrapper').addClass('collapsible collapsed hide');
      $('a.media-gallery-add:not(.processed-changed-text)').addClass('processed-changed-text').each(function(i, e){
        $(this).text('Add Files');
      });
    }
  };
})(jQuery);