(function ($, Drupal, window, document, undefined) {

  Drupal.behaviors.gn2_support_desk_theming = {
    attach: function (context, settings) {
      $( '<label for="edit-created-min">Between</label>' ).insertBefore( "#edit-created-min" );
      $( '<label for="edit-changed-min">Between</label>' ).insertBefore( "#edit-changed-min" );
    }
  };

})(jQuery, Drupal, this, this.document);
