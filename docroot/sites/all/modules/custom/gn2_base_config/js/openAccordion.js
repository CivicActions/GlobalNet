/**
 * @file 
 * Opens accordion section via 'opensection' variable
 *
 * This bit of code supports the task contained in RD-3158.
 */

(function ($) {
  $(document).ready(function(){
    $( '#notification-settings-fieldset--2' ).removeClass( 'collapsed' );
    $( '#notification-settings-fieldset--2' ).show();
  });

})(jQuery);
