(function($) {
  
  "use strict";
  
  /**
   * Adds event handlers to the download links for course folders.
   */
  Drupal.behaviors.gn2_metrics_analytics_handlers = {
    attach: function(context, settings) {
      $('a.gallery-download', context).once('gallery-download-tracking').click(function() {
        if (typeof ga != 'undefined') {
          var path = window.location.href.split('/');
          var file_id = path.pop();
          var folder_id = path.pop();
          ga('send', 'event', 'gallery-' + folder_id, 'download-file', file_id);        
        }
      });
      // Push session file download info.
      $('body').on('click', '.file-download-submit', function() {
        var session_title = $(this).parentsUntil('.field-group-fieldset').find('.field-name-field-title').html().trim();
        $('input[type="checkbox"]:checked').each(function() {
          ga('create', 'UA-62879620-1', 'auto');
          ga('send', 'event', 'Session Download', 'file download', session_title, {
            'dimension14': $(this).next('label').text().trim()
          });
        });
      });
    }
  };

})(jQuery);