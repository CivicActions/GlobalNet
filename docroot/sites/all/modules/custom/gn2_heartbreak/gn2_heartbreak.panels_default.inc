<?php
/**
 * @file
 * gn2_heartbreak.panels_default.inc
 */

/**
 * Implements hook_default_panels_mini().
 */
function gn2_heartbreak_default_panels_mini() {
  $export = array();

   /* session_entityform_results */ $mini = new stdClass();
   /* session_entityform_results */ $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
   /* session_entityform_results */ $mini->api_version = 1;
   /* session_entityform_results */ $mini->name = 'session_entityform_results';
   /* session_entityform_results */ $mini->category = '';
   /* session_entityform_results */ $mini->admin_title = 'Session Entityform and Results';
   /* session_entityform_results */ $mini->admin_description = '';
   /* session_entityform_results */ $mini->requiredcontexts = array(
   /* session_entityform_results */   0 => array(
   /* session_entityform_results */     'identifier' => 'Node',
   /* session_entityform_results */     'keyword' => 'node',
   /* session_entityform_results */     'name' => 'entity:node',
   /* session_entityform_results */     'entity_id' => '',
   /* session_entityform_results */     'id' => 1,
   /* session_entityform_results */   ),
   /* session_entityform_results */ );
   /* session_entityform_results */ $mini->contexts = array(
   /* session_entityform_results */   0 => array(
   /* session_entityform_results */     'identifier' => 'Entityform Type',
   /* session_entityform_results */     'keyword' => 'entityform_type',
   /* session_entityform_results */     'name' => 'entity:entityform_type',
   /* session_entityform_results */     'id' => 1,
   /* session_entityform_results */     'entity_id' => '50',
   /* session_entityform_results */   ),
   /* session_entityform_results */ );
   /* session_entityform_results */ $mini->relationships = array();
   /* session_entityform_results 607a17d4 */ $display = new panels_display();
   /* session_entityform_results 607a17d4 */ $display->layout = 'gn2_1col';
   /* session_entityform_results 607a17d4 */ $display->layout_settings = array();
   /* session_entityform_results 607a17d4 */ $display->panel_settings = array(
   /* session_entityform_results 607a17d4 */   'style_settings' => array(
   /* session_entityform_results 607a17d4 */     'default' => NULL,
   /* session_entityform_results 607a17d4 */     'middle' => array(
   /* session_entityform_results 607a17d4 */       'clean_markup' => array(
   /* session_entityform_results 607a17d4 */         'region_wrapper' => 'div',
   /* session_entityform_results 607a17d4 */         'additional_region_classes' => '',
   /* session_entityform_results 607a17d4 */         'additional_region_attributes' => '',
   /* session_entityform_results 607a17d4 */         'enable_inner_div' => 0,
   /* session_entityform_results 607a17d4 */         'pane_separators' => 0,
   /* session_entityform_results 607a17d4 */       ),
   /* session_entityform_results 607a17d4 */     ),
   /* session_entityform_results 607a17d4 */     'contentmain' => array(
   /* session_entityform_results 607a17d4 */       'clean_markup' => array(
   /* session_entityform_results 607a17d4 */         'region_wrapper' => 'div',
   /* session_entityform_results 607a17d4 */         'additional_region_classes' => 'course-sessions-minipanel',
   /* session_entityform_results 607a17d4 */         'additional_region_attributes' => '',
   /* session_entityform_results 607a17d4 */         'enable_inner_div' => 1,
   /* session_entityform_results 607a17d4 */         'pane_separators' => 0,
   /* session_entityform_results 607a17d4 */       ),
   /* session_entityform_results 607a17d4 */     ),
   /* session_entityform_results 607a17d4 */   ),
   /* session_entityform_results 607a17d4 */   'middle' => array(
   /* session_entityform_results 607a17d4 */     'style' => 'clean_element',
   /* session_entityform_results 607a17d4 */   ),
   /* session_entityform_results 607a17d4 */   'contentmain' => array(
   /* session_entityform_results 607a17d4 */     'style' => 'clean_element',
   /* session_entityform_results 607a17d4 */   ),
   /* session_entityform_results 607a17d4 */ );
   /* session_entityform_results 607a17d4 */ $display->cache = array();
   /* session_entityform_results 607a17d4 */ $display->title = '';
   /* session_entityform_results 607a17d4 */ $display->uuid = '607a17d4-c06b-4dfc-992d-97edb046201b';
   /* session_entityform_results 607a17d4 */ $display->storage_type = 'panels_mini';
   /* session_entityform_results 607a17d4 */ $display->storage_id = 'session_entityform_results';
  $display->content = array();
  $display->panels = array();
   /* session_entityform_results cbd05a04 */ $pane = new stdClass();
   /* session_entityform_results cbd05a04 */ $pane->pid = 'new-cbd05a04-60fc-4149-90ae-a093107c10d0';
   /* session_entityform_results cbd05a04 */ $pane->panel = 'contentmain';
   /* session_entityform_results cbd05a04 */ $pane->type = 'entity_field';
   /* session_entityform_results cbd05a04 */ $pane->subtype = 'node:field_course_schedule';
   /* session_entityform_results cbd05a04 */ $pane->shown = TRUE;
   /* session_entityform_results cbd05a04 */ $pane->access = array();
   /* session_entityform_results cbd05a04 */ $pane->configuration = array(
   /* session_entityform_results cbd05a04 */   'label' => 'hidden',
   /* session_entityform_results cbd05a04 */   'formatter' => 'file_default',
   /* session_entityform_results cbd05a04 */   'delta_limit' => '0',
   /* session_entityform_results cbd05a04 */   'delta_offset' => '0',
   /* session_entityform_results cbd05a04 */   'delta_reversed' => 0,
   /* session_entityform_results cbd05a04 */   'formatter_settings' => array(
   /* session_entityform_results cbd05a04 */     'field_formatter_class' => 'icon-schedule',
   /* session_entityform_results cbd05a04 */     'text' => 'View Schedule',
   /* session_entityform_results cbd05a04 */   ),
   /* session_entityform_results cbd05a04 */   'context' => 'requiredcontext_entity:node_1',
   /* session_entityform_results cbd05a04 */   'override_title' => 0,
   /* session_entityform_results cbd05a04 */   'override_title_text' => '',
   /* session_entityform_results cbd05a04 */   'override_title_heading' => 'h2',
   /* session_entityform_results cbd05a04 */ );
   /* session_entityform_results cbd05a04 */ $pane->cache = array();
   /* session_entityform_results cbd05a04 */ $pane->style = array(
   /* session_entityform_results cbd05a04 */   'settings' => NULL,
   /* session_entityform_results cbd05a04 */ );
   /* session_entityform_results cbd05a04 */ $pane->css = array();
   /* session_entityform_results cbd05a04 */ $pane->extras = array();
   /* session_entityform_results cbd05a04 */ $pane->position = 0;
   /* session_entityform_results cbd05a04 */ $pane->locks = array();
   /* session_entityform_results cbd05a04 */ $pane->uuid = 'cbd05a04-60fc-4149-90ae-a093107c10d0';
  $display->content['new-cbd05a04-60fc-4149-90ae-a093107c10d0'] = $pane;
  $display->panels['contentmain'][0] = 'new-cbd05a04-60fc-4149-90ae-a093107c10d0';
   /* session_entityform_results 3812f415 */ $pane = new stdClass();
   /* session_entityform_results 3812f415 */ $pane->pid = 'new-3812f415-7848-462b-8330-613d341196f5';
   /* session_entityform_results 3812f415 */ $pane->panel = 'contentmain';
   /* session_entityform_results 3812f415 */ $pane->type = 'entity_field';
   /* session_entityform_results 3812f415 */ $pane->subtype = 'node:field_course_syllabus';
   /* session_entityform_results 3812f415 */ $pane->shown = TRUE;
   /* session_entityform_results 3812f415 */ $pane->access = array();
   /* session_entityform_results 3812f415 */ $pane->configuration = array(
   /* session_entityform_results 3812f415 */   'label' => 'hidden',
   /* session_entityform_results 3812f415 */   'formatter' => 'file_default',
   /* session_entityform_results 3812f415 */   'delta_limit' => '0',
   /* session_entityform_results 3812f415 */   'delta_offset' => '0',
   /* session_entityform_results 3812f415 */   'delta_reversed' => 0,
   /* session_entityform_results 3812f415 */   'formatter_settings' => array(
   /* session_entityform_results 3812f415 */     'field_formatter_class' => 'icon-syllabus',
   /* session_entityform_results 3812f415 */     'text' => 'View Syllabus',
   /* session_entityform_results 3812f415 */   ),
   /* session_entityform_results 3812f415 */   'context' => 'requiredcontext_entity:node_1',
   /* session_entityform_results 3812f415 */   'override_title' => 0,
   /* session_entityform_results 3812f415 */   'override_title_text' => '',
   /* session_entityform_results 3812f415 */   'override_title_heading' => 'h2',
   /* session_entityform_results 3812f415 */ );
   /* session_entityform_results 3812f415 */ $pane->cache = array();
   /* session_entityform_results 3812f415 */ $pane->style = array(
   /* session_entityform_results 3812f415 */   'settings' => NULL,
   /* session_entityform_results 3812f415 */ );
   /* session_entityform_results 3812f415 */ $pane->css = array();
   /* session_entityform_results 3812f415 */ $pane->extras = array();
   /* session_entityform_results 3812f415 */ $pane->position = 1;
   /* session_entityform_results 3812f415 */ $pane->locks = array();
   /* session_entityform_results 3812f415 */ $pane->uuid = '3812f415-7848-462b-8330-613d341196f5';
  $display->content['new-3812f415-7848-462b-8330-613d341196f5'] = $pane;
  $display->panels['contentmain'][1] = 'new-3812f415-7848-462b-8330-613d341196f5';
   /* session_entityform_results 4899dfce */ $pane = new stdClass();
   /* session_entityform_results 4899dfce */ $pane->pid = 'new-4899dfce-55f1-4b7c-b5e4-52c54f8fd225';
   /* session_entityform_results 4899dfce */ $pane->panel = 'contentmain';
   /* session_entityform_results 4899dfce */ $pane->type = 'views_panes';
   /* session_entityform_results 4899dfce */ $pane->subtype = 'session_level_1_title_links-panel_pane_1';
   /* session_entityform_results 4899dfce */ $pane->shown = TRUE;
   /* session_entityform_results 4899dfce */ $pane->access = array();
   /* session_entityform_results 4899dfce */ $pane->configuration = array(
   /* session_entityform_results 4899dfce */   'context' => array(
   /* session_entityform_results 4899dfce */     0 => 'requiredcontext_entity:node_1',
   /* session_entityform_results 4899dfce */   ),
   /* session_entityform_results 4899dfce */ );
   /* session_entityform_results 4899dfce */ $pane->cache = array();
   /* session_entityform_results 4899dfce */ $pane->style = array(
   /* session_entityform_results 4899dfce */   'settings' => NULL,
   /* session_entityform_results 4899dfce */ );
   /* session_entityform_results 4899dfce */ $pane->css = array();
   /* session_entityform_results 4899dfce */ $pane->extras = array();
   /* session_entityform_results 4899dfce */ $pane->position = 2;
   /* session_entityform_results 4899dfce */ $pane->locks = array();
   /* session_entityform_results 4899dfce */ $pane->uuid = '4899dfce-55f1-4b7c-b5e4-52c54f8fd225';
  $display->content['new-4899dfce-55f1-4b7c-b5e4-52c54f8fd225'] = $pane;
  $display->panels['contentmain'][2] = 'new-4899dfce-55f1-4b7c-b5e4-52c54f8fd225';
   /* session_entityform_results 8ba25bae */ $pane = new stdClass();
   /* session_entityform_results 8ba25bae */ $pane->pid = 'new-8ba25bae-4960-412d-b083-eb56a7bf7212';
   /* session_entityform_results 8ba25bae */ $pane->panel = 'contentmain';
   /* session_entityform_results 8ba25bae */ $pane->type = 'block';
   /* session_entityform_results 8ba25bae */ $pane->subtype = 'gn2_sessions_fc-session_form';
   /* session_entityform_results 8ba25bae */ $pane->shown = TRUE;
   /* session_entityform_results 8ba25bae */ $pane->access = array();
   /* session_entityform_results 8ba25bae */ $pane->configuration = array(
   /* session_entityform_results 8ba25bae */   'override_title' => 0,
   /* session_entityform_results 8ba25bae */   'override_title_text' => '',
   /* session_entityform_results 8ba25bae */   'override_title_heading' => 'h2',
   /* session_entityform_results 8ba25bae */ );
   /* session_entityform_results 8ba25bae */ $pane->cache = array();
   /* session_entityform_results 8ba25bae */ $pane->style = array(
   /* session_entityform_results 8ba25bae */   'settings' => NULL,
   /* session_entityform_results 8ba25bae */ );
   /* session_entityform_results 8ba25bae */ $pane->css = array();
   /* session_entityform_results 8ba25bae */ $pane->extras = array();
   /* session_entityform_results 8ba25bae */ $pane->position = 3;
   /* session_entityform_results 8ba25bae */ $pane->locks = array();
   /* session_entityform_results 8ba25bae */ $pane->uuid = '8ba25bae-4960-412d-b083-eb56a7bf7212';
  $display->content['new-8ba25bae-4960-412d-b083-eb56a7bf7212'] = $pane;
  $display->panels['contentmain'][3] = 'new-8ba25bae-4960-412d-b083-eb56a7bf7212';
   /* session_entityform_results c9b29dbd */ $pane = new stdClass();
   /* session_entityform_results c9b29dbd */ $pane->pid = 'new-c9b29dbd-9f6f-446c-922d-7ab2ffcbb954';
   /* session_entityform_results c9b29dbd */ $pane->panel = 'contentmain';
   /* session_entityform_results c9b29dbd */ $pane->type = 'entity_view';
   /* session_entityform_results c9b29dbd */ $pane->subtype = 'entityform_type';
   /* session_entityform_results c9b29dbd */ $pane->shown = FALSE;
   /* session_entityform_results c9b29dbd */ $pane->access = array(
   /* session_entityform_results c9b29dbd */   'plugins' => array(
   /* session_entityform_results c9b29dbd */     0 => array(
   /* session_entityform_results c9b29dbd */       'name' => 'og_perm',
   /* session_entityform_results c9b29dbd */       'settings' => array(
   /* session_entityform_results c9b29dbd */         'perm' => 'administer group',
   /* session_entityform_results c9b29dbd */       ),
   /* session_entityform_results c9b29dbd */       'context' => array(
   /* session_entityform_results c9b29dbd */         0 => 'logged-in-user',
   /* session_entityform_results c9b29dbd */         1 => 'requiredcontext_entity:node_1',
   /* session_entityform_results c9b29dbd */       ),
   /* session_entityform_results c9b29dbd */       'not' => FALSE,
   /* session_entityform_results c9b29dbd */     ),
   /* session_entityform_results c9b29dbd */   ),
   /* session_entityform_results c9b29dbd */ );
   /* session_entityform_results c9b29dbd */ $pane->configuration = array(
   /* session_entityform_results c9b29dbd */   'view_mode' => 'full',
   /* session_entityform_results c9b29dbd */   'context' => 'context_entity:entityform_type_1',
   /* session_entityform_results c9b29dbd */   'override_title' => 0,
   /* session_entityform_results c9b29dbd */   'override_title_text' => 'Sessions',
   /* session_entityform_results c9b29dbd */   'override_title_heading' => 'h3',
   /* session_entityform_results c9b29dbd */ );
   /* session_entityform_results c9b29dbd */ $pane->cache = array();
   /* session_entityform_results c9b29dbd */ $pane->style = array(
   /* session_entityform_results c9b29dbd */   'settings' => NULL,
   /* session_entityform_results c9b29dbd */ );
   /* session_entityform_results c9b29dbd */ $pane->css = array();
   /* session_entityform_results c9b29dbd */ $pane->extras = array();
   /* session_entityform_results c9b29dbd */ $pane->position = 4;
   /* session_entityform_results c9b29dbd */ $pane->locks = array();
   /* session_entityform_results c9b29dbd */ $pane->uuid = 'c9b29dbd-9f6f-446c-922d-7ab2ffcbb954';
  $display->content['new-c9b29dbd-9f6f-446c-922d-7ab2ffcbb954'] = $pane;
  $display->panels['contentmain'][4] = 'new-c9b29dbd-9f6f-446c-922d-7ab2ffcbb954';
   /* session_entityform_results 5e97a05f */ $pane = new stdClass();
   /* session_entityform_results 5e97a05f */ $pane->pid = 'new-5e97a05f-04a2-40da-8850-209b003db466';
   /* session_entityform_results 5e97a05f */ $pane->panel = 'contentmain';
   /* session_entityform_results 5e97a05f */ $pane->type = 'views_panes';
   /* session_entityform_results 5e97a05f */ $pane->subtype = 'sessions_created-panel_pane_1';
   /* session_entityform_results 5e97a05f */ $pane->shown = TRUE;
   /* session_entityform_results 5e97a05f */ $pane->access = array();
   /* session_entityform_results 5e97a05f */ $pane->configuration = array();
   /* session_entityform_results 5e97a05f */ $pane->cache = array();
   /* session_entityform_results 5e97a05f */ $pane->style = array(
   /* session_entityform_results 5e97a05f */   'settings' => NULL,
   /* session_entityform_results 5e97a05f */ );
   /* session_entityform_results 5e97a05f */ $pane->css = array();
   /* session_entityform_results 5e97a05f */ $pane->extras = array();
   /* session_entityform_results 5e97a05f */ $pane->position = 5;
   /* session_entityform_results 5e97a05f */ $pane->locks = array();
   /* session_entityform_results 5e97a05f */ $pane->uuid = '5e97a05f-04a2-40da-8850-209b003db466';
  $display->content['new-5e97a05f-04a2-40da-8850-209b003db466'] = $pane;
  $display->panels['contentmain'][5] = 'new-5e97a05f-04a2-40da-8850-209b003db466';
   /* session_entityform_results 5d4aa55f */ $pane = new stdClass();
   /* session_entityform_results 5d4aa55f */ $pane->pid = 'new-5d4aa55f-0ec4-4985-ada7-a155271ea1fd';
   /* session_entityform_results 5d4aa55f */ $pane->panel = 'contentmain';
   /* session_entityform_results 5d4aa55f */ $pane->type = 'views_panes';
   /* session_entityform_results 5d4aa55f */ $pane->subtype = 'sessions_created-panel_pane_2';
   /* session_entityform_results 5d4aa55f */ $pane->shown = TRUE;
   /* session_entityform_results 5d4aa55f */ $pane->access = array();
   /* session_entityform_results 5d4aa55f */ $pane->configuration = array();
   /* session_entityform_results 5d4aa55f */ $pane->cache = array();
   /* session_entityform_results 5d4aa55f */ $pane->style = array(
   /* session_entityform_results 5d4aa55f */   'settings' => NULL,
   /* session_entityform_results 5d4aa55f */ );
   /* session_entityform_results 5d4aa55f */ $pane->css = array();
   /* session_entityform_results 5d4aa55f */ $pane->extras = array();
   /* session_entityform_results 5d4aa55f */ $pane->position = 6;
   /* session_entityform_results 5d4aa55f */ $pane->locks = array();
   /* session_entityform_results 5d4aa55f */ $pane->uuid = '5d4aa55f-0ec4-4985-ada7-a155271ea1fd';
  $display->content['new-5d4aa55f-0ec4-4985-ada7-a155271ea1fd'] = $pane;
  $display->panels['contentmain'][6] = 'new-5d4aa55f-0ec4-4985-ada7-a155271ea1fd';
   /* session_entityform_results 4105790a */ $pane = new stdClass();
   /* session_entityform_results 4105790a */ $pane->pid = 'new-4105790a-a2f7-4b2f-bc94-b171392a23b8';
   /* session_entityform_results 4105790a */ $pane->panel = 'contentmain';
   /* session_entityform_results 4105790a */ $pane->type = 'block';
   /* session_entityform_results 4105790a */ $pane->subtype = 'gn2_file_download-associated_media';
   /* session_entityform_results 4105790a */ $pane->shown = TRUE;
   /* session_entityform_results 4105790a */ $pane->access = array();
   /* session_entityform_results 4105790a */ $pane->configuration = array(
   /* session_entityform_results 4105790a */   'override_title' => 0,
   /* session_entityform_results 4105790a */   'override_title_text' => '',
   /* session_entityform_results 4105790a */   'override_title_heading' => 'h2',
   /* session_entityform_results 4105790a */ );
   /* session_entityform_results 4105790a */ $pane->cache = array();
   /* session_entityform_results 4105790a */ $pane->style = array(
   /* session_entityform_results 4105790a */   'style' => 'default',
   /* session_entityform_results 4105790a */   'settings' => NULL,
   /* session_entityform_results 4105790a */ );
   /* session_entityform_results 4105790a */ $pane->css = array();
   /* session_entityform_results 4105790a */ $pane->extras = array();
   /* session_entityform_results 4105790a */ $pane->position = 7;
   /* session_entityform_results 4105790a */ $pane->locks = array();
   /* session_entityform_results 4105790a */ $pane->uuid = '4105790a-a2f7-4b2f-bc94-b171392a23b8';
  $display->content['new-4105790a-a2f7-4b2f-bc94-b171392a23b8'] = $pane;
  $display->panels['contentmain'][7] = 'new-4105790a-a2f7-4b2f-bc94-b171392a23b8';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-5e97a05f-04a2-40da-8850-209b003db466';
  $mini->display = $display;
  $export['session_entityform_results'] = $mini;

  return $export;
}
