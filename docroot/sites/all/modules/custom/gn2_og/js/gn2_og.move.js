(function ($){
  Drupal.behaviors.move = {
    attach: function (context, settings) {
      $(document).ready(function () {
        // Add class members to all but Select all
        $('#gn2-og-move-users-form .form-type-checkbox:not(:first-child)').addClass('members');
        // Select all functionality
        $('#edit-members-all').bind('click', function () {
          if ($(this).is(':checked')) {
            $('#gn2-og-move-users-form .form-checkbox').prop('checked', true);
          }
          else {
            $('#gn2-og-move-users-form .form-checkbox').prop('checked', false);
          }
        });
        // Bind all but Select all
        $('.members input.form-checkbox').bind('click', function () {
          if ($('#edit-members-all').prop('checked')) {
            $('#edit-members-all').prop('checked', false);
          }
        });
      });
    }
  };
}(jQuery));