(function($) {
  Drupal.behaviors.adminDashboard = {
    attach: function (context, settings) {
      $('body.page-node a.help-link').bind('click', function(e) {
        e.preventDefault ? e.preventDefault() : (e.returnValue = false);
        var tid = $(this).attr('rel');
        if ($.isNumeric(tid)) {
          $.get('/dashboard/ajax/' + tid, function(data) {
            $('#help-description').html(data);
          });
        }
      });
      
      $(document).ready(function() {
        $('.page-admin-manage-users-add-user .horizontal-tabs-panes fieldset.group-settings').removeClass('collapsed');
      });
    }
  };
})(jQuery);