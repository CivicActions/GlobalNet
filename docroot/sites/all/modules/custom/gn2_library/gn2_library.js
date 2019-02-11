(function($) {
  Drupal.behaviors.gn2Library = {
    attach: function(context, settings) {
      // Bind reset click event to prevent the form from submitting and reloading the page.
      $('.views-reset-button').on('click', '#edit-reset', function (e) {
        // Clear all form elements.
        e.preventDefault();
        $('form#views-exposed-form-search-resources-panel-pane-1 :input').each(function () {
          if ($(this).val() !== 'Go' && $(this).val() !== 'Reset') {
            $(this).val([]);
          }
          // Reload the form with the empty filters.
          window.setTimeout(function () {
            $('#edit-submit-search-resources').trigger('click');
          }, 300);
        })
      });
    }
  }
})(jQuery);