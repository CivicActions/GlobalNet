<?php
/**
 * @file
 * gn2_heartbreak.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function gn2_heartbreak_views_default_views() {
  $export = array();

  /* node_comments */ $view = new view();
  /* node_comments */ $view->name = 'node_comments';
  /* node_comments */ $view->description = '';
  /* node_comments */ $view->tag = 'default';
  /* node_comments */ $view->base_table = 'comment';
  /* node_comments */ $view->human_name = 'Node Comments';
  /* node_comments */ $view->core = 7;
  /* node_comments */ $view->api_version = '3.0';
  /* node_comments */ $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* node_comments */ /* Display: Master */
  /* node_comments */  /* Master */ $handler = $view->new_display('default', 'Master', 'default');
  /* node_comments */  /* Master */ $handler->display->display_options['use_more_always'] = FALSE;
  /* node_comments */  /* Master */ $handler->display->display_options['access']['type'] = 'perm';
  /* node_comments */  /* Master */ $handler->display->display_options['access']['perm'] = 'access comments';
  /* node_comments */  /* Master */ $handler->display->display_options['cache']['type'] = 'none';
  /* node_comments */  /* Master */ $handler->display->display_options['query']['type'] = 'views_query';
  /* node_comments */  /* Master */ $handler->display->display_options['exposed_form']['type'] = 'basic';
  /* node_comments */  /* Master */ $handler->display->display_options['pager']['type'] = 'some';
  /* node_comments */  /* Master */ $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  /* node_comments */  /* Master */ $handler->display->display_options['style_plugin'] = 'default';
  /* node_comments */  /* Master */ $handler->display->display_options['row_plugin'] = 'comment';
  /* node_comments */  /* Master */ /* Relationship: Comment: Content */
  /* node_comments */  /* Master */ $handler->display->display_options['relationships']['nid']['id'] = 'nid';
  /* node_comments */  /* Master */ $handler->display->display_options['relationships']['nid']['table'] = 'comment';
  /* node_comments */  /* Master */ $handler->display->display_options['relationships']['nid']['field'] = 'nid';
  /* node_comments */  /* Master */ $handler->display->display_options['relationships']['nid']['required'] = TRUE;
  /* node_comments */  /* Master */ /* Field: Comment: Title */
  /* node_comments */  /* Master */ $handler->display->display_options['fields']['subject']['id'] = 'subject';
  /* node_comments */  /* Master */ $handler->display->display_options['fields']['subject']['table'] = 'comment';
  /* node_comments */  /* Master */ $handler->display->display_options['fields']['subject']['field'] = 'subject';
  /* node_comments */  /* Master */ $handler->display->display_options['fields']['subject']['label'] = '';
  /* node_comments */  /* Master */ $handler->display->display_options['fields']['subject']['alter']['word_boundary'] = FALSE;
  /* node_comments */  /* Master */ $handler->display->display_options['fields']['subject']['alter']['ellipsis'] = FALSE;
  /* node_comments */  /* Master */ /* Sort criterion: Comment: Post date */
  /* node_comments */  /* Master */ $handler->display->display_options['sorts']['created']['id'] = 'created';
  /* node_comments */  /* Master */ $handler->display->display_options['sorts']['created']['table'] = 'comment';
  /* node_comments */  /* Master */ $handler->display->display_options['sorts']['created']['field'] = 'created';
  /* node_comments */  /* Master */ $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* node_comments */  /* Master */ /* Contextual filter: Comment: Nid */
  /* node_comments */  /* Master */ $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  /* node_comments */  /* Master */ $handler->display->display_options['arguments']['nid']['table'] = 'comment';
  /* node_comments */  /* Master */ $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  /* node_comments */  /* Master */ $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  /* node_comments */  /* Master */ $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  /* node_comments */  /* Master */ $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  /* node_comments */  /* Master */ $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  /* node_comments */  /* Master */ $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  /* node_comments */  /* Master */ /* Filter criterion: Comment: Approved */
  /* node_comments */  /* Master */ $handler->display->display_options['filters']['status']['id'] = 'status';
  /* node_comments */  /* Master */ $handler->display->display_options['filters']['status']['table'] = 'comment';
  /* node_comments */  /* Master */ $handler->display->display_options['filters']['status']['field'] = 'status';
  /* node_comments */  /* Master */ $handler->display->display_options['filters']['status']['value'] = 1;
  /* node_comments */  /* Master */ $handler->display->display_options['filters']['status']['group'] = 1;
  /* node_comments */  /* Master */ $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* node_comments */  /* Master */ /* Filter criterion: Content: Published */
  /* node_comments */  /* Master */ $handler->display->display_options['filters']['status_node']['id'] = 'status_node';
  /* node_comments */  /* Master */ $handler->display->display_options['filters']['status_node']['table'] = 'node';
  /* node_comments */  /* Master */ $handler->display->display_options['filters']['status_node']['field'] = 'status';
  /* node_comments */  /* Master */ $handler->display->display_options['filters']['status_node']['relationship'] = 'nid';
  /* node_comments */  /* Master */ $handler->display->display_options['filters']['status_node']['value'] = 1;
  /* node_comments */  /* Master */ $handler->display->display_options['filters']['status_node']['group'] = 1;
  /* node_comments */  /* Master */ $handler->display->display_options['filters']['status_node']['expose']['operator'] = FALSE;

  /* node_comments */ /* Display: Block */
  /* node_comments */  /* Block */ $handler = $view->new_display('block', 'Block', 'block');

  /* node_comments */ /* Display: Content pane */
  /* node_comments */  /* Content pane */ $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  /* node_comments */ $translatables['node_comments'] = array(
  /* node_comments */   t('Master'),
  /* node_comments */   t('more'),
  /* node_comments */   t('Apply'),
  /* node_comments */   t('Reset'),
  /* node_comments */   t('Sort by'),
  /* node_comments */   t('Asc'),
  /* node_comments */   t('Desc'),
  /* node_comments */   t('Content'),
  /* node_comments */   t('All'),
  /* node_comments */   t('Block'),
  /* node_comments */   t('Content pane'),
  /* node_comments */   t('View panes'),
  /* node_comments */ );
  $export['node_comments'] = $view;

  return $export;
}
