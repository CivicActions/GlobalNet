<?php
/**
 * @file
 * gn2_guide.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function gn2_guide_views_default_views() {
  $export = array();

  /* guide_content */ $view = new view();
  /* guide_content */ $view->name = 'guide_content';
  /* guide_content */ $view->description = '';
  /* guide_content */ $view->tag = 'default';
  /* guide_content */ $view->base_table = 'node';
  /* guide_content */ $view->human_name = 'Guide Content';
  /* guide_content */ $view->core = 7;
  /* guide_content */ $view->api_version = '3.0';
  /* guide_content */ $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* guide_content */ /* Display: Master */
  /* guide_content */  /* Master */ $handler = $view->new_display('default', 'Master', 'default');
  /* guide_content */  /* Master */ $handler->display->display_options['use_more_always'] = FALSE;
  /* guide_content */  /* Master */ $handler->display->display_options['access']['type'] = 'perm';
  /* guide_content */  /* Master */ $handler->display->display_options['cache']['type'] = 'none';
  /* guide_content */  /* Master */ $handler->display->display_options['query']['type'] = 'views_query';
  /* guide_content */  /* Master */ $handler->display->display_options['exposed_form']['type'] = 'basic';
  /* guide_content */  /* Master */ $handler->display->display_options['pager']['type'] = 'full';
  /* guide_content */  /* Master */ $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  /* guide_content */  /* Master */ $handler->display->display_options['pager']['options']['offset'] = '0';
  /* guide_content */  /* Master */ $handler->display->display_options['pager']['options']['id'] = '0';
  /* guide_content */  /* Master */ $handler->display->display_options['pager']['options']['quantity'] = '9';
  /* guide_content */  /* Master */ $handler->display->display_options['style_plugin'] = 'default';
  /* guide_content */  /* Master */ $handler->display->display_options['row_plugin'] = 'fields';
  /* guide_content */  /* Master */ /* Relationship: Content: Help topics (field_help_topics) */
  /* guide_content */  /* Master */ $handler->display->display_options['relationships']['field_help_topics_tid']['id'] = 'field_help_topics_tid';
  /* guide_content */  /* Master */ $handler->display->display_options['relationships']['field_help_topics_tid']['table'] = 'field_data_field_help_topics';
  /* guide_content */  /* Master */ $handler->display->display_options['relationships']['field_help_topics_tid']['field'] = 'field_help_topics_tid';
  /* guide_content */  /* Master */ /* Field: Taxonomy term: Term ID */
  /* guide_content */  /* Master */ $handler->display->display_options['fields']['tid']['id'] = 'tid';
  /* guide_content */  /* Master */ $handler->display->display_options['fields']['tid']['table'] = 'taxonomy_term_data';
  /* guide_content */  /* Master */ $handler->display->display_options['fields']['tid']['field'] = 'tid';
  /* guide_content */  /* Master */ $handler->display->display_options['fields']['tid']['relationship'] = 'field_help_topics_tid';
  /* guide_content */  /* Master */ $handler->display->display_options['fields']['tid']['label'] = '';
  /* guide_content */  /* Master */ $handler->display->display_options['fields']['tid']['exclude'] = TRUE;
  /* guide_content */  /* Master */ $handler->display->display_options['fields']['tid']['element_label_colon'] = FALSE;
  /* guide_content */  /* Master */ $handler->display->display_options['fields']['tid']['separator'] = '';
  /* guide_content */  /* Master */ /* Field: Content: Nid */
  /* guide_content */  /* Master */ $handler->display->display_options['fields']['nid']['id'] = 'nid';
  /* guide_content */  /* Master */ $handler->display->display_options['fields']['nid']['table'] = 'node';
  /* guide_content */  /* Master */ $handler->display->display_options['fields']['nid']['field'] = 'nid';
  /* guide_content */  /* Master */ $handler->display->display_options['fields']['nid']['label'] = '';
  /* guide_content */  /* Master */ $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  /* guide_content */  /* Master */ $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* guide_content */  /* Master */ /* Field: Content: Title */
  /* guide_content */  /* Master */ $handler->display->display_options['fields']['title']['id'] = 'title';
  /* guide_content */  /* Master */ $handler->display->display_options['fields']['title']['table'] = 'node';
  /* guide_content */  /* Master */ $handler->display->display_options['fields']['title']['field'] = 'title';
  /* guide_content */  /* Master */ $handler->display->display_options['fields']['title']['label'] = '';
  /* guide_content */  /* Master */ $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  /* guide_content */  /* Master */ $handler->display->display_options['fields']['title']['alter']['text'] = '<a href="/guide/[tid]/[nid]">
