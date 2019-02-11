(function ($) {
  $(document).ready(function() {
    function getParameterByName(name, url) {
       if (!url) {
         url = window.location.href;
       }
       name = name.replace(/[\[\]]/g, "\\$&");
       var regex = new RegExp("[?&]" + name + "(=([^&#]*)|&|#|$)"),
           results = regex.exec(url);
       if (!results) {
         return null;
       }
       if (!results[2]) {
         return '';
       }
       return decodeURIComponent(results[2].replace(/\+/g, " "));
    }

    var cid = getParameterByName('course_id');
    
    var base_href_edit = $('.tabs-primary__tab a[href*=edit]').attr('href');
    $('a[href*=edit]').attr('href', base_href_edit + '?course_id=' + cid);
    
    var base_href_delete = $('.tabs-primary__tab a[href*=delete]').attr('href');
    $('a[href*=delete]').attr('href', base_href_delete + '?destination=node/' + cid);
  });
  
}(jQuery));
