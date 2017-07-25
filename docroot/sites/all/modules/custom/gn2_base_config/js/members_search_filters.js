(function ($) {
  var obj = new Array();
  ftime = setInterval(function(){
    
    $('#facetapi-facet-search-apiuser-profile-block-og-user-nodefield-org-short-title li:not(.processed)').addClass('processed').each(function(i, e){

      $('#facetapi-facet-search-apiuser-profile-block-og-user-nodefield-org-short-title').hide();
      limit = $('#facetapi-facet-search-apiuser-profile-block-og-user-nodefield-org-short-title li').length;
      id = $('a', this).attr('id');

      if ($(this).find('a').hasClass('facetapi-active')) {
        text = $(this).text();
        tmp = text.split(' ');
        obj[i] = {'id': id, 'short': tmp[(tmp.length - 1)], 'active': true};
      }
      else {
        text = $('a', this).text();
        tmp = text.split(' ');
        obj[i] = {'id': id, 'short': tmp[0], 'count': tmp[1], 'active': false};
      }

      if ((i+1) === limit) {

        $.post( "/get-organization-name", {'data': obj}, function( data ) {

          for(i = 0; i < data.names.length; i++) {
            if (obj[i].active) {
              cln = $('#' + obj[i].id).clone();
              parent = $('#' + obj[i].id).parent();
              $(parent).html('');
              $(parent).append(cln);
              $(parent).append(data.names[i]);
            }
            else {
              $('#' + obj[i].id).text(data.names[i] + ' ' + obj[i].count);
            }
          }
          $('#facetapi-facet-search-apiuser-profile-block-og-user-nodefield-org-short-title').show();
        }, "json");
      }
      
    });
  }, 1000);
})(jQuery);