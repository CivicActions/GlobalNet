(function ($) {
  
  "use strict";
  
  Drupal.behaviors.gn2_polls_collapsible_results = {
    attach: function(context, settings) {
      
      $('.gn2-poll-results', context).once('collapsible', function() {
        
        $(this).find('.gn2-poll-results__title').click(function() {
          if ($(this).is('.animating')) {
            return false;
          }
          $(this).addClass('animating');
          if ($(this).is('.gn2-poll-results__title--toggled')) {
            $(this).removeClass('gn2-poll-results__title--toggled');
          }else {
            $(this).addClass('gn2-poll-results__title--toggled');
          }
          $(this).next().slideToggle('slow', function() { 
            $(this).prev().removeClass('animating');
          });
        });
      });
      
    }
  };
  
})(jQuery);