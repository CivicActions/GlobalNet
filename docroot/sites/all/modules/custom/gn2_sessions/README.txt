GN2 SESSIONS
----------------

CONTENTS OF THIS FILE
---------------------

 * About
 * Logic
 * Config Notes (not all inclusive, just important for Global undertanding)


ABOUT
------------

This module is used to build user created sessions that may be attached to user created courses.


LOGIC
--------

Sessions logic is defind in this module, as well as in sites/all/themes/gn2_zen/template.php, sites/all/themes/gn2_zen/templates/views-view-unformatted--sessions-created.tpl.php, and an entityreference patch (https://www.drupal.org/files/issues/2497435-pass-og-pid-as-arg-to-view-2.patch) that was created to allow for og and nid id's to the sessions view for filtering.

Looking at the core logic defined wthin gn2_sessions.module:
 * gn2_sessions_form_course_node_form_alter looks on the course form to see if sessions are enabled for current course. If they are, it turns on the session creation form.
 * gn2_sessions_form_session_entityform_cancel is used to send the user back to the course node when they cancel a session creation.
 * gn2_sessions_form_session_entityform_edit_form_alter does the following:
 - Sends our user to a validation function
 - Creates an association between the session and the course
 - Creates an association between Week, Day and Unit sessions (Units are subordinate to a specific Day, Days are subordinate to a specific Week, and Weeks are subordinate to a specific Course.) Associatons have to be made such that they extend from a specific course node potentially three levels down to a Unit, so that filtering and viewing will work correctly.
* gn2_sessions_form_submit sends ours users to a query param defined view, that filters by applicable days / units
* gn2_sessions_entity_presave alters sessions on save, to make up and down associations between Courses->Weeks->Days->Units.
* gn2_sessions_entity_view_alter is used primarily for attaching a file list to a session view, and altering date view output.
* gn2_sessions_entityform_access_alter ensures only users with appropriate perms can access a session for editing.
* gn2_sessions_file_form builds our session files form attachment.
* gn2_sessions_file_submit handles session form file creation saving logic.
* gn2_sessions_menu_local_tasks_alter removes unwanted tabs from the entityform edit page.

Looking at the js logic defined wthin gn2_sessions.js:
* The first code block: Drupal.settings is being used to extract user role / perm, to determine whether or not we show the session edit icon to users. This is a round about way of doing things, but we already are denying access to edit page for users who don't have applicable rights, however, the edit icon still appears.
* The second code block: We are altering session titles on the fly
* The third code block: we are ensuring the date picker end date does not appear (no longer required).

Looking at the js logic defined wthin template.php:
* gn2_zen_preprocess_field
- 'field_session_presenter' is being built from a user id delivered by a view to create a Human friendly presentation (image, bio, etc.).
- 'field_type' is being stripped to prevent unintentional markup from appearing
- 'field_course_schedule' & 'field_course_syllabus' is being modified to display multiple files in session view.
* gn2_zen_preprocess_views_view is addig a 'not-group-admin' class to sessions_created view for non og managers.

Looking at the js logic defined wthin views-view-unformatted--sessions-created.tpl.php:
* Two displays are being altered
- 'panel_pane_1' is the Week view
- 'panel_pane_2' is the Day view (also shows subordinate Units)
* Week view is being altered to wrap a fieldset around a week and subordinate days, format date and title appearances, display descriptions, and indicate when session is for current day.
* Day view is being altered to display descriptions.


CONFIG NOTES
--------------

* After this module is enabled, a minipanel is created = session_entityform_results
- Said minipanel contains course schedules and syllabi, Entityform type "Sessions" ui Sessions created view panel_pane_1 and panel_pane_2, and Media files for downloading.
- Minpanel has context being set programmtically via gn2_heartbreak feature. Setting id number does not work, as this number increments - variable must be used in feature, instead.
* Sessions entityform is used for session creatin, and is what appears on course for user to create session.
* User must toggle on sessions in Course node edit form for Sessions form to appear.
* Sessions rely primarily on two views:
- Session Presenter: used by Session presenter field to display Course members in an autocomplete field.
- Sessions Created: outputs the Week display and the Day display.
