(function ($) {

  "use strict";

  Drupal.behaviors.media_icon = {
    attach: function(context, settings) {
      setInterval(function() {
        $('.logged-in.page-node .field-widget-media-generic .fieldset-wrapper > table:not(.sticky-header) > tbody > tr:not(.processed)').addClass('processed').each(function() {

          var preview = $('td', this).first().find('.preview .media-item .media-thumbnail');
          var label = $('label', preview).text();

          // NOTEBOOK extension
          if (label.toLowerCase().indexOf(".notebook") >= 0) {
            $('img', preview).remove();

            var html = '<span class="file"><img class="file-icon" alt="" title="application/octet-stream" ' +
              'src="/sites/all/themes/gn2_zen/images/gn2_file_icons/application-octet-stream.svg"> ' +
              '<a href="#" type="application/octet-stream;">' + label + '</a></span>';

            $(preview).prepend(html);
          }
        });
      }, 1000);

    }
  };

})(jQuery);