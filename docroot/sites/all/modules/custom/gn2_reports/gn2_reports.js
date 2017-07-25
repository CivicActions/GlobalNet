(function ($, Drupal, window, document, undefined) {

  $(document).ready(function () {

    // Load the Visualization API and the corechart package.
    google.charts.load('current', {'packages': ['bar']});

    // Set a callback to run when the Google Visualization API is loaded.
    google.charts.setOnLoadCallback(drawChart);

    // Callback that creates and populates a data table,
    // instantiates the chart, passes in the data and
    // draws it.
    function drawChart() {
      // Create the data table.
      var data = new google.visualization.arrayToDataTable([
        ['Period', 'Current', 'Previous'],
        ['Week', Number(Drupal.settings.gn2_reports.week), Number(Drupal.settings.gn2_reports.last_week)],
        ['Month', Number(Drupal.settings.gn2_reports.month), Number(Drupal.settings.gn2_reports.last_month)],
        ['Quarter', Number(Drupal.settings.gn2_reports.quarter), Number(Drupal.settings.gn2_reports.last_quarter)],
        ['Year', Number(Drupal.settings.gn2_reports.year), Number(Drupal.settings.gn2_reports.last_year)]
      ]);

      var options = {
        chart: {
          subtitle: 'Total userpoints divided by total number of members'
        },

      }
      // Instantiate and draw our chart, passing in some options.
      var chart = new google.charts.Bar(document.getElementById('chart_div'));
      chart.draw(data, options);
    }
  });
})(jQuery, Drupal, this, this.document);
