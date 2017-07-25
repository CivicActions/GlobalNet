<?php
/**
 * @file
 * gn2_adobe_connect.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function gn2_adobe_connect_views_default_views() {
  $export = array();

  /* adobe_connect_meetings */ $view = new view();
  /* adobe_connect_meetings */ $view->name = 'adobe_connect_meetings';
  /* adobe_connect_meetings */ $view->description = '';
  /* adobe_connect_meetings */ $view->tag = 'default';
  /* adobe_connect_meetings */ $view->base_table = 'gn2_adobe_connect_meetings';
  /* adobe_connect_meetings */ $view->human_name = 'Adobe Connect Meetings';
  /* adobe_connect_meetings */ $view->core = 7;
  /* adobe_connect_meetings */ $view->api_version = '3.0';
  /* adobe_connect_meetings */ $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* adobe_connect_meetings */ /* Display: Master */
  /* adobe_connect_meetings */  /* Master */ $handler = $view->new_display('default', 'Master', 'default');
  /* adobe_connect_meetings */  /* Master */ $handler->display->display_options['use_more_always'] = FALSE;
  /* adobe_connect_meetings */  /* Master */ $handler->display->display_options['access']['type'] = 'none';
  /* adobe_connect_meetings */  /* Master */ $handler->display->display_options['cache']['type'] = 'none';
  /* adobe_connect_meetings */  /* Master */ $handler->display->display_options['query']['type'] = 'views_query';
  /* adobe_connect_meetings */  /* Master */ $handler->display->display_options['exposed_form']['type'] = 'basic';
  /* adobe_connect_meetings */  /* Master */ $handler->display->display_options['pager']['type'] = 'some';
  /* adobe_connect_meetings */  /* Master */ $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  /* adobe_connect_meetings */  /* Master */ $handler->display->display_options['style_plugin'] = 'default';
  /* adobe_connect_meetings */  /* Master */ $handler->display->display_options['row_plugin'] = 'fields';
  /* adobe_connect_meetings */  /* Master */ /* Header: Global: Text area */
  /* adobe_connect_meetings */  /* Master */ $handler->display->display_options['header']['area']['id'] = 'area';
  /* adobe_connect_meetings */  /* Master */ $handler->display->display_options['header']['area']['table'] = 'views';
  /* adobe_connect_meetings */  /* Master */ $handler->display->display_options['header']['area']['field'] = 'area';
  /* adobe_connect_meetings */  /* Master */ $handler->display->display_options['header']['area']['content'] = '<div class="sidebar-subheading"><h3 class="pane-title">Watercooler Meetings</h3></div>';
  /* adobe_connect_meetings */  /* Master */ $handler->display->display_options['header']['area']['format'] = 'filtered_html';
  /* adobe_connect_meetings */  /* Master */ /* Field: GN2 Adobe Connect: Meeting link */
  /* adobe_connect_meetings */  /* Master */ $handler->display->display_options['fields']['link']['id'] = 'link';
  /* adobe_connect_meetings */  /* Master */ $handler->display->display_options['fields']['link']['table'] = 'gn2_adobe_connect_meetings';
  /* adobe_connect_meetings */  /* Master */ $handler->display->display_options['fields']['link']['field'] = 'link';
  /* adobe_connect_meetings */  /* Master */ $handler->display->display_options['fields']['link']['exclude'] = TRUE;
  /* adobe_connect_meetings */  /* Master */ /* Field: GN2 Adobe Connect: Meeting Name */
  /* adobe_connect_meetings */  /* Master */ $handler->display->display_options['fields']['name']['id'] = 'name';
  /* adobe_connect_meetings */  /* Master */ $handler->display->display_options['fields']['name']['table'] = 'gn2_adobe_connect_meetings';
  /* adobe_connect_meetings */  /* Master */ $handler->display->display_options['fields']['name']['field'] = 'name';
  /* adobe_connect_meetings */  /* Master */ $handler->display->display_options['fields']['name']['label'] = '';
  /* adobe_connect_meetings */  /* Master */ $handler->display->display_options['fields']['name']['alter']['make_link'] = TRUE;
  /* adobe_connect_meetings */  /* Master */ $handler->display->display_options['fields']['name']['alter']['path'] = '[link]';
  /* adobe_connect_meetings */  /* Master */ $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  /* adobe_connect_meetings */  /* Master */ /* Field: GN2 Adobe Connect: Meeting start */
  /* adobe_connect_meetings */  /* Master */ $handler->display->display_options['fields']['start']['id'] = 'start';
  /* adobe_connect_meetings */  /* Master */ $handler->display->display_options['fields']['start']['table'] = 'gn2_adobe_connect_meetings';
  /* adobe_connect_meetings */  /* Master */ $handler->display->display_options['fields']['start']['field'] = 'start';
  /* adobe_connect_meetings */  /* Master */ $handler->display->display_options['fields']['start']['label'] = 'Begins';
  /* adobe_connect_meetings */  /* Master */ $handler->display->display_options['fields']['start']['date_format'] = 'date_format_military_with_time';
  /* adobe_connect_meetings */  /* Master */ $handler->display->display_options['fields']['start']['second_date_format'] = 'date_format_globalnet_date';
  /* adobe_connect_meetings */  /* Master */ /* Field: GN2 Adobe Connect: Meeting end */
  /* adobe_connect_meetings */  /* Master */ $handler->display->display_options['fields']['end']['id'] = 'end';
  /* adobe_connect_meetings */  /* Master */ $handler->display->display_options['fields']['end']['table'] = 'gn2_adobe_connect_meetings';
  /* adobe_connect_meetings */  /* Master */ $handler->display->display_options['fields']['end']['field'] = 'end';
  /* adobe_connect_meetings */  /* Master */ $handler->display->display_options['fields']['end']['label'] = 'Ends';
  /* adobe_connect_meetings */  /* Master */ $handler->display->display_options['fields']['end']['date_format'] = 'date_format_military_with_time';
  /* adobe_connect_meetings */  /* Master */ $handler->display->display_options['fields']['end']['second_date_format'] = 'date_format_globalnet_date';
  /* adobe_connect_meetings */  /* Master */ /* Sort criterion: GN2 Adobe Connect: Meeting start */
  /* adobe_connect_meetings */  /* Master */ $handler->display->display_options['sorts']['start']['id'] = 'start';
  /* adobe_connect_meetings */  /* Master */ $handler->display->display_options['sorts']['start']['table'] = 'gn2_adobe_connect_meetings';
  /* adobe_connect_meetings */  /* Master */ $handler->display->display_options['sorts']['start']['field'] = 'start';
  /* adobe_connect_meetings */  /* Master */ /* Contextual filter: GN2 Adobe Connect: ID */
  /* adobe_connect_meetings */  /* Master */ $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  /* adobe_connect_meetings */  /* Master */ $handler->display->display_options['arguments']['nid']['table'] = 'gn2_adobe_connect_meetings';
  /* adobe_connect_meetings */  /* Master */ $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  /* adobe_connect_meetings */  /* Master */ $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  /* adobe_connect_meetings */  /* Master */ $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  /* adobe_connect_meetings */  /* Master */ $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  /* adobe_connect_meetings */  /* Master */ $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  /* adobe_connect_meetings */  /* Master */ $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  /* adobe_connect_meetings */  /* Master */ /* Filter criterion: GN2 Adobe Connect: Meeting end */
  /* adobe_connect_meetings */  /* Master */ $handler->display->display_options['filters']['end']['id'] = 'end';
  /* adobe_connect_meetings */  /* Master */ $handler->display->display_options['filters']['end']['table'] = 'gn2_adobe_connect_meetings';
  /* adobe_connect_meetings */  /* Master */ $handler->display->display_options['filters']['end']['field'] = 'end';
  /* adobe_connect_meetings */  /* Master */ $handler->display->display_options['filters']['end']['operator'] = '>=';
  /* adobe_connect_meetings */  /* Master */ $handler->display->display_options['filters']['end']['value']['value'] = '-5 minutes';
  /* adobe_connect_meetings */  /* Master */ $handler->display->display_options['filters']['end']['value']['type'] = 'offset';
  /* adobe_connect_meetings */  /* Master */ /* Filter criterion: GN2 Adobe Connect: Meeting type */
  /* adobe_connect_meetings */  /* Master */ $handler->display->display_options['filters']['type']['id'] = 'type';
  /* adobe_connect_meetings */  /* Master */ $handler->display->display_options['filters']['type']['table'] = 'gn2_adobe_connect_meetings';
  /* adobe_connect_meetings */  /* Master */ $handler->display->display_options['filters']['type']['field'] = 'type';
  /* adobe_connect_meetings */  /* Master */ $handler->display->display_options['filters']['type']['value'] = 'adobe_open';

  /* adobe_connect_meetings */ /* Display: Block */
  /* adobe_connect_meetings */  /* Block */ $handler = $view->new_display('block', 'Block', 'block');

  /* adobe_connect_meetings */ /* Display: Content pane */
  /* adobe_connect_meetings */  /* Content pane */ $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  /* adobe_connect_meetings */  /* Content pane */ $handler->display->display_options['argument_input'] = array(
  /* adobe_connect_meetings */  /* Content pane */   'nid' => array(
  /* adobe_connect_meetings */  /* Content pane */     'type' => 'none',
  /* adobe_connect_meetings */  /* Content pane */     'context' => 'entity:node.field_parent_organization',
  /* adobe_connect_meetings */  /* Content pane */     'context_optional' => 0,
  /* adobe_connect_meetings */  /* Content pane */     'panel' => '0',
  /* adobe_connect_meetings */  /* Content pane */     'fixed' => '',
  /* adobe_connect_meetings */  /* Content pane */     'label' => 'GN2 Adobe Connect: ID',
  /* adobe_connect_meetings */  /* Content pane */   ),
  /* adobe_connect_meetings */  /* Content pane */ );
  /* adobe_connect_meetings */  /* Content pane */ $handler->display->display_options['inherit_panels_path'] = '0';
  /* adobe_connect_meetings */ $translatables['adobe_connect_meetings'] = array(
  /* adobe_connect_meetings */   t('Master'),
  /* adobe_connect_meetings */   t('more'),
  /* adobe_connect_meetings */   t('Apply'),
  /* adobe_connect_meetings */   t('Reset'),
  /* adobe_connect_meetings */   t('Sort by'),
  /* adobe_connect_meetings */   t('Asc'),
  /* adobe_connect_meetings */   t('Desc'),
  /* adobe_connect_meetings */   t('<div class="sidebar-subheading"><h3 class="pane-title">Watercooler Meetings</h3></div>'),
  /* adobe_connect_meetings */   t('Meeting link'),
  /* adobe_connect_meetings */   t('Begins'),
  /* adobe_connect_meetings */   t('Ends'),
  /* adobe_connect_meetings */   t('All'),
  /* adobe_connect_meetings */   t('Block'),
  /* adobe_connect_meetings */   t('Content pane'),
  /* adobe_connect_meetings */   t('View panes'),
  /* adobe_connect_meetings */ );
  $export['adobe_connect_meetings'] = $view;

  return $export;
}
