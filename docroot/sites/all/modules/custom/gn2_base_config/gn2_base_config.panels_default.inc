<?php
/**
 * @file
 * gn2_base_config.panels_default.inc
 */

/**
 * Implements hook_default_panels_mini().
 */
function gn2_base_config_default_panels_mini() {
  $export = array();

   /* add_post_mini_form */ $mini = new stdClass();
   /* add_post_mini_form */ $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
   /* add_post_mini_form */ $mini->api_version = 1;
   /* add_post_mini_form */ $mini->name = 'add_post_mini_form';
   /* add_post_mini_form */ $mini->category = '';
   /* add_post_mini_form */ $mini->admin_title = 'Add Post Mini-form';
   /* add_post_mini_form */ $mini->admin_description = '';
   /* add_post_mini_form */ $mini->requiredcontexts = array();
   /* add_post_mini_form */ $mini->contexts = array(
   /* add_post_mini_form */   0 => array(
   /* add_post_mini_form */     'identifier' => 'Node add form',
   /* add_post_mini_form */     'keyword' => 'node_add',
   /* add_post_mini_form */     'name' => 'node_add_form',
   /* add_post_mini_form */     'type' => 'post',
   /* add_post_mini_form */     'id' => 1,
   /* add_post_mini_form */   ),
   /* add_post_mini_form */ );
   /* add_post_mini_form */ $mini->relationships = array();
   /* add_post_mini_form 913849f4 */ $display = new panels_display();
   /* add_post_mini_form 913849f4 */ $display->layout = 'gn2-3col';
   /* add_post_mini_form 913849f4 */ $display->layout_settings = array();
   /* add_post_mini_form 913849f4 */ $display->panel_settings = array(
   /* add_post_mini_form 913849f4 */   'style_settings' => array(
   /* add_post_mini_form 913849f4 */     'default' => NULL,
   /* add_post_mini_form 913849f4 */     'contentmain' => NULL,
   /* add_post_mini_form 913849f4 */     'top' => NULL,
   /* add_post_mini_form 913849f4 */     'sidebar' => NULL,
   /* add_post_mini_form 913849f4 */     'main_top' => NULL,
   /* add_post_mini_form 913849f4 */     'main_bottom' => NULL,
   /* add_post_mini_form 913849f4 */     'footer' => NULL,
   /* add_post_mini_form 913849f4 */     'gn2-3col--header' => NULL,
   /* add_post_mini_form 913849f4 */     'gn2-3col--col1' => array(
   /* add_post_mini_form 913849f4 */       'clean_markup' => array(
   /* add_post_mini_form 913849f4 */         'region_wrapper' => 'div',
   /* add_post_mini_form 913849f4 */         'additional_region_classes' => '',
   /* add_post_mini_form 913849f4 */         'additional_region_attributes' => '',
   /* add_post_mini_form 913849f4 */         'enable_inner_div' => 1,
   /* add_post_mini_form 913849f4 */         'pane_separators' => 0,
   /* add_post_mini_form 913849f4 */       ),
   /* add_post_mini_form 913849f4 */     ),
   /* add_post_mini_form 913849f4 */     'gn2-3col--col2' => array(
   /* add_post_mini_form 913849f4 */       'clean_markup' => array(
   /* add_post_mini_form 913849f4 */         'region_wrapper' => 'div',
   /* add_post_mini_form 913849f4 */         'additional_region_classes' => '',
   /* add_post_mini_form 913849f4 */         'additional_region_attributes' => '',
   /* add_post_mini_form 913849f4 */         'enable_inner_div' => 1,
   /* add_post_mini_form 913849f4 */         'pane_separators' => 0,
   /* add_post_mini_form 913849f4 */       ),
   /* add_post_mini_form 913849f4 */     ),
   /* add_post_mini_form 913849f4 */     'gn2-3col--col3' => NULL,
   /* add_post_mini_form 913849f4 */     'gn2-3col--footer' => NULL,
   /* add_post_mini_form 913849f4 */   ),
   /* add_post_mini_form 913849f4 */   'gn2-3col--col1' => array(
   /* add_post_mini_form 913849f4 */     'style' => 'clean_element',
   /* add_post_mini_form 913849f4 */   ),
   /* add_post_mini_form 913849f4 */   'gn2-3col--col2' => array(
   /* add_post_mini_form 913849f4 */     'style' => 'clean_element',
   /* add_post_mini_form 913849f4 */   ),
   /* add_post_mini_form 913849f4 */ );
   /* add_post_mini_form 913849f4 */ $display->cache = array();
   /* add_post_mini_form 913849f4 */ $display->title = 'Join The Conversation';
   /* add_post_mini_form 913849f4 */ $display->uuid = '913849f4-36f2-48b0-92f8-e51b53efdf9f';
   /* add_post_mini_form 913849f4 */ $display->storage_type = 'panels_mini';
   /* add_post_mini_form 913849f4 */ $display->storage_id = 'add_post_mini_form';
  $display->content = array();
  $display->panels = array();
   /* add_post_mini_form 5a4867b2 */ $pane = new stdClass();
   /* add_post_mini_form 5a4867b2 */ $pane->pid = 'new-5a4867b2-99bf-41de-a191-f073c3f9ddfd';
   /* add_post_mini_form 5a4867b2 */ $pane->panel = 'gn2-3col--col1';
   /* add_post_mini_form 5a4867b2 */ $pane->type = 'views';
   /* add_post_mini_form 5a4867b2 */ $pane->subtype = 'users_contact_history_info';
   /* add_post_mini_form 5a4867b2 */ $pane->shown = TRUE;
   /* add_post_mini_form 5a4867b2 */ $pane->access = array();
   /* add_post_mini_form 5a4867b2 */ $pane->configuration = array(
   /* add_post_mini_form 5a4867b2 */   'override_pager_settings' => 0,
   /* add_post_mini_form 5a4867b2 */   'use_pager' => 0,
   /* add_post_mini_form 5a4867b2 */   'nodes_per_page' => '5',
   /* add_post_mini_form 5a4867b2 */   'pager_id' => '0',
   /* add_post_mini_form 5a4867b2 */   'offset' => '0',
   /* add_post_mini_form 5a4867b2 */   'more_link' => 0,
   /* add_post_mini_form 5a4867b2 */   'feed_icons' => 0,
   /* add_post_mini_form 5a4867b2 */   'panel_args' => 0,
   /* add_post_mini_form 5a4867b2 */   'link_to_view' => 0,
   /* add_post_mini_form 5a4867b2 */   'args' => '',
   /* add_post_mini_form 5a4867b2 */   'url' => '',
   /* add_post_mini_form 5a4867b2 */   'display' => 'block_6',
   /* add_post_mini_form 5a4867b2 */   'context' => array(
   /* add_post_mini_form 5a4867b2 */     0 => '',
   /* add_post_mini_form 5a4867b2 */   ),
   /* add_post_mini_form 5a4867b2 */   'override_title' => 0,
   /* add_post_mini_form 5a4867b2 */   'override_title_text' => '',
   /* add_post_mini_form 5a4867b2 */   'override_title_heading' => 'h2',
   /* add_post_mini_form 5a4867b2 */ );
   /* add_post_mini_form 5a4867b2 */ $pane->cache = array();
   /* add_post_mini_form 5a4867b2 */ $pane->style = array(
   /* add_post_mini_form 5a4867b2 */   'settings' => NULL,
   /* add_post_mini_form 5a4867b2 */ );
   /* add_post_mini_form 5a4867b2 */ $pane->css = array();
   /* add_post_mini_form 5a4867b2 */ $pane->extras = array();
   /* add_post_mini_form 5a4867b2 */ $pane->position = 0;
   /* add_post_mini_form 5a4867b2 */ $pane->locks = array();
   /* add_post_mini_form 5a4867b2 */ $pane->uuid = '5a4867b2-99bf-41de-a191-f073c3f9ddfd';
  $display->content['new-5a4867b2-99bf-41de-a191-f073c3f9ddfd'] = $pane;
  $display->panels['gn2-3col--col1'][0] = 'new-5a4867b2-99bf-41de-a191-f073c3f9ddfd';
   /* add_post_mini_form 6829e203 */ $pane = new stdClass();
   /* add_post_mini_form 6829e203 */ $pane->pid = 'new-6829e203-c9e9-4f00-b555-8d4818bd4b42';
   /* add_post_mini_form 6829e203 */ $pane->panel = 'gn2-3col--col1';
   /* add_post_mini_form 6829e203 */ $pane->type = 'form';
   /* add_post_mini_form 6829e203 */ $pane->subtype = 'form';
   /* add_post_mini_form 6829e203 */ $pane->shown = TRUE;
   /* add_post_mini_form 6829e203 */ $pane->access = array();
   /* add_post_mini_form 6829e203 */ $pane->configuration = array(
   /* add_post_mini_form 6829e203 */   'context' => 'context_node_add_form_1',
   /* add_post_mini_form 6829e203 */   'override_title' => 0,
   /* add_post_mini_form 6829e203 */   'override_title_text' => '',
   /* add_post_mini_form 6829e203 */ );
   /* add_post_mini_form 6829e203 */ $pane->cache = array();
   /* add_post_mini_form 6829e203 */ $pane->style = array(
   /* add_post_mini_form 6829e203 */   'settings' => NULL,
   /* add_post_mini_form 6829e203 */ );
   /* add_post_mini_form 6829e203 */ $pane->css = array(
   /* add_post_mini_form 6829e203 */   'css_id' => '',
   /* add_post_mini_form 6829e203 */   'css_class' => 'post-miniform-baseform',
   /* add_post_mini_form 6829e203 */ );
   /* add_post_mini_form 6829e203 */ $pane->extras = array();
   /* add_post_mini_form 6829e203 */ $pane->position = 1;
   /* add_post_mini_form 6829e203 */ $pane->locks = array();
   /* add_post_mini_form 6829e203 */ $pane->uuid = '6829e203-c9e9-4f00-b555-8d4818bd4b42';
  $display->content['new-6829e203-c9e9-4f00-b555-8d4818bd4b42'] = $pane;
  $display->panels['gn2-3col--col1'][1] = 'new-6829e203-c9e9-4f00-b555-8d4818bd4b42';
   /* add_post_mini_form 771879fc */ $pane = new stdClass();
   /* add_post_mini_form 771879fc */ $pane->pid = 'new-771879fc-77d9-4662-86ab-e734d1a580e9';
   /* add_post_mini_form 771879fc */ $pane->panel = 'gn2-3col--col2';
   /* add_post_mini_form 771879fc */ $pane->type = 'node_form_title';
   /* add_post_mini_form 771879fc */ $pane->subtype = 'node_form_title';
   /* add_post_mini_form 771879fc */ $pane->shown = TRUE;
   /* add_post_mini_form 771879fc */ $pane->access = array();
   /* add_post_mini_form 771879fc */ $pane->configuration = array(
   /* add_post_mini_form 771879fc */   'context' => 'requiredcontext_node_add_form_1',
   /* add_post_mini_form 771879fc */   'override_title' => 0,
   /* add_post_mini_form 771879fc */   'override_title_text' => '',
   /* add_post_mini_form 771879fc */ );
   /* add_post_mini_form 771879fc */ $pane->cache = array();
   /* add_post_mini_form 771879fc */ $pane->style = array(
   /* add_post_mini_form 771879fc */   'settings' => NULL,
   /* add_post_mini_form 771879fc */ );
   /* add_post_mini_form 771879fc */ $pane->css = array();
   /* add_post_mini_form 771879fc */ $pane->extras = array();
   /* add_post_mini_form 771879fc */ $pane->position = 0;
   /* add_post_mini_form 771879fc */ $pane->locks = array();
   /* add_post_mini_form 771879fc */ $pane->uuid = '771879fc-77d9-4662-86ab-e734d1a580e9';
  $display->content['new-771879fc-77d9-4662-86ab-e734d1a580e9'] = $pane;
  $display->panels['gn2-3col--col2'][0] = 'new-771879fc-77d9-4662-86ab-e734d1a580e9';
   /* add_post_mini_form 33861528 */ $pane = new stdClass();
   /* add_post_mini_form 33861528 */ $pane->pid = 'new-33861528-d613-4251-bbb7-f9b09939c428';
   /* add_post_mini_form 33861528 */ $pane->panel = 'gn2-3col--col2';
   /* add_post_mini_form 33861528 */ $pane->type = 'entity_form_field';
   /* add_post_mini_form 33861528 */ $pane->subtype = 'node:body';
   /* add_post_mini_form 33861528 */ $pane->shown = TRUE;
   /* add_post_mini_form 33861528 */ $pane->access = array();
   /* add_post_mini_form 33861528 */ $pane->configuration = array(
   /* add_post_mini_form 33861528 */   'label' => '',
   /* add_post_mini_form 33861528 */   'formatter' => '',
   /* add_post_mini_form 33861528 */   'context' => 'requiredcontext_node_add_form_1',
   /* add_post_mini_form 33861528 */   'override_title' => 0,
   /* add_post_mini_form 33861528 */   'override_title_text' => '',
   /* add_post_mini_form 33861528 */ );
   /* add_post_mini_form 33861528 */ $pane->cache = array();
   /* add_post_mini_form 33861528 */ $pane->style = array(
   /* add_post_mini_form 33861528 */   'settings' => NULL,
   /* add_post_mini_form 33861528 */ );
   /* add_post_mini_form 33861528 */ $pane->css = array();
   /* add_post_mini_form 33861528 */ $pane->extras = array();
   /* add_post_mini_form 33861528 */ $pane->position = 1;
   /* add_post_mini_form 33861528 */ $pane->locks = array();
   /* add_post_mini_form 33861528 */ $pane->uuid = '33861528-d613-4251-bbb7-f9b09939c428';
  $display->content['new-33861528-d613-4251-bbb7-f9b09939c428'] = $pane;
  $display->panels['gn2-3col--col2'][1] = 'new-33861528-d613-4251-bbb7-f9b09939c428';
   /* add_post_mini_form 04df91d5 */ $pane = new stdClass();
   /* add_post_mini_form 04df91d5 */ $pane->pid = 'new-04df91d5-94fa-4ded-af20-6773799ccf3f';
   /* add_post_mini_form 04df91d5 */ $pane->panel = 'gn2-3col--col2';
   /* add_post_mini_form 04df91d5 */ $pane->type = 'entity_form_field';
   /* add_post_mini_form 04df91d5 */ $pane->subtype = 'node:field_main_image';
   /* add_post_mini_form 04df91d5 */ $pane->shown = TRUE;
   /* add_post_mini_form 04df91d5 */ $pane->access = array();
   /* add_post_mini_form 04df91d5 */ $pane->configuration = array(
   /* add_post_mini_form 04df91d5 */   'label' => '',
   /* add_post_mini_form 04df91d5 */   'formatter' => '',
   /* add_post_mini_form 04df91d5 */   'context' => 'context_node_add_form_1',
   /* add_post_mini_form 04df91d5 */   'override_title' => 0,
   /* add_post_mini_form 04df91d5 */   'override_title_text' => '',
   /* add_post_mini_form 04df91d5 */ );
   /* add_post_mini_form 04df91d5 */ $pane->cache = array();
   /* add_post_mini_form 04df91d5 */ $pane->style = array(
   /* add_post_mini_form 04df91d5 */   'settings' => NULL,
   /* add_post_mini_form 04df91d5 */ );
   /* add_post_mini_form 04df91d5 */ $pane->css = array();
   /* add_post_mini_form 04df91d5 */ $pane->extras = array();
   /* add_post_mini_form 04df91d5 */ $pane->position = 2;
   /* add_post_mini_form 04df91d5 */ $pane->locks = array();
   /* add_post_mini_form 04df91d5 */ $pane->uuid = '04df91d5-94fa-4ded-af20-6773799ccf3f';
  $display->content['new-04df91d5-94fa-4ded-af20-6773799ccf3f'] = $pane;
  $display->panels['gn2-3col--col2'][2] = 'new-04df91d5-94fa-4ded-af20-6773799ccf3f';
   /* add_post_mini_form 12e659a2 */ $pane = new stdClass();
   /* add_post_mini_form 12e659a2 */ $pane->pid = 'new-12e659a2-d7a2-439f-8d66-3a84455d47c2';
   /* add_post_mini_form 12e659a2 */ $pane->panel = 'gn2-3col--col2';
   /* add_post_mini_form 12e659a2 */ $pane->type = 'node_form_buttons';
   /* add_post_mini_form 12e659a2 */ $pane->subtype = 'node_form_buttons';
   /* add_post_mini_form 12e659a2 */ $pane->shown = TRUE;
   /* add_post_mini_form 12e659a2 */ $pane->access = array();
   /* add_post_mini_form 12e659a2 */ $pane->configuration = array(
   /* add_post_mini_form 12e659a2 */   'context' => 'requiredcontext_node_add_form_1',
   /* add_post_mini_form 12e659a2 */   'override_title' => 0,
   /* add_post_mini_form 12e659a2 */   'override_title_text' => '',
   /* add_post_mini_form 12e659a2 */ );
   /* add_post_mini_form 12e659a2 */ $pane->cache = array();
   /* add_post_mini_form 12e659a2 */ $pane->style = array(
   /* add_post_mini_form 12e659a2 */   'settings' => NULL,
   /* add_post_mini_form 12e659a2 */ );
   /* add_post_mini_form 12e659a2 */ $pane->css = array();
   /* add_post_mini_form 12e659a2 */ $pane->extras = array();
   /* add_post_mini_form 12e659a2 */ $pane->position = 3;
   /* add_post_mini_form 12e659a2 */ $pane->locks = array();
   /* add_post_mini_form 12e659a2 */ $pane->uuid = '12e659a2-d7a2-439f-8d66-3a84455d47c2';
  $display->content['new-12e659a2-d7a2-439f-8d66-3a84455d47c2'] = $pane;
  $display->panels['gn2-3col--col2'][3] = 'new-12e659a2-d7a2-439f-8d66-3a84455d47c2';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-771879fc-77d9-4662-86ab-e734d1a580e9';
  $mini->display = $display;
  $export['add_post_mini_form'] = $mini;

   /* event_contacts_block */ $mini = new stdClass();
   /* event_contacts_block */ $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
   /* event_contacts_block */ $mini->api_version = 1;
   /* event_contacts_block */ $mini->name = 'event_contacts_block';
   /* event_contacts_block */ $mini->category = '';
   /* event_contacts_block */ $mini->admin_title = 'Event Contacts Block';
   /* event_contacts_block */ $mini->admin_description = '';
   /* event_contacts_block */ $mini->requiredcontexts = array();
   /* event_contacts_block */ $mini->contexts = array();
   /* event_contacts_block */ $mini->relationships = array();
   /* event_contacts_block 53ce719b */ $display = new panels_display();
   /* event_contacts_block 53ce719b */ $display->layout = 'gn2_1col';
   /* event_contacts_block 53ce719b */ $display->layout_settings = array();
   /* event_contacts_block 53ce719b */ $display->panel_settings = array(
   /* event_contacts_block 53ce719b */   'style_settings' => array(
   /* event_contacts_block 53ce719b */     'default' => NULL,
   /* event_contacts_block 53ce719b */     'contentmain' => array(
   /* event_contacts_block 53ce719b */       'clean_markup' => array(
   /* event_contacts_block 53ce719b */         'region_wrapper' => 'div',
   /* event_contacts_block 53ce719b */         'additional_region_classes' => 'event-contacts-block',
   /* event_contacts_block 53ce719b */         'additional_region_attributes' => '',
   /* event_contacts_block 53ce719b */         'enable_inner_div' => 1,
   /* event_contacts_block 53ce719b */         'pane_separators' => 0,
   /* event_contacts_block 53ce719b */       ),
   /* event_contacts_block 53ce719b */     ),
   /* event_contacts_block 53ce719b */   ),
   /* event_contacts_block 53ce719b */   'contentmain' => array(
   /* event_contacts_block 53ce719b */     'style' => 'clean_element',
   /* event_contacts_block 53ce719b */   ),
   /* event_contacts_block 53ce719b */ );
   /* event_contacts_block 53ce719b */ $display->cache = array();
   /* event_contacts_block 53ce719b */ $display->title = '';
   /* event_contacts_block 53ce719b */ $display->uuid = '53ce719b-19b9-48c1-94cb-1894fdfce66e';
   /* event_contacts_block 53ce719b */ $display->storage_type = 'panels_mini';
   /* event_contacts_block 53ce719b */ $display->storage_id = 'event_contacts_block';
  $display->content = array();
  $display->panels = array();
   /* event_contacts_block 4a19e0ce */ $pane = new stdClass();
   /* event_contacts_block 4a19e0ce */ $pane->pid = 'new-4a19e0ce-afa2-4f6d-8a09-8497cb630f06';
   /* event_contacts_block 4a19e0ce */ $pane->panel = 'contentmain';
   /* event_contacts_block 4a19e0ce */ $pane->type = 'custom';
   /* event_contacts_block 4a19e0ce */ $pane->subtype = 'custom';
   /* event_contacts_block 4a19e0ce */ $pane->shown = TRUE;
   /* event_contacts_block 4a19e0ce */ $pane->access = array();
   /* event_contacts_block 4a19e0ce */ $pane->configuration = array(
   /* event_contacts_block 4a19e0ce */   'admin_title' => 'Event Contacts Intro Text',
   /* event_contacts_block 4a19e0ce */   'title' => '',
   /* event_contacts_block 4a19e0ce */   'body' => 'For questions about this event, contact:',
   /* event_contacts_block 4a19e0ce */   'format' => 'plain_text',
   /* event_contacts_block 4a19e0ce */   'substitute' => TRUE,
   /* event_contacts_block 4a19e0ce */ );
   /* event_contacts_block 4a19e0ce */ $pane->cache = array();
   /* event_contacts_block 4a19e0ce */ $pane->style = array(
   /* event_contacts_block 4a19e0ce */   'settings' => array(
   /* event_contacts_block 4a19e0ce */     'clean_markup' => array(
   /* event_contacts_block 4a19e0ce */       'pane_wrapper' => 'div',
   /* event_contacts_block 4a19e0ce */       'additional_pane_classes' => 'event-contacts-list--intro-text',
   /* event_contacts_block 4a19e0ce */       'additional_pane_attributes' => '',
   /* event_contacts_block 4a19e0ce */       'enable_inner_div' => 0,
   /* event_contacts_block 4a19e0ce */       'title_wrapper' => 'h2',
   /* event_contacts_block 4a19e0ce */       'title_hide' => 0,
   /* event_contacts_block 4a19e0ce */       'content_wrapper' => 'none',
   /* event_contacts_block 4a19e0ce */     ),
   /* event_contacts_block 4a19e0ce */   ),
   /* event_contacts_block 4a19e0ce */   'style' => 'clean_element',
   /* event_contacts_block 4a19e0ce */ );
   /* event_contacts_block 4a19e0ce */ $pane->css = array();
   /* event_contacts_block 4a19e0ce */ $pane->extras = array();
   /* event_contacts_block 4a19e0ce */ $pane->position = 0;
   /* event_contacts_block 4a19e0ce */ $pane->locks = array();
   /* event_contacts_block 4a19e0ce */ $pane->uuid = '4a19e0ce-afa2-4f6d-8a09-8497cb630f06';
  $display->content['new-4a19e0ce-afa2-4f6d-8a09-8497cb630f06'] = $pane;
  $display->panels['contentmain'][0] = 'new-4a19e0ce-afa2-4f6d-8a09-8497cb630f06';
   /* event_contacts_block 5e70043f */ $pane = new stdClass();
   /* event_contacts_block 5e70043f */ $pane->pid = 'new-5e70043f-2cf8-451a-bb52-c293735842f0';
   /* event_contacts_block 5e70043f */ $pane->panel = 'contentmain';
   /* event_contacts_block 5e70043f */ $pane->type = 'views_panes';
   /* event_contacts_block 5e70043f */ $pane->subtype = 'events-panel_pane_4';
   /* event_contacts_block 5e70043f */ $pane->shown = TRUE;
   /* event_contacts_block 5e70043f */ $pane->access = array();
   /* event_contacts_block 5e70043f */ $pane->configuration = array();
   /* event_contacts_block 5e70043f */ $pane->cache = array();
   /* event_contacts_block 5e70043f */ $pane->style = array(
   /* event_contacts_block 5e70043f */   'settings' => array(
   /* event_contacts_block 5e70043f */     'clean_markup' => array(
   /* event_contacts_block 5e70043f */       'pane_wrapper' => 'div',
   /* event_contacts_block 5e70043f */       'additional_pane_classes' => 'event-contacts-list--contacts-list',
   /* event_contacts_block 5e70043f */       'additional_pane_attributes' => '',
   /* event_contacts_block 5e70043f */       'enable_inner_div' => 0,
   /* event_contacts_block 5e70043f */       'title_wrapper' => 'h2',
   /* event_contacts_block 5e70043f */       'title_hide' => 0,
   /* event_contacts_block 5e70043f */       'content_wrapper' => 'none',
   /* event_contacts_block 5e70043f */     ),
   /* event_contacts_block 5e70043f */   ),
   /* event_contacts_block 5e70043f */   'style' => 'clean_element',
   /* event_contacts_block 5e70043f */ );
   /* event_contacts_block 5e70043f */ $pane->css = array();
   /* event_contacts_block 5e70043f */ $pane->extras = array();
   /* event_contacts_block 5e70043f */ $pane->position = 1;
   /* event_contacts_block 5e70043f */ $pane->locks = array();
   /* event_contacts_block 5e70043f */ $pane->uuid = '5e70043f-2cf8-451a-bb52-c293735842f0';
  $display->content['new-5e70043f-2cf8-451a-bb52-c293735842f0'] = $pane;
  $display->panels['contentmain'][1] = 'new-5e70043f-2cf8-451a-bb52-c293735842f0';
   /* event_contacts_block 00a676ae */ $pane = new stdClass();
   /* event_contacts_block 00a676ae */ $pane->pid = 'new-00a676ae-c133-43cc-9f8b-f62d7772012b';
   /* event_contacts_block 00a676ae */ $pane->panel = 'contentmain';
   /* event_contacts_block 00a676ae */ $pane->type = 'views_panes';
   /* event_contacts_block 00a676ae */ $pane->subtype = 'events-panel_pane_5';
   /* event_contacts_block 00a676ae */ $pane->shown = TRUE;
   /* event_contacts_block 00a676ae */ $pane->access = array();
   /* event_contacts_block 00a676ae */ $pane->configuration = array();
   /* event_contacts_block 00a676ae */ $pane->cache = array();
   /* event_contacts_block 00a676ae */ $pane->style = array(
   /* event_contacts_block 00a676ae */   'settings' => array(
   /* event_contacts_block 00a676ae */     'clean_markup' => array(
   /* event_contacts_block 00a676ae */       'pane_wrapper' => 'div',
   /* event_contacts_block 00a676ae */       'additional_pane_classes' => 'event-contacts-list--addl-info',
   /* event_contacts_block 00a676ae */       'additional_pane_attributes' => '',
   /* event_contacts_block 00a676ae */       'enable_inner_div' => 0,
   /* event_contacts_block 00a676ae */       'title_wrapper' => 'h2',
   /* event_contacts_block 00a676ae */       'title_hide' => 0,
   /* event_contacts_block 00a676ae */       'content_wrapper' => 'none',
   /* event_contacts_block 00a676ae */     ),
   /* event_contacts_block 00a676ae */   ),
   /* event_contacts_block 00a676ae */   'style' => 'clean_element',
   /* event_contacts_block 00a676ae */ );
   /* event_contacts_block 00a676ae */ $pane->css = array();
   /* event_contacts_block 00a676ae */ $pane->extras = array();
   /* event_contacts_block 00a676ae */ $pane->position = 2;
   /* event_contacts_block 00a676ae */ $pane->locks = array();
   /* event_contacts_block 00a676ae */ $pane->uuid = '00a676ae-c133-43cc-9f8b-f62d7772012b';
  $display->content['new-00a676ae-c133-43cc-9f8b-f62d7772012b'] = $pane;
  $display->panels['contentmain'][2] = 'new-00a676ae-c133-43cc-9f8b-f62d7772012b';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $mini->display = $display;
  $export['event_contacts_block'] = $mini;

   /* footer */ $mini = new stdClass();
   /* footer */ $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
   /* footer */ $mini->api_version = 1;
   /* footer */ $mini->name = 'footer';
   /* footer */ $mini->category = '';
   /* footer */ $mini->admin_title = 'Footer';
   /* footer */ $mini->admin_description = '';
   /* footer */ $mini->requiredcontexts = array(
   /* footer */   0 => array(
   /* footer */     'identifier' => 'Node',
   /* footer */     'keyword' => 'node',
   /* footer */     'name' => 'entity:node',
   /* footer */     'entity_id' => '',
   /* footer */     'id' => 1,
   /* footer */   ),
   /* footer */ );
   /* footer */ $mini->contexts = array(
   /* footer */   0 => array(
   /* footer */     'identifier' => 'Node_2',
   /* footer */     'keyword' => 'node_2',
   /* footer */     'name' => 'entity:node',
   /* footer */     'entity_id' => '11',
   /* footer */     'id' => 1,
   /* footer */   ),
   /* footer */ );
   /* footer */ $mini->relationships = array();
   /* footer eeeed0f6 */ $display = new panels_display();
   /* footer eeeed0f6 */ $display->layout = 'gn2-footer';
   /* footer eeeed0f6 */ $display->layout_settings = array();
   /* footer eeeed0f6 */ $display->panel_settings = array(
   /* footer eeeed0f6 */   'style_settings' => array(
   /* footer eeeed0f6 */     'default' => NULL,
   /* footer eeeed0f6 */     'gn2-3col--header' => NULL,
   /* footer eeeed0f6 */     'gn2-3col--col1' => array(
   /* footer eeeed0f6 */       'clean_markup' => array(
   /* footer eeeed0f6 */         'region_wrapper' => 'div',
   /* footer eeeed0f6 */         'additional_region_classes' => '',
   /* footer eeeed0f6 */         'additional_region_attributes' => '',
   /* footer eeeed0f6 */         'enable_inner_div' => 1,
   /* footer eeeed0f6 */         'pane_separators' => 0,
   /* footer eeeed0f6 */       ),
   /* footer eeeed0f6 */     ),
   /* footer eeeed0f6 */     'gn2-3col--col2' => array(
   /* footer eeeed0f6 */       'clean_markup' => array(
   /* footer eeeed0f6 */         'region_wrapper' => 'div',
   /* footer eeeed0f6 */         'additional_region_classes' => '',
   /* footer eeeed0f6 */         'additional_region_attributes' => '',
   /* footer eeeed0f6 */         'enable_inner_div' => 1,
   /* footer eeeed0f6 */         'pane_separators' => 0,
   /* footer eeeed0f6 */       ),
   /* footer eeeed0f6 */     ),
   /* footer eeeed0f6 */     'gn2-3col--col3' => array(
   /* footer eeeed0f6 */       'clean_markup' => array(
   /* footer eeeed0f6 */         'region_wrapper' => 'div',
   /* footer eeeed0f6 */         'additional_region_classes' => '',
   /* footer eeeed0f6 */         'additional_region_attributes' => '',
   /* footer eeeed0f6 */         'enable_inner_div' => 1,
   /* footer eeeed0f6 */         'pane_separators' => 0,
   /* footer eeeed0f6 */       ),
   /* footer eeeed0f6 */     ),
   /* footer eeeed0f6 */     'gn2-3col--footer' => NULL,
   /* footer eeeed0f6 */     'gn2-footer--col1--nav' => NULL,
   /* footer eeeed0f6 */     'gn2-footer--col2--info' => NULL,
   /* footer eeeed0f6 */     'gn2-footer--col2--nav' => NULL,
   /* footer eeeed0f6 */     'gn2-footer--col3--info' => NULL,
   /* footer eeeed0f6 */     'gn2-footer--col3--nav' => NULL,
   /* footer eeeed0f6 */     'gn2-footer--col2--nav--left' => NULL,
   /* footer eeeed0f6 */     'gn2-footer--col2--nav--right' => NULL,
   /* footer eeeed0f6 */     'gn2-footer--col1--info' => NULL,
   /* footer eeeed0f6 */   ),
   /* footer eeeed0f6 */   'gn2-3col--col1' => array(
   /* footer eeeed0f6 */     'style' => 'clean_element',
   /* footer eeeed0f6 */   ),
   /* footer eeeed0f6 */   'gn2-3col--col2' => array(
   /* footer eeeed0f6 */     'style' => 'clean_element',
   /* footer eeeed0f6 */   ),
   /* footer eeeed0f6 */   'gn2-3col--col3' => array(
   /* footer eeeed0f6 */     'style' => 'clean_element',
   /* footer eeeed0f6 */   ),
   /* footer eeeed0f6 */   'gn2-footer--col1--info' => array(
   /* footer eeeed0f6 */     'style' => '-1',
   /* footer eeeed0f6 */   ),
   /* footer eeeed0f6 */ );
   /* footer eeeed0f6 */ $display->cache = array();
   /* footer eeeed0f6 */ $display->title = 'Welcome to the Footer';
   /* footer eeeed0f6 */ $display->uuid = 'eeeed0f6-8510-429d-b75c-fbf7f049bbd3';
   /* footer eeeed0f6 */ $display->storage_type = 'panels_mini';
   /* footer eeeed0f6 */ $display->storage_id = 'footer';
  $display->content = array();
  $display->panels = array();
   /* footer 1d03a203 */ $pane = new stdClass();
   /* footer 1d03a203 */ $pane->pid = 'new-1d03a203-1357-4dc6-a35c-0fa85323ab87';
   /* footer 1d03a203 */ $pane->panel = 'gn2-footer--col1--info';
   /* footer 1d03a203 */ $pane->type = 'block';
   /* footer 1d03a203 */ $pane->subtype = 'gn2_themeparts_swap-gn2_themeparts_about';
   /* footer 1d03a203 */ $pane->shown = TRUE;
   /* footer 1d03a203 */ $pane->access = array();
   /* footer 1d03a203 */ $pane->configuration = array(
   /* footer 1d03a203 */   'override_title' => 0,
   /* footer 1d03a203 */   'override_title_text' => '',
   /* footer 1d03a203 */   'override_title_heading' => 'h2',
   /* footer 1d03a203 */ );
   /* footer 1d03a203 */ $pane->cache = array();
   /* footer 1d03a203 */ $pane->style = array(
   /* footer 1d03a203 */   'settings' => NULL,
   /* footer 1d03a203 */ );
   /* footer 1d03a203 */ $pane->css = array();
   /* footer 1d03a203 */ $pane->extras = array();
   /* footer 1d03a203 */ $pane->position = 0;
   /* footer 1d03a203 */ $pane->locks = array();
   /* footer 1d03a203 */ $pane->uuid = '1d03a203-1357-4dc6-a35c-0fa85323ab87';
  $display->content['new-1d03a203-1357-4dc6-a35c-0fa85323ab87'] = $pane;
  $display->panels['gn2-footer--col1--info'][0] = 'new-1d03a203-1357-4dc6-a35c-0fa85323ab87';
   /* footer b18b82e3 */ $pane = new stdClass();
   /* footer b18b82e3 */ $pane->pid = 'new-b18b82e3-f5f1-4756-9fb2-741b207049a5';
   /* footer b18b82e3 */ $pane->panel = 'gn2-footer--col2--info';
   /* footer b18b82e3 */ $pane->type = 'views_panes';
   /* footer b18b82e3 */ $pane->subtype = 'footer_elements-panel_pane__special_footer_content';
   /* footer b18b82e3 */ $pane->shown = TRUE;
   /* footer b18b82e3 */ $pane->access = array();
   /* footer b18b82e3 */ $pane->configuration = array(
   /* footer b18b82e3 */   'arguments' => array(
   /* footer b18b82e3 */     'tid' => 'Footer: About GlobalNET',
   /* footer b18b82e3 */   ),
   /* footer b18b82e3 */ );
   /* footer b18b82e3 */ $pane->cache = array();
   /* footer b18b82e3 */ $pane->style = array(
   /* footer b18b82e3 */   'settings' => NULL,
   /* footer b18b82e3 */ );
   /* footer b18b82e3 */ $pane->css = array();
   /* footer b18b82e3 */ $pane->extras = array();
   /* footer b18b82e3 */ $pane->position = 0;
   /* footer b18b82e3 */ $pane->locks = array();
   /* footer b18b82e3 */ $pane->uuid = 'b18b82e3-f5f1-4756-9fb2-741b207049a5';
  $display->content['new-b18b82e3-f5f1-4756-9fb2-741b207049a5'] = $pane;
  $display->panels['gn2-footer--col2--info'][0] = 'new-b18b82e3-f5f1-4756-9fb2-741b207049a5';
   /* footer ae30c8f0 */ $pane = new stdClass();
   /* footer ae30c8f0 */ $pane->pid = 'new-ae30c8f0-4833-4bfb-926c-98016c82918e';
   /* footer ae30c8f0 */ $pane->panel = 'gn2-footer--col2--nav--left';
   /* footer ae30c8f0 */ $pane->type = 'views_panes';
   /* footer ae30c8f0 */ $pane->subtype = 'footer_elements-panel_pane__special_footer_content';
   /* footer ae30c8f0 */ $pane->shown = TRUE;
   /* footer ae30c8f0 */ $pane->access = array();
   /* footer ae30c8f0 */ $pane->configuration = array(
   /* footer ae30c8f0 */   'arguments' => array(
   /* footer ae30c8f0 */     'tid' => 'Footer: GlobalNET Main Links',
   /* footer ae30c8f0 */   ),
   /* footer ae30c8f0 */ );
   /* footer ae30c8f0 */ $pane->cache = array();
   /* footer ae30c8f0 */ $pane->style = array(
   /* footer ae30c8f0 */   'settings' => NULL,
   /* footer ae30c8f0 */ );
   /* footer ae30c8f0 */ $pane->css = array();
   /* footer ae30c8f0 */ $pane->extras = array();
   /* footer ae30c8f0 */ $pane->position = 0;
   /* footer ae30c8f0 */ $pane->locks = array();
   /* footer ae30c8f0 */ $pane->uuid = 'ae30c8f0-4833-4bfb-926c-98016c82918e';
  $display->content['new-ae30c8f0-4833-4bfb-926c-98016c82918e'] = $pane;
  $display->panels['gn2-footer--col2--nav--left'][0] = 'new-ae30c8f0-4833-4bfb-926c-98016c82918e';
   /* footer ba1bfd90 */ $pane = new stdClass();
   /* footer ba1bfd90 */ $pane->pid = 'new-ba1bfd90-6073-4d64-a3a9-9cdb6cd16d01';
   /* footer ba1bfd90 */ $pane->panel = 'gn2-footer--col2--nav--right';
   /* footer ba1bfd90 */ $pane->type = 'views_panes';
   /* footer ba1bfd90 */ $pane->subtype = 'footer_elements-panel_pane__special_footer_content';
   /* footer ba1bfd90 */ $pane->shown = TRUE;
   /* footer ba1bfd90 */ $pane->access = array();
   /* footer ba1bfd90 */ $pane->configuration = array(
   /* footer ba1bfd90 */   'arguments' => array(
   /* footer ba1bfd90 */     'tid' => 'Footer: Community Links Intro Text',
   /* footer ba1bfd90 */   ),
   /* footer ba1bfd90 */ );
   /* footer ba1bfd90 */ $pane->cache = array();
   /* footer ba1bfd90 */ $pane->style = array(
   /* footer ba1bfd90 */   'settings' => NULL,
   /* footer ba1bfd90 */ );
   /* footer ba1bfd90 */ $pane->css = array();
   /* footer ba1bfd90 */ $pane->extras = array();
   /* footer ba1bfd90 */ $pane->position = 0;
   /* footer ba1bfd90 */ $pane->locks = array();
   /* footer ba1bfd90 */ $pane->uuid = 'ba1bfd90-6073-4d64-a3a9-9cdb6cd16d01';
  $display->content['new-ba1bfd90-6073-4d64-a3a9-9cdb6cd16d01'] = $pane;
  $display->panels['gn2-footer--col2--nav--right'][0] = 'new-ba1bfd90-6073-4d64-a3a9-9cdb6cd16d01';
   /* footer 873e1a0e */ $pane = new stdClass();
   /* footer 873e1a0e */ $pane->pid = 'new-873e1a0e-1ae6-460a-a193-9bbf421f315d';
   /* footer 873e1a0e */ $pane->panel = 'gn2-footer--col2--nav--right';
   /* footer 873e1a0e */ $pane->type = 'views_panes';
   /* footer 873e1a0e */ $pane->subtype = 'footer_elements-footer_nav';
   /* footer 873e1a0e */ $pane->shown = TRUE;
   /* footer 873e1a0e */ $pane->access = array();
   /* footer 873e1a0e */ $pane->configuration = array();
   /* footer 873e1a0e */ $pane->cache = array();
   /* footer 873e1a0e */ $pane->style = array(
   /* footer 873e1a0e */   'settings' => NULL,
   /* footer 873e1a0e */ );
   /* footer 873e1a0e */ $pane->css = array();
   /* footer 873e1a0e */ $pane->extras = array();
   /* footer 873e1a0e */ $pane->position = 1;
   /* footer 873e1a0e */ $pane->locks = array();
   /* footer 873e1a0e */ $pane->uuid = '873e1a0e-1ae6-460a-a193-9bbf421f315d';
  $display->content['new-873e1a0e-1ae6-460a-a193-9bbf421f315d'] = $pane;
  $display->panels['gn2-footer--col2--nav--right'][1] = 'new-873e1a0e-1ae6-460a-a193-9bbf421f315d';
   /* footer 0393a1a2 */ $pane = new stdClass();
   /* footer 0393a1a2 */ $pane->pid = 'new-0393a1a2-d33b-4260-b6eb-bfd4147e40d0';
   /* footer 0393a1a2 */ $pane->panel = 'gn2-footer--col3--info';
   /* footer 0393a1a2 */ $pane->type = 'views_panes';
   /* footer 0393a1a2 */ $pane->subtype = 'footer_elements-panel_pane__special_footer_content';
   /* footer 0393a1a2 */ $pane->shown = TRUE;
   /* footer 0393a1a2 */ $pane->access = array();
   /* footer 0393a1a2 */ $pane->configuration = array(
   /* footer 0393a1a2 */   'arguments' => array(
   /* footer 0393a1a2 */     'tid' => 'Footer: GlobalNET Support Links',
   /* footer 0393a1a2 */   ),
   /* footer 0393a1a2 */ );
   /* footer 0393a1a2 */ $pane->cache = array();
   /* footer 0393a1a2 */ $pane->style = array(
   /* footer 0393a1a2 */   'settings' => NULL,
   /* footer 0393a1a2 */ );
   /* footer 0393a1a2 */ $pane->css = array();
   /* footer 0393a1a2 */ $pane->extras = array();
   /* footer 0393a1a2 */ $pane->position = 0;
   /* footer 0393a1a2 */ $pane->locks = array();
   /* footer 0393a1a2 */ $pane->uuid = '0393a1a2-d33b-4260-b6eb-bfd4147e40d0';
  $display->content['new-0393a1a2-d33b-4260-b6eb-bfd4147e40d0'] = $pane;
  $display->panels['gn2-footer--col3--info'][0] = 'new-0393a1a2-d33b-4260-b6eb-bfd4147e40d0';
   /* footer f6a5cbe8 */ $pane = new stdClass();
   /* footer f6a5cbe8 */ $pane->pid = 'new-f6a5cbe8-1c05-4870-bb00-0bc8aa697ebc';
   /* footer f6a5cbe8 */ $pane->panel = 'gn2-footer--col3--info';
   /* footer f6a5cbe8 */ $pane->type = 'block';
   /* footer f6a5cbe8 */ $pane->subtype = 'block-4';
   /* footer f6a5cbe8 */ $pane->shown = TRUE;
   /* footer f6a5cbe8 */ $pane->access = array();
   /* footer f6a5cbe8 */ $pane->configuration = array(
   /* footer f6a5cbe8 */   'override_title' => 1,
   /* footer f6a5cbe8 */   'override_title_text' => '',
   /* footer f6a5cbe8 */   'override_title_heading' => 'h2',
   /* footer f6a5cbe8 */ );
   /* footer f6a5cbe8 */ $pane->cache = array();
   /* footer f6a5cbe8 */ $pane->style = array(
   /* footer f6a5cbe8 */   'settings' => array(
   /* footer f6a5cbe8 */     'clean_markup' => array(
   /* footer f6a5cbe8 */       'pane_wrapper' => 'div',
   /* footer f6a5cbe8 */       'additional_pane_classes' => 'panel-pane',
   /* footer f6a5cbe8 */       'additional_pane_attributes' => '',
   /* footer f6a5cbe8 */       'enable_inner_div' => 0,
   /* footer f6a5cbe8 */       'title_wrapper' => 'h2',
   /* footer f6a5cbe8 */       'title_hide' => 0,
   /* footer f6a5cbe8 */       'content_wrapper' => 'none',
   /* footer f6a5cbe8 */     ),
   /* footer f6a5cbe8 */   ),
   /* footer f6a5cbe8 */   'style' => 'clean_element',
   /* footer f6a5cbe8 */ );
   /* footer f6a5cbe8 */ $pane->css = array();
   /* footer f6a5cbe8 */ $pane->extras = array();
   /* footer f6a5cbe8 */ $pane->position = 1;
   /* footer f6a5cbe8 */ $pane->locks = array();
   /* footer f6a5cbe8 */ $pane->uuid = 'f6a5cbe8-1c05-4870-bb00-0bc8aa697ebc';
  $display->content['new-f6a5cbe8-1c05-4870-bb00-0bc8aa697ebc'] = $pane;
  $display->panels['gn2-footer--col3--info'][1] = 'new-f6a5cbe8-1c05-4870-bb00-0bc8aa697ebc';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $mini->display = $display;
  $export['footer'] = $mini;

   /* group_admin_menu */ $mini = new stdClass();
   /* group_admin_menu */ $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
   /* group_admin_menu */ $mini->api_version = 1;
   /* group_admin_menu */ $mini->name = 'group_admin_menu';
   /* group_admin_menu */ $mini->category = '';
   /* group_admin_menu */ $mini->admin_title = 'Group Admin menu';
   /* group_admin_menu */ $mini->admin_description = 'Contains the group admin menu';
   /* group_admin_menu */ $mini->requiredcontexts = array();
   /* group_admin_menu */ $mini->contexts = array();
   /* group_admin_menu */ $mini->relationships = array();
   /* group_admin_menu 1d11b75e */ $display = new panels_display();
   /* group_admin_menu 1d11b75e */ $display->layout = 'zen_no_wrapper';
   /* group_admin_menu 1d11b75e */ $display->layout_settings = array(
   /* group_admin_menu 1d11b75e */   'main_classes' => 'group_admin_menu',
   /* group_admin_menu 1d11b75e */ );
   /* group_admin_menu 1d11b75e */ $display->panel_settings = array(
   /* group_admin_menu 1d11b75e */   'style_settings' => array(
   /* group_admin_menu 1d11b75e */     'default' => array(
   /* group_admin_menu 1d11b75e */       'region_accordion_id' => 'group_admin_menu_accordion',
   /* group_admin_menu 1d11b75e */       'active' => 'false',
   /* group_admin_menu 1d11b75e */       'collapsible' => 1,
   /* group_admin_menu 1d11b75e */       'animated' => 'swing',
   /* group_admin_menu 1d11b75e */       'autoHeight' => '0',
   /* group_admin_menu 1d11b75e */       'heightStyle' => 'content',
   /* group_admin_menu 1d11b75e */       'header' => 'h2',
   /* group_admin_menu 1d11b75e */     ),
   /* group_admin_menu 1d11b75e */     'middle' => array(
   /* group_admin_menu 1d11b75e */       'region_accordion_id' => 'group_admin_accordion',
   /* group_admin_menu 1d11b75e */       'active' => '0',
   /* group_admin_menu 1d11b75e */       'collapsible' => 1,
   /* group_admin_menu 1d11b75e */       'animated' => 'none',
   /* group_admin_menu 1d11b75e */       'autoHeight' => '0',
   /* group_admin_menu 1d11b75e */       'heightStyle' => 'content',
   /* group_admin_menu 1d11b75e */       'header' => 'h2',
   /* group_admin_menu 1d11b75e */     ),
   /* group_admin_menu 1d11b75e */     'main' => array(
   /* group_admin_menu 1d11b75e */       'region_accordion_id' => 'group_admin_menu_accordion',
   /* group_admin_menu 1d11b75e */       'active' => '1',
   /* group_admin_menu 1d11b75e */       'collapsible' => 1,
   /* group_admin_menu 1d11b75e */       'animated' => 'none',
   /* group_admin_menu 1d11b75e */       'autoHeight' => '0',
   /* group_admin_menu 1d11b75e */       'heightStyle' => 'content',
   /* group_admin_menu 1d11b75e */       'header' => 'h2',
   /* group_admin_menu 1d11b75e */     ),
   /* group_admin_menu 1d11b75e */   ),
   /* group_admin_menu 1d11b75e */   'middle' => array(
   /* group_admin_menu 1d11b75e */     'style' => 'accordion',
   /* group_admin_menu 1d11b75e */   ),
   /* group_admin_menu 1d11b75e */   'main' => array(
   /* group_admin_menu 1d11b75e */     'style' => 'accordion',
   /* group_admin_menu 1d11b75e */   ),
   /* group_admin_menu 1d11b75e */   'style' => 'accordion',
   /* group_admin_menu 1d11b75e */ );
   /* group_admin_menu 1d11b75e */ $display->cache = array();
   /* group_admin_menu 1d11b75e */ $display->title = 'Administer this group';
   /* group_admin_menu 1d11b75e */ $display->uuid = '1d11b75e-4628-4bae-8365-1fa80a05b754';
   /* group_admin_menu 1d11b75e */ $display->storage_type = 'panels_mini';
   /* group_admin_menu 1d11b75e */ $display->storage_id = 'group_admin_menu';
  $display->content = array();
  $display->panels = array();
   /* group_admin_menu 20dc736d */ $pane = new stdClass();
   /* group_admin_menu 20dc736d */ $pane->pid = 'new-20dc736d-ec93-4007-9d57-673b210e9bad';
   /* group_admin_menu 20dc736d */ $pane->panel = 'main';
   /* group_admin_menu 20dc736d */ $pane->type = 'block';
   /* group_admin_menu 20dc736d */ $pane->subtype = 'menu-menu-group';
   /* group_admin_menu 20dc736d */ $pane->shown = TRUE;
   /* group_admin_menu 20dc736d */ $pane->access = array();
   /* group_admin_menu 20dc736d */ $pane->configuration = array(
   /* group_admin_menu 20dc736d */   'override_title' => 0,
   /* group_admin_menu 20dc736d */   'override_title_text' => '',
   /* group_admin_menu 20dc736d */   'override_title_heading' => 'h2',
   /* group_admin_menu 20dc736d */ );
   /* group_admin_menu 20dc736d */ $pane->cache = array();
   /* group_admin_menu 20dc736d */ $pane->style = array(
   /* group_admin_menu 20dc736d */   'settings' => array(
   /* group_admin_menu 20dc736d */     'pane_collapsed' => 1,
   /* group_admin_menu 20dc736d */   ),
   /* group_admin_menu 20dc736d */   'style' => 'accordion',
   /* group_admin_menu 20dc736d */ );
   /* group_admin_menu 20dc736d */ $pane->css = array();
   /* group_admin_menu 20dc736d */ $pane->extras = array();
   /* group_admin_menu 20dc736d */ $pane->position = 0;
   /* group_admin_menu 20dc736d */ $pane->locks = array();
   /* group_admin_menu 20dc736d */ $pane->uuid = '20dc736d-ec93-4007-9d57-673b210e9bad';
  $display->content['new-20dc736d-ec93-4007-9d57-673b210e9bad'] = $pane;
  $display->panels['main'][0] = 'new-20dc736d-ec93-4007-9d57-673b210e9bad';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $mini->display = $display;
  $export['group_admin_menu'] = $mini;

   /* org_home_news_from_field */ $mini = new stdClass();
   /* org_home_news_from_field */ $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
   /* org_home_news_from_field */ $mini->api_version = 1;
   /* org_home_news_from_field */ $mini->name = 'org_home_news_from_field';
   /* org_home_news_from_field */ $mini->category = '';
   /* org_home_news_from_field */ $mini->admin_title = 'Org home news from the field';
   /* org_home_news_from_field */ $mini->admin_description = '';
   /* org_home_news_from_field */ $mini->requiredcontexts = array(
   /* org_home_news_from_field */   0 => array(
   /* org_home_news_from_field */     'identifier' => 'Node',
   /* org_home_news_from_field */     'keyword' => 'node',
   /* org_home_news_from_field */     'name' => 'entity:node',
   /* org_home_news_from_field */     'entity_id' => '',
   /* org_home_news_from_field */     'id' => 1,
   /* org_home_news_from_field */   ),
   /* org_home_news_from_field */ );
   /* org_home_news_from_field */ $mini->contexts = array(
   /* org_home_news_from_field */   0 => array(
   /* org_home_news_from_field */     'identifier' => 'String',
   /* org_home_news_from_field */     'keyword' => 'string',
   /* org_home_news_from_field */     'name' => 'string',
   /* org_home_news_from_field */     'string' => 'Tab Title',
   /* org_home_news_from_field */     'id' => 1,
   /* org_home_news_from_field */   ),
   /* org_home_news_from_field */ );
   /* org_home_news_from_field */ $mini->relationships = array();
   /* org_home_news_from_field ae19ff27 */ $display = new panels_display();
   /* org_home_news_from_field ae19ff27 */ $display->layout = 'onecol';
   /* org_home_news_from_field ae19ff27 */ $display->layout_settings = array();
   /* org_home_news_from_field ae19ff27 */ $display->panel_settings = array(
   /* org_home_news_from_field ae19ff27 */   'style_settings' => array(
   /* org_home_news_from_field ae19ff27 */     'default' => NULL,
   /* org_home_news_from_field ae19ff27 */     'middle' => NULL,
   /* org_home_news_from_field ae19ff27 */   ),
   /* org_home_news_from_field ae19ff27 */   'middle' => array(
   /* org_home_news_from_field ae19ff27 */     'style' => '-1',
   /* org_home_news_from_field ae19ff27 */   ),
   /* org_home_news_from_field ae19ff27 */ );
   /* org_home_news_from_field ae19ff27 */ $display->cache = array();
   /* org_home_news_from_field ae19ff27 */ $display->title = 'Some Dumb Title';
   /* org_home_news_from_field ae19ff27 */ $display->uuid = 'ae19ff27-65e3-406b-b535-9292d648c2e4';
   /* org_home_news_from_field ae19ff27 */ $display->storage_type = 'panels_mini';
   /* org_home_news_from_field ae19ff27 */ $display->storage_id = 'org_home_news_from_field';
  $display->content = array();
  $display->panels = array();
   /* org_home_news_from_field 408726d6 */ $pane = new stdClass();
   /* org_home_news_from_field 408726d6 */ $pane->pid = 'new-408726d6-8b7e-42ab-8483-4def0203152b';
   /* org_home_news_from_field 408726d6 */ $pane->panel = 'middle';
   /* org_home_news_from_field 408726d6 */ $pane->type = 'views_panes';
   /* org_home_news_from_field 408726d6 */ $pane->subtype = 'news_announcements_posts-panel_pane_1';
   /* org_home_news_from_field 408726d6 */ $pane->shown = TRUE;
   /* org_home_news_from_field 408726d6 */ $pane->access = array();
   /* org_home_news_from_field 408726d6 */ $pane->configuration = array(
   /* org_home_news_from_field 408726d6 */   'arguments' => array(
   /* org_home_news_from_field 408726d6 */     'type' => 'news',
   /* org_home_news_from_field 408726d6 */   ),
   /* org_home_news_from_field 408726d6 */   'context' => array(
   /* org_home_news_from_field 408726d6 */     1 => 'requiredcontext_entity:node_1',
   /* org_home_news_from_field 408726d6 */   ),
   /* org_home_news_from_field 408726d6 */ );
   /* org_home_news_from_field 408726d6 */ $pane->cache = array();
   /* org_home_news_from_field 408726d6 */ $pane->style = array(
   /* org_home_news_from_field 408726d6 */   'settings' => NULL,
   /* org_home_news_from_field 408726d6 */ );
   /* org_home_news_from_field 408726d6 */ $pane->css = array(
   /* org_home_news_from_field 408726d6 */   'css_id' => '',
   /* org_home_news_from_field 408726d6 */   'css_class' => 'teasers__two-column',
   /* org_home_news_from_field 408726d6 */ );
   /* org_home_news_from_field 408726d6 */ $pane->extras = array();
   /* org_home_news_from_field 408726d6 */ $pane->position = 0;
   /* org_home_news_from_field 408726d6 */ $pane->locks = array();
   /* org_home_news_from_field 408726d6 */ $pane->uuid = '408726d6-8b7e-42ab-8483-4def0203152b';
  $display->content['new-408726d6-8b7e-42ab-8483-4def0203152b'] = $pane;
  $display->panels['middle'][0] = 'new-408726d6-8b7e-42ab-8483-4def0203152b';
   /* org_home_news_from_field b89a91f3 */ $pane = new stdClass();
   /* org_home_news_from_field b89a91f3 */ $pane->pid = 'new-b89a91f3-2233-4bf0-9b8e-6fa7c2640c18';
   /* org_home_news_from_field b89a91f3 */ $pane->panel = 'middle';
   /* org_home_news_from_field b89a91f3 */ $pane->type = 'custom';
   /* org_home_news_from_field b89a91f3 */ $pane->subtype = 'custom';
   /* org_home_news_from_field b89a91f3 */ $pane->shown = TRUE;
   /* org_home_news_from_field b89a91f3 */ $pane->access = array();
   /* org_home_news_from_field b89a91f3 */ $pane->configuration = array(
   /* org_home_news_from_field b89a91f3 */   'admin_title' => 'Link: see all news',
   /* org_home_news_from_field b89a91f3 */   'title' => '',
   /* org_home_news_from_field b89a91f3 */   'body' => '<a href="#">See all news from the field</a>',
   /* org_home_news_from_field b89a91f3 */   'format' => 'full_html',
   /* org_home_news_from_field b89a91f3 */   'substitute' => 1,
   /* org_home_news_from_field b89a91f3 */ );
   /* org_home_news_from_field b89a91f3 */ $pane->cache = array();
   /* org_home_news_from_field b89a91f3 */ $pane->style = array(
   /* org_home_news_from_field b89a91f3 */   'settings' => NULL,
   /* org_home_news_from_field b89a91f3 */ );
   /* org_home_news_from_field b89a91f3 */ $pane->css = array(
   /* org_home_news_from_field b89a91f3 */   'css_id' => '',
   /* org_home_news_from_field b89a91f3 */   'css_class' => 'link-all-teasers',
   /* org_home_news_from_field b89a91f3 */ );
   /* org_home_news_from_field b89a91f3 */ $pane->extras = array();
   /* org_home_news_from_field b89a91f3 */ $pane->position = 1;
   /* org_home_news_from_field b89a91f3 */ $pane->locks = array();
   /* org_home_news_from_field b89a91f3 */ $pane->uuid = 'b89a91f3-2233-4bf0-9b8e-6fa7c2640c18';
  $display->content['new-b89a91f3-2233-4bf0-9b8e-6fa7c2640c18'] = $pane;
  $display->panels['middle'][1] = 'new-b89a91f3-2233-4bf0-9b8e-6fa7c2640c18';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-408726d6-8b7e-42ab-8483-4def0203152b';
  $mini->display = $display;
  $export['org_home_news_from_field'] = $mini;

   /* org_home_news_teasers */ $mini = new stdClass();
   /* org_home_news_teasers */ $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
   /* org_home_news_teasers */ $mini->api_version = 1;
   /* org_home_news_teasers */ $mini->name = 'org_home_news_teasers';
   /* org_home_news_teasers */ $mini->category = '';
   /* org_home_news_teasers */ $mini->admin_title = 'Org home news teasers';
   /* org_home_news_teasers */ $mini->admin_description = '';
   /* org_home_news_teasers */ $mini->requiredcontexts = array(
   /* org_home_news_teasers */   0 => array(
   /* org_home_news_teasers */     'identifier' => 'Node',
   /* org_home_news_teasers */     'keyword' => 'node',
   /* org_home_news_teasers */     'name' => 'entity:node',
   /* org_home_news_teasers */     'entity_id' => '',
   /* org_home_news_teasers */     'id' => 1,
   /* org_home_news_teasers */   ),
   /* org_home_news_teasers */ );
   /* org_home_news_teasers */ $mini->contexts = array(
   /* org_home_news_teasers */   0 => array(
   /* org_home_news_teasers */     'identifier' => 'String',
   /* org_home_news_teasers */     'keyword' => 'string',
   /* org_home_news_teasers */     'name' => 'string',
   /* org_home_news_teasers */     'string' => 'Tab Title',
   /* org_home_news_teasers */     'id' => 1,
   /* org_home_news_teasers */   ),
   /* org_home_news_teasers */ );
   /* org_home_news_teasers */ $mini->relationships = array();
   /* org_home_news_teasers ae19ff27 */ $display = new panels_display();
   /* org_home_news_teasers ae19ff27 */ $display->layout = 'gn2_1col';
   /* org_home_news_teasers ae19ff27 */ $display->layout_settings = array();
   /* org_home_news_teasers ae19ff27 */ $display->panel_settings = array(
   /* org_home_news_teasers ae19ff27 */   'style_settings' => array(
   /* org_home_news_teasers ae19ff27 */     'default' => NULL,
   /* org_home_news_teasers ae19ff27 */     'middle' => NULL,
   /* org_home_news_teasers ae19ff27 */     'contentmain' => NULL,
   /* org_home_news_teasers ae19ff27 */   ),
   /* org_home_news_teasers ae19ff27 */   'middle' => array(
   /* org_home_news_teasers ae19ff27 */     'style' => '-1',
   /* org_home_news_teasers ae19ff27 */   ),
   /* org_home_news_teasers ae19ff27 */ );
   /* org_home_news_teasers ae19ff27 */ $display->cache = array();
   /* org_home_news_teasers ae19ff27 */ $display->title = '';
   /* org_home_news_teasers ae19ff27 */ $display->uuid = 'ae19ff27-65e3-406b-b535-9292d648c2e4';
   /* org_home_news_teasers ae19ff27 */ $display->storage_type = 'panels_mini';
   /* org_home_news_teasers ae19ff27 */ $display->storage_id = 'org_home_news_teasers';
  $display->content = array();
  $display->panels = array();
   /* org_home_news_teasers 3def02f5 */ $pane = new stdClass();
   /* org_home_news_teasers 3def02f5 */ $pane->pid = 'new-3def02f5-9671-4dfc-a5cd-1046297dd5c1';
   /* org_home_news_teasers 3def02f5 */ $pane->panel = 'contentmain';
   /* org_home_news_teasers 3def02f5 */ $pane->type = 'views_panes';
   /* org_home_news_teasers 3def02f5 */ $pane->subtype = 'news_announcements_posts-panel_pane_13';
   /* org_home_news_teasers 3def02f5 */ $pane->shown = TRUE;
   /* org_home_news_teasers 3def02f5 */ $pane->access = array();
   /* org_home_news_teasers 3def02f5 */ $pane->configuration = array(
   /* org_home_news_teasers 3def02f5 */   'arguments' => array(
   /* org_home_news_teasers 3def02f5 */     'type' => '',
   /* org_home_news_teasers 3def02f5 */   ),
   /* org_home_news_teasers 3def02f5 */   'context' => array(
   /* org_home_news_teasers 3def02f5 */     0 => 'requiredcontext_entity:node_1',
   /* org_home_news_teasers 3def02f5 */   ),
   /* org_home_news_teasers 3def02f5 */ );
   /* org_home_news_teasers 3def02f5 */ $pane->cache = array();
   /* org_home_news_teasers 3def02f5 */ $pane->style = array(
   /* org_home_news_teasers 3def02f5 */   'settings' => NULL,
   /* org_home_news_teasers 3def02f5 */ );
   /* org_home_news_teasers 3def02f5 */ $pane->css = array();
   /* org_home_news_teasers 3def02f5 */ $pane->extras = array();
   /* org_home_news_teasers 3def02f5 */ $pane->position = 0;
   /* org_home_news_teasers 3def02f5 */ $pane->locks = array();
   /* org_home_news_teasers 3def02f5 */ $pane->uuid = '3def02f5-9671-4dfc-a5cd-1046297dd5c1';
  $display->content['new-3def02f5-9671-4dfc-a5cd-1046297dd5c1'] = $pane;
  $display->panels['contentmain'][0] = 'new-3def02f5-9671-4dfc-a5cd-1046297dd5c1';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $mini->display = $display;
  $export['org_home_news_teasers'] = $mini;

   /* upcoming_events_block */ $mini = new stdClass();
   /* upcoming_events_block */ $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
   /* upcoming_events_block */ $mini->api_version = 1;
   /* upcoming_events_block */ $mini->name = 'upcoming_events_block';
   /* upcoming_events_block */ $mini->category = '';
   /* upcoming_events_block */ $mini->admin_title = 'Upcoming Events Block';
   /* upcoming_events_block */ $mini->admin_description = '';
   /* upcoming_events_block */ $mini->requiredcontexts = array();
   /* upcoming_events_block */ $mini->contexts = array();
   /* upcoming_events_block */ $mini->relationships = array();
   /* upcoming_events_block 2644cd31 */ $display = new panels_display();
   /* upcoming_events_block 2644cd31 */ $display->layout = 'gn2_1col';
   /* upcoming_events_block 2644cd31 */ $display->layout_settings = array();
   /* upcoming_events_block 2644cd31 */ $display->panel_settings = array(
   /* upcoming_events_block 2644cd31 */   'style_settings' => array(
   /* upcoming_events_block 2644cd31 */     'default' => NULL,
   /* upcoming_events_block 2644cd31 */     'contentmain' => array(
   /* upcoming_events_block 2644cd31 */       'clean_markup' => array(
   /* upcoming_events_block 2644cd31 */         'region_wrapper' => 'div',
   /* upcoming_events_block 2644cd31 */         'additional_region_classes' => 'upcoming-events-block',
   /* upcoming_events_block 2644cd31 */         'additional_region_attributes' => '',
   /* upcoming_events_block 2644cd31 */         'enable_inner_div' => 0,
   /* upcoming_events_block 2644cd31 */         'pane_separators' => 0,
   /* upcoming_events_block 2644cd31 */       ),
   /* upcoming_events_block 2644cd31 */     ),
   /* upcoming_events_block 2644cd31 */   ),
   /* upcoming_events_block 2644cd31 */   'contentmain' => array(
   /* upcoming_events_block 2644cd31 */     'style' => 'clean_element',
   /* upcoming_events_block 2644cd31 */   ),
   /* upcoming_events_block 2644cd31 */ );
   /* upcoming_events_block 2644cd31 */ $display->cache = array();
   /* upcoming_events_block 2644cd31 */ $display->title = 'Upcoming Events';
   /* upcoming_events_block 2644cd31 */ $display->uuid = '2644cd31-6ea4-4db6-8bd4-315e6360736c';
   /* upcoming_events_block 2644cd31 */ $display->storage_type = 'panels_mini';
   /* upcoming_events_block 2644cd31 */ $display->storage_id = 'upcoming_events_block';
  $display->content = array();
  $display->panels = array();
   /* upcoming_events_block f088a5c8 */ $pane = new stdClass();
   /* upcoming_events_block f088a5c8 */ $pane->pid = 'new-f088a5c8-010c-406c-a0f0-0ded51e3f36b';
   /* upcoming_events_block f088a5c8 */ $pane->panel = 'contentmain';
   /* upcoming_events_block f088a5c8 */ $pane->type = 'views_panes';
   /* upcoming_events_block f088a5c8 */ $pane->subtype = 'events-panel_pane_7';
   /* upcoming_events_block f088a5c8 */ $pane->shown = TRUE;
   /* upcoming_events_block f088a5c8 */ $pane->access = array();
   /* upcoming_events_block f088a5c8 */ $pane->configuration = array();
   /* upcoming_events_block f088a5c8 */ $pane->cache = array();
   /* upcoming_events_block f088a5c8 */ $pane->style = array(
   /* upcoming_events_block f088a5c8 */   'settings' => array(
   /* upcoming_events_block f088a5c8 */     'clean_markup' => array(
   /* upcoming_events_block f088a5c8 */       'pane_wrapper' => 'div',
   /* upcoming_events_block f088a5c8 */       'additional_pane_classes' => 'sidebar-subheading block__highlighted--lightbg',
   /* upcoming_events_block f088a5c8 */       'additional_pane_attributes' => '',
   /* upcoming_events_block f088a5c8 */       'enable_inner_div' => 0,
   /* upcoming_events_block f088a5c8 */       'title_wrapper' => 'h3',
   /* upcoming_events_block f088a5c8 */       'title_hide' => 0,
   /* upcoming_events_block f088a5c8 */       'content_wrapper' => 'none',
   /* upcoming_events_block f088a5c8 */     ),
   /* upcoming_events_block f088a5c8 */   ),
   /* upcoming_events_block f088a5c8 */   'style' => 'clean_element',
   /* upcoming_events_block f088a5c8 */ );
   /* upcoming_events_block f088a5c8 */ $pane->css = array();
   /* upcoming_events_block f088a5c8 */ $pane->extras = array();
   /* upcoming_events_block f088a5c8 */ $pane->position = 0;
   /* upcoming_events_block f088a5c8 */ $pane->locks = array();
   /* upcoming_events_block f088a5c8 */ $pane->uuid = 'f088a5c8-010c-406c-a0f0-0ded51e3f36b';
  $display->content['new-f088a5c8-010c-406c-a0f0-0ded51e3f36b'] = $pane;
  $display->panels['contentmain'][0] = 'new-f088a5c8-010c-406c-a0f0-0ded51e3f36b';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $mini->display = $display;
  $export['upcoming_events_block'] = $mini;

  return $export;
}
