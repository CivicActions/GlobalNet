(function ($) {

  Drupal.behaviors.guide_search = {
    attach: function (context, settings) {
      $(window).load(function () {
          $('#edit-keyword').keypress(function(e){
              if (e.charCode == 13) {
                  e.preventDefault();
                  search_keyword();
                  return false;
              }
              return;
          });
          $('.search-button').click(function(){
              search_keyword();
          });
    });
      
    function search_keyword(){
        var val = $('#edit-keyword').val();
        if (val != '') {
            $('.main .main-top .pane-views-panes').hide();
            $('#pane-search-results-container').show();
            $('#pane-search-results-container .results-container').html('<div class="search-progress"></div>');
            $.ajax({
                type: "POST",
                url: '/guide-search-keyword/' + val ,
                success: function (data) {
                    $('#pane-search-results-container .results-container').html(data.res);  
                }
            });
        }
      }
      // Add classes to View and Edit Links for Guide content.
      if ($('.guide-action-link').length) {
        $('.guide-action-link').each(function() {
          $('a', this).addClass('tabs-primary__tab tabs-primary__tab-link');
        });
      }
    }
  };
  $(document).ready(function () {

  });
})(jQuery);