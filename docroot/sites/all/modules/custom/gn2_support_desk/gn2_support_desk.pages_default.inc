<?php
/**
 * @file
 * gn2_support_desk.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function gn2_support_desk_default_page_manager_handlers() {
  $export = array();

   /* node_view__panel_context_36ed0441-e689-46d0-8c5a-a0c030d786c1 */ $handler = new stdClass();
   /* node_view__panel_context_36ed0441-e689-46d0-8c5a-a0c030d786c1 */ $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
   /* node_view__panel_context_36ed0441-e689-46d0-8c5a-a0c030d786c1 */ $handler->api_version = 1;
   /* node_view__panel_context_36ed0441-e689-46d0-8c5a-a0c030d786c1 */ $handler->name = 'node_view__panel_context_36ed0441-e689-46d0-8c5a-a0c030d786c1';
   /* node_view__panel_context_36ed0441-e689-46d0-8c5a-a0c030d786c1 */ $handler->task = 'node_view';
   /* node_view__panel_context_36ed0441-e689-46d0-8c5a-a0c030d786c1 */ $handler->subtask = '';
   /* node_view__panel_context_36ed0441-e689-46d0-8c5a-a0c030d786c1 */ $handler->handler = 'panel_context';
   /* node_view__panel_context_36ed0441-e689-46d0-8c5a-a0c030d786c1 */ $handler->weight = 2;
   /* node_view__panel_context_36ed0441-e689-46d0-8c5a-a0c030d786c1 */ $handler->conf = array(
   /* node_view__panel_context_36ed0441-e689-46d0-8c5a-a0c030d786c1 */   'title' => 'Support ticket',
   /* node_view__panel_context_36ed0441-e689-46d0-8c5a-a0c030d786c1 */   'no_blocks' => 0,
   /* node_view__panel_context_36ed0441-e689-46d0-8c5a-a0c030d786c1 */   'pipeline' => 'standard',
   /* node_view__panel_context_36ed0441-e689-46d0-8c5a-a0c030d786c1 */   'body_classes_to_remove' => '',
   /* node_view__panel_context_36ed0441-e689-46d0-8c5a-a0c030d786c1 */   'body_classes_to_add' => '',
   /* node_view__panel_context_36ed0441-e689-46d0-8c5a-a0c030d786c1 */   'css_id' => 'support-ticket',
   /* node_view__panel_context_36ed0441-e689-46d0-8c5a-a0c030d786c1 */   'css' => '',
   /* node_view__panel_context_36ed0441-e689-46d0-8c5a-a0c030d786c1 */   'contexts' => array(),
   /* node_view__panel_context_36ed0441-e689-46d0-8c5a-a0c030d786c1 */   'relationships' => array(),
   /* node_view__panel_context_36ed0441-e689-46d0-8c5a-a0c030d786c1 */   'name' => '',
   /* node_view__panel_context_36ed0441-e689-46d0-8c5a-a0c030d786c1 */   'access' => array(
   /* node_view__panel_context_36ed0441-e689-46d0-8c5a-a0c030d786c1 */     'plugins' => array(
   /* node_view__panel_context_36ed0441-e689-46d0-8c5a-a0c030d786c1 */       0 => array(
   /* node_view__panel_context_36ed0441-e689-46d0-8c5a-a0c030d786c1 */         'name' => 'node_type',
   /* node_view__panel_context_36ed0441-e689-46d0-8c5a-a0c030d786c1 */         'settings' => array(
   /* node_view__panel_context_36ed0441-e689-46d0-8c5a-a0c030d786c1 */           'type' => array(
   /* node_view__panel_context_36ed0441-e689-46d0-8c5a-a0c030d786c1 */             'support' => 'support',
   /* node_view__panel_context_36ed0441-e689-46d0-8c5a-a0c030d786c1 */           ),
   /* node_view__panel_context_36ed0441-e689-46d0-8c5a-a0c030d786c1 */         ),
   /* node_view__panel_context_36ed0441-e689-46d0-8c5a-a0c030d786c1 */         'context' => 'argument_entity_id:node_1',
   /* node_view__panel_context_36ed0441-e689-46d0-8c5a-a0c030d786c1 */         'not' => FALSE,
   /* node_view__panel_context_36ed0441-e689-46d0-8c5a-a0c030d786c1 */       ),
   /* node_view__panel_context_36ed0441-e689-46d0-8c5a-a0c030d786c1 */     ),
   /* node_view__panel_context_36ed0441-e689-46d0-8c5a-a0c030d786c1 */     'logic' => 'and',
   /* node_view__panel_context_36ed0441-e689-46d0-8c5a-a0c030d786c1 */   ),
   /* node_view__panel_context_36ed0441-e689-46d0-8c5a-a0c030d786c1 */ );
   /* track_field_changes_track_revision_fields_support f81824d5 */ $display = new panels_display();
   /* track_field_changes_track_revision_fields_support f81824d5 */ $display->layout = 'gn2_2colstackedflipped';
   /* track_field_changes_track_revision_fields_support f81824d5 */ $display->layout_settings = array();
   /* track_field_changes_track_revision_fields_support f81824d5 */ $display->panel_settings = array(
   /* track_field_changes_track_revision_fields_support f81824d5 */   'style_settings' => array(
   /* track_field_changes_track_revision_fields_support f81824d5 */     'default' => NULL,
   /* track_field_changes_track_revision_fields_support f81824d5 */     'top' => NULL,
   /* track_field_changes_track_revision_fields_support f81824d5 */     'sidebar' => NULL,
   /* track_field_changes_track_revision_fields_support f81824d5 */     'main_top' => NULL,
   /* track_field_changes_track_revision_fields_support f81824d5 */     'main_bottom' => NULL,
   /* track_field_changes_track_revision_fields_support f81824d5 */     'footer' => NULL,
   /* track_field_changes_track_revision_fields_support f81824d5 */   ),
   /* track_field_changes_track_revision_fields_support f81824d5 */   'main_bottom' => array(
   /* track_field_changes_track_revision_fields_support f81824d5 */     'style' => 'tabs',
   /* track_field_changes_track_revision_fields_support f81824d5 */   ),
   /* track_field_changes_track_revision_fields_support f81824d5 */ );
   /* track_field_changes_track_revision_fields_support f81824d5 */ $display->cache = array();
   /* track_field_changes_track_revision_fields_support f81824d5 */ $display->title = '';
   /* track_field_changes_track_revision_fields_support f81824d5 */ $display->uuid = 'f81824d5-3f6c-4690-b6b9-86479ba5d902';
   /* track_field_changes_track_revision_fields_support f81824d5 */ $display->storage_type = 'page_manager';
   /* track_field_changes_track_revision_fields_support f81824d5 */ $display->storage_id = 'node_view__panel_context_36ed0441-e689-46d0-8c5a-a0c030d786c1';
  $display->content = array();
  $display->panels = array();
   /* track_field_changes_track_revision_fields_support 8bf8c1cd */ $pane = new stdClass();
   /* track_field_changes_track_revision_fields_support 8bf8c1cd */ $pane->pid = 'new-8bf8c1cd-266f-4338-a185-56915b4497f3';
   /* track_field_changes_track_revision_fields_support 8bf8c1cd */ $pane->panel = 'footer';
   /* track_field_changes_track_revision_fields_support 8bf8c1cd */ $pane->type = 'block';
   /* track_field_changes_track_revision_fields_support 8bf8c1cd */ $pane->subtype = 'gn2_support_desk-gn2_support_desk';
   /* track_field_changes_track_revision_fields_support 8bf8c1cd */ $pane->shown = TRUE;
   /* track_field_changes_track_revision_fields_support 8bf8c1cd */ $pane->access = array();
   /* track_field_changes_track_revision_fields_support 8bf8c1cd */ $pane->configuration = array(
   /* track_field_changes_track_revision_fields_support 8bf8c1cd */   'override_title' => 0,
   /* track_field_changes_track_revision_fields_support 8bf8c1cd */   'override_title_text' => '',
   /* track_field_changes_track_revision_fields_support 8bf8c1cd */   'override_title_heading' => 'h2',
   /* track_field_changes_track_revision_fields_support 8bf8c1cd */ );
   /* track_field_changes_track_revision_fields_support 8bf8c1cd */ $pane->cache = array();
   /* track_field_changes_track_revision_fields_support 8bf8c1cd */ $pane->style = array(
   /* track_field_changes_track_revision_fields_support 8bf8c1cd */   'settings' => NULL,
   /* track_field_changes_track_revision_fields_support 8bf8c1cd */ );
   /* track_field_changes_track_revision_fields_support 8bf8c1cd */ $pane->css = array(
   /* track_field_changes_track_revision_fields_support 8bf8c1cd */   'css_id' => '',
   /* track_field_changes_track_revision_fields_support 8bf8c1cd */   'css_class' => 'jira',
   /* track_field_changes_track_revision_fields_support 8bf8c1cd */ );
   /* track_field_changes_track_revision_fields_support 8bf8c1cd */ $pane->extras = array();
   /* track_field_changes_track_revision_fields_support 8bf8c1cd */ $pane->position = 0;
   /* track_field_changes_track_revision_fields_support 8bf8c1cd */ $pane->locks = array();
   /* track_field_changes_track_revision_fields_support 8bf8c1cd */ $pane->uuid = '8bf8c1cd-266f-4338-a185-56915b4497f3';
  $display->content['new-8bf8c1cd-266f-4338-a185-56915b4497f3'] = $pane;
  $display->panels['footer'][0] = 'new-8bf8c1cd-266f-4338-a185-56915b4497f3';
   /* track_field_changes_track_revision_fields_support 76c6b082 */ $pane = new stdClass();
   /* track_field_changes_track_revision_fields_support 76c6b082 */ $pane->pid = 'new-76c6b082-7e99-4d4a-b8f0-b37958cebf76';
   /* track_field_changes_track_revision_fields_support 76c6b082 */ $pane->panel = 'main_bottom';
   /* track_field_changes_track_revision_fields_support 76c6b082 */ $pane->type = 'views';
   /* track_field_changes_track_revision_fields_support 76c6b082 */ $pane->subtype = 'support_comments';
   /* track_field_changes_track_revision_fields_support 76c6b082 */ $pane->shown = TRUE;
   /* track_field_changes_track_revision_fields_support 76c6b082 */ $pane->access = array();
   /* track_field_changes_track_revision_fields_support 76c6b082 */ $pane->configuration = array(
   /* track_field_changes_track_revision_fields_support 76c6b082 */   'override_pager_settings' => 0,
   /* track_field_changes_track_revision_fields_support 76c6b082 */   'use_pager' => 1,
   /* track_field_changes_track_revision_fields_support 76c6b082 */   'nodes_per_page' => '10',
   /* track_field_changes_track_revision_fields_support 76c6b082 */   'pager_id' => '0',
   /* track_field_changes_track_revision_fields_support 76c6b082 */   'offset' => '0',
   /* track_field_changes_track_revision_fields_support 76c6b082 */   'more_link' => 0,
   /* track_field_changes_track_revision_fields_support 76c6b082 */   'feed_icons' => 0,
   /* track_field_changes_track_revision_fields_support 76c6b082 */   'panel_args' => 1,
   /* track_field_changes_track_revision_fields_support 76c6b082 */   'link_to_view' => 0,
   /* track_field_changes_track_revision_fields_support 76c6b082 */   'args' => '',
   /* track_field_changes_track_revision_fields_support 76c6b082 */   'url' => '',
   /* track_field_changes_track_revision_fields_support 76c6b082 */   'display' => 'page',
   /* track_field_changes_track_revision_fields_support 76c6b082 */   'context' => array(
   /* track_field_changes_track_revision_fields_support 76c6b082 */     0 => '',
   /* track_field_changes_track_revision_fields_support 76c6b082 */   ),
   /* track_field_changes_track_revision_fields_support 76c6b082 */   'override_title' => 1,
   /* track_field_changes_track_revision_fields_support 76c6b082 */   'override_title_text' => 'Comments',
   /* track_field_changes_track_revision_fields_support 76c6b082 */   'override_title_heading' => 'h2',
   /* track_field_changes_track_revision_fields_support 76c6b082 */ );
   /* track_field_changes_track_revision_fields_support 76c6b082 */ $pane->cache = array();
   /* track_field_changes_track_revision_fields_support 76c6b082 */ $pane->style = array(
   /* track_field_changes_track_revision_fields_support 76c6b082 */   'settings' => NULL,
   /* track_field_changes_track_revision_fields_support 76c6b082 */ );
   /* track_field_changes_track_revision_fields_support 76c6b082 */ $pane->css = array();
   /* track_field_changes_track_revision_fields_support 76c6b082 */ $pane->extras = array();
   /* track_field_changes_track_revision_fields_support 76c6b082 */ $pane->position = 0;
   /* track_field_changes_track_revision_fields_support 76c6b082 */ $pane->locks = array();
   /* track_field_changes_track_revision_fields_support 76c6b082 */ $pane->uuid = '76c6b082-7e99-4d4a-b8f0-b37958cebf76';
  $display->content['new-76c6b082-7e99-4d4a-b8f0-b37958cebf76'] = $pane;
  $display->panels['main_bottom'][0] = 'new-76c6b082-7e99-4d4a-b8f0-b37958cebf76';
   /* track_field_changes_track_revision_fields_support c6864b6e */ $pane = new stdClass();
   /* track_field_changes_track_revision_fields_support c6864b6e */ $pane->pid = 'new-c6864b6e-b344-498b-8585-01eb4250b0c7';
   /* track_field_changes_track_revision_fields_support c6864b6e */ $pane->panel = 'main_bottom';
   /* track_field_changes_track_revision_fields_support c6864b6e */ $pane->type = 'node_comment_form';
   /* track_field_changes_track_revision_fields_support c6864b6e */ $pane->subtype = 'node_comment_form';
   /* track_field_changes_track_revision_fields_support c6864b6e */ $pane->shown = TRUE;
   /* track_field_changes_track_revision_fields_support c6864b6e */ $pane->access = array();
   /* track_field_changes_track_revision_fields_support c6864b6e */ $pane->configuration = array(
   /* track_field_changes_track_revision_fields_support c6864b6e */   'anon_links' => 0,
   /* track_field_changes_track_revision_fields_support c6864b6e */   'context' => 'argument_entity_id:node_1',
   /* track_field_changes_track_revision_fields_support c6864b6e */   'override_title' => 0,
   /* track_field_changes_track_revision_fields_support c6864b6e */   'override_title_text' => '',
   /* track_field_changes_track_revision_fields_support c6864b6e */   'override_title_heading' => 'h2',
   /* track_field_changes_track_revision_fields_support c6864b6e */ );
   /* track_field_changes_track_revision_fields_support c6864b6e */ $pane->cache = array();
   /* track_field_changes_track_revision_fields_support c6864b6e */ $pane->style = array(
   /* track_field_changes_track_revision_fields_support c6864b6e */   'settings' => NULL,
   /* track_field_changes_track_revision_fields_support c6864b6e */ );
   /* track_field_changes_track_revision_fields_support c6864b6e */ $pane->css = array();
   /* track_field_changes_track_revision_fields_support c6864b6e */ $pane->extras = array();
   /* track_field_changes_track_revision_fields_support c6864b6e */ $pane->position = 1;
   /* track_field_changes_track_revision_fields_support c6864b6e */ $pane->locks = array();
   /* track_field_changes_track_revision_fields_support c6864b6e */ $pane->uuid = 'c6864b6e-b344-498b-8585-01eb4250b0c7';
  $display->content['new-c6864b6e-b344-498b-8585-01eb4250b0c7'] = $pane;
  $display->panels['main_bottom'][1] = 'new-c6864b6e-b344-498b-8585-01eb4250b0c7';
   /* track_field_changes_track_revision_fields_support 3b33d27d */ $pane = new stdClass();
   /* track_field_changes_track_revision_fields_support 3b33d27d */ $pane->pid = 'new-3b33d27d-4066-4b08-ba7f-9c44b817768e';
   /* track_field_changes_track_revision_fields_support 3b33d27d */ $pane->panel = 'main_bottom';
   /* track_field_changes_track_revision_fields_support 3b33d27d */ $pane->type = 'views';
   /* track_field_changes_track_revision_fields_support 3b33d27d */ $pane->subtype = 'support_ticket_activity';
   /* track_field_changes_track_revision_fields_support 3b33d27d */ $pane->shown = TRUE;
   /* track_field_changes_track_revision_fields_support 3b33d27d */ $pane->access = array();
   /* track_field_changes_track_revision_fields_support 3b33d27d */ $pane->configuration = array(
   /* track_field_changes_track_revision_fields_support 3b33d27d */   'override_pager_settings' => 0,
   /* track_field_changes_track_revision_fields_support 3b33d27d */   'use_pager' => 0,
   /* track_field_changes_track_revision_fields_support 3b33d27d */   'nodes_per_page' => '0',
   /* track_field_changes_track_revision_fields_support 3b33d27d */   'pager_id' => '0',
   /* track_field_changes_track_revision_fields_support 3b33d27d */   'offset' => '0',
   /* track_field_changes_track_revision_fields_support 3b33d27d */   'more_link' => 0,
   /* track_field_changes_track_revision_fields_support 3b33d27d */   'feed_icons' => 0,
   /* track_field_changes_track_revision_fields_support 3b33d27d */   'panel_args' => 1,
   /* track_field_changes_track_revision_fields_support 3b33d27d */   'link_to_view' => 0,
   /* track_field_changes_track_revision_fields_support 3b33d27d */   'args' => '',
   /* track_field_changes_track_revision_fields_support 3b33d27d */   'url' => '',
   /* track_field_changes_track_revision_fields_support 3b33d27d */   'display' => 'page',
   /* track_field_changes_track_revision_fields_support 3b33d27d */   'context' => array(
   /* track_field_changes_track_revision_fields_support 3b33d27d */     0 => '',
   /* track_field_changes_track_revision_fields_support 3b33d27d */   ),
   /* track_field_changes_track_revision_fields_support 3b33d27d */   'override_title' => 1,
   /* track_field_changes_track_revision_fields_support 3b33d27d */   'override_title_text' => 'Activity',
   /* track_field_changes_track_revision_fields_support 3b33d27d */   'override_title_heading' => 'h2',
   /* track_field_changes_track_revision_fields_support 3b33d27d */ );
   /* track_field_changes_track_revision_fields_support 3b33d27d */ $pane->cache = array();
   /* track_field_changes_track_revision_fields_support 3b33d27d */ $pane->style = array(
   /* track_field_changes_track_revision_fields_support 3b33d27d */   'settings' => NULL,
   /* track_field_changes_track_revision_fields_support 3b33d27d */ );
   /* track_field_changes_track_revision_fields_support 3b33d27d */ $pane->css = array();
   /* track_field_changes_track_revision_fields_support 3b33d27d */ $pane->extras = array();
   /* track_field_changes_track_revision_fields_support 3b33d27d */ $pane->position = 2;
   /* track_field_changes_track_revision_fields_support 3b33d27d */ $pane->locks = array();
   /* track_field_changes_track_revision_fields_support 3b33d27d */ $pane->uuid = '3b33d27d-4066-4b08-ba7f-9c44b817768e';
  $display->content['new-3b33d27d-4066-4b08-ba7f-9c44b817768e'] = $pane;
  $display->panels['main_bottom'][2] = 'new-3b33d27d-4066-4b08-ba7f-9c44b817768e';
   /* track_field_changes_track_revision_fields_support 57c5669f */ $pane = new stdClass();
   /* track_field_changes_track_revision_fields_support 57c5669f */ $pane->pid = 'new-57c5669f-e270-4610-a895-e00ee09a8bbc';
   /* track_field_changes_track_revision_fields_support 57c5669f */ $pane->panel = 'main_bottom';
   /* track_field_changes_track_revision_fields_support 57c5669f */ $pane->type = 'entity_field';
   /* track_field_changes_track_revision_fields_support 57c5669f */ $pane->subtype = 'node:field_admin_note';
   /* track_field_changes_track_revision_fields_support 57c5669f */ $pane->shown = TRUE;
   /* track_field_changes_track_revision_fields_support 57c5669f */ $pane->access = array(
   /* track_field_changes_track_revision_fields_support 57c5669f */   'plugins' => array(
   /* track_field_changes_track_revision_fields_support 57c5669f */     0 => array(
   /* track_field_changes_track_revision_fields_support 57c5669f */       'name' => 'role',
   /* track_field_changes_track_revision_fields_support 57c5669f */       'settings' => array(
   /* track_field_changes_track_revision_fields_support 57c5669f */         'rids' => array(
   /* track_field_changes_track_revision_fields_support 57c5669f */           0 => 9,
   /* track_field_changes_track_revision_fields_support 57c5669f */         ),
   /* track_field_changes_track_revision_fields_support 57c5669f */       ),
   /* track_field_changes_track_revision_fields_support 57c5669f */       'context' => 'logged-in-user',
   /* track_field_changes_track_revision_fields_support 57c5669f */       'not' => FALSE,
   /* track_field_changes_track_revision_fields_support 57c5669f */     ),
   /* track_field_changes_track_revision_fields_support 57c5669f */   ),
   /* track_field_changes_track_revision_fields_support 57c5669f */ );
   /* track_field_changes_track_revision_fields_support 57c5669f */ $pane->configuration = array(
   /* track_field_changes_track_revision_fields_support 57c5669f */   'label' => 'title',
   /* track_field_changes_track_revision_fields_support 57c5669f */   'formatter' => 'text_default',
   /* track_field_changes_track_revision_fields_support 57c5669f */   'delta_limit' => 0,
   /* track_field_changes_track_revision_fields_support 57c5669f */   'delta_offset' => '0',
   /* track_field_changes_track_revision_fields_support 57c5669f */   'delta_reversed' => FALSE,
   /* track_field_changes_track_revision_fields_support 57c5669f */   'formatter_settings' => array(),
   /* track_field_changes_track_revision_fields_support 57c5669f */   'context' => 'argument_entity_id:node_1',
   /* track_field_changes_track_revision_fields_support 57c5669f */   'override_title' => 0,
   /* track_field_changes_track_revision_fields_support 57c5669f */   'override_title_text' => '',
   /* track_field_changes_track_revision_fields_support 57c5669f */   'override_title_heading' => 'h2',
   /* track_field_changes_track_revision_fields_support 57c5669f */ );
   /* track_field_changes_track_revision_fields_support 57c5669f */ $pane->cache = array();
   /* track_field_changes_track_revision_fields_support 57c5669f */ $pane->style = array(
   /* track_field_changes_track_revision_fields_support 57c5669f */   'settings' => NULL,
   /* track_field_changes_track_revision_fields_support 57c5669f */ );
   /* track_field_changes_track_revision_fields_support 57c5669f */ $pane->css = array();
   /* track_field_changes_track_revision_fields_support 57c5669f */ $pane->extras = array();
   /* track_field_changes_track_revision_fields_support 57c5669f */ $pane->position = 3;
   /* track_field_changes_track_revision_fields_support 57c5669f */ $pane->locks = array();
   /* track_field_changes_track_revision_fields_support 57c5669f */ $pane->uuid = '57c5669f-e270-4610-a895-e00ee09a8bbc';
  $display->content['new-57c5669f-e270-4610-a895-e00ee09a8bbc'] = $pane;
  $display->panels['main_bottom'][3] = 'new-57c5669f-e270-4610-a895-e00ee09a8bbc';
   /* track_field_changes_track_revision_fields_support af12eb2a */ $pane = new stdClass();
   /* track_field_changes_track_revision_fields_support af12eb2a */ $pane->pid = 'new-af12eb2a-6b9e-4d8c-a5b6-4db16b1756d0';
   /* track_field_changes_track_revision_fields_support af12eb2a */ $pane->panel = 'main_top';
   /* track_field_changes_track_revision_fields_support af12eb2a */ $pane->type = 'views';
   /* track_field_changes_track_revision_fields_support af12eb2a */ $pane->subtype = 'support_details';
   /* track_field_changes_track_revision_fields_support af12eb2a */ $pane->shown = TRUE;
   /* track_field_changes_track_revision_fields_support af12eb2a */ $pane->access = array();
   /* track_field_changes_track_revision_fields_support af12eb2a */ $pane->configuration = array(
   /* track_field_changes_track_revision_fields_support af12eb2a */   'override_pager_settings' => 0,
   /* track_field_changes_track_revision_fields_support af12eb2a */   'use_pager' => 0,
   /* track_field_changes_track_revision_fields_support af12eb2a */   'nodes_per_page' => '1',
   /* track_field_changes_track_revision_fields_support af12eb2a */   'pager_id' => '0',
   /* track_field_changes_track_revision_fields_support af12eb2a */   'offset' => '0',
   /* track_field_changes_track_revision_fields_support af12eb2a */   'more_link' => 0,
   /* track_field_changes_track_revision_fields_support af12eb2a */   'feed_icons' => 0,
   /* track_field_changes_track_revision_fields_support af12eb2a */   'panel_args' => 1,
   /* track_field_changes_track_revision_fields_support af12eb2a */   'link_to_view' => 0,
   /* track_field_changes_track_revision_fields_support af12eb2a */   'args' => '',
   /* track_field_changes_track_revision_fields_support af12eb2a */   'url' => '',
   /* track_field_changes_track_revision_fields_support af12eb2a */   'display' => 'page_2',
   /* track_field_changes_track_revision_fields_support af12eb2a */   'context' => array(
   /* track_field_changes_track_revision_fields_support af12eb2a */     0 => '',
   /* track_field_changes_track_revision_fields_support af12eb2a */   ),
   /* track_field_changes_track_revision_fields_support af12eb2a */   'override_title' => 1,
   /* track_field_changes_track_revision_fields_support af12eb2a */   'override_title_text' => '',
   /* track_field_changes_track_revision_fields_support af12eb2a */   'override_title_heading' => 'h2',
   /* track_field_changes_track_revision_fields_support af12eb2a */ );
   /* track_field_changes_track_revision_fields_support af12eb2a */ $pane->cache = array();
   /* track_field_changes_track_revision_fields_support af12eb2a */ $pane->style = array(
   /* track_field_changes_track_revision_fields_support af12eb2a */   'settings' => NULL,
   /* track_field_changes_track_revision_fields_support af12eb2a */ );
   /* track_field_changes_track_revision_fields_support af12eb2a */ $pane->css = array();
   /* track_field_changes_track_revision_fields_support af12eb2a */ $pane->extras = array();
   /* track_field_changes_track_revision_fields_support af12eb2a */ $pane->position = 0;
   /* track_field_changes_track_revision_fields_support af12eb2a */ $pane->locks = array();
   /* track_field_changes_track_revision_fields_support af12eb2a */ $pane->uuid = 'af12eb2a-6b9e-4d8c-a5b6-4db16b1756d0';
  $display->content['new-af12eb2a-6b9e-4d8c-a5b6-4db16b1756d0'] = $pane;
  $display->panels['main_top'][0] = 'new-af12eb2a-6b9e-4d8c-a5b6-4db16b1756d0';
   /* track_field_changes_track_revision_fields_support 849a3e18 */ $pane = new stdClass();
   /* track_field_changes_track_revision_fields_support 849a3e18 */ $pane->pid = 'new-849a3e18-760c-441b-be8d-9daf4aa5dbf7';
   /* track_field_changes_track_revision_fields_support 849a3e18 */ $pane->panel = 'main_top';
   /* track_field_changes_track_revision_fields_support 849a3e18 */ $pane->type = 'entity_field';
   /* track_field_changes_track_revision_fields_support 849a3e18 */ $pane->subtype = 'node:field_attach_files';
   /* track_field_changes_track_revision_fields_support 849a3e18 */ $pane->shown = TRUE;
   /* track_field_changes_track_revision_fields_support 849a3e18 */ $pane->access = array(
   /* track_field_changes_track_revision_fields_support 849a3e18 */   'plugins' => array(
   /* track_field_changes_track_revision_fields_support 849a3e18 */     0 => array(
   /* track_field_changes_track_revision_fields_support 849a3e18 */       'name' => 'og_perm',
   /* track_field_changes_track_revision_fields_support 849a3e18 */       'settings' => array(
   /* track_field_changes_track_revision_fields_support 849a3e18 */         'perm' => 'administer group',
   /* track_field_changes_track_revision_fields_support 849a3e18 */       ),
   /* track_field_changes_track_revision_fields_support 849a3e18 */       'context' => array(
   /* track_field_changes_track_revision_fields_support 849a3e18 */         0 => 'logged-in-user',
   /* track_field_changes_track_revision_fields_support 849a3e18 */         1 => 'argument_entity_id:node_1',
   /* track_field_changes_track_revision_fields_support 849a3e18 */       ),
   /* track_field_changes_track_revision_fields_support 849a3e18 */       'not' => FALSE,
   /* track_field_changes_track_revision_fields_support 849a3e18 */     ),
   /* track_field_changes_track_revision_fields_support 849a3e18 */   ),
   /* track_field_changes_track_revision_fields_support 849a3e18 */ );
   /* track_field_changes_track_revision_fields_support 849a3e18 */ $pane->configuration = array(
   /* track_field_changes_track_revision_fields_support 849a3e18 */   'label' => 'title',
   /* track_field_changes_track_revision_fields_support 849a3e18 */   'formatter' => 'file_table',
   /* track_field_changes_track_revision_fields_support 849a3e18 */   'delta_limit' => '0',
   /* track_field_changes_track_revision_fields_support 849a3e18 */   'delta_offset' => '0',
   /* track_field_changes_track_revision_fields_support 849a3e18 */   'delta_reversed' => 0,
   /* track_field_changes_track_revision_fields_support 849a3e18 */   'formatter_settings' => array(
   /* track_field_changes_track_revision_fields_support 849a3e18 */     'field_formatter_class' => '',
   /* track_field_changes_track_revision_fields_support 849a3e18 */     'file_view_mode' => 'media_gallery_thumbnail',
   /* track_field_changes_track_revision_fields_support 849a3e18 */     'text' => 'Download [file:name]',
   /* track_field_changes_track_revision_fields_support 849a3e18 */   ),
   /* track_field_changes_track_revision_fields_support 849a3e18 */   'context' => 'argument_entity_id:node_1',
   /* track_field_changes_track_revision_fields_support 849a3e18 */   'override_title' => 1,
   /* track_field_changes_track_revision_fields_support 849a3e18 */   'override_title_text' => '',
   /* track_field_changes_track_revision_fields_support 849a3e18 */   'override_title_heading' => 'h2',
   /* track_field_changes_track_revision_fields_support 849a3e18 */ );
   /* track_field_changes_track_revision_fields_support 849a3e18 */ $pane->cache = array();
   /* track_field_changes_track_revision_fields_support 849a3e18 */ $pane->style = array(
   /* track_field_changes_track_revision_fields_support 849a3e18 */   'settings' => NULL,
   /* track_field_changes_track_revision_fields_support 849a3e18 */ );
   /* track_field_changes_track_revision_fields_support 849a3e18 */ $pane->css = array();
   /* track_field_changes_track_revision_fields_support 849a3e18 */ $pane->extras = array();
   /* track_field_changes_track_revision_fields_support 849a3e18 */ $pane->position = 1;
   /* track_field_changes_track_revision_fields_support 849a3e18 */ $pane->locks = array();
   /* track_field_changes_track_revision_fields_support 849a3e18 */ $pane->uuid = '849a3e18-760c-441b-be8d-9daf4aa5dbf7';
  $display->content['new-849a3e18-760c-441b-be8d-9daf4aa5dbf7'] = $pane;
  $display->panels['main_top'][1] = 'new-849a3e18-760c-441b-be8d-9daf4aa5dbf7';
   /* track_field_changes_track_revision_fields_support dd5aa1ae */ $pane = new stdClass();
   /* track_field_changes_track_revision_fields_support dd5aa1ae */ $pane->pid = 'new-dd5aa1ae-8b42-4c0b-8013-6526943857ae';
   /* track_field_changes_track_revision_fields_support dd5aa1ae */ $pane->panel = 'sidebar';
   /* track_field_changes_track_revision_fields_support dd5aa1ae */ $pane->type = 'views';
   /* track_field_changes_track_revision_fields_support dd5aa1ae */ $pane->subtype = 'support_details';
   /* track_field_changes_track_revision_fields_support dd5aa1ae */ $pane->shown = TRUE;
   /* track_field_changes_track_revision_fields_support dd5aa1ae */ $pane->access = array();
   /* track_field_changes_track_revision_fields_support dd5aa1ae */ $pane->configuration = array(
   /* track_field_changes_track_revision_fields_support dd5aa1ae */   'override_pager_settings' => 0,
   /* track_field_changes_track_revision_fields_support dd5aa1ae */   'use_pager' => 0,
   /* track_field_changes_track_revision_fields_support dd5aa1ae */   'nodes_per_page' => '1',
   /* track_field_changes_track_revision_fields_support dd5aa1ae */   'pager_id' => '0',
   /* track_field_changes_track_revision_fields_support dd5aa1ae */   'offset' => '0',
   /* track_field_changes_track_revision_fields_support dd5aa1ae */   'more_link' => 0,
   /* track_field_changes_track_revision_fields_support dd5aa1ae */   'feed_icons' => 0,
   /* track_field_changes_track_revision_fields_support dd5aa1ae */   'panel_args' => 1,
   /* track_field_changes_track_revision_fields_support dd5aa1ae */   'link_to_view' => 0,
   /* track_field_changes_track_revision_fields_support dd5aa1ae */   'args' => '',
   /* track_field_changes_track_revision_fields_support dd5aa1ae */   'url' => '',
   /* track_field_changes_track_revision_fields_support dd5aa1ae */   'display' => 'page',
   /* track_field_changes_track_revision_fields_support dd5aa1ae */   'context' => array(
   /* track_field_changes_track_revision_fields_support dd5aa1ae */     0 => '',
   /* track_field_changes_track_revision_fields_support dd5aa1ae */   ),
   /* track_field_changes_track_revision_fields_support dd5aa1ae */   'override_title' => 1,
   /* track_field_changes_track_revision_fields_support dd5aa1ae */   'override_title_text' => 'Request Details',
   /* track_field_changes_track_revision_fields_support dd5aa1ae */   'override_title_heading' => 'h3',
   /* track_field_changes_track_revision_fields_support dd5aa1ae */ );
   /* track_field_changes_track_revision_fields_support dd5aa1ae */ $pane->cache = array();
   /* track_field_changes_track_revision_fields_support dd5aa1ae */ $pane->style = array(
   /* track_field_changes_track_revision_fields_support dd5aa1ae */   'settings' => NULL,
   /* track_field_changes_track_revision_fields_support dd5aa1ae */ );
   /* track_field_changes_track_revision_fields_support dd5aa1ae */ $pane->css = array(
   /* track_field_changes_track_revision_fields_support dd5aa1ae */   'css_id' => '',
   /* track_field_changes_track_revision_fields_support dd5aa1ae */   'css_class' => 'request-detail',
   /* track_field_changes_track_revision_fields_support dd5aa1ae */ );
   /* track_field_changes_track_revision_fields_support dd5aa1ae */ $pane->extras = array();
   /* track_field_changes_track_revision_fields_support dd5aa1ae */ $pane->position = 0;
   /* track_field_changes_track_revision_fields_support dd5aa1ae */ $pane->locks = array();
   /* track_field_changes_track_revision_fields_support dd5aa1ae */ $pane->uuid = 'dd5aa1ae-8b42-4c0b-8013-6526943857ae';
  $display->content['new-dd5aa1ae-8b42-4c0b-8013-6526943857ae'] = $pane;
  $display->panels['sidebar'][0] = 'new-dd5aa1ae-8b42-4c0b-8013-6526943857ae';
   /* track_field_changes_track_revision_fields_support c070357a */ $pane = new stdClass();
   /* track_field_changes_track_revision_fields_support c070357a */ $pane->pid = 'new-c070357a-9be9-4b69-b019-b39759c0576a';
   /* track_field_changes_track_revision_fields_support c070357a */ $pane->panel = 'sidebar';
   /* track_field_changes_track_revision_fields_support c070357a */ $pane->type = 'views';
   /* track_field_changes_track_revision_fields_support c070357a */ $pane->subtype = 'support_details';
   /* track_field_changes_track_revision_fields_support c070357a */ $pane->shown = TRUE;
   /* track_field_changes_track_revision_fields_support c070357a */ $pane->access = array(
   /* track_field_changes_track_revision_fields_support c070357a */   'plugins' => array(
   /* track_field_changes_track_revision_fields_support c070357a */     0 => array(
   /* track_field_changes_track_revision_fields_support c070357a */       'name' => 'og_perm',
   /* track_field_changes_track_revision_fields_support c070357a */       'settings' => array(
   /* track_field_changes_track_revision_fields_support c070357a */         'perm' => 'administer group',
   /* track_field_changes_track_revision_fields_support c070357a */       ),
   /* track_field_changes_track_revision_fields_support c070357a */       'context' => array(
   /* track_field_changes_track_revision_fields_support c070357a */         0 => 'logged-in-user',
   /* track_field_changes_track_revision_fields_support c070357a */         1 => 'argument_entity_id:node_1',
   /* track_field_changes_track_revision_fields_support c070357a */       ),
   /* track_field_changes_track_revision_fields_support c070357a */       'not' => FALSE,
   /* track_field_changes_track_revision_fields_support c070357a */     ),
   /* track_field_changes_track_revision_fields_support c070357a */   ),
   /* track_field_changes_track_revision_fields_support c070357a */ );
   /* track_field_changes_track_revision_fields_support c070357a */ $pane->configuration = array(
   /* track_field_changes_track_revision_fields_support c070357a */   'override_pager_settings' => 0,
   /* track_field_changes_track_revision_fields_support c070357a */   'use_pager' => 0,
   /* track_field_changes_track_revision_fields_support c070357a */   'nodes_per_page' => '1',
   /* track_field_changes_track_revision_fields_support c070357a */   'pager_id' => '0',
   /* track_field_changes_track_revision_fields_support c070357a */   'offset' => '0',
   /* track_field_changes_track_revision_fields_support c070357a */   'more_link' => 0,
   /* track_field_changes_track_revision_fields_support c070357a */   'feed_icons' => 0,
   /* track_field_changes_track_revision_fields_support c070357a */   'panel_args' => 1,
   /* track_field_changes_track_revision_fields_support c070357a */   'link_to_view' => 0,
   /* track_field_changes_track_revision_fields_support c070357a */   'args' => '',
   /* track_field_changes_track_revision_fields_support c070357a */   'url' => '',
   /* track_field_changes_track_revision_fields_support c070357a */   'display' => 'page_1',
   /* track_field_changes_track_revision_fields_support c070357a */   'context' => array(
   /* track_field_changes_track_revision_fields_support c070357a */     0 => '',
   /* track_field_changes_track_revision_fields_support c070357a */   ),
   /* track_field_changes_track_revision_fields_support c070357a */   'override_title' => 1,
   /* track_field_changes_track_revision_fields_support c070357a */   'override_title_text' => 'Reporter Details',
   /* track_field_changes_track_revision_fields_support c070357a */   'override_title_heading' => 'h3',
   /* track_field_changes_track_revision_fields_support c070357a */ );
   /* track_field_changes_track_revision_fields_support c070357a */ $pane->cache = array();
   /* track_field_changes_track_revision_fields_support c070357a */ $pane->style = array(
   /* track_field_changes_track_revision_fields_support c070357a */   'settings' => NULL,
   /* track_field_changes_track_revision_fields_support c070357a */ );
   /* track_field_changes_track_revision_fields_support c070357a */ $pane->css = array(
   /* track_field_changes_track_revision_fields_support c070357a */   'css_id' => '',
   /* track_field_changes_track_revision_fields_support c070357a */   'css_class' => 'reporter-detail',
   /* track_field_changes_track_revision_fields_support c070357a */ );
   /* track_field_changes_track_revision_fields_support c070357a */ $pane->extras = array();
   /* track_field_changes_track_revision_fields_support c070357a */ $pane->position = 1;
   /* track_field_changes_track_revision_fields_support c070357a */ $pane->locks = array();
   /* track_field_changes_track_revision_fields_support c070357a */ $pane->uuid = 'c070357a-9be9-4b69-b019-b39759c0576a';
  $display->content['new-c070357a-9be9-4b69-b019-b39759c0576a'] = $pane;
  $display->panels['sidebar'][1] = 'new-c070357a-9be9-4b69-b019-b39759c0576a';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view__panel_context_36ed0441-e689-46d0-8c5a-a0c030d786c1'] = $handler;

  return $export;
}
