(function ($) {
  time = setInterval(function(){
    if ($('body.page-admin-tech-support-revision').length > 0) {
      if (location.search !== '') {
        $('body.page-admin-tech-support-revision .view-id-tech_support .view-header a').attr('href',
        location.pathname + '/export/csv' + location.search);
      }
    }

    if ($('#views-form-tech-support-page-1').length > 0) {
      $('#views-form-tech-support-page-1 #edit-tokens:not(.input-processed)').addClass('input-processed').hide();
      $('#views-form-tech-support-page-1 #edit-select #edit-operation option:last-child:not(.option-processed)').addClass('option-processed').attr('selected', 'true').text('Modify Status');
    }
  }, 1000);
})(jQuery);
