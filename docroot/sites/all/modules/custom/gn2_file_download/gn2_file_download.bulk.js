(function ($) {
  Drupal.behaviors.Gn2BulkDownload = {
    attach: function (context, settings) {
      var files = [];
      $('#bulk-form-submit').click(function() {
        // Hide the error message.
        $('.messages--error').text('').hide();
        // Look for files to download.
        $('.file-download').each(function(index, value) {
          if ($(this).is(':checked')) {
            files.push($(this).val());
          }
        });

        // If no files have been checked, tell the user.
        if (files.length === 0) {
          $('.view-resource-folders div.view-footer').prepend('<div class="messages--error">No files were selected.</div>');
        }
        else {
          // Redirect ot the zip function.
          window.location.href = '/download-grid-files/' + files.join('-');
        }
      });

      // Select/unselect all files.
      $('#bulk-select-all').bind('click', function() {
        if ($(this).is(':checked')) {
          $('input.file-download').prop('checked', true);
        }
        else {
          $('input.file-download').prop('checked', false);
        }
      });
    }
  }
})(jQuery);