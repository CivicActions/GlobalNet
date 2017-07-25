<?php
/**
 * @file
 * gn2_base_config.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function gn2_base_config_default_page_manager_handlers() {
  $export = array();

   /* node_edit__help */ $handler = new stdClass();
   /* node_edit__help */ $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
   /* node_edit__help */ $handler->api_version = 1;
   /* node_edit__help */ $handler->name = 'node_edit__help';
   /* node_edit__help */ $handler->task = 'node_edit';
   /* node_edit__help */ $handler->subtask = '';
   /* node_edit__help */ $handler->handler = 'panel_context';
   /* node_edit__help */ $handler->weight = 5;
   /* node_edit__help */ $handler->conf = array(
   /* node_edit__help */   'title' => 'Help',
   /* node_edit__help */   'no_blocks' => 0,
   /* node_edit__help */   'pipeline' => 'standard',
   /* node_edit__help */   'body_classes_to_remove' => '',
   /* node_edit__help */   'body_classes_to_add' => '',
   /* node_edit__help */   'css_id' => '',
   /* node_edit__help */   'css' => '',
   /* node_edit__help */   'contexts' => array(),
   /* node_edit__help */   'relationships' => array(),
   /* node_edit__help */   'name' => 'help',
   /* node_edit__help */   'access' => array(
   /* node_edit__help */     'plugins' => array(
   /* node_edit__help */       0 => array(
   /* node_edit__help */         'name' => 'node_type',
   /* node_edit__help */         'settings' => array(
   /* node_edit__help */           'type' => array(
   /* node_edit__help */             'help' => 'help',
   /* node_edit__help */           ),
   /* node_edit__help */         ),
   /* node_edit__help */         'context' => 'argument_node_edit_1',
   /* node_edit__help */         'not' => FALSE,
   /* node_edit__help */       ),
   /* node_edit__help */     ),
   /* node_edit__help */     'logic' => 'and',
   /* node_edit__help */   ),
   /* node_edit__help */ );
   /* gn_flexslider 86f31595 */ $display = new panels_display();
   /* gn_flexslider 86f31595 */ $display->layout = 'gn2_1col';
   /* gn_flexslider 86f31595 */ $display->layout_settings = array();
   /* gn_flexslider 86f31595 */ $display->panel_settings = array(
   /* gn_flexslider 86f31595 */   'style_settings' => array(
   /* gn_flexslider 86f31595 */     'default' => NULL,
   /* gn_flexslider 86f31595 */     'contentmain' => NULL,
   /* gn_flexslider 86f31595 */   ),
   /* gn_flexslider 86f31595 */ );
   /* gn_flexslider 86f31595 */ $display->cache = array();
   /* gn_flexslider 86f31595 */ $display->title = '';
   /* gn_flexslider 86f31595 */ $display->uuid = '86f31595-0606-44e1-8b52-c678c695d3af';
   /* gn_flexslider 86f31595 */ $display->storage_type = 'page_manager';
   /* gn_flexslider 86f31595 */ $display->storage_id = 'node_edit__help';
  $display->content = array();
  $display->panels = array();
   /* gn_flexslider 008a46ea */ $pane = new stdClass();
   /* gn_flexslider 008a46ea */ $pane->pid = 'new-008a46ea-4a73-4cdc-a9f1-0530efc20c12';
   /* gn_flexslider 008a46ea */ $pane->panel = 'contentmain';
   /* gn_flexslider 008a46ea */ $pane->type = 'node_form_language';
   /* gn_flexslider 008a46ea */ $pane->subtype = 'node_form_language';
   /* gn_flexslider 008a46ea */ $pane->shown = TRUE;
   /* gn_flexslider 008a46ea */ $pane->access = array();
   /* gn_flexslider 008a46ea */ $pane->configuration = array(
   /* gn_flexslider 008a46ea */   'context' => 'argument_node_edit_1',
   /* gn_flexslider 008a46ea */   'override_title' => 0,
   /* gn_flexslider 008a46ea */   'override_title_text' => '',
   /* gn_flexslider 008a46ea */   'override_title_heading' => 'h2',
   /* gn_flexslider 008a46ea */ );
   /* gn_flexslider 008a46ea */ $pane->cache = array();
   /* gn_flexslider 008a46ea */ $pane->style = array(
   /* gn_flexslider 008a46ea */   'settings' => NULL,
   /* gn_flexslider 008a46ea */ );
   /* gn_flexslider 008a46ea */ $pane->css = array();
   /* gn_flexslider 008a46ea */ $pane->extras = array();
   /* gn_flexslider 008a46ea */ $pane->position = 0;
   /* gn_flexslider 008a46ea */ $pane->locks = array();
   /* gn_flexslider 008a46ea */ $pane->uuid = '008a46ea-4a73-4cdc-a9f1-0530efc20c12';
  $display->content['new-008a46ea-4a73-4cdc-a9f1-0530efc20c12'] = $pane;
  $display->panels['contentmain'][0] = 'new-008a46ea-4a73-4cdc-a9f1-0530efc20c12';
   /* gn_flexslider 1165723a */ $pane = new stdClass();
   /* gn_flexslider 1165723a */ $pane->pid = 'new-1165723a-5552-4944-9c7b-9aed6eb6b9ba';
   /* gn_flexslider 1165723a */ $pane->panel = 'contentmain';
   /* gn_flexslider 1165723a */ $pane->type = 'node_form_title';
   /* gn_flexslider 1165723a */ $pane->subtype = 'node_form_title';
   /* gn_flexslider 1165723a */ $pane->shown = TRUE;
   /* gn_flexslider 1165723a */ $pane->access = array();
   /* gn_flexslider 1165723a */ $pane->configuration = array(
   /* gn_flexslider 1165723a */   'context' => 'argument_node_edit_1',
   /* gn_flexslider 1165723a */   'override_title' => 0,
   /* gn_flexslider 1165723a */   'override_title_text' => '',
   /* gn_flexslider 1165723a */   'override_title_heading' => 'h2',
   /* gn_flexslider 1165723a */ );
   /* gn_flexslider 1165723a */ $pane->cache = array();
   /* gn_flexslider 1165723a */ $pane->style = array(
   /* gn_flexslider 1165723a */   'settings' => NULL,
   /* gn_flexslider 1165723a */ );
   /* gn_flexslider 1165723a */ $pane->css = array();
   /* gn_flexslider 1165723a */ $pane->extras = array();
   /* gn_flexslider 1165723a */ $pane->position = 1;
   /* gn_flexslider 1165723a */ $pane->locks = array();
   /* gn_flexslider 1165723a */ $pane->uuid = '1165723a-5552-4944-9c7b-9aed6eb6b9ba';
  $display->content['new-1165723a-5552-4944-9c7b-9aed6eb6b9ba'] = $pane;
  $display->panels['contentmain'][1] = 'new-1165723a-5552-4944-9c7b-9aed6eb6b9ba';
   /* gn_flexslider 186d1ba1 */ $pane = new stdClass();
   /* gn_flexslider 186d1ba1 */ $pane->pid = 'new-186d1ba1-b222-4c8c-8464-36e0b0b52bc3';
   /* gn_flexslider 186d1ba1 */ $pane->panel = 'contentmain';
   /* gn_flexslider 186d1ba1 */ $pane->type = 'entity_form_field';
   /* gn_flexslider 186d1ba1 */ $pane->subtype = 'node:body';
   /* gn_flexslider 186d1ba1 */ $pane->shown = TRUE;
   /* gn_flexslider 186d1ba1 */ $pane->access = array();
   /* gn_flexslider 186d1ba1 */ $pane->configuration = array(
   /* gn_flexslider 186d1ba1 */   'label' => '',
   /* gn_flexslider 186d1ba1 */   'formatter' => '',
   /* gn_flexslider 186d1ba1 */   'context' => 'argument_node_edit_1',
   /* gn_flexslider 186d1ba1 */   'override_title' => 0,
   /* gn_flexslider 186d1ba1 */   'override_title_text' => '',
   /* gn_flexslider 186d1ba1 */   'override_title_heading' => 'h2',
   /* gn_flexslider 186d1ba1 */ );
   /* gn_flexslider 186d1ba1 */ $pane->cache = array();
   /* gn_flexslider 186d1ba1 */ $pane->style = array(
   /* gn_flexslider 186d1ba1 */   'settings' => NULL,
   /* gn_flexslider 186d1ba1 */ );
   /* gn_flexslider 186d1ba1 */ $pane->css = array();
   /* gn_flexslider 186d1ba1 */ $pane->extras = array();
   /* gn_flexslider 186d1ba1 */ $pane->position = 2;
   /* gn_flexslider 186d1ba1 */ $pane->locks = array();
   /* gn_flexslider 186d1ba1 */ $pane->uuid = '186d1ba1-b222-4c8c-8464-36e0b0b52bc3';
  $display->content['new-186d1ba1-b222-4c8c-8464-36e0b0b52bc3'] = $pane;
  $display->panels['contentmain'][2] = 'new-186d1ba1-b222-4c8c-8464-36e0b0b52bc3';
   /* gn_flexslider edc0d3df */ $pane = new stdClass();
   /* gn_flexslider edc0d3df */ $pane->pid = 'new-edc0d3df-c10a-42fb-9d43-3454156edafe';
   /* gn_flexslider edc0d3df */ $pane->panel = 'contentmain';
   /* gn_flexslider edc0d3df */ $pane->type = 'entity_form_field';
   /* gn_flexslider edc0d3df */ $pane->subtype = 'node:field_media';
   /* gn_flexslider edc0d3df */ $pane->shown = TRUE;
   /* gn_flexslider edc0d3df */ $pane->access = array();
   /* gn_flexslider edc0d3df */ $pane->configuration = array(
   /* gn_flexslider edc0d3df */   'label' => '',
   /* gn_flexslider edc0d3df */   'formatter' => '',
   /* gn_flexslider edc0d3df */   'context' => 'argument_node_edit_1',
   /* gn_flexslider edc0d3df */   'override_title' => 0,
   /* gn_flexslider edc0d3df */   'override_title_text' => '',
   /* gn_flexslider edc0d3df */   'override_title_heading' => 'h2',
   /* gn_flexslider edc0d3df */ );
   /* gn_flexslider edc0d3df */ $pane->cache = array();
   /* gn_flexslider edc0d3df */ $pane->style = array(
   /* gn_flexslider edc0d3df */   'settings' => NULL,
   /* gn_flexslider edc0d3df */ );
   /* gn_flexslider edc0d3df */ $pane->css = array();
   /* gn_flexslider edc0d3df */ $pane->extras = array();
   /* gn_flexslider edc0d3df */ $pane->position = 3;
   /* gn_flexslider edc0d3df */ $pane->locks = array();
   /* gn_flexslider edc0d3df */ $pane->uuid = 'edc0d3df-c10a-42fb-9d43-3454156edafe';
  $display->content['new-edc0d3df-c10a-42fb-9d43-3454156edafe'] = $pane;
  $display->panels['contentmain'][3] = 'new-edc0d3df-c10a-42fb-9d43-3454156edafe';
   /* gn_flexslider 16e69198 */ $pane = new stdClass();
   /* gn_flexslider 16e69198 */ $pane->pid = 'new-16e69198-e742-4b45-81f5-bca9a8be2db4';
   /* gn_flexslider 16e69198 */ $pane->panel = 'contentmain';
   /* gn_flexslider 16e69198 */ $pane->type = 'entity_form_field';
   /* gn_flexslider 16e69198 */ $pane->subtype = 'node:group_access';
   /* gn_flexslider 16e69198 */ $pane->shown = TRUE;
   /* gn_flexslider 16e69198 */ $pane->access = array();
   /* gn_flexslider 16e69198 */ $pane->configuration = array(
   /* gn_flexslider 16e69198 */   'label' => '',
   /* gn_flexslider 16e69198 */   'formatter' => '',
   /* gn_flexslider 16e69198 */   'context' => 'argument_node_edit_1',
   /* gn_flexslider 16e69198 */   'override_title' => 0,
   /* gn_flexslider 16e69198 */   'override_title_text' => '',
   /* gn_flexslider 16e69198 */   'override_title_heading' => 'h2',
   /* gn_flexslider 16e69198 */ );
   /* gn_flexslider 16e69198 */ $pane->cache = array();
   /* gn_flexslider 16e69198 */ $pane->style = array(
   /* gn_flexslider 16e69198 */   'settings' => NULL,
   /* gn_flexslider 16e69198 */ );
   /* gn_flexslider 16e69198 */ $pane->css = array();
   /* gn_flexslider 16e69198 */ $pane->extras = array();
   /* gn_flexslider 16e69198 */ $pane->position = 4;
   /* gn_flexslider 16e69198 */ $pane->locks = array();
   /* gn_flexslider 16e69198 */ $pane->uuid = '16e69198-e742-4b45-81f5-bca9a8be2db4';
  $display->content['new-16e69198-e742-4b45-81f5-bca9a8be2db4'] = $pane;
  $display->panels['contentmain'][4] = 'new-16e69198-e742-4b45-81f5-bca9a8be2db4';
   /* gn_flexslider b51c29c5 */ $pane = new stdClass();
   /* gn_flexslider b51c29c5 */ $pane->pid = 'new-b51c29c5-f047-4097-a347-26ebd73e006d';
   /* gn_flexslider b51c29c5 */ $pane->panel = 'contentmain';
   /* gn_flexslider b51c29c5 */ $pane->type = 'entity_form_field';
   /* gn_flexslider b51c29c5 */ $pane->subtype = 'node:field_gn2_simple_access';
   /* gn_flexslider b51c29c5 */ $pane->shown = TRUE;
   /* gn_flexslider b51c29c5 */ $pane->access = array();
   /* gn_flexslider b51c29c5 */ $pane->configuration = array(
   /* gn_flexslider b51c29c5 */   'label' => '',
   /* gn_flexslider b51c29c5 */   'formatter' => '',
   /* gn_flexslider b51c29c5 */   'context' => 'argument_node_edit_1',
   /* gn_flexslider b51c29c5 */   'override_title' => 0,
   /* gn_flexslider b51c29c5 */   'override_title_text' => '',
   /* gn_flexslider b51c29c5 */   'override_title_heading' => 'h2',
   /* gn_flexslider b51c29c5 */ );
   /* gn_flexslider b51c29c5 */ $pane->cache = array();
   /* gn_flexslider b51c29c5 */ $pane->style = array(
   /* gn_flexslider b51c29c5 */   'settings' => NULL,
   /* gn_flexslider b51c29c5 */ );
   /* gn_flexslider b51c29c5 */ $pane->css = array();
   /* gn_flexslider b51c29c5 */ $pane->extras = array();
   /* gn_flexslider b51c29c5 */ $pane->position = 5;
   /* gn_flexslider b51c29c5 */ $pane->locks = array();
   /* gn_flexslider b51c29c5 */ $pane->uuid = 'b51c29c5-f047-4097-a347-26ebd73e006d';
  $display->content['new-b51c29c5-f047-4097-a347-26ebd73e006d'] = $pane;
  $display->panels['contentmain'][5] = 'new-b51c29c5-f047-4097-a347-26ebd73e006d';
   /* gn_flexslider 3aa691f5 */ $pane = new stdClass();
   /* gn_flexslider 3aa691f5 */ $pane->pid = 'new-3aa691f5-85af-458e-9bc4-d60de05df1e8';
   /* gn_flexslider 3aa691f5 */ $pane->panel = 'contentmain';
   /* gn_flexslider 3aa691f5 */ $pane->type = 'entity_form_field';
   /* gn_flexslider 3aa691f5 */ $pane->subtype = 'node:field_help_topics';
   /* gn_flexslider 3aa691f5 */ $pane->shown = TRUE;
   /* gn_flexslider 3aa691f5 */ $pane->access = array();
   /* gn_flexslider 3aa691f5 */ $pane->configuration = array(
   /* gn_flexslider 3aa691f5 */   'label' => '',
   /* gn_flexslider 3aa691f5 */   'formatter' => '',
   /* gn_flexslider 3aa691f5 */   'context' => 'argument_node_edit_1',
   /* gn_flexslider 3aa691f5 */   'override_title' => 0,
   /* gn_flexslider 3aa691f5 */   'override_title_text' => '',
   /* gn_flexslider 3aa691f5 */   'override_title_heading' => 'h2',
   /* gn_flexslider 3aa691f5 */ );
   /* gn_flexslider 3aa691f5 */ $pane->cache = array();
   /* gn_flexslider 3aa691f5 */ $pane->style = array(
   /* gn_flexslider 3aa691f5 */   'settings' => NULL,
   /* gn_flexslider 3aa691f5 */ );
   /* gn_flexslider 3aa691f5 */ $pane->css = array();
   /* gn_flexslider 3aa691f5 */ $pane->extras = array();
   /* gn_flexslider 3aa691f5 */ $pane->position = 6;
   /* gn_flexslider 3aa691f5 */ $pane->locks = array();
   /* gn_flexslider 3aa691f5 */ $pane->uuid = '3aa691f5-85af-458e-9bc4-d60de05df1e8';
  $display->content['new-3aa691f5-85af-458e-9bc4-d60de05df1e8'] = $pane;
  $display->panels['contentmain'][6] = 'new-3aa691f5-85af-458e-9bc4-d60de05df1e8';
   /* gn_flexslider 1b97a381 */ $pane = new stdClass();
   /* gn_flexslider 1b97a381 */ $pane->pid = 'new-1b97a381-75dd-495c-8089-1ddf1bf39259';
   /* gn_flexslider 1b97a381 */ $pane->panel = 'contentmain';
   /* gn_flexslider 1b97a381 */ $pane->type = 'node_form_comment';
   /* gn_flexslider 1b97a381 */ $pane->subtype = 'node_form_comment';
   /* gn_flexslider 1b97a381 */ $pane->shown = TRUE;
   /* gn_flexslider 1b97a381 */ $pane->access = array();
   /* gn_flexslider 1b97a381 */ $pane->configuration = array(
   /* gn_flexslider 1b97a381 */   'context' => 'argument_node_edit_1',
   /* gn_flexslider 1b97a381 */   'override_title' => 0,
   /* gn_flexslider 1b97a381 */   'override_title_text' => '',
   /* gn_flexslider 1b97a381 */   'override_title_heading' => 'h2',
   /* gn_flexslider 1b97a381 */ );
   /* gn_flexslider 1b97a381 */ $pane->cache = array();
   /* gn_flexslider 1b97a381 */ $pane->style = array(
   /* gn_flexslider 1b97a381 */   'settings' => NULL,
   /* gn_flexslider 1b97a381 */ );
   /* gn_flexslider 1b97a381 */ $pane->css = array();
   /* gn_flexslider 1b97a381 */ $pane->extras = array();
   /* gn_flexslider 1b97a381 */ $pane->position = 7;
   /* gn_flexslider 1b97a381 */ $pane->locks = array();
   /* gn_flexslider 1b97a381 */ $pane->uuid = '1b97a381-75dd-495c-8089-1ddf1bf39259';
  $display->content['new-1b97a381-75dd-495c-8089-1ddf1bf39259'] = $pane;
  $display->panels['contentmain'][7] = 'new-1b97a381-75dd-495c-8089-1ddf1bf39259';
   /* gn_flexslider 6148a745 */ $pane = new stdClass();
   /* gn_flexslider 6148a745 */ $pane->pid = 'new-6148a745-7557-4231-8b0b-71f7c31bed71';
   /* gn_flexslider 6148a745 */ $pane->panel = 'contentmain';
   /* gn_flexslider 6148a745 */ $pane->type = 'node_form_author';
   /* gn_flexslider 6148a745 */ $pane->subtype = 'node_form_author';
   /* gn_flexslider 6148a745 */ $pane->shown = TRUE;
   /* gn_flexslider 6148a745 */ $pane->access = array();
   /* gn_flexslider 6148a745 */ $pane->configuration = array(
   /* gn_flexslider 6148a745 */   'context' => 'argument_node_edit_1',
   /* gn_flexslider 6148a745 */   'override_title' => 0,
   /* gn_flexslider 6148a745 */   'override_title_text' => '',
   /* gn_flexslider 6148a745 */   'override_title_heading' => 'h2',
   /* gn_flexslider 6148a745 */ );
   /* gn_flexslider 6148a745 */ $pane->cache = array();
   /* gn_flexslider 6148a745 */ $pane->style = array(
   /* gn_flexslider 6148a745 */   'settings' => NULL,
   /* gn_flexslider 6148a745 */ );
   /* gn_flexslider 6148a745 */ $pane->css = array();
   /* gn_flexslider 6148a745 */ $pane->extras = array();
   /* gn_flexslider 6148a745 */ $pane->position = 8;
   /* gn_flexslider 6148a745 */ $pane->locks = array();
   /* gn_flexslider 6148a745 */ $pane->uuid = '6148a745-7557-4231-8b0b-71f7c31bed71';
  $display->content['new-6148a745-7557-4231-8b0b-71f7c31bed71'] = $pane;
  $display->panels['contentmain'][8] = 'new-6148a745-7557-4231-8b0b-71f7c31bed71';
   /* gn_flexslider 6f415397 */ $pane = new stdClass();
   /* gn_flexslider 6f415397 */ $pane->pid = 'new-6f415397-a4f1-4fa6-b1d3-4cb966424b30';
   /* gn_flexslider 6f415397 */ $pane->panel = 'contentmain';
   /* gn_flexslider 6f415397 */ $pane->type = 'node_form_log';
   /* gn_flexslider 6f415397 */ $pane->subtype = 'node_form_log';
   /* gn_flexslider 6f415397 */ $pane->shown = TRUE;
   /* gn_flexslider 6f415397 */ $pane->access = array();
   /* gn_flexslider 6f415397 */ $pane->configuration = array(
   /* gn_flexslider 6f415397 */   'context' => 'argument_node_edit_1',
   /* gn_flexslider 6f415397 */   'override_title' => 0,
   /* gn_flexslider 6f415397 */   'override_title_text' => '',
   /* gn_flexslider 6f415397 */   'override_title_heading' => 'h2',
   /* gn_flexslider 6f415397 */ );
   /* gn_flexslider 6f415397 */ $pane->cache = array();
   /* gn_flexslider 6f415397 */ $pane->style = array(
   /* gn_flexslider 6f415397 */   'settings' => NULL,
   /* gn_flexslider 6f415397 */ );
   /* gn_flexslider 6f415397 */ $pane->css = array();
   /* gn_flexslider 6f415397 */ $pane->extras = array();
   /* gn_flexslider 6f415397 */ $pane->position = 9;
   /* gn_flexslider 6f415397 */ $pane->locks = array();
   /* gn_flexslider 6f415397 */ $pane->uuid = '6f415397-a4f1-4fa6-b1d3-4cb966424b30';
  $display->content['new-6f415397-a4f1-4fa6-b1d3-4cb966424b30'] = $pane;
  $display->panels['contentmain'][9] = 'new-6f415397-a4f1-4fa6-b1d3-4cb966424b30';
   /* gn_flexslider 53ee1bd4 */ $pane = new stdClass();
   /* gn_flexslider 53ee1bd4 */ $pane->pid = 'new-53ee1bd4-9d8e-4406-8f45-0ab2bc5d7df3';
   /* gn_flexslider 53ee1bd4 */ $pane->panel = 'contentmain';
   /* gn_flexslider 53ee1bd4 */ $pane->type = 'node_form_buttons';
   /* gn_flexslider 53ee1bd4 */ $pane->subtype = 'node_form_buttons';
   /* gn_flexslider 53ee1bd4 */ $pane->shown = TRUE;
   /* gn_flexslider 53ee1bd4 */ $pane->access = array();
   /* gn_flexslider 53ee1bd4 */ $pane->configuration = array(
   /* gn_flexslider 53ee1bd4 */   'context' => 'argument_node_edit_1',
   /* gn_flexslider 53ee1bd4 */   'override_title' => 0,
   /* gn_flexslider 53ee1bd4 */   'override_title_text' => '',
   /* gn_flexslider 53ee1bd4 */   'override_title_heading' => 'h2',
   /* gn_flexslider 53ee1bd4 */ );
   /* gn_flexslider 53ee1bd4 */ $pane->cache = array();
   /* gn_flexslider 53ee1bd4 */ $pane->style = array(
   /* gn_flexslider 53ee1bd4 */   'settings' => NULL,
   /* gn_flexslider 53ee1bd4 */ );
   /* gn_flexslider 53ee1bd4 */ $pane->css = array();
   /* gn_flexslider 53ee1bd4 */ $pane->extras = array();
   /* gn_flexslider 53ee1bd4 */ $pane->position = 10;
   /* gn_flexslider 53ee1bd4 */ $pane->locks = array();
   /* gn_flexslider 53ee1bd4 */ $pane->uuid = '53ee1bd4-9d8e-4406-8f45-0ab2bc5d7df3';
  $display->content['new-53ee1bd4-9d8e-4406-8f45-0ab2bc5d7df3'] = $pane;
  $display->panels['contentmain'][10] = 'new-53ee1bd4-9d8e-4406-8f45-0ab2bc5d7df3';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_edit__help'] = $handler;

   /* node_edit_panel_context */ $handler = new stdClass();
   /* node_edit_panel_context */ $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
   /* node_edit_panel_context */ $handler->api_version = 1;
   /* node_edit_panel_context */ $handler->name = 'node_edit_panel_context';
   /* node_edit_panel_context */ $handler->task = 'node_edit';
   /* node_edit_panel_context */ $handler->subtask = '';
   /* node_edit_panel_context */ $handler->handler = 'panel_context';
   /* node_edit_panel_context */ $handler->weight = 0;
   /* node_edit_panel_context */ $handler->conf = array(
   /* node_edit_panel_context */   'title' => 'News',
   /* node_edit_panel_context */   'no_blocks' => 0,
   /* node_edit_panel_context */   'pipeline' => 'standard',
   /* node_edit_panel_context */   'body_classes_to_remove' => '',
   /* node_edit_panel_context */   'body_classes_to_add' => '',
   /* node_edit_panel_context */   'css_id' => '',
   /* node_edit_panel_context */   'css' => '',
   /* node_edit_panel_context */   'contexts' => array(),
   /* node_edit_panel_context */   'relationships' => array(),
   /* node_edit_panel_context */   'access' => array(
   /* node_edit_panel_context */     'plugins' => array(
   /* node_edit_panel_context */       1 => array(
   /* node_edit_panel_context */         'name' => 'node_type',
   /* node_edit_panel_context */         'settings' => array(
   /* node_edit_panel_context */           'type' => array(
   /* node_edit_panel_context */             'news' => 'news',
   /* node_edit_panel_context */           ),
   /* node_edit_panel_context */         ),
   /* node_edit_panel_context */         'context' => 'argument_node_edit_1',
   /* node_edit_panel_context */         'not' => FALSE,
   /* node_edit_panel_context */       ),
   /* node_edit_panel_context */     ),
   /* node_edit_panel_context */     'logic' => 'and',
   /* node_edit_panel_context */   ),
   /* node_edit_panel_context */ );
   /* node_edit__help dbfbb445 */ $display = new panels_display();
   /* node_edit__help dbfbb445 */ $display->layout = 'gn2_2col_header';
   /* node_edit__help dbfbb445 */ $display->layout_settings = array();
   /* node_edit__help dbfbb445 */ $display->panel_settings = array(
   /* node_edit__help dbfbb445 */   'style_settings' => array(
   /* node_edit__help dbfbb445 */     'default' => NULL,
   /* node_edit__help dbfbb445 */     'sidebar' => NULL,
   /* node_edit__help dbfbb445 */     'contentmain' => NULL,
   /* node_edit__help dbfbb445 */   ),
   /* node_edit__help dbfbb445 */ );
   /* node_edit__help dbfbb445 */ $display->cache = array();
   /* node_edit__help dbfbb445 */ $display->title = '';
   /* node_edit__help dbfbb445 */ $display->uuid = 'dbfbb445-3c10-41c1-91dc-4fef01d7c498';
   /* node_edit__help dbfbb445 */ $display->storage_type = 'page_manager';
   /* node_edit__help dbfbb445 */ $display->storage_id = 'node_edit_panel_context';
  $display->content = array();
  $display->panels = array();
   /* node_edit__help b133ed35 */ $pane = new stdClass();
   /* node_edit__help b133ed35 */ $pane->pid = 'new-b133ed35-dedc-4f84-9571-0d62763c2559';
   /* node_edit__help b133ed35 */ $pane->panel = 'contentmain';
   /* node_edit__help b133ed35 */ $pane->type = 'form';
   /* node_edit__help b133ed35 */ $pane->subtype = 'form';
   /* node_edit__help b133ed35 */ $pane->shown = TRUE;
   /* node_edit__help b133ed35 */ $pane->access = array();
   /* node_edit__help b133ed35 */ $pane->configuration = array(
   /* node_edit__help b133ed35 */   'context' => 'argument_node_edit_1',
   /* node_edit__help b133ed35 */   'override_title' => 0,
   /* node_edit__help b133ed35 */   'override_title_text' => '',
   /* node_edit__help b133ed35 */ );
   /* node_edit__help b133ed35 */ $pane->cache = array();
   /* node_edit__help b133ed35 */ $pane->style = array(
   /* node_edit__help b133ed35 */   'settings' => NULL,
   /* node_edit__help b133ed35 */ );
   /* node_edit__help b133ed35 */ $pane->css = array();
   /* node_edit__help b133ed35 */ $pane->extras = array();
   /* node_edit__help b133ed35 */ $pane->position = 0;
   /* node_edit__help b133ed35 */ $pane->locks = array();
   /* node_edit__help b133ed35 */ $pane->uuid = 'b133ed35-dedc-4f84-9571-0d62763c2559';
  $display->content['new-b133ed35-dedc-4f84-9571-0d62763c2559'] = $pane;
  $display->panels['contentmain'][0] = 'new-b133ed35-dedc-4f84-9571-0d62763c2559';
   /* node_edit__help bed41759 */ $pane = new stdClass();
   /* node_edit__help bed41759 */ $pane->pid = 'new-bed41759-080b-4bc1-a3c8-966041522b7d';
   /* node_edit__help bed41759 */ $pane->panel = 'contentmain';
   /* node_edit__help bed41759 */ $pane->type = 'node_form_buttons';
   /* node_edit__help bed41759 */ $pane->subtype = 'node_form_buttons';
   /* node_edit__help bed41759 */ $pane->shown = TRUE;
   /* node_edit__help bed41759 */ $pane->access = array();
   /* node_edit__help bed41759 */ $pane->configuration = array(
   /* node_edit__help bed41759 */   'context' => 'argument_node_edit_1',
   /* node_edit__help bed41759 */   'override_title' => 1,
   /* node_edit__help bed41759 */   'override_title_text' => '',
   /* node_edit__help bed41759 */ );
   /* node_edit__help bed41759 */ $pane->cache = array();
   /* node_edit__help bed41759 */ $pane->style = array(
   /* node_edit__help bed41759 */   'settings' => NULL,
   /* node_edit__help bed41759 */ );
   /* node_edit__help bed41759 */ $pane->css = array();
   /* node_edit__help bed41759 */ $pane->extras = array();
   /* node_edit__help bed41759 */ $pane->position = 1;
   /* node_edit__help bed41759 */ $pane->locks = array();
   /* node_edit__help bed41759 */ $pane->uuid = 'bed41759-080b-4bc1-a3c8-966041522b7d';
  $display->content['new-bed41759-080b-4bc1-a3c8-966041522b7d'] = $pane;
  $display->panels['contentmain'][1] = 'new-bed41759-080b-4bc1-a3c8-966041522b7d';
   /* node_edit__help 3e9bfb2e */ $pane = new stdClass();
   /* node_edit__help 3e9bfb2e */ $pane->pid = 'new-3e9bfb2e-7f9e-429f-a3be-624ed3bde54f';
   /* node_edit__help 3e9bfb2e */ $pane->panel = 'sidebar';
   /* node_edit__help 3e9bfb2e */ $pane->type = 'entity_form_field';
   /* node_edit__help 3e9bfb2e */ $pane->subtype = 'node:field_topic';
   /* node_edit__help 3e9bfb2e */ $pane->shown = TRUE;
   /* node_edit__help 3e9bfb2e */ $pane->access = array();
   /* node_edit__help 3e9bfb2e */ $pane->configuration = array(
   /* node_edit__help 3e9bfb2e */   'label' => '',
   /* node_edit__help 3e9bfb2e */   'formatter' => '',
   /* node_edit__help 3e9bfb2e */   'context' => 'argument_node_edit_1',
   /* node_edit__help 3e9bfb2e */   'override_title' => 0,
   /* node_edit__help 3e9bfb2e */   'override_title_text' => '',
   /* node_edit__help 3e9bfb2e */ );
   /* node_edit__help 3e9bfb2e */ $pane->cache = array();
   /* node_edit__help 3e9bfb2e */ $pane->style = array(
   /* node_edit__help 3e9bfb2e */   'settings' => NULL,
   /* node_edit__help 3e9bfb2e */ );
   /* node_edit__help 3e9bfb2e */ $pane->css = array();
   /* node_edit__help 3e9bfb2e */ $pane->extras = array();
   /* node_edit__help 3e9bfb2e */ $pane->position = 0;
   /* node_edit__help 3e9bfb2e */ $pane->locks = array();
   /* node_edit__help 3e9bfb2e */ $pane->uuid = '3e9bfb2e-7f9e-429f-a3be-624ed3bde54f';
  $display->content['new-3e9bfb2e-7f9e-429f-a3be-624ed3bde54f'] = $pane;
  $display->panels['sidebar'][0] = 'new-3e9bfb2e-7f9e-429f-a3be-624ed3bde54f';
   /* node_edit__help 75ed1322 */ $pane = new stdClass();
   /* node_edit__help 75ed1322 */ $pane->pid = 'new-75ed1322-1c24-439b-9ec0-f88079becccc';
   /* node_edit__help 75ed1322 */ $pane->panel = 'sidebar';
   /* node_edit__help 75ed1322 */ $pane->type = 'entity_form_field';
   /* node_edit__help 75ed1322 */ $pane->subtype = 'node:field_country';
   /* node_edit__help 75ed1322 */ $pane->shown = TRUE;
   /* node_edit__help 75ed1322 */ $pane->access = array();
   /* node_edit__help 75ed1322 */ $pane->configuration = array(
   /* node_edit__help 75ed1322 */   'label' => '',
   /* node_edit__help 75ed1322 */   'formatter' => '',
   /* node_edit__help 75ed1322 */   'context' => 'argument_node_edit_1',
   /* node_edit__help 75ed1322 */   'override_title' => 0,
   /* node_edit__help 75ed1322 */   'override_title_text' => '',
   /* node_edit__help 75ed1322 */ );
   /* node_edit__help 75ed1322 */ $pane->cache = array();
   /* node_edit__help 75ed1322 */ $pane->style = array(
   /* node_edit__help 75ed1322 */   'settings' => NULL,
   /* node_edit__help 75ed1322 */ );
   /* node_edit__help 75ed1322 */ $pane->css = array();
   /* node_edit__help 75ed1322 */ $pane->extras = array();
   /* node_edit__help 75ed1322 */ $pane->position = 1;
   /* node_edit__help 75ed1322 */ $pane->locks = array();
   /* node_edit__help 75ed1322 */ $pane->uuid = '75ed1322-1c24-439b-9ec0-f88079becccc';
  $display->content['new-75ed1322-1c24-439b-9ec0-f88079becccc'] = $pane;
  $display->panels['sidebar'][1] = 'new-75ed1322-1c24-439b-9ec0-f88079becccc';
   /* node_edit__help b259b8ce */ $pane = new stdClass();
   /* node_edit__help b259b8ce */ $pane->pid = 'new-b259b8ce-abfc-458d-b3e1-6f98a1ff618b';
   /* node_edit__help b259b8ce */ $pane->panel = 'sidebar';
   /* node_edit__help b259b8ce */ $pane->type = 'entity_form_field';
   /* node_edit__help b259b8ce */ $pane->subtype = 'node:field_region';
   /* node_edit__help b259b8ce */ $pane->shown = TRUE;
   /* node_edit__help b259b8ce */ $pane->access = array();
   /* node_edit__help b259b8ce */ $pane->configuration = array(
   /* node_edit__help b259b8ce */   'label' => '',
   /* node_edit__help b259b8ce */   'formatter' => '',
   /* node_edit__help b259b8ce */   'context' => 'argument_node_edit_1',
   /* node_edit__help b259b8ce */   'override_title' => 0,
   /* node_edit__help b259b8ce */   'override_title_text' => '',
   /* node_edit__help b259b8ce */ );
   /* node_edit__help b259b8ce */ $pane->cache = array();
   /* node_edit__help b259b8ce */ $pane->style = array(
   /* node_edit__help b259b8ce */   'settings' => NULL,
   /* node_edit__help b259b8ce */ );
   /* node_edit__help b259b8ce */ $pane->css = array();
   /* node_edit__help b259b8ce */ $pane->extras = array();
   /* node_edit__help b259b8ce */ $pane->position = 2;
   /* node_edit__help b259b8ce */ $pane->locks = array();
   /* node_edit__help b259b8ce */ $pane->uuid = 'b259b8ce-abfc-458d-b3e1-6f98a1ff618b';
  $display->content['new-b259b8ce-abfc-458d-b3e1-6f98a1ff618b'] = $pane;
  $display->panels['sidebar'][2] = 'new-b259b8ce-abfc-458d-b3e1-6f98a1ff618b';
   /* node_edit__help 24d397fc */ $pane = new stdClass();
   /* node_edit__help 24d397fc */ $pane->pid = 'new-24d397fc-d48b-4917-9942-27b6f5482114';
   /* node_edit__help 24d397fc */ $pane->panel = 'sidebar';
   /* node_edit__help 24d397fc */ $pane->type = 'entity_form_field';
   /* node_edit__help 24d397fc */ $pane->subtype = 'node:field_privacy_settings';
   /* node_edit__help 24d397fc */ $pane->shown = TRUE;
   /* node_edit__help 24d397fc */ $pane->access = array();
   /* node_edit__help 24d397fc */ $pane->configuration = array(
   /* node_edit__help 24d397fc */   'label' => '',
   /* node_edit__help 24d397fc */   'formatter' => '',
   /* node_edit__help 24d397fc */   'context' => 'argument_node_edit_1',
   /* node_edit__help 24d397fc */   'override_title' => 0,
   /* node_edit__help 24d397fc */   'override_title_text' => '',
   /* node_edit__help 24d397fc */ );
   /* node_edit__help 24d397fc */ $pane->cache = array();
   /* node_edit__help 24d397fc */ $pane->style = array(
   /* node_edit__help 24d397fc */   'settings' => NULL,
   /* node_edit__help 24d397fc */ );
   /* node_edit__help 24d397fc */ $pane->css = array();
   /* node_edit__help 24d397fc */ $pane->extras = array();
   /* node_edit__help 24d397fc */ $pane->position = 3;
   /* node_edit__help 24d397fc */ $pane->locks = array();
   /* node_edit__help 24d397fc */ $pane->uuid = '24d397fc-d48b-4917-9942-27b6f5482114';
  $display->content['new-24d397fc-d48b-4917-9942-27b6f5482114'] = $pane;
  $display->panels['sidebar'][3] = 'new-24d397fc-d48b-4917-9942-27b6f5482114';
   /* node_edit__help b620c5d9 */ $pane = new stdClass();
   /* node_edit__help b620c5d9 */ $pane->pid = 'new-b620c5d9-02a2-4ea3-89fc-746913434a56';
   /* node_edit__help b620c5d9 */ $pane->panel = 'sidebar';
   /* node_edit__help b620c5d9 */ $pane->type = 'entity_form_field';
   /* node_edit__help b620c5d9 */ $pane->subtype = 'node:field_access_settings';
   /* node_edit__help b620c5d9 */ $pane->shown = TRUE;
   /* node_edit__help b620c5d9 */ $pane->access = array();
   /* node_edit__help b620c5d9 */ $pane->configuration = array(
   /* node_edit__help b620c5d9 */   'label' => '',
   /* node_edit__help b620c5d9 */   'formatter' => '',
   /* node_edit__help b620c5d9 */   'context' => 'argument_node_edit_1',
   /* node_edit__help b620c5d9 */   'override_title' => 0,
   /* node_edit__help b620c5d9 */   'override_title_text' => '',
   /* node_edit__help b620c5d9 */ );
   /* node_edit__help b620c5d9 */ $pane->cache = array();
   /* node_edit__help b620c5d9 */ $pane->style = array(
   /* node_edit__help b620c5d9 */   'settings' => NULL,
   /* node_edit__help b620c5d9 */ );
   /* node_edit__help b620c5d9 */ $pane->css = array();
   /* node_edit__help b620c5d9 */ $pane->extras = array();
   /* node_edit__help b620c5d9 */ $pane->position = 4;
   /* node_edit__help b620c5d9 */ $pane->locks = array();
   /* node_edit__help b620c5d9 */ $pane->uuid = 'b620c5d9-02a2-4ea3-89fc-746913434a56';
  $display->content['new-b620c5d9-02a2-4ea3-89fc-746913434a56'] = $pane;
  $display->panels['sidebar'][4] = 'new-b620c5d9-02a2-4ea3-89fc-746913434a56';
   /* node_edit__help 00faa0b4 */ $pane = new stdClass();
   /* node_edit__help 00faa0b4 */ $pane->pid = 'new-00faa0b4-f9c4-46af-8508-116df4dae6f9';
   /* node_edit__help 00faa0b4 */ $pane->panel = 'sidebar';
   /* node_edit__help 00faa0b4 */ $pane->type = 'entity_form_field';
   /* node_edit__help 00faa0b4 */ $pane->subtype = 'node:og_group_ref';
   /* node_edit__help 00faa0b4 */ $pane->shown = TRUE;
   /* node_edit__help 00faa0b4 */ $pane->access = array();
   /* node_edit__help 00faa0b4 */ $pane->configuration = array(
   /* node_edit__help 00faa0b4 */   'label' => '',
   /* node_edit__help 00faa0b4 */   'formatter' => '',
   /* node_edit__help 00faa0b4 */   'context' => 'argument_node_edit_1',
   /* node_edit__help 00faa0b4 */   'override_title' => 0,
   /* node_edit__help 00faa0b4 */   'override_title_text' => '',
   /* node_edit__help 00faa0b4 */ );
   /* node_edit__help 00faa0b4 */ $pane->cache = array();
   /* node_edit__help 00faa0b4 */ $pane->style = array(
   /* node_edit__help 00faa0b4 */   'settings' => NULL,
   /* node_edit__help 00faa0b4 */ );
   /* node_edit__help 00faa0b4 */ $pane->css = array();
   /* node_edit__help 00faa0b4 */ $pane->extras = array();
   /* node_edit__help 00faa0b4 */ $pane->position = 5;
   /* node_edit__help 00faa0b4 */ $pane->locks = array();
   /* node_edit__help 00faa0b4 */ $pane->uuid = '00faa0b4-f9c4-46af-8508-116df4dae6f9';
  $display->content['new-00faa0b4-f9c4-46af-8508-116df4dae6f9'] = $pane;
  $display->panels['sidebar'][5] = 'new-00faa0b4-f9c4-46af-8508-116df4dae6f9';
   /* node_edit__help 4c7ca015 */ $pane = new stdClass();
   /* node_edit__help 4c7ca015 */ $pane->pid = 'new-4c7ca015-237f-4c41-b7c9-a6616b2106bd';
   /* node_edit__help 4c7ca015 */ $pane->panel = 'sidebar';
   /* node_edit__help 4c7ca015 */ $pane->type = 'entity_form_field';
   /* node_edit__help 4c7ca015 */ $pane->subtype = 'node:group_content_access';
   /* node_edit__help 4c7ca015 */ $pane->shown = TRUE;
   /* node_edit__help 4c7ca015 */ $pane->access = array();
   /* node_edit__help 4c7ca015 */ $pane->configuration = array(
   /* node_edit__help 4c7ca015 */   'label' => '',
   /* node_edit__help 4c7ca015 */   'formatter' => '',
   /* node_edit__help 4c7ca015 */   'context' => 'argument_node_edit_1',
   /* node_edit__help 4c7ca015 */   'override_title' => 0,
   /* node_edit__help 4c7ca015 */   'override_title_text' => '',
   /* node_edit__help 4c7ca015 */ );
   /* node_edit__help 4c7ca015 */ $pane->cache = array();
   /* node_edit__help 4c7ca015 */ $pane->style = array(
   /* node_edit__help 4c7ca015 */   'settings' => NULL,
   /* node_edit__help 4c7ca015 */ );
   /* node_edit__help 4c7ca015 */ $pane->css = array();
   /* node_edit__help 4c7ca015 */ $pane->extras = array();
   /* node_edit__help 4c7ca015 */ $pane->position = 6;
   /* node_edit__help 4c7ca015 */ $pane->locks = array();
   /* node_edit__help 4c7ca015 */ $pane->uuid = '4c7ca015-237f-4c41-b7c9-a6616b2106bd';
  $display->content['new-4c7ca015-237f-4c41-b7c9-a6616b2106bd'] = $pane;
  $display->panels['sidebar'][6] = 'new-4c7ca015-237f-4c41-b7c9-a6616b2106bd';
   /* node_edit__help 2d9348d0 */ $pane = new stdClass();
   /* node_edit__help 2d9348d0 */ $pane->pid = 'new-2d9348d0-4714-441c-bd40-e32e316eb24e';
   /* node_edit__help 2d9348d0 */ $pane->panel = 'sidebar';
   /* node_edit__help 2d9348d0 */ $pane->type = 'entity_form_field';
   /* node_edit__help 2d9348d0 */ $pane->subtype = 'node:field_release_date_toggle';
   /* node_edit__help 2d9348d0 */ $pane->shown = TRUE;
   /* node_edit__help 2d9348d0 */ $pane->access = array();
   /* node_edit__help 2d9348d0 */ $pane->configuration = array(
   /* node_edit__help 2d9348d0 */   'label' => '',
   /* node_edit__help 2d9348d0 */   'formatter' => '',
   /* node_edit__help 2d9348d0 */   'context' => 'argument_node_edit_1',
   /* node_edit__help 2d9348d0 */   'override_title' => 0,
   /* node_edit__help 2d9348d0 */   'override_title_text' => '',
   /* node_edit__help 2d9348d0 */ );
   /* node_edit__help 2d9348d0 */ $pane->cache = array();
   /* node_edit__help 2d9348d0 */ $pane->style = array(
   /* node_edit__help 2d9348d0 */   'settings' => NULL,
   /* node_edit__help 2d9348d0 */ );
   /* node_edit__help 2d9348d0 */ $pane->css = array();
   /* node_edit__help 2d9348d0 */ $pane->extras = array();
   /* node_edit__help 2d9348d0 */ $pane->position = 7;
   /* node_edit__help 2d9348d0 */ $pane->locks = array();
   /* node_edit__help 2d9348d0 */ $pane->uuid = '2d9348d0-4714-441c-bd40-e32e316eb24e';
  $display->content['new-2d9348d0-4714-441c-bd40-e32e316eb24e'] = $pane;
  $display->panels['sidebar'][7] = 'new-2d9348d0-4714-441c-bd40-e32e316eb24e';
   /* node_edit__help ed78718d */ $pane = new stdClass();
   /* node_edit__help ed78718d */ $pane->pid = 'new-ed78718d-90d5-438d-bab1-30ef00fb8bbf';
   /* node_edit__help ed78718d */ $pane->panel = 'sidebar';
   /* node_edit__help ed78718d */ $pane->type = 'scheduler_form_pane';
   /* node_edit__help ed78718d */ $pane->subtype = 'scheduler_form_pane';
   /* node_edit__help ed78718d */ $pane->shown = TRUE;
   /* node_edit__help ed78718d */ $pane->access = array();
   /* node_edit__help ed78718d */ $pane->configuration = array(
   /* node_edit__help ed78718d */   'context' => 'argument_node_edit_1',
   /* node_edit__help ed78718d */   'override_title' => 0,
   /* node_edit__help ed78718d */   'override_title_text' => '',
   /* node_edit__help ed78718d */   'override_title_heading' => 'h2',
   /* node_edit__help ed78718d */ );
   /* node_edit__help ed78718d */ $pane->cache = array();
   /* node_edit__help ed78718d */ $pane->style = array(
   /* node_edit__help ed78718d */   'settings' => NULL,
   /* node_edit__help ed78718d */ );
   /* node_edit__help ed78718d */ $pane->css = array();
   /* node_edit__help ed78718d */ $pane->extras = array();
   /* node_edit__help ed78718d */ $pane->position = 8;
   /* node_edit__help ed78718d */ $pane->locks = array();
   /* node_edit__help ed78718d */ $pane->uuid = 'ed78718d-90d5-438d-bab1-30ef00fb8bbf';
  $display->content['new-ed78718d-90d5-438d-bab1-30ef00fb8bbf'] = $pane;
  $display->panels['sidebar'][8] = 'new-ed78718d-90d5-438d-bab1-30ef00fb8bbf';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_edit_panel_context'] = $handler;

   /* node_edit_panel_context_3 */ $handler = new stdClass();
   /* node_edit_panel_context_3 */ $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
   /* node_edit_panel_context_3 */ $handler->api_version = 1;
   /* node_edit_panel_context_3 */ $handler->name = 'node_edit_panel_context_3';
   /* node_edit_panel_context_3 */ $handler->task = 'node_edit';
   /* node_edit_panel_context_3 */ $handler->subtask = '';
   /* node_edit_panel_context_3 */ $handler->handler = 'panel_context';
   /* node_edit_panel_context_3 */ $handler->weight = 2;
   /* node_edit_panel_context_3 */ $handler->conf = array(
   /* node_edit_panel_context_3 */   'title' => 'Post (minimal)',
   /* node_edit_panel_context_3 */   'no_blocks' => 0,
   /* node_edit_panel_context_3 */   'pipeline' => 'standard',
   /* node_edit_panel_context_3 */   'body_classes_to_remove' => '',
   /* node_edit_panel_context_3 */   'body_classes_to_add' => '',
   /* node_edit_panel_context_3 */   'css_id' => '',
   /* node_edit_panel_context_3 */   'css' => '',
   /* node_edit_panel_context_3 */   'contexts' => array(),
   /* node_edit_panel_context_3 */   'relationships' => array(),
   /* node_edit_panel_context_3 */   'access' => array(
   /* node_edit_panel_context_3 */     'plugins' => array(
   /* node_edit_panel_context_3 */       1 => array(
   /* node_edit_panel_context_3 */         'name' => 'node_type',
   /* node_edit_panel_context_3 */         'settings' => array(
   /* node_edit_panel_context_3 */           'type' => array(
   /* node_edit_panel_context_3 */             'post' => 'post',
   /* node_edit_panel_context_3 */           ),
   /* node_edit_panel_context_3 */         ),
   /* node_edit_panel_context_3 */         'context' => 'argument_node_edit_1',
   /* node_edit_panel_context_3 */         'not' => FALSE,
   /* node_edit_panel_context_3 */       ),
   /* node_edit_panel_context_3 */       2 => array(
   /* node_edit_panel_context_3 */         'name' => 'role',
   /* node_edit_panel_context_3 */         'settings' => array(
   /* node_edit_panel_context_3 */           'rids' => array(
   /* node_edit_panel_context_3 */             0 => 8,
   /* node_edit_panel_context_3 */           ),
   /* node_edit_panel_context_3 */         ),
   /* node_edit_panel_context_3 */         'context' => 'logged-in-user',
   /* node_edit_panel_context_3 */         'not' => TRUE,
   /* node_edit_panel_context_3 */       ),
   /* node_edit_panel_context_3 */       3 => array(
   /* node_edit_panel_context_3 */         'name' => 'role',
   /* node_edit_panel_context_3 */         'settings' => array(
   /* node_edit_panel_context_3 */           'rids' => array(
   /* node_edit_panel_context_3 */             0 => 6,
   /* node_edit_panel_context_3 */           ),
   /* node_edit_panel_context_3 */         ),
   /* node_edit_panel_context_3 */         'context' => 'logged-in-user',
   /* node_edit_panel_context_3 */         'not' => FALSE,
   /* node_edit_panel_context_3 */       ),
   /* node_edit_panel_context_3 */     ),
   /* node_edit_panel_context_3 */     'logic' => 'and',
   /* node_edit_panel_context_3 */   ),
   /* node_edit_panel_context_3 */ );
   /* node_edit_panel_context dbfbb445 */ $display = new panels_display();
   /* node_edit_panel_context dbfbb445 */ $display->layout = 'gn2_1col';
   /* node_edit_panel_context dbfbb445 */ $display->layout_settings = array();
   /* node_edit_panel_context dbfbb445 */ $display->panel_settings = array(
   /* node_edit_panel_context dbfbb445 */   'style_settings' => array(
   /* node_edit_panel_context dbfbb445 */     'default' => NULL,
   /* node_edit_panel_context dbfbb445 */     'sidebar' => NULL,
   /* node_edit_panel_context dbfbb445 */     'contentmain' => NULL,
   /* node_edit_panel_context dbfbb445 */   ),
   /* node_edit_panel_context dbfbb445 */ );
   /* node_edit_panel_context dbfbb445 */ $display->cache = array();
   /* node_edit_panel_context dbfbb445 */ $display->title = '';
   /* node_edit_panel_context dbfbb445 */ $display->uuid = 'dbfbb445-3c10-41c1-91dc-4fef01d7c498';
   /* node_edit_panel_context dbfbb445 */ $display->storage_type = 'page_manager';
   /* node_edit_panel_context dbfbb445 */ $display->storage_id = 'node_edit_panel_context_3';
  $display->content = array();
  $display->panels = array();
   /* node_edit_panel_context 05546dd5 */ $pane = new stdClass();
   /* node_edit_panel_context 05546dd5 */ $pane->pid = 'new-05546dd5-a253-45e0-ba0b-37c1359943c8';
   /* node_edit_panel_context 05546dd5 */ $pane->panel = 'contentmain';
   /* node_edit_panel_context 05546dd5 */ $pane->type = 'node_form_title';
   /* node_edit_panel_context 05546dd5 */ $pane->subtype = 'node_form_title';
   /* node_edit_panel_context 05546dd5 */ $pane->shown = TRUE;
   /* node_edit_panel_context 05546dd5 */ $pane->access = array();
   /* node_edit_panel_context 05546dd5 */ $pane->configuration = array(
   /* node_edit_panel_context 05546dd5 */   'context' => 'argument_node_edit_1',
   /* node_edit_panel_context 05546dd5 */   'override_title' => 0,
   /* node_edit_panel_context 05546dd5 */   'override_title_text' => '',
   /* node_edit_panel_context 05546dd5 */ );
   /* node_edit_panel_context 05546dd5 */ $pane->cache = array();
   /* node_edit_panel_context 05546dd5 */ $pane->style = array(
   /* node_edit_panel_context 05546dd5 */   'settings' => NULL,
   /* node_edit_panel_context 05546dd5 */ );
   /* node_edit_panel_context 05546dd5 */ $pane->css = array();
   /* node_edit_panel_context 05546dd5 */ $pane->extras = array();
   /* node_edit_panel_context 05546dd5 */ $pane->position = 0;
   /* node_edit_panel_context 05546dd5 */ $pane->locks = array();
   /* node_edit_panel_context 05546dd5 */ $pane->uuid = '05546dd5-a253-45e0-ba0b-37c1359943c8';
  $display->content['new-05546dd5-a253-45e0-ba0b-37c1359943c8'] = $pane;
  $display->panels['contentmain'][0] = 'new-05546dd5-a253-45e0-ba0b-37c1359943c8';
   /* node_edit_panel_context 34b66c00 */ $pane = new stdClass();
   /* node_edit_panel_context 34b66c00 */ $pane->pid = 'new-34b66c00-5b4e-4ec5-ab19-938764aa1f2e';
   /* node_edit_panel_context 34b66c00 */ $pane->panel = 'contentmain';
   /* node_edit_panel_context 34b66c00 */ $pane->type = 'entity_form_field';
   /* node_edit_panel_context 34b66c00 */ $pane->subtype = 'node:body';
   /* node_edit_panel_context 34b66c00 */ $pane->shown = TRUE;
   /* node_edit_panel_context 34b66c00 */ $pane->access = array();
   /* node_edit_panel_context 34b66c00 */ $pane->configuration = array(
   /* node_edit_panel_context 34b66c00 */   'label' => '',
   /* node_edit_panel_context 34b66c00 */   'formatter' => '',
   /* node_edit_panel_context 34b66c00 */   'context' => 'argument_node_edit_1',
   /* node_edit_panel_context 34b66c00 */   'override_title' => 0,
   /* node_edit_panel_context 34b66c00 */   'override_title_text' => '',
   /* node_edit_panel_context 34b66c00 */ );
   /* node_edit_panel_context 34b66c00 */ $pane->cache = array();
   /* node_edit_panel_context 34b66c00 */ $pane->style = array(
   /* node_edit_panel_context 34b66c00 */   'settings' => NULL,
   /* node_edit_panel_context 34b66c00 */ );
   /* node_edit_panel_context 34b66c00 */ $pane->css = array();
   /* node_edit_panel_context 34b66c00 */ $pane->extras = array();
   /* node_edit_panel_context 34b66c00 */ $pane->position = 1;
   /* node_edit_panel_context 34b66c00 */ $pane->locks = array();
   /* node_edit_panel_context 34b66c00 */ $pane->uuid = '34b66c00-5b4e-4ec5-ab19-938764aa1f2e';
  $display->content['new-34b66c00-5b4e-4ec5-ab19-938764aa1f2e'] = $pane;
  $display->panels['contentmain'][1] = 'new-34b66c00-5b4e-4ec5-ab19-938764aa1f2e';
   /* node_edit_panel_context 0f64c4bb */ $pane = new stdClass();
   /* node_edit_panel_context 0f64c4bb */ $pane->pid = 'new-0f64c4bb-149b-48c7-90e0-16c65ce82ca8';
   /* node_edit_panel_context 0f64c4bb */ $pane->panel = 'contentmain';
   /* node_edit_panel_context 0f64c4bb */ $pane->type = 'entity_form_field';
   /* node_edit_panel_context 0f64c4bb */ $pane->subtype = 'node:field_main_image';
   /* node_edit_panel_context 0f64c4bb */ $pane->shown = TRUE;
   /* node_edit_panel_context 0f64c4bb */ $pane->access = array();
   /* node_edit_panel_context 0f64c4bb */ $pane->configuration = array(
   /* node_edit_panel_context 0f64c4bb */   'label' => '',
   /* node_edit_panel_context 0f64c4bb */   'formatter' => '',
   /* node_edit_panel_context 0f64c4bb */   'context' => 'argument_node_edit_1',
   /* node_edit_panel_context 0f64c4bb */   'override_title' => 0,
   /* node_edit_panel_context 0f64c4bb */   'override_title_text' => '',
   /* node_edit_panel_context 0f64c4bb */ );
   /* node_edit_panel_context 0f64c4bb */ $pane->cache = array();
   /* node_edit_panel_context 0f64c4bb */ $pane->style = array(
   /* node_edit_panel_context 0f64c4bb */   'settings' => NULL,
   /* node_edit_panel_context 0f64c4bb */ );
   /* node_edit_panel_context 0f64c4bb */ $pane->css = array();
   /* node_edit_panel_context 0f64c4bb */ $pane->extras = array();
   /* node_edit_panel_context 0f64c4bb */ $pane->position = 2;
   /* node_edit_panel_context 0f64c4bb */ $pane->locks = array();
   /* node_edit_panel_context 0f64c4bb */ $pane->uuid = '0f64c4bb-149b-48c7-90e0-16c65ce82ca8';
  $display->content['new-0f64c4bb-149b-48c7-90e0-16c65ce82ca8'] = $pane;
  $display->panels['contentmain'][2] = 'new-0f64c4bb-149b-48c7-90e0-16c65ce82ca8';
   /* node_edit_panel_context 24d397fc */ $pane = new stdClass();
   /* node_edit_panel_context 24d397fc */ $pane->pid = 'new-24d397fc-d48b-4917-9942-27b6f5482114';
   /* node_edit_panel_context 24d397fc */ $pane->panel = 'contentmain';
   /* node_edit_panel_context 24d397fc */ $pane->type = 'entity_form_field';
   /* node_edit_panel_context 24d397fc */ $pane->subtype = 'node:field_privacy_settings';
   /* node_edit_panel_context 24d397fc */ $pane->shown = TRUE;
   /* node_edit_panel_context 24d397fc */ $pane->access = array();
   /* node_edit_panel_context 24d397fc */ $pane->configuration = array(
   /* node_edit_panel_context 24d397fc */   'label' => '',
   /* node_edit_panel_context 24d397fc */   'formatter' => '',
   /* node_edit_panel_context 24d397fc */   'context' => 'argument_node_edit_1',
   /* node_edit_panel_context 24d397fc */   'override_title' => 0,
   /* node_edit_panel_context 24d397fc */   'override_title_text' => '',
   /* node_edit_panel_context 24d397fc */ );
   /* node_edit_panel_context 24d397fc */ $pane->cache = array();
   /* node_edit_panel_context 24d397fc */ $pane->style = array(
   /* node_edit_panel_context 24d397fc */   'settings' => NULL,
   /* node_edit_panel_context 24d397fc */ );
   /* node_edit_panel_context 24d397fc */ $pane->css = array();
   /* node_edit_panel_context 24d397fc */ $pane->extras = array();
   /* node_edit_panel_context 24d397fc */ $pane->position = 3;
   /* node_edit_panel_context 24d397fc */ $pane->locks = array();
   /* node_edit_panel_context 24d397fc */ $pane->uuid = '24d397fc-d48b-4917-9942-27b6f5482114';
  $display->content['new-24d397fc-d48b-4917-9942-27b6f5482114'] = $pane;
  $display->panels['contentmain'][3] = 'new-24d397fc-d48b-4917-9942-27b6f5482114';
   /* node_edit_panel_context b620c5d9 */ $pane = new stdClass();
   /* node_edit_panel_context b620c5d9 */ $pane->pid = 'new-b620c5d9-02a2-4ea3-89fc-746913434a56';
   /* node_edit_panel_context b620c5d9 */ $pane->panel = 'contentmain';
   /* node_edit_panel_context b620c5d9 */ $pane->type = 'entity_form_field';
   /* node_edit_panel_context b620c5d9 */ $pane->subtype = 'node:field_access_settings';
   /* node_edit_panel_context b620c5d9 */ $pane->shown = TRUE;
   /* node_edit_panel_context b620c5d9 */ $pane->access = array();
   /* node_edit_panel_context b620c5d9 */ $pane->configuration = array(
   /* node_edit_panel_context b620c5d9 */   'label' => '',
   /* node_edit_panel_context b620c5d9 */   'formatter' => '',
   /* node_edit_panel_context b620c5d9 */   'context' => 'argument_node_edit_1',
   /* node_edit_panel_context b620c5d9 */   'override_title' => 0,
   /* node_edit_panel_context b620c5d9 */   'override_title_text' => '',
   /* node_edit_panel_context b620c5d9 */ );
   /* node_edit_panel_context b620c5d9 */ $pane->cache = array();
   /* node_edit_panel_context b620c5d9 */ $pane->style = array(
   /* node_edit_panel_context b620c5d9 */   'settings' => NULL,
   /* node_edit_panel_context b620c5d9 */ );
   /* node_edit_panel_context b620c5d9 */ $pane->css = array();
   /* node_edit_panel_context b620c5d9 */ $pane->extras = array();
   /* node_edit_panel_context b620c5d9 */ $pane->position = 4;
   /* node_edit_panel_context b620c5d9 */ $pane->locks = array();
   /* node_edit_panel_context b620c5d9 */ $pane->uuid = 'b620c5d9-02a2-4ea3-89fc-746913434a56';
  $display->content['new-b620c5d9-02a2-4ea3-89fc-746913434a56'] = $pane;
  $display->panels['contentmain'][4] = 'new-b620c5d9-02a2-4ea3-89fc-746913434a56';
   /* node_edit_panel_context 3d7a92e5 */ $pane = new stdClass();
   /* node_edit_panel_context 3d7a92e5 */ $pane->pid = 'new-3d7a92e5-826e-4fab-83db-124639486482';
   /* node_edit_panel_context 3d7a92e5 */ $pane->panel = 'contentmain';
   /* node_edit_panel_context 3d7a92e5 */ $pane->type = 'entity_form_field';
   /* node_edit_panel_context 3d7a92e5 */ $pane->subtype = 'node:og_group_ref';
   /* node_edit_panel_context 3d7a92e5 */ $pane->shown = TRUE;
   /* node_edit_panel_context 3d7a92e5 */ $pane->access = array();
   /* node_edit_panel_context 3d7a92e5 */ $pane->configuration = array(
   /* node_edit_panel_context 3d7a92e5 */   'label' => '',
   /* node_edit_panel_context 3d7a92e5 */   'formatter' => '',
   /* node_edit_panel_context 3d7a92e5 */   'context' => 'argument_node_edit_1',
   /* node_edit_panel_context 3d7a92e5 */   'override_title' => 0,
   /* node_edit_panel_context 3d7a92e5 */   'override_title_text' => '',
   /* node_edit_panel_context 3d7a92e5 */ );
   /* node_edit_panel_context 3d7a92e5 */ $pane->cache = array();
   /* node_edit_panel_context 3d7a92e5 */ $pane->style = array(
   /* node_edit_panel_context 3d7a92e5 */   'settings' => NULL,
   /* node_edit_panel_context 3d7a92e5 */ );
   /* node_edit_panel_context 3d7a92e5 */ $pane->css = array();
   /* node_edit_panel_context 3d7a92e5 */ $pane->extras = array();
   /* node_edit_panel_context 3d7a92e5 */ $pane->position = 5;
   /* node_edit_panel_context 3d7a92e5 */ $pane->locks = array();
   /* node_edit_panel_context 3d7a92e5 */ $pane->uuid = '3d7a92e5-826e-4fab-83db-124639486482';
  $display->content['new-3d7a92e5-826e-4fab-83db-124639486482'] = $pane;
  $display->panels['contentmain'][5] = 'new-3d7a92e5-826e-4fab-83db-124639486482';
   /* node_edit_panel_context bed41759 */ $pane = new stdClass();
   /* node_edit_panel_context bed41759 */ $pane->pid = 'new-bed41759-080b-4bc1-a3c8-966041522b7d';
   /* node_edit_panel_context bed41759 */ $pane->panel = 'contentmain';
   /* node_edit_panel_context bed41759 */ $pane->type = 'node_form_buttons';
   /* node_edit_panel_context bed41759 */ $pane->subtype = 'node_form_buttons';
   /* node_edit_panel_context bed41759 */ $pane->shown = TRUE;
   /* node_edit_panel_context bed41759 */ $pane->access = array();
   /* node_edit_panel_context bed41759 */ $pane->configuration = array(
   /* node_edit_panel_context bed41759 */   'context' => 'argument_node_edit_1',
   /* node_edit_panel_context bed41759 */   'override_title' => 1,
   /* node_edit_panel_context bed41759 */   'override_title_text' => '',
   /* node_edit_panel_context bed41759 */ );
   /* node_edit_panel_context bed41759 */ $pane->cache = array();
   /* node_edit_panel_context bed41759 */ $pane->style = array(
   /* node_edit_panel_context bed41759 */   'settings' => NULL,
   /* node_edit_panel_context bed41759 */ );
   /* node_edit_panel_context bed41759 */ $pane->css = array();
   /* node_edit_panel_context bed41759 */ $pane->extras = array();
   /* node_edit_panel_context bed41759 */ $pane->position = 6;
   /* node_edit_panel_context bed41759 */ $pane->locks = array();
   /* node_edit_panel_context bed41759 */ $pane->uuid = 'bed41759-080b-4bc1-a3c8-966041522b7d';
  $display->content['new-bed41759-080b-4bc1-a3c8-966041522b7d'] = $pane;
  $display->panels['contentmain'][6] = 'new-bed41759-080b-4bc1-a3c8-966041522b7d';
   /* node_edit_panel_context 3e9bfb2e */ $pane = new stdClass();
   /* node_edit_panel_context 3e9bfb2e */ $pane->pid = 'new-3e9bfb2e-7f9e-429f-a3be-624ed3bde54f';
   /* node_edit_panel_context 3e9bfb2e */ $pane->panel = 'contentmain';
   /* node_edit_panel_context 3e9bfb2e */ $pane->type = 'entity_form_field';
   /* node_edit_panel_context 3e9bfb2e */ $pane->subtype = 'node:field_topic';
   /* node_edit_panel_context 3e9bfb2e */ $pane->shown = FALSE;
   /* node_edit_panel_context 3e9bfb2e */ $pane->access = array();
   /* node_edit_panel_context 3e9bfb2e */ $pane->configuration = array(
   /* node_edit_panel_context 3e9bfb2e */   'label' => '',
   /* node_edit_panel_context 3e9bfb2e */   'formatter' => '',
   /* node_edit_panel_context 3e9bfb2e */   'context' => 'argument_node_edit_1',
   /* node_edit_panel_context 3e9bfb2e */   'override_title' => 0,
   /* node_edit_panel_context 3e9bfb2e */   'override_title_text' => '',
   /* node_edit_panel_context 3e9bfb2e */ );
   /* node_edit_panel_context 3e9bfb2e */ $pane->cache = array();
   /* node_edit_panel_context 3e9bfb2e */ $pane->style = array(
   /* node_edit_panel_context 3e9bfb2e */   'settings' => NULL,
   /* node_edit_panel_context 3e9bfb2e */ );
   /* node_edit_panel_context 3e9bfb2e */ $pane->css = array();
   /* node_edit_panel_context 3e9bfb2e */ $pane->extras = array();
   /* node_edit_panel_context 3e9bfb2e */ $pane->position = 7;
   /* node_edit_panel_context 3e9bfb2e */ $pane->locks = array();
   /* node_edit_panel_context 3e9bfb2e */ $pane->uuid = '3e9bfb2e-7f9e-429f-a3be-624ed3bde54f';
  $display->content['new-3e9bfb2e-7f9e-429f-a3be-624ed3bde54f'] = $pane;
  $display->panels['contentmain'][7] = 'new-3e9bfb2e-7f9e-429f-a3be-624ed3bde54f';
   /* node_edit_panel_context 75ed1322 */ $pane = new stdClass();
   /* node_edit_panel_context 75ed1322 */ $pane->pid = 'new-75ed1322-1c24-439b-9ec0-f88079becccc';
   /* node_edit_panel_context 75ed1322 */ $pane->panel = 'contentmain';
   /* node_edit_panel_context 75ed1322 */ $pane->type = 'entity_form_field';
   /* node_edit_panel_context 75ed1322 */ $pane->subtype = 'node:field_country';
   /* node_edit_panel_context 75ed1322 */ $pane->shown = FALSE;
   /* node_edit_panel_context 75ed1322 */ $pane->access = array();
   /* node_edit_panel_context 75ed1322 */ $pane->configuration = array(
   /* node_edit_panel_context 75ed1322 */   'label' => '',
   /* node_edit_panel_context 75ed1322 */   'formatter' => '',
   /* node_edit_panel_context 75ed1322 */   'context' => 'argument_node_edit_1',
   /* node_edit_panel_context 75ed1322 */   'override_title' => 0,
   /* node_edit_panel_context 75ed1322 */   'override_title_text' => '',
   /* node_edit_panel_context 75ed1322 */ );
   /* node_edit_panel_context 75ed1322 */ $pane->cache = array();
   /* node_edit_panel_context 75ed1322 */ $pane->style = array(
   /* node_edit_panel_context 75ed1322 */   'settings' => NULL,
   /* node_edit_panel_context 75ed1322 */ );
   /* node_edit_panel_context 75ed1322 */ $pane->css = array();
   /* node_edit_panel_context 75ed1322 */ $pane->extras = array();
   /* node_edit_panel_context 75ed1322 */ $pane->position = 8;
   /* node_edit_panel_context 75ed1322 */ $pane->locks = array();
   /* node_edit_panel_context 75ed1322 */ $pane->uuid = '75ed1322-1c24-439b-9ec0-f88079becccc';
  $display->content['new-75ed1322-1c24-439b-9ec0-f88079becccc'] = $pane;
  $display->panels['contentmain'][8] = 'new-75ed1322-1c24-439b-9ec0-f88079becccc';
   /* node_edit_panel_context b259b8ce */ $pane = new stdClass();
   /* node_edit_panel_context b259b8ce */ $pane->pid = 'new-b259b8ce-abfc-458d-b3e1-6f98a1ff618b';
   /* node_edit_panel_context b259b8ce */ $pane->panel = 'contentmain';
   /* node_edit_panel_context b259b8ce */ $pane->type = 'entity_form_field';
   /* node_edit_panel_context b259b8ce */ $pane->subtype = 'node:field_region';
   /* node_edit_panel_context b259b8ce */ $pane->shown = FALSE;
   /* node_edit_panel_context b259b8ce */ $pane->access = array();
   /* node_edit_panel_context b259b8ce */ $pane->configuration = array(
   /* node_edit_panel_context b259b8ce */   'label' => '',
   /* node_edit_panel_context b259b8ce */   'formatter' => '',
   /* node_edit_panel_context b259b8ce */   'context' => 'argument_node_edit_1',
   /* node_edit_panel_context b259b8ce */   'override_title' => 0,
   /* node_edit_panel_context b259b8ce */   'override_title_text' => '',
   /* node_edit_panel_context b259b8ce */ );
   /* node_edit_panel_context b259b8ce */ $pane->cache = array();
   /* node_edit_panel_context b259b8ce */ $pane->style = array(
   /* node_edit_panel_context b259b8ce */   'settings' => NULL,
   /* node_edit_panel_context b259b8ce */ );
   /* node_edit_panel_context b259b8ce */ $pane->css = array();
   /* node_edit_panel_context b259b8ce */ $pane->extras = array();
   /* node_edit_panel_context b259b8ce */ $pane->position = 9;
   /* node_edit_panel_context b259b8ce */ $pane->locks = array();
   /* node_edit_panel_context b259b8ce */ $pane->uuid = 'b259b8ce-abfc-458d-b3e1-6f98a1ff618b';
  $display->content['new-b259b8ce-abfc-458d-b3e1-6f98a1ff618b'] = $pane;
  $display->panels['contentmain'][9] = 'new-b259b8ce-abfc-458d-b3e1-6f98a1ff618b';
   /* node_edit_panel_context e5347a15 */ $pane = new stdClass();
   /* node_edit_panel_context e5347a15 */ $pane->pid = 'new-e5347a15-b78e-48c2-a8b8-1d5876789f81';
   /* node_edit_panel_context e5347a15 */ $pane->panel = 'contentmain';
   /* node_edit_panel_context e5347a15 */ $pane->type = 'entity_form_field';
   /* node_edit_panel_context e5347a15 */ $pane->subtype = 'node:field_publish_date_type';
   /* node_edit_panel_context e5347a15 */ $pane->shown = FALSE;
   /* node_edit_panel_context e5347a15 */ $pane->access = array();
   /* node_edit_panel_context e5347a15 */ $pane->configuration = array(
   /* node_edit_panel_context e5347a15 */   'label' => '',
   /* node_edit_panel_context e5347a15 */   'formatter' => '',
   /* node_edit_panel_context e5347a15 */   'context' => 'argument_node_edit_1',
   /* node_edit_panel_context e5347a15 */   'override_title' => 1,
   /* node_edit_panel_context e5347a15 */   'override_title_text' => '',
   /* node_edit_panel_context e5347a15 */ );
   /* node_edit_panel_context e5347a15 */ $pane->cache = array();
   /* node_edit_panel_context e5347a15 */ $pane->style = array(
   /* node_edit_panel_context e5347a15 */   'settings' => NULL,
   /* node_edit_panel_context e5347a15 */ );
   /* node_edit_panel_context e5347a15 */ $pane->css = array();
   /* node_edit_panel_context e5347a15 */ $pane->extras = array();
   /* node_edit_panel_context e5347a15 */ $pane->position = 10;
   /* node_edit_panel_context e5347a15 */ $pane->locks = array();
   /* node_edit_panel_context e5347a15 */ $pane->uuid = 'e5347a15-b78e-48c2-a8b8-1d5876789f81';
  $display->content['new-e5347a15-b78e-48c2-a8b8-1d5876789f81'] = $pane;
  $display->panels['contentmain'][10] = 'new-e5347a15-b78e-48c2-a8b8-1d5876789f81';
   /* node_edit_panel_context 54841f3a */ $pane = new stdClass();
   /* node_edit_panel_context 54841f3a */ $pane->pid = 'new-54841f3a-f640-43f7-a6a4-c28fc4410703';
   /* node_edit_panel_context 54841f3a */ $pane->panel = 'contentmain';
   /* node_edit_panel_context 54841f3a */ $pane->type = 'entity_form_field';
   /* node_edit_panel_context 54841f3a */ $pane->subtype = 'node:field_release_date';
   /* node_edit_panel_context 54841f3a */ $pane->shown = FALSE;
   /* node_edit_panel_context 54841f3a */ $pane->access = array();
   /* node_edit_panel_context 54841f3a */ $pane->configuration = array(
   /* node_edit_panel_context 54841f3a */   'label' => '',
   /* node_edit_panel_context 54841f3a */   'formatter' => '',
   /* node_edit_panel_context 54841f3a */   'context' => 'argument_node_edit_1',
   /* node_edit_panel_context 54841f3a */   'override_title' => 0,
   /* node_edit_panel_context 54841f3a */   'override_title_text' => '',
   /* node_edit_panel_context 54841f3a */ );
   /* node_edit_panel_context 54841f3a */ $pane->cache = array();
   /* node_edit_panel_context 54841f3a */ $pane->style = array(
   /* node_edit_panel_context 54841f3a */   'settings' => NULL,
   /* node_edit_panel_context 54841f3a */ );
   /* node_edit_panel_context 54841f3a */ $pane->css = array();
   /* node_edit_panel_context 54841f3a */ $pane->extras = array();
   /* node_edit_panel_context 54841f3a */ $pane->position = 11;
   /* node_edit_panel_context 54841f3a */ $pane->locks = array();
   /* node_edit_panel_context 54841f3a */ $pane->uuid = '54841f3a-f640-43f7-a6a4-c28fc4410703';
  $display->content['new-54841f3a-f640-43f7-a6a4-c28fc4410703'] = $pane;
  $display->panels['contentmain'][11] = 'new-54841f3a-f640-43f7-a6a4-c28fc4410703';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_edit_panel_context_3'] = $handler;

   /* node_view__course-group-node */ $handler = new stdClass();
   /* node_view__course-group-node */ $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
   /* node_view__course-group-node */ $handler->api_version = 1;
   /* node_view__course-group-node */ $handler->name = 'node_view__course-group-node';
   /* node_view__course-group-node */ $handler->task = 'node_view';
   /* node_view__course-group-node */ $handler->subtask = '';
   /* node_view__course-group-node */ $handler->handler = 'panel_context';
   /* node_view__course-group-node */ $handler->weight = 1;
   /* node_view__course-group-node */ $handler->conf = array(
   /* node_view__course-group-node */   'title' => 'Course Group Node',
   /* node_view__course-group-node */   'no_blocks' => 0,
   /* node_view__course-group-node */   'pipeline' => 'standard',
   /* node_view__course-group-node */   'body_classes_to_remove' => '',
   /* node_view__course-group-node */   'body_classes_to_add' => '',
   /* node_view__course-group-node */   'css_id' => '',
   /* node_view__course-group-node */   'css' => '',
   /* node_view__course-group-node */   'contexts' => array(),
   /* node_view__course-group-node */   'relationships' => array(),
   /* node_view__course-group-node */   'name' => 'course-group-node',
   /* node_view__course-group-node */   'access' => array(
   /* node_view__course-group-node */     'plugins' => array(
   /* node_view__course-group-node */       0 => array(
   /* node_view__course-group-node */         'name' => 'node_type',
   /* node_view__course-group-node */         'settings' => array(
   /* node_view__course-group-node */           'type' => array(
   /* node_view__course-group-node */             'course_group' => 'course_group',
   /* node_view__course-group-node */           ),
   /* node_view__course-group-node */         ),
   /* node_view__course-group-node */         'context' => 'argument_entity_id:node_1',
   /* node_view__course-group-node */         'not' => FALSE,
   /* node_view__course-group-node */       ),
   /* node_view__course-group-node */     ),
   /* node_view__course-group-node */     'logic' => 'and',
   /* node_view__course-group-node */   ),
   /* node_view__course-group-node */ );
   /* node_edit_panel_context_3 f1881af8 */ $display = new panels_display();
   /* node_edit_panel_context_3 f1881af8 */ $display->layout = 'group_layout';
   /* node_edit_panel_context_3 f1881af8 */ $display->layout_settings = array();
   /* node_edit_panel_context_3 f1881af8 */ $display->panel_settings = array(
   /* node_edit_panel_context_3 f1881af8 */   'style_settings' => array(
   /* node_edit_panel_context_3 f1881af8 */     'default' => NULL,
   /* node_edit_panel_context_3 f1881af8 */     'middle' => NULL,
   /* node_edit_panel_context_3 f1881af8 */     'top' => NULL,
   /* node_edit_panel_context_3 f1881af8 */     'sidebar' => NULL,
   /* node_edit_panel_context_3 f1881af8 */     'main_top' => NULL,
   /* node_edit_panel_context_3 f1881af8 */     'main_bottom' => NULL,
   /* node_edit_panel_context_3 f1881af8 */     'footer' => NULL,
   /* node_edit_panel_context_3 f1881af8 */     'group_maintabs' => NULL,
   /* node_edit_panel_context_3 f1881af8 */     'group_maintopleft' => NULL,
   /* node_edit_panel_context_3 f1881af8 */     'group_maintopright' => NULL,
   /* node_edit_panel_context_3 f1881af8 */     'group_mainbanner' => NULL,
   /* node_edit_panel_context_3 f1881af8 */     'group_sidebar' => NULL,
   /* node_edit_panel_context_3 f1881af8 */   ),
   /* node_edit_panel_context_3 f1881af8 */   'group_maintabs' => array(
   /* node_edit_panel_context_3 f1881af8 */     'style' => 'tabs',
   /* node_edit_panel_context_3 f1881af8 */   ),
   /* node_edit_panel_context_3 f1881af8 */ );
   /* node_edit_panel_context_3 f1881af8 */ $display->cache = array();
   /* node_edit_panel_context_3 f1881af8 */ $display->title = '%node:title';
   /* node_edit_panel_context_3 f1881af8 */ $display->uuid = 'f1881af8-f5b3-401b-9a7a-9579bd76971a';
   /* node_edit_panel_context_3 f1881af8 */ $display->storage_type = 'page_manager';
   /* node_edit_panel_context_3 f1881af8 */ $display->storage_id = 'node_view__course-group-node';
  $display->content = array();
  $display->panels = array();
   /* node_edit_panel_context_3 d9599a95 */ $pane = new stdClass();
   /* node_edit_panel_context_3 d9599a95 */ $pane->pid = 'new-d9599a95-3084-4979-b7c3-c55bdf88003d';
   /* node_edit_panel_context_3 d9599a95 */ $pane->panel = 'group_mainbanner';
   /* node_edit_panel_context_3 d9599a95 */ $pane->type = 'views_panes';
   /* node_edit_panel_context_3 d9599a95 */ $pane->subtype = 'news_announcements_posts-panel_pane_mainimage_bodytext';
   /* node_edit_panel_context_3 d9599a95 */ $pane->shown = TRUE;
   /* node_edit_panel_context_3 d9599a95 */ $pane->access = array();
   /* node_edit_panel_context_3 d9599a95 */ $pane->configuration = array();
   /* node_edit_panel_context_3 d9599a95 */ $pane->cache = array();
   /* node_edit_panel_context_3 d9599a95 */ $pane->style = array(
   /* node_edit_panel_context_3 d9599a95 */   'settings' => NULL,
   /* node_edit_panel_context_3 d9599a95 */ );
   /* node_edit_panel_context_3 d9599a95 */ $pane->css = array();
   /* node_edit_panel_context_3 d9599a95 */ $pane->extras = array();
   /* node_edit_panel_context_3 d9599a95 */ $pane->position = 0;
   /* node_edit_panel_context_3 d9599a95 */ $pane->locks = array();
   /* node_edit_panel_context_3 d9599a95 */ $pane->uuid = 'd9599a95-3084-4979-b7c3-c55bdf88003d';
  $display->content['new-d9599a95-3084-4979-b7c3-c55bdf88003d'] = $pane;
  $display->panels['group_mainbanner'][0] = 'new-d9599a95-3084-4979-b7c3-c55bdf88003d';
   /* node_edit_panel_context_3 a95f1dc5 */ $pane = new stdClass();
   /* node_edit_panel_context_3 a95f1dc5 */ $pane->pid = 'new-a95f1dc5-8ad6-4559-a03e-90bf383f664d';
   /* node_edit_panel_context_3 a95f1dc5 */ $pane->panel = 'group_maintabs';
   /* node_edit_panel_context_3 a95f1dc5 */ $pane->type = 'views_panes';
   /* node_edit_panel_context_3 a95f1dc5 */ $pane->subtype = 'news_announcements_posts-panel_pane_23';
   /* node_edit_panel_context_3 a95f1dc5 */ $pane->shown = TRUE;
   /* node_edit_panel_context_3 a95f1dc5 */ $pane->access = array();
   /* node_edit_panel_context_3 a95f1dc5 */ $pane->configuration = array(
   /* node_edit_panel_context_3 a95f1dc5 */   'arguments' => array(
   /* node_edit_panel_context_3 a95f1dc5 */     'type' => 'post',
   /* node_edit_panel_context_3 a95f1dc5 */   ),
   /* node_edit_panel_context_3 a95f1dc5 */   'context' => array(
   /* node_edit_panel_context_3 a95f1dc5 */     1 => 'argument_entity_id:node_1',
   /* node_edit_panel_context_3 a95f1dc5 */   ),
   /* node_edit_panel_context_3 a95f1dc5 */   'override_title' => 0,
   /* node_edit_panel_context_3 a95f1dc5 */   'override_title_text' => '',
   /* node_edit_panel_context_3 a95f1dc5 */   'override_title_heading' => 'h2',
   /* node_edit_panel_context_3 a95f1dc5 */ );
   /* node_edit_panel_context_3 a95f1dc5 */ $pane->cache = array();
   /* node_edit_panel_context_3 a95f1dc5 */ $pane->style = array(
   /* node_edit_panel_context_3 a95f1dc5 */   'settings' => NULL,
   /* node_edit_panel_context_3 a95f1dc5 */ );
   /* node_edit_panel_context_3 a95f1dc5 */ $pane->css = array();
   /* node_edit_panel_context_3 a95f1dc5 */ $pane->extras = array();
   /* node_edit_panel_context_3 a95f1dc5 */ $pane->position = 0;
   /* node_edit_panel_context_3 a95f1dc5 */ $pane->locks = array();
   /* node_edit_panel_context_3 a95f1dc5 */ $pane->uuid = 'a95f1dc5-8ad6-4559-a03e-90bf383f664d';
  $display->content['new-a95f1dc5-8ad6-4559-a03e-90bf383f664d'] = $pane;
  $display->panels['group_maintabs'][0] = 'new-a95f1dc5-8ad6-4559-a03e-90bf383f664d';
   /* node_edit_panel_context_3 bae62e81 */ $pane = new stdClass();
   /* node_edit_panel_context_3 bae62e81 */ $pane->pid = 'new-bae62e81-15ca-47ec-b8a2-f814ddcd4e56';
   /* node_edit_panel_context_3 bae62e81 */ $pane->panel = 'group_maintabs';
   /* node_edit_panel_context_3 bae62e81 */ $pane->type = 'views_panes';
   /* node_edit_panel_context_3 bae62e81 */ $pane->subtype = 'resources-panel_pane_1';
   /* node_edit_panel_context_3 bae62e81 */ $pane->shown = TRUE;
   /* node_edit_panel_context_3 bae62e81 */ $pane->access = array();
   /* node_edit_panel_context_3 bae62e81 */ $pane->configuration = array(
   /* node_edit_panel_context_3 bae62e81 */   'context' => array(
   /* node_edit_panel_context_3 bae62e81 */     0 => 'argument_entity_id:node_1',
   /* node_edit_panel_context_3 bae62e81 */   ),
   /* node_edit_panel_context_3 bae62e81 */ );
   /* node_edit_panel_context_3 bae62e81 */ $pane->cache = array();
   /* node_edit_panel_context_3 bae62e81 */ $pane->style = array(
   /* node_edit_panel_context_3 bae62e81 */   'settings' => NULL,
   /* node_edit_panel_context_3 bae62e81 */ );
   /* node_edit_panel_context_3 bae62e81 */ $pane->css = array();
   /* node_edit_panel_context_3 bae62e81 */ $pane->extras = array();
   /* node_edit_panel_context_3 bae62e81 */ $pane->position = 1;
   /* node_edit_panel_context_3 bae62e81 */ $pane->locks = array();
   /* node_edit_panel_context_3 bae62e81 */ $pane->uuid = 'bae62e81-15ca-47ec-b8a2-f814ddcd4e56';
  $display->content['new-bae62e81-15ca-47ec-b8a2-f814ddcd4e56'] = $pane;
  $display->panels['group_maintabs'][1] = 'new-bae62e81-15ca-47ec-b8a2-f814ddcd4e56';
   /* node_edit_panel_context_3 717f8ad4 */ $pane = new stdClass();
   /* node_edit_panel_context_3 717f8ad4 */ $pane->pid = 'new-717f8ad4-23ae-4ff3-a711-b765b74316d2';
   /* node_edit_panel_context_3 717f8ad4 */ $pane->panel = 'group_maintabs';
   /* node_edit_panel_context_3 717f8ad4 */ $pane->type = 'views_panes';
   /* node_edit_panel_context_3 717f8ad4 */ $pane->subtype = 'group_members-panel_pane_6';
   /* node_edit_panel_context_3 717f8ad4 */ $pane->shown = TRUE;
   /* node_edit_panel_context_3 717f8ad4 */ $pane->access = array();
   /* node_edit_panel_context_3 717f8ad4 */ $pane->configuration = array();
   /* node_edit_panel_context_3 717f8ad4 */ $pane->cache = array();
   /* node_edit_panel_context_3 717f8ad4 */ $pane->style = array(
   /* node_edit_panel_context_3 717f8ad4 */   'settings' => NULL,
   /* node_edit_panel_context_3 717f8ad4 */ );
   /* node_edit_panel_context_3 717f8ad4 */ $pane->css = array();
   /* node_edit_panel_context_3 717f8ad4 */ $pane->extras = array();
   /* node_edit_panel_context_3 717f8ad4 */ $pane->position = 2;
   /* node_edit_panel_context_3 717f8ad4 */ $pane->locks = array();
   /* node_edit_panel_context_3 717f8ad4 */ $pane->uuid = '717f8ad4-23ae-4ff3-a711-b765b74316d2';
  $display->content['new-717f8ad4-23ae-4ff3-a711-b765b74316d2'] = $pane;
  $display->panels['group_maintabs'][2] = 'new-717f8ad4-23ae-4ff3-a711-b765b74316d2';
   /* node_edit_panel_context_3 bf3046aa */ $pane = new stdClass();
   /* node_edit_panel_context_3 bf3046aa */ $pane->pid = 'new-bf3046aa-6598-4c64-a0ec-4f2f4158e10b';
   /* node_edit_panel_context_3 bf3046aa */ $pane->panel = 'group_maintabs';
   /* node_edit_panel_context_3 bf3046aa */ $pane->type = 'views_panes';
   /* node_edit_panel_context_3 bf3046aa */ $pane->subtype = 'subgroups-panel_pane_1';
   /* node_edit_panel_context_3 bf3046aa */ $pane->shown = TRUE;
   /* node_edit_panel_context_3 bf3046aa */ $pane->access = array();
   /* node_edit_panel_context_3 bf3046aa */ $pane->configuration = array();
   /* node_edit_panel_context_3 bf3046aa */ $pane->cache = array();
   /* node_edit_panel_context_3 bf3046aa */ $pane->style = array(
   /* node_edit_panel_context_3 bf3046aa */   'settings' => NULL,
   /* node_edit_panel_context_3 bf3046aa */ );
   /* node_edit_panel_context_3 bf3046aa */ $pane->css = array();
   /* node_edit_panel_context_3 bf3046aa */ $pane->extras = array();
   /* node_edit_panel_context_3 bf3046aa */ $pane->position = 3;
   /* node_edit_panel_context_3 bf3046aa */ $pane->locks = array();
   /* node_edit_panel_context_3 bf3046aa */ $pane->uuid = 'bf3046aa-6598-4c64-a0ec-4f2f4158e10b';
  $display->content['new-bf3046aa-6598-4c64-a0ec-4f2f4158e10b'] = $pane;
  $display->panels['group_maintabs'][3] = 'new-bf3046aa-6598-4c64-a0ec-4f2f4158e10b';
   /* node_edit_panel_context_3 529ebb5e */ $pane = new stdClass();
   /* node_edit_panel_context_3 529ebb5e */ $pane->pid = 'new-529ebb5e-b829-4175-acf0-b4f8ed8e947c';
   /* node_edit_panel_context_3 529ebb5e */ $pane->panel = 'group_maintopleft';
   /* node_edit_panel_context_3 529ebb5e */ $pane->type = 'node_title';
   /* node_edit_panel_context_3 529ebb5e */ $pane->subtype = 'node_title';
   /* node_edit_panel_context_3 529ebb5e */ $pane->shown = TRUE;
   /* node_edit_panel_context_3 529ebb5e */ $pane->access = array();
   /* node_edit_panel_context_3 529ebb5e */ $pane->configuration = array(
   /* node_edit_panel_context_3 529ebb5e */   'link' => 0,
   /* node_edit_panel_context_3 529ebb5e */   'markup' => 'h1',
   /* node_edit_panel_context_3 529ebb5e */   'id' => '',
   /* node_edit_panel_context_3 529ebb5e */   'class' => '',
   /* node_edit_panel_context_3 529ebb5e */   'context' => 'argument_entity_id:node_1',
   /* node_edit_panel_context_3 529ebb5e */   'override_title' => 1,
   /* node_edit_panel_context_3 529ebb5e */   'override_title_text' => '',
   /* node_edit_panel_context_3 529ebb5e */   'override_title_heading' => 'h2',
   /* node_edit_panel_context_3 529ebb5e */ );
   /* node_edit_panel_context_3 529ebb5e */ $pane->cache = array();
   /* node_edit_panel_context_3 529ebb5e */ $pane->style = array(
   /* node_edit_panel_context_3 529ebb5e */   'settings' => NULL,
   /* node_edit_panel_context_3 529ebb5e */ );
   /* node_edit_panel_context_3 529ebb5e */ $pane->css = array();
   /* node_edit_panel_context_3 529ebb5e */ $pane->extras = array();
   /* node_edit_panel_context_3 529ebb5e */ $pane->position = 0;
   /* node_edit_panel_context_3 529ebb5e */ $pane->locks = array();
   /* node_edit_panel_context_3 529ebb5e */ $pane->uuid = '529ebb5e-b829-4175-acf0-b4f8ed8e947c';
  $display->content['new-529ebb5e-b829-4175-acf0-b4f8ed8e947c'] = $pane;
  $display->panels['group_maintopleft'][0] = 'new-529ebb5e-b829-4175-acf0-b4f8ed8e947c';
   /* node_edit_panel_context_3 99a2819b */ $pane = new stdClass();
   /* node_edit_panel_context_3 99a2819b */ $pane->pid = 'new-99a2819b-fea2-41c6-96c8-55af34f08d0c';
   /* node_edit_panel_context_3 99a2819b */ $pane->panel = 'group_maintopright';
   /* node_edit_panel_context_3 99a2819b */ $pane->type = 'entity_field';
   /* node_edit_panel_context_3 99a2819b */ $pane->subtype = 'node:group_group';
   /* node_edit_panel_context_3 99a2819b */ $pane->shown = TRUE;
   /* node_edit_panel_context_3 99a2819b */ $pane->access = array();
   /* node_edit_panel_context_3 99a2819b */ $pane->configuration = array(
   /* node_edit_panel_context_3 99a2819b */   'label' => 'hidden',
   /* node_edit_panel_context_3 99a2819b */   'formatter' => 'og_group_subscribe',
   /* node_edit_panel_context_3 99a2819b */   'delta_limit' => 0,
   /* node_edit_panel_context_3 99a2819b */   'delta_offset' => '0',
   /* node_edit_panel_context_3 99a2819b */   'delta_reversed' => FALSE,
   /* node_edit_panel_context_3 99a2819b */   'formatter_settings' => array(
   /* node_edit_panel_context_3 99a2819b */     'field_formatter_class' => '',
   /* node_edit_panel_context_3 99a2819b */     'field_name' => '0',
   /* node_edit_panel_context_3 99a2819b */   ),
   /* node_edit_panel_context_3 99a2819b */   'context' => 'argument_entity_id:node_1',
   /* node_edit_panel_context_3 99a2819b */   'override_title' => 0,
   /* node_edit_panel_context_3 99a2819b */   'override_title_text' => '',
   /* node_edit_panel_context_3 99a2819b */   'override_title_heading' => 'h2',
   /* node_edit_panel_context_3 99a2819b */ );
   /* node_edit_panel_context_3 99a2819b */ $pane->cache = array();
   /* node_edit_panel_context_3 99a2819b */ $pane->style = array(
   /* node_edit_panel_context_3 99a2819b */   'settings' => NULL,
   /* node_edit_panel_context_3 99a2819b */ );
   /* node_edit_panel_context_3 99a2819b */ $pane->css = array();
   /* node_edit_panel_context_3 99a2819b */ $pane->extras = array();
   /* node_edit_panel_context_3 99a2819b */ $pane->position = 0;
   /* node_edit_panel_context_3 99a2819b */ $pane->locks = array();
   /* node_edit_panel_context_3 99a2819b */ $pane->uuid = '99a2819b-fea2-41c6-96c8-55af34f08d0c';
  $display->content['new-99a2819b-fea2-41c6-96c8-55af34f08d0c'] = $pane;
  $display->panels['group_maintopright'][0] = 'new-99a2819b-fea2-41c6-96c8-55af34f08d0c';
   /* node_edit_panel_context_3 337e0dfd */ $pane = new stdClass();
   /* node_edit_panel_context_3 337e0dfd */ $pane->pid = 'new-337e0dfd-1526-4086-a967-05c747eb4296';
   /* node_edit_panel_context_3 337e0dfd */ $pane->panel = 'group_sidebar';
   /* node_edit_panel_context_3 337e0dfd */ $pane->type = 'panels_mini';
   /* node_edit_panel_context_3 337e0dfd */ $pane->subtype = 'group_admin_menu';
   /* node_edit_panel_context_3 337e0dfd */ $pane->shown = TRUE;
   /* node_edit_panel_context_3 337e0dfd */ $pane->access = array(
   /* node_edit_panel_context_3 337e0dfd */   'plugins' => array(
   /* node_edit_panel_context_3 337e0dfd */     0 => array(
   /* node_edit_panel_context_3 337e0dfd */       'name' => 'gn2_og_role',
   /* node_edit_panel_context_3 337e0dfd */       'settings' => array(
   /* node_edit_panel_context_3 337e0dfd */         'gn2_og_access_settings' => array(
   /* node_edit_panel_context_3 337e0dfd */           'org_manager' => 'org_manager',
   /* node_edit_panel_context_3 337e0dfd */           'group_manager' => 'group_manager',
   /* node_edit_panel_context_3 337e0dfd */           'PA Specialist' => 'PA Specialist',
   /* node_edit_panel_context_3 337e0dfd */           'hr_manager' => 0,
   /* node_edit_panel_context_3 337e0dfd */           'member' => 0,
   /* node_edit_panel_context_3 337e0dfd */         ),
   /* node_edit_panel_context_3 337e0dfd */       ),
   /* node_edit_panel_context_3 337e0dfd */       'context' => 'logged-in-user',
   /* node_edit_panel_context_3 337e0dfd */       'not' => FALSE,
   /* node_edit_panel_context_3 337e0dfd */     ),
   /* node_edit_panel_context_3 337e0dfd */   ),
   /* node_edit_panel_context_3 337e0dfd */ );
   /* node_edit_panel_context_3 337e0dfd */ $pane->configuration = array(
   /* node_edit_panel_context_3 337e0dfd */   'override_title' => 0,
   /* node_edit_panel_context_3 337e0dfd */   'override_title_text' => '',
   /* node_edit_panel_context_3 337e0dfd */   'override_title_heading' => 'h2',
   /* node_edit_panel_context_3 337e0dfd */ );
   /* node_edit_panel_context_3 337e0dfd */ $pane->cache = array();
   /* node_edit_panel_context_3 337e0dfd */ $pane->style = array(
   /* node_edit_panel_context_3 337e0dfd */   'settings' => NULL,
   /* node_edit_panel_context_3 337e0dfd */ );
   /* node_edit_panel_context_3 337e0dfd */ $pane->css = array();
   /* node_edit_panel_context_3 337e0dfd */ $pane->extras = array();
   /* node_edit_panel_context_3 337e0dfd */ $pane->position = 0;
   /* node_edit_panel_context_3 337e0dfd */ $pane->locks = array();
   /* node_edit_panel_context_3 337e0dfd */ $pane->uuid = '337e0dfd-1526-4086-a967-05c747eb4296';
  $display->content['new-337e0dfd-1526-4086-a967-05c747eb4296'] = $pane;
  $display->panels['group_sidebar'][0] = 'new-337e0dfd-1526-4086-a967-05c747eb4296';
   /* node_edit_panel_context_3 dcf93819 */ $pane = new stdClass();
   /* node_edit_panel_context_3 dcf93819 */ $pane->pid = 'new-dcf93819-4a11-4712-bac5-bcd2b24fafba';
   /* node_edit_panel_context_3 dcf93819 */ $pane->panel = 'group_sidebar';
   /* node_edit_panel_context_3 dcf93819 */ $pane->type = 'block';
   /* node_edit_panel_context_3 dcf93819 */ $pane->subtype = 'gn2_manager_access-gn2_manager_manage';
   /* node_edit_panel_context_3 dcf93819 */ $pane->shown = TRUE;
   /* node_edit_panel_context_3 dcf93819 */ $pane->access = array();
   /* node_edit_panel_context_3 dcf93819 */ $pane->configuration = array(
   /* node_edit_panel_context_3 dcf93819 */   'override_title' => 0,
   /* node_edit_panel_context_3 dcf93819 */   'override_title_text' => '',
   /* node_edit_panel_context_3 dcf93819 */   'override_title_heading' => 'h2',
   /* node_edit_panel_context_3 dcf93819 */ );
   /* node_edit_panel_context_3 dcf93819 */ $pane->cache = array();
   /* node_edit_panel_context_3 dcf93819 */ $pane->style = array(
   /* node_edit_panel_context_3 dcf93819 */   'settings' => NULL,
   /* node_edit_panel_context_3 dcf93819 */ );
   /* node_edit_panel_context_3 dcf93819 */ $pane->css = array();
   /* node_edit_panel_context_3 dcf93819 */ $pane->extras = array();
   /* node_edit_panel_context_3 dcf93819 */ $pane->position = 1;
   /* node_edit_panel_context_3 dcf93819 */ $pane->locks = array();
   /* node_edit_panel_context_3 dcf93819 */ $pane->uuid = 'dcf93819-4a11-4712-bac5-bcd2b24fafba';
  $display->content['new-dcf93819-4a11-4712-bac5-bcd2b24fafba'] = $pane;
  $display->panels['group_sidebar'][1] = 'new-dcf93819-4a11-4712-bac5-bcd2b24fafba';
   /* node_edit_panel_context_3 9bd50aaa */ $pane = new stdClass();
   /* node_edit_panel_context_3 9bd50aaa */ $pane->pid = 'new-9bd50aaa-cddb-46f0-8a25-cdd3b9a9b689';
   /* node_edit_panel_context_3 9bd50aaa */ $pane->panel = 'group_sidebar';
   /* node_edit_panel_context_3 9bd50aaa */ $pane->type = 'custom';
   /* node_edit_panel_context_3 9bd50aaa */ $pane->subtype = 'group_help_accordion';
   /* node_edit_panel_context_3 9bd50aaa */ $pane->shown = TRUE;
   /* node_edit_panel_context_3 9bd50aaa */ $pane->access = array();
   /* node_edit_panel_context_3 9bd50aaa */ $pane->configuration = array(
   /* node_edit_panel_context_3 9bd50aaa */   'admin_title' => '',
   /* node_edit_panel_context_3 9bd50aaa */   'title' => '',
   /* node_edit_panel_context_3 9bd50aaa */   'body' => '',
   /* node_edit_panel_context_3 9bd50aaa */   'format' => 'filtered_html',
   /* node_edit_panel_context_3 9bd50aaa */   'substitute' => TRUE,
   /* node_edit_panel_context_3 9bd50aaa */ );
   /* node_edit_panel_context_3 9bd50aaa */ $pane->cache = array();
   /* node_edit_panel_context_3 9bd50aaa */ $pane->style = array(
   /* node_edit_panel_context_3 9bd50aaa */   'settings' => NULL,
   /* node_edit_panel_context_3 9bd50aaa */ );
   /* node_edit_panel_context_3 9bd50aaa */ $pane->css = array();
   /* node_edit_panel_context_3 9bd50aaa */ $pane->extras = array();
   /* node_edit_panel_context_3 9bd50aaa */ $pane->position = 2;
   /* node_edit_panel_context_3 9bd50aaa */ $pane->locks = array();
   /* node_edit_panel_context_3 9bd50aaa */ $pane->uuid = '9bd50aaa-cddb-46f0-8a25-cdd3b9a9b689';
  $display->content['new-9bd50aaa-cddb-46f0-8a25-cdd3b9a9b689'] = $pane;
  $display->panels['group_sidebar'][2] = 'new-9bd50aaa-cddb-46f0-8a25-cdd3b9a9b689';
   /* node_edit_panel_context_3 7c04d973 */ $pane = new stdClass();
   /* node_edit_panel_context_3 7c04d973 */ $pane->pid = 'new-7c04d973-17de-4bf3-a07b-246c0565f176';
   /* node_edit_panel_context_3 7c04d973 */ $pane->panel = 'group_sidebar';
   /* node_edit_panel_context_3 7c04d973 */ $pane->type = 'views';
   /* node_edit_panel_context_3 7c04d973 */ $pane->subtype = 'news_announcements_posts';
   /* node_edit_panel_context_3 7c04d973 */ $pane->shown = TRUE;
   /* node_edit_panel_context_3 7c04d973 */ $pane->access = array();
   /* node_edit_panel_context_3 7c04d973 */ $pane->configuration = array(
   /* node_edit_panel_context_3 7c04d973 */   'override_pager_settings' => 0,
   /* node_edit_panel_context_3 7c04d973 */   'use_pager' => 0,
   /* node_edit_panel_context_3 7c04d973 */   'nodes_per_page' => '3',
   /* node_edit_panel_context_3 7c04d973 */   'pager_id' => '0',
   /* node_edit_panel_context_3 7c04d973 */   'offset' => '0',
   /* node_edit_panel_context_3 7c04d973 */   'more_link' => 0,
   /* node_edit_panel_context_3 7c04d973 */   'feed_icons' => 0,
   /* node_edit_panel_context_3 7c04d973 */   'panel_args' => 0,
   /* node_edit_panel_context_3 7c04d973 */   'link_to_view' => 0,
   /* node_edit_panel_context_3 7c04d973 */   'args' => '',
   /* node_edit_panel_context_3 7c04d973 */   'url' => '',
   /* node_edit_panel_context_3 7c04d973 */   'display' => 'block_2',
   /* node_edit_panel_context_3 7c04d973 */   'context' => array(
   /* node_edit_panel_context_3 7c04d973 */     0 => 'argument_entity_id:node_1.nid',
   /* node_edit_panel_context_3 7c04d973 */   ),
   /* node_edit_panel_context_3 7c04d973 */   'override_title' => 1,
   /* node_edit_panel_context_3 7c04d973 */   'override_title_text' => 'ANNOUNCEMENTS',
   /* node_edit_panel_context_3 7c04d973 */   'override_title_heading' => 'h3',
   /* node_edit_panel_context_3 7c04d973 */ );
   /* node_edit_panel_context_3 7c04d973 */ $pane->cache = array();
   /* node_edit_panel_context_3 7c04d973 */ $pane->style = array(
   /* node_edit_panel_context_3 7c04d973 */   'settings' => array(
   /* node_edit_panel_context_3 7c04d973 */     'clean_markup' => array(
   /* node_edit_panel_context_3 7c04d973 */       'pane_wrapper' => 'div',
   /* node_edit_panel_context_3 7c04d973 */       'additional_pane_classes' => 'panel-pane sidebar-subheading',
   /* node_edit_panel_context_3 7c04d973 */       'additional_pane_attributes' => '',
   /* node_edit_panel_context_3 7c04d973 */       'enable_inner_div' => 0,
   /* node_edit_panel_context_3 7c04d973 */       'title_wrapper' => 'h3',
   /* node_edit_panel_context_3 7c04d973 */       'title_hide' => 0,
   /* node_edit_panel_context_3 7c04d973 */       'content_wrapper' => 'none',
   /* node_edit_panel_context_3 7c04d973 */     ),
   /* node_edit_panel_context_3 7c04d973 */   ),
   /* node_edit_panel_context_3 7c04d973 */   'style' => 'clean_element',
   /* node_edit_panel_context_3 7c04d973 */ );
   /* node_edit_panel_context_3 7c04d973 */ $pane->css = array(
   /* node_edit_panel_context_3 7c04d973 */   'css_id' => '',
   /* node_edit_panel_context_3 7c04d973 */   'css_class' => '',
   /* node_edit_panel_context_3 7c04d973 */ );
   /* node_edit_panel_context_3 7c04d973 */ $pane->extras = array();
   /* node_edit_panel_context_3 7c04d973 */ $pane->position = 3;
   /* node_edit_panel_context_3 7c04d973 */ $pane->locks = array();
   /* node_edit_panel_context_3 7c04d973 */ $pane->uuid = '7c04d973-17de-4bf3-a07b-246c0565f176';
  $display->content['new-7c04d973-17de-4bf3-a07b-246c0565f176'] = $pane;
  $display->panels['group_sidebar'][3] = 'new-7c04d973-17de-4bf3-a07b-246c0565f176';
   /* node_edit_panel_context_3 b4ed9b88 */ $pane = new stdClass();
   /* node_edit_panel_context_3 b4ed9b88 */ $pane->pid = 'new-b4ed9b88-339d-4b14-84bd-0c0eacab2647';
   /* node_edit_panel_context_3 b4ed9b88 */ $pane->panel = 'group_sidebar';
   /* node_edit_panel_context_3 b4ed9b88 */ $pane->type = 'views_panes';
   /* node_edit_panel_context_3 b4ed9b88 */ $pane->subtype = 'events-panel_pane_7';
   /* node_edit_panel_context_3 b4ed9b88 */ $pane->shown = TRUE;
   /* node_edit_panel_context_3 b4ed9b88 */ $pane->access = array();
   /* node_edit_panel_context_3 b4ed9b88 */ $pane->configuration = array();
   /* node_edit_panel_context_3 b4ed9b88 */ $pane->cache = array();
   /* node_edit_panel_context_3 b4ed9b88 */ $pane->style = array(
   /* node_edit_panel_context_3 b4ed9b88 */   'settings' => array(
   /* node_edit_panel_context_3 b4ed9b88 */     'clean_markup' => array(
   /* node_edit_panel_context_3 b4ed9b88 */       'pane_wrapper' => 'div',
   /* node_edit_panel_context_3 b4ed9b88 */       'additional_pane_classes' => 'panel-pane sidebar-subheading',
   /* node_edit_panel_context_3 b4ed9b88 */       'additional_pane_attributes' => '',
   /* node_edit_panel_context_3 b4ed9b88 */       'enable_inner_div' => 0,
   /* node_edit_panel_context_3 b4ed9b88 */       'title_wrapper' => 'h3',
   /* node_edit_panel_context_3 b4ed9b88 */       'title_hide' => 0,
   /* node_edit_panel_context_3 b4ed9b88 */       'content_wrapper' => 'none',
   /* node_edit_panel_context_3 b4ed9b88 */     ),
   /* node_edit_panel_context_3 b4ed9b88 */   ),
   /* node_edit_panel_context_3 b4ed9b88 */   'style' => 'clean_element',
   /* node_edit_panel_context_3 b4ed9b88 */ );
   /* node_edit_panel_context_3 b4ed9b88 */ $pane->css = array();
   /* node_edit_panel_context_3 b4ed9b88 */ $pane->extras = array();
   /* node_edit_panel_context_3 b4ed9b88 */ $pane->position = 4;
   /* node_edit_panel_context_3 b4ed9b88 */ $pane->locks = array();
   /* node_edit_panel_context_3 b4ed9b88 */ $pane->uuid = 'b4ed9b88-339d-4b14-84bd-0c0eacab2647';
  $display->content['new-b4ed9b88-339d-4b14-84bd-0c0eacab2647'] = $pane;
  $display->panels['group_sidebar'][4] = 'new-b4ed9b88-339d-4b14-84bd-0c0eacab2647';
   /* node_edit_panel_context_3 bc870bda */ $pane = new stdClass();
   /* node_edit_panel_context_3 bc870bda */ $pane->pid = 'new-bc870bda-3848-4566-9ab1-ce015e79a45d';
   /* node_edit_panel_context_3 bc870bda */ $pane->panel = 'group_sidebar';
   /* node_edit_panel_context_3 bc870bda */ $pane->type = 'block';
   /* node_edit_panel_context_3 bc870bda */ $pane->subtype = 'gn2_og-gn2-og-latest-activity';
   /* node_edit_panel_context_3 bc870bda */ $pane->shown = TRUE;
   /* node_edit_panel_context_3 bc870bda */ $pane->access = array();
   /* node_edit_panel_context_3 bc870bda */ $pane->configuration = array(
   /* node_edit_panel_context_3 bc870bda */   'override_title' => 0,
   /* node_edit_panel_context_3 bc870bda */   'override_title_text' => '',
   /* node_edit_panel_context_3 bc870bda */   'override_title_heading' => 'h2',
   /* node_edit_panel_context_3 bc870bda */ );
   /* node_edit_panel_context_3 bc870bda */ $pane->cache = array();
   /* node_edit_panel_context_3 bc870bda */ $pane->style = array(
   /* node_edit_panel_context_3 bc870bda */   'settings' => array(
   /* node_edit_panel_context_3 bc870bda */     'clean_markup' => array(
   /* node_edit_panel_context_3 bc870bda */       'pane_wrapper' => 'div',
   /* node_edit_panel_context_3 bc870bda */       'additional_pane_classes' => 'panel-pane sidebar-subheading',
   /* node_edit_panel_context_3 bc870bda */       'additional_pane_attributes' => '',
   /* node_edit_panel_context_3 bc870bda */       'enable_inner_div' => 0,
   /* node_edit_panel_context_3 bc870bda */       'title_wrapper' => 'h3',
   /* node_edit_panel_context_3 bc870bda */       'title_hide' => 0,
   /* node_edit_panel_context_3 bc870bda */       'content_wrapper' => 'none',
   /* node_edit_panel_context_3 bc870bda */     ),
   /* node_edit_panel_context_3 bc870bda */   ),
   /* node_edit_panel_context_3 bc870bda */   'style' => 'clean_element',
   /* node_edit_panel_context_3 bc870bda */ );
   /* node_edit_panel_context_3 bc870bda */ $pane->css = array();
   /* node_edit_panel_context_3 bc870bda */ $pane->extras = array();
   /* node_edit_panel_context_3 bc870bda */ $pane->position = 5;
   /* node_edit_panel_context_3 bc870bda */ $pane->locks = array();
   /* node_edit_panel_context_3 bc870bda */ $pane->uuid = 'bc870bda-3848-4566-9ab1-ce015e79a45d';
  $display->content['new-bc870bda-3848-4566-9ab1-ce015e79a45d'] = $pane;
  $display->panels['group_sidebar'][5] = 'new-bc870bda-3848-4566-9ab1-ce015e79a45d';
   /* node_edit_panel_context_3 ce95b6e8 */ $pane = new stdClass();
   /* node_edit_panel_context_3 ce95b6e8 */ $pane->pid = 'new-ce95b6e8-e75f-424b-a355-f8c2f4d24a2b';
   /* node_edit_panel_context_3 ce95b6e8 */ $pane->panel = 'group_sidebar';
   /* node_edit_panel_context_3 ce95b6e8 */ $pane->type = 'views_panes';
   /* node_edit_panel_context_3 ce95b6e8 */ $pane->subtype = 'group_members-panel_pane_1';
   /* node_edit_panel_context_3 ce95b6e8 */ $pane->shown = TRUE;
   /* node_edit_panel_context_3 ce95b6e8 */ $pane->access = array();
   /* node_edit_panel_context_3 ce95b6e8 */ $pane->configuration = array(
   /* node_edit_panel_context_3 ce95b6e8 */   'override_title' => 1,
   /* node_edit_panel_context_3 ce95b6e8 */   'override_title_text' => 'Group Leadership',
   /* node_edit_panel_context_3 ce95b6e8 */   'override_title_heading' => 'h2',
   /* node_edit_panel_context_3 ce95b6e8 */ );
   /* node_edit_panel_context_3 ce95b6e8 */ $pane->cache = array();
   /* node_edit_panel_context_3 ce95b6e8 */ $pane->style = array(
   /* node_edit_panel_context_3 ce95b6e8 */   'settings' => array(
   /* node_edit_panel_context_3 ce95b6e8 */     'clean_markup' => array(
   /* node_edit_panel_context_3 ce95b6e8 */       'pane_wrapper' => 'div',
   /* node_edit_panel_context_3 ce95b6e8 */       'additional_pane_classes' => 'panel-pane sidebar-subheading',
   /* node_edit_panel_context_3 ce95b6e8 */       'additional_pane_attributes' => '',
   /* node_edit_panel_context_3 ce95b6e8 */       'enable_inner_div' => 0,
   /* node_edit_panel_context_3 ce95b6e8 */       'title_wrapper' => 'h3',
   /* node_edit_panel_context_3 ce95b6e8 */       'title_hide' => 0,
   /* node_edit_panel_context_3 ce95b6e8 */       'content_wrapper' => 'none',
   /* node_edit_panel_context_3 ce95b6e8 */     ),
   /* node_edit_panel_context_3 ce95b6e8 */   ),
   /* node_edit_panel_context_3 ce95b6e8 */   'style' => 'clean_element',
   /* node_edit_panel_context_3 ce95b6e8 */ );
   /* node_edit_panel_context_3 ce95b6e8 */ $pane->css = array();
   /* node_edit_panel_context_3 ce95b6e8 */ $pane->extras = array();
   /* node_edit_panel_context_3 ce95b6e8 */ $pane->position = 6;
   /* node_edit_panel_context_3 ce95b6e8 */ $pane->locks = array();
   /* node_edit_panel_context_3 ce95b6e8 */ $pane->uuid = 'ce95b6e8-e75f-424b-a355-f8c2f4d24a2b';
  $display->content['new-ce95b6e8-e75f-424b-a355-f8c2f4d24a2b'] = $pane;
  $display->panels['group_sidebar'][6] = 'new-ce95b6e8-e75f-424b-a355-f8c2f4d24a2b';
   /* node_edit_panel_context_3 dc322074 */ $pane = new stdClass();
   /* node_edit_panel_context_3 dc322074 */ $pane->pid = 'new-dc322074-58fb-4ef8-80b9-7dbc53ade4fb';
   /* node_edit_panel_context_3 dc322074 */ $pane->panel = 'group_sidebar';
   /* node_edit_panel_context_3 dc322074 */ $pane->type = 'entity_field';
   /* node_edit_panel_context_3 dc322074 */ $pane->subtype = 'node:field_rec_links';
   /* node_edit_panel_context_3 dc322074 */ $pane->shown = TRUE;
   /* node_edit_panel_context_3 dc322074 */ $pane->access = array();
   /* node_edit_panel_context_3 dc322074 */ $pane->configuration = array(
   /* node_edit_panel_context_3 dc322074 */   'label' => 'hidden',
   /* node_edit_panel_context_3 dc322074 */   'formatter' => 'link_default',
   /* node_edit_panel_context_3 dc322074 */   'delta_limit' => '0',
   /* node_edit_panel_context_3 dc322074 */   'delta_offset' => '0',
   /* node_edit_panel_context_3 dc322074 */   'delta_reversed' => 0,
   /* node_edit_panel_context_3 dc322074 */   'formatter_settings' => array(),
   /* node_edit_panel_context_3 dc322074 */   'context' => 'argument_entity_id:node_1',
   /* node_edit_panel_context_3 dc322074 */   'override_title' => 1,
   /* node_edit_panel_context_3 dc322074 */   'override_title_text' => 'Recommended Links',
   /* node_edit_panel_context_3 dc322074 */   'override_title_heading' => 'h2',
   /* node_edit_panel_context_3 dc322074 */ );
   /* node_edit_panel_context_3 dc322074 */ $pane->cache = array();
   /* node_edit_panel_context_3 dc322074 */ $pane->style = array(
   /* node_edit_panel_context_3 dc322074 */   'settings' => array(
   /* node_edit_panel_context_3 dc322074 */     'clean_markup' => array(
   /* node_edit_panel_context_3 dc322074 */       'pane_wrapper' => 'div',
   /* node_edit_panel_context_3 dc322074 */       'additional_pane_classes' => 'panel-pane sidebar-subheading',
   /* node_edit_panel_context_3 dc322074 */       'additional_pane_attributes' => '',
   /* node_edit_panel_context_3 dc322074 */       'enable_inner_div' => 0,
   /* node_edit_panel_context_3 dc322074 */       'title_wrapper' => 'h3',
   /* node_edit_panel_context_3 dc322074 */       'title_hide' => 0,
   /* node_edit_panel_context_3 dc322074 */       'content_wrapper' => 'none',
   /* node_edit_panel_context_3 dc322074 */     ),
   /* node_edit_panel_context_3 dc322074 */   ),
   /* node_edit_panel_context_3 dc322074 */   'style' => 'clean_element',
   /* node_edit_panel_context_3 dc322074 */ );
   /* node_edit_panel_context_3 dc322074 */ $pane->css = array();
   /* node_edit_panel_context_3 dc322074 */ $pane->extras = array();
   /* node_edit_panel_context_3 dc322074 */ $pane->position = 7;
   /* node_edit_panel_context_3 dc322074 */ $pane->locks = array();
   /* node_edit_panel_context_3 dc322074 */ $pane->uuid = 'dc322074-58fb-4ef8-80b9-7dbc53ade4fb';
  $display->content['new-dc322074-58fb-4ef8-80b9-7dbc53ade4fb'] = $pane;
  $display->panels['group_sidebar'][7] = 'new-dc322074-58fb-4ef8-80b9-7dbc53ade4fb';
   /* node_edit_panel_context_3 3179b268 */ $pane = new stdClass();
   /* node_edit_panel_context_3 3179b268 */ $pane->pid = 'new-3179b268-f7d3-4210-8e08-5201556fd876';
   /* node_edit_panel_context_3 3179b268 */ $pane->panel = 'group_sidebar';
   /* node_edit_panel_context_3 3179b268 */ $pane->type = 'views_panes';
   /* node_edit_panel_context_3 3179b268 */ $pane->subtype = 'group_polls-panel_pane_1';
   /* node_edit_panel_context_3 3179b268 */ $pane->shown = TRUE;
   /* node_edit_panel_context_3 3179b268 */ $pane->access = array();
   /* node_edit_panel_context_3 3179b268 */ $pane->configuration = array();
   /* node_edit_panel_context_3 3179b268 */ $pane->cache = array();
   /* node_edit_panel_context_3 3179b268 */ $pane->style = array(
   /* node_edit_panel_context_3 3179b268 */   'settings' => array(
   /* node_edit_panel_context_3 3179b268 */     'clean_markup' => array(
   /* node_edit_panel_context_3 3179b268 */       'pane_wrapper' => 'div',
   /* node_edit_panel_context_3 3179b268 */       'additional_pane_classes' => 'panel-pane sidebar-subheading block__highlighted--lightbg poll-pane',
   /* node_edit_panel_context_3 3179b268 */       'additional_pane_attributes' => '',
   /* node_edit_panel_context_3 3179b268 */       'enable_inner_div' => 0,
   /* node_edit_panel_context_3 3179b268 */       'title_wrapper' => 'h3',
   /* node_edit_panel_context_3 3179b268 */       'title_hide' => 0,
   /* node_edit_panel_context_3 3179b268 */       'content_wrapper' => 'none',
   /* node_edit_panel_context_3 3179b268 */     ),
   /* node_edit_panel_context_3 3179b268 */   ),
   /* node_edit_panel_context_3 3179b268 */   'style' => 'clean_element',
   /* node_edit_panel_context_3 3179b268 */ );
   /* node_edit_panel_context_3 3179b268 */ $pane->css = array();
   /* node_edit_panel_context_3 3179b268 */ $pane->extras = array();
   /* node_edit_panel_context_3 3179b268 */ $pane->position = 8;
   /* node_edit_panel_context_3 3179b268 */ $pane->locks = array();
   /* node_edit_panel_context_3 3179b268 */ $pane->uuid = '3179b268-f7d3-4210-8e08-5201556fd876';
  $display->content['new-3179b268-f7d3-4210-8e08-5201556fd876'] = $pane;
  $display->panels['group_sidebar'][8] = 'new-3179b268-f7d3-4210-8e08-5201556fd876';
   /* node_edit_panel_context_3 f3a2afca */ $pane = new stdClass();
   /* node_edit_panel_context_3 f3a2afca */ $pane->pid = 'new-f3a2afca-bf01-44c1-8213-1243e84617e9';
   /* node_edit_panel_context_3 f3a2afca */ $pane->panel = 'group_sidebar';
   /* node_edit_panel_context_3 f3a2afca */ $pane->type = 'views';
   /* node_edit_panel_context_3 f3a2afca */ $pane->subtype = 'activity_default_page';
   /* node_edit_panel_context_3 f3a2afca */ $pane->shown = TRUE;
   /* node_edit_panel_context_3 f3a2afca */ $pane->access = array();
   /* node_edit_panel_context_3 f3a2afca */ $pane->configuration = array(
   /* node_edit_panel_context_3 f3a2afca */   'override_pager_settings' => 0,
   /* node_edit_panel_context_3 f3a2afca */   'use_pager' => 0,
   /* node_edit_panel_context_3 f3a2afca */   'nodes_per_page' => '4',
   /* node_edit_panel_context_3 f3a2afca */   'pager_id' => '0',
   /* node_edit_panel_context_3 f3a2afca */   'offset' => '0',
   /* node_edit_panel_context_3 f3a2afca */   'more_link' => 0,
   /* node_edit_panel_context_3 f3a2afca */   'feed_icons' => 0,
   /* node_edit_panel_context_3 f3a2afca */   'panel_args' => 0,
   /* node_edit_panel_context_3 f3a2afca */   'link_to_view' => 0,
   /* node_edit_panel_context_3 f3a2afca */   'args' => '',
   /* node_edit_panel_context_3 f3a2afca */   'url' => '',
   /* node_edit_panel_context_3 f3a2afca */   'display' => 'block_1',
   /* node_edit_panel_context_3 f3a2afca */   'context' => array(
   /* node_edit_panel_context_3 f3a2afca */     0 => '',
   /* node_edit_panel_context_3 f3a2afca */   ),
   /* node_edit_panel_context_3 f3a2afca */   'override_title' => 1,
   /* node_edit_panel_context_3 f3a2afca */   'override_title_text' => 'Recent Activity',
   /* node_edit_panel_context_3 f3a2afca */   'override_title_heading' => 'h3',
   /* node_edit_panel_context_3 f3a2afca */ );
   /* node_edit_panel_context_3 f3a2afca */ $pane->cache = array();
   /* node_edit_panel_context_3 f3a2afca */ $pane->style = array(
   /* node_edit_panel_context_3 f3a2afca */   'settings' => array(
   /* node_edit_panel_context_3 f3a2afca */     'clean_markup' => array(
   /* node_edit_panel_context_3 f3a2afca */       'pane_wrapper' => 'div',
   /* node_edit_panel_context_3 f3a2afca */       'additional_pane_classes' => 'panel-pane sidebar-subheading',
   /* node_edit_panel_context_3 f3a2afca */       'additional_pane_attributes' => '',
   /* node_edit_panel_context_3 f3a2afca */       'enable_inner_div' => 0,
   /* node_edit_panel_context_3 f3a2afca */       'title_wrapper' => 'h3',
   /* node_edit_panel_context_3 f3a2afca */       'title_hide' => 0,
   /* node_edit_panel_context_3 f3a2afca */       'content_wrapper' => 'none',
   /* node_edit_panel_context_3 f3a2afca */     ),
   /* node_edit_panel_context_3 f3a2afca */   ),
   /* node_edit_panel_context_3 f3a2afca */   'style' => 'clean_element',
   /* node_edit_panel_context_3 f3a2afca */ );
   /* node_edit_panel_context_3 f3a2afca */ $pane->css = array();
   /* node_edit_panel_context_3 f3a2afca */ $pane->extras = array();
   /* node_edit_panel_context_3 f3a2afca */ $pane->position = 9;
   /* node_edit_panel_context_3 f3a2afca */ $pane->locks = array();
   /* node_edit_panel_context_3 f3a2afca */ $pane->uuid = 'f3a2afca-bf01-44c1-8213-1243e84617e9';
  $display->content['new-f3a2afca-bf01-44c1-8213-1243e84617e9'] = $pane;
  $display->panels['group_sidebar'][9] = 'new-f3a2afca-bf01-44c1-8213-1243e84617e9';
   /* node_edit_panel_context_3 4cb2c27c */ $pane = new stdClass();
   /* node_edit_panel_context_3 4cb2c27c */ $pane->pid = 'new-4cb2c27c-6b14-4059-848d-8909c10d1851';
   /* node_edit_panel_context_3 4cb2c27c */ $pane->panel = 'group_sidebar';
   /* node_edit_panel_context_3 4cb2c27c */ $pane->type = 'block';
   /* node_edit_panel_context_3 4cb2c27c */ $pane->subtype = 'gn2_manager_access-gn2_manager_manage';
   /* node_edit_panel_context_3 4cb2c27c */ $pane->shown = TRUE;
   /* node_edit_panel_context_3 4cb2c27c */ $pane->access = array();
   /* node_edit_panel_context_3 4cb2c27c */ $pane->configuration = array(
   /* node_edit_panel_context_3 4cb2c27c */   'override_title' => 0,
   /* node_edit_panel_context_3 4cb2c27c */   'override_title_text' => '',
   /* node_edit_panel_context_3 4cb2c27c */   'override_title_heading' => 'h2',
   /* node_edit_panel_context_3 4cb2c27c */ );
   /* node_edit_panel_context_3 4cb2c27c */ $pane->cache = array();
   /* node_edit_panel_context_3 4cb2c27c */ $pane->style = array(
   /* node_edit_panel_context_3 4cb2c27c */   'settings' => NULL,
   /* node_edit_panel_context_3 4cb2c27c */ );
   /* node_edit_panel_context_3 4cb2c27c */ $pane->css = array();
   /* node_edit_panel_context_3 4cb2c27c */ $pane->extras = array();
   /* node_edit_panel_context_3 4cb2c27c */ $pane->position = 10;
   /* node_edit_panel_context_3 4cb2c27c */ $pane->locks = array();
   /* node_edit_panel_context_3 4cb2c27c */ $pane->uuid = '4cb2c27c-6b14-4059-848d-8909c10d1851';
  $display->content['new-4cb2c27c-6b14-4059-848d-8909c10d1851'] = $pane;
  $display->panels['group_sidebar'][10] = 'new-4cb2c27c-6b14-4059-848d-8909c10d1851';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view__course-group-node'] = $handler;

   /* node_view__event_node */ $handler = new stdClass();
   /* node_view__event_node */ $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
   /* node_view__event_node */ $handler->api_version = 1;
   /* node_view__event_node */ $handler->name = 'node_view__event_node';
   /* node_view__event_node */ $handler->task = 'node_view';
   /* node_view__event_node */ $handler->subtask = '';
   /* node_view__event_node */ $handler->handler = 'panel_context';
   /* node_view__event_node */ $handler->weight = -12;
   /* node_view__event_node */ $handler->conf = array(
   /* node_view__event_node */   'title' => 'Event Node',
   /* node_view__event_node */   'no_blocks' => 1,
   /* node_view__event_node */   'pipeline' => 'standard',
   /* node_view__event_node */   'body_classes_to_remove' => '',
   /* node_view__event_node */   'body_classes_to_add' => 'event-node-page',
   /* node_view__event_node */   'css_id' => '',
   /* node_view__event_node */   'css' => '',
   /* node_view__event_node */   'contexts' => array(),
   /* node_view__event_node */   'relationships' => array(),
   /* node_view__event_node */   'name' => 'event_node',
   /* node_view__event_node */   'access' => array(
   /* node_view__event_node */     'plugins' => array(
   /* node_view__event_node */       0 => array(
   /* node_view__event_node */         'name' => 'node_type',
   /* node_view__event_node */         'settings' => array(
   /* node_view__event_node */           'type' => array(
   /* node_view__event_node */             'event' => 'event',
   /* node_view__event_node */           ),
   /* node_view__event_node */         ),
   /* node_view__event_node */         'context' => 'argument_entity_id:node_1',
   /* node_view__event_node */         'not' => FALSE,
   /* node_view__event_node */       ),
   /* node_view__event_node */     ),
   /* node_view__event_node */     'logic' => 'and',
   /* node_view__event_node */   ),
   /* node_view__event_node */ );
   /* node_view__course-group-node cecc9b6d */ $display = new panels_display();
   /* node_view__course-group-node cecc9b6d */ $display->layout = 'gn2_2colstackedflipped';
   /* node_view__course-group-node cecc9b6d */ $display->layout_settings = array();
   /* node_view__course-group-node cecc9b6d */ $display->panel_settings = array(
   /* node_view__course-group-node cecc9b6d */   'style_settings' => array(
   /* node_view__course-group-node cecc9b6d */     'default' => NULL,
   /* node_view__course-group-node cecc9b6d */     'tabbed_content' => NULL,
   /* node_view__course-group-node cecc9b6d */     'activity_stream' => NULL,
   /* node_view__course-group-node cecc9b6d */     'updates___poll' => NULL,
   /* node_view__course-group-node cecc9b6d */     'group_info' => NULL,
   /* node_view__course-group-node cecc9b6d */     'header_region' => NULL,
   /* node_view__course-group-node cecc9b6d */     'title' => NULL,
   /* node_view__course-group-node cecc9b6d */     'title_' => NULL,
   /* node_view__course-group-node cecc9b6d */     'member_button_' => NULL,
   /* node_view__course-group-node cecc9b6d */     'footer' => NULL,
   /* node_view__course-group-node cecc9b6d */     'top' => NULL,
   /* node_view__course-group-node cecc9b6d */     'sidebar' => NULL,
   /* node_view__course-group-node cecc9b6d */     'main_top' => NULL,
   /* node_view__course-group-node cecc9b6d */     'main_bottom' => NULL,
   /* node_view__course-group-node cecc9b6d */   ),
   /* node_view__course-group-node cecc9b6d */   'top' => array(
   /* node_view__course-group-node cecc9b6d */     'style' => 'default',
   /* node_view__course-group-node cecc9b6d */   ),
   /* node_view__course-group-node cecc9b6d */   'main_top' => array(
   /* node_view__course-group-node cecc9b6d */     'style' => 'default',
   /* node_view__course-group-node cecc9b6d */   ),
   /* node_view__course-group-node cecc9b6d */   'sidebar' => array(
   /* node_view__course-group-node cecc9b6d */     'style' => 'default',
   /* node_view__course-group-node cecc9b6d */   ),
   /* node_view__course-group-node cecc9b6d */   'main_bottom' => array(
   /* node_view__course-group-node cecc9b6d */     'style' => 'default',
   /* node_view__course-group-node cecc9b6d */   ),
   /* node_view__course-group-node cecc9b6d */ );
   /* node_view__course-group-node cecc9b6d */ $display->cache = array();
   /* node_view__course-group-node cecc9b6d */ $display->title = '%node:title';
   /* node_view__course-group-node cecc9b6d */ $display->uuid = 'cecc9b6d-65db-478e-814f-640f1c95918b';
   /* node_view__course-group-node cecc9b6d */ $display->storage_type = 'page_manager';
   /* node_view__course-group-node cecc9b6d */ $display->storage_id = 'node_view__event_node';
  $display->content = array();
  $display->panels = array();
   /* node_view__course-group-node 05ff02e3 */ $pane = new stdClass();
   /* node_view__course-group-node 05ff02e3 */ $pane->pid = 'new-05ff02e3-daa4-4afe-a6dd-7086ebda0075';
   /* node_view__course-group-node 05ff02e3 */ $pane->panel = 'main_bottom';
   /* node_view__course-group-node 05ff02e3 */ $pane->type = 'node_body';
   /* node_view__course-group-node 05ff02e3 */ $pane->subtype = 'node_body';
   /* node_view__course-group-node 05ff02e3 */ $pane->shown = TRUE;
   /* node_view__course-group-node 05ff02e3 */ $pane->access = array();
   /* node_view__course-group-node 05ff02e3 */ $pane->configuration = array(
   /* node_view__course-group-node 05ff02e3 */   'context' => 'argument_entity_id:node_1',
   /* node_view__course-group-node 05ff02e3 */   'override_title' => 1,
   /* node_view__course-group-node 05ff02e3 */   'override_title_text' => '',
   /* node_view__course-group-node 05ff02e3 */   'override_title_heading' => 'h2',
   /* node_view__course-group-node 05ff02e3 */ );
   /* node_view__course-group-node 05ff02e3 */ $pane->cache = array();
   /* node_view__course-group-node 05ff02e3 */ $pane->style = array(
   /* node_view__course-group-node 05ff02e3 */   'settings' => NULL,
   /* node_view__course-group-node 05ff02e3 */ );
   /* node_view__course-group-node 05ff02e3 */ $pane->css = array();
   /* node_view__course-group-node 05ff02e3 */ $pane->extras = array();
   /* node_view__course-group-node 05ff02e3 */ $pane->position = 0;
   /* node_view__course-group-node 05ff02e3 */ $pane->locks = array();
   /* node_view__course-group-node 05ff02e3 */ $pane->uuid = '05ff02e3-daa4-4afe-a6dd-7086ebda0075';
  $display->content['new-05ff02e3-daa4-4afe-a6dd-7086ebda0075'] = $pane;
  $display->panels['main_bottom'][0] = 'new-05ff02e3-daa4-4afe-a6dd-7086ebda0075';
   /* node_view__course-group-node 45c4e9bd */ $pane = new stdClass();
   /* node_view__course-group-node 45c4e9bd */ $pane->pid = 'new-45c4e9bd-b27e-42b0-ba4c-955d2c2de955';
   /* node_view__course-group-node 45c4e9bd */ $pane->panel = 'main_bottom';
   /* node_view__course-group-node 45c4e9bd */ $pane->type = 'views_panes';
   /* node_view__course-group-node 45c4e9bd */ $pane->subtype = 'news_announcements_posts-panel_pane_13';
   /* node_view__course-group-node 45c4e9bd */ $pane->shown = TRUE;
   /* node_view__course-group-node 45c4e9bd */ $pane->access = array(
   /* node_view__course-group-node 45c4e9bd */   'plugins' => array(),
   /* node_view__course-group-node 45c4e9bd */ );
   /* node_view__course-group-node 45c4e9bd */ $pane->configuration = array();
   /* node_view__course-group-node 45c4e9bd */ $pane->cache = array();
   /* node_view__course-group-node 45c4e9bd */ $pane->style = array(
   /* node_view__course-group-node 45c4e9bd */   'settings' => array(
   /* node_view__course-group-node 45c4e9bd */     'clean_markup' => array(
   /* node_view__course-group-node 45c4e9bd */       'pane_wrapper' => 'div',
   /* node_view__course-group-node 45c4e9bd */       'additional_pane_classes' => 'panel-pane sidebar-subheading',
   /* node_view__course-group-node 45c4e9bd */       'additional_pane_attributes' => '',
   /* node_view__course-group-node 45c4e9bd */       'enable_inner_div' => 0,
   /* node_view__course-group-node 45c4e9bd */       'title_wrapper' => 'h3',
   /* node_view__course-group-node 45c4e9bd */       'title_hide' => 0,
   /* node_view__course-group-node 45c4e9bd */       'content_wrapper' => 'none',
   /* node_view__course-group-node 45c4e9bd */     ),
   /* node_view__course-group-node 45c4e9bd */   ),
   /* node_view__course-group-node 45c4e9bd */   'style' => 'clean_element',
   /* node_view__course-group-node 45c4e9bd */ );
   /* node_view__course-group-node 45c4e9bd */ $pane->css = array(
   /* node_view__course-group-node 45c4e9bd */   'css_id' => '',
   /* node_view__course-group-node 45c4e9bd */   'css_class' => 'mobile-show',
   /* node_view__course-group-node 45c4e9bd */ );
   /* node_view__course-group-node 45c4e9bd */ $pane->extras = array();
   /* node_view__course-group-node 45c4e9bd */ $pane->position = 1;
   /* node_view__course-group-node 45c4e9bd */ $pane->locks = array();
   /* node_view__course-group-node 45c4e9bd */ $pane->uuid = '45c4e9bd-b27e-42b0-ba4c-955d2c2de955';
  $display->content['new-45c4e9bd-b27e-42b0-ba4c-955d2c2de955'] = $pane;
  $display->panels['main_bottom'][1] = 'new-45c4e9bd-b27e-42b0-ba4c-955d2c2de955';
   /* node_view__course-group-node 42d32eab */ $pane = new stdClass();
   /* node_view__course-group-node 42d32eab */ $pane->pid = 'new-42d32eab-b15c-4dd1-b9bf-5d0f1c30db06';
   /* node_view__course-group-node 42d32eab */ $pane->panel = 'main_bottom';
   /* node_view__course-group-node 42d32eab */ $pane->type = 'block';
   /* node_view__course-group-node 42d32eab */ $pane->subtype = 'gn2_file_download-associated_media';
   /* node_view__course-group-node 42d32eab */ $pane->shown = TRUE;
   /* node_view__course-group-node 42d32eab */ $pane->access = array(
   /* node_view__course-group-node 42d32eab */   'plugins' => array(),
   /* node_view__course-group-node 42d32eab */ );
   /* node_view__course-group-node 42d32eab */ $pane->configuration = array(
   /* node_view__course-group-node 42d32eab */   'override_title' => 1,
   /* node_view__course-group-node 42d32eab */   'override_title_text' => 'Associated Files',
   /* node_view__course-group-node 42d32eab */   'override_title_heading' => 'h3',
   /* node_view__course-group-node 42d32eab */ );
   /* node_view__course-group-node 42d32eab */ $pane->cache = array();
   /* node_view__course-group-node 42d32eab */ $pane->style = array(
   /* node_view__course-group-node 42d32eab */   'settings' => array(
   /* node_view__course-group-node 42d32eab */     'clean_markup' => array(
   /* node_view__course-group-node 42d32eab */       'pane_wrapper' => 'div',
   /* node_view__course-group-node 42d32eab */       'additional_pane_classes' => 'panel-pane sidebar-subheading file-download',
   /* node_view__course-group-node 42d32eab */       'additional_pane_attributes' => '',
   /* node_view__course-group-node 42d32eab */       'enable_inner_div' => 0,
   /* node_view__course-group-node 42d32eab */       'title_wrapper' => 'h3',
   /* node_view__course-group-node 42d32eab */       'title_hide' => 0,
   /* node_view__course-group-node 42d32eab */       'content_wrapper' => 'none',
   /* node_view__course-group-node 42d32eab */     ),
   /* node_view__course-group-node 42d32eab */   ),
   /* node_view__course-group-node 42d32eab */   'style' => 'clean_element',
   /* node_view__course-group-node 42d32eab */ );
   /* node_view__course-group-node 42d32eab */ $pane->css = array(
   /* node_view__course-group-node 42d32eab */   'css_id' => '',
   /* node_view__course-group-node 42d32eab */   'css_class' => 'mobile-hide',
   /* node_view__course-group-node 42d32eab */ );
   /* node_view__course-group-node 42d32eab */ $pane->extras = array();
   /* node_view__course-group-node 42d32eab */ $pane->position = 2;
   /* node_view__course-group-node 42d32eab */ $pane->locks = array();
   /* node_view__course-group-node 42d32eab */ $pane->uuid = '42d32eab-b15c-4dd1-b9bf-5d0f1c30db06';
  $display->content['new-42d32eab-b15c-4dd1-b9bf-5d0f1c30db06'] = $pane;
  $display->panels['main_bottom'][2] = 'new-42d32eab-b15c-4dd1-b9bf-5d0f1c30db06';
   /* node_view__course-group-node d4efe7b8 */ $pane = new stdClass();
   /* node_view__course-group-node d4efe7b8 */ $pane->pid = 'new-d4efe7b8-3671-4969-b047-25aa31d2c9a7';
   /* node_view__course-group-node d4efe7b8 */ $pane->panel = 'main_bottom';
   /* node_view__course-group-node d4efe7b8 */ $pane->type = 'views_panes';
   /* node_view__course-group-node d4efe7b8 */ $pane->subtype = 'news_announcements_posts-panel_pane_21';
   /* node_view__course-group-node d4efe7b8 */ $pane->shown = TRUE;
   /* node_view__course-group-node d4efe7b8 */ $pane->access = array();
   /* node_view__course-group-node d4efe7b8 */ $pane->configuration = array(
   /* node_view__course-group-node d4efe7b8 */   'override_title' => 1,
   /* node_view__course-group-node d4efe7b8 */   'override_title_text' => '',
   /* node_view__course-group-node d4efe7b8 */   'override_title_heading' => 'h2',
   /* node_view__course-group-node d4efe7b8 */ );
   /* node_view__course-group-node d4efe7b8 */ $pane->cache = array();
   /* node_view__course-group-node d4efe7b8 */ $pane->style = array(
   /* node_view__course-group-node d4efe7b8 */   'settings' => NULL,
   /* node_view__course-group-node d4efe7b8 */ );
   /* node_view__course-group-node d4efe7b8 */ $pane->css = array();
   /* node_view__course-group-node d4efe7b8 */ $pane->extras = array();
   /* node_view__course-group-node d4efe7b8 */ $pane->position = 3;
   /* node_view__course-group-node d4efe7b8 */ $pane->locks = array();
   /* node_view__course-group-node d4efe7b8 */ $pane->uuid = 'd4efe7b8-3671-4969-b047-25aa31d2c9a7';
  $display->content['new-d4efe7b8-3671-4969-b047-25aa31d2c9a7'] = $pane;
  $display->panels['main_bottom'][3] = 'new-d4efe7b8-3671-4969-b047-25aa31d2c9a7';
   /* node_view__course-group-node 167c43ca */ $pane = new stdClass();
   /* node_view__course-group-node 167c43ca */ $pane->pid = 'new-167c43ca-adb9-4011-b855-c8a2913f8c0a';
   /* node_view__course-group-node 167c43ca */ $pane->panel = 'main_bottom';
   /* node_view__course-group-node 167c43ca */ $pane->type = 'node_comment_form';
   /* node_view__course-group-node 167c43ca */ $pane->subtype = 'node_comment_form';
   /* node_view__course-group-node 167c43ca */ $pane->shown = TRUE;
   /* node_view__course-group-node 167c43ca */ $pane->access = array();
   /* node_view__course-group-node 167c43ca */ $pane->configuration = array(
   /* node_view__course-group-node 167c43ca */   'anon_links' => 0,
   /* node_view__course-group-node 167c43ca */   'context' => 'argument_entity_id:node_1',
   /* node_view__course-group-node 167c43ca */   'override_title' => 1,
   /* node_view__course-group-node 167c43ca */   'override_title_text' => 'Join the Conversation',
   /* node_view__course-group-node 167c43ca */   'override_title_heading' => 'h3',
   /* node_view__course-group-node 167c43ca */ );
   /* node_view__course-group-node 167c43ca */ $pane->cache = array();
   /* node_view__course-group-node 167c43ca */ $pane->style = array(
   /* node_view__course-group-node 167c43ca */   'settings' => array(
   /* node_view__course-group-node 167c43ca */     'clean_markup' => array(
   /* node_view__course-group-node 167c43ca */       'pane_wrapper' => 'div',
   /* node_view__course-group-node 167c43ca */       'additional_pane_classes' => 'panel-pane sidebar-subheading',
   /* node_view__course-group-node 167c43ca */       'additional_pane_attributes' => '',
   /* node_view__course-group-node 167c43ca */       'enable_inner_div' => 0,
   /* node_view__course-group-node 167c43ca */       'title_wrapper' => 'h3',
   /* node_view__course-group-node 167c43ca */       'title_hide' => 0,
   /* node_view__course-group-node 167c43ca */       'content_wrapper' => 'none',
   /* node_view__course-group-node 167c43ca */     ),
   /* node_view__course-group-node 167c43ca */   ),
   /* node_view__course-group-node 167c43ca */   'style' => 'clean_element',
   /* node_view__course-group-node 167c43ca */ );
   /* node_view__course-group-node 167c43ca */ $pane->css = array();
   /* node_view__course-group-node 167c43ca */ $pane->extras = array();
   /* node_view__course-group-node 167c43ca */ $pane->position = 4;
   /* node_view__course-group-node 167c43ca */ $pane->locks = array();
   /* node_view__course-group-node 167c43ca */ $pane->uuid = '167c43ca-adb9-4011-b855-c8a2913f8c0a';
  $display->content['new-167c43ca-adb9-4011-b855-c8a2913f8c0a'] = $pane;
  $display->panels['main_bottom'][4] = 'new-167c43ca-adb9-4011-b855-c8a2913f8c0a';
   /* node_view__course-group-node 1f3fe738 */ $pane = new stdClass();
   /* node_view__course-group-node 1f3fe738 */ $pane->pid = 'new-1f3fe738-3062-4ded-a84d-dc0fbf8b21db';
   /* node_view__course-group-node 1f3fe738 */ $pane->panel = 'main_bottom';
   /* node_view__course-group-node 1f3fe738 */ $pane->type = 'node_comments';
   /* node_view__course-group-node 1f3fe738 */ $pane->subtype = 'node_comments';
   /* node_view__course-group-node 1f3fe738 */ $pane->shown = TRUE;
   /* node_view__course-group-node 1f3fe738 */ $pane->access = array();
   /* node_view__course-group-node 1f3fe738 */ $pane->configuration = array(
   /* node_view__course-group-node 1f3fe738 */   'mode' => '1',
   /* node_view__course-group-node 1f3fe738 */   'comments_per_page' => '10',
   /* node_view__course-group-node 1f3fe738 */   'context' => 'argument_entity_id:node_1',
   /* node_view__course-group-node 1f3fe738 */   'override_title' => 1,
   /* node_view__course-group-node 1f3fe738 */   'override_title_text' => '',
   /* node_view__course-group-node 1f3fe738 */   'override_title_heading' => 'h3',
   /* node_view__course-group-node 1f3fe738 */ );
   /* node_view__course-group-node 1f3fe738 */ $pane->cache = array();
   /* node_view__course-group-node 1f3fe738 */ $pane->style = array(
   /* node_view__course-group-node 1f3fe738 */   'settings' => array(
   /* node_view__course-group-node 1f3fe738 */     'clean_markup' => array(
   /* node_view__course-group-node 1f3fe738 */       'pane_wrapper' => 'div',
   /* node_view__course-group-node 1f3fe738 */       'additional_pane_classes' => 'panel-pane ',
   /* node_view__course-group-node 1f3fe738 */       'additional_pane_attributes' => '',
   /* node_view__course-group-node 1f3fe738 */       'enable_inner_div' => 0,
   /* node_view__course-group-node 1f3fe738 */       'title_wrapper' => 'h3',
   /* node_view__course-group-node 1f3fe738 */       'title_hide' => 0,
   /* node_view__course-group-node 1f3fe738 */       'content_wrapper' => 'none',
   /* node_view__course-group-node 1f3fe738 */     ),
   /* node_view__course-group-node 1f3fe738 */   ),
   /* node_view__course-group-node 1f3fe738 */   'style' => 'clean_element',
   /* node_view__course-group-node 1f3fe738 */ );
   /* node_view__course-group-node 1f3fe738 */ $pane->css = array();
   /* node_view__course-group-node 1f3fe738 */ $pane->extras = array();
   /* node_view__course-group-node 1f3fe738 */ $pane->position = 5;
   /* node_view__course-group-node 1f3fe738 */ $pane->locks = array();
   /* node_view__course-group-node 1f3fe738 */ $pane->uuid = '1f3fe738-3062-4ded-a84d-dc0fbf8b21db';
  $display->content['new-1f3fe738-3062-4ded-a84d-dc0fbf8b21db'] = $pane;
  $display->panels['main_bottom'][5] = 'new-1f3fe738-3062-4ded-a84d-dc0fbf8b21db';
   /* node_view__course-group-node dacba450 */ $pane = new stdClass();
   /* node_view__course-group-node dacba450 */ $pane->pid = 'new-dacba450-d58b-4f47-bde8-c5e28726b9be';
   /* node_view__course-group-node dacba450 */ $pane->panel = 'main_top';
   /* node_view__course-group-node dacba450 */ $pane->type = 'panels_mini';
   /* node_view__course-group-node dacba450 */ $pane->subtype = 'group_admin_menu';
   /* node_view__course-group-node dacba450 */ $pane->shown = TRUE;
   /* node_view__course-group-node dacba450 */ $pane->access = array(
   /* node_view__course-group-node dacba450 */   'plugins' => array(
   /* node_view__course-group-node dacba450 */     0 => array(
   /* node_view__course-group-node dacba450 */       'name' => 'og_perm',
   /* node_view__course-group-node dacba450 */       'settings' => array(
   /* node_view__course-group-node dacba450 */         'perm' => 'administer group',
   /* node_view__course-group-node dacba450 */       ),
   /* node_view__course-group-node dacba450 */       'context' => array(
   /* node_view__course-group-node dacba450 */         0 => 'logged-in-user',
   /* node_view__course-group-node dacba450 */         1 => 'argument_entity_id:node_1',
   /* node_view__course-group-node dacba450 */       ),
   /* node_view__course-group-node dacba450 */       'not' => FALSE,
   /* node_view__course-group-node dacba450 */     ),
   /* node_view__course-group-node dacba450 */   ),
   /* node_view__course-group-node dacba450 */ );
   /* node_view__course-group-node dacba450 */ $pane->configuration = array(
   /* node_view__course-group-node dacba450 */   'override_title' => 0,
   /* node_view__course-group-node dacba450 */   'override_title_text' => '',
   /* node_view__course-group-node dacba450 */   'override_title_heading' => 'h2',
   /* node_view__course-group-node dacba450 */ );
   /* node_view__course-group-node dacba450 */ $pane->cache = array();
   /* node_view__course-group-node dacba450 */ $pane->style = array(
   /* node_view__course-group-node dacba450 */   'settings' => NULL,
   /* node_view__course-group-node dacba450 */ );
   /* node_view__course-group-node dacba450 */ $pane->css = array(
   /* node_view__course-group-node dacba450 */   'css_id' => '',
   /* node_view__course-group-node dacba450 */   'css_class' => 'mobile-show',
   /* node_view__course-group-node dacba450 */ );
   /* node_view__course-group-node dacba450 */ $pane->extras = array();
   /* node_view__course-group-node dacba450 */ $pane->position = 0;
   /* node_view__course-group-node dacba450 */ $pane->locks = array();
   /* node_view__course-group-node dacba450 */ $pane->uuid = 'dacba450-d58b-4f47-bde8-c5e28726b9be';
  $display->content['new-dacba450-d58b-4f47-bde8-c5e28726b9be'] = $pane;
  $display->panels['main_top'][0] = 'new-dacba450-d58b-4f47-bde8-c5e28726b9be';
   /* node_view__course-group-node 510036fb */ $pane = new stdClass();
   /* node_view__course-group-node 510036fb */ $pane->pid = 'new-510036fb-6eee-4129-be31-e7901fab9953';
   /* node_view__course-group-node 510036fb */ $pane->panel = 'main_top';
   /* node_view__course-group-node 510036fb */ $pane->type = 'views_panes';
   /* node_view__course-group-node 510036fb */ $pane->subtype = 'events-panel_pane_1';
   /* node_view__course-group-node 510036fb */ $pane->shown = TRUE;
   /* node_view__course-group-node 510036fb */ $pane->access = array(
   /* node_view__course-group-node 510036fb */   'plugins' => array(),
   /* node_view__course-group-node 510036fb */   'logic' => 'or',
   /* node_view__course-group-node 510036fb */ );
   /* node_view__course-group-node 510036fb */ $pane->configuration = array();
   /* node_view__course-group-node 510036fb */ $pane->cache = array();
   /* node_view__course-group-node 510036fb */ $pane->style = array(
   /* node_view__course-group-node 510036fb */   'settings' => array(
   /* node_view__course-group-node 510036fb */     'clean_markup' => array(
   /* node_view__course-group-node 510036fb */       'pane_wrapper' => 'div',
   /* node_view__course-group-node 510036fb */       'additional_pane_classes' => 'panel-pane header_top event-title',
   /* node_view__course-group-node 510036fb */       'additional_pane_attributes' => '',
   /* node_view__course-group-node 510036fb */       'enable_inner_div' => 0,
   /* node_view__course-group-node 510036fb */       'title_wrapper' => 'h1',
   /* node_view__course-group-node 510036fb */       'title_hide' => 0,
   /* node_view__course-group-node 510036fb */       'content_wrapper' => 'none',
   /* node_view__course-group-node 510036fb */     ),
   /* node_view__course-group-node 510036fb */   ),
   /* node_view__course-group-node 510036fb */   'style' => 'clean_element',
   /* node_view__course-group-node 510036fb */ );
   /* node_view__course-group-node 510036fb */ $pane->css = array();
   /* node_view__course-group-node 510036fb */ $pane->extras = array();
   /* node_view__course-group-node 510036fb */ $pane->position = 1;
   /* node_view__course-group-node 510036fb */ $pane->locks = array();
   /* node_view__course-group-node 510036fb */ $pane->uuid = '510036fb-6eee-4129-be31-e7901fab9953';
  $display->content['new-510036fb-6eee-4129-be31-e7901fab9953'] = $pane;
  $display->panels['main_top'][1] = 'new-510036fb-6eee-4129-be31-e7901fab9953';
   /* node_view__course-group-node db94f4e6 */ $pane = new stdClass();
   /* node_view__course-group-node db94f4e6 */ $pane->pid = 'new-db94f4e6-b86f-472e-aabd-bfdf27b0503e';
   /* node_view__course-group-node db94f4e6 */ $pane->panel = 'main_top';
   /* node_view__course-group-node db94f4e6 */ $pane->type = 'entity_view';
   /* node_view__course-group-node db94f4e6 */ $pane->subtype = 'node';
   /* node_view__course-group-node db94f4e6 */ $pane->shown = TRUE;
   /* node_view__course-group-node db94f4e6 */ $pane->access = array();
   /* node_view__course-group-node db94f4e6 */ $pane->configuration = array(
   /* node_view__course-group-node db94f4e6 */   'view_mode' => 'time_and_location',
   /* node_view__course-group-node db94f4e6 */   'context' => 'argument_entity_id:node_1',
   /* node_view__course-group-node db94f4e6 */   'override_title' => 0,
   /* node_view__course-group-node db94f4e6 */   'override_title_text' => '',
   /* node_view__course-group-node db94f4e6 */   'override_title_heading' => 'h2',
   /* node_view__course-group-node db94f4e6 */ );
   /* node_view__course-group-node db94f4e6 */ $pane->cache = array();
   /* node_view__course-group-node db94f4e6 */ $pane->style = array(
   /* node_view__course-group-node db94f4e6 */   'settings' => NULL,
   /* node_view__course-group-node db94f4e6 */ );
   /* node_view__course-group-node db94f4e6 */ $pane->css = array();
   /* node_view__course-group-node db94f4e6 */ $pane->extras = array();
   /* node_view__course-group-node db94f4e6 */ $pane->position = 2;
   /* node_view__course-group-node db94f4e6 */ $pane->locks = array();
   /* node_view__course-group-node db94f4e6 */ $pane->uuid = 'db94f4e6-b86f-472e-aabd-bfdf27b0503e';
  $display->content['new-db94f4e6-b86f-472e-aabd-bfdf27b0503e'] = $pane;
  $display->panels['main_top'][2] = 'new-db94f4e6-b86f-472e-aabd-bfdf27b0503e';
   /* node_view__course-group-node d1db3703 */ $pane = new stdClass();
   /* node_view__course-group-node d1db3703 */ $pane->pid = 'new-d1db3703-f270-408d-ba58-738cf904380a';
   /* node_view__course-group-node d1db3703 */ $pane->panel = 'sidebar';
   /* node_view__course-group-node d1db3703 */ $pane->type = 'block';
   /* node_view__course-group-node d1db3703 */ $pane->subtype = 'gn2_base_config-event-registration';
   /* node_view__course-group-node d1db3703 */ $pane->shown = TRUE;
   /* node_view__course-group-node d1db3703 */ $pane->access = array(
   /* node_view__course-group-node d1db3703 */   'plugins' => array(
   /* node_view__course-group-node d1db3703 */     0 => array(
   /* node_view__course-group-node d1db3703 */       'name' => 'role',
   /* node_view__course-group-node d1db3703 */       'settings' => array(
   /* node_view__course-group-node d1db3703 */         'rids' => array(
   /* node_view__course-group-node d1db3703 */           0 => 1,
   /* node_view__course-group-node d1db3703 */         ),
   /* node_view__course-group-node d1db3703 */       ),
   /* node_view__course-group-node d1db3703 */       'context' => 'logged-in-user',
   /* node_view__course-group-node d1db3703 */       'not' => TRUE,
   /* node_view__course-group-node d1db3703 */     ),
   /* node_view__course-group-node d1db3703 */   ),
   /* node_view__course-group-node d1db3703 */ );
   /* node_view__course-group-node d1db3703 */ $pane->configuration = array(
   /* node_view__course-group-node d1db3703 */   'override_title' => 0,
   /* node_view__course-group-node d1db3703 */   'override_title_text' => '',
   /* node_view__course-group-node d1db3703 */   'override_title_heading' => 'h2',
   /* node_view__course-group-node d1db3703 */ );
   /* node_view__course-group-node d1db3703 */ $pane->cache = array();
   /* node_view__course-group-node d1db3703 */ $pane->style = array(
   /* node_view__course-group-node d1db3703 */   'settings' => NULL,
   /* node_view__course-group-node d1db3703 */ );
   /* node_view__course-group-node d1db3703 */ $pane->css = array(
   /* node_view__course-group-node d1db3703 */   'css_id' => '',
   /* node_view__course-group-node d1db3703 */   'css_class' => 'block-event-registration',
   /* node_view__course-group-node d1db3703 */ );
   /* node_view__course-group-node d1db3703 */ $pane->extras = array();
   /* node_view__course-group-node d1db3703 */ $pane->position = 0;
   /* node_view__course-group-node d1db3703 */ $pane->locks = array();
   /* node_view__course-group-node d1db3703 */ $pane->uuid = 'd1db3703-f270-408d-ba58-738cf904380a';
  $display->content['new-d1db3703-f270-408d-ba58-738cf904380a'] = $pane;
  $display->panels['sidebar'][0] = 'new-d1db3703-f270-408d-ba58-738cf904380a';
   /* node_view__course-group-node 9c8e5687 */ $pane = new stdClass();
   /* node_view__course-group-node 9c8e5687 */ $pane->pid = 'new-9c8e5687-6ce3-4c63-8e38-a27d7fd29ab8';
   /* node_view__course-group-node 9c8e5687 */ $pane->panel = 'sidebar';
   /* node_view__course-group-node 9c8e5687 */ $pane->type = 'panels_mini';
   /* node_view__course-group-node 9c8e5687 */ $pane->subtype = 'group_admin_menu';
   /* node_view__course-group-node 9c8e5687 */ $pane->shown = TRUE;
   /* node_view__course-group-node 9c8e5687 */ $pane->access = array(
   /* node_view__course-group-node 9c8e5687 */   'plugins' => array(
   /* node_view__course-group-node 9c8e5687 */     0 => array(
   /* node_view__course-group-node 9c8e5687 */       'name' => 'og_perm',
   /* node_view__course-group-node 9c8e5687 */       'settings' => array(
   /* node_view__course-group-node 9c8e5687 */         'perm' => 'administer group',
   /* node_view__course-group-node 9c8e5687 */       ),
   /* node_view__course-group-node 9c8e5687 */       'context' => array(
   /* node_view__course-group-node 9c8e5687 */         0 => 'logged-in-user',
   /* node_view__course-group-node 9c8e5687 */         1 => 'argument_entity_id:node_1',
   /* node_view__course-group-node 9c8e5687 */       ),
   /* node_view__course-group-node 9c8e5687 */       'not' => FALSE,
   /* node_view__course-group-node 9c8e5687 */     ),
   /* node_view__course-group-node 9c8e5687 */   ),
   /* node_view__course-group-node 9c8e5687 */ );
   /* node_view__course-group-node 9c8e5687 */ $pane->configuration = array(
   /* node_view__course-group-node 9c8e5687 */   'override_title' => 0,
   /* node_view__course-group-node 9c8e5687 */   'override_title_text' => '',
   /* node_view__course-group-node 9c8e5687 */   'override_title_heading' => 'h2',
   /* node_view__course-group-node 9c8e5687 */ );
   /* node_view__course-group-node 9c8e5687 */ $pane->cache = array();
   /* node_view__course-group-node 9c8e5687 */ $pane->style = array(
   /* node_view__course-group-node 9c8e5687 */   'settings' => NULL,
   /* node_view__course-group-node 9c8e5687 */ );
   /* node_view__course-group-node 9c8e5687 */ $pane->css = array(
   /* node_view__course-group-node 9c8e5687 */   'css_id' => '',
   /* node_view__course-group-node 9c8e5687 */   'css_class' => 'mobile-hide',
   /* node_view__course-group-node 9c8e5687 */ );
   /* node_view__course-group-node 9c8e5687 */ $pane->extras = array();
   /* node_view__course-group-node 9c8e5687 */ $pane->position = 1;
   /* node_view__course-group-node 9c8e5687 */ $pane->locks = array();
   /* node_view__course-group-node 9c8e5687 */ $pane->uuid = '9c8e5687-6ce3-4c63-8e38-a27d7fd29ab8';
  $display->content['new-9c8e5687-6ce3-4c63-8e38-a27d7fd29ab8'] = $pane;
  $display->panels['sidebar'][1] = 'new-9c8e5687-6ce3-4c63-8e38-a27d7fd29ab8';
   /* node_view__course-group-node 083108d1 */ $pane = new stdClass();
   /* node_view__course-group-node 083108d1 */ $pane->pid = 'new-083108d1-fc99-4c8b-91d7-6342d2692f71';
   /* node_view__course-group-node 083108d1 */ $pane->panel = 'sidebar';
   /* node_view__course-group-node 083108d1 */ $pane->type = 'block';
   /* node_view__course-group-node 083108d1 */ $pane->subtype = 'gn2_manager_access-gn2_manager_manage';
   /* node_view__course-group-node 083108d1 */ $pane->shown = TRUE;
   /* node_view__course-group-node 083108d1 */ $pane->access = array();
   /* node_view__course-group-node 083108d1 */ $pane->configuration = array(
   /* node_view__course-group-node 083108d1 */   'override_title' => 0,
   /* node_view__course-group-node 083108d1 */   'override_title_text' => '',
   /* node_view__course-group-node 083108d1 */   'override_title_heading' => 'h2',
   /* node_view__course-group-node 083108d1 */ );
   /* node_view__course-group-node 083108d1 */ $pane->cache = array();
   /* node_view__course-group-node 083108d1 */ $pane->style = array(
   /* node_view__course-group-node 083108d1 */   'settings' => NULL,
   /* node_view__course-group-node 083108d1 */ );
   /* node_view__course-group-node 083108d1 */ $pane->css = array();
   /* node_view__course-group-node 083108d1 */ $pane->extras = array();
   /* node_view__course-group-node 083108d1 */ $pane->position = 2;
   /* node_view__course-group-node 083108d1 */ $pane->locks = array();
   /* node_view__course-group-node 083108d1 */ $pane->uuid = '083108d1-fc99-4c8b-91d7-6342d2692f71';
  $display->content['new-083108d1-fc99-4c8b-91d7-6342d2692f71'] = $pane;
  $display->panels['sidebar'][2] = 'new-083108d1-fc99-4c8b-91d7-6342d2692f71';
   /* node_view__course-group-node 1305db55 */ $pane = new stdClass();
   /* node_view__course-group-node 1305db55 */ $pane->pid = 'new-1305db55-9484-4460-b687-475a567b31fb';
   /* node_view__course-group-node 1305db55 */ $pane->panel = 'sidebar';
   /* node_view__course-group-node 1305db55 */ $pane->type = 'views';
   /* node_view__course-group-node 1305db55 */ $pane->subtype = 'news_announcements_posts';
   /* node_view__course-group-node 1305db55 */ $pane->shown = TRUE;
   /* node_view__course-group-node 1305db55 */ $pane->access = array();
   /* node_view__course-group-node 1305db55 */ $pane->configuration = array(
   /* node_view__course-group-node 1305db55 */   'override_pager_settings' => 0,
   /* node_view__course-group-node 1305db55 */   'use_pager' => 0,
   /* node_view__course-group-node 1305db55 */   'nodes_per_page' => '3',
   /* node_view__course-group-node 1305db55 */   'pager_id' => '0',
   /* node_view__course-group-node 1305db55 */   'offset' => '0',
   /* node_view__course-group-node 1305db55 */   'more_link' => 0,
   /* node_view__course-group-node 1305db55 */   'feed_icons' => 0,
   /* node_view__course-group-node 1305db55 */   'panel_args' => 0,
   /* node_view__course-group-node 1305db55 */   'link_to_view' => 0,
   /* node_view__course-group-node 1305db55 */   'args' => '',
   /* node_view__course-group-node 1305db55 */   'url' => '',
   /* node_view__course-group-node 1305db55 */   'display' => 'block_2',
   /* node_view__course-group-node 1305db55 */   'context' => array(
   /* node_view__course-group-node 1305db55 */     0 => 'argument_entity_id:node_1.nid',
   /* node_view__course-group-node 1305db55 */   ),
   /* node_view__course-group-node 1305db55 */   'override_title' => 1,
   /* node_view__course-group-node 1305db55 */   'override_title_text' => 'Announcements',
   /* node_view__course-group-node 1305db55 */   'override_title_heading' => 'h3',
   /* node_view__course-group-node 1305db55 */ );
   /* node_view__course-group-node 1305db55 */ $pane->cache = array();
   /* node_view__course-group-node 1305db55 */ $pane->style = array(
   /* node_view__course-group-node 1305db55 */   'settings' => array(
   /* node_view__course-group-node 1305db55 */     'clean_markup' => array(
   /* node_view__course-group-node 1305db55 */       'pane_wrapper' => 'div',
   /* node_view__course-group-node 1305db55 */       'additional_pane_classes' => 'panel-pane sidebar-subheading',
   /* node_view__course-group-node 1305db55 */       'additional_pane_attributes' => '',
   /* node_view__course-group-node 1305db55 */       'enable_inner_div' => 0,
   /* node_view__course-group-node 1305db55 */       'title_wrapper' => 'h3',
   /* node_view__course-group-node 1305db55 */       'title_hide' => 0,
   /* node_view__course-group-node 1305db55 */       'content_wrapper' => 'none',
   /* node_view__course-group-node 1305db55 */     ),
   /* node_view__course-group-node 1305db55 */   ),
   /* node_view__course-group-node 1305db55 */   'style' => 'clean_element',
   /* node_view__course-group-node 1305db55 */ );
   /* node_view__course-group-node 1305db55 */ $pane->css = array();
   /* node_view__course-group-node 1305db55 */ $pane->extras = array();
   /* node_view__course-group-node 1305db55 */ $pane->position = 3;
   /* node_view__course-group-node 1305db55 */ $pane->locks = array();
   /* node_view__course-group-node 1305db55 */ $pane->uuid = '1305db55-9484-4460-b687-475a567b31fb';
  $display->content['new-1305db55-9484-4460-b687-475a567b31fb'] = $pane;
  $display->panels['sidebar'][3] = 'new-1305db55-9484-4460-b687-475a567b31fb';
   /* node_view__course-group-node 22605a5e */ $pane = new stdClass();
   /* node_view__course-group-node 22605a5e */ $pane->pid = 'new-22605a5e-b203-4c2b-8534-71a465b0f22a';
   /* node_view__course-group-node 22605a5e */ $pane->panel = 'sidebar';
   /* node_view__course-group-node 22605a5e */ $pane->type = 'panels_mini';
   /* node_view__course-group-node 22605a5e */ $pane->subtype = 'event_contacts_block';
   /* node_view__course-group-node 22605a5e */ $pane->shown = TRUE;
   /* node_view__course-group-node 22605a5e */ $pane->access = array();
   /* node_view__course-group-node 22605a5e */ $pane->configuration = array(
   /* node_view__course-group-node 22605a5e */   'override_title' => 0,
   /* node_view__course-group-node 22605a5e */   'override_title_text' => '',
   /* node_view__course-group-node 22605a5e */   'override_title_heading' => 'h2',
   /* node_view__course-group-node 22605a5e */ );
   /* node_view__course-group-node 22605a5e */ $pane->cache = array();
   /* node_view__course-group-node 22605a5e */ $pane->style = array(
   /* node_view__course-group-node 22605a5e */   'settings' => NULL,
   /* node_view__course-group-node 22605a5e */ );
   /* node_view__course-group-node 22605a5e */ $pane->css = array(
   /* node_view__course-group-node 22605a5e */   'css_id' => '',
   /* node_view__course-group-node 22605a5e */   'css_class' => 'block-event-registration',
   /* node_view__course-group-node 22605a5e */ );
   /* node_view__course-group-node 22605a5e */ $pane->extras = array();
   /* node_view__course-group-node 22605a5e */ $pane->position = 4;
   /* node_view__course-group-node 22605a5e */ $pane->locks = array();
   /* node_view__course-group-node 22605a5e */ $pane->uuid = '22605a5e-b203-4c2b-8534-71a465b0f22a';
  $display->content['new-22605a5e-b203-4c2b-8534-71a465b0f22a'] = $pane;
  $display->panels['sidebar'][4] = 'new-22605a5e-b203-4c2b-8534-71a465b0f22a';
   /* node_view__course-group-node c3c0d3e1 */ $pane = new stdClass();
   /* node_view__course-group-node c3c0d3e1 */ $pane->pid = 'new-c3c0d3e1-5200-441c-9a2d-5e416524eea4';
   /* node_view__course-group-node c3c0d3e1 */ $pane->panel = 'sidebar';
   /* node_view__course-group-node c3c0d3e1 */ $pane->type = 'block';
   /* node_view__course-group-node c3c0d3e1 */ $pane->subtype = 'gn2_feedback-gn2_feedback_link';
   /* node_view__course-group-node c3c0d3e1 */ $pane->shown = TRUE;
   /* node_view__course-group-node c3c0d3e1 */ $pane->access = array();
   /* node_view__course-group-node c3c0d3e1 */ $pane->configuration = array(
   /* node_view__course-group-node c3c0d3e1 */   'override_title' => 0,
   /* node_view__course-group-node c3c0d3e1 */   'override_title_text' => '',
   /* node_view__course-group-node c3c0d3e1 */   'override_title_heading' => 'h2',
   /* node_view__course-group-node c3c0d3e1 */ );
   /* node_view__course-group-node c3c0d3e1 */ $pane->cache = array();
   /* node_view__course-group-node c3c0d3e1 */ $pane->style = array(
   /* node_view__course-group-node c3c0d3e1 */   'settings' => NULL,
   /* node_view__course-group-node c3c0d3e1 */ );
   /* node_view__course-group-node c3c0d3e1 */ $pane->css = array();
   /* node_view__course-group-node c3c0d3e1 */ $pane->extras = array();
   /* node_view__course-group-node c3c0d3e1 */ $pane->position = 5;
   /* node_view__course-group-node c3c0d3e1 */ $pane->locks = array();
   /* node_view__course-group-node c3c0d3e1 */ $pane->uuid = 'c3c0d3e1-5200-441c-9a2d-5e416524eea4';
  $display->content['new-c3c0d3e1-5200-441c-9a2d-5e416524eea4'] = $pane;
  $display->panels['sidebar'][5] = 'new-c3c0d3e1-5200-441c-9a2d-5e416524eea4';
   /* node_view__course-group-node 68f31253 */ $pane = new stdClass();
   /* node_view__course-group-node 68f31253 */ $pane->pid = 'new-68f31253-b010-4e99-a197-305e9da41c0d';
   /* node_view__course-group-node 68f31253 */ $pane->panel = 'sidebar';
   /* node_view__course-group-node 68f31253 */ $pane->type = 'views';
   /* node_view__course-group-node 68f31253 */ $pane->subtype = 'registrants';
   /* node_view__course-group-node 68f31253 */ $pane->shown = TRUE;
   /* node_view__course-group-node 68f31253 */ $pane->access = array(
   /* node_view__course-group-node 68f31253 */   'plugins' => array(
   /* node_view__course-group-node 68f31253 */     0 => array(
   /* node_view__course-group-node 68f31253 */       'name' => 'php',
   /* node_view__course-group-node 68f31253 */       'settings' => array(
   /* node_view__course-group-node 68f31253 */         'description' => 'GN2 OG Module callback',
   /* node_view__course-group-node 68f31253 */         'php' => 'return gn2_og_event_registrant_list_access();',
   /* node_view__course-group-node 68f31253 */       ),
   /* node_view__course-group-node 68f31253 */       'not' => FALSE,
   /* node_view__course-group-node 68f31253 */     ),
   /* node_view__course-group-node 68f31253 */   ),
   /* node_view__course-group-node 68f31253 */ );
   /* node_view__course-group-node 68f31253 */ $pane->configuration = array(
   /* node_view__course-group-node 68f31253 */   'override_pager_settings' => 0,
   /* node_view__course-group-node 68f31253 */   'use_pager' => 0,
   /* node_view__course-group-node 68f31253 */   'nodes_per_page' => '5',
   /* node_view__course-group-node 68f31253 */   'pager_id' => '0',
   /* node_view__course-group-node 68f31253 */   'offset' => '0',
   /* node_view__course-group-node 68f31253 */   'more_link' => 0,
   /* node_view__course-group-node 68f31253 */   'feed_icons' => 0,
   /* node_view__course-group-node 68f31253 */   'panel_args' => 0,
   /* node_view__course-group-node 68f31253 */   'link_to_view' => 0,
   /* node_view__course-group-node 68f31253 */   'args' => '',
   /* node_view__course-group-node 68f31253 */   'url' => '',
   /* node_view__course-group-node 68f31253 */   'display' => 'block',
   /* node_view__course-group-node 68f31253 */   'context' => array(
   /* node_view__course-group-node 68f31253 */     0 => '',
   /* node_view__course-group-node 68f31253 */   ),
   /* node_view__course-group-node 68f31253 */   'override_title' => 0,
   /* node_view__course-group-node 68f31253 */   'override_title_text' => '',
   /* node_view__course-group-node 68f31253 */   'override_title_heading' => 'h2',
   /* node_view__course-group-node 68f31253 */ );
   /* node_view__course-group-node 68f31253 */ $pane->cache = array();
   /* node_view__course-group-node 68f31253 */ $pane->style = array(
   /* node_view__course-group-node 68f31253 */   'settings' => array(
   /* node_view__course-group-node 68f31253 */     'clean_markup' => array(
   /* node_view__course-group-node 68f31253 */       'pane_wrapper' => 'div',
   /* node_view__course-group-node 68f31253 */       'additional_pane_classes' => 'panel-pane sidebar-subheading ',
   /* node_view__course-group-node 68f31253 */       'additional_pane_attributes' => '',
   /* node_view__course-group-node 68f31253 */       'enable_inner_div' => 0,
   /* node_view__course-group-node 68f31253 */       'title_wrapper' => 'h2',
   /* node_view__course-group-node 68f31253 */       'title_hide' => 0,
   /* node_view__course-group-node 68f31253 */       'content_wrapper' => 'none',
   /* node_view__course-group-node 68f31253 */     ),
   /* node_view__course-group-node 68f31253 */   ),
   /* node_view__course-group-node 68f31253 */   'style' => 'clean_element',
   /* node_view__course-group-node 68f31253 */ );
   /* node_view__course-group-node 68f31253 */ $pane->css = array();
   /* node_view__course-group-node 68f31253 */ $pane->extras = array();
   /* node_view__course-group-node 68f31253 */ $pane->position = 6;
   /* node_view__course-group-node 68f31253 */ $pane->locks = array();
   /* node_view__course-group-node 68f31253 */ $pane->uuid = '68f31253-b010-4e99-a197-305e9da41c0d';
  $display->content['new-68f31253-b010-4e99-a197-305e9da41c0d'] = $pane;
  $display->panels['sidebar'][6] = 'new-68f31253-b010-4e99-a197-305e9da41c0d';
   /* node_view__course-group-node c638085d */ $pane = new stdClass();
   /* node_view__course-group-node c638085d */ $pane->pid = 'new-c638085d-3ee1-432c-bf90-fe08c2cab97b';
   /* node_view__course-group-node c638085d */ $pane->panel = 'top';
   /* node_view__course-group-node c638085d */ $pane->type = 'custom';
   /* node_view__course-group-node c638085d */ $pane->subtype = 'custom';
   /* node_view__course-group-node c638085d */ $pane->shown = TRUE;
   /* node_view__course-group-node c638085d */ $pane->access = array(
   /* node_view__course-group-node c638085d */   'plugins' => array(
   /* node_view__course-group-node c638085d */     0 => array(
   /* node_view__course-group-node c638085d */       'name' => 'node_status',
   /* node_view__course-group-node c638085d */       'settings' => NULL,
   /* node_view__course-group-node c638085d */       'context' => 'argument_entity_id:node_1',
   /* node_view__course-group-node c638085d */       'not' => TRUE,
   /* node_view__course-group-node c638085d */     ),
   /* node_view__course-group-node c638085d */   ),
   /* node_view__course-group-node c638085d */ );
   /* node_view__course-group-node c638085d */ $pane->configuration = array(
   /* node_view__course-group-node c638085d */   'admin_title' => '',
   /* node_view__course-group-node c638085d */   'title' => '',
   /* node_view__course-group-node c638085d */   'body' => '',
   /* node_view__course-group-node c638085d */   'format' => 'filtered_html',
   /* node_view__course-group-node c638085d */   'substitute' => TRUE,
   /* node_view__course-group-node c638085d */   'name' => 'unpublished_node_block',
   /* node_view__course-group-node c638085d */ );
   /* node_view__course-group-node c638085d */ $pane->cache = array();
   /* node_view__course-group-node c638085d */ $pane->style = array(
   /* node_view__course-group-node c638085d */   'settings' => NULL,
   /* node_view__course-group-node c638085d */ );
   /* node_view__course-group-node c638085d */ $pane->css = array();
   /* node_view__course-group-node c638085d */ $pane->extras = array();
   /* node_view__course-group-node c638085d */ $pane->position = 0;
   /* node_view__course-group-node c638085d */ $pane->locks = array();
   /* node_view__course-group-node c638085d */ $pane->uuid = 'c638085d-3ee1-432c-bf90-fe08c2cab97b';
  $display->content['new-c638085d-3ee1-432c-bf90-fe08c2cab97b'] = $pane;
  $display->panels['top'][0] = 'new-c638085d-3ee1-432c-bf90-fe08c2cab97b';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view__event_node'] = $handler;

   /* node_view__panel_context_27aa23c0-ee31-4772-aa8d-c63cd424de71 */ $handler = new stdClass();
   /* node_view__panel_context_27aa23c0-ee31-4772-aa8d-c63cd424de71 */ $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
   /* node_view__panel_context_27aa23c0-ee31-4772-aa8d-c63cd424de71 */ $handler->api_version = 1;
   /* node_view__panel_context_27aa23c0-ee31-4772-aa8d-c63cd424de71 */ $handler->name = 'node_view__panel_context_27aa23c0-ee31-4772-aa8d-c63cd424de71';
   /* node_view__panel_context_27aa23c0-ee31-4772-aa8d-c63cd424de71 */ $handler->task = 'node_view';
   /* node_view__panel_context_27aa23c0-ee31-4772-aa8d-c63cd424de71 */ $handler->subtask = '';
   /* node_view__panel_context_27aa23c0-ee31-4772-aa8d-c63cd424de71 */ $handler->handler = 'panel_context';
   /* node_view__panel_context_27aa23c0-ee31-4772-aa8d-c63cd424de71 */ $handler->weight = -6;
   /* node_view__panel_context_27aa23c0-ee31-4772-aa8d-c63cd424de71 */ $handler->conf = array(
   /* node_view__panel_context_27aa23c0-ee31-4772-aa8d-c63cd424de71 */   'title' => 'Post Node',
   /* node_view__panel_context_27aa23c0-ee31-4772-aa8d-c63cd424de71 */   'no_blocks' => 0,
   /* node_view__panel_context_27aa23c0-ee31-4772-aa8d-c63cd424de71 */   'pipeline' => 'standard',
   /* node_view__panel_context_27aa23c0-ee31-4772-aa8d-c63cd424de71 */   'body_classes_to_remove' => '',
   /* node_view__panel_context_27aa23c0-ee31-4772-aa8d-c63cd424de71 */   'body_classes_to_add' => 'news-node-page',
   /* node_view__panel_context_27aa23c0-ee31-4772-aa8d-c63cd424de71 */   'css_id' => '',
   /* node_view__panel_context_27aa23c0-ee31-4772-aa8d-c63cd424de71 */   'css' => '',
   /* node_view__panel_context_27aa23c0-ee31-4772-aa8d-c63cd424de71 */   'contexts' => array(),
   /* node_view__panel_context_27aa23c0-ee31-4772-aa8d-c63cd424de71 */   'relationships' => array(),
   /* node_view__panel_context_27aa23c0-ee31-4772-aa8d-c63cd424de71 */   'access' => array(
   /* node_view__panel_context_27aa23c0-ee31-4772-aa8d-c63cd424de71 */     'plugins' => array(
   /* node_view__panel_context_27aa23c0-ee31-4772-aa8d-c63cd424de71 */       0 => array(
   /* node_view__panel_context_27aa23c0-ee31-4772-aa8d-c63cd424de71 */         'name' => 'node_type',
   /* node_view__panel_context_27aa23c0-ee31-4772-aa8d-c63cd424de71 */         'settings' => array(
   /* node_view__panel_context_27aa23c0-ee31-4772-aa8d-c63cd424de71 */           'type' => array(
   /* node_view__panel_context_27aa23c0-ee31-4772-aa8d-c63cd424de71 */             'post' => 'post',
   /* node_view__panel_context_27aa23c0-ee31-4772-aa8d-c63cd424de71 */           ),
   /* node_view__panel_context_27aa23c0-ee31-4772-aa8d-c63cd424de71 */         ),
   /* node_view__panel_context_27aa23c0-ee31-4772-aa8d-c63cd424de71 */         'context' => 'argument_entity_id:node_1',
   /* node_view__panel_context_27aa23c0-ee31-4772-aa8d-c63cd424de71 */         'not' => FALSE,
   /* node_view__panel_context_27aa23c0-ee31-4772-aa8d-c63cd424de71 */       ),
   /* node_view__panel_context_27aa23c0-ee31-4772-aa8d-c63cd424de71 */     ),
   /* node_view__panel_context_27aa23c0-ee31-4772-aa8d-c63cd424de71 */     'logic' => 'and',
   /* node_view__panel_context_27aa23c0-ee31-4772-aa8d-c63cd424de71 */   ),
   /* node_view__panel_context_27aa23c0-ee31-4772-aa8d-c63cd424de71 */ );
   /* node_view__event_node 2b92583a */ $display = new panels_display();
   /* node_view__event_node 2b92583a */ $display->layout = 'gn2_2colstackedflipped';
   /* node_view__event_node 2b92583a */ $display->layout_settings = array();
   /* node_view__event_node 2b92583a */ $display->panel_settings = array(
   /* node_view__event_node 2b92583a */   'style_settings' => array(
   /* node_view__event_node 2b92583a */     'default' => NULL,
   /* node_view__event_node 2b92583a */     'contentmain' => NULL,
   /* node_view__event_node 2b92583a */     'header' => NULL,
   /* node_view__event_node 2b92583a */     'main_top' => NULL,
   /* node_view__event_node 2b92583a */     'footer' => NULL,
   /* node_view__event_node 2b92583a */     'top' => NULL,
   /* node_view__event_node 2b92583a */     'sidebar' => NULL,
   /* node_view__event_node 2b92583a */     'main_bottom' => NULL,
   /* node_view__event_node 2b92583a */   ),
   /* node_view__event_node 2b92583a */   'main_bottom' => array(
   /* node_view__event_node 2b92583a */     'style' => 'default',
   /* node_view__event_node 2b92583a */   ),
   /* node_view__event_node 2b92583a */   'sidebar' => array(
   /* node_view__event_node 2b92583a */     'style' => 'default',
   /* node_view__event_node 2b92583a */   ),
   /* node_view__event_node 2b92583a */   'top' => array(
   /* node_view__event_node 2b92583a */     'style' => 'default',
   /* node_view__event_node 2b92583a */   ),
   /* node_view__event_node 2b92583a */ );
   /* node_view__event_node 2b92583a */ $display->cache = array();
   /* node_view__event_node 2b92583a */ $display->title = '%node:title';
   /* node_view__event_node 2b92583a */ $display->uuid = '2b92583a-ea58-48c8-86e3-23545720acdf';
   /* node_view__event_node 2b92583a */ $display->storage_type = 'page_manager';
   /* node_view__event_node 2b92583a */ $display->storage_id = 'node_view__panel_context_27aa23c0-ee31-4772-aa8d-c63cd424de71';
  $display->content = array();
  $display->panels = array();
   /* node_view__event_node 130cd3af */ $pane = new stdClass();
   /* node_view__event_node 130cd3af */ $pane->pid = 'new-130cd3af-a5fc-40e2-a2b1-a814af5e2c8e';
   /* node_view__event_node 130cd3af */ $pane->panel = 'main_bottom';
   /* node_view__event_node 130cd3af */ $pane->type = 'entity_field';
   /* node_view__event_node 130cd3af */ $pane->subtype = 'node:field_main_image';
   /* node_view__event_node 130cd3af */ $pane->shown = TRUE;
   /* node_view__event_node 130cd3af */ $pane->access = array();
   /* node_view__event_node 130cd3af */ $pane->configuration = array(
   /* node_view__event_node 130cd3af */   'label' => 'hidden',
   /* node_view__event_node 130cd3af */   'formatter' => 'file_rendered',
   /* node_view__event_node 130cd3af */   'delta_limit' => 0,
   /* node_view__event_node 130cd3af */   'delta_offset' => '0',
   /* node_view__event_node 130cd3af */   'delta_reversed' => FALSE,
   /* node_view__event_node 130cd3af */   'formatter_settings' => array(
   /* node_view__event_node 130cd3af */     'file_view_mode' => 'main_news_image',
   /* node_view__event_node 130cd3af */     'field_formatter_class' => '',
   /* node_view__event_node 130cd3af */   ),
   /* node_view__event_node 130cd3af */   'context' => 'argument_entity_id:node_1',
   /* node_view__event_node 130cd3af */   'override_title' => 0,
   /* node_view__event_node 130cd3af */   'override_title_text' => '',
   /* node_view__event_node 130cd3af */   'override_title_heading' => 'h2',
   /* node_view__event_node 130cd3af */ );
   /* node_view__event_node 130cd3af */ $pane->cache = array();
   /* node_view__event_node 130cd3af */ $pane->style = array(
   /* node_view__event_node 130cd3af */   'settings' => array(
   /* node_view__event_node 130cd3af */     'clean_markup' => array(
   /* node_view__event_node 130cd3af */       'pane_wrapper' => 'div',
   /* node_view__event_node 130cd3af */       'additional_pane_classes' => 'main-news-image-wrapper',
   /* node_view__event_node 130cd3af */       'additional_pane_attributes' => '',
   /* node_view__event_node 130cd3af */       'enable_inner_div' => 0,
   /* node_view__event_node 130cd3af */       'title_wrapper' => 'h2',
   /* node_view__event_node 130cd3af */       'title_hide' => 0,
   /* node_view__event_node 130cd3af */       'content_wrapper' => 'none',
   /* node_view__event_node 130cd3af */     ),
   /* node_view__event_node 130cd3af */   ),
   /* node_view__event_node 130cd3af */   'style' => 'clean_element',
   /* node_view__event_node 130cd3af */ );
   /* node_view__event_node 130cd3af */ $pane->css = array(
   /* node_view__event_node 130cd3af */   'css_id' => '',
   /* node_view__event_node 130cd3af */   'css_class' => '',
   /* node_view__event_node 130cd3af */ );
   /* node_view__event_node 130cd3af */ $pane->extras = array();
   /* node_view__event_node 130cd3af */ $pane->position = 0;
   /* node_view__event_node 130cd3af */ $pane->locks = array();
   /* node_view__event_node 130cd3af */ $pane->uuid = '130cd3af-a5fc-40e2-a2b1-a814af5e2c8e';
  $display->content['new-130cd3af-a5fc-40e2-a2b1-a814af5e2c8e'] = $pane;
  $display->panels['main_bottom'][0] = 'new-130cd3af-a5fc-40e2-a2b1-a814af5e2c8e';
   /* node_view__event_node 51e23e76 */ $pane = new stdClass();
   /* node_view__event_node 51e23e76 */ $pane->pid = 'new-51e23e76-ceeb-454f-bc91-1595b356cbba';
   /* node_view__event_node 51e23e76 */ $pane->panel = 'main_bottom';
   /* node_view__event_node 51e23e76 */ $pane->type = 'views_panes';
   /* node_view__event_node 51e23e76 */ $pane->subtype = 'news_announcements_posts-panel_pane_17';
   /* node_view__event_node 51e23e76 */ $pane->shown = TRUE;
   /* node_view__event_node 51e23e76 */ $pane->access = array();
   /* node_view__event_node 51e23e76 */ $pane->configuration = array(
   /* node_view__event_node 51e23e76 */   'context' => array(
   /* node_view__event_node 51e23e76 */     0 => 'argument_entity_id:node_1',
   /* node_view__event_node 51e23e76 */   ),
   /* node_view__event_node 51e23e76 */ );
   /* node_view__event_node 51e23e76 */ $pane->cache = array();
   /* node_view__event_node 51e23e76 */ $pane->style = array(
   /* node_view__event_node 51e23e76 */   'settings' => array(
   /* node_view__event_node 51e23e76 */     'clean_markup' => array(
   /* node_view__event_node 51e23e76 */       'pane_wrapper' => 'div',
   /* node_view__event_node 51e23e76 */       'additional_pane_classes' => 'author-post-date',
   /* node_view__event_node 51e23e76 */       'additional_pane_attributes' => '',
   /* node_view__event_node 51e23e76 */       'enable_inner_div' => 0,
   /* node_view__event_node 51e23e76 */       'title_wrapper' => 'h2',
   /* node_view__event_node 51e23e76 */       'title_hide' => 0,
   /* node_view__event_node 51e23e76 */       'content_wrapper' => 'none',
   /* node_view__event_node 51e23e76 */     ),
   /* node_view__event_node 51e23e76 */   ),
   /* node_view__event_node 51e23e76 */   'style' => 'clean_element',
   /* node_view__event_node 51e23e76 */ );
   /* node_view__event_node 51e23e76 */ $pane->css = array();
   /* node_view__event_node 51e23e76 */ $pane->extras = array();
   /* node_view__event_node 51e23e76 */ $pane->position = 1;
   /* node_view__event_node 51e23e76 */ $pane->locks = array();
   /* node_view__event_node 51e23e76 */ $pane->uuid = '51e23e76-ceeb-454f-bc91-1595b356cbba';
  $display->content['new-51e23e76-ceeb-454f-bc91-1595b356cbba'] = $pane;
  $display->panels['main_bottom'][1] = 'new-51e23e76-ceeb-454f-bc91-1595b356cbba';
   /* node_view__event_node 61f8d060 */ $pane = new stdClass();
   /* node_view__event_node 61f8d060 */ $pane->pid = 'new-61f8d060-e730-423b-a797-ee936c238b17';
   /* node_view__event_node 61f8d060 */ $pane->panel = 'main_bottom';
   /* node_view__event_node 61f8d060 */ $pane->type = 'node_body';
   /* node_view__event_node 61f8d060 */ $pane->subtype = 'node_body';
   /* node_view__event_node 61f8d060 */ $pane->shown = TRUE;
   /* node_view__event_node 61f8d060 */ $pane->access = array();
   /* node_view__event_node 61f8d060 */ $pane->configuration = array(
   /* node_view__event_node 61f8d060 */   'context' => 'argument_entity_id:node_1',
   /* node_view__event_node 61f8d060 */   'override_title' => 1,
   /* node_view__event_node 61f8d060 */   'override_title_text' => '',
   /* node_view__event_node 61f8d060 */ );
   /* node_view__event_node 61f8d060 */ $pane->cache = array();
   /* node_view__event_node 61f8d060 */ $pane->style = array(
   /* node_view__event_node 61f8d060 */   'settings' => NULL,
   /* node_view__event_node 61f8d060 */ );
   /* node_view__event_node 61f8d060 */ $pane->css = array();
   /* node_view__event_node 61f8d060 */ $pane->extras = array();
   /* node_view__event_node 61f8d060 */ $pane->position = 2;
   /* node_view__event_node 61f8d060 */ $pane->locks = array();
   /* node_view__event_node 61f8d060 */ $pane->uuid = '61f8d060-e730-423b-a797-ee936c238b17';
  $display->content['new-61f8d060-e730-423b-a797-ee936c238b17'] = $pane;
  $display->panels['main_bottom'][2] = 'new-61f8d060-e730-423b-a797-ee936c238b17';
   /* node_view__event_node 96d2276f */ $pane = new stdClass();
   /* node_view__event_node 96d2276f */ $pane->pid = 'new-96d2276f-6ea2-4e2d-8cb1-5f64db188446';
   /* node_view__event_node 96d2276f */ $pane->panel = 'main_bottom';
   /* node_view__event_node 96d2276f */ $pane->type = 'views_panes';
   /* node_view__event_node 96d2276f */ $pane->subtype = 'news_announcements_posts-panel_pane_21';
   /* node_view__event_node 96d2276f */ $pane->shown = TRUE;
   /* node_view__event_node 96d2276f */ $pane->access = array();
   /* node_view__event_node 96d2276f */ $pane->configuration = array(
   /* node_view__event_node 96d2276f */   'override_title' => 0,
   /* node_view__event_node 96d2276f */   'override_title_text' => '',
   /* node_view__event_node 96d2276f */   'override_title_heading' => 'h2',
   /* node_view__event_node 96d2276f */ );
   /* node_view__event_node 96d2276f */ $pane->cache = array();
   /* node_view__event_node 96d2276f */ $pane->style = array(
   /* node_view__event_node 96d2276f */   'settings' => NULL,
   /* node_view__event_node 96d2276f */ );
   /* node_view__event_node 96d2276f */ $pane->css = array();
   /* node_view__event_node 96d2276f */ $pane->extras = array();
   /* node_view__event_node 96d2276f */ $pane->position = 3;
   /* node_view__event_node 96d2276f */ $pane->locks = array();
   /* node_view__event_node 96d2276f */ $pane->uuid = '96d2276f-6ea2-4e2d-8cb1-5f64db188446';
  $display->content['new-96d2276f-6ea2-4e2d-8cb1-5f64db188446'] = $pane;
  $display->panels['main_bottom'][3] = 'new-96d2276f-6ea2-4e2d-8cb1-5f64db188446';
   /* node_view__event_node 4012f818 */ $pane = new stdClass();
   /* node_view__event_node 4012f818 */ $pane->pid = 'new-4012f818-100b-45d8-82a5-c00e66ef4dc3';
   /* node_view__event_node 4012f818 */ $pane->panel = 'main_bottom';
   /* node_view__event_node 4012f818 */ $pane->type = 'block';
   /* node_view__event_node 4012f818 */ $pane->subtype = 'gn2_file_download-associated_media';
   /* node_view__event_node 4012f818 */ $pane->shown = TRUE;
   /* node_view__event_node 4012f818 */ $pane->access = array();
   /* node_view__event_node 4012f818 */ $pane->configuration = array(
   /* node_view__event_node 4012f818 */   'override_title' => 1,
   /* node_view__event_node 4012f818 */   'override_title_text' => 'Associated Files',
   /* node_view__event_node 4012f818 */   'override_title_heading' => 'h3',
   /* node_view__event_node 4012f818 */ );
   /* node_view__event_node 4012f818 */ $pane->cache = array();
   /* node_view__event_node 4012f818 */ $pane->style = array(
   /* node_view__event_node 4012f818 */   'style' => 'clean_element',
   /* node_view__event_node 4012f818 */   'settings' => array(
   /* node_view__event_node 4012f818 */     'clean_markup' => array(
   /* node_view__event_node 4012f818 */       'pane_wrapper' => 'div',
   /* node_view__event_node 4012f818 */       'additional_pane_classes' => 'panel-pane sidebar-subheading file-download',
   /* node_view__event_node 4012f818 */       'additional_pane_attributes' => '',
   /* node_view__event_node 4012f818 */       'enable_inner_div' => 0,
   /* node_view__event_node 4012f818 */       'title_wrapper' => 'h3',
   /* node_view__event_node 4012f818 */       'title_hide' => 0,
   /* node_view__event_node 4012f818 */       'content_wrapper' => 'none',
   /* node_view__event_node 4012f818 */     ),
   /* node_view__event_node 4012f818 */   ),
   /* node_view__event_node 4012f818 */ );
   /* node_view__event_node 4012f818 */ $pane->css = array(
   /* node_view__event_node 4012f818 */   'css_id' => '',
   /* node_view__event_node 4012f818 */   'css_class' => '',
   /* node_view__event_node 4012f818 */ );
   /* node_view__event_node 4012f818 */ $pane->extras = array();
   /* node_view__event_node 4012f818 */ $pane->position = 4;
   /* node_view__event_node 4012f818 */ $pane->locks = array();
   /* node_view__event_node 4012f818 */ $pane->uuid = '4012f818-100b-45d8-82a5-c00e66ef4dc3';
  $display->content['new-4012f818-100b-45d8-82a5-c00e66ef4dc3'] = $pane;
  $display->panels['main_bottom'][4] = 'new-4012f818-100b-45d8-82a5-c00e66ef4dc3';
   /* node_view__event_node a3d18c72 */ $pane = new stdClass();
   /* node_view__event_node a3d18c72 */ $pane->pid = 'new-a3d18c72-195c-4304-a789-be793656e289';
   /* node_view__event_node a3d18c72 */ $pane->panel = 'main_bottom';
   /* node_view__event_node a3d18c72 */ $pane->type = 'node_comment_form';
   /* node_view__event_node a3d18c72 */ $pane->subtype = 'node_comment_form';
   /* node_view__event_node a3d18c72 */ $pane->shown = TRUE;
   /* node_view__event_node a3d18c72 */ $pane->access = array();
   /* node_view__event_node a3d18c72 */ $pane->configuration = array(
   /* node_view__event_node a3d18c72 */   'anon_links' => 0,
   /* node_view__event_node a3d18c72 */   'context' => 'argument_entity_id:node_1',
   /* node_view__event_node a3d18c72 */   'override_title' => 1,
   /* node_view__event_node a3d18c72 */   'override_title_text' => 'Join the Conversation',
   /* node_view__event_node a3d18c72 */   'override_title_heading' => 'h3',
   /* node_view__event_node a3d18c72 */ );
   /* node_view__event_node a3d18c72 */ $pane->cache = array();
   /* node_view__event_node a3d18c72 */ $pane->style = array(
   /* node_view__event_node a3d18c72 */   'settings' => array(
   /* node_view__event_node a3d18c72 */     'clean_markup' => array(
   /* node_view__event_node a3d18c72 */       'pane_wrapper' => 'div',
   /* node_view__event_node a3d18c72 */       'additional_pane_classes' => 'panel-pane sidebar-subheading',
   /* node_view__event_node a3d18c72 */       'additional_pane_attributes' => '',
   /* node_view__event_node a3d18c72 */       'enable_inner_div' => 0,
   /* node_view__event_node a3d18c72 */       'title_wrapper' => 'h3',
   /* node_view__event_node a3d18c72 */       'title_hide' => 0,
   /* node_view__event_node a3d18c72 */       'content_wrapper' => 'none',
   /* node_view__event_node a3d18c72 */     ),
   /* node_view__event_node a3d18c72 */   ),
   /* node_view__event_node a3d18c72 */   'style' => 'clean_element',
   /* node_view__event_node a3d18c72 */ );
   /* node_view__event_node a3d18c72 */ $pane->css = array();
   /* node_view__event_node a3d18c72 */ $pane->extras = array();
   /* node_view__event_node a3d18c72 */ $pane->position = 5;
   /* node_view__event_node a3d18c72 */ $pane->locks = array();
   /* node_view__event_node a3d18c72 */ $pane->uuid = 'a3d18c72-195c-4304-a789-be793656e289';
  $display->content['new-a3d18c72-195c-4304-a789-be793656e289'] = $pane;
  $display->panels['main_bottom'][5] = 'new-a3d18c72-195c-4304-a789-be793656e289';
   /* node_view__event_node 2cf912dc */ $pane = new stdClass();
   /* node_view__event_node 2cf912dc */ $pane->pid = 'new-2cf912dc-c221-48e5-8409-7f34a6d39527';
   /* node_view__event_node 2cf912dc */ $pane->panel = 'main_bottom';
   /* node_view__event_node 2cf912dc */ $pane->type = 'views_panes';
   /* node_view__event_node 2cf912dc */ $pane->subtype = 'node_comments-panel_pane_1';
   /* node_view__event_node 2cf912dc */ $pane->shown = TRUE;
   /* node_view__event_node 2cf912dc */ $pane->access = array();
   /* node_view__event_node 2cf912dc */ $pane->configuration = array();
   /* node_view__event_node 2cf912dc */ $pane->cache = array();
   /* node_view__event_node 2cf912dc */ $pane->style = array(
   /* node_view__event_node 2cf912dc */   'settings' => NULL,
   /* node_view__event_node 2cf912dc */ );
   /* node_view__event_node 2cf912dc */ $pane->css = array();
   /* node_view__event_node 2cf912dc */ $pane->extras = array();
   /* node_view__event_node 2cf912dc */ $pane->position = 6;
   /* node_view__event_node 2cf912dc */ $pane->locks = array();
   /* node_view__event_node 2cf912dc */ $pane->uuid = '2cf912dc-c221-48e5-8409-7f34a6d39527';
  $display->content['new-2cf912dc-c221-48e5-8409-7f34a6d39527'] = $pane;
  $display->panels['main_bottom'][6] = 'new-2cf912dc-c221-48e5-8409-7f34a6d39527';
   /* node_view__event_node 2a71426b */ $pane = new stdClass();
   /* node_view__event_node 2a71426b */ $pane->pid = 'new-2a71426b-7aa2-414c-a697-a31c9461602a';
   /* node_view__event_node 2a71426b */ $pane->panel = 'sidebar';
   /* node_view__event_node 2a71426b */ $pane->type = 'block';
   /* node_view__event_node 2a71426b */ $pane->subtype = 'gn2_manager_access-gn2_manager_manage';
   /* node_view__event_node 2a71426b */ $pane->shown = TRUE;
   /* node_view__event_node 2a71426b */ $pane->access = array();
   /* node_view__event_node 2a71426b */ $pane->configuration = array(
   /* node_view__event_node 2a71426b */   'override_title' => 0,
   /* node_view__event_node 2a71426b */   'override_title_text' => '',
   /* node_view__event_node 2a71426b */   'override_title_heading' => 'h2',
   /* node_view__event_node 2a71426b */ );
   /* node_view__event_node 2a71426b */ $pane->cache = array();
   /* node_view__event_node 2a71426b */ $pane->style = array(
   /* node_view__event_node 2a71426b */   'settings' => NULL,
   /* node_view__event_node 2a71426b */ );
   /* node_view__event_node 2a71426b */ $pane->css = array();
   /* node_view__event_node 2a71426b */ $pane->extras = array();
   /* node_view__event_node 2a71426b */ $pane->position = 0;
   /* node_view__event_node 2a71426b */ $pane->locks = array();
   /* node_view__event_node 2a71426b */ $pane->uuid = '2a71426b-7aa2-414c-a697-a31c9461602a';
  $display->content['new-2a71426b-7aa2-414c-a697-a31c9461602a'] = $pane;
  $display->panels['sidebar'][0] = 'new-2a71426b-7aa2-414c-a697-a31c9461602a';
   /* node_view__event_node 6422aefa */ $pane = new stdClass();
   /* node_view__event_node 6422aefa */ $pane->pid = 'new-6422aefa-d280-414a-a7ea-8c51d3f4a888';
   /* node_view__event_node 6422aefa */ $pane->panel = 'sidebar';
   /* node_view__event_node 6422aefa */ $pane->type = 'block';
   /* node_view__event_node 6422aefa */ $pane->subtype = 'gn2_admin_dashboard-gn2_content_rating_users';
   /* node_view__event_node 6422aefa */ $pane->shown = TRUE;
   /* node_view__event_node 6422aefa */ $pane->access = array();
   /* node_view__event_node 6422aefa */ $pane->configuration = array(
   /* node_view__event_node 6422aefa */   'override_title' => 0,
   /* node_view__event_node 6422aefa */   'override_title_text' => '',
   /* node_view__event_node 6422aefa */   'override_title_heading' => 'h2',
   /* node_view__event_node 6422aefa */ );
   /* node_view__event_node 6422aefa */ $pane->cache = array();
   /* node_view__event_node 6422aefa */ $pane->style = array(
   /* node_view__event_node 6422aefa */   'settings' => NULL,
   /* node_view__event_node 6422aefa */ );
   /* node_view__event_node 6422aefa */ $pane->css = array();
   /* node_view__event_node 6422aefa */ $pane->extras = array();
   /* node_view__event_node 6422aefa */ $pane->position = 1;
   /* node_view__event_node 6422aefa */ $pane->locks = array();
   /* node_view__event_node 6422aefa */ $pane->uuid = '6422aefa-d280-414a-a7ea-8c51d3f4a888';
  $display->content['new-6422aefa-d280-414a-a7ea-8c51d3f4a888'] = $pane;
  $display->panels['sidebar'][1] = 'new-6422aefa-d280-414a-a7ea-8c51d3f4a888';
   /* node_view__event_node b0875298 */ $pane = new stdClass();
   /* node_view__event_node b0875298 */ $pane->pid = 'new-b0875298-4088-4e7e-8f83-83b9164693e4';
   /* node_view__event_node b0875298 */ $pane->panel = 'sidebar';
   /* node_view__event_node b0875298 */ $pane->type = 'views_panes';
   /* node_view__event_node b0875298 */ $pane->subtype = 'news_announcements_posts-about_this_author_pane';
   /* node_view__event_node b0875298 */ $pane->shown = TRUE;
   /* node_view__event_node b0875298 */ $pane->access = array();
   /* node_view__event_node b0875298 */ $pane->configuration = array();
   /* node_view__event_node b0875298 */ $pane->cache = array();
   /* node_view__event_node b0875298 */ $pane->style = array(
   /* node_view__event_node b0875298 */   'settings' => array(
   /* node_view__event_node b0875298 */     'clean_markup' => array(
   /* node_view__event_node b0875298 */       'pane_wrapper' => 'div',
   /* node_view__event_node b0875298 */       'additional_pane_classes' => 'panel-pane sidebar-subheading',
   /* node_view__event_node b0875298 */       'additional_pane_attributes' => '',
   /* node_view__event_node b0875298 */       'enable_inner_div' => 0,
   /* node_view__event_node b0875298 */       'title_wrapper' => 'h3',
   /* node_view__event_node b0875298 */       'title_hide' => 0,
   /* node_view__event_node b0875298 */       'content_wrapper' => 'none',
   /* node_view__event_node b0875298 */     ),
   /* node_view__event_node b0875298 */   ),
   /* node_view__event_node b0875298 */   'style' => 'clean_element',
   /* node_view__event_node b0875298 */ );
   /* node_view__event_node b0875298 */ $pane->css = array();
   /* node_view__event_node b0875298 */ $pane->extras = array();
   /* node_view__event_node b0875298 */ $pane->position = 2;
   /* node_view__event_node b0875298 */ $pane->locks = array();
   /* node_view__event_node b0875298 */ $pane->uuid = 'b0875298-4088-4e7e-8f83-83b9164693e4';
  $display->content['new-b0875298-4088-4e7e-8f83-83b9164693e4'] = $pane;
  $display->panels['sidebar'][2] = 'new-b0875298-4088-4e7e-8f83-83b9164693e4';
   /* node_view__event_node cefd2677 */ $pane = new stdClass();
   /* node_view__event_node cefd2677 */ $pane->pid = 'new-cefd2677-c845-4bd8-b6a9-7ef6591c3a07';
   /* node_view__event_node cefd2677 */ $pane->panel = 'sidebar';
   /* node_view__event_node cefd2677 */ $pane->type = 'views';
   /* node_view__event_node cefd2677 */ $pane->subtype = 'other_posts_by_this_author';
   /* node_view__event_node cefd2677 */ $pane->shown = TRUE;
   /* node_view__event_node cefd2677 */ $pane->access = array();
   /* node_view__event_node cefd2677 */ $pane->configuration = array(
   /* node_view__event_node cefd2677 */   'override_pager_settings' => 1,
   /* node_view__event_node cefd2677 */   'use_pager' => 0,
   /* node_view__event_node cefd2677 */   'nodes_per_page' => '3',
   /* node_view__event_node cefd2677 */   'pager_id' => '0',
   /* node_view__event_node cefd2677 */   'offset' => '0',
   /* node_view__event_node cefd2677 */   'more_link' => 0,
   /* node_view__event_node cefd2677 */   'feed_icons' => 0,
   /* node_view__event_node cefd2677 */   'panel_args' => 0,
   /* node_view__event_node cefd2677 */   'link_to_view' => 0,
   /* node_view__event_node cefd2677 */   'args' => '',
   /* node_view__event_node cefd2677 */   'url' => '',
   /* node_view__event_node cefd2677 */   'display' => 'block_other_post_by_this_author',
   /* node_view__event_node cefd2677 */   'context' => array(
   /* node_view__event_node cefd2677 */     0 => '',
   /* node_view__event_node cefd2677 */     1 => '',
   /* node_view__event_node cefd2677 */   ),
   /* node_view__event_node cefd2677 */   'override_title' => 0,
   /* node_view__event_node cefd2677 */   'override_title_text' => '',
   /* node_view__event_node cefd2677 */   'override_title_heading' => 'h2',
   /* node_view__event_node cefd2677 */ );
   /* node_view__event_node cefd2677 */ $pane->cache = array();
   /* node_view__event_node cefd2677 */ $pane->style = array(
   /* node_view__event_node cefd2677 */   'settings' => array(
   /* node_view__event_node cefd2677 */     'clean_markup' => array(
   /* node_view__event_node cefd2677 */       'pane_wrapper' => 'div',
   /* node_view__event_node cefd2677 */       'additional_pane_classes' => 'panel-pane fancy-bullets sidebar-subheading',
   /* node_view__event_node cefd2677 */       'additional_pane_attributes' => '',
   /* node_view__event_node cefd2677 */       'enable_inner_div' => 0,
   /* node_view__event_node cefd2677 */       'title_wrapper' => 'h3',
   /* node_view__event_node cefd2677 */       'title_hide' => 0,
   /* node_view__event_node cefd2677 */       'content_wrapper' => 'none',
   /* node_view__event_node cefd2677 */     ),
   /* node_view__event_node cefd2677 */   ),
   /* node_view__event_node cefd2677 */   'style' => 'clean_element',
   /* node_view__event_node cefd2677 */ );
   /* node_view__event_node cefd2677 */ $pane->css = array();
   /* node_view__event_node cefd2677 */ $pane->extras = array();
   /* node_view__event_node cefd2677 */ $pane->position = 3;
   /* node_view__event_node cefd2677 */ $pane->locks = array();
   /* node_view__event_node cefd2677 */ $pane->uuid = 'cefd2677-c845-4bd8-b6a9-7ef6591c3a07';
  $display->content['new-cefd2677-c845-4bd8-b6a9-7ef6591c3a07'] = $pane;
  $display->panels['sidebar'][3] = 'new-cefd2677-c845-4bd8-b6a9-7ef6591c3a07';
   /* node_view__event_node 79bf03f6 */ $pane = new stdClass();
   /* node_view__event_node 79bf03f6 */ $pane->pid = 'new-79bf03f6-dab3-429b-a485-cd7a11253369';
   /* node_view__event_node 79bf03f6 */ $pane->panel = 'top';
   /* node_view__event_node 79bf03f6 */ $pane->type = 'views_panes';
   /* node_view__event_node 79bf03f6 */ $pane->subtype = 'news_announcements_posts-panel_pane_3';
   /* node_view__event_node 79bf03f6 */ $pane->shown = TRUE;
   /* node_view__event_node 79bf03f6 */ $pane->access = array();
   /* node_view__event_node 79bf03f6 */ $pane->configuration = array();
   /* node_view__event_node 79bf03f6 */ $pane->cache = array();
   /* node_view__event_node 79bf03f6 */ $pane->style = array(
   /* node_view__event_node 79bf03f6 */   'settings' => NULL,
   /* node_view__event_node 79bf03f6 */ );
   /* node_view__event_node 79bf03f6 */ $pane->css = array();
   /* node_view__event_node 79bf03f6 */ $pane->extras = array();
   /* node_view__event_node 79bf03f6 */ $pane->position = 0;
   /* node_view__event_node 79bf03f6 */ $pane->locks = array();
   /* node_view__event_node 79bf03f6 */ $pane->uuid = '79bf03f6-dab3-429b-a485-cd7a11253369';
  $display->content['new-79bf03f6-dab3-429b-a485-cd7a11253369'] = $pane;
  $display->panels['top'][0] = 'new-79bf03f6-dab3-429b-a485-cd7a11253369';
   /* node_view__event_node a5ccd2af */ $pane = new stdClass();
   /* node_view__event_node a5ccd2af */ $pane->pid = 'new-a5ccd2af-52e6-463d-b0ba-6da29bac0203';
   /* node_view__event_node a5ccd2af */ $pane->panel = 'top';
   /* node_view__event_node a5ccd2af */ $pane->type = 'custom';
   /* node_view__event_node a5ccd2af */ $pane->subtype = 'unpublished_node_block';
   /* node_view__event_node a5ccd2af */ $pane->shown = TRUE;
   /* node_view__event_node a5ccd2af */ $pane->access = array(
   /* node_view__event_node a5ccd2af */   'plugins' => array(
   /* node_view__event_node a5ccd2af */     0 => array(
   /* node_view__event_node a5ccd2af */       'name' => 'node_status',
   /* node_view__event_node a5ccd2af */       'settings' => NULL,
   /* node_view__event_node a5ccd2af */       'context' => 'argument_entity_id:node_1',
   /* node_view__event_node a5ccd2af */       'not' => TRUE,
   /* node_view__event_node a5ccd2af */     ),
   /* node_view__event_node a5ccd2af */   ),
   /* node_view__event_node a5ccd2af */ );
   /* node_view__event_node a5ccd2af */ $pane->configuration = array(
   /* node_view__event_node a5ccd2af */   'admin_title' => '',
   /* node_view__event_node a5ccd2af */   'title' => '',
   /* node_view__event_node a5ccd2af */   'body' => '',
   /* node_view__event_node a5ccd2af */   'format' => 'filtered_html',
   /* node_view__event_node a5ccd2af */   'substitute' => TRUE,
   /* node_view__event_node a5ccd2af */ );
   /* node_view__event_node a5ccd2af */ $pane->cache = array();
   /* node_view__event_node a5ccd2af */ $pane->style = array(
   /* node_view__event_node a5ccd2af */   'settings' => NULL,
   /* node_view__event_node a5ccd2af */ );
   /* node_view__event_node a5ccd2af */ $pane->css = array();
   /* node_view__event_node a5ccd2af */ $pane->extras = array();
   /* node_view__event_node a5ccd2af */ $pane->position = 1;
   /* node_view__event_node a5ccd2af */ $pane->locks = array();
   /* node_view__event_node a5ccd2af */ $pane->uuid = 'a5ccd2af-52e6-463d-b0ba-6da29bac0203';
  $display->content['new-a5ccd2af-52e6-463d-b0ba-6da29bac0203'] = $pane;
  $display->panels['top'][1] = 'new-a5ccd2af-52e6-463d-b0ba-6da29bac0203';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view__panel_context_27aa23c0-ee31-4772-aa8d-c63cd424de71'] = $handler;

   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 */ $handler = new stdClass();
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 */ $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 */ $handler->api_version = 1;
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 */ $handler->name = 'node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8';
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 */ $handler->task = 'node_view';
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 */ $handler->subtask = '';
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 */ $handler->handler = 'panel_context';
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 */ $handler->weight = -3;
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 */ $handler->conf = array(
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 */   'title' => 'Announcement Node',
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 */   'no_blocks' => 0,
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 */   'pipeline' => 'standard',
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 */   'body_classes_to_remove' => '',
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 */   'body_classes_to_add' => 'announcement-node-page',
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 */   'css_id' => '',
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 */   'css' => '',
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 */   'contexts' => array(),
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 */   'relationships' => array(),
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 */   'access' => array(
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 */     'plugins' => array(
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 */       0 => array(
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 */         'name' => 'node_type',
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 */         'settings' => array(
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 */           'type' => array(
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 */             'announcement' => 'announcement',
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 */           ),
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 */         ),
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 */         'context' => 'argument_entity_id:node_1',
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 */         'not' => FALSE,
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 */       ),
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 */     ),
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 */     'logic' => 'and',
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 */   ),
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 */ );
   /* node_view__panel_context_27aa23c0-ee31-4772-aa8d-c63cd424de71 2b92583a */ $display = new panels_display();
   /* node_view__panel_context_27aa23c0-ee31-4772-aa8d-c63cd424de71 2b92583a */ $display->layout = 'gn2_2colstackedflipped';
   /* node_view__panel_context_27aa23c0-ee31-4772-aa8d-c63cd424de71 2b92583a */ $display->layout_settings = array();
   /* node_view__panel_context_27aa23c0-ee31-4772-aa8d-c63cd424de71 2b92583a */ $display->panel_settings = array(
   /* node_view__panel_context_27aa23c0-ee31-4772-aa8d-c63cd424de71 2b92583a */   'style_settings' => array(
   /* node_view__panel_context_27aa23c0-ee31-4772-aa8d-c63cd424de71 2b92583a */     'default' => NULL,
   /* node_view__panel_context_27aa23c0-ee31-4772-aa8d-c63cd424de71 2b92583a */     'contentmain' => NULL,
   /* node_view__panel_context_27aa23c0-ee31-4772-aa8d-c63cd424de71 2b92583a */     'header' => NULL,
   /* node_view__panel_context_27aa23c0-ee31-4772-aa8d-c63cd424de71 2b92583a */     'main_top' => NULL,
   /* node_view__panel_context_27aa23c0-ee31-4772-aa8d-c63cd424de71 2b92583a */     'footer' => NULL,
   /* node_view__panel_context_27aa23c0-ee31-4772-aa8d-c63cd424de71 2b92583a */     'top' => NULL,
   /* node_view__panel_context_27aa23c0-ee31-4772-aa8d-c63cd424de71 2b92583a */     'sidebar' => NULL,
   /* node_view__panel_context_27aa23c0-ee31-4772-aa8d-c63cd424de71 2b92583a */     'main_bottom' => NULL,
   /* node_view__panel_context_27aa23c0-ee31-4772-aa8d-c63cd424de71 2b92583a */   ),
   /* node_view__panel_context_27aa23c0-ee31-4772-aa8d-c63cd424de71 2b92583a */   'main_bottom' => array(
   /* node_view__panel_context_27aa23c0-ee31-4772-aa8d-c63cd424de71 2b92583a */     'style' => 'default',
   /* node_view__panel_context_27aa23c0-ee31-4772-aa8d-c63cd424de71 2b92583a */   ),
   /* node_view__panel_context_27aa23c0-ee31-4772-aa8d-c63cd424de71 2b92583a */   'sidebar' => array(
   /* node_view__panel_context_27aa23c0-ee31-4772-aa8d-c63cd424de71 2b92583a */     'style' => 'default',
   /* node_view__panel_context_27aa23c0-ee31-4772-aa8d-c63cd424de71 2b92583a */   ),
   /* node_view__panel_context_27aa23c0-ee31-4772-aa8d-c63cd424de71 2b92583a */   'top' => array(
   /* node_view__panel_context_27aa23c0-ee31-4772-aa8d-c63cd424de71 2b92583a */     'style' => 'default',
   /* node_view__panel_context_27aa23c0-ee31-4772-aa8d-c63cd424de71 2b92583a */   ),
   /* node_view__panel_context_27aa23c0-ee31-4772-aa8d-c63cd424de71 2b92583a */ );
   /* node_view__panel_context_27aa23c0-ee31-4772-aa8d-c63cd424de71 2b92583a */ $display->cache = array();
   /* node_view__panel_context_27aa23c0-ee31-4772-aa8d-c63cd424de71 2b92583a */ $display->title = '%node:title';
   /* node_view__panel_context_27aa23c0-ee31-4772-aa8d-c63cd424de71 2b92583a */ $display->uuid = '2b92583a-ea58-48c8-86e3-23545720acdf';
   /* node_view__panel_context_27aa23c0-ee31-4772-aa8d-c63cd424de71 2b92583a */ $display->storage_type = 'page_manager';
   /* node_view__panel_context_27aa23c0-ee31-4772-aa8d-c63cd424de71 2b92583a */ $display->storage_id = 'node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8';
  $display->content = array();
  $display->panels = array();
   /* node_view__panel_context_27aa23c0-ee31-4772-aa8d-c63cd424de71 130cd3af */ $pane = new stdClass();
   /* node_view__panel_context_27aa23c0-ee31-4772-aa8d-c63cd424de71 130cd3af */ $pane->pid = 'new-130cd3af-a5fc-40e2-a2b1-a814af5e2c8e';
   /* node_view__panel_context_27aa23c0-ee31-4772-aa8d-c63cd424de71 130cd3af */ $pane->panel = 'main_bottom';
   /* node_view__panel_context_27aa23c0-ee31-4772-aa8d-c63cd424de71 130cd3af */ $pane->type = 'entity_field';
   /* node_view__panel_context_27aa23c0-ee31-4772-aa8d-c63cd424de71 130cd3af */ $pane->subtype = 'node:field_main_image';
   /* node_view__panel_context_27aa23c0-ee31-4772-aa8d-c63cd424de71 130cd3af */ $pane->shown = TRUE;
   /* node_view__panel_context_27aa23c0-ee31-4772-aa8d-c63cd424de71 130cd3af */ $pane->access = array();
   /* node_view__panel_context_27aa23c0-ee31-4772-aa8d-c63cd424de71 130cd3af */ $pane->configuration = array(
   /* node_view__panel_context_27aa23c0-ee31-4772-aa8d-c63cd424de71 130cd3af */   'label' => 'hidden',
   /* node_view__panel_context_27aa23c0-ee31-4772-aa8d-c63cd424de71 130cd3af */   'formatter' => 'file_rendered',
   /* node_view__panel_context_27aa23c0-ee31-4772-aa8d-c63cd424de71 130cd3af */   'delta_limit' => 0,
   /* node_view__panel_context_27aa23c0-ee31-4772-aa8d-c63cd424de71 130cd3af */   'delta_offset' => '0',
   /* node_view__panel_context_27aa23c0-ee31-4772-aa8d-c63cd424de71 130cd3af */   'delta_reversed' => FALSE,
   /* node_view__panel_context_27aa23c0-ee31-4772-aa8d-c63cd424de71 130cd3af */   'formatter_settings' => array(
   /* node_view__panel_context_27aa23c0-ee31-4772-aa8d-c63cd424de71 130cd3af */     'file_view_mode' => 'main_news_image',
   /* node_view__panel_context_27aa23c0-ee31-4772-aa8d-c63cd424de71 130cd3af */     'field_formatter_class' => '',
   /* node_view__panel_context_27aa23c0-ee31-4772-aa8d-c63cd424de71 130cd3af */   ),
   /* node_view__panel_context_27aa23c0-ee31-4772-aa8d-c63cd424de71 130cd3af */   'context' => 'argument_entity_id:node_1',
   /* node_view__panel_context_27aa23c0-ee31-4772-aa8d-c63cd424de71 130cd3af */   'override_title' => 0,
   /* node_view__panel_context_27aa23c0-ee31-4772-aa8d-c63cd424de71 130cd3af */   'override_title_text' => '',
   /* node_view__panel_context_27aa23c0-ee31-4772-aa8d-c63cd424de71 130cd3af */   'override_title_heading' => 'h2',
   /* node_view__panel_context_27aa23c0-ee31-4772-aa8d-c63cd424de71 130cd3af */ );
   /* node_view__panel_context_27aa23c0-ee31-4772-aa8d-c63cd424de71 130cd3af */ $pane->cache = array();
   /* node_view__panel_context_27aa23c0-ee31-4772-aa8d-c63cd424de71 130cd3af */ $pane->style = array(
   /* node_view__panel_context_27aa23c0-ee31-4772-aa8d-c63cd424de71 130cd3af */   'settings' => array(
   /* node_view__panel_context_27aa23c0-ee31-4772-aa8d-c63cd424de71 130cd3af */     'clean_markup' => array(
   /* node_view__panel_context_27aa23c0-ee31-4772-aa8d-c63cd424de71 130cd3af */       'pane_wrapper' => 'div',
   /* node_view__panel_context_27aa23c0-ee31-4772-aa8d-c63cd424de71 130cd3af */       'additional_pane_classes' => 'main-news-image-wrapper',
   /* node_view__panel_context_27aa23c0-ee31-4772-aa8d-c63cd424de71 130cd3af */       'additional_pane_attributes' => '',
   /* node_view__panel_context_27aa23c0-ee31-4772-aa8d-c63cd424de71 130cd3af */       'enable_inner_div' => 0,
   /* node_view__panel_context_27aa23c0-ee31-4772-aa8d-c63cd424de71 130cd3af */       'title_wrapper' => 'h2',
   /* node_view__panel_context_27aa23c0-ee31-4772-aa8d-c63cd424de71 130cd3af */       'title_hide' => 0,
   /* node_view__panel_context_27aa23c0-ee31-4772-aa8d-c63cd424de71 130cd3af */       'content_wrapper' => 'none',
   /* node_view__panel_context_27aa23c0-ee31-4772-aa8d-c63cd424de71 130cd3af */     ),
   /* node_view__panel_context_27aa23c0-ee31-4772-aa8d-c63cd424de71 130cd3af */   ),
   /* node_view__panel_context_27aa23c0-ee31-4772-aa8d-c63cd424de71 130cd3af */   'style' => 'clean_element',
   /* node_view__panel_context_27aa23c0-ee31-4772-aa8d-c63cd424de71 130cd3af */ );
   /* node_view__panel_context_27aa23c0-ee31-4772-aa8d-c63cd424de71 130cd3af */ $pane->css = array(
   /* node_view__panel_context_27aa23c0-ee31-4772-aa8d-c63cd424de71 130cd3af */   'css_id' => '',
   /* node_view__panel_context_27aa23c0-ee31-4772-aa8d-c63cd424de71 130cd3af */   'css_class' => '',
   /* node_view__panel_context_27aa23c0-ee31-4772-aa8d-c63cd424de71 130cd3af */ );
   /* node_view__panel_context_27aa23c0-ee31-4772-aa8d-c63cd424de71 130cd3af */ $pane->extras = array();
   /* node_view__panel_context_27aa23c0-ee31-4772-aa8d-c63cd424de71 130cd3af */ $pane->position = 0;
   /* node_view__panel_context_27aa23c0-ee31-4772-aa8d-c63cd424de71 130cd3af */ $pane->locks = array();
   /* node_view__panel_context_27aa23c0-ee31-4772-aa8d-c63cd424de71 130cd3af */ $pane->uuid = '130cd3af-a5fc-40e2-a2b1-a814af5e2c8e';
  $display->content['new-130cd3af-a5fc-40e2-a2b1-a814af5e2c8e'] = $pane;
  $display->panels['main_bottom'][0] = 'new-130cd3af-a5fc-40e2-a2b1-a814af5e2c8e';
   /* node_view__panel_context_27aa23c0-ee31-4772-aa8d-c63cd424de71 51e23e76 */ $pane = new stdClass();
   /* node_view__panel_context_27aa23c0-ee31-4772-aa8d-c63cd424de71 51e23e76 */ $pane->pid = 'new-51e23e76-ceeb-454f-bc91-1595b356cbba';
   /* node_view__panel_context_27aa23c0-ee31-4772-aa8d-c63cd424de71 51e23e76 */ $pane->panel = 'main_bottom';
   /* node_view__panel_context_27aa23c0-ee31-4772-aa8d-c63cd424de71 51e23e76 */ $pane->type = 'views_panes';
   /* node_view__panel_context_27aa23c0-ee31-4772-aa8d-c63cd424de71 51e23e76 */ $pane->subtype = 'news_announcements_posts-panel_pane_17';
   /* node_view__panel_context_27aa23c0-ee31-4772-aa8d-c63cd424de71 51e23e76 */ $pane->shown = TRUE;
   /* node_view__panel_context_27aa23c0-ee31-4772-aa8d-c63cd424de71 51e23e76 */ $pane->access = array();
   /* node_view__panel_context_27aa23c0-ee31-4772-aa8d-c63cd424de71 51e23e76 */ $pane->configuration = array();
   /* node_view__panel_context_27aa23c0-ee31-4772-aa8d-c63cd424de71 51e23e76 */ $pane->cache = array();
   /* node_view__panel_context_27aa23c0-ee31-4772-aa8d-c63cd424de71 51e23e76 */ $pane->style = array(
   /* node_view__panel_context_27aa23c0-ee31-4772-aa8d-c63cd424de71 51e23e76 */   'settings' => array(
   /* node_view__panel_context_27aa23c0-ee31-4772-aa8d-c63cd424de71 51e23e76 */     'clean_markup' => array(
   /* node_view__panel_context_27aa23c0-ee31-4772-aa8d-c63cd424de71 51e23e76 */       'pane_wrapper' => 'div',
   /* node_view__panel_context_27aa23c0-ee31-4772-aa8d-c63cd424de71 51e23e76 */       'additional_pane_classes' => 'author-post-date',
   /* node_view__panel_context_27aa23c0-ee31-4772-aa8d-c63cd424de71 51e23e76 */       'additional_pane_attributes' => '',
   /* node_view__panel_context_27aa23c0-ee31-4772-aa8d-c63cd424de71 51e23e76 */       'enable_inner_div' => 0,
   /* node_view__panel_context_27aa23c0-ee31-4772-aa8d-c63cd424de71 51e23e76 */       'title_wrapper' => 'h2',
   /* node_view__panel_context_27aa23c0-ee31-4772-aa8d-c63cd424de71 51e23e76 */       'title_hide' => 0,
   /* node_view__panel_context_27aa23c0-ee31-4772-aa8d-c63cd424de71 51e23e76 */       'content_wrapper' => 'none',
   /* node_view__panel_context_27aa23c0-ee31-4772-aa8d-c63cd424de71 51e23e76 */     ),
   /* node_view__panel_context_27aa23c0-ee31-4772-aa8d-c63cd424de71 51e23e76 */   ),
   /* node_view__panel_context_27aa23c0-ee31-4772-aa8d-c63cd424de71 51e23e76 */   'style' => 'clean_element',
   /* node_view__panel_context_27aa23c0-ee31-4772-aa8d-c63cd424de71 51e23e76 */ );
   /* node_view__panel_context_27aa23c0-ee31-4772-aa8d-c63cd424de71 51e23e76 */ $pane->css = array();
   /* node_view__panel_context_27aa23c0-ee31-4772-aa8d-c63cd424de71 51e23e76 */ $pane->extras = array();
   /* node_view__panel_context_27aa23c0-ee31-4772-aa8d-c63cd424de71 51e23e76 */ $pane->position = 1;
   /* node_view__panel_context_27aa23c0-ee31-4772-aa8d-c63cd424de71 51e23e76 */ $pane->locks = array();
   /* node_view__panel_context_27aa23c0-ee31-4772-aa8d-c63cd424de71 51e23e76 */ $pane->uuid = '51e23e76-ceeb-454f-bc91-1595b356cbba';
  $display->content['new-51e23e76-ceeb-454f-bc91-1595b356cbba'] = $pane;
  $display->panels['main_bottom'][1] = 'new-51e23e76-ceeb-454f-bc91-1595b356cbba';
   /* node_view__panel_context_27aa23c0-ee31-4772-aa8d-c63cd424de71 61f8d060 */ $pane = new stdClass();
   /* node_view__panel_context_27aa23c0-ee31-4772-aa8d-c63cd424de71 61f8d060 */ $pane->pid = 'new-61f8d060-e730-423b-a797-ee936c238b17';
   /* node_view__panel_context_27aa23c0-ee31-4772-aa8d-c63cd424de71 61f8d060 */ $pane->panel = 'main_bottom';
   /* node_view__panel_context_27aa23c0-ee31-4772-aa8d-c63cd424de71 61f8d060 */ $pane->type = 'node_body';
   /* node_view__panel_context_27aa23c0-ee31-4772-aa8d-c63cd424de71 61f8d060 */ $pane->subtype = 'node_body';
   /* node_view__panel_context_27aa23c0-ee31-4772-aa8d-c63cd424de71 61f8d060 */ $pane->shown = TRUE;
   /* node_view__panel_context_27aa23c0-ee31-4772-aa8d-c63cd424de71 61f8d060 */ $pane->access = array();
   /* node_view__panel_context_27aa23c0-ee31-4772-aa8d-c63cd424de71 61f8d060 */ $pane->configuration = array(
   /* node_view__panel_context_27aa23c0-ee31-4772-aa8d-c63cd424de71 61f8d060 */   'context' => 'argument_entity_id:node_1',
   /* node_view__panel_context_27aa23c0-ee31-4772-aa8d-c63cd424de71 61f8d060 */   'override_title' => 1,
   /* node_view__panel_context_27aa23c0-ee31-4772-aa8d-c63cd424de71 61f8d060 */   'override_title_text' => '',
   /* node_view__panel_context_27aa23c0-ee31-4772-aa8d-c63cd424de71 61f8d060 */ );
   /* node_view__panel_context_27aa23c0-ee31-4772-aa8d-c63cd424de71 61f8d060 */ $pane->cache = array();
   /* node_view__panel_context_27aa23c0-ee31-4772-aa8d-c63cd424de71 61f8d060 */ $pane->style = array(
   /* node_view__panel_context_27aa23c0-ee31-4772-aa8d-c63cd424de71 61f8d060 */   'settings' => NULL,
   /* node_view__panel_context_27aa23c0-ee31-4772-aa8d-c63cd424de71 61f8d060 */ );
   /* node_view__panel_context_27aa23c0-ee31-4772-aa8d-c63cd424de71 61f8d060 */ $pane->css = array();
   /* node_view__panel_context_27aa23c0-ee31-4772-aa8d-c63cd424de71 61f8d060 */ $pane->extras = array();
   /* node_view__panel_context_27aa23c0-ee31-4772-aa8d-c63cd424de71 61f8d060 */ $pane->position = 2;
   /* node_view__panel_context_27aa23c0-ee31-4772-aa8d-c63cd424de71 61f8d060 */ $pane->locks = array();
   /* node_view__panel_context_27aa23c0-ee31-4772-aa8d-c63cd424de71 61f8d060 */ $pane->uuid = '61f8d060-e730-423b-a797-ee936c238b17';
  $display->content['new-61f8d060-e730-423b-a797-ee936c238b17'] = $pane;
  $display->panels['main_bottom'][2] = 'new-61f8d060-e730-423b-a797-ee936c238b17';
   /* node_view__panel_context_27aa23c0-ee31-4772-aa8d-c63cd424de71 4012f818 */ $pane = new stdClass();
   /* node_view__panel_context_27aa23c0-ee31-4772-aa8d-c63cd424de71 4012f818 */ $pane->pid = 'new-4012f818-100b-45d8-82a5-c00e66ef4dc3';
   /* node_view__panel_context_27aa23c0-ee31-4772-aa8d-c63cd424de71 4012f818 */ $pane->panel = 'main_bottom';
   /* node_view__panel_context_27aa23c0-ee31-4772-aa8d-c63cd424de71 4012f818 */ $pane->type = 'block';
   /* node_view__panel_context_27aa23c0-ee31-4772-aa8d-c63cd424de71 4012f818 */ $pane->subtype = 'gn2_file_download-associated_media';
   /* node_view__panel_context_27aa23c0-ee31-4772-aa8d-c63cd424de71 4012f818 */ $pane->shown = TRUE;
   /* node_view__panel_context_27aa23c0-ee31-4772-aa8d-c63cd424de71 4012f818 */ $pane->access = array();
   /* node_view__panel_context_27aa23c0-ee31-4772-aa8d-c63cd424de71 4012f818 */ $pane->configuration = array(
   /* node_view__panel_context_27aa23c0-ee31-4772-aa8d-c63cd424de71 4012f818 */   'override_title' => 1,
   /* node_view__panel_context_27aa23c0-ee31-4772-aa8d-c63cd424de71 4012f818 */   'override_title_text' => 'Associated Files',
   /* node_view__panel_context_27aa23c0-ee31-4772-aa8d-c63cd424de71 4012f818 */   'override_title_heading' => 'h3',
   /* node_view__panel_context_27aa23c0-ee31-4772-aa8d-c63cd424de71 4012f818 */ );
   /* node_view__panel_context_27aa23c0-ee31-4772-aa8d-c63cd424de71 4012f818 */ $pane->cache = array();
   /* node_view__panel_context_27aa23c0-ee31-4772-aa8d-c63cd424de71 4012f818 */ $pane->style = array(
   /* node_view__panel_context_27aa23c0-ee31-4772-aa8d-c63cd424de71 4012f818 */   'style' => 'clean_element',
   /* node_view__panel_context_27aa23c0-ee31-4772-aa8d-c63cd424de71 4012f818 */   'settings' => array(
   /* node_view__panel_context_27aa23c0-ee31-4772-aa8d-c63cd424de71 4012f818 */     'clean_markup' => array(
   /* node_view__panel_context_27aa23c0-ee31-4772-aa8d-c63cd424de71 4012f818 */       'pane_wrapper' => 'div',
   /* node_view__panel_context_27aa23c0-ee31-4772-aa8d-c63cd424de71 4012f818 */       'additional_pane_classes' => 'panel-pane sidebar-subheading file-download',
   /* node_view__panel_context_27aa23c0-ee31-4772-aa8d-c63cd424de71 4012f818 */       'additional_pane_attributes' => '',
   /* node_view__panel_context_27aa23c0-ee31-4772-aa8d-c63cd424de71 4012f818 */       'enable_inner_div' => 0,
   /* node_view__panel_context_27aa23c0-ee31-4772-aa8d-c63cd424de71 4012f818 */       'title_wrapper' => 'h3',
   /* node_view__panel_context_27aa23c0-ee31-4772-aa8d-c63cd424de71 4012f818 */       'title_hide' => 0,
   /* node_view__panel_context_27aa23c0-ee31-4772-aa8d-c63cd424de71 4012f818 */       'content_wrapper' => 'none',
   /* node_view__panel_context_27aa23c0-ee31-4772-aa8d-c63cd424de71 4012f818 */     ),
   /* node_view__panel_context_27aa23c0-ee31-4772-aa8d-c63cd424de71 4012f818 */   ),
   /* node_view__panel_context_27aa23c0-ee31-4772-aa8d-c63cd424de71 4012f818 */ );
   /* node_view__panel_context_27aa23c0-ee31-4772-aa8d-c63cd424de71 4012f818 */ $pane->css = array(
   /* node_view__panel_context_27aa23c0-ee31-4772-aa8d-c63cd424de71 4012f818 */   'css_id' => '',
   /* node_view__panel_context_27aa23c0-ee31-4772-aa8d-c63cd424de71 4012f818 */   'css_class' => '',
   /* node_view__panel_context_27aa23c0-ee31-4772-aa8d-c63cd424de71 4012f818 */ );
   /* node_view__panel_context_27aa23c0-ee31-4772-aa8d-c63cd424de71 4012f818 */ $pane->extras = array();
   /* node_view__panel_context_27aa23c0-ee31-4772-aa8d-c63cd424de71 4012f818 */ $pane->position = 3;
   /* node_view__panel_context_27aa23c0-ee31-4772-aa8d-c63cd424de71 4012f818 */ $pane->locks = array();
   /* node_view__panel_context_27aa23c0-ee31-4772-aa8d-c63cd424de71 4012f818 */ $pane->uuid = '4012f818-100b-45d8-82a5-c00e66ef4dc3';
  $display->content['new-4012f818-100b-45d8-82a5-c00e66ef4dc3'] = $pane;
  $display->panels['main_bottom'][3] = 'new-4012f818-100b-45d8-82a5-c00e66ef4dc3';
   /* node_view__panel_context_27aa23c0-ee31-4772-aa8d-c63cd424de71 e8a8f643 */ $pane = new stdClass();
   /* node_view__panel_context_27aa23c0-ee31-4772-aa8d-c63cd424de71 e8a8f643 */ $pane->pid = 'new-e8a8f643-06d1-43ef-b7b5-fb897a84f7da';
   /* node_view__panel_context_27aa23c0-ee31-4772-aa8d-c63cd424de71 e8a8f643 */ $pane->panel = 'main_bottom';
   /* node_view__panel_context_27aa23c0-ee31-4772-aa8d-c63cd424de71 e8a8f643 */ $pane->type = 'views_panes';
   /* node_view__panel_context_27aa23c0-ee31-4772-aa8d-c63cd424de71 e8a8f643 */ $pane->subtype = 'news_announcements_posts-panel_pane_21';
   /* node_view__panel_context_27aa23c0-ee31-4772-aa8d-c63cd424de71 e8a8f643 */ $pane->shown = TRUE;
   /* node_view__panel_context_27aa23c0-ee31-4772-aa8d-c63cd424de71 e8a8f643 */ $pane->access = array();
   /* node_view__panel_context_27aa23c0-ee31-4772-aa8d-c63cd424de71 e8a8f643 */ $pane->configuration = array(
   /* node_view__panel_context_27aa23c0-ee31-4772-aa8d-c63cd424de71 e8a8f643 */   'override_title' => 1,
   /* node_view__panel_context_27aa23c0-ee31-4772-aa8d-c63cd424de71 e8a8f643 */   'override_title_text' => '',
   /* node_view__panel_context_27aa23c0-ee31-4772-aa8d-c63cd424de71 e8a8f643 */   'override_title_heading' => 'h2',
   /* node_view__panel_context_27aa23c0-ee31-4772-aa8d-c63cd424de71 e8a8f643 */ );
   /* node_view__panel_context_27aa23c0-ee31-4772-aa8d-c63cd424de71 e8a8f643 */ $pane->cache = array();
   /* node_view__panel_context_27aa23c0-ee31-4772-aa8d-c63cd424de71 e8a8f643 */ $pane->style = array(
   /* node_view__panel_context_27aa23c0-ee31-4772-aa8d-c63cd424de71 e8a8f643 */   'settings' => NULL,
   /* node_view__panel_context_27aa23c0-ee31-4772-aa8d-c63cd424de71 e8a8f643 */ );
   /* node_view__panel_context_27aa23c0-ee31-4772-aa8d-c63cd424de71 e8a8f643 */ $pane->css = array();
   /* node_view__panel_context_27aa23c0-ee31-4772-aa8d-c63cd424de71 e8a8f643 */ $pane->extras = array();
   /* node_view__panel_context_27aa23c0-ee31-4772-aa8d-c63cd424de71 e8a8f643 */ $pane->position = 4;
   /* node_view__panel_context_27aa23c0-ee31-4772-aa8d-c63cd424de71 e8a8f643 */ $pane->locks = array();
   /* node_view__panel_context_27aa23c0-ee31-4772-aa8d-c63cd424de71 e8a8f643 */ $pane->uuid = 'e8a8f643-06d1-43ef-b7b5-fb897a84f7da';
  $display->content['new-e8a8f643-06d1-43ef-b7b5-fb897a84f7da'] = $pane;
  $display->panels['main_bottom'][4] = 'new-e8a8f643-06d1-43ef-b7b5-fb897a84f7da';
   /* node_view__panel_context_27aa23c0-ee31-4772-aa8d-c63cd424de71 a3d18c72 */ $pane = new stdClass();
   /* node_view__panel_context_27aa23c0-ee31-4772-aa8d-c63cd424de71 a3d18c72 */ $pane->pid = 'new-a3d18c72-195c-4304-a789-be793656e289';
   /* node_view__panel_context_27aa23c0-ee31-4772-aa8d-c63cd424de71 a3d18c72 */ $pane->panel = 'main_bottom';
   /* node_view__panel_context_27aa23c0-ee31-4772-aa8d-c63cd424de71 a3d18c72 */ $pane->type = 'node_comment_form';
   /* node_view__panel_context_27aa23c0-ee31-4772-aa8d-c63cd424de71 a3d18c72 */ $pane->subtype = 'node_comment_form';
   /* node_view__panel_context_27aa23c0-ee31-4772-aa8d-c63cd424de71 a3d18c72 */ $pane->shown = TRUE;
   /* node_view__panel_context_27aa23c0-ee31-4772-aa8d-c63cd424de71 a3d18c72 */ $pane->access = array();
   /* node_view__panel_context_27aa23c0-ee31-4772-aa8d-c63cd424de71 a3d18c72 */ $pane->configuration = array(
   /* node_view__panel_context_27aa23c0-ee31-4772-aa8d-c63cd424de71 a3d18c72 */   'anon_links' => 0,
   /* node_view__panel_context_27aa23c0-ee31-4772-aa8d-c63cd424de71 a3d18c72 */   'context' => 'argument_entity_id:node_1',
   /* node_view__panel_context_27aa23c0-ee31-4772-aa8d-c63cd424de71 a3d18c72 */   'override_title' => 1,
   /* node_view__panel_context_27aa23c0-ee31-4772-aa8d-c63cd424de71 a3d18c72 */   'override_title_text' => 'Join the Conversation',
   /* node_view__panel_context_27aa23c0-ee31-4772-aa8d-c63cd424de71 a3d18c72 */   'override_title_heading' => 'h3',
   /* node_view__panel_context_27aa23c0-ee31-4772-aa8d-c63cd424de71 a3d18c72 */ );
   /* node_view__panel_context_27aa23c0-ee31-4772-aa8d-c63cd424de71 a3d18c72 */ $pane->cache = array();
   /* node_view__panel_context_27aa23c0-ee31-4772-aa8d-c63cd424de71 a3d18c72 */ $pane->style = array(
   /* node_view__panel_context_27aa23c0-ee31-4772-aa8d-c63cd424de71 a3d18c72 */   'settings' => array(
   /* node_view__panel_context_27aa23c0-ee31-4772-aa8d-c63cd424de71 a3d18c72 */     'clean_markup' => array(
   /* node_view__panel_context_27aa23c0-ee31-4772-aa8d-c63cd424de71 a3d18c72 */       'pane_wrapper' => 'div',
   /* node_view__panel_context_27aa23c0-ee31-4772-aa8d-c63cd424de71 a3d18c72 */       'additional_pane_classes' => 'panel-pane sidebar-subheading',
   /* node_view__panel_context_27aa23c0-ee31-4772-aa8d-c63cd424de71 a3d18c72 */       'additional_pane_attributes' => '',
   /* node_view__panel_context_27aa23c0-ee31-4772-aa8d-c63cd424de71 a3d18c72 */       'enable_inner_div' => 0,
   /* node_view__panel_context_27aa23c0-ee31-4772-aa8d-c63cd424de71 a3d18c72 */       'title_wrapper' => 'h3',
   /* node_view__panel_context_27aa23c0-ee31-4772-aa8d-c63cd424de71 a3d18c72 */       'title_hide' => 0,
   /* node_view__panel_context_27aa23c0-ee31-4772-aa8d-c63cd424de71 a3d18c72 */       'content_wrapper' => 'none',
   /* node_view__panel_context_27aa23c0-ee31-4772-aa8d-c63cd424de71 a3d18c72 */     ),
   /* node_view__panel_context_27aa23c0-ee31-4772-aa8d-c63cd424de71 a3d18c72 */   ),
   /* node_view__panel_context_27aa23c0-ee31-4772-aa8d-c63cd424de71 a3d18c72 */   'style' => 'clean_element',
   /* node_view__panel_context_27aa23c0-ee31-4772-aa8d-c63cd424de71 a3d18c72 */ );
   /* node_view__panel_context_27aa23c0-ee31-4772-aa8d-c63cd424de71 a3d18c72 */ $pane->css = array();
   /* node_view__panel_context_27aa23c0-ee31-4772-aa8d-c63cd424de71 a3d18c72 */ $pane->extras = array();
   /* node_view__panel_context_27aa23c0-ee31-4772-aa8d-c63cd424de71 a3d18c72 */ $pane->position = 5;
   /* node_view__panel_context_27aa23c0-ee31-4772-aa8d-c63cd424de71 a3d18c72 */ $pane->locks = array();
   /* node_view__panel_context_27aa23c0-ee31-4772-aa8d-c63cd424de71 a3d18c72 */ $pane->uuid = 'a3d18c72-195c-4304-a789-be793656e289';
  $display->content['new-a3d18c72-195c-4304-a789-be793656e289'] = $pane;
  $display->panels['main_bottom'][5] = 'new-a3d18c72-195c-4304-a789-be793656e289';
   /* node_view__panel_context_27aa23c0-ee31-4772-aa8d-c63cd424de71 3e6a4f16 */ $pane = new stdClass();
   /* node_view__panel_context_27aa23c0-ee31-4772-aa8d-c63cd424de71 3e6a4f16 */ $pane->pid = 'new-3e6a4f16-0620-4cfe-b393-7c1cdd6e33c4';
   /* node_view__panel_context_27aa23c0-ee31-4772-aa8d-c63cd424de71 3e6a4f16 */ $pane->panel = 'main_bottom';
   /* node_view__panel_context_27aa23c0-ee31-4772-aa8d-c63cd424de71 3e6a4f16 */ $pane->type = 'node_comments';
   /* node_view__panel_context_27aa23c0-ee31-4772-aa8d-c63cd424de71 3e6a4f16 */ $pane->subtype = 'node_comments';
   /* node_view__panel_context_27aa23c0-ee31-4772-aa8d-c63cd424de71 3e6a4f16 */ $pane->shown = TRUE;
   /* node_view__panel_context_27aa23c0-ee31-4772-aa8d-c63cd424de71 3e6a4f16 */ $pane->access = array();
   /* node_view__panel_context_27aa23c0-ee31-4772-aa8d-c63cd424de71 3e6a4f16 */ $pane->configuration = array(
   /* node_view__panel_context_27aa23c0-ee31-4772-aa8d-c63cd424de71 3e6a4f16 */   'mode' => '1',
   /* node_view__panel_context_27aa23c0-ee31-4772-aa8d-c63cd424de71 3e6a4f16 */   'comments_per_page' => '10',
   /* node_view__panel_context_27aa23c0-ee31-4772-aa8d-c63cd424de71 3e6a4f16 */   'context' => 'argument_entity_id:node_1',
   /* node_view__panel_context_27aa23c0-ee31-4772-aa8d-c63cd424de71 3e6a4f16 */   'override_title' => 1,
   /* node_view__panel_context_27aa23c0-ee31-4772-aa8d-c63cd424de71 3e6a4f16 */   'override_title_text' => '',
   /* node_view__panel_context_27aa23c0-ee31-4772-aa8d-c63cd424de71 3e6a4f16 */   'override_title_heading' => 'h2',
   /* node_view__panel_context_27aa23c0-ee31-4772-aa8d-c63cd424de71 3e6a4f16 */ );
   /* node_view__panel_context_27aa23c0-ee31-4772-aa8d-c63cd424de71 3e6a4f16 */ $pane->cache = array();
   /* node_view__panel_context_27aa23c0-ee31-4772-aa8d-c63cd424de71 3e6a4f16 */ $pane->style = array(
   /* node_view__panel_context_27aa23c0-ee31-4772-aa8d-c63cd424de71 3e6a4f16 */   'settings' => array(
   /* node_view__panel_context_27aa23c0-ee31-4772-aa8d-c63cd424de71 3e6a4f16 */     'clean_markup' => array(
   /* node_view__panel_context_27aa23c0-ee31-4772-aa8d-c63cd424de71 3e6a4f16 */       'pane_wrapper' => 'div',
   /* node_view__panel_context_27aa23c0-ee31-4772-aa8d-c63cd424de71 3e6a4f16 */       'additional_pane_classes' => 'panel-pane',
   /* node_view__panel_context_27aa23c0-ee31-4772-aa8d-c63cd424de71 3e6a4f16 */       'additional_pane_attributes' => '',
   /* node_view__panel_context_27aa23c0-ee31-4772-aa8d-c63cd424de71 3e6a4f16 */       'enable_inner_div' => 0,
   /* node_view__panel_context_27aa23c0-ee31-4772-aa8d-c63cd424de71 3e6a4f16 */       'title_wrapper' => 'h3',
   /* node_view__panel_context_27aa23c0-ee31-4772-aa8d-c63cd424de71 3e6a4f16 */       'title_hide' => 0,
   /* node_view__panel_context_27aa23c0-ee31-4772-aa8d-c63cd424de71 3e6a4f16 */       'content_wrapper' => 'none',
   /* node_view__panel_context_27aa23c0-ee31-4772-aa8d-c63cd424de71 3e6a4f16 */     ),
   /* node_view__panel_context_27aa23c0-ee31-4772-aa8d-c63cd424de71 3e6a4f16 */   ),
   /* node_view__panel_context_27aa23c0-ee31-4772-aa8d-c63cd424de71 3e6a4f16 */   'style' => 'clean_element',
   /* node_view__panel_context_27aa23c0-ee31-4772-aa8d-c63cd424de71 3e6a4f16 */ );
   /* node_view__panel_context_27aa23c0-ee31-4772-aa8d-c63cd424de71 3e6a4f16 */ $pane->css = array();
   /* node_view__panel_context_27aa23c0-ee31-4772-aa8d-c63cd424de71 3e6a4f16 */ $pane->extras = array();
   /* node_view__panel_context_27aa23c0-ee31-4772-aa8d-c63cd424de71 3e6a4f16 */ $pane->position = 6;
   /* node_view__panel_context_27aa23c0-ee31-4772-aa8d-c63cd424de71 3e6a4f16 */ $pane->locks = array();
   /* node_view__panel_context_27aa23c0-ee31-4772-aa8d-c63cd424de71 3e6a4f16 */ $pane->uuid = '3e6a4f16-0620-4cfe-b393-7c1cdd6e33c4';
  $display->content['new-3e6a4f16-0620-4cfe-b393-7c1cdd6e33c4'] = $pane;
  $display->panels['main_bottom'][6] = 'new-3e6a4f16-0620-4cfe-b393-7c1cdd6e33c4';
   /* node_view__panel_context_27aa23c0-ee31-4772-aa8d-c63cd424de71 d6f9c59b */ $pane = new stdClass();
   /* node_view__panel_context_27aa23c0-ee31-4772-aa8d-c63cd424de71 d6f9c59b */ $pane->pid = 'new-d6f9c59b-1f6a-43c2-b0d5-bbfdab51dee0';
   /* node_view__panel_context_27aa23c0-ee31-4772-aa8d-c63cd424de71 d6f9c59b */ $pane->panel = 'sidebar';
   /* node_view__panel_context_27aa23c0-ee31-4772-aa8d-c63cd424de71 d6f9c59b */ $pane->type = 'block';
   /* node_view__panel_context_27aa23c0-ee31-4772-aa8d-c63cd424de71 d6f9c59b */ $pane->subtype = 'gn2_manager_access-gn2_manager_manage';
   /* node_view__panel_context_27aa23c0-ee31-4772-aa8d-c63cd424de71 d6f9c59b */ $pane->shown = TRUE;
   /* node_view__panel_context_27aa23c0-ee31-4772-aa8d-c63cd424de71 d6f9c59b */ $pane->access = array();
   /* node_view__panel_context_27aa23c0-ee31-4772-aa8d-c63cd424de71 d6f9c59b */ $pane->configuration = array(
   /* node_view__panel_context_27aa23c0-ee31-4772-aa8d-c63cd424de71 d6f9c59b */   'override_title' => 0,
   /* node_view__panel_context_27aa23c0-ee31-4772-aa8d-c63cd424de71 d6f9c59b */   'override_title_text' => '',
   /* node_view__panel_context_27aa23c0-ee31-4772-aa8d-c63cd424de71 d6f9c59b */   'override_title_heading' => 'h2',
   /* node_view__panel_context_27aa23c0-ee31-4772-aa8d-c63cd424de71 d6f9c59b */ );
   /* node_view__panel_context_27aa23c0-ee31-4772-aa8d-c63cd424de71 d6f9c59b */ $pane->cache = array();
   /* node_view__panel_context_27aa23c0-ee31-4772-aa8d-c63cd424de71 d6f9c59b */ $pane->style = array(
   /* node_view__panel_context_27aa23c0-ee31-4772-aa8d-c63cd424de71 d6f9c59b */   'settings' => NULL,
   /* node_view__panel_context_27aa23c0-ee31-4772-aa8d-c63cd424de71 d6f9c59b */ );
   /* node_view__panel_context_27aa23c0-ee31-4772-aa8d-c63cd424de71 d6f9c59b */ $pane->css = array();
   /* node_view__panel_context_27aa23c0-ee31-4772-aa8d-c63cd424de71 d6f9c59b */ $pane->extras = array();
   /* node_view__panel_context_27aa23c0-ee31-4772-aa8d-c63cd424de71 d6f9c59b */ $pane->position = 0;
   /* node_view__panel_context_27aa23c0-ee31-4772-aa8d-c63cd424de71 d6f9c59b */ $pane->locks = array();
   /* node_view__panel_context_27aa23c0-ee31-4772-aa8d-c63cd424de71 d6f9c59b */ $pane->uuid = 'd6f9c59b-1f6a-43c2-b0d5-bbfdab51dee0';
  $display->content['new-d6f9c59b-1f6a-43c2-b0d5-bbfdab51dee0'] = $pane;
  $display->panels['sidebar'][0] = 'new-d6f9c59b-1f6a-43c2-b0d5-bbfdab51dee0';
   /* node_view__panel_context_27aa23c0-ee31-4772-aa8d-c63cd424de71 79bf03f6 */ $pane = new stdClass();
   /* node_view__panel_context_27aa23c0-ee31-4772-aa8d-c63cd424de71 79bf03f6 */ $pane->pid = 'new-79bf03f6-dab3-429b-a485-cd7a11253369';
   /* node_view__panel_context_27aa23c0-ee31-4772-aa8d-c63cd424de71 79bf03f6 */ $pane->panel = 'top';
   /* node_view__panel_context_27aa23c0-ee31-4772-aa8d-c63cd424de71 79bf03f6 */ $pane->type = 'views_panes';
   /* node_view__panel_context_27aa23c0-ee31-4772-aa8d-c63cd424de71 79bf03f6 */ $pane->subtype = 'news_announcements_posts-panel_pane_3';
   /* node_view__panel_context_27aa23c0-ee31-4772-aa8d-c63cd424de71 79bf03f6 */ $pane->shown = TRUE;
   /* node_view__panel_context_27aa23c0-ee31-4772-aa8d-c63cd424de71 79bf03f6 */ $pane->access = array();
   /* node_view__panel_context_27aa23c0-ee31-4772-aa8d-c63cd424de71 79bf03f6 */ $pane->configuration = array();
   /* node_view__panel_context_27aa23c0-ee31-4772-aa8d-c63cd424de71 79bf03f6 */ $pane->cache = array();
   /* node_view__panel_context_27aa23c0-ee31-4772-aa8d-c63cd424de71 79bf03f6 */ $pane->style = array(
   /* node_view__panel_context_27aa23c0-ee31-4772-aa8d-c63cd424de71 79bf03f6 */   'settings' => NULL,
   /* node_view__panel_context_27aa23c0-ee31-4772-aa8d-c63cd424de71 79bf03f6 */ );
   /* node_view__panel_context_27aa23c0-ee31-4772-aa8d-c63cd424de71 79bf03f6 */ $pane->css = array();
   /* node_view__panel_context_27aa23c0-ee31-4772-aa8d-c63cd424de71 79bf03f6 */ $pane->extras = array();
   /* node_view__panel_context_27aa23c0-ee31-4772-aa8d-c63cd424de71 79bf03f6 */ $pane->position = 0;
   /* node_view__panel_context_27aa23c0-ee31-4772-aa8d-c63cd424de71 79bf03f6 */ $pane->locks = array();
   /* node_view__panel_context_27aa23c0-ee31-4772-aa8d-c63cd424de71 79bf03f6 */ $pane->uuid = '79bf03f6-dab3-429b-a485-cd7a11253369';
  $display->content['new-79bf03f6-dab3-429b-a485-cd7a11253369'] = $pane;
  $display->panels['top'][0] = 'new-79bf03f6-dab3-429b-a485-cd7a11253369';
   /* node_view__panel_context_27aa23c0-ee31-4772-aa8d-c63cd424de71 e3290b78 */ $pane = new stdClass();
   /* node_view__panel_context_27aa23c0-ee31-4772-aa8d-c63cd424de71 e3290b78 */ $pane->pid = 'new-e3290b78-b89e-445c-874c-250006121652';
   /* node_view__panel_context_27aa23c0-ee31-4772-aa8d-c63cd424de71 e3290b78 */ $pane->panel = 'top';
   /* node_view__panel_context_27aa23c0-ee31-4772-aa8d-c63cd424de71 e3290b78 */ $pane->type = 'custom';
   /* node_view__panel_context_27aa23c0-ee31-4772-aa8d-c63cd424de71 e3290b78 */ $pane->subtype = 'unpublished_node_block';
   /* node_view__panel_context_27aa23c0-ee31-4772-aa8d-c63cd424de71 e3290b78 */ $pane->shown = TRUE;
   /* node_view__panel_context_27aa23c0-ee31-4772-aa8d-c63cd424de71 e3290b78 */ $pane->access = array(
   /* node_view__panel_context_27aa23c0-ee31-4772-aa8d-c63cd424de71 e3290b78 */   'plugins' => array(
   /* node_view__panel_context_27aa23c0-ee31-4772-aa8d-c63cd424de71 e3290b78 */     0 => array(
   /* node_view__panel_context_27aa23c0-ee31-4772-aa8d-c63cd424de71 e3290b78 */       'name' => 'node_status',
   /* node_view__panel_context_27aa23c0-ee31-4772-aa8d-c63cd424de71 e3290b78 */       'settings' => NULL,
   /* node_view__panel_context_27aa23c0-ee31-4772-aa8d-c63cd424de71 e3290b78 */       'context' => 'argument_entity_id:node_1',
   /* node_view__panel_context_27aa23c0-ee31-4772-aa8d-c63cd424de71 e3290b78 */       'not' => TRUE,
   /* node_view__panel_context_27aa23c0-ee31-4772-aa8d-c63cd424de71 e3290b78 */     ),
   /* node_view__panel_context_27aa23c0-ee31-4772-aa8d-c63cd424de71 e3290b78 */   ),
   /* node_view__panel_context_27aa23c0-ee31-4772-aa8d-c63cd424de71 e3290b78 */ );
   /* node_view__panel_context_27aa23c0-ee31-4772-aa8d-c63cd424de71 e3290b78 */ $pane->configuration = array(
   /* node_view__panel_context_27aa23c0-ee31-4772-aa8d-c63cd424de71 e3290b78 */   'admin_title' => '',
   /* node_view__panel_context_27aa23c0-ee31-4772-aa8d-c63cd424de71 e3290b78 */   'title' => '',
   /* node_view__panel_context_27aa23c0-ee31-4772-aa8d-c63cd424de71 e3290b78 */   'body' => '',
   /* node_view__panel_context_27aa23c0-ee31-4772-aa8d-c63cd424de71 e3290b78 */   'format' => 'filtered_html',
   /* node_view__panel_context_27aa23c0-ee31-4772-aa8d-c63cd424de71 e3290b78 */   'substitute' => TRUE,
   /* node_view__panel_context_27aa23c0-ee31-4772-aa8d-c63cd424de71 e3290b78 */ );
   /* node_view__panel_context_27aa23c0-ee31-4772-aa8d-c63cd424de71 e3290b78 */ $pane->cache = array();
   /* node_view__panel_context_27aa23c0-ee31-4772-aa8d-c63cd424de71 e3290b78 */ $pane->style = array(
   /* node_view__panel_context_27aa23c0-ee31-4772-aa8d-c63cd424de71 e3290b78 */   'settings' => NULL,
   /* node_view__panel_context_27aa23c0-ee31-4772-aa8d-c63cd424de71 e3290b78 */ );
   /* node_view__panel_context_27aa23c0-ee31-4772-aa8d-c63cd424de71 e3290b78 */ $pane->css = array();
   /* node_view__panel_context_27aa23c0-ee31-4772-aa8d-c63cd424de71 e3290b78 */ $pane->extras = array();
   /* node_view__panel_context_27aa23c0-ee31-4772-aa8d-c63cd424de71 e3290b78 */ $pane->position = 1;
   /* node_view__panel_context_27aa23c0-ee31-4772-aa8d-c63cd424de71 e3290b78 */ $pane->locks = array();
   /* node_view__panel_context_27aa23c0-ee31-4772-aa8d-c63cd424de71 e3290b78 */ $pane->uuid = 'e3290b78-b89e-445c-874c-250006121652';
  $display->content['new-e3290b78-b89e-445c-874c-250006121652'] = $pane;
  $display->panels['top'][1] = 'new-e3290b78-b89e-445c-874c-250006121652';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8'] = $handler;

   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 */ $handler = new stdClass();
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 */ $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 */ $handler->api_version = 1;
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 */ $handler->name = 'node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827';
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 */ $handler->task = 'node_view';
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 */ $handler->subtask = '';
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 */ $handler->handler = 'panel_context';
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 */ $handler->weight = 0;
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 */ $handler->conf = array(
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 */   'title' => 'Publication Node',
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 */   'no_blocks' => 0,
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 */   'pipeline' => 'standard',
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 */   'body_classes_to_remove' => '',
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 */   'body_classes_to_add' => 'news-publication-page',
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 */   'css_id' => '',
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 */   'css' => '',
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 */   'contexts' => array(),
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 */   'relationships' => array(),
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 */   'access' => array(
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 */     'plugins' => array(
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 */       0 => array(
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 */         'name' => 'node_type',
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 */         'settings' => array(
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 */           'type' => array(
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 */             'publication' => 'publication',
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 */           ),
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 */         ),
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 */         'context' => 'argument_entity_id:node_1',
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 */         'not' => FALSE,
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 */       ),
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 */     ),
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 */     'logic' => 'and',
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 */   ),
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 */ );
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 2b92583a */ $display = new panels_display();
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 2b92583a */ $display->layout = 'gn2_2colstackedflipped';
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 2b92583a */ $display->layout_settings = array();
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 2b92583a */ $display->panel_settings = array(
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 2b92583a */   'style_settings' => array(
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 2b92583a */     'default' => NULL,
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 2b92583a */     'contentmain' => NULL,
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 2b92583a */     'header' => NULL,
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 2b92583a */     'main_top' => NULL,
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 2b92583a */     'footer' => NULL,
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 2b92583a */     'homepage_layout__top__left' => NULL,
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 2b92583a */     'homepage_layout__top__right' => NULL,
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 2b92583a */     'homepage_layout__search' => NULL,
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 2b92583a */     'homepage_layout__main' => NULL,
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 2b92583a */     'top' => NULL,
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 2b92583a */     'sidebar' => NULL,
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 2b92583a */     'main_bottom' => NULL,
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 2b92583a */   ),
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 2b92583a */   'main_bottom' => array(
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 2b92583a */     'style' => 'default',
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 2b92583a */   ),
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 2b92583a */   'sidebar' => array(
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 2b92583a */     'style' => 'default',
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 2b92583a */   ),
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 2b92583a */   'top' => array(
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 2b92583a */     'style' => 'default',
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 2b92583a */   ),
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 2b92583a */ );
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 2b92583a */ $display->cache = array();
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 2b92583a */ $display->title = '%node:title';
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 2b92583a */ $display->uuid = '2b92583a-ea58-48c8-86e3-23545720acdf';
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 2b92583a */ $display->storage_type = 'page_manager';
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 2b92583a */ $display->storage_id = 'node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827';
  $display->content = array();
  $display->panels = array();
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 21195cce */ $pane = new stdClass();
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 21195cce */ $pane->pid = 'new-21195cce-e157-4e49-9a7e-bb47109df63a';
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 21195cce */ $pane->panel = 'main_bottom';
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 21195cce */ $pane->type = 'views_panes';
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 21195cce */ $pane->subtype = 'news_announcements_posts-panel_pane__publication_image_body';
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 21195cce */ $pane->shown = TRUE;
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 21195cce */ $pane->access = array();
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 21195cce */ $pane->configuration = array();
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 21195cce */ $pane->cache = array();
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 21195cce */ $pane->style = array(
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 21195cce */   'settings' => array(
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 21195cce */     'clean_markup' => array(
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 21195cce */       'pane_wrapper' => 'div',
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 21195cce */       'additional_pane_classes' => 'panel-pane',
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 21195cce */       'additional_pane_attributes' => '',
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 21195cce */       'enable_inner_div' => 0,
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 21195cce */       'title_wrapper' => 'h2',
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 21195cce */       'title_hide' => 0,
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 21195cce */       'content_wrapper' => 'none',
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 21195cce */     ),
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 21195cce */   ),
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 21195cce */   'style' => 'clean_element',
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 21195cce */ );
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 21195cce */ $pane->css = array();
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 21195cce */ $pane->extras = array();
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 21195cce */ $pane->position = 0;
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 21195cce */ $pane->locks = array();
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 21195cce */ $pane->uuid = '21195cce-e157-4e49-9a7e-bb47109df63a';
  $display->content['new-21195cce-e157-4e49-9a7e-bb47109df63a'] = $pane;
  $display->panels['main_bottom'][0] = 'new-21195cce-e157-4e49-9a7e-bb47109df63a';
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 7ce76f08 */ $pane = new stdClass();
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 7ce76f08 */ $pane->pid = 'new-7ce76f08-e396-4cc1-99c9-bced1aa28b1f';
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 7ce76f08 */ $pane->panel = 'main_bottom';
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 7ce76f08 */ $pane->type = 'views_panes';
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 7ce76f08 */ $pane->subtype = 'news_announcements_posts-panel_pane_17';
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 7ce76f08 */ $pane->shown = TRUE;
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 7ce76f08 */ $pane->access = array();
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 7ce76f08 */ $pane->configuration = array();
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 7ce76f08 */ $pane->cache = array();
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 7ce76f08 */ $pane->style = array(
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 7ce76f08 */   'settings' => NULL,
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 7ce76f08 */ );
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 7ce76f08 */ $pane->css = array();
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 7ce76f08 */ $pane->extras = array();
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 7ce76f08 */ $pane->position = 1;
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 7ce76f08 */ $pane->locks = array();
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 7ce76f08 */ $pane->uuid = '7ce76f08-e396-4cc1-99c9-bced1aa28b1f';
  $display->content['new-7ce76f08-e396-4cc1-99c9-bced1aa28b1f'] = $pane;
  $display->panels['main_bottom'][1] = 'new-7ce76f08-e396-4cc1-99c9-bced1aa28b1f';
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 7ceb98bf */ $pane = new stdClass();
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 7ceb98bf */ $pane->pid = 'new-7ceb98bf-d581-4463-8e7a-55bf88462dff';
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 7ceb98bf */ $pane->panel = 'main_bottom';
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 7ceb98bf */ $pane->type = 'rate_widget';
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 7ceb98bf */ $pane->subtype = 'rate_widget';
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 7ceb98bf */ $pane->shown = TRUE;
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 7ceb98bf */ $pane->access = array();
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 7ceb98bf */ $pane->configuration = array(
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 7ceb98bf */   'build_mode' => '1',
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 7ceb98bf */   'widget_name' => '2',
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 7ceb98bf */   'context' => 'argument_entity_id:node_1',
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 7ceb98bf */   'override_title' => 1,
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 7ceb98bf */   'override_title_text' => '',
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 7ceb98bf */   'override_title_heading' => 'h2',
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 7ceb98bf */ );
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 7ceb98bf */ $pane->cache = array();
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 7ceb98bf */ $pane->style = array(
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 7ceb98bf */   'settings' => NULL,
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 7ceb98bf */ );
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 7ceb98bf */ $pane->css = array();
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 7ceb98bf */ $pane->extras = array();
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 7ceb98bf */ $pane->position = 2;
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 7ceb98bf */ $pane->locks = array();
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 7ceb98bf */ $pane->uuid = '7ceb98bf-d581-4463-8e7a-55bf88462dff';
  $display->content['new-7ceb98bf-d581-4463-8e7a-55bf88462dff'] = $pane;
  $display->panels['main_bottom'][2] = 'new-7ceb98bf-d581-4463-8e7a-55bf88462dff';
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 f3496e5b */ $pane = new stdClass();
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 f3496e5b */ $pane->pid = 'new-f3496e5b-4f0a-4c7b-9d59-b014fc6e2ea7';
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 f3496e5b */ $pane->panel = 'main_bottom';
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 f3496e5b */ $pane->type = 'views_panes';
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 f3496e5b */ $pane->subtype = 'news_announcements_posts-panel_pane_13';
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 f3496e5b */ $pane->shown = TRUE;
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 f3496e5b */ $pane->access = array(
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 f3496e5b */   'plugins' => array(),
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 f3496e5b */ );
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 f3496e5b */ $pane->configuration = array();
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 f3496e5b */ $pane->cache = array();
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 f3496e5b */ $pane->style = array(
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 f3496e5b */   'settings' => array(
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 f3496e5b */     'clean_markup' => array(
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 f3496e5b */       'pane_wrapper' => 'div',
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 f3496e5b */       'additional_pane_classes' => 'panel-pane sidebar-subheading',
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 f3496e5b */       'additional_pane_attributes' => '',
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 f3496e5b */       'enable_inner_div' => 0,
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 f3496e5b */       'title_wrapper' => 'h3',
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 f3496e5b */       'title_hide' => 0,
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 f3496e5b */       'content_wrapper' => 'none',
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 f3496e5b */     ),
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 f3496e5b */   ),
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 f3496e5b */   'style' => 'clean_element',
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 f3496e5b */ );
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 f3496e5b */ $pane->css = array(
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 f3496e5b */   'css_id' => '',
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 f3496e5b */   'css_class' => 'mobile-show',
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 f3496e5b */ );
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 f3496e5b */ $pane->extras = array();
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 f3496e5b */ $pane->position = 3;
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 f3496e5b */ $pane->locks = array();
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 f3496e5b */ $pane->uuid = 'f3496e5b-4f0a-4c7b-9d59-b014fc6e2ea7';
  $display->content['new-f3496e5b-4f0a-4c7b-9d59-b014fc6e2ea7'] = $pane;
  $display->panels['main_bottom'][3] = 'new-f3496e5b-4f0a-4c7b-9d59-b014fc6e2ea7';
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 4012f818 */ $pane = new stdClass();
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 4012f818 */ $pane->pid = 'new-4012f818-100b-45d8-82a5-c00e66ef4dc3';
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 4012f818 */ $pane->panel = 'main_bottom';
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 4012f818 */ $pane->type = 'block';
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 4012f818 */ $pane->subtype = 'gn2_file_download-associated_media';
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 4012f818 */ $pane->shown = TRUE;
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 4012f818 */ $pane->access = array(
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 4012f818 */   'plugins' => array(),
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 4012f818 */ );
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 4012f818 */ $pane->configuration = array(
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 4012f818 */   'override_title' => 1,
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 4012f818 */   'override_title_text' => 'Associated Files',
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 4012f818 */   'override_title_heading' => 'h3',
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 4012f818 */ );
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 4012f818 */ $pane->cache = array();
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 4012f818 */ $pane->style = array(
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 4012f818 */   'style' => 'clean_element',
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 4012f818 */   'settings' => array(
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 4012f818 */     'clean_markup' => array(
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 4012f818 */       'pane_wrapper' => 'div',
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 4012f818 */       'additional_pane_classes' => 'panel-pane sidebar-subheading file-download',
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 4012f818 */       'additional_pane_attributes' => '',
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 4012f818 */       'enable_inner_div' => 0,
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 4012f818 */       'title_wrapper' => 'h3',
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 4012f818 */       'title_hide' => 0,
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 4012f818 */       'content_wrapper' => 'none',
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 4012f818 */     ),
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 4012f818 */   ),
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 4012f818 */ );
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 4012f818 */ $pane->css = array(
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 4012f818 */   'css_id' => '',
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 4012f818 */   'css_class' => 'mobile-hide',
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 4012f818 */ );
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 4012f818 */ $pane->extras = array();
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 4012f818 */ $pane->position = 4;
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 4012f818 */ $pane->locks = array();
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 4012f818 */ $pane->uuid = '4012f818-100b-45d8-82a5-c00e66ef4dc3';
  $display->content['new-4012f818-100b-45d8-82a5-c00e66ef4dc3'] = $pane;
  $display->panels['main_bottom'][4] = 'new-4012f818-100b-45d8-82a5-c00e66ef4dc3';
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 0b153545 */ $pane = new stdClass();
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 0b153545 */ $pane->pid = 'new-0b153545-2589-4ae0-b318-135196c71928';
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 0b153545 */ $pane->panel = 'main_bottom';
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 0b153545 */ $pane->type = 'views_panes';
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 0b153545 */ $pane->subtype = 'news_announcements_posts-panel_pane_21';
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 0b153545 */ $pane->shown = TRUE;
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 0b153545 */ $pane->access = array();
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 0b153545 */ $pane->configuration = array(
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 0b153545 */   'override_title' => 1,
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 0b153545 */   'override_title_text' => '',
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 0b153545 */   'override_title_heading' => 'h2',
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 0b153545 */ );
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 0b153545 */ $pane->cache = array();
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 0b153545 */ $pane->style = array(
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 0b153545 */   'settings' => NULL,
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 0b153545 */ );
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 0b153545 */ $pane->css = array();
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 0b153545 */ $pane->extras = array();
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 0b153545 */ $pane->position = 5;
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 0b153545 */ $pane->locks = array();
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 0b153545 */ $pane->uuid = '0b153545-2589-4ae0-b318-135196c71928';
  $display->content['new-0b153545-2589-4ae0-b318-135196c71928'] = $pane;
  $display->panels['main_bottom'][5] = 'new-0b153545-2589-4ae0-b318-135196c71928';
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 a3d18c72 */ $pane = new stdClass();
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 a3d18c72 */ $pane->pid = 'new-a3d18c72-195c-4304-a789-be793656e289';
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 a3d18c72 */ $pane->panel = 'main_bottom';
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 a3d18c72 */ $pane->type = 'node_comment_form';
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 a3d18c72 */ $pane->subtype = 'node_comment_form';
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 a3d18c72 */ $pane->shown = TRUE;
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 a3d18c72 */ $pane->access = array();
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 a3d18c72 */ $pane->configuration = array(
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 a3d18c72 */   'anon_links' => 0,
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 a3d18c72 */   'context' => 'argument_entity_id:node_1',
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 a3d18c72 */   'override_title' => 1,
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 a3d18c72 */   'override_title_text' => 'Join the Conversation',
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 a3d18c72 */   'override_title_heading' => 'h3',
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 a3d18c72 */ );
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 a3d18c72 */ $pane->cache = array();
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 a3d18c72 */ $pane->style = array(
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 a3d18c72 */   'settings' => array(
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 a3d18c72 */     'clean_markup' => array(
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 a3d18c72 */       'pane_wrapper' => 'div',
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 a3d18c72 */       'additional_pane_classes' => 'panel-pane sidebar-subheading',
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 a3d18c72 */       'additional_pane_attributes' => '',
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 a3d18c72 */       'enable_inner_div' => 0,
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 a3d18c72 */       'title_wrapper' => 'h3',
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 a3d18c72 */       'title_hide' => 0,
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 a3d18c72 */       'content_wrapper' => 'none',
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 a3d18c72 */     ),
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 a3d18c72 */   ),
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 a3d18c72 */   'style' => 'clean_element',
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 a3d18c72 */ );
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 a3d18c72 */ $pane->css = array();
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 a3d18c72 */ $pane->extras = array();
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 a3d18c72 */ $pane->position = 6;
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 a3d18c72 */ $pane->locks = array();
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 a3d18c72 */ $pane->uuid = 'a3d18c72-195c-4304-a789-be793656e289';
  $display->content['new-a3d18c72-195c-4304-a789-be793656e289'] = $pane;
  $display->panels['main_bottom'][6] = 'new-a3d18c72-195c-4304-a789-be793656e289';
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 3e6a4f16 */ $pane = new stdClass();
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 3e6a4f16 */ $pane->pid = 'new-3e6a4f16-0620-4cfe-b393-7c1cdd6e33c4';
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 3e6a4f16 */ $pane->panel = 'main_bottom';
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 3e6a4f16 */ $pane->type = 'node_comments';
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 3e6a4f16 */ $pane->subtype = 'node_comments';
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 3e6a4f16 */ $pane->shown = TRUE;
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 3e6a4f16 */ $pane->access = array();
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 3e6a4f16 */ $pane->configuration = array(
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 3e6a4f16 */   'mode' => '1',
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 3e6a4f16 */   'comments_per_page' => '10',
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 3e6a4f16 */   'context' => 'argument_entity_id:node_1',
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 3e6a4f16 */   'override_title' => 1,
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 3e6a4f16 */   'override_title_text' => '',
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 3e6a4f16 */   'override_title_heading' => 'h2',
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 3e6a4f16 */ );
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 3e6a4f16 */ $pane->cache = array();
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 3e6a4f16 */ $pane->style = array(
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 3e6a4f16 */   'settings' => array(
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 3e6a4f16 */     'clean_markup' => array(
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 3e6a4f16 */       'pane_wrapper' => 'div',
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 3e6a4f16 */       'additional_pane_classes' => 'panel-pane',
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 3e6a4f16 */       'additional_pane_attributes' => '',
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 3e6a4f16 */       'enable_inner_div' => 0,
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 3e6a4f16 */       'title_wrapper' => 'h3',
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 3e6a4f16 */       'title_hide' => 0,
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 3e6a4f16 */       'content_wrapper' => 'none',
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 3e6a4f16 */     ),
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 3e6a4f16 */   ),
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 3e6a4f16 */   'style' => 'clean_element',
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 3e6a4f16 */ );
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 3e6a4f16 */ $pane->css = array();
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 3e6a4f16 */ $pane->extras = array();
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 3e6a4f16 */ $pane->position = 7;
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 3e6a4f16 */ $pane->locks = array();
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 3e6a4f16 */ $pane->uuid = '3e6a4f16-0620-4cfe-b393-7c1cdd6e33c4';
  $display->content['new-3e6a4f16-0620-4cfe-b393-7c1cdd6e33c4'] = $pane;
  $display->panels['main_bottom'][7] = 'new-3e6a4f16-0620-4cfe-b393-7c1cdd6e33c4';
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 9a267d2d */ $pane = new stdClass();
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 9a267d2d */ $pane->pid = 'new-9a267d2d-7c1d-4c2c-940c-4ef74dc870b8';
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 9a267d2d */ $pane->panel = 'sidebar';
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 9a267d2d */ $pane->type = 'block';
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 9a267d2d */ $pane->subtype = 'gn2_manager_access-gn2_manager_manage';
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 9a267d2d */ $pane->shown = TRUE;
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 9a267d2d */ $pane->access = array();
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 9a267d2d */ $pane->configuration = array(
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 9a267d2d */   'override_title' => 0,
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 9a267d2d */   'override_title_text' => '',
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 9a267d2d */   'override_title_heading' => 'h2',
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 9a267d2d */ );
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 9a267d2d */ $pane->cache = array();
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 9a267d2d */ $pane->style = array(
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 9a267d2d */   'settings' => NULL,
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 9a267d2d */ );
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 9a267d2d */ $pane->css = array();
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 9a267d2d */ $pane->extras = array();
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 9a267d2d */ $pane->position = 0;
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 9a267d2d */ $pane->locks = array();
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 9a267d2d */ $pane->uuid = '9a267d2d-7c1d-4c2c-940c-4ef74dc870b8';
  $display->content['new-9a267d2d-7c1d-4c2c-940c-4ef74dc870b8'] = $pane;
  $display->panels['sidebar'][0] = 'new-9a267d2d-7c1d-4c2c-940c-4ef74dc870b8';
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 326af4d2 */ $pane = new stdClass();
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 326af4d2 */ $pane->pid = 'new-326af4d2-765d-4430-a91b-b03441f0715e';
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 326af4d2 */ $pane->panel = 'sidebar';
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 326af4d2 */ $pane->type = 'views_panes';
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 326af4d2 */ $pane->subtype = 'related_stories-panel_pane_3';
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 326af4d2 */ $pane->shown = TRUE;
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 326af4d2 */ $pane->access = array();
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 326af4d2 */ $pane->configuration = array(
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 326af4d2 */   'context' => array(
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 326af4d2 */     0 => 'argument_entity_id:node_1',
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 326af4d2 */   ),
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 326af4d2 */ );
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 326af4d2 */ $pane->cache = array();
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 326af4d2 */ $pane->style = array(
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 326af4d2 */   'settings' => array(
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 326af4d2 */     'clean_markup' => array(
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 326af4d2 */       'pane_wrapper' => 'div',
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 326af4d2 */       'additional_pane_classes' => 'panel-pane sidebar-subheading',
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 326af4d2 */       'additional_pane_attributes' => '',
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 326af4d2 */       'enable_inner_div' => 0,
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 326af4d2 */       'title_wrapper' => 'h3',
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 326af4d2 */       'title_hide' => 0,
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 326af4d2 */       'content_wrapper' => 'none',
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 326af4d2 */     ),
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 326af4d2 */   ),
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 326af4d2 */   'style' => 'clean_element',
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 326af4d2 */ );
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 326af4d2 */ $pane->css = array();
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 326af4d2 */ $pane->extras = array();
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 326af4d2 */ $pane->position = 1;
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 326af4d2 */ $pane->locks = array();
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 326af4d2 */ $pane->uuid = '326af4d2-765d-4430-a91b-b03441f0715e';
  $display->content['new-326af4d2-765d-4430-a91b-b03441f0715e'] = $pane;
  $display->panels['sidebar'][1] = 'new-326af4d2-765d-4430-a91b-b03441f0715e';
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 1359115f */ $pane = new stdClass();
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 1359115f */ $pane->pid = 'new-1359115f-2b82-42a1-a7a6-fe5672421ea0';
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 1359115f */ $pane->panel = 'top';
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 1359115f */ $pane->type = 'views_panes';
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 1359115f */ $pane->subtype = 'news_announcements_posts-panel_pane_3';
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 1359115f */ $pane->shown = TRUE;
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 1359115f */ $pane->access = array();
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 1359115f */ $pane->configuration = array();
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 1359115f */ $pane->cache = array();
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 1359115f */ $pane->style = array(
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 1359115f */   'settings' => NULL,
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 1359115f */ );
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 1359115f */ $pane->css = array();
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 1359115f */ $pane->extras = array();
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 1359115f */ $pane->position = 0;
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 1359115f */ $pane->locks = array();
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 1359115f */ $pane->uuid = '1359115f-2b82-42a1-a7a6-fe5672421ea0';
  $display->content['new-1359115f-2b82-42a1-a7a6-fe5672421ea0'] = $pane;
  $display->panels['top'][0] = 'new-1359115f-2b82-42a1-a7a6-fe5672421ea0';
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 37e5873b */ $pane = new stdClass();
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 37e5873b */ $pane->pid = 'new-37e5873b-0790-458a-942b-6d6a72ed2661';
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 37e5873b */ $pane->panel = 'top';
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 37e5873b */ $pane->type = 'custom';
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 37e5873b */ $pane->subtype = 'unpublished_node_block';
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 37e5873b */ $pane->shown = TRUE;
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 37e5873b */ $pane->access = array(
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 37e5873b */   'plugins' => array(
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 37e5873b */     0 => array(
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 37e5873b */       'name' => 'node_status',
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 37e5873b */       'settings' => NULL,
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 37e5873b */       'context' => 'argument_entity_id:node_1',
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 37e5873b */       'not' => TRUE,
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 37e5873b */     ),
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 37e5873b */   ),
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 37e5873b */ );
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 37e5873b */ $pane->configuration = array(
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 37e5873b */   'admin_title' => '',
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 37e5873b */   'title' => '',
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 37e5873b */   'body' => '',
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 37e5873b */   'format' => 'filtered_html',
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 37e5873b */   'substitute' => TRUE,
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 37e5873b */ );
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 37e5873b */ $pane->cache = array();
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 37e5873b */ $pane->style = array(
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 37e5873b */   'settings' => NULL,
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 37e5873b */ );
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 37e5873b */ $pane->css = array();
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 37e5873b */ $pane->extras = array();
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 37e5873b */ $pane->position = 1;
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 37e5873b */ $pane->locks = array();
   /* node_view__panel_context_8dee4fe0-eead-4fdd-b7b6-a490072cbfa8 37e5873b */ $pane->uuid = '37e5873b-0790-458a-942b-6d6a72ed2661';
  $display->content['new-37e5873b-0790-458a-942b-6d6a72ed2661'] = $pane;
  $display->panels['top'][1] = 'new-37e5873b-0790-458a-942b-6d6a72ed2661';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827'] = $handler;

   /* node_view_panel_context */ $handler = new stdClass();
   /* node_view_panel_context */ $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
   /* node_view_panel_context */ $handler->api_version = 1;
   /* node_view_panel_context */ $handler->name = 'node_view_panel_context';
   /* node_view_panel_context */ $handler->task = 'node_view';
   /* node_view_panel_context */ $handler->subtask = '';
   /* node_view_panel_context */ $handler->handler = 'panel_context';
   /* node_view_panel_context */ $handler->weight = -9;
   /* node_view_panel_context */ $handler->conf = array(
   /* node_view_panel_context */   'title' => 'News Node',
   /* node_view_panel_context */   'no_blocks' => 0,
   /* node_view_panel_context */   'pipeline' => 'standard',
   /* node_view_panel_context */   'body_classes_to_remove' => '',
   /* node_view_panel_context */   'body_classes_to_add' => 'news-node-page',
   /* node_view_panel_context */   'css_id' => '',
   /* node_view_panel_context */   'css' => '',
   /* node_view_panel_context */   'contexts' => array(),
   /* node_view_panel_context */   'relationships' => array(),
   /* node_view_panel_context */   'access' => array(
   /* node_view_panel_context */     'plugins' => array(
   /* node_view_panel_context */       0 => array(
   /* node_view_panel_context */         'name' => 'node_type',
   /* node_view_panel_context */         'settings' => array(
   /* node_view_panel_context */           'type' => array(
   /* node_view_panel_context */             'news' => 'news',
   /* node_view_panel_context */           ),
   /* node_view_panel_context */         ),
   /* node_view_panel_context */         'context' => 'argument_entity_id:node_1',
   /* node_view_panel_context */         'not' => FALSE,
   /* node_view_panel_context */       ),
   /* node_view_panel_context */     ),
   /* node_view_panel_context */     'logic' => 'and',
   /* node_view_panel_context */   ),
   /* node_view_panel_context */ );
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 2b92583a */ $display = new panels_display();
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 2b92583a */ $display->layout = 'gn2_2colstackedflipped';
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 2b92583a */ $display->layout_settings = array();
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 2b92583a */ $display->panel_settings = array(
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 2b92583a */   'style_settings' => array(
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 2b92583a */     'default' => NULL,
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 2b92583a */     'contentmain' => NULL,
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 2b92583a */     'header' => NULL,
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 2b92583a */     'main_top' => NULL,
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 2b92583a */     'footer' => NULL,
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 2b92583a */     'main_bottom' => NULL,
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 2b92583a */     'sidebar' => NULL,
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 2b92583a */     'top' => NULL,
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 2b92583a */   ),
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 2b92583a */   'main_bottom' => array(
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 2b92583a */     'style' => 'default',
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 2b92583a */   ),
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 2b92583a */   'sidebar' => array(
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 2b92583a */     'style' => 'default',
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 2b92583a */   ),
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 2b92583a */   'top' => array(
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 2b92583a */     'style' => 'default',
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 2b92583a */   ),
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 2b92583a */ );
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 2b92583a */ $display->cache = array();
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 2b92583a */ $display->title = '%node:title';
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 2b92583a */ $display->uuid = '2b92583a-ea58-48c8-86e3-23545720acdf';
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 2b92583a */ $display->storage_type = 'page_manager';
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 2b92583a */ $display->storage_id = 'node_view_panel_context';
  $display->content = array();
  $display->panels = array();
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 130cd3af */ $pane = new stdClass();
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 130cd3af */ $pane->pid = 'new-130cd3af-a5fc-40e2-a2b1-a814af5e2c8e';
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 130cd3af */ $pane->panel = 'main_bottom';
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 130cd3af */ $pane->type = 'entity_field';
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 130cd3af */ $pane->subtype = 'node:field_main_image';
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 130cd3af */ $pane->shown = TRUE;
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 130cd3af */ $pane->access = array();
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 130cd3af */ $pane->configuration = array(
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 130cd3af */   'label' => 'hidden',
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 130cd3af */   'formatter' => 'file_rendered',
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 130cd3af */   'delta_limit' => 0,
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 130cd3af */   'delta_offset' => '0',
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 130cd3af */   'delta_reversed' => FALSE,
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 130cd3af */   'formatter_settings' => array(
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 130cd3af */     'file_view_mode' => 'main_news_image',
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 130cd3af */     'field_formatter_class' => '',
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 130cd3af */   ),
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 130cd3af */   'context' => 'argument_entity_id:node_1',
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 130cd3af */   'override_title' => 0,
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 130cd3af */   'override_title_text' => '',
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 130cd3af */   'override_title_heading' => 'h2',
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 130cd3af */ );
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 130cd3af */ $pane->cache = array();
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 130cd3af */ $pane->style = array(
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 130cd3af */   'settings' => array(
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 130cd3af */     'clean_markup' => array(
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 130cd3af */       'pane_wrapper' => 'div',
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 130cd3af */       'additional_pane_classes' => 'main-news-image-wrapper',
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 130cd3af */       'additional_pane_attributes' => '',
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 130cd3af */       'enable_inner_div' => 0,
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 130cd3af */       'title_wrapper' => 'h2',
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 130cd3af */       'title_hide' => 0,
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 130cd3af */       'content_wrapper' => 'none',
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 130cd3af */     ),
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 130cd3af */   ),
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 130cd3af */   'style' => 'clean_element',
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 130cd3af */ );
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 130cd3af */ $pane->css = array(
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 130cd3af */   'css_id' => '',
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 130cd3af */   'css_class' => '',
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 130cd3af */ );
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 130cd3af */ $pane->extras = array();
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 130cd3af */ $pane->position = 0;
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 130cd3af */ $pane->locks = array();
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 130cd3af */ $pane->uuid = '130cd3af-a5fc-40e2-a2b1-a814af5e2c8e';
  $display->content['new-130cd3af-a5fc-40e2-a2b1-a814af5e2c8e'] = $pane;
  $display->panels['main_bottom'][0] = 'new-130cd3af-a5fc-40e2-a2b1-a814af5e2c8e';
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 51e23e76 */ $pane = new stdClass();
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 51e23e76 */ $pane->pid = 'new-51e23e76-ceeb-454f-bc91-1595b356cbba';
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 51e23e76 */ $pane->panel = 'main_bottom';
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 51e23e76 */ $pane->type = 'views_panes';
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 51e23e76 */ $pane->subtype = 'news_announcements_posts-panel_pane_17';
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 51e23e76 */ $pane->shown = TRUE;
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 51e23e76 */ $pane->access = array();
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 51e23e76 */ $pane->configuration = array();
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 51e23e76 */ $pane->cache = array();
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 51e23e76 */ $pane->style = array(
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 51e23e76 */   'settings' => array(
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 51e23e76 */     'clean_markup' => array(
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 51e23e76 */       'pane_wrapper' => 'div',
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 51e23e76 */       'additional_pane_classes' => 'author-post-date',
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 51e23e76 */       'additional_pane_attributes' => '',
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 51e23e76 */       'enable_inner_div' => 0,
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 51e23e76 */       'title_wrapper' => 'h2',
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 51e23e76 */       'title_hide' => 0,
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 51e23e76 */       'content_wrapper' => 'none',
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 51e23e76 */     ),
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 51e23e76 */   ),
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 51e23e76 */   'style' => 'clean_element',
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 51e23e76 */ );
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 51e23e76 */ $pane->css = array();
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 51e23e76 */ $pane->extras = array();
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 51e23e76 */ $pane->position = 1;
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 51e23e76 */ $pane->locks = array();
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 51e23e76 */ $pane->uuid = '51e23e76-ceeb-454f-bc91-1595b356cbba';
  $display->content['new-51e23e76-ceeb-454f-bc91-1595b356cbba'] = $pane;
  $display->panels['main_bottom'][1] = 'new-51e23e76-ceeb-454f-bc91-1595b356cbba';
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 61f8d060 */ $pane = new stdClass();
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 61f8d060 */ $pane->pid = 'new-61f8d060-e730-423b-a797-ee936c238b17';
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 61f8d060 */ $pane->panel = 'main_bottom';
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 61f8d060 */ $pane->type = 'node_body';
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 61f8d060 */ $pane->subtype = 'node_body';
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 61f8d060 */ $pane->shown = TRUE;
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 61f8d060 */ $pane->access = array();
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 61f8d060 */ $pane->configuration = array(
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 61f8d060 */   'context' => 'argument_entity_id:node_1',
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 61f8d060 */   'override_title' => 1,
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 61f8d060 */   'override_title_text' => '',
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 61f8d060 */ );
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 61f8d060 */ $pane->cache = array();
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 61f8d060 */ $pane->style = array(
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 61f8d060 */   'settings' => NULL,
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 61f8d060 */ );
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 61f8d060 */ $pane->css = array();
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 61f8d060 */ $pane->extras = array();
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 61f8d060 */ $pane->position = 2;
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 61f8d060 */ $pane->locks = array();
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 61f8d060 */ $pane->uuid = '61f8d060-e730-423b-a797-ee936c238b17';
  $display->content['new-61f8d060-e730-423b-a797-ee936c238b17'] = $pane;
  $display->panels['main_bottom'][2] = 'new-61f8d060-e730-423b-a797-ee936c238b17';
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 7ceb98bf */ $pane = new stdClass();
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 7ceb98bf */ $pane->pid = 'new-7ceb98bf-d581-4463-8e7a-55bf88462dff';
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 7ceb98bf */ $pane->panel = 'main_bottom';
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 7ceb98bf */ $pane->type = 'rate_widget';
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 7ceb98bf */ $pane->subtype = 'rate_widget';
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 7ceb98bf */ $pane->shown = TRUE;
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 7ceb98bf */ $pane->access = array();
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 7ceb98bf */ $pane->configuration = array(
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 7ceb98bf */   'build_mode' => '1',
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 7ceb98bf */   'widget_name' => '2',
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 7ceb98bf */   'context' => 'argument_entity_id:node_1',
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 7ceb98bf */   'override_title' => 1,
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 7ceb98bf */   'override_title_text' => '',
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 7ceb98bf */   'override_title_heading' => 'h2',
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 7ceb98bf */ );
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 7ceb98bf */ $pane->cache = array();
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 7ceb98bf */ $pane->style = array(
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 7ceb98bf */   'settings' => NULL,
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 7ceb98bf */ );
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 7ceb98bf */ $pane->css = array();
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 7ceb98bf */ $pane->extras = array();
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 7ceb98bf */ $pane->position = 3;
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 7ceb98bf */ $pane->locks = array();
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 7ceb98bf */ $pane->uuid = '7ceb98bf-d581-4463-8e7a-55bf88462dff';
  $display->content['new-7ceb98bf-d581-4463-8e7a-55bf88462dff'] = $pane;
  $display->panels['main_bottom'][3] = 'new-7ceb98bf-d581-4463-8e7a-55bf88462dff';
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 3f16e995 */ $pane = new stdClass();
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 3f16e995 */ $pane->pid = 'new-3f16e995-656a-4bef-a320-0e9e2c08a57b';
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 3f16e995 */ $pane->panel = 'main_bottom';
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 3f16e995 */ $pane->type = 'views_panes';
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 3f16e995 */ $pane->subtype = 'news_announcements_posts-panel_pane_21';
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 3f16e995 */ $pane->shown = TRUE;
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 3f16e995 */ $pane->access = array();
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 3f16e995 */ $pane->configuration = array(
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 3f16e995 */   'override_title' => 0,
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 3f16e995 */   'override_title_text' => '',
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 3f16e995 */   'override_title_heading' => 'h2',
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 3f16e995 */ );
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 3f16e995 */ $pane->cache = array();
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 3f16e995 */ $pane->style = array(
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 3f16e995 */   'settings' => NULL,
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 3f16e995 */ );
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 3f16e995 */ $pane->css = array();
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 3f16e995 */ $pane->extras = array();
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 3f16e995 */ $pane->position = 4;
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 3f16e995 */ $pane->locks = array();
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 3f16e995 */ $pane->uuid = '3f16e995-656a-4bef-a320-0e9e2c08a57b';
  $display->content['new-3f16e995-656a-4bef-a320-0e9e2c08a57b'] = $pane;
  $display->panels['main_bottom'][4] = 'new-3f16e995-656a-4bef-a320-0e9e2c08a57b';
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 daa6db21 */ $pane = new stdClass();
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 daa6db21 */ $pane->pid = 'new-daa6db21-c531-4bf8-aefb-70f369014cdc';
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 daa6db21 */ $pane->panel = 'main_bottom';
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 daa6db21 */ $pane->type = 'views_panes';
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 daa6db21 */ $pane->subtype = 'news_announcements_posts-panel_pane_13';
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 daa6db21 */ $pane->shown = TRUE;
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 daa6db21 */ $pane->access = array(
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 daa6db21 */   'plugins' => array(),
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 daa6db21 */ );
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 daa6db21 */ $pane->configuration = array();
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 daa6db21 */ $pane->cache = array();
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 daa6db21 */ $pane->style = array(
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 daa6db21 */   'settings' => array(
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 daa6db21 */     'clean_markup' => array(
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 daa6db21 */       'pane_wrapper' => 'div',
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 daa6db21 */       'additional_pane_classes' => 'panel-pane sidebar-subheading',
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 daa6db21 */       'additional_pane_attributes' => '',
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 daa6db21 */       'enable_inner_div' => 0,
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 daa6db21 */       'title_wrapper' => 'h3',
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 daa6db21 */       'title_hide' => 0,
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 daa6db21 */       'content_wrapper' => 'none',
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 daa6db21 */     ),
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 daa6db21 */   ),
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 daa6db21 */   'style' => 'clean_element',
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 daa6db21 */ );
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 daa6db21 */ $pane->css = array(
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 daa6db21 */   'css_id' => '',
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 daa6db21 */   'css_class' => 'mobile-show',
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 daa6db21 */ );
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 daa6db21 */ $pane->extras = array();
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 daa6db21 */ $pane->position = 5;
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 daa6db21 */ $pane->locks = array();
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 daa6db21 */ $pane->uuid = 'daa6db21-c531-4bf8-aefb-70f369014cdc';
  $display->content['new-daa6db21-c531-4bf8-aefb-70f369014cdc'] = $pane;
  $display->panels['main_bottom'][5] = 'new-daa6db21-c531-4bf8-aefb-70f369014cdc';
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 4012f818 */ $pane = new stdClass();
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 4012f818 */ $pane->pid = 'new-4012f818-100b-45d8-82a5-c00e66ef4dc3';
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 4012f818 */ $pane->panel = 'main_bottom';
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 4012f818 */ $pane->type = 'block';
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 4012f818 */ $pane->subtype = 'gn2_file_download-associated_media';
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 4012f818 */ $pane->shown = TRUE;
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 4012f818 */ $pane->access = array(
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 4012f818 */   'plugins' => array(),
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 4012f818 */ );
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 4012f818 */ $pane->configuration = array(
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 4012f818 */   'override_title' => 1,
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 4012f818 */   'override_title_text' => 'Associated Files',
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 4012f818 */   'override_title_heading' => 'h3',
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 4012f818 */ );
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 4012f818 */ $pane->cache = array();
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 4012f818 */ $pane->style = array(
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 4012f818 */   'style' => 'clean_element',
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 4012f818 */   'settings' => array(
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 4012f818 */     'clean_markup' => array(
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 4012f818 */       'pane_wrapper' => 'div',
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 4012f818 */       'additional_pane_classes' => 'panel-pane sidebar-subheading file-download',
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 4012f818 */       'additional_pane_attributes' => '',
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 4012f818 */       'enable_inner_div' => 0,
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 4012f818 */       'title_wrapper' => 'h3',
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 4012f818 */       'title_hide' => 0,
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 4012f818 */       'content_wrapper' => 'none',
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 4012f818 */     ),
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 4012f818 */   ),
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 4012f818 */ );
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 4012f818 */ $pane->css = array(
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 4012f818 */   'css_id' => '',
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 4012f818 */   'css_class' => 'mobile-hide',
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 4012f818 */ );
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 4012f818 */ $pane->extras = array();
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 4012f818 */ $pane->position = 6;
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 4012f818 */ $pane->locks = array();
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 4012f818 */ $pane->uuid = '4012f818-100b-45d8-82a5-c00e66ef4dc3';
  $display->content['new-4012f818-100b-45d8-82a5-c00e66ef4dc3'] = $pane;
  $display->panels['main_bottom'][6] = 'new-4012f818-100b-45d8-82a5-c00e66ef4dc3';
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 a3d18c72 */ $pane = new stdClass();
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 a3d18c72 */ $pane->pid = 'new-a3d18c72-195c-4304-a789-be793656e289';
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 a3d18c72 */ $pane->panel = 'main_bottom';
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 a3d18c72 */ $pane->type = 'node_comment_form';
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 a3d18c72 */ $pane->subtype = 'node_comment_form';
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 a3d18c72 */ $pane->shown = TRUE;
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 a3d18c72 */ $pane->access = array();
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 a3d18c72 */ $pane->configuration = array(
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 a3d18c72 */   'anon_links' => 0,
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 a3d18c72 */   'context' => 'argument_entity_id:node_1',
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 a3d18c72 */   'override_title' => 1,
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 a3d18c72 */   'override_title_text' => 'Join the Conversation',
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 a3d18c72 */   'override_title_heading' => 'h3',
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 a3d18c72 */ );
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 a3d18c72 */ $pane->cache = array();
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 a3d18c72 */ $pane->style = array(
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 a3d18c72 */   'settings' => array(
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 a3d18c72 */     'clean_markup' => array(
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 a3d18c72 */       'pane_wrapper' => 'div',
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 a3d18c72 */       'additional_pane_classes' => 'panel-pane sidebar-subheading',
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 a3d18c72 */       'additional_pane_attributes' => '',
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 a3d18c72 */       'enable_inner_div' => 0,
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 a3d18c72 */       'title_wrapper' => 'h3',
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 a3d18c72 */       'title_hide' => 0,
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 a3d18c72 */       'content_wrapper' => 'none',
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 a3d18c72 */     ),
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 a3d18c72 */   ),
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 a3d18c72 */   'style' => 'clean_element',
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 a3d18c72 */ );
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 a3d18c72 */ $pane->css = array();
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 a3d18c72 */ $pane->extras = array();
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 a3d18c72 */ $pane->position = 7;
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 a3d18c72 */ $pane->locks = array();
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 a3d18c72 */ $pane->uuid = 'a3d18c72-195c-4304-a789-be793656e289';
  $display->content['new-a3d18c72-195c-4304-a789-be793656e289'] = $pane;
  $display->panels['main_bottom'][7] = 'new-a3d18c72-195c-4304-a789-be793656e289';
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 3e6a4f16 */ $pane = new stdClass();
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 3e6a4f16 */ $pane->pid = 'new-3e6a4f16-0620-4cfe-b393-7c1cdd6e33c4';
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 3e6a4f16 */ $pane->panel = 'main_bottom';
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 3e6a4f16 */ $pane->type = 'node_comments';
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 3e6a4f16 */ $pane->subtype = 'node_comments';
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 3e6a4f16 */ $pane->shown = TRUE;
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 3e6a4f16 */ $pane->access = array();
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 3e6a4f16 */ $pane->configuration = array(
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 3e6a4f16 */   'mode' => '1',
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 3e6a4f16 */   'comments_per_page' => '10',
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 3e6a4f16 */   'context' => 'argument_entity_id:node_1',
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 3e6a4f16 */   'override_title' => 1,
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 3e6a4f16 */   'override_title_text' => '',
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 3e6a4f16 */   'override_title_heading' => 'h2',
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 3e6a4f16 */ );
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 3e6a4f16 */ $pane->cache = array();
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 3e6a4f16 */ $pane->style = array(
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 3e6a4f16 */   'settings' => array(
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 3e6a4f16 */     'clean_markup' => array(
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 3e6a4f16 */       'pane_wrapper' => 'div',
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 3e6a4f16 */       'additional_pane_classes' => 'panel-pane ',
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 3e6a4f16 */       'additional_pane_attributes' => '',
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 3e6a4f16 */       'enable_inner_div' => 0,
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 3e6a4f16 */       'title_wrapper' => 'h3',
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 3e6a4f16 */       'title_hide' => 0,
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 3e6a4f16 */       'content_wrapper' => 'none',
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 3e6a4f16 */     ),
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 3e6a4f16 */   ),
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 3e6a4f16 */   'style' => 'clean_element',
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 3e6a4f16 */ );
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 3e6a4f16 */ $pane->css = array();
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 3e6a4f16 */ $pane->extras = array();
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 3e6a4f16 */ $pane->position = 8;
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 3e6a4f16 */ $pane->locks = array();
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 3e6a4f16 */ $pane->uuid = '3e6a4f16-0620-4cfe-b393-7c1cdd6e33c4';
  $display->content['new-3e6a4f16-0620-4cfe-b393-7c1cdd6e33c4'] = $pane;
  $display->panels['main_bottom'][8] = 'new-3e6a4f16-0620-4cfe-b393-7c1cdd6e33c4';
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 35360b52 */ $pane = new stdClass();
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 35360b52 */ $pane->pid = 'new-35360b52-d56e-4967-a53c-c8f86a4b24db';
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 35360b52 */ $pane->panel = 'sidebar';
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 35360b52 */ $pane->type = 'block';
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 35360b52 */ $pane->subtype = 'gn2_manager_access-gn2_manager_manage';
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 35360b52 */ $pane->shown = TRUE;
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 35360b52 */ $pane->access = array();
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 35360b52 */ $pane->configuration = array(
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 35360b52 */   'override_title' => 0,
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 35360b52 */   'override_title_text' => '',
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 35360b52 */   'override_title_heading' => 'h2',
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 35360b52 */ );
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 35360b52 */ $pane->cache = array();
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 35360b52 */ $pane->style = array(
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 35360b52 */   'settings' => NULL,
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 35360b52 */ );
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 35360b52 */ $pane->css = array();
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 35360b52 */ $pane->extras = array();
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 35360b52 */ $pane->position = 0;
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 35360b52 */ $pane->locks = array();
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 35360b52 */ $pane->uuid = '35360b52-d56e-4967-a53c-c8f86a4b24db';
  $display->content['new-35360b52-d56e-4967-a53c-c8f86a4b24db'] = $pane;
  $display->panels['sidebar'][0] = 'new-35360b52-d56e-4967-a53c-c8f86a4b24db';
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 a0a70eb4 */ $pane = new stdClass();
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 a0a70eb4 */ $pane->pid = 'new-a0a70eb4-f21f-4e4a-8982-e03a10c2d3be';
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 a0a70eb4 */ $pane->panel = 'sidebar';
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 a0a70eb4 */ $pane->type = 'block';
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 a0a70eb4 */ $pane->subtype = 'gn2_admin_dashboard-gn2_content_rating_users';
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 a0a70eb4 */ $pane->shown = TRUE;
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 a0a70eb4 */ $pane->access = array();
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 a0a70eb4 */ $pane->configuration = array(
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 a0a70eb4 */   'override_title' => 0,
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 a0a70eb4 */   'override_title_text' => '',
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 a0a70eb4 */   'override_title_heading' => 'h2',
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 a0a70eb4 */ );
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 a0a70eb4 */ $pane->cache = array();
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 a0a70eb4 */ $pane->style = array(
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 a0a70eb4 */   'settings' => NULL,
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 a0a70eb4 */ );
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 a0a70eb4 */ $pane->css = array();
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 a0a70eb4 */ $pane->extras = array();
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 a0a70eb4 */ $pane->position = 1;
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 a0a70eb4 */ $pane->locks = array();
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 a0a70eb4 */ $pane->uuid = 'a0a70eb4-f21f-4e4a-8982-e03a10c2d3be';
  $display->content['new-a0a70eb4-f21f-4e4a-8982-e03a10c2d3be'] = $pane;
  $display->panels['sidebar'][1] = 'new-a0a70eb4-f21f-4e4a-8982-e03a10c2d3be';
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 9d0153dc */ $pane = new stdClass();
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 9d0153dc */ $pane->pid = 'new-9d0153dc-2337-414d-aa34-675fcd803518';
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 9d0153dc */ $pane->panel = 'sidebar';
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 9d0153dc */ $pane->type = 'views_panes';
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 9d0153dc */ $pane->subtype = 'news_announcements_posts-panel_pane_2';
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 9d0153dc */ $pane->shown = TRUE;
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 9d0153dc */ $pane->access = array(
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 9d0153dc */   'logic' => 'and',
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 9d0153dc */   'plugins' => array(),
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 9d0153dc */ );
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 9d0153dc */ $pane->configuration = array();
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 9d0153dc */ $pane->cache = array();
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 9d0153dc */ $pane->style = array(
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 9d0153dc */   'settings' => array(
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 9d0153dc */     'clean_markup' => array(
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 9d0153dc */       'pane_wrapper' => 'div',
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 9d0153dc */       'additional_pane_classes' => 'panel-pane sidebar-subheading',
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 9d0153dc */       'additional_pane_attributes' => '',
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 9d0153dc */       'enable_inner_div' => 0,
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 9d0153dc */       'title_wrapper' => 'h3',
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 9d0153dc */       'title_hide' => 0,
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 9d0153dc */       'content_wrapper' => 'none',
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 9d0153dc */     ),
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 9d0153dc */   ),
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 9d0153dc */   'style' => 'clean_element',
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 9d0153dc */ );
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 9d0153dc */ $pane->css = array();
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 9d0153dc */ $pane->extras = array();
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 9d0153dc */ $pane->position = 2;
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 9d0153dc */ $pane->locks = array();
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 9d0153dc */ $pane->uuid = '9d0153dc-2337-414d-aa34-675fcd803518';
  $display->content['new-9d0153dc-2337-414d-aa34-675fcd803518'] = $pane;
  $display->panels['sidebar'][2] = 'new-9d0153dc-2337-414d-aa34-675fcd803518';
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 6e27ed5a */ $pane = new stdClass();
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 6e27ed5a */ $pane->pid = 'new-6e27ed5a-bf2e-49e7-b1ba-6c19845df5ef';
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 6e27ed5a */ $pane->panel = 'sidebar';
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 6e27ed5a */ $pane->type = 'views_panes';
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 6e27ed5a */ $pane->subtype = 'related_stories-panel_pane_1';
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 6e27ed5a */ $pane->shown = TRUE;
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 6e27ed5a */ $pane->access = array();
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 6e27ed5a */ $pane->configuration = array(
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 6e27ed5a */   'context' => array(
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 6e27ed5a */     0 => 'argument_entity_id:node_1',
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 6e27ed5a */   ),
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 6e27ed5a */ );
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 6e27ed5a */ $pane->cache = array();
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 6e27ed5a */ $pane->style = array(
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 6e27ed5a */   'settings' => array(
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 6e27ed5a */     'clean_markup' => array(
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 6e27ed5a */       'pane_wrapper' => 'div',
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 6e27ed5a */       'additional_pane_classes' => 'panel-pane sidebar-subheading',
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 6e27ed5a */       'additional_pane_attributes' => '',
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 6e27ed5a */       'enable_inner_div' => 0,
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 6e27ed5a */       'title_wrapper' => 'h3',
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 6e27ed5a */       'title_hide' => 0,
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 6e27ed5a */       'content_wrapper' => 'none',
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 6e27ed5a */     ),
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 6e27ed5a */   ),
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 6e27ed5a */   'style' => 'clean_element',
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 6e27ed5a */ );
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 6e27ed5a */ $pane->css = array(
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 6e27ed5a */   'css_id' => 'related_stories_view_block_pane',
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 6e27ed5a */   'css_class' => '',
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 6e27ed5a */ );
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 6e27ed5a */ $pane->extras = array();
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 6e27ed5a */ $pane->position = 3;
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 6e27ed5a */ $pane->locks = array();
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 6e27ed5a */ $pane->uuid = '6e27ed5a-bf2e-49e7-b1ba-6c19845df5ef';
  $display->content['new-6e27ed5a-bf2e-49e7-b1ba-6c19845df5ef'] = $pane;
  $display->panels['sidebar'][3] = 'new-6e27ed5a-bf2e-49e7-b1ba-6c19845df5ef';
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 86093a52 */ $pane = new stdClass();
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 86093a52 */ $pane->pid = 'new-86093a52-e887-43d8-a04c-07519f369839';
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 86093a52 */ $pane->panel = 'sidebar';
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 86093a52 */ $pane->type = 'views_panes';
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 86093a52 */ $pane->subtype = 'news_announcements_posts-panel_pane_20';
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 86093a52 */ $pane->shown = FALSE;
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 86093a52 */ $pane->access = array();
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 86093a52 */ $pane->configuration = array(
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 86093a52 */   'context' => array(
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 86093a52 */     0 => 'argument_entity_id:node_1',
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 86093a52 */   ),
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 86093a52 */ );
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 86093a52 */ $pane->cache = array();
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 86093a52 */ $pane->style = array(
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 86093a52 */   'settings' => array(
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 86093a52 */     'clean_markup' => array(
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 86093a52 */       'pane_wrapper' => 'div',
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 86093a52 */       'additional_pane_classes' => 'panel-pane',
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 86093a52 */       'additional_pane_attributes' => '',
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 86093a52 */       'enable_inner_div' => 0,
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 86093a52 */       'title_wrapper' => 'h2',
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 86093a52 */       'title_hide' => 0,
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 86093a52 */       'content_wrapper' => 'none',
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 86093a52 */     ),
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 86093a52 */   ),
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 86093a52 */   'style' => 'clean_element',
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 86093a52 */ );
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 86093a52 */ $pane->css = array();
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 86093a52 */ $pane->extras = array();
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 86093a52 */ $pane->position = 4;
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 86093a52 */ $pane->locks = array();
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 86093a52 */ $pane->uuid = '86093a52-e887-43d8-a04c-07519f369839';
  $display->content['new-86093a52-e887-43d8-a04c-07519f369839'] = $pane;
  $display->panels['sidebar'][4] = 'new-86093a52-e887-43d8-a04c-07519f369839';
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 79bf03f6 */ $pane = new stdClass();
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 79bf03f6 */ $pane->pid = 'new-79bf03f6-dab3-429b-a485-cd7a11253369';
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 79bf03f6 */ $pane->panel = 'top';
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 79bf03f6 */ $pane->type = 'views_panes';
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 79bf03f6 */ $pane->subtype = 'news_announcements_posts-panel_pane_3';
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 79bf03f6 */ $pane->shown = TRUE;
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 79bf03f6 */ $pane->access = array();
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 79bf03f6 */ $pane->configuration = array();
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 79bf03f6 */ $pane->cache = array();
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 79bf03f6 */ $pane->style = array(
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 79bf03f6 */   'settings' => NULL,
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 79bf03f6 */ );
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 79bf03f6 */ $pane->css = array();
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 79bf03f6 */ $pane->extras = array();
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 79bf03f6 */ $pane->position = 0;
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 79bf03f6 */ $pane->locks = array();
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 79bf03f6 */ $pane->uuid = '79bf03f6-dab3-429b-a485-cd7a11253369';
  $display->content['new-79bf03f6-dab3-429b-a485-cd7a11253369'] = $pane;
  $display->panels['top'][0] = 'new-79bf03f6-dab3-429b-a485-cd7a11253369';
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 341144f6 */ $pane = new stdClass();
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 341144f6 */ $pane->pid = 'new-341144f6-f797-4834-babd-dedb79b991bd';
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 341144f6 */ $pane->panel = 'top';
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 341144f6 */ $pane->type = 'custom';
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 341144f6 */ $pane->subtype = 'unpublished_node_block';
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 341144f6 */ $pane->shown = TRUE;
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 341144f6 */ $pane->access = array(
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 341144f6 */   'plugins' => array(
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 341144f6 */     0 => array(
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 341144f6 */       'name' => 'node_status',
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 341144f6 */       'settings' => NULL,
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 341144f6 */       'context' => 'argument_entity_id:node_1',
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 341144f6 */       'not' => TRUE,
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 341144f6 */     ),
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 341144f6 */   ),
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 341144f6 */ );
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 341144f6 */ $pane->configuration = array(
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 341144f6 */   'admin_title' => '',
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 341144f6 */   'title' => '',
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 341144f6 */   'body' => '',
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 341144f6 */   'format' => 'filtered_html',
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 341144f6 */   'substitute' => TRUE,
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 341144f6 */ );
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 341144f6 */ $pane->cache = array();
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 341144f6 */ $pane->style = array(
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 341144f6 */   'settings' => NULL,
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 341144f6 */ );
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 341144f6 */ $pane->css = array();
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 341144f6 */ $pane->extras = array();
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 341144f6 */ $pane->position = 1;
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 341144f6 */ $pane->locks = array();
   /* node_view__panel_context_e2e56a75-ec19-4e45-88d2-e2c73410c827 341144f6 */ $pane->uuid = '341144f6-f797-4834-babd-dedb79b991bd';
  $display->content['new-341144f6-f797-4834-babd-dedb79b991bd'] = $pane;
  $display->panels['top'][1] = 'new-341144f6-f797-4834-babd-dedb79b991bd';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context'] = $handler;

   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da */ $handler = new stdClass();
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da */ $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da */ $handler->api_version = 1;
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da */ $handler->name = 'user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da';
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da */ $handler->task = 'user_edit';
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da */ $handler->subtask = '';
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da */ $handler->handler = 'panel_context';
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da */ $handler->weight = 0;
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da */ $handler->conf = array(
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da */   'title' => 'Panel',
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da */   'no_blocks' => 0,
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da */   'pipeline' => 'standard',
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da */   'body_classes_to_remove' => '',
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da */   'body_classes_to_add' => '',
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da */   'css_id' => '',
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da */   'css' => '',
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da */   'contexts' => array(),
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da */   'relationships' => array(),
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da */   'name' => '',
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da */ );
   /* node_view_panel_context 693b538d */ $display = new panels_display();
   /* node_view_panel_context 693b538d */ $display->layout = 'gn2_2colstackedflipped';
   /* node_view_panel_context 693b538d */ $display->layout_settings = array();
   /* node_view_panel_context 693b538d */ $display->panel_settings = array(
   /* node_view_panel_context 693b538d */   'style_settings' => array(
   /* node_view_panel_context 693b538d */     'default' => NULL,
   /* node_view_panel_context 693b538d */     'top' => NULL,
   /* node_view_panel_context 693b538d */     'sidebar' => NULL,
   /* node_view_panel_context 693b538d */     'main_top' => array(
   /* node_view_panel_context 693b538d */       'clean_markup' => array(
   /* node_view_panel_context 693b538d */         'region_wrapper' => 'div',
   /* node_view_panel_context 693b538d */         'additional_region_classes' => 'user__profile--header',
   /* node_view_panel_context 693b538d */         'additional_region_attributes' => '',
   /* node_view_panel_context 693b538d */         'enable_inner_div' => 0,
   /* node_view_panel_context 693b538d */         'pane_separators' => 0,
   /* node_view_panel_context 693b538d */       ),
   /* node_view_panel_context 693b538d */     ),
   /* node_view_panel_context 693b538d */     'main_bottom' => array(
   /* node_view_panel_context 693b538d */       'clean_markup' => array(
   /* node_view_panel_context 693b538d */         'region_wrapper' => 'div',
   /* node_view_panel_context 693b538d */         'additional_region_classes' => 'fieldgroup-tabs',
   /* node_view_panel_context 693b538d */         'additional_region_attributes' => '',
   /* node_view_panel_context 693b538d */         'enable_inner_div' => 0,
   /* node_view_panel_context 693b538d */         'pane_separators' => 0,
   /* node_view_panel_context 693b538d */       ),
   /* node_view_panel_context 693b538d */     ),
   /* node_view_panel_context 693b538d */     'footer' => NULL,
   /* node_view_panel_context 693b538d */   ),
   /* node_view_panel_context 693b538d */   'main_top' => array(
   /* node_view_panel_context 693b538d */     'style' => 'clean_element',
   /* node_view_panel_context 693b538d */   ),
   /* node_view_panel_context 693b538d */   'main_bottom' => array(
   /* node_view_panel_context 693b538d */     'style' => 'clean_element',
   /* node_view_panel_context 693b538d */   ),
   /* node_view_panel_context 693b538d */ );
   /* node_view_panel_context 693b538d */ $display->cache = array();
   /* node_view_panel_context 693b538d */ $display->title = '';
   /* node_view_panel_context 693b538d */ $display->uuid = '693b538d-f414-4620-8528-9be37e0a2d73';
   /* node_view_panel_context 693b538d */ $display->storage_type = 'page_manager';
   /* node_view_panel_context 693b538d */ $display->storage_id = 'user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da';
  $display->content = array();
  $display->panels = array();
   /* node_view_panel_context c6061ea0 */ $pane = new stdClass();
   /* node_view_panel_context c6061ea0 */ $pane->pid = 'new-c6061ea0-4cc0-4086-aa52-d48df5cc36e8';
   /* node_view_panel_context c6061ea0 */ $pane->panel = 'main_bottom';
   /* node_view_panel_context c6061ea0 */ $pane->type = 'form';
   /* node_view_panel_context c6061ea0 */ $pane->subtype = 'form';
   /* node_view_panel_context c6061ea0 */ $pane->shown = TRUE;
   /* node_view_panel_context c6061ea0 */ $pane->access = array();
   /* node_view_panel_context c6061ea0 */ $pane->configuration = array(
   /* node_view_panel_context c6061ea0 */   'context' => 'argument_user_edit_1',
   /* node_view_panel_context c6061ea0 */   'override_title' => 1,
   /* node_view_panel_context c6061ea0 */   'override_title_text' => '',
   /* node_view_panel_context c6061ea0 */   'override_title_heading' => 'h2',
   /* node_view_panel_context c6061ea0 */ );
   /* node_view_panel_context c6061ea0 */ $pane->cache = array();
   /* node_view_panel_context c6061ea0 */ $pane->style = array(
   /* node_view_panel_context c6061ea0 */   'settings' => array(
   /* node_view_panel_context c6061ea0 */     'clean_markup' => array(
   /* node_view_panel_context c6061ea0 */       'pane_wrapper' => 'none',
   /* node_view_panel_context c6061ea0 */       'additional_pane_classes' => 'panel-pane',
   /* node_view_panel_context c6061ea0 */       'additional_pane_attributes' => '',
   /* node_view_panel_context c6061ea0 */       'enable_inner_div' => 0,
   /* node_view_panel_context c6061ea0 */       'title_wrapper' => 'h2',
   /* node_view_panel_context c6061ea0 */       'title_hide' => 0,
   /* node_view_panel_context c6061ea0 */       'content_wrapper' => 'none',
   /* node_view_panel_context c6061ea0 */     ),
   /* node_view_panel_context c6061ea0 */   ),
   /* node_view_panel_context c6061ea0 */   'style' => 'clean_element',
   /* node_view_panel_context c6061ea0 */ );
   /* node_view_panel_context c6061ea0 */ $pane->css = array();
   /* node_view_panel_context c6061ea0 */ $pane->extras = array();
   /* node_view_panel_context c6061ea0 */ $pane->position = 0;
   /* node_view_panel_context c6061ea0 */ $pane->locks = array();
   /* node_view_panel_context c6061ea0 */ $pane->uuid = 'c6061ea0-4cc0-4086-aa52-d48df5cc36e8';
  $display->content['new-c6061ea0-4cc0-4086-aa52-d48df5cc36e8'] = $pane;
  $display->panels['main_bottom'][0] = 'new-c6061ea0-4cc0-4086-aa52-d48df5cc36e8';
   /* node_view_panel_context 256d8ccb */ $pane = new stdClass();
   /* node_view_panel_context 256d8ccb */ $pane->pid = 'new-256d8ccb-be6a-4146-9431-38d8576e307b';
   /* node_view_panel_context 256d8ccb */ $pane->panel = 'main_top';
   /* node_view_panel_context 256d8ccb */ $pane->type = 'views_panes';
   /* node_view_panel_context 256d8ccb */ $pane->subtype = 'users_contact_history_info-panel_pane_4';
   /* node_view_panel_context 256d8ccb */ $pane->shown = TRUE;
   /* node_view_panel_context 256d8ccb */ $pane->access = array();
   /* node_view_panel_context 256d8ccb */ $pane->configuration = array(
   /* node_view_panel_context 256d8ccb */   'fields_override' => array(
   /* node_view_panel_context 256d8ccb */     'field_name_last' => 0,
   /* node_view_panel_context 256d8ccb */     'field_name_middle' => 0,
   /* node_view_panel_context 256d8ccb */     'field_name_first' => 0,
   /* node_view_panel_context 256d8ccb */     'name' => 0,
   /* node_view_panel_context 256d8ccb */     'nothing' => 1,
   /* node_view_panel_context 256d8ccb */     'nothing_1' => 0,
   /* node_view_panel_context 256d8ccb */     'field_country_of_residence' => 0,
   /* node_view_panel_context 256d8ccb */     'language' => 0,
   /* node_view_panel_context 256d8ccb */     'view_user' => 0,
   /* node_view_panel_context 256d8ccb */     'edit_node' => 0,
   /* node_view_panel_context 256d8ccb */     'nothing_2' => 0,
   /* node_view_panel_context 256d8ccb */     'nothing_3' => 0,
   /* node_view_panel_context 256d8ccb */     'nothing_4' => 0,
   /* node_view_panel_context 256d8ccb */   ),
   /* node_view_panel_context 256d8ccb */   'override_title' => 1,
   /* node_view_panel_context 256d8ccb */   'override_title_text' => '',
   /* node_view_panel_context 256d8ccb */   'override_title_heading' => 'h2',
   /* node_view_panel_context 256d8ccb */ );
   /* node_view_panel_context 256d8ccb */ $pane->cache = array();
   /* node_view_panel_context 256d8ccb */ $pane->style = array(
   /* node_view_panel_context 256d8ccb */   'settings' => array(
   /* node_view_panel_context 256d8ccb */     'clean_markup' => array(
   /* node_view_panel_context 256d8ccb */       'pane_wrapper' => 'div',
   /* node_view_panel_context 256d8ccb */       'additional_pane_classes' => 'panel-pane user-profile--header-name',
   /* node_view_panel_context 256d8ccb */       'additional_pane_attributes' => '',
   /* node_view_panel_context 256d8ccb */       'enable_inner_div' => 0,
   /* node_view_panel_context 256d8ccb */       'title_wrapper' => 'h2',
   /* node_view_panel_context 256d8ccb */       'title_hide' => 0,
   /* node_view_panel_context 256d8ccb */       'content_wrapper' => 'none',
   /* node_view_panel_context 256d8ccb */     ),
   /* node_view_panel_context 256d8ccb */   ),
   /* node_view_panel_context 256d8ccb */   'style' => 'clean_element',
   /* node_view_panel_context 256d8ccb */ );
   /* node_view_panel_context 256d8ccb */ $pane->css = array();
   /* node_view_panel_context 256d8ccb */ $pane->extras = array();
   /* node_view_panel_context 256d8ccb */ $pane->position = 0;
   /* node_view_panel_context 256d8ccb */ $pane->locks = array();
   /* node_view_panel_context 256d8ccb */ $pane->uuid = '256d8ccb-be6a-4146-9431-38d8576e307b';
  $display->content['new-256d8ccb-be6a-4146-9431-38d8576e307b'] = $pane;
  $display->panels['main_top'][0] = 'new-256d8ccb-be6a-4146-9431-38d8576e307b';
   /* node_view_panel_context faba6a07 */ $pane = new stdClass();
   /* node_view_panel_context faba6a07 */ $pane->pid = 'new-faba6a07-ecb7-41ae-ba25-ec3a77db1f88';
   /* node_view_panel_context faba6a07 */ $pane->panel = 'main_top';
   /* node_view_panel_context faba6a07 */ $pane->type = 'custom';
   /* node_view_panel_context faba6a07 */ $pane->subtype = 'custom';
   /* node_view_panel_context faba6a07 */ $pane->shown = TRUE;
   /* node_view_panel_context faba6a07 */ $pane->access = array();
   /* node_view_panel_context faba6a07 */ $pane->configuration = array(
   /* node_view_panel_context faba6a07 */   'admin_title' => '',
   /* node_view_panel_context faba6a07 */   'title' => '',
   /* node_view_panel_context faba6a07 */   'body' => '<p><em>Edit Profile</em></p>
',
   /* node_view_panel_context faba6a07 */   'format' => 'filtered_html',
   /* node_view_panel_context faba6a07 */   'substitute' => 1,
   /* node_view_panel_context faba6a07 */ );
   /* node_view_panel_context faba6a07 */ $pane->cache = array();
   /* node_view_panel_context faba6a07 */ $pane->style = array(
   /* node_view_panel_context faba6a07 */   'settings' => NULL,
   /* node_view_panel_context faba6a07 */ );
   /* node_view_panel_context faba6a07 */ $pane->css = array();
   /* node_view_panel_context faba6a07 */ $pane->extras = array();
   /* node_view_panel_context faba6a07 */ $pane->position = 1;
   /* node_view_panel_context faba6a07 */ $pane->locks = array();
   /* node_view_panel_context faba6a07 */ $pane->uuid = 'faba6a07-ecb7-41ae-ba25-ec3a77db1f88';
  $display->content['new-faba6a07-ecb7-41ae-ba25-ec3a77db1f88'] = $pane;
  $display->panels['main_top'][1] = 'new-faba6a07-ecb7-41ae-ba25-ec3a77db1f88';
   /* node_view_panel_context 4c453585 */ $pane = new stdClass();
   /* node_view_panel_context 4c453585 */ $pane->pid = 'new-4c453585-9d3d-44b3-862a-d092828790f2';
   /* node_view_panel_context 4c453585 */ $pane->panel = 'sidebar';
   /* node_view_panel_context 4c453585 */ $pane->type = 'views';
   /* node_view_panel_context 4c453585 */ $pane->subtype = 'users_contact_history_info';
   /* node_view_panel_context 4c453585 */ $pane->shown = TRUE;
   /* node_view_panel_context 4c453585 */ $pane->access = array();
   /* node_view_panel_context 4c453585 */ $pane->configuration = array(
   /* node_view_panel_context 4c453585 */   'override_pager_settings' => 0,
   /* node_view_panel_context 4c453585 */   'use_pager' => 0,
   /* node_view_panel_context 4c453585 */   'nodes_per_page' => '0',
   /* node_view_panel_context 4c453585 */   'pager_id' => '0',
   /* node_view_panel_context 4c453585 */   'offset' => '0',
   /* node_view_panel_context 4c453585 */   'more_link' => 0,
   /* node_view_panel_context 4c453585 */   'feed_icons' => 0,
   /* node_view_panel_context 4c453585 */   'panel_args' => 0,
   /* node_view_panel_context 4c453585 */   'link_to_view' => 0,
   /* node_view_panel_context 4c453585 */   'args' => '',
   /* node_view_panel_context 4c453585 */   'url' => '',
   /* node_view_panel_context 4c453585 */   'display' => 'block_1',
   /* node_view_panel_context 4c453585 */   'context' => array(
   /* node_view_panel_context 4c453585 */     0 => 'argument_user_edit_1.uid',
   /* node_view_panel_context 4c453585 */   ),
   /* node_view_panel_context 4c453585 */   'override_title' => 1,
   /* node_view_panel_context 4c453585 */   'override_title_text' => '',
   /* node_view_panel_context 4c453585 */   'override_title_heading' => 'h2',
   /* node_view_panel_context 4c453585 */ );
   /* node_view_panel_context 4c453585 */ $pane->cache = array();
   /* node_view_panel_context 4c453585 */ $pane->style = array(
   /* node_view_panel_context 4c453585 */   'settings' => NULL,
   /* node_view_panel_context 4c453585 */ );
   /* node_view_panel_context 4c453585 */ $pane->css = array();
   /* node_view_panel_context 4c453585 */ $pane->extras = array();
   /* node_view_panel_context 4c453585 */ $pane->position = 0;
   /* node_view_panel_context 4c453585 */ $pane->locks = array();
   /* node_view_panel_context 4c453585 */ $pane->uuid = '4c453585-9d3d-44b3-862a-d092828790f2';
  $display->content['new-4c453585-9d3d-44b3-862a-d092828790f2'] = $pane;
  $display->panels['sidebar'][0] = 'new-4c453585-9d3d-44b3-862a-d092828790f2';
   /* node_view_panel_context a5730196 */ $pane = new stdClass();
   /* node_view_panel_context a5730196 */ $pane->pid = 'new-a5730196-dff8-477d-929f-50d8482ada5b';
   /* node_view_panel_context a5730196 */ $pane->panel = 'sidebar';
   /* node_view_panel_context a5730196 */ $pane->type = 'custom';
   /* node_view_panel_context a5730196 */ $pane->subtype = 'custom';
   /* node_view_panel_context a5730196 */ $pane->shown = TRUE;
   /* node_view_panel_context a5730196 */ $pane->access = array();
   /* node_view_panel_context a5730196 */ $pane->configuration = array(
   /* node_view_panel_context a5730196 */   'admin_title' => '',
   /* node_view_panel_context a5730196 */   'title' => '',
   /* node_view_panel_context a5730196 */   'body' => '<a href="/user/%user:uid" title="View my profile" class="button small-text" style="margin-bottom:0;">View my Profile</a>',
   /* node_view_panel_context a5730196 */   'format' => 'php_code',
   /* node_view_panel_context a5730196 */   'substitute' => 1,
   /* node_view_panel_context a5730196 */ );
   /* node_view_panel_context a5730196 */ $pane->cache = array();
   /* node_view_panel_context a5730196 */ $pane->style = array(
   /* node_view_panel_context a5730196 */   'settings' => NULL,
   /* node_view_panel_context a5730196 */ );
   /* node_view_panel_context a5730196 */ $pane->css = array();
   /* node_view_panel_context a5730196 */ $pane->extras = array();
   /* node_view_panel_context a5730196 */ $pane->position = 1;
   /* node_view_panel_context a5730196 */ $pane->locks = array();
   /* node_view_panel_context a5730196 */ $pane->uuid = 'a5730196-dff8-477d-929f-50d8482ada5b';
  $display->content['new-a5730196-dff8-477d-929f-50d8482ada5b'] = $pane;
  $display->panels['sidebar'][1] = 'new-a5730196-dff8-477d-929f-50d8482ada5b';
   /* node_view_panel_context 2ff50881 */ $pane = new stdClass();
   /* node_view_panel_context 2ff50881 */ $pane->pid = 'new-2ff50881-3cd0-464f-baeb-5c3640303268';
   /* node_view_panel_context 2ff50881 */ $pane->panel = 'sidebar';
   /* node_view_panel_context 2ff50881 */ $pane->type = 'views';
   /* node_view_panel_context 2ff50881 */ $pane->subtype = 'users_contact_history_info';
   /* node_view_panel_context 2ff50881 */ $pane->shown = TRUE;
   /* node_view_panel_context 2ff50881 */ $pane->access = array();
   /* node_view_panel_context 2ff50881 */ $pane->configuration = array(
   /* node_view_panel_context 2ff50881 */   'override_pager_settings' => 0,
   /* node_view_panel_context 2ff50881 */   'use_pager' => 0,
   /* node_view_panel_context 2ff50881 */   'nodes_per_page' => '5',
   /* node_view_panel_context 2ff50881 */   'pager_id' => '0',
   /* node_view_panel_context 2ff50881 */   'offset' => '0',
   /* node_view_panel_context 2ff50881 */   'more_link' => 0,
   /* node_view_panel_context 2ff50881 */   'feed_icons' => 0,
   /* node_view_panel_context 2ff50881 */   'panel_args' => 0,
   /* node_view_panel_context 2ff50881 */   'link_to_view' => 0,
   /* node_view_panel_context 2ff50881 */   'args' => '',
   /* node_view_panel_context 2ff50881 */   'url' => '',
   /* node_view_panel_context 2ff50881 */   'display' => 'block',
   /* node_view_panel_context 2ff50881 */   'context' => array(
   /* node_view_panel_context 2ff50881 */     0 => 'argument_user_edit_1.uid',
   /* node_view_panel_context 2ff50881 */   ),
   /* node_view_panel_context 2ff50881 */   'override_title' => 1,
   /* node_view_panel_context 2ff50881 */   'override_title_text' => '',
   /* node_view_panel_context 2ff50881 */   'override_title_heading' => 'h2',
   /* node_view_panel_context 2ff50881 */ );
   /* node_view_panel_context 2ff50881 */ $pane->cache = array();
   /* node_view_panel_context 2ff50881 */ $pane->style = array(
   /* node_view_panel_context 2ff50881 */   'settings' => array(
   /* node_view_panel_context 2ff50881 */     'clean_markup' => array(
   /* node_view_panel_context 2ff50881 */       'pane_wrapper' => 'div',
   /* node_view_panel_context 2ff50881 */       'additional_pane_classes' => 'panel-pane',
   /* node_view_panel_context 2ff50881 */       'additional_pane_attributes' => '',
   /* node_view_panel_context 2ff50881 */       'enable_inner_div' => 0,
   /* node_view_panel_context 2ff50881 */       'title_wrapper' => 'h3',
   /* node_view_panel_context 2ff50881 */       'title_hide' => 0,
   /* node_view_panel_context 2ff50881 */       'content_wrapper' => 'none',
   /* node_view_panel_context 2ff50881 */     ),
   /* node_view_panel_context 2ff50881 */   ),
   /* node_view_panel_context 2ff50881 */   'style' => 'clean_element',
   /* node_view_panel_context 2ff50881 */ );
   /* node_view_panel_context 2ff50881 */ $pane->css = array();
   /* node_view_panel_context 2ff50881 */ $pane->extras = array();
   /* node_view_panel_context 2ff50881 */ $pane->position = 2;
   /* node_view_panel_context 2ff50881 */ $pane->locks = array();
   /* node_view_panel_context 2ff50881 */ $pane->uuid = '2ff50881-3cd0-464f-baeb-5c3640303268';
  $display->content['new-2ff50881-3cd0-464f-baeb-5c3640303268'] = $pane;
  $display->panels['sidebar'][2] = 'new-2ff50881-3cd0-464f-baeb-5c3640303268';
   /* node_view_panel_context dd41dd6b */ $pane = new stdClass();
   /* node_view_panel_context dd41dd6b */ $pane->pid = 'new-dd41dd6b-4d61-4361-9626-e29bf5584501';
   /* node_view_panel_context dd41dd6b */ $pane->panel = 'sidebar';
   /* node_view_panel_context dd41dd6b */ $pane->type = 'views_panes';
   /* node_view_panel_context dd41dd6b */ $pane->subtype = 'users_contact_history_info-panel_pane_1';
   /* node_view_panel_context dd41dd6b */ $pane->shown = TRUE;
   /* node_view_panel_context dd41dd6b */ $pane->access = array();
   /* node_view_panel_context dd41dd6b */ $pane->configuration = array(
   /* node_view_panel_context dd41dd6b */   'arguments' => array(
   /* node_view_panel_context dd41dd6b */     'type' => 'organization',
   /* node_view_panel_context dd41dd6b */   ),
   /* node_view_panel_context dd41dd6b */   'override_title' => 1,
   /* node_view_panel_context dd41dd6b */   'override_title_text' => 'Organizations',
   /* node_view_panel_context dd41dd6b */   'override_title_heading' => 'h3',
   /* node_view_panel_context dd41dd6b */ );
   /* node_view_panel_context dd41dd6b */ $pane->cache = array();
   /* node_view_panel_context dd41dd6b */ $pane->style = array(
   /* node_view_panel_context dd41dd6b */   'settings' => array(
   /* node_view_panel_context dd41dd6b */     'clean_markup' => array(
   /* node_view_panel_context dd41dd6b */       'pane_wrapper' => 'div',
   /* node_view_panel_context dd41dd6b */       'additional_pane_classes' => 'panel-pane',
   /* node_view_panel_context dd41dd6b */       'additional_pane_attributes' => '',
   /* node_view_panel_context dd41dd6b */       'enable_inner_div' => 0,
   /* node_view_panel_context dd41dd6b */       'title_wrapper' => 'h3',
   /* node_view_panel_context dd41dd6b */       'title_hide' => 0,
   /* node_view_panel_context dd41dd6b */       'content_wrapper' => 'none',
   /* node_view_panel_context dd41dd6b */     ),
   /* node_view_panel_context dd41dd6b */   ),
   /* node_view_panel_context dd41dd6b */   'style' => 'clean_element',
   /* node_view_panel_context dd41dd6b */ );
   /* node_view_panel_context dd41dd6b */ $pane->css = array();
   /* node_view_panel_context dd41dd6b */ $pane->extras = array();
   /* node_view_panel_context dd41dd6b */ $pane->position = 3;
   /* node_view_panel_context dd41dd6b */ $pane->locks = array();
   /* node_view_panel_context dd41dd6b */ $pane->uuid = 'dd41dd6b-4d61-4361-9626-e29bf5584501';
  $display->content['new-dd41dd6b-4d61-4361-9626-e29bf5584501'] = $pane;
  $display->panels['sidebar'][3] = 'new-dd41dd6b-4d61-4361-9626-e29bf5584501';
   /* node_view_panel_context f251d437 */ $pane = new stdClass();
   /* node_view_panel_context f251d437 */ $pane->pid = 'new-f251d437-7c73-4005-bbde-20a90ebf4f27';
   /* node_view_panel_context f251d437 */ $pane->panel = 'sidebar';
   /* node_view_panel_context f251d437 */ $pane->type = 'views_panes';
   /* node_view_panel_context f251d437 */ $pane->subtype = 'users_contact_history_info-panel_pane_1';
   /* node_view_panel_context f251d437 */ $pane->shown = TRUE;
   /* node_view_panel_context f251d437 */ $pane->access = array();
   /* node_view_panel_context f251d437 */ $pane->configuration = array(
   /* node_view_panel_context f251d437 */   'arguments' => array(
   /* node_view_panel_context f251d437 */     'type' => 'group',
   /* node_view_panel_context f251d437 */   ),
   /* node_view_panel_context f251d437 */   'override_title' => 1,
   /* node_view_panel_context f251d437 */   'override_title_text' => 'Groups',
   /* node_view_panel_context f251d437 */   'override_title_heading' => 'h2',
   /* node_view_panel_context f251d437 */ );
   /* node_view_panel_context f251d437 */ $pane->cache = array();
   /* node_view_panel_context f251d437 */ $pane->style = array(
   /* node_view_panel_context f251d437 */   'settings' => array(
   /* node_view_panel_context f251d437 */     'clean_markup' => array(
   /* node_view_panel_context f251d437 */       'pane_wrapper' => 'div',
   /* node_view_panel_context f251d437 */       'additional_pane_classes' => 'panel-pane',
   /* node_view_panel_context f251d437 */       'additional_pane_attributes' => '',
   /* node_view_panel_context f251d437 */       'enable_inner_div' => 0,
   /* node_view_panel_context f251d437 */       'title_wrapper' => 'h3',
   /* node_view_panel_context f251d437 */       'title_hide' => 0,
   /* node_view_panel_context f251d437 */       'content_wrapper' => 'none',
   /* node_view_panel_context f251d437 */     ),
   /* node_view_panel_context f251d437 */   ),
   /* node_view_panel_context f251d437 */   'style' => 'clean_element',
   /* node_view_panel_context f251d437 */ );
   /* node_view_panel_context f251d437 */ $pane->css = array();
   /* node_view_panel_context f251d437 */ $pane->extras = array();
   /* node_view_panel_context f251d437 */ $pane->position = 4;
   /* node_view_panel_context f251d437 */ $pane->locks = array();
   /* node_view_panel_context f251d437 */ $pane->uuid = 'f251d437-7c73-4005-bbde-20a90ebf4f27';
  $display->content['new-f251d437-7c73-4005-bbde-20a90ebf4f27'] = $pane;
  $display->panels['sidebar'][4] = 'new-f251d437-7c73-4005-bbde-20a90ebf4f27';
   /* node_view_panel_context cdf45030 */ $pane = new stdClass();
   /* node_view_panel_context cdf45030 */ $pane->pid = 'new-cdf45030-c5db-463b-8a93-5d0f6f1bf914';
   /* node_view_panel_context cdf45030 */ $pane->panel = 'sidebar';
   /* node_view_panel_context cdf45030 */ $pane->type = 'views_panes';
   /* node_view_panel_context cdf45030 */ $pane->subtype = 'users_contact_history_info-panel_pane_1';
   /* node_view_panel_context cdf45030 */ $pane->shown = TRUE;
   /* node_view_panel_context cdf45030 */ $pane->access = array();
   /* node_view_panel_context cdf45030 */ $pane->configuration = array(
   /* node_view_panel_context cdf45030 */   'arguments' => array(
   /* node_view_panel_context cdf45030 */     'type' => 'course',
   /* node_view_panel_context cdf45030 */   ),
   /* node_view_panel_context cdf45030 */   'override_title' => 1,
   /* node_view_panel_context cdf45030 */   'override_title_text' => 'Courses',
   /* node_view_panel_context cdf45030 */   'override_title_heading' => 'h3',
   /* node_view_panel_context cdf45030 */ );
   /* node_view_panel_context cdf45030 */ $pane->cache = array();
   /* node_view_panel_context cdf45030 */ $pane->style = array(
   /* node_view_panel_context cdf45030 */   'settings' => array(
   /* node_view_panel_context cdf45030 */     'clean_markup' => array(
   /* node_view_panel_context cdf45030 */       'pane_wrapper' => 'div',
   /* node_view_panel_context cdf45030 */       'additional_pane_classes' => 'panel-pane',
   /* node_view_panel_context cdf45030 */       'additional_pane_attributes' => '',
   /* node_view_panel_context cdf45030 */       'enable_inner_div' => 0,
   /* node_view_panel_context cdf45030 */       'title_wrapper' => 'h3',
   /* node_view_panel_context cdf45030 */       'title_hide' => 0,
   /* node_view_panel_context cdf45030 */       'content_wrapper' => 'none',
   /* node_view_panel_context cdf45030 */     ),
   /* node_view_panel_context cdf45030 */   ),
   /* node_view_panel_context cdf45030 */   'style' => 'clean_element',
   /* node_view_panel_context cdf45030 */ );
   /* node_view_panel_context cdf45030 */ $pane->css = array();
   /* node_view_panel_context cdf45030 */ $pane->extras = array();
   /* node_view_panel_context cdf45030 */ $pane->position = 5;
   /* node_view_panel_context cdf45030 */ $pane->locks = array();
   /* node_view_panel_context cdf45030 */ $pane->uuid = 'cdf45030-c5db-463b-8a93-5d0f6f1bf914';
  $display->content['new-cdf45030-c5db-463b-8a93-5d0f6f1bf914'] = $pane;
  $display->panels['sidebar'][5] = 'new-cdf45030-c5db-463b-8a93-5d0f6f1bf914';
   /* node_view_panel_context 7c5db514 */ $pane = new stdClass();
   /* node_view_panel_context 7c5db514 */ $pane->pid = 'new-7c5db514-b0ec-4d87-8c99-1ae14d3e0738';
   /* node_view_panel_context 7c5db514 */ $pane->panel = 'sidebar';
   /* node_view_panel_context 7c5db514 */ $pane->type = 'views';
   /* node_view_panel_context 7c5db514 */ $pane->subtype = 'activity_default_page';
   /* node_view_panel_context 7c5db514 */ $pane->shown = TRUE;
   /* node_view_panel_context 7c5db514 */ $pane->access = array();
   /* node_view_panel_context 7c5db514 */ $pane->configuration = array(
   /* node_view_panel_context 7c5db514 */   'override_pager_settings' => 0,
   /* node_view_panel_context 7c5db514 */   'use_pager' => 0,
   /* node_view_panel_context 7c5db514 */   'nodes_per_page' => '2',
   /* node_view_panel_context 7c5db514 */   'pager_id' => '0',
   /* node_view_panel_context 7c5db514 */   'offset' => '0',
   /* node_view_panel_context 7c5db514 */   'more_link' => 0,
   /* node_view_panel_context 7c5db514 */   'feed_icons' => 0,
   /* node_view_panel_context 7c5db514 */   'panel_args' => 0,
   /* node_view_panel_context 7c5db514 */   'link_to_view' => 0,
   /* node_view_panel_context 7c5db514 */   'args' => '',
   /* node_view_panel_context 7c5db514 */   'url' => '',
   /* node_view_panel_context 7c5db514 */   'display' => 'block_1',
   /* node_view_panel_context 7c5db514 */   'override_title' => 0,
   /* node_view_panel_context 7c5db514 */   'override_title_text' => '',
   /* node_view_panel_context 7c5db514 */   'override_title_heading' => 'h2',
   /* node_view_panel_context 7c5db514 */ );
   /* node_view_panel_context 7c5db514 */ $pane->cache = array();
   /* node_view_panel_context 7c5db514 */ $pane->style = array(
   /* node_view_panel_context 7c5db514 */   'settings' => NULL,
   /* node_view_panel_context 7c5db514 */ );
   /* node_view_panel_context 7c5db514 */ $pane->css = array();
   /* node_view_panel_context 7c5db514 */ $pane->extras = array();
   /* node_view_panel_context 7c5db514 */ $pane->position = 6;
   /* node_view_panel_context 7c5db514 */ $pane->locks = array();
   /* node_view_panel_context 7c5db514 */ $pane->uuid = '7c5db514-b0ec-4d87-8c99-1ae14d3e0738';
  $display->content['new-7c5db514-b0ec-4d87-8c99-1ae14d3e0738'] = $pane;
  $display->panels['sidebar'][6] = 'new-7c5db514-b0ec-4d87-8c99-1ae14d3e0738';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da'] = $handler;

   /* user_view__user_profile_dashboard */ $handler = new stdClass();
   /* user_view__user_profile_dashboard */ $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
   /* user_view__user_profile_dashboard */ $handler->api_version = 1;
   /* user_view__user_profile_dashboard */ $handler->name = 'user_view__user_profile_dashboard';
   /* user_view__user_profile_dashboard */ $handler->task = 'user_view';
   /* user_view__user_profile_dashboard */ $handler->subtask = '';
   /* user_view__user_profile_dashboard */ $handler->handler = 'panel_context';
   /* user_view__user_profile_dashboard */ $handler->weight = -99;
   /* user_view__user_profile_dashboard */ $handler->conf = array(
   /* user_view__user_profile_dashboard */   'title' => 'User Profile Dashboard',
   /* user_view__user_profile_dashboard */   'no_blocks' => 0,
   /* user_view__user_profile_dashboard */   'pipeline' => 'standard',
   /* user_view__user_profile_dashboard */   'body_classes_to_remove' => '',
   /* user_view__user_profile_dashboard */   'body_classes_to_add' => '',
   /* user_view__user_profile_dashboard */   'css_id' => '',
   /* user_view__user_profile_dashboard */   'css' => '',
   /* user_view__user_profile_dashboard */   'contexts' => array(),
   /* user_view__user_profile_dashboard */   'relationships' => array(),
   /* user_view__user_profile_dashboard */   'name' => 'user_profile_dashboard',
   /* user_view__user_profile_dashboard */ );
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da e4398fa0 */ $display = new panels_display();
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da e4398fa0 */ $display->layout = 'gn2_2colstackedflipped';
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da e4398fa0 */ $display->layout_settings = array(
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da e4398fa0 */   'items' => array(
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da e4398fa0 */     'canvas' => array(
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da e4398fa0 */       'type' => 'row',
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da e4398fa0 */       'contains' => 'column',
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da e4398fa0 */       'children' => array(
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da e4398fa0 */         0 => 1,
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da e4398fa0 */         1 => 'main',
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da e4398fa0 */       ),
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da e4398fa0 */       'parent' => NULL,
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da e4398fa0 */     ),
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da e4398fa0 */     'main' => array(
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da e4398fa0 */       'type' => 'column',
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da e4398fa0 */       'width' => '75.04010331244059',
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da e4398fa0 */       'width_type' => '%',
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da e4398fa0 */       'children' => array(
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da e4398fa0 */         0 => 3,
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da e4398fa0 */         1 => 'main-row',
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da e4398fa0 */       ),
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da e4398fa0 */       'parent' => 'canvas',
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da e4398fa0 */     ),
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da e4398fa0 */     'main-row' => array(
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da e4398fa0 */       'type' => 'row',
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da e4398fa0 */       'contains' => 'region',
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da e4398fa0 */       'children' => array(
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da e4398fa0 */         0 => 'center',
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da e4398fa0 */       ),
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da e4398fa0 */       'parent' => 'main',
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da e4398fa0 */     ),
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da e4398fa0 */     'center' => array(
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da e4398fa0 */       'type' => 'region',
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da e4398fa0 */       'title' => 'Center',
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da e4398fa0 */       'width' => 100,
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da e4398fa0 */       'width_type' => '%',
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da e4398fa0 */       'parent' => 'main-row',
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da e4398fa0 */       'class' => '',
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da e4398fa0 */       'hide_empty' => 0,
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da e4398fa0 */     ),
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da e4398fa0 */     1 => array(
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da e4398fa0 */       'type' => 'column',
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da e4398fa0 */       'width' => '24.95989668755941',
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da e4398fa0 */       'width_type' => '%',
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da e4398fa0 */       'parent' => 'canvas',
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da e4398fa0 */       'children' => array(
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da e4398fa0 */         0 => 2,
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da e4398fa0 */       ),
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da e4398fa0 */       'class' => '',
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da e4398fa0 */       'hide_empty' => 0,
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da e4398fa0 */     ),
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da e4398fa0 */     2 => array(
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da e4398fa0 */       'type' => 'row',
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da e4398fa0 */       'contains' => 'region',
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da e4398fa0 */       'children' => array(
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da e4398fa0 */         0 => 'sidebar',
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da e4398fa0 */       ),
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da e4398fa0 */       'parent' => '1',
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da e4398fa0 */       'class' => '',
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da e4398fa0 */       'hide_empty' => 0,
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da e4398fa0 */     ),
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da e4398fa0 */     'sidebar' => array(
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da e4398fa0 */       'type' => 'region',
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da e4398fa0 */       'title' => 'Sidebar',
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da e4398fa0 */       'width' => 100,
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da e4398fa0 */       'width_type' => '%',
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da e4398fa0 */       'parent' => '2',
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da e4398fa0 */       'class' => '',
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da e4398fa0 */       'hide_empty' => 0,
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da e4398fa0 */     ),
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da e4398fa0 */     3 => array(
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da e4398fa0 */       'type' => 'row',
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da e4398fa0 */       'contains' => 'region',
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da e4398fa0 */       'children' => array(
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da e4398fa0 */         0 => 'top',
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da e4398fa0 */       ),
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da e4398fa0 */       'parent' => 'main',
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da e4398fa0 */       'class' => '',
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da e4398fa0 */       'hide_empty' => 0,
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da e4398fa0 */     ),
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da e4398fa0 */     'top' => array(
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da e4398fa0 */       'type' => 'region',
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da e4398fa0 */       'title' => 'Top',
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da e4398fa0 */       'width' => 100,
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da e4398fa0 */       'width_type' => '%',
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da e4398fa0 */       'parent' => '3',
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da e4398fa0 */       'class' => '',
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da e4398fa0 */       'hide_empty' => 0,
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da e4398fa0 */     ),
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da e4398fa0 */   ),
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da e4398fa0 */ );
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da e4398fa0 */ $display->panel_settings = array(
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da e4398fa0 */   'style_settings' => array(
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da e4398fa0 */     'default' => NULL,
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da e4398fa0 */     'center' => NULL,
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da e4398fa0 */     'sidebar' => NULL,
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da e4398fa0 */     'top' => NULL,
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da e4398fa0 */     'main_bottom' => NULL,
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da e4398fa0 */     'main_top' => array(
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da e4398fa0 */       'clean_markup' => array(
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da e4398fa0 */         'region_wrapper' => 'div',
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da e4398fa0 */         'additional_region_classes' => 'user__profile--header',
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da e4398fa0 */         'additional_region_attributes' => '',
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da e4398fa0 */         'enable_inner_div' => 0,
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da e4398fa0 */         'pane_separators' => 0,
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da e4398fa0 */       ),
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da e4398fa0 */     ),
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da e4398fa0 */     'footer' => NULL,
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da e4398fa0 */   ),
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da e4398fa0 */   'center' => array(
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da e4398fa0 */     'style' => 'tabs',
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da e4398fa0 */   ),
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da e4398fa0 */   'main_bottom' => array(
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da e4398fa0 */     'style' => 'tabs',
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da e4398fa0 */   ),
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da e4398fa0 */   'main_top' => array(
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da e4398fa0 */     'style' => 'clean_element',
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da e4398fa0 */   ),
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da e4398fa0 */ );
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da e4398fa0 */ $display->cache = array();
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da e4398fa0 */ $display->title = '';
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da e4398fa0 */ $display->uuid = 'e4398fa0-01f6-46ec-8341-d2524c49f509';
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da e4398fa0 */ $display->storage_type = 'page_manager';
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da e4398fa0 */ $display->storage_id = 'user_view__user_profile_dashboard';
  $display->content = array();
  $display->panels = array();
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 861b1b66 */ $pane = new stdClass();
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 861b1b66 */ $pane->pid = 'new-861b1b66-59c4-4af5-8c89-e0a2d48035fd';
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 861b1b66 */ $pane->panel = 'main_bottom';
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 861b1b66 */ $pane->type = 'views';
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 861b1b66 */ $pane->subtype = 'users_contact_history_info';
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 861b1b66 */ $pane->shown = TRUE;
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 861b1b66 */ $pane->access = array();
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 861b1b66 */ $pane->configuration = array(
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 861b1b66 */   'override_pager_settings' => 0,
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 861b1b66 */   'use_pager' => 0,
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 861b1b66 */   'nodes_per_page' => '5',
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 861b1b66 */   'pager_id' => '0',
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 861b1b66 */   'offset' => '0',
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 861b1b66 */   'more_link' => 0,
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 861b1b66 */   'feed_icons' => 0,
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 861b1b66 */   'panel_args' => 0,
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 861b1b66 */   'link_to_view' => 0,
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 861b1b66 */   'args' => '',
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 861b1b66 */   'url' => '',
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 861b1b66 */   'display' => 'block_4',
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 861b1b66 */   'context' => array(
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 861b1b66 */     0 => 'argument_entity_id:user_1.uid',
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 861b1b66 */   ),
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 861b1b66 */   'override_title' => 0,
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 861b1b66 */   'override_title_text' => '',
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 861b1b66 */   'override_title_heading' => 'h2',
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 861b1b66 */ );
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 861b1b66 */ $pane->cache = array();
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 861b1b66 */ $pane->style = array(
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 861b1b66 */   'settings' => NULL,
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 861b1b66 */ );
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 861b1b66 */ $pane->css = array();
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 861b1b66 */ $pane->extras = array();
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 861b1b66 */ $pane->position = 0;
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 861b1b66 */ $pane->locks = array();
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 861b1b66 */ $pane->uuid = '861b1b66-59c4-4af5-8c89-e0a2d48035fd';
  $display->content['new-861b1b66-59c4-4af5-8c89-e0a2d48035fd'] = $pane;
  $display->panels['main_bottom'][0] = 'new-861b1b66-59c4-4af5-8c89-e0a2d48035fd';
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 7b458798 */ $pane = new stdClass();
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 7b458798 */ $pane->pid = 'new-7b458798-de9c-40d4-8f4d-d3d8b6a836bb';
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 7b458798 */ $pane->panel = 'main_bottom';
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 7b458798 */ $pane->type = 'views';
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 7b458798 */ $pane->subtype = 'users_contact_history_info';
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 7b458798 */ $pane->shown = TRUE;
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 7b458798 */ $pane->access = array();
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 7b458798 */ $pane->configuration = array(
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 7b458798 */   'override_pager_settings' => 0,
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 7b458798 */   'use_pager' => 0,
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 7b458798 */   'nodes_per_page' => '5',
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 7b458798 */   'pager_id' => '0',
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 7b458798 */   'offset' => '0',
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 7b458798 */   'more_link' => 0,
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 7b458798 */   'feed_icons' => 0,
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 7b458798 */   'panel_args' => 0,
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 7b458798 */   'link_to_view' => 0,
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 7b458798 */   'args' => '',
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 7b458798 */   'url' => '',
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 7b458798 */   'display' => 'block_5',
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 7b458798 */   'context' => array(
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 7b458798 */     0 => 'argument_entity_id:user_1.uid',
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 7b458798 */   ),
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 7b458798 */   'override_title' => 0,
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 7b458798 */   'override_title_text' => '',
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 7b458798 */   'override_title_heading' => 'h2',
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 7b458798 */ );
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 7b458798 */ $pane->cache = array();
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 7b458798 */ $pane->style = array(
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 7b458798 */   'settings' => NULL,
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 7b458798 */ );
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 7b458798 */ $pane->css = array();
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 7b458798 */ $pane->extras = array();
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 7b458798 */ $pane->position = 1;
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 7b458798 */ $pane->locks = array();
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 7b458798 */ $pane->uuid = '7b458798-de9c-40d4-8f4d-d3d8b6a836bb';
  $display->content['new-7b458798-de9c-40d4-8f4d-d3d8b6a836bb'] = $pane;
  $display->panels['main_bottom'][1] = 'new-7b458798-de9c-40d4-8f4d-d3d8b6a836bb';
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 60d30ba5 */ $pane = new stdClass();
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 60d30ba5 */ $pane->pid = 'new-60d30ba5-53c7-4239-b959-72b2fa2b05d7';
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 60d30ba5 */ $pane->panel = 'main_bottom';
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 60d30ba5 */ $pane->type = 'views_panes';
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 60d30ba5 */ $pane->subtype = 'comments_display-panel_pane_2';
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 60d30ba5 */ $pane->shown = TRUE;
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 60d30ba5 */ $pane->access = array();
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 60d30ba5 */ $pane->configuration = array(
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 60d30ba5 */   'override_title' => 1,
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 60d30ba5 */   'override_title_text' => 'Comments',
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 60d30ba5 */   'override_title_heading' => 'h3',
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 60d30ba5 */ );
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 60d30ba5 */ $pane->cache = array();
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 60d30ba5 */ $pane->style = array(
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 60d30ba5 */   'settings' => array(
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 60d30ba5 */     'clean_markup' => array(
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 60d30ba5 */       'pane_wrapper' => 'div',
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 60d30ba5 */       'additional_pane_classes' => 'panel-pane user-profile--comments override-accordion',
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 60d30ba5 */       'additional_pane_attributes' => '',
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 60d30ba5 */       'enable_inner_div' => 1,
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 60d30ba5 */       'title_wrapper' => 'h3',
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 60d30ba5 */       'title_hide' => 0,
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 60d30ba5 */       'content_wrapper' => 'none',
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 60d30ba5 */     ),
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 60d30ba5 */   ),
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 60d30ba5 */   'style' => 'clean_element',
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 60d30ba5 */ );
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 60d30ba5 */ $pane->css = array();
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 60d30ba5 */ $pane->extras = array();
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 60d30ba5 */ $pane->position = 2;
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 60d30ba5 */ $pane->locks = array();
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 60d30ba5 */ $pane->uuid = '60d30ba5-53c7-4239-b959-72b2fa2b05d7';
  $display->content['new-60d30ba5-53c7-4239-b959-72b2fa2b05d7'] = $pane;
  $display->panels['main_bottom'][2] = 'new-60d30ba5-53c7-4239-b959-72b2fa2b05d7';
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 3e39c696 */ $pane = new stdClass();
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 3e39c696 */ $pane->pid = 'new-3e39c696-75a3-44c5-a936-95d6daea7908';
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 3e39c696 */ $pane->panel = 'main_bottom';
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 3e39c696 */ $pane->type = 'views_panes';
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 3e39c696 */ $pane->subtype = 'users_contact_history_info-panel_pane_3';
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 3e39c696 */ $pane->shown = TRUE;
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 3e39c696 */ $pane->access = array();
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 3e39c696 */ $pane->configuration = array();
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 3e39c696 */ $pane->cache = array();
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 3e39c696 */ $pane->style = array(
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 3e39c696 */   'settings' => array(
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 3e39c696 */     'clean_markup' => array(
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 3e39c696 */       'pane_wrapper' => 'div',
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 3e39c696 */       'additional_pane_classes' => 'panel-pane user-profile--posts override-accordion',
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 3e39c696 */       'additional_pane_attributes' => '',
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 3e39c696 */       'enable_inner_div' => 1,
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 3e39c696 */       'title_wrapper' => 'h3',
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 3e39c696 */       'title_hide' => 0,
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 3e39c696 */       'content_wrapper' => 'none',
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 3e39c696 */     ),
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 3e39c696 */   ),
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 3e39c696 */   'style' => 'clean_element',
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 3e39c696 */ );
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 3e39c696 */ $pane->css = array();
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 3e39c696 */ $pane->extras = array();
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 3e39c696 */ $pane->position = 3;
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 3e39c696 */ $pane->locks = array();
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 3e39c696 */ $pane->uuid = '3e39c696-75a3-44c5-a936-95d6daea7908';
  $display->content['new-3e39c696-75a3-44c5-a936-95d6daea7908'] = $pane;
  $display->panels['main_bottom'][3] = 'new-3e39c696-75a3-44c5-a936-95d6daea7908';
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 97d8cfbc */ $pane = new stdClass();
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 97d8cfbc */ $pane->pid = 'new-97d8cfbc-e13d-4665-8c65-f102d15b46ec';
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 97d8cfbc */ $pane->panel = 'main_top';
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 97d8cfbc */ $pane->type = 'views_panes';
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 97d8cfbc */ $pane->subtype = 'users_contact_history_info-panel_pane_4';
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 97d8cfbc */ $pane->shown = TRUE;
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 97d8cfbc */ $pane->access = array();
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 97d8cfbc */ $pane->configuration = array(
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 97d8cfbc */   'fields_override' => array(
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 97d8cfbc */     'field_name_last' => 0,
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 97d8cfbc */     'field_name_middle' => 0,
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 97d8cfbc */     'field_name_first' => 0,
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 97d8cfbc */     'name' => 0,
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 97d8cfbc */     'nothing' => 1,
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 97d8cfbc */     'nothing_1' => 0,
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 97d8cfbc */     'field_country_of_residence' => 0,
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 97d8cfbc */     'language' => 0,
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 97d8cfbc */     'view_user' => 0,
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 97d8cfbc */     'edit_node' => 0,
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 97d8cfbc */     'nothing_2' => 0,
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 97d8cfbc */     'nothing_3' => 0,
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 97d8cfbc */     'nothing_4' => 0,
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 97d8cfbc */   ),
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 97d8cfbc */   'override_title' => 1,
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 97d8cfbc */   'override_title_text' => '',
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 97d8cfbc */   'override_title_heading' => 'h2',
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 97d8cfbc */ );
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 97d8cfbc */ $pane->cache = array();
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 97d8cfbc */ $pane->style = array(
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 97d8cfbc */   'settings' => array(
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 97d8cfbc */     'clean_markup' => array(
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 97d8cfbc */       'pane_wrapper' => 'div',
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 97d8cfbc */       'additional_pane_classes' => 'panel-pane user-profile--header-name',
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 97d8cfbc */       'additional_pane_attributes' => '',
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 97d8cfbc */       'enable_inner_div' => 0,
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 97d8cfbc */       'title_wrapper' => 'h2',
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 97d8cfbc */       'title_hide' => 0,
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 97d8cfbc */       'content_wrapper' => 'none',
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 97d8cfbc */     ),
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 97d8cfbc */   ),
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 97d8cfbc */   'style' => 'clean_element',
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 97d8cfbc */ );
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 97d8cfbc */ $pane->css = array();
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 97d8cfbc */ $pane->extras = array();
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 97d8cfbc */ $pane->position = 0;
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 97d8cfbc */ $pane->locks = array();
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 97d8cfbc */ $pane->uuid = '97d8cfbc-e13d-4665-8c65-f102d15b46ec';
  $display->content['new-97d8cfbc-e13d-4665-8c65-f102d15b46ec'] = $pane;
  $display->panels['main_top'][0] = 'new-97d8cfbc-e13d-4665-8c65-f102d15b46ec';
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 3308db82 */ $pane = new stdClass();
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 3308db82 */ $pane->pid = 'new-3308db82-4a8e-41c1-ac11-9a24be940fa2';
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 3308db82 */ $pane->panel = 'main_top';
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 3308db82 */ $pane->type = 'views';
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 3308db82 */ $pane->subtype = 'users_contact_history_info';
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 3308db82 */ $pane->shown = TRUE;
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 3308db82 */ $pane->access = array(
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 3308db82 */   'plugins' => array(),
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 3308db82 */ );
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 3308db82 */ $pane->configuration = array(
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 3308db82 */   'override_pager_settings' => 0,
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 3308db82 */   'use_pager' => 0,
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 3308db82 */   'nodes_per_page' => '0',
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 3308db82 */   'pager_id' => '0',
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 3308db82 */   'offset' => '0',
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 3308db82 */   'more_link' => 0,
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 3308db82 */   'feed_icons' => 0,
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 3308db82 */   'panel_args' => 0,
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 3308db82 */   'link_to_view' => 0,
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 3308db82 */   'args' => '',
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 3308db82 */   'url' => '',
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 3308db82 */   'display' => 'block_1',
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 3308db82 */   'context' => array(
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 3308db82 */     0 => 'argument_entity_id:user_1.uid',
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 3308db82 */   ),
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 3308db82 */   'override_title' => 1,
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 3308db82 */   'override_title_text' => '',
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 3308db82 */   'override_title_heading' => 'h2',
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 3308db82 */ );
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 3308db82 */ $pane->cache = array();
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 3308db82 */ $pane->style = array(
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 3308db82 */   'settings' => NULL,
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 3308db82 */ );
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 3308db82 */ $pane->css = array(
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 3308db82 */   'css_id' => '',
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 3308db82 */   'css_class' => 'mobile-show',
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 3308db82 */ );
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 3308db82 */ $pane->extras = array();
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 3308db82 */ $pane->position = 1;
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 3308db82 */ $pane->locks = array();
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 3308db82 */ $pane->uuid = '3308db82-4a8e-41c1-ac11-9a24be940fa2';
  $display->content['new-3308db82-4a8e-41c1-ac11-9a24be940fa2'] = $pane;
  $display->panels['main_top'][1] = 'new-3308db82-4a8e-41c1-ac11-9a24be940fa2';
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 968a7aa4 */ $pane = new stdClass();
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 968a7aa4 */ $pane->pid = 'new-968a7aa4-ac01-43a6-8525-f491990ab536';
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 968a7aa4 */ $pane->panel = 'main_top';
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 968a7aa4 */ $pane->type = 'views_panes';
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 968a7aa4 */ $pane->subtype = 'users_contact_history_info-panel_pane_4';
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 968a7aa4 */ $pane->shown = TRUE;
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 968a7aa4 */ $pane->access = array();
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 968a7aa4 */ $pane->configuration = array(
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 968a7aa4 */   'fields_override' => array(
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 968a7aa4 */     'field_name_last' => 0,
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 968a7aa4 */     'field_name_middle' => 0,
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 968a7aa4 */     'field_name_first' => 0,
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 968a7aa4 */     'name' => 0,
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 968a7aa4 */     'nothing' => 0,
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 968a7aa4 */     'nothing_1' => 0,
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 968a7aa4 */     'field_country_of_residence' => 1,
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 968a7aa4 */     'language' => 1,
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 968a7aa4 */     'view_user' => 0,
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 968a7aa4 */     'edit_node' => 0,
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 968a7aa4 */     'nothing_2' => 0,
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 968a7aa4 */     'nothing_3' => 0,
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 968a7aa4 */     'nothing_4' => 1,
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 968a7aa4 */   ),
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 968a7aa4 */   'override_title' => 1,
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 968a7aa4 */   'override_title_text' => '',
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 968a7aa4 */   'override_title_heading' => 'h2',
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 968a7aa4 */ );
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 968a7aa4 */ $pane->cache = array();
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 968a7aa4 */ $pane->style = array(
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 968a7aa4 */   'settings' => array(
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 968a7aa4 */     'clean_markup' => array(
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 968a7aa4 */       'pane_wrapper' => 'span',
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 968a7aa4 */       'additional_pane_classes' => 'panel-pane',
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 968a7aa4 */       'additional_pane_attributes' => '',
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 968a7aa4 */       'enable_inner_div' => 0,
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 968a7aa4 */       'title_wrapper' => 'h2',
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 968a7aa4 */       'title_hide' => 0,
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 968a7aa4 */       'content_wrapper' => 'none',
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 968a7aa4 */     ),
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 968a7aa4 */   ),
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 968a7aa4 */   'style' => 'clean_element',
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 968a7aa4 */ );
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 968a7aa4 */ $pane->css = array();
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 968a7aa4 */ $pane->extras = array();
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 968a7aa4 */ $pane->position = 2;
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 968a7aa4 */ $pane->locks = array();
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 968a7aa4 */ $pane->uuid = '968a7aa4-ac01-43a6-8525-f491990ab536';
  $display->content['new-968a7aa4-ac01-43a6-8525-f491990ab536'] = $pane;
  $display->panels['main_top'][2] = 'new-968a7aa4-ac01-43a6-8525-f491990ab536';
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da adbab632 */ $pane = new stdClass();
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da adbab632 */ $pane->pid = 'new-adbab632-cadb-4502-8502-d65d33b9408e';
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da adbab632 */ $pane->panel = 'main_top';
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da adbab632 */ $pane->type = 'views_panes';
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da adbab632 */ $pane->subtype = 'support_ticket_activity-panel_pane_1';
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da adbab632 */ $pane->shown = TRUE;
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da adbab632 */ $pane->access = array();
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da adbab632 */ $pane->configuration = array();
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da adbab632 */ $pane->cache = array();
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da adbab632 */ $pane->style = array(
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da adbab632 */   'settings' => NULL,
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da adbab632 */ );
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da adbab632 */ $pane->css = array();
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da adbab632 */ $pane->extras = array();
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da adbab632 */ $pane->position = 3;
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da adbab632 */ $pane->locks = array();
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da adbab632 */ $pane->uuid = 'adbab632-cadb-4502-8502-d65d33b9408e';
  $display->content['new-adbab632-cadb-4502-8502-d65d33b9408e'] = $pane;
  $display->panels['main_top'][3] = 'new-adbab632-cadb-4502-8502-d65d33b9408e';
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 3f3c9edd */ $pane = new stdClass();
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 3f3c9edd */ $pane->pid = 'new-3f3c9edd-d3dd-4838-b565-1e266b21800b';
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 3f3c9edd */ $pane->panel = 'main_top';
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 3f3c9edd */ $pane->type = 'block';
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 3f3c9edd */ $pane->subtype = 'gn2_user_admin-gn2_user_admin_unblock_user';
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 3f3c9edd */ $pane->shown = TRUE;
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 3f3c9edd */ $pane->access = array();
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 3f3c9edd */ $pane->configuration = array(
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 3f3c9edd */   'override_title' => 1,
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 3f3c9edd */   'override_title_text' => '',
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 3f3c9edd */   'override_title_heading' => 'h2',
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 3f3c9edd */ );
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 3f3c9edd */ $pane->cache = array();
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 3f3c9edd */ $pane->style = array(
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 3f3c9edd */   'settings' => NULL,
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 3f3c9edd */ );
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 3f3c9edd */ $pane->css = array();
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 3f3c9edd */ $pane->extras = array();
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 3f3c9edd */ $pane->position = 4;
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 3f3c9edd */ $pane->locks = array();
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 3f3c9edd */ $pane->uuid = '3f3c9edd-d3dd-4838-b565-1e266b21800b';
  $display->content['new-3f3c9edd-d3dd-4838-b565-1e266b21800b'] = $pane;
  $display->panels['main_top'][4] = 'new-3f3c9edd-d3dd-4838-b565-1e266b21800b';
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 2df58479 */ $pane = new stdClass();
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 2df58479 */ $pane->pid = 'new-2df58479-cc9a-4d83-b2a7-2b15df9c7113';
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 2df58479 */ $pane->panel = 'main_top';
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 2df58479 */ $pane->type = 'entity_field_extra';
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 2df58479 */ $pane->subtype = 'user:summary';
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 2df58479 */ $pane->shown = TRUE;
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 2df58479 */ $pane->access = array();
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 2df58479 */ $pane->configuration = array(
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 2df58479 */   'view_mode' => 'full',
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 2df58479 */   'context' => 'argument_entity_id:user_1',
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 2df58479 */   'override_title' => 1,
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 2df58479 */   'override_title_text' => '',
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 2df58479 */   'override_title_heading' => 'h5',
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 2df58479 */ );
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 2df58479 */ $pane->cache = array();
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 2df58479 */ $pane->style = array(
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 2df58479 */   'settings' => array(
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 2df58479 */     'clean_markup' => array(
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 2df58479 */       'pane_wrapper' => 'span',
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 2df58479 */       'additional_pane_classes' => 'panel-pane user__profile--history',
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 2df58479 */       'additional_pane_attributes' => '',
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 2df58479 */       'enable_inner_div' => 0,
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 2df58479 */       'title_wrapper' => 'h2',
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 2df58479 */       'title_hide' => 0,
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 2df58479 */       'content_wrapper' => 'none',
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 2df58479 */     ),
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 2df58479 */   ),
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 2df58479 */   'style' => 'clean_element',
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 2df58479 */ );
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 2df58479 */ $pane->css = array(
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 2df58479 */   'css_id' => '',
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 2df58479 */   'css_class' => '',
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 2df58479 */ );
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 2df58479 */ $pane->extras = array();
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 2df58479 */ $pane->position = 5;
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 2df58479 */ $pane->locks = array();
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 2df58479 */ $pane->uuid = '2df58479-cc9a-4d83-b2a7-2b15df9c7113';
  $display->content['new-2df58479-cc9a-4d83-b2a7-2b15df9c7113'] = $pane;
  $display->panels['main_top'][5] = 'new-2df58479-cc9a-4d83-b2a7-2b15df9c7113';
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 7638fa65 */ $pane = new stdClass();
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 7638fa65 */ $pane->pid = 'new-7638fa65-da61-406a-a72c-a03716ea3b9b';
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 7638fa65 */ $pane->panel = 'sidebar';
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 7638fa65 */ $pane->type = 'views';
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 7638fa65 */ $pane->subtype = 'users_contact_history_info';
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 7638fa65 */ $pane->shown = TRUE;
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 7638fa65 */ $pane->access = array(
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 7638fa65 */   'plugins' => array(),
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 7638fa65 */ );
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 7638fa65 */ $pane->configuration = array(
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 7638fa65 */   'override_pager_settings' => 0,
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 7638fa65 */   'use_pager' => 0,
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 7638fa65 */   'nodes_per_page' => '0',
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 7638fa65 */   'pager_id' => '0',
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 7638fa65 */   'offset' => '0',
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 7638fa65 */   'more_link' => 0,
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 7638fa65 */   'feed_icons' => 0,
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 7638fa65 */   'panel_args' => 0,
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 7638fa65 */   'link_to_view' => 0,
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 7638fa65 */   'args' => '',
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 7638fa65 */   'url' => '',
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 7638fa65 */   'display' => 'block_1',
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 7638fa65 */   'context' => array(
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 7638fa65 */     0 => 'argument_entity_id:user_1.uid',
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 7638fa65 */   ),
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 7638fa65 */   'override_title' => 1,
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 7638fa65 */   'override_title_text' => '',
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 7638fa65 */   'override_title_heading' => 'h2',
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 7638fa65 */ );
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 7638fa65 */ $pane->cache = array();
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 7638fa65 */ $pane->style = array(
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 7638fa65 */   'settings' => NULL,
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 7638fa65 */ );
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 7638fa65 */ $pane->css = array(
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 7638fa65 */   'css_id' => '',
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 7638fa65 */   'css_class' => 'mobile-hide',
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 7638fa65 */ );
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 7638fa65 */ $pane->extras = array();
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 7638fa65 */ $pane->position = 0;
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 7638fa65 */ $pane->locks = array();
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 7638fa65 */ $pane->uuid = '7638fa65-da61-406a-a72c-a03716ea3b9b';
  $display->content['new-7638fa65-da61-406a-a72c-a03716ea3b9b'] = $pane;
  $display->panels['sidebar'][0] = 'new-7638fa65-da61-406a-a72c-a03716ea3b9b';
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 60e023c6 */ $pane = new stdClass();
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 60e023c6 */ $pane->pid = 'new-60e023c6-6667-4ed1-817e-dc33331801c1';
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 60e023c6 */ $pane->panel = 'sidebar';
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 60e023c6 */ $pane->type = 'custom';
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 60e023c6 */ $pane->subtype = 'custom';
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 60e023c6 */ $pane->shown = TRUE;
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 60e023c6 */ $pane->access = array(
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 60e023c6 */   'plugins' => array(
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 60e023c6 */     0 => array(
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 60e023c6 */       'name' => 'php',
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 60e023c6 */       'settings' => array(
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 60e023c6 */         'description' => '',
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 60e023c6 */         'php' => 'return _gn2_base_config_check_logged_user($contexts);',
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 60e023c6 */       ),
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 60e023c6 */       'not' => FALSE,
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 60e023c6 */     ),
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 60e023c6 */   ),
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 60e023c6 */ );
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 60e023c6 */ $pane->configuration = array(
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 60e023c6 */   'admin_title' => '',
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 60e023c6 */   'title' => '',
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 60e023c6 */   'body' => '<a href="/account" title="View my account" class="button small-text" style="margin-bottom:0;">View my Account</a>',
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 60e023c6 */   'format' => 'php_code',
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 60e023c6 */   'substitute' => 1,
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 60e023c6 */ );
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 60e023c6 */ $pane->cache = array();
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 60e023c6 */ $pane->style = array(
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 60e023c6 */   'settings' => NULL,
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 60e023c6 */ );
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 60e023c6 */ $pane->css = array();
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 60e023c6 */ $pane->extras = array();
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 60e023c6 */ $pane->position = 1;
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 60e023c6 */ $pane->locks = array();
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 60e023c6 */ $pane->uuid = '60e023c6-6667-4ed1-817e-dc33331801c1';
  $display->content['new-60e023c6-6667-4ed1-817e-dc33331801c1'] = $pane;
  $display->panels['sidebar'][1] = 'new-60e023c6-6667-4ed1-817e-dc33331801c1';
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 5c7f34c0 */ $pane = new stdClass();
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 5c7f34c0 */ $pane->pid = 'new-5c7f34c0-948f-4bd4-a2c1-856a1d7b6158';
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 5c7f34c0 */ $pane->panel = 'sidebar';
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 5c7f34c0 */ $pane->type = 'views_panes';
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 5c7f34c0 */ $pane->subtype = 'users_contact_history_info-panel_pane_2';
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 5c7f34c0 */ $pane->shown = TRUE;
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 5c7f34c0 */ $pane->access = array(
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 5c7f34c0 */   'plugins' => array(
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 5c7f34c0 */     0 => array(
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 5c7f34c0 */       'name' => 'php',
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 5c7f34c0 */       'settings' => array(
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 5c7f34c0 */         'description' => '',
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 5c7f34c0 */         'php' => 'return _gn2_base_config_check_logged_user($contexts);',
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 5c7f34c0 */       ),
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 5c7f34c0 */       'not' => FALSE,
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 5c7f34c0 */     ),
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 5c7f34c0 */   ),
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 5c7f34c0 */ );
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 5c7f34c0 */ $pane->configuration = array(
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 5c7f34c0 */   'fields_override' => array(
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 5c7f34c0 */     'field_name_last' => 0,
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 5c7f34c0 */     'field_name_middle' => 0,
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 5c7f34c0 */     'field_name_first' => 0,
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 5c7f34c0 */     'name' => 0,
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 5c7f34c0 */     'nothing' => 0,
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 5c7f34c0 */     'nothing_1' => 0,
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 5c7f34c0 */     'field_country_of_residence' => 0,
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 5c7f34c0 */     'language' => 0,
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 5c7f34c0 */     'view_user' => 0,
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 5c7f34c0 */     'edit_node' => 1,
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 5c7f34c0 */     'nothing_2' => 1,
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 5c7f34c0 */     'nothing_3' => 1,
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 5c7f34c0 */     'nothing_4' => 1,
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 5c7f34c0 */   ),
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 5c7f34c0 */   'override_title' => 1,
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 5c7f34c0 */   'override_title_text' => '',
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 5c7f34c0 */   'override_title_heading' => 'h2',
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 5c7f34c0 */ );
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 5c7f34c0 */ $pane->cache = array();
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 5c7f34c0 */ $pane->style = array(
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 5c7f34c0 */   'settings' => NULL,
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 5c7f34c0 */ );
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 5c7f34c0 */ $pane->css = array();
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 5c7f34c0 */ $pane->extras = array();
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 5c7f34c0 */ $pane->position = 2;
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 5c7f34c0 */ $pane->locks = array();
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 5c7f34c0 */ $pane->uuid = '5c7f34c0-948f-4bd4-a2c1-856a1d7b6158';
  $display->content['new-5c7f34c0-948f-4bd4-a2c1-856a1d7b6158'] = $pane;
  $display->panels['sidebar'][2] = 'new-5c7f34c0-948f-4bd4-a2c1-856a1d7b6158';
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da aa90bfd7 */ $pane = new stdClass();
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da aa90bfd7 */ $pane->pid = 'new-aa90bfd7-f8f1-45ff-bea8-c620ba7d3403';
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da aa90bfd7 */ $pane->panel = 'sidebar';
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da aa90bfd7 */ $pane->type = 'custom';
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da aa90bfd7 */ $pane->subtype = 'custom';
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da aa90bfd7 */ $pane->shown = TRUE;
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da aa90bfd7 */ $pane->access = array(
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da aa90bfd7 */   'plugins' => array(
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da aa90bfd7 */     0 => array(
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da aa90bfd7 */       'name' => 'og_orgmanager',
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da aa90bfd7 */       'settings' => NULL,
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da aa90bfd7 */       'context' => array(
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da aa90bfd7 */         0 => 'argument_entity_id:user_1',
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da aa90bfd7 */         1 => 'logged-in-user',
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da aa90bfd7 */       ),
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da aa90bfd7 */       'not' => FALSE,
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da aa90bfd7 */     ),
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da aa90bfd7 */     1 => array(
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da aa90bfd7 */       'name' => 'perm',
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da aa90bfd7 */       'settings' => array(
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da aa90bfd7 */         'perm' => 'administer users',
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da aa90bfd7 */       ),
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da aa90bfd7 */       'context' => 'logged-in-user',
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da aa90bfd7 */       'not' => FALSE,
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da aa90bfd7 */     ),
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da aa90bfd7 */   ),
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da aa90bfd7 */   'logic' => 'or',
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da aa90bfd7 */ );
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da aa90bfd7 */ $pane->configuration = array(
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da aa90bfd7 */   'admin_title' => '',
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da aa90bfd7 */   'title' => '',
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da aa90bfd7 */   'body' => '<a href="/user/%user:uid/login-history">Login History</a>',
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da aa90bfd7 */   'format' => 'php_code',
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da aa90bfd7 */   'substitute' => 1,
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da aa90bfd7 */ );
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da aa90bfd7 */ $pane->cache = array();
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da aa90bfd7 */ $pane->style = array(
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da aa90bfd7 */   'settings' => NULL,
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da aa90bfd7 */ );
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da aa90bfd7 */ $pane->css = array();
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da aa90bfd7 */ $pane->extras = array();
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da aa90bfd7 */ $pane->position = 3;
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da aa90bfd7 */ $pane->locks = array();
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da aa90bfd7 */ $pane->uuid = 'aa90bfd7-f8f1-45ff-bea8-c620ba7d3403';
  $display->content['new-aa90bfd7-f8f1-45ff-bea8-c620ba7d3403'] = $pane;
  $display->panels['sidebar'][3] = 'new-aa90bfd7-f8f1-45ff-bea8-c620ba7d3403';
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 61db712e */ $pane = new stdClass();
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 61db712e */ $pane->pid = 'new-61db712e-efcc-4c81-8d6d-f67cf002fdc5';
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 61db712e */ $pane->panel = 'sidebar';
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 61db712e */ $pane->type = 'views';
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 61db712e */ $pane->subtype = 'users_contact_history_info';
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 61db712e */ $pane->shown = TRUE;
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 61db712e */ $pane->access = array(
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 61db712e */   'plugins' => array(
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 61db712e */     0 => array(
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 61db712e */       'name' => 'ur_relationship',
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 61db712e */       'settings' => array(
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 61db712e */         'ur_relationship' => array(
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 61db712e */           1 => '1',
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 61db712e */         ),
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 61db712e */         'ur_self' => array(
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 61db712e */           1 => '1',
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 61db712e */         ),
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 61db712e */       ),
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 61db712e */       'context' => array(
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 61db712e */         0 => 'logged-in-user',
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 61db712e */         1 => 'argument_entity_id:user_1',
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 61db712e */       ),
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 61db712e */       'not' => FALSE,
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 61db712e */     ),
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 61db712e */   ),
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 61db712e */   'logic' => 'or',
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 61db712e */ );
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 61db712e */ $pane->configuration = array(
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 61db712e */   'override_pager_settings' => 0,
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 61db712e */   'use_pager' => 0,
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 61db712e */   'nodes_per_page' => '5',
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 61db712e */   'pager_id' => '0',
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 61db712e */   'offset' => '0',
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 61db712e */   'more_link' => 0,
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 61db712e */   'feed_icons' => 0,
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 61db712e */   'panel_args' => 0,
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 61db712e */   'link_to_view' => 0,
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 61db712e */   'args' => '',
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 61db712e */   'url' => '',
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 61db712e */   'display' => 'block',
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 61db712e */   'context' => array(
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 61db712e */     0 => 'argument_entity_id:user_1.uid',
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 61db712e */   ),
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 61db712e */   'override_title' => 1,
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 61db712e */   'override_title_text' => '',
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 61db712e */   'override_title_heading' => 'h2',
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 61db712e */ );
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 61db712e */ $pane->cache = array();
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 61db712e */ $pane->style = array(
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 61db712e */   'settings' => array(
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 61db712e */     'clean_markup' => array(
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 61db712e */       'pane_wrapper' => 'div',
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 61db712e */       'additional_pane_classes' => 'panel-pane',
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 61db712e */       'additional_pane_attributes' => '',
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 61db712e */       'enable_inner_div' => 0,
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 61db712e */       'title_wrapper' => 'h3',
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 61db712e */       'title_hide' => 0,
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 61db712e */       'content_wrapper' => 'none',
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 61db712e */     ),
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 61db712e */   ),
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 61db712e */   'style' => 'clean_element',
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 61db712e */ );
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 61db712e */ $pane->css = array();
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 61db712e */ $pane->extras = array();
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 61db712e */ $pane->position = 4;
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 61db712e */ $pane->locks = array();
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 61db712e */ $pane->uuid = '61db712e-efcc-4c81-8d6d-f67cf002fdc5';
  $display->content['new-61db712e-efcc-4c81-8d6d-f67cf002fdc5'] = $pane;
  $display->panels['sidebar'][4] = 'new-61db712e-efcc-4c81-8d6d-f67cf002fdc5';
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 6510a415 */ $pane = new stdClass();
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 6510a415 */ $pane->pid = 'new-6510a415-990b-4a2c-8a3a-587c49e5247f';
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 6510a415 */ $pane->panel = 'sidebar';
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 6510a415 */ $pane->type = 'views_panes';
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 6510a415 */ $pane->subtype = 'users_contact_history_info-panel_pane_1';
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 6510a415 */ $pane->shown = TRUE;
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 6510a415 */ $pane->access = array();
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 6510a415 */ $pane->configuration = array(
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 6510a415 */   'arguments' => array(
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 6510a415 */     'type' => 'organization',
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 6510a415 */   ),
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 6510a415 */   'context' => array(
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 6510a415 */     0 => 'argument_entity_id:user_1',
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 6510a415 */   ),
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 6510a415 */   'override_title' => 1,
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 6510a415 */   'override_title_text' => 'Organizations',
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 6510a415 */   'override_title_heading' => 'h3',
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 6510a415 */ );
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 6510a415 */ $pane->cache = array();
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 6510a415 */ $pane->style = array(
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 6510a415 */   'settings' => array(
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 6510a415 */     'clean_markup' => array(
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 6510a415 */       'pane_wrapper' => 'div',
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 6510a415 */       'additional_pane_classes' => 'panel-pane',
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 6510a415 */       'additional_pane_attributes' => '',
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 6510a415 */       'enable_inner_div' => 0,
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 6510a415 */       'title_wrapper' => 'h3',
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 6510a415 */       'title_hide' => 0,
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 6510a415 */       'content_wrapper' => 'none',
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 6510a415 */     ),
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 6510a415 */   ),
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 6510a415 */   'style' => 'clean_element',
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 6510a415 */ );
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 6510a415 */ $pane->css = array();
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 6510a415 */ $pane->extras = array();
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 6510a415 */ $pane->position = 5;
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 6510a415 */ $pane->locks = array();
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 6510a415 */ $pane->uuid = '6510a415-990b-4a2c-8a3a-587c49e5247f';
  $display->content['new-6510a415-990b-4a2c-8a3a-587c49e5247f'] = $pane;
  $display->panels['sidebar'][5] = 'new-6510a415-990b-4a2c-8a3a-587c49e5247f';
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 4cc7861e */ $pane = new stdClass();
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 4cc7861e */ $pane->pid = 'new-4cc7861e-f380-4b3f-96eb-ff5c80d53c69';
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 4cc7861e */ $pane->panel = 'sidebar';
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 4cc7861e */ $pane->type = 'views_panes';
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 4cc7861e */ $pane->subtype = 'users_contact_history_info-panel_pane_1';
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 4cc7861e */ $pane->shown = TRUE;
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 4cc7861e */ $pane->access = array();
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 4cc7861e */ $pane->configuration = array(
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 4cc7861e */   'arguments' => array(
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 4cc7861e */     'type' => 'group',
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 4cc7861e */   ),
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 4cc7861e */   'context' => array(
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 4cc7861e */     0 => 'argument_entity_id:user_1',
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 4cc7861e */   ),
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 4cc7861e */   'override_title' => 1,
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 4cc7861e */   'override_title_text' => 'Groups',
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 4cc7861e */   'override_title_heading' => 'h3',
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 4cc7861e */ );
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 4cc7861e */ $pane->cache = array();
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 4cc7861e */ $pane->style = array(
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 4cc7861e */   'settings' => array(
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 4cc7861e */     'clean_markup' => array(
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 4cc7861e */       'pane_wrapper' => 'div',
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 4cc7861e */       'additional_pane_classes' => 'panel-pane',
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 4cc7861e */       'additional_pane_attributes' => '',
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 4cc7861e */       'enable_inner_div' => 0,
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 4cc7861e */       'title_wrapper' => 'h3',
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 4cc7861e */       'title_hide' => 0,
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 4cc7861e */       'content_wrapper' => 'none',
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 4cc7861e */     ),
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 4cc7861e */   ),
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 4cc7861e */   'style' => 'clean_element',
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 4cc7861e */ );
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 4cc7861e */ $pane->css = array();
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 4cc7861e */ $pane->extras = array();
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 4cc7861e */ $pane->position = 6;
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 4cc7861e */ $pane->locks = array();
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 4cc7861e */ $pane->uuid = '4cc7861e-f380-4b3f-96eb-ff5c80d53c69';
  $display->content['new-4cc7861e-f380-4b3f-96eb-ff5c80d53c69'] = $pane;
  $display->panels['sidebar'][6] = 'new-4cc7861e-f380-4b3f-96eb-ff5c80d53c69';
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 5c6e7f11 */ $pane = new stdClass();
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 5c6e7f11 */ $pane->pid = 'new-5c6e7f11-808b-42e1-a619-5f2b788344c0';
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 5c6e7f11 */ $pane->panel = 'sidebar';
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 5c6e7f11 */ $pane->type = 'views_panes';
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 5c6e7f11 */ $pane->subtype = 'users_contact_history_info-panel_pane_1';
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 5c6e7f11 */ $pane->shown = TRUE;
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 5c6e7f11 */ $pane->access = array();
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 5c6e7f11 */ $pane->configuration = array(
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 5c6e7f11 */   'arguments' => array(
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 5c6e7f11 */     'type' => 'course',
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 5c6e7f11 */   ),
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 5c6e7f11 */   'context' => array(
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 5c6e7f11 */     0 => 'argument_entity_id:user_1',
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 5c6e7f11 */   ),
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 5c6e7f11 */   'override_title' => 1,
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 5c6e7f11 */   'override_title_text' => 'Courses',
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 5c6e7f11 */   'override_title_heading' => 'h3',
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 5c6e7f11 */ );
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 5c6e7f11 */ $pane->cache = array();
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 5c6e7f11 */ $pane->style = array(
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 5c6e7f11 */   'settings' => array(
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 5c6e7f11 */     'clean_markup' => array(
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 5c6e7f11 */       'pane_wrapper' => 'div',
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 5c6e7f11 */       'additional_pane_classes' => 'panel-pane',
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 5c6e7f11 */       'additional_pane_attributes' => '',
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 5c6e7f11 */       'enable_inner_div' => 0,
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 5c6e7f11 */       'title_wrapper' => 'h3',
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 5c6e7f11 */       'title_hide' => 0,
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 5c6e7f11 */       'content_wrapper' => 'none',
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 5c6e7f11 */     ),
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 5c6e7f11 */   ),
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 5c6e7f11 */   'style' => 'clean_element',
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 5c6e7f11 */ );
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 5c6e7f11 */ $pane->css = array();
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 5c6e7f11 */ $pane->extras = array();
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 5c6e7f11 */ $pane->position = 7;
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 5c6e7f11 */ $pane->locks = array();
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 5c6e7f11 */ $pane->uuid = '5c6e7f11-808b-42e1-a619-5f2b788344c0';
  $display->content['new-5c6e7f11-808b-42e1-a619-5f2b788344c0'] = $pane;
  $display->panels['sidebar'][7] = 'new-5c6e7f11-808b-42e1-a619-5f2b788344c0';
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 7a84f088 */ $pane = new stdClass();
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 7a84f088 */ $pane->pid = 'new-7a84f088-c032-40a7-a179-4af576f00b20';
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 7a84f088 */ $pane->panel = 'sidebar';
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 7a84f088 */ $pane->type = 'views';
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 7a84f088 */ $pane->subtype = 'activity_default_page';
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 7a84f088 */ $pane->shown = TRUE;
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 7a84f088 */ $pane->access = array();
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 7a84f088 */ $pane->configuration = array(
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 7a84f088 */   'override_pager_settings' => 0,
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 7a84f088 */   'use_pager' => 1,
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 7a84f088 */   'nodes_per_page' => '0',
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 7a84f088 */   'pager_id' => '0',
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 7a84f088 */   'offset' => '0',
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 7a84f088 */   'more_link' => 0,
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 7a84f088 */   'feed_icons' => 0,
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 7a84f088 */   'panel_args' => 0,
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 7a84f088 */   'link_to_view' => 0,
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 7a84f088 */   'args' => '',
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 7a84f088 */   'url' => '',
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 7a84f088 */   'display' => 'block_1',
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 7a84f088 */   'override_title' => 0,
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 7a84f088 */   'override_title_text' => '',
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 7a84f088 */   'override_title_heading' => 'h2',
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 7a84f088 */ );
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 7a84f088 */ $pane->cache = array();
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 7a84f088 */ $pane->style = array(
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 7a84f088 */   'settings' => NULL,
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 7a84f088 */ );
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 7a84f088 */ $pane->css = array();
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 7a84f088 */ $pane->extras = array();
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 7a84f088 */ $pane->position = 8;
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 7a84f088 */ $pane->locks = array();
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 7a84f088 */ $pane->uuid = '7a84f088-c032-40a7-a179-4af576f00b20';
  $display->content['new-7a84f088-c032-40a7-a179-4af576f00b20'] = $pane;
  $display->panels['sidebar'][8] = 'new-7a84f088-c032-40a7-a179-4af576f00b20';
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 842fb744 */ $pane = new stdClass();
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 842fb744 */ $pane->pid = 'new-842fb744-2afb-486b-868f-f61bc457e93e';
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 842fb744 */ $pane->panel = 'sidebar';
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 842fb744 */ $pane->type = 'entity_field_extra';
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 842fb744 */ $pane->subtype = 'user:masquerade';
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 842fb744 */ $pane->shown = TRUE;
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 842fb744 */ $pane->access = array();
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 842fb744 */ $pane->configuration = array(
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 842fb744 */   'view_mode' => 'full',
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 842fb744 */   'context' => 'argument_entity_id:user_1',
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 842fb744 */   'override_title' => 0,
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 842fb744 */   'override_title_text' => '',
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 842fb744 */   'override_title_heading' => 'h2',
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 842fb744 */ );
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 842fb744 */ $pane->cache = array();
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 842fb744 */ $pane->style = array(
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 842fb744 */   'settings' => NULL,
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 842fb744 */ );
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 842fb744 */ $pane->css = array();
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 842fb744 */ $pane->extras = array();
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 842fb744 */ $pane->position = 9;
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 842fb744 */ $pane->locks = array();
   /* user_edit__panel_context_04f0413e-1fec-4dd9-a4c4-f7e69ced78da 842fb744 */ $pane->uuid = '842fb744-2afb-486b-868f-f61bc457e93e';
  $display->content['new-842fb744-2afb-486b-868f-f61bc457e93e'] = $pane;
  $display->panels['sidebar'][9] = 'new-842fb744-2afb-486b-868f-f61bc457e93e';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['user_view__user_profile_dashboard'] = $handler;

  return $export;
}

/**
 * Implements hook_default_page_manager_pages().
 */
function gn2_base_config_default_page_manager_pages() {
   /* member_search */ $page = new stdClass();
   /* member_search */ $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
   /* member_search */ $page->api_version = 1;
   /* member_search */ $page->name = 'member_search';
   /* member_search */ $page->task = 'page';
   /* member_search */ $page->admin_title = 'Member Search';
   /* member_search */ $page->admin_description = 'User member search page';
   /* member_search */ $page->path = 'member-search';
   /* member_search */ $page->access = array(
   /* member_search */   'type' => 'none',
   /* member_search */   'settings' => NULL,
   /* member_search */ );
   /* member_search */ $page->menu = array();
   /* member_search */ $page->arguments = array();
   /* member_search */ $page->conf = array(
   /* member_search */   'admin_paths' => FALSE,
   /* member_search */ );
  $page->default_handlers = array();
   /* page_member_search_panel_context */ $handler = new stdClass();
   /* page_member_search_panel_context */ $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
   /* page_member_search_panel_context */ $handler->api_version = 1;
   /* page_member_search_panel_context */ $handler->name = 'page_member_search_panel_context';
   /* page_member_search_panel_context */ $handler->task = 'page';
   /* page_member_search_panel_context */ $handler->subtask = 'member_search';
   /* page_member_search_panel_context */ $handler->handler = 'panel_context';
   /* page_member_search_panel_context */ $handler->weight = 0;
   /* page_member_search_panel_context */ $handler->conf = array(
   /* page_member_search_panel_context */   'title' => 'Panel',
   /* page_member_search_panel_context */   'no_blocks' => 0,
   /* page_member_search_panel_context */   'pipeline' => 'standard',
   /* page_member_search_panel_context */   'body_classes_to_remove' => '',
   /* page_member_search_panel_context */   'body_classes_to_add' => '',
   /* page_member_search_panel_context */   'css_id' => '',
   /* page_member_search_panel_context */   'css' => '',
   /* page_member_search_panel_context */   'contexts' => array(),
   /* page_member_search_panel_context */   'relationships' => array(),
   /* page_member_search_panel_context */ );
   /* member_search 4494d026 */ $display = new panels_display();
   /* member_search 4494d026 */ $display->layout = 'radix_bryant';
   /* member_search 4494d026 */ $display->layout_settings = array();
   /* member_search 4494d026 */ $display->panel_settings = array(
   /* member_search 4494d026 */   'style_settings' => array(
   /* member_search 4494d026 */     'default' => NULL,
   /* member_search 4494d026 */     'sidebar' => NULL,
   /* member_search 4494d026 */     'contentmain' => NULL,
   /* member_search 4494d026 */   ),
   /* member_search 4494d026 */ );
   /* member_search 4494d026 */ $display->cache = array();
   /* member_search 4494d026 */ $display->title = '';
   /* member_search 4494d026 */ $display->uuid = '4494d026-e911-42f2-9d76-6f1c446553ae';
   /* member_search 4494d026 */ $display->storage_type = 'page_manager';
   /* member_search 4494d026 */ $display->storage_id = 'page_member_search_panel_context';
  $display->content = array();
  $display->panels = array();
   /* member_search 3aa42dee */ $pane = new stdClass();
   /* member_search 3aa42dee */ $pane->pid = 'new-3aa42dee-76dc-4bbb-8157-b9d76d94749b';
   /* member_search 3aa42dee */ $pane->panel = 'contentmain';
   /* member_search 3aa42dee */ $pane->type = 'views_panes';
   /* member_search 3aa42dee */ $pane->subtype = 'search_member-panel_pane_1';
   /* member_search 3aa42dee */ $pane->shown = TRUE;
   /* member_search 3aa42dee */ $pane->access = array();
   /* member_search 3aa42dee */ $pane->configuration = array();
   /* member_search 3aa42dee */ $pane->cache = array();
   /* member_search 3aa42dee */ $pane->style = array(
   /* member_search 3aa42dee */   'settings' => NULL,
   /* member_search 3aa42dee */ );
   /* member_search 3aa42dee */ $pane->css = array();
   /* member_search 3aa42dee */ $pane->extras = array();
   /* member_search 3aa42dee */ $pane->position = 0;
   /* member_search 3aa42dee */ $pane->locks = array();
   /* member_search 3aa42dee */ $pane->uuid = '3aa42dee-76dc-4bbb-8157-b9d76d94749b';
  $display->content['new-3aa42dee-76dc-4bbb-8157-b9d76d94749b'] = $pane;
  $display->panels['contentmain'][0] = 'new-3aa42dee-76dc-4bbb-8157-b9d76d94749b';
   /* member_search 6091d925 */ $pane = new stdClass();
   /* member_search 6091d925 */ $pane->pid = 'new-6091d925-eef1-4645-a924-605085032c46';
   /* member_search 6091d925 */ $pane->panel = 'sidebar';
   /* member_search 6091d925 */ $pane->type = 'block';
   /* member_search 6091d925 */ $pane->subtype = 'facetapi-SmA6UEQTOBda1VdW96oip1KLHIOYZVmR';
   /* member_search 6091d925 */ $pane->shown = TRUE;
   /* member_search 6091d925 */ $pane->access = array();
   /* member_search 6091d925 */ $pane->configuration = array(
   /* member_search 6091d925 */   'override_title' => 0,
   /* member_search 6091d925 */   'override_title_text' => '',
   /* member_search 6091d925 */ );
   /* member_search 6091d925 */ $pane->cache = array();
   /* member_search 6091d925 */ $pane->style = array(
   /* member_search 6091d925 */   'settings' => NULL,
   /* member_search 6091d925 */ );
   /* member_search 6091d925 */ $pane->css = array();
   /* member_search 6091d925 */ $pane->extras = array();
   /* member_search 6091d925 */ $pane->position = 0;
   /* member_search 6091d925 */ $pane->locks = array();
   /* member_search 6091d925 */ $pane->uuid = '6091d925-eef1-4645-a924-605085032c46';
  $display->content['new-6091d925-eef1-4645-a924-605085032c46'] = $pane;
  $display->panels['sidebar'][0] = 'new-6091d925-eef1-4645-a924-605085032c46';
   /* member_search bc69f847 */ $pane = new stdClass();
   /* member_search bc69f847 */ $pane->pid = 'new-bc69f847-253e-4edd-8400-7fb60e3076d9';
   /* member_search bc69f847 */ $pane->panel = 'sidebar';
   /* member_search bc69f847 */ $pane->type = 'block';
   /* member_search bc69f847 */ $pane->subtype = 'views--exp-search_member-panel_pane_1';
   /* member_search bc69f847 */ $pane->shown = TRUE;
   /* member_search bc69f847 */ $pane->access = array();
   /* member_search bc69f847 */ $pane->configuration = array(
   /* member_search bc69f847 */   'inherit_path' => 1,
   /* member_search bc69f847 */   'override_title' => 0,
   /* member_search bc69f847 */   'override_title_text' => '',
   /* member_search bc69f847 */ );
   /* member_search bc69f847 */ $pane->cache = array();
   /* member_search bc69f847 */ $pane->style = array(
   /* member_search bc69f847 */   'settings' => NULL,
   /* member_search bc69f847 */ );
   /* member_search bc69f847 */ $pane->css = array();
   /* member_search bc69f847 */ $pane->extras = array();
   /* member_search bc69f847 */ $pane->position = 1;
   /* member_search bc69f847 */ $pane->locks = array();
   /* member_search bc69f847 */ $pane->uuid = 'bc69f847-253e-4edd-8400-7fb60e3076d9';
  $display->content['new-bc69f847-253e-4edd-8400-7fb60e3076d9'] = $pane;
  $display->panels['sidebar'][1] = 'new-bc69f847-253e-4edd-8400-7fb60e3076d9';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-3aa42dee-76dc-4bbb-8157-b9d76d94749b';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['member_search'] = $page;

   /* news_announcements_posts */ $page = new stdClass();
   /* news_announcements_posts */ $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
   /* news_announcements_posts */ $page->api_version = 1;
   /* news_announcements_posts */ $page->name = 'news_announcements_posts';
   /* news_announcements_posts */ $page->task = 'page';
   /* news_announcements_posts */ $page->admin_title = 'News, Announcements, Posts';
   /* news_announcements_posts */ $page->admin_description = '';
   /* news_announcements_posts */ $page->path = 'news_announcements_posts';
   /* news_announcements_posts */ $page->access = array(
   /* news_announcements_posts */   'type' => 'none',
   /* news_announcements_posts */   'settings' => NULL,
   /* news_announcements_posts */ );
   /* news_announcements_posts */ $page->menu = array();
   /* news_announcements_posts */ $page->arguments = array();
   /* news_announcements_posts */ $page->conf = array(
   /* news_announcements_posts */   'admin_paths' => FALSE,
   /* news_announcements_posts */ );
  $page->default_handlers = array();
   /* page_news_announcements_posts_panel_context */ $handler = new stdClass();
   /* page_news_announcements_posts_panel_context */ $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
   /* page_news_announcements_posts_panel_context */ $handler->api_version = 1;
   /* page_news_announcements_posts_panel_context */ $handler->name = 'page_news_announcements_posts_panel_context';
   /* page_news_announcements_posts_panel_context */ $handler->task = 'page';
   /* page_news_announcements_posts_panel_context */ $handler->subtask = 'news_announcements_posts';
   /* page_news_announcements_posts_panel_context */ $handler->handler = 'panel_context';
   /* page_news_announcements_posts_panel_context */ $handler->weight = 0;
   /* page_news_announcements_posts_panel_context */ $handler->conf = array(
   /* page_news_announcements_posts_panel_context */   'title' => 'Panel',
   /* page_news_announcements_posts_panel_context */   'no_blocks' => 0,
   /* page_news_announcements_posts_panel_context */   'pipeline' => 'standard',
   /* page_news_announcements_posts_panel_context */   'body_classes_to_remove' => '',
   /* page_news_announcements_posts_panel_context */   'body_classes_to_add' => '',
   /* page_news_announcements_posts_panel_context */   'css_id' => '',
   /* page_news_announcements_posts_panel_context */   'css' => '',
   /* page_news_announcements_posts_panel_context */   'contexts' => array(
   /* page_news_announcements_posts_panel_context */     0 => array(
   /* page_news_announcements_posts_panel_context */       'identifier' => 'Content Types',
   /* page_news_announcements_posts_panel_context */       'keyword' => 'content_types',
   /* page_news_announcements_posts_panel_context */       'name' => 'string',
   /* page_news_announcements_posts_panel_context */       'string' => 'news,announcement,post',
   /* page_news_announcements_posts_panel_context */       'id' => 1,
   /* page_news_announcements_posts_panel_context */     ),
   /* page_news_announcements_posts_panel_context */   ),
   /* page_news_announcements_posts_panel_context */   'relationships' => array(),
   /* page_news_announcements_posts_panel_context */ );
   /* news_announcements_posts 4ef03710 */ $display = new panels_display();
   /* news_announcements_posts 4ef03710 */ $display->layout = 'radix_boxton';
   /* news_announcements_posts 4ef03710 */ $display->layout_settings = array();
   /* news_announcements_posts 4ef03710 */ $display->panel_settings = array(
   /* news_announcements_posts 4ef03710 */   'style_settings' => array(
   /* news_announcements_posts 4ef03710 */     'default' => NULL,
   /* news_announcements_posts 4ef03710 */     'contentmain' => NULL,
   /* news_announcements_posts 4ef03710 */   ),
   /* news_announcements_posts 4ef03710 */ );
   /* news_announcements_posts 4ef03710 */ $display->cache = array();
   /* news_announcements_posts 4ef03710 */ $display->title = 'Blocks of News, Announcements, and Post Items';
   /* news_announcements_posts 4ef03710 */ $display->uuid = '4ef03710-afbc-4160-bab5-b3c1161e0890';
   /* news_announcements_posts 4ef03710 */ $display->storage_type = 'page_manager';
   /* news_announcements_posts 4ef03710 */ $display->storage_id = 'page_news_announcements_posts_panel_context';
  $display->content = array();
  $display->panels = array();
   /* news_announcements_posts 827ef61f */ $pane = new stdClass();
   /* news_announcements_posts 827ef61f */ $pane->pid = 'new-827ef61f-40ea-46d6-8a80-57402c82cc13';
   /* news_announcements_posts 827ef61f */ $pane->panel = 'contentmain';
   /* news_announcements_posts 827ef61f */ $pane->type = 'custom';
   /* news_announcements_posts 827ef61f */ $pane->subtype = 'custom';
   /* news_announcements_posts 827ef61f */ $pane->shown = TRUE;
   /* news_announcements_posts 827ef61f */ $pane->access = array();
   /* news_announcements_posts 827ef61f */ $pane->configuration = array(
   /* news_announcements_posts 827ef61f */   'admin_title' => 'News Items Title',
   /* news_announcements_posts 827ef61f */   'title' => '',
   /* news_announcements_posts 827ef61f */   'body' => '<h2>News Items</h2>',
   /* news_announcements_posts 827ef61f */   'format' => 'full_html',
   /* news_announcements_posts 827ef61f */   'substitute' => 1,
   /* news_announcements_posts 827ef61f */ );
   /* news_announcements_posts 827ef61f */ $pane->cache = array();
   /* news_announcements_posts 827ef61f */ $pane->style = array(
   /* news_announcements_posts 827ef61f */   'settings' => NULL,
   /* news_announcements_posts 827ef61f */ );
   /* news_announcements_posts 827ef61f */ $pane->css = array();
   /* news_announcements_posts 827ef61f */ $pane->extras = array();
   /* news_announcements_posts 827ef61f */ $pane->position = 0;
   /* news_announcements_posts 827ef61f */ $pane->locks = array();
   /* news_announcements_posts 827ef61f */ $pane->uuid = '827ef61f-40ea-46d6-8a80-57402c82cc13';
  $display->content['new-827ef61f-40ea-46d6-8a80-57402c82cc13'] = $pane;
  $display->panels['contentmain'][0] = 'new-827ef61f-40ea-46d6-8a80-57402c82cc13';
   /* news_announcements_posts 37987ef0 */ $pane = new stdClass();
   /* news_announcements_posts 37987ef0 */ $pane->pid = 'new-37987ef0-5497-42b9-afe0-9cf569785dc8';
   /* news_announcements_posts 37987ef0 */ $pane->panel = 'contentmain';
   /* news_announcements_posts 37987ef0 */ $pane->type = 'views_panes';
   /* news_announcements_posts 37987ef0 */ $pane->subtype = 'news_announcements_posts-panel_pane_1';
   /* news_announcements_posts 37987ef0 */ $pane->shown = TRUE;
   /* news_announcements_posts 37987ef0 */ $pane->access = array();
   /* news_announcements_posts 37987ef0 */ $pane->configuration = array(
   /* news_announcements_posts 37987ef0 */   'arguments' => array(
   /* news_announcements_posts 37987ef0 */     'type' => 'news',
   /* news_announcements_posts 37987ef0 */   ),
   /* news_announcements_posts 37987ef0 */ );
   /* news_announcements_posts 37987ef0 */ $pane->cache = array();
   /* news_announcements_posts 37987ef0 */ $pane->style = array(
   /* news_announcements_posts 37987ef0 */   'settings' => NULL,
   /* news_announcements_posts 37987ef0 */ );
   /* news_announcements_posts 37987ef0 */ $pane->css = array();
   /* news_announcements_posts 37987ef0 */ $pane->extras = array();
   /* news_announcements_posts 37987ef0 */ $pane->position = 1;
   /* news_announcements_posts 37987ef0 */ $pane->locks = array();
   /* news_announcements_posts 37987ef0 */ $pane->uuid = '37987ef0-5497-42b9-afe0-9cf569785dc8';
  $display->content['new-37987ef0-5497-42b9-afe0-9cf569785dc8'] = $pane;
  $display->panels['contentmain'][1] = 'new-37987ef0-5497-42b9-afe0-9cf569785dc8';
   /* news_announcements_posts a2c5fb5c */ $pane = new stdClass();
   /* news_announcements_posts a2c5fb5c */ $pane->pid = 'new-a2c5fb5c-2a93-4cce-9a9c-f55fc01a649d';
   /* news_announcements_posts a2c5fb5c */ $pane->panel = 'contentmain';
   /* news_announcements_posts a2c5fb5c */ $pane->type = 'custom';
   /* news_announcements_posts a2c5fb5c */ $pane->subtype = 'custom';
   /* news_announcements_posts a2c5fb5c */ $pane->shown = TRUE;
   /* news_announcements_posts a2c5fb5c */ $pane->access = array();
   /* news_announcements_posts a2c5fb5c */ $pane->configuration = array(
   /* news_announcements_posts a2c5fb5c */   'admin_title' => 'Announcement Items Title',
   /* news_announcements_posts a2c5fb5c */   'title' => '',
   /* news_announcements_posts a2c5fb5c */   'body' => '<h2>Announcement Items</h2>',
   /* news_announcements_posts a2c5fb5c */   'format' => 'full_html',
   /* news_announcements_posts a2c5fb5c */   'substitute' => 1,
   /* news_announcements_posts a2c5fb5c */ );
   /* news_announcements_posts a2c5fb5c */ $pane->cache = array();
   /* news_announcements_posts a2c5fb5c */ $pane->style = array(
   /* news_announcements_posts a2c5fb5c */   'settings' => NULL,
   /* news_announcements_posts a2c5fb5c */ );
   /* news_announcements_posts a2c5fb5c */ $pane->css = array();
   /* news_announcements_posts a2c5fb5c */ $pane->extras = array();
   /* news_announcements_posts a2c5fb5c */ $pane->position = 2;
   /* news_announcements_posts a2c5fb5c */ $pane->locks = array();
   /* news_announcements_posts a2c5fb5c */ $pane->uuid = 'a2c5fb5c-2a93-4cce-9a9c-f55fc01a649d';
  $display->content['new-a2c5fb5c-2a93-4cce-9a9c-f55fc01a649d'] = $pane;
  $display->panels['contentmain'][2] = 'new-a2c5fb5c-2a93-4cce-9a9c-f55fc01a649d';
   /* news_announcements_posts d43d227e */ $pane = new stdClass();
   /* news_announcements_posts d43d227e */ $pane->pid = 'new-d43d227e-dc31-4d34-80c4-eb724bf7db8e';
   /* news_announcements_posts d43d227e */ $pane->panel = 'contentmain';
   /* news_announcements_posts d43d227e */ $pane->type = 'views_panes';
   /* news_announcements_posts d43d227e */ $pane->subtype = 'news_announcements_posts-panel_pane_1';
   /* news_announcements_posts d43d227e */ $pane->shown = TRUE;
   /* news_announcements_posts d43d227e */ $pane->access = array();
   /* news_announcements_posts d43d227e */ $pane->configuration = array(
   /* news_announcements_posts d43d227e */   'arguments' => array(
   /* news_announcements_posts d43d227e */     'type' => 'announcement',
   /* news_announcements_posts d43d227e */   ),
   /* news_announcements_posts d43d227e */ );
   /* news_announcements_posts d43d227e */ $pane->cache = array();
   /* news_announcements_posts d43d227e */ $pane->style = array(
   /* news_announcements_posts d43d227e */   'settings' => NULL,
   /* news_announcements_posts d43d227e */ );
   /* news_announcements_posts d43d227e */ $pane->css = array();
   /* news_announcements_posts d43d227e */ $pane->extras = array();
   /* news_announcements_posts d43d227e */ $pane->position = 3;
   /* news_announcements_posts d43d227e */ $pane->locks = array();
   /* news_announcements_posts d43d227e */ $pane->uuid = 'd43d227e-dc31-4d34-80c4-eb724bf7db8e';
  $display->content['new-d43d227e-dc31-4d34-80c4-eb724bf7db8e'] = $pane;
  $display->panels['contentmain'][3] = 'new-d43d227e-dc31-4d34-80c4-eb724bf7db8e';
   /* news_announcements_posts 1dce0df6 */ $pane = new stdClass();
   /* news_announcements_posts 1dce0df6 */ $pane->pid = 'new-1dce0df6-3694-48c8-baf6-2f2f72cc35b7';
   /* news_announcements_posts 1dce0df6 */ $pane->panel = 'contentmain';
   /* news_announcements_posts 1dce0df6 */ $pane->type = 'custom';
   /* news_announcements_posts 1dce0df6 */ $pane->subtype = 'custom';
   /* news_announcements_posts 1dce0df6 */ $pane->shown = TRUE;
   /* news_announcements_posts 1dce0df6 */ $pane->access = array();
   /* news_announcements_posts 1dce0df6 */ $pane->configuration = array(
   /* news_announcements_posts 1dce0df6 */   'admin_title' => 'Post Items Title',
   /* news_announcements_posts 1dce0df6 */   'title' => '',
   /* news_announcements_posts 1dce0df6 */   'body' => '<h2>Post Items</h2>',
   /* news_announcements_posts 1dce0df6 */   'format' => 'full_html',
   /* news_announcements_posts 1dce0df6 */   'substitute' => 1,
   /* news_announcements_posts 1dce0df6 */ );
   /* news_announcements_posts 1dce0df6 */ $pane->cache = array();
   /* news_announcements_posts 1dce0df6 */ $pane->style = array(
   /* news_announcements_posts 1dce0df6 */   'settings' => NULL,
   /* news_announcements_posts 1dce0df6 */ );
   /* news_announcements_posts 1dce0df6 */ $pane->css = array();
   /* news_announcements_posts 1dce0df6 */ $pane->extras = array();
   /* news_announcements_posts 1dce0df6 */ $pane->position = 4;
   /* news_announcements_posts 1dce0df6 */ $pane->locks = array();
   /* news_announcements_posts 1dce0df6 */ $pane->uuid = '1dce0df6-3694-48c8-baf6-2f2f72cc35b7';
  $display->content['new-1dce0df6-3694-48c8-baf6-2f2f72cc35b7'] = $pane;
  $display->panels['contentmain'][4] = 'new-1dce0df6-3694-48c8-baf6-2f2f72cc35b7';
   /* news_announcements_posts e4ef0c4d */ $pane = new stdClass();
   /* news_announcements_posts e4ef0c4d */ $pane->pid = 'new-e4ef0c4d-dd25-4db9-828b-cabff01ec9c7';
   /* news_announcements_posts e4ef0c4d */ $pane->panel = 'contentmain';
   /* news_announcements_posts e4ef0c4d */ $pane->type = 'views_panes';
   /* news_announcements_posts e4ef0c4d */ $pane->subtype = 'news_announcements_posts-panel_pane_1';
   /* news_announcements_posts e4ef0c4d */ $pane->shown = TRUE;
   /* news_announcements_posts e4ef0c4d */ $pane->access = array();
   /* news_announcements_posts e4ef0c4d */ $pane->configuration = array(
   /* news_announcements_posts e4ef0c4d */   'arguments' => array(
   /* news_announcements_posts e4ef0c4d */     'type' => 'post',
   /* news_announcements_posts e4ef0c4d */   ),
   /* news_announcements_posts e4ef0c4d */ );
   /* news_announcements_posts e4ef0c4d */ $pane->cache = array();
   /* news_announcements_posts e4ef0c4d */ $pane->style = array(
   /* news_announcements_posts e4ef0c4d */   'settings' => NULL,
   /* news_announcements_posts e4ef0c4d */ );
   /* news_announcements_posts e4ef0c4d */ $pane->css = array();
   /* news_announcements_posts e4ef0c4d */ $pane->extras = array();
   /* news_announcements_posts e4ef0c4d */ $pane->position = 5;
   /* news_announcements_posts e4ef0c4d */ $pane->locks = array();
   /* news_announcements_posts e4ef0c4d */ $pane->uuid = 'e4ef0c4d-dd25-4db9-828b-cabff01ec9c7';
  $display->content['new-e4ef0c4d-dd25-4db9-828b-cabff01ec9c7'] = $pane;
  $display->panels['contentmain'][5] = 'new-e4ef0c4d-dd25-4db9-828b-cabff01ec9c7';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['news_announcements_posts'] = $page;

   /* news_list_view_page */ $page = new stdClass();
   /* news_list_view_page */ $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
   /* news_list_view_page */ $page->api_version = 1;
   /* news_list_view_page */ $page->name = 'news_list_view_page';
   /* news_list_view_page */ $page->task = 'page';
   /* news_list_view_page */ $page->admin_title = 'News List View Page';
   /* news_list_view_page */ $page->admin_description = '';
   /* news_list_view_page */ $page->path = 'group/%group/news/all';
   /* news_list_view_page */ $page->access = array(
   /* news_list_view_page */   'type' => 'none',
   /* news_list_view_page */   'settings' => NULL,
   /* news_list_view_page */ );
   /* news_list_view_page */ $page->menu = array();
   /* news_list_view_page */ $page->arguments = array(
   /* news_list_view_page */   'group' => array(
   /* news_list_view_page */     'id' => 1,
   /* news_list_view_page */     'identifier' => 'Node: ID',
   /* news_list_view_page */     'name' => 'entity_id:node',
   /* news_list_view_page */     'settings' => array(),
   /* news_list_view_page */   ),
   /* news_list_view_page */ );
   /* news_list_view_page */ $page->conf = array(
   /* news_list_view_page */   'admin_paths' => FALSE,
   /* news_list_view_page */ );
  $page->default_handlers = array();
   /* page_news_list_view_page__panel_context_2eb1c20b-0486-4f00-a00f-38bff0c9298f */ $handler = new stdClass();
   /* page_news_list_view_page__panel_context_2eb1c20b-0486-4f00-a00f-38bff0c9298f */ $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
   /* page_news_list_view_page__panel_context_2eb1c20b-0486-4f00-a00f-38bff0c9298f */ $handler->api_version = 1;
   /* page_news_list_view_page__panel_context_2eb1c20b-0486-4f00-a00f-38bff0c9298f */ $handler->name = 'page_news_list_view_page__panel_context_2eb1c20b-0486-4f00-a00f-38bff0c9298f';
   /* page_news_list_view_page__panel_context_2eb1c20b-0486-4f00-a00f-38bff0c9298f */ $handler->task = 'page';
   /* page_news_list_view_page__panel_context_2eb1c20b-0486-4f00-a00f-38bff0c9298f */ $handler->subtask = 'news_list_view_page';
   /* page_news_list_view_page__panel_context_2eb1c20b-0486-4f00-a00f-38bff0c9298f */ $handler->handler = 'panel_context';
   /* page_news_list_view_page__panel_context_2eb1c20b-0486-4f00-a00f-38bff0c9298f */ $handler->weight = 0;
   /* page_news_list_view_page__panel_context_2eb1c20b-0486-4f00-a00f-38bff0c9298f */ $handler->conf = array(
   /* page_news_list_view_page__panel_context_2eb1c20b-0486-4f00-a00f-38bff0c9298f */   'title' => 'News List',
   /* page_news_list_view_page__panel_context_2eb1c20b-0486-4f00-a00f-38bff0c9298f */   'no_blocks' => 0,
   /* page_news_list_view_page__panel_context_2eb1c20b-0486-4f00-a00f-38bff0c9298f */   'pipeline' => 'standard',
   /* page_news_list_view_page__panel_context_2eb1c20b-0486-4f00-a00f-38bff0c9298f */   'body_classes_to_remove' => '',
   /* page_news_list_view_page__panel_context_2eb1c20b-0486-4f00-a00f-38bff0c9298f */   'body_classes_to_add' => 'news-list-view-page',
   /* page_news_list_view_page__panel_context_2eb1c20b-0486-4f00-a00f-38bff0c9298f */   'css_id' => '',
   /* page_news_list_view_page__panel_context_2eb1c20b-0486-4f00-a00f-38bff0c9298f */   'css' => '',
   /* page_news_list_view_page__panel_context_2eb1c20b-0486-4f00-a00f-38bff0c9298f */   'contexts' => array(),
   /* page_news_list_view_page__panel_context_2eb1c20b-0486-4f00-a00f-38bff0c9298f */   'relationships' => array(),
   /* page_news_list_view_page__panel_context_2eb1c20b-0486-4f00-a00f-38bff0c9298f */ );
   /* news_list_view_page fb3f2fb4 */ $display = new panels_display();
   /* news_list_view_page fb3f2fb4 */ $display->layout = 'gn2_2colstackedflipped';
   /* news_list_view_page fb3f2fb4 */ $display->layout_settings = array();
   /* news_list_view_page fb3f2fb4 */ $display->panel_settings = array(
   /* news_list_view_page fb3f2fb4 */   'style_settings' => array(
   /* news_list_view_page fb3f2fb4 */     'default' => NULL,
   /* news_list_view_page fb3f2fb4 */     'gn2-2col-v2--header' => NULL,
   /* news_list_view_page fb3f2fb4 */     'gn2-2col-v2--col1' => NULL,
   /* news_list_view_page fb3f2fb4 */     'gn2-2col-v2--col2' => NULL,
   /* news_list_view_page fb3f2fb4 */     'gn2-2col-v2--footer' => NULL,
   /* news_list_view_page fb3f2fb4 */     'top' => array(
   /* news_list_view_page fb3f2fb4 */       'clean_markup' => array(
   /* news_list_view_page fb3f2fb4 */         'region_wrapper' => 'div',
   /* news_list_view_page fb3f2fb4 */         'additional_region_classes' => 'page-header',
   /* news_list_view_page fb3f2fb4 */         'additional_region_attributes' => '',
   /* news_list_view_page fb3f2fb4 */         'enable_inner_div' => 1,
   /* news_list_view_page fb3f2fb4 */         'pane_separators' => 0,
   /* news_list_view_page fb3f2fb4 */       ),
   /* news_list_view_page fb3f2fb4 */     ),
   /* news_list_view_page fb3f2fb4 */     'sidebar' => array(
   /* news_list_view_page fb3f2fb4 */       'clean_markup' => array(
   /* news_list_view_page fb3f2fb4 */         'region_wrapper' => 'div',
   /* news_list_view_page fb3f2fb4 */         'additional_region_classes' => 'inner',
   /* news_list_view_page fb3f2fb4 */         'additional_region_attributes' => '',
   /* news_list_view_page fb3f2fb4 */         'enable_inner_div' => 0,
   /* news_list_view_page fb3f2fb4 */         'pane_separators' => 0,
   /* news_list_view_page fb3f2fb4 */       ),
   /* news_list_view_page fb3f2fb4 */     ),
   /* news_list_view_page fb3f2fb4 */     'main_top' => NULL,
   /* news_list_view_page fb3f2fb4 */     'main_bottom' => array(
   /* news_list_view_page fb3f2fb4 */       'clean_markup' => array(
   /* news_list_view_page fb3f2fb4 */         'region_wrapper' => 'div',
   /* news_list_view_page fb3f2fb4 */         'additional_region_classes' => 'inner',
   /* news_list_view_page fb3f2fb4 */         'additional_region_attributes' => '',
   /* news_list_view_page fb3f2fb4 */         'enable_inner_div' => 0,
   /* news_list_view_page fb3f2fb4 */         'pane_separators' => 0,
   /* news_list_view_page fb3f2fb4 */       ),
   /* news_list_view_page fb3f2fb4 */     ),
   /* news_list_view_page fb3f2fb4 */     'footer' => NULL,
   /* news_list_view_page fb3f2fb4 */   ),
   /* news_list_view_page fb3f2fb4 */   'main_bottom' => array(
   /* news_list_view_page fb3f2fb4 */     'style' => 'clean_element',
   /* news_list_view_page fb3f2fb4 */   ),
   /* news_list_view_page fb3f2fb4 */   'sidebar' => array(
   /* news_list_view_page fb3f2fb4 */     'style' => 'clean_element',
   /* news_list_view_page fb3f2fb4 */   ),
   /* news_list_view_page fb3f2fb4 */   'top' => array(
   /* news_list_view_page fb3f2fb4 */     'style' => 'clean_element',
   /* news_list_view_page fb3f2fb4 */   ),
   /* news_list_view_page fb3f2fb4 */ );
   /* news_list_view_page fb3f2fb4 */ $display->cache = array();
   /* news_list_view_page fb3f2fb4 */ $display->title = 'Page';
   /* news_list_view_page fb3f2fb4 */ $display->uuid = 'fb3f2fb4-5611-47e3-a995-f0cd67e2c7f3';
   /* news_list_view_page fb3f2fb4 */ $display->storage_type = 'page_manager';
   /* news_list_view_page fb3f2fb4 */ $display->storage_id = 'page_news_list_view_page__panel_context_2eb1c20b-0486-4f00-a00f-38bff0c9298f';
  $display->content = array();
  $display->panels = array();
   /* news_list_view_page 622daca2 */ $pane = new stdClass();
   /* news_list_view_page 622daca2 */ $pane->pid = 'new-622daca2-a0de-4911-9058-8c961e986781';
   /* news_list_view_page 622daca2 */ $pane->panel = 'main_bottom';
   /* news_list_view_page 622daca2 */ $pane->type = 'views_panes';
   /* news_list_view_page 622daca2 */ $pane->subtype = 'news_announcements_posts-panel_pane_1';
   /* news_list_view_page 622daca2 */ $pane->shown = TRUE;
   /* news_list_view_page 622daca2 */ $pane->access = array();
   /* news_list_view_page 622daca2 */ $pane->configuration = array(
   /* news_list_view_page 622daca2 */   'arguments' => array(
   /* news_list_view_page 622daca2 */     'type' => 'news',
   /* news_list_view_page 622daca2 */   ),
   /* news_list_view_page 622daca2 */   'context' => array(
   /* news_list_view_page 622daca2 */     1 => 'argument_entity_id:node_1',
   /* news_list_view_page 622daca2 */   ),
   /* news_list_view_page 622daca2 */ );
   /* news_list_view_page 622daca2 */ $pane->cache = array();
   /* news_list_view_page 622daca2 */ $pane->style = array(
   /* news_list_view_page 622daca2 */   'settings' => NULL,
   /* news_list_view_page 622daca2 */ );
   /* news_list_view_page 622daca2 */ $pane->css = array();
   /* news_list_view_page 622daca2 */ $pane->extras = array();
   /* news_list_view_page 622daca2 */ $pane->position = 0;
   /* news_list_view_page 622daca2 */ $pane->locks = array();
   /* news_list_view_page 622daca2 */ $pane->uuid = '622daca2-a0de-4911-9058-8c961e986781';
  $display->content['new-622daca2-a0de-4911-9058-8c961e986781'] = $pane;
  $display->panels['main_bottom'][0] = 'new-622daca2-a0de-4911-9058-8c961e986781';
   /* news_list_view_page 423bb61e */ $pane = new stdClass();
   /* news_list_view_page 423bb61e */ $pane->pid = 'new-423bb61e-8eeb-424b-9214-5e27c1951e49';
   /* news_list_view_page 423bb61e */ $pane->panel = 'sidebar';
   /* news_list_view_page 423bb61e */ $pane->type = 'custom';
   /* news_list_view_page 423bb61e */ $pane->subtype = 'custom';
   /* news_list_view_page 423bb61e */ $pane->shown = TRUE;
   /* news_list_view_page 423bb61e */ $pane->access = array();
   /* news_list_view_page 423bb61e */ $pane->configuration = array(
   /* news_list_view_page 423bb61e */   'admin_title' => 'Announcements - FPO',
   /* news_list_view_page 423bb61e */   'title' => 'Announcements',
   /* news_list_view_page 423bb61e */   'body' => '<img src="/sites/all/themes/gn2_zen/images/temp/announcements_fpo.png">',
   /* news_list_view_page 423bb61e */   'format' => 'full_html',
   /* news_list_view_page 423bb61e */   'substitute' => 1,
   /* news_list_view_page 423bb61e */ );
   /* news_list_view_page 423bb61e */ $pane->cache = array();
   /* news_list_view_page 423bb61e */ $pane->style = array(
   /* news_list_view_page 423bb61e */   'style' => 'clean_element',
   /* news_list_view_page 423bb61e */   'settings' => array(
   /* news_list_view_page 423bb61e */     'clean_markup' => array(
   /* news_list_view_page 423bb61e */       'pane_wrapper' => 'div',
   /* news_list_view_page 423bb61e */       'additional_pane_classes' => 'panel-pane sidebar-subheading',
   /* news_list_view_page 423bb61e */       'additional_pane_attributes' => '',
   /* news_list_view_page 423bb61e */       'enable_inner_div' => 0,
   /* news_list_view_page 423bb61e */       'title_wrapper' => 'h3',
   /* news_list_view_page 423bb61e */       'title_hide' => 0,
   /* news_list_view_page 423bb61e */       'content_wrapper' => 'none',
   /* news_list_view_page 423bb61e */     ),
   /* news_list_view_page 423bb61e */   ),
   /* news_list_view_page 423bb61e */ );
   /* news_list_view_page 423bb61e */ $pane->css = array();
   /* news_list_view_page 423bb61e */ $pane->extras = array();
   /* news_list_view_page 423bb61e */ $pane->position = 0;
   /* news_list_view_page 423bb61e */ $pane->locks = array();
   /* news_list_view_page 423bb61e */ $pane->uuid = '423bb61e-8eeb-424b-9214-5e27c1951e49';
  $display->content['new-423bb61e-8eeb-424b-9214-5e27c1951e49'] = $pane;
  $display->panels['sidebar'][0] = 'new-423bb61e-8eeb-424b-9214-5e27c1951e49';
   /* news_list_view_page 606238fb */ $pane = new stdClass();
   /* news_list_view_page 606238fb */ $pane->pid = 'new-606238fb-13af-40dc-a6b0-a1d4629aacb8';
   /* news_list_view_page 606238fb */ $pane->panel = 'sidebar';
   /* news_list_view_page 606238fb */ $pane->type = 'panels_mini';
   /* news_list_view_page 606238fb */ $pane->subtype = 'upcoming_events_block';
   /* news_list_view_page 606238fb */ $pane->shown = TRUE;
   /* news_list_view_page 606238fb */ $pane->access = array();
   /* news_list_view_page 606238fb */ $pane->configuration = array(
   /* news_list_view_page 606238fb */   'override_title' => 1,
   /* news_list_view_page 606238fb */   'override_title_text' => '',
   /* news_list_view_page 606238fb */   'override_title_heading' => 'h2',
   /* news_list_view_page 606238fb */ );
   /* news_list_view_page 606238fb */ $pane->cache = array();
   /* news_list_view_page 606238fb */ $pane->style = array(
   /* news_list_view_page 606238fb */   'settings' => array(
   /* news_list_view_page 606238fb */     'clean_markup' => array(
   /* news_list_view_page 606238fb */       'pane_wrapper' => 'div',
   /* news_list_view_page 606238fb */       'additional_pane_classes' => 'panel-pane sidebar-subheading',
   /* news_list_view_page 606238fb */       'additional_pane_attributes' => '',
   /* news_list_view_page 606238fb */       'enable_inner_div' => 0,
   /* news_list_view_page 606238fb */       'title_wrapper' => 'h3',
   /* news_list_view_page 606238fb */       'title_hide' => 0,
   /* news_list_view_page 606238fb */       'content_wrapper' => 'none',
   /* news_list_view_page 606238fb */     ),
   /* news_list_view_page 606238fb */   ),
   /* news_list_view_page 606238fb */   'style' => 'clean_element',
   /* news_list_view_page 606238fb */ );
   /* news_list_view_page 606238fb */ $pane->css = array();
   /* news_list_view_page 606238fb */ $pane->extras = array();
   /* news_list_view_page 606238fb */ $pane->position = 1;
   /* news_list_view_page 606238fb */ $pane->locks = array();
   /* news_list_view_page 606238fb */ $pane->uuid = '606238fb-13af-40dc-a6b0-a1d4629aacb8';
  $display->content['new-606238fb-13af-40dc-a6b0-a1d4629aacb8'] = $pane;
  $display->panels['sidebar'][1] = 'new-606238fb-13af-40dc-a6b0-a1d4629aacb8';
   /* news_list_view_page 7ffd4bab */ $pane = new stdClass();
   /* news_list_view_page 7ffd4bab */ $pane->pid = 'new-7ffd4bab-d898-45d8-bde0-3823ba09df6a';
   /* news_list_view_page 7ffd4bab */ $pane->panel = 'top';
   /* news_list_view_page 7ffd4bab */ $pane->type = 'page_title';
   /* news_list_view_page 7ffd4bab */ $pane->subtype = 'page_title';
   /* news_list_view_page 7ffd4bab */ $pane->shown = TRUE;
   /* news_list_view_page 7ffd4bab */ $pane->access = array();
   /* news_list_view_page 7ffd4bab */ $pane->configuration = array(
   /* news_list_view_page 7ffd4bab */   'markup' => 'none',
   /* news_list_view_page 7ffd4bab */   'class' => '',
   /* news_list_view_page 7ffd4bab */   'id' => '',
   /* news_list_view_page 7ffd4bab */   'override_title' => 1,
   /* news_list_view_page 7ffd4bab */   'override_title_text' => 'News',
   /* news_list_view_page 7ffd4bab */   'override_title_heading' => 'span',
   /* news_list_view_page 7ffd4bab */ );
   /* news_list_view_page 7ffd4bab */ $pane->cache = array();
   /* news_list_view_page 7ffd4bab */ $pane->style = array(
   /* news_list_view_page 7ffd4bab */   'settings' => array(
   /* news_list_view_page 7ffd4bab */     'clean_markup' => array(
   /* news_list_view_page 7ffd4bab */       'pane_wrapper' => 'div',
   /* news_list_view_page 7ffd4bab */       'additional_pane_classes' => 'page-title-wrapper',
   /* news_list_view_page 7ffd4bab */       'additional_pane_attributes' => '',
   /* news_list_view_page 7ffd4bab */       'enable_inner_div' => 0,
   /* news_list_view_page 7ffd4bab */       'title_wrapper' => 'span',
   /* news_list_view_page 7ffd4bab */       'title_hide' => 0,
   /* news_list_view_page 7ffd4bab */       'content_wrapper' => 'none',
   /* news_list_view_page 7ffd4bab */     ),
   /* news_list_view_page 7ffd4bab */   ),
   /* news_list_view_page 7ffd4bab */   'style' => 'clean_element',
   /* news_list_view_page 7ffd4bab */ );
   /* news_list_view_page 7ffd4bab */ $pane->css = array();
   /* news_list_view_page 7ffd4bab */ $pane->extras = array();
   /* news_list_view_page 7ffd4bab */ $pane->position = 0;
   /* news_list_view_page 7ffd4bab */ $pane->locks = array();
   /* news_list_view_page 7ffd4bab */ $pane->uuid = '7ffd4bab-d898-45d8-bde0-3823ba09df6a';
  $display->content['new-7ffd4bab-d898-45d8-bde0-3823ba09df6a'] = $pane;
  $display->panels['top'][0] = 'new-7ffd4bab-d898-45d8-bde0-3823ba09df6a';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['news_list_view_page'] = $page;

   /* posts_page */ $page = new stdClass();
   /* posts_page */ $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
   /* posts_page */ $page->api_version = 1;
   /* posts_page */ $page->name = 'posts_page';
   /* posts_page */ $page->task = 'page';
   /* posts_page */ $page->admin_title = 'Posts page';
   /* posts_page */ $page->admin_description = '';
   /* posts_page */ $page->path = 'posts';
   /* posts_page */ $page->access = array(
   /* posts_page */   'type' => 'none',
   /* posts_page */   'settings' => NULL,
   /* posts_page */ );
   /* posts_page */ $page->menu = array();
   /* posts_page */ $page->arguments = array();
   /* posts_page */ $page->conf = array(
   /* posts_page */   'admin_paths' => FALSE,
   /* posts_page */ );
  $page->default_handlers = array();
   /* page_posts_page_panel_context */ $handler = new stdClass();
   /* page_posts_page_panel_context */ $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
   /* page_posts_page_panel_context */ $handler->api_version = 1;
   /* page_posts_page_panel_context */ $handler->name = 'page_posts_page_panel_context';
   /* page_posts_page_panel_context */ $handler->task = 'page';
   /* page_posts_page_panel_context */ $handler->subtask = 'posts_page';
   /* page_posts_page_panel_context */ $handler->handler = 'panel_context';
   /* page_posts_page_panel_context */ $handler->weight = 0;
   /* page_posts_page_panel_context */ $handler->conf = array(
   /* page_posts_page_panel_context */   'title' => 'Panel',
   /* page_posts_page_panel_context */   'no_blocks' => 0,
   /* page_posts_page_panel_context */   'pipeline' => 'standard',
   /* page_posts_page_panel_context */   'body_classes_to_remove' => '',
   /* page_posts_page_panel_context */   'body_classes_to_add' => '',
   /* page_posts_page_panel_context */   'css_id' => '',
   /* page_posts_page_panel_context */   'css' => '',
   /* page_posts_page_panel_context */   'contexts' => array(),
   /* page_posts_page_panel_context */   'relationships' => array(),
   /* page_posts_page_panel_context */ );
   /* posts_page da20816e */ $display = new panels_display();
   /* posts_page da20816e */ $display->layout = 'radix_burr_flipped';
   /* posts_page da20816e */ $display->layout_settings = array();
   /* posts_page da20816e */ $display->panel_settings = array(
   /* posts_page da20816e */   'style_settings' => array(
   /* posts_page da20816e */     'default' => NULL,
   /* posts_page da20816e */     'contentmain' => NULL,
   /* posts_page da20816e */     'sidebar' => NULL,
   /* posts_page da20816e */   ),
   /* posts_page da20816e */ );
   /* posts_page da20816e */ $display->cache = array();
   /* posts_page da20816e */ $display->title = 'Sample Posts Page';
   /* posts_page da20816e */ $display->uuid = 'da20816e-85e7-4abb-8936-d1eb2f3f6796';
   /* posts_page da20816e */ $display->storage_type = 'page_manager';
   /* posts_page da20816e */ $display->storage_id = 'page_posts_page_panel_context';
  $display->content = array();
  $display->panels = array();
   /* posts_page 00f183f5 */ $pane = new stdClass();
   /* posts_page 00f183f5 */ $pane->pid = 'new-00f183f5-d356-4177-865c-37770020d457';
   /* posts_page 00f183f5 */ $pane->panel = 'contentmain';
   /* posts_page 00f183f5 */ $pane->type = 'panels_mini';
   /* posts_page 00f183f5 */ $pane->subtype = 'add_post_mini_form';
   /* posts_page 00f183f5 */ $pane->shown = TRUE;
   /* posts_page 00f183f5 */ $pane->access = array();
   /* posts_page 00f183f5 */ $pane->configuration = array(
   /* posts_page 00f183f5 */   'override_title' => 0,
   /* posts_page 00f183f5 */   'override_title_text' => '',
   /* posts_page 00f183f5 */ );
   /* posts_page 00f183f5 */ $pane->cache = array();
   /* posts_page 00f183f5 */ $pane->style = array(
   /* posts_page 00f183f5 */   'settings' => NULL,
   /* posts_page 00f183f5 */ );
   /* posts_page 00f183f5 */ $pane->css = array();
   /* posts_page 00f183f5 */ $pane->extras = array();
   /* posts_page 00f183f5 */ $pane->position = 0;
   /* posts_page 00f183f5 */ $pane->locks = array();
   /* posts_page 00f183f5 */ $pane->uuid = '00f183f5-d356-4177-865c-37770020d457';
  $display->content['new-00f183f5-d356-4177-865c-37770020d457'] = $pane;
  $display->panels['contentmain'][0] = 'new-00f183f5-d356-4177-865c-37770020d457';
   /* posts_page 47d9624a */ $pane = new stdClass();
   /* posts_page 47d9624a */ $pane->pid = 'new-47d9624a-bfee-42ab-bfd6-b72db9793940';
   /* posts_page 47d9624a */ $pane->panel = 'contentmain';
   /* posts_page 47d9624a */ $pane->type = 'views_panes';
   /* posts_page 47d9624a */ $pane->subtype = 'news_announcements_posts-panel_pane_1';
   /* posts_page 47d9624a */ $pane->shown = TRUE;
   /* posts_page 47d9624a */ $pane->access = array();
   /* posts_page 47d9624a */ $pane->configuration = array(
   /* posts_page 47d9624a */   'arguments' => array(
   /* posts_page 47d9624a */     'type' => 'Post',
   /* posts_page 47d9624a */   ),
   /* posts_page 47d9624a */   'context' => array(
   /* posts_page 47d9624a */     1 => 'empty',
   /* posts_page 47d9624a */   ),
   /* posts_page 47d9624a */ );
   /* posts_page 47d9624a */ $pane->cache = array();
   /* posts_page 47d9624a */ $pane->style = array(
   /* posts_page 47d9624a */   'settings' => NULL,
   /* posts_page 47d9624a */ );
   /* posts_page 47d9624a */ $pane->css = array();
   /* posts_page 47d9624a */ $pane->extras = array();
   /* posts_page 47d9624a */ $pane->position = 1;
   /* posts_page 47d9624a */ $pane->locks = array();
   /* posts_page 47d9624a */ $pane->uuid = '47d9624a-bfee-42ab-bfd6-b72db9793940';
  $display->content['new-47d9624a-bfee-42ab-bfd6-b72db9793940'] = $pane;
  $display->panels['contentmain'][1] = 'new-47d9624a-bfee-42ab-bfd6-b72db9793940';
   /* posts_page 4df0f3ab */ $pane = new stdClass();
   /* posts_page 4df0f3ab */ $pane->pid = 'new-4df0f3ab-41b9-4ff9-96c5-c67441dd82d1';
   /* posts_page 4df0f3ab */ $pane->panel = 'sidebar';
   /* posts_page 4df0f3ab */ $pane->type = 'custom';
   /* posts_page 4df0f3ab */ $pane->subtype = 'custom';
   /* posts_page 4df0f3ab */ $pane->shown = TRUE;
   /* posts_page 4df0f3ab */ $pane->access = array();
   /* posts_page 4df0f3ab */ $pane->configuration = array(
   /* posts_page 4df0f3ab */   'admin_title' => '',
   /* posts_page 4df0f3ab */   'title' => '',
   /* posts_page 4df0f3ab */   'body' => '',
   /* posts_page 4df0f3ab */   'format' => 'full_html',
   /* posts_page 4df0f3ab */   'substitute' => TRUE,
   /* posts_page 4df0f3ab */   'name' => 'sample_content_block',
   /* posts_page 4df0f3ab */ );
   /* posts_page 4df0f3ab */ $pane->cache = array();
   /* posts_page 4df0f3ab */ $pane->style = array(
   /* posts_page 4df0f3ab */   'settings' => NULL,
   /* posts_page 4df0f3ab */ );
   /* posts_page 4df0f3ab */ $pane->css = array();
   /* posts_page 4df0f3ab */ $pane->extras = array();
   /* posts_page 4df0f3ab */ $pane->position = 0;
   /* posts_page 4df0f3ab */ $pane->locks = array();
   /* posts_page 4df0f3ab */ $pane->uuid = '4df0f3ab-41b9-4ff9-96c5-c67441dd82d1';
  $display->content['new-4df0f3ab-41b9-4ff9-96c5-c67441dd82d1'] = $pane;
  $display->panels['sidebar'][0] = 'new-4df0f3ab-41b9-4ff9-96c5-c67441dd82d1';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-00f183f5-d356-4177-865c-37770020d457';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['posts_page'] = $page;

   /* search_default_page */ $page = new stdClass();
   /* search_default_page */ $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
   /* search_default_page */ $page->api_version = 1;
   /* search_default_page */ $page->name = 'search_default_page';
   /* search_default_page */ $page->task = 'page';
   /* search_default_page */ $page->admin_title = 'Search-Default-Page';
   /* search_default_page */ $page->admin_description = '';
   /* search_default_page */ $page->path = 'search';
   /* search_default_page */ $page->access = array(
   /* search_default_page */   'type' => 'none',
   /* search_default_page */   'settings' => NULL,
   /* search_default_page */ );
   /* search_default_page */ $page->menu = array();
   /* search_default_page */ $page->arguments = array();
   /* search_default_page */ $page->conf = array(
   /* search_default_page */   'admin_paths' => FALSE,
   /* search_default_page */ );
  $page->default_handlers = array();
   /* page_search_default_page_panel_context */ $handler = new stdClass();
   /* page_search_default_page_panel_context */ $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
   /* page_search_default_page_panel_context */ $handler->api_version = 1;
   /* page_search_default_page_panel_context */ $handler->name = 'page_search_default_page_panel_context';
   /* page_search_default_page_panel_context */ $handler->task = 'page';
   /* page_search_default_page_panel_context */ $handler->subtask = 'search_default_page';
   /* page_search_default_page_panel_context */ $handler->handler = 'panel_context';
   /* page_search_default_page_panel_context */ $handler->weight = 0;
   /* page_search_default_page_panel_context */ $handler->conf = array(
   /* page_search_default_page_panel_context */   'title' => 'Search-Default-Panel',
   /* page_search_default_page_panel_context */   'no_blocks' => 0,
   /* page_search_default_page_panel_context */   'pipeline' => 'standard',
   /* page_search_default_page_panel_context */   'body_classes_to_remove' => '',
   /* page_search_default_page_panel_context */   'body_classes_to_add' => 'page_search--content',
   /* page_search_default_page_panel_context */   'css_id' => '',
   /* page_search_default_page_panel_context */   'css' => '',
   /* page_search_default_page_panel_context */   'contexts' => array(),
   /* page_search_default_page_panel_context */   'relationships' => array(),
   /* page_search_default_page_panel_context */ );
   /* search_default_page 1d56ae49 */ $display = new panels_display();
   /* search_default_page 1d56ae49 */ $display->layout = 'gn2_2colstacked_page';
   /* search_default_page 1d56ae49 */ $display->layout_settings = array();
   /* search_default_page 1d56ae49 */ $display->panel_settings = array(
   /* search_default_page 1d56ae49 */   'style_settings' => array(
   /* search_default_page 1d56ae49 */     'default' => NULL,
   /* search_default_page 1d56ae49 */     'sidebar' => array(
   /* search_default_page 1d56ae49 */       'clean_markup' => array(
   /* search_default_page 1d56ae49 */         'region_wrapper' => 'div',
   /* search_default_page 1d56ae49 */         'additional_region_classes' => '',
   /* search_default_page 1d56ae49 */         'additional_region_attributes' => '',
   /* search_default_page 1d56ae49 */         'enable_inner_div' => 0,
   /* search_default_page 1d56ae49 */         'pane_separators' => 0,
   /* search_default_page 1d56ae49 */       ),
   /* search_default_page 1d56ae49 */     ),
   /* search_default_page 1d56ae49 */     'contentmain' => NULL,
   /* search_default_page 1d56ae49 */     'main_content' => NULL,
   /* search_default_page 1d56ae49 */     'top' => array(
   /* search_default_page 1d56ae49 */       'clean_markup' => array(
   /* search_default_page 1d56ae49 */         'region_wrapper' => 'div',
   /* search_default_page 1d56ae49 */         'additional_region_classes' => 'search-header',
   /* search_default_page 1d56ae49 */         'additional_region_attributes' => '',
   /* search_default_page 1d56ae49 */         'enable_inner_div' => 0,
   /* search_default_page 1d56ae49 */         'pane_separators' => 0,
   /* search_default_page 1d56ae49 */       ),
   /* search_default_page 1d56ae49 */     ),
   /* search_default_page 1d56ae49 */     'main_top' => array(
   /* search_default_page 1d56ae49 */       'clean_markup' => array(
   /* search_default_page 1d56ae49 */         'region_wrapper' => 'div',
   /* search_default_page 1d56ae49 */         'additional_region_classes' => '',
   /* search_default_page 1d56ae49 */         'additional_region_attributes' => '',
   /* search_default_page 1d56ae49 */         'enable_inner_div' => 0,
   /* search_default_page 1d56ae49 */         'pane_separators' => 0,
   /* search_default_page 1d56ae49 */       ),
   /* search_default_page 1d56ae49 */     ),
   /* search_default_page 1d56ae49 */     'main_bottom' => NULL,
   /* search_default_page 1d56ae49 */     'footer' => NULL,
   /* search_default_page 1d56ae49 */   ),
   /* search_default_page 1d56ae49 */   'top' => array(
   /* search_default_page 1d56ae49 */     'style' => 'clean_element',
   /* search_default_page 1d56ae49 */   ),
   /* search_default_page 1d56ae49 */   'sidebar' => array(
   /* search_default_page 1d56ae49 */     'style' => 'clean_element',
   /* search_default_page 1d56ae49 */   ),
   /* search_default_page 1d56ae49 */   'main_top' => array(
   /* search_default_page 1d56ae49 */     'style' => 'clean_element',
   /* search_default_page 1d56ae49 */   ),
   /* search_default_page 1d56ae49 */ );
   /* search_default_page 1d56ae49 */ $display->cache = array();
   /* search_default_page 1d56ae49 */ $display->title = 'Search';
   /* search_default_page 1d56ae49 */ $display->uuid = '1d56ae49-d801-4356-9cc0-cea4c1c38b56';
   /* search_default_page 1d56ae49 */ $display->storage_type = 'page_manager';
   /* search_default_page 1d56ae49 */ $display->storage_id = 'page_search_default_page_panel_context';
  $display->content = array();
  $display->panels = array();
   /* search_default_page 64a84d9c */ $pane = new stdClass();
   /* search_default_page 64a84d9c */ $pane->pid = 'new-64a84d9c-c85c-4fa7-b657-f921522bfdff';
   /* search_default_page 64a84d9c */ $pane->panel = 'main_top';
   /* search_default_page 64a84d9c */ $pane->type = 'views_panes';
   /* search_default_page 64a84d9c */ $pane->subtype = 'search_default-panel_pane_1';
   /* search_default_page 64a84d9c */ $pane->shown = TRUE;
   /* search_default_page 64a84d9c */ $pane->access = array();
   /* search_default_page 64a84d9c */ $pane->configuration = array();
   /* search_default_page 64a84d9c */ $pane->cache = array();
   /* search_default_page 64a84d9c */ $pane->style = array(
   /* search_default_page 64a84d9c */   'settings' => NULL,
   /* search_default_page 64a84d9c */ );
   /* search_default_page 64a84d9c */ $pane->css = array();
   /* search_default_page 64a84d9c */ $pane->extras = array();
   /* search_default_page 64a84d9c */ $pane->position = 0;
   /* search_default_page 64a84d9c */ $pane->locks = array();
   /* search_default_page 64a84d9c */ $pane->uuid = '64a84d9c-c85c-4fa7-b657-f921522bfdff';
  $display->content['new-64a84d9c-c85c-4fa7-b657-f921522bfdff'] = $pane;
  $display->panels['main_top'][0] = 'new-64a84d9c-c85c-4fa7-b657-f921522bfdff';
   /* search_default_page d3734c64 */ $pane = new stdClass();
   /* search_default_page d3734c64 */ $pane->pid = 'new-d3734c64-9aa2-4a06-8d09-75d7a6b34e7c';
   /* search_default_page d3734c64 */ $pane->panel = 'sidebar';
   /* search_default_page d3734c64 */ $pane->type = 'block';
   /* search_default_page d3734c64 */ $pane->subtype = 'facetapi-79irCAQhNh1EduWNWWvGLbyGkWeQUKU3';
   /* search_default_page d3734c64 */ $pane->shown = TRUE;
   /* search_default_page d3734c64 */ $pane->access = array();
   /* search_default_page d3734c64 */ $pane->configuration = array(
   /* search_default_page d3734c64 */   'override_title' => 1,
   /* search_default_page d3734c64 */   'override_title_text' => 'Show results for',
   /* search_default_page d3734c64 */   'override_title_heading' => 'h2',
   /* search_default_page d3734c64 */ );
   /* search_default_page d3734c64 */ $pane->cache = array();
   /* search_default_page d3734c64 */ $pane->style = array(
   /* search_default_page d3734c64 */   'settings' => NULL,
   /* search_default_page d3734c64 */ );
   /* search_default_page d3734c64 */ $pane->css = array();
   /* search_default_page d3734c64 */ $pane->extras = array();
   /* search_default_page d3734c64 */ $pane->position = 0;
   /* search_default_page d3734c64 */ $pane->locks = array();
   /* search_default_page d3734c64 */ $pane->uuid = 'd3734c64-9aa2-4a06-8d09-75d7a6b34e7c';
  $display->content['new-d3734c64-9aa2-4a06-8d09-75d7a6b34e7c'] = $pane;
  $display->panels['sidebar'][0] = 'new-d3734c64-9aa2-4a06-8d09-75d7a6b34e7c';
   /* search_default_page b98216a0 */ $pane = new stdClass();
   /* search_default_page b98216a0 */ $pane->pid = 'new-b98216a0-2381-4d39-be40-20d44c919aa0';
   /* search_default_page b98216a0 */ $pane->panel = 'sidebar';
   /* search_default_page b98216a0 */ $pane->type = 'custom';
   /* search_default_page b98216a0 */ $pane->subtype = 'custom';
   /* search_default_page b98216a0 */ $pane->shown = TRUE;
   /* search_default_page b98216a0 */ $pane->access = array();
   /* search_default_page b98216a0 */ $pane->configuration = array(
   /* search_default_page b98216a0 */   'admin_title' => 'Refine by',
   /* search_default_page b98216a0 */   'title' => 'Refine by',
   /* search_default_page b98216a0 */   'body' => '<p>Refine by</p>
',
   /* search_default_page b98216a0 */   'format' => 'filtered_html',
   /* search_default_page b98216a0 */   'substitute' => TRUE,
   /* search_default_page b98216a0 */ );
   /* search_default_page b98216a0 */ $pane->cache = array();
   /* search_default_page b98216a0 */ $pane->style = array(
   /* search_default_page b98216a0 */   'settings' => array(
   /* search_default_page b98216a0 */     'clean_markup' => array(
   /* search_default_page b98216a0 */       'pane_wrapper' => 'div',
   /* search_default_page b98216a0 */       'additional_pane_classes' => 'panel-pane sidebar-subheading hidecontent titleonly refineby',
   /* search_default_page b98216a0 */       'additional_pane_attributes' => '',
   /* search_default_page b98216a0 */       'enable_inner_div' => 0,
   /* search_default_page b98216a0 */       'title_wrapper' => 'h3',
   /* search_default_page b98216a0 */       'title_hide' => 0,
   /* search_default_page b98216a0 */       'content_wrapper' => 'div',
   /* search_default_page b98216a0 */     ),
   /* search_default_page b98216a0 */   ),
   /* search_default_page b98216a0 */   'style' => 'clean_element',
   /* search_default_page b98216a0 */ );
   /* search_default_page b98216a0 */ $pane->css = array();
   /* search_default_page b98216a0 */ $pane->extras = array();
   /* search_default_page b98216a0 */ $pane->position = 1;
   /* search_default_page b98216a0 */ $pane->locks = array();
   /* search_default_page b98216a0 */ $pane->uuid = 'b98216a0-2381-4d39-be40-20d44c919aa0';
  $display->content['new-b98216a0-2381-4d39-be40-20d44c919aa0'] = $pane;
  $display->panels['sidebar'][1] = 'new-b98216a0-2381-4d39-be40-20d44c919aa0';
   /* search_default_page 593b57ac */ $pane = new stdClass();
   /* search_default_page 593b57ac */ $pane->pid = 'new-593b57ac-1341-4b63-9f4d-6a5b4113a25f';
   /* search_default_page 593b57ac */ $pane->panel = 'sidebar';
   /* search_default_page 593b57ac */ $pane->type = 'block';
   /* search_default_page 593b57ac */ $pane->subtype = 'facetapi-zIH8EsYFkvWKeMtTZTGLEm1GrYlAarmk';
   /* search_default_page 593b57ac */ $pane->shown = TRUE;
   /* search_default_page 593b57ac */ $pane->access = array();
   /* search_default_page 593b57ac */ $pane->configuration = array(
   /* search_default_page 593b57ac */   'override_title' => 1,
   /* search_default_page 593b57ac */   'override_title_text' => 'Type',
   /* search_default_page 593b57ac */   'override_title_heading' => 'h2',
   /* search_default_page 593b57ac */ );
   /* search_default_page 593b57ac */ $pane->cache = array();
   /* search_default_page 593b57ac */ $pane->style = array(
   /* search_default_page 593b57ac */   'settings' => NULL,
   /* search_default_page 593b57ac */ );
   /* search_default_page 593b57ac */ $pane->css = array();
   /* search_default_page 593b57ac */ $pane->extras = array();
   /* search_default_page 593b57ac */ $pane->position = 2;
   /* search_default_page 593b57ac */ $pane->locks = array();
   /* search_default_page 593b57ac */ $pane->uuid = '593b57ac-1341-4b63-9f4d-6a5b4113a25f';
  $display->content['new-593b57ac-1341-4b63-9f4d-6a5b4113a25f'] = $pane;
  $display->panels['sidebar'][2] = 'new-593b57ac-1341-4b63-9f4d-6a5b4113a25f';
   /* search_default_page 099215f1 */ $pane = new stdClass();
   /* search_default_page 099215f1 */ $pane->pid = 'new-099215f1-a60d-43ee-a4d8-e3bdc136deff';
   /* search_default_page 099215f1 */ $pane->panel = 'sidebar';
   /* search_default_page 099215f1 */ $pane->type = 'block';
   /* search_default_page 099215f1 */ $pane->subtype = 'facetapi-1fFlaYnlCxAmFmZReELQTn1I0haqVbHB';
   /* search_default_page 099215f1 */ $pane->shown = TRUE;
   /* search_default_page 099215f1 */ $pane->access = array();
   /* search_default_page 099215f1 */ $pane->configuration = array(
   /* search_default_page 099215f1 */   'override_title' => 1,
   /* search_default_page 099215f1 */   'override_title_text' => 'Start date',
   /* search_default_page 099215f1 */   'override_title_heading' => 'h2',
   /* search_default_page 099215f1 */ );
   /* search_default_page 099215f1 */ $pane->cache = array();
   /* search_default_page 099215f1 */ $pane->style = array(
   /* search_default_page 099215f1 */   'settings' => NULL,
   /* search_default_page 099215f1 */ );
   /* search_default_page 099215f1 */ $pane->css = array();
   /* search_default_page 099215f1 */ $pane->extras = array();
   /* search_default_page 099215f1 */ $pane->position = 3;
   /* search_default_page 099215f1 */ $pane->locks = array();
   /* search_default_page 099215f1 */ $pane->uuid = '099215f1-a60d-43ee-a4d8-e3bdc136deff';
  $display->content['new-099215f1-a60d-43ee-a4d8-e3bdc136deff'] = $pane;
  $display->panels['sidebar'][3] = 'new-099215f1-a60d-43ee-a4d8-e3bdc136deff';
   /* search_default_page d87dd069 */ $pane = new stdClass();
   /* search_default_page d87dd069 */ $pane->pid = 'new-d87dd069-96f0-40d0-9883-3254304bd170';
   /* search_default_page d87dd069 */ $pane->panel = 'sidebar';
   /* search_default_page d87dd069 */ $pane->type = 'block';
   /* search_default_page d87dd069 */ $pane->subtype = 'facetapi-HUO26CGDEEQwIqYLkqiPQGahBGtx00qD';
   /* search_default_page d87dd069 */ $pane->shown = TRUE;
   /* search_default_page d87dd069 */ $pane->access = array();
   /* search_default_page d87dd069 */ $pane->configuration = array(
   /* search_default_page d87dd069 */   'override_title' => 1,
   /* search_default_page d87dd069 */   'override_title_text' => 'Topic',
   /* search_default_page d87dd069 */   'override_title_heading' => 'h2',
   /* search_default_page d87dd069 */ );
   /* search_default_page d87dd069 */ $pane->cache = array();
   /* search_default_page d87dd069 */ $pane->style = array(
   /* search_default_page d87dd069 */   'settings' => NULL,
   /* search_default_page d87dd069 */ );
   /* search_default_page d87dd069 */ $pane->css = array();
   /* search_default_page d87dd069 */ $pane->extras = array();
   /* search_default_page d87dd069 */ $pane->position = 4;
   /* search_default_page d87dd069 */ $pane->locks = array();
   /* search_default_page d87dd069 */ $pane->uuid = 'd87dd069-96f0-40d0-9883-3254304bd170';
  $display->content['new-d87dd069-96f0-40d0-9883-3254304bd170'] = $pane;
  $display->panels['sidebar'][4] = 'new-d87dd069-96f0-40d0-9883-3254304bd170';
   /* search_default_page 09a9563f */ $pane = new stdClass();
   /* search_default_page 09a9563f */ $pane->pid = 'new-09a9563f-ed64-4f2c-a9f1-4f7acb4c7827';
   /* search_default_page 09a9563f */ $pane->panel = 'sidebar';
   /* search_default_page 09a9563f */ $pane->type = 'block';
   /* search_default_page 09a9563f */ $pane->subtype = 'facetapi-QNsMgniG0PgY1aGk0BUXbVSIqUKDJ0ao';
   /* search_default_page 09a9563f */ $pane->shown = TRUE;
   /* search_default_page 09a9563f */ $pane->access = array();
   /* search_default_page 09a9563f */ $pane->configuration = array(
   /* search_default_page 09a9563f */   'override_title' => 1,
   /* search_default_page 09a9563f */   'override_title_text' => 'Language',
   /* search_default_page 09a9563f */   'override_title_heading' => 'h2',
   /* search_default_page 09a9563f */ );
   /* search_default_page 09a9563f */ $pane->cache = array();
   /* search_default_page 09a9563f */ $pane->style = array(
   /* search_default_page 09a9563f */   'settings' => NULL,
   /* search_default_page 09a9563f */ );
   /* search_default_page 09a9563f */ $pane->css = array();
   /* search_default_page 09a9563f */ $pane->extras = array();
   /* search_default_page 09a9563f */ $pane->position = 5;
   /* search_default_page 09a9563f */ $pane->locks = array();
   /* search_default_page 09a9563f */ $pane->uuid = '09a9563f-ed64-4f2c-a9f1-4f7acb4c7827';
  $display->content['new-09a9563f-ed64-4f2c-a9f1-4f7acb4c7827'] = $pane;
  $display->panels['sidebar'][5] = 'new-09a9563f-ed64-4f2c-a9f1-4f7acb4c7827';
   /* search_default_page 34deb2ce */ $pane = new stdClass();
   /* search_default_page 34deb2ce */ $pane->pid = 'new-34deb2ce-15ec-4af4-b94d-4e8455ffa9e3';
   /* search_default_page 34deb2ce */ $pane->panel = 'sidebar';
   /* search_default_page 34deb2ce */ $pane->type = 'block';
   /* search_default_page 34deb2ce */ $pane->subtype = 'facetapi-PrRkkPcSQeNZNRi52G1e5TFoVa1ITCtJ';
   /* search_default_page 34deb2ce */ $pane->shown = TRUE;
   /* search_default_page 34deb2ce */ $pane->access = array();
   /* search_default_page 34deb2ce */ $pane->configuration = array(
   /* search_default_page 34deb2ce */   'override_title' => 1,
   /* search_default_page 34deb2ce */   'override_title_text' => 'Region',
   /* search_default_page 34deb2ce */   'override_title_heading' => 'h2',
   /* search_default_page 34deb2ce */ );
   /* search_default_page 34deb2ce */ $pane->cache = array();
   /* search_default_page 34deb2ce */ $pane->style = array(
   /* search_default_page 34deb2ce */   'settings' => NULL,
   /* search_default_page 34deb2ce */ );
   /* search_default_page 34deb2ce */ $pane->css = array();
   /* search_default_page 34deb2ce */ $pane->extras = array();
   /* search_default_page 34deb2ce */ $pane->position = 6;
   /* search_default_page 34deb2ce */ $pane->locks = array();
   /* search_default_page 34deb2ce */ $pane->uuid = '34deb2ce-15ec-4af4-b94d-4e8455ffa9e3';
  $display->content['new-34deb2ce-15ec-4af4-b94d-4e8455ffa9e3'] = $pane;
  $display->panels['sidebar'][6] = 'new-34deb2ce-15ec-4af4-b94d-4e8455ffa9e3';
   /* search_default_page 3aa27121 */ $pane = new stdClass();
   /* search_default_page 3aa27121 */ $pane->pid = 'new-3aa27121-ec08-43cc-b5a3-793dfb58b25f';
   /* search_default_page 3aa27121 */ $pane->panel = 'sidebar';
   /* search_default_page 3aa27121 */ $pane->type = 'block';
   /* search_default_page 3aa27121 */ $pane->subtype = 'facetapi-WZ3k4TZ01lxmPf1x3NJjAiMYNOtaVrsb';
   /* search_default_page 3aa27121 */ $pane->shown = TRUE;
   /* search_default_page 3aa27121 */ $pane->access = array();
   /* search_default_page 3aa27121 */ $pane->configuration = array(
   /* search_default_page 3aa27121 */   'override_title' => 1,
   /* search_default_page 3aa27121 */   'override_title_text' => 'Country',
   /* search_default_page 3aa27121 */   'override_title_heading' => 'h2',
   /* search_default_page 3aa27121 */ );
   /* search_default_page 3aa27121 */ $pane->cache = array();
   /* search_default_page 3aa27121 */ $pane->style = array(
   /* search_default_page 3aa27121 */   'settings' => NULL,
   /* search_default_page 3aa27121 */ );
   /* search_default_page 3aa27121 */ $pane->css = array();
   /* search_default_page 3aa27121 */ $pane->extras = array();
   /* search_default_page 3aa27121 */ $pane->position = 7;
   /* search_default_page 3aa27121 */ $pane->locks = array();
   /* search_default_page 3aa27121 */ $pane->uuid = '3aa27121-ec08-43cc-b5a3-793dfb58b25f';
  $display->content['new-3aa27121-ec08-43cc-b5a3-793dfb58b25f'] = $pane;
  $display->panels['sidebar'][7] = 'new-3aa27121-ec08-43cc-b5a3-793dfb58b25f';
   /* search_default_page 21df6cf3 */ $pane = new stdClass();
   /* search_default_page 21df6cf3 */ $pane->pid = 'new-21df6cf3-91e3-4efe-9c03-5d33651ce04e';
   /* search_default_page 21df6cf3 */ $pane->panel = 'top';
   /* search_default_page 21df6cf3 */ $pane->type = 'block';
   /* search_default_page 21df6cf3 */ $pane->subtype = 'views-bbb112b9fdf97c43eb15e634ab3babb3';
   /* search_default_page 21df6cf3 */ $pane->shown = TRUE;
   /* search_default_page 21df6cf3 */ $pane->access = array();
   /* search_default_page 21df6cf3 */ $pane->configuration = array(
   /* search_default_page 21df6cf3 */   'inherit_path' => 1,
   /* search_default_page 21df6cf3 */   'override_title' => 0,
   /* search_default_page 21df6cf3 */   'override_title_text' => '',
   /* search_default_page 21df6cf3 */ );
   /* search_default_page 21df6cf3 */ $pane->cache = array();
   /* search_default_page 21df6cf3 */ $pane->style = array(
   /* search_default_page 21df6cf3 */   'settings' => array(
   /* search_default_page 21df6cf3 */     'clean_markup' => array(
   /* search_default_page 21df6cf3 */       'pane_wrapper' => 'div',
   /* search_default_page 21df6cf3 */       'additional_pane_classes' => 'panel-pane search-form',
   /* search_default_page 21df6cf3 */       'additional_pane_attributes' => '',
   /* search_default_page 21df6cf3 */       'enable_inner_div' => 0,
   /* search_default_page 21df6cf3 */       'title_wrapper' => 'h2',
   /* search_default_page 21df6cf3 */       'title_hide' => 0,
   /* search_default_page 21df6cf3 */       'content_wrapper' => 'none',
   /* search_default_page 21df6cf3 */     ),
   /* search_default_page 21df6cf3 */   ),
   /* search_default_page 21df6cf3 */   'style' => 'clean_element',
   /* search_default_page 21df6cf3 */ );
   /* search_default_page 21df6cf3 */ $pane->css = array();
   /* search_default_page 21df6cf3 */ $pane->extras = array();
   /* search_default_page 21df6cf3 */ $pane->position = 0;
   /* search_default_page 21df6cf3 */ $pane->locks = array();
   /* search_default_page 21df6cf3 */ $pane->uuid = '21df6cf3-91e3-4efe-9c03-5d33651ce04e';
  $display->content['new-21df6cf3-91e3-4efe-9c03-5d33651ce04e'] = $pane;
  $display->panels['top'][0] = 'new-21df6cf3-91e3-4efe-9c03-5d33651ce04e';
   /* search_default_page 807e3327 */ $pane = new stdClass();
   /* search_default_page 807e3327 */ $pane->pid = 'new-807e3327-5d71-424d-ab23-6f1e334d0131';
   /* search_default_page 807e3327 */ $pane->panel = 'top';
   /* search_default_page 807e3327 */ $pane->type = 'block';
   /* search_default_page 807e3327 */ $pane->subtype = 'gn2_search-link_to_member_search';
   /* search_default_page 807e3327 */ $pane->shown = TRUE;
   /* search_default_page 807e3327 */ $pane->access = array(
   /* search_default_page 807e3327 */   'plugins' => array(
   /* search_default_page 807e3327 */     0 => array(
   /* search_default_page 807e3327 */       'name' => 'role',
   /* search_default_page 807e3327 */       'settings' => array(
   /* search_default_page 807e3327 */         'rids' => array(
   /* search_default_page 807e3327 */           0 => 1,
   /* search_default_page 807e3327 */         ),
   /* search_default_page 807e3327 */       ),
   /* search_default_page 807e3327 */       'context' => 'logged-in-user',
   /* search_default_page 807e3327 */       'not' => TRUE,
   /* search_default_page 807e3327 */     ),
   /* search_default_page 807e3327 */   ),
   /* search_default_page 807e3327 */ );
   /* search_default_page 807e3327 */ $pane->configuration = array(
   /* search_default_page 807e3327 */   'override_title' => 0,
   /* search_default_page 807e3327 */   'override_title_text' => '',
   /* search_default_page 807e3327 */   'override_title_heading' => 'h2',
   /* search_default_page 807e3327 */ );
   /* search_default_page 807e3327 */ $pane->cache = array();
   /* search_default_page 807e3327 */ $pane->style = array(
   /* search_default_page 807e3327 */   'settings' => NULL,
   /* search_default_page 807e3327 */ );
   /* search_default_page 807e3327 */ $pane->css = array();
   /* search_default_page 807e3327 */ $pane->extras = array();
   /* search_default_page 807e3327 */ $pane->position = 1;
   /* search_default_page 807e3327 */ $pane->locks = array();
   /* search_default_page 807e3327 */ $pane->uuid = '807e3327-5d71-424d-ab23-6f1e334d0131';
  $display->content['new-807e3327-5d71-424d-ab23-6f1e334d0131'] = $pane;
  $display->panels['top'][1] = 'new-807e3327-5d71-424d-ab23-6f1e334d0131';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-21df6cf3-91e3-4efe-9c03-5d33651ce04e';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['search_default_page'] = $page;

   /* search_members_page */ $page = new stdClass();
   /* search_members_page */ $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
   /* search_members_page */ $page->api_version = 1;
   /* search_members_page */ $page->name = 'search_members_page';
   /* search_members_page */ $page->task = 'page';
   /* search_members_page */ $page->admin_title = 'Search-Members-Page';
   /* search_members_page */ $page->admin_description = '';
   /* search_members_page */ $page->path = 'members';
   /* search_members_page */ $page->access = array(
   /* search_members_page */   'type' => 'none',
   /* search_members_page */   'settings' => NULL,
   /* search_members_page */   'plugins' => array(
   /* search_members_page */     1 => array(
   /* search_members_page */       'name' => 'role',
   /* search_members_page */       'settings' => array(
   /* search_members_page */         'rids' => array(
   /* search_members_page */           0 => 2,
   /* search_members_page */         ),
   /* search_members_page */       ),
   /* search_members_page */       'context' => 'logged-in-user',
   /* search_members_page */       'not' => FALSE,
   /* search_members_page */     ),
   /* search_members_page */   ),
   /* search_members_page */   'logic' => 'and',
   /* search_members_page */ );
   /* search_members_page */ $page->menu = array();
   /* search_members_page */ $page->arguments = array();
   /* search_members_page */ $page->conf = array(
   /* search_members_page */   'admin_paths' => FALSE,
   /* search_members_page */ );
  $page->default_handlers = array();
   /* page_search_members_page__panel_context_f961df47-d054-4096-881a-8befd26ea963 */ $handler = new stdClass();
   /* page_search_members_page__panel_context_f961df47-d054-4096-881a-8befd26ea963 */ $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
   /* page_search_members_page__panel_context_f961df47-d054-4096-881a-8befd26ea963 */ $handler->api_version = 1;
   /* page_search_members_page__panel_context_f961df47-d054-4096-881a-8befd26ea963 */ $handler->name = 'page_search_members_page__panel_context_f961df47-d054-4096-881a-8befd26ea963';
   /* page_search_members_page__panel_context_f961df47-d054-4096-881a-8befd26ea963 */ $handler->task = 'page';
   /* page_search_members_page__panel_context_f961df47-d054-4096-881a-8befd26ea963 */ $handler->subtask = 'search_members_page';
   /* page_search_members_page__panel_context_f961df47-d054-4096-881a-8befd26ea963 */ $handler->handler = 'panel_context';
   /* page_search_members_page__panel_context_f961df47-d054-4096-881a-8befd26ea963 */ $handler->weight = 0;
   /* page_search_members_page__panel_context_f961df47-d054-4096-881a-8befd26ea963 */ $handler->conf = array(
   /* page_search_members_page__panel_context_f961df47-d054-4096-881a-8befd26ea963 */   'title' => 'Panel',
   /* page_search_members_page__panel_context_f961df47-d054-4096-881a-8befd26ea963 */   'no_blocks' => 0,
   /* page_search_members_page__panel_context_f961df47-d054-4096-881a-8befd26ea963 */   'pipeline' => 'standard',
   /* page_search_members_page__panel_context_f961df47-d054-4096-881a-8befd26ea963 */   'body_classes_to_remove' => '',
   /* page_search_members_page__panel_context_f961df47-d054-4096-881a-8befd26ea963 */   'body_classes_to_add' => 'page_search--members',
   /* page_search_members_page__panel_context_f961df47-d054-4096-881a-8befd26ea963 */   'css_id' => '',
   /* page_search_members_page__panel_context_f961df47-d054-4096-881a-8befd26ea963 */   'css' => '',
   /* page_search_members_page__panel_context_f961df47-d054-4096-881a-8befd26ea963 */   'contexts' => array(),
   /* page_search_members_page__panel_context_f961df47-d054-4096-881a-8befd26ea963 */   'relationships' => array(),
   /* page_search_members_page__panel_context_f961df47-d054-4096-881a-8befd26ea963 */   'access' => array(
   /* page_search_members_page__panel_context_f961df47-d054-4096-881a-8befd26ea963 */     'plugins' => array(),
   /* page_search_members_page__panel_context_f961df47-d054-4096-881a-8befd26ea963 */     'logic' => 'and',
   /* page_search_members_page__panel_context_f961df47-d054-4096-881a-8befd26ea963 */   ),
   /* page_search_members_page__panel_context_f961df47-d054-4096-881a-8befd26ea963 */ );
   /* search_members_page f85f6a1e */ $display = new panels_display();
   /* search_members_page f85f6a1e */ $display->layout = 'gn2_2colstacked_page';
   /* search_members_page f85f6a1e */ $display->layout_settings = array();
   /* search_members_page f85f6a1e */ $display->panel_settings = array(
   /* search_members_page f85f6a1e */   'style_settings' => array(
   /* search_members_page f85f6a1e */     'default' => NULL,
   /* search_members_page f85f6a1e */     'top' => array(
   /* search_members_page f85f6a1e */       'clean_markup' => array(
   /* search_members_page f85f6a1e */         'region_wrapper' => 'div',
   /* search_members_page f85f6a1e */         'additional_region_classes' => 'search-header',
   /* search_members_page f85f6a1e */         'additional_region_attributes' => '',
   /* search_members_page f85f6a1e */         'enable_inner_div' => 0,
   /* search_members_page f85f6a1e */         'pane_separators' => 0,
   /* search_members_page f85f6a1e */       ),
   /* search_members_page f85f6a1e */     ),
   /* search_members_page f85f6a1e */     'sidebar' => NULL,
   /* search_members_page f85f6a1e */     'main_top' => array(
   /* search_members_page f85f6a1e */       'clean_markup' => array(
   /* search_members_page f85f6a1e */         'region_wrapper' => 'div',
   /* search_members_page f85f6a1e */         'additional_region_classes' => '',
   /* search_members_page f85f6a1e */         'additional_region_attributes' => '',
   /* search_members_page f85f6a1e */         'enable_inner_div' => 0,
   /* search_members_page f85f6a1e */         'pane_separators' => 0,
   /* search_members_page f85f6a1e */       ),
   /* search_members_page f85f6a1e */     ),
   /* search_members_page f85f6a1e */     'main_bottom' => NULL,
   /* search_members_page f85f6a1e */     'footer' => NULL,
   /* search_members_page f85f6a1e */   ),
   /* search_members_page f85f6a1e */   'top' => array(
   /* search_members_page f85f6a1e */     'style' => 'clean_element',
   /* search_members_page f85f6a1e */   ),
   /* search_members_page f85f6a1e */   'main_top' => array(
   /* search_members_page f85f6a1e */     'style' => 'clean_element',
   /* search_members_page f85f6a1e */   ),
   /* search_members_page f85f6a1e */ );
   /* search_members_page f85f6a1e */ $display->cache = array();
   /* search_members_page f85f6a1e */ $display->title = 'Member Search';
   /* search_members_page f85f6a1e */ $display->uuid = 'f85f6a1e-0d7a-445b-ac3b-428685212e3c';
   /* search_members_page f85f6a1e */ $display->storage_type = 'page_manager';
   /* search_members_page f85f6a1e */ $display->storage_id = 'page_search_members_page__panel_context_f961df47-d054-4096-881a-8befd26ea963';
  $display->content = array();
  $display->panels = array();
   /* search_members_page 9c25eb04 */ $pane = new stdClass();
   /* search_members_page 9c25eb04 */ $pane->pid = 'new-9c25eb04-5e07-4c57-8abf-5c65ec5a4995';
   /* search_members_page 9c25eb04 */ $pane->panel = 'main_top';
   /* search_members_page 9c25eb04 */ $pane->type = 'views_panes';
   /* search_members_page 9c25eb04 */ $pane->subtype = 'search_member-panel_pane_1';
   /* search_members_page 9c25eb04 */ $pane->shown = TRUE;
   /* search_members_page 9c25eb04 */ $pane->access = array();
   /* search_members_page 9c25eb04 */ $pane->configuration = array();
   /* search_members_page 9c25eb04 */ $pane->cache = array();
   /* search_members_page 9c25eb04 */ $pane->style = array(
   /* search_members_page 9c25eb04 */   'settings' => NULL,
   /* search_members_page 9c25eb04 */ );
   /* search_members_page 9c25eb04 */ $pane->css = array(
   /* search_members_page 9c25eb04 */   'css_id' => '',
   /* search_members_page 9c25eb04 */   'css_class' => 'page-members',
   /* search_members_page 9c25eb04 */ );
   /* search_members_page 9c25eb04 */ $pane->extras = array();
   /* search_members_page 9c25eb04 */ $pane->position = 0;
   /* search_members_page 9c25eb04 */ $pane->locks = array();
   /* search_members_page 9c25eb04 */ $pane->uuid = '9c25eb04-5e07-4c57-8abf-5c65ec5a4995';
  $display->content['new-9c25eb04-5e07-4c57-8abf-5c65ec5a4995'] = $pane;
  $display->panels['main_top'][0] = 'new-9c25eb04-5e07-4c57-8abf-5c65ec5a4995';
   /* search_members_page 84dafcce */ $pane = new stdClass();
   /* search_members_page 84dafcce */ $pane->pid = 'new-84dafcce-206c-4b1c-9dcb-3594e81747b5';
   /* search_members_page 84dafcce */ $pane->panel = 'sidebar';
   /* search_members_page 84dafcce */ $pane->type = 'block';
   /* search_members_page 84dafcce */ $pane->subtype = 'facetapi-SmA6UEQTOBda1VdW96oip1KLHIOYZVmR';
   /* search_members_page 84dafcce */ $pane->shown = TRUE;
   /* search_members_page 84dafcce */ $pane->access = array();
   /* search_members_page 84dafcce */ $pane->configuration = array(
   /* search_members_page 84dafcce */   'override_title' => 1,
   /* search_members_page 84dafcce */   'override_title_text' => 'Show results for',
   /* search_members_page 84dafcce */   'override_title_heading' => 'h2',
   /* search_members_page 84dafcce */ );
   /* search_members_page 84dafcce */ $pane->cache = array();
   /* search_members_page 84dafcce */ $pane->style = array(
   /* search_members_page 84dafcce */   'settings' => NULL,
   /* search_members_page 84dafcce */ );
   /* search_members_page 84dafcce */ $pane->css = array();
   /* search_members_page 84dafcce */ $pane->extras = array();
   /* search_members_page 84dafcce */ $pane->position = 0;
   /* search_members_page 84dafcce */ $pane->locks = array();
   /* search_members_page 84dafcce */ $pane->uuid = '84dafcce-206c-4b1c-9dcb-3594e81747b5';
  $display->content['new-84dafcce-206c-4b1c-9dcb-3594e81747b5'] = $pane;
  $display->panels['sidebar'][0] = 'new-84dafcce-206c-4b1c-9dcb-3594e81747b5';
   /* search_members_page 0b9e866b */ $pane = new stdClass();
   /* search_members_page 0b9e866b */ $pane->pid = 'new-0b9e866b-9569-4be7-a13b-bb53e6223928';
   /* search_members_page 0b9e866b */ $pane->panel = 'sidebar';
   /* search_members_page 0b9e866b */ $pane->type = 'custom';
   /* search_members_page 0b9e866b */ $pane->subtype = 'custom';
   /* search_members_page 0b9e866b */ $pane->shown = TRUE;
   /* search_members_page 0b9e866b */ $pane->access = array();
   /* search_members_page 0b9e866b */ $pane->configuration = array(
   /* search_members_page 0b9e866b */   'admin_title' => 'Refine by',
   /* search_members_page 0b9e866b */   'title' => '<none>',
   /* search_members_page 0b9e866b */   'body' => '<div class="sidebar-subheading ">
<h3 class="pane-title">Refine by</h3>
</div>',
   /* search_members_page 0b9e866b */   'format' => 'full_html',
   /* search_members_page 0b9e866b */   'substitute' => TRUE,
   /* search_members_page 0b9e866b */ );
   /* search_members_page 0b9e866b */ $pane->cache = array();
   /* search_members_page 0b9e866b */ $pane->style = array(
   /* search_members_page 0b9e866b */   'settings' => NULL,
   /* search_members_page 0b9e866b */ );
   /* search_members_page 0b9e866b */ $pane->css = array();
   /* search_members_page 0b9e866b */ $pane->extras = array();
   /* search_members_page 0b9e866b */ $pane->position = 1;
   /* search_members_page 0b9e866b */ $pane->locks = array();
   /* search_members_page 0b9e866b */ $pane->uuid = '0b9e866b-9569-4be7-a13b-bb53e6223928';
  $display->content['new-0b9e866b-9569-4be7-a13b-bb53e6223928'] = $pane;
  $display->panels['sidebar'][1] = 'new-0b9e866b-9569-4be7-a13b-bb53e6223928';
   /* search_members_page 980a75bc */ $pane = new stdClass();
   /* search_members_page 980a75bc */ $pane->pid = 'new-980a75bc-1193-486e-acc0-aa208a58d9b4';
   /* search_members_page 980a75bc */ $pane->panel = 'sidebar';
   /* search_members_page 980a75bc */ $pane->type = 'block';
   /* search_members_page 980a75bc */ $pane->subtype = 'facetapi-YW01LbsA7Fv67romER1wtnKnCHczEtyt';
   /* search_members_page 980a75bc */ $pane->shown = TRUE;
   /* search_members_page 980a75bc */ $pane->access = array();
   /* search_members_page 980a75bc */ $pane->configuration = array(
   /* search_members_page 980a75bc */   'override_title' => 1,
   /* search_members_page 980a75bc */   'override_title_text' => 'Country of Residence',
   /* search_members_page 980a75bc */   'override_title_heading' => 'h2',
   /* search_members_page 980a75bc */ );
   /* search_members_page 980a75bc */ $pane->cache = array();
   /* search_members_page 980a75bc */ $pane->style = array(
   /* search_members_page 980a75bc */   'settings' => NULL,
   /* search_members_page 980a75bc */ );
   /* search_members_page 980a75bc */ $pane->css = array();
   /* search_members_page 980a75bc */ $pane->extras = array();
   /* search_members_page 980a75bc */ $pane->position = 2;
   /* search_members_page 980a75bc */ $pane->locks = array();
   /* search_members_page 980a75bc */ $pane->uuid = '980a75bc-1193-486e-acc0-aa208a58d9b4';
  $display->content['new-980a75bc-1193-486e-acc0-aa208a58d9b4'] = $pane;
  $display->panels['sidebar'][2] = 'new-980a75bc-1193-486e-acc0-aa208a58d9b4';
   /* search_members_page 28290593 */ $pane = new stdClass();
   /* search_members_page 28290593 */ $pane->pid = 'new-28290593-f86e-4191-97ef-f79c5f14cedc';
   /* search_members_page 28290593 */ $pane->panel = 'sidebar';
   /* search_members_page 28290593 */ $pane->type = 'block';
   /* search_members_page 28290593 */ $pane->subtype = 'facetapi-10oqXwGRUhUqD2Dvdc1EQav4qXo3sGm1';
   /* search_members_page 28290593 */ $pane->shown = TRUE;
   /* search_members_page 28290593 */ $pane->access = array();
   /* search_members_page 28290593 */ $pane->configuration = array(
   /* search_members_page 28290593 */   'override_title' => 1,
   /* search_members_page 28290593 */   'override_title_text' => 'Nationality',
   /* search_members_page 28290593 */   'override_title_heading' => 'h2',
   /* search_members_page 28290593 */ );
   /* search_members_page 28290593 */ $pane->cache = array();
   /* search_members_page 28290593 */ $pane->style = array(
   /* search_members_page 28290593 */   'settings' => NULL,
   /* search_members_page 28290593 */ );
   /* search_members_page 28290593 */ $pane->css = array();
   /* search_members_page 28290593 */ $pane->extras = array();
   /* search_members_page 28290593 */ $pane->position = 3;
   /* search_members_page 28290593 */ $pane->locks = array();
   /* search_members_page 28290593 */ $pane->uuid = '28290593-f86e-4191-97ef-f79c5f14cedc';
  $display->content['new-28290593-f86e-4191-97ef-f79c5f14cedc'] = $pane;
  $display->panels['sidebar'][3] = 'new-28290593-f86e-4191-97ef-f79c5f14cedc';
   /* search_members_page 056ee7fe */ $pane = new stdClass();
   /* search_members_page 056ee7fe */ $pane->pid = 'new-056ee7fe-fff3-4011-8288-33dc9c993323';
   /* search_members_page 056ee7fe */ $pane->panel = 'sidebar';
   /* search_members_page 056ee7fe */ $pane->type = 'block';
   /* search_members_page 056ee7fe */ $pane->subtype = 'facetapi-BXOCRF9CkeRU3LPOE1vJDHsvJIrZI2lI';
   /* search_members_page 056ee7fe */ $pane->shown = TRUE;
   /* search_members_page 056ee7fe */ $pane->access = array();
   /* search_members_page 056ee7fe */ $pane->configuration = array(
   /* search_members_page 056ee7fe */   'override_title' => 1,
   /* search_members_page 056ee7fe */   'override_title_text' => 'Countries of Interest',
   /* search_members_page 056ee7fe */   'override_title_heading' => 'h2',
   /* search_members_page 056ee7fe */ );
   /* search_members_page 056ee7fe */ $pane->cache = array();
   /* search_members_page 056ee7fe */ $pane->style = array(
   /* search_members_page 056ee7fe */   'settings' => NULL,
   /* search_members_page 056ee7fe */ );
   /* search_members_page 056ee7fe */ $pane->css = array();
   /* search_members_page 056ee7fe */ $pane->extras = array();
   /* search_members_page 056ee7fe */ $pane->position = 4;
   /* search_members_page 056ee7fe */ $pane->locks = array();
   /* search_members_page 056ee7fe */ $pane->uuid = '056ee7fe-fff3-4011-8288-33dc9c993323';
  $display->content['new-056ee7fe-fff3-4011-8288-33dc9c993323'] = $pane;
  $display->panels['sidebar'][4] = 'new-056ee7fe-fff3-4011-8288-33dc9c993323';
   /* search_members_page 759ccaa0 */ $pane = new stdClass();
   /* search_members_page 759ccaa0 */ $pane->pid = 'new-759ccaa0-6b30-4e79-bdc7-18fa1633d3be';
   /* search_members_page 759ccaa0 */ $pane->panel = 'sidebar';
   /* search_members_page 759ccaa0 */ $pane->type = 'block';
   /* search_members_page 759ccaa0 */ $pane->subtype = 'facetapi-Lv1sJPqXePIRq5vWNtoSP10MnmmhB0M6';
   /* search_members_page 759ccaa0 */ $pane->shown = TRUE;
   /* search_members_page 759ccaa0 */ $pane->access = array();
   /* search_members_page 759ccaa0 */ $pane->configuration = array(
   /* search_members_page 759ccaa0 */   'override_title' => 1,
   /* search_members_page 759ccaa0 */   'override_title_text' => 'Topics of Interest',
   /* search_members_page 759ccaa0 */   'override_title_heading' => 'h2',
   /* search_members_page 759ccaa0 */ );
   /* search_members_page 759ccaa0 */ $pane->cache = array();
   /* search_members_page 759ccaa0 */ $pane->style = array(
   /* search_members_page 759ccaa0 */   'settings' => NULL,
   /* search_members_page 759ccaa0 */ );
   /* search_members_page 759ccaa0 */ $pane->css = array();
   /* search_members_page 759ccaa0 */ $pane->extras = array();
   /* search_members_page 759ccaa0 */ $pane->position = 5;
   /* search_members_page 759ccaa0 */ $pane->locks = array();
   /* search_members_page 759ccaa0 */ $pane->uuid = '759ccaa0-6b30-4e79-bdc7-18fa1633d3be';
  $display->content['new-759ccaa0-6b30-4e79-bdc7-18fa1633d3be'] = $pane;
  $display->panels['sidebar'][5] = 'new-759ccaa0-6b30-4e79-bdc7-18fa1633d3be';
   /* search_members_page 6d800cb9 */ $pane = new stdClass();
   /* search_members_page 6d800cb9 */ $pane->pid = 'new-6d800cb9-354c-4bb5-b201-76438c48e8f4';
   /* search_members_page 6d800cb9 */ $pane->panel = 'top';
   /* search_members_page 6d800cb9 */ $pane->type = 'block';
   /* search_members_page 6d800cb9 */ $pane->subtype = 'views--exp-search_member-panel_pane_1';
   /* search_members_page 6d800cb9 */ $pane->shown = TRUE;
   /* search_members_page 6d800cb9 */ $pane->access = array();
   /* search_members_page 6d800cb9 */ $pane->configuration = array(
   /* search_members_page 6d800cb9 */   'inherit_path' => 1,
   /* search_members_page 6d800cb9 */   'override_title' => 0,
   /* search_members_page 6d800cb9 */   'override_title_text' => '',
   /* search_members_page 6d800cb9 */   'override_title_heading' => 'h2',
   /* search_members_page 6d800cb9 */ );
   /* search_members_page 6d800cb9 */ $pane->cache = array();
   /* search_members_page 6d800cb9 */ $pane->style = array(
   /* search_members_page 6d800cb9 */   'settings' => array(
   /* search_members_page 6d800cb9 */     'clean_markup' => array(
   /* search_members_page 6d800cb9 */       'pane_wrapper' => 'div',
   /* search_members_page 6d800cb9 */       'additional_pane_classes' => 'panel-pane search-form',
   /* search_members_page 6d800cb9 */       'additional_pane_attributes' => '',
   /* search_members_page 6d800cb9 */       'enable_inner_div' => 0,
   /* search_members_page 6d800cb9 */       'title_wrapper' => 'h2',
   /* search_members_page 6d800cb9 */       'title_hide' => 0,
   /* search_members_page 6d800cb9 */       'content_wrapper' => 'none',
   /* search_members_page 6d800cb9 */     ),
   /* search_members_page 6d800cb9 */   ),
   /* search_members_page 6d800cb9 */   'style' => 'clean_element',
   /* search_members_page 6d800cb9 */ );
   /* search_members_page 6d800cb9 */ $pane->css = array(
   /* search_members_page 6d800cb9 */   'css_id' => '',
   /* search_members_page 6d800cb9 */   'css_class' => '',
   /* search_members_page 6d800cb9 */ );
   /* search_members_page 6d800cb9 */ $pane->extras = array();
   /* search_members_page 6d800cb9 */ $pane->position = 0;
   /* search_members_page 6d800cb9 */ $pane->locks = array();
   /* search_members_page 6d800cb9 */ $pane->uuid = '6d800cb9-354c-4bb5-b201-76438c48e8f4';
  $display->content['new-6d800cb9-354c-4bb5-b201-76438c48e8f4'] = $pane;
  $display->panels['top'][0] = 'new-6d800cb9-354c-4bb5-b201-76438c48e8f4';
   /* search_members_page 9aac8694 */ $pane = new stdClass();
   /* search_members_page 9aac8694 */ $pane->pid = 'new-9aac8694-1263-4a9c-9315-0d6bf6e598d5';
   /* search_members_page 9aac8694 */ $pane->panel = 'top';
   /* search_members_page 9aac8694 */ $pane->type = 'block';
   /* search_members_page 9aac8694 */ $pane->subtype = 'gn2_search-link_to_search';
   /* search_members_page 9aac8694 */ $pane->shown = TRUE;
   /* search_members_page 9aac8694 */ $pane->access = array();
   /* search_members_page 9aac8694 */ $pane->configuration = array(
   /* search_members_page 9aac8694 */   'override_title' => 0,
   /* search_members_page 9aac8694 */   'override_title_text' => '',
   /* search_members_page 9aac8694 */   'override_title_heading' => 'h2',
   /* search_members_page 9aac8694 */ );
   /* search_members_page 9aac8694 */ $pane->cache = array();
   /* search_members_page 9aac8694 */ $pane->style = array(
   /* search_members_page 9aac8694 */   'settings' => NULL,
   /* search_members_page 9aac8694 */ );
   /* search_members_page 9aac8694 */ $pane->css = array();
   /* search_members_page 9aac8694 */ $pane->extras = array();
   /* search_members_page 9aac8694 */ $pane->position = 1;
   /* search_members_page 9aac8694 */ $pane->locks = array();
   /* search_members_page 9aac8694 */ $pane->uuid = '9aac8694-1263-4a9c-9315-0d6bf6e598d5';
  $display->content['new-9aac8694-1263-4a9c-9315-0d6bf6e598d5'] = $pane;
  $display->panels['top'][1] = 'new-9aac8694-1263-4a9c-9315-0d6bf6e598d5';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-9c25eb04-5e07-4c57-8abf-5c65ec5a4995';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['search_members_page'] = $page;

   /* upcoming_events */ $page = new stdClass();
   /* upcoming_events */ $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
   /* upcoming_events */ $page->api_version = 1;
   /* upcoming_events */ $page->name = 'upcoming_events';
   /* upcoming_events */ $page->task = 'page';
   /* upcoming_events */ $page->admin_title = 'Upcoming Events';
   /* upcoming_events */ $page->admin_description = '';
   /* upcoming_events */ $page->path = 'upcoming-events/%org';
   /* upcoming_events */ $page->access = array(
   /* upcoming_events */   'type' => 'none',
   /* upcoming_events */   'settings' => NULL,
   /* upcoming_events */ );
   /* upcoming_events */ $page->menu = array();
   /* upcoming_events */ $page->arguments = array(
   /* upcoming_events */   'org' => array(
   /* upcoming_events */     'id' => 1,
   /* upcoming_events */     'identifier' => 'Org ID',
   /* upcoming_events */     'name' => 'entity_id:node',
   /* upcoming_events */     'settings' => array(),
   /* upcoming_events */   ),
   /* upcoming_events */ );
   /* upcoming_events */ $page->conf = array(
   /* upcoming_events */   'admin_paths' => FALSE,
   /* upcoming_events */ );
  $page->default_handlers = array();
   /* page_upcoming_events__panel_context_072c7604-bdf5-4756-8cf1-ef688447389a */ $handler = new stdClass();
   /* page_upcoming_events__panel_context_072c7604-bdf5-4756-8cf1-ef688447389a */ $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
   /* page_upcoming_events__panel_context_072c7604-bdf5-4756-8cf1-ef688447389a */ $handler->api_version = 1;
   /* page_upcoming_events__panel_context_072c7604-bdf5-4756-8cf1-ef688447389a */ $handler->name = 'page_upcoming_events__panel_context_072c7604-bdf5-4756-8cf1-ef688447389a';
   /* page_upcoming_events__panel_context_072c7604-bdf5-4756-8cf1-ef688447389a */ $handler->task = 'page';
   /* page_upcoming_events__panel_context_072c7604-bdf5-4756-8cf1-ef688447389a */ $handler->subtask = 'upcoming_events';
   /* page_upcoming_events__panel_context_072c7604-bdf5-4756-8cf1-ef688447389a */ $handler->handler = 'panel_context';
   /* page_upcoming_events__panel_context_072c7604-bdf5-4756-8cf1-ef688447389a */ $handler->weight = 0;
   /* page_upcoming_events__panel_context_072c7604-bdf5-4756-8cf1-ef688447389a */ $handler->conf = array(
   /* page_upcoming_events__panel_context_072c7604-bdf5-4756-8cf1-ef688447389a */   'title' => 'Panel',
   /* page_upcoming_events__panel_context_072c7604-bdf5-4756-8cf1-ef688447389a */   'no_blocks' => 0,
   /* page_upcoming_events__panel_context_072c7604-bdf5-4756-8cf1-ef688447389a */   'pipeline' => 'standard',
   /* page_upcoming_events__panel_context_072c7604-bdf5-4756-8cf1-ef688447389a */   'body_classes_to_remove' => '',
   /* page_upcoming_events__panel_context_072c7604-bdf5-4756-8cf1-ef688447389a */   'body_classes_to_add' => '',
   /* page_upcoming_events__panel_context_072c7604-bdf5-4756-8cf1-ef688447389a */   'css_id' => '',
   /* page_upcoming_events__panel_context_072c7604-bdf5-4756-8cf1-ef688447389a */   'css' => '',
   /* page_upcoming_events__panel_context_072c7604-bdf5-4756-8cf1-ef688447389a */   'contexts' => array(
   /* page_upcoming_events__panel_context_072c7604-bdf5-4756-8cf1-ef688447389a */     0 => array(
   /* page_upcoming_events__panel_context_072c7604-bdf5-4756-8cf1-ef688447389a */       'identifier' => 'Token',
   /* page_upcoming_events__panel_context_072c7604-bdf5-4756-8cf1-ef688447389a */       'keyword' => 'token',
   /* page_upcoming_events__panel_context_072c7604-bdf5-4756-8cf1-ef688447389a */       'name' => 'token',
   /* page_upcoming_events__panel_context_072c7604-bdf5-4756-8cf1-ef688447389a */       'id' => 1,
   /* page_upcoming_events__panel_context_072c7604-bdf5-4756-8cf1-ef688447389a */     ),
   /* page_upcoming_events__panel_context_072c7604-bdf5-4756-8cf1-ef688447389a */   ),
   /* page_upcoming_events__panel_context_072c7604-bdf5-4756-8cf1-ef688447389a */   'relationships' => array(),
   /* page_upcoming_events__panel_context_072c7604-bdf5-4756-8cf1-ef688447389a */ );
   /* upcoming_events d8d1827f */ $display = new panels_display();
   /* upcoming_events d8d1827f */ $display->layout = 'onecol_clean';
   /* upcoming_events d8d1827f */ $display->layout_settings = array();
   /* upcoming_events d8d1827f */ $display->panel_settings = array(
   /* upcoming_events d8d1827f */   'style_settings' => array(
   /* upcoming_events d8d1827f */     'default' => NULL,
   /* upcoming_events d8d1827f */     'middle' => NULL,
   /* upcoming_events d8d1827f */   ),
   /* upcoming_events d8d1827f */ );
   /* upcoming_events d8d1827f */ $display->cache = array();
   /* upcoming_events d8d1827f */ $display->title = 'Upcoming Events';
   /* upcoming_events d8d1827f */ $display->uuid = 'd8d1827f-007c-4b33-8471-c5ad3e805971';
   /* upcoming_events d8d1827f */ $display->storage_type = 'page_manager';
   /* upcoming_events d8d1827f */ $display->storage_id = 'page_upcoming_events__panel_context_072c7604-bdf5-4756-8cf1-ef688447389a';
  $display->content = array();
  $display->panels = array();
   /* upcoming_events 25e59d29 */ $pane = new stdClass();
   /* upcoming_events 25e59d29 */ $pane->pid = 'new-25e59d29-81a8-4cb6-953d-8518fcf41a9b';
   /* upcoming_events 25e59d29 */ $pane->panel = 'middle';
   /* upcoming_events 25e59d29 */ $pane->type = 'views_panes';
   /* upcoming_events 25e59d29 */ $pane->subtype = 'events-panel_pane__upcoming_events';
   /* upcoming_events 25e59d29 */ $pane->shown = TRUE;
   /* upcoming_events 25e59d29 */ $pane->access = array();
   /* upcoming_events 25e59d29 */ $pane->configuration = array(
   /* upcoming_events 25e59d29 */   'context' => array(
   /* upcoming_events 25e59d29 */     0 => 'argument_entity_id:node_1',
   /* upcoming_events 25e59d29 */   ),
   /* upcoming_events 25e59d29 */ );
   /* upcoming_events 25e59d29 */ $pane->cache = array();
   /* upcoming_events 25e59d29 */ $pane->style = array(
   /* upcoming_events 25e59d29 */   'settings' => NULL,
   /* upcoming_events 25e59d29 */ );
   /* upcoming_events 25e59d29 */ $pane->css = array();
   /* upcoming_events 25e59d29 */ $pane->extras = array();
   /* upcoming_events 25e59d29 */ $pane->position = 0;
   /* upcoming_events 25e59d29 */ $pane->locks = array();
   /* upcoming_events 25e59d29 */ $pane->uuid = '25e59d29-81a8-4cb6-953d-8518fcf41a9b';
  $display->content['new-25e59d29-81a8-4cb6-953d-8518fcf41a9b'] = $pane;
  $display->panels['middle'][0] = 'new-25e59d29-81a8-4cb6-953d-8518fcf41a9b';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-25e59d29-81a8-4cb6-953d-8518fcf41a9b';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['upcoming_events'] = $page;

   /* user_account_page */ $page = new stdClass();
   /* user_account_page */ $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
   /* user_account_page */ $page->api_version = 1;
   /* user_account_page */ $page->name = 'user_account_page';
   /* user_account_page */ $page->task = 'page';
   /* user_account_page */ $page->admin_title = 'User Account Page';
   /* user_account_page */ $page->admin_description = 'This is the user account page (referred to as the user dashboard in the D6 site).';
   /* user_account_page */ $page->path = 'account';
   /* user_account_page */ $page->access = array(
   /* user_account_page */   'type' => 'none',
   /* user_account_page */   'settings' => NULL,
   /* user_account_page */   'plugins' => array(
   /* user_account_page */     0 => array(
   /* user_account_page */       'name' => 'role',
   /* user_account_page */       'settings' => array(
   /* user_account_page */         'rids' => array(
   /* user_account_page */           0 => 2,
   /* user_account_page */         ),
   /* user_account_page */       ),
   /* user_account_page */       'context' => 'logged-in-user',
   /* user_account_page */       'not' => FALSE,
   /* user_account_page */     ),
   /* user_account_page */   ),
   /* user_account_page */   'logic' => 'and',
   /* user_account_page */ );
   /* user_account_page */ $page->menu = array();
   /* user_account_page */ $page->arguments = array();
   /* user_account_page */ $page->conf = array(
   /* user_account_page */   'admin_paths' => FALSE,
   /* user_account_page */ );
  $page->default_handlers = array();
   /* page_user_account_page__panel_context_69e01709-ae8e-4043-b6b9-63b8f6403b20 */ $handler = new stdClass();
   /* page_user_account_page__panel_context_69e01709-ae8e-4043-b6b9-63b8f6403b20 */ $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
   /* page_user_account_page__panel_context_69e01709-ae8e-4043-b6b9-63b8f6403b20 */ $handler->api_version = 1;
   /* page_user_account_page__panel_context_69e01709-ae8e-4043-b6b9-63b8f6403b20 */ $handler->name = 'page_user_account_page__panel_context_69e01709-ae8e-4043-b6b9-63b8f6403b20';
   /* page_user_account_page__panel_context_69e01709-ae8e-4043-b6b9-63b8f6403b20 */ $handler->task = 'page';
   /* page_user_account_page__panel_context_69e01709-ae8e-4043-b6b9-63b8f6403b20 */ $handler->subtask = 'user_account_page';
   /* page_user_account_page__panel_context_69e01709-ae8e-4043-b6b9-63b8f6403b20 */ $handler->handler = 'panel_context';
   /* page_user_account_page__panel_context_69e01709-ae8e-4043-b6b9-63b8f6403b20 */ $handler->weight = 0;
   /* page_user_account_page__panel_context_69e01709-ae8e-4043-b6b9-63b8f6403b20 */ $handler->conf = array(
   /* page_user_account_page__panel_context_69e01709-ae8e-4043-b6b9-63b8f6403b20 */   'title' => 'Panel',
   /* page_user_account_page__panel_context_69e01709-ae8e-4043-b6b9-63b8f6403b20 */   'no_blocks' => 0,
   /* page_user_account_page__panel_context_69e01709-ae8e-4043-b6b9-63b8f6403b20 */   'pipeline' => 'standard',
   /* page_user_account_page__panel_context_69e01709-ae8e-4043-b6b9-63b8f6403b20 */   'body_classes_to_remove' => '',
   /* page_user_account_page__panel_context_69e01709-ae8e-4043-b6b9-63b8f6403b20 */   'body_classes_to_add' => '',
   /* page_user_account_page__panel_context_69e01709-ae8e-4043-b6b9-63b8f6403b20 */   'css_id' => '',
   /* page_user_account_page__panel_context_69e01709-ae8e-4043-b6b9-63b8f6403b20 */   'css' => '',
   /* page_user_account_page__panel_context_69e01709-ae8e-4043-b6b9-63b8f6403b20 */   'contexts' => array(
   /* page_user_account_page__panel_context_69e01709-ae8e-4043-b6b9-63b8f6403b20 */     0 => array(
   /* page_user_account_page__panel_context_69e01709-ae8e-4043-b6b9-63b8f6403b20 */       'identifier' => 'Logged in user',
   /* page_user_account_page__panel_context_69e01709-ae8e-4043-b6b9-63b8f6403b20 */       'keyword' => 'user',
   /* page_user_account_page__panel_context_69e01709-ae8e-4043-b6b9-63b8f6403b20 */       'name' => 'user',
   /* page_user_account_page__panel_context_69e01709-ae8e-4043-b6b9-63b8f6403b20 */       'type' => 'current',
   /* page_user_account_page__panel_context_69e01709-ae8e-4043-b6b9-63b8f6403b20 */       'uid' => '',
   /* page_user_account_page__panel_context_69e01709-ae8e-4043-b6b9-63b8f6403b20 */       'id' => 1,
   /* page_user_account_page__panel_context_69e01709-ae8e-4043-b6b9-63b8f6403b20 */     ),
   /* page_user_account_page__panel_context_69e01709-ae8e-4043-b6b9-63b8f6403b20 */   ),
   /* page_user_account_page__panel_context_69e01709-ae8e-4043-b6b9-63b8f6403b20 */   'relationships' => array(),
   /* page_user_account_page__panel_context_69e01709-ae8e-4043-b6b9-63b8f6403b20 */ );
   /* user_account_page ab6ef4b7 */ $display = new panels_display();
   /* user_account_page ab6ef4b7 */ $display->layout = 'gn2_2colstackedflipped';
   /* user_account_page ab6ef4b7 */ $display->layout_settings = array();
   /* user_account_page ab6ef4b7 */ $display->panel_settings = array(
   /* user_account_page ab6ef4b7 */   'style_settings' => array(
   /* user_account_page ab6ef4b7 */     'default' => NULL,
   /* user_account_page ab6ef4b7 */     'top' => NULL,
   /* user_account_page ab6ef4b7 */     'sidebar' => array(
   /* user_account_page ab6ef4b7 */       'clean_markup' => array(
   /* user_account_page ab6ef4b7 */         'region_wrapper' => 'div',
   /* user_account_page ab6ef4b7 */         'additional_region_classes' => 'user--sidebar',
   /* user_account_page ab6ef4b7 */         'additional_region_attributes' => '',
   /* user_account_page ab6ef4b7 */         'enable_inner_div' => 0,
   /* user_account_page ab6ef4b7 */         'pane_separators' => 0,
   /* user_account_page ab6ef4b7 */       ),
   /* user_account_page ab6ef4b7 */     ),
   /* user_account_page ab6ef4b7 */     'main_top' => NULL,
   /* user_account_page ab6ef4b7 */     'footer' => NULL,
   /* user_account_page ab6ef4b7 */     'main_bottom' => NULL,
   /* user_account_page ab6ef4b7 */   ),
   /* user_account_page ab6ef4b7 */   'main_bottom' => array(
   /* user_account_page ab6ef4b7 */     'style' => 'tabs',
   /* user_account_page ab6ef4b7 */   ),
   /* user_account_page ab6ef4b7 */   'sidebar' => array(
   /* user_account_page ab6ef4b7 */     'style' => 'clean_element',
   /* user_account_page ab6ef4b7 */   ),
   /* user_account_page ab6ef4b7 */ );
   /* user_account_page ab6ef4b7 */ $display->cache = array();
   /* user_account_page ab6ef4b7 */ $display->title = '';
   /* user_account_page ab6ef4b7 */ $display->uuid = 'ab6ef4b7-7d8d-44f8-96a1-fff40db32267';
   /* user_account_page ab6ef4b7 */ $display->storage_type = 'page_manager';
   /* user_account_page ab6ef4b7 */ $display->storage_id = 'page_user_account_page__panel_context_69e01709-ae8e-4043-b6b9-63b8f6403b20';
  $display->content = array();
  $display->panels = array();
   /* user_account_page 6dc1b5ac */ $pane = new stdClass();
   /* user_account_page 6dc1b5ac */ $pane->pid = 'new-6dc1b5ac-eefd-436f-8f0f-038a1a74626d';
   /* user_account_page 6dc1b5ac */ $pane->panel = 'main_bottom';
   /* user_account_page 6dc1b5ac */ $pane->type = 'views_panes';
   /* user_account_page 6dc1b5ac */ $pane->subtype = 'groups_display-panel_pane_3';
   /* user_account_page 6dc1b5ac */ $pane->shown = TRUE;
   /* user_account_page 6dc1b5ac */ $pane->access = array();
   /* user_account_page 6dc1b5ac */ $pane->configuration = array();
   /* user_account_page 6dc1b5ac */ $pane->cache = array();
   /* user_account_page 6dc1b5ac */ $pane->style = array(
   /* user_account_page 6dc1b5ac */   'settings' => array(
   /* user_account_page 6dc1b5ac */     'clean_markup' => array(
   /* user_account_page 6dc1b5ac */       'pane_wrapper' => 'div',
   /* user_account_page 6dc1b5ac */       'additional_pane_classes' => 'panel-pane user__tab--groups list-view',
   /* user_account_page 6dc1b5ac */       'additional_pane_attributes' => '',
   /* user_account_page 6dc1b5ac */       'enable_inner_div' => 0,
   /* user_account_page 6dc1b5ac */       'title_wrapper' => 'h3',
   /* user_account_page 6dc1b5ac */       'title_hide' => 0,
   /* user_account_page 6dc1b5ac */       'content_wrapper' => 'none',
   /* user_account_page 6dc1b5ac */     ),
   /* user_account_page 6dc1b5ac */   ),
   /* user_account_page 6dc1b5ac */   'style' => 'clean_element',
   /* user_account_page 6dc1b5ac */ );
   /* user_account_page 6dc1b5ac */ $pane->css = array();
   /* user_account_page 6dc1b5ac */ $pane->extras = array();
   /* user_account_page 6dc1b5ac */ $pane->position = 0;
   /* user_account_page 6dc1b5ac */ $pane->locks = array();
   /* user_account_page 6dc1b5ac */ $pane->uuid = '6dc1b5ac-eefd-436f-8f0f-038a1a74626d';
  $display->content['new-6dc1b5ac-eefd-436f-8f0f-038a1a74626d'] = $pane;
  $display->panels['main_bottom'][0] = 'new-6dc1b5ac-eefd-436f-8f0f-038a1a74626d';
   /* user_account_page a62b605c */ $pane = new stdClass();
   /* user_account_page a62b605c */ $pane->pid = 'new-a62b605c-b435-47b8-aad1-5dcbb142df04';
   /* user_account_page a62b605c */ $pane->panel = 'main_bottom';
   /* user_account_page a62b605c */ $pane->type = 'views_panes';
   /* user_account_page a62b605c */ $pane->subtype = 'groups_display-panel_pane_4';
   /* user_account_page a62b605c */ $pane->shown = TRUE;
   /* user_account_page a62b605c */ $pane->access = array();
   /* user_account_page a62b605c */ $pane->configuration = array();
   /* user_account_page a62b605c */ $pane->cache = array();
   /* user_account_page a62b605c */ $pane->style = array(
   /* user_account_page a62b605c */   'settings' => array(
   /* user_account_page a62b605c */     'clean_markup' => array(
   /* user_account_page a62b605c */       'pane_wrapper' => 'div',
   /* user_account_page a62b605c */       'additional_pane_classes' => 'panel-pane user__tab--groups list-view',
   /* user_account_page a62b605c */       'additional_pane_attributes' => '',
   /* user_account_page a62b605c */       'enable_inner_div' => 0,
   /* user_account_page a62b605c */       'title_wrapper' => 'h2',
   /* user_account_page a62b605c */       'title_hide' => 0,
   /* user_account_page a62b605c */       'content_wrapper' => 'none',
   /* user_account_page a62b605c */     ),
   /* user_account_page a62b605c */   ),
   /* user_account_page a62b605c */   'style' => 'clean_element',
   /* user_account_page a62b605c */ );
   /* user_account_page a62b605c */ $pane->css = array();
   /* user_account_page a62b605c */ $pane->extras = array();
   /* user_account_page a62b605c */ $pane->position = 1;
   /* user_account_page a62b605c */ $pane->locks = array();
   /* user_account_page a62b605c */ $pane->uuid = 'a62b605c-b435-47b8-aad1-5dcbb142df04';
  $display->content['new-a62b605c-b435-47b8-aad1-5dcbb142df04'] = $pane;
  $display->panels['main_bottom'][1] = 'new-a62b605c-b435-47b8-aad1-5dcbb142df04';
   /* user_account_page 49ed6094 */ $pane = new stdClass();
   /* user_account_page 49ed6094 */ $pane->pid = 'new-49ed6094-784a-4bd9-a92f-7a4b100a3bd0';
   /* user_account_page 49ed6094 */ $pane->panel = 'main_bottom';
   /* user_account_page 49ed6094 */ $pane->type = 'views_panes';
   /* user_account_page 49ed6094 */ $pane->subtype = 'user-panel_pane_1';
   /* user_account_page 49ed6094 */ $pane->shown = TRUE;
   /* user_account_page 49ed6094 */ $pane->access = array();
   /* user_account_page 49ed6094 */ $pane->configuration = array();
   /* user_account_page 49ed6094 */ $pane->cache = array();
   /* user_account_page 49ed6094 */ $pane->style = array(
   /* user_account_page 49ed6094 */   'settings' => NULL,
   /* user_account_page 49ed6094 */ );
   /* user_account_page 49ed6094 */ $pane->css = array(
   /* user_account_page 49ed6094 */   'css_id' => '',
   /* user_account_page 49ed6094 */   'css_class' => 'user__tab--contacts',
   /* user_account_page 49ed6094 */ );
   /* user_account_page 49ed6094 */ $pane->extras = array();
   /* user_account_page 49ed6094 */ $pane->position = 2;
   /* user_account_page 49ed6094 */ $pane->locks = array();
   /* user_account_page 49ed6094 */ $pane->uuid = '49ed6094-784a-4bd9-a92f-7a4b100a3bd0';
  $display->content['new-49ed6094-784a-4bd9-a92f-7a4b100a3bd0'] = $pane;
  $display->panels['main_bottom'][2] = 'new-49ed6094-784a-4bd9-a92f-7a4b100a3bd0';
   /* user_account_page 322b4136 */ $pane = new stdClass();
   /* user_account_page 322b4136 */ $pane->pid = 'new-322b4136-c84c-45f7-87d3-71d33286f468';
   /* user_account_page 322b4136 */ $pane->panel = 'main_bottom';
   /* user_account_page 322b4136 */ $pane->type = 'views_panes';
   /* user_account_page 322b4136 */ $pane->subtype = 'activity_tracker-panel_pane_1';
   /* user_account_page 322b4136 */ $pane->shown = TRUE;
   /* user_account_page 322b4136 */ $pane->access = array();
   /* user_account_page 322b4136 */ $pane->configuration = array(
   /* user_account_page 322b4136 */   'override_title' => 1,
   /* user_account_page 322b4136 */   'override_title_text' => 'Posts',
   /* user_account_page 322b4136 */   'override_title_heading' => 'h3',
   /* user_account_page 322b4136 */ );
   /* user_account_page 322b4136 */ $pane->cache = array();
   /* user_account_page 322b4136 */ $pane->style = array(
   /* user_account_page 322b4136 */   'settings' => array(
   /* user_account_page 322b4136 */     'clean_markup' => array(
   /* user_account_page 322b4136 */       'pane_wrapper' => 'div',
   /* user_account_page 322b4136 */       'additional_pane_classes' => 'panel-pane ',
   /* user_account_page 322b4136 */       'additional_pane_attributes' => '',
   /* user_account_page 322b4136 */       'enable_inner_div' => 0,
   /* user_account_page 322b4136 */       'title_wrapper' => 'h3',
   /* user_account_page 322b4136 */       'title_hide' => 0,
   /* user_account_page 322b4136 */       'content_wrapper' => 'div',
   /* user_account_page 322b4136 */     ),
   /* user_account_page 322b4136 */   ),
   /* user_account_page 322b4136 */   'style' => 'clean_element',
   /* user_account_page 322b4136 */ );
   /* user_account_page 322b4136 */ $pane->css = array(
   /* user_account_page 322b4136 */   'css_id' => '',
   /* user_account_page 322b4136 */   'css_class' => 'user__tab--posts',
   /* user_account_page 322b4136 */ );
   /* user_account_page 322b4136 */ $pane->extras = array();
   /* user_account_page 322b4136 */ $pane->position = 3;
   /* user_account_page 322b4136 */ $pane->locks = array();
   /* user_account_page 322b4136 */ $pane->uuid = '322b4136-c84c-45f7-87d3-71d33286f468';
  $display->content['new-322b4136-c84c-45f7-87d3-71d33286f468'] = $pane;
  $display->panels['main_bottom'][3] = 'new-322b4136-c84c-45f7-87d3-71d33286f468';
   /* user_account_page a383d4c4 */ $pane = new stdClass();
   /* user_account_page a383d4c4 */ $pane->pid = 'new-a383d4c4-f5d3-47ab-993a-846ef56ea943';
   /* user_account_page a383d4c4 */ $pane->panel = 'main_bottom';
   /* user_account_page a383d4c4 */ $pane->type = 'views_panes';
   /* user_account_page a383d4c4 */ $pane->subtype = 'comments_display-panel_pane_1';
   /* user_account_page a383d4c4 */ $pane->shown = TRUE;
   /* user_account_page a383d4c4 */ $pane->access = array();
   /* user_account_page a383d4c4 */ $pane->configuration = array(
   /* user_account_page a383d4c4 */   'override_title' => 1,
   /* user_account_page a383d4c4 */   'override_title_text' => 'Comments',
   /* user_account_page a383d4c4 */   'override_title_heading' => 'h3',
   /* user_account_page a383d4c4 */ );
   /* user_account_page a383d4c4 */ $pane->cache = array();
   /* user_account_page a383d4c4 */ $pane->style = array(
   /* user_account_page a383d4c4 */   'settings' => NULL,
   /* user_account_page a383d4c4 */ );
   /* user_account_page a383d4c4 */ $pane->css = array(
   /* user_account_page a383d4c4 */   'css_id' => '',
   /* user_account_page a383d4c4 */   'css_class' => 'user__tab--comments',
   /* user_account_page a383d4c4 */ );
   /* user_account_page a383d4c4 */ $pane->extras = array();
   /* user_account_page a383d4c4 */ $pane->position = 4;
   /* user_account_page a383d4c4 */ $pane->locks = array();
   /* user_account_page a383d4c4 */ $pane->uuid = 'a383d4c4-f5d3-47ab-993a-846ef56ea943';
  $display->content['new-a383d4c4-f5d3-47ab-993a-846ef56ea943'] = $pane;
  $display->panels['main_bottom'][4] = 'new-a383d4c4-f5d3-47ab-993a-846ef56ea943';
   /* user_account_page 7d1811f6 */ $pane = new stdClass();
   /* user_account_page 7d1811f6 */ $pane->pid = 'new-7d1811f6-e553-4dfd-8ead-8ec69023154a';
   /* user_account_page 7d1811f6 */ $pane->panel = 'main_bottom';
   /* user_account_page 7d1811f6 */ $pane->type = 'views_panes';
   /* user_account_page 7d1811f6 */ $pane->subtype = 'users_contact_history_info-panel_pane_5';
   /* user_account_page 7d1811f6 */ $pane->shown = TRUE;
   /* user_account_page 7d1811f6 */ $pane->access = array();
   /* user_account_page 7d1811f6 */ $pane->configuration = array(
   /* user_account_page 7d1811f6 */   'override_title' => 1,
   /* user_account_page 7d1811f6 */   'override_title_text' => 'Events',
   /* user_account_page 7d1811f6 */   'override_title_heading' => 'h2',
   /* user_account_page 7d1811f6 */ );
   /* user_account_page 7d1811f6 */ $pane->cache = array();
   /* user_account_page 7d1811f6 */ $pane->style = array(
   /* user_account_page 7d1811f6 */   'settings' => array(
   /* user_account_page 7d1811f6 */     'clean_markup' => array(
   /* user_account_page 7d1811f6 */       'pane_wrapper' => 'div',
   /* user_account_page 7d1811f6 */       'additional_pane_classes' => 'panel-pane user-account--events override-accordion teasers__two-column',
   /* user_account_page 7d1811f6 */       'additional_pane_attributes' => '',
   /* user_account_page 7d1811f6 */       'enable_inner_div' => 0,
   /* user_account_page 7d1811f6 */       'title_wrapper' => 'h2',
   /* user_account_page 7d1811f6 */       'title_hide' => 0,
   /* user_account_page 7d1811f6 */       'content_wrapper' => 'none',
   /* user_account_page 7d1811f6 */     ),
   /* user_account_page 7d1811f6 */   ),
   /* user_account_page 7d1811f6 */   'style' => 'clean_element',
   /* user_account_page 7d1811f6 */ );
   /* user_account_page 7d1811f6 */ $pane->css = array();
   /* user_account_page 7d1811f6 */ $pane->extras = array();
   /* user_account_page 7d1811f6 */ $pane->position = 5;
   /* user_account_page 7d1811f6 */ $pane->locks = array();
   /* user_account_page 7d1811f6 */ $pane->uuid = '7d1811f6-e553-4dfd-8ead-8ec69023154a';
  $display->content['new-7d1811f6-e553-4dfd-8ead-8ec69023154a'] = $pane;
  $display->panels['main_bottom'][5] = 'new-7d1811f6-e553-4dfd-8ead-8ec69023154a';
   /* user_account_page 84779079 */ $pane = new stdClass();
   /* user_account_page 84779079 */ $pane->pid = 'new-84779079-5d97-43cd-8573-be55d743da49';
   /* user_account_page 84779079 */ $pane->panel = 'main_bottom';
   /* user_account_page 84779079 */ $pane->type = 'views';
   /* user_account_page 84779079 */ $pane->subtype = 'flagged_nodes';
   /* user_account_page 84779079 */ $pane->shown = TRUE;
   /* user_account_page 84779079 */ $pane->access = array();
   /* user_account_page 84779079 */ $pane->configuration = array(
   /* user_account_page 84779079 */   'override_pager_settings' => 0,
   /* user_account_page 84779079 */   'use_pager' => 1,
   /* user_account_page 84779079 */   'nodes_per_page' => '10',
   /* user_account_page 84779079 */   'pager_id' => '0',
   /* user_account_page 84779079 */   'offset' => '0',
   /* user_account_page 84779079 */   'more_link' => 0,
   /* user_account_page 84779079 */   'feed_icons' => 0,
   /* user_account_page 84779079 */   'panel_args' => 0,
   /* user_account_page 84779079 */   'link_to_view' => 0,
   /* user_account_page 84779079 */   'args' => '',
   /* user_account_page 84779079 */   'url' => 'account',
   /* user_account_page 84779079 */   'display' => 'block_1',
   /* user_account_page 84779079 */   'override_title' => 1,
   /* user_account_page 84779079 */   'override_title_text' => 'Favorites',
   /* user_account_page 84779079 */   'override_title_heading' => 'h3',
   /* user_account_page 84779079 */ );
   /* user_account_page 84779079 */ $pane->cache = array();
   /* user_account_page 84779079 */ $pane->style = array(
   /* user_account_page 84779079 */   'settings' => array(
   /* user_account_page 84779079 */     'clean_markup' => array(
   /* user_account_page 84779079 */       'pane_wrapper' => 'div',
   /* user_account_page 84779079 */       'additional_pane_classes' => 'panel-pane',
   /* user_account_page 84779079 */       'additional_pane_attributes' => '',
   /* user_account_page 84779079 */       'enable_inner_div' => 0,
   /* user_account_page 84779079 */       'title_wrapper' => 'h3',
   /* user_account_page 84779079 */       'title_hide' => 0,
   /* user_account_page 84779079 */       'content_wrapper' => 'none',
   /* user_account_page 84779079 */     ),
   /* user_account_page 84779079 */   ),
   /* user_account_page 84779079 */   'style' => 'clean_element',
   /* user_account_page 84779079 */ );
   /* user_account_page 84779079 */ $pane->css = array(
   /* user_account_page 84779079 */   'css_id' => '',
   /* user_account_page 84779079 */   'css_class' => 'user__tab--favorites',
   /* user_account_page 84779079 */ );
   /* user_account_page 84779079 */ $pane->extras = array();
   /* user_account_page 84779079 */ $pane->position = 6;
   /* user_account_page 84779079 */ $pane->locks = array();
   /* user_account_page 84779079 */ $pane->uuid = '84779079-5d97-43cd-8573-be55d743da49';
  $display->content['new-84779079-5d97-43cd-8573-be55d743da49'] = $pane;
  $display->panels['main_bottom'][6] = 'new-84779079-5d97-43cd-8573-be55d743da49';
   /* user_account_page ee4b3ced */ $pane = new stdClass();
   /* user_account_page ee4b3ced */ $pane->pid = 'new-ee4b3ced-3e30-4201-8d09-95cce5aa6aef';
   /* user_account_page ee4b3ced */ $pane->panel = 'main_bottom';
   /* user_account_page ee4b3ced */ $pane->type = 'views';
   /* user_account_page ee4b3ced */ $pane->subtype = 'activity_default_page';
   /* user_account_page ee4b3ced */ $pane->shown = TRUE;
   /* user_account_page ee4b3ced */ $pane->access = array();
   /* user_account_page ee4b3ced */ $pane->configuration = array(
   /* user_account_page ee4b3ced */   'override_pager_settings' => 0,
   /* user_account_page ee4b3ced */   'use_pager' => 1,
   /* user_account_page ee4b3ced */   'nodes_per_page' => '0',
   /* user_account_page ee4b3ced */   'pager_id' => '0',
   /* user_account_page ee4b3ced */   'offset' => '0',
   /* user_account_page ee4b3ced */   'more_link' => 0,
   /* user_account_page ee4b3ced */   'feed_icons' => 0,
   /* user_account_page ee4b3ced */   'panel_args' => 0,
   /* user_account_page ee4b3ced */   'link_to_view' => 0,
   /* user_account_page ee4b3ced */   'args' => '',
   /* user_account_page ee4b3ced */   'url' => '',
   /* user_account_page ee4b3ced */   'display' => 'block_2',
   /* user_account_page ee4b3ced */   'override_title' => 0,
   /* user_account_page ee4b3ced */   'override_title_text' => '',
   /* user_account_page ee4b3ced */   'override_title_heading' => 'h2',
   /* user_account_page ee4b3ced */ );
   /* user_account_page ee4b3ced */ $pane->cache = array();
   /* user_account_page ee4b3ced */ $pane->style = array(
   /* user_account_page ee4b3ced */   'settings' => NULL,
   /* user_account_page ee4b3ced */ );
   /* user_account_page ee4b3ced */ $pane->css = array(
   /* user_account_page ee4b3ced */   'css_id' => '',
   /* user_account_page ee4b3ced */   'css_class' => 'user__tab--activity',
   /* user_account_page ee4b3ced */ );
   /* user_account_page ee4b3ced */ $pane->extras = array();
   /* user_account_page ee4b3ced */ $pane->position = 7;
   /* user_account_page ee4b3ced */ $pane->locks = array();
   /* user_account_page ee4b3ced */ $pane->uuid = 'ee4b3ced-3e30-4201-8d09-95cce5aa6aef';
  $display->content['new-ee4b3ced-3e30-4201-8d09-95cce5aa6aef'] = $pane;
  $display->panels['main_bottom'][7] = 'new-ee4b3ced-3e30-4201-8d09-95cce5aa6aef';
   /* user_account_page 1508fb49 */ $pane = new stdClass();
   /* user_account_page 1508fb49 */ $pane->pid = 'new-1508fb49-b11c-41c3-b614-d1d0442b16f3';
   /* user_account_page 1508fb49 */ $pane->panel = 'main_bottom';
   /* user_account_page 1508fb49 */ $pane->type = 'views_panes';
   /* user_account_page 1508fb49 */ $pane->subtype = 'events-panel_pane_1';
   /* user_account_page 1508fb49 */ $pane->shown = TRUE;
   /* user_account_page 1508fb49 */ $pane->access = array();
   /* user_account_page 1508fb49 */ $pane->configuration = array();
   /* user_account_page 1508fb49 */ $pane->cache = array();
   /* user_account_page 1508fb49 */ $pane->style = array(
   /* user_account_page 1508fb49 */   'settings' => NULL,
   /* user_account_page 1508fb49 */ );
   /* user_account_page 1508fb49 */ $pane->css = array();
   /* user_account_page 1508fb49 */ $pane->extras = array();
   /* user_account_page 1508fb49 */ $pane->position = 8;
   /* user_account_page 1508fb49 */ $pane->locks = array();
   /* user_account_page 1508fb49 */ $pane->uuid = '1508fb49-b11c-41c3-b614-d1d0442b16f3';
  $display->content['new-1508fb49-b11c-41c3-b614-d1d0442b16f3'] = $pane;
  $display->panels['main_bottom'][8] = 'new-1508fb49-b11c-41c3-b614-d1d0442b16f3';
   /* user_account_page 1b8eb3ee */ $pane = new stdClass();
   /* user_account_page 1b8eb3ee */ $pane->pid = 'new-1b8eb3ee-1c15-49ee-b990-f25d4ee1ee34';
   /* user_account_page 1b8eb3ee */ $pane->panel = 'main_bottom';
   /* user_account_page 1b8eb3ee */ $pane->type = 'user_polls';
   /* user_account_page 1b8eb3ee */ $pane->subtype = 'user_polls';
   /* user_account_page 1b8eb3ee */ $pane->shown = TRUE;
   /* user_account_page 1b8eb3ee */ $pane->access = array();
   /* user_account_page 1b8eb3ee */ $pane->configuration = array(
   /* user_account_page 1b8eb3ee */   'override_title' => 0,
   /* user_account_page 1b8eb3ee */   'override_title_text' => '',
   /* user_account_page 1b8eb3ee */   'override_title_heading' => 'h2',
   /* user_account_page 1b8eb3ee */ );
   /* user_account_page 1b8eb3ee */ $pane->cache = array();
   /* user_account_page 1b8eb3ee */ $pane->style = array(
   /* user_account_page 1b8eb3ee */   'settings' => NULL,
   /* user_account_page 1b8eb3ee */ );
   /* user_account_page 1b8eb3ee */ $pane->css = array();
   /* user_account_page 1b8eb3ee */ $pane->extras = array();
   /* user_account_page 1b8eb3ee */ $pane->position = 9;
   /* user_account_page 1b8eb3ee */ $pane->locks = array();
   /* user_account_page 1b8eb3ee */ $pane->uuid = '1b8eb3ee-1c15-49ee-b990-f25d4ee1ee34';
  $display->content['new-1b8eb3ee-1c15-49ee-b990-f25d4ee1ee34'] = $pane;
  $display->panels['main_bottom'][9] = 'new-1b8eb3ee-1c15-49ee-b990-f25d4ee1ee34';
   /* user_account_page 8bd8eccf */ $pane = new stdClass();
   /* user_account_page 8bd8eccf */ $pane->pid = 'new-8bd8eccf-f7c2-4466-84fd-d7097b444eff';
   /* user_account_page 8bd8eccf */ $pane->panel = 'main_bottom';
   /* user_account_page 8bd8eccf */ $pane->type = 'views_panes';
   /* user_account_page 8bd8eccf */ $pane->subtype = 'support_ticket_activity-panel_pane_1';
   /* user_account_page 8bd8eccf */ $pane->shown = TRUE;
   /* user_account_page 8bd8eccf */ $pane->access = array();
   /* user_account_page 8bd8eccf */ $pane->configuration = array();
   /* user_account_page 8bd8eccf */ $pane->cache = array();
   /* user_account_page 8bd8eccf */ $pane->style = array(
   /* user_account_page 8bd8eccf */   'settings' => NULL,
   /* user_account_page 8bd8eccf */ );
   /* user_account_page 8bd8eccf */ $pane->css = array();
   /* user_account_page 8bd8eccf */ $pane->extras = array();
   /* user_account_page 8bd8eccf */ $pane->position = 10;
   /* user_account_page 8bd8eccf */ $pane->locks = array();
   /* user_account_page 8bd8eccf */ $pane->uuid = '8bd8eccf-f7c2-4466-84fd-d7097b444eff';
  $display->content['new-8bd8eccf-f7c2-4466-84fd-d7097b444eff'] = $pane;
  $display->panels['main_bottom'][10] = 'new-8bd8eccf-f7c2-4466-84fd-d7097b444eff';
   /* user_account_page f203c272 */ $pane = new stdClass();
   /* user_account_page f203c272 */ $pane->pid = 'new-f203c272-b8a7-4c00-be05-58301a266bc7';
   /* user_account_page f203c272 */ $pane->panel = 'main_top';
   /* user_account_page f203c272 */ $pane->type = 'views_panes';
   /* user_account_page f203c272 */ $pane->subtype = 'users_contact_history_info-panel_pane_2';
   /* user_account_page f203c272 */ $pane->shown = TRUE;
   /* user_account_page f203c272 */ $pane->access = array(
   /* user_account_page f203c272 */   'plugins' => array(),
   /* user_account_page f203c272 */ );
   /* user_account_page f203c272 */ $pane->configuration = array(
   /* user_account_page f203c272 */   'fields_override' => array(
   /* user_account_page f203c272 */     'field_name_last' => 0,
   /* user_account_page f203c272 */     'field_name_middle' => 0,
   /* user_account_page f203c272 */     'field_name_first' => 0,
   /* user_account_page f203c272 */     'name' => 0,
   /* user_account_page f203c272 */     'nothing' => 1,
   /* user_account_page f203c272 */     'nothing_1' => 0,
   /* user_account_page f203c272 */     'field_country_of_residence' => 0,
   /* user_account_page f203c272 */     'language' => 0,
   /* user_account_page f203c272 */     'view_user' => 0,
   /* user_account_page f203c272 */     'edit_node' => 0,
   /* user_account_page f203c272 */     'nothing_2' => 0,
   /* user_account_page f203c272 */     'nothing_3' => 0,
   /* user_account_page f203c272 */   ),
   /* user_account_page f203c272 */   'override_title' => 1,
   /* user_account_page f203c272 */   'override_title_text' => '',
   /* user_account_page f203c272 */   'override_title_heading' => 'h2',
   /* user_account_page f203c272 */ );
   /* user_account_page f203c272 */ $pane->cache = array();
   /* user_account_page f203c272 */ $pane->style = array(
   /* user_account_page f203c272 */   'settings' => NULL,
   /* user_account_page f203c272 */ );
   /* user_account_page f203c272 */ $pane->css = array();
   /* user_account_page f203c272 */ $pane->extras = array();
   /* user_account_page f203c272 */ $pane->position = 0;
   /* user_account_page f203c272 */ $pane->locks = array();
   /* user_account_page f203c272 */ $pane->uuid = 'f203c272-b8a7-4c00-be05-58301a266bc7';
  $display->content['new-f203c272-b8a7-4c00-be05-58301a266bc7'] = $pane;
  $display->panels['main_top'][0] = 'new-f203c272-b8a7-4c00-be05-58301a266bc7';
   /* user_account_page 19e220a1 */ $pane = new stdClass();
   /* user_account_page 19e220a1 */ $pane->pid = 'new-19e220a1-1809-4933-9451-9ed92a81c3c9';
   /* user_account_page 19e220a1 */ $pane->panel = 'main_top';
   /* user_account_page 19e220a1 */ $pane->type = 'views';
   /* user_account_page 19e220a1 */ $pane->subtype = 'users_contact_history_info';
   /* user_account_page 19e220a1 */ $pane->shown = TRUE;
   /* user_account_page 19e220a1 */ $pane->access = array(
   /* user_account_page 19e220a1 */   'plugins' => array(),
   /* user_account_page 19e220a1 */ );
   /* user_account_page 19e220a1 */ $pane->configuration = array(
   /* user_account_page 19e220a1 */   'override_pager_settings' => 0,
   /* user_account_page 19e220a1 */   'use_pager' => 0,
   /* user_account_page 19e220a1 */   'nodes_per_page' => '0',
   /* user_account_page 19e220a1 */   'pager_id' => '0',
   /* user_account_page 19e220a1 */   'offset' => '0',
   /* user_account_page 19e220a1 */   'more_link' => 0,
   /* user_account_page 19e220a1 */   'feed_icons' => 0,
   /* user_account_page 19e220a1 */   'panel_args' => 0,
   /* user_account_page 19e220a1 */   'link_to_view' => 0,
   /* user_account_page 19e220a1 */   'args' => '',
   /* user_account_page 19e220a1 */   'url' => '',
   /* user_account_page 19e220a1 */   'display' => 'block_1',
   /* user_account_page 19e220a1 */   'context' => array(
   /* user_account_page 19e220a1 */     0 => '',
   /* user_account_page 19e220a1 */   ),
   /* user_account_page 19e220a1 */   'override_title' => 1,
   /* user_account_page 19e220a1 */   'override_title_text' => '',
   /* user_account_page 19e220a1 */   'override_title_heading' => 'h2',
   /* user_account_page 19e220a1 */ );
   /* user_account_page 19e220a1 */ $pane->cache = array();
   /* user_account_page 19e220a1 */ $pane->style = array(
   /* user_account_page 19e220a1 */   'settings' => NULL,
   /* user_account_page 19e220a1 */ );
   /* user_account_page 19e220a1 */ $pane->css = array(
   /* user_account_page 19e220a1 */   'css_id' => '',
   /* user_account_page 19e220a1 */   'css_class' => 'mobile-show',
   /* user_account_page 19e220a1 */ );
   /* user_account_page 19e220a1 */ $pane->extras = array();
   /* user_account_page 19e220a1 */ $pane->position = 1;
   /* user_account_page 19e220a1 */ $pane->locks = array();
   /* user_account_page 19e220a1 */ $pane->uuid = '19e220a1-1809-4933-9451-9ed92a81c3c9';
  $display->content['new-19e220a1-1809-4933-9451-9ed92a81c3c9'] = $pane;
  $display->panels['main_top'][1] = 'new-19e220a1-1809-4933-9451-9ed92a81c3c9';
   /* user_account_page f04d8bb6 */ $pane = new stdClass();
   /* user_account_page f04d8bb6 */ $pane->pid = 'new-f04d8bb6-4eb7-4cb8-8880-6bfd9b16ff58';
   /* user_account_page f04d8bb6 */ $pane->panel = 'sidebar';
   /* user_account_page f04d8bb6 */ $pane->type = 'views';
   /* user_account_page f04d8bb6 */ $pane->subtype = 'users_contact_history_info';
   /* user_account_page f04d8bb6 */ $pane->shown = TRUE;
   /* user_account_page f04d8bb6 */ $pane->access = array(
   /* user_account_page f04d8bb6 */   'plugins' => array(),
   /* user_account_page f04d8bb6 */ );
   /* user_account_page f04d8bb6 */ $pane->configuration = array(
   /* user_account_page f04d8bb6 */   'override_pager_settings' => 0,
   /* user_account_page f04d8bb6 */   'use_pager' => 0,
   /* user_account_page f04d8bb6 */   'nodes_per_page' => '0',
   /* user_account_page f04d8bb6 */   'pager_id' => '0',
   /* user_account_page f04d8bb6 */   'offset' => '0',
   /* user_account_page f04d8bb6 */   'more_link' => 0,
   /* user_account_page f04d8bb6 */   'feed_icons' => 0,
   /* user_account_page f04d8bb6 */   'panel_args' => 0,
   /* user_account_page f04d8bb6 */   'link_to_view' => 0,
   /* user_account_page f04d8bb6 */   'args' => '',
   /* user_account_page f04d8bb6 */   'url' => '',
   /* user_account_page f04d8bb6 */   'display' => 'block_1',
   /* user_account_page f04d8bb6 */   'override_title' => 1,
   /* user_account_page f04d8bb6 */   'override_title_text' => '',
   /* user_account_page f04d8bb6 */   'override_title_heading' => 'h2',
   /* user_account_page f04d8bb6 */   'context' => array(
   /* user_account_page f04d8bb6 */     0 => '',
   /* user_account_page f04d8bb6 */   ),
   /* user_account_page f04d8bb6 */ );
   /* user_account_page f04d8bb6 */ $pane->cache = array();
   /* user_account_page f04d8bb6 */ $pane->style = array(
   /* user_account_page f04d8bb6 */   'settings' => NULL,
   /* user_account_page f04d8bb6 */ );
   /* user_account_page f04d8bb6 */ $pane->css = array(
   /* user_account_page f04d8bb6 */   'css_id' => '',
   /* user_account_page f04d8bb6 */   'css_class' => 'mobile-hide',
   /* user_account_page f04d8bb6 */ );
   /* user_account_page f04d8bb6 */ $pane->extras = array();
   /* user_account_page f04d8bb6 */ $pane->position = 0;
   /* user_account_page f04d8bb6 */ $pane->locks = array();
   /* user_account_page f04d8bb6 */ $pane->uuid = 'f04d8bb6-4eb7-4cb8-8880-6bfd9b16ff58';
  $display->content['new-f04d8bb6-4eb7-4cb8-8880-6bfd9b16ff58'] = $pane;
  $display->panels['sidebar'][0] = 'new-f04d8bb6-4eb7-4cb8-8880-6bfd9b16ff58';
   /* user_account_page f5f37506 */ $pane = new stdClass();
   /* user_account_page f5f37506 */ $pane->pid = 'new-f5f37506-ac84-4875-9f8b-8b655e1bf8a1';
   /* user_account_page f5f37506 */ $pane->panel = 'sidebar';
   /* user_account_page f5f37506 */ $pane->type = 'views_panes';
   /* user_account_page f5f37506 */ $pane->subtype = 'users_contact_history_info-panel_pane_2';
   /* user_account_page f5f37506 */ $pane->shown = TRUE;
   /* user_account_page f5f37506 */ $pane->access = array();
   /* user_account_page f5f37506 */ $pane->configuration = array(
   /* user_account_page f5f37506 */   'fields_override' => array(
   /* user_account_page f5f37506 */     'field_name_last' => 0,
   /* user_account_page f5f37506 */     'field_name_middle' => 0,
   /* user_account_page f5f37506 */     'field_name_first' => 0,
   /* user_account_page f5f37506 */     'name' => 0,
   /* user_account_page f5f37506 */     'nothing' => 0,
   /* user_account_page f5f37506 */     'nothing_1' => 0,
   /* user_account_page f5f37506 */     'field_country_of_residence' => 0,
   /* user_account_page f5f37506 */     'language' => 0,
   /* user_account_page f5f37506 */     'view_user' => 1,
   /* user_account_page f5f37506 */     'edit_node' => 1,
   /* user_account_page f5f37506 */     'nothing_2' => 1,
   /* user_account_page f5f37506 */     'nothing_3' => 1,
   /* user_account_page f5f37506 */     'nothing_4' => 1,
   /* user_account_page f5f37506 */   ),
   /* user_account_page f5f37506 */   'override_title' => 1,
   /* user_account_page f5f37506 */   'override_title_text' => '',
   /* user_account_page f5f37506 */   'override_title_heading' => 'h2',
   /* user_account_page f5f37506 */ );
   /* user_account_page f5f37506 */ $pane->cache = array();
   /* user_account_page f5f37506 */ $pane->style = array(
   /* user_account_page f5f37506 */   'settings' => NULL,
   /* user_account_page f5f37506 */ );
   /* user_account_page f5f37506 */ $pane->css = array();
   /* user_account_page f5f37506 */ $pane->extras = array();
   /* user_account_page f5f37506 */ $pane->position = 1;
   /* user_account_page f5f37506 */ $pane->locks = array();
   /* user_account_page f5f37506 */ $pane->uuid = 'f5f37506-ac84-4875-9f8b-8b655e1bf8a1';
  $display->content['new-f5f37506-ac84-4875-9f8b-8b655e1bf8a1'] = $pane;
  $display->panels['sidebar'][1] = 'new-f5f37506-ac84-4875-9f8b-8b655e1bf8a1';
   /* user_account_page a956a484 */ $pane = new stdClass();
   /* user_account_page a956a484 */ $pane->pid = 'new-a956a484-e0af-4fd5-a1e8-02b32066f9e9';
   /* user_account_page a956a484 */ $pane->panel = 'sidebar';
   /* user_account_page a956a484 */ $pane->type = 'views_panes';
   /* user_account_page a956a484 */ $pane->subtype = 'users_contact_history_info-panel_pane_1';
   /* user_account_page a956a484 */ $pane->shown = TRUE;
   /* user_account_page a956a484 */ $pane->access = array();
   /* user_account_page a956a484 */ $pane->configuration = array(
   /* user_account_page a956a484 */   'arguments' => array(
   /* user_account_page a956a484 */     'type' => 'organization',
   /* user_account_page a956a484 */   ),
   /* user_account_page a956a484 */   'override_title' => 1,
   /* user_account_page a956a484 */   'override_title_text' => 'Organizations',
   /* user_account_page a956a484 */   'override_title_heading' => 'h3',
   /* user_account_page a956a484 */ );
   /* user_account_page a956a484 */ $pane->cache = array();
   /* user_account_page a956a484 */ $pane->style = array(
   /* user_account_page a956a484 */   'settings' => array(
   /* user_account_page a956a484 */     'clean_markup' => array(
   /* user_account_page a956a484 */       'pane_wrapper' => 'div',
   /* user_account_page a956a484 */       'additional_pane_classes' => 'panel-pane',
   /* user_account_page a956a484 */       'additional_pane_attributes' => '',
   /* user_account_page a956a484 */       'enable_inner_div' => 0,
   /* user_account_page a956a484 */       'title_wrapper' => 'h3',
   /* user_account_page a956a484 */       'title_hide' => 0,
   /* user_account_page a956a484 */       'content_wrapper' => 'none',
   /* user_account_page a956a484 */     ),
   /* user_account_page a956a484 */   ),
   /* user_account_page a956a484 */   'style' => 'clean_element',
   /* user_account_page a956a484 */ );
   /* user_account_page a956a484 */ $pane->css = array();
   /* user_account_page a956a484 */ $pane->extras = array();
   /* user_account_page a956a484 */ $pane->position = 2;
   /* user_account_page a956a484 */ $pane->locks = array();
   /* user_account_page a956a484 */ $pane->uuid = 'a956a484-e0af-4fd5-a1e8-02b32066f9e9';
  $display->content['new-a956a484-e0af-4fd5-a1e8-02b32066f9e9'] = $pane;
  $display->panels['sidebar'][2] = 'new-a956a484-e0af-4fd5-a1e8-02b32066f9e9';
   /* user_account_page 110450fd */ $pane = new stdClass();
   /* user_account_page 110450fd */ $pane->pid = 'new-110450fd-f21e-4f9c-ac6d-a52317b4c44c';
   /* user_account_page 110450fd */ $pane->panel = 'sidebar';
   /* user_account_page 110450fd */ $pane->type = 'block';
   /* user_account_page 110450fd */ $pane->subtype = 'things_recently_viewed-things_recently_viewed';
   /* user_account_page 110450fd */ $pane->shown = TRUE;
   /* user_account_page 110450fd */ $pane->access = array(
   /* user_account_page 110450fd */   'plugins' => array(),
   /* user_account_page 110450fd */ );
   /* user_account_page 110450fd */ $pane->configuration = array(
   /* user_account_page 110450fd */   'override_title' => 1,
   /* user_account_page 110450fd */   'override_title_text' => 'You Recently Visited',
   /* user_account_page 110450fd */   'override_title_heading' => 'h3',
   /* user_account_page 110450fd */ );
   /* user_account_page 110450fd */ $pane->cache = array();
   /* user_account_page 110450fd */ $pane->style = array(
   /* user_account_page 110450fd */   'settings' => array(
   /* user_account_page 110450fd */     'clean_markup' => array(
   /* user_account_page 110450fd */       'pane_wrapper' => 'div',
   /* user_account_page 110450fd */       'additional_pane_classes' => 'panel-pane',
   /* user_account_page 110450fd */       'additional_pane_attributes' => '',
   /* user_account_page 110450fd */       'enable_inner_div' => 0,
   /* user_account_page 110450fd */       'title_wrapper' => 'h3',
   /* user_account_page 110450fd */       'title_hide' => 0,
   /* user_account_page 110450fd */       'content_wrapper' => 'none',
   /* user_account_page 110450fd */     ),
   /* user_account_page 110450fd */   ),
   /* user_account_page 110450fd */   'style' => 'clean_element',
   /* user_account_page 110450fd */ );
   /* user_account_page 110450fd */ $pane->css = array();
   /* user_account_page 110450fd */ $pane->extras = array();
   /* user_account_page 110450fd */ $pane->position = 3;
   /* user_account_page 110450fd */ $pane->locks = array();
   /* user_account_page 110450fd */ $pane->uuid = '110450fd-f21e-4f9c-ac6d-a52317b4c44c';
  $display->content['new-110450fd-f21e-4f9c-ac6d-a52317b4c44c'] = $pane;
  $display->panels['sidebar'][3] = 'new-110450fd-f21e-4f9c-ac6d-a52317b4c44c';
   /* user_account_page 2f5d6b39 */ $pane = new stdClass();
   /* user_account_page 2f5d6b39 */ $pane->pid = 'new-2f5d6b39-94a4-41ad-9922-e50bbf5c22e0';
   /* user_account_page 2f5d6b39 */ $pane->panel = 'sidebar';
   /* user_account_page 2f5d6b39 */ $pane->type = 'views_panes';
   /* user_account_page 2f5d6b39 */ $pane->subtype = 'statistics_user-panel_pane_1';
   /* user_account_page 2f5d6b39 */ $pane->shown = TRUE;
   /* user_account_page 2f5d6b39 */ $pane->access = array(
   /* user_account_page 2f5d6b39 */   'plugins' => array(
   /* user_account_page 2f5d6b39 */     0 => array(
   /* user_account_page 2f5d6b39 */       'name' => 'role',
   /* user_account_page 2f5d6b39 */       'settings' => array(
   /* user_account_page 2f5d6b39 */         'rids' => array(
   /* user_account_page 2f5d6b39 */           0 => 9,
   /* user_account_page 2f5d6b39 */         ),
   /* user_account_page 2f5d6b39 */       ),
   /* user_account_page 2f5d6b39 */       'context' => 'context_user_1',
   /* user_account_page 2f5d6b39 */       'not' => FALSE,
   /* user_account_page 2f5d6b39 */     ),
   /* user_account_page 2f5d6b39 */   ),
   /* user_account_page 2f5d6b39 */ );
   /* user_account_page 2f5d6b39 */ $pane->configuration = array(
   /* user_account_page 2f5d6b39 */   'override_title' => 1,
   /* user_account_page 2f5d6b39 */   'override_title_text' => 'Your user points',
   /* user_account_page 2f5d6b39 */   'override_title_heading' => 'h3',
   /* user_account_page 2f5d6b39 */ );
   /* user_account_page 2f5d6b39 */ $pane->cache = array();
   /* user_account_page 2f5d6b39 */ $pane->style = array(
   /* user_account_page 2f5d6b39 */   'settings' => array(
   /* user_account_page 2f5d6b39 */     'clean_markup' => array(
   /* user_account_page 2f5d6b39 */       'pane_wrapper' => 'div',
   /* user_account_page 2f5d6b39 */       'additional_pane_classes' => 'panel-pane',
   /* user_account_page 2f5d6b39 */       'additional_pane_attributes' => '',
   /* user_account_page 2f5d6b39 */       'enable_inner_div' => 0,
   /* user_account_page 2f5d6b39 */       'title_wrapper' => 'h3',
   /* user_account_page 2f5d6b39 */       'title_hide' => 0,
   /* user_account_page 2f5d6b39 */       'content_wrapper' => 'none',
   /* user_account_page 2f5d6b39 */     ),
   /* user_account_page 2f5d6b39 */   ),
   /* user_account_page 2f5d6b39 */   'style' => 'clean_element',
   /* user_account_page 2f5d6b39 */ );
   /* user_account_page 2f5d6b39 */ $pane->css = array();
   /* user_account_page 2f5d6b39 */ $pane->extras = array();
   /* user_account_page 2f5d6b39 */ $pane->position = 4;
   /* user_account_page 2f5d6b39 */ $pane->locks = array();
   /* user_account_page 2f5d6b39 */ $pane->uuid = '2f5d6b39-94a4-41ad-9922-e50bbf5c22e0';
  $display->content['new-2f5d6b39-94a4-41ad-9922-e50bbf5c22e0'] = $pane;
  $display->panels['sidebar'][4] = 'new-2f5d6b39-94a4-41ad-9922-e50bbf5c22e0';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = 'new-f04d8bb6-4eb7-4cb8-8880-6bfd9b16ff58';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['user_account_page'] = $page;

   /* user_login_history */ $page = new stdClass();
   /* user_login_history */ $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
   /* user_login_history */ $page->api_version = 1;
   /* user_login_history */ $page->name = 'user_login_history';
   /* user_login_history */ $page->task = 'page';
   /* user_login_history */ $page->admin_title = 'User Login History';
   /* user_login_history */ $page->admin_description = '';
   /* user_login_history */ $page->path = 'user/%uid/login-history';
   /* user_login_history */ $page->access = array(
   /* user_login_history */   'type' => 'none',
   /* user_login_history */   'settings' => NULL,
   /* user_login_history */ );
   /* user_login_history */ $page->menu = array();
   /* user_login_history */ $page->arguments = array(
   /* user_login_history */   'uid' => array(
   /* user_login_history */     'id' => 1,
   /* user_login_history */     'identifier' => 'User: ID',
   /* user_login_history */     'name' => 'entity_id:user',
   /* user_login_history */     'settings' => array(),
   /* user_login_history */   ),
   /* user_login_history */ );
   /* user_login_history */ $page->conf = array(
   /* user_login_history */   'admin_paths' => FALSE,
   /* user_login_history */ );
  $page->default_handlers = array();
   /* page_user_login_history__panel_context_5ae4e8e8-af3d-4d0e-b603-aa57e6dc4454 */ $handler = new stdClass();
   /* page_user_login_history__panel_context_5ae4e8e8-af3d-4d0e-b603-aa57e6dc4454 */ $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
   /* page_user_login_history__panel_context_5ae4e8e8-af3d-4d0e-b603-aa57e6dc4454 */ $handler->api_version = 1;
   /* page_user_login_history__panel_context_5ae4e8e8-af3d-4d0e-b603-aa57e6dc4454 */ $handler->name = 'page_user_login_history__panel_context_5ae4e8e8-af3d-4d0e-b603-aa57e6dc4454';
   /* page_user_login_history__panel_context_5ae4e8e8-af3d-4d0e-b603-aa57e6dc4454 */ $handler->task = 'page';
   /* page_user_login_history__panel_context_5ae4e8e8-af3d-4d0e-b603-aa57e6dc4454 */ $handler->subtask = 'user_login_history';
   /* page_user_login_history__panel_context_5ae4e8e8-af3d-4d0e-b603-aa57e6dc4454 */ $handler->handler = 'panel_context';
   /* page_user_login_history__panel_context_5ae4e8e8-af3d-4d0e-b603-aa57e6dc4454 */ $handler->weight = 0;
   /* page_user_login_history__panel_context_5ae4e8e8-af3d-4d0e-b603-aa57e6dc4454 */ $handler->conf = array(
   /* page_user_login_history__panel_context_5ae4e8e8-af3d-4d0e-b603-aa57e6dc4454 */   'title' => 'Panel',
   /* page_user_login_history__panel_context_5ae4e8e8-af3d-4d0e-b603-aa57e6dc4454 */   'no_blocks' => 1,
   /* page_user_login_history__panel_context_5ae4e8e8-af3d-4d0e-b603-aa57e6dc4454 */   'pipeline' => 'standard',
   /* page_user_login_history__panel_context_5ae4e8e8-af3d-4d0e-b603-aa57e6dc4454 */   'body_classes_to_remove' => '',
   /* page_user_login_history__panel_context_5ae4e8e8-af3d-4d0e-b603-aa57e6dc4454 */   'body_classes_to_add' => '',
   /* page_user_login_history__panel_context_5ae4e8e8-af3d-4d0e-b603-aa57e6dc4454 */   'css_id' => '',
   /* page_user_login_history__panel_context_5ae4e8e8-af3d-4d0e-b603-aa57e6dc4454 */   'css' => '',
   /* page_user_login_history__panel_context_5ae4e8e8-af3d-4d0e-b603-aa57e6dc4454 */   'contexts' => array(),
   /* page_user_login_history__panel_context_5ae4e8e8-af3d-4d0e-b603-aa57e6dc4454 */   'relationships' => array(),
   /* page_user_login_history__panel_context_5ae4e8e8-af3d-4d0e-b603-aa57e6dc4454 */   'access' => array(
   /* page_user_login_history__panel_context_5ae4e8e8-af3d-4d0e-b603-aa57e6dc4454 */     'plugins' => array(
   /* page_user_login_history__panel_context_5ae4e8e8-af3d-4d0e-b603-aa57e6dc4454 */       1 => array(
   /* page_user_login_history__panel_context_5ae4e8e8-af3d-4d0e-b603-aa57e6dc4454 */         'name' => 'og_orgmanager',
   /* page_user_login_history__panel_context_5ae4e8e8-af3d-4d0e-b603-aa57e6dc4454 */         'settings' => NULL,
   /* page_user_login_history__panel_context_5ae4e8e8-af3d-4d0e-b603-aa57e6dc4454 */         'context' => array(
   /* page_user_login_history__panel_context_5ae4e8e8-af3d-4d0e-b603-aa57e6dc4454 */           0 => 'argument_entity_id:user_1',
   /* page_user_login_history__panel_context_5ae4e8e8-af3d-4d0e-b603-aa57e6dc4454 */           1 => 'logged-in-user',
   /* page_user_login_history__panel_context_5ae4e8e8-af3d-4d0e-b603-aa57e6dc4454 */         ),
   /* page_user_login_history__panel_context_5ae4e8e8-af3d-4d0e-b603-aa57e6dc4454 */         'not' => FALSE,
   /* page_user_login_history__panel_context_5ae4e8e8-af3d-4d0e-b603-aa57e6dc4454 */       ),
   /* page_user_login_history__panel_context_5ae4e8e8-af3d-4d0e-b603-aa57e6dc4454 */       2 => array(
   /* page_user_login_history__panel_context_5ae4e8e8-af3d-4d0e-b603-aa57e6dc4454 */         'name' => 'perm',
   /* page_user_login_history__panel_context_5ae4e8e8-af3d-4d0e-b603-aa57e6dc4454 */         'settings' => array(
   /* page_user_login_history__panel_context_5ae4e8e8-af3d-4d0e-b603-aa57e6dc4454 */           'perm' => 'administer users',
   /* page_user_login_history__panel_context_5ae4e8e8-af3d-4d0e-b603-aa57e6dc4454 */         ),
   /* page_user_login_history__panel_context_5ae4e8e8-af3d-4d0e-b603-aa57e6dc4454 */         'context' => 'logged-in-user',
   /* page_user_login_history__panel_context_5ae4e8e8-af3d-4d0e-b603-aa57e6dc4454 */         'not' => FALSE,
   /* page_user_login_history__panel_context_5ae4e8e8-af3d-4d0e-b603-aa57e6dc4454 */       ),
   /* page_user_login_history__panel_context_5ae4e8e8-af3d-4d0e-b603-aa57e6dc4454 */     ),
   /* page_user_login_history__panel_context_5ae4e8e8-af3d-4d0e-b603-aa57e6dc4454 */     'logic' => 'or',
   /* page_user_login_history__panel_context_5ae4e8e8-af3d-4d0e-b603-aa57e6dc4454 */   ),
   /* page_user_login_history__panel_context_5ae4e8e8-af3d-4d0e-b603-aa57e6dc4454 */ );
   /* user_login_history dd2a3d8c */ $display = new panels_display();
   /* user_login_history dd2a3d8c */ $display->layout = 'gn2_2colstacked_page';
   /* user_login_history dd2a3d8c */ $display->layout_settings = array();
   /* user_login_history dd2a3d8c */ $display->panel_settings = array(
   /* user_login_history dd2a3d8c */   'style_settings' => array(
   /* user_login_history dd2a3d8c */     'default' => NULL,
   /* user_login_history dd2a3d8c */     'top' => NULL,
   /* user_login_history dd2a3d8c */     'sidebar' => array(
   /* user_login_history dd2a3d8c */       'clean_markup' => array(
   /* user_login_history dd2a3d8c */         'region_wrapper' => 'div',
   /* user_login_history dd2a3d8c */         'additional_region_classes' => 'user__profile--header',
   /* user_login_history dd2a3d8c */         'additional_region_attributes' => '',
   /* user_login_history dd2a3d8c */         'enable_inner_div' => 0,
   /* user_login_history dd2a3d8c */         'pane_separators' => 0,
   /* user_login_history dd2a3d8c */       ),
   /* user_login_history dd2a3d8c */     ),
   /* user_login_history dd2a3d8c */     'main_top' => array(
   /* user_login_history dd2a3d8c */       'clean_markup' => array(
   /* user_login_history dd2a3d8c */         'region_wrapper' => 'div',
   /* user_login_history dd2a3d8c */         'additional_region_classes' => 'table',
   /* user_login_history dd2a3d8c */         'additional_region_attributes' => '',
   /* user_login_history dd2a3d8c */         'enable_inner_div' => 0,
   /* user_login_history dd2a3d8c */         'pane_separators' => 0,
   /* user_login_history dd2a3d8c */       ),
   /* user_login_history dd2a3d8c */     ),
   /* user_login_history dd2a3d8c */     'main_bottom' => NULL,
   /* user_login_history dd2a3d8c */     'footer' => NULL,
   /* user_login_history dd2a3d8c */   ),
   /* user_login_history dd2a3d8c */   'sidebar' => array(
   /* user_login_history dd2a3d8c */     'style' => 'clean_element',
   /* user_login_history dd2a3d8c */   ),
   /* user_login_history dd2a3d8c */   'main_top' => array(
   /* user_login_history dd2a3d8c */     'style' => 'clean_element',
   /* user_login_history dd2a3d8c */   ),
   /* user_login_history dd2a3d8c */ );
   /* user_login_history dd2a3d8c */ $display->cache = array();
   /* user_login_history dd2a3d8c */ $display->title = '';
   /* user_login_history dd2a3d8c */ $display->uuid = 'dd2a3d8c-dda3-4de3-baf5-2c17aff62682';
   /* user_login_history dd2a3d8c */ $display->storage_type = 'page_manager';
   /* user_login_history dd2a3d8c */ $display->storage_id = 'page_user_login_history__panel_context_5ae4e8e8-af3d-4d0e-b603-aa57e6dc4454';
  $display->content = array();
  $display->panels = array();
   /* user_login_history 01b5eb4f */ $pane = new stdClass();
   /* user_login_history 01b5eb4f */ $pane->pid = 'new-01b5eb4f-3b85-48c7-9775-42901dc4c3a7';
   /* user_login_history 01b5eb4f */ $pane->panel = 'main_top';
   /* user_login_history 01b5eb4f */ $pane->type = 'views_panes';
   /* user_login_history 01b5eb4f */ $pane->subtype = 'user_login_history-panel_pane_1';
   /* user_login_history 01b5eb4f */ $pane->shown = TRUE;
   /* user_login_history 01b5eb4f */ $pane->access = array();
   /* user_login_history 01b5eb4f */ $pane->configuration = array();
   /* user_login_history 01b5eb4f */ $pane->cache = array();
   /* user_login_history 01b5eb4f */ $pane->style = array(
   /* user_login_history 01b5eb4f */   'settings' => NULL,
   /* user_login_history 01b5eb4f */ );
   /* user_login_history 01b5eb4f */ $pane->css = array();
   /* user_login_history 01b5eb4f */ $pane->extras = array();
   /* user_login_history 01b5eb4f */ $pane->position = 0;
   /* user_login_history 01b5eb4f */ $pane->locks = array();
   /* user_login_history 01b5eb4f */ $pane->uuid = '01b5eb4f-3b85-48c7-9775-42901dc4c3a7';
  $display->content['new-01b5eb4f-3b85-48c7-9775-42901dc4c3a7'] = $pane;
  $display->panels['main_top'][0] = 'new-01b5eb4f-3b85-48c7-9775-42901dc4c3a7';
   /* user_login_history f06f18d8 */ $pane = new stdClass();
   /* user_login_history f06f18d8 */ $pane->pid = 'new-f06f18d8-dd3d-4ae3-bd1c-fe43142a68cb';
   /* user_login_history f06f18d8 */ $pane->panel = 'sidebar';
   /* user_login_history f06f18d8 */ $pane->type = 'views';
   /* user_login_history f06f18d8 */ $pane->subtype = 'users_contact_history_info';
   /* user_login_history f06f18d8 */ $pane->shown = TRUE;
   /* user_login_history f06f18d8 */ $pane->access = array();
   /* user_login_history f06f18d8 */ $pane->configuration = array(
   /* user_login_history f06f18d8 */   'override_pager_settings' => 0,
   /* user_login_history f06f18d8 */   'use_pager' => 0,
   /* user_login_history f06f18d8 */   'nodes_per_page' => '0',
   /* user_login_history f06f18d8 */   'pager_id' => '0',
   /* user_login_history f06f18d8 */   'offset' => '0',
   /* user_login_history f06f18d8 */   'more_link' => 0,
   /* user_login_history f06f18d8 */   'feed_icons' => 0,
   /* user_login_history f06f18d8 */   'panel_args' => 0,
   /* user_login_history f06f18d8 */   'link_to_view' => 0,
   /* user_login_history f06f18d8 */   'args' => '',
   /* user_login_history f06f18d8 */   'url' => '',
   /* user_login_history f06f18d8 */   'display' => 'block_1',
   /* user_login_history f06f18d8 */   'context' => array(
   /* user_login_history f06f18d8 */     0 => 'argument_entity_id:user_1.uid',
   /* user_login_history f06f18d8 */   ),
   /* user_login_history f06f18d8 */   'override_title' => 0,
   /* user_login_history f06f18d8 */   'override_title_text' => '',
   /* user_login_history f06f18d8 */   'override_title_heading' => 'h2',
   /* user_login_history f06f18d8 */ );
   /* user_login_history f06f18d8 */ $pane->cache = array();
   /* user_login_history f06f18d8 */ $pane->style = array(
   /* user_login_history f06f18d8 */   'settings' => NULL,
   /* user_login_history f06f18d8 */ );
   /* user_login_history f06f18d8 */ $pane->css = array();
   /* user_login_history f06f18d8 */ $pane->extras = array();
   /* user_login_history f06f18d8 */ $pane->position = 0;
   /* user_login_history f06f18d8 */ $pane->locks = array();
   /* user_login_history f06f18d8 */ $pane->uuid = 'f06f18d8-dd3d-4ae3-bd1c-fe43142a68cb';
  $display->content['new-f06f18d8-dd3d-4ae3-bd1c-fe43142a68cb'] = $pane;
  $display->panels['sidebar'][0] = 'new-f06f18d8-dd3d-4ae3-bd1c-fe43142a68cb';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-01b5eb4f-3b85-48c7-9775-42901dc4c3a7';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['user_login_history'] = $page;

  return $pages;

}
