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

  $view = new view();
  $view->name = 'session_level_1_title_links';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'field_collection_item';
  $view->human_name = 'Session Level 1 Title links';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Sessions';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  /* Relationship: Field collection item: Entity with the Session (field_session) */
  $handler->display->display_options['relationships']['field_session_node']['id'] = 'field_session_node';
  $handler->display->display_options['relationships']['field_session_node']['table'] = 'field_collection_item';
  $handler->display->display_options['relationships']['field_session_node']['field'] = 'field_session_node';
  $handler->display->display_options['relationships']['field_session_node']['required'] = TRUE;
  /* Field: Field collection item: Field collection item ID */
  $handler->display->display_options['fields']['item_id']['id'] = 'item_id';
  $handler->display->display_options['fields']['item_id']['table'] = 'field_collection_item';
  $handler->display->display_options['fields']['item_id']['field'] = 'item_id';
  $handler->display->display_options['fields']['item_id']['label'] = '';
  $handler->display->display_options['fields']['item_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['item_id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['item_id']['separator'] = '';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['relationship'] = 'field_session_node';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  /* Field: Field: Title */
  $handler->display->display_options['fields']['field_title']['id'] = 'field_title';
  $handler->display->display_options['fields']['field_title']['table'] = 'field_data_field_title';
  $handler->display->display_options['fields']['field_title']['field'] = 'field_title';
  $handler->display->display_options['fields']['field_title']['label'] = '';
  $handler->display->display_options['fields']['field_title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_title']['alter']['path'] = 'course-session-form/[nid]/[item_id]';
  $handler->display->display_options['fields']['field_title']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_title']['element_class'] = 'special-ajax-link';
  $handler->display->display_options['fields']['field_title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_title']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_title']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_title']['type'] = 'text_plain';
  $handler->display->display_options['fields']['field_title']['settings'] = array(
    'field_formatter_class' => '',
  );
  $handler->display->display_options['fields']['field_title']['field_api_classes'] = TRUE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'field_session_node';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'empty';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');

  /* Display: Sessions title links */
  $handler = $view->new_display('panel_pane', 'Sessions title links', 'panel_pane_1');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'sessions-title-links';
  $handler->display->display_options['defaults']['footer'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field collection item: Field collection item ID */
  $handler->display->display_options['fields']['item_id']['id'] = 'item_id';
  $handler->display->display_options['fields']['item_id']['table'] = 'field_collection_item';
  $handler->display->display_options['fields']['item_id']['field'] = 'item_id';
  $handler->display->display_options['fields']['item_id']['label'] = '';
  $handler->display->display_options['fields']['item_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['item_id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['item_id']['separator'] = '';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['relationship'] = 'field_session_node';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  /* Field: Field: Title */
  $handler->display->display_options['fields']['field_title']['id'] = 'field_title';
  $handler->display->display_options['fields']['field_title']['table'] = 'field_data_field_title';
  $handler->display->display_options['fields']['field_title']['field'] = 'field_title';
  $handler->display->display_options['fields']['field_title']['label'] = '';
  $handler->display->display_options['fields']['field_title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_title']['alter']['text'] = '<a class="append-handle-catch" unselectable="on" href="/course-session-form/[nid]/[item_id]">[field_title]</a>';
  $handler->display->display_options['fields']['field_title']['alter']['path'] = 'course-session-form/[nid]/[item_id]';
  $handler->display->display_options['fields']['field_title']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_title']['element_class'] = 'special-ajax-link';
  $handler->display->display_options['fields']['field_title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_title']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_title']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_title']['type'] = 'text_plain';
  $handler->display->display_options['fields']['field_title']['settings'] = array(
    'field_formatter_class' => '',
  );
  $handler->display->display_options['fields']['field_title']['field_api_classes'] = TRUE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Field: Weight (field_weight) */
  $handler->display->display_options['sorts']['field_weight_value']['id'] = 'field_weight_value';
  $handler->display->display_options['sorts']['field_weight_value']['table'] = 'field_data_field_weight';
  $handler->display->display_options['sorts']['field_weight_value']['field'] = 'field_weight_value';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['relationship'] = 'field_session_node';
  $handler->display->display_options['argument_input'] = array(
    'nid' => array(
      'type' => 'context',
      'context' => 'entity:node.nid',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Nid',
    ),
  );

  /* Display: Attachment */
  $handler = $view->new_display('attachment', 'Attachment', 'attachment_1');
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'og_context';
  $handler->display->display_options['access']['perm'] = 'administer group';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['empty'] = TRUE;
  $handler->display->display_options['header']['area']['content'] = '<a class="ajaxatron level1" data-parent="send-to-nid" data-type="add" data-nid="!1" data-level="level1" id="ajaxatron-!1" title="Add a new top-level session" aria-label="Add a new top-level session">New Session</a><div class="ajaxatron-ajax ajaxatron-!1"><div class="sessions-ajax-form"></div><div style="display:block;clear:both"></div></div>';
  $handler->display->display_options['header']['area']['format'] = 'filtered_html';
  $handler->display->display_options['header']['area']['tokenize'] = TRUE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field collection item: Field collection item ID */
  $handler->display->display_options['fields']['item_id']['id'] = 'item_id';
  $handler->display->display_options['fields']['item_id']['table'] = 'field_collection_item';
  $handler->display->display_options['fields']['item_id']['field'] = 'item_id';
  $handler->display->display_options['fields']['item_id']['label'] = '';
  $handler->display->display_options['fields']['item_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['item_id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['item_id']['separator'] = '';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['relationship'] = 'field_session_node';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  /* Field: Field: Title */
  $handler->display->display_options['fields']['field_title']['id'] = 'field_title';
  $handler->display->display_options['fields']['field_title']['table'] = 'field_data_field_title';
  $handler->display->display_options['fields']['field_title']['field'] = 'field_title';
  $handler->display->display_options['fields']['field_title']['label'] = '';
  $handler->display->display_options['fields']['field_title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_title']['alter']['path'] = 'course-session-form/[nid]/[item_id]';
  $handler->display->display_options['fields']['field_title']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_title']['element_class'] = 'special-ajax-link';
  $handler->display->display_options['fields']['field_title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_title']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_title']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_title']['type'] = 'text_plain';
  $handler->display->display_options['fields']['field_title']['settings'] = array(
    'field_formatter_class' => '',
  );
  $handler->display->display_options['fields']['field_title']['field_api_classes'] = TRUE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['displays'] = array(
    'panel_pane_1' => 'panel_pane_1',
    'default' => 0,
    'block' => 0,
  );
  $handler->display->display_options['attachment_position'] = 'after';
  $translatables['session_level_1_title_links'] = array(
    t('Master'),
    t('Sessions'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('field_session'),
    t('.'),
    t('Nid'),
    t('All'),
    t('Block'),
    t('Sessions title links'),
    t('<a class="append-handle-catch" unselectable="on" href="/course-session-form/[nid]/[item_id]">[field_title]</a>'),
    t('View panes'),
    t('Attachment'),
    t('<a class="ajaxatron level1" data-parent="send-to-nid" data-type="add" data-nid="!1" data-level="level1" id="ajaxatron-!1" title="Add a new top-level session" aria-label="Add a new top-level session">New Session</a><div class="ajaxatron-ajax ajaxatron-!1"><div class="sessions-ajax-form"></div><div style="display:block;clear:both"></div></div>'),
  );
  $export['session_level_1_title_links'] = $view;

  return $export;
}
