(function ($) {
  Drupal.behaviors.comments = {
    attach: function (context, settings) {
      $(window).load(function () {
       $('.comment-content').each(function(i, e){
         var that = this;
         $('a:not(.processed, .rate-button)', that).addClass('processed').each(function(){
           $(this).attr('target', '_blank');
         });
       });
      });
    }
  };
})(jQuery);