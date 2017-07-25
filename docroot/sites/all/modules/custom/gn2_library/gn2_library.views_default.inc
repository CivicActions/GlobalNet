<?php
/**
 * @file
 * gn2_library.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function gn2_library_views_default_views() {
  $export = array();

  /* search_resources */ $view = new view();
  /* search_resources */ $view->name = 'search_resources';
  /* search_resources */ $view->description = '';
  /* search_resources */ $view->tag = 'default';
  /* search_resources */ $view->base_table = 'search_api_index_resource_library';
  /* search_resources */ $view->human_name = 'Search-Resources';
  /* search_resources */ $view->core = 7;
  /* search_resources */ $view->api_version = '3.0';
  /* search_resources */ $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* search_resources */ /* Display: Master */
  /* search_resources */  /* Master */ $handler = $view->new_display('default', 'Master', 'default');
  /* search_resources */  /* Master */ $handler->display->display_options['title'] = 'Library';
  /* search_resources */  /* Master */ $handler->display->display_options['use_ajax'] = TRUE;
  /* search_resources */  /* Master */ $handler->display->display_options['use_more_always'] = FALSE;
  /* search_resources */  /* Master */ $handler->display->display_options['access']['type'] = 'none';
  /* search_resources */  /* Master */ $handler->display->display_options['cache']['type'] = 'none';
  /* search_resources */  /* Master */ $handler->display->display_options['query']['type'] = 'views_query';
  /* search_resources */  /* Master */ $handler->display->display_options['exposed_form']['type'] = 'basic';
  /* search_resources */  /* Master */ $handler->display->display_options['pager']['type'] = 'full';
  /* search_resources */  /* Master */ $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  /* search_resources */  /* Master */ $handler->display->display_options['style_plugin'] = 'default';
  /* search_resources */  /* Master */ $handler->display->display_options['row_plugin'] = 'panels_fields';
  /* search_resources */  /* Master */ /* Field: Indexed Node: Node ID */
  /* search_resources */  /* Master */ $handler->display->display_options['fields']['nid']['id'] = 'nid';
  /* search_resources */  /* Master */ $handler->display->display_options['fields']['nid']['table'] = 'search_api_index_resource_library';
  /* search_resources */  /* Master */ $handler->display->display_options['fields']['nid']['field'] = 'nid';
  /* search_resources */  /* Master */ $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  /* search_resources */  /* Master */ $handler->display->display_options['fields']['nid']['separator'] = '';
  /* search_resources */  /* Master */ $handler->display->display_options['fields']['nid']['link_to_entity'] = 0;
  /* search_resources */  /* Master */ /* Field: Indexed Node: Title */
  /* search_resources */  /* Master */ $handler->display->display_options['fields']['title']['id'] = 'title';
  /* search_resources */  /* Master */ $handler->display->display_options['fields']['title']['table'] = 'search_api_index_resource_library';
  /* search_resources */  /* Master */ $handler->display->display_options['fields']['title']['field'] = 'title';
  /* search_resources */  /* Master */ $handler->display->display_options['fields']['title']['label'] = '';
  /* search_resources */  /* Master */ $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  /* search_resources */  /* Master */ $handler->display->display_options['fields']['title']['element_type'] = 'h2';
  /* search_resources */  /* Master */ $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* search_resources */  /* Master */ $handler->display->display_options['fields']['title']['hide_empty'] = TRUE;
  /* search_resources */  /* Master */ $handler->display->display_options['fields']['title']['link_to_entity'] = 1;
  /* search_resources */  /* Master */ /* Field: Indexed Node: Link */
  /* search_resources */  /* Master */ $handler->display->display_options['fields']['field_link']['id'] = 'field_link';
  /* search_resources */  /* Master */ $handler->display->display_options['fields']['field_link']['table'] = 'search_api_index_resource_library';
  /* search_resources */  /* Master */ $handler->display->display_options['fields']['field_link']['field'] = 'field_link';
  /* search_resources */  /* Master */ $handler->display->display_options['fields']['field_link']['label'] = '';
  /* search_resources */  /* Master */ $handler->display->display_options['fields']['field_link']['element_label_colon'] = FALSE;
  /* search_resources */  /* Master */ $handler->display->display_options['fields']['field_link']['hide_empty'] = TRUE;
  /* search_resources */  /* Master */ $handler->display->display_options['fields']['field_link']['click_sort_column'] = 'url';
  /* search_resources */  /* Master */ $handler->display->display_options['fields']['field_link']['settings'] = array(
  /* search_resources */  /* Master */   'field_formatter_class' => '',
  /* search_resources */  /* Master */ );
  /* search_resources */  /* Master */ /* Field: Indexed Node: Resource Description */
  /* search_resources */  /* Master */ $handler->display->display_options['fields']['field_resource_description']['id'] = 'field_resource_description';
  /* search_resources */  /* Master */ $handler->display->display_options['fields']['field_resource_description']['table'] = 'search_api_index_resource_library';
  /* search_resources */  /* Master */ $handler->display->display_options['fields']['field_resource_description']['field'] = 'field_resource_description';
  /* search_resources */  /* Master */ $handler->display->display_options['fields']['field_resource_description']['label'] = '';
  /* search_resources */  /* Master */ $handler->display->display_options['fields']['field_resource_description']['alter']['max_length'] = '120';
  /* search_resources */  /* Master */ $handler->display->display_options['fields']['field_resource_description']['alter']['more_link'] = TRUE;
  /* search_resources */  /* Master */ $handler->display->display_options['fields']['field_resource_description']['alter']['more_link_text'] = 'read more';
  /* search_resources */  /* Master */ $handler->display->display_options['fields']['field_resource_description']['alter']['more_link_path'] = 'node/[nid]';
  /* search_resources */  /* Master */ $handler->display->display_options['fields']['field_resource_description']['element_label_colon'] = FALSE;
  /* search_resources */  /* Master */ $handler->display->display_options['fields']['field_resource_description']['type'] = 'text_plain';
  /* search_resources */  /* Master */ $handler->display->display_options['fields']['field_resource_description']['settings'] = array(
  /* search_resources */  /* Master */   'field_formatter_class' => '',
  /* search_resources */  /* Master */ );
  /* search_resources */  /* Master */ /* Field: Indexed Node: Resource Type */
  /* search_resources */  /* Master */ $handler->display->display_options['fields']['field_resource_type']['id'] = 'field_resource_type';
  /* search_resources */  /* Master */ $handler->display->display_options['fields']['field_resource_type']['table'] = 'search_api_index_resource_library';
  /* search_resources */  /* Master */ $handler->display->display_options['fields']['field_resource_type']['field'] = 'field_resource_type';
  /* search_resources */  /* Master */ $handler->display->display_options['fields']['field_resource_type']['element_label_type'] = 'strong';
  /* search_resources */  /* Master */ /* Field: Indexed Node: Resource Topic */
  /* search_resources */  /* Master */ $handler->display->display_options['fields']['field_resource_tags']['id'] = 'field_resource_tags';
  /* search_resources */  /* Master */ $handler->display->display_options['fields']['field_resource_tags']['table'] = 'search_api_index_resource_library';
  /* search_resources */  /* Master */ $handler->display->display_options['fields']['field_resource_tags']['field'] = 'field_resource_tags';
  /* search_resources */  /* Master */ $handler->display->display_options['fields']['field_resource_tags']['element_label_type'] = 'strong';
  /* search_resources */  /* Master */ $handler->display->display_options['fields']['field_resource_tags']['hide_empty'] = TRUE;
  /* search_resources */  /* Master */ $handler->display->display_options['fields']['field_resource_tags']['link_to_entity'] = 1;
  /* search_resources */  /* Master */ $handler->display->display_options['fields']['field_resource_tags']['view_mode'] = 'full';
  /* search_resources */  /* Master */ $handler->display->display_options['fields']['field_resource_tags']['bypass_access'] = 0;
  /* search_resources */  /* Master */ /* Field: Indexed Node: Resource Category */
  /* search_resources */  /* Master */ $handler->display->display_options['fields']['field_resource_category']['id'] = 'field_resource_category';
  /* search_resources */  /* Master */ $handler->display->display_options['fields']['field_resource_category']['table'] = 'search_api_index_resource_library';
  /* search_resources */  /* Master */ $handler->display->display_options['fields']['field_resource_category']['field'] = 'field_resource_category';
  /* search_resources */  /* Master */ $handler->display->display_options['fields']['field_resource_category']['element_label_type'] = 'strong';
  /* search_resources */  /* Master */ $handler->display->display_options['fields']['field_resource_category']['link_to_entity'] = 1;
  /* search_resources */  /* Master */ $handler->display->display_options['fields']['field_resource_category']['view_mode'] = 'full';
  /* search_resources */  /* Master */ $handler->display->display_options['fields']['field_resource_category']['bypass_access'] = 0;
  /* search_resources */  /* Master */ /* Contextual filter: Indexed Node: Groups audience */
  /* search_resources */  /* Master */ $handler->display->display_options['arguments']['og_group_ref']['id'] = 'og_group_ref';
  /* search_resources */  /* Master */ $handler->display->display_options['arguments']['og_group_ref']['table'] = 'search_api_index_resource_library';
  /* search_resources */  /* Master */ $handler->display->display_options['arguments']['og_group_ref']['field'] = 'og_group_ref';
  /* search_resources */  /* Master */ $handler->display->display_options['arguments']['og_group_ref']['default_action'] = 'default';
  /* search_resources */  /* Master */ $handler->display->display_options['arguments']['og_group_ref']['default_argument_type'] = 'php';
  /* search_resources */  /* Master */ $handler->display->display_options['arguments']['og_group_ref']['default_argument_options']['code'] = '$node = node_load(arg(1));
