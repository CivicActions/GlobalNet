(function ($) {
  Drupal.behaviors.gn2BulkDelete = {
    attach: function (context, settings) {
      $('#gn2-bulk-delete-form .select-all').bind('click', function() {
        if ($(this).is(':checked')) {
          $('td div input.form-checkbox').prop('checked', true);
        }
        else {
          $('td div input.form-checkbox').prop('checked', false);
        }
      });
    }
  };
}(jQuery));