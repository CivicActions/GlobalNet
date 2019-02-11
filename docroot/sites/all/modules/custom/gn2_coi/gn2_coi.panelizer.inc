<?php
/**
 * @file
 * gn2_coi.panelizer.inc
 */

/**
 * Implements hook_panelizer_defaults().
 */
function gn2_coi_panelizer_defaults() {
  $export = array();

   /* node:coi:default */ $panelizer = new stdClass();
   /* node:coi:default */ $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
   /* node:coi:default */ $panelizer->api_version = 1;
   /* node:coi:default */ $panelizer->title = 'Default';
   /* node:coi:default */ $panelizer->panelizer_type = 'node';
   /* node:coi:default */ $panelizer->panelizer_key = 'coi';
   /* node:coi:default */ $panelizer->access = array();
   /* node:coi:default */ $panelizer->view_mode = 'page_manager';
   /* node:coi:default */ $panelizer->name = 'node:coi:default';
   /* node:coi:default */ $panelizer->css_id = '';
   /* node:coi:default */ $panelizer->css_class = '';
   /* node:coi:default */ $panelizer->css = '';
   /* node:coi:default */ $panelizer->no_blocks = FALSE;
   /* node:coi:default */ $panelizer->title_element = 'H2';
   /* node:coi:default */ $panelizer->link_to_entity = TRUE;
   /* node:coi:default */ $panelizer->extra = array();
   /* node:coi:default */ $panelizer->pipeline = 'standard';
   /* node:coi:default */ $panelizer->contexts = array();
   /* node:coi:default */ $panelizer->relationships = array();
   /* node:coi:default 32e7c80f */ $display = new panels_display();
   /* node:coi:default 32e7c80f */ $display->layout = 'group_layout';
   /* node:coi:default 32e7c80f */ $display->layout_settings = array();
   /* node:coi:default 32e7c80f */ $display->panel_settings = array(
   /* node:coi:default 32e7c80f */   'style_settings' => array(
   /* node:coi:default 32e7c80f */     'default' => NULL,
   /* node:coi:default 32e7c80f */     'group_maintopleft' => NULL,
   /* node:coi:default 32e7c80f */     'group_maintopright' => NULL,
   /* node:coi:default 32e7c80f */     'group_mainbanner' => NULL,
   /* node:coi:default 32e7c80f */     'group_sidebar' => NULL,
   /* node:coi:default 32e7c80f */     'group_maintabs' => NULL,
   /* node:coi:default 32e7c80f */   ),
   /* node:coi:default 32e7c80f */   'group_maintabs' => array(
   /* node:coi:default 32e7c80f */     'style' => 'tabs',
   /* node:coi:default 32e7c80f */   ),
   /* node:coi:default 32e7c80f */ );
   /* node:coi:default 32e7c80f */ $display->cache = array();
   /* node:coi:default 32e7c80f */ $display->title = '%node:title';
   /* node:coi:default 32e7c80f */ $display->uuid = '32e7c80f-89bd-4972-8cc3-59bf3e0fee42';
   /* node:coi:default 32e7c80f */ $display->storage_type = 'panelizer_default';
   /* node:coi:default 32e7c80f */ $display->storage_id = 'node:coi:default';
  $display->content = array();
  $display->panels = array();
   /* node:coi:default 1453f3de */ $pane = new stdClass();
   /* node:coi:default 1453f3de */ $pane->pid = 'new-1453f3de-bea5-4785-b0df-ae99ff89d3fa';
   /* node:coi:default 1453f3de */ $pane->panel = 'group_mainbanner';
   /* node:coi:default 1453f3de */ $pane->type = 'views_panes';
   /* node:coi:default 1453f3de */ $pane->subtype = 'news_announcements_posts-panel_pane_mainimage_bodytext';
   /* node:coi:default 1453f3de */ $pane->shown = TRUE;
   /* node:coi:default 1453f3de */ $pane->access = array();
   /* node:coi:default 1453f3de */ $pane->configuration = array();
   /* node:coi:default 1453f3de */ $pane->cache = array();
   /* node:coi:default 1453f3de */ $pane->style = array(
   /* node:coi:default 1453f3de */   'settings' => NULL,
   /* node:coi:default 1453f3de */ );
   /* node:coi:default 1453f3de */ $pane->css = array();
   /* node:coi:default 1453f3de */ $pane->extras = array();
   /* node:coi:default 1453f3de */ $pane->position = 0;
   /* node:coi:default 1453f3de */ $pane->locks = array();
   /* node:coi:default 1453f3de */ $pane->uuid = '1453f3de-bea5-4785-b0df-ae99ff89d3fa';
  $display->content['new-1453f3de-bea5-4785-b0df-ae99ff89d3fa'] = $pane;
  $display->panels['group_mainbanner'][0] = 'new-1453f3de-bea5-4785-b0df-ae99ff89d3fa';
   /* node:coi:default 35db7c57 */ $pane = new stdClass();
   /* node:coi:default 35db7c57 */ $pane->pid = 'new-35db7c57-91bf-4656-a8f5-cd508d3f2809';
   /* node:coi:default 35db7c57 */ $pane->panel = 'group_mainbanner';
   /* node:coi:default 35db7c57 */ $pane->type = 'views_panes';
   /* node:coi:default 35db7c57 */ $pane->subtype = 'group_publications-panel_pane_1';
   /* node:coi:default 35db7c57 */ $pane->shown = TRUE;
   /* node:coi:default 35db7c57 */ $pane->access = array();
   /* node:coi:default 35db7c57 */ $pane->configuration = array();
   /* node:coi:default 35db7c57 */ $pane->cache = array();
   /* node:coi:default 35db7c57 */ $pane->style = array(
   /* node:coi:default 35db7c57 */   'settings' => NULL,
   /* node:coi:default 35db7c57 */ );
   /* node:coi:default 35db7c57 */ $pane->css = array();
   /* node:coi:default 35db7c57 */ $pane->extras = array();
   /* node:coi:default 35db7c57 */ $pane->position = 1;
   /* node:coi:default 35db7c57 */ $pane->locks = array();
   /* node:coi:default 35db7c57 */ $pane->uuid = '35db7c57-91bf-4656-a8f5-cd508d3f2809';
  $display->content['new-35db7c57-91bf-4656-a8f5-cd508d3f2809'] = $pane;
  $display->panels['group_mainbanner'][1] = 'new-35db7c57-91bf-4656-a8f5-cd508d3f2809';
   /* node:coi:default e39d6a0c */ $pane = new stdClass();
   /* node:coi:default e39d6a0c */ $pane->pid = 'new-e39d6a0c-2d3d-46a0-aa82-2e3315f7cae6';
   /* node:coi:default e39d6a0c */ $pane->panel = 'group_maintabs';
   /* node:coi:default e39d6a0c */ $pane->type = 'views_panes';
   /* node:coi:default e39d6a0c */ $pane->subtype = 'news_announcements_posts-panel_pane_23';
   /* node:coi:default e39d6a0c */ $pane->shown = TRUE;
   /* node:coi:default e39d6a0c */ $pane->access = array();
   /* node:coi:default e39d6a0c */ $pane->configuration = array(
   /* node:coi:default e39d6a0c */   'arguments' => array(
   /* node:coi:default e39d6a0c */     'type' => 'post',
   /* node:coi:default e39d6a0c */   ),
   /* node:coi:default e39d6a0c */   'context' => array(
   /* node:coi:default e39d6a0c */     1 => 'panelizer',
   /* node:coi:default e39d6a0c */   ),
   /* node:coi:default e39d6a0c */   'override_title' => 0,
   /* node:coi:default e39d6a0c */   'override_title_text' => '',
   /* node:coi:default e39d6a0c */   'override_title_heading' => 'h2',
   /* node:coi:default e39d6a0c */ );
   /* node:coi:default e39d6a0c */ $pane->cache = array();
   /* node:coi:default e39d6a0c */ $pane->style = array(
   /* node:coi:default e39d6a0c */   'settings' => NULL,
   /* node:coi:default e39d6a0c */ );
   /* node:coi:default e39d6a0c */ $pane->css = array();
   /* node:coi:default e39d6a0c */ $pane->extras = array();
   /* node:coi:default e39d6a0c */ $pane->position = 0;
   /* node:coi:default e39d6a0c */ $pane->locks = array();
   /* node:coi:default e39d6a0c */ $pane->uuid = 'e39d6a0c-2d3d-46a0-aa82-2e3315f7cae6';
  $display->content['new-e39d6a0c-2d3d-46a0-aa82-2e3315f7cae6'] = $pane;
  $display->panels['group_maintabs'][0] = 'new-e39d6a0c-2d3d-46a0-aa82-2e3315f7cae6';
   /* node:coi:default 400d4587 */ $pane = new stdClass();
   /* node:coi:default 400d4587 */ $pane->pid = 'new-400d4587-ac91-483a-bf34-5ed35fb70864';
   /* node:coi:default 400d4587 */ $pane->panel = 'group_maintabs';
   /* node:coi:default 400d4587 */ $pane->type = 'views_panes';
   /* node:coi:default 400d4587 */ $pane->subtype = 'resources-panel_pane_1';
   /* node:coi:default 400d4587 */ $pane->shown = TRUE;
   /* node:coi:default 400d4587 */ $pane->access = array();
   /* node:coi:default 400d4587 */ $pane->configuration = array(
   /* node:coi:default 400d4587 */   'context' => array(
   /* node:coi:default 400d4587 */     0 => 'panelizer',
   /* node:coi:default 400d4587 */   ),
   /* node:coi:default 400d4587 */ );
   /* node:coi:default 400d4587 */ $pane->cache = array();
   /* node:coi:default 400d4587 */ $pane->style = array(
   /* node:coi:default 400d4587 */   'settings' => NULL,
   /* node:coi:default 400d4587 */ );
   /* node:coi:default 400d4587 */ $pane->css = array();
   /* node:coi:default 400d4587 */ $pane->extras = array();
   /* node:coi:default 400d4587 */ $pane->position = 1;
   /* node:coi:default 400d4587 */ $pane->locks = array();
   /* node:coi:default 400d4587 */ $pane->uuid = '400d4587-ac91-483a-bf34-5ed35fb70864';
  $display->content['new-400d4587-ac91-483a-bf34-5ed35fb70864'] = $pane;
  $display->panels['group_maintabs'][1] = 'new-400d4587-ac91-483a-bf34-5ed35fb70864';
   /* node:coi:default 884f111a */ $pane = new stdClass();
   /* node:coi:default 884f111a */ $pane->pid = 'new-884f111a-9927-4534-8fc4-7d2c53f509aa';
   /* node:coi:default 884f111a */ $pane->panel = 'group_maintabs';
   /* node:coi:default 884f111a */ $pane->type = 'views_panes';
   /* node:coi:default 884f111a */ $pane->subtype = 'group_members-panel_pane_6';
   /* node:coi:default 884f111a */ $pane->shown = TRUE;
   /* node:coi:default 884f111a */ $pane->access = array();
   /* node:coi:default 884f111a */ $pane->configuration = array();
   /* node:coi:default 884f111a */ $pane->cache = array();
   /* node:coi:default 884f111a */ $pane->style = array(
   /* node:coi:default 884f111a */   'settings' => NULL,
   /* node:coi:default 884f111a */ );
   /* node:coi:default 884f111a */ $pane->css = array();
   /* node:coi:default 884f111a */ $pane->extras = array();
   /* node:coi:default 884f111a */ $pane->position = 2;
   /* node:coi:default 884f111a */ $pane->locks = array();
   /* node:coi:default 884f111a */ $pane->uuid = '884f111a-9927-4534-8fc4-7d2c53f509aa';
  $display->content['new-884f111a-9927-4534-8fc4-7d2c53f509aa'] = $pane;
  $display->panels['group_maintabs'][2] = 'new-884f111a-9927-4534-8fc4-7d2c53f509aa';
   /* node:coi:default bc9b93a2 */ $pane = new stdClass();
   /* node:coi:default bc9b93a2 */ $pane->pid = 'new-bc9b93a2-ad21-4523-85cf-d45225ee6d77';
   /* node:coi:default bc9b93a2 */ $pane->panel = 'group_maintabs';
   /* node:coi:default bc9b93a2 */ $pane->type = 'views_panes';
   /* node:coi:default bc9b93a2 */ $pane->subtype = 'subgroups-panel_pane_1';
   /* node:coi:default bc9b93a2 */ $pane->shown = TRUE;
   /* node:coi:default bc9b93a2 */ $pane->access = array();
   /* node:coi:default bc9b93a2 */ $pane->configuration = array();
   /* node:coi:default bc9b93a2 */ $pane->cache = array();
   /* node:coi:default bc9b93a2 */ $pane->style = array(
   /* node:coi:default bc9b93a2 */   'settings' => NULL,
   /* node:coi:default bc9b93a2 */ );
   /* node:coi:default bc9b93a2 */ $pane->css = array();
   /* node:coi:default bc9b93a2 */ $pane->extras = array();
   /* node:coi:default bc9b93a2 */ $pane->position = 3;
   /* node:coi:default bc9b93a2 */ $pane->locks = array();
   /* node:coi:default bc9b93a2 */ $pane->uuid = 'bc9b93a2-ad21-4523-85cf-d45225ee6d77';
  $display->content['new-bc9b93a2-ad21-4523-85cf-d45225ee6d77'] = $pane;
  $display->panels['group_maintabs'][3] = 'new-bc9b93a2-ad21-4523-85cf-d45225ee6d77';
   /* node:coi:default 04defa2f */ $pane = new stdClass();
   /* node:coi:default 04defa2f */ $pane->pid = 'new-04defa2f-4225-4c4d-af4f-6377b4cd078d';
   /* node:coi:default 04defa2f */ $pane->panel = 'group_maintopleft';
   /* node:coi:default 04defa2f */ $pane->type = 'node_title';
   /* node:coi:default 04defa2f */ $pane->subtype = 'node_title';
   /* node:coi:default 04defa2f */ $pane->shown = TRUE;
   /* node:coi:default 04defa2f */ $pane->access = array();
   /* node:coi:default 04defa2f */ $pane->configuration = array(
   /* node:coi:default 04defa2f */   'link' => 0,
   /* node:coi:default 04defa2f */   'markup' => 'h2',
   /* node:coi:default 04defa2f */   'id' => '',
   /* node:coi:default 04defa2f */   'class' => '',
   /* node:coi:default 04defa2f */   'context' => 'panelizer',
   /* node:coi:default 04defa2f */   'override_title' => 1,
   /* node:coi:default 04defa2f */   'override_title_text' => '',
   /* node:coi:default 04defa2f */   'override_title_heading' => 'h2',
   /* node:coi:default 04defa2f */ );
   /* node:coi:default 04defa2f */ $pane->cache = array();
   /* node:coi:default 04defa2f */ $pane->style = array(
   /* node:coi:default 04defa2f */   'settings' => NULL,
   /* node:coi:default 04defa2f */ );
   /* node:coi:default 04defa2f */ $pane->css = array();
   /* node:coi:default 04defa2f */ $pane->extras = array();
   /* node:coi:default 04defa2f */ $pane->position = 0;
   /* node:coi:default 04defa2f */ $pane->locks = array();
   /* node:coi:default 04defa2f */ $pane->uuid = '04defa2f-4225-4c4d-af4f-6377b4cd078d';
  $display->content['new-04defa2f-4225-4c4d-af4f-6377b4cd078d'] = $pane;
  $display->panels['group_maintopleft'][0] = 'new-04defa2f-4225-4c4d-af4f-6377b4cd078d';
   /* node:coi:default 3e241aca */ $pane = new stdClass();
   /* node:coi:default 3e241aca */ $pane->pid = 'new-3e241aca-dd97-4d8e-ae89-3c3ee1cc1b7d';
   /* node:coi:default 3e241aca */ $pane->panel = 'group_maintopright';
   /* node:coi:default 3e241aca */ $pane->type = 'entity_field';
   /* node:coi:default 3e241aca */ $pane->subtype = 'node:group_group';
   /* node:coi:default 3e241aca */ $pane->shown = TRUE;
   /* node:coi:default 3e241aca */ $pane->access = array(
   /* node:coi:default 3e241aca */   'plugins' => array(
   /* node:coi:default 3e241aca */     0 => array(
   /* node:coi:default 3e241aca */       'name' => 'og_member',
   /* node:coi:default 3e241aca */       'settings' => array(
   /* node:coi:default 3e241aca */         'state' => array(
   /* node:coi:default 3e241aca */           1 => '1',
   /* node:coi:default 3e241aca */         ),
   /* node:coi:default 3e241aca */       ),
   /* node:coi:default 3e241aca */       'context' => array(
   /* node:coi:default 3e241aca */         0 => 'logged-in-user',
   /* node:coi:default 3e241aca */         1 => 'panelizer',
   /* node:coi:default 3e241aca */       ),
   /* node:coi:default 3e241aca */       'not' => TRUE,
   /* node:coi:default 3e241aca */     ),
   /* node:coi:default 3e241aca */   ),
   /* node:coi:default 3e241aca */ );
   /* node:coi:default 3e241aca */ $pane->configuration = array(
   /* node:coi:default 3e241aca */   'label' => 'hidden',
   /* node:coi:default 3e241aca */   'formatter' => 'list_default',
   /* node:coi:default 3e241aca */   'delta_limit' => 0,
   /* node:coi:default 3e241aca */   'delta_offset' => '0',
   /* node:coi:default 3e241aca */   'delta_reversed' => FALSE,
   /* node:coi:default 3e241aca */   'formatter_settings' => array(),
   /* node:coi:default 3e241aca */   'context' => 'panelizer',
   /* node:coi:default 3e241aca */   'override_title' => 0,
   /* node:coi:default 3e241aca */   'override_title_text' => '',
   /* node:coi:default 3e241aca */   'override_title_heading' => 'h2',
   /* node:coi:default 3e241aca */ );
   /* node:coi:default 3e241aca */ $pane->cache = array();
   /* node:coi:default 3e241aca */ $pane->style = array(
   /* node:coi:default 3e241aca */   'settings' => NULL,
   /* node:coi:default 3e241aca */ );
   /* node:coi:default 3e241aca */ $pane->css = array();
   /* node:coi:default 3e241aca */ $pane->extras = array();
   /* node:coi:default 3e241aca */ $pane->position = 0;
   /* node:coi:default 3e241aca */ $pane->locks = array();
   /* node:coi:default 3e241aca */ $pane->uuid = '3e241aca-dd97-4d8e-ae89-3c3ee1cc1b7d';
  $display->content['new-3e241aca-dd97-4d8e-ae89-3c3ee1cc1b7d'] = $pane;
  $display->panels['group_maintopright'][0] = 'new-3e241aca-dd97-4d8e-ae89-3c3ee1cc1b7d';
   /* node:coi:default 4be32183 */ $pane = new stdClass();
   /* node:coi:default 4be32183 */ $pane->pid = 'new-4be32183-8041-4e54-8e7f-f1e4f7b790f8';
   /* node:coi:default 4be32183 */ $pane->panel = 'group_sidebar';
   /* node:coi:default 4be32183 */ $pane->type = 'panels_mini';
   /* node:coi:default 4be32183 */ $pane->subtype = 'group_admin_menu';
   /* node:coi:default 4be32183 */ $pane->shown = TRUE;
   /* node:coi:default 4be32183 */ $pane->access = array(
   /* node:coi:default 4be32183 */   'plugins' => array(
   /* node:coi:default 4be32183 */     0 => array(
   /* node:coi:default 4be32183 */       'name' => 'gn2_og_role',
   /* node:coi:default 4be32183 */       'settings' => array(
   /* node:coi:default 4be32183 */         'gn2_og_access_settings' => array(
   /* node:coi:default 4be32183 */           'org_manager' => 'org_manager',
   /* node:coi:default 4be32183 */           'group_manager' => 'group_manager',
   /* node:coi:default 4be32183 */           'PA Specialist' => 'PA Specialist',
   /* node:coi:default 4be32183 */           'Content Specialist' => 'Content Specialist',
   /* node:coi:default 4be32183 */           'hr_manager' => 0,
   /* node:coi:default 4be32183 */           'member' => 0,
   /* node:coi:default 4be32183 */         ),
   /* node:coi:default 4be32183 */       ),
   /* node:coi:default 4be32183 */       'context' => 'logged-in-user',
   /* node:coi:default 4be32183 */       'not' => FALSE,
   /* node:coi:default 4be32183 */     ),
   /* node:coi:default 4be32183 */   ),
   /* node:coi:default 4be32183 */ );
   /* node:coi:default 4be32183 */ $pane->configuration = array(
   /* node:coi:default 4be32183 */   'override_title' => 1,
   /* node:coi:default 4be32183 */   'override_title_text' => '',
   /* node:coi:default 4be32183 */   'override_title_heading' => 'h2',
   /* node:coi:default 4be32183 */ );
   /* node:coi:default 4be32183 */ $pane->cache = array();
   /* node:coi:default 4be32183 */ $pane->style = array(
   /* node:coi:default 4be32183 */   'settings' => NULL,
   /* node:coi:default 4be32183 */ );
   /* node:coi:default 4be32183 */ $pane->css = array();
   /* node:coi:default 4be32183 */ $pane->extras = array();
   /* node:coi:default 4be32183 */ $pane->position = 0;
   /* node:coi:default 4be32183 */ $pane->locks = array();
   /* node:coi:default 4be32183 */ $pane->uuid = '4be32183-8041-4e54-8e7f-f1e4f7b790f8';
  $display->content['new-4be32183-8041-4e54-8e7f-f1e4f7b790f8'] = $pane;
  $display->panels['group_sidebar'][0] = 'new-4be32183-8041-4e54-8e7f-f1e4f7b790f8';
   /* node:coi:default 5afaa451 */ $pane = new stdClass();
   /* node:coi:default 5afaa451 */ $pane->pid = 'new-5afaa451-0757-4ef2-927b-7395778bc5ad';
   /* node:coi:default 5afaa451 */ $pane->panel = 'group_sidebar';
   /* node:coi:default 5afaa451 */ $pane->type = 'block';
   /* node:coi:default 5afaa451 */ $pane->subtype = 'gn2_manager_access-gn2_manager_manage';
   /* node:coi:default 5afaa451 */ $pane->shown = TRUE;
   /* node:coi:default 5afaa451 */ $pane->access = array();
   /* node:coi:default 5afaa451 */ $pane->configuration = array(
   /* node:coi:default 5afaa451 */   'override_title' => 0,
   /* node:coi:default 5afaa451 */   'override_title_text' => '',
   /* node:coi:default 5afaa451 */   'override_title_heading' => 'h2',
   /* node:coi:default 5afaa451 */ );
   /* node:coi:default 5afaa451 */ $pane->cache = array();
   /* node:coi:default 5afaa451 */ $pane->style = array(
   /* node:coi:default 5afaa451 */   'settings' => NULL,
   /* node:coi:default 5afaa451 */ );
   /* node:coi:default 5afaa451 */ $pane->css = array();
   /* node:coi:default 5afaa451 */ $pane->extras = array();
   /* node:coi:default 5afaa451 */ $pane->position = 1;
   /* node:coi:default 5afaa451 */ $pane->locks = array();
   /* node:coi:default 5afaa451 */ $pane->uuid = '5afaa451-0757-4ef2-927b-7395778bc5ad';
  $display->content['new-5afaa451-0757-4ef2-927b-7395778bc5ad'] = $pane;
  $display->panels['group_sidebar'][1] = 'new-5afaa451-0757-4ef2-927b-7395778bc5ad';
   /* node:coi:default 9f510698 */ $pane = new stdClass();
   /* node:coi:default 9f510698 */ $pane->pid = 'new-9f510698-d36c-4c3a-a391-d1f5cd567f78';
   /* node:coi:default 9f510698 */ $pane->panel = 'group_sidebar';
   /* node:coi:default 9f510698 */ $pane->type = 'custom';
   /* node:coi:default 9f510698 */ $pane->subtype = 'group_help_accordion';
   /* node:coi:default 9f510698 */ $pane->shown = TRUE;
   /* node:coi:default 9f510698 */ $pane->access = array();
   /* node:coi:default 9f510698 */ $pane->configuration = array(
   /* node:coi:default 9f510698 */   'admin_title' => '',
   /* node:coi:default 9f510698 */   'title' => '',
   /* node:coi:default 9f510698 */   'body' => '',
   /* node:coi:default 9f510698 */   'format' => 'filtered_html',
   /* node:coi:default 9f510698 */   'substitute' => TRUE,
   /* node:coi:default 9f510698 */ );
   /* node:coi:default 9f510698 */ $pane->cache = array();
   /* node:coi:default 9f510698 */ $pane->style = array(
   /* node:coi:default 9f510698 */   'settings' => NULL,
   /* node:coi:default 9f510698 */ );
   /* node:coi:default 9f510698 */ $pane->css = array();
   /* node:coi:default 9f510698 */ $pane->extras = array();
   /* node:coi:default 9f510698 */ $pane->position = 2;
   /* node:coi:default 9f510698 */ $pane->locks = array();
   /* node:coi:default 9f510698 */ $pane->uuid = '9f510698-d36c-4c3a-a391-d1f5cd567f78';
  $display->content['new-9f510698-d36c-4c3a-a391-d1f5cd567f78'] = $pane;
  $display->panels['group_sidebar'][2] = 'new-9f510698-d36c-4c3a-a391-d1f5cd567f78';
   /* node:coi:default 66c9bb50 */ $pane = new stdClass();
   /* node:coi:default 66c9bb50 */ $pane->pid = 'new-66c9bb50-3f82-49d1-b4e9-7165af240e10';
   /* node:coi:default 66c9bb50 */ $pane->panel = 'group_sidebar';
   /* node:coi:default 66c9bb50 */ $pane->type = 'views';
   /* node:coi:default 66c9bb50 */ $pane->subtype = 'news_announcements_posts';
   /* node:coi:default 66c9bb50 */ $pane->shown = TRUE;
   /* node:coi:default 66c9bb50 */ $pane->access = array();
   /* node:coi:default 66c9bb50 */ $pane->configuration = array(
   /* node:coi:default 66c9bb50 */   'override_pager_settings' => 0,
   /* node:coi:default 66c9bb50 */   'use_pager' => 0,
   /* node:coi:default 66c9bb50 */   'nodes_per_page' => '3',
   /* node:coi:default 66c9bb50 */   'pager_id' => '0',
   /* node:coi:default 66c9bb50 */   'offset' => '0',
   /* node:coi:default 66c9bb50 */   'more_link' => 0,
   /* node:coi:default 66c9bb50 */   'feed_icons' => 0,
   /* node:coi:default 66c9bb50 */   'panel_args' => 0,
   /* node:coi:default 66c9bb50 */   'link_to_view' => 0,
   /* node:coi:default 66c9bb50 */   'args' => '',
   /* node:coi:default 66c9bb50 */   'url' => '',
   /* node:coi:default 66c9bb50 */   'display' => 'block_2',
   /* node:coi:default 66c9bb50 */   'context' => array(
   /* node:coi:default 66c9bb50 */     0 => 'panelizer.nid',
   /* node:coi:default 66c9bb50 */   ),
   /* node:coi:default 66c9bb50 */   'override_title' => 1,
   /* node:coi:default 66c9bb50 */   'override_title_text' => 'ANNOUNCEMENTS',
   /* node:coi:default 66c9bb50 */   'override_title_heading' => 'h3',
   /* node:coi:default 66c9bb50 */ );
   /* node:coi:default 66c9bb50 */ $pane->cache = array();
   /* node:coi:default 66c9bb50 */ $pane->style = array(
   /* node:coi:default 66c9bb50 */   'settings' => array(
   /* node:coi:default 66c9bb50 */     'clean_markup' => array(
   /* node:coi:default 66c9bb50 */       'pane_wrapper' => 'div',
   /* node:coi:default 66c9bb50 */       'additional_pane_classes' => 'panel-pane sidebar-subheading',
   /* node:coi:default 66c9bb50 */       'additional_pane_attributes' => '',
   /* node:coi:default 66c9bb50 */       'enable_inner_div' => 0,
   /* node:coi:default 66c9bb50 */       'title_wrapper' => 'h3',
   /* node:coi:default 66c9bb50 */       'title_hide' => 0,
   /* node:coi:default 66c9bb50 */       'content_wrapper' => 'none',
   /* node:coi:default 66c9bb50 */     ),
   /* node:coi:default 66c9bb50 */   ),
   /* node:coi:default 66c9bb50 */   'style' => 'clean_element',
   /* node:coi:default 66c9bb50 */ );
   /* node:coi:default 66c9bb50 */ $pane->css = array();
   /* node:coi:default 66c9bb50 */ $pane->extras = array();
   /* node:coi:default 66c9bb50 */ $pane->position = 3;
   /* node:coi:default 66c9bb50 */ $pane->locks = array();
   /* node:coi:default 66c9bb50 */ $pane->uuid = '66c9bb50-3f82-49d1-b4e9-7165af240e10';
  $display->content['new-66c9bb50-3f82-49d1-b4e9-7165af240e10'] = $pane;
  $display->panels['group_sidebar'][3] = 'new-66c9bb50-3f82-49d1-b4e9-7165af240e10';
   /* node:coi:default dcecbfd1 */ $pane = new stdClass();
   /* node:coi:default dcecbfd1 */ $pane->pid = 'new-dcecbfd1-2456-41bc-b0b1-91b1b89cf1e7';
   /* node:coi:default dcecbfd1 */ $pane->panel = 'group_sidebar';
   /* node:coi:default dcecbfd1 */ $pane->type = 'panels_mini';
   /* node:coi:default dcecbfd1 */ $pane->subtype = 'upcoming_events_block';
   /* node:coi:default dcecbfd1 */ $pane->shown = TRUE;
   /* node:coi:default dcecbfd1 */ $pane->access = array();
   /* node:coi:default dcecbfd1 */ $pane->configuration = array(
   /* node:coi:default dcecbfd1 */   'override_title' => 0,
   /* node:coi:default dcecbfd1 */   'override_title_text' => '',
   /* node:coi:default dcecbfd1 */   'override_title_heading' => 'h2',
   /* node:coi:default dcecbfd1 */ );
   /* node:coi:default dcecbfd1 */ $pane->cache = array();
   /* node:coi:default dcecbfd1 */ $pane->style = array(
   /* node:coi:default dcecbfd1 */   'settings' => array(
   /* node:coi:default dcecbfd1 */     'clean_markup' => array(
   /* node:coi:default dcecbfd1 */       'pane_wrapper' => 'div',
   /* node:coi:default dcecbfd1 */       'additional_pane_classes' => 'panel-pane sidebar-subheading block__highlighted--lightbg',
   /* node:coi:default dcecbfd1 */       'additional_pane_attributes' => '',
   /* node:coi:default dcecbfd1 */       'enable_inner_div' => 0,
   /* node:coi:default dcecbfd1 */       'title_wrapper' => 'h3',
   /* node:coi:default dcecbfd1 */       'title_hide' => 0,
   /* node:coi:default dcecbfd1 */       'content_wrapper' => 'none',
   /* node:coi:default dcecbfd1 */     ),
   /* node:coi:default dcecbfd1 */   ),
   /* node:coi:default dcecbfd1 */   'style' => 'clean_element',
   /* node:coi:default dcecbfd1 */ );
   /* node:coi:default dcecbfd1 */ $pane->css = array();
   /* node:coi:default dcecbfd1 */ $pane->extras = array();
   /* node:coi:default dcecbfd1 */ $pane->position = 4;
   /* node:coi:default dcecbfd1 */ $pane->locks = array();
   /* node:coi:default dcecbfd1 */ $pane->uuid = 'dcecbfd1-2456-41bc-b0b1-91b1b89cf1e7';
  $display->content['new-dcecbfd1-2456-41bc-b0b1-91b1b89cf1e7'] = $pane;
  $display->panels['group_sidebar'][4] = 'new-dcecbfd1-2456-41bc-b0b1-91b1b89cf1e7';
   /* node:coi:default 0117e4fd */ $pane = new stdClass();
   /* node:coi:default 0117e4fd */ $pane->pid = 'new-0117e4fd-86c8-4706-a370-ad28e397979b';
   /* node:coi:default 0117e4fd */ $pane->panel = 'group_sidebar';
   /* node:coi:default 0117e4fd */ $pane->type = 'views_panes';
   /* node:coi:default 0117e4fd */ $pane->subtype = 'group_members-panel_pane_1';
   /* node:coi:default 0117e4fd */ $pane->shown = TRUE;
   /* node:coi:default 0117e4fd */ $pane->access = array();
   /* node:coi:default 0117e4fd */ $pane->configuration = array(
   /* node:coi:default 0117e4fd */   'override_title' => 1,
   /* node:coi:default 0117e4fd */   'override_title_text' => 'Group Leadership',
   /* node:coi:default 0117e4fd */   'override_title_heading' => 'h3',
   /* node:coi:default 0117e4fd */ );
   /* node:coi:default 0117e4fd */ $pane->cache = array();
   /* node:coi:default 0117e4fd */ $pane->style = array(
   /* node:coi:default 0117e4fd */   'settings' => array(
   /* node:coi:default 0117e4fd */     'clean_markup' => array(
   /* node:coi:default 0117e4fd */       'pane_wrapper' => 'div',
   /* node:coi:default 0117e4fd */       'additional_pane_classes' => 'panel-pane sidebar-subheading ',
   /* node:coi:default 0117e4fd */       'additional_pane_attributes' => '',
   /* node:coi:default 0117e4fd */       'enable_inner_div' => 0,
   /* node:coi:default 0117e4fd */       'title_wrapper' => 'h3',
   /* node:coi:default 0117e4fd */       'title_hide' => 0,
   /* node:coi:default 0117e4fd */       'content_wrapper' => 'none',
   /* node:coi:default 0117e4fd */     ),
   /* node:coi:default 0117e4fd */   ),
   /* node:coi:default 0117e4fd */   'style' => 'clean_element',
   /* node:coi:default 0117e4fd */ );
   /* node:coi:default 0117e4fd */ $pane->css = array();
   /* node:coi:default 0117e4fd */ $pane->extras = array();
   /* node:coi:default 0117e4fd */ $pane->position = 5;
   /* node:coi:default 0117e4fd */ $pane->locks = array();
   /* node:coi:default 0117e4fd */ $pane->uuid = '0117e4fd-86c8-4706-a370-ad28e397979b';
  $display->content['new-0117e4fd-86c8-4706-a370-ad28e397979b'] = $pane;
  $display->panels['group_sidebar'][5] = 'new-0117e4fd-86c8-4706-a370-ad28e397979b';
   /* node:coi:default 71dd8b8f */ $pane = new stdClass();
   /* node:coi:default 71dd8b8f */ $pane->pid = 'new-71dd8b8f-f701-4c52-9b34-891d53793ec2';
   /* node:coi:default 71dd8b8f */ $pane->panel = 'group_sidebar';
   /* node:coi:default 71dd8b8f */ $pane->type = 'entity_field';
   /* node:coi:default 71dd8b8f */ $pane->subtype = 'node:field_rec_links';
   /* node:coi:default 71dd8b8f */ $pane->shown = TRUE;
   /* node:coi:default 71dd8b8f */ $pane->access = array();
   /* node:coi:default 71dd8b8f */ $pane->configuration = array(
   /* node:coi:default 71dd8b8f */   'label' => 'hidden',
   /* node:coi:default 71dd8b8f */   'formatter' => 'link_default',
   /* node:coi:default 71dd8b8f */   'delta_limit' => '0',
   /* node:coi:default 71dd8b8f */   'delta_offset' => '0',
   /* node:coi:default 71dd8b8f */   'delta_reversed' => 0,
   /* node:coi:default 71dd8b8f */   'formatter_settings' => array(
   /* node:coi:default 71dd8b8f */     'field_formatter_class' => '',
   /* node:coi:default 71dd8b8f */   ),
   /* node:coi:default 71dd8b8f */   'context' => 'panelizer',
   /* node:coi:default 71dd8b8f */   'override_title' => 1,
   /* node:coi:default 71dd8b8f */   'override_title_text' => 'RECOMMENDED LINKS',
   /* node:coi:default 71dd8b8f */   'override_title_heading' => 'h3',
   /* node:coi:default 71dd8b8f */ );
   /* node:coi:default 71dd8b8f */ $pane->cache = array();
   /* node:coi:default 71dd8b8f */ $pane->style = array(
   /* node:coi:default 71dd8b8f */   'settings' => array(
   /* node:coi:default 71dd8b8f */     'clean_markup' => array(
   /* node:coi:default 71dd8b8f */       'pane_wrapper' => 'div',
   /* node:coi:default 71dd8b8f */       'additional_pane_classes' => 'panel-pane sidebar-subheading fancy-bullets',
   /* node:coi:default 71dd8b8f */       'additional_pane_attributes' => '',
   /* node:coi:default 71dd8b8f */       'enable_inner_div' => 0,
   /* node:coi:default 71dd8b8f */       'title_wrapper' => 'h3',
   /* node:coi:default 71dd8b8f */       'title_hide' => 0,
   /* node:coi:default 71dd8b8f */       'content_wrapper' => 'none',
   /* node:coi:default 71dd8b8f */     ),
   /* node:coi:default 71dd8b8f */   ),
   /* node:coi:default 71dd8b8f */   'style' => 'clean_element',
   /* node:coi:default 71dd8b8f */ );
   /* node:coi:default 71dd8b8f */ $pane->css = array();
   /* node:coi:default 71dd8b8f */ $pane->extras = array();
   /* node:coi:default 71dd8b8f */ $pane->position = 6;
   /* node:coi:default 71dd8b8f */ $pane->locks = array();
   /* node:coi:default 71dd8b8f */ $pane->uuid = '71dd8b8f-f701-4c52-9b34-891d53793ec2';
  $display->content['new-71dd8b8f-f701-4c52-9b34-891d53793ec2'] = $pane;
  $display->panels['group_sidebar'][6] = 'new-71dd8b8f-f701-4c52-9b34-891d53793ec2';
   /* node:coi:default c5c5e9fb */ $pane = new stdClass();
   /* node:coi:default c5c5e9fb */ $pane->pid = 'new-c5c5e9fb-5625-48d8-9f73-61ae44145a86';
   /* node:coi:default c5c5e9fb */ $pane->panel = 'group_sidebar';
   /* node:coi:default c5c5e9fb */ $pane->type = 'views_panes';
   /* node:coi:default c5c5e9fb */ $pane->subtype = 'group_polls-panel_pane_1';
   /* node:coi:default c5c5e9fb */ $pane->shown = TRUE;
   /* node:coi:default c5c5e9fb */ $pane->access = array();
   /* node:coi:default c5c5e9fb */ $pane->configuration = array();
   /* node:coi:default c5c5e9fb */ $pane->cache = array();
   /* node:coi:default c5c5e9fb */ $pane->style = array(
   /* node:coi:default c5c5e9fb */   'settings' => array(
   /* node:coi:default c5c5e9fb */     'clean_markup' => array(
   /* node:coi:default c5c5e9fb */       'pane_wrapper' => 'div',
   /* node:coi:default c5c5e9fb */       'additional_pane_classes' => 'panel-pane sidebar-subheading block__highlighted--lightbg poll-pane',
   /* node:coi:default c5c5e9fb */       'additional_pane_attributes' => '',
   /* node:coi:default c5c5e9fb */       'enable_inner_div' => 0,
   /* node:coi:default c5c5e9fb */       'title_wrapper' => 'h3',
   /* node:coi:default c5c5e9fb */       'title_hide' => 0,
   /* node:coi:default c5c5e9fb */       'content_wrapper' => 'none',
   /* node:coi:default c5c5e9fb */     ),
   /* node:coi:default c5c5e9fb */   ),
   /* node:coi:default c5c5e9fb */   'style' => 'clean_element',
   /* node:coi:default c5c5e9fb */ );
   /* node:coi:default c5c5e9fb */ $pane->css = array();
   /* node:coi:default c5c5e9fb */ $pane->extras = array();
   /* node:coi:default c5c5e9fb */ $pane->position = 7;
   /* node:coi:default c5c5e9fb */ $pane->locks = array();
   /* node:coi:default c5c5e9fb */ $pane->uuid = 'c5c5e9fb-5625-48d8-9f73-61ae44145a86';
  $display->content['new-c5c5e9fb-5625-48d8-9f73-61ae44145a86'] = $pane;
  $display->panels['group_sidebar'][7] = 'new-c5c5e9fb-5625-48d8-9f73-61ae44145a86';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $panelizer->display = $display;
  $export['node:coi:default'] = $panelizer;

   /* node:coi:default:default */ $panelizer = new stdClass();
   /* node:coi:default:default */ $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
   /* node:coi:default:default */ $panelizer->api_version = 1;
   /* node:coi:default:default */ $panelizer->title = 'Default';
   /* node:coi:default:default */ $panelizer->panelizer_type = 'node';
   /* node:coi:default:default */ $panelizer->panelizer_key = 'coi';
   /* node:coi:default:default */ $panelizer->access = array();
   /* node:coi:default:default */ $panelizer->view_mode = 'default';
   /* node:coi:default:default */ $panelizer->name = 'node:coi:default:default';
   /* node:coi:default:default */ $panelizer->css_id = '';
   /* node:coi:default:default */ $panelizer->css_class = '';
   /* node:coi:default:default */ $panelizer->css = '';
   /* node:coi:default:default */ $panelizer->no_blocks = FALSE;
   /* node:coi:default:default */ $panelizer->title_element = 'H2';
   /* node:coi:default:default */ $panelizer->link_to_entity = TRUE;
   /* node:coi:default:default */ $panelizer->extra = array();
   /* node:coi:default:default */ $panelizer->pipeline = 'standard';
   /* node:coi:default:default */ $panelizer->contexts = array();
   /* node:coi:default:default */ $panelizer->relationships = array();
   /* node:coi:default:default 4a555b77 */ $display = new panels_display();
   /* node:coi:default:default 4a555b77 */ $display->layout = 'flexible';
   /* node:coi:default:default 4a555b77 */ $display->layout_settings = array();
   /* node:coi:default:default 4a555b77 */ $display->panel_settings = array();
   /* node:coi:default:default 4a555b77 */ $display->cache = array();
   /* node:coi:default:default 4a555b77 */ $display->title = '%node:title';
   /* node:coi:default:default 4a555b77 */ $display->uuid = '4a555b77-515e-4097-83d5-82d8fb6e3e9d';
   /* node:coi:default:default 4a555b77 */ $display->storage_type = 'panelizer_default';
   /* node:coi:default:default 4a555b77 */ $display->storage_id = 'node:coi:default:default';
  $display->content = array();
  $display->panels = array();
   /* node:coi:default:default 205df8cd */ $pane = new stdClass();
   /* node:coi:default:default 205df8cd */ $pane->pid = 'new-205df8cd-53ad-40d2-a9de-e33020c32d1f';
   /* node:coi:default:default 205df8cd */ $pane->panel = 'center';
   /* node:coi:default:default 205df8cd */ $pane->type = 'entity_field';
   /* node:coi:default:default 205df8cd */ $pane->subtype = 'node:body';
   /* node:coi:default:default 205df8cd */ $pane->shown = TRUE;
   /* node:coi:default:default 205df8cd */ $pane->access = array();
   /* node:coi:default:default 205df8cd */ $pane->configuration = array(
   /* node:coi:default:default 205df8cd */   'label' => 'hidden',
   /* node:coi:default:default 205df8cd */   'formatter' => 'text_default',
   /* node:coi:default:default 205df8cd */   'delta_limit' => 0,
   /* node:coi:default:default 205df8cd */   'delta_offset' => '0',
   /* node:coi:default:default 205df8cd */   'delta_reversed' => FALSE,
   /* node:coi:default:default 205df8cd */   'formatter_settings' => array(
   /* node:coi:default:default 205df8cd */     'field_formatter_class' => '',
   /* node:coi:default:default 205df8cd */   ),
   /* node:coi:default:default 205df8cd */   'context' => 'panelizer',
   /* node:coi:default:default 205df8cd */ );
   /* node:coi:default:default 205df8cd */ $pane->cache = array();
   /* node:coi:default:default 205df8cd */ $pane->style = array();
   /* node:coi:default:default 205df8cd */ $pane->css = array();
   /* node:coi:default:default 205df8cd */ $pane->extras = array();
   /* node:coi:default:default 205df8cd */ $pane->position = 0;
   /* node:coi:default:default 205df8cd */ $pane->locks = array();
   /* node:coi:default:default 205df8cd */ $pane->uuid = '205df8cd-53ad-40d2-a9de-e33020c32d1f';
  $display->content['new-205df8cd-53ad-40d2-a9de-e33020c32d1f'] = $pane;
  $display->panels['center'][0] = 'new-205df8cd-53ad-40d2-a9de-e33020c32d1f';
   /* node:coi:default:default 923a3552 */ $pane = new stdClass();
   /* node:coi:default:default 923a3552 */ $pane->pid = 'new-923a3552-7047-432a-b666-d783b5a2bcd8';
   /* node:coi:default:default 923a3552 */ $pane->panel = 'center';
   /* node:coi:default:default 923a3552 */ $pane->type = 'entity_field';
   /* node:coi:default:default 923a3552 */ $pane->subtype = 'node:og_group_ref';
   /* node:coi:default:default 923a3552 */ $pane->shown = TRUE;
   /* node:coi:default:default 923a3552 */ $pane->access = array();
   /* node:coi:default:default 923a3552 */ $pane->configuration = array(
   /* node:coi:default:default 923a3552 */   'label' => 'above',
   /* node:coi:default:default 923a3552 */   'formatter' => 'og_list_default',
   /* node:coi:default:default 923a3552 */   'delta_limit' => 0,
   /* node:coi:default:default 923a3552 */   'delta_offset' => '0',
   /* node:coi:default:default 923a3552 */   'delta_reversed' => FALSE,
   /* node:coi:default:default 923a3552 */   'formatter_settings' => array(
   /* node:coi:default:default 923a3552 */     'field_formatter_class' => '',
   /* node:coi:default:default 923a3552 */   ),
   /* node:coi:default:default 923a3552 */   'context' => 'panelizer',
   /* node:coi:default:default 923a3552 */ );
   /* node:coi:default:default 923a3552 */ $pane->cache = array();
   /* node:coi:default:default 923a3552 */ $pane->style = array();
   /* node:coi:default:default 923a3552 */ $pane->css = array();
   /* node:coi:default:default 923a3552 */ $pane->extras = array();
   /* node:coi:default:default 923a3552 */ $pane->position = 0;
   /* node:coi:default:default 923a3552 */ $pane->locks = array();
   /* node:coi:default:default 923a3552 */ $pane->uuid = '923a3552-7047-432a-b666-d783b5a2bcd8';
  $display->content['new-923a3552-7047-432a-b666-d783b5a2bcd8'] = $pane;
  $display->panels['center'][1] = 'new-923a3552-7047-432a-b666-d783b5a2bcd8';
   /* node:coi:default:default a2fbecdc */ $pane = new stdClass();
   /* node:coi:default:default a2fbecdc */ $pane->pid = 'new-a2fbecdc-5014-45ca-8caf-bff92c2195e8';
   /* node:coi:default:default a2fbecdc */ $pane->panel = 'center';
   /* node:coi:default:default a2fbecdc */ $pane->type = 'entity_field';
   /* node:coi:default:default a2fbecdc */ $pane->subtype = 'node:og_roles_permissions';
   /* node:coi:default:default a2fbecdc */ $pane->shown = TRUE;
   /* node:coi:default:default a2fbecdc */ $pane->access = array();
   /* node:coi:default:default a2fbecdc */ $pane->configuration = array(
   /* node:coi:default:default a2fbecdc */   'label' => 'above',
   /* node:coi:default:default a2fbecdc */   'formatter' => 'list_default',
   /* node:coi:default:default a2fbecdc */   'delta_limit' => 0,
   /* node:coi:default:default a2fbecdc */   'delta_offset' => '0',
   /* node:coi:default:default a2fbecdc */   'delta_reversed' => FALSE,
   /* node:coi:default:default a2fbecdc */   'formatter_settings' => array(
   /* node:coi:default:default a2fbecdc */     'field_formatter_class' => '',
   /* node:coi:default:default a2fbecdc */   ),
   /* node:coi:default:default a2fbecdc */   'context' => 'panelizer',
   /* node:coi:default:default a2fbecdc */ );
   /* node:coi:default:default a2fbecdc */ $pane->cache = array();
   /* node:coi:default:default a2fbecdc */ $pane->style = array();
   /* node:coi:default:default a2fbecdc */ $pane->css = array();
   /* node:coi:default:default a2fbecdc */ $pane->extras = array();
   /* node:coi:default:default a2fbecdc */ $pane->position = 0;
   /* node:coi:default:default a2fbecdc */ $pane->locks = array();
   /* node:coi:default:default a2fbecdc */ $pane->uuid = 'a2fbecdc-5014-45ca-8caf-bff92c2195e8';
  $display->content['new-a2fbecdc-5014-45ca-8caf-bff92c2195e8'] = $pane;
  $display->panels['center'][2] = 'new-a2fbecdc-5014-45ca-8caf-bff92c2195e8';
   /* node:coi:default:default ddd4fd7e */ $pane = new stdClass();
   /* node:coi:default:default ddd4fd7e */ $pane->pid = 'new-ddd4fd7e-0db7-4f94-95b9-983c113dea76';
   /* node:coi:default:default ddd4fd7e */ $pane->panel = 'center';
   /* node:coi:default:default ddd4fd7e */ $pane->type = 'entity_field';
   /* node:coi:default:default ddd4fd7e */ $pane->subtype = 'node:group_access';
   /* node:coi:default:default ddd4fd7e */ $pane->shown = TRUE;
   /* node:coi:default:default ddd4fd7e */ $pane->access = array();
   /* node:coi:default:default ddd4fd7e */ $pane->configuration = array(
   /* node:coi:default:default ddd4fd7e */   'label' => 'above',
   /* node:coi:default:default ddd4fd7e */   'formatter' => 'list_default',
   /* node:coi:default:default ddd4fd7e */   'delta_limit' => 0,
   /* node:coi:default:default ddd4fd7e */   'delta_offset' => '0',
   /* node:coi:default:default ddd4fd7e */   'delta_reversed' => FALSE,
   /* node:coi:default:default ddd4fd7e */   'formatter_settings' => array(
   /* node:coi:default:default ddd4fd7e */     'field_formatter_class' => '',
   /* node:coi:default:default ddd4fd7e */   ),
   /* node:coi:default:default ddd4fd7e */   'context' => 'panelizer',
   /* node:coi:default:default ddd4fd7e */ );
   /* node:coi:default:default ddd4fd7e */ $pane->cache = array();
   /* node:coi:default:default ddd4fd7e */ $pane->style = array();
   /* node:coi:default:default ddd4fd7e */ $pane->css = array();
   /* node:coi:default:default ddd4fd7e */ $pane->extras = array();
   /* node:coi:default:default ddd4fd7e */ $pane->position = 0;
   /* node:coi:default:default ddd4fd7e */ $pane->locks = array();
   /* node:coi:default:default ddd4fd7e */ $pane->uuid = 'ddd4fd7e-0db7-4f94-95b9-983c113dea76';
  $display->content['new-ddd4fd7e-0db7-4f94-95b9-983c113dea76'] = $pane;
  $display->panels['center'][3] = 'new-ddd4fd7e-0db7-4f94-95b9-983c113dea76';
   /* node:coi:default:default 5f491e43 */ $pane = new stdClass();
   /* node:coi:default:default 5f491e43 */ $pane->pid = 'new-5f491e43-9613-4571-82ec-46912bcb7d81';
   /* node:coi:default:default 5f491e43 */ $pane->panel = 'center';
   /* node:coi:default:default 5f491e43 */ $pane->type = 'entity_field';
   /* node:coi:default:default 5f491e43 */ $pane->subtype = 'node:field_group_short_title';
   /* node:coi:default:default 5f491e43 */ $pane->shown = TRUE;
   /* node:coi:default:default 5f491e43 */ $pane->access = array();
   /* node:coi:default:default 5f491e43 */ $pane->configuration = array(
   /* node:coi:default:default 5f491e43 */   'label' => 'above',
   /* node:coi:default:default 5f491e43 */   'formatter' => 'text_default',
   /* node:coi:default:default 5f491e43 */   'delta_limit' => 0,
   /* node:coi:default:default 5f491e43 */   'delta_offset' => '0',
   /* node:coi:default:default 5f491e43 */   'delta_reversed' => FALSE,
   /* node:coi:default:default 5f491e43 */   'formatter_settings' => array(
   /* node:coi:default:default 5f491e43 */     'field_formatter_class' => '',
   /* node:coi:default:default 5f491e43 */   ),
   /* node:coi:default:default 5f491e43 */   'context' => 'panelizer',
   /* node:coi:default:default 5f491e43 */ );
   /* node:coi:default:default 5f491e43 */ $pane->cache = array();
   /* node:coi:default:default 5f491e43 */ $pane->style = array();
   /* node:coi:default:default 5f491e43 */ $pane->css = array();
   /* node:coi:default:default 5f491e43 */ $pane->extras = array();
   /* node:coi:default:default 5f491e43 */ $pane->position = 0;
   /* node:coi:default:default 5f491e43 */ $pane->locks = array();
   /* node:coi:default:default 5f491e43 */ $pane->uuid = '5f491e43-9613-4571-82ec-46912bcb7d81';
  $display->content['new-5f491e43-9613-4571-82ec-46912bcb7d81'] = $pane;
  $display->panels['center'][4] = 'new-5f491e43-9613-4571-82ec-46912bcb7d81';
   /* node:coi:default:default b22ad6f8 */ $pane = new stdClass();
   /* node:coi:default:default b22ad6f8 */ $pane->pid = 'new-b22ad6f8-d652-4e6c-bee7-8b2c341d2c6e';
   /* node:coi:default:default b22ad6f8 */ $pane->panel = 'center';
   /* node:coi:default:default b22ad6f8 */ $pane->type = 'entity_field';
   /* node:coi:default:default b22ad6f8 */ $pane->subtype = 'node:field_main_image';
   /* node:coi:default:default b22ad6f8 */ $pane->shown = TRUE;
   /* node:coi:default:default b22ad6f8 */ $pane->access = array();
   /* node:coi:default:default b22ad6f8 */ $pane->configuration = array(
   /* node:coi:default:default b22ad6f8 */   'label' => 'above',
   /* node:coi:default:default b22ad6f8 */   'formatter' => 'image',
   /* node:coi:default:default b22ad6f8 */   'delta_limit' => 0,
   /* node:coi:default:default b22ad6f8 */   'delta_offset' => '0',
   /* node:coi:default:default b22ad6f8 */   'delta_reversed' => FALSE,
   /* node:coi:default:default b22ad6f8 */   'formatter_settings' => array(
   /* node:coi:default:default b22ad6f8 */     'field_formatter_class' => '',
   /* node:coi:default:default b22ad6f8 */     'image_link' => '',
   /* node:coi:default:default b22ad6f8 */     'image_style' => '',
   /* node:coi:default:default b22ad6f8 */   ),
   /* node:coi:default:default b22ad6f8 */   'context' => 'panelizer',
   /* node:coi:default:default b22ad6f8 */ );
   /* node:coi:default:default b22ad6f8 */ $pane->cache = array();
   /* node:coi:default:default b22ad6f8 */ $pane->style = array();
   /* node:coi:default:default b22ad6f8 */ $pane->css = array();
   /* node:coi:default:default b22ad6f8 */ $pane->extras = array();
   /* node:coi:default:default b22ad6f8 */ $pane->position = 0;
   /* node:coi:default:default b22ad6f8 */ $pane->locks = array();
   /* node:coi:default:default b22ad6f8 */ $pane->uuid = 'b22ad6f8-d652-4e6c-bee7-8b2c341d2c6e';
  $display->content['new-b22ad6f8-d652-4e6c-bee7-8b2c341d2c6e'] = $pane;
  $display->panels['center'][5] = 'new-b22ad6f8-d652-4e6c-bee7-8b2c341d2c6e';
   /* node:coi:default:default 2ee9fde4 */ $pane = new stdClass();
   /* node:coi:default:default 2ee9fde4 */ $pane->pid = 'new-2ee9fde4-6f8a-45e0-a850-a7fa3e14e04d';
   /* node:coi:default:default 2ee9fde4 */ $pane->panel = 'center';
   /* node:coi:default:default 2ee9fde4 */ $pane->type = 'entity_field';
   /* node:coi:default:default 2ee9fde4 */ $pane->subtype = 'node:field_rec_links';
   /* node:coi:default:default 2ee9fde4 */ $pane->shown = TRUE;
   /* node:coi:default:default 2ee9fde4 */ $pane->access = array();
   /* node:coi:default:default 2ee9fde4 */ $pane->configuration = array(
   /* node:coi:default:default 2ee9fde4 */   'label' => 'above',
   /* node:coi:default:default 2ee9fde4 */   'formatter' => 'link_default',
   /* node:coi:default:default 2ee9fde4 */   'delta_limit' => 0,
   /* node:coi:default:default 2ee9fde4 */   'delta_offset' => '0',
   /* node:coi:default:default 2ee9fde4 */   'delta_reversed' => FALSE,
   /* node:coi:default:default 2ee9fde4 */   'formatter_settings' => array(
   /* node:coi:default:default 2ee9fde4 */     'field_formatter_class' => '',
   /* node:coi:default:default 2ee9fde4 */   ),
   /* node:coi:default:default 2ee9fde4 */   'context' => 'panelizer',
   /* node:coi:default:default 2ee9fde4 */ );
   /* node:coi:default:default 2ee9fde4 */ $pane->cache = array();
   /* node:coi:default:default 2ee9fde4 */ $pane->style = array();
   /* node:coi:default:default 2ee9fde4 */ $pane->css = array();
   /* node:coi:default:default 2ee9fde4 */ $pane->extras = array();
   /* node:coi:default:default 2ee9fde4 */ $pane->position = 0;
   /* node:coi:default:default 2ee9fde4 */ $pane->locks = array();
   /* node:coi:default:default 2ee9fde4 */ $pane->uuid = '2ee9fde4-6f8a-45e0-a850-a7fa3e14e04d';
  $display->content['new-2ee9fde4-6f8a-45e0-a850-a7fa3e14e04d'] = $pane;
  $display->panels['center'][6] = 'new-2ee9fde4-6f8a-45e0-a850-a7fa3e14e04d';
   /* node:coi:default:default 44962a3a */ $pane = new stdClass();
   /* node:coi:default:default 44962a3a */ $pane->pid = 'new-44962a3a-2372-4860-b283-f0e32ca528b1';
   /* node:coi:default:default 44962a3a */ $pane->panel = 'center';
   /* node:coi:default:default 44962a3a */ $pane->type = 'entity_field';
   /* node:coi:default:default 44962a3a */ $pane->subtype = 'node:field_country';
   /* node:coi:default:default 44962a3a */ $pane->shown = TRUE;
   /* node:coi:default:default 44962a3a */ $pane->access = array();
   /* node:coi:default:default 44962a3a */ $pane->configuration = array(
   /* node:coi:default:default 44962a3a */   'label' => 'above',
   /* node:coi:default:default 44962a3a */   'formatter' => 'taxonomy_term_reference_link',
   /* node:coi:default:default 44962a3a */   'delta_limit' => 0,
   /* node:coi:default:default 44962a3a */   'delta_offset' => '0',
   /* node:coi:default:default 44962a3a */   'delta_reversed' => FALSE,
   /* node:coi:default:default 44962a3a */   'formatter_settings' => array(
   /* node:coi:default:default 44962a3a */     'field_formatter_class' => '',
   /* node:coi:default:default 44962a3a */   ),
   /* node:coi:default:default 44962a3a */   'context' => 'panelizer',
   /* node:coi:default:default 44962a3a */ );
   /* node:coi:default:default 44962a3a */ $pane->cache = array();
   /* node:coi:default:default 44962a3a */ $pane->style = array();
   /* node:coi:default:default 44962a3a */ $pane->css = array();
   /* node:coi:default:default 44962a3a */ $pane->extras = array();
   /* node:coi:default:default 44962a3a */ $pane->position = 0;
   /* node:coi:default:default 44962a3a */ $pane->locks = array();
   /* node:coi:default:default 44962a3a */ $pane->uuid = '44962a3a-2372-4860-b283-f0e32ca528b1';
  $display->content['new-44962a3a-2372-4860-b283-f0e32ca528b1'] = $pane;
  $display->panels['center'][7] = 'new-44962a3a-2372-4860-b283-f0e32ca528b1';
   /* node:coi:default:default 2e5a2fed */ $pane = new stdClass();
   /* node:coi:default:default 2e5a2fed */ $pane->pid = 'new-2e5a2fed-25a4-409b-9007-96f0a8a65e42';
   /* node:coi:default:default 2e5a2fed */ $pane->panel = 'center';
   /* node:coi:default:default 2e5a2fed */ $pane->type = 'entity_field';
   /* node:coi:default:default 2e5a2fed */ $pane->subtype = 'node:field_topic';
   /* node:coi:default:default 2e5a2fed */ $pane->shown = TRUE;
   /* node:coi:default:default 2e5a2fed */ $pane->access = array();
   /* node:coi:default:default 2e5a2fed */ $pane->configuration = array(
   /* node:coi:default:default 2e5a2fed */   'label' => 'above',
   /* node:coi:default:default 2e5a2fed */   'formatter' => 'taxonomy_term_reference_link',
   /* node:coi:default:default 2e5a2fed */   'delta_limit' => 0,
   /* node:coi:default:default 2e5a2fed */   'delta_offset' => '0',
   /* node:coi:default:default 2e5a2fed */   'delta_reversed' => FALSE,
   /* node:coi:default:default 2e5a2fed */   'formatter_settings' => array(
   /* node:coi:default:default 2e5a2fed */     'field_formatter_class' => '',
   /* node:coi:default:default 2e5a2fed */   ),
   /* node:coi:default:default 2e5a2fed */   'context' => 'panelizer',
   /* node:coi:default:default 2e5a2fed */ );
   /* node:coi:default:default 2e5a2fed */ $pane->cache = array();
   /* node:coi:default:default 2e5a2fed */ $pane->style = array();
   /* node:coi:default:default 2e5a2fed */ $pane->css = array();
   /* node:coi:default:default 2e5a2fed */ $pane->extras = array();
   /* node:coi:default:default 2e5a2fed */ $pane->position = 0;
   /* node:coi:default:default 2e5a2fed */ $pane->locks = array();
   /* node:coi:default:default 2e5a2fed */ $pane->uuid = '2e5a2fed-25a4-409b-9007-96f0a8a65e42';
  $display->content['new-2e5a2fed-25a4-409b-9007-96f0a8a65e42'] = $pane;
  $display->panels['center'][8] = 'new-2e5a2fed-25a4-409b-9007-96f0a8a65e42';
   /* node:coi:default:default 55140203 */ $pane = new stdClass();
   /* node:coi:default:default 55140203 */ $pane->pid = 'new-55140203-803b-4b2d-9c86-64a8fcc7d92f';
   /* node:coi:default:default 55140203 */ $pane->panel = 'center';
   /* node:coi:default:default 55140203 */ $pane->type = 'entity_field';
   /* node:coi:default:default 55140203 */ $pane->subtype = 'node:field_region';
   /* node:coi:default:default 55140203 */ $pane->shown = TRUE;
   /* node:coi:default:default 55140203 */ $pane->access = array();
   /* node:coi:default:default 55140203 */ $pane->configuration = array(
   /* node:coi:default:default 55140203 */   'label' => 'above',
   /* node:coi:default:default 55140203 */   'formatter' => 'taxonomy_term_reference_link',
   /* node:coi:default:default 55140203 */   'delta_limit' => 0,
   /* node:coi:default:default 55140203 */   'delta_offset' => '0',
   /* node:coi:default:default 55140203 */   'delta_reversed' => FALSE,
   /* node:coi:default:default 55140203 */   'formatter_settings' => array(
   /* node:coi:default:default 55140203 */     'field_formatter_class' => '',
   /* node:coi:default:default 55140203 */   ),
   /* node:coi:default:default 55140203 */   'context' => 'panelizer',
   /* node:coi:default:default 55140203 */ );
   /* node:coi:default:default 55140203 */ $pane->cache = array();
   /* node:coi:default:default 55140203 */ $pane->style = array();
   /* node:coi:default:default 55140203 */ $pane->css = array();
   /* node:coi:default:default 55140203 */ $pane->extras = array();
   /* node:coi:default:default 55140203 */ $pane->position = 0;
   /* node:coi:default:default 55140203 */ $pane->locks = array();
   /* node:coi:default:default 55140203 */ $pane->uuid = '55140203-803b-4b2d-9c86-64a8fcc7d92f';
  $display->content['new-55140203-803b-4b2d-9c86-64a8fcc7d92f'] = $pane;
  $display->panels['center'][9] = 'new-55140203-803b-4b2d-9c86-64a8fcc7d92f';
   /* node:coi:default:default 576414c1 */ $pane = new stdClass();
   /* node:coi:default:default 576414c1 */ $pane->pid = 'new-576414c1-628d-46f2-b8dc-a56ec809e3d3';
   /* node:coi:default:default 576414c1 */ $pane->panel = 'center';
   /* node:coi:default:default 576414c1 */ $pane->type = 'entity_field';
   /* node:coi:default:default 576414c1 */ $pane->subtype = 'node:field_group_help';
   /* node:coi:default:default 576414c1 */ $pane->shown = TRUE;
   /* node:coi:default:default 576414c1 */ $pane->access = array();
   /* node:coi:default:default 576414c1 */ $pane->configuration = array(
   /* node:coi:default:default 576414c1 */   'label' => 'above',
   /* node:coi:default:default 576414c1 */   'formatter' => 'text_default',
   /* node:coi:default:default 576414c1 */   'delta_limit' => 0,
   /* node:coi:default:default 576414c1 */   'delta_offset' => '0',
   /* node:coi:default:default 576414c1 */   'delta_reversed' => FALSE,
   /* node:coi:default:default 576414c1 */   'formatter_settings' => array(
   /* node:coi:default:default 576414c1 */     'field_formatter_class' => '',
   /* node:coi:default:default 576414c1 */   ),
   /* node:coi:default:default 576414c1 */   'context' => 'panelizer',
   /* node:coi:default:default 576414c1 */ );
   /* node:coi:default:default 576414c1 */ $pane->cache = array();
   /* node:coi:default:default 576414c1 */ $pane->style = array();
   /* node:coi:default:default 576414c1 */ $pane->css = array();
   /* node:coi:default:default 576414c1 */ $pane->extras = array();
   /* node:coi:default:default 576414c1 */ $pane->position = 0;
   /* node:coi:default:default 576414c1 */ $pane->locks = array();
   /* node:coi:default:default 576414c1 */ $pane->uuid = '576414c1-628d-46f2-b8dc-a56ec809e3d3';
  $display->content['new-576414c1-628d-46f2-b8dc-a56ec809e3d3'] = $pane;
  $display->panels['center'][10] = 'new-576414c1-628d-46f2-b8dc-a56ec809e3d3';
   /* node:coi:default:default 6a1d1c02 */ $pane = new stdClass();
   /* node:coi:default:default 6a1d1c02 */ $pane->pid = 'new-6a1d1c02-5a6a-440d-b7d8-c0f3c9edb9d3';
   /* node:coi:default:default 6a1d1c02 */ $pane->panel = 'center';
   /* node:coi:default:default 6a1d1c02 */ $pane->type = 'entity_field';
   /* node:coi:default:default 6a1d1c02 */ $pane->subtype = 'node:field_gn2_simple_access';
   /* node:coi:default:default 6a1d1c02 */ $pane->shown = TRUE;
   /* node:coi:default:default 6a1d1c02 */ $pane->access = array();
   /* node:coi:default:default 6a1d1c02 */ $pane->configuration = array(
   /* node:coi:default:default 6a1d1c02 */   'label' => 'above',
   /* node:coi:default:default 6a1d1c02 */   'formatter' => 'list_default',
   /* node:coi:default:default 6a1d1c02 */   'delta_limit' => 0,
   /* node:coi:default:default 6a1d1c02 */   'delta_offset' => '0',
   /* node:coi:default:default 6a1d1c02 */   'delta_reversed' => FALSE,
   /* node:coi:default:default 6a1d1c02 */   'formatter_settings' => array(
   /* node:coi:default:default 6a1d1c02 */     'field_formatter_class' => '',
   /* node:coi:default:default 6a1d1c02 */   ),
   /* node:coi:default:default 6a1d1c02 */   'context' => 'panelizer',
   /* node:coi:default:default 6a1d1c02 */ );
   /* node:coi:default:default 6a1d1c02 */ $pane->cache = array();
   /* node:coi:default:default 6a1d1c02 */ $pane->style = array();
   /* node:coi:default:default 6a1d1c02 */ $pane->css = array();
   /* node:coi:default:default 6a1d1c02 */ $pane->extras = array();
   /* node:coi:default:default 6a1d1c02 */ $pane->position = 0;
   /* node:coi:default:default 6a1d1c02 */ $pane->locks = array();
   /* node:coi:default:default 6a1d1c02 */ $pane->uuid = '6a1d1c02-5a6a-440d-b7d8-c0f3c9edb9d3';
  $display->content['new-6a1d1c02-5a6a-440d-b7d8-c0f3c9edb9d3'] = $pane;
  $display->panels['center'][11] = 'new-6a1d1c02-5a6a-440d-b7d8-c0f3c9edb9d3';
   /* node:coi:default:default 2ab4bd4a */ $pane = new stdClass();
   /* node:coi:default:default 2ab4bd4a */ $pane->pid = 'new-2ab4bd4a-b2f0-478c-8648-66b8a86abcd5';
   /* node:coi:default:default 2ab4bd4a */ $pane->panel = 'center';
   /* node:coi:default:default 2ab4bd4a */ $pane->type = 'entity_field';
   /* node:coi:default:default 2ab4bd4a */ $pane->subtype = 'node:group_group';
   /* node:coi:default:default 2ab4bd4a */ $pane->shown = TRUE;
   /* node:coi:default:default 2ab4bd4a */ $pane->access = array();
   /* node:coi:default:default 2ab4bd4a */ $pane->configuration = array(
   /* node:coi:default:default 2ab4bd4a */   'label' => 'above',
   /* node:coi:default:default 2ab4bd4a */   'formatter' => 'og_group_subscribe',
   /* node:coi:default:default 2ab4bd4a */   'delta_limit' => 0,
   /* node:coi:default:default 2ab4bd4a */   'delta_offset' => '0',
   /* node:coi:default:default 2ab4bd4a */   'delta_reversed' => FALSE,
   /* node:coi:default:default 2ab4bd4a */   'formatter_settings' => array(
   /* node:coi:default:default 2ab4bd4a */     'field_formatter_class' => '',
   /* node:coi:default:default 2ab4bd4a */     'field_name' => FALSE,
   /* node:coi:default:default 2ab4bd4a */   ),
   /* node:coi:default:default 2ab4bd4a */   'context' => 'panelizer',
   /* node:coi:default:default 2ab4bd4a */ );
   /* node:coi:default:default 2ab4bd4a */ $pane->cache = array();
   /* node:coi:default:default 2ab4bd4a */ $pane->style = array();
   /* node:coi:default:default 2ab4bd4a */ $pane->css = array();
   /* node:coi:default:default 2ab4bd4a */ $pane->extras = array();
   /* node:coi:default:default 2ab4bd4a */ $pane->position = 0;
   /* node:coi:default:default 2ab4bd4a */ $pane->locks = array();
   /* node:coi:default:default 2ab4bd4a */ $pane->uuid = '2ab4bd4a-b2f0-478c-8648-66b8a86abcd5';
  $display->content['new-2ab4bd4a-b2f0-478c-8648-66b8a86abcd5'] = $pane;
  $display->panels['center'][12] = 'new-2ab4bd4a-b2f0-478c-8648-66b8a86abcd5';
   /* node:coi:default:default 32e800f8 */ $pane = new stdClass();
   /* node:coi:default:default 32e800f8 */ $pane->pid = 'new-32e800f8-4838-45b0-bd7b-f3253779bd96';
   /* node:coi:default:default 32e800f8 */ $pane->panel = 'center';
   /* node:coi:default:default 32e800f8 */ $pane->type = 'entity_field';
   /* node:coi:default:default 32e800f8 */ $pane->subtype = 'node:field_group_manager';
   /* node:coi:default:default 32e800f8 */ $pane->shown = TRUE;
   /* node:coi:default:default 32e800f8 */ $pane->access = array();
   /* node:coi:default:default 32e800f8 */ $pane->configuration = array(
   /* node:coi:default:default 32e800f8 */   'label' => 'above',
   /* node:coi:default:default 32e800f8 */   'formatter' => 'entityreference_label',
   /* node:coi:default:default 32e800f8 */   'delta_limit' => 0,
   /* node:coi:default:default 32e800f8 */   'delta_offset' => '0',
   /* node:coi:default:default 32e800f8 */   'delta_reversed' => FALSE,
   /* node:coi:default:default 32e800f8 */   'formatter_settings' => array(
   /* node:coi:default:default 32e800f8 */     'field_formatter_class' => '',
   /* node:coi:default:default 32e800f8 */     'link' => FALSE,
   /* node:coi:default:default 32e800f8 */   ),
   /* node:coi:default:default 32e800f8 */   'context' => 'panelizer',
   /* node:coi:default:default 32e800f8 */ );
   /* node:coi:default:default 32e800f8 */ $pane->cache = array();
   /* node:coi:default:default 32e800f8 */ $pane->style = array();
   /* node:coi:default:default 32e800f8 */ $pane->css = array();
   /* node:coi:default:default 32e800f8 */ $pane->extras = array();
   /* node:coi:default:default 32e800f8 */ $pane->position = 0;
   /* node:coi:default:default 32e800f8 */ $pane->locks = array();
   /* node:coi:default:default 32e800f8 */ $pane->uuid = '32e800f8-4838-45b0-bd7b-f3253779bd96';
  $display->content['new-32e800f8-4838-45b0-bd7b-f3253779bd96'] = $pane;
  $display->panels['center'][13] = 'new-32e800f8-4838-45b0-bd7b-f3253779bd96';
   /* node:coi:default:default 2b88b3d9 */ $pane = new stdClass();
   /* node:coi:default:default 2b88b3d9 */ $pane->pid = 'new-2b88b3d9-5b95-4b5d-a4ca-7254ca98fd9a';
   /* node:coi:default:default 2b88b3d9 */ $pane->panel = 'center';
   /* node:coi:default:default 2b88b3d9 */ $pane->type = 'node_links';
   /* node:coi:default:default 2b88b3d9 */ $pane->subtype = 'node_links';
   /* node:coi:default:default 2b88b3d9 */ $pane->shown = TRUE;
   /* node:coi:default:default 2b88b3d9 */ $pane->access = array();
   /* node:coi:default:default 2b88b3d9 */ $pane->configuration = array(
   /* node:coi:default:default 2b88b3d9 */   'override_title' => FALSE,
   /* node:coi:default:default 2b88b3d9 */   'override_title_text' => '',
   /* node:coi:default:default 2b88b3d9 */   'build_mode' => 'default',
   /* node:coi:default:default 2b88b3d9 */   'identifier' => '',
   /* node:coi:default:default 2b88b3d9 */   'link' => TRUE,
   /* node:coi:default:default 2b88b3d9 */   'context' => 'panelizer',
   /* node:coi:default:default 2b88b3d9 */ );
   /* node:coi:default:default 2b88b3d9 */ $pane->cache = array();
   /* node:coi:default:default 2b88b3d9 */ $pane->style = array();
   /* node:coi:default:default 2b88b3d9 */ $pane->css = array(
   /* node:coi:default:default 2b88b3d9 */   'css_class' => 'link-wrapper',
   /* node:coi:default:default 2b88b3d9 */ );
   /* node:coi:default:default 2b88b3d9 */ $pane->extras = array();
   /* node:coi:default:default 2b88b3d9 */ $pane->position = 0;
   /* node:coi:default:default 2b88b3d9 */ $pane->locks = array();
   /* node:coi:default:default 2b88b3d9 */ $pane->uuid = '2b88b3d9-5b95-4b5d-a4ca-7254ca98fd9a';
  $display->content['new-2b88b3d9-5b95-4b5d-a4ca-7254ca98fd9a'] = $pane;
  $display->panels['center'][14] = 'new-2b88b3d9-5b95-4b5d-a4ca-7254ca98fd9a';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-2b88b3d9-5b95-4b5d-a4ca-7254ca98fd9a';
  $panelizer->display = $display;
  $export['node:coi:default:default'] = $panelizer;

  return $export;
}