if ($node && isset($node->og_group_ref[LANGUAGE_NONE][0][\'target_id\'])) {
  return $node->og_group_ref[LANGUAGE_NONE][0][\'target_id\'];
}
else {
  return;
}';
  /* search_resources */  /* Master */ $handler->display->display_options['arguments']['og_group_ref']['summary']['format'] = 'default_summary';
  /* search_resources */  /* Master */ $handler->display->display_options['arguments']['og_group_ref']['break_phrase'] = 0;
  /* search_resources */  /* Master */ $handler->display->display_options['arguments']['og_group_ref']['not'] = 0;
  /* search_resources */  /* Master */ /* Filter criterion: Indexed Node: Resource Topic */
  /* search_resources */  /* Master */ $handler->display->display_options['filters']['field_resource_tags']['id'] = 'field_resource_tags';
  /* search_resources */  /* Master */ $handler->display->display_options['filters']['field_resource_tags']['table'] = 'search_api_index_resource_library';
  /* search_resources */  /* Master */ $handler->display->display_options['filters']['field_resource_tags']['field'] = 'field_resource_tags';
  /* search_resources */  /* Master */ $handler->display->display_options['filters']['field_resource_tags']['value'] = array();
  /* search_resources */  /* Master */ $handler->display->display_options['filters']['field_resource_tags']['group'] = 1;
  /* search_resources */  /* Master */ $handler->display->display_options['filters']['field_resource_tags']['exposed'] = TRUE;
  /* search_resources */  /* Master */ $handler->display->display_options['filters']['field_resource_tags']['expose']['operator_id'] = 'field_resource_tags_op';
  /* search_resources */  /* Master */ $handler->display->display_options['filters']['field_resource_tags']['expose']['label'] = 'Topic';
  /* search_resources */  /* Master */ $handler->display->display_options['filters']['field_resource_tags']['expose']['operator'] = 'field_resource_tags_op';
  /* search_resources */  /* Master */ $handler->display->display_options['filters']['field_resource_tags']['expose']['identifier'] = 'field_resource_tags';
  /* search_resources */  /* Master */ $handler->display->display_options['filters']['field_resource_tags']['expose']['multiple'] = TRUE;
  /* search_resources */  /* Master */ $handler->display->display_options['filters']['field_resource_tags']['expose']['remember_roles'] = array(
  /* search_resources */  /* Master */   2 => '2',
  /* search_resources */  /* Master */   1 => 0,
  /* search_resources */  /* Master */   9 => 0,
  /* search_resources */  /* Master */   10 => 0,
  /* search_resources */  /* Master */   11 => 0,
  /* search_resources */  /* Master */ );
  /* search_resources */  /* Master */ $handler->display->display_options['filters']['field_resource_tags']['group_info']['label'] = 'Tags';
  /* search_resources */  /* Master */ $handler->display->display_options['filters']['field_resource_tags']['group_info']['identifier'] = 'field_resource_tags';
  /* search_resources */  /* Master */ $handler->display->display_options['filters']['field_resource_tags']['group_info']['remember'] = FALSE;
  /* search_resources */  /* Master */ $handler->display->display_options['filters']['field_resource_tags']['group_info']['group_items'] = array(
  /* search_resources */  /* Master */   1 => array(),
  /* search_resources */  /* Master */   2 => array(),
  /* search_resources */  /* Master */   3 => array(),
  /* search_resources */  /* Master */ );
  /* search_resources */  /* Master */ $handler->display->display_options['filters']['field_resource_tags']['type'] = 'select';
  /* search_resources */  /* Master */ /* Filter criterion: Indexed Node: Resource Category */
  /* search_resources */  /* Master */ $handler->display->display_options['filters']['field_resource_category']['id'] = 'field_resource_category';
  /* search_resources */  /* Master */ $handler->display->display_options['filters']['field_resource_category']['table'] = 'search_api_index_resource_library';
  /* search_resources */  /* Master */ $handler->display->display_options['filters']['field_resource_category']['field'] = 'field_resource_category';
  /* search_resources */  /* Master */ $handler->display->display_options['filters']['field_resource_category']['value'] = array();
  /* search_resources */  /* Master */ $handler->display->display_options['filters']['field_resource_category']['group'] = 1;
  /* search_resources */  /* Master */ $handler->display->display_options['filters']['field_resource_category']['exposed'] = TRUE;
  /* search_resources */  /* Master */ $handler->display->display_options['filters']['field_resource_category']['expose']['operator_id'] = 'field_resource_category_op';
  /* search_resources */  /* Master */ $handler->display->display_options['filters']['field_resource_category']['expose']['label'] = 'Category';
  /* search_resources */  /* Master */ $handler->display->display_options['filters']['field_resource_category']['expose']['operator'] = 'field_resource_category_op';
  /* search_resources */  /* Master */ $handler->display->display_options['filters']['field_resource_category']['expose']['identifier'] = 'field_resource_category';
  /* search_resources */  /* Master */ $handler->display->display_options['filters']['field_resource_category']['expose']['multiple'] = TRUE;
  /* search_resources */  /* Master */ $handler->display->display_options['filters']['field_resource_category']['expose']['remember_roles'] = array(
  /* search_resources */  /* Master */   2 => '2',
  /* search_resources */  /* Master */   1 => 0,
  /* search_resources */  /* Master */   9 => 0,
  /* search_resources */  /* Master */   10 => 0,
  /* search_resources */  /* Master */   11 => 0,
  /* search_resources */  /* Master */ );
  /* search_resources */  /* Master */ $handler->display->display_options['filters']['field_resource_category']['type'] = 'select';
  /* search_resources */  /* Master */ /* Filter criterion: Indexed Node: Resource Type */
  /* search_resources */  /* Master */ $handler->display->display_options['filters']['field_resource_type']['id'] = 'field_resource_type';
  /* search_resources */  /* Master */ $handler->display->display_options['filters']['field_resource_type']['table'] = 'search_api_index_resource_library';
  /* search_resources */  /* Master */ $handler->display->display_options['filters']['field_resource_type']['field'] = 'field_resource_type';
  /* search_resources */  /* Master */ $handler->display->display_options['filters']['field_resource_type']['value'] = array();
  /* search_resources */  /* Master */ $handler->display->display_options['filters']['field_resource_type']['group'] = 1;
  /* search_resources */  /* Master */ $handler->display->display_options['filters']['field_resource_type']['exposed'] = TRUE;
  /* search_resources */  /* Master */ $handler->display->display_options['filters']['field_resource_type']['expose']['operator_id'] = 'field_resource_type_op';
  /* search_resources */  /* Master */ $handler->display->display_options['filters']['field_resource_type']['expose']['label'] = 'Type';
  /* search_resources */  /* Master */ $handler->display->display_options['filters']['field_resource_type']['expose']['operator'] = 'field_resource_type_op';
  /* search_resources */  /* Master */ $handler->display->display_options['filters']['field_resource_type']['expose']['identifier'] = 'field_resource_type';
  /* search_resources */  /* Master */ $handler->display->display_options['filters']['field_resource_type']['expose']['multiple'] = TRUE;
  /* search_resources */  /* Master */ $handler->display->display_options['filters']['field_resource_type']['expose']['remember_roles'] = array(
  /* search_resources */  /* Master */   2 => '2',
  /* search_resources */  /* Master */   1 => 0,
  /* search_resources */  /* Master */   9 => 0,
  /* search_resources */  /* Master */   10 => 0,
  /* search_resources */  /* Master */   11 => 0,
  /* search_resources */  /* Master */ );
  /* search_resources */  /* Master */ $handler->display->display_options['filters']['field_resource_type']['type'] = 'select';
  /* search_resources */  /* Master */ /* Filter criterion: Search: Fulltext search */
  /* search_resources */  /* Master */ $handler->display->display_options['filters']['search_api_views_fulltext']['id'] = 'search_api_views_fulltext';
  /* search_resources */  /* Master */ $handler->display->display_options['filters']['search_api_views_fulltext']['table'] = 'search_api_index_resource_library';
  /* search_resources */  /* Master */ $handler->display->display_options['filters']['search_api_views_fulltext']['field'] = 'search_api_views_fulltext';
  /* search_resources */  /* Master */ $handler->display->display_options['filters']['search_api_views_fulltext']['group'] = 1;
  /* search_resources */  /* Master */ $handler->display->display_options['filters']['search_api_views_fulltext']['exposed'] = TRUE;
  /* search_resources */  /* Master */ $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['operator_id'] = 'search_api_views_fulltext_op';
  /* search_resources */  /* Master */ $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['label'] = 'Text search';
  /* search_resources */  /* Master */ $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['operator'] = 'search_api_views_fulltext_op';
  /* search_resources */  /* Master */ $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['identifier'] = 'search_api_views_fulltext';
  /* search_resources */  /* Master */ $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['remember_roles'] = array(
  /* search_resources */  /* Master */   2 => '2',
  /* search_resources */  /* Master */   1 => 0,
  /* search_resources */  /* Master */   9 => 0,
  /* search_resources */  /* Master */   10 => 0,
  /* search_resources */  /* Master */   11 => 0,
  /* search_resources */  /* Master */ );

  /* search_resources */ /* Display: Page */
  /* search_resources */  /* Page */ $handler = $view->new_display('page', 'Page', 'page');
  /* search_resources */  /* Page */ $handler->display->display_options['path'] = 'search-resources';

  /* search_resources */ /* Display: Library */
  /* search_resources */  /* Library */ $handler = $view->new_display('panel_pane', 'Library', 'panel_pane_1');
  /* search_resources */  /* Library */ $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  /* search_resources */  /* Library */ $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  /* search_resources */  /* Library */ $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  /* search_resources */  /* Library */ $handler->display->display_options['exposed_form']['options']['bef'] = array(
  /* search_resources */  /* Library */   'general' => array(
  /* search_resources */  /* Library */     'input_required' => 0,
  /* search_resources */  /* Library */     'text_input_required' => array(
  /* search_resources */  /* Library */       'text_input_required' => array(
  /* search_resources */  /* Library */         'value' => 'Select any filter and click on Apply to see results',
  /* search_resources */  /* Library */         'format' => 'filtered_html',
  /* search_resources */  /* Library */       ),
  /* search_resources */  /* Library */     ),
  /* search_resources */  /* Library */     'allow_secondary' => 0,
  /* search_resources */  /* Library */     'secondary_label' => 'Advanced options',
  /* search_resources */  /* Library */     'secondary_collapse_override' => '0',
  /* search_resources */  /* Library */   ),
  /* search_resources */  /* Library */   'field_resource_tags' => array(
  /* search_resources */  /* Library */     'bef_format' => 'default',
  /* search_resources */  /* Library */     'slider_options' => array(
  /* search_resources */  /* Library */       'bef_slider_min' => '0',
  /* search_resources */  /* Library */       'bef_slider_max' => '99999',
  /* search_resources */  /* Library */       'bef_slider_step' => '1',
  /* search_resources */  /* Library */       'bef_slider_animate' => '',
  /* search_resources */  /* Library */       'bef_slider_orientation' => 'horizontal',
  /* search_resources */  /* Library */     ),
  /* search_resources */  /* Library */     'more_options' => array(
  /* search_resources */  /* Library */       'autosubmit' => 0,
  /* search_resources */  /* Library */       'is_secondary' => 0,
  /* search_resources */  /* Library */       'any_label' => '',
  /* search_resources */  /* Library */       'bef_filter_description' => '',
  /* search_resources */  /* Library */       'tokens' => array(
  /* search_resources */  /* Library */         'available' => array(
  /* search_resources */  /* Library */           0 => 'global_types',
  /* search_resources */  /* Library */         ),
  /* search_resources */  /* Library */       ),
  /* search_resources */  /* Library */       'rewrite' => array(
  /* search_resources */  /* Library */         'filter_rewrite_values' => '',
  /* search_resources */  /* Library */       ),
  /* search_resources */  /* Library */     ),
  /* search_resources */  /* Library */   ),
  /* search_resources */  /* Library */   'field_resource_category' => array(
  /* search_resources */  /* Library */     'bef_format' => 'default',
  /* search_resources */  /* Library */     'slider_options' => array(
  /* search_resources */  /* Library */       'bef_slider_min' => '0',
  /* search_resources */  /* Library */       'bef_slider_max' => '99999',
  /* search_resources */  /* Library */       'bef_slider_step' => '1',
  /* search_resources */  /* Library */       'bef_slider_animate' => '',
  /* search_resources */  /* Library */       'bef_slider_orientation' => 'horizontal',
  /* search_resources */  /* Library */     ),
  /* search_resources */  /* Library */     'more_options' => array(
  /* search_resources */  /* Library */       'autosubmit' => 0,
  /* search_resources */  /* Library */       'is_secondary' => 0,
  /* search_resources */  /* Library */       'any_label' => '',
  /* search_resources */  /* Library */       'bef_filter_description' => '',
  /* search_resources */  /* Library */       'tokens' => array(
  /* search_resources */  /* Library */         'available' => array(
  /* search_resources */  /* Library */           0 => 'global_types',
  /* search_resources */  /* Library */         ),
  /* search_resources */  /* Library */       ),
  /* search_resources */  /* Library */       'rewrite' => array(
  /* search_resources */  /* Library */         'filter_rewrite_values' => '',
  /* search_resources */  /* Library */       ),
  /* search_resources */  /* Library */     ),
  /* search_resources */  /* Library */   ),
  /* search_resources */  /* Library */   'field_resource_type' => array(
  /* search_resources */  /* Library */     'bef_format' => 'default',
  /* search_resources */  /* Library */     'slider_options' => array(
  /* search_resources */  /* Library */       'bef_slider_min' => '0',
  /* search_resources */  /* Library */       'bef_slider_max' => '99999',
  /* search_resources */  /* Library */       'bef_slider_step' => '1',
  /* search_resources */  /* Library */       'bef_slider_animate' => '',
  /* search_resources */  /* Library */       'bef_slider_orientation' => 'horizontal',
  /* search_resources */  /* Library */     ),
  /* search_resources */  /* Library */     'more_options' => array(
  /* search_resources */  /* Library */       'autosubmit' => 0,
  /* search_resources */  /* Library */       'is_secondary' => 0,
  /* search_resources */  /* Library */       'any_label' => '',
  /* search_resources */  /* Library */       'bef_filter_description' => '',
  /* search_resources */  /* Library */       'tokens' => array(
  /* search_resources */  /* Library */         'available' => array(
  /* search_resources */  /* Library */           0 => 'global_types',
  /* search_resources */  /* Library */         ),
  /* search_resources */  /* Library */       ),
  /* search_resources */  /* Library */       'rewrite' => array(
  /* search_resources */  /* Library */         'filter_rewrite_values' => '',
  /* search_resources */  /* Library */       ),
  /* search_resources */  /* Library */     ),
  /* search_resources */  /* Library */   ),
  /* search_resources */  /* Library */   'field_resource_language' => array(
  /* search_resources */  /* Library */     'bef_format' => 'default',
  /* search_resources */  /* Library */     'slider_options' => array(
  /* search_resources */  /* Library */       'bef_slider_min' => '0',
  /* search_resources */  /* Library */       'bef_slider_max' => '99999',
  /* search_resources */  /* Library */       'bef_slider_step' => '1',
  /* search_resources */  /* Library */       'bef_slider_animate' => '',
  /* search_resources */  /* Library */       'bef_slider_orientation' => 'horizontal',
  /* search_resources */  /* Library */     ),
  /* search_resources */  /* Library */     'more_options' => array(
  /* search_resources */  /* Library */       'autosubmit' => 0,
  /* search_resources */  /* Library */       'is_secondary' => 0,
  /* search_resources */  /* Library */       'any_label' => '',
  /* search_resources */  /* Library */       'bef_filter_description' => '',
  /* search_resources */  /* Library */       'tokens' => array(
  /* search_resources */  /* Library */         'available' => array(
  /* search_resources */  /* Library */           0 => 'global_types',
  /* search_resources */  /* Library */         ),
  /* search_resources */  /* Library */       ),
  /* search_resources */  /* Library */       'rewrite' => array(
  /* search_resources */  /* Library */         'filter_rewrite_values' => '',
  /* search_resources */  /* Library */       ),
  /* search_resources */  /* Library */     ),
  /* search_resources */  /* Library */   ),
  /* search_resources */  /* Library */   'search_api_views_fulltext' => array(
  /* search_resources */  /* Library */     'bef_format' => 'default',
  /* search_resources */  /* Library */     'more_options' => array(
  /* search_resources */  /* Library */       'autosubmit' => 0,
  /* search_resources */  /* Library */       'is_secondary' => 0,
  /* search_resources */  /* Library */       'any_label' => '',
  /* search_resources */  /* Library */       'bef_filter_description' => '',
  /* search_resources */  /* Library */       'tokens' => array(
  /* search_resources */  /* Library */         'available' => array(
  /* search_resources */  /* Library */           0 => 'global_types',
  /* search_resources */  /* Library */         ),
  /* search_resources */  /* Library */       ),
  /* search_resources */  /* Library */       'rewrite' => array(
  /* search_resources */  /* Library */         'filter_rewrite_values' => '',
  /* search_resources */  /* Library */       ),
  /* search_resources */  /* Library */     ),
  /* search_resources */  /* Library */   ),
  /* search_resources */  /* Library */ );
  /* search_resources */  /* Library */ $handler->display->display_options['defaults']['fields'] = FALSE;
  /* search_resources */  /* Library */ /* Field: Indexed Node: Node ID */
  /* search_resources */  /* Library */ $handler->display->display_options['fields']['nid']['id'] = 'nid';
  /* search_resources */  /* Library */ $handler->display->display_options['fields']['nid']['table'] = 'search_api_index_resource_library';
  /* search_resources */  /* Library */ $handler->display->display_options['fields']['nid']['field'] = 'nid';
  /* search_resources */  /* Library */ $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  /* search_resources */  /* Library */ $handler->display->display_options['fields']['nid']['separator'] = '';
  /* search_resources */  /* Library */ $handler->display->display_options['fields']['nid']['link_to_entity'] = 0;
  /* search_resources */  /* Library */ /* Field: Indexed Node: Title */
  /* search_resources */  /* Library */ $handler->display->display_options['fields']['title']['id'] = 'title';
  /* search_resources */  /* Library */ $handler->display->display_options['fields']['title']['table'] = 'search_api_index_resource_library';
  /* search_resources */  /* Library */ $handler->display->display_options['fields']['title']['field'] = 'title';
  /* search_resources */  /* Library */ $handler->display->display_options['fields']['title']['label'] = '';
  /* search_resources */  /* Library */ $handler->display->display_options['fields']['title']['element_type'] = 'h3';
  /* search_resources */  /* Library */ $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* search_resources */  /* Library */ $handler->display->display_options['fields']['title']['hide_empty'] = TRUE;
  /* search_resources */  /* Library */ $handler->display->display_options['fields']['title']['link_to_entity'] = 1;
  /* search_resources */  /* Library */ /* Field: Indexed Node: Link */
  /* search_resources */  /* Library */ $handler->display->display_options['fields']['field_link']['id'] = 'field_link';
  /* search_resources */  /* Library */ $handler->display->display_options['fields']['field_link']['table'] = 'search_api_index_resource_library';
  /* search_resources */  /* Library */ $handler->display->display_options['fields']['field_link']['field'] = 'field_link';
  /* search_resources */  /* Library */ $handler->display->display_options['fields']['field_link']['label'] = '';
  /* search_resources */  /* Library */ $handler->display->display_options['fields']['field_link']['element_label_colon'] = FALSE;
  /* search_resources */  /* Library */ $handler->display->display_options['fields']['field_link']['hide_empty'] = TRUE;
  /* search_resources */  /* Library */ $handler->display->display_options['fields']['field_link']['click_sort_column'] = 'url';
  /* search_resources */  /* Library */ $handler->display->display_options['fields']['field_link']['settings'] = array(
  /* search_resources */  /* Library */   'field_formatter_class' => '',
  /* search_resources */  /* Library */ );
  /* search_resources */  /* Library */ /* Field: Indexed Node: Resource Description */
  /* search_resources */  /* Library */ $handler->display->display_options['fields']['field_resource_description']['id'] = 'field_resource_description';
  /* search_resources */  /* Library */ $handler->display->display_options['fields']['field_resource_description']['table'] = 'search_api_index_resource_library';
  /* search_resources */  /* Library */ $handler->display->display_options['fields']['field_resource_description']['field'] = 'field_resource_description';
  /* search_resources */  /* Library */ $handler->display->display_options['fields']['field_resource_description']['label'] = '';
  /* search_resources */  /* Library */ $handler->display->display_options['fields']['field_resource_description']['alter']['max_length'] = '120';
  /* search_resources */  /* Library */ $handler->display->display_options['fields']['field_resource_description']['alter']['more_link'] = TRUE;
  /* search_resources */  /* Library */ $handler->display->display_options['fields']['field_resource_description']['alter']['more_link_text'] = 'read more';
  /* search_resources */  /* Library */ $handler->display->display_options['fields']['field_resource_description']['alter']['more_link_path'] = 'node/[nid]';
  /* search_resources */  /* Library */ $handler->display->display_options['fields']['field_resource_description']['element_label_colon'] = FALSE;
  /* search_resources */  /* Library */ $handler->display->display_options['fields']['field_resource_description']['type'] = 'text_plain';
  /* search_resources */  /* Library */ $handler->display->display_options['fields']['field_resource_description']['settings'] = array(
  /* search_resources */  /* Library */   'field_formatter_class' => '',
  /* search_resources */  /* Library */ );
  /* search_resources */  /* Library */ /* Field: Content: Edit link */
  /* search_resources */  /* Library */ $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  /* search_resources */  /* Library */ $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  /* search_resources */  /* Library */ $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  /* search_resources */  /* Library */ $handler->display->display_options['fields']['edit_node']['label'] = '';
  /* search_resources */  /* Library */ $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  /* search_resources */  /* Library */ $handler->display->display_options['fields']['edit_node']['text'] = 'Edit Resource';
  /* search_resources */  /* Library */ $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* search_resources */  /* Library */ /* Contextual filter: Indexed Node: Groups audience */
  /* search_resources */  /* Library */ $handler->display->display_options['arguments']['og_group_ref']['id'] = 'og_group_ref';
  /* search_resources */  /* Library */ $handler->display->display_options['arguments']['og_group_ref']['table'] = 'search_api_index_resource_library';
  /* search_resources */  /* Library */ $handler->display->display_options['arguments']['og_group_ref']['field'] = 'og_group_ref';
  /* search_resources */  /* Library */ $handler->display->display_options['arguments']['og_group_ref']['default_action'] = 'default';
  /* search_resources */  /* Library */ $handler->display->display_options['arguments']['og_group_ref']['default_argument_type'] = 'node';
  /* search_resources */  /* Library */ $handler->display->display_options['arguments']['og_group_ref']['summary']['format'] = 'default_summary';
  /* search_resources */  /* Library */ $handler->display->display_options['arguments']['og_group_ref']['break_phrase'] = 0;
  /* search_resources */  /* Library */ $handler->display->display_options['arguments']['og_group_ref']['not'] = 0;
  /* search_resources */  /* Library */ $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  /* search_resources */  /* Library */ $handler->display->display_options['defaults']['filters'] = FALSE;
  /* search_resources */  /* Library */ /* Filter criterion: Indexed Node: Resource Topic */
  /* search_resources */  /* Library */ $handler->display->display_options['filters']['field_resource_tags']['id'] = 'field_resource_tags';
  /* search_resources */  /* Library */ $handler->display->display_options['filters']['field_resource_tags']['table'] = 'search_api_index_resource_library';
  /* search_resources */  /* Library */ $handler->display->display_options['filters']['field_resource_tags']['field'] = 'field_resource_tags';
  /* search_resources */  /* Library */ $handler->display->display_options['filters']['field_resource_tags']['value'] = array();
  /* search_resources */  /* Library */ $handler->display->display_options['filters']['field_resource_tags']['group'] = 1;
  /* search_resources */  /* Library */ $handler->display->display_options['filters']['field_resource_tags']['exposed'] = TRUE;
  /* search_resources */  /* Library */ $handler->display->display_options['filters']['field_resource_tags']['expose']['operator_id'] = 'field_resource_tags_op';
  /* search_resources */  /* Library */ $handler->display->display_options['filters']['field_resource_tags']['expose']['label'] = 'Topic';
  /* search_resources */  /* Library */ $handler->display->display_options['filters']['field_resource_tags']['expose']['operator'] = 'field_resource_tags_op';
  /* search_resources */  /* Library */ $handler->display->display_options['filters']['field_resource_tags']['expose']['identifier'] = 'field_resource_tags';
  /* search_resources */  /* Library */ $handler->display->display_options['filters']['field_resource_tags']['expose']['multiple'] = TRUE;
  /* search_resources */  /* Library */ $handler->display->display_options['filters']['field_resource_tags']['expose']['remember_roles'] = array(
  /* search_resources */  /* Library */   2 => '2',
  /* search_resources */  /* Library */   1 => 0,
  /* search_resources */  /* Library */   9 => 0,
  /* search_resources */  /* Library */   10 => 0,
  /* search_resources */  /* Library */   11 => 0,
  /* search_resources */  /* Library */ );
  /* search_resources */  /* Library */ $handler->display->display_options['filters']['field_resource_tags']['group_info']['label'] = 'Tags';
  /* search_resources */  /* Library */ $handler->display->display_options['filters']['field_resource_tags']['group_info']['identifier'] = 'field_resource_tags';
  /* search_resources */  /* Library */ $handler->display->display_options['filters']['field_resource_tags']['group_info']['remember'] = FALSE;
  /* search_resources */  /* Library */ $handler->display->display_options['filters']['field_resource_tags']['group_info']['group_items'] = array(
  /* search_resources */  /* Library */   1 => array(),
  /* search_resources */  /* Library */   2 => array(),
  /* search_resources */  /* Library */   3 => array(),
  /* search_resources */  /* Library */ );
  /* search_resources */  /* Library */ $handler->display->display_options['filters']['field_resource_tags']['type'] = 'select';
  /* search_resources */  /* Library */ /* Filter criterion: Indexed Node: Resource Category */
  /* search_resources */  /* Library */ $handler->display->display_options['filters']['field_resource_category']['id'] = 'field_resource_category';
  /* search_resources */  /* Library */ $handler->display->display_options['filters']['field_resource_category']['table'] = 'search_api_index_resource_library';
  /* search_resources */  /* Library */ $handler->display->display_options['filters']['field_resource_category']['field'] = 'field_resource_category';
  /* search_resources */  /* Library */ $handler->display->display_options['filters']['field_resource_category']['value'] = array();
  /* search_resources */  /* Library */ $handler->display->display_options['filters']['field_resource_category']['group'] = 1;
  /* search_resources */  /* Library */ $handler->display->display_options['filters']['field_resource_category']['exposed'] = TRUE;
  /* search_resources */  /* Library */ $handler->display->display_options['filters']['field_resource_category']['expose']['operator_id'] = 'field_resource_category_op';
  /* search_resources */  /* Library */ $handler->display->display_options['filters']['field_resource_category']['expose']['label'] = 'Category';
  /* search_resources */  /* Library */ $handler->display->display_options['filters']['field_resource_category']['expose']['operator'] = 'field_resource_category_op';
  /* search_resources */  /* Library */ $handler->display->display_options['filters']['field_resource_category']['expose']['identifier'] = 'field_resource_category';
  /* search_resources */  /* Library */ $handler->display->display_options['filters']['field_resource_category']['expose']['multiple'] = TRUE;
  /* search_resources */  /* Library */ $handler->display->display_options['filters']['field_resource_category']['expose']['remember_roles'] = array(
  /* search_resources */  /* Library */   2 => '2',
  /* search_resources */  /* Library */   1 => 0,
  /* search_resources */  /* Library */   9 => 0,
  /* search_resources */  /* Library */   10 => 0,
  /* search_resources */  /* Library */   11 => 0,
  /* search_resources */  /* Library */ );
  /* search_resources */  /* Library */ $handler->display->display_options['filters']['field_resource_category']['type'] = 'select';
  /* search_resources */  /* Library */ /* Filter criterion: Indexed Node: Resource Type */
  /* search_resources */  /* Library */ $handler->display->display_options['filters']['field_resource_type']['id'] = 'field_resource_type';
  /* search_resources */  /* Library */ $handler->display->display_options['filters']['field_resource_type']['table'] = 'search_api_index_resource_library';
  /* search_resources */  /* Library */ $handler->display->display_options['filters']['field_resource_type']['field'] = 'field_resource_type';
  /* search_resources */  /* Library */ $handler->display->display_options['filters']['field_resource_type']['value'] = array();
  /* search_resources */  /* Library */ $handler->display->display_options['filters']['field_resource_type']['group'] = 1;
  /* search_resources */  /* Library */ $handler->display->display_options['filters']['field_resource_type']['exposed'] = TRUE;
  /* search_resources */  /* Library */ $handler->display->display_options['filters']['field_resource_type']['expose']['operator_id'] = 'field_resource_type_op';
  /* search_resources */  /* Library */ $handler->display->display_options['filters']['field_resource_type']['expose']['label'] = 'Type';
  /* search_resources */  /* Library */ $handler->display->display_options['filters']['field_resource_type']['expose']['operator'] = 'field_resource_type_op';
  /* search_resources */  /* Library */ $handler->display->display_options['filters']['field_resource_type']['expose']['identifier'] = 'field_resource_type';
  /* search_resources */  /* Library */ $handler->display->display_options['filters']['field_resource_type']['expose']['multiple'] = TRUE;
  /* search_resources */  /* Library */ $handler->display->display_options['filters']['field_resource_type']['expose']['remember_roles'] = array(
  /* search_resources */  /* Library */   2 => '2',
  /* search_resources */  /* Library */   1 => 0,
  /* search_resources */  /* Library */   9 => 0,
  /* search_resources */  /* Library */   10 => 0,
  /* search_resources */  /* Library */   11 => 0,
  /* search_resources */  /* Library */ );
  /* search_resources */  /* Library */ $handler->display->display_options['filters']['field_resource_type']['type'] = 'select';
  /* search_resources */  /* Library */ /* Filter criterion: Indexed Node: Resource Language */
  /* search_resources */  /* Library */ $handler->display->display_options['filters']['field_resource_language']['id'] = 'field_resource_language';
  /* search_resources */  /* Library */ $handler->display->display_options['filters']['field_resource_language']['table'] = 'search_api_index_resource_library';
  /* search_resources */  /* Library */ $handler->display->display_options['filters']['field_resource_language']['field'] = 'field_resource_language';
  /* search_resources */  /* Library */ $handler->display->display_options['filters']['field_resource_language']['group'] = 1;
  /* search_resources */  /* Library */ $handler->display->display_options['filters']['field_resource_language']['exposed'] = TRUE;
  /* search_resources */  /* Library */ $handler->display->display_options['filters']['field_resource_language']['expose']['operator_id'] = 'field_resource_language_op';
  /* search_resources */  /* Library */ $handler->display->display_options['filters']['field_resource_language']['expose']['label'] = 'Language';
  /* search_resources */  /* Library */ $handler->display->display_options['filters']['field_resource_language']['expose']['operator'] = 'field_resource_language_op';
  /* search_resources */  /* Library */ $handler->display->display_options['filters']['field_resource_language']['expose']['identifier'] = 'field_resource_language';
  /* search_resources */  /* Library */ $handler->display->display_options['filters']['field_resource_language']['expose']['remember_roles'] = array(
  /* search_resources */  /* Library */   2 => '2',
  /* search_resources */  /* Library */   1 => 0,
  /* search_resources */  /* Library */   9 => 0,
  /* search_resources */  /* Library */   10 => 0,
  /* search_resources */  /* Library */   11 => 0,
  /* search_resources */  /* Library */ );
  /* search_resources */  /* Library */ $handler->display->display_options['filters']['field_resource_language']['type'] = 'select';
  /* search_resources */  /* Library */ /* Filter criterion: Search: Fulltext search */
  /* search_resources */  /* Library */ $handler->display->display_options['filters']['search_api_views_fulltext']['id'] = 'search_api_views_fulltext';
  /* search_resources */  /* Library */ $handler->display->display_options['filters']['search_api_views_fulltext']['table'] = 'search_api_index_resource_library';
  /* search_resources */  /* Library */ $handler->display->display_options['filters']['search_api_views_fulltext']['field'] = 'search_api_views_fulltext';
  /* search_resources */  /* Library */ $handler->display->display_options['filters']['search_api_views_fulltext']['group'] = 1;
  /* search_resources */  /* Library */ $handler->display->display_options['filters']['search_api_views_fulltext']['exposed'] = TRUE;
  /* search_resources */  /* Library */ $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['operator_id'] = 'search_api_views_fulltext_op';
  /* search_resources */  /* Library */ $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['label'] = 'Text search';
  /* search_resources */  /* Library */ $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['operator'] = 'search_api_views_fulltext_op';
  /* search_resources */  /* Library */ $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['identifier'] = 'search_api_views_fulltext';
  /* search_resources */  /* Library */ $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['remember_roles'] = array(
  /* search_resources */  /* Library */   2 => '2',
  /* search_resources */  /* Library */   1 => 0,
  /* search_resources */  /* Library */   9 => 0,
  /* search_resources */  /* Library */   10 => 0,
  /* search_resources */  /* Library */   11 => 0,
  /* search_resources */  /* Library */ );
  /* search_resources */  /* Library */ $handler->display->display_options['allow']['use_pager'] = 0;
  /* search_resources */  /* Library */ $handler->display->display_options['allow']['items_per_page'] = 0;
  /* search_resources */  /* Library */ $handler->display->display_options['allow']['offset'] = 0;
  /* search_resources */  /* Library */ $handler->display->display_options['allow']['link_to_view'] = 0;
  /* search_resources */  /* Library */ $handler->display->display_options['allow']['more_link'] = 0;
  /* search_resources */  /* Library */ $handler->display->display_options['allow']['path_override'] = 0;
  /* search_resources */  /* Library */ $handler->display->display_options['allow']['title_override'] = 'title_override';
  /* search_resources */  /* Library */ $handler->display->display_options['allow']['exposed_form'] = 0;
  /* search_resources */  /* Library */ $handler->display->display_options['allow']['fields_override'] = 0;
  /* search_resources */  /* Library */ $handler->display->display_options['argument_input'] = array(
  /* search_resources */  /* Library */   'og_group_ref' => array(
  /* search_resources */  /* Library */     'type' => 'panel',
  /* search_resources */  /* Library */     'context' => 'entity:comment.author',
  /* search_resources */  /* Library */     'context_optional' => 0,
  /* search_resources */  /* Library */     'panel' => '1',
  /* search_resources */  /* Library */     'fixed' => '',
  /* search_resources */  /* Library */     'label' => 'Indexed Node: Groups audience',
  /* search_resources */  /* Library */   ),
  /* search_resources */  /* Library */ );
  /* search_resources */  /* Library */ $handler->display->display_options['inherit_panels_path'] = '1';
  /* search_resources */ $translatables['search_resources'] = array(
  /* search_resources */   t('Master'),
  /* search_resources */   t('Library'),
  /* search_resources */   t('more'),
  /* search_resources */   t('Apply'),
  /* search_resources */   t('Reset'),
  /* search_resources */   t('Sort by'),
  /* search_resources */   t('Asc'),
  /* search_resources */   t('Desc'),
  /* search_resources */   t('Items per page'),
  /* search_resources */   t('- All -'),
  /* search_resources */   t('Offset'),
  /* search_resources */   t('« first'),
  /* search_resources */   t('‹ previous'),
  /* search_resources */   t('next ›'),
  /* search_resources */   t('last »'),
  /* search_resources */   t('Node ID'),
  /* search_resources */   t('.'),
  /* search_resources */   t('read more'),
  /* search_resources */   t('Resource Type'),
  /* search_resources */   t('Resource Topic'),
  /* search_resources */   t('Resource Category'),
  /* search_resources */   t('All'),
  /* search_resources */   t('Topic'),
  /* search_resources */   t('Tags'),
  /* search_resources */   t('Category'),
  /* search_resources */   t('Type'),
  /* search_resources */   t('Text search'),
  /* search_resources */   t('Page'),
  /* search_resources */   t('Select any filter and click on Apply to see results'),
  /* search_resources */   t('Advanced options'),
  /* search_resources */   t('Edit Resource'),
  /* search_resources */   t('Language'),
  /* search_resources */   t('View panes'),
  /* search_resources */ );
  $export['search_resources'] = $view;

  return $export;
}
