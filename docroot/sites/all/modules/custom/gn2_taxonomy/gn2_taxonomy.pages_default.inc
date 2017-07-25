<?php
/**
 * @file
 * gn2_taxonomy.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function gn2_taxonomy_default_page_manager_handlers() {
  $export = array();

   /* term_view__panel_context_26eb9011-980b-46ab-a07e-5641cec89f8d */ $handler = new stdClass();
   /* term_view__panel_context_26eb9011-980b-46ab-a07e-5641cec89f8d */ $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
   /* term_view__panel_context_26eb9011-980b-46ab-a07e-5641cec89f8d */ $handler->api_version = 1;
   /* term_view__panel_context_26eb9011-980b-46ab-a07e-5641cec89f8d */ $handler->name = 'term_view__panel_context_26eb9011-980b-46ab-a07e-5641cec89f8d';
   /* term_view__panel_context_26eb9011-980b-46ab-a07e-5641cec89f8d */ $handler->task = 'term_view';
   /* term_view__panel_context_26eb9011-980b-46ab-a07e-5641cec89f8d */ $handler->subtask = '';
   /* term_view__panel_context_26eb9011-980b-46ab-a07e-5641cec89f8d */ $handler->handler = 'panel_context';
   /* term_view__panel_context_26eb9011-980b-46ab-a07e-5641cec89f8d */ $handler->weight = -99;
   /* term_view__panel_context_26eb9011-980b-46ab-a07e-5641cec89f8d */ $handler->conf = array(
   /* term_view__panel_context_26eb9011-980b-46ab-a07e-5641cec89f8d */   'title' => 'Topics Detail Page',
   /* term_view__panel_context_26eb9011-980b-46ab-a07e-5641cec89f8d */   'no_blocks' => 1,
   /* term_view__panel_context_26eb9011-980b-46ab-a07e-5641cec89f8d */   'pipeline' => 'standard',
   /* term_view__panel_context_26eb9011-980b-46ab-a07e-5641cec89f8d */   'body_classes_to_remove' => '',
   /* term_view__panel_context_26eb9011-980b-46ab-a07e-5641cec89f8d */   'body_classes_to_add' => '',
   /* term_view__panel_context_26eb9011-980b-46ab-a07e-5641cec89f8d */   'css_id' => 'topics-detail-content',
   /* term_view__panel_context_26eb9011-980b-46ab-a07e-5641cec89f8d */   'css' => '',
   /* term_view__panel_context_26eb9011-980b-46ab-a07e-5641cec89f8d */   'contexts' => array(),
   /* term_view__panel_context_26eb9011-980b-46ab-a07e-5641cec89f8d */   'relationships' => array(),
   /* term_view__panel_context_26eb9011-980b-46ab-a07e-5641cec89f8d */   'access' => array(
   /* term_view__panel_context_26eb9011-980b-46ab-a07e-5641cec89f8d */     'plugins' => array(
   /* term_view__panel_context_26eb9011-980b-46ab-a07e-5641cec89f8d */       0 => array(
   /* term_view__panel_context_26eb9011-980b-46ab-a07e-5641cec89f8d */         'name' => 'entity_bundle:taxonomy_term',
   /* term_view__panel_context_26eb9011-980b-46ab-a07e-5641cec89f8d */         'settings' => array(
   /* term_view__panel_context_26eb9011-980b-46ab-a07e-5641cec89f8d */           'type' => array(
   /* term_view__panel_context_26eb9011-980b-46ab-a07e-5641cec89f8d */             'topics' => 'topics',
   /* term_view__panel_context_26eb9011-980b-46ab-a07e-5641cec89f8d */           ),
   /* term_view__panel_context_26eb9011-980b-46ab-a07e-5641cec89f8d */         ),
   /* term_view__panel_context_26eb9011-980b-46ab-a07e-5641cec89f8d */         'context' => 'argument_term_1',
   /* term_view__panel_context_26eb9011-980b-46ab-a07e-5641cec89f8d */         'not' => FALSE,
   /* term_view__panel_context_26eb9011-980b-46ab-a07e-5641cec89f8d */       ),
   /* term_view__panel_context_26eb9011-980b-46ab-a07e-5641cec89f8d */     ),
   /* term_view__panel_context_26eb9011-980b-46ab-a07e-5641cec89f8d */     'logic' => 'and',
   /* term_view__panel_context_26eb9011-980b-46ab-a07e-5641cec89f8d */   ),
   /* term_view__panel_context_26eb9011-980b-46ab-a07e-5641cec89f8d */ );
   /* track_field_changes_track_revision_fields_support e9f64a93 */ $display = new panels_display();
   /* track_field_changes_track_revision_fields_support e9f64a93 */ $display->layout = 'home_layout';
   /* track_field_changes_track_revision_fields_support e9f64a93 */ $display->layout_settings = array();
   /* track_field_changes_track_revision_fields_support e9f64a93 */ $display->panel_settings = array(
   /* track_field_changes_track_revision_fields_support e9f64a93 */   'style_settings' => array(
   /* track_field_changes_track_revision_fields_support e9f64a93 */     'default' => NULL,
   /* track_field_changes_track_revision_fields_support e9f64a93 */     'homepage_layout__top__left' => NULL,
   /* track_field_changes_track_revision_fields_support e9f64a93 */     'homepage_layout__top__right' => NULL,
   /* track_field_changes_track_revision_fields_support e9f64a93 */     'homepage_layout__search' => NULL,
   /* track_field_changes_track_revision_fields_support e9f64a93 */     'homepage_layout__main' => NULL,
   /* track_field_changes_track_revision_fields_support e9f64a93 */   ),
   /* track_field_changes_track_revision_fields_support e9f64a93 */   'homepage_layout__main' => array(
   /* track_field_changes_track_revision_fields_support e9f64a93 */     'style' => 'tabs',
   /* track_field_changes_track_revision_fields_support e9f64a93 */   ),
   /* track_field_changes_track_revision_fields_support e9f64a93 */ );
   /* track_field_changes_track_revision_fields_support e9f64a93 */ $display->cache = array();
   /* track_field_changes_track_revision_fields_support e9f64a93 */ $display->title = '%term:name';
   /* track_field_changes_track_revision_fields_support e9f64a93 */ $display->uuid = 'e9f64a93-c6ae-4751-906d-690508a26dcc';
   /* track_field_changes_track_revision_fields_support e9f64a93 */ $display->storage_type = 'page_manager';
   /* track_field_changes_track_revision_fields_support e9f64a93 */ $display->storage_id = 'term_view__panel_context_26eb9011-980b-46ab-a07e-5641cec89f8d';
  $display->content = array();
  $display->panels = array();
   /* track_field_changes_track_revision_fields_support f1c22261 */ $pane = new stdClass();
   /* track_field_changes_track_revision_fields_support f1c22261 */ $pane->pid = 'new-f1c22261-1607-46bd-8073-4e14ad2a328b';
   /* track_field_changes_track_revision_fields_support f1c22261 */ $pane->panel = 'homepage_layout__main';
   /* track_field_changes_track_revision_fields_support f1c22261 */ $pane->type = 'views_panes';
   /* track_field_changes_track_revision_fields_support f1c22261 */ $pane->subtype = 'topics-panel_pane_3';
   /* track_field_changes_track_revision_fields_support f1c22261 */ $pane->shown = TRUE;
   /* track_field_changes_track_revision_fields_support f1c22261 */ $pane->access = array();
   /* track_field_changes_track_revision_fields_support f1c22261 */ $pane->configuration = array(
   /* track_field_changes_track_revision_fields_support f1c22261 */   'arguments' => array(
   /* track_field_changes_track_revision_fields_support f1c22261 */     'field_topic_tid' => '%term:tid',
   /* track_field_changes_track_revision_fields_support f1c22261 */   ),
   /* track_field_changes_track_revision_fields_support f1c22261 */ );
   /* track_field_changes_track_revision_fields_support f1c22261 */ $pane->cache = array();
   /* track_field_changes_track_revision_fields_support f1c22261 */ $pane->style = array(
   /* track_field_changes_track_revision_fields_support f1c22261 */   'settings' => array(
   /* track_field_changes_track_revision_fields_support f1c22261 */     'clean_markup' => array(
   /* track_field_changes_track_revision_fields_support f1c22261 */       'pane_wrapper' => 'div',
   /* track_field_changes_track_revision_fields_support f1c22261 */       'additional_pane_classes' => 'panel-pane',
   /* track_field_changes_track_revision_fields_support f1c22261 */       'additional_pane_attributes' => '',
   /* track_field_changes_track_revision_fields_support f1c22261 */       'enable_inner_div' => 0,
   /* track_field_changes_track_revision_fields_support f1c22261 */       'title_wrapper' => 'h2',
   /* track_field_changes_track_revision_fields_support f1c22261 */       'title_hide' => 0,
   /* track_field_changes_track_revision_fields_support f1c22261 */       'content_wrapper' => 'none',
   /* track_field_changes_track_revision_fields_support f1c22261 */     ),
   /* track_field_changes_track_revision_fields_support f1c22261 */   ),
   /* track_field_changes_track_revision_fields_support f1c22261 */   'style' => 'clean_element',
   /* track_field_changes_track_revision_fields_support f1c22261 */ );
   /* track_field_changes_track_revision_fields_support f1c22261 */ $pane->css = array();
   /* track_field_changes_track_revision_fields_support f1c22261 */ $pane->extras = array();
   /* track_field_changes_track_revision_fields_support f1c22261 */ $pane->position = 0;
   /* track_field_changes_track_revision_fields_support f1c22261 */ $pane->locks = array();
   /* track_field_changes_track_revision_fields_support f1c22261 */ $pane->uuid = 'f1c22261-1607-46bd-8073-4e14ad2a328b';
  $display->content['new-f1c22261-1607-46bd-8073-4e14ad2a328b'] = $pane;
  $display->panels['homepage_layout__main'][0] = 'new-f1c22261-1607-46bd-8073-4e14ad2a328b';
   /* track_field_changes_track_revision_fields_support 38f3d30c */ $pane = new stdClass();
   /* track_field_changes_track_revision_fields_support 38f3d30c */ $pane->pid = 'new-38f3d30c-1dee-4763-a90b-6ff0857c343a';
   /* track_field_changes_track_revision_fields_support 38f3d30c */ $pane->panel = 'homepage_layout__main';
   /* track_field_changes_track_revision_fields_support 38f3d30c */ $pane->type = 'views_panes';
   /* track_field_changes_track_revision_fields_support 38f3d30c */ $pane->subtype = 'topics-panel_pane_4';
   /* track_field_changes_track_revision_fields_support 38f3d30c */ $pane->shown = TRUE;
   /* track_field_changes_track_revision_fields_support 38f3d30c */ $pane->access = array();
   /* track_field_changes_track_revision_fields_support 38f3d30c */ $pane->configuration = array(
   /* track_field_changes_track_revision_fields_support 38f3d30c */   'arguments' => array(
   /* track_field_changes_track_revision_fields_support 38f3d30c */     'field_topic_tid' => '%term:tid',
   /* track_field_changes_track_revision_fields_support 38f3d30c */   ),
   /* track_field_changes_track_revision_fields_support 38f3d30c */ );
   /* track_field_changes_track_revision_fields_support 38f3d30c */ $pane->cache = array();
   /* track_field_changes_track_revision_fields_support 38f3d30c */ $pane->style = array(
   /* track_field_changes_track_revision_fields_support 38f3d30c */   'settings' => NULL,
   /* track_field_changes_track_revision_fields_support 38f3d30c */ );
   /* track_field_changes_track_revision_fields_support 38f3d30c */ $pane->css = array();
   /* track_field_changes_track_revision_fields_support 38f3d30c */ $pane->extras = array();
   /* track_field_changes_track_revision_fields_support 38f3d30c */ $pane->position = 1;
   /* track_field_changes_track_revision_fields_support 38f3d30c */ $pane->locks = array();
   /* track_field_changes_track_revision_fields_support 38f3d30c */ $pane->uuid = '38f3d30c-1dee-4763-a90b-6ff0857c343a';
  $display->content['new-38f3d30c-1dee-4763-a90b-6ff0857c343a'] = $pane;
  $display->panels['homepage_layout__main'][1] = 'new-38f3d30c-1dee-4763-a90b-6ff0857c343a';
   /* track_field_changes_track_revision_fields_support ac7c5e38 */ $pane = new stdClass();
   /* track_field_changes_track_revision_fields_support ac7c5e38 */ $pane->pid = 'new-ac7c5e38-71b0-47df-a823-185c17518e6f';
   /* track_field_changes_track_revision_fields_support ac7c5e38 */ $pane->panel = 'homepage_layout__main';
   /* track_field_changes_track_revision_fields_support ac7c5e38 */ $pane->type = 'views_panes';
   /* track_field_changes_track_revision_fields_support ac7c5e38 */ $pane->subtype = 'topics-panel_pane_8';
   /* track_field_changes_track_revision_fields_support ac7c5e38 */ $pane->shown = TRUE;
   /* track_field_changes_track_revision_fields_support ac7c5e38 */ $pane->access = array();
   /* track_field_changes_track_revision_fields_support ac7c5e38 */ $pane->configuration = array(
   /* track_field_changes_track_revision_fields_support ac7c5e38 */   'arguments' => array(
   /* track_field_changes_track_revision_fields_support ac7c5e38 */     'field_topic_tid' => '%term:tid',
   /* track_field_changes_track_revision_fields_support ac7c5e38 */   ),
   /* track_field_changes_track_revision_fields_support ac7c5e38 */ );
   /* track_field_changes_track_revision_fields_support ac7c5e38 */ $pane->cache = array();
   /* track_field_changes_track_revision_fields_support ac7c5e38 */ $pane->style = array(
   /* track_field_changes_track_revision_fields_support ac7c5e38 */   'settings' => NULL,
   /* track_field_changes_track_revision_fields_support ac7c5e38 */ );
   /* track_field_changes_track_revision_fields_support ac7c5e38 */ $pane->css = array();
   /* track_field_changes_track_revision_fields_support ac7c5e38 */ $pane->extras = array();
   /* track_field_changes_track_revision_fields_support ac7c5e38 */ $pane->position = 2;
   /* track_field_changes_track_revision_fields_support ac7c5e38 */ $pane->locks = array();
   /* track_field_changes_track_revision_fields_support ac7c5e38 */ $pane->uuid = 'ac7c5e38-71b0-47df-a823-185c17518e6f';
  $display->content['new-ac7c5e38-71b0-47df-a823-185c17518e6f'] = $pane;
  $display->panels['homepage_layout__main'][2] = 'new-ac7c5e38-71b0-47df-a823-185c17518e6f';
   /* track_field_changes_track_revision_fields_support 2e7cddd5 */ $pane = new stdClass();
   /* track_field_changes_track_revision_fields_support 2e7cddd5 */ $pane->pid = 'new-2e7cddd5-3840-4ae9-bc62-065fd87ffa08';
   /* track_field_changes_track_revision_fields_support 2e7cddd5 */ $pane->panel = 'homepage_layout__main';
   /* track_field_changes_track_revision_fields_support 2e7cddd5 */ $pane->type = 'views_panes';
   /* track_field_changes_track_revision_fields_support 2e7cddd5 */ $pane->subtype = 'topics-panel_pane_5';
   /* track_field_changes_track_revision_fields_support 2e7cddd5 */ $pane->shown = TRUE;
   /* track_field_changes_track_revision_fields_support 2e7cddd5 */ $pane->access = array();
   /* track_field_changes_track_revision_fields_support 2e7cddd5 */ $pane->configuration = array(
   /* track_field_changes_track_revision_fields_support 2e7cddd5 */   'arguments' => array(
   /* track_field_changes_track_revision_fields_support 2e7cddd5 */     'field_topic_tid' => '%term:tid',
   /* track_field_changes_track_revision_fields_support 2e7cddd5 */   ),
   /* track_field_changes_track_revision_fields_support 2e7cddd5 */ );
   /* track_field_changes_track_revision_fields_support 2e7cddd5 */ $pane->cache = array();
   /* track_field_changes_track_revision_fields_support 2e7cddd5 */ $pane->style = array(
   /* track_field_changes_track_revision_fields_support 2e7cddd5 */   'settings' => NULL,
   /* track_field_changes_track_revision_fields_support 2e7cddd5 */ );
   /* track_field_changes_track_revision_fields_support 2e7cddd5 */ $pane->css = array();
   /* track_field_changes_track_revision_fields_support 2e7cddd5 */ $pane->extras = array();
   /* track_field_changes_track_revision_fields_support 2e7cddd5 */ $pane->position = 3;
   /* track_field_changes_track_revision_fields_support 2e7cddd5 */ $pane->locks = array();
   /* track_field_changes_track_revision_fields_support 2e7cddd5 */ $pane->uuid = '2e7cddd5-3840-4ae9-bc62-065fd87ffa08';
  $display->content['new-2e7cddd5-3840-4ae9-bc62-065fd87ffa08'] = $pane;
  $display->panels['homepage_layout__main'][3] = 'new-2e7cddd5-3840-4ae9-bc62-065fd87ffa08';
   /* track_field_changes_track_revision_fields_support 29164291 */ $pane = new stdClass();
   /* track_field_changes_track_revision_fields_support 29164291 */ $pane->pid = 'new-29164291-b95a-48cb-862c-89c92802c1ad';
   /* track_field_changes_track_revision_fields_support 29164291 */ $pane->panel = 'homepage_layout__main';
   /* track_field_changes_track_revision_fields_support 29164291 */ $pane->type = 'views_panes';
   /* track_field_changes_track_revision_fields_support 29164291 */ $pane->subtype = 'topics-panel_pane_6';
   /* track_field_changes_track_revision_fields_support 29164291 */ $pane->shown = TRUE;
   /* track_field_changes_track_revision_fields_support 29164291 */ $pane->access = array();
   /* track_field_changes_track_revision_fields_support 29164291 */ $pane->configuration = array(
   /* track_field_changes_track_revision_fields_support 29164291 */   'arguments' => array(
   /* track_field_changes_track_revision_fields_support 29164291 */     'field_topic_tid' => '%term:tid',
   /* track_field_changes_track_revision_fields_support 29164291 */   ),
   /* track_field_changes_track_revision_fields_support 29164291 */ );
   /* track_field_changes_track_revision_fields_support 29164291 */ $pane->cache = array();
   /* track_field_changes_track_revision_fields_support 29164291 */ $pane->style = array(
   /* track_field_changes_track_revision_fields_support 29164291 */   'settings' => NULL,
   /* track_field_changes_track_revision_fields_support 29164291 */ );
   /* track_field_changes_track_revision_fields_support 29164291 */ $pane->css = array();
   /* track_field_changes_track_revision_fields_support 29164291 */ $pane->extras = array();
   /* track_field_changes_track_revision_fields_support 29164291 */ $pane->position = 4;
   /* track_field_changes_track_revision_fields_support 29164291 */ $pane->locks = array();
   /* track_field_changes_track_revision_fields_support 29164291 */ $pane->uuid = '29164291-b95a-48cb-862c-89c92802c1ad';
  $display->content['new-29164291-b95a-48cb-862c-89c92802c1ad'] = $pane;
  $display->panels['homepage_layout__main'][4] = 'new-29164291-b95a-48cb-862c-89c92802c1ad';
   /* track_field_changes_track_revision_fields_support 515176fa */ $pane = new stdClass();
   /* track_field_changes_track_revision_fields_support 515176fa */ $pane->pid = 'new-515176fa-1a4c-44d4-be48-690e1e25f713';
   /* track_field_changes_track_revision_fields_support 515176fa */ $pane->panel = 'homepage_layout__main';
   /* track_field_changes_track_revision_fields_support 515176fa */ $pane->type = 'views_panes';
   /* track_field_changes_track_revision_fields_support 515176fa */ $pane->subtype = 'topics-panel_pane_7';
   /* track_field_changes_track_revision_fields_support 515176fa */ $pane->shown = TRUE;
   /* track_field_changes_track_revision_fields_support 515176fa */ $pane->access = array();
   /* track_field_changes_track_revision_fields_support 515176fa */ $pane->configuration = array(
   /* track_field_changes_track_revision_fields_support 515176fa */   'arguments' => array(
   /* track_field_changes_track_revision_fields_support 515176fa */     'field_topic_tid' => '%term:tid',
   /* track_field_changes_track_revision_fields_support 515176fa */   ),
   /* track_field_changes_track_revision_fields_support 515176fa */ );
   /* track_field_changes_track_revision_fields_support 515176fa */ $pane->cache = array();
   /* track_field_changes_track_revision_fields_support 515176fa */ $pane->style = array(
   /* track_field_changes_track_revision_fields_support 515176fa */   'settings' => NULL,
   /* track_field_changes_track_revision_fields_support 515176fa */ );
   /* track_field_changes_track_revision_fields_support 515176fa */ $pane->css = array();
   /* track_field_changes_track_revision_fields_support 515176fa */ $pane->extras = array();
   /* track_field_changes_track_revision_fields_support 515176fa */ $pane->position = 5;
   /* track_field_changes_track_revision_fields_support 515176fa */ $pane->locks = array();
   /* track_field_changes_track_revision_fields_support 515176fa */ $pane->uuid = '515176fa-1a4c-44d4-be48-690e1e25f713';
  $display->content['new-515176fa-1a4c-44d4-be48-690e1e25f713'] = $pane;
  $display->panels['homepage_layout__main'][5] = 'new-515176fa-1a4c-44d4-be48-690e1e25f713';
   /* track_field_changes_track_revision_fields_support 67fbdf59 */ $pane = new stdClass();
   /* track_field_changes_track_revision_fields_support 67fbdf59 */ $pane->pid = 'new-67fbdf59-9d62-4f77-b8f5-1c9f88d4844c';
   /* track_field_changes_track_revision_fields_support 67fbdf59 */ $pane->panel = 'homepage_layout__main';
   /* track_field_changes_track_revision_fields_support 67fbdf59 */ $pane->type = 'views_panes';
   /* track_field_changes_track_revision_fields_support 67fbdf59 */ $pane->subtype = 'resources-panel_pane_2';
   /* track_field_changes_track_revision_fields_support 67fbdf59 */ $pane->shown = TRUE;
   /* track_field_changes_track_revision_fields_support 67fbdf59 */ $pane->access = array();
   /* track_field_changes_track_revision_fields_support 67fbdf59 */ $pane->configuration = array(
   /* track_field_changes_track_revision_fields_support 67fbdf59 */   'arguments' => array(
   /* track_field_changes_track_revision_fields_support 67fbdf59 */     'tid' => '%term:tid',
   /* track_field_changes_track_revision_fields_support 67fbdf59 */   ),
   /* track_field_changes_track_revision_fields_support 67fbdf59 */ );
   /* track_field_changes_track_revision_fields_support 67fbdf59 */ $pane->cache = array();
   /* track_field_changes_track_revision_fields_support 67fbdf59 */ $pane->style = array(
   /* track_field_changes_track_revision_fields_support 67fbdf59 */   'settings' => NULL,
   /* track_field_changes_track_revision_fields_support 67fbdf59 */ );
   /* track_field_changes_track_revision_fields_support 67fbdf59 */ $pane->css = array();
   /* track_field_changes_track_revision_fields_support 67fbdf59 */ $pane->extras = array();
   /* track_field_changes_track_revision_fields_support 67fbdf59 */ $pane->position = 6;
   /* track_field_changes_track_revision_fields_support 67fbdf59 */ $pane->locks = array();
   /* track_field_changes_track_revision_fields_support 67fbdf59 */ $pane->uuid = '67fbdf59-9d62-4f77-b8f5-1c9f88d4844c';
  $display->content['new-67fbdf59-9d62-4f77-b8f5-1c9f88d4844c'] = $pane;
  $display->panels['homepage_layout__main'][6] = 'new-67fbdf59-9d62-4f77-b8f5-1c9f88d4844c';
   /* track_field_changes_track_revision_fields_support 25510cfa */ $pane = new stdClass();
   /* track_field_changes_track_revision_fields_support 25510cfa */ $pane->pid = 'new-25510cfa-3ba3-4a62-8221-a80daa620231';
   /* track_field_changes_track_revision_fields_support 25510cfa */ $pane->panel = 'homepage_layout__search';
   /* track_field_changes_track_revision_fields_support 25510cfa */ $pane->type = 'views_panes';
   /* track_field_changes_track_revision_fields_support 25510cfa */ $pane->subtype = 'topics-panel_pane_2';
   /* track_field_changes_track_revision_fields_support 25510cfa */ $pane->shown = TRUE;
   /* track_field_changes_track_revision_fields_support 25510cfa */ $pane->access = array();
   /* track_field_changes_track_revision_fields_support 25510cfa */ $pane->configuration = array(
   /* track_field_changes_track_revision_fields_support 25510cfa */   'arguments' => array(
   /* track_field_changes_track_revision_fields_support 25510cfa */     'tid' => '%term:tid',
   /* track_field_changes_track_revision_fields_support 25510cfa */   ),
   /* track_field_changes_track_revision_fields_support 25510cfa */ );
   /* track_field_changes_track_revision_fields_support 25510cfa */ $pane->cache = array();
   /* track_field_changes_track_revision_fields_support 25510cfa */ $pane->style = array(
   /* track_field_changes_track_revision_fields_support 25510cfa */   'settings' => NULL,
   /* track_field_changes_track_revision_fields_support 25510cfa */ );
   /* track_field_changes_track_revision_fields_support 25510cfa */ $pane->css = array();
   /* track_field_changes_track_revision_fields_support 25510cfa */ $pane->extras = array();
   /* track_field_changes_track_revision_fields_support 25510cfa */ $pane->position = 0;
   /* track_field_changes_track_revision_fields_support 25510cfa */ $pane->locks = array();
   /* track_field_changes_track_revision_fields_support 25510cfa */ $pane->uuid = '25510cfa-3ba3-4a62-8221-a80daa620231';
  $display->content['new-25510cfa-3ba3-4a62-8221-a80daa620231'] = $pane;
  $display->panels['homepage_layout__search'][0] = 'new-25510cfa-3ba3-4a62-8221-a80daa620231';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['term_view__panel_context_26eb9011-980b-46ab-a07e-5641cec89f8d'] = $handler;

   /* term_view__panel_context_3110175d-9b15-4323-96aa-d68a7c96b815 */ $handler = new stdClass();
   /* term_view__panel_context_3110175d-9b15-4323-96aa-d68a7c96b815 */ $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
   /* term_view__panel_context_3110175d-9b15-4323-96aa-d68a7c96b815 */ $handler->api_version = 1;
   /* term_view__panel_context_3110175d-9b15-4323-96aa-d68a7c96b815 */ $handler->name = 'term_view__panel_context_3110175d-9b15-4323-96aa-d68a7c96b815';
   /* term_view__panel_context_3110175d-9b15-4323-96aa-d68a7c96b815 */ $handler->task = 'term_view';
   /* term_view__panel_context_3110175d-9b15-4323-96aa-d68a7c96b815 */ $handler->subtask = '';
   /* term_view__panel_context_3110175d-9b15-4323-96aa-d68a7c96b815 */ $handler->handler = 'panel_context';
   /* term_view__panel_context_3110175d-9b15-4323-96aa-d68a7c96b815 */ $handler->weight = -96;
   /* term_view__panel_context_3110175d-9b15-4323-96aa-d68a7c96b815 */ $handler->conf = array(
   /* term_view__panel_context_3110175d-9b15-4323-96aa-d68a7c96b815 */   'title' => 'Countries Detail Page',
   /* term_view__panel_context_3110175d-9b15-4323-96aa-d68a7c96b815 */   'no_blocks' => 1,
   /* term_view__panel_context_3110175d-9b15-4323-96aa-d68a7c96b815 */   'pipeline' => 'standard',
   /* term_view__panel_context_3110175d-9b15-4323-96aa-d68a7c96b815 */   'body_classes_to_remove' => '',
   /* term_view__panel_context_3110175d-9b15-4323-96aa-d68a7c96b815 */   'body_classes_to_add' => '',
   /* term_view__panel_context_3110175d-9b15-4323-96aa-d68a7c96b815 */   'css_id' => 'topics-detail-content',
   /* term_view__panel_context_3110175d-9b15-4323-96aa-d68a7c96b815 */   'css' => '',
   /* term_view__panel_context_3110175d-9b15-4323-96aa-d68a7c96b815 */   'contexts' => array(),
   /* term_view__panel_context_3110175d-9b15-4323-96aa-d68a7c96b815 */   'relationships' => array(),
   /* term_view__panel_context_3110175d-9b15-4323-96aa-d68a7c96b815 */   'access' => array(
   /* term_view__panel_context_3110175d-9b15-4323-96aa-d68a7c96b815 */     'plugins' => array(
   /* term_view__panel_context_3110175d-9b15-4323-96aa-d68a7c96b815 */       0 => array(
   /* term_view__panel_context_3110175d-9b15-4323-96aa-d68a7c96b815 */         'name' => 'entity_bundle:taxonomy_term',
   /* term_view__panel_context_3110175d-9b15-4323-96aa-d68a7c96b815 */         'settings' => array(
   /* term_view__panel_context_3110175d-9b15-4323-96aa-d68a7c96b815 */           'type' => array(
   /* term_view__panel_context_3110175d-9b15-4323-96aa-d68a7c96b815 */             'countries' => 'countries',
   /* term_view__panel_context_3110175d-9b15-4323-96aa-d68a7c96b815 */             'regions' => 'regions',
   /* term_view__panel_context_3110175d-9b15-4323-96aa-d68a7c96b815 */           ),
   /* term_view__panel_context_3110175d-9b15-4323-96aa-d68a7c96b815 */         ),
   /* term_view__panel_context_3110175d-9b15-4323-96aa-d68a7c96b815 */         'context' => 'argument_term_1',
   /* term_view__panel_context_3110175d-9b15-4323-96aa-d68a7c96b815 */         'not' => FALSE,
   /* term_view__panel_context_3110175d-9b15-4323-96aa-d68a7c96b815 */       ),
   /* term_view__panel_context_3110175d-9b15-4323-96aa-d68a7c96b815 */     ),
   /* term_view__panel_context_3110175d-9b15-4323-96aa-d68a7c96b815 */     'logic' => 'and',
   /* term_view__panel_context_3110175d-9b15-4323-96aa-d68a7c96b815 */   ),
   /* term_view__panel_context_3110175d-9b15-4323-96aa-d68a7c96b815 */   'name' => '',
   /* term_view__panel_context_3110175d-9b15-4323-96aa-d68a7c96b815 */ );
   /* term_view__panel_context_26eb9011-980b-46ab-a07e-5641cec89f8d e9f64a93 */ $display = new panels_display();
   /* term_view__panel_context_26eb9011-980b-46ab-a07e-5641cec89f8d e9f64a93 */ $display->layout = 'home_layout';
   /* term_view__panel_context_26eb9011-980b-46ab-a07e-5641cec89f8d e9f64a93 */ $display->layout_settings = array();
   /* term_view__panel_context_26eb9011-980b-46ab-a07e-5641cec89f8d e9f64a93 */ $display->panel_settings = array(
   /* term_view__panel_context_26eb9011-980b-46ab-a07e-5641cec89f8d e9f64a93 */   'style_settings' => array(
   /* term_view__panel_context_26eb9011-980b-46ab-a07e-5641cec89f8d e9f64a93 */     'default' => NULL,
   /* term_view__panel_context_26eb9011-980b-46ab-a07e-5641cec89f8d e9f64a93 */     'homepage_layout__top__left' => NULL,
   /* term_view__panel_context_26eb9011-980b-46ab-a07e-5641cec89f8d e9f64a93 */     'homepage_layout__top__right' => NULL,
   /* term_view__panel_context_26eb9011-980b-46ab-a07e-5641cec89f8d e9f64a93 */     'homepage_layout__search' => NULL,
   /* term_view__panel_context_26eb9011-980b-46ab-a07e-5641cec89f8d e9f64a93 */     'homepage_layout__main' => NULL,
   /* term_view__panel_context_26eb9011-980b-46ab-a07e-5641cec89f8d e9f64a93 */   ),
   /* term_view__panel_context_26eb9011-980b-46ab-a07e-5641cec89f8d e9f64a93 */   'homepage_layout__main' => array(
   /* term_view__panel_context_26eb9011-980b-46ab-a07e-5641cec89f8d e9f64a93 */     'style' => 'tabs',
   /* term_view__panel_context_26eb9011-980b-46ab-a07e-5641cec89f8d e9f64a93 */   ),
   /* term_view__panel_context_26eb9011-980b-46ab-a07e-5641cec89f8d e9f64a93 */ );
   /* term_view__panel_context_26eb9011-980b-46ab-a07e-5641cec89f8d e9f64a93 */ $display->cache = array();
   /* term_view__panel_context_26eb9011-980b-46ab-a07e-5641cec89f8d e9f64a93 */ $display->title = '%term:name';
   /* term_view__panel_context_26eb9011-980b-46ab-a07e-5641cec89f8d e9f64a93 */ $display->uuid = 'e9f64a93-c6ae-4751-906d-690508a26dcc';
   /* term_view__panel_context_26eb9011-980b-46ab-a07e-5641cec89f8d e9f64a93 */ $display->storage_type = 'page_manager';
   /* term_view__panel_context_26eb9011-980b-46ab-a07e-5641cec89f8d e9f64a93 */ $display->storage_id = 'term_view__panel_context_3110175d-9b15-4323-96aa-d68a7c96b815';
  $display->content = array();
  $display->panels = array();
   /* term_view__panel_context_26eb9011-980b-46ab-a07e-5641cec89f8d 7dd9b3a8 */ $pane = new stdClass();
   /* term_view__panel_context_26eb9011-980b-46ab-a07e-5641cec89f8d 7dd9b3a8 */ $pane->pid = 'new-7dd9b3a8-eb56-4049-874c-67d8f4cd8e6f';
   /* term_view__panel_context_26eb9011-980b-46ab-a07e-5641cec89f8d 7dd9b3a8 */ $pane->panel = 'homepage_layout__main';
   /* term_view__panel_context_26eb9011-980b-46ab-a07e-5641cec89f8d 7dd9b3a8 */ $pane->type = 'views_panes';
   /* term_view__panel_context_26eb9011-980b-46ab-a07e-5641cec89f8d 7dd9b3a8 */ $pane->subtype = 'topics-panel_pane_12';
   /* term_view__panel_context_26eb9011-980b-46ab-a07e-5641cec89f8d 7dd9b3a8 */ $pane->shown = TRUE;
   /* term_view__panel_context_26eb9011-980b-46ab-a07e-5641cec89f8d 7dd9b3a8 */ $pane->access = array();
   /* term_view__panel_context_26eb9011-980b-46ab-a07e-5641cec89f8d 7dd9b3a8 */ $pane->configuration = array(
   /* term_view__panel_context_26eb9011-980b-46ab-a07e-5641cec89f8d 7dd9b3a8 */   'arguments' => array(
   /* term_view__panel_context_26eb9011-980b-46ab-a07e-5641cec89f8d 7dd9b3a8 */     'tid' => '%term:tid',
   /* term_view__panel_context_26eb9011-980b-46ab-a07e-5641cec89f8d 7dd9b3a8 */   ),
   /* term_view__panel_context_26eb9011-980b-46ab-a07e-5641cec89f8d 7dd9b3a8 */ );
   /* term_view__panel_context_26eb9011-980b-46ab-a07e-5641cec89f8d 7dd9b3a8 */ $pane->cache = array();
   /* term_view__panel_context_26eb9011-980b-46ab-a07e-5641cec89f8d 7dd9b3a8 */ $pane->style = array(
   /* term_view__panel_context_26eb9011-980b-46ab-a07e-5641cec89f8d 7dd9b3a8 */   'settings' => NULL,
   /* term_view__panel_context_26eb9011-980b-46ab-a07e-5641cec89f8d 7dd9b3a8 */ );
   /* term_view__panel_context_26eb9011-980b-46ab-a07e-5641cec89f8d 7dd9b3a8 */ $pane->css = array();
   /* term_view__panel_context_26eb9011-980b-46ab-a07e-5641cec89f8d 7dd9b3a8 */ $pane->extras = array();
   /* term_view__panel_context_26eb9011-980b-46ab-a07e-5641cec89f8d 7dd9b3a8 */ $pane->position = 0;
   /* term_view__panel_context_26eb9011-980b-46ab-a07e-5641cec89f8d 7dd9b3a8 */ $pane->locks = array();
   /* term_view__panel_context_26eb9011-980b-46ab-a07e-5641cec89f8d 7dd9b3a8 */ $pane->uuid = '7dd9b3a8-eb56-4049-874c-67d8f4cd8e6f';
  $display->content['new-7dd9b3a8-eb56-4049-874c-67d8f4cd8e6f'] = $pane;
  $display->panels['homepage_layout__main'][0] = 'new-7dd9b3a8-eb56-4049-874c-67d8f4cd8e6f';
   /* term_view__panel_context_26eb9011-980b-46ab-a07e-5641cec89f8d 460fa5d3 */ $pane = new stdClass();
   /* term_view__panel_context_26eb9011-980b-46ab-a07e-5641cec89f8d 460fa5d3 */ $pane->pid = 'new-460fa5d3-6240-4b0d-b54d-d619af6c394d';
   /* term_view__panel_context_26eb9011-980b-46ab-a07e-5641cec89f8d 460fa5d3 */ $pane->panel = 'homepage_layout__main';
   /* term_view__panel_context_26eb9011-980b-46ab-a07e-5641cec89f8d 460fa5d3 */ $pane->type = 'views_panes';
   /* term_view__panel_context_26eb9011-980b-46ab-a07e-5641cec89f8d 460fa5d3 */ $pane->subtype = 'topics-panel_pane_13';
   /* term_view__panel_context_26eb9011-980b-46ab-a07e-5641cec89f8d 460fa5d3 */ $pane->shown = TRUE;
   /* term_view__panel_context_26eb9011-980b-46ab-a07e-5641cec89f8d 460fa5d3 */ $pane->access = array();
   /* term_view__panel_context_26eb9011-980b-46ab-a07e-5641cec89f8d 460fa5d3 */ $pane->configuration = array(
   /* term_view__panel_context_26eb9011-980b-46ab-a07e-5641cec89f8d 460fa5d3 */   'arguments' => array(
   /* term_view__panel_context_26eb9011-980b-46ab-a07e-5641cec89f8d 460fa5d3 */     'tid' => '%term:tid',
   /* term_view__panel_context_26eb9011-980b-46ab-a07e-5641cec89f8d 460fa5d3 */   ),
   /* term_view__panel_context_26eb9011-980b-46ab-a07e-5641cec89f8d 460fa5d3 */ );
   /* term_view__panel_context_26eb9011-980b-46ab-a07e-5641cec89f8d 460fa5d3 */ $pane->cache = array();
   /* term_view__panel_context_26eb9011-980b-46ab-a07e-5641cec89f8d 460fa5d3 */ $pane->style = array(
   /* term_view__panel_context_26eb9011-980b-46ab-a07e-5641cec89f8d 460fa5d3 */   'settings' => NULL,
   /* term_view__panel_context_26eb9011-980b-46ab-a07e-5641cec89f8d 460fa5d3 */ );
   /* term_view__panel_context_26eb9011-980b-46ab-a07e-5641cec89f8d 460fa5d3 */ $pane->css = array();
   /* term_view__panel_context_26eb9011-980b-46ab-a07e-5641cec89f8d 460fa5d3 */ $pane->extras = array();
   /* term_view__panel_context_26eb9011-980b-46ab-a07e-5641cec89f8d 460fa5d3 */ $pane->position = 1;
   /* term_view__panel_context_26eb9011-980b-46ab-a07e-5641cec89f8d 460fa5d3 */ $pane->locks = array();
   /* term_view__panel_context_26eb9011-980b-46ab-a07e-5641cec89f8d 460fa5d3 */ $pane->uuid = '460fa5d3-6240-4b0d-b54d-d619af6c394d';
  $display->content['new-460fa5d3-6240-4b0d-b54d-d619af6c394d'] = $pane;
  $display->panels['homepage_layout__main'][1] = 'new-460fa5d3-6240-4b0d-b54d-d619af6c394d';
   /* term_view__panel_context_26eb9011-980b-46ab-a07e-5641cec89f8d c384f216 */ $pane = new stdClass();
   /* term_view__panel_context_26eb9011-980b-46ab-a07e-5641cec89f8d c384f216 */ $pane->pid = 'new-c384f216-bbe1-4a4e-b4b1-a0e4ef684255';
   /* term_view__panel_context_26eb9011-980b-46ab-a07e-5641cec89f8d c384f216 */ $pane->panel = 'homepage_layout__main';
   /* term_view__panel_context_26eb9011-980b-46ab-a07e-5641cec89f8d c384f216 */ $pane->type = 'views_panes';
   /* term_view__panel_context_26eb9011-980b-46ab-a07e-5641cec89f8d c384f216 */ $pane->subtype = 'topics-panel_pane_17';
   /* term_view__panel_context_26eb9011-980b-46ab-a07e-5641cec89f8d c384f216 */ $pane->shown = TRUE;
   /* term_view__panel_context_26eb9011-980b-46ab-a07e-5641cec89f8d c384f216 */ $pane->access = array();
   /* term_view__panel_context_26eb9011-980b-46ab-a07e-5641cec89f8d c384f216 */ $pane->configuration = array(
   /* term_view__panel_context_26eb9011-980b-46ab-a07e-5641cec89f8d c384f216 */   'arguments' => array(
   /* term_view__panel_context_26eb9011-980b-46ab-a07e-5641cec89f8d c384f216 */     'tid' => '%term:tid',
   /* term_view__panel_context_26eb9011-980b-46ab-a07e-5641cec89f8d c384f216 */   ),
   /* term_view__panel_context_26eb9011-980b-46ab-a07e-5641cec89f8d c384f216 */ );
   /* term_view__panel_context_26eb9011-980b-46ab-a07e-5641cec89f8d c384f216 */ $pane->cache = array();
   /* term_view__panel_context_26eb9011-980b-46ab-a07e-5641cec89f8d c384f216 */ $pane->style = array(
   /* term_view__panel_context_26eb9011-980b-46ab-a07e-5641cec89f8d c384f216 */   'settings' => NULL,
   /* term_view__panel_context_26eb9011-980b-46ab-a07e-5641cec89f8d c384f216 */ );
   /* term_view__panel_context_26eb9011-980b-46ab-a07e-5641cec89f8d c384f216 */ $pane->css = array();
   /* term_view__panel_context_26eb9011-980b-46ab-a07e-5641cec89f8d c384f216 */ $pane->extras = array();
   /* term_view__panel_context_26eb9011-980b-46ab-a07e-5641cec89f8d c384f216 */ $pane->position = 2;
   /* term_view__panel_context_26eb9011-980b-46ab-a07e-5641cec89f8d c384f216 */ $pane->locks = array();
   /* term_view__panel_context_26eb9011-980b-46ab-a07e-5641cec89f8d c384f216 */ $pane->uuid = 'c384f216-bbe1-4a4e-b4b1-a0e4ef684255';
  $display->content['new-c384f216-bbe1-4a4e-b4b1-a0e4ef684255'] = $pane;
  $display->panels['homepage_layout__main'][2] = 'new-c384f216-bbe1-4a4e-b4b1-a0e4ef684255';
   /* term_view__panel_context_26eb9011-980b-46ab-a07e-5641cec89f8d ab9d81b7 */ $pane = new stdClass();
   /* term_view__panel_context_26eb9011-980b-46ab-a07e-5641cec89f8d ab9d81b7 */ $pane->pid = 'new-ab9d81b7-a248-4580-8898-275316c50f72';
   /* term_view__panel_context_26eb9011-980b-46ab-a07e-5641cec89f8d ab9d81b7 */ $pane->panel = 'homepage_layout__main';
   /* term_view__panel_context_26eb9011-980b-46ab-a07e-5641cec89f8d ab9d81b7 */ $pane->type = 'views_panes';
   /* term_view__panel_context_26eb9011-980b-46ab-a07e-5641cec89f8d ab9d81b7 */ $pane->subtype = 'topics-panel_pane_14';
   /* term_view__panel_context_26eb9011-980b-46ab-a07e-5641cec89f8d ab9d81b7 */ $pane->shown = TRUE;
   /* term_view__panel_context_26eb9011-980b-46ab-a07e-5641cec89f8d ab9d81b7 */ $pane->access = array();
   /* term_view__panel_context_26eb9011-980b-46ab-a07e-5641cec89f8d ab9d81b7 */ $pane->configuration = array(
   /* term_view__panel_context_26eb9011-980b-46ab-a07e-5641cec89f8d ab9d81b7 */   'arguments' => array(
   /* term_view__panel_context_26eb9011-980b-46ab-a07e-5641cec89f8d ab9d81b7 */     'tid' => '%term:tid',
   /* term_view__panel_context_26eb9011-980b-46ab-a07e-5641cec89f8d ab9d81b7 */   ),
   /* term_view__panel_context_26eb9011-980b-46ab-a07e-5641cec89f8d ab9d81b7 */ );
   /* term_view__panel_context_26eb9011-980b-46ab-a07e-5641cec89f8d ab9d81b7 */ $pane->cache = array();
   /* term_view__panel_context_26eb9011-980b-46ab-a07e-5641cec89f8d ab9d81b7 */ $pane->style = array(
   /* term_view__panel_context_26eb9011-980b-46ab-a07e-5641cec89f8d ab9d81b7 */   'settings' => NULL,
   /* term_view__panel_context_26eb9011-980b-46ab-a07e-5641cec89f8d ab9d81b7 */ );
   /* term_view__panel_context_26eb9011-980b-46ab-a07e-5641cec89f8d ab9d81b7 */ $pane->css = array();
   /* term_view__panel_context_26eb9011-980b-46ab-a07e-5641cec89f8d ab9d81b7 */ $pane->extras = array();
   /* term_view__panel_context_26eb9011-980b-46ab-a07e-5641cec89f8d ab9d81b7 */ $pane->position = 3;
   /* term_view__panel_context_26eb9011-980b-46ab-a07e-5641cec89f8d ab9d81b7 */ $pane->locks = array();
   /* term_view__panel_context_26eb9011-980b-46ab-a07e-5641cec89f8d ab9d81b7 */ $pane->uuid = 'ab9d81b7-a248-4580-8898-275316c50f72';
  $display->content['new-ab9d81b7-a248-4580-8898-275316c50f72'] = $pane;
  $display->panels['homepage_layout__main'][3] = 'new-ab9d81b7-a248-4580-8898-275316c50f72';
   /* term_view__panel_context_26eb9011-980b-46ab-a07e-5641cec89f8d 41a1a28a */ $pane = new stdClass();
   /* term_view__panel_context_26eb9011-980b-46ab-a07e-5641cec89f8d 41a1a28a */ $pane->pid = 'new-41a1a28a-57e4-4161-ac56-66b239881e6b';
   /* term_view__panel_context_26eb9011-980b-46ab-a07e-5641cec89f8d 41a1a28a */ $pane->panel = 'homepage_layout__main';
   /* term_view__panel_context_26eb9011-980b-46ab-a07e-5641cec89f8d 41a1a28a */ $pane->type = 'views_panes';
   /* term_view__panel_context_26eb9011-980b-46ab-a07e-5641cec89f8d 41a1a28a */ $pane->subtype = 'topics-panel_pane_15';
   /* term_view__panel_context_26eb9011-980b-46ab-a07e-5641cec89f8d 41a1a28a */ $pane->shown = TRUE;
   /* term_view__panel_context_26eb9011-980b-46ab-a07e-5641cec89f8d 41a1a28a */ $pane->access = array();
   /* term_view__panel_context_26eb9011-980b-46ab-a07e-5641cec89f8d 41a1a28a */ $pane->configuration = array(
   /* term_view__panel_context_26eb9011-980b-46ab-a07e-5641cec89f8d 41a1a28a */   'arguments' => array(
   /* term_view__panel_context_26eb9011-980b-46ab-a07e-5641cec89f8d 41a1a28a */     'tid' => '%term:tid',
   /* term_view__panel_context_26eb9011-980b-46ab-a07e-5641cec89f8d 41a1a28a */   ),
   /* term_view__panel_context_26eb9011-980b-46ab-a07e-5641cec89f8d 41a1a28a */ );
   /* term_view__panel_context_26eb9011-980b-46ab-a07e-5641cec89f8d 41a1a28a */ $pane->cache = array();
   /* term_view__panel_context_26eb9011-980b-46ab-a07e-5641cec89f8d 41a1a28a */ $pane->style = array(
   /* term_view__panel_context_26eb9011-980b-46ab-a07e-5641cec89f8d 41a1a28a */   'settings' => NULL,
   /* term_view__panel_context_26eb9011-980b-46ab-a07e-5641cec89f8d 41a1a28a */ );
   /* term_view__panel_context_26eb9011-980b-46ab-a07e-5641cec89f8d 41a1a28a */ $pane->css = array();
   /* term_view__panel_context_26eb9011-980b-46ab-a07e-5641cec89f8d 41a1a28a */ $pane->extras = array();
   /* term_view__panel_context_26eb9011-980b-46ab-a07e-5641cec89f8d 41a1a28a */ $pane->position = 4;
   /* term_view__panel_context_26eb9011-980b-46ab-a07e-5641cec89f8d 41a1a28a */ $pane->locks = array();
   /* term_view__panel_context_26eb9011-980b-46ab-a07e-5641cec89f8d 41a1a28a */ $pane->uuid = '41a1a28a-57e4-4161-ac56-66b239881e6b';
  $display->content['new-41a1a28a-57e4-4161-ac56-66b239881e6b'] = $pane;
  $display->panels['homepage_layout__main'][4] = 'new-41a1a28a-57e4-4161-ac56-66b239881e6b';
   /* term_view__panel_context_26eb9011-980b-46ab-a07e-5641cec89f8d 306a3985 */ $pane = new stdClass();
   /* term_view__panel_context_26eb9011-980b-46ab-a07e-5641cec89f8d 306a3985 */ $pane->pid = 'new-306a3985-4257-4826-909e-96772e14a28d';
   /* term_view__panel_context_26eb9011-980b-46ab-a07e-5641cec89f8d 306a3985 */ $pane->panel = 'homepage_layout__main';
   /* term_view__panel_context_26eb9011-980b-46ab-a07e-5641cec89f8d 306a3985 */ $pane->type = 'views_panes';
   /* term_view__panel_context_26eb9011-980b-46ab-a07e-5641cec89f8d 306a3985 */ $pane->subtype = 'topics-panel_pane_16';
   /* term_view__panel_context_26eb9011-980b-46ab-a07e-5641cec89f8d 306a3985 */ $pane->shown = TRUE;
   /* term_view__panel_context_26eb9011-980b-46ab-a07e-5641cec89f8d 306a3985 */ $pane->access = array();
   /* term_view__panel_context_26eb9011-980b-46ab-a07e-5641cec89f8d 306a3985 */ $pane->configuration = array(
   /* term_view__panel_context_26eb9011-980b-46ab-a07e-5641cec89f8d 306a3985 */   'arguments' => array(
   /* term_view__panel_context_26eb9011-980b-46ab-a07e-5641cec89f8d 306a3985 */     'tid' => '%term:tid',
   /* term_view__panel_context_26eb9011-980b-46ab-a07e-5641cec89f8d 306a3985 */   ),
   /* term_view__panel_context_26eb9011-980b-46ab-a07e-5641cec89f8d 306a3985 */ );
   /* term_view__panel_context_26eb9011-980b-46ab-a07e-5641cec89f8d 306a3985 */ $pane->cache = array();
   /* term_view__panel_context_26eb9011-980b-46ab-a07e-5641cec89f8d 306a3985 */ $pane->style = array(
   /* term_view__panel_context_26eb9011-980b-46ab-a07e-5641cec89f8d 306a3985 */   'settings' => NULL,
   /* term_view__panel_context_26eb9011-980b-46ab-a07e-5641cec89f8d 306a3985 */ );
   /* term_view__panel_context_26eb9011-980b-46ab-a07e-5641cec89f8d 306a3985 */ $pane->css = array();
   /* term_view__panel_context_26eb9011-980b-46ab-a07e-5641cec89f8d 306a3985 */ $pane->extras = array();
   /* term_view__panel_context_26eb9011-980b-46ab-a07e-5641cec89f8d 306a3985 */ $pane->position = 5;
   /* term_view__panel_context_26eb9011-980b-46ab-a07e-5641cec89f8d 306a3985 */ $pane->locks = array();
   /* term_view__panel_context_26eb9011-980b-46ab-a07e-5641cec89f8d 306a3985 */ $pane->uuid = '306a3985-4257-4826-909e-96772e14a28d';
  $display->content['new-306a3985-4257-4826-909e-96772e14a28d'] = $pane;
  $display->panels['homepage_layout__main'][5] = 'new-306a3985-4257-4826-909e-96772e14a28d';
   /* term_view__panel_context_26eb9011-980b-46ab-a07e-5641cec89f8d f66cd0d4 */ $pane = new stdClass();
   /* term_view__panel_context_26eb9011-980b-46ab-a07e-5641cec89f8d f66cd0d4 */ $pane->pid = 'new-f66cd0d4-98c9-4264-a53f-806d57c2d1ab';
   /* term_view__panel_context_26eb9011-980b-46ab-a07e-5641cec89f8d f66cd0d4 */ $pane->panel = 'homepage_layout__main';
   /* term_view__panel_context_26eb9011-980b-46ab-a07e-5641cec89f8d f66cd0d4 */ $pane->type = 'views_panes';
   /* term_view__panel_context_26eb9011-980b-46ab-a07e-5641cec89f8d f66cd0d4 */ $pane->subtype = 'resources-panel_pane_3';
   /* term_view__panel_context_26eb9011-980b-46ab-a07e-5641cec89f8d f66cd0d4 */ $pane->shown = TRUE;
   /* term_view__panel_context_26eb9011-980b-46ab-a07e-5641cec89f8d f66cd0d4 */ $pane->access = array();
   /* term_view__panel_context_26eb9011-980b-46ab-a07e-5641cec89f8d f66cd0d4 */ $pane->configuration = array(
   /* term_view__panel_context_26eb9011-980b-46ab-a07e-5641cec89f8d f66cd0d4 */   'arguments' => array(
   /* term_view__panel_context_26eb9011-980b-46ab-a07e-5641cec89f8d f66cd0d4 */     'tid' => '%term:tid',
   /* term_view__panel_context_26eb9011-980b-46ab-a07e-5641cec89f8d f66cd0d4 */   ),
   /* term_view__panel_context_26eb9011-980b-46ab-a07e-5641cec89f8d f66cd0d4 */ );
   /* term_view__panel_context_26eb9011-980b-46ab-a07e-5641cec89f8d f66cd0d4 */ $pane->cache = array();
   /* term_view__panel_context_26eb9011-980b-46ab-a07e-5641cec89f8d f66cd0d4 */ $pane->style = array(
   /* term_view__panel_context_26eb9011-980b-46ab-a07e-5641cec89f8d f66cd0d4 */   'settings' => NULL,
   /* term_view__panel_context_26eb9011-980b-46ab-a07e-5641cec89f8d f66cd0d4 */ );
   /* term_view__panel_context_26eb9011-980b-46ab-a07e-5641cec89f8d f66cd0d4 */ $pane->css = array();
   /* term_view__panel_context_26eb9011-980b-46ab-a07e-5641cec89f8d f66cd0d4 */ $pane->extras = array();
   /* term_view__panel_context_26eb9011-980b-46ab-a07e-5641cec89f8d f66cd0d4 */ $pane->position = 6;
   /* term_view__panel_context_26eb9011-980b-46ab-a07e-5641cec89f8d f66cd0d4 */ $pane->locks = array();
   /* term_view__panel_context_26eb9011-980b-46ab-a07e-5641cec89f8d f66cd0d4 */ $pane->uuid = 'f66cd0d4-98c9-4264-a53f-806d57c2d1ab';
  $display->content['new-f66cd0d4-98c9-4264-a53f-806d57c2d1ab'] = $pane;
  $display->panels['homepage_layout__main'][6] = 'new-f66cd0d4-98c9-4264-a53f-806d57c2d1ab';
   /* term_view__panel_context_26eb9011-980b-46ab-a07e-5641cec89f8d 53be0bed */ $pane = new stdClass();
   /* term_view__panel_context_26eb9011-980b-46ab-a07e-5641cec89f8d 53be0bed */ $pane->pid = 'new-53be0bed-75d7-4bd9-99a3-81bdd57527b1';
   /* term_view__panel_context_26eb9011-980b-46ab-a07e-5641cec89f8d 53be0bed */ $pane->panel = 'homepage_layout__search';
   /* term_view__panel_context_26eb9011-980b-46ab-a07e-5641cec89f8d 53be0bed */ $pane->type = 'views_panes';
   /* term_view__panel_context_26eb9011-980b-46ab-a07e-5641cec89f8d 53be0bed */ $pane->subtype = 'topics-panel_pane_11';
   /* term_view__panel_context_26eb9011-980b-46ab-a07e-5641cec89f8d 53be0bed */ $pane->shown = TRUE;
   /* term_view__panel_context_26eb9011-980b-46ab-a07e-5641cec89f8d 53be0bed */ $pane->access = array();
   /* term_view__panel_context_26eb9011-980b-46ab-a07e-5641cec89f8d 53be0bed */ $pane->configuration = array(
   /* term_view__panel_context_26eb9011-980b-46ab-a07e-5641cec89f8d 53be0bed */   'arguments' => array(
   /* term_view__panel_context_26eb9011-980b-46ab-a07e-5641cec89f8d 53be0bed */     'tid' => '%term:tid',
   /* term_view__panel_context_26eb9011-980b-46ab-a07e-5641cec89f8d 53be0bed */   ),
   /* term_view__panel_context_26eb9011-980b-46ab-a07e-5641cec89f8d 53be0bed */ );
   /* term_view__panel_context_26eb9011-980b-46ab-a07e-5641cec89f8d 53be0bed */ $pane->cache = array();
   /* term_view__panel_context_26eb9011-980b-46ab-a07e-5641cec89f8d 53be0bed */ $pane->style = array(
   /* term_view__panel_context_26eb9011-980b-46ab-a07e-5641cec89f8d 53be0bed */   'settings' => NULL,
   /* term_view__panel_context_26eb9011-980b-46ab-a07e-5641cec89f8d 53be0bed */ );
   /* term_view__panel_context_26eb9011-980b-46ab-a07e-5641cec89f8d 53be0bed */ $pane->css = array();
   /* term_view__panel_context_26eb9011-980b-46ab-a07e-5641cec89f8d 53be0bed */ $pane->extras = array();
   /* term_view__panel_context_26eb9011-980b-46ab-a07e-5641cec89f8d 53be0bed */ $pane->position = 0;
   /* term_view__panel_context_26eb9011-980b-46ab-a07e-5641cec89f8d 53be0bed */ $pane->locks = array();
   /* term_view__panel_context_26eb9011-980b-46ab-a07e-5641cec89f8d 53be0bed */ $pane->uuid = '53be0bed-75d7-4bd9-99a3-81bdd57527b1';
  $display->content['new-53be0bed-75d7-4bd9-99a3-81bdd57527b1'] = $pane;
  $display->panels['homepage_layout__search'][0] = 'new-53be0bed-75d7-4bd9-99a3-81bdd57527b1';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['term_view__panel_context_3110175d-9b15-4323-96aa-d68a7c96b815'] = $handler;

   /* term_view__tags-detail-page */ $handler = new stdClass();
   /* term_view__tags-detail-page */ $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
   /* term_view__tags-detail-page */ $handler->api_version = 1;
   /* term_view__tags-detail-page */ $handler->name = 'term_view__tags-detail-page';
   /* term_view__tags-detail-page */ $handler->task = 'term_view';
   /* term_view__tags-detail-page */ $handler->subtask = '';
   /* term_view__tags-detail-page */ $handler->handler = 'panel_context';
   /* term_view__tags-detail-page */ $handler->weight = -97;
   /* term_view__tags-detail-page */ $handler->conf = array(
   /* term_view__tags-detail-page */   'title' => 'Tags Detail Page',
   /* term_view__tags-detail-page */   'no_blocks' => 1,
   /* term_view__tags-detail-page */   'pipeline' => 'standard',
   /* term_view__tags-detail-page */   'body_classes_to_remove' => '',
   /* term_view__tags-detail-page */   'body_classes_to_add' => '',
   /* term_view__tags-detail-page */   'css_id' => 'topics-detail-content',
   /* term_view__tags-detail-page */   'css' => '',
   /* term_view__tags-detail-page */   'contexts' => array(),
   /* term_view__tags-detail-page */   'relationships' => array(),
   /* term_view__tags-detail-page */   'access' => array(
   /* term_view__tags-detail-page */     'plugins' => array(
   /* term_view__tags-detail-page */       0 => array(
   /* term_view__tags-detail-page */         'name' => 'entity_bundle:taxonomy_term',
   /* term_view__tags-detail-page */         'settings' => array(
   /* term_view__tags-detail-page */           'type' => array(
   /* term_view__tags-detail-page */             'tags' => 'tags',
   /* term_view__tags-detail-page */           ),
   /* term_view__tags-detail-page */         ),
   /* term_view__tags-detail-page */         'context' => 'argument_term_1',
   /* term_view__tags-detail-page */         'not' => FALSE,
   /* term_view__tags-detail-page */       ),
   /* term_view__tags-detail-page */     ),
   /* term_view__tags-detail-page */     'logic' => 'and',
   /* term_view__tags-detail-page */   ),
   /* term_view__tags-detail-page */   'name' => 'tags-detail-page',
   /* term_view__tags-detail-page */ );
   /* term_view__panel_context_3110175d-9b15-4323-96aa-d68a7c96b815 e9f64a93 */ $display = new panels_display();
   /* term_view__panel_context_3110175d-9b15-4323-96aa-d68a7c96b815 e9f64a93 */ $display->layout = 'home_layout';
   /* term_view__panel_context_3110175d-9b15-4323-96aa-d68a7c96b815 e9f64a93 */ $display->layout_settings = array();
   /* term_view__panel_context_3110175d-9b15-4323-96aa-d68a7c96b815 e9f64a93 */ $display->panel_settings = array(
   /* term_view__panel_context_3110175d-9b15-4323-96aa-d68a7c96b815 e9f64a93 */   'style_settings' => array(
   /* term_view__panel_context_3110175d-9b15-4323-96aa-d68a7c96b815 e9f64a93 */     'default' => NULL,
   /* term_view__panel_context_3110175d-9b15-4323-96aa-d68a7c96b815 e9f64a93 */     'homepage_layout__top__left' => NULL,
   /* term_view__panel_context_3110175d-9b15-4323-96aa-d68a7c96b815 e9f64a93 */     'homepage_layout__top__right' => NULL,
   /* term_view__panel_context_3110175d-9b15-4323-96aa-d68a7c96b815 e9f64a93 */     'homepage_layout__search' => NULL,
   /* term_view__panel_context_3110175d-9b15-4323-96aa-d68a7c96b815 e9f64a93 */     'homepage_layout__main' => NULL,
   /* term_view__panel_context_3110175d-9b15-4323-96aa-d68a7c96b815 e9f64a93 */   ),
   /* term_view__panel_context_3110175d-9b15-4323-96aa-d68a7c96b815 e9f64a93 */   'homepage_layout__main' => array(
   /* term_view__panel_context_3110175d-9b15-4323-96aa-d68a7c96b815 e9f64a93 */     'style' => 'tabs',
   /* term_view__panel_context_3110175d-9b15-4323-96aa-d68a7c96b815 e9f64a93 */   ),
   /* term_view__panel_context_3110175d-9b15-4323-96aa-d68a7c96b815 e9f64a93 */ );
   /* term_view__panel_context_3110175d-9b15-4323-96aa-d68a7c96b815 e9f64a93 */ $display->cache = array();
   /* term_view__panel_context_3110175d-9b15-4323-96aa-d68a7c96b815 e9f64a93 */ $display->title = '%term:name';
   /* term_view__panel_context_3110175d-9b15-4323-96aa-d68a7c96b815 e9f64a93 */ $display->uuid = 'e9f64a93-c6ae-4751-906d-690508a26dcc';
   /* term_view__panel_context_3110175d-9b15-4323-96aa-d68a7c96b815 e9f64a93 */ $display->storage_type = 'page_manager';
   /* term_view__panel_context_3110175d-9b15-4323-96aa-d68a7c96b815 e9f64a93 */ $display->storage_id = 'term_view__tags-detail-page';
  $display->content = array();
  $display->panels = array();
   /* term_view__panel_context_3110175d-9b15-4323-96aa-d68a7c96b815 bc264fb7 */ $pane = new stdClass();
   /* term_view__panel_context_3110175d-9b15-4323-96aa-d68a7c96b815 bc264fb7 */ $pane->pid = 'new-bc264fb7-b924-4c45-9d1a-ea94150b9e53';
   /* term_view__panel_context_3110175d-9b15-4323-96aa-d68a7c96b815 bc264fb7 */ $pane->panel = 'homepage_layout__main';
   /* term_view__panel_context_3110175d-9b15-4323-96aa-d68a7c96b815 bc264fb7 */ $pane->type = 'views_panes';
   /* term_view__panel_context_3110175d-9b15-4323-96aa-d68a7c96b815 bc264fb7 */ $pane->subtype = 'topics-panel_pane_18';
   /* term_view__panel_context_3110175d-9b15-4323-96aa-d68a7c96b815 bc264fb7 */ $pane->shown = TRUE;
   /* term_view__panel_context_3110175d-9b15-4323-96aa-d68a7c96b815 bc264fb7 */ $pane->access = array();
   /* term_view__panel_context_3110175d-9b15-4323-96aa-d68a7c96b815 bc264fb7 */ $pane->configuration = array(
   /* term_view__panel_context_3110175d-9b15-4323-96aa-d68a7c96b815 bc264fb7 */   'arguments' => array(
   /* term_view__panel_context_3110175d-9b15-4323-96aa-d68a7c96b815 bc264fb7 */     'field_tags_tid' => '%term:tid',
   /* term_view__panel_context_3110175d-9b15-4323-96aa-d68a7c96b815 bc264fb7 */   ),
   /* term_view__panel_context_3110175d-9b15-4323-96aa-d68a7c96b815 bc264fb7 */ );
   /* term_view__panel_context_3110175d-9b15-4323-96aa-d68a7c96b815 bc264fb7 */ $pane->cache = array();
   /* term_view__panel_context_3110175d-9b15-4323-96aa-d68a7c96b815 bc264fb7 */ $pane->style = array(
   /* term_view__panel_context_3110175d-9b15-4323-96aa-d68a7c96b815 bc264fb7 */   'settings' => NULL,
   /* term_view__panel_context_3110175d-9b15-4323-96aa-d68a7c96b815 bc264fb7 */ );
   /* term_view__panel_context_3110175d-9b15-4323-96aa-d68a7c96b815 bc264fb7 */ $pane->css = array();
   /* term_view__panel_context_3110175d-9b15-4323-96aa-d68a7c96b815 bc264fb7 */ $pane->extras = array();
   /* term_view__panel_context_3110175d-9b15-4323-96aa-d68a7c96b815 bc264fb7 */ $pane->position = 0;
   /* term_view__panel_context_3110175d-9b15-4323-96aa-d68a7c96b815 bc264fb7 */ $pane->locks = array();
   /* term_view__panel_context_3110175d-9b15-4323-96aa-d68a7c96b815 bc264fb7 */ $pane->uuid = 'bc264fb7-b924-4c45-9d1a-ea94150b9e53';
  $display->content['new-bc264fb7-b924-4c45-9d1a-ea94150b9e53'] = $pane;
  $display->panels['homepage_layout__main'][0] = 'new-bc264fb7-b924-4c45-9d1a-ea94150b9e53';
   /* term_view__panel_context_3110175d-9b15-4323-96aa-d68a7c96b815 ea81d259 */ $pane = new stdClass();
   /* term_view__panel_context_3110175d-9b15-4323-96aa-d68a7c96b815 ea81d259 */ $pane->pid = 'new-ea81d259-2968-4365-bf2e-19e966881056';
   /* term_view__panel_context_3110175d-9b15-4323-96aa-d68a7c96b815 ea81d259 */ $pane->panel = 'homepage_layout__main';
   /* term_view__panel_context_3110175d-9b15-4323-96aa-d68a7c96b815 ea81d259 */ $pane->type = 'views_panes';
   /* term_view__panel_context_3110175d-9b15-4323-96aa-d68a7c96b815 ea81d259 */ $pane->subtype = 'topics-panel_pane_19';
   /* term_view__panel_context_3110175d-9b15-4323-96aa-d68a7c96b815 ea81d259 */ $pane->shown = TRUE;
   /* term_view__panel_context_3110175d-9b15-4323-96aa-d68a7c96b815 ea81d259 */ $pane->access = array();
   /* term_view__panel_context_3110175d-9b15-4323-96aa-d68a7c96b815 ea81d259 */ $pane->configuration = array(
   /* term_view__panel_context_3110175d-9b15-4323-96aa-d68a7c96b815 ea81d259 */   'arguments' => array(
   /* term_view__panel_context_3110175d-9b15-4323-96aa-d68a7c96b815 ea81d259 */     'field_tags_tid' => '%term:tid',
   /* term_view__panel_context_3110175d-9b15-4323-96aa-d68a7c96b815 ea81d259 */   ),
   /* term_view__panel_context_3110175d-9b15-4323-96aa-d68a7c96b815 ea81d259 */ );
   /* term_view__panel_context_3110175d-9b15-4323-96aa-d68a7c96b815 ea81d259 */ $pane->cache = array();
   /* term_view__panel_context_3110175d-9b15-4323-96aa-d68a7c96b815 ea81d259 */ $pane->style = array(
   /* term_view__panel_context_3110175d-9b15-4323-96aa-d68a7c96b815 ea81d259 */   'settings' => NULL,
   /* term_view__panel_context_3110175d-9b15-4323-96aa-d68a7c96b815 ea81d259 */ );
   /* term_view__panel_context_3110175d-9b15-4323-96aa-d68a7c96b815 ea81d259 */ $pane->css = array();
   /* term_view__panel_context_3110175d-9b15-4323-96aa-d68a7c96b815 ea81d259 */ $pane->extras = array();
   /* term_view__panel_context_3110175d-9b15-4323-96aa-d68a7c96b815 ea81d259 */ $pane->position = 1;
   /* term_view__panel_context_3110175d-9b15-4323-96aa-d68a7c96b815 ea81d259 */ $pane->locks = array();
   /* term_view__panel_context_3110175d-9b15-4323-96aa-d68a7c96b815 ea81d259 */ $pane->uuid = 'ea81d259-2968-4365-bf2e-19e966881056';
  $display->content['new-ea81d259-2968-4365-bf2e-19e966881056'] = $pane;
  $display->panels['homepage_layout__main'][1] = 'new-ea81d259-2968-4365-bf2e-19e966881056';
   /* term_view__panel_context_3110175d-9b15-4323-96aa-d68a7c96b815 bd653d54 */ $pane = new stdClass();
   /* term_view__panel_context_3110175d-9b15-4323-96aa-d68a7c96b815 bd653d54 */ $pane->pid = 'new-bd653d54-363b-4366-b77b-48fc00ad15d3';
   /* term_view__panel_context_3110175d-9b15-4323-96aa-d68a7c96b815 bd653d54 */ $pane->panel = 'homepage_layout__main';
   /* term_view__panel_context_3110175d-9b15-4323-96aa-d68a7c96b815 bd653d54 */ $pane->type = 'views_panes';
   /* term_view__panel_context_3110175d-9b15-4323-96aa-d68a7c96b815 bd653d54 */ $pane->subtype = 'topics-panel_pane_20';
   /* term_view__panel_context_3110175d-9b15-4323-96aa-d68a7c96b815 bd653d54 */ $pane->shown = TRUE;
   /* term_view__panel_context_3110175d-9b15-4323-96aa-d68a7c96b815 bd653d54 */ $pane->access = array();
   /* term_view__panel_context_3110175d-9b15-4323-96aa-d68a7c96b815 bd653d54 */ $pane->configuration = array(
   /* term_view__panel_context_3110175d-9b15-4323-96aa-d68a7c96b815 bd653d54 */   'arguments' => array(
   /* term_view__panel_context_3110175d-9b15-4323-96aa-d68a7c96b815 bd653d54 */     'field_tags_tid' => '%term:tid',
   /* term_view__panel_context_3110175d-9b15-4323-96aa-d68a7c96b815 bd653d54 */   ),
   /* term_view__panel_context_3110175d-9b15-4323-96aa-d68a7c96b815 bd653d54 */ );
   /* term_view__panel_context_3110175d-9b15-4323-96aa-d68a7c96b815 bd653d54 */ $pane->cache = array();
   /* term_view__panel_context_3110175d-9b15-4323-96aa-d68a7c96b815 bd653d54 */ $pane->style = array(
   /* term_view__panel_context_3110175d-9b15-4323-96aa-d68a7c96b815 bd653d54 */   'settings' => NULL,
   /* term_view__panel_context_3110175d-9b15-4323-96aa-d68a7c96b815 bd653d54 */ );
   /* term_view__panel_context_3110175d-9b15-4323-96aa-d68a7c96b815 bd653d54 */ $pane->css = array();
   /* term_view__panel_context_3110175d-9b15-4323-96aa-d68a7c96b815 bd653d54 */ $pane->extras = array();
   /* term_view__panel_context_3110175d-9b15-4323-96aa-d68a7c96b815 bd653d54 */ $pane->position = 2;
   /* term_view__panel_context_3110175d-9b15-4323-96aa-d68a7c96b815 bd653d54 */ $pane->locks = array();
   /* term_view__panel_context_3110175d-9b15-4323-96aa-d68a7c96b815 bd653d54 */ $pane->uuid = 'bd653d54-363b-4366-b77b-48fc00ad15d3';
  $display->content['new-bd653d54-363b-4366-b77b-48fc00ad15d3'] = $pane;
  $display->panels['homepage_layout__main'][2] = 'new-bd653d54-363b-4366-b77b-48fc00ad15d3';
   /* term_view__panel_context_3110175d-9b15-4323-96aa-d68a7c96b815 4813ef5d */ $pane = new stdClass();
   /* term_view__panel_context_3110175d-9b15-4323-96aa-d68a7c96b815 4813ef5d */ $pane->pid = 'new-4813ef5d-6347-461e-aff4-4955be020f94';
   /* term_view__panel_context_3110175d-9b15-4323-96aa-d68a7c96b815 4813ef5d */ $pane->panel = 'homepage_layout__main';
   /* term_view__panel_context_3110175d-9b15-4323-96aa-d68a7c96b815 4813ef5d */ $pane->type = 'views_panes';
   /* term_view__panel_context_3110175d-9b15-4323-96aa-d68a7c96b815 4813ef5d */ $pane->subtype = 'topics-panel_pane_21';
   /* term_view__panel_context_3110175d-9b15-4323-96aa-d68a7c96b815 4813ef5d */ $pane->shown = TRUE;
   /* term_view__panel_context_3110175d-9b15-4323-96aa-d68a7c96b815 4813ef5d */ $pane->access = array();
   /* term_view__panel_context_3110175d-9b15-4323-96aa-d68a7c96b815 4813ef5d */ $pane->configuration = array(
   /* term_view__panel_context_3110175d-9b15-4323-96aa-d68a7c96b815 4813ef5d */   'arguments' => array(
   /* term_view__panel_context_3110175d-9b15-4323-96aa-d68a7c96b815 4813ef5d */     'field_tags_tid' => '%term:tid',
   /* term_view__panel_context_3110175d-9b15-4323-96aa-d68a7c96b815 4813ef5d */   ),
   /* term_view__panel_context_3110175d-9b15-4323-96aa-d68a7c96b815 4813ef5d */ );
   /* term_view__panel_context_3110175d-9b15-4323-96aa-d68a7c96b815 4813ef5d */ $pane->cache = array();
   /* term_view__panel_context_3110175d-9b15-4323-96aa-d68a7c96b815 4813ef5d */ $pane->style = array(
   /* term_view__panel_context_3110175d-9b15-4323-96aa-d68a7c96b815 4813ef5d */   'settings' => NULL,
   /* term_view__panel_context_3110175d-9b15-4323-96aa-d68a7c96b815 4813ef5d */ );
   /* term_view__panel_context_3110175d-9b15-4323-96aa-d68a7c96b815 4813ef5d */ $pane->css = array();
   /* term_view__panel_context_3110175d-9b15-4323-96aa-d68a7c96b815 4813ef5d */ $pane->extras = array();
   /* term_view__panel_context_3110175d-9b15-4323-96aa-d68a7c96b815 4813ef5d */ $pane->position = 3;
   /* term_view__panel_context_3110175d-9b15-4323-96aa-d68a7c96b815 4813ef5d */ $pane->locks = array();
   /* term_view__panel_context_3110175d-9b15-4323-96aa-d68a7c96b815 4813ef5d */ $pane->uuid = '4813ef5d-6347-461e-aff4-4955be020f94';
  $display->content['new-4813ef5d-6347-461e-aff4-4955be020f94'] = $pane;
  $display->panels['homepage_layout__main'][3] = 'new-4813ef5d-6347-461e-aff4-4955be020f94';
   /* term_view__panel_context_3110175d-9b15-4323-96aa-d68a7c96b815 82f78fed */ $pane = new stdClass();
   /* term_view__panel_context_3110175d-9b15-4323-96aa-d68a7c96b815 82f78fed */ $pane->pid = 'new-82f78fed-027f-4faa-a5de-c558be01a5f4';
   /* term_view__panel_context_3110175d-9b15-4323-96aa-d68a7c96b815 82f78fed */ $pane->panel = 'homepage_layout__main';
   /* term_view__panel_context_3110175d-9b15-4323-96aa-d68a7c96b815 82f78fed */ $pane->type = 'views_panes';
   /* term_view__panel_context_3110175d-9b15-4323-96aa-d68a7c96b815 82f78fed */ $pane->subtype = 'topics-panel_pane_22';
   /* term_view__panel_context_3110175d-9b15-4323-96aa-d68a7c96b815 82f78fed */ $pane->shown = TRUE;
   /* term_view__panel_context_3110175d-9b15-4323-96aa-d68a7c96b815 82f78fed */ $pane->access = array();
   /* term_view__panel_context_3110175d-9b15-4323-96aa-d68a7c96b815 82f78fed */ $pane->configuration = array(
   /* term_view__panel_context_3110175d-9b15-4323-96aa-d68a7c96b815 82f78fed */   'arguments' => array(
   /* term_view__panel_context_3110175d-9b15-4323-96aa-d68a7c96b815 82f78fed */     'field_tags_tid' => '%term:tid',
   /* term_view__panel_context_3110175d-9b15-4323-96aa-d68a7c96b815 82f78fed */   ),
   /* term_view__panel_context_3110175d-9b15-4323-96aa-d68a7c96b815 82f78fed */ );
   /* term_view__panel_context_3110175d-9b15-4323-96aa-d68a7c96b815 82f78fed */ $pane->cache = array();
   /* term_view__panel_context_3110175d-9b15-4323-96aa-d68a7c96b815 82f78fed */ $pane->style = array(
   /* term_view__panel_context_3110175d-9b15-4323-96aa-d68a7c96b815 82f78fed */   'settings' => NULL,
   /* term_view__panel_context_3110175d-9b15-4323-96aa-d68a7c96b815 82f78fed */ );
   /* term_view__panel_context_3110175d-9b15-4323-96aa-d68a7c96b815 82f78fed */ $pane->css = array();
   /* term_view__panel_context_3110175d-9b15-4323-96aa-d68a7c96b815 82f78fed */ $pane->extras = array();
   /* term_view__panel_context_3110175d-9b15-4323-96aa-d68a7c96b815 82f78fed */ $pane->position = 4;
   /* term_view__panel_context_3110175d-9b15-4323-96aa-d68a7c96b815 82f78fed */ $pane->locks = array();
   /* term_view__panel_context_3110175d-9b15-4323-96aa-d68a7c96b815 82f78fed */ $pane->uuid = '82f78fed-027f-4faa-a5de-c558be01a5f4';
  $display->content['new-82f78fed-027f-4faa-a5de-c558be01a5f4'] = $pane;
  $display->panels['homepage_layout__main'][4] = 'new-82f78fed-027f-4faa-a5de-c558be01a5f4';
   /* term_view__panel_context_3110175d-9b15-4323-96aa-d68a7c96b815 0bb17c3b */ $pane = new stdClass();
   /* term_view__panel_context_3110175d-9b15-4323-96aa-d68a7c96b815 0bb17c3b */ $pane->pid = 'new-0bb17c3b-e07c-41b1-8d91-7fa8e573b2be';
   /* term_view__panel_context_3110175d-9b15-4323-96aa-d68a7c96b815 0bb17c3b */ $pane->panel = 'homepage_layout__main';
   /* term_view__panel_context_3110175d-9b15-4323-96aa-d68a7c96b815 0bb17c3b */ $pane->type = 'views_panes';
   /* term_view__panel_context_3110175d-9b15-4323-96aa-d68a7c96b815 0bb17c3b */ $pane->subtype = 'topics-panel_pane_23';
   /* term_view__panel_context_3110175d-9b15-4323-96aa-d68a7c96b815 0bb17c3b */ $pane->shown = TRUE;
   /* term_view__panel_context_3110175d-9b15-4323-96aa-d68a7c96b815 0bb17c3b */ $pane->access = array();
   /* term_view__panel_context_3110175d-9b15-4323-96aa-d68a7c96b815 0bb17c3b */ $pane->configuration = array(
   /* term_view__panel_context_3110175d-9b15-4323-96aa-d68a7c96b815 0bb17c3b */   'arguments' => array(
   /* term_view__panel_context_3110175d-9b15-4323-96aa-d68a7c96b815 0bb17c3b */     'field_tags_tid' => '%term:tid',
   /* term_view__panel_context_3110175d-9b15-4323-96aa-d68a7c96b815 0bb17c3b */   ),
   /* term_view__panel_context_3110175d-9b15-4323-96aa-d68a7c96b815 0bb17c3b */ );
   /* term_view__panel_context_3110175d-9b15-4323-96aa-d68a7c96b815 0bb17c3b */ $pane->cache = array();
   /* term_view__panel_context_3110175d-9b15-4323-96aa-d68a7c96b815 0bb17c3b */ $pane->style = array(
   /* term_view__panel_context_3110175d-9b15-4323-96aa-d68a7c96b815 0bb17c3b */   'settings' => NULL,
   /* term_view__panel_context_3110175d-9b15-4323-96aa-d68a7c96b815 0bb17c3b */ );
   /* term_view__panel_context_3110175d-9b15-4323-96aa-d68a7c96b815 0bb17c3b */ $pane->css = array();
   /* term_view__panel_context_3110175d-9b15-4323-96aa-d68a7c96b815 0bb17c3b */ $pane->extras = array();
   /* term_view__panel_context_3110175d-9b15-4323-96aa-d68a7c96b815 0bb17c3b */ $pane->position = 5;
   /* term_view__panel_context_3110175d-9b15-4323-96aa-d68a7c96b815 0bb17c3b */ $pane->locks = array();
   /* term_view__panel_context_3110175d-9b15-4323-96aa-d68a7c96b815 0bb17c3b */ $pane->uuid = '0bb17c3b-e07c-41b1-8d91-7fa8e573b2be';
  $display->content['new-0bb17c3b-e07c-41b1-8d91-7fa8e573b2be'] = $pane;
  $display->panels['homepage_layout__main'][5] = 'new-0bb17c3b-e07c-41b1-8d91-7fa8e573b2be';
   /* term_view__panel_context_3110175d-9b15-4323-96aa-d68a7c96b815 527959ef */ $pane = new stdClass();
   /* term_view__panel_context_3110175d-9b15-4323-96aa-d68a7c96b815 527959ef */ $pane->pid = 'new-527959ef-e7c2-449a-884f-bc1dae9cfadb';
   /* term_view__panel_context_3110175d-9b15-4323-96aa-d68a7c96b815 527959ef */ $pane->panel = 'homepage_layout__main';
   /* term_view__panel_context_3110175d-9b15-4323-96aa-d68a7c96b815 527959ef */ $pane->type = 'views_panes';
   /* term_view__panel_context_3110175d-9b15-4323-96aa-d68a7c96b815 527959ef */ $pane->subtype = 'topics-panel_pane_24';
   /* term_view__panel_context_3110175d-9b15-4323-96aa-d68a7c96b815 527959ef */ $pane->shown = TRUE;
   /* term_view__panel_context_3110175d-9b15-4323-96aa-d68a7c96b815 527959ef */ $pane->access = array();
   /* term_view__panel_context_3110175d-9b15-4323-96aa-d68a7c96b815 527959ef */ $pane->configuration = array(
   /* term_view__panel_context_3110175d-9b15-4323-96aa-d68a7c96b815 527959ef */   'arguments' => array(
   /* term_view__panel_context_3110175d-9b15-4323-96aa-d68a7c96b815 527959ef */     'field_tags_tid' => '%term:tid',
   /* term_view__panel_context_3110175d-9b15-4323-96aa-d68a7c96b815 527959ef */   ),
   /* term_view__panel_context_3110175d-9b15-4323-96aa-d68a7c96b815 527959ef */ );
   /* term_view__panel_context_3110175d-9b15-4323-96aa-d68a7c96b815 527959ef */ $pane->cache = array();
   /* term_view__panel_context_3110175d-9b15-4323-96aa-d68a7c96b815 527959ef */ $pane->style = array(
   /* term_view__panel_context_3110175d-9b15-4323-96aa-d68a7c96b815 527959ef */   'settings' => NULL,
   /* term_view__panel_context_3110175d-9b15-4323-96aa-d68a7c96b815 527959ef */ );
   /* term_view__panel_context_3110175d-9b15-4323-96aa-d68a7c96b815 527959ef */ $pane->css = array();
   /* term_view__panel_context_3110175d-9b15-4323-96aa-d68a7c96b815 527959ef */ $pane->extras = array();
   /* term_view__panel_context_3110175d-9b15-4323-96aa-d68a7c96b815 527959ef */ $pane->position = 6;
   /* term_view__panel_context_3110175d-9b15-4323-96aa-d68a7c96b815 527959ef */ $pane->locks = array();
   /* term_view__panel_context_3110175d-9b15-4323-96aa-d68a7c96b815 527959ef */ $pane->uuid = '527959ef-e7c2-449a-884f-bc1dae9cfadb';
  $display->content['new-527959ef-e7c2-449a-884f-bc1dae9cfadb'] = $pane;
  $display->panels['homepage_layout__main'][6] = 'new-527959ef-e7c2-449a-884f-bc1dae9cfadb';
   /* term_view__panel_context_3110175d-9b15-4323-96aa-d68a7c96b815 25510cfa */ $pane = new stdClass();
   /* term_view__panel_context_3110175d-9b15-4323-96aa-d68a7c96b815 25510cfa */ $pane->pid = 'new-25510cfa-3ba3-4a62-8221-a80daa620231';
   /* term_view__panel_context_3110175d-9b15-4323-96aa-d68a7c96b815 25510cfa */ $pane->panel = 'homepage_layout__search';
   /* term_view__panel_context_3110175d-9b15-4323-96aa-d68a7c96b815 25510cfa */ $pane->type = 'views_panes';
   /* term_view__panel_context_3110175d-9b15-4323-96aa-d68a7c96b815 25510cfa */ $pane->subtype = 'topics-panel_pane_2';
   /* term_view__panel_context_3110175d-9b15-4323-96aa-d68a7c96b815 25510cfa */ $pane->shown = TRUE;
   /* term_view__panel_context_3110175d-9b15-4323-96aa-d68a7c96b815 25510cfa */ $pane->access = array();
   /* term_view__panel_context_3110175d-9b15-4323-96aa-d68a7c96b815 25510cfa */ $pane->configuration = array(
   /* term_view__panel_context_3110175d-9b15-4323-96aa-d68a7c96b815 25510cfa */   'arguments' => array(
   /* term_view__panel_context_3110175d-9b15-4323-96aa-d68a7c96b815 25510cfa */     'tid' => '%term:tid',
   /* term_view__panel_context_3110175d-9b15-4323-96aa-d68a7c96b815 25510cfa */   ),
   /* term_view__panel_context_3110175d-9b15-4323-96aa-d68a7c96b815 25510cfa */ );
   /* term_view__panel_context_3110175d-9b15-4323-96aa-d68a7c96b815 25510cfa */ $pane->cache = array();
   /* term_view__panel_context_3110175d-9b15-4323-96aa-d68a7c96b815 25510cfa */ $pane->style = array(
   /* term_view__panel_context_3110175d-9b15-4323-96aa-d68a7c96b815 25510cfa */   'settings' => NULL,
   /* term_view__panel_context_3110175d-9b15-4323-96aa-d68a7c96b815 25510cfa */ );
   /* term_view__panel_context_3110175d-9b15-4323-96aa-d68a7c96b815 25510cfa */ $pane->css = array();
   /* term_view__panel_context_3110175d-9b15-4323-96aa-d68a7c96b815 25510cfa */ $pane->extras = array();
   /* term_view__panel_context_3110175d-9b15-4323-96aa-d68a7c96b815 25510cfa */ $pane->position = 0;
   /* term_view__panel_context_3110175d-9b15-4323-96aa-d68a7c96b815 25510cfa */ $pane->locks = array();
   /* term_view__panel_context_3110175d-9b15-4323-96aa-d68a7c96b815 25510cfa */ $pane->uuid = '25510cfa-3ba3-4a62-8221-a80daa620231';
  $display->content['new-25510cfa-3ba3-4a62-8221-a80daa620231'] = $pane;
  $display->panels['homepage_layout__search'][0] = 'new-25510cfa-3ba3-4a62-8221-a80daa620231';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['term_view__tags-detail-page'] = $handler;

  return $export;
}

