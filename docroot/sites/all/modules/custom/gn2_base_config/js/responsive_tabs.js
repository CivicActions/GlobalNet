/**
 * @file 
 * Dynamically modifying classes to support tabs that wrap to a second line.
 *
 * This bit of code supports the task contained in RD-2264.
 */

(function ($) {
  
  $(document).ready(function(){
    add_tabs_class();
    responsive_tabs();
  });
  
  $(window).resize(function(){
    add_tabs_class();
    responsive_tabs();
  });
  
  function add_tabs_class(){
    $( "ul.horizontal-tabs-list" ).addClass( "ui-tabs-nav" );
  }

  function responsive_tabs(){
    var checkMyHeight = 'ul.ui-tabs-nav';
    var addWrapClasses = [checkMyHeight, "ul.ui-tabs-nav li"];
    var threshold = 50;
    var wrapClass = 'wrap';
    var noWrapClass = 'nowrap';
    if($(checkMyHeight).length) {
      currentHeight = $(checkMyHeight).outerHeight();
      var i = 0;
      while (addWrapClasses[i]) {    
        if (currentHeight >= threshold) {
          $( addWrapClasses[i] ).removeClass( noWrapClass ).addClass( wrapClass );
        }
        if (currentHeight < threshold) {
          $( addWrapClasses[i] ).removeClass( wrapClass ).addClass( noWrapClass );
        }
        i++;
      }
    }
  }

})(jQuery);