[title]
</a>';
  /* guide_content */  /* Master */ $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  /* guide_content */  /* Master */ $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* guide_content */  /* Master */ $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* guide_content */  /* Master */ $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* guide_content */  /* Master */ /* Sort criterion: Content: Title */
  /* guide_content */  /* Master */ $handler->display->display_options['sorts']['title']['id'] = 'title';
  /* guide_content */  /* Master */ $handler->display->display_options['sorts']['title']['table'] = 'node';
  /* guide_content */  /* Master */ $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* guide_content */  /* Master */ $handler->display->display_options['sorts']['title']['order'] = 'DESC';
  /* guide_content */  /* Master */ /* Contextual filter: Content: Help topics (field_help_topics) */
  /* guide_content */  /* Master */ $handler->display->display_options['arguments']['field_help_topics_tid']['id'] = 'field_help_topics_tid';
  /* guide_content */  /* Master */ $handler->display->display_options['arguments']['field_help_topics_tid']['table'] = 'field_data_field_help_topics';
  /* guide_content */  /* Master */ $handler->display->display_options['arguments']['field_help_topics_tid']['field'] = 'field_help_topics_tid';
  /* guide_content */  /* Master */ $handler->display->display_options['arguments']['field_help_topics_tid']['default_action'] = 'default';
  /* guide_content */  /* Master */ $handler->display->display_options['arguments']['field_help_topics_tid']['default_argument_type'] = 'raw';
  /* guide_content */  /* Master */ $handler->display->display_options['arguments']['field_help_topics_tid']['default_argument_options']['index'] = '1';
  /* guide_content */  /* Master */ $handler->display->display_options['arguments']['field_help_topics_tid']['summary']['number_of_records'] = '0';
  /* guide_content */  /* Master */ $handler->display->display_options['arguments']['field_help_topics_tid']['summary']['format'] = 'default_summary';
  /* guide_content */  /* Master */ $handler->display->display_options['arguments']['field_help_topics_tid']['summary_options']['items_per_page'] = '25';
  /* guide_content */  /* Master */ $handler->display->display_options['arguments']['field_help_topics_tid']['specify_validation'] = TRUE;
  /* guide_content */  /* Master */ $handler->display->display_options['arguments']['field_help_topics_tid']['validate']['type'] = 'taxonomy_term';
  /* guide_content */  /* Master */ $handler->display->display_options['arguments']['field_help_topics_tid']['validate_options']['vocabularies'] = array(
  /* guide_content */  /* Master */   'help' => 'help',
  /* guide_content */  /* Master */ );
  /* guide_content */  /* Master */ $handler->display->display_options['arguments']['field_help_topics_tid']['validate']['fail'] = 'empty';
  /* guide_content */  /* Master */ /* Filter criterion: Content: Published */
  /* guide_content */  /* Master */ $handler->display->display_options['filters']['status']['id'] = 'status';
  /* guide_content */  /* Master */ $handler->display->display_options['filters']['status']['table'] = 'node';
  /* guide_content */  /* Master */ $handler->display->display_options['filters']['status']['field'] = 'status';
  /* guide_content */  /* Master */ $handler->display->display_options['filters']['status']['value'] = 1;
  /* guide_content */  /* Master */ $handler->display->display_options['filters']['status']['group'] = 1;
  /* guide_content */  /* Master */ $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* guide_content */  /* Master */ /* Filter criterion: Content: Type */
  /* guide_content */  /* Master */ $handler->display->display_options['filters']['type']['id'] = 'type';
  /* guide_content */  /* Master */ $handler->display->display_options['filters']['type']['table'] = 'node';
  /* guide_content */  /* Master */ $handler->display->display_options['filters']['type']['field'] = 'type';
  /* guide_content */  /* Master */ $handler->display->display_options['filters']['type']['value'] = array(
  /* guide_content */  /* Master */   'help' => 'help',
  /* guide_content */  /* Master */ );

  /* guide_content */ /* Display: Guide Term Node List */
  /* guide_content */  /* Guide Term Node List */ $handler = $view->new_display('panel_pane', 'Guide Term Node List', 'panel_pane_1');
  /* guide_content */  /* Guide Term Node List */ $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* guide_content */  /* Guide Term Node List */ $handler->display->display_options['defaults']['fields'] = FALSE;
  /* guide_content */  /* Guide Term Node List */ /* Field: Content: Help topics */
  /* guide_content */  /* Guide Term Node List */ $handler->display->display_options['fields']['field_help_topics']['id'] = 'field_help_topics';
  /* guide_content */  /* Guide Term Node List */ $handler->display->display_options['fields']['field_help_topics']['table'] = 'field_data_field_help_topics';
  /* guide_content */  /* Guide Term Node List */ $handler->display->display_options['fields']['field_help_topics']['field'] = 'field_help_topics';
  /* guide_content */  /* Guide Term Node List */ $handler->display->display_options['fields']['field_help_topics']['label'] = '';
  /* guide_content */  /* Guide Term Node List */ $handler->display->display_options['fields']['field_help_topics']['exclude'] = TRUE;
  /* guide_content */  /* Guide Term Node List */ $handler->display->display_options['fields']['field_help_topics']['element_label_colon'] = FALSE;
  /* guide_content */  /* Guide Term Node List */ $handler->display->display_options['fields']['field_help_topics']['element_default_classes'] = FALSE;
  /* guide_content */  /* Guide Term Node List */ $handler->display->display_options['fields']['field_help_topics']['type'] = 'taxonomy_term_reference_plain';
  /* guide_content */  /* Guide Term Node List */ $handler->display->display_options['fields']['field_help_topics']['settings'] = array(
  /* guide_content */  /* Guide Term Node List */   'field_formatter_class' => '',
  /* guide_content */  /* Guide Term Node List */ );
  /* guide_content */  /* Guide Term Node List */ $handler->display->display_options['fields']['field_help_topics']['delta_limit'] = '1';
  /* guide_content */  /* Guide Term Node List */ $handler->display->display_options['fields']['field_help_topics']['delta_offset'] = '0';
  /* guide_content */  /* Guide Term Node List */ $handler->display->display_options['fields']['field_help_topics']['separator'] = '';
  /* guide_content */  /* Guide Term Node List */ /* Field: Content: Nid */
  /* guide_content */  /* Guide Term Node List */ $handler->display->display_options['fields']['nid']['id'] = 'nid';
  /* guide_content */  /* Guide Term Node List */ $handler->display->display_options['fields']['nid']['table'] = 'node';
  /* guide_content */  /* Guide Term Node List */ $handler->display->display_options['fields']['nid']['field'] = 'nid';
  /* guide_content */  /* Guide Term Node List */ $handler->display->display_options['fields']['nid']['label'] = '';
  /* guide_content */  /* Guide Term Node List */ $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  /* guide_content */  /* Guide Term Node List */ $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* guide_content */  /* Guide Term Node List */ /* Field: Content: Title */
  /* guide_content */  /* Guide Term Node List */ $handler->display->display_options['fields']['title']['id'] = 'title';
  /* guide_content */  /* Guide Term Node List */ $handler->display->display_options['fields']['title']['table'] = 'node';
  /* guide_content */  /* Guide Term Node List */ $handler->display->display_options['fields']['title']['field'] = 'title';
  /* guide_content */  /* Guide Term Node List */ $handler->display->display_options['fields']['title']['label'] = '';
  /* guide_content */  /* Guide Term Node List */ $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  /* guide_content */  /* Guide Term Node List */ $handler->display->display_options['fields']['title']['alter']['path'] = 'guide/[field_help_topics]/[nid]/';
  /* guide_content */  /* Guide Term Node List */ $handler->display->display_options['fields']['title']['alter']['absolute'] = TRUE;
  /* guide_content */  /* Guide Term Node List */ $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = TRUE;
  /* guide_content */  /* Guide Term Node List */ $handler->display->display_options['fields']['title']['alter']['link_class'] = 'guide_page_link';
  /* guide_content */  /* Guide Term Node List */ $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  /* guide_content */  /* Guide Term Node List */ $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* guide_content */  /* Guide Term Node List */ $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* guide_content */  /* Guide Term Node List */ $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* guide_content */  /* Guide Term Node List */ $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* guide_content */  /* Guide Term Node List */ /* Contextual filter: Content: Help topics (field_help_topics) */
  /* guide_content */  /* Guide Term Node List */ $handler->display->display_options['arguments']['field_help_topics_tid']['id'] = 'field_help_topics_tid';
  /* guide_content */  /* Guide Term Node List */ $handler->display->display_options['arguments']['field_help_topics_tid']['table'] = 'field_data_field_help_topics';
  /* guide_content */  /* Guide Term Node List */ $handler->display->display_options['arguments']['field_help_topics_tid']['field'] = 'field_help_topics_tid';
  /* guide_content */  /* Guide Term Node List */ $handler->display->display_options['arguments']['field_help_topics_tid']['default_action'] = 'default';
  /* guide_content */  /* Guide Term Node List */ $handler->display->display_options['arguments']['field_help_topics_tid']['default_argument_type'] = 'raw';
  /* guide_content */  /* Guide Term Node List */ $handler->display->display_options['arguments']['field_help_topics_tid']['default_argument_options']['index'] = '1';
  /* guide_content */  /* Guide Term Node List */ $handler->display->display_options['arguments']['field_help_topics_tid']['summary']['number_of_records'] = '0';
  /* guide_content */  /* Guide Term Node List */ $handler->display->display_options['arguments']['field_help_topics_tid']['summary']['format'] = 'default_summary';
  /* guide_content */  /* Guide Term Node List */ $handler->display->display_options['arguments']['field_help_topics_tid']['summary_options']['items_per_page'] = '25';
  /* guide_content */  /* Guide Term Node List */ $handler->display->display_options['arguments']['field_help_topics_tid']['specify_validation'] = TRUE;
  /* guide_content */  /* Guide Term Node List */ $handler->display->display_options['arguments']['field_help_topics_tid']['validate']['type'] = 'taxonomy_term';
  /* guide_content */  /* Guide Term Node List */ $handler->display->display_options['arguments']['field_help_topics_tid']['validate_options']['vocabularies'] = array(
  /* guide_content */  /* Guide Term Node List */   'help' => 'help',
  /* guide_content */  /* Guide Term Node List */ );
  /* guide_content */  /* Guide Term Node List */ $handler->display->display_options['arguments']['field_help_topics_tid']['validate_options']['type'] = 'convert';
  /* guide_content */  /* Guide Term Node List */ $handler->display->display_options['arguments']['field_help_topics_tid']['validate_options']['transform'] = TRUE;
  /* guide_content */  /* Guide Term Node List */ $handler->display->display_options['arguments']['field_help_topics_tid']['validate']['fail'] = 'empty';
  /* guide_content */  /* Guide Term Node List */ $handler->display->display_options['argument_input'] = array(
  /* guide_content */  /* Guide Term Node List */   'field_help_topics_tid' => array(
  /* guide_content */  /* Guide Term Node List */     'type' => 'panel',
  /* guide_content */  /* Guide Term Node List */     'context' => 'terms.name',
  /* guide_content */  /* Guide Term Node List */     'context_optional' => 0,
  /* guide_content */  /* Guide Term Node List */     'panel' => '1',
  /* guide_content */  /* Guide Term Node List */     'fixed' => '',
  /* guide_content */  /* Guide Term Node List */     'label' => 'Content: Help topics (field_help_topics)',
  /* guide_content */  /* Guide Term Node List */   ),
  /* guide_content */  /* Guide Term Node List */ );

  /* guide_content */ /* Display: Guide Term Node Content */
  /* guide_content */  /* Guide Term Node Content */ $handler = $view->new_display('panel_pane', 'Guide Term Node Content', 'panel_pane_2');
  /* guide_content */  /* Guide Term Node Content */ $handler->display->display_options['defaults']['header'] = FALSE;
  /* guide_content */  /* Guide Term Node Content */ /* Header: Global: Text area */
  /* guide_content */  /* Guide Term Node Content */ $handler->display->display_options['header']['area']['id'] = 'area';
  /* guide_content */  /* Guide Term Node Content */ $handler->display->display_options['header']['area']['table'] = 'views';
  /* guide_content */  /* Guide Term Node Content */ $handler->display->display_options['header']['area']['field'] = 'area';
  /* guide_content */  /* Guide Term Node Content */ $handler->display->display_options['header']['area']['label'] = 'Anchor';
  /* guide_content */  /* Guide Term Node Content */ $handler->display->display_options['header']['area']['empty'] = TRUE;
  /* guide_content */  /* Guide Term Node Content */ $handler->display->display_options['header']['area']['content'] = '<a name="searchresults" class="searchresults_anchor"></a>