/**
 * Implements hook_default_page_manager_pages().
 */
function gn2_taxonomy_default_page_manager_pages() {
   /* globalnet_countries */ $page = new stdClass();
   /* globalnet_countries */ $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
   /* globalnet_countries */ $page->api_version = 1;
   /* globalnet_countries */ $page->name = 'globalnet_countries';
   /* globalnet_countries */ $page->task = 'page';
   /* globalnet_countries */ $page->admin_title = 'GlobalNET Countries';
   /* globalnet_countries */ $page->admin_description = '';
   /* globalnet_countries */ $page->path = 'countries/!tid';
   /* globalnet_countries */ $page->access = array(
   /* globalnet_countries */   'type' => 'none',
   /* globalnet_countries */   'settings' => NULL,
   /* globalnet_countries */ );
   /* globalnet_countries */ $page->menu = array();
   /* globalnet_countries */ $page->arguments = array(
   /* globalnet_countries */   'tid' => array(
   /* globalnet_countries */     'id' => 1,
   /* globalnet_countries */     'identifier' => 'Taxonomy term: ID',
   /* globalnet_countries */     'name' => 'term',
   /* globalnet_countries */     'settings' => array(
   /* globalnet_countries */       'input_form' => 'term',
   /* globalnet_countries */       'vids' => array(
   /* globalnet_countries */         3 => '3',
   /* globalnet_countries */         7 => 0,
   /* globalnet_countries */         1 => 0,
   /* globalnet_countries */         5 => 0,
   /* globalnet_countries */         4 => 0,
   /* globalnet_countries */         2 => 0,
   /* globalnet_countries */         6 => 0,
   /* globalnet_countries */         8 => 0,
   /* globalnet_countries */       ),
   /* globalnet_countries */       'breadcrumb' => 1,
   /* globalnet_countries */       'transform' => 1,
   /* globalnet_countries */     ),
   /* globalnet_countries */   ),
   /* globalnet_countries */ );
   /* globalnet_countries */ $page->conf = array(
   /* globalnet_countries */   'admin_paths' => FALSE,
   /* globalnet_countries */ );
  $page->default_handlers = array();
   /* page_globalnet_countries__panel_context_b86a0f86-ad4f-44d7-a0ae-15ebc4fed7c8 */ $handler = new stdClass();
   /* page_globalnet_countries__panel_context_b86a0f86-ad4f-44d7-a0ae-15ebc4fed7c8 */ $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
   /* page_globalnet_countries__panel_context_b86a0f86-ad4f-44d7-a0ae-15ebc4fed7c8 */ $handler->api_version = 1;
   /* page_globalnet_countries__panel_context_b86a0f86-ad4f-44d7-a0ae-15ebc4fed7c8 */ $handler->name = 'page_globalnet_countries__panel_context_b86a0f86-ad4f-44d7-a0ae-15ebc4fed7c8';
   /* page_globalnet_countries__panel_context_b86a0f86-ad4f-44d7-a0ae-15ebc4fed7c8 */ $handler->task = 'page';
   /* page_globalnet_countries__panel_context_b86a0f86-ad4f-44d7-a0ae-15ebc4fed7c8 */ $handler->subtask = 'globalnet_countries';
   /* page_globalnet_countries__panel_context_b86a0f86-ad4f-44d7-a0ae-15ebc4fed7c8 */ $handler->handler = 'panel_context';
   /* page_globalnet_countries__panel_context_b86a0f86-ad4f-44d7-a0ae-15ebc4fed7c8 */ $handler->weight = 0;
   /* page_globalnet_countries__panel_context_b86a0f86-ad4f-44d7-a0ae-15ebc4fed7c8 */ $handler->conf = array(
   /* page_globalnet_countries__panel_context_b86a0f86-ad4f-44d7-a0ae-15ebc4fed7c8 */   'title' => 'Countries List',
   /* page_globalnet_countries__panel_context_b86a0f86-ad4f-44d7-a0ae-15ebc4fed7c8 */   'no_blocks' => 1,
   /* page_globalnet_countries__panel_context_b86a0f86-ad4f-44d7-a0ae-15ebc4fed7c8 */   'pipeline' => 'standard',
   /* page_globalnet_countries__panel_context_b86a0f86-ad4f-44d7-a0ae-15ebc4fed7c8 */   'body_classes_to_remove' => '',
   /* page_globalnet_countries__panel_context_b86a0f86-ad4f-44d7-a0ae-15ebc4fed7c8 */   'body_classes_to_add' => '',
   /* page_globalnet_countries__panel_context_b86a0f86-ad4f-44d7-a0ae-15ebc4fed7c8 */   'css_id' => 'topics-list-content',
   /* page_globalnet_countries__panel_context_b86a0f86-ad4f-44d7-a0ae-15ebc4fed7c8 */   'css' => '',
   /* page_globalnet_countries__panel_context_b86a0f86-ad4f-44d7-a0ae-15ebc4fed7c8 */   'contexts' => array(),
   /* page_globalnet_countries__panel_context_b86a0f86-ad4f-44d7-a0ae-15ebc4fed7c8 */   'relationships' => array(),
   /* page_globalnet_countries__panel_context_b86a0f86-ad4f-44d7-a0ae-15ebc4fed7c8 */   'name' => '',
   /* page_globalnet_countries__panel_context_b86a0f86-ad4f-44d7-a0ae-15ebc4fed7c8 */   'access' => array(
   /* page_globalnet_countries__panel_context_b86a0f86-ad4f-44d7-a0ae-15ebc4fed7c8 */     'plugins' => array(
   /* page_globalnet_countries__panel_context_b86a0f86-ad4f-44d7-a0ae-15ebc4fed7c8 */       0 => array(
   /* page_globalnet_countries__panel_context_b86a0f86-ad4f-44d7-a0ae-15ebc4fed7c8 */         'name' => 'path_visibility',
   /* page_globalnet_countries__panel_context_b86a0f86-ad4f-44d7-a0ae-15ebc4fed7c8 */         'settings' => array(
   /* page_globalnet_countries__panel_context_b86a0f86-ad4f-44d7-a0ae-15ebc4fed7c8 */           'visibility_setting' => '0',
   /* page_globalnet_countries__panel_context_b86a0f86-ad4f-44d7-a0ae-15ebc4fed7c8 */           'paths' => 'countries/*',
   /* page_globalnet_countries__panel_context_b86a0f86-ad4f-44d7-a0ae-15ebc4fed7c8 */         ),
   /* page_globalnet_countries__panel_context_b86a0f86-ad4f-44d7-a0ae-15ebc4fed7c8 */         'context' => 'empty',
   /* page_globalnet_countries__panel_context_b86a0f86-ad4f-44d7-a0ae-15ebc4fed7c8 */         'not' => FALSE,
   /* page_globalnet_countries__panel_context_b86a0f86-ad4f-44d7-a0ae-15ebc4fed7c8 */       ),
   /* page_globalnet_countries__panel_context_b86a0f86-ad4f-44d7-a0ae-15ebc4fed7c8 */     ),
   /* page_globalnet_countries__panel_context_b86a0f86-ad4f-44d7-a0ae-15ebc4fed7c8 */     'logic' => 'and',
   /* page_globalnet_countries__panel_context_b86a0f86-ad4f-44d7-a0ae-15ebc4fed7c8 */   ),
   /* page_globalnet_countries__panel_context_b86a0f86-ad4f-44d7-a0ae-15ebc4fed7c8 */ );
   /* globalnet_countries e5a7da23 */ $display = new panels_display();
   /* globalnet_countries e5a7da23 */ $display->layout = 'home_layout';
   /* globalnet_countries e5a7da23 */ $display->layout_settings = array();
   /* globalnet_countries e5a7da23 */ $display->panel_settings = array(
   /* globalnet_countries e5a7da23 */   'style_settings' => array(
   /* globalnet_countries e5a7da23 */     'default' => NULL,
   /* globalnet_countries e5a7da23 */     'homepage_layout__top__left' => NULL,
   /* globalnet_countries e5a7da23 */     'homepage_layout__top__right' => NULL,
   /* globalnet_countries e5a7da23 */     'homepage_layout__search' => array(
   /* globalnet_countries e5a7da23 */       'clean_markup' => array(
   /* globalnet_countries e5a7da23 */         'region_wrapper' => 'div',
   /* globalnet_countries e5a7da23 */         'additional_region_classes' => '',
   /* globalnet_countries e5a7da23 */         'additional_region_attributes' => '',
   /* globalnet_countries e5a7da23 */         'enable_inner_div' => 0,
   /* globalnet_countries e5a7da23 */         'pane_separators' => 0,
   /* globalnet_countries e5a7da23 */       ),
   /* globalnet_countries e5a7da23 */     ),
   /* globalnet_countries e5a7da23 */     'homepage_layout__main' => NULL,
   /* globalnet_countries e5a7da23 */   ),
   /* globalnet_countries e5a7da23 */   'homepage_layout__search' => array(
   /* globalnet_countries e5a7da23 */     'style' => 'clean_element',
   /* globalnet_countries e5a7da23 */   ),
   /* globalnet_countries e5a7da23 */ );
   /* globalnet_countries e5a7da23 */ $display->cache = array();
   /* globalnet_countries e5a7da23 */ $display->title = 'GlobalNET Countries';
   /* globalnet_countries e5a7da23 */ $display->uuid = 'e5a7da23-77f6-4cb6-a0c5-6d3102c28078';
   /* globalnet_countries e5a7da23 */ $display->storage_type = 'page_manager';
   /* globalnet_countries e5a7da23 */ $display->storage_id = 'page_globalnet_countries__panel_context_b86a0f86-ad4f-44d7-a0ae-15ebc4fed7c8';
  $display->content = array();
  $display->panels = array();
   /* globalnet_countries cbe49150 */ $pane = new stdClass();
   /* globalnet_countries cbe49150 */ $pane->pid = 'new-cbe49150-b241-4dd2-a356-8bdf92353ad1';
   /* globalnet_countries cbe49150 */ $pane->panel = 'homepage_layout__main';
   /* globalnet_countries cbe49150 */ $pane->type = 'views_panes';
   /* globalnet_countries cbe49150 */ $pane->subtype = 'topics-panel_pane_10';
   /* globalnet_countries cbe49150 */ $pane->shown = TRUE;
   /* globalnet_countries cbe49150 */ $pane->access = array();
   /* globalnet_countries cbe49150 */ $pane->configuration = array();
   /* globalnet_countries cbe49150 */ $pane->cache = array();
   /* globalnet_countries cbe49150 */ $pane->style = array(
   /* globalnet_countries cbe49150 */   'settings' => NULL,
   /* globalnet_countries cbe49150 */ );
   /* globalnet_countries cbe49150 */ $pane->css = array();
   /* globalnet_countries cbe49150 */ $pane->extras = array();
   /* globalnet_countries cbe49150 */ $pane->position = 0;
   /* globalnet_countries cbe49150 */ $pane->locks = array();
   /* globalnet_countries cbe49150 */ $pane->uuid = 'cbe49150-b241-4dd2-a356-8bdf92353ad1';
  $display->content['new-cbe49150-b241-4dd2-a356-8bdf92353ad1'] = $pane;
  $display->panels['homepage_layout__main'][0] = 'new-cbe49150-b241-4dd2-a356-8bdf92353ad1';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['globalnet_countries'] = $page;

   /* globalnet_topics_page */ $page = new stdClass();
   /* globalnet_topics_page */ $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
   /* globalnet_topics_page */ $page->api_version = 1;
   /* globalnet_topics_page */ $page->name = 'globalnet_topics_page';
   /* globalnet_topics_page */ $page->task = 'page';
   /* globalnet_topics_page */ $page->admin_title = 'GlobalNET Topics';
   /* globalnet_topics_page */ $page->admin_description = '';
   /* globalnet_topics_page */ $page->path = 'topics/!tid';
   /* globalnet_topics_page */ $page->access = array(
   /* globalnet_topics_page */   'type' => 'none',
   /* globalnet_topics_page */   'settings' => NULL,
   /* globalnet_topics_page */ );
   /* globalnet_topics_page */ $page->menu = array();
   /* globalnet_topics_page */ $page->arguments = array(
   /* globalnet_topics_page */   'tid' => array(
   /* globalnet_topics_page */     'id' => 1,
   /* globalnet_topics_page */     'identifier' => 'Taxonomy term: ID',
   /* globalnet_topics_page */     'name' => 'term',
   /* globalnet_topics_page */     'settings' => array(
   /* globalnet_topics_page */       'input_form' => 'term',
   /* globalnet_topics_page */       'vids' => array(
   /* globalnet_topics_page */         3 => '3',
   /* globalnet_topics_page */         7 => 0,
   /* globalnet_topics_page */         1 => 0,
   /* globalnet_topics_page */         5 => 0,
   /* globalnet_topics_page */         4 => 0,
   /* globalnet_topics_page */         2 => 0,
   /* globalnet_topics_page */         6 => 0,
   /* globalnet_topics_page */         8 => 0,
   /* globalnet_topics_page */       ),
   /* globalnet_topics_page */       'breadcrumb' => 1,
   /* globalnet_topics_page */       'transform' => 1,
   /* globalnet_topics_page */     ),
   /* globalnet_topics_page */   ),
   /* globalnet_topics_page */ );
   /* globalnet_topics_page */ $page->conf = array(
   /* globalnet_topics_page */   'admin_paths' => FALSE,
   /* globalnet_topics_page */ );
  $page->default_handlers = array();
   /* page_globalnet_topics_page__panel_context_ead31de5-8f2a-4b4f-b7fd-26110fc3b65f */ $handler = new stdClass();
   /* page_globalnet_topics_page__panel_context_ead31de5-8f2a-4b4f-b7fd-26110fc3b65f */ $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
   /* page_globalnet_topics_page__panel_context_ead31de5-8f2a-4b4f-b7fd-26110fc3b65f */ $handler->api_version = 1;
   /* page_globalnet_topics_page__panel_context_ead31de5-8f2a-4b4f-b7fd-26110fc3b65f */ $handler->name = 'page_globalnet_topics_page__panel_context_ead31de5-8f2a-4b4f-b7fd-26110fc3b65f';
   /* page_globalnet_topics_page__panel_context_ead31de5-8f2a-4b4f-b7fd-26110fc3b65f */ $handler->task = 'page';
   /* page_globalnet_topics_page__panel_context_ead31de5-8f2a-4b4f-b7fd-26110fc3b65f */ $handler->subtask = 'globalnet_topics_page';
   /* page_globalnet_topics_page__panel_context_ead31de5-8f2a-4b4f-b7fd-26110fc3b65f */ $handler->handler = 'panel_context';
   /* page_globalnet_topics_page__panel_context_ead31de5-8f2a-4b4f-b7fd-26110fc3b65f */ $handler->weight = 0;
   /* page_globalnet_topics_page__panel_context_ead31de5-8f2a-4b4f-b7fd-26110fc3b65f */ $handler->conf = array(
   /* page_globalnet_topics_page__panel_context_ead31de5-8f2a-4b4f-b7fd-26110fc3b65f */   'title' => 'Topics List',
   /* page_globalnet_topics_page__panel_context_ead31de5-8f2a-4b4f-b7fd-26110fc3b65f */   'no_blocks' => 1,
   /* page_globalnet_topics_page__panel_context_ead31de5-8f2a-4b4f-b7fd-26110fc3b65f */   'pipeline' => 'standard',
   /* page_globalnet_topics_page__panel_context_ead31de5-8f2a-4b4f-b7fd-26110fc3b65f */   'body_classes_to_remove' => '',
   /* page_globalnet_topics_page__panel_context_ead31de5-8f2a-4b4f-b7fd-26110fc3b65f */   'body_classes_to_add' => '',
   /* page_globalnet_topics_page__panel_context_ead31de5-8f2a-4b4f-b7fd-26110fc3b65f */   'css_id' => 'topics-list-content',
   /* page_globalnet_topics_page__panel_context_ead31de5-8f2a-4b4f-b7fd-26110fc3b65f */   'css' => '',
   /* page_globalnet_topics_page__panel_context_ead31de5-8f2a-4b4f-b7fd-26110fc3b65f */   'contexts' => array(),
   /* page_globalnet_topics_page__panel_context_ead31de5-8f2a-4b4f-b7fd-26110fc3b65f */   'relationships' => array(),
   /* page_globalnet_topics_page__panel_context_ead31de5-8f2a-4b4f-b7fd-26110fc3b65f */   'name' => '',
   /* page_globalnet_topics_page__panel_context_ead31de5-8f2a-4b4f-b7fd-26110fc3b65f */   'access' => array(
   /* page_globalnet_topics_page__panel_context_ead31de5-8f2a-4b4f-b7fd-26110fc3b65f */     'plugins' => array(
   /* page_globalnet_topics_page__panel_context_ead31de5-8f2a-4b4f-b7fd-26110fc3b65f */       0 => array(
   /* page_globalnet_topics_page__panel_context_ead31de5-8f2a-4b4f-b7fd-26110fc3b65f */         'name' => 'path_visibility',
   /* page_globalnet_topics_page__panel_context_ead31de5-8f2a-4b4f-b7fd-26110fc3b65f */         'settings' => array(
   /* page_globalnet_topics_page__panel_context_ead31de5-8f2a-4b4f-b7fd-26110fc3b65f */           'visibility_setting' => '0',
   /* page_globalnet_topics_page__panel_context_ead31de5-8f2a-4b4f-b7fd-26110fc3b65f */           'paths' => 'topics/*',
   /* page_globalnet_topics_page__panel_context_ead31de5-8f2a-4b4f-b7fd-26110fc3b65f */         ),
   /* page_globalnet_topics_page__panel_context_ead31de5-8f2a-4b4f-b7fd-26110fc3b65f */         'context' => 'empty',
   /* page_globalnet_topics_page__panel_context_ead31de5-8f2a-4b4f-b7fd-26110fc3b65f */         'not' => FALSE,
   /* page_globalnet_topics_page__panel_context_ead31de5-8f2a-4b4f-b7fd-26110fc3b65f */       ),
   /* page_globalnet_topics_page__panel_context_ead31de5-8f2a-4b4f-b7fd-26110fc3b65f */     ),
   /* page_globalnet_topics_page__panel_context_ead31de5-8f2a-4b4f-b7fd-26110fc3b65f */     'logic' => 'and',
   /* page_globalnet_topics_page__panel_context_ead31de5-8f2a-4b4f-b7fd-26110fc3b65f */   ),
   /* page_globalnet_topics_page__panel_context_ead31de5-8f2a-4b4f-b7fd-26110fc3b65f */ );
   /* globalnet_topics_page e5a7da23 */ $display = new panels_display();
   /* globalnet_topics_page e5a7da23 */ $display->layout = 'home_layout';
   /* globalnet_topics_page e5a7da23 */ $display->layout_settings = array();
   /* globalnet_topics_page e5a7da23 */ $display->panel_settings = array(
   /* globalnet_topics_page e5a7da23 */   'style_settings' => array(
   /* globalnet_topics_page e5a7da23 */     'default' => NULL,
   /* globalnet_topics_page e5a7da23 */     'homepage_layout__top__left' => NULL,
   /* globalnet_topics_page e5a7da23 */     'homepage_layout__top__right' => NULL,
   /* globalnet_topics_page e5a7da23 */     'homepage_layout__search' => array(
   /* globalnet_topics_page e5a7da23 */       'clean_markup' => array(
   /* globalnet_topics_page e5a7da23 */         'region_wrapper' => 'div',
   /* globalnet_topics_page e5a7da23 */         'additional_region_classes' => '',
   /* globalnet_topics_page e5a7da23 */         'additional_region_attributes' => '',
   /* globalnet_topics_page e5a7da23 */         'enable_inner_div' => 0,
   /* globalnet_topics_page e5a7da23 */         'pane_separators' => 0,
   /* globalnet_topics_page e5a7da23 */       ),
   /* globalnet_topics_page e5a7da23 */     ),
   /* globalnet_topics_page e5a7da23 */     'homepage_layout__main' => NULL,
   /* globalnet_topics_page e5a7da23 */   ),
   /* globalnet_topics_page e5a7da23 */   'homepage_layout__search' => array(
   /* globalnet_topics_page e5a7da23 */     'style' => 'clean_element',
   /* globalnet_topics_page e5a7da23 */   ),
   /* globalnet_topics_page e5a7da23 */ );
   /* globalnet_topics_page e5a7da23 */ $display->cache = array();
   /* globalnet_topics_page e5a7da23 */ $display->title = 'GlobalNET Topics';
   /* globalnet_topics_page e5a7da23 */ $display->uuid = 'e5a7da23-77f6-4cb6-a0c5-6d3102c28078';
   /* globalnet_topics_page e5a7da23 */ $display->storage_type = 'page_manager';
   /* globalnet_topics_page e5a7da23 */ $display->storage_id = 'page_globalnet_topics_page__panel_context_ead31de5-8f2a-4b4f-b7fd-26110fc3b65f';
  $display->content = array();
  $display->panels = array();
   /* globalnet_topics_page 7fc7d176 */ $pane = new stdClass();
   /* globalnet_topics_page 7fc7d176 */ $pane->pid = 'new-7fc7d176-ed0c-43a7-bdb8-bdb483790956';
   /* globalnet_topics_page 7fc7d176 */ $pane->panel = 'homepage_layout__main';
   /* globalnet_topics_page 7fc7d176 */ $pane->type = 'views_panes';
   /* globalnet_topics_page 7fc7d176 */ $pane->subtype = 'topics-panel_pane_1';
   /* globalnet_topics_page 7fc7d176 */ $pane->shown = TRUE;
   /* globalnet_topics_page 7fc7d176 */ $pane->access = array();
   /* globalnet_topics_page 7fc7d176 */ $pane->configuration = array();
   /* globalnet_topics_page 7fc7d176 */ $pane->cache = array();
   /* globalnet_topics_page 7fc7d176 */ $pane->style = array(
   /* globalnet_topics_page 7fc7d176 */   'settings' => NULL,
   /* globalnet_topics_page 7fc7d176 */ );
   /* globalnet_topics_page 7fc7d176 */ $pane->css = array();
   /* globalnet_topics_page 7fc7d176 */ $pane->extras = array();
   /* globalnet_topics_page 7fc7d176 */ $pane->position = 0;
   /* globalnet_topics_page 7fc7d176 */ $pane->locks = array();
   /* globalnet_topics_page 7fc7d176 */ $pane->uuid = '7fc7d176-ed0c-43a7-bdb8-bdb483790956';
  $display->content['new-7fc7d176-ed0c-43a7-bdb8-bdb483790956'] = $pane;
  $display->panels['homepage_layout__main'][0] = 'new-7fc7d176-ed0c-43a7-bdb8-bdb483790956';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['globalnet_topics_page'] = $page;

   /* tags */ $page = new stdClass();
   /* tags */ $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
   /* tags */ $page->api_version = 1;
   /* tags */ $page->name = 'tags';
   /* tags */ $page->task = 'page';
   /* tags */ $page->admin_title = 'Tags';
   /* tags */ $page->admin_description = '';
   /* tags */ $page->path = 'tags/!tid';
   /* tags */ $page->access = array(
   /* tags */   'type' => 'none',
   /* tags */   'settings' => NULL,
   /* tags */ );
   /* tags */ $page->menu = array();
   /* tags */ $page->arguments = array(
   /* tags */   'tid' => array(
   /* tags */     'id' => 1,
   /* tags */     'identifier' => 'Taxonomy term: ID',
   /* tags */     'name' => 'term',
   /* tags */     'settings' => array(
   /* tags */       'input_form' => 'term',
   /* tags */       'vids' => array(
   /* tags */         6 => '6',
   /* tags */         7 => 0,
   /* tags */         1 => 0,
   /* tags */         5 => 0,
   /* tags */         4 => 0,
   /* tags */         2 => 0,
   /* tags */         3 => 0,
   /* tags */         8 => 0,
   /* tags */       ),
   /* tags */       'breadcrumb' => 1,
   /* tags */       'transform' => 1,
   /* tags */     ),
   /* tags */   ),
   /* tags */ );
   /* tags */ $page->conf = array(
   /* tags */   'admin_paths' => FALSE,
   /* tags */ );
  $page->default_handlers = array();
   /* page_tags__panel */ $handler = new stdClass();
   /* page_tags__panel */ $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
   /* page_tags__panel */ $handler->api_version = 1;
   /* page_tags__panel */ $handler->name = 'page_tags__panel';
   /* page_tags__panel */ $handler->task = 'page';
   /* page_tags__panel */ $handler->subtask = 'tags';
   /* page_tags__panel */ $handler->handler = 'panel_context';
   /* page_tags__panel */ $handler->weight = 0;
   /* page_tags__panel */ $handler->conf = array(
   /* page_tags__panel */   'title' => 'Panel',
   /* page_tags__panel */   'no_blocks' => 0,
   /* page_tags__panel */   'pipeline' => 'standard',
   /* page_tags__panel */   'body_classes_to_remove' => '',
   /* page_tags__panel */   'body_classes_to_add' => '',
   /* page_tags__panel */   'css_id' => '',
   /* page_tags__panel */   'css' => '',
   /* page_tags__panel */   'contexts' => array(),
   /* page_tags__panel */   'relationships' => array(),
   /* page_tags__panel */   'name' => 'panel',
   /* page_tags__panel */ );
   /* tags e1b0264f */ $display = new panels_display();
   /* tags e1b0264f */ $display->layout = 'home_layout';
   /* tags e1b0264f */ $display->layout_settings = array();
   /* tags e1b0264f */ $display->panel_settings = array(
   /* tags e1b0264f */   'style_settings' => array(
   /* tags e1b0264f */     'default' => NULL,
   /* tags e1b0264f */     'homepage_layout__top__left' => NULL,
   /* tags e1b0264f */     'homepage_layout__top__right' => NULL,
   /* tags e1b0264f */     'homepage_layout__search' => NULL,
   /* tags e1b0264f */     'homepage_layout__main' => NULL,
   /* tags e1b0264f */   ),
   /* tags e1b0264f */ );
   /* tags e1b0264f */ $display->cache = array();
   /* tags e1b0264f */ $display->title = 'GlobalNET Tags';
   /* tags e1b0264f */ $display->uuid = 'e1b0264f-7704-4832-8170-de6ddd58fd6e';
   /* tags e1b0264f */ $display->storage_type = 'page_manager';
   /* tags e1b0264f */ $display->storage_id = 'page_tags__panel';
  $display->content = array();
  $display->panels = array();
   /* tags 1586ebda */ $pane = new stdClass();
   /* tags 1586ebda */ $pane->pid = 'new-1586ebda-2122-4a06-a04c-8efa073b3d3a';
   /* tags 1586ebda */ $pane->panel = 'homepage_layout__main';
   /* tags 1586ebda */ $pane->type = 'views_panes';
   /* tags 1586ebda */ $pane->subtype = 'topics-panel_pane_9';
   /* tags 1586ebda */ $pane->shown = TRUE;
   /* tags 1586ebda */ $pane->access = array();
   /* tags 1586ebda */ $pane->configuration = array();
   /* tags 1586ebda */ $pane->cache = array();
   /* tags 1586ebda */ $pane->style = array(
   /* tags 1586ebda */   'settings' => NULL,
   /* tags 1586ebda */ );
   /* tags 1586ebda */ $pane->css = array();
   /* tags 1586ebda */ $pane->extras = array();
   /* tags 1586ebda */ $pane->position = 0;
   /* tags 1586ebda */ $pane->locks = array();
   /* tags 1586ebda */ $pane->uuid = '1586ebda-2122-4a06-a04c-8efa073b3d3a';
  $display->content['new-1586ebda-2122-4a06-a04c-8efa073b3d3a'] = $pane;
  $display->panels['homepage_layout__main'][0] = 'new-1586ebda-2122-4a06-a04c-8efa073b3d3a';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['tags'] = $page;

  return $pages;

}
