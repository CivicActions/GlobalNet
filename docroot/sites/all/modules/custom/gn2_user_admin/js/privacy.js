(function ($) {
  Drupal.behaviors.privacy = {
    attach: function (context, settings) {
      if ($('body').hasClass('page-user-edit')) {
        // Move the privacy fieldset below notifications - necessary,
        // as adding to form array causes user form to fail.
        $('.group-privacy-settings').insertAfter('.group-notifications');
      }
    }
  };
})(jQuery);