<a href="#searchterms" class="searchterms_link">Return to Search Terms</a>';
  /* guide_content */  /* Guide Term Node Content */ $handler->display->display_options['header']['area']['format'] = 'php_code';
  /* guide_content */  /* Guide Term Node Content */ $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* guide_content */  /* Guide Term Node Content */ $handler->display->display_options['defaults']['fields'] = FALSE;
  /* guide_content */  /* Guide Term Node Content */ /* Field: Content: Title */
  /* guide_content */  /* Guide Term Node Content */ $handler->display->display_options['fields']['title']['id'] = 'title';
  /* guide_content */  /* Guide Term Node Content */ $handler->display->display_options['fields']['title']['table'] = 'node';
  /* guide_content */  /* Guide Term Node Content */ $handler->display->display_options['fields']['title']['field'] = 'title';
  /* guide_content */  /* Guide Term Node Content */ $handler->display->display_options['fields']['title']['label'] = '';
  /* guide_content */  /* Guide Term Node Content */ $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  /* guide_content */  /* Guide Term Node Content */ $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* guide_content */  /* Guide Term Node Content */ $handler->display->display_options['fields']['title']['element_type'] = 'h3';
  /* guide_content */  /* Guide Term Node Content */ $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* guide_content */  /* Guide Term Node Content */ $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* guide_content */  /* Guide Term Node Content */ /* Field: Content: Body */
  /* guide_content */  /* Guide Term Node Content */ $handler->display->display_options['fields']['body']['id'] = 'body';
  /* guide_content */  /* Guide Term Node Content */ $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  /* guide_content */  /* Guide Term Node Content */ $handler->display->display_options['fields']['body']['field'] = 'body';
  /* guide_content */  /* Guide Term Node Content */ $handler->display->display_options['fields']['body']['label'] = '';
  /* guide_content */  /* Guide Term Node Content */ $handler->display->display_options['fields']['body']['element_type'] = '0';
  /* guide_content */  /* Guide Term Node Content */ $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* guide_content */  /* Guide Term Node Content */ $handler->display->display_options['fields']['body']['element_wrapper_type'] = '0';
  /* guide_content */  /* Guide Term Node Content */ $handler->display->display_options['fields']['body']['element_default_classes'] = FALSE;
  /* guide_content */  /* Guide Term Node Content */ $handler->display->display_options['fields']['body']['settings'] = array(
  /* guide_content */  /* Guide Term Node Content */   'field_formatter_class' => '',
  /* guide_content */  /* Guide Term Node Content */ );
  /* guide_content */  /* Guide Term Node Content */ $handler->display->display_options['fields']['body']['field_api_classes'] = TRUE;
  /* guide_content */  /* Guide Term Node Content */ $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* guide_content */  /* Guide Term Node Content */ /* Contextual filter: Content: Nid */
  /* guide_content */  /* Guide Term Node Content */ $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  /* guide_content */  /* Guide Term Node Content */ $handler->display->display_options['arguments']['nid']['table'] = 'node';
  /* guide_content */  /* Guide Term Node Content */ $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  /* guide_content */  /* Guide Term Node Content */ $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  /* guide_content */  /* Guide Term Node Content */ $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'raw';
  /* guide_content */  /* Guide Term Node Content */ $handler->display->display_options['arguments']['nid']['default_argument_options']['index'] = '2';
  /* guide_content */  /* Guide Term Node Content */ $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  /* guide_content */  /* Guide Term Node Content */ $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  /* guide_content */  /* Guide Term Node Content */ $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  /* guide_content */  /* Guide Term Node Content */ $handler->display->display_options['arguments']['nid']['specify_validation'] = TRUE;
  /* guide_content */  /* Guide Term Node Content */ $handler->display->display_options['arguments']['nid']['validate']['type'] = 'node';
  /* guide_content */  /* Guide Term Node Content */ $handler->display->display_options['arguments']['nid']['validate_options']['types'] = array(
  /* guide_content */  /* Guide Term Node Content */   'help' => 'help',
  /* guide_content */  /* Guide Term Node Content */ );
  /* guide_content */  /* Guide Term Node Content */ $handler->display->display_options['argument_input'] = array(
  /* guide_content */  /* Guide Term Node Content */   'field_help_topics_tid' => array(
  /* guide_content */  /* Guide Term Node Content */     'type' => 'panel',
  /* guide_content */  /* Guide Term Node Content */     'context' => 'entity:comment.author',
  /* guide_content */  /* Guide Term Node Content */     'context_optional' => 0,
  /* guide_content */  /* Guide Term Node Content */     'panel' => '1',
  /* guide_content */  /* Guide Term Node Content */     'fixed' => '',
  /* guide_content */  /* Guide Term Node Content */     'label' => 'Content: Help topics (field_help_topics)',
  /* guide_content */  /* Guide Term Node Content */   ),
  /* guide_content */  /* Guide Term Node Content */   'nid' => array(
  /* guide_content */  /* Guide Term Node Content */     'type' => 'panel',
  /* guide_content */  /* Guide Term Node Content */     'context' => 'entity:comment.author',
  /* guide_content */  /* Guide Term Node Content */     'context_optional' => 0,
  /* guide_content */  /* Guide Term Node Content */     'panel' => '2',
  /* guide_content */  /* Guide Term Node Content */     'fixed' => '',
  /* guide_content */  /* Guide Term Node Content */     'label' => 'Content: Nid',
  /* guide_content */  /* Guide Term Node Content */   ),
  /* guide_content */  /* Guide Term Node Content */ );

  /* guide_content */ /* Display: Guide FAQ */
  /* guide_content */  /* Guide FAQ */ $handler = $view->new_display('panel_pane', 'Guide FAQ', 'panel_pane_3');
  /* guide_content */  /* Guide FAQ */ $handler->display->display_options['defaults']['title'] = FALSE;
  /* guide_content */  /* Guide FAQ */ $handler->display->display_options['title'] = 'Frequently Asked Questions';
  /* guide_content */  /* Guide FAQ */ $handler->display->display_options['defaults']['query'] = FALSE;
  /* guide_content */  /* Guide FAQ */ $handler->display->display_options['query']['type'] = 'views_query';
  /* guide_content */  /* Guide FAQ */ $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* guide_content */  /* Guide FAQ */ $handler->display->display_options['defaults']['fields'] = FALSE;
  /* guide_content */  /* Guide FAQ */ /* Field: Content: Help topics */
  /* guide_content */  /* Guide FAQ */ $handler->display->display_options['fields']['field_help_topics']['id'] = 'field_help_topics';
  /* guide_content */  /* Guide FAQ */ $handler->display->display_options['fields']['field_help_topics']['table'] = 'field_data_field_help_topics';
  /* guide_content */  /* Guide FAQ */ $handler->display->display_options['fields']['field_help_topics']['field'] = 'field_help_topics';
  /* guide_content */  /* Guide FAQ */ $handler->display->display_options['fields']['field_help_topics']['label'] = '';
  /* guide_content */  /* Guide FAQ */ $handler->display->display_options['fields']['field_help_topics']['exclude'] = TRUE;
  /* guide_content */  /* Guide FAQ */ $handler->display->display_options['fields']['field_help_topics']['alter']['text'] = '[field_help_topics]';
  /* guide_content */  /* Guide FAQ */ $handler->display->display_options['fields']['field_help_topics']['element_label_colon'] = FALSE;
  /* guide_content */  /* Guide FAQ */ $handler->display->display_options['fields']['field_help_topics']['element_default_classes'] = FALSE;
  /* guide_content */  /* Guide FAQ */ $handler->display->display_options['fields']['field_help_topics']['type'] = 'taxonomy_term_reference_plain';
  /* guide_content */  /* Guide FAQ */ $handler->display->display_options['fields']['field_help_topics']['settings'] = array(
  /* guide_content */  /* Guide FAQ */   'field_formatter_class' => '',
  /* guide_content */  /* Guide FAQ */ );
  /* guide_content */  /* Guide FAQ */ $handler->display->display_options['fields']['field_help_topics']['delta_limit'] = '1';
  /* guide_content */  /* Guide FAQ */ $handler->display->display_options['fields']['field_help_topics']['delta_offset'] = '0';
  /* guide_content */  /* Guide FAQ */ $handler->display->display_options['fields']['field_help_topics']['separator'] = '';
  /* guide_content */  /* Guide FAQ */ /* Field: Content: Nid */
  /* guide_content */  /* Guide FAQ */ $handler->display->display_options['fields']['nid']['id'] = 'nid';
  /* guide_content */  /* Guide FAQ */ $handler->display->display_options['fields']['nid']['table'] = 'node';
  /* guide_content */  /* Guide FAQ */ $handler->display->display_options['fields']['nid']['field'] = 'nid';
  /* guide_content */  /* Guide FAQ */ $handler->display->display_options['fields']['nid']['label'] = '';
  /* guide_content */  /* Guide FAQ */ $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  /* guide_content */  /* Guide FAQ */ $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* guide_content */  /* Guide FAQ */ /* Field: Content: Title */
  /* guide_content */  /* Guide FAQ */ $handler->display->display_options['fields']['title']['id'] = 'title';
  /* guide_content */  /* Guide FAQ */ $handler->display->display_options['fields']['title']['table'] = 'node';
  /* guide_content */  /* Guide FAQ */ $handler->display->display_options['fields']['title']['field'] = 'title';
  /* guide_content */  /* Guide FAQ */ $handler->display->display_options['fields']['title']['label'] = '';
  /* guide_content */  /* Guide FAQ */ $handler->display->display_options['fields']['title']['alter']['text'] = '<a href="/guide/[tid]/[nid]">
