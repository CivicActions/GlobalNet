/**
 * @file
 * A JavaScript file for the theme.
 *
 * In order for this JavaScript to be loaded on pages, see the instructions in
 * the README.txt next to this file.
 */

// JavaScript should be made compatible with libraries other than jQuery by
// wrapping it with an "anonymous closure". See:
// - https://drupal.org/node/1446420
// - http://www.adequatelygood.com/2010/3/JavaScript-Module-Pattern-In-Depth
(function ($, Drupal, window, document, undefined) {
  
  $(document).ready(function() {
    // Hide empty rows in aggregated announcements view.
    $('.view-id-news_announcements_posts.view-display-id-panel_pane_10 .view-empty').parent().parent().parent().parent().parent('.gn2-3col.layout-wrapper').css({'display':'none'});

    if ($('body').hasClass('not-logged-in')) {
      $('.views-field-nothing .slideshow-attribution').each(function(){		
      	var replacement = $(this, 'a').text();	
      	$(this).html(replacement);
      });    
    }
    
    // RD-1383: adding anchor tags to links on guide page for mobile.
    $('.guide_page_link').each(function(index, value) {
      var link = $(this).attr('href');
      if (window.innerWidth < 768){
        $(this).attr('href', link + '#searchresults');
        console.log(link);
      }
    });

    // RD-3003; remove destination query string for edit user link.
    if ($('span.edit-profile a').length) {
      var editUrl = $('span.edit-profile a').attr('href');
      var newUrl = editUrl.split('?')[0];
      $('span.field-content.edit-profile a').attr('href', newUrl);
    }
    
    // RD-3268; View toggler for Groups and Courses.
    if ($('.toggler-container').length) {
      setInterval(function(){
        $('.toggler-container').once().each(function () {
          var tab_container = $(this).closest('.user__tab--groups');

          $('.list', this).click(function() {
            $(tab_container).removeClass('thumbnail-view').addClass('list-view');
          });
          $('.thumbnail', this).click(function() {
            $(tab_container).removeClass('list-view').addClass('thumbnail-view');
          });
        });
      }, 1000);
    }
    
    // RD-3440 messages UI update - New messages fix.
    // Relocate the Delete message link.
    $('td .new-message').once().each(function () {
      $(this).closest('tr').addClass('is-new-message');
    });
    $('#privatemsg-form-reply').once().each(function () {
      $('#edit-actions', this).append($('.message-delete-link', this).detach());
    });
    
    // Toggle private message height.
    function pmHeight() {
      var pmRecipientsHeight = $('.privatemsg-message-participants').height();
      if (pmRecipientsHeight > 22) {
	$('.privatemsg-message-participants').after('<div id="recip-height-toggle" style="cursor:pointer;">Show More +</div>').wrap('<div id="recip-height-wrap" class="shut" style="height:22px;display:block;overflow:hidden"></div>');
      }

      $('#recip-height-toggle').click(function() {
	if($('#recip-height-wrap').hasClass('shut')) {
	  $('#recip-height-wrap').animate({
	    'height':pmRecipientsHeight + 'px',
	  }).removeClass('shut');
	  $(this).text('Show Less -');
	  ('.view-id-news_announcements_posts.view-display-id-panel_pane_10 .view-empty').parent().parent().parent().parent().parent('.gn2-3col.layout-wrapper').css({'display':'none'})
	}
	else {
	  $('#recip-height-wrap').animate({
	    'height':'22px',
	  }).addClass('shut');
	  $(this).text('Show More +');
	}
      })
    }
    pmHeight();
    
  });

})(jQuery, Drupal, this, this.document);
