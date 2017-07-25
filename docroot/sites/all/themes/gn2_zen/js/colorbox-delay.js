/*
 *  Resize Colorbox Wrapper
 *  This fixes the colorbox bug where images in the popup are displayed with no
 *  dimensions. Code adapted from this similar issue:
 *  https://www.drupal.org/node/1361920
 */

//(function ($){
//  Drupal.behaviors.resizeColorboxImage = {
//    attach: function(context, settings) {
//      $("a.media-gallery-thumb").colorbox({
//        onComplete:function() {
//        var x = $('div.lightbox-stack div.media-gallery-item div.gallery-thumb-outer div.gallery-thumb-inner a img').width();
//        var y = $('div.lightbox-stack div.media-gallery-item div.gallery-thumb-outer div.gallery-thumb-inner a img').height();
//        $(this).colorbox.resize({width:x, height:y});
//        },
//      });
//    }
//  };
//})(jQuery);
