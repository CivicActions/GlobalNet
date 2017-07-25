<?php
/**
 * @file
 * gn2_about.panelizer.inc
 */

/**
 * Implements hook_panelizer_defaults().
 */
function gn2_about_panelizer_defaults() {
  $export = array();

   /* node:about_page:default */ $panelizer = new stdClass();
   /* node:about_page:default */ $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
   /* node:about_page:default */ $panelizer->api_version = 1;
   /* node:about_page:default */ $panelizer->title = 'Default';
   /* node:about_page:default */ $panelizer->panelizer_type = 'node';
   /* node:about_page:default */ $panelizer->panelizer_key = 'about_page';
   /* node:about_page:default */ $panelizer->access = array();
   /* node:about_page:default */ $panelizer->view_mode = 'page_manager';
   /* node:about_page:default */ $panelizer->name = 'node:about_page:default';
   /* node:about_page:default */ $panelizer->css_id = '';
   /* node:about_page:default */ $panelizer->css_class = '';
   /* node:about_page:default */ $panelizer->css = '';
   /* node:about_page:default */ $panelizer->no_blocks = FALSE;
   /* node:about_page:default */ $panelizer->title_element = 'H2';
   /* node:about_page:default */ $panelizer->link_to_entity = TRUE;
   /* node:about_page:default */ $panelizer->extra = array();
   /* node:about_page:default */ $panelizer->pipeline = 'standard';
   /* node:about_page:default */ $panelizer->contexts = array();
   /* node:about_page:default */ $panelizer->relationships = array();
   /* node:about_page:default f69cfbf8 */ $display = new panels_display();
   /* node:about_page:default f69cfbf8 */ $display->layout = 'org_layout';
   /* node:about_page:default f69cfbf8 */ $display->layout_settings = array();
   /* node:about_page:default f69cfbf8 */ $display->panel_settings = array(
   /* node:about_page:default f69cfbf8 */   'style_settings' => array(
   /* node:about_page:default f69cfbf8 */     'default' => NULL,
   /* node:about_page:default f69cfbf8 */     'main_top' => NULL,
   /* node:about_page:default f69cfbf8 */     'main_uppertabs' => NULL,
   /* node:about_page:default f69cfbf8 */     'main_activecommunities' => NULL,
   /* node:about_page:default f69cfbf8 */     'main_lowertabs' => NULL,
   /* node:about_page:default f69cfbf8 */     'sidebar_top' => NULL,
   /* node:about_page:default f69cfbf8 */     'sidebar_logo' => NULL,
   /* node:about_page:default f69cfbf8 */     'sidebar_title' => NULL,
   /* node:about_page:default f69cfbf8 */     'sidebar_orginfo' => NULL,
   /* node:about_page:default f69cfbf8 */   ),
   /* node:about_page:default f69cfbf8 */   'main_uppertabs' => array(
   /* node:about_page:default f69cfbf8 */     'style' => 'tabs',
   /* node:about_page:default f69cfbf8 */   ),
   /* node:about_page:default f69cfbf8 */ );
   /* node:about_page:default f69cfbf8 */ $display->cache = array();
   /* node:about_page:default f69cfbf8 */ $display->title = '%node:title';
   /* node:about_page:default f69cfbf8 */ $display->uuid = 'f69cfbf8-340e-4de2-822c-e1b97ef53f5c';
   /* node:about_page:default f69cfbf8 */ $display->storage_type = 'panelizer_default';
   /* node:about_page:default f69cfbf8 */ $display->storage_id = 'node:about_page:default';
  $display->content = array();
  $display->panels = array();
   /* node:about_page:default 45c64d71 */ $pane = new stdClass();
   /* node:about_page:default 45c64d71 */ $pane->pid = 'new-45c64d71-a0b9-4e8b-a4be-18bef280ac7e';
   /* node:about_page:default 45c64d71 */ $pane->panel = 'main_top';
   /* node:about_page:default 45c64d71 */ $pane->type = 'entity_field';
   /* node:about_page:default 45c64d71 */ $pane->subtype = 'node:field_main_image';
   /* node:about_page:default 45c64d71 */ $pane->shown = TRUE;
   /* node:about_page:default 45c64d71 */ $pane->access = array();
   /* node:about_page:default 45c64d71 */ $pane->configuration = array(
   /* node:about_page:default 45c64d71 */   'label' => 'hidden',
   /* node:about_page:default 45c64d71 */   'formatter' => 'image',
   /* node:about_page:default 45c64d71 */   'delta_limit' => 0,
   /* node:about_page:default 45c64d71 */   'delta_offset' => '0',
   /* node:about_page:default 45c64d71 */   'delta_reversed' => FALSE,
   /* node:about_page:default 45c64d71 */   'formatter_settings' => array(
   /* node:about_page:default 45c64d71 */     'field_formatter_class' => '',
   /* node:about_page:default 45c64d71 */     'image_style' => 'news_slideshow_image',
   /* node:about_page:default 45c64d71 */     'image_link' => '',
   /* node:about_page:default 45c64d71 */   ),
   /* node:about_page:default 45c64d71 */   'context' => 'panelizer',
   /* node:about_page:default 45c64d71 */   'override_title' => 0,
   /* node:about_page:default 45c64d71 */   'override_title_text' => '',
   /* node:about_page:default 45c64d71 */   'override_title_heading' => 'h2',
   /* node:about_page:default 45c64d71 */ );
   /* node:about_page:default 45c64d71 */ $pane->cache = array();
   /* node:about_page:default 45c64d71 */ $pane->style = array(
   /* node:about_page:default 45c64d71 */   'settings' => NULL,
   /* node:about_page:default 45c64d71 */ );
   /* node:about_page:default 45c64d71 */ $pane->css = array();
   /* node:about_page:default 45c64d71 */ $pane->extras = array();
   /* node:about_page:default 45c64d71 */ $pane->position = 0;
   /* node:about_page:default 45c64d71 */ $pane->locks = array();
   /* node:about_page:default 45c64d71 */ $pane->uuid = '45c64d71-a0b9-4e8b-a4be-18bef280ac7e';
  $display->content['new-45c64d71-a0b9-4e8b-a4be-18bef280ac7e'] = $pane;
  $display->panels['main_top'][0] = 'new-45c64d71-a0b9-4e8b-a4be-18bef280ac7e';
   /* node:about_page:default 9542f5fa */ $pane = new stdClass();
   /* node:about_page:default 9542f5fa */ $pane->pid = 'new-9542f5fa-f939-4d66-a5bb-6d5e636d363f';
   /* node:about_page:default 9542f5fa */ $pane->panel = 'main_top';
   /* node:about_page:default 9542f5fa */ $pane->type = 'entity_field';
   /* node:about_page:default 9542f5fa */ $pane->subtype = 'node:body';
   /* node:about_page:default 9542f5fa */ $pane->shown = TRUE;
   /* node:about_page:default 9542f5fa */ $pane->access = array();
   /* node:about_page:default 9542f5fa */ $pane->configuration = array(
   /* node:about_page:default 9542f5fa */   'label' => 'hidden',
   /* node:about_page:default 9542f5fa */   'formatter' => 'text_default',
   /* node:about_page:default 9542f5fa */   'delta_limit' => 0,
   /* node:about_page:default 9542f5fa */   'delta_offset' => '0',
   /* node:about_page:default 9542f5fa */   'delta_reversed' => FALSE,
   /* node:about_page:default 9542f5fa */   'formatter_settings' => array(
   /* node:about_page:default 9542f5fa */     'field_formatter_class' => '',
   /* node:about_page:default 9542f5fa */   ),
   /* node:about_page:default 9542f5fa */   'context' => 'panelizer',
   /* node:about_page:default 9542f5fa */   'override_title' => 0,
   /* node:about_page:default 9542f5fa */   'override_title_text' => '',
   /* node:about_page:default 9542f5fa */   'override_title_heading' => 'h2',
   /* node:about_page:default 9542f5fa */ );
   /* node:about_page:default 9542f5fa */ $pane->cache = array();
   /* node:about_page:default 9542f5fa */ $pane->style = array(
   /* node:about_page:default 9542f5fa */   'settings' => NULL,
   /* node:about_page:default 9542f5fa */ );
   /* node:about_page:default 9542f5fa */ $pane->css = array();
   /* node:about_page:default 9542f5fa */ $pane->extras = array();
   /* node:about_page:default 9542f5fa */ $pane->position = 1;
   /* node:about_page:default 9542f5fa */ $pane->locks = array();
   /* node:about_page:default 9542f5fa */ $pane->uuid = '9542f5fa-f939-4d66-a5bb-6d5e636d363f';
  $display->content['new-9542f5fa-f939-4d66-a5bb-6d5e636d363f'] = $pane;
  $display->panels['main_top'][1] = 'new-9542f5fa-f939-4d66-a5bb-6d5e636d363f';
   /* node:about_page:default 6a2435b7 */ $pane = new stdClass();
   /* node:about_page:default 6a2435b7 */ $pane->pid = 'new-6a2435b7-86f7-44fe-a464-164c83d214e9';
   /* node:about_page:default 6a2435b7 */ $pane->panel = 'main_uppertabs';
   /* node:about_page:default 6a2435b7 */ $pane->type = 'entity_field';
   /* node:about_page:default 6a2435b7 */ $pane->subtype = 'node:field_mission';
   /* node:about_page:default 6a2435b7 */ $pane->shown = TRUE;
   /* node:about_page:default 6a2435b7 */ $pane->access = array();
   /* node:about_page:default 6a2435b7 */ $pane->configuration = array(
   /* node:about_page:default 6a2435b7 */   'label' => 'title',
   /* node:about_page:default 6a2435b7 */   'formatter' => 'text_default',
   /* node:about_page:default 6a2435b7 */   'delta_limit' => 0,
   /* node:about_page:default 6a2435b7 */   'delta_offset' => '0',
   /* node:about_page:default 6a2435b7 */   'delta_reversed' => FALSE,
   /* node:about_page:default 6a2435b7 */   'formatter_settings' => array(),
   /* node:about_page:default 6a2435b7 */   'context' => 'panelizer',
   /* node:about_page:default 6a2435b7 */   'override_title' => 0,
   /* node:about_page:default 6a2435b7 */   'override_title_text' => '',
   /* node:about_page:default 6a2435b7 */   'override_title_heading' => 'h2',
   /* node:about_page:default 6a2435b7 */ );
   /* node:about_page:default 6a2435b7 */ $pane->cache = array();
   /* node:about_page:default 6a2435b7 */ $pane->style = array(
   /* node:about_page:default 6a2435b7 */   'settings' => NULL,
   /* node:about_page:default 6a2435b7 */ );
   /* node:about_page:default 6a2435b7 */ $pane->css = array();
   /* node:about_page:default 6a2435b7 */ $pane->extras = array();
   /* node:about_page:default 6a2435b7 */ $pane->position = 0;
   /* node:about_page:default 6a2435b7 */ $pane->locks = array();
   /* node:about_page:default 6a2435b7 */ $pane->uuid = '6a2435b7-86f7-44fe-a464-164c83d214e9';
  $display->content['new-6a2435b7-86f7-44fe-a464-164c83d214e9'] = $pane;
  $display->panels['main_uppertabs'][0] = 'new-6a2435b7-86f7-44fe-a464-164c83d214e9';
   /* node:about_page:default 44defa8c */ $pane = new stdClass();
   /* node:about_page:default 44defa8c */ $pane->pid = 'new-44defa8c-4ec8-4bdc-b6a3-0028891e981b';
   /* node:about_page:default 44defa8c */ $pane->panel = 'main_uppertabs';
   /* node:about_page:default 44defa8c */ $pane->type = 'entity_field';
   /* node:about_page:default 44defa8c */ $pane->subtype = 'node:field_leadership';
   /* node:about_page:default 44defa8c */ $pane->shown = TRUE;
   /* node:about_page:default 44defa8c */ $pane->access = array();
   /* node:about_page:default 44defa8c */ $pane->configuration = array(
   /* node:about_page:default 44defa8c */   'label' => 'title',
   /* node:about_page:default 44defa8c */   'formatter' => 'text_default',
   /* node:about_page:default 44defa8c */   'delta_limit' => 0,
   /* node:about_page:default 44defa8c */   'delta_offset' => '0',
   /* node:about_page:default 44defa8c */   'delta_reversed' => FALSE,
   /* node:about_page:default 44defa8c */   'formatter_settings' => array(),
   /* node:about_page:default 44defa8c */   'context' => 'panelizer',
   /* node:about_page:default 44defa8c */   'override_title' => 0,
   /* node:about_page:default 44defa8c */   'override_title_text' => '',
   /* node:about_page:default 44defa8c */   'override_title_heading' => 'h2',
   /* node:about_page:default 44defa8c */ );
   /* node:about_page:default 44defa8c */ $pane->cache = array();
   /* node:about_page:default 44defa8c */ $pane->style = array(
   /* node:about_page:default 44defa8c */   'settings' => NULL,
   /* node:about_page:default 44defa8c */ );
   /* node:about_page:default 44defa8c */ $pane->css = array();
   /* node:about_page:default 44defa8c */ $pane->extras = array();
   /* node:about_page:default 44defa8c */ $pane->position = 1;
   /* node:about_page:default 44defa8c */ $pane->locks = array();
   /* node:about_page:default 44defa8c */ $pane->uuid = '44defa8c-4ec8-4bdc-b6a3-0028891e981b';
  $display->content['new-44defa8c-4ec8-4bdc-b6a3-0028891e981b'] = $pane;
  $display->panels['main_uppertabs'][1] = 'new-44defa8c-4ec8-4bdc-b6a3-0028891e981b';
   /* node:about_page:default 716a032e */ $pane = new stdClass();
   /* node:about_page:default 716a032e */ $pane->pid = 'new-716a032e-8af8-4df1-9330-0c28b77d0ffe';
   /* node:about_page:default 716a032e */ $pane->panel = 'main_uppertabs';
   /* node:about_page:default 716a032e */ $pane->type = 'entity_field';
   /* node:about_page:default 716a032e */ $pane->subtype = 'node:field_administration';
   /* node:about_page:default 716a032e */ $pane->shown = TRUE;
   /* node:about_page:default 716a032e */ $pane->access = array();
   /* node:about_page:default 716a032e */ $pane->configuration = array(
   /* node:about_page:default 716a032e */   'label' => 'title',
   /* node:about_page:default 716a032e */   'formatter' => 'text_default',
   /* node:about_page:default 716a032e */   'delta_limit' => 0,
   /* node:about_page:default 716a032e */   'delta_offset' => '0',
   /* node:about_page:default 716a032e */   'delta_reversed' => FALSE,
   /* node:about_page:default 716a032e */   'formatter_settings' => array(),
   /* node:about_page:default 716a032e */   'context' => 'panelizer',
   /* node:about_page:default 716a032e */   'override_title' => 0,
   /* node:about_page:default 716a032e */   'override_title_text' => '',
   /* node:about_page:default 716a032e */   'override_title_heading' => 'h2',
   /* node:about_page:default 716a032e */ );
   /* node:about_page:default 716a032e */ $pane->cache = array();
   /* node:about_page:default 716a032e */ $pane->style = array(
   /* node:about_page:default 716a032e */   'settings' => NULL,
   /* node:about_page:default 716a032e */ );
   /* node:about_page:default 716a032e */ $pane->css = array();
   /* node:about_page:default 716a032e */ $pane->extras = array();
   /* node:about_page:default 716a032e */ $pane->position = 2;
   /* node:about_page:default 716a032e */ $pane->locks = array();
   /* node:about_page:default 716a032e */ $pane->uuid = '716a032e-8af8-4df1-9330-0c28b77d0ffe';
  $display->content['new-716a032e-8af8-4df1-9330-0c28b77d0ffe'] = $pane;
  $display->panels['main_uppertabs'][2] = 'new-716a032e-8af8-4df1-9330-0c28b77d0ffe';
   /* node:about_page:default 28d9be91 */ $pane = new stdClass();
   /* node:about_page:default 28d9be91 */ $pane->pid = 'new-28d9be91-9da6-4dec-b28c-eb49514a00c7';
   /* node:about_page:default 28d9be91 */ $pane->panel = 'main_uppertabs';
   /* node:about_page:default 28d9be91 */ $pane->type = 'entity_field';
   /* node:about_page:default 28d9be91 */ $pane->subtype = 'node:field_employment';
   /* node:about_page:default 28d9be91 */ $pane->shown = TRUE;
   /* node:about_page:default 28d9be91 */ $pane->access = array();
   /* node:about_page:default 28d9be91 */ $pane->configuration = array(
   /* node:about_page:default 28d9be91 */   'label' => 'title',
   /* node:about_page:default 28d9be91 */   'formatter' => 'text_default',
   /* node:about_page:default 28d9be91 */   'delta_limit' => 0,
   /* node:about_page:default 28d9be91 */   'delta_offset' => '0',
   /* node:about_page:default 28d9be91 */   'delta_reversed' => FALSE,
   /* node:about_page:default 28d9be91 */   'formatter_settings' => array(),
   /* node:about_page:default 28d9be91 */   'context' => 'panelizer',
   /* node:about_page:default 28d9be91 */   'override_title' => 0,
   /* node:about_page:default 28d9be91 */   'override_title_text' => '',
   /* node:about_page:default 28d9be91 */   'override_title_heading' => 'h2',
   /* node:about_page:default 28d9be91 */ );
   /* node:about_page:default 28d9be91 */ $pane->cache = array();
   /* node:about_page:default 28d9be91 */ $pane->style = array(
   /* node:about_page:default 28d9be91 */   'settings' => NULL,
   /* node:about_page:default 28d9be91 */ );
   /* node:about_page:default 28d9be91 */ $pane->css = array();
   /* node:about_page:default 28d9be91 */ $pane->extras = array();
   /* node:about_page:default 28d9be91 */ $pane->position = 3;
   /* node:about_page:default 28d9be91 */ $pane->locks = array();
   /* node:about_page:default 28d9be91 */ $pane->uuid = '28d9be91-9da6-4dec-b28c-eb49514a00c7';
  $display->content['new-28d9be91-9da6-4dec-b28c-eb49514a00c7'] = $pane;
  $display->panels['main_uppertabs'][3] = 'new-28d9be91-9da6-4dec-b28c-eb49514a00c7';
   /* node:about_page:default 72dfe079 */ $pane = new stdClass();
   /* node:about_page:default 72dfe079 */ $pane->pid = 'new-72dfe079-ac39-4d56-b115-0aebeebc448b';
   /* node:about_page:default 72dfe079 */ $pane->panel = 'main_uppertabs';
   /* node:about_page:default 72dfe079 */ $pane->type = 'entity_field';
   /* node:about_page:default 72dfe079 */ $pane->subtype = 'node:field_visitor_information';
   /* node:about_page:default 72dfe079 */ $pane->shown = TRUE;
   /* node:about_page:default 72dfe079 */ $pane->access = array();
   /* node:about_page:default 72dfe079 */ $pane->configuration = array(
   /* node:about_page:default 72dfe079 */   'label' => 'title',
   /* node:about_page:default 72dfe079 */   'formatter' => 'text_default',
   /* node:about_page:default 72dfe079 */   'delta_limit' => 0,
   /* node:about_page:default 72dfe079 */   'delta_offset' => '0',
   /* node:about_page:default 72dfe079 */   'delta_reversed' => FALSE,
   /* node:about_page:default 72dfe079 */   'formatter_settings' => array(),
   /* node:about_page:default 72dfe079 */   'context' => 'panelizer',
   /* node:about_page:default 72dfe079 */   'override_title' => 0,
   /* node:about_page:default 72dfe079 */   'override_title_text' => '',
   /* node:about_page:default 72dfe079 */   'override_title_heading' => 'h2',
   /* node:about_page:default 72dfe079 */ );
   /* node:about_page:default 72dfe079 */ $pane->cache = array();
   /* node:about_page:default 72dfe079 */ $pane->style = array(
   /* node:about_page:default 72dfe079 */   'settings' => NULL,
   /* node:about_page:default 72dfe079 */ );
   /* node:about_page:default 72dfe079 */ $pane->css = array();
   /* node:about_page:default 72dfe079 */ $pane->extras = array();
   /* node:about_page:default 72dfe079 */ $pane->position = 4;
   /* node:about_page:default 72dfe079 */ $pane->locks = array();
   /* node:about_page:default 72dfe079 */ $pane->uuid = '72dfe079-ac39-4d56-b115-0aebeebc448b';
  $display->content['new-72dfe079-ac39-4d56-b115-0aebeebc448b'] = $pane;
  $display->panels['main_uppertabs'][4] = 'new-72dfe079-ac39-4d56-b115-0aebeebc448b';
   /* node:about_page:default a5a97def */ $pane = new stdClass();
   /* node:about_page:default a5a97def */ $pane->pid = 'new-a5a97def-f671-47f2-8ee7-52ca7e272f36';
   /* node:about_page:default a5a97def */ $pane->panel = 'sidebar_top';
   /* node:about_page:default a5a97def */ $pane->type = 'entity_field';
   /* node:about_page:default a5a97def */ $pane->subtype = 'node:field_contact_information';
   /* node:about_page:default a5a97def */ $pane->shown = TRUE;
   /* node:about_page:default a5a97def */ $pane->access = array();
   /* node:about_page:default a5a97def */ $pane->configuration = array(
   /* node:about_page:default a5a97def */   'label' => 'hidden',
   /* node:about_page:default a5a97def */   'formatter' => 'text_default',
   /* node:about_page:default a5a97def */   'delta_limit' => 0,
   /* node:about_page:default a5a97def */   'delta_offset' => '0',
   /* node:about_page:default a5a97def */   'delta_reversed' => FALSE,
   /* node:about_page:default a5a97def */   'formatter_settings' => array(
   /* node:about_page:default a5a97def */     'field_formatter_class' => '',
   /* node:about_page:default a5a97def */   ),
   /* node:about_page:default a5a97def */   'context' => 'panelizer',
   /* node:about_page:default a5a97def */   'override_title' => 1,
   /* node:about_page:default a5a97def */   'override_title_text' => 'Contact %node:field-org-short-title',
   /* node:about_page:default a5a97def */   'override_title_heading' => 'h3',
   /* node:about_page:default a5a97def */ );
   /* node:about_page:default a5a97def */ $pane->cache = array();
   /* node:about_page:default a5a97def */ $pane->style = array(
   /* node:about_page:default a5a97def */   'settings' => array(
   /* node:about_page:default a5a97def */     'clean_markup' => array(
   /* node:about_page:default a5a97def */       'pane_wrapper' => 'div',
   /* node:about_page:default a5a97def */       'additional_pane_classes' => 'panel-pane',
   /* node:about_page:default a5a97def */       'additional_pane_attributes' => '',
   /* node:about_page:default a5a97def */       'enable_inner_div' => 0,
   /* node:about_page:default a5a97def */       'title_wrapper' => 'h3',
   /* node:about_page:default a5a97def */       'title_hide' => 0,
   /* node:about_page:default a5a97def */       'content_wrapper' => 'div',
   /* node:about_page:default a5a97def */     ),
   /* node:about_page:default a5a97def */   ),
   /* node:about_page:default a5a97def */   'style' => 'clean_element',
   /* node:about_page:default a5a97def */ );
   /* node:about_page:default a5a97def */ $pane->css = array(
   /* node:about_page:default a5a97def */   'css_id' => '',
   /* node:about_page:default a5a97def */   'css_class' => 'sidebar-subheading',
   /* node:about_page:default a5a97def */ );
   /* node:about_page:default a5a97def */ $pane->extras = array();
   /* node:about_page:default a5a97def */ $pane->position = 0;
   /* node:about_page:default a5a97def */ $pane->locks = array();
   /* node:about_page:default a5a97def */ $pane->uuid = 'a5a97def-f671-47f2-8ee7-52ca7e272f36';
  $display->content['new-a5a97def-f671-47f2-8ee7-52ca7e272f36'] = $pane;
  $display->panels['sidebar_top'][0] = 'new-a5a97def-f671-47f2-8ee7-52ca7e272f36';
   /* node:about_page:default 108d56bf */ $pane = new stdClass();
   /* node:about_page:default 108d56bf */ $pane->pid = 'new-108d56bf-1d01-4155-898c-4eb92ff61b20';
   /* node:about_page:default 108d56bf */ $pane->panel = 'sidebar_top';
   /* node:about_page:default 108d56bf */ $pane->type = 'about_social_media';
   /* node:about_page:default 108d56bf */ $pane->subtype = 'about_social_media';
   /* node:about_page:default 108d56bf */ $pane->shown = TRUE;
   /* node:about_page:default 108d56bf */ $pane->access = array();
   /* node:about_page:default 108d56bf */ $pane->configuration = array(
   /* node:about_page:default 108d56bf */   'override_title' => 0,
   /* node:about_page:default 108d56bf */   'override_title_text' => '',
   /* node:about_page:default 108d56bf */   'override_title_heading' => 'h2',
   /* node:about_page:default 108d56bf */ );
   /* node:about_page:default 108d56bf */ $pane->cache = array();
   /* node:about_page:default 108d56bf */ $pane->style = array(
   /* node:about_page:default 108d56bf */   'settings' => array(
   /* node:about_page:default 108d56bf */     'clean_markup' => array(
   /* node:about_page:default 108d56bf */       'pane_wrapper' => 'div',
   /* node:about_page:default 108d56bf */       'additional_pane_classes' => 'panel-pane',
   /* node:about_page:default 108d56bf */       'additional_pane_attributes' => '',
   /* node:about_page:default 108d56bf */       'enable_inner_div' => 0,
   /* node:about_page:default 108d56bf */       'title_wrapper' => 'h3',
   /* node:about_page:default 108d56bf */       'title_hide' => 0,
   /* node:about_page:default 108d56bf */       'content_wrapper' => 'div',
   /* node:about_page:default 108d56bf */     ),
   /* node:about_page:default 108d56bf */   ),
   /* node:about_page:default 108d56bf */   'style' => 'clean_element',
   /* node:about_page:default 108d56bf */ );
   /* node:about_page:default 108d56bf */ $pane->css = array(
   /* node:about_page:default 108d56bf */   'css_id' => '',
   /* node:about_page:default 108d56bf */   'css_class' => 'sidebar-subheading panel-pane',
   /* node:about_page:default 108d56bf */ );
   /* node:about_page:default 108d56bf */ $pane->extras = array();
   /* node:about_page:default 108d56bf */ $pane->position = 1;
   /* node:about_page:default 108d56bf */ $pane->locks = array();
   /* node:about_page:default 108d56bf */ $pane->uuid = '108d56bf-1d01-4155-898c-4eb92ff61b20';
  $display->content['new-108d56bf-1d01-4155-898c-4eb92ff61b20'] = $pane;
  $display->panels['sidebar_top'][1] = 'new-108d56bf-1d01-4155-898c-4eb92ff61b20';
   /* node:about_page:default 7a86775e */ $pane = new stdClass();
   /* node:about_page:default 7a86775e */ $pane->pid = 'new-7a86775e-0d68-432d-9e07-3d1a84014acb';
   /* node:about_page:default 7a86775e */ $pane->panel = 'sidebar_top';
   /* node:about_page:default 7a86775e */ $pane->type = 'entity_field';
   /* node:about_page:default 7a86775e */ $pane->subtype = 'node:field_call_to_action';
   /* node:about_page:default 7a86775e */ $pane->shown = TRUE;
   /* node:about_page:default 7a86775e */ $pane->access = array();
   /* node:about_page:default 7a86775e */ $pane->configuration = array(
   /* node:about_page:default 7a86775e */   'label' => 'hidden',
   /* node:about_page:default 7a86775e */   'formatter' => 'text_default',
   /* node:about_page:default 7a86775e */   'delta_limit' => 0,
   /* node:about_page:default 7a86775e */   'delta_offset' => '0',
   /* node:about_page:default 7a86775e */   'delta_reversed' => FALSE,
   /* node:about_page:default 7a86775e */   'formatter_settings' => array(
   /* node:about_page:default 7a86775e */     'field_formatter_class' => '',
   /* node:about_page:default 7a86775e */   ),
   /* node:about_page:default 7a86775e */   'context' => 'panelizer',
   /* node:about_page:default 7a86775e */   'override_title' => 0,
   /* node:about_page:default 7a86775e */   'override_title_text' => '',
   /* node:about_page:default 7a86775e */   'override_title_heading' => 'h2',
   /* node:about_page:default 7a86775e */ );
   /* node:about_page:default 7a86775e */ $pane->cache = array();
   /* node:about_page:default 7a86775e */ $pane->style = array(
   /* node:about_page:default 7a86775e */   'settings' => array(
   /* node:about_page:default 7a86775e */     'clean_markup' => array(
   /* node:about_page:default 7a86775e */       'pane_wrapper' => 'div',
   /* node:about_page:default 7a86775e */       'additional_pane_classes' => 'panel-pane',
   /* node:about_page:default 7a86775e */       'additional_pane_attributes' => '',
   /* node:about_page:default 7a86775e */       'enable_inner_div' => 0,
   /* node:about_page:default 7a86775e */       'title_wrapper' => 'h3',
   /* node:about_page:default 7a86775e */       'title_hide' => 0,
   /* node:about_page:default 7a86775e */       'content_wrapper' => 'div',
   /* node:about_page:default 7a86775e */     ),
   /* node:about_page:default 7a86775e */   ),
   /* node:about_page:default 7a86775e */   'style' => 'clean_element',
   /* node:about_page:default 7a86775e */ );
   /* node:about_page:default 7a86775e */ $pane->css = array(
   /* node:about_page:default 7a86775e */   'css_id' => '',
   /* node:about_page:default 7a86775e */   'css_class' => 'block__highlighted--darkbg block--call-to-action',
   /* node:about_page:default 7a86775e */ );
   /* node:about_page:default 7a86775e */ $pane->extras = array();
   /* node:about_page:default 7a86775e */ $pane->position = 2;
   /* node:about_page:default 7a86775e */ $pane->locks = array();
   /* node:about_page:default 7a86775e */ $pane->uuid = '7a86775e-0d68-432d-9e07-3d1a84014acb';
  $display->content['new-7a86775e-0d68-432d-9e07-3d1a84014acb'] = $pane;
  $display->panels['sidebar_top'][2] = 'new-7a86775e-0d68-432d-9e07-3d1a84014acb';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $panelizer->display = $display;
  $export['node:about_page:default'] = $panelizer;

  return $export;
}
