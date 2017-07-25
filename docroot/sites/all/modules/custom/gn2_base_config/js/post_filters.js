(function ($) {
  Drupal.behaviors.tech_support = {
    attach: function (context, settings) {
      $(window).load(function () {

        setInterval(function(){
          $('.view-display-id-panel_pane_23 .teaser_header_link:not(.processed_link)').addClass('processed_link').click(function(e){
            e.preventDefault();
            $('.view-display-id-panel_pane_23 .teaser-header-links').prepend('<div class="ajax-progress ajax-progress-throbber"><div class="throbber">&nbsp;</div></div>');

            $('#views-exposed-form-news-announcements-posts-panel-pane-23 #edit-sort-by').find('option:selected').removeAttr('selected');

            $('#views-exposed-form-news-announcements-posts-panel-pane-23 #edit-sort-order').find('option:selected').removeAttr('selected');
            $('#views-exposed-form-news-announcements-posts-panel-pane-23 #edit-sort-order').find('option[value="DESC"]').attr('selected', 'selected');

            var val = 'created';
            if ($(this).hasClass('teaser_header_link--sort-person')) {
              val = 'name';
              $('#views-exposed-form-news-announcements-posts-panel-pane-23 #edit-sort-order').find('option:selected').removeAttr('selected');
              $('#views-exposed-form-news-announcements-posts-panel-pane-23 #edit-sort-by').find('option[value="ASC"]').attr('selected', 'selected');
            }
            else if ($(this).hasClass('teaser_header_link--sort-comments')) {
              val = 'comment_count';
            }

            $('#views-exposed-form-news-announcements-posts-panel-pane-23 #edit-sort-by').find('option[value="' + val + '"]').attr('selected', 'selected');
            $('#edit-submit-news-announcements-posts').click();
          });
        }, 1000);

      });
    }
  };
})(jQuery);