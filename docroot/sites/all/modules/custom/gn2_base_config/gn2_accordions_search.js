(function ($) {

  function search_accordions() {    
    
    // Remove colon from the h2 element.
    $('.pane-facetapi h2.pane-title').each(function(){
      var text = $(this).text();
      var lastChar = text[text.length-1];
      if(lastChar == ':') {
        var newtext = text.slice(0,-1);
        $(this).text(newtext);
      }
    });

    // Hide the faceted search item list.
    $('.pane-facetapi .item-list').each(function(){
      $(this).hide();
    });
    
    $(".pane-facetapi .pane-title").click(function() {
      // Toggle our item list when the h2 element is clicked.
      $(this).parent().find(".item-list").toggle();
      $(this).toggleClass('clicked');
      $(this).parent().find(".item-list").toggleClass('horizontal-tab-hidden');
    });    
  }

  // Fire our function.
  search_accordions();
  
  $(window).on('load', function() {
    // If browser is manually resized, fire function when width dictates necessary.
    search_accordions();  
  })
  
})(jQuery);
