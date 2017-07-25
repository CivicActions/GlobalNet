/**
 * @file 
 * Suppresses display of tabs containing 'Tab [x]' as they are empty of content.
 *
 * This bit of code supports the task contained in RD-1282.
 */

(function ($) {

  $(document).ready(function(){
    hide_empty_tabs();
  });
  
  $(window).resize(function(){
    hide_empty_tabs();
  });
  
  function hide_empty_tabs(){
    for(var i = 0; i < 10; i++) {
      var whichTab = 'Tab ' + i; 
      $(".ui-tabs a:contains(" + whichTab + ")").css("display", "none");
      $(".ui-tabs legend:contains(" + whichTab + ")").css("display", "none");
      $(".ui-tabs a:contains(" + whichTab + ")").parent().css("display", "none");
      $(".ui-tabs legend:contains(" + whichTab + ")").parent().css("display", "none");
    }
  }

})(jQuery);
