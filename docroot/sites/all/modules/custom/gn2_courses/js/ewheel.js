(function ($) {
  $(function() {
    $('#enddate').datepicker({
      beforeShowDay: function(date) {
        return [date.getDay() == 5];
      },

      //changeMonth: true,
      //changeYear: true,
      showOn: 'button',
      buttonImage: '/sites/all/modules/custom/gn2_courses/img/calendar.gif',
      buttonImageOnly: true,
      onClose: function () {
        // alert('wow');
        getStartDate();

      }
    });
  });

  $('#endDateBtn').click(function() {
    $('#datepicker').datepicker('show');
  });
})(jQuery);