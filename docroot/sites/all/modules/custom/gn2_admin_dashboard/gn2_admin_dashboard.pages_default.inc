<?php
/**
 * @file
 * gn2_admin_dashboard.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function gn2_admin_dashboard_default_page_manager_pages() {
   /* admin_dashboard */ $page = new stdClass();
   /* admin_dashboard */ $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
   /* admin_dashboard */ $page->api_version = 1;
   /* admin_dashboard */ $page->name = 'admin_dashboard';
   /* admin_dashboard */ $page->task = 'page';
   /* admin_dashboard */ $page->admin_title = 'Admin Dashboard';
   /* admin_dashboard */ $page->admin_description = 'Administrative dashboard to display admin help and useful links to reports';
   /* admin_dashboard */ $page->path = 'users/dashboard/!term/!node';
   /* admin_dashboard */ $page->access = array(
   /* admin_dashboard */   'type' => 'none',
   /* admin_dashboard */   'settings' => NULL,
   /* admin_dashboard */   'plugins' => array(
   /* admin_dashboard */     0 => array(
   /* admin_dashboard */       'name' => 'role',
   /* admin_dashboard */       'settings' => array(
   /* admin_dashboard */         'rids' => array(
   /* admin_dashboard */           0 => 9,
   /* admin_dashboard */         ),
   /* admin_dashboard */       ),
   /* admin_dashboard */       'context' => 'logged-in-user',
   /* admin_dashboard */       'not' => FALSE,
   /* admin_dashboard */     ),
   /* admin_dashboard */   ),
   /* admin_dashboard */   'logic' => 'and',
   /* admin_dashboard */ );
   /* admin_dashboard */ $page->menu = array();
   /* admin_dashboard */ $page->arguments = array(
   /* admin_dashboard */   'term' => array(
   /* admin_dashboard */     'id' => 1,
   /* admin_dashboard */     'identifier' => 'Taxonomy term: ID',
   /* admin_dashboard */     'name' => 'term',
   /* admin_dashboard */     'settings' => array(
   /* admin_dashboard */       'input_form' => 'term',
   /* admin_dashboard */       'vids' => array(
   /* admin_dashboard */         4 => '4',
   /* admin_dashboard */         7 => 0,
   /* admin_dashboard */         1 => 0,
   /* admin_dashboard */         5 => 0,
   /* admin_dashboard */         2 => 0,
   /* admin_dashboard */         6 => 0,
   /* admin_dashboard */         3 => 0,
   /* admin_dashboard */         8 => 0,
   /* admin_dashboard */       ),
   /* admin_dashboard */       'breadcrumb' => 1,
   /* admin_dashboard */       'transform' => 1,
   /* admin_dashboard */     ),
   /* admin_dashboard */   ),
   /* admin_dashboard */   'node' => array(
   /* admin_dashboard */     'id' => 1,
   /* admin_dashboard */     'identifier' => 'Node: ID',
   /* admin_dashboard */     'name' => 'entity_id:node',
   /* admin_dashboard */     'settings' => array(),
   /* admin_dashboard */   ),
   /* admin_dashboard */ );
   /* admin_dashboard */ $page->conf = array(
   /* admin_dashboard */   'admin_paths' => FALSE,
   /* admin_dashboard */ );
  $page->default_handlers = array();
   /* page_admin_dashboard__panel */ $handler = new stdClass();
   /* page_admin_dashboard__panel */ $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
   /* page_admin_dashboard__panel */ $handler->api_version = 1;
   /* page_admin_dashboard__panel */ $handler->name = 'page_admin_dashboard__panel';
   /* page_admin_dashboard__panel */ $handler->task = 'page';
   /* page_admin_dashboard__panel */ $handler->subtask = 'admin_dashboard';
   /* page_admin_dashboard__panel */ $handler->handler = 'panel_context';
   /* page_admin_dashboard__panel */ $handler->weight = 0;
   /* page_admin_dashboard__panel */ $handler->conf = array(
   /* page_admin_dashboard__panel */   'title' => 'admin-dashboard',
   /* page_admin_dashboard__panel */   'no_blocks' => 0,
   /* page_admin_dashboard__panel */   'pipeline' => 'standard',
   /* page_admin_dashboard__panel */   'body_classes_to_remove' => '',
   /* page_admin_dashboard__panel */   'body_classes_to_add' => '',
   /* page_admin_dashboard__panel */   'css_id' => '',
   /* page_admin_dashboard__panel */   'css' => '',
   /* page_admin_dashboard__panel */   'contexts' => array(),
   /* page_admin_dashboard__panel */   'relationships' => array(),
   /* page_admin_dashboard__panel */   'name' => 'panel',
   /* page_admin_dashboard__panel */   'access' => array(
   /* page_admin_dashboard__panel */     'plugins' => array(),
   /* page_admin_dashboard__panel */     'logic' => 'and',
   /* page_admin_dashboard__panel */   ),
   /* page_admin_dashboard__panel */ );
   /* admin_dashboard d995a897 */ $display = new panels_display();
   /* admin_dashboard d995a897 */ $display->layout = 'gn2_2colstacked';
   /* admin_dashboard d995a897 */ $display->layout_settings = array();
   /* admin_dashboard d995a897 */ $display->panel_settings = array(
   /* admin_dashboard d995a897 */   'style_settings' => array(
   /* admin_dashboard d995a897 */     'default' => NULL,
   /* admin_dashboard d995a897 */     'homepage_layout__top__left' => NULL,
   /* admin_dashboard d995a897 */     'homepage_layout__top__right' => NULL,
   /* admin_dashboard d995a897 */     'homepage_layout__search' => NULL,
   /* admin_dashboard d995a897 */     'homepage_layout__main' => NULL,
   /* admin_dashboard d995a897 */     'top' => NULL,
   /* admin_dashboard d995a897 */     'sidebar' => NULL,
   /* admin_dashboard d995a897 */     'main_top' => NULL,
   /* admin_dashboard d995a897 */     'main_bottom' => NULL,
   /* admin_dashboard d995a897 */     'footer' => NULL,
   /* admin_dashboard d995a897 */   ),
   /* admin_dashboard d995a897 */ );
   /* admin_dashboard d995a897 */ $display->cache = array();
   /* admin_dashboard d995a897 */ $display->title = 'Admin Dashboard';
   /* admin_dashboard d995a897 */ $display->uuid = 'd995a897-cae4-4cce-bcf2-0331eedcd154';
   /* admin_dashboard d995a897 */ $display->storage_type = 'page_manager';
   /* admin_dashboard d995a897 */ $display->storage_id = 'page_admin_dashboard__panel';
  $display->content = array();
  $display->panels = array();
   /* admin_dashboard dfbdad0c */ $pane = new stdClass();
   /* admin_dashboard dfbdad0c */ $pane->pid = 'new-dfbdad0c-90d2-4964-8a0c-6f69b7a8a7e1';
   /* admin_dashboard dfbdad0c */ $pane->panel = 'main_top';
   /* admin_dashboard dfbdad0c */ $pane->type = 'views_panes';
   /* admin_dashboard dfbdad0c */ $pane->subtype = 'guide_content_for_admin-panel_pane_3';
   /* admin_dashboard dfbdad0c */ $pane->shown = TRUE;
   /* admin_dashboard dfbdad0c */ $pane->access = array(
   /* admin_dashboard dfbdad0c */   'plugins' => array(
   /* admin_dashboard dfbdad0c */     0 => array(
   /* admin_dashboard dfbdad0c */       'name' => 'context_exists',
   /* admin_dashboard dfbdad0c */       'settings' => array(
   /* admin_dashboard dfbdad0c */         'exists' => '0',
   /* admin_dashboard dfbdad0c */       ),
   /* admin_dashboard dfbdad0c */       'context' => 'argument_term_1',
   /* admin_dashboard dfbdad0c */       'not' => FALSE,
   /* admin_dashboard dfbdad0c */     ),
   /* admin_dashboard dfbdad0c */   ),
   /* admin_dashboard dfbdad0c */ );
   /* admin_dashboard dfbdad0c */ $pane->configuration = array();
   /* admin_dashboard dfbdad0c */ $pane->cache = array();
   /* admin_dashboard dfbdad0c */ $pane->style = array(
   /* admin_dashboard dfbdad0c */   'settings' => NULL,
   /* admin_dashboard dfbdad0c */ );
   /* admin_dashboard dfbdad0c */ $pane->css = array();
   /* admin_dashboard dfbdad0c */ $pane->extras = array();
   /* admin_dashboard dfbdad0c */ $pane->position = 0;
   /* admin_dashboard dfbdad0c */ $pane->locks = array();
   /* admin_dashboard dfbdad0c */ $pane->uuid = 'dfbdad0c-90d2-4964-8a0c-6f69b7a8a7e1';
  $display->content['new-dfbdad0c-90d2-4964-8a0c-6f69b7a8a7e1'] = $pane;
  $display->panels['main_top'][0] = 'new-dfbdad0c-90d2-4964-8a0c-6f69b7a8a7e1';
   /* admin_dashboard e8be214a */ $pane = new stdClass();
   /* admin_dashboard e8be214a */ $pane->pid = 'new-e8be214a-e10d-4871-92e3-0875e90f6ca9';
   /* admin_dashboard e8be214a */ $pane->panel = 'main_top';
   /* admin_dashboard e8be214a */ $pane->type = 'views_panes';
   /* admin_dashboard e8be214a */ $pane->subtype = 'guide_terms_for_admin-panel_pane_2';
   /* admin_dashboard e8be214a */ $pane->shown = TRUE;
   /* admin_dashboard e8be214a */ $pane->access = array();
   /* admin_dashboard e8be214a */ $pane->configuration = array();
   /* admin_dashboard e8be214a */ $pane->cache = array();
   /* admin_dashboard e8be214a */ $pane->style = array(
   /* admin_dashboard e8be214a */   'settings' => NULL,
   /* admin_dashboard e8be214a */ );
   /* admin_dashboard e8be214a */ $pane->css = array();
   /* admin_dashboard e8be214a */ $pane->extras = array();
   /* admin_dashboard e8be214a */ $pane->position = 1;
   /* admin_dashboard e8be214a */ $pane->locks = array();
   /* admin_dashboard e8be214a */ $pane->uuid = 'e8be214a-e10d-4871-92e3-0875e90f6ca9';
  $display->content['new-e8be214a-e10d-4871-92e3-0875e90f6ca9'] = $pane;
  $display->panels['main_top'][1] = 'new-e8be214a-e10d-4871-92e3-0875e90f6ca9';
   /* admin_dashboard 196a5ced */ $pane = new stdClass();
   /* admin_dashboard 196a5ced */ $pane->pid = 'new-196a5ced-dfe0-44c0-9c9d-1df037602b6f';
   /* admin_dashboard 196a5ced */ $pane->panel = 'main_top';
   /* admin_dashboard 196a5ced */ $pane->type = 'views_panes';
   /* admin_dashboard 196a5ced */ $pane->subtype = 'guide_content_for_admin-panel_pane_1';
   /* admin_dashboard 196a5ced */ $pane->shown = TRUE;
   /* admin_dashboard 196a5ced */ $pane->access = array();
   /* admin_dashboard 196a5ced */ $pane->configuration = array();
   /* admin_dashboard 196a5ced */ $pane->cache = array();
   /* admin_dashboard 196a5ced */ $pane->style = array(
   /* admin_dashboard 196a5ced */   'settings' => NULL,
   /* admin_dashboard 196a5ced */ );
   /* admin_dashboard 196a5ced */ $pane->css = array();
   /* admin_dashboard 196a5ced */ $pane->extras = array();
   /* admin_dashboard 196a5ced */ $pane->position = 2;
   /* admin_dashboard 196a5ced */ $pane->locks = array();
   /* admin_dashboard 196a5ced */ $pane->uuid = '196a5ced-dfe0-44c0-9c9d-1df037602b6f';
  $display->content['new-196a5ced-dfe0-44c0-9c9d-1df037602b6f'] = $pane;
  $display->panels['main_top'][2] = 'new-196a5ced-dfe0-44c0-9c9d-1df037602b6f';
   /* admin_dashboard 67ebfea7 */ $pane = new stdClass();
   /* admin_dashboard 67ebfea7 */ $pane->pid = 'new-67ebfea7-9ff7-41ba-9d4b-a2eca341a266';
   /* admin_dashboard 67ebfea7 */ $pane->panel = 'main_top';
   /* admin_dashboard 67ebfea7 */ $pane->type = 'views_panes';
   /* admin_dashboard 67ebfea7 */ $pane->subtype = 'guide_content_for_admin-panel_pane_2';
   /* admin_dashboard 67ebfea7 */ $pane->shown = TRUE;
   /* admin_dashboard 67ebfea7 */ $pane->access = array();
   /* admin_dashboard 67ebfea7 */ $pane->configuration = array();
   /* admin_dashboard 67ebfea7 */ $pane->cache = array();
   /* admin_dashboard 67ebfea7 */ $pane->style = array(
   /* admin_dashboard 67ebfea7 */   'settings' => NULL,
   /* admin_dashboard 67ebfea7 */ );
   /* admin_dashboard 67ebfea7 */ $pane->css = array();
   /* admin_dashboard 67ebfea7 */ $pane->extras = array();
   /* admin_dashboard 67ebfea7 */ $pane->position = 3;
   /* admin_dashboard 67ebfea7 */ $pane->locks = array();
   /* admin_dashboard 67ebfea7 */ $pane->uuid = '67ebfea7-9ff7-41ba-9d4b-a2eca341a266';
  $display->content['new-67ebfea7-9ff7-41ba-9d4b-a2eca341a266'] = $pane;
  $display->panels['main_top'][3] = 'new-67ebfea7-9ff7-41ba-9d4b-a2eca341a266';
   /* admin_dashboard 2e48e849 */ $pane = new stdClass();
   /* admin_dashboard 2e48e849 */ $pane->pid = 'new-2e48e849-bdbb-4c35-ad6f-be58ca29070e';
   /* admin_dashboard 2e48e849 */ $pane->panel = 'sidebar';
   /* admin_dashboard 2e48e849 */ $pane->type = 'views_panes';
   /* admin_dashboard 2e48e849 */ $pane->subtype = 'guide_terms_for_admin-panel_pane_1';
   /* admin_dashboard 2e48e849 */ $pane->shown = TRUE;
   /* admin_dashboard 2e48e849 */ $pane->access = array();
   /* admin_dashboard 2e48e849 */ $pane->configuration = array();
   /* admin_dashboard 2e48e849 */ $pane->cache = array();
   /* admin_dashboard 2e48e849 */ $pane->style = array(
   /* admin_dashboard 2e48e849 */   'settings' => NULL,
   /* admin_dashboard 2e48e849 */ );
   /* admin_dashboard 2e48e849 */ $pane->css = array(
   /* admin_dashboard 2e48e849 */   'css_id' => '',
   /* admin_dashboard 2e48e849 */   'css_class' => 'dashboard-help-topics',
   /* admin_dashboard 2e48e849 */ );
   /* admin_dashboard 2e48e849 */ $pane->extras = array();
   /* admin_dashboard 2e48e849 */ $pane->position = 0;
   /* admin_dashboard 2e48e849 */ $pane->locks = array();
   /* admin_dashboard 2e48e849 */ $pane->uuid = '2e48e849-bdbb-4c35-ad6f-be58ca29070e';
  $display->content['new-2e48e849-bdbb-4c35-ad6f-be58ca29070e'] = $pane;
  $display->panels['sidebar'][0] = 'new-2e48e849-bdbb-4c35-ad6f-be58ca29070e';
   /* admin_dashboard 72d4017a */ $pane = new stdClass();
   /* admin_dashboard 72d4017a */ $pane->pid = 'new-72d4017a-f2f4-4641-8ed9-01b9acce228e';
   /* admin_dashboard 72d4017a */ $pane->panel = 'top';
   /* admin_dashboard 72d4017a */ $pane->type = 'custom';
   /* admin_dashboard 72d4017a */ $pane->subtype = 'custom';
   /* admin_dashboard 72d4017a */ $pane->shown = TRUE;
   /* admin_dashboard 72d4017a */ $pane->access = array(
   /* admin_dashboard 72d4017a */   'plugins' => array(
   /* admin_dashboard 72d4017a */     0 => array(
   /* admin_dashboard 72d4017a */       'name' => 'php',
   /* admin_dashboard 72d4017a */       'settings' => array(
   /* admin_dashboard 72d4017a */         'description' => '',
   /* admin_dashboard 72d4017a */         'php' => 'global $user; if (in_array(\'administrator\', $user->roles) ||  gn2_manager_is_manager(array(\'org_manager\'))) { return TRUE; } return FALSE;',
   /* admin_dashboard 72d4017a */       ),
   /* admin_dashboard 72d4017a */       'not' => FALSE,
   /* admin_dashboard 72d4017a */     ),
   /* admin_dashboard 72d4017a */   ),
   /* admin_dashboard 72d4017a */ );
   /* admin_dashboard 72d4017a */ $pane->configuration = array(
   /* admin_dashboard 72d4017a */   'admin_title' => '',
   /* admin_dashboard 72d4017a */   'title' => 'Administrative Dashboard',
   /* admin_dashboard 72d4017a */   'body' => '<div class="fancy-bullets">
<br/>
<h3>Support Desk</h3>
<ul class="dashboard-link-list">
<li><a href="/admin/manage/support">Support Desk Tickets</a></li>
</ul><br/>
<h3>Users</h3>
<ul class="dashboard-link-list">
<li><a href="/admin/manage/users">Manage Users</a></li>
<li><a href="/admin/manage/users/add/user">Add New User</a></li>
<li><a href="/admin/config/remove-users">Delete Users</a></li>
<li><a href="/admin/people/uif?destination=users/dashboard">Bulk Import Users</a></li>
</ul><br/>
<h3>Content</h3>
<ul class="dashboard-link-list">
<li><a href="/admin/manage/content">Manage Content</a></li>
<li><a href="/admin/manage/reports/organization-hierarchy">Organizational hierarchy report</a></li>
<li><a href="/dashboard/unsubscribe-groups">Edit and Unsubscribe from Groups</a></li>
<li><a href="/admin/manage/forms">View form submissions</a></li>
<li><a href="/admin/reports/entity-delete-log">View Deleted Content Log</a></li>
<li><a href="/admin/reports/orphaned-content">View Orphaned Content</a></li>
<li><a href="/admin/config/people/anonymous_publishing_pet/realnames">View Anonymous Publishing Content</a></li>
<li><a href="/admin/reports/role_watchdog">View Role Grants Report</a></li>
</ul><br/>
<h3>Metrics</h3>
<ul class="dashboard-link-list">
<li><a href="/admin/reports/google-analytics-reports/summary">Google Analytics Summary</a></li>
<li><a href="/admin/reports/activity/site-activity-email">Site activity report</a></li>
<li><a href="/admin/reports/activity/site-activity-range">Site activity range report</a></li>
<li><a href="/admin/reports/activity/engagement">Site user engagement chart</a></li>
<li><a href="/admin/reports/permission_watchdog">View permissions watchdog report</a></li>
<li><a href="/admin/reports/role_grants">View role grants report</a></li>
<li><a href="/users/dashboard/metrics">View pages metrics</a></li>
<li><a href="/users/dashboard/metrics/files">View files metrics</a></li>
</ul></div>',
   /* admin_dashboard 72d4017a */   'format' => 'full_html',
   /* admin_dashboard 72d4017a */   'substitute' => 1,
   /* admin_dashboard 72d4017a */ );
   /* admin_dashboard 72d4017a */ $pane->cache = array();
   /* admin_dashboard 72d4017a */ $pane->style = array(
   /* admin_dashboard 72d4017a */   'settings' => NULL,
   /* admin_dashboard 72d4017a */ );
   /* admin_dashboard 72d4017a */ $pane->css = array(
   /* admin_dashboard 72d4017a */   'css_id' => '',
   /* admin_dashboard 72d4017a */   'css_class' => 'dashboard-links',
   /* admin_dashboard 72d4017a */ );
   /* admin_dashboard 72d4017a */ $pane->extras = array();
   /* admin_dashboard 72d4017a */ $pane->position = 0;
   /* admin_dashboard 72d4017a */ $pane->locks = array();
   /* admin_dashboard 72d4017a */ $pane->uuid = '72d4017a-f2f4-4641-8ed9-01b9acce228e';
  $display->content['new-72d4017a-f2f4-4641-8ed9-01b9acce228e'] = $pane;
  $display->panels['top'][0] = 'new-72d4017a-f2f4-4641-8ed9-01b9acce228e';
   /* admin_dashboard 86574657 */ $pane = new stdClass();
   /* admin_dashboard 86574657 */ $pane->pid = 'new-86574657-88ec-4353-b99e-1c9abfa8ea38';
   /* admin_dashboard 86574657 */ $pane->panel = 'top';
   /* admin_dashboard 86574657 */ $pane->type = 'custom';
   /* admin_dashboard 86574657 */ $pane->subtype = 'custom';
   /* admin_dashboard 86574657 */ $pane->shown = TRUE;
   /* admin_dashboard 86574657 */ $pane->access = array(
   /* admin_dashboard 86574657 */   'plugins' => array(
   /* admin_dashboard 86574657 */     0 => array(
   /* admin_dashboard 86574657 */       'name' => 'php',
   /* admin_dashboard 86574657 */       'settings' => array(
   /* admin_dashboard 86574657 */         'description' => '',
   /* admin_dashboard 86574657 */         'php' => 'return gn2_manager_is_manager(array(\'hr_manager\'));',
   /* admin_dashboard 86574657 */       ),
   /* admin_dashboard 86574657 */       'not' => FALSE,
   /* admin_dashboard 86574657 */     ),
   /* admin_dashboard 86574657 */   ),
   /* admin_dashboard 86574657 */ );
   /* admin_dashboard 86574657 */ $pane->configuration = array(
   /* admin_dashboard 86574657 */   'admin_title' => '',
   /* admin_dashboard 86574657 */   'title' => 'Administrative Links',
   /* admin_dashboard 86574657 */   'body' => '<div class="fancy-bullets">
<ul class="dashboard-link-list">
<li><a href="/admin/manage/users">Manage Users</a></li>
<li><a href="/admin/manage/users/add/user">Add New User</a></li>
<li><a href="/admin/people/uif?destination=users/dashboard">Bulk Import Users</a></li>
<li><a href="/admin/manage/userform/submissions/userreg">Create new account form submissions</a></li>
<li><a href="/admin/manage/form/submissions/contact_support">Support form submissions</a></li>
<li><a href="/admin/manage/form/submissions/feedback">Feedback submissions</a></li>
<li><a href="/admin/manage/user-profile-updates">User profile update submissions</a></li>
</ul></div>',
   /* admin_dashboard 86574657 */   'format' => 'full_html',
   /* admin_dashboard 86574657 */   'substitute' => 1,
   /* admin_dashboard 86574657 */ );
   /* admin_dashboard 86574657 */ $pane->cache = array();
   /* admin_dashboard 86574657 */ $pane->style = array(
   /* admin_dashboard 86574657 */   'settings' => NULL,
   /* admin_dashboard 86574657 */ );
   /* admin_dashboard 86574657 */ $pane->css = array(
   /* admin_dashboard 86574657 */   'css_id' => '',
   /* admin_dashboard 86574657 */   'css_class' => 'dashboard-links',
   /* admin_dashboard 86574657 */ );
   /* admin_dashboard 86574657 */ $pane->extras = array();
   /* admin_dashboard 86574657 */ $pane->position = 1;
   /* admin_dashboard 86574657 */ $pane->locks = array();
   /* admin_dashboard 86574657 */ $pane->uuid = '86574657-88ec-4353-b99e-1c9abfa8ea38';
  $display->content['new-86574657-88ec-4353-b99e-1c9abfa8ea38'] = $pane;
  $display->panels['top'][1] = 'new-86574657-88ec-4353-b99e-1c9abfa8ea38';
   /* admin_dashboard fbadd275 */ $pane = new stdClass();
   /* admin_dashboard fbadd275 */ $pane->pid = 'new-fbadd275-d230-4cd0-9b4e-ce801e144ea1';
   /* admin_dashboard fbadd275 */ $pane->panel = 'top';
   /* admin_dashboard fbadd275 */ $pane->type = 'custom';
   /* admin_dashboard fbadd275 */ $pane->subtype = 'custom';
   /* admin_dashboard fbadd275 */ $pane->shown = TRUE;
   /* admin_dashboard fbadd275 */ $pane->access = array();
   /* admin_dashboard fbadd275 */ $pane->configuration = array(
   /* admin_dashboard fbadd275 */   'admin_title' => '',
   /* admin_dashboard fbadd275 */   'title' => 'Help for Administrators',
   /* admin_dashboard fbadd275 */   'body' => 'Click on the Help category on the left to find help and guidelines for GlobalNET administrators and managers',
   /* admin_dashboard fbadd275 */   'format' => 'full_html',
   /* admin_dashboard fbadd275 */   'substitute' => 1,
   /* admin_dashboard fbadd275 */ );
   /* admin_dashboard fbadd275 */ $pane->cache = array();
   /* admin_dashboard fbadd275 */ $pane->style = array(
   /* admin_dashboard fbadd275 */   'settings' => NULL,
   /* admin_dashboard fbadd275 */ );
   /* admin_dashboard fbadd275 */ $pane->css = array();
   /* admin_dashboard fbadd275 */ $pane->extras = array();
   /* admin_dashboard fbadd275 */ $pane->position = 2;
   /* admin_dashboard fbadd275 */ $pane->locks = array();
   /* admin_dashboard fbadd275 */ $pane->uuid = 'fbadd275-d230-4cd0-9b4e-ce801e144ea1';
  $display->content['new-fbadd275-d230-4cd0-9b4e-ce801e144ea1'] = $pane;
  $display->panels['top'][2] = 'new-fbadd275-d230-4cd0-9b4e-ce801e144ea1';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-72d4017a-f2f4-4641-8ed9-01b9acce228e';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['admin_dashboard'] = $page;

  return $pages;

}
