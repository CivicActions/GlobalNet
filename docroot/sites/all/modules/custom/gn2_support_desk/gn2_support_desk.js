(function ($, Drupal, window, document, undefined) {

  Drupal.behaviors.gn2_support_desk = {
    attach: function (context, settings) {
      if (Drupal.settings.ogContext) {
        var link = $('a#help-desk-support').attr('href');
        $('a#help-desk-support').attr('href', link + '?gid=' + Drupal.settings.ogContext.gid);
      }
      
      // Disallow accidental double-click creating duplicate support tickets
      $('.node-support-form').on('submit',function(e){
        var $form = $(this);

        if ($form.data('submitted') === true) {
          // Previously submitted - don't submit again
          e.preventDefault();
        } else {
          // Mark it so that the next submit can be ignored
          $form.data('submitted', true);
        }
      });
      
    }
  };

})(jQuery, Drupal, this, this.document);