[title]
</a>';
  /* guide_content */  /* Guide FAQ */ $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  /* guide_content */  /* Guide FAQ */ $handler->display->display_options['fields']['title']['alter']['path'] = 'guide/[field_help_topics]/[nid]/';
  /* guide_content */  /* Guide FAQ */ $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = TRUE;
  /* guide_content */  /* Guide FAQ */ $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = TRUE;
  /* guide_content */  /* Guide FAQ */ $handler->display->display_options['fields']['title']['alter']['link_class'] = 'guide_page_link';
  /* guide_content */  /* Guide FAQ */ $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  /* guide_content */  /* Guide FAQ */ $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* guide_content */  /* Guide FAQ */ $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* guide_content */  /* Guide FAQ */ $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* guide_content */  /* Guide FAQ */ $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* guide_content */  /* Guide FAQ */ $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  /* guide_content */  /* Guide FAQ */ $handler->display->display_options['defaults']['filters'] = FALSE;
  /* guide_content */  /* Guide FAQ */ /* Filter criterion: Content: Published */
  /* guide_content */  /* Guide FAQ */ $handler->display->display_options['filters']['status']['id'] = 'status';
  /* guide_content */  /* Guide FAQ */ $handler->display->display_options['filters']['status']['table'] = 'node';
  /* guide_content */  /* Guide FAQ */ $handler->display->display_options['filters']['status']['field'] = 'status';
  /* guide_content */  /* Guide FAQ */ $handler->display->display_options['filters']['status']['value'] = 1;
  /* guide_content */  /* Guide FAQ */ $handler->display->display_options['filters']['status']['group'] = 1;
  /* guide_content */  /* Guide FAQ */ $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* guide_content */  /* Guide FAQ */ /* Filter criterion: Content: Type */
  /* guide_content */  /* Guide FAQ */ $handler->display->display_options['filters']['type']['id'] = 'type';
  /* guide_content */  /* Guide FAQ */ $handler->display->display_options['filters']['type']['table'] = 'node';
  /* guide_content */  /* Guide FAQ */ $handler->display->display_options['filters']['type']['field'] = 'type';
  /* guide_content */  /* Guide FAQ */ $handler->display->display_options['filters']['type']['value'] = array(
  /* guide_content */  /* Guide FAQ */   'help' => 'help',
  /* guide_content */  /* Guide FAQ */ );
  /* guide_content */  /* Guide FAQ */ /* Filter criterion: Content: Sticky */
  /* guide_content */  /* Guide FAQ */ $handler->display->display_options['filters']['sticky']['id'] = 'sticky';
  /* guide_content */  /* Guide FAQ */ $handler->display->display_options['filters']['sticky']['table'] = 'node';
  /* guide_content */  /* Guide FAQ */ $handler->display->display_options['filters']['sticky']['field'] = 'sticky';
  /* guide_content */  /* Guide FAQ */ $handler->display->display_options['filters']['sticky']['value'] = '1';

  /* guide_content */ /* Display: Edit content - link */
  /* guide_content */  /* Edit content - link */ $handler = $view->new_display('attachment', 'Edit content - link', 'attachment_1');
  /* guide_content */  /* Edit content - link */ $handler->display->display_options['pager']['type'] = 'some';
  /* guide_content */  /* Edit content - link */ $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  /* guide_content */  /* Edit content - link */ $handler->display->display_options['style_plugin'] = 'default';
  /* guide_content */  /* Edit content - link */ $handler->display->display_options['defaults']['style_options'] = FALSE;
  /* guide_content */  /* Edit content - link */ $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  /* guide_content */  /* Edit content - link */ $handler->display->display_options['row_plugin'] = 'fields';
  /* guide_content */  /* Edit content - link */ $handler->display->display_options['row_options']['inline'] = array(
  /* guide_content */  /* Edit content - link */   'edit_node' => 'edit_node',
  /* guide_content */  /* Edit content - link */ );
  /* guide_content */  /* Edit content - link */ $handler->display->display_options['defaults']['row_options'] = FALSE;
  /* guide_content */  /* Edit content - link */ $handler->display->display_options['defaults']['fields'] = FALSE;
  /* guide_content */  /* Edit content - link */ /* Field: Content: Edit link */
  /* guide_content */  /* Edit content - link */ $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  /* guide_content */  /* Edit content - link */ $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  /* guide_content */  /* Edit content - link */ $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  /* guide_content */  /* Edit content - link */ $handler->display->display_options['fields']['edit_node']['label'] = '';
  /* guide_content */  /* Edit content - link */ $handler->display->display_options['fields']['edit_node']['element_type'] = 'span';
  /* guide_content */  /* Edit content - link */ $handler->display->display_options['fields']['edit_node']['element_class'] = 'guide-action-link';
  /* guide_content */  /* Edit content - link */ $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  /* guide_content */  /* Edit content - link */ $handler->display->display_options['fields']['edit_node']['text'] = 'Edit';
  /* guide_content */  /* Edit content - link */ $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* guide_content */  /* Edit content - link */ /* Contextual filter: Content: Nid */
  /* guide_content */  /* Edit content - link */ $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  /* guide_content */  /* Edit content - link */ $handler->display->display_options['arguments']['nid']['table'] = 'node';
  /* guide_content */  /* Edit content - link */ $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  /* guide_content */  /* Edit content - link */ $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  /* guide_content */  /* Edit content - link */ $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'raw';
  /* guide_content */  /* Edit content - link */ $handler->display->display_options['arguments']['nid']['default_argument_options']['index'] = '2';
  /* guide_content */  /* Edit content - link */ $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  /* guide_content */  /* Edit content - link */ $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  /* guide_content */  /* Edit content - link */ $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  /* guide_content */  /* Edit content - link */ $handler->display->display_options['displays'] = array(
  /* guide_content */  /* Edit content - link */   'panel_pane_2' => 'panel_pane_2',
  /* guide_content */  /* Edit content - link */   'default' => 0,
  /* guide_content */  /* Edit content - link */   'panel_pane_1' => 0,
  /* guide_content */  /* Edit content - link */   'panel_pane_3' => 0,
  /* guide_content */  /* Edit content - link */ );
  /* guide_content */ $translatables['guide_content'] = array(
  /* guide_content */   t('Master'),
  /* guide_content */   t('more'),
  /* guide_content */   t('Apply'),
  /* guide_content */   t('Reset'),
  /* guide_content */   t('Sort by'),
  /* guide_content */   t('Asc'),
  /* guide_content */   t('Desc'),
  /* guide_content */   t('Items per page'),
  /* guide_content */   t('- All -'),
  /* guide_content */   t('Offset'),
  /* guide_content */   t('« first'),
  /* guide_content */   t('‹ previous'),
  /* guide_content */   t('next ›'),
  /* guide_content */   t('last »'),
  /* guide_content */   t('term from field_help_topics'),
  /* guide_content */   t('.'),
  /* guide_content */   t('<a href="/guide/[tid]/[nid]">
[title]
</a>'),
  /* guide_content */   t('All'),
  /* guide_content */   t('Guide Term Node List'),
  /* guide_content */   t('View panes'),
  /* guide_content */   t('Guide Term Node Content'),
  /* guide_content */   t('Anchor'),
  /* guide_content */   t('<a name="searchresults" class="searchresults_anchor"></a>
<a href="#searchterms" class="searchterms_link">Return to Search Terms</a>'),
  /* guide_content */   t('Guide FAQ'),
  /* guide_content */   t('Frequently Asked Questions'),
  /* guide_content */   t('[field_help_topics]'),
  /* guide_content */   t('Edit content - link'),
  /* guide_content */   t('Edit'),
  /* guide_content */ );
  $export['guide_content'] = $view;

  /* guide_terms */ $view = new view();
  /* guide_terms */ $view->name = 'guide_terms';
  /* guide_terms */ $view->description = '';
  /* guide_terms */ $view->tag = 'default';
  /* guide_terms */ $view->base_table = 'taxonomy_term_data';
  /* guide_terms */ $view->human_name = 'Guide Terms';
  /* guide_terms */ $view->core = 7;
  /* guide_terms */ $view->api_version = '3.0';
  /* guide_terms */ $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* guide_terms */ /* Display: Master */
  /* guide_terms */  /* Master */ $handler = $view->new_display('default', 'Master', 'default');
  /* guide_terms */  /* Master */ $handler->display->display_options['use_more_always'] = FALSE;
  /* guide_terms */  /* Master */ $handler->display->display_options['access']['type'] = 'perm';
  /* guide_terms */  /* Master */ $handler->display->display_options['cache']['type'] = 'none';
  /* guide_terms */  /* Master */ $handler->display->display_options['query']['type'] = 'views_query';
  /* guide_terms */  /* Master */ $handler->display->display_options['exposed_form']['type'] = 'basic';
  /* guide_terms */  /* Master */ $handler->display->display_options['pager']['type'] = 'full';
  /* guide_terms */  /* Master */ $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  /* guide_terms */  /* Master */ $handler->display->display_options['pager']['options']['offset'] = '0';
  /* guide_terms */  /* Master */ $handler->display->display_options['pager']['options']['id'] = '0';
  /* guide_terms */  /* Master */ $handler->display->display_options['pager']['options']['quantity'] = '9';
  /* guide_terms */  /* Master */ $handler->display->display_options['style_plugin'] = 'default';
  /* guide_terms */  /* Master */ $handler->display->display_options['row_plugin'] = 'fields';
  /* guide_terms */  /* Master */ /* Field: Taxonomy term: Name */
  /* guide_terms */  /* Master */ $handler->display->display_options['fields']['name']['id'] = 'name';
  /* guide_terms */  /* Master */ $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  /* guide_terms */  /* Master */ $handler->display->display_options['fields']['name']['field'] = 'name';
  /* guide_terms */  /* Master */ $handler->display->display_options['fields']['name']['label'] = '';
  /* guide_terms */  /* Master */ $handler->display->display_options['fields']['name']['alter']['make_link'] = TRUE;
  /* guide_terms */  /* Master */ $handler->display->display_options['fields']['name']['alter']['path'] = 'guide/[name]';
  /* guide_terms */  /* Master */ $handler->display->display_options['fields']['name']['alter']['absolute'] = TRUE;
  /* guide_terms */  /* Master */ $handler->display->display_options['fields']['name']['alter']['replace_spaces'] = TRUE;
  /* guide_terms */  /* Master */ $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  /* guide_terms */  /* Master */ $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  /* guide_terms */  /* Master */ $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  /* guide_terms */  /* Master */ /* Filter criterion: Taxonomy term: Vocabulary */
  /* guide_terms */  /* Master */ $handler->display->display_options['filters']['vid']['id'] = 'vid';
  /* guide_terms */  /* Master */ $handler->display->display_options['filters']['vid']['table'] = 'taxonomy_term_data';
  /* guide_terms */  /* Master */ $handler->display->display_options['filters']['vid']['field'] = 'vid';
  /* guide_terms */  /* Master */ $handler->display->display_options['filters']['vid']['value'] = array(
  /* guide_terms */  /* Master */   4 => '4',
  /* guide_terms */  /* Master */ );

  /* guide_terms */ /* Display: Guide Terms List */
  /* guide_terms */  /* Guide Terms List */ $handler = $view->new_display('panel_pane', 'Guide Terms List', 'panel_pane_1');
  /* guide_terms */  /* Guide Terms List */ $handler->display->display_options['defaults']['header'] = FALSE;
  /* guide_terms */  /* Guide Terms List */ /* Header: Global: Text area */
  /* guide_terms */  /* Guide Terms List */ $handler->display->display_options['header']['area']['id'] = 'area';
  /* guide_terms */  /* Guide Terms List */ $handler->display->display_options['header']['area']['table'] = 'views';
  /* guide_terms */  /* Guide Terms List */ $handler->display->display_options['header']['area']['field'] = 'area';
  /* guide_terms */  /* Guide Terms List */ $handler->display->display_options['header']['area']['label'] = 'Anchor';
  /* guide_terms */  /* Guide Terms List */ $handler->display->display_options['header']['area']['content'] = '<a name="searchterms"></a>';
  /* guide_terms */  /* Guide Terms List */ $handler->display->display_options['header']['area']['format'] = 'filtered_html';
  /* guide_terms */  /* Guide Terms List */ $handler->display->display_options['defaults']['fields'] = FALSE;
  /* guide_terms */  /* Guide Terms List */ /* Field: Taxonomy term: Name */
  /* guide_terms */  /* Guide Terms List */ $handler->display->display_options['fields']['name']['id'] = 'name';
  /* guide_terms */  /* Guide Terms List */ $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  /* guide_terms */  /* Guide Terms List */ $handler->display->display_options['fields']['name']['field'] = 'name';
  /* guide_terms */  /* Guide Terms List */ $handler->display->display_options['fields']['name']['label'] = '';
  /* guide_terms */  /* Guide Terms List */ $handler->display->display_options['fields']['name']['alter']['make_link'] = TRUE;
  /* guide_terms */  /* Guide Terms List */ $handler->display->display_options['fields']['name']['alter']['path'] = 'guide/[name]/';
  /* guide_terms */  /* Guide Terms List */ $handler->display->display_options['fields']['name']['alter']['absolute'] = TRUE;
  /* guide_terms */  /* Guide Terms List */ $handler->display->display_options['fields']['name']['alter']['replace_spaces'] = TRUE;
  /* guide_terms */  /* Guide Terms List */ $handler->display->display_options['fields']['name']['alter']['link_class'] = 'guide_page_link';
  /* guide_terms */  /* Guide Terms List */ $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  /* guide_terms */  /* Guide Terms List */ $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  /* guide_terms */  /* Guide Terms List */ $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;

  /* guide_terms */ /* Display: Guide Term Description */
  /* guide_terms */  /* Guide Term Description */ $handler = $view->new_display('panel_pane', 'Guide Term Description', 'panel_pane_2');
  /* guide_terms */  /* Guide Term Description */ $handler->display->display_options['defaults']['header'] = FALSE;
  /* guide_terms */  /* Guide Term Description */ /* Header: Global: Text area */
  /* guide_terms */  /* Guide Term Description */ $handler->display->display_options['header']['area']['id'] = 'area';
  /* guide_terms */  /* Guide Term Description */ $handler->display->display_options['header']['area']['table'] = 'views';
  /* guide_terms */  /* Guide Term Description */ $handler->display->display_options['header']['area']['field'] = 'area';
  /* guide_terms */  /* Guide Term Description */ $handler->display->display_options['header']['area']['label'] = 'Anchor';
  /* guide_terms */  /* Guide Term Description */ $handler->display->display_options['header']['area']['empty'] = TRUE;
  /* guide_terms */  /* Guide Term Description */ $handler->display->display_options['header']['area']['content'] = '<a name="searchresults" class="searchresults_anchor"></a>
<a href="#searchterms" class="searchterms_link">Return to Search Terms</a>';
  /* guide_terms */  /* Guide Term Description */ $handler->display->display_options['header']['area']['format'] = 'php_code';
  /* guide_terms */  /* Guide Term Description */ $handler->display->display_options['defaults']['fields'] = FALSE;
  /* guide_terms */  /* Guide Term Description */ /* Field: Taxonomy term: Name */
  /* guide_terms */  /* Guide Term Description */ $handler->display->display_options['fields']['name']['id'] = 'name';
  /* guide_terms */  /* Guide Term Description */ $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  /* guide_terms */  /* Guide Term Description */ $handler->display->display_options['fields']['name']['field'] = 'name';
  /* guide_terms */  /* Guide Term Description */ $handler->display->display_options['fields']['name']['label'] = '';
  /* guide_terms */  /* Guide Term Description */ $handler->display->display_options['fields']['name']['alter']['absolute'] = TRUE;
  /* guide_terms */  /* Guide Term Description */ $handler->display->display_options['fields']['name']['alter']['replace_spaces'] = TRUE;
  /* guide_terms */  /* Guide Term Description */ $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  /* guide_terms */  /* Guide Term Description */ $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  /* guide_terms */  /* Guide Term Description */ $handler->display->display_options['fields']['name']['element_type'] = 'h3';
  /* guide_terms */  /* Guide Term Description */ $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  /* guide_terms */  /* Guide Term Description */ /* Field: Taxonomy term: Term description */
  /* guide_terms */  /* Guide Term Description */ $handler->display->display_options['fields']['description']['id'] = 'description';
  /* guide_terms */  /* Guide Term Description */ $handler->display->display_options['fields']['description']['table'] = 'taxonomy_term_data';
  /* guide_terms */  /* Guide Term Description */ $handler->display->display_options['fields']['description']['field'] = 'description';
  /* guide_terms */  /* Guide Term Description */ $handler->display->display_options['fields']['description']['label'] = '';
  /* guide_terms */  /* Guide Term Description */ $handler->display->display_options['fields']['description']['element_label_colon'] = FALSE;
  /* guide_terms */  /* Guide Term Description */ $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* guide_terms */  /* Guide Term Description */ /* Contextual filter: Taxonomy term: Term ID */
  /* guide_terms */  /* Guide Term Description */ $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  /* guide_terms */  /* Guide Term Description */ $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_term_data';
  /* guide_terms */  /* Guide Term Description */ $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  /* guide_terms */  /* Guide Term Description */ $handler->display->display_options['arguments']['tid']['default_action'] = 'default';
  /* guide_terms */  /* Guide Term Description */ $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'raw';
  /* guide_terms */  /* Guide Term Description */ $handler->display->display_options['arguments']['tid']['default_argument_options']['index'] = '1';
  /* guide_terms */  /* Guide Term Description */ $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  /* guide_terms */  /* Guide Term Description */ $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  /* guide_terms */  /* Guide Term Description */ $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
  /* guide_terms */  /* Guide Term Description */ $handler->display->display_options['arguments']['tid']['specify_validation'] = TRUE;
  /* guide_terms */  /* Guide Term Description */ $handler->display->display_options['arguments']['tid']['validate']['type'] = 'taxonomy_term';
  /* guide_terms */  /* Guide Term Description */ $handler->display->display_options['arguments']['tid']['validate_options']['vocabularies'] = array(
  /* guide_terms */  /* Guide Term Description */   'help' => 'help',
  /* guide_terms */  /* Guide Term Description */ );
  /* guide_terms */  /* Guide Term Description */ $handler->display->display_options['arguments']['tid']['validate_options']['type'] = 'convert';
  /* guide_terms */  /* Guide Term Description */ $handler->display->display_options['arguments']['tid']['validate_options']['transform'] = TRUE;
  /* guide_terms */  /* Guide Term Description */ $handler->display->display_options['argument_input'] = array(
  /* guide_terms */  /* Guide Term Description */   'tid' => array(
  /* guide_terms */  /* Guide Term Description */     'type' => 'panel',
  /* guide_terms */  /* Guide Term Description */     'context' => 'entity:comment.author',
  /* guide_terms */  /* Guide Term Description */     'context_optional' => 0,
  /* guide_terms */  /* Guide Term Description */     'panel' => '1',
  /* guide_terms */  /* Guide Term Description */     'fixed' => '',
  /* guide_terms */  /* Guide Term Description */     'label' => 'Taxonomy term: Term ID',
  /* guide_terms */  /* Guide Term Description */   ),
  /* guide_terms */  /* Guide Term Description */ );
  /* guide_terms */ $translatables['guide_terms'] = array(
  /* guide_terms */   t('Master'),
  /* guide_terms */   t('more'),
  /* guide_terms */   t('Apply'),
  /* guide_terms */   t('Reset'),
  /* guide_terms */   t('Sort by'),
  /* guide_terms */   t('Asc'),
  /* guide_terms */   t('Desc'),
  /* guide_terms */   t('Items per page'),
  /* guide_terms */   t('- All -'),
  /* guide_terms */   t('Offset'),
  /* guide_terms */   t('« first'),
  /* guide_terms */   t('‹ previous'),
  /* guide_terms */   t('next ›'),
  /* guide_terms */   t('last »'),
  /* guide_terms */   t('Guide Terms List'),
  /* guide_terms */   t('Anchor'),
  /* guide_terms */   t('<a name="searchterms"></a>'),
  /* guide_terms */   t('View panes'),
  /* guide_terms */   t('Guide Term Description'),
  /* guide_terms */   t('<a name="searchresults" class="searchresults_anchor"></a>
<a href="#searchterms" class="searchterms_link">Return to Search Terms</a>'),
  /* guide_terms */   t('All'),
  /* guide_terms */ );
  $export['guide_terms'] = $view;

  return $export;
}
