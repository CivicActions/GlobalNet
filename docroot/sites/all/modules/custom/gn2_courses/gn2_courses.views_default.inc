<?php
/**
 * @file
 * gn2_courses.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function gn2_courses_views_default_views() {
  $export = array();

  /* session_level_1_title_links */ $view = new view();
  /* session_level_1_title_links */ $view->name = 'session_level_1_title_links';
  /* session_level_1_title_links */ $view->description = '';
  /* session_level_1_title_links */ $view->tag = 'default';
  /* session_level_1_title_links */ $view->base_table = 'field_collection_item';
  /* session_level_1_title_links */ $view->human_name = 'Session Level 1 Title links';
  /* session_level_1_title_links */ $view->core = 7;
  /* session_level_1_title_links */ $view->api_version = '3.0';
  /* session_level_1_title_links */ $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* session_level_1_title_links */ /* Display: Master */
  /* session_level_1_title_links */  /* Master */ $handler = $view->new_display('default', 'Master', 'default');
  /* session_level_1_title_links */  /* Master */ $handler->display->display_options['title'] = 'Sessions';
  /* session_level_1_title_links */  /* Master */ $handler->display->display_options['use_more_always'] = FALSE;
  /* session_level_1_title_links */  /* Master */ $handler->display->display_options['access']['type'] = 'none';
  /* session_level_1_title_links */  /* Master */ $handler->display->display_options['cache']['type'] = 'none';
  /* session_level_1_title_links */  /* Master */ $handler->display->display_options['query']['type'] = 'views_query';
  /* session_level_1_title_links */  /* Master */ $handler->display->display_options['exposed_form']['type'] = 'basic';
  /* session_level_1_title_links */  /* Master */ $handler->display->display_options['pager']['type'] = 'none';
  /* session_level_1_title_links */  /* Master */ $handler->display->display_options['pager']['options']['offset'] = '0';
  /* session_level_1_title_links */  /* Master */ $handler->display->display_options['style_plugin'] = 'default';
  /* session_level_1_title_links */  /* Master */ $handler->display->display_options['row_plugin'] = 'fields';
  /* session_level_1_title_links */  /* Master */ /* Footer: Global: Text area */
  /* session_level_1_title_links */  /* Master */ $handler->display->display_options['footer']['area']['id'] = 'area';
  /* session_level_1_title_links */  /* Master */ $handler->display->display_options['footer']['area']['table'] = 'views';
  /* session_level_1_title_links */  /* Master */ $handler->display->display_options['footer']['area']['field'] = 'area';
  /* session_level_1_title_links */  /* Master */ $handler->display->display_options['footer']['area']['empty'] = TRUE;
  /* session_level_1_title_links */  /* Master */ $handler->display->display_options['footer']['area']['content'] = '<a class="ajaxatron level1" data-parent="send-to-nid" data-type="add" data-nid="!1" data-level="level1" id="ajaxatron-!1" title="Add a new top-level session" aria-label="Add a new top-level session">New Session</a><div class="ajaxatron-ajax ajaxatron-!1"><div class="sessions-ajax-form"></div><div style="display:block;clear:both"></div></div>';
  /* session_level_1_title_links */  /* Master */ $handler->display->display_options['footer']['area']['format'] = 'filtered_html';
  /* session_level_1_title_links */  /* Master */ $handler->display->display_options['footer']['area']['tokenize'] = TRUE;
  /* session_level_1_title_links */  /* Master */ /* No results behavior: Global: Text area */
  /* session_level_1_title_links */  /* Master */ $handler->display->display_options['empty']['area']['id'] = 'area';
  /* session_level_1_title_links */  /* Master */ $handler->display->display_options['empty']['area']['table'] = 'views';
  /* session_level_1_title_links */  /* Master */ $handler->display->display_options['empty']['area']['field'] = 'area';
  /* session_level_1_title_links */  /* Master */ $handler->display->display_options['empty']['area']['empty'] = TRUE;
  /* session_level_1_title_links */  /* Master */ $handler->display->display_options['empty']['area']['content'] = 'No sessions, at this time';
  /* session_level_1_title_links */  /* Master */ $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  /* session_level_1_title_links */  /* Master */ /* Relationship: Field collection item: Entity with the Session (field_session) */
  /* session_level_1_title_links */  /* Master */ $handler->display->display_options['relationships']['field_session_node']['id'] = 'field_session_node';
  /* session_level_1_title_links */  /* Master */ $handler->display->display_options['relationships']['field_session_node']['table'] = 'field_collection_item';
  /* session_level_1_title_links */  /* Master */ $handler->display->display_options['relationships']['field_session_node']['field'] = 'field_session_node';
  /* session_level_1_title_links */  /* Master */ $handler->display->display_options['relationships']['field_session_node']['required'] = TRUE;
  /* session_level_1_title_links */  /* Master */ /* Field: Field collection item: Field collection item ID */
  /* session_level_1_title_links */  /* Master */ $handler->display->display_options['fields']['item_id']['id'] = 'item_id';
  /* session_level_1_title_links */  /* Master */ $handler->display->display_options['fields']['item_id']['table'] = 'field_collection_item';
  /* session_level_1_title_links */  /* Master */ $handler->display->display_options['fields']['item_id']['field'] = 'item_id';
  /* session_level_1_title_links */  /* Master */ $handler->display->display_options['fields']['item_id']['label'] = '';
  /* session_level_1_title_links */  /* Master */ $handler->display->display_options['fields']['item_id']['exclude'] = TRUE;
  /* session_level_1_title_links */  /* Master */ $handler->display->display_options['fields']['item_id']['element_label_colon'] = FALSE;
  /* session_level_1_title_links */  /* Master */ $handler->display->display_options['fields']['item_id']['separator'] = '';
  /* session_level_1_title_links */  /* Master */ /* Field: Content: Nid */
  /* session_level_1_title_links */  /* Master */ $handler->display->display_options['fields']['nid']['id'] = 'nid';
  /* session_level_1_title_links */  /* Master */ $handler->display->display_options['fields']['nid']['table'] = 'node';
  /* session_level_1_title_links */  /* Master */ $handler->display->display_options['fields']['nid']['field'] = 'nid';
  /* session_level_1_title_links */  /* Master */ $handler->display->display_options['fields']['nid']['relationship'] = 'field_session_node';
  /* session_level_1_title_links */  /* Master */ $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  /* session_level_1_title_links */  /* Master */ /* Field: Field: Title */
  /* session_level_1_title_links */  /* Master */ $handler->display->display_options['fields']['field_title']['id'] = 'field_title';
  /* session_level_1_title_links */  /* Master */ $handler->display->display_options['fields']['field_title']['table'] = 'field_data_field_title';
  /* session_level_1_title_links */  /* Master */ $handler->display->display_options['fields']['field_title']['field'] = 'field_title';
  /* session_level_1_title_links */  /* Master */ $handler->display->display_options['fields']['field_title']['label'] = '';
  /* session_level_1_title_links */  /* Master */ $handler->display->display_options['fields']['field_title']['alter']['make_link'] = TRUE;
  /* session_level_1_title_links */  /* Master */ $handler->display->display_options['fields']['field_title']['alter']['path'] = 'course-session-form/[nid]/[item_id]';
  /* session_level_1_title_links */  /* Master */ $handler->display->display_options['fields']['field_title']['element_type'] = 'span';
  /* session_level_1_title_links */  /* Master */ $handler->display->display_options['fields']['field_title']['element_class'] = 'special-ajax-link';
  /* session_level_1_title_links */  /* Master */ $handler->display->display_options['fields']['field_title']['element_label_colon'] = FALSE;
  /* session_level_1_title_links */  /* Master */ $handler->display->display_options['fields']['field_title']['element_wrapper_type'] = '0';
  /* session_level_1_title_links */  /* Master */ $handler->display->display_options['fields']['field_title']['element_default_classes'] = FALSE;
  /* session_level_1_title_links */  /* Master */ $handler->display->display_options['fields']['field_title']['hide_empty'] = TRUE;
  /* session_level_1_title_links */  /* Master */ $handler->display->display_options['fields']['field_title']['type'] = 'text_plain';
  /* session_level_1_title_links */  /* Master */ $handler->display->display_options['fields']['field_title']['settings'] = array(
  /* session_level_1_title_links */  /* Master */   'field_formatter_class' => '',
  /* session_level_1_title_links */  /* Master */ );
  /* session_level_1_title_links */  /* Master */ $handler->display->display_options['fields']['field_title']['field_api_classes'] = TRUE;
  /* session_level_1_title_links */  /* Master */ /* Contextual filter: Content: Nid */
  /* session_level_1_title_links */  /* Master */ $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  /* session_level_1_title_links */  /* Master */ $handler->display->display_options['arguments']['nid']['table'] = 'node';
  /* session_level_1_title_links */  /* Master */ $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  /* session_level_1_title_links */  /* Master */ $handler->display->display_options['arguments']['nid']['relationship'] = 'field_session_node';
  /* session_level_1_title_links */  /* Master */ $handler->display->display_options['arguments']['nid']['default_action'] = 'empty';
  /* session_level_1_title_links */  /* Master */ $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  /* session_level_1_title_links */  /* Master */ $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  /* session_level_1_title_links */  /* Master */ $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  /* session_level_1_title_links */  /* Master */ $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';

  /* session_level_1_title_links */ /* Display: Block */
  /* session_level_1_title_links */  /* Block */ $handler = $view->new_display('block', 'Block', 'block');

  /* session_level_1_title_links */ /* Display: Sessions title links */
  /* session_level_1_title_links */  /* Sessions title links */ $handler = $view->new_display('panel_pane', 'Sessions title links', 'panel_pane_1');
  /* session_level_1_title_links */  /* Sessions title links */ $handler->display->display_options['defaults']['css_class'] = FALSE;
  /* session_level_1_title_links */  /* Sessions title links */ $handler->display->display_options['css_class'] = 'sessions-title-links';
  /* session_level_1_title_links */  /* Sessions title links */ $handler->display->display_options['defaults']['fields'] = FALSE;
  /* session_level_1_title_links */  /* Sessions title links */ /* Field: Field collection item: Field collection item ID */
  /* session_level_1_title_links */  /* Sessions title links */ $handler->display->display_options['fields']['item_id']['id'] = 'item_id';
  /* session_level_1_title_links */  /* Sessions title links */ $handler->display->display_options['fields']['item_id']['table'] = 'field_collection_item';
  /* session_level_1_title_links */  /* Sessions title links */ $handler->display->display_options['fields']['item_id']['field'] = 'item_id';
  /* session_level_1_title_links */  /* Sessions title links */ $handler->display->display_options['fields']['item_id']['label'] = '';
  /* session_level_1_title_links */  /* Sessions title links */ $handler->display->display_options['fields']['item_id']['exclude'] = TRUE;
  /* session_level_1_title_links */  /* Sessions title links */ $handler->display->display_options['fields']['item_id']['element_label_colon'] = FALSE;
  /* session_level_1_title_links */  /* Sessions title links */ $handler->display->display_options['fields']['item_id']['separator'] = '';
  /* session_level_1_title_links */  /* Sessions title links */ /* Field: Content: Nid */
  /* session_level_1_title_links */  /* Sessions title links */ $handler->display->display_options['fields']['nid']['id'] = 'nid';
  /* session_level_1_title_links */  /* Sessions title links */ $handler->display->display_options['fields']['nid']['table'] = 'node';
  /* session_level_1_title_links */  /* Sessions title links */ $handler->display->display_options['fields']['nid']['field'] = 'nid';
  /* session_level_1_title_links */  /* Sessions title links */ $handler->display->display_options['fields']['nid']['relationship'] = 'field_session_node';
  /* session_level_1_title_links */  /* Sessions title links */ $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  /* session_level_1_title_links */  /* Sessions title links */ /* Field: Field: Title */
  /* session_level_1_title_links */  /* Sessions title links */ $handler->display->display_options['fields']['field_title']['id'] = 'field_title';
  /* session_level_1_title_links */  /* Sessions title links */ $handler->display->display_options['fields']['field_title']['table'] = 'field_data_field_title';
  /* session_level_1_title_links */  /* Sessions title links */ $handler->display->display_options['fields']['field_title']['field'] = 'field_title';
  /* session_level_1_title_links */  /* Sessions title links */ $handler->display->display_options['fields']['field_title']['label'] = '';
  /* session_level_1_title_links */  /* Sessions title links */ $handler->display->display_options['fields']['field_title']['alter']['alter_text'] = TRUE;
  /* session_level_1_title_links */  /* Sessions title links */ $handler->display->display_options['fields']['field_title']['alter']['text'] = '<a href="/course-session-form/[nid]/[item_id]">[field_title] <span data-nid="!1" data-level="level1" data-id="[item_id]" class="updateatron handle handle-group-level1">+</span></a>';
  /* session_level_1_title_links */  /* Sessions title links */ $handler->display->display_options['fields']['field_title']['alter']['path'] = 'course-session-form/[nid]/[item_id]';
  /* session_level_1_title_links */  /* Sessions title links */ $handler->display->display_options['fields']['field_title']['element_type'] = 'span';
  /* session_level_1_title_links */  /* Sessions title links */ $handler->display->display_options['fields']['field_title']['element_class'] = 'special-ajax-link';
  /* session_level_1_title_links */  /* Sessions title links */ $handler->display->display_options['fields']['field_title']['element_label_colon'] = FALSE;
  /* session_level_1_title_links */  /* Sessions title links */ $handler->display->display_options['fields']['field_title']['element_wrapper_type'] = '0';
  /* session_level_1_title_links */  /* Sessions title links */ $handler->display->display_options['fields']['field_title']['element_default_classes'] = FALSE;
  /* session_level_1_title_links */  /* Sessions title links */ $handler->display->display_options['fields']['field_title']['hide_empty'] = TRUE;
  /* session_level_1_title_links */  /* Sessions title links */ $handler->display->display_options['fields']['field_title']['type'] = 'text_plain';
  /* session_level_1_title_links */  /* Sessions title links */ $handler->display->display_options['fields']['field_title']['settings'] = array(
  /* session_level_1_title_links */  /* Sessions title links */   'field_formatter_class' => '',
  /* session_level_1_title_links */  /* Sessions title links */ );
  /* session_level_1_title_links */  /* Sessions title links */ $handler->display->display_options['fields']['field_title']['field_api_classes'] = TRUE;
  /* session_level_1_title_links */  /* Sessions title links */ $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* session_level_1_title_links */  /* Sessions title links */ /* Sort criterion: Field: Weight (field_weight) */
  /* session_level_1_title_links */  /* Sessions title links */ $handler->display->display_options['sorts']['field_weight_value']['id'] = 'field_weight_value';
  /* session_level_1_title_links */  /* Sessions title links */ $handler->display->display_options['sorts']['field_weight_value']['table'] = 'field_data_field_weight';
  /* session_level_1_title_links */  /* Sessions title links */ $handler->display->display_options['sorts']['field_weight_value']['field'] = 'field_weight_value';
  /* session_level_1_title_links */  /* Sessions title links */ $handler->display->display_options['argument_input'] = array(
  /* session_level_1_title_links */  /* Sessions title links */   'nid' => array(
  /* session_level_1_title_links */  /* Sessions title links */     'type' => 'context',
  /* session_level_1_title_links */  /* Sessions title links */     'context' => 'entity:node.nid',
  /* session_level_1_title_links */  /* Sessions title links */     'context_optional' => 0,
  /* session_level_1_title_links */  /* Sessions title links */     'panel' => '0',
  /* session_level_1_title_links */  /* Sessions title links */     'fixed' => '',
  /* session_level_1_title_links */  /* Sessions title links */     'label' => 'Content: Nid',
  /* session_level_1_title_links */  /* Sessions title links */   ),
  /* session_level_1_title_links */  /* Sessions title links */ );
  /* session_level_1_title_links */ $translatables['session_level_1_title_links'] = array(
  /* session_level_1_title_links */   t('Master'),
  /* session_level_1_title_links */   t('Sessions'),
  /* session_level_1_title_links */   t('more'),
  /* session_level_1_title_links */   t('Apply'),
  /* session_level_1_title_links */   t('Reset'),
  /* session_level_1_title_links */   t('Sort by'),
  /* session_level_1_title_links */   t('Asc'),
  /* session_level_1_title_links */   t('Desc'),
  /* session_level_1_title_links */   t('<a class="ajaxatron level1" data-parent="send-to-nid" data-type="add" data-nid="!1" data-level="level1" id="ajaxatron-!1" title="Add a new top-level session" aria-label="Add a new top-level session">New Session</a><div class="ajaxatron-ajax ajaxatron-!1"><div class="sessions-ajax-form"></div><div style="display:block;clear:both"></div></div>'),
  /* session_level_1_title_links */   t('No sessions, at this time'),
  /* session_level_1_title_links */   t('field_session'),
  /* session_level_1_title_links */   t('.'),
  /* session_level_1_title_links */   t('Nid'),
  /* session_level_1_title_links */   t('All'),
  /* session_level_1_title_links */   t('Block'),
  /* session_level_1_title_links */   t('Sessions title links'),
  /* session_level_1_title_links */   t('<a href="/course-session-form/[nid]/[item_id]">[field_title] <span data-nid="!1" data-level="level1" data-id="[item_id]" class="updateatron handle handle-group-level1">+</span></a>'),
  /* session_level_1_title_links */   t('View panes'),
  /* session_level_1_title_links */ );
  $export['session_level_1_title_links'] = $view;

  return $export;
}
