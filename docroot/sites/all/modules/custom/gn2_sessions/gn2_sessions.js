(function($, Drupal, window, document, undefined) {

  $(window).change(function() {
    // Append week title to fieldset legend.
    $('.view-sessions-created.view-display-id-panel_pane_1 .view-content fieldset').each(function() {
      var title_type = $('.field-name-field-type', this).first().text();
      var title_text = $('.field-name-field-title', this).first().text();
      var title = title_type + title_text;

      $('.week-info', this).text(title);

    });
  })

  $(document).ready(function() {
    // Append week title to fieldset legend.
    $('.view-sessions-created.view-display-id-panel_pane_1 .view-content fieldset').each(function() {
      var title_type = $('.field-name-field-type', this).first().text();
      var title_text = $('.field-name-field-title', this).first().text();
      var title = title_type + title_text;

      $('.week-info', this).text(title);

    });
    var course_nid = Drupal.settings.course_nid;
    var managers = Drupal.settings.managers;
    var user = Drupal.settings.current_user;
    var keys = Drupal.settings.gn2_session.form_id;
    var values = Drupal.settings.gn2_session.uid;
    var admin = Drupal.settings.gn_admin;
    associated = keys.reduce(function (previous, key, index) {
      previous[key] = values[index];
      return previous;
    }, {});
    // Make the course session title link to the edit page.
    // RD-2562: Added session-specific class for greater specificity.
    $('.pane-session-entityform-results .views-row h2 a').each(function() {
      var id = $(this).attr('href').split('/')[2];
      if (associated[id] !== user && managers.indexOf(user) < 0 && admin !== true) {
        $(this).parent('h2').hide();
      }
      else {
        $(this).addClass('edit-session');
        $(this).attr('href',function(i, str) {
          return str + '/edit?course_id=' + course_nid;
        });
      }
    });

    // Covers this edge case: RD:2606.
    var items = $($('.view-sessions-created.view-display-id-panel_pane_1 .view-content .collapsible').toArray().sort(function(a, b) {
      var aVal = parseInt(a.getAttribute('data-order')),
        bVal = parseInt(b.getAttribute('data-order'));
      return aVal - bVal;
    }));
    $('.view-sessions-created.view-display-id-panel_pane_1 .view-content').append(items);

  });

  $(document).change(function() {
    // Remove the end date if date view.
    if ($('select#edit-field-type-und').val() === 'Day') {
      $('.end-date-wrapper').css({
        'display': 'none'
      });
      $('.end-date-wrapper input').prop('disabled', 'disabled');
    } else {
      $('.end-date-wrapper').css({
        'display': 'inline-block'
      });
    }
  });

})(jQuery, Drupal, this, this.document);
