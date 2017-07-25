(function($, Drupal, window, document, undefined) {
  
  $(document).ready(function() {
    $('.views-field-is-new .field-content').each(function() {
      if ($(this).text() == 'Yes') {
        $(this).parent().parent('.views-row').addClass('new-message');
      }
    })
    $('.update-status').click(function(e) {
      e.preventDefault();
      $('fieldset.group-notifications').removeClass('collapsed');
      $('fieldset.group-notifications .fieldset-wrapper').show(0);
      $(window).scrollTop($('.group-notifications').offset().top);
    });
  });
})(jQuery, Drupal, this, this.document);
