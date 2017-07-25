(function($, Drupal, window, document, undefined) {

  $(document).ready(function() {
    // Sort topic list alpha on media multi form.
    var sortList = $('.field-name-field-topic.field-widget-term-reference-tree ul');
    $.each(sortList, function() {
      var sortItems = $(this).children('li').get();
      sortItems.sort(function(a, b) {
        var compA = $(a).children().children($('label')).text().toUpperCase();
        var compB = $(b).children().children($('label')).text().toUpperCase();
        return (compA < compB) ? -1 : (compA > compB) ? 1 : 0;
      });
      $.each(sortItems, function(idx, itm) {
        $(this).parents('.field-name-field-topic.field-widget-term-reference-tree ul').append(itm);
      });
    })

    });
    
})(jQuery, Drupal, this, this.document);

(function ($) {
Drupal.behaviors.fileDownload = {
  attach: function (context, settings) {
    // For file download check all button.
    $('#custom-select-all').click(function() {
      $('form.file-download .form-checkbox').each(function() {
        if ($('#custom-select-all').is(':checked')) {
          $(this).prop('checked', true);
        }
        else {
          $(this).prop('checked', false);
        }
      });
    });
    
    if ($('span.node-nid').length > 0) {
      $('a.sort').once().each(function() {
        $(this).click(function(e) {
          var that = this;
          e.preventDefault();
          var nid = $('span.node-nid').data('nid');
          var field = $(this).data('field');
          var order = $(this).data('sort');
          
          $.get( "/sort-files-list-form/" + nid + "/" + field + "/" + order, function( data ) {
            $('#gn2-file-download-media-form').replaceWith(data.form);
            Drupal.attachBehaviors(context, settings);
            $('span.node-nid').data('field', data.params.field);
            $('a.sort[data-field="' + field + '"]').attr('data-sort', data.params.order);
          });
        });
      });
    }
  }
};
})(jQuery);
