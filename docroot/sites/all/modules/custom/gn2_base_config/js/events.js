(function ($) {

Drupal.behaviors.events = {
    attach: function (context, settings) {
        $(window).load(function () {
            // User account events
          if ($('.view-users-contact-history-info .button-change-view').length > 0) {
              var closest = $('.view-users-contact-history-info .button-change-view').closest('.view-users-contact-history-info');
              var btn = $('.view-users-contact-history-info .button-change-view').parent().detach();
              $(btn).css('margin-top', '20px');
              $(closest).append(btn);
              $('.button-change-view').click(function (e) {
                e.preventDefault();
                if ($(this).attr('data-view') === "old") {
                    $('.page-account .user-account--events .view-display-id-panel_pane_5 > .view-content,\n\
                          .page-account .user-account--events .view-display-id-panel_pane_5 > .view-empty p:first-child').hide();
                    $('.page-account .user-account--events .view-footer .view-display-id-panel_pane_6 .view-content,\n\
                          .page-account .user-account--events .view-footer .view-display-id-panel_pane_6 .view-empty').show();
                    $(this).html('View coming events &raquo;');
                    $(this).attr('data-view', 'new');
                } else {
                  $('.page-account .user-account--events .view-display-id-panel_pane_5 > .view-content,\n\
                        .page-account .user-account--events .view-display-id-panel_pane_5 > .view-empty p:first-child').show();
                  $('.page-account .user-account--events .view-footer .view-display-id-panel_pane_6 .view-content,\n\
                        .page-account .user-account--events .view-footer .view-display-id-panel_pane_6 .view-empty').hide();
                  $(this).html('View past events &raquo;');
                  $(this).attr('data-view', 'old');
                }
              });
          }
            
            // Organization Upcoming Events
            $('body.page-node-upcoming-events').addClass('view-list-events');
            $('body.page-node-upcoming-events h1#page-title').after('<div class="view-header"><div class="switch-event-view"><a data-view="calendar" href="#">Switch to calendar view</a></div>    </div>');
            $('.page-node-upcoming-events .switch-event-view > a').click(function(e){
                e.preventDefault();
                if($(this).attr('data-view') === 'calendar'){
                    $(this).text('Switch to list view');
                    $(this).attr('data-view', 'list');
                    
                    $('body').addClass('view-calendar-events');
                    $('body').removeClass('view-list-events');
                }else{
                    $('body').addClass('view-list-events');
                    $('body').removeClass('view-calendar-events');
                    
                    $(this).text('Switch to calendar view');
                    $(this).attr('data-view', 'calendar');
                }
            });
            
            // Updates the format date for calendar (header)
            setInterval(function(){
                $('body.page-node-upcoming-events .view-footer > .view-display-id-block_events_calendar .date-heading h3:not(.processed)').addClass('processed').each(function(i, e){
                    var text = $(this).text().split(', ');
                    var m = text[1].split(' ');
                    m = m[0];
                    var y = text[2];

                    $(this).text(m + ' ' + y);
                });
            }, 50);
            
            // Hiding Contacts block in Events page
            if ($('.event-node-page .pane-events-panel-pane-4.event-contacts-list--contacts-list .views-row-1 *').length > 0 ||
                $('.event-node-page .pane-events-panel-pane-5.event-contacts-list--addl-info .views-row-1 *').length > 0 ||
                $('.event-node-page .pane-events-panel-pane-5.event-contacts-list--addl-info .views-row-1').text().trim() != '') {
              $(".pane-event-contacts-block.block-event-registration").show();
              var text = $('.event-contacts-block .event-contacts-list--addl-info .view-display-id-panel_pane_5 .views-row').text().trim();
              $('.event-contacts-block .event-contacts-list--addl-info .view-display-id-panel_pane_5 .views-row').text(text);
            }
            
            // Upcoming Events block - toggles between all end open events.
            $('.event-toggler > a').once().each(function () {
              $(this).click(function(e) {
                e.preventDefault();
                if (!$(this).hasClass('active')) {
                  $('.toggler-open').toggleClass('active');
                  $('.toggler-all').toggleClass('active');
                  $('.custom-upcoming-events-block .view-content').toggleClass('open');
                  $('.view-display-id-upcoming_events_page .view-content').toggleClass('open')
                  $('.view-display-id-upcoming_events_page .feed-icon').toggleClass('all');
                }
              });
            });
        });
    }
};
  $(document).ready(function () {

  });
})(jQuery);