/**
 * @file 
 * Functionality for links in footer community dropdown.
 *
 * This bit of code supports the task contained in RD-2026.
 */

(function ($) {

  $(document).ready(function(){
    $("nav.footer-communities-dropdown select").change(function() {
      window.location = $(this).find("option:selected").val();
    });
  });

})(jQuery);
