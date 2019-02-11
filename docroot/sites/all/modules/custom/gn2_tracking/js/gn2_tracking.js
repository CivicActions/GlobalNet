(function ($) {
  Drupal.behaviors.gn2Track = {
    attach: function (context, settings) {
      // Viewing Session.
      $('#content').on('mouseup', 'fieldset legend a', function () {
        var sid = $(this).parents('fieldset').data('id'),
            item = $(this).text().replace('Show ', '').trim();
        // Only track opening fieldsets.
        if ($(this).parents('fieldset').hasClass('collapsed')) {
          $(this).recordInteraction(sid, 'Viewed session', item);
        }
      });

      // Viewing/downloading individual files.
      $('#content').on('click', '.single-download', function () {
        var sid = $(this).data('fid'),
            item = $(this).parents('div.gn2_file_download_link-wrap').find('label').text();
        $(this).recordInteraction(sid, 'Viewed file', item);
      });

      // Downloading multiple files.
      $('body').on('click', '.file-download-submit', function() {
        var session_title = $(this).parentsUntil('.field-group-fieldset').find('.field-name-field-title').html().trim();
        $('input[type="checkbox"]:checked').each(function() {
          var sid = $(this).data('fid'),
            item = $(this).next('label').text();
          $(this).recordInteraction(sid, 'Viewed file', item);
        });
      });

      // Folder files.
      // Grid bulk download.
      $('#bulk-form-submit').on('click', function() {
        $('.file-download:checked').each(function (index, value) {
          var sid = $(this).val(),
             item = $(this).parent().text().split('File: ').pop();
          $(this).recordInteraction(sid, 'Downloaded file', item);
        });
      });

      // List bulk download.
      $('#bulk-list-form-submit').on('click', function() {
        $('#gn2-file-download-media-form input.form-checkbox:checked').each(function (index, value) {
          var sid = $(this).attr('name'),
            item = $(this).next('label').text();
          $(this).recordInteraction(sid, 'Downloaded file', item);
        });
      });

      // View/Download individual file.
      $('#gn2-file-download-media-form label a').on('click', function () {
        var sid = $(this).data('fid'),
           item = $(this).text();
        $(this).recordInteraction(sid, 'Downloaded file', item);
      });

      // Colorbox download link.
      $('.gallery-download').on('click', function () {
        var file = $(this).attr('href').split('?'),
            sid = file[1].split('=').pop(),
           path = file[0].split('/'),
           item = path[4];
        $(this).recordInteraction(sid, 'Downloaded file', item);
      });
    }
  };

  // Record the interaction in the database.
  $.fn.recordInteraction = function(sid, action, item) {
    if ('gn2Track' in Drupal.settings) {
      var uid = Drupal.settings.gn2Track.uid,
          nid = Drupal.settings.gn2Track.nid;
      $.ajax({
        type: 'GET',
        url: '/gn2track/insert',
        async: true,
        data: {'uid': uid, 'nid': nid, 'sid': sid, 'action': encodeURIComponent(action), 'item': encodeURIComponent(item)}
      });
    }
  };
})(jQuery);