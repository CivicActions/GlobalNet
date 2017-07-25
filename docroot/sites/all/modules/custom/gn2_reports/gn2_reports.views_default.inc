<?php
/**
 * @file
 * gn2_reports.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function gn2_reports_views_default_views() {
  $export = array();

  /* bulk_import_report */ $view = new view();
  /* bulk_import_report */ $view->name = 'bulk_import_report';
  /* bulk_import_report */ $view->description = '';
  /* bulk_import_report */ $view->tag = 'default';
  /* bulk_import_report */ $view->base_table = 'gn2_user_report_users';
  /* bulk_import_report */ $view->human_name = 'Bulk Import Report';
  /* bulk_import_report */ $view->core = 7;
  /* bulk_import_report */ $view->api_version = '3.0';
  /* bulk_import_report */ $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* bulk_import_report */ /* Display: Master */
  /* bulk_import_report */  /* Master */ $handler = $view->new_display('default', 'Master', 'default');
  /* bulk_import_report */  /* Master */ $handler->display->display_options['title'] = 'Bulk Import Report';
  /* bulk_import_report */  /* Master */ $handler->display->display_options['use_more_always'] = FALSE;
  /* bulk_import_report */  /* Master */ $handler->display->display_options['access']['type'] = 'perm';
  /* bulk_import_report */  /* Master */ $handler->display->display_options['access']['perm'] = 'administer users';
  /* bulk_import_report */  /* Master */ $handler->display->display_options['cache']['type'] = 'none';
  /* bulk_import_report */  /* Master */ $handler->display->display_options['query']['type'] = 'views_query';
  /* bulk_import_report */  /* Master */ $handler->display->display_options['exposed_form']['type'] = 'basic';
  /* bulk_import_report */  /* Master */ $handler->display->display_options['pager']['type'] = 'full';
  /* bulk_import_report */  /* Master */ $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  /* bulk_import_report */  /* Master */ $handler->display->display_options['style_plugin'] = 'table';
  /* bulk_import_report */  /* Master */ $handler->display->display_options['style_options']['grouping'] = array(
  /* bulk_import_report */  /* Master */   0 => array(
  /* bulk_import_report */  /* Master */     'field' => 'iid',
  /* bulk_import_report */  /* Master */     'rendered' => 1,
  /* bulk_import_report */  /* Master */     'rendered_strip' => 0,
  /* bulk_import_report */  /* Master */   ),
  /* bulk_import_report */  /* Master */ );
  /* bulk_import_report */  /* Master */ $handler->display->display_options['style_options']['columns'] = array(
  /* bulk_import_report */  /* Master */   'name_1' => 'name_1',
  /* bulk_import_report */  /* Master */   'uid' => 'uid',
  /* bulk_import_report */  /* Master */   'name' => 'name',
  /* bulk_import_report */  /* Master */   'existing' => 'existing',
  /* bulk_import_report */  /* Master */   'groups' => 'groups',
  /* bulk_import_report */  /* Master */   'timestamp' => 'timestamp',
  /* bulk_import_report */  /* Master */   'iuid' => 'iuid',
  /* bulk_import_report */  /* Master */   'iid' => 'iid',
  /* bulk_import_report */  /* Master */ );
  /* bulk_import_report */  /* Master */ $handler->display->display_options['style_options']['default'] = '-1';
  /* bulk_import_report */  /* Master */ $handler->display->display_options['style_options']['info'] = array(
  /* bulk_import_report */  /* Master */   'name_1' => array(
  /* bulk_import_report */  /* Master */     'sortable' => 0,
  /* bulk_import_report */  /* Master */     'default_sort_order' => 'asc',
  /* bulk_import_report */  /* Master */     'align' => '',
  /* bulk_import_report */  /* Master */     'separator' => '',
  /* bulk_import_report */  /* Master */     'empty_column' => 0,
  /* bulk_import_report */  /* Master */   ),
  /* bulk_import_report */  /* Master */   'uid' => array(
  /* bulk_import_report */  /* Master */     'align' => '',
  /* bulk_import_report */  /* Master */     'separator' => '',
  /* bulk_import_report */  /* Master */     'empty_column' => 1,
  /* bulk_import_report */  /* Master */   ),
  /* bulk_import_report */  /* Master */   'name' => array(
  /* bulk_import_report */  /* Master */     'sortable' => 0,
  /* bulk_import_report */  /* Master */     'default_sort_order' => 'asc',
  /* bulk_import_report */  /* Master */     'align' => '',
  /* bulk_import_report */  /* Master */     'separator' => '',
  /* bulk_import_report */  /* Master */     'empty_column' => 0,
  /* bulk_import_report */  /* Master */   ),
  /* bulk_import_report */  /* Master */   'existing' => array(
  /* bulk_import_report */  /* Master */     'align' => '',
  /* bulk_import_report */  /* Master */     'separator' => '',
  /* bulk_import_report */  /* Master */     'empty_column' => 0,
  /* bulk_import_report */  /* Master */   ),
  /* bulk_import_report */  /* Master */   'groups' => array(
  /* bulk_import_report */  /* Master */     'align' => '',
  /* bulk_import_report */  /* Master */     'separator' => '',
  /* bulk_import_report */  /* Master */     'empty_column' => 0,
  /* bulk_import_report */  /* Master */   ),
  /* bulk_import_report */  /* Master */   'timestamp' => array(
  /* bulk_import_report */  /* Master */     'align' => '',
  /* bulk_import_report */  /* Master */     'separator' => '',
  /* bulk_import_report */  /* Master */     'empty_column' => 0,
  /* bulk_import_report */  /* Master */   ),
  /* bulk_import_report */  /* Master */   'iuid' => array(
  /* bulk_import_report */  /* Master */     'align' => '',
  /* bulk_import_report */  /* Master */     'separator' => '',
  /* bulk_import_report */  /* Master */     'empty_column' => 0,
  /* bulk_import_report */  /* Master */   ),
  /* bulk_import_report */  /* Master */   'iid' => array(
  /* bulk_import_report */  /* Master */     'align' => '',
  /* bulk_import_report */  /* Master */     'separator' => '',
  /* bulk_import_report */  /* Master */     'empty_column' => 0,
  /* bulk_import_report */  /* Master */   ),
  /* bulk_import_report */  /* Master */ );
  /* bulk_import_report */  /* Master */ /* No results behavior: Global: Text area */
  /* bulk_import_report */  /* Master */ $handler->display->display_options['empty']['area']['id'] = 'area';
  /* bulk_import_report */  /* Master */ $handler->display->display_options['empty']['area']['table'] = 'views';
  /* bulk_import_report */  /* Master */ $handler->display->display_options['empty']['area']['field'] = 'area';
  /* bulk_import_report */  /* Master */ $handler->display->display_options['empty']['area']['empty'] = TRUE;
  /* bulk_import_report */  /* Master */ $handler->display->display_options['empty']['area']['content'] = 'No bulk imports have been recorded.';
  /* bulk_import_report */  /* Master */ $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  /* bulk_import_report */  /* Master */ /* Relationship: User Import Report: Imported by */
  /* bulk_import_report */  /* Master */ $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  /* bulk_import_report */  /* Master */ $handler->display->display_options['relationships']['uid']['table'] = 'gn2_user_report_users';
  /* bulk_import_report */  /* Master */ $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* bulk_import_report */  /* Master */ $handler->display->display_options['relationships']['uid']['required'] = TRUE;
  /* bulk_import_report */  /* Master */ /* Relationship: User Import Report: Imported user */
  /* bulk_import_report */  /* Master */ $handler->display->display_options['relationships']['iuid']['id'] = 'iuid';
  /* bulk_import_report */  /* Master */ $handler->display->display_options['relationships']['iuid']['table'] = 'gn2_user_report_users';
  /* bulk_import_report */  /* Master */ $handler->display->display_options['relationships']['iuid']['field'] = 'iuid';
  /* bulk_import_report */  /* Master */ $handler->display->display_options['relationships']['iuid']['label'] = 'User';
  /* bulk_import_report */  /* Master */ /* Field: User: Name */
  /* bulk_import_report */  /* Master */ $handler->display->display_options['fields']['name_1']['id'] = 'name_1';
  /* bulk_import_report */  /* Master */ $handler->display->display_options['fields']['name_1']['table'] = 'users';
  /* bulk_import_report */  /* Master */ $handler->display->display_options['fields']['name_1']['field'] = 'name';
  /* bulk_import_report */  /* Master */ $handler->display->display_options['fields']['name_1']['relationship'] = 'iuid';
  /* bulk_import_report */  /* Master */ $handler->display->display_options['fields']['name_1']['label'] = 'Imported User';
  /* bulk_import_report */  /* Master */ /* Field: User Import Report: Imported by */
  /* bulk_import_report */  /* Master */ $handler->display->display_options['fields']['uid']['id'] = 'uid';
  /* bulk_import_report */  /* Master */ $handler->display->display_options['fields']['uid']['table'] = 'gn2_user_report_users';
  /* bulk_import_report */  /* Master */ $handler->display->display_options['fields']['uid']['field'] = 'uid';
  /* bulk_import_report */  /* Master */ $handler->display->display_options['fields']['uid']['exclude'] = TRUE;
  /* bulk_import_report */  /* Master */ /* Field: User: Name */
  /* bulk_import_report */  /* Master */ $handler->display->display_options['fields']['name']['id'] = 'name';
  /* bulk_import_report */  /* Master */ $handler->display->display_options['fields']['name']['table'] = 'users';
  /* bulk_import_report */  /* Master */ $handler->display->display_options['fields']['name']['field'] = 'name';
  /* bulk_import_report */  /* Master */ $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  /* bulk_import_report */  /* Master */ $handler->display->display_options['fields']['name']['label'] = 'Imported by';
  /* bulk_import_report */  /* Master */ /* Field: User Import Report: Existing User */
  /* bulk_import_report */  /* Master */ $handler->display->display_options['fields']['existing']['id'] = 'existing';
  /* bulk_import_report */  /* Master */ $handler->display->display_options['fields']['existing']['table'] = 'gn2_user_report_users';
  /* bulk_import_report */  /* Master */ $handler->display->display_options['fields']['existing']['field'] = 'existing';
  /* bulk_import_report */  /* Master */ $handler->display->display_options['fields']['existing']['not'] = 0;
  /* bulk_import_report */  /* Master */ /* Field: User Import Report: Groups */
  /* bulk_import_report */  /* Master */ $handler->display->display_options['fields']['groups']['id'] = 'groups';
  /* bulk_import_report */  /* Master */ $handler->display->display_options['fields']['groups']['table'] = 'gn2_user_report_users';
  /* bulk_import_report */  /* Master */ $handler->display->display_options['fields']['groups']['field'] = 'groups';
  /* bulk_import_report */  /* Master */ $handler->display->display_options['fields']['groups']['label'] = 'Added to Group(s)';
  /* bulk_import_report */  /* Master */ /* Field: User Import Report: Imported Date */
  /* bulk_import_report */  /* Master */ $handler->display->display_options['fields']['timestamp']['id'] = 'timestamp';
  /* bulk_import_report */  /* Master */ $handler->display->display_options['fields']['timestamp']['table'] = 'gn2_user_report_users';
  /* bulk_import_report */  /* Master */ $handler->display->display_options['fields']['timestamp']['field'] = 'timestamp';
  /* bulk_import_report */  /* Master */ $handler->display->display_options['fields']['timestamp']['exclude'] = TRUE;
  /* bulk_import_report */  /* Master */ $handler->display->display_options['fields']['timestamp']['date_format'] = 'date_format_globalnet_date';
  /* bulk_import_report */  /* Master */ $handler->display->display_options['fields']['timestamp']['second_date_format'] = 'date_format_globalnet_date';
  /* bulk_import_report */  /* Master */ /* Field: User Import Report: Imported user */
  /* bulk_import_report */  /* Master */ $handler->display->display_options['fields']['iuid']['id'] = 'iuid';
  /* bulk_import_report */  /* Master */ $handler->display->display_options['fields']['iuid']['table'] = 'gn2_user_report_users';
  /* bulk_import_report */  /* Master */ $handler->display->display_options['fields']['iuid']['field'] = 'iuid';
  /* bulk_import_report */  /* Master */ $handler->display->display_options['fields']['iuid']['exclude'] = TRUE;
  /* bulk_import_report */  /* Master */ $handler->display->display_options['fields']['iuid']['separator'] = '';
  /* bulk_import_report */  /* Master */ /* Field: User Import Report: Import ID */
  /* bulk_import_report */  /* Master */ $handler->display->display_options['fields']['iid']['id'] = 'iid';
  /* bulk_import_report */  /* Master */ $handler->display->display_options['fields']['iid']['table'] = 'gn2_user_report_users';
  /* bulk_import_report */  /* Master */ $handler->display->display_options['fields']['iid']['field'] = 'iid';
  /* bulk_import_report */  /* Master */ $handler->display->display_options['fields']['iid']['exclude'] = TRUE;
  /* bulk_import_report */  /* Master */ $handler->display->display_options['fields']['iid']['alter']['alter_text'] = TRUE;
  /* bulk_import_report */  /* Master */ $handler->display->display_options['fields']['iid']['alter']['text'] = '[iid] imported by [name] on [timestamp]';
  /* bulk_import_report */  /* Master */ /* Sort criterion: User Import Report: Import ID */
  /* bulk_import_report */  /* Master */ $handler->display->display_options['sorts']['iid']['id'] = 'iid';
  /* bulk_import_report */  /* Master */ $handler->display->display_options['sorts']['iid']['table'] = 'gn2_user_report_users';
  /* bulk_import_report */  /* Master */ $handler->display->display_options['sorts']['iid']['field'] = 'iid';
  /* bulk_import_report */  /* Master */ $handler->display->display_options['sorts']['iid']['order'] = 'DESC';

  /* bulk_import_report */ /* Display: All imports */
  /* bulk_import_report */  /* All imports */ $handler = $view->new_display('page', 'All imports', 'page');
  /* bulk_import_report */  /* All imports */ $handler->display->display_options['path'] = 'admin/people/bulk-import-report';
  /* bulk_import_report */  /* All imports */ $handler->display->display_options['menu']['type'] = 'tab';
  /* bulk_import_report */  /* All imports */ $handler->display->display_options['menu']['title'] = 'Bulk Import Report';
  /* bulk_import_report */  /* All imports */ $handler->display->display_options['menu']['weight'] = '6';
  /* bulk_import_report */  /* All imports */ $handler->display->display_options['menu']['context'] = 0;
  /* bulk_import_report */  /* All imports */ $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* bulk_import_report */ /* Display: Imports by Org */
  /* bulk_import_report */  /* Imports by Org */ $handler = $view->new_display('page', 'Imports by Org', 'page_1');
  /* bulk_import_report */  /* Imports by Org */ $handler->display->display_options['defaults']['access'] = FALSE;
  /* bulk_import_report */  /* Imports by Org */ $handler->display->display_options['access']['type'] = 'gn2_manager_access';
  /* bulk_import_report */  /* Imports by Org */ $handler->display->display_options['access']['gn2_roles'] = array(
  /* bulk_import_report */  /* Imports by Org */   'org_manager' => 'org_manager',
  /* bulk_import_report */  /* Imports by Org */   'hr_manager' => 'hr_manager',
  /* bulk_import_report */  /* Imports by Org */ );
  /* bulk_import_report */  /* Imports by Org */ $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* bulk_import_report */  /* Imports by Org */ /* Contextual filter: User Import Base: Organization ID */
  /* bulk_import_report */  /* Imports by Org */ $handler->display->display_options['arguments']['oid']['id'] = 'oid';
  /* bulk_import_report */  /* Imports by Org */ $handler->display->display_options['arguments']['oid']['table'] = 'gn2_user_report';
  /* bulk_import_report */  /* Imports by Org */ $handler->display->display_options['arguments']['oid']['field'] = 'oid';
  /* bulk_import_report */  /* Imports by Org */ $handler->display->display_options['arguments']['oid']['default_action'] = 'default';
  /* bulk_import_report */  /* Imports by Org */ $handler->display->display_options['arguments']['oid']['default_argument_type'] = 'node';
  /* bulk_import_report */  /* Imports by Org */ $handler->display->display_options['arguments']['oid']['summary']['number_of_records'] = '0';
  /* bulk_import_report */  /* Imports by Org */ $handler->display->display_options['arguments']['oid']['summary']['format'] = 'default_summary';
  /* bulk_import_report */  /* Imports by Org */ $handler->display->display_options['arguments']['oid']['summary_options']['items_per_page'] = '25';
  /* bulk_import_report */  /* Imports by Org */ $handler->display->display_options['path'] = 'node/%/dashboard/bulk-import-report';
  /* bulk_import_report */  /* Imports by Org */ $handler->display->display_options['menu']['title'] = 'Bulk Import Report';
  /* bulk_import_report */  /* Imports by Org */ $handler->display->display_options['menu']['weight'] = '6';
  /* bulk_import_report */  /* Imports by Org */ $handler->display->display_options['menu']['context'] = 0;
  /* bulk_import_report */  /* Imports by Org */ $handler->display->display_options['menu']['context_only_inline'] = 0;
  /* bulk_import_report */ $translatables['bulk_import_report'] = array(
  /* bulk_import_report */   t('Master'),
  /* bulk_import_report */   t('Bulk Import Report'),
  /* bulk_import_report */   t('more'),
  /* bulk_import_report */   t('Apply'),
  /* bulk_import_report */   t('Reset'),
  /* bulk_import_report */   t('Sort by'),
  /* bulk_import_report */   t('Asc'),
  /* bulk_import_report */   t('Desc'),
  /* bulk_import_report */   t('Items per page'),
  /* bulk_import_report */   t('- All -'),
  /* bulk_import_report */   t('Offset'),
  /* bulk_import_report */   t('« first'),
  /* bulk_import_report */   t('‹ previous'),
  /* bulk_import_report */   t('next ›'),
  /* bulk_import_report */   t('last »'),
  /* bulk_import_report */   t('No bulk imports have been recorded.'),
  /* bulk_import_report */   t('Importing User'),
  /* bulk_import_report */   t('User'),
  /* bulk_import_report */   t('Imported User'),
  /* bulk_import_report */   t('Imported by'),
  /* bulk_import_report */   t('.'),
  /* bulk_import_report */   t(','),
  /* bulk_import_report */   t('Existing User'),
  /* bulk_import_report */   t('Added to Group(s)'),
  /* bulk_import_report */   t('Imported Date'),
  /* bulk_import_report */   t('Imported user'),
  /* bulk_import_report */   t('Import ID'),
  /* bulk_import_report */   t('[iid] imported by [name] on [timestamp]'),
  /* bulk_import_report */   t('All imports'),
  /* bulk_import_report */   t('Imports by Org'),
  /* bulk_import_report */   t('All'),
  /* bulk_import_report */ );
  $export['bulk_import_report'] = $view;

  /* report_user */ $view = new view();
  /* report_user */ $view->name = 'report_user';
  /* report_user */ $view->description = '';
  /* report_user */ $view->tag = 'default';
  /* report_user */ $view->base_table = 'users';
  /* report_user */ $view->human_name = 'Report: User accounts';
  /* report_user */ $view->core = 7;
  /* report_user */ $view->api_version = '3.0';
  /* report_user */ $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* report_user */ /* Display: Master */
  /* report_user */  /* Master */ $handler = $view->new_display('default', 'Master', 'default');
  /* report_user */  /* Master */ $handler->display->display_options['title'] = 'User Report';
  /* report_user */  /* Master */ $handler->display->display_options['use_more_always'] = FALSE;
  /* report_user */  /* Master */ $handler->display->display_options['access']['type'] = 'gn2_og_any_hr_manager_access';
  /* report_user */  /* Master */ $handler->display->display_options['cache']['type'] = 'none';
  /* report_user */  /* Master */ $handler->display->display_options['query']['type'] = 'views_query';
  /* report_user */  /* Master */ $handler->display->display_options['query']['options']['distinct'] = TRUE;
  /* report_user */  /* Master */ $handler->display->display_options['exposed_form']['type'] = 'basic';
  /* report_user */  /* Master */ $handler->display->display_options['pager']['type'] = 'full';
  /* report_user */  /* Master */ $handler->display->display_options['pager']['options']['items_per_page'] = '100';
  /* report_user */  /* Master */ $handler->display->display_options['pager']['options']['offset'] = '0';
  /* report_user */  /* Master */ $handler->display->display_options['pager']['options']['id'] = '0';
  /* report_user */  /* Master */ $handler->display->display_options['pager']['options']['quantity'] = '9';
  /* report_user */  /* Master */ $handler->display->display_options['style_plugin'] = 'datatables';
  /* report_user */  /* Master */ $handler->display->display_options['style_options']['columns'] = array(
  /* report_user */  /* Master */   'uid' => 'uid',
  /* report_user */  /* Master */   'views_bulk_operations' => 'views_bulk_operations',
  /* report_user */  /* Master */   'name_1' => 'name_1',
  /* report_user */  /* Master */   'created' => 'created',
  /* report_user */  /* Master */   'status' => 'status',
  /* report_user */  /* Master */   'login' => 'login',
  /* report_user */  /* Master */   'field_name_first' => 'field_name_first',
  /* report_user */  /* Master */   'field_name_last' => 'field_name_last',
  /* report_user */  /* Master */   'field_user_title' => 'field_user_title',
  /* report_user */  /* Master */   'field_user_organization' => 'field_user_organization',
  /* report_user */  /* Master */   'field_country_of_residence' => 'field_country_of_residence',
  /* report_user */  /* Master */   'mail' => 'mail',
  /* report_user */  /* Master */   'nothing' => 'nothing',
  /* report_user */  /* Master */ );
  /* report_user */  /* Master */ $handler->display->display_options['style_options']['default'] = 'name_1';
  /* report_user */  /* Master */ $handler->display->display_options['style_options']['info'] = array(
  /* report_user */  /* Master */   'uid' => array(
  /* report_user */  /* Master */     'sortable' => 0,
  /* report_user */  /* Master */     'default_sort_order' => 'asc',
  /* report_user */  /* Master */     'align' => '',
  /* report_user */  /* Master */     'separator' => '',
  /* report_user */  /* Master */     'empty_column' => 0,
  /* report_user */  /* Master */   ),
  /* report_user */  /* Master */   'views_bulk_operations' => array(
  /* report_user */  /* Master */     'align' => '',
  /* report_user */  /* Master */     'separator' => '',
  /* report_user */  /* Master */     'empty_column' => 0,
  /* report_user */  /* Master */   ),
  /* report_user */  /* Master */   'name_1' => array(
  /* report_user */  /* Master */     'sortable' => 1,
  /* report_user */  /* Master */     'default_sort_order' => 'asc',
  /* report_user */  /* Master */     'align' => '',
  /* report_user */  /* Master */     'separator' => '',
  /* report_user */  /* Master */     'empty_column' => 0,
  /* report_user */  /* Master */   ),
  /* report_user */  /* Master */   'created' => array(
  /* report_user */  /* Master */     'sortable' => 1,
  /* report_user */  /* Master */     'default_sort_order' => 'asc',
  /* report_user */  /* Master */     'align' => '',
  /* report_user */  /* Master */     'separator' => '',
  /* report_user */  /* Master */     'empty_column' => 0,
  /* report_user */  /* Master */   ),
  /* report_user */  /* Master */   'status' => array(
  /* report_user */  /* Master */     'sortable' => 1,
  /* report_user */  /* Master */     'default_sort_order' => 'asc',
  /* report_user */  /* Master */     'align' => '',
  /* report_user */  /* Master */     'separator' => '',
  /* report_user */  /* Master */     'empty_column' => 0,
  /* report_user */  /* Master */   ),
  /* report_user */  /* Master */   'login' => array(
  /* report_user */  /* Master */     'sortable' => 1,
  /* report_user */  /* Master */     'default_sort_order' => 'asc',
  /* report_user */  /* Master */     'align' => '',
  /* report_user */  /* Master */     'separator' => '',
  /* report_user */  /* Master */     'empty_column' => 0,
  /* report_user */  /* Master */   ),
  /* report_user */  /* Master */   'field_name_first' => array(
  /* report_user */  /* Master */     'sortable' => 0,
  /* report_user */  /* Master */     'default_sort_order' => 'asc',
  /* report_user */  /* Master */     'align' => '',
  /* report_user */  /* Master */     'separator' => '',
  /* report_user */  /* Master */     'empty_column' => 0,
  /* report_user */  /* Master */   ),
  /* report_user */  /* Master */   'field_name_last' => array(
  /* report_user */  /* Master */     'sortable' => 1,
  /* report_user */  /* Master */     'default_sort_order' => 'asc',
  /* report_user */  /* Master */     'align' => '',
  /* report_user */  /* Master */     'separator' => '',
  /* report_user */  /* Master */     'empty_column' => 0,
  /* report_user */  /* Master */   ),
  /* report_user */  /* Master */   'field_user_title' => array(
  /* report_user */  /* Master */     'sortable' => 1,
  /* report_user */  /* Master */     'default_sort_order' => 'asc',
  /* report_user */  /* Master */     'align' => '',
  /* report_user */  /* Master */     'separator' => '',
  /* report_user */  /* Master */     'empty_column' => 0,
  /* report_user */  /* Master */   ),
  /* report_user */  /* Master */   'field_user_organization' => array(
  /* report_user */  /* Master */     'sortable' => 1,
  /* report_user */  /* Master */     'default_sort_order' => 'asc',
  /* report_user */  /* Master */     'align' => '',
  /* report_user */  /* Master */     'separator' => '',
  /* report_user */  /* Master */     'empty_column' => 0,
  /* report_user */  /* Master */   ),
  /* report_user */  /* Master */   'field_country_of_residence' => array(
  /* report_user */  /* Master */     'sortable' => 1,
  /* report_user */  /* Master */     'default_sort_order' => 'asc',
  /* report_user */  /* Master */     'align' => '',
  /* report_user */  /* Master */     'separator' => '',
  /* report_user */  /* Master */     'empty_column' => 0,
  /* report_user */  /* Master */   ),
  /* report_user */  /* Master */   'mail' => array(
  /* report_user */  /* Master */     'sortable' => 1,
  /* report_user */  /* Master */     'default_sort_order' => 'asc',
  /* report_user */  /* Master */     'align' => '',
  /* report_user */  /* Master */     'separator' => '',
  /* report_user */  /* Master */     'empty_column' => 0,
  /* report_user */  /* Master */   ),
  /* report_user */  /* Master */   'nothing' => array(
  /* report_user */  /* Master */     'align' => '',
  /* report_user */  /* Master */     'separator' => '',
  /* report_user */  /* Master */     'empty_column' => 0,
  /* report_user */  /* Master */   ),
  /* report_user */  /* Master */ );
  /* report_user */  /* Master */ $handler->display->display_options['style_options']['elements'] = array(
  /* report_user */  /* Master */   'search_box' => 1,
  /* report_user */  /* Master */   'table_info' => 1,
  /* report_user */  /* Master */   'save_state' => 0,
  /* report_user */  /* Master */   'table_tools' => 0,
  /* report_user */  /* Master */ );
  /* report_user */  /* Master */ $handler->display->display_options['style_options']['layout'] = array(
  /* report_user */  /* Master */   'autowidth' => 1,
  /* report_user */  /* Master */   'themeroller' => 0,
  /* report_user */  /* Master */   'sdom' => '',
  /* report_user */  /* Master */ );
  /* report_user */  /* Master */ $handler->display->display_options['style_options']['pages'] = array(
  /* report_user */  /* Master */   'pagination_style' => 'full_numbers',
  /* report_user */  /* Master */   'length_change' => 1,
  /* report_user */  /* Master */   'display_length' => '50',
  /* report_user */  /* Master */ );
  /* report_user */  /* Master */ /* Field: User: Uid */
  /* report_user */  /* Master */ $handler->display->display_options['fields']['uid']['id'] = 'uid';
  /* report_user */  /* Master */ $handler->display->display_options['fields']['uid']['table'] = 'users';
  /* report_user */  /* Master */ $handler->display->display_options['fields']['uid']['field'] = 'uid';
  /* report_user */  /* Master */ $handler->display->display_options['fields']['uid']['label'] = '';
  /* report_user */  /* Master */ $handler->display->display_options['fields']['uid']['exclude'] = TRUE;
  /* report_user */  /* Master */ $handler->display->display_options['fields']['uid']['element_label_colon'] = FALSE;
  /* report_user */  /* Master */ $handler->display->display_options['fields']['uid']['element_default_classes'] = FALSE;
  /* report_user */  /* Master */ $handler->display->display_options['fields']['uid']['link_to_user'] = FALSE;
  /* report_user */  /* Master */ /* Field: Bulk operations: User */
  /* report_user */  /* Master */ $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  /* report_user */  /* Master */ $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'users';
  /* report_user */  /* Master */ $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  /* report_user */  /* Master */ $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '0';
  /* report_user */  /* Master */ $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  /* report_user */  /* Master */ $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  /* report_user */  /* Master */ $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  /* report_user */  /* Master */ $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
  /* report_user */  /* Master */   'action::user_block_user_action' => array(
  /* report_user */  /* Master */     'selected' => 1,
  /* report_user */  /* Master */     'postpone_processing' => 0,
  /* report_user */  /* Master */     'skip_confirmation' => 0,
  /* report_user */  /* Master */     'override_label' => 0,
  /* report_user */  /* Master */     'label' => '',
  /* report_user */  /* Master */   ),
  /* report_user */  /* Master */   'action::views_bulk_operations_user_cancel_action' => array(
  /* report_user */  /* Master */     'selected' => 1,
  /* report_user */  /* Master */     'postpone_processing' => 0,
  /* report_user */  /* Master */     'skip_confirmation' => 0,
  /* report_user */  /* Master */     'override_label' => 0,
  /* report_user */  /* Master */     'label' => '',
  /* report_user */  /* Master */   ),
  /* report_user */  /* Master */   'action::gn2_base_config_write_message' => array(
  /* report_user */  /* Master */     'selected' => 1,
  /* report_user */  /* Master */     'postpone_processing' => 0,
  /* report_user */  /* Master */     'skip_confirmation' => 0,
  /* report_user */  /* Master */     'override_label' => 0,
  /* report_user */  /* Master */     'label' => '',
  /* report_user */  /* Master */   ),
  /* report_user */  /* Master */ );
  /* report_user */  /* Master */ /* Field: User: Name */
  /* report_user */  /* Master */ $handler->display->display_options['fields']['name_1']['id'] = 'name_1';
  /* report_user */  /* Master */ $handler->display->display_options['fields']['name_1']['table'] = 'users';
  /* report_user */  /* Master */ $handler->display->display_options['fields']['name_1']['field'] = 'name';
  /* report_user */  /* Master */ $handler->display->display_options['fields']['name_1']['label'] = 'AccountName';
  /* report_user */  /* Master */ /* Field: User: Created date */
  /* report_user */  /* Master */ $handler->display->display_options['fields']['created']['id'] = 'created';
  /* report_user */  /* Master */ $handler->display->display_options['fields']['created']['table'] = 'users';
  /* report_user */  /* Master */ $handler->display->display_options['fields']['created']['field'] = 'created';
  /* report_user */  /* Master */ $handler->display->display_options['fields']['created']['label'] = 'Created';
  /* report_user */  /* Master */ $handler->display->display_options['fields']['created']['date_format'] = 'date_format_globalnet_date';
  /* report_user */  /* Master */ $handler->display->display_options['fields']['created']['second_date_format'] = 'date_format_globalnet_date';
  /* report_user */  /* Master */ /* Field: User: Active */
  /* report_user */  /* Master */ $handler->display->display_options['fields']['status']['id'] = 'status';
  /* report_user */  /* Master */ $handler->display->display_options['fields']['status']['table'] = 'users';
  /* report_user */  /* Master */ $handler->display->display_options['fields']['status']['field'] = 'status';
  /* report_user */  /* Master */ $handler->display->display_options['fields']['status']['not'] = 0;
  /* report_user */  /* Master */ /* Field: User: Last login */
  /* report_user */  /* Master */ $handler->display->display_options['fields']['login']['id'] = 'login';
  /* report_user */  /* Master */ $handler->display->display_options['fields']['login']['table'] = 'users';
  /* report_user */  /* Master */ $handler->display->display_options['fields']['login']['field'] = 'login';
  /* report_user */  /* Master */ $handler->display->display_options['fields']['login']['date_format'] = 'date_format_globalnet_date';
  /* report_user */  /* Master */ $handler->display->display_options['fields']['login']['second_date_format'] = 'date_format_globalnet_date';
  /* report_user */  /* Master */ /* Field: Field: Given Name */
  /* report_user */  /* Master */ $handler->display->display_options['fields']['field_name_first']['id'] = 'field_name_first';
  /* report_user */  /* Master */ $handler->display->display_options['fields']['field_name_first']['table'] = 'field_data_field_name_first';
  /* report_user */  /* Master */ $handler->display->display_options['fields']['field_name_first']['field'] = 'field_name_first';
  /* report_user */  /* Master */ $handler->display->display_options['fields']['field_name_first']['label'] = 'FirstName';
  /* report_user */  /* Master */ $handler->display->display_options['fields']['field_name_first']['element_type'] = '0';
  /* report_user */  /* Master */ $handler->display->display_options['fields']['field_name_first']['element_wrapper_type'] = '0';
  /* report_user */  /* Master */ $handler->display->display_options['fields']['field_name_first']['element_default_classes'] = FALSE;
  /* report_user */  /* Master */ $handler->display->display_options['fields']['field_name_first']['settings'] = array(
  /* report_user */  /* Master */   'field_formatter_class' => '',
  /* report_user */  /* Master */ );
  /* report_user */  /* Master */ $handler->display->display_options['fields']['field_name_first']['field_api_classes'] = TRUE;
  /* report_user */  /* Master */ /* Field: Field: Family Name */
  /* report_user */  /* Master */ $handler->display->display_options['fields']['field_name_last']['id'] = 'field_name_last';
  /* report_user */  /* Master */ $handler->display->display_options['fields']['field_name_last']['table'] = 'field_data_field_name_last';
  /* report_user */  /* Master */ $handler->display->display_options['fields']['field_name_last']['field'] = 'field_name_last';
  /* report_user */  /* Master */ $handler->display->display_options['fields']['field_name_last']['label'] = 'LastName';
  /* report_user */  /* Master */ $handler->display->display_options['fields']['field_name_last']['element_type'] = '0';
  /* report_user */  /* Master */ $handler->display->display_options['fields']['field_name_last']['element_wrapper_type'] = '0';
  /* report_user */  /* Master */ $handler->display->display_options['fields']['field_name_last']['element_default_classes'] = FALSE;
  /* report_user */  /* Master */ $handler->display->display_options['fields']['field_name_last']['settings'] = array(
  /* report_user */  /* Master */   'field_formatter_class' => '',
  /* report_user */  /* Master */ );
  /* report_user */  /* Master */ $handler->display->display_options['fields']['field_name_last']['field_api_classes'] = TRUE;
  /* report_user */  /* Master */ /* Field: User: Job title */
  /* report_user */  /* Master */ $handler->display->display_options['fields']['field_user_title']['id'] = 'field_user_title';
  /* report_user */  /* Master */ $handler->display->display_options['fields']['field_user_title']['table'] = 'field_data_field_user_title';
  /* report_user */  /* Master */ $handler->display->display_options['fields']['field_user_title']['field'] = 'field_user_title';
  /* report_user */  /* Master */ $handler->display->display_options['fields']['field_user_title']['element_type'] = '0';
  /* report_user */  /* Master */ $handler->display->display_options['fields']['field_user_title']['element_wrapper_type'] = '0';
  /* report_user */  /* Master */ $handler->display->display_options['fields']['field_user_title']['element_default_classes'] = FALSE;
  /* report_user */  /* Master */ $handler->display->display_options['fields']['field_user_title']['settings'] = array(
  /* report_user */  /* Master */   'field_formatter_class' => '',
  /* report_user */  /* Master */ );
  /* report_user */  /* Master */ $handler->display->display_options['fields']['field_user_title']['field_api_classes'] = TRUE;
  /* report_user */  /* Master */ /* Field: User: Organization */
  /* report_user */  /* Master */ $handler->display->display_options['fields']['field_user_organization']['id'] = 'field_user_organization';
  /* report_user */  /* Master */ $handler->display->display_options['fields']['field_user_organization']['table'] = 'field_data_field_user_organization';
  /* report_user */  /* Master */ $handler->display->display_options['fields']['field_user_organization']['field'] = 'field_user_organization';
  /* report_user */  /* Master */ $handler->display->display_options['fields']['field_user_organization']['element_type'] = '0';
  /* report_user */  /* Master */ $handler->display->display_options['fields']['field_user_organization']['element_wrapper_type'] = '0';
  /* report_user */  /* Master */ $handler->display->display_options['fields']['field_user_organization']['element_default_classes'] = FALSE;
  /* report_user */  /* Master */ $handler->display->display_options['fields']['field_user_organization']['settings'] = array(
  /* report_user */  /* Master */   'field_formatter_class' => '',
  /* report_user */  /* Master */ );
  /* report_user */  /* Master */ $handler->display->display_options['fields']['field_user_organization']['field_api_classes'] = TRUE;
  /* report_user */  /* Master */ /* Field: Field: Country of Residence */
  /* report_user */  /* Master */ $handler->display->display_options['fields']['field_country_of_residence']['id'] = 'field_country_of_residence';
  /* report_user */  /* Master */ $handler->display->display_options['fields']['field_country_of_residence']['table'] = 'field_data_field_country_of_residence';
  /* report_user */  /* Master */ $handler->display->display_options['fields']['field_country_of_residence']['field'] = 'field_country_of_residence';
  /* report_user */  /* Master */ $handler->display->display_options['fields']['field_country_of_residence']['label'] = 'Residence';
  /* report_user */  /* Master */ $handler->display->display_options['fields']['field_country_of_residence']['element_type'] = '0';
  /* report_user */  /* Master */ $handler->display->display_options['fields']['field_country_of_residence']['element_wrapper_type'] = '0';
  /* report_user */  /* Master */ $handler->display->display_options['fields']['field_country_of_residence']['element_default_classes'] = FALSE;
  /* report_user */  /* Master */ $handler->display->display_options['fields']['field_country_of_residence']['settings'] = array(
  /* report_user */  /* Master */   'field_formatter_class' => '',
  /* report_user */  /* Master */ );
  /* report_user */  /* Master */ $handler->display->display_options['fields']['field_country_of_residence']['field_api_classes'] = TRUE;
  /* report_user */  /* Master */ /* Field: User: E-mail */
  /* report_user */  /* Master */ $handler->display->display_options['fields']['mail']['id'] = 'mail';
  /* report_user */  /* Master */ $handler->display->display_options['fields']['mail']['table'] = 'users';
  /* report_user */  /* Master */ $handler->display->display_options['fields']['mail']['field'] = 'mail';
  /* report_user */  /* Master */ /* Field: Global: Custom text */
  /* report_user */  /* Master */ $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  /* report_user */  /* Master */ $handler->display->display_options['fields']['nothing']['table'] = 'views';
  /* report_user */  /* Master */ $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  /* report_user */  /* Master */ $handler->display->display_options['fields']['nothing']['label'] = '';
  /* report_user */  /* Master */ $handler->display->display_options['fields']['nothing']['alter']['text'] = '<a href="/user/[uid]/edit">edit</a><br />
<a href="/admin/manage/users/update/block/[uid]">block</a><br />
<a href="/admin/manage/users/update/unblock/[uid]">unblock</a><br />
<a href="/admin/manage/users/update/unlock/[uid]">unlock</a><br />
<a href="/messages/new/[uid]?destination=admin/manage/users">send message</a>';
  /* report_user */  /* Master */ $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* report_user */  /* Master */ $handler->display->display_options['fields']['nothing']['element_default_classes'] = FALSE;
  /* report_user */  /* Master */ /* Filter criterion: User: E-mail */
  /* report_user */  /* Master */ $handler->display->display_options['filters']['mail']['id'] = 'mail';
  /* report_user */  /* Master */ $handler->display->display_options['filters']['mail']['table'] = 'users';
  /* report_user */  /* Master */ $handler->display->display_options['filters']['mail']['field'] = 'mail';
  /* report_user */  /* Master */ $handler->display->display_options['filters']['mail']['operator'] = 'starts';
  /* report_user */  /* Master */ $handler->display->display_options['filters']['mail']['group'] = 1;
  /* report_user */  /* Master */ $handler->display->display_options['filters']['mail']['exposed'] = TRUE;
  /* report_user */  /* Master */ $handler->display->display_options['filters']['mail']['expose']['operator_id'] = 'mail_op';
  /* report_user */  /* Master */ $handler->display->display_options['filters']['mail']['expose']['label'] = 'E-mail';
  /* report_user */  /* Master */ $handler->display->display_options['filters']['mail']['expose']['use_operator'] = TRUE;
  /* report_user */  /* Master */ $handler->display->display_options['filters']['mail']['expose']['operator'] = 'mail_op';
  /* report_user */  /* Master */ $handler->display->display_options['filters']['mail']['expose']['identifier'] = 'mail';
  /* report_user */  /* Master */ $handler->display->display_options['filters']['mail']['expose']['remember_roles'] = array(
  /* report_user */  /* Master */   2 => '2',
  /* report_user */  /* Master */   1 => 0,
  /* report_user */  /* Master */   9 => 0,
  /* report_user */  /* Master */   10 => 0,
  /* report_user */  /* Master */ );
  /* report_user */  /* Master */ $handler->display->display_options['filters']['mail']['expose']['autocomplete_items'] = '10';
  /* report_user */  /* Master */ $handler->display->display_options['filters']['mail']['expose']['autocomplete_min_chars'] = '0';
  /* report_user */  /* Master */ $handler->display->display_options['filters']['mail']['expose']['autocomplete_field'] = 'mail';
  /* report_user */  /* Master */ $handler->display->display_options['filters']['mail']['expose']['autocomplete_raw_suggestion'] = 1;
  /* report_user */  /* Master */ $handler->display->display_options['filters']['mail']['expose']['autocomplete_raw_dropdown'] = 1;
  /* report_user */  /* Master */ $handler->display->display_options['filters']['mail']['expose']['autocomplete_dependent'] = 0;
  /* report_user */  /* Master */ /* Filter criterion: Field: Family Name (field_name_last) */
  /* report_user */  /* Master */ $handler->display->display_options['filters']['field_name_last_value']['id'] = 'field_name_last_value';
  /* report_user */  /* Master */ $handler->display->display_options['filters']['field_name_last_value']['table'] = 'field_data_field_name_last';
  /* report_user */  /* Master */ $handler->display->display_options['filters']['field_name_last_value']['field'] = 'field_name_last_value';
  /* report_user */  /* Master */ $handler->display->display_options['filters']['field_name_last_value']['operator'] = 'contains';
  /* report_user */  /* Master */ $handler->display->display_options['filters']['field_name_last_value']['group'] = 1;
  /* report_user */  /* Master */ $handler->display->display_options['filters']['field_name_last_value']['exposed'] = TRUE;
  /* report_user */  /* Master */ $handler->display->display_options['filters']['field_name_last_value']['expose']['operator_id'] = 'field_name_last_value_op';
  /* report_user */  /* Master */ $handler->display->display_options['filters']['field_name_last_value']['expose']['label'] = 'Family Name';
  /* report_user */  /* Master */ $handler->display->display_options['filters']['field_name_last_value']['expose']['use_operator'] = TRUE;
  /* report_user */  /* Master */ $handler->display->display_options['filters']['field_name_last_value']['expose']['operator'] = 'field_name_last_value_op';
  /* report_user */  /* Master */ $handler->display->display_options['filters']['field_name_last_value']['expose']['identifier'] = 'field_name_last_value';
  /* report_user */  /* Master */ $handler->display->display_options['filters']['field_name_last_value']['expose']['remember_roles'] = array(
  /* report_user */  /* Master */   2 => '2',
  /* report_user */  /* Master */   1 => 0,
  /* report_user */  /* Master */   9 => 0,
  /* report_user */  /* Master */   10 => 0,
  /* report_user */  /* Master */ );
  /* report_user */  /* Master */ $handler->display->display_options['filters']['field_name_last_value']['expose']['autocomplete_items'] = '10';
  /* report_user */  /* Master */ $handler->display->display_options['filters']['field_name_last_value']['expose']['autocomplete_min_chars'] = '0';
  /* report_user */  /* Master */ $handler->display->display_options['filters']['field_name_last_value']['expose']['autocomplete_field'] = 'field_name_last';
  /* report_user */  /* Master */ $handler->display->display_options['filters']['field_name_last_value']['expose']['autocomplete_raw_suggestion'] = 1;
  /* report_user */  /* Master */ $handler->display->display_options['filters']['field_name_last_value']['expose']['autocomplete_raw_dropdown'] = 1;
  /* report_user */  /* Master */ $handler->display->display_options['filters']['field_name_last_value']['expose']['autocomplete_dependent'] = 0;
  /* report_user */  /* Master */ /* Filter criterion: User: Last login */
  /* report_user */  /* Master */ $handler->display->display_options['filters']['login']['id'] = 'login';
  /* report_user */  /* Master */ $handler->display->display_options['filters']['login']['table'] = 'users';
  /* report_user */  /* Master */ $handler->display->display_options['filters']['login']['field'] = 'login';
  /* report_user */  /* Master */ $handler->display->display_options['filters']['login']['operator'] = '>';
  /* report_user */  /* Master */ $handler->display->display_options['filters']['login']['group'] = 1;
  /* report_user */  /* Master */ $handler->display->display_options['filters']['login']['exposed'] = TRUE;
  /* report_user */  /* Master */ $handler->display->display_options['filters']['login']['expose']['operator_id'] = 'login_op';
  /* report_user */  /* Master */ $handler->display->display_options['filters']['login']['expose']['label'] = 'Last login';
  /* report_user */  /* Master */ $handler->display->display_options['filters']['login']['expose']['use_operator'] = TRUE;
  /* report_user */  /* Master */ $handler->display->display_options['filters']['login']['expose']['operator_label'] = 'Operator';
  /* report_user */  /* Master */ $handler->display->display_options['filters']['login']['expose']['operator'] = 'login_op';
  /* report_user */  /* Master */ $handler->display->display_options['filters']['login']['expose']['identifier'] = 'login';
  /* report_user */  /* Master */ $handler->display->display_options['filters']['login']['expose']['remember'] = TRUE;
  /* report_user */  /* Master */ $handler->display->display_options['filters']['login']['expose']['remember_roles'] = array(
  /* report_user */  /* Master */   2 => 0,
  /* report_user */  /* Master */   9 => '9',
  /* report_user */  /* Master */   1 => 0,
  /* report_user */  /* Master */   10 => 0,
  /* report_user */  /* Master */ );
  /* report_user */  /* Master */ /* Filter criterion: User: Name */
  /* report_user */  /* Master */ $handler->display->display_options['filters']['uid']['id'] = 'uid';
  /* report_user */  /* Master */ $handler->display->display_options['filters']['uid']['table'] = 'users';
  /* report_user */  /* Master */ $handler->display->display_options['filters']['uid']['field'] = 'uid';
  /* report_user */  /* Master */ $handler->display->display_options['filters']['uid']['value'] = '';
  /* report_user */  /* Master */ $handler->display->display_options['filters']['uid']['group'] = 1;
  /* report_user */  /* Master */ $handler->display->display_options['filters']['uid']['exposed'] = TRUE;
  /* report_user */  /* Master */ $handler->display->display_options['filters']['uid']['expose']['operator_id'] = 'uid_op';
  /* report_user */  /* Master */ $handler->display->display_options['filters']['uid']['expose']['label'] = 'Name';
  /* report_user */  /* Master */ $handler->display->display_options['filters']['uid']['expose']['operator'] = 'uid_op';
  /* report_user */  /* Master */ $handler->display->display_options['filters']['uid']['expose']['identifier'] = 'uid';
  /* report_user */  /* Master */ $handler->display->display_options['filters']['uid']['expose']['remember_roles'] = array(
  /* report_user */  /* Master */   2 => '2',
  /* report_user */  /* Master */   1 => 0,
  /* report_user */  /* Master */   9 => 0,
  /* report_user */  /* Master */ );
  /* report_user */  /* Master */ /* Filter criterion: User: Active */
  /* report_user */  /* Master */ $handler->display->display_options['filters']['status']['id'] = 'status';
  /* report_user */  /* Master */ $handler->display->display_options['filters']['status']['table'] = 'users';
  /* report_user */  /* Master */ $handler->display->display_options['filters']['status']['field'] = 'status';
  /* report_user */  /* Master */ $handler->display->display_options['filters']['status']['group'] = 1;
  /* report_user */  /* Master */ $handler->display->display_options['filters']['status']['exposed'] = TRUE;
  /* report_user */  /* Master */ $handler->display->display_options['filters']['status']['expose']['operator_id'] = '';
  /* report_user */  /* Master */ $handler->display->display_options['filters']['status']['expose']['label'] = 'Active';
  /* report_user */  /* Master */ $handler->display->display_options['filters']['status']['expose']['operator'] = 'status_op';
  /* report_user */  /* Master */ $handler->display->display_options['filters']['status']['expose']['identifier'] = 'status';
  /* report_user */  /* Master */ $handler->display->display_options['filters']['status']['expose']['remember_roles'] = array(
  /* report_user */  /* Master */   2 => '2',
  /* report_user */  /* Master */   1 => 0,
  /* report_user */  /* Master */   9 => 0,
  /* report_user */  /* Master */   10 => 0,
  /* report_user */  /* Master */ );

  /* report_user */ /* Display: Page */
  /* report_user */  /* Page */ $handler = $view->new_display('page', 'Page', 'page');
  /* report_user */  /* Page */ $handler->display->display_options['defaults']['fields'] = FALSE;
  /* report_user */  /* Page */ /* Field: User: Uid */
  /* report_user */  /* Page */ $handler->display->display_options['fields']['uid']['id'] = 'uid';
  /* report_user */  /* Page */ $handler->display->display_options['fields']['uid']['table'] = 'users';
  /* report_user */  /* Page */ $handler->display->display_options['fields']['uid']['field'] = 'uid';
  /* report_user */  /* Page */ $handler->display->display_options['fields']['uid']['label'] = '';
  /* report_user */  /* Page */ $handler->display->display_options['fields']['uid']['exclude'] = TRUE;
  /* report_user */  /* Page */ $handler->display->display_options['fields']['uid']['element_label_colon'] = FALSE;
  /* report_user */  /* Page */ $handler->display->display_options['fields']['uid']['element_default_classes'] = FALSE;
  /* report_user */  /* Page */ $handler->display->display_options['fields']['uid']['link_to_user'] = FALSE;
  /* report_user */  /* Page */ /* Field: Bulk operations: User */
  /* report_user */  /* Page */ $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  /* report_user */  /* Page */ $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'users';
  /* report_user */  /* Page */ $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  /* report_user */  /* Page */ $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '0';
  /* report_user */  /* Page */ $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  /* report_user */  /* Page */ $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['row_clickable'] = 1;
  /* report_user */  /* Page */ $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  /* report_user */  /* Page */ $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  /* report_user */  /* Page */ $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
  /* report_user */  /* Page */   'action::user_block_user_action' => array(
  /* report_user */  /* Page */     'selected' => 1,
  /* report_user */  /* Page */     'postpone_processing' => 0,
  /* report_user */  /* Page */     'skip_confirmation' => 0,
  /* report_user */  /* Page */     'override_label' => 0,
  /* report_user */  /* Page */     'label' => '',
  /* report_user */  /* Page */   ),
  /* report_user */  /* Page */   'action::views_bulk_operations_user_cancel_action' => array(
  /* report_user */  /* Page */     'selected' => 1,
  /* report_user */  /* Page */     'postpone_processing' => 0,
  /* report_user */  /* Page */     'skip_confirmation' => 0,
  /* report_user */  /* Page */     'override_label' => 0,
  /* report_user */  /* Page */     'label' => '',
  /* report_user */  /* Page */   ),
  /* report_user */  /* Page */   'action::gn2_base_config_write_message' => array(
  /* report_user */  /* Page */     'selected' => 1,
  /* report_user */  /* Page */     'postpone_processing' => 0,
  /* report_user */  /* Page */     'skip_confirmation' => 0,
  /* report_user */  /* Page */     'override_label' => 0,
  /* report_user */  /* Page */     'label' => '',
  /* report_user */  /* Page */   ),
  /* report_user */  /* Page */   'action::gn2_og_unblock_user_action' => array(
  /* report_user */  /* Page */     'selected' => 1,
  /* report_user */  /* Page */     'postpone_processing' => 0,
  /* report_user */  /* Page */     'skip_confirmation' => 0,
  /* report_user */  /* Page */     'override_label' => 0,
  /* report_user */  /* Page */     'label' => '',
  /* report_user */  /* Page */   ),
  /* report_user */  /* Page */ );
  /* report_user */  /* Page */ /* Field: User: Name */
  /* report_user */  /* Page */ $handler->display->display_options['fields']['name_1']['id'] = 'name_1';
  /* report_user */  /* Page */ $handler->display->display_options['fields']['name_1']['table'] = 'users';
  /* report_user */  /* Page */ $handler->display->display_options['fields']['name_1']['field'] = 'name';
  /* report_user */  /* Page */ $handler->display->display_options['fields']['name_1']['label'] = 'AccountName';
  /* report_user */  /* Page */ /* Field: User: Created date */
  /* report_user */  /* Page */ $handler->display->display_options['fields']['created']['id'] = 'created';
  /* report_user */  /* Page */ $handler->display->display_options['fields']['created']['table'] = 'users';
  /* report_user */  /* Page */ $handler->display->display_options['fields']['created']['field'] = 'created';
  /* report_user */  /* Page */ $handler->display->display_options['fields']['created']['label'] = 'Created';
  /* report_user */  /* Page */ $handler->display->display_options['fields']['created']['date_format'] = 'date_format_globalnet_date';
  /* report_user */  /* Page */ $handler->display->display_options['fields']['created']['second_date_format'] = 'date_format_globalnet_date';
  /* report_user */  /* Page */ /* Field: User: Active */
  /* report_user */  /* Page */ $handler->display->display_options['fields']['status']['id'] = 'status';
  /* report_user */  /* Page */ $handler->display->display_options['fields']['status']['table'] = 'users';
  /* report_user */  /* Page */ $handler->display->display_options['fields']['status']['field'] = 'status';
  /* report_user */  /* Page */ $handler->display->display_options['fields']['status']['not'] = 0;
  /* report_user */  /* Page */ /* Field: User: Last login */
  /* report_user */  /* Page */ $handler->display->display_options['fields']['login']['id'] = 'login';
  /* report_user */  /* Page */ $handler->display->display_options['fields']['login']['table'] = 'users';
  /* report_user */  /* Page */ $handler->display->display_options['fields']['login']['field'] = 'login';
  /* report_user */  /* Page */ $handler->display->display_options['fields']['login']['date_format'] = 'date_format_globalnet_date';
  /* report_user */  /* Page */ $handler->display->display_options['fields']['login']['second_date_format'] = 'date_format_globalnet_date';
  /* report_user */  /* Page */ /* Field: Field: Given Name */
  /* report_user */  /* Page */ $handler->display->display_options['fields']['field_name_first']['id'] = 'field_name_first';
  /* report_user */  /* Page */ $handler->display->display_options['fields']['field_name_first']['table'] = 'field_data_field_name_first';
  /* report_user */  /* Page */ $handler->display->display_options['fields']['field_name_first']['field'] = 'field_name_first';
  /* report_user */  /* Page */ $handler->display->display_options['fields']['field_name_first']['label'] = 'FirstName';
  /* report_user */  /* Page */ $handler->display->display_options['fields']['field_name_first']['element_type'] = '0';
  /* report_user */  /* Page */ $handler->display->display_options['fields']['field_name_first']['element_wrapper_type'] = '0';
  /* report_user */  /* Page */ $handler->display->display_options['fields']['field_name_first']['element_default_classes'] = FALSE;
  /* report_user */  /* Page */ $handler->display->display_options['fields']['field_name_first']['settings'] = array(
  /* report_user */  /* Page */   'field_formatter_class' => '',
  /* report_user */  /* Page */ );
  /* report_user */  /* Page */ $handler->display->display_options['fields']['field_name_first']['field_api_classes'] = TRUE;
  /* report_user */  /* Page */ /* Field: Field: Family Name */
  /* report_user */  /* Page */ $handler->display->display_options['fields']['field_name_last']['id'] = 'field_name_last';
  /* report_user */  /* Page */ $handler->display->display_options['fields']['field_name_last']['table'] = 'field_data_field_name_last';
  /* report_user */  /* Page */ $handler->display->display_options['fields']['field_name_last']['field'] = 'field_name_last';
  /* report_user */  /* Page */ $handler->display->display_options['fields']['field_name_last']['label'] = 'LastName';
  /* report_user */  /* Page */ $handler->display->display_options['fields']['field_name_last']['element_type'] = '0';
  /* report_user */  /* Page */ $handler->display->display_options['fields']['field_name_last']['element_wrapper_type'] = '0';
  /* report_user */  /* Page */ $handler->display->display_options['fields']['field_name_last']['element_default_classes'] = FALSE;
  /* report_user */  /* Page */ $handler->display->display_options['fields']['field_name_last']['settings'] = array(
  /* report_user */  /* Page */   'field_formatter_class' => '',
  /* report_user */  /* Page */ );
  /* report_user */  /* Page */ $handler->display->display_options['fields']['field_name_last']['field_api_classes'] = TRUE;
  /* report_user */  /* Page */ /* Field: User: Job title */
  /* report_user */  /* Page */ $handler->display->display_options['fields']['field_user_title']['id'] = 'field_user_title';
  /* report_user */  /* Page */ $handler->display->display_options['fields']['field_user_title']['table'] = 'field_data_field_user_title';
  /* report_user */  /* Page */ $handler->display->display_options['fields']['field_user_title']['field'] = 'field_user_title';
  /* report_user */  /* Page */ $handler->display->display_options['fields']['field_user_title']['element_type'] = '0';
  /* report_user */  /* Page */ $handler->display->display_options['fields']['field_user_title']['element_wrapper_type'] = '0';
  /* report_user */  /* Page */ $handler->display->display_options['fields']['field_user_title']['element_default_classes'] = FALSE;
  /* report_user */  /* Page */ $handler->display->display_options['fields']['field_user_title']['settings'] = array(
  /* report_user */  /* Page */   'field_formatter_class' => '',
  /* report_user */  /* Page */ );
  /* report_user */  /* Page */ $handler->display->display_options['fields']['field_user_title']['field_api_classes'] = TRUE;
  /* report_user */  /* Page */ /* Field: User: Organization */
  /* report_user */  /* Page */ $handler->display->display_options['fields']['field_user_organization']['id'] = 'field_user_organization';
  /* report_user */  /* Page */ $handler->display->display_options['fields']['field_user_organization']['table'] = 'field_data_field_user_organization';
  /* report_user */  /* Page */ $handler->display->display_options['fields']['field_user_organization']['field'] = 'field_user_organization';
  /* report_user */  /* Page */ $handler->display->display_options['fields']['field_user_organization']['element_type'] = '0';
  /* report_user */  /* Page */ $handler->display->display_options['fields']['field_user_organization']['element_wrapper_type'] = '0';
  /* report_user */  /* Page */ $handler->display->display_options['fields']['field_user_organization']['element_default_classes'] = FALSE;
  /* report_user */  /* Page */ $handler->display->display_options['fields']['field_user_organization']['settings'] = array(
  /* report_user */  /* Page */   'field_formatter_class' => '',
  /* report_user */  /* Page */ );
  /* report_user */  /* Page */ $handler->display->display_options['fields']['field_user_organization']['field_api_classes'] = TRUE;
  /* report_user */  /* Page */ /* Field: Field: Country of Residence */
  /* report_user */  /* Page */ $handler->display->display_options['fields']['field_country_of_residence']['id'] = 'field_country_of_residence';
  /* report_user */  /* Page */ $handler->display->display_options['fields']['field_country_of_residence']['table'] = 'field_data_field_country_of_residence';
  /* report_user */  /* Page */ $handler->display->display_options['fields']['field_country_of_residence']['field'] = 'field_country_of_residence';
  /* report_user */  /* Page */ $handler->display->display_options['fields']['field_country_of_residence']['label'] = 'Residence';
  /* report_user */  /* Page */ $handler->display->display_options['fields']['field_country_of_residence']['element_type'] = '0';
  /* report_user */  /* Page */ $handler->display->display_options['fields']['field_country_of_residence']['element_wrapper_type'] = '0';
  /* report_user */  /* Page */ $handler->display->display_options['fields']['field_country_of_residence']['element_default_classes'] = FALSE;
  /* report_user */  /* Page */ $handler->display->display_options['fields']['field_country_of_residence']['settings'] = array(
  /* report_user */  /* Page */   'field_formatter_class' => '',
  /* report_user */  /* Page */ );
  /* report_user */  /* Page */ $handler->display->display_options['fields']['field_country_of_residence']['field_api_classes'] = TRUE;
  /* report_user */  /* Page */ /* Field: User: E-mail */
  /* report_user */  /* Page */ $handler->display->display_options['fields']['mail']['id'] = 'mail';
  /* report_user */  /* Page */ $handler->display->display_options['fields']['mail']['table'] = 'users';
  /* report_user */  /* Page */ $handler->display->display_options['fields']['mail']['field'] = 'mail';
  /* report_user */  /* Page */ /* Field: Global: Custom text */
  /* report_user */  /* Page */ $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  /* report_user */  /* Page */ $handler->display->display_options['fields']['nothing']['table'] = 'views';
  /* report_user */  /* Page */ $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  /* report_user */  /* Page */ $handler->display->display_options['fields']['nothing']['label'] = '';
  /* report_user */  /* Page */ $handler->display->display_options['fields']['nothing']['alter']['text'] = '<a href="/user/[uid]/edit">edit</a><br />
<a href="/admin/manage/users/update/block/[uid]">block</a><br />
<a href="/admin/manage/users/update/unblock/[uid]">unblock</a><br />
<a href="/admin/manage/users/update/unlock/[uid]">unlock</a><br />
<a href="/messages/new/[uid]?destination=admin/manage/users">send message</a>';
  /* report_user */  /* Page */ $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* report_user */  /* Page */ $handler->display->display_options['fields']['nothing']['element_default_classes'] = FALSE;
  /* report_user */  /* Page */ $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  /* report_user */  /* Page */ $handler->display->display_options['defaults']['filters'] = FALSE;
  /* report_user */  /* Page */ /* Filter criterion: User: E-mail */
  /* report_user */  /* Page */ $handler->display->display_options['filters']['mail']['id'] = 'mail';
  /* report_user */  /* Page */ $handler->display->display_options['filters']['mail']['table'] = 'users';
  /* report_user */  /* Page */ $handler->display->display_options['filters']['mail']['field'] = 'mail';
  /* report_user */  /* Page */ $handler->display->display_options['filters']['mail']['operator'] = 'starts';
  /* report_user */  /* Page */ $handler->display->display_options['filters']['mail']['group'] = 1;
  /* report_user */  /* Page */ $handler->display->display_options['filters']['mail']['exposed'] = TRUE;
  /* report_user */  /* Page */ $handler->display->display_options['filters']['mail']['expose']['operator_id'] = 'mail_op';
  /* report_user */  /* Page */ $handler->display->display_options['filters']['mail']['expose']['label'] = 'E-mail';
  /* report_user */  /* Page */ $handler->display->display_options['filters']['mail']['expose']['use_operator'] = TRUE;
  /* report_user */  /* Page */ $handler->display->display_options['filters']['mail']['expose']['operator'] = 'mail_op';
  /* report_user */  /* Page */ $handler->display->display_options['filters']['mail']['expose']['identifier'] = 'mail';
  /* report_user */  /* Page */ $handler->display->display_options['filters']['mail']['expose']['remember_roles'] = array(
  /* report_user */  /* Page */   2 => '2',
  /* report_user */  /* Page */   1 => 0,
  /* report_user */  /* Page */   9 => 0,
  /* report_user */  /* Page */   10 => 0,
  /* report_user */  /* Page */ );
  /* report_user */  /* Page */ $handler->display->display_options['filters']['mail']['expose']['autocomplete_items'] = '10';
  /* report_user */  /* Page */ $handler->display->display_options['filters']['mail']['expose']['autocomplete_min_chars'] = '0';
  /* report_user */  /* Page */ $handler->display->display_options['filters']['mail']['expose']['autocomplete_field'] = 'mail';
  /* report_user */  /* Page */ $handler->display->display_options['filters']['mail']['expose']['autocomplete_raw_suggestion'] = 1;
  /* report_user */  /* Page */ $handler->display->display_options['filters']['mail']['expose']['autocomplete_raw_dropdown'] = 1;
  /* report_user */  /* Page */ $handler->display->display_options['filters']['mail']['expose']['autocomplete_dependent'] = 0;
  /* report_user */  /* Page */ /* Filter criterion: Field: Family Name (field_name_last) */
  /* report_user */  /* Page */ $handler->display->display_options['filters']['field_name_last_value']['id'] = 'field_name_last_value';
  /* report_user */  /* Page */ $handler->display->display_options['filters']['field_name_last_value']['table'] = 'field_data_field_name_last';
  /* report_user */  /* Page */ $handler->display->display_options['filters']['field_name_last_value']['field'] = 'field_name_last_value';
  /* report_user */  /* Page */ $handler->display->display_options['filters']['field_name_last_value']['operator'] = 'contains';
  /* report_user */  /* Page */ $handler->display->display_options['filters']['field_name_last_value']['group'] = 1;
  /* report_user */  /* Page */ $handler->display->display_options['filters']['field_name_last_value']['exposed'] = TRUE;
  /* report_user */  /* Page */ $handler->display->display_options['filters']['field_name_last_value']['expose']['operator_id'] = 'field_name_last_value_op';
  /* report_user */  /* Page */ $handler->display->display_options['filters']['field_name_last_value']['expose']['label'] = 'Family Name';
  /* report_user */  /* Page */ $handler->display->display_options['filters']['field_name_last_value']['expose']['use_operator'] = TRUE;
  /* report_user */  /* Page */ $handler->display->display_options['filters']['field_name_last_value']['expose']['operator'] = 'field_name_last_value_op';
  /* report_user */  /* Page */ $handler->display->display_options['filters']['field_name_last_value']['expose']['identifier'] = 'field_name_last_value';
  /* report_user */  /* Page */ $handler->display->display_options['filters']['field_name_last_value']['expose']['remember_roles'] = array(
  /* report_user */  /* Page */   2 => '2',
  /* report_user */  /* Page */   1 => 0,
  /* report_user */  /* Page */   9 => 0,
  /* report_user */  /* Page */   10 => 0,
  /* report_user */  /* Page */ );
  /* report_user */  /* Page */ $handler->display->display_options['filters']['field_name_last_value']['expose']['autocomplete_items'] = '10';
  /* report_user */  /* Page */ $handler->display->display_options['filters']['field_name_last_value']['expose']['autocomplete_min_chars'] = '0';
  /* report_user */  /* Page */ $handler->display->display_options['filters']['field_name_last_value']['expose']['autocomplete_field'] = 'field_name_last';
  /* report_user */  /* Page */ $handler->display->display_options['filters']['field_name_last_value']['expose']['autocomplete_raw_suggestion'] = 1;
  /* report_user */  /* Page */ $handler->display->display_options['filters']['field_name_last_value']['expose']['autocomplete_raw_dropdown'] = 1;
  /* report_user */  /* Page */ $handler->display->display_options['filters']['field_name_last_value']['expose']['autocomplete_dependent'] = 0;
  /* report_user */  /* Page */ /* Filter criterion: User: Last login */
  /* report_user */  /* Page */ $handler->display->display_options['filters']['login']['id'] = 'login';
  /* report_user */  /* Page */ $handler->display->display_options['filters']['login']['table'] = 'users';
  /* report_user */  /* Page */ $handler->display->display_options['filters']['login']['field'] = 'login';
  /* report_user */  /* Page */ $handler->display->display_options['filters']['login']['operator'] = '>';
  /* report_user */  /* Page */ $handler->display->display_options['filters']['login']['group'] = 1;
  /* report_user */  /* Page */ $handler->display->display_options['filters']['login']['exposed'] = TRUE;
  /* report_user */  /* Page */ $handler->display->display_options['filters']['login']['expose']['operator_id'] = 'login_op';
  /* report_user */  /* Page */ $handler->display->display_options['filters']['login']['expose']['label'] = 'Last login';
  /* report_user */  /* Page */ $handler->display->display_options['filters']['login']['expose']['use_operator'] = TRUE;
  /* report_user */  /* Page */ $handler->display->display_options['filters']['login']['expose']['operator_label'] = 'Operator';
  /* report_user */  /* Page */ $handler->display->display_options['filters']['login']['expose']['operator'] = 'login_op';
  /* report_user */  /* Page */ $handler->display->display_options['filters']['login']['expose']['identifier'] = 'login';
  /* report_user */  /* Page */ $handler->display->display_options['filters']['login']['expose']['remember'] = TRUE;
  /* report_user */  /* Page */ $handler->display->display_options['filters']['login']['expose']['remember_roles'] = array(
  /* report_user */  /* Page */   2 => 0,
  /* report_user */  /* Page */   9 => '9',
  /* report_user */  /* Page */   1 => 0,
  /* report_user */  /* Page */   10 => 0,
  /* report_user */  /* Page */ );
  /* report_user */  /* Page */ /* Filter criterion: User: Active */
  /* report_user */  /* Page */ $handler->display->display_options['filters']['status']['id'] = 'status';
  /* report_user */  /* Page */ $handler->display->display_options['filters']['status']['table'] = 'users';
  /* report_user */  /* Page */ $handler->display->display_options['filters']['status']['field'] = 'status';
  /* report_user */  /* Page */ $handler->display->display_options['filters']['status']['group'] = 1;
  /* report_user */  /* Page */ $handler->display->display_options['filters']['status']['exposed'] = TRUE;
  /* report_user */  /* Page */ $handler->display->display_options['filters']['status']['expose']['operator_id'] = '';
  /* report_user */  /* Page */ $handler->display->display_options['filters']['status']['expose']['label'] = 'Active';
  /* report_user */  /* Page */ $handler->display->display_options['filters']['status']['expose']['operator'] = 'status_op';
  /* report_user */  /* Page */ $handler->display->display_options['filters']['status']['expose']['identifier'] = 'status';
  /* report_user */  /* Page */ $handler->display->display_options['filters']['status']['expose']['remember_roles'] = array(
  /* report_user */  /* Page */   2 => '2',
  /* report_user */  /* Page */   1 => 0,
  /* report_user */  /* Page */   9 => 0,
  /* report_user */  /* Page */   10 => 0,
  /* report_user */  /* Page */ );
  /* report_user */  /* Page */ /* Filter criterion: User: Name */
  /* report_user */  /* Page */ $handler->display->display_options['filters']['uid']['id'] = 'uid';
  /* report_user */  /* Page */ $handler->display->display_options['filters']['uid']['table'] = 'users';
  /* report_user */  /* Page */ $handler->display->display_options['filters']['uid']['field'] = 'uid';
  /* report_user */  /* Page */ $handler->display->display_options['filters']['uid']['value'] = '';
  /* report_user */  /* Page */ $handler->display->display_options['filters']['uid']['group'] = 1;
  /* report_user */  /* Page */ $handler->display->display_options['filters']['uid']['exposed'] = TRUE;
  /* report_user */  /* Page */ $handler->display->display_options['filters']['uid']['expose']['operator_id'] = 'uid_op';
  /* report_user */  /* Page */ $handler->display->display_options['filters']['uid']['expose']['label'] = 'Name';
  /* report_user */  /* Page */ $handler->display->display_options['filters']['uid']['expose']['operator'] = 'uid_op';
  /* report_user */  /* Page */ $handler->display->display_options['filters']['uid']['expose']['identifier'] = 'uid';
  /* report_user */  /* Page */ $handler->display->display_options['filters']['uid']['expose']['remember_roles'] = array(
  /* report_user */  /* Page */   2 => '2',
  /* report_user */  /* Page */   1 => 0,
  /* report_user */  /* Page */   9 => 0,
  /* report_user */  /* Page */ );
  /* report_user */  /* Page */ /* Filter criterion: Global: Combine fields filter */
  /* report_user */  /* Page */ $handler->display->display_options['filters']['combine']['id'] = 'combine';
  /* report_user */  /* Page */ $handler->display->display_options['filters']['combine']['table'] = 'views';
  /* report_user */  /* Page */ $handler->display->display_options['filters']['combine']['field'] = 'combine';
  /* report_user */  /* Page */ $handler->display->display_options['filters']['combine']['operator'] = 'word';
  /* report_user */  /* Page */ $handler->display->display_options['filters']['combine']['group'] = 1;
  /* report_user */  /* Page */ $handler->display->display_options['filters']['combine']['exposed'] = TRUE;
  /* report_user */  /* Page */ $handler->display->display_options['filters']['combine']['expose']['operator_id'] = 'combine_op';
  /* report_user */  /* Page */ $handler->display->display_options['filters']['combine']['expose']['label'] = 'Combined search';
  /* report_user */  /* Page */ $handler->display->display_options['filters']['combine']['expose']['description'] = 'Type or paste username, Given Name, Last Name or e-mail address. Use comma to separate the words. E.g.: admin, member, user1';
  /* report_user */  /* Page */ $handler->display->display_options['filters']['combine']['expose']['operator'] = 'combine_op';
  /* report_user */  /* Page */ $handler->display->display_options['filters']['combine']['expose']['identifier'] = 'combine';
  /* report_user */  /* Page */ $handler->display->display_options['filters']['combine']['expose']['remember_roles'] = array(
  /* report_user */  /* Page */   2 => '2',
  /* report_user */  /* Page */   1 => 0,
  /* report_user */  /* Page */   9 => 0,
  /* report_user */  /* Page */   10 => 0,
  /* report_user */  /* Page */ );
  /* report_user */  /* Page */ $handler->display->display_options['filters']['combine']['expose']['autocomplete_items'] = '10';
  /* report_user */  /* Page */ $handler->display->display_options['filters']['combine']['expose']['autocomplete_min_chars'] = '0';
  /* report_user */  /* Page */ $handler->display->display_options['filters']['combine']['expose']['autocomplete_raw_suggestion'] = 1;
  /* report_user */  /* Page */ $handler->display->display_options['filters']['combine']['expose']['autocomplete_raw_dropdown'] = 1;
  /* report_user */  /* Page */ $handler->display->display_options['filters']['combine']['expose']['autocomplete_dependent'] = 0;
  /* report_user */  /* Page */ $handler->display->display_options['filters']['combine']['group_info']['label'] = 'Combine fields filter';
  /* report_user */  /* Page */ $handler->display->display_options['filters']['combine']['group_info']['identifier'] = 'combine';
  /* report_user */  /* Page */ $handler->display->display_options['filters']['combine']['group_info']['remember'] = FALSE;
  /* report_user */  /* Page */ $handler->display->display_options['filters']['combine']['group_info']['group_items'] = array(
  /* report_user */  /* Page */   1 => array(),
  /* report_user */  /* Page */   2 => array(),
  /* report_user */  /* Page */   3 => array(),
  /* report_user */  /* Page */ );
  /* report_user */  /* Page */ $handler->display->display_options['filters']['combine']['fields'] = array(
  /* report_user */  /* Page */   'name_1' => 'name_1',
  /* report_user */  /* Page */   'field_name_first' => 'field_name_first',
  /* report_user */  /* Page */   'field_name_last' => 'field_name_last',
  /* report_user */  /* Page */   'mail' => 'mail',
  /* report_user */  /* Page */ );
  /* report_user */  /* Page */ $handler->display->display_options['path'] = 'admin/manage/users';
  /* report_user */ $translatables['report_user'] = array(
  /* report_user */   t('Master'),
  /* report_user */   t('User Report'),
  /* report_user */   t('more'),
  /* report_user */   t('Apply'),
  /* report_user */   t('Reset'),
  /* report_user */   t('Sort by'),
  /* report_user */   t('Asc'),
  /* report_user */   t('Desc'),
  /* report_user */   t('Items per page'),
  /* report_user */   t('- All -'),
  /* report_user */   t('Offset'),
  /* report_user */   t('« first'),
  /* report_user */   t('‹ previous'),
  /* report_user */   t('next ›'),
  /* report_user */   t('last »'),
  /* report_user */   t('User'),
  /* report_user */   t('- Choose an operation -'),
  /* report_user */   t('AccountName'),
  /* report_user */   t('Created'),
  /* report_user */   t('Active'),
  /* report_user */   t('Last login'),
  /* report_user */   t('FirstName'),
  /* report_user */   t('LastName'),
  /* report_user */   t('Job title'),
  /* report_user */   t('Organization'),
  /* report_user */   t('Residence'),
  /* report_user */   t('E-mail'),
  /* report_user */   t('<a href="/user/[uid]/edit">edit</a><br />
<a href="/admin/manage/users/update/block/[uid]">block</a><br />
<a href="/admin/manage/users/update/unblock/[uid]">unblock</a><br />
<a href="/admin/manage/users/update/unlock/[uid]">unlock</a><br />
<a href="/messages/new/[uid]?destination=admin/manage/users">send message</a>'),
  /* report_user */   t('Family Name'),
  /* report_user */   t('Operator'),
  /* report_user */   t('Name'),
  /* report_user */   t('Page'),
  /* report_user */   t('Combined search'),
  /* report_user */   t('Type or paste username, Given Name, Last Name or e-mail address. Use comma to separate the words. E.g.: admin, member, user1'),
  /* report_user */   t('Combine fields filter'),
  /* report_user */ );
  $export['report_user'] = $view;

  /* report_watchdog */ $view = new view();
  /* report_watchdog */ $view->name = 'report_watchdog';
  /* report_watchdog */ $view->description = '';
  /* report_watchdog */ $view->tag = 'default';
  /* report_watchdog */ $view->base_table = 'watchdog';
  /* report_watchdog */ $view->human_name = 'Report: Watchdog';
  /* report_watchdog */ $view->core = 7;
  /* report_watchdog */ $view->api_version = '3.0';
  /* report_watchdog */ $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* report_watchdog */ /* Display: Master */
  /* report_watchdog */  /* Master */ $handler = $view->new_display('default', 'Master', 'default');
  /* report_watchdog */  /* Master */ $handler->display->display_options['title'] = 'Report: Watchdog';
  /* report_watchdog */  /* Master */ $handler->display->display_options['use_more_always'] = FALSE;
  /* report_watchdog */  /* Master */ $handler->display->display_options['access']['type'] = 'role';
  /* report_watchdog */  /* Master */ $handler->display->display_options['access']['role'] = array(
  /* report_watchdog */  /* Master */   9 => '9',
  /* report_watchdog */  /* Master */ );
  /* report_watchdog */  /* Master */ $handler->display->display_options['cache']['type'] = 'none';
  /* report_watchdog */  /* Master */ $handler->display->display_options['query']['type'] = 'views_query';
  /* report_watchdog */  /* Master */ $handler->display->display_options['exposed_form']['type'] = 'basic';
  /* report_watchdog */  /* Master */ $handler->display->display_options['pager']['type'] = 'full';
  /* report_watchdog */  /* Master */ $handler->display->display_options['pager']['options']['items_per_page'] = '100';
  /* report_watchdog */  /* Master */ $handler->display->display_options['style_plugin'] = 'table';
  /* report_watchdog */  /* Master */ $handler->display->display_options['style_options']['columns'] = array(
  /* report_watchdog */  /* Master */   'wid' => 'wid',
  /* report_watchdog */  /* Master */   'hostname' => 'hostname',
  /* report_watchdog */  /* Master */   'link' => 'link',
  /* report_watchdog */  /* Master */   'location' => 'location',
  /* report_watchdog */  /* Master */   'message' => 'message',
  /* report_watchdog */  /* Master */   'referer' => 'referer',
  /* report_watchdog */  /* Master */   'severity' => 'severity',
  /* report_watchdog */  /* Master */   'timestamp' => 'timestamp',
  /* report_watchdog */  /* Master */   'type' => 'type',
  /* report_watchdog */  /* Master */   'variables' => 'variables',
  /* report_watchdog */  /* Master */ );
  /* report_watchdog */  /* Master */ $handler->display->display_options['style_options']['default'] = '-1';
  /* report_watchdog */  /* Master */ $handler->display->display_options['style_options']['info'] = array(
  /* report_watchdog */  /* Master */   'wid' => array(
  /* report_watchdog */  /* Master */     'sortable' => 0,
  /* report_watchdog */  /* Master */     'default_sort_order' => 'asc',
  /* report_watchdog */  /* Master */     'align' => '',
  /* report_watchdog */  /* Master */     'separator' => '',
  /* report_watchdog */  /* Master */     'empty_column' => 0,
  /* report_watchdog */  /* Master */   ),
  /* report_watchdog */  /* Master */   'hostname' => array(
  /* report_watchdog */  /* Master */     'sortable' => 0,
  /* report_watchdog */  /* Master */     'default_sort_order' => 'asc',
  /* report_watchdog */  /* Master */     'align' => '',
  /* report_watchdog */  /* Master */     'separator' => '',
  /* report_watchdog */  /* Master */     'empty_column' => 0,
  /* report_watchdog */  /* Master */   ),
  /* report_watchdog */  /* Master */   'link' => array(
  /* report_watchdog */  /* Master */     'sortable' => 0,
  /* report_watchdog */  /* Master */     'default_sort_order' => 'asc',
  /* report_watchdog */  /* Master */     'align' => '',
  /* report_watchdog */  /* Master */     'separator' => '',
  /* report_watchdog */  /* Master */     'empty_column' => 0,
  /* report_watchdog */  /* Master */   ),
  /* report_watchdog */  /* Master */   'location' => array(
  /* report_watchdog */  /* Master */     'sortable' => 1,
  /* report_watchdog */  /* Master */     'default_sort_order' => 'asc',
  /* report_watchdog */  /* Master */     'align' => '',
  /* report_watchdog */  /* Master */     'separator' => '',
  /* report_watchdog */  /* Master */     'empty_column' => 0,
  /* report_watchdog */  /* Master */   ),
  /* report_watchdog */  /* Master */   'message' => array(
  /* report_watchdog */  /* Master */     'sortable' => 1,
  /* report_watchdog */  /* Master */     'default_sort_order' => 'asc',
  /* report_watchdog */  /* Master */     'align' => '',
  /* report_watchdog */  /* Master */     'separator' => '',
  /* report_watchdog */  /* Master */     'empty_column' => 0,
  /* report_watchdog */  /* Master */   ),
  /* report_watchdog */  /* Master */   'referer' => array(
  /* report_watchdog */  /* Master */     'sortable' => 0,
  /* report_watchdog */  /* Master */     'default_sort_order' => 'asc',
  /* report_watchdog */  /* Master */     'align' => '',
  /* report_watchdog */  /* Master */     'separator' => '',
  /* report_watchdog */  /* Master */     'empty_column' => 0,
  /* report_watchdog */  /* Master */   ),
  /* report_watchdog */  /* Master */   'severity' => array(
  /* report_watchdog */  /* Master */     'sortable' => 0,
  /* report_watchdog */  /* Master */     'default_sort_order' => 'asc',
  /* report_watchdog */  /* Master */     'align' => '',
  /* report_watchdog */  /* Master */     'separator' => '',
  /* report_watchdog */  /* Master */     'empty_column' => 0,
  /* report_watchdog */  /* Master */   ),
  /* report_watchdog */  /* Master */   'timestamp' => array(
  /* report_watchdog */  /* Master */     'sortable' => 0,
  /* report_watchdog */  /* Master */     'default_sort_order' => 'asc',
  /* report_watchdog */  /* Master */     'align' => '',
  /* report_watchdog */  /* Master */     'separator' => '',
  /* report_watchdog */  /* Master */     'empty_column' => 0,
  /* report_watchdog */  /* Master */   ),
  /* report_watchdog */  /* Master */   'type' => array(
  /* report_watchdog */  /* Master */     'sortable' => 0,
  /* report_watchdog */  /* Master */     'default_sort_order' => 'asc',
  /* report_watchdog */  /* Master */     'align' => '',
  /* report_watchdog */  /* Master */     'separator' => '',
  /* report_watchdog */  /* Master */     'empty_column' => 0,
  /* report_watchdog */  /* Master */   ),
  /* report_watchdog */  /* Master */   'variables' => array(
  /* report_watchdog */  /* Master */     'align' => '',
  /* report_watchdog */  /* Master */     'separator' => '',
  /* report_watchdog */  /* Master */     'empty_column' => 0,
  /* report_watchdog */  /* Master */   ),
  /* report_watchdog */  /* Master */ );
  /* report_watchdog */  /* Master */ /* Field: Watchdog: Timestamp */
  /* report_watchdog */  /* Master */ $handler->display->display_options['fields']['timestamp']['id'] = 'timestamp';
  /* report_watchdog */  /* Master */ $handler->display->display_options['fields']['timestamp']['table'] = 'watchdog';
  /* report_watchdog */  /* Master */ $handler->display->display_options['fields']['timestamp']['field'] = 'timestamp';
  /* report_watchdog */  /* Master */ $handler->display->display_options['fields']['timestamp']['date_format'] = 'date_format_globalnet_date';
  /* report_watchdog */  /* Master */ $handler->display->display_options['fields']['timestamp']['second_date_format'] = 'date_format_globalnet_date';
  /* report_watchdog */  /* Master */ /* Field: Watchdog: Severity */
  /* report_watchdog */  /* Master */ $handler->display->display_options['fields']['severity']['id'] = 'severity';
  /* report_watchdog */  /* Master */ $handler->display->display_options['fields']['severity']['table'] = 'watchdog';
  /* report_watchdog */  /* Master */ $handler->display->display_options['fields']['severity']['field'] = 'severity';
  /* report_watchdog */  /* Master */ $handler->display->display_options['fields']['severity']['watchdog_severity_icon'] = 1;
  /* report_watchdog */  /* Master */ /* Field: Watchdog: Type */
  /* report_watchdog */  /* Master */ $handler->display->display_options['fields']['type']['id'] = 'type';
  /* report_watchdog */  /* Master */ $handler->display->display_options['fields']['type']['table'] = 'watchdog';
  /* report_watchdog */  /* Master */ $handler->display->display_options['fields']['type']['field'] = 'type';
  /* report_watchdog */  /* Master */ /* Field: Watchdog: Hostname */
  /* report_watchdog */  /* Master */ $handler->display->display_options['fields']['hostname']['id'] = 'hostname';
  /* report_watchdog */  /* Master */ $handler->display->display_options['fields']['hostname']['table'] = 'watchdog';
  /* report_watchdog */  /* Master */ $handler->display->display_options['fields']['hostname']['field'] = 'hostname';
  /* report_watchdog */  /* Master */ /* Field: Watchdog: Message */
  /* report_watchdog */  /* Master */ $handler->display->display_options['fields']['message']['id'] = 'message';
  /* report_watchdog */  /* Master */ $handler->display->display_options['fields']['message']['table'] = 'watchdog';
  /* report_watchdog */  /* Master */ $handler->display->display_options['fields']['message']['field'] = 'message';
  /* report_watchdog */  /* Master */ $handler->display->display_options['fields']['message']['watchdog_message_format'] = 1;
  /* report_watchdog */  /* Master */ $handler->display->display_options['fields']['message']['watchdog_message_link'] = 1;
  /* report_watchdog */  /* Master */ /* Field: Watchdog: Variables */
  /* report_watchdog */  /* Master */ $handler->display->display_options['fields']['variables']['id'] = 'variables';
  /* report_watchdog */  /* Master */ $handler->display->display_options['fields']['variables']['table'] = 'watchdog';
  /* report_watchdog */  /* Master */ $handler->display->display_options['fields']['variables']['field'] = 'variables';
  /* report_watchdog */  /* Master */ /* Field: Watchdog: Location */
  /* report_watchdog */  /* Master */ $handler->display->display_options['fields']['location']['id'] = 'location';
  /* report_watchdog */  /* Master */ $handler->display->display_options['fields']['location']['table'] = 'watchdog';
  /* report_watchdog */  /* Master */ $handler->display->display_options['fields']['location']['field'] = 'location';
  /* report_watchdog */  /* Master */ /* Field: Watchdog: Referrer */
  /* report_watchdog */  /* Master */ $handler->display->display_options['fields']['referer']['id'] = 'referer';
  /* report_watchdog */  /* Master */ $handler->display->display_options['fields']['referer']['table'] = 'watchdog';
  /* report_watchdog */  /* Master */ $handler->display->display_options['fields']['referer']['field'] = 'referer';
  /* report_watchdog */  /* Master */ /* Field: Watchdog: Link */
  /* report_watchdog */  /* Master */ $handler->display->display_options['fields']['link']['id'] = 'link';
  /* report_watchdog */  /* Master */ $handler->display->display_options['fields']['link']['table'] = 'watchdog';
  /* report_watchdog */  /* Master */ $handler->display->display_options['fields']['link']['field'] = 'link';
  /* report_watchdog */  /* Master */ /* Sort criterion: Watchdog: Timestamp */
  /* report_watchdog */  /* Master */ $handler->display->display_options['sorts']['timestamp']['id'] = 'timestamp';
  /* report_watchdog */  /* Master */ $handler->display->display_options['sorts']['timestamp']['table'] = 'watchdog';
  /* report_watchdog */  /* Master */ $handler->display->display_options['sorts']['timestamp']['field'] = 'timestamp';
  /* report_watchdog */  /* Master */ $handler->display->display_options['sorts']['timestamp']['order'] = 'DESC';
  /* report_watchdog */  /* Master */ /* Filter criterion: Watchdog: Hostname */
  /* report_watchdog */  /* Master */ $handler->display->display_options['filters']['hostname']['id'] = 'hostname';
  /* report_watchdog */  /* Master */ $handler->display->display_options['filters']['hostname']['table'] = 'watchdog';
  /* report_watchdog */  /* Master */ $handler->display->display_options['filters']['hostname']['field'] = 'hostname';
  /* report_watchdog */  /* Master */ $handler->display->display_options['filters']['hostname']['exposed'] = TRUE;
  /* report_watchdog */  /* Master */ $handler->display->display_options['filters']['hostname']['expose']['operator_id'] = 'hostname_op';
  /* report_watchdog */  /* Master */ $handler->display->display_options['filters']['hostname']['expose']['label'] = 'Hostname';
  /* report_watchdog */  /* Master */ $handler->display->display_options['filters']['hostname']['expose']['operator'] = 'hostname_op';
  /* report_watchdog */  /* Master */ $handler->display->display_options['filters']['hostname']['expose']['identifier'] = 'hostname';
  /* report_watchdog */  /* Master */ $handler->display->display_options['filters']['hostname']['expose']['remember_roles'] = array(
  /* report_watchdog */  /* Master */   2 => '2',
  /* report_watchdog */  /* Master */   1 => 0,
  /* report_watchdog */  /* Master */   9 => 0,
  /* report_watchdog */  /* Master */   10 => 0,
  /* report_watchdog */  /* Master */   11 => 0,
  /* report_watchdog */  /* Master */ );
  /* report_watchdog */  /* Master */ $handler->display->display_options['filters']['hostname']['expose']['autocomplete_items'] = '10';
  /* report_watchdog */  /* Master */ $handler->display->display_options['filters']['hostname']['expose']['autocomplete_min_chars'] = '0';
  /* report_watchdog */  /* Master */ $handler->display->display_options['filters']['hostname']['expose']['autocomplete_field'] = 'hostname';
  /* report_watchdog */  /* Master */ $handler->display->display_options['filters']['hostname']['expose']['autocomplete_raw_suggestion'] = 1;
  /* report_watchdog */  /* Master */ $handler->display->display_options['filters']['hostname']['expose']['autocomplete_raw_dropdown'] = 1;
  /* report_watchdog */  /* Master */ $handler->display->display_options['filters']['hostname']['expose']['autocomplete_dependent'] = 0;
  /* report_watchdog */  /* Master */ /* Filter criterion: Watchdog: Location */
  /* report_watchdog */  /* Master */ $handler->display->display_options['filters']['location']['id'] = 'location';
  /* report_watchdog */  /* Master */ $handler->display->display_options['filters']['location']['table'] = 'watchdog';
  /* report_watchdog */  /* Master */ $handler->display->display_options['filters']['location']['field'] = 'location';
  /* report_watchdog */  /* Master */ $handler->display->display_options['filters']['location']['exposed'] = TRUE;
  /* report_watchdog */  /* Master */ $handler->display->display_options['filters']['location']['expose']['operator_id'] = 'location_op';
  /* report_watchdog */  /* Master */ $handler->display->display_options['filters']['location']['expose']['label'] = 'Location';
  /* report_watchdog */  /* Master */ $handler->display->display_options['filters']['location']['expose']['use_operator'] = TRUE;
  /* report_watchdog */  /* Master */ $handler->display->display_options['filters']['location']['expose']['operator'] = 'location_op';
  /* report_watchdog */  /* Master */ $handler->display->display_options['filters']['location']['expose']['identifier'] = 'location';
  /* report_watchdog */  /* Master */ $handler->display->display_options['filters']['location']['expose']['remember_roles'] = array(
  /* report_watchdog */  /* Master */   2 => '2',
  /* report_watchdog */  /* Master */   1 => 0,
  /* report_watchdog */  /* Master */   9 => 0,
  /* report_watchdog */  /* Master */   10 => 0,
  /* report_watchdog */  /* Master */   11 => 0,
  /* report_watchdog */  /* Master */ );
  /* report_watchdog */  /* Master */ $handler->display->display_options['filters']['location']['expose']['autocomplete_items'] = '10';
  /* report_watchdog */  /* Master */ $handler->display->display_options['filters']['location']['expose']['autocomplete_min_chars'] = '0';
  /* report_watchdog */  /* Master */ $handler->display->display_options['filters']['location']['expose']['autocomplete_field'] = 'location';
  /* report_watchdog */  /* Master */ $handler->display->display_options['filters']['location']['expose']['autocomplete_raw_suggestion'] = 1;
  /* report_watchdog */  /* Master */ $handler->display->display_options['filters']['location']['expose']['autocomplete_raw_dropdown'] = 1;
  /* report_watchdog */  /* Master */ $handler->display->display_options['filters']['location']['expose']['autocomplete_dependent'] = 0;
  /* report_watchdog */  /* Master */ /* Filter criterion: Watchdog: Message */
  /* report_watchdog */  /* Master */ $handler->display->display_options['filters']['message']['id'] = 'message';
  /* report_watchdog */  /* Master */ $handler->display->display_options['filters']['message']['table'] = 'watchdog';
  /* report_watchdog */  /* Master */ $handler->display->display_options['filters']['message']['field'] = 'message';
  /* report_watchdog */  /* Master */ $handler->display->display_options['filters']['message']['operator'] = 'contains';
  /* report_watchdog */  /* Master */ $handler->display->display_options['filters']['message']['exposed'] = TRUE;
  /* report_watchdog */  /* Master */ $handler->display->display_options['filters']['message']['expose']['operator_id'] = 'message_op';
  /* report_watchdog */  /* Master */ $handler->display->display_options['filters']['message']['expose']['label'] = 'Message';
  /* report_watchdog */  /* Master */ $handler->display->display_options['filters']['message']['expose']['use_operator'] = TRUE;
  /* report_watchdog */  /* Master */ $handler->display->display_options['filters']['message']['expose']['operator'] = 'message_op';
  /* report_watchdog */  /* Master */ $handler->display->display_options['filters']['message']['expose']['identifier'] = 'message';
  /* report_watchdog */  /* Master */ $handler->display->display_options['filters']['message']['expose']['remember_roles'] = array(
  /* report_watchdog */  /* Master */   2 => '2',
  /* report_watchdog */  /* Master */   1 => 0,
  /* report_watchdog */  /* Master */   9 => 0,
  /* report_watchdog */  /* Master */   10 => 0,
  /* report_watchdog */  /* Master */   11 => 0,
  /* report_watchdog */  /* Master */ );
  /* report_watchdog */  /* Master */ /* Filter criterion: Watchdog: Type */
  /* report_watchdog */  /* Master */ $handler->display->display_options['filters']['type']['id'] = 'type';
  /* report_watchdog */  /* Master */ $handler->display->display_options['filters']['type']['table'] = 'watchdog';
  /* report_watchdog */  /* Master */ $handler->display->display_options['filters']['type']['field'] = 'type';
  /* report_watchdog */  /* Master */ $handler->display->display_options['filters']['type']['value'] = array(
  /* report_watchdog */  /* Master */   'access denied' => 'access denied',
  /* report_watchdog */  /* Master */   'action' => 'action',
  /* report_watchdog */  /* Master */   'browscap' => 'browscap',
  /* report_watchdog */  /* Master */   'content' => 'content',
  /* report_watchdog */  /* Master */   'drupalauth4ssp' => 'drupalauth4ssp',
  /* report_watchdog */  /* Master */   'entityreference' => 'entityreference',
  /* report_watchdog */  /* Master */   'features' => 'features',
  /* report_watchdog */  /* Master */   'file' => 'file',
  /* report_watchdog */  /* Master */   'form' => 'form',
  /* report_watchdog */  /* Master */   'GN Notifications' => 'GN Notifications',
  /* report_watchdog */  /* Master */   'google analytics reports api' => 'google analytics reports api',
  /* report_watchdog */  /* Master */   'hook_update_deploy_tools' => 'hook_update_deploy_tools',
  /* report_watchdog */  /* Master */   'i18n_string' => 'i18n_string',
  /* report_watchdog */  /* Master */   'image' => 'image',
  /* report_watchdog */  /* Master */   'job_scheduler' => 'job_scheduler',
  /* report_watchdog */  /* Master */   'locale' => 'locale',
  /* report_watchdog */  /* Master */   'mail' => 'mail',
  /* report_watchdog */  /* Master */   'menu' => 'menu',
  /* report_watchdog */  /* Master */   'node' => 'node',
  /* report_watchdog */  /* Master */   'page not found' => 'page not found',
  /* report_watchdog */  /* Master */   'panelizer' => 'panelizer',
  /* report_watchdog */  /* Master */   'php' => 'php',
  /* report_watchdog */  /* Master */   'role_watchdog' => 'role_watchdog',
  /* report_watchdog */  /* Master */   'rules' => 'rules',
  /* report_watchdog */  /* Master */   'search_api_solr' => 'search_api_solr',
  /* report_watchdog */  /* Master */   'sms' => 'sms',
  /* report_watchdog */  /* Master */   'system' => 'system',
  /* report_watchdog */  /* Master */   'taxonomy' => 'taxonomy',
  /* report_watchdog */  /* Master */   'user' => 'user',
  /* report_watchdog */  /* Master */ );
  /* report_watchdog */  /* Master */ $handler->display->display_options['filters']['type']['exposed'] = TRUE;
  /* report_watchdog */  /* Master */ $handler->display->display_options['filters']['type']['expose']['operator_id'] = 'type_op';
  /* report_watchdog */  /* Master */ $handler->display->display_options['filters']['type']['expose']['label'] = 'Type';
  /* report_watchdog */  /* Master */ $handler->display->display_options['filters']['type']['expose']['use_operator'] = TRUE;
  /* report_watchdog */  /* Master */ $handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
  /* report_watchdog */  /* Master */ $handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';
  /* report_watchdog */  /* Master */ $handler->display->display_options['filters']['type']['expose']['multiple'] = TRUE;
  /* report_watchdog */  /* Master */ $handler->display->display_options['filters']['type']['expose']['remember_roles'] = array(
  /* report_watchdog */  /* Master */   2 => '2',
  /* report_watchdog */  /* Master */   1 => 0,
  /* report_watchdog */  /* Master */   9 => 0,
  /* report_watchdog */  /* Master */   10 => 0,
  /* report_watchdog */  /* Master */   11 => 0,
  /* report_watchdog */  /* Master */ );
  /* report_watchdog */  /* Master */ /* Filter criterion: Watchdog: Variables */
  /* report_watchdog */  /* Master */ $handler->display->display_options['filters']['variables']['id'] = 'variables';
  /* report_watchdog */  /* Master */ $handler->display->display_options['filters']['variables']['table'] = 'watchdog';
  /* report_watchdog */  /* Master */ $handler->display->display_options['filters']['variables']['field'] = 'variables';
  /* report_watchdog */  /* Master */ $handler->display->display_options['filters']['variables']['operator'] = 'contains';
  /* report_watchdog */  /* Master */ $handler->display->display_options['filters']['variables']['exposed'] = TRUE;
  /* report_watchdog */  /* Master */ $handler->display->display_options['filters']['variables']['expose']['operator_id'] = 'variables_op';
  /* report_watchdog */  /* Master */ $handler->display->display_options['filters']['variables']['expose']['label'] = 'Variables';
  /* report_watchdog */  /* Master */ $handler->display->display_options['filters']['variables']['expose']['use_operator'] = TRUE;
  /* report_watchdog */  /* Master */ $handler->display->display_options['filters']['variables']['expose']['operator'] = 'variables_op';
  /* report_watchdog */  /* Master */ $handler->display->display_options['filters']['variables']['expose']['identifier'] = 'variables';
  /* report_watchdog */  /* Master */ $handler->display->display_options['filters']['variables']['expose']['remember_roles'] = array(
  /* report_watchdog */  /* Master */   2 => '2',
  /* report_watchdog */  /* Master */   1 => 0,
  /* report_watchdog */  /* Master */   9 => 0,
  /* report_watchdog */  /* Master */   10 => 0,
  /* report_watchdog */  /* Master */   11 => 0,
  /* report_watchdog */  /* Master */ );
  /* report_watchdog */  /* Master */ $handler->display->display_options['filters']['variables']['expose']['autocomplete_items'] = '10';
  /* report_watchdog */  /* Master */ $handler->display->display_options['filters']['variables']['expose']['autocomplete_min_chars'] = '0';
  /* report_watchdog */  /* Master */ $handler->display->display_options['filters']['variables']['expose']['autocomplete_field'] = 'variables';
  /* report_watchdog */  /* Master */ $handler->display->display_options['filters']['variables']['expose']['autocomplete_raw_suggestion'] = 1;
  /* report_watchdog */  /* Master */ $handler->display->display_options['filters']['variables']['expose']['autocomplete_raw_dropdown'] = 1;
  /* report_watchdog */  /* Master */ $handler->display->display_options['filters']['variables']['expose']['autocomplete_dependent'] = 0;

  /* report_watchdog */ /* Display: Page */
  /* report_watchdog */  /* Page */ $handler = $view->new_display('page', 'Page', 'page');
  /* report_watchdog */  /* Page */ $handler->display->display_options['path'] = 'admin/manage/report-watchdog';
  /* report_watchdog */ $translatables['report_watchdog'] = array(
  /* report_watchdog */   t('Master'),
  /* report_watchdog */   t('Report: Watchdog'),
  /* report_watchdog */   t('more'),
  /* report_watchdog */   t('Apply'),
  /* report_watchdog */   t('Reset'),
  /* report_watchdog */   t('Sort by'),
  /* report_watchdog */   t('Asc'),
  /* report_watchdog */   t('Desc'),
  /* report_watchdog */   t('Items per page'),
  /* report_watchdog */   t('- All -'),
  /* report_watchdog */   t('Offset'),
  /* report_watchdog */   t('« first'),
  /* report_watchdog */   t('‹ previous'),
  /* report_watchdog */   t('next ›'),
  /* report_watchdog */   t('last »'),
  /* report_watchdog */   t('Timestamp'),
  /* report_watchdog */   t('Severity'),
  /* report_watchdog */   t('Type'),
  /* report_watchdog */   t('Hostname'),
  /* report_watchdog */   t('Message'),
  /* report_watchdog */   t('Variables'),
  /* report_watchdog */   t('Location'),
  /* report_watchdog */   t('Referrer'),
  /* report_watchdog */   t('Link'),
  /* report_watchdog */   t('Page'),
  /* report_watchdog */ );
  $export['report_watchdog'] = $view;

  /* user_charts */ $view = new view();
  /* user_charts */ $view->name = 'user_charts';
  /* user_charts */ $view->description = '';
  /* user_charts */ $view->tag = 'default';
  /* user_charts */ $view->base_table = 'users';
  /* user_charts */ $view->human_name = 'User Charts';
  /* user_charts */ $view->core = 7;
  /* user_charts */ $view->api_version = '3.0';
  /* user_charts */ $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* user_charts */ /* Display: Master */
  /* user_charts */  /* Master */ $handler = $view->new_display('default', 'Master', 'default');
  /* user_charts */  /* Master */ $handler->display->display_options['use_more_always'] = FALSE;
  /* user_charts */  /* Master */ $handler->display->display_options['group_by'] = TRUE;
  /* user_charts */  /* Master */ $handler->display->display_options['access']['type'] = 'perm';
  /* user_charts */  /* Master */ $handler->display->display_options['access']['perm'] = 'access user profiles';
  /* user_charts */  /* Master */ $handler->display->display_options['cache']['type'] = 'none';
  /* user_charts */  /* Master */ $handler->display->display_options['query']['type'] = 'views_query';
  /* user_charts */  /* Master */ $handler->display->display_options['exposed_form']['type'] = 'basic';
  /* user_charts */  /* Master */ $handler->display->display_options['pager']['type'] = 'none';
  /* user_charts */  /* Master */ $handler->display->display_options['pager']['options']['offset'] = '0';
  /* user_charts */  /* Master */ $handler->display->display_options['style_plugin'] = 'table';
  /* user_charts */  /* Master */ $handler->display->display_options['style_options']['columns'] = array(
  /* user_charts */  /* Master */   'name' => 'name',
  /* user_charts */  /* Master */ );
  /* user_charts */  /* Master */ $handler->display->display_options['style_options']['default'] = '-1';
  /* user_charts */  /* Master */ $handler->display->display_options['style_options']['info'] = array(
  /* user_charts */  /* Master */   'name' => array(
  /* user_charts */  /* Master */     'sortable' => 0,
  /* user_charts */  /* Master */     'default_sort_order' => 'asc',
  /* user_charts */  /* Master */     'align' => '',
  /* user_charts */  /* Master */     'separator' => '',
  /* user_charts */  /* Master */     'empty_column' => 0,
  /* user_charts */  /* Master */   ),
  /* user_charts */  /* Master */ );
  /* user_charts */  /* Master */ /* Field: User: COCOM Region */
  /* user_charts */  /* Master */ $handler->display->display_options['fields']['field_cocom_region']['id'] = 'field_cocom_region';
  /* user_charts */  /* Master */ $handler->display->display_options['fields']['field_cocom_region']['table'] = 'field_data_field_cocom_region';
  /* user_charts */  /* Master */ $handler->display->display_options['fields']['field_cocom_region']['field'] = 'field_cocom_region';
  /* user_charts */  /* Master */ $handler->display->display_options['fields']['field_cocom_region']['label'] = 'Region';
  /* user_charts */  /* Master */ $handler->display->display_options['fields']['field_cocom_region']['element_label_colon'] = FALSE;
  /* user_charts */  /* Master */ $handler->display->display_options['fields']['field_cocom_region']['element_default_classes'] = FALSE;
  /* user_charts */  /* Master */ $handler->display->display_options['fields']['field_cocom_region']['empty'] = 'Region not set';
  /* user_charts */  /* Master */ $handler->display->display_options['fields']['field_cocom_region']['empty_zero'] = TRUE;
  /* user_charts */  /* Master */ $handler->display->display_options['fields']['field_cocom_region']['hide_alter_empty'] = FALSE;
  /* user_charts */  /* Master */ $handler->display->display_options['fields']['field_cocom_region']['settings'] = array(
  /* user_charts */  /* Master */   'field_formatter_class' => '',
  /* user_charts */  /* Master */ );
  /* user_charts */  /* Master */ /* Field: COUNT(User: Uid) */
  /* user_charts */  /* Master */ $handler->display->display_options['fields']['uid']['id'] = 'uid';
  /* user_charts */  /* Master */ $handler->display->display_options['fields']['uid']['table'] = 'users';
  /* user_charts */  /* Master */ $handler->display->display_options['fields']['uid']['field'] = 'uid';
  /* user_charts */  /* Master */ $handler->display->display_options['fields']['uid']['group_type'] = 'count';
  /* user_charts */  /* Master */ /* Sort criterion: User: COCOM Region (field_cocom_region) */
  /* user_charts */  /* Master */ $handler->display->display_options['sorts']['field_cocom_region_value']['id'] = 'field_cocom_region_value';
  /* user_charts */  /* Master */ $handler->display->display_options['sorts']['field_cocom_region_value']['table'] = 'field_data_field_cocom_region';
  /* user_charts */  /* Master */ $handler->display->display_options['sorts']['field_cocom_region_value']['field'] = 'field_cocom_region_value';
  /* user_charts */  /* Master */ /* Contextual filter: OG membership: Group ID */
  /* user_charts */  /* Master */ $handler->display->display_options['arguments']['gid']['id'] = 'gid';
  /* user_charts */  /* Master */ $handler->display->display_options['arguments']['gid']['table'] = 'og_membership';
  /* user_charts */  /* Master */ $handler->display->display_options['arguments']['gid']['field'] = 'gid';
  /* user_charts */  /* Master */ $handler->display->display_options['arguments']['gid']['default_action'] = 'default';
  /* user_charts */  /* Master */ $handler->display->display_options['arguments']['gid']['default_argument_type'] = 'node';
  /* user_charts */  /* Master */ $handler->display->display_options['arguments']['gid']['summary']['number_of_records'] = '0';
  /* user_charts */  /* Master */ $handler->display->display_options['arguments']['gid']['summary']['format'] = 'default_summary';
  /* user_charts */  /* Master */ $handler->display->display_options['arguments']['gid']['summary_options']['items_per_page'] = '25';
  /* user_charts */  /* Master */ /* Filter criterion: User: Active */
  /* user_charts */  /* Master */ $handler->display->display_options['filters']['status']['id'] = 'status';
  /* user_charts */  /* Master */ $handler->display->display_options['filters']['status']['table'] = 'users';
  /* user_charts */  /* Master */ $handler->display->display_options['filters']['status']['field'] = 'status';
  /* user_charts */  /* Master */ $handler->display->display_options['filters']['status']['value'] = '1';
  /* user_charts */  /* Master */ $handler->display->display_options['filters']['status']['group'] = 1;
  /* user_charts */  /* Master */ $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* user_charts */ /* Display: Content pane */
  /* user_charts */  /* Content pane */ $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  /* user_charts */  /* Content pane */ $handler->display->display_options['defaults']['title'] = FALSE;
  /* user_charts */  /* Content pane */ $handler->display->display_options['title'] = 'Members by region';
  /* user_charts */  /* Content pane */ $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  /* user_charts */  /* Content pane */ $handler->display->display_options['style_plugin'] = 'chart';
  /* user_charts */  /* Content pane */ $handler->display->display_options['style_options']['library'] = '';
  /* user_charts */  /* Content pane */ $handler->display->display_options['style_options']['label_field'] = 'field_cocom_region';
  /* user_charts */  /* Content pane */ $handler->display->display_options['style_options']['data_fields'] = array(
  /* user_charts */  /* Content pane */   'uid' => 'uid',
  /* user_charts */  /* Content pane */   'field_cocom_region' => 0,
  /* user_charts */  /* Content pane */   'field_cocom_region_1' => 0,
  /* user_charts */  /* Content pane */ );
  /* user_charts */  /* Content pane */ $handler->display->display_options['style_options']['field_colors'] = array(
  /* user_charts */  /* Content pane */   'field_cocom_region' => '#2f7ed8',
  /* user_charts */  /* Content pane */   'field_cocom_region_1' => '#0d233a',
  /* user_charts */  /* Content pane */   'uid' => '#8bbc21',
  /* user_charts */  /* Content pane */ );
  /* user_charts */  /* Content pane */ $handler->display->display_options['style_options']['width'] = '';
  /* user_charts */  /* Content pane */ $handler->display->display_options['style_options']['height'] = '';
  /* user_charts */  /* Content pane */ $handler->display->display_options['style_options']['xaxis_labels_rotation'] = '0';
  /* user_charts */  /* Content pane */ $handler->display->display_options['style_options']['yaxis_labels_rotation'] = '0';
  /* user_charts */  /* Content pane */ $handler->display->display_options['defaults']['style_options'] = FALSE;
  /* user_charts */  /* Content pane */ $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  /* user_charts */  /* Content pane */ $handler->display->display_options['defaults']['row_options'] = FALSE;
  /* user_charts */ $translatables['user_charts'] = array(
  /* user_charts */   t('Master'),
  /* user_charts */   t('more'),
  /* user_charts */   t('Apply'),
  /* user_charts */   t('Reset'),
  /* user_charts */   t('Sort by'),
  /* user_charts */   t('Asc'),
  /* user_charts */   t('Desc'),
  /* user_charts */   t('Region'),
  /* user_charts */   t('Region not set'),
  /* user_charts */   t('Uid'),
  /* user_charts */   t('All'),
  /* user_charts */   t('Content pane'),
  /* user_charts */   t('Members by region'),
  /* user_charts */   t('View panes'),
  /* user_charts */ );
  $export['user_charts'] = $view;

  /* userpoints_by_group */ $view = new view();
  /* userpoints_by_group */ $view->name = 'userpoints_by_group';
  /* userpoints_by_group */ $view->description = '';
  /* userpoints_by_group */ $view->tag = 'default';
  /* userpoints_by_group */ $view->base_table = 'users';
  /* userpoints_by_group */ $view->human_name = 'Userpoints by Group';
  /* userpoints_by_group */ $view->core = 7;
  /* userpoints_by_group */ $view->api_version = '3.0';
  /* userpoints_by_group */ $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* userpoints_by_group */ /* Display: Master */
  /* userpoints_by_group */  /* Master */ $handler = $view->new_display('default', 'Master', 'default');
  /* userpoints_by_group */  /* Master */ $handler->display->display_options['use_more_always'] = FALSE;
  /* userpoints_by_group */  /* Master */ $handler->display->display_options['access']['type'] = 'perm';
  /* userpoints_by_group */  /* Master */ $handler->display->display_options['access']['perm'] = 'access user profiles';
  /* userpoints_by_group */  /* Master */ $handler->display->display_options['cache']['type'] = 'none';
  /* userpoints_by_group */  /* Master */ $handler->display->display_options['query']['type'] = 'views_query';
  /* userpoints_by_group */  /* Master */ $handler->display->display_options['exposed_form']['type'] = 'basic';
  /* userpoints_by_group */  /* Master */ $handler->display->display_options['pager']['type'] = 'none';
  /* userpoints_by_group */  /* Master */ $handler->display->display_options['pager']['options']['offset'] = '0';
  /* userpoints_by_group */  /* Master */ $handler->display->display_options['style_plugin'] = 'table';
  /* userpoints_by_group */  /* Master */ $handler->display->display_options['style_options']['columns'] = array(
  /* userpoints_by_group */  /* Master */   'field_name_last' => 'field_name_last',
  /* userpoints_by_group */  /* Master */   'field_name_first' => 'field_name_first',
  /* userpoints_by_group */  /* Master */   'points' => 'points',
  /* userpoints_by_group */  /* Master */ );
  /* userpoints_by_group */  /* Master */ $handler->display->display_options['style_options']['default'] = '-1';
  /* userpoints_by_group */  /* Master */ $handler->display->display_options['style_options']['info'] = array(
  /* userpoints_by_group */  /* Master */   'field_name_last' => array(
  /* userpoints_by_group */  /* Master */     'sortable' => 0,
  /* userpoints_by_group */  /* Master */     'default_sort_order' => 'asc',
  /* userpoints_by_group */  /* Master */     'align' => '',
  /* userpoints_by_group */  /* Master */     'separator' => '',
  /* userpoints_by_group */  /* Master */     'empty_column' => 0,
  /* userpoints_by_group */  /* Master */   ),
  /* userpoints_by_group */  /* Master */   'field_name_first' => array(
  /* userpoints_by_group */  /* Master */     'sortable' => 0,
  /* userpoints_by_group */  /* Master */     'default_sort_order' => 'asc',
  /* userpoints_by_group */  /* Master */     'align' => '',
  /* userpoints_by_group */  /* Master */     'separator' => '',
  /* userpoints_by_group */  /* Master */     'empty_column' => 0,
  /* userpoints_by_group */  /* Master */   ),
  /* userpoints_by_group */  /* Master */   'points' => array(
  /* userpoints_by_group */  /* Master */     'sortable' => 0,
  /* userpoints_by_group */  /* Master */     'default_sort_order' => 'asc',
  /* userpoints_by_group */  /* Master */     'align' => '',
  /* userpoints_by_group */  /* Master */     'separator' => '',
  /* userpoints_by_group */  /* Master */     'empty_column' => 0,
  /* userpoints_by_group */  /* Master */   ),
  /* userpoints_by_group */  /* Master */ );
  /* userpoints_by_group */  /* Master */ /* Relationship: Userpoints total: User */
  /* userpoints_by_group */  /* Master */ $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  /* userpoints_by_group */  /* Master */ $handler->display->display_options['relationships']['uid']['table'] = 'userpoints_total';
  /* userpoints_by_group */  /* Master */ $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* userpoints_by_group */  /* Master */ /* Field: Field: Family Name */
  /* userpoints_by_group */  /* Master */ $handler->display->display_options['fields']['field_name_last']['id'] = 'field_name_last';
  /* userpoints_by_group */  /* Master */ $handler->display->display_options['fields']['field_name_last']['table'] = 'field_data_field_name_last';
  /* userpoints_by_group */  /* Master */ $handler->display->display_options['fields']['field_name_last']['field'] = 'field_name_last';
  /* userpoints_by_group */  /* Master */ $handler->display->display_options['fields']['field_name_last']['label'] = '';
  /* userpoints_by_group */  /* Master */ $handler->display->display_options['fields']['field_name_last']['exclude'] = TRUE;
  /* userpoints_by_group */  /* Master */ $handler->display->display_options['fields']['field_name_last']['element_label_colon'] = FALSE;
  /* userpoints_by_group */  /* Master */ $handler->display->display_options['fields']['field_name_last']['element_default_classes'] = FALSE;
  /* userpoints_by_group */  /* Master */ $handler->display->display_options['fields']['field_name_last']['type'] = 'text_plain';
  /* userpoints_by_group */  /* Master */ $handler->display->display_options['fields']['field_name_last']['settings'] = array(
  /* userpoints_by_group */  /* Master */   'field_formatter_class' => '',
  /* userpoints_by_group */  /* Master */ );
  /* userpoints_by_group */  /* Master */ /* Field: Field: Given Name */
  /* userpoints_by_group */  /* Master */ $handler->display->display_options['fields']['field_name_first']['id'] = 'field_name_first';
  /* userpoints_by_group */  /* Master */ $handler->display->display_options['fields']['field_name_first']['table'] = 'field_data_field_name_first';
  /* userpoints_by_group */  /* Master */ $handler->display->display_options['fields']['field_name_first']['field'] = 'field_name_first';
  /* userpoints_by_group */  /* Master */ $handler->display->display_options['fields']['field_name_first']['label'] = '';
  /* userpoints_by_group */  /* Master */ $handler->display->display_options['fields']['field_name_first']['alter']['alter_text'] = TRUE;
  /* userpoints_by_group */  /* Master */ $handler->display->display_options['fields']['field_name_first']['alter']['text'] = '[field_name_first] [field_name_last]';
  /* userpoints_by_group */  /* Master */ $handler->display->display_options['fields']['field_name_first']['element_label_colon'] = FALSE;
  /* userpoints_by_group */  /* Master */ $handler->display->display_options['fields']['field_name_first']['element_default_classes'] = FALSE;
  /* userpoints_by_group */  /* Master */ $handler->display->display_options['fields']['field_name_first']['hide_empty'] = TRUE;
  /* userpoints_by_group */  /* Master */ $handler->display->display_options['fields']['field_name_first']['type'] = 'text_plain';
  /* userpoints_by_group */  /* Master */ $handler->display->display_options['fields']['field_name_first']['settings'] = array(
  /* userpoints_by_group */  /* Master */   'field_formatter_class' => '',
  /* userpoints_by_group */  /* Master */ );
  /* userpoints_by_group */  /* Master */ /* Field: Userpoints total: Current total points */
  /* userpoints_by_group */  /* Master */ $handler->display->display_options['fields']['points']['id'] = 'points';
  /* userpoints_by_group */  /* Master */ $handler->display->display_options['fields']['points']['table'] = 'userpoints_total';
  /* userpoints_by_group */  /* Master */ $handler->display->display_options['fields']['points']['field'] = 'points';
  /* userpoints_by_group */  /* Master */ $handler->display->display_options['fields']['points']['label'] = 'User points';
  /* userpoints_by_group */  /* Master */ $handler->display->display_options['fields']['points']['element_label_colon'] = FALSE;
  /* userpoints_by_group */  /* Master */ /* Sort criterion: User: Created date */
  /* userpoints_by_group */  /* Master */ $handler->display->display_options['sorts']['created']['id'] = 'created';
  /* userpoints_by_group */  /* Master */ $handler->display->display_options['sorts']['created']['table'] = 'users';
  /* userpoints_by_group */  /* Master */ $handler->display->display_options['sorts']['created']['field'] = 'created';
  /* userpoints_by_group */  /* Master */ $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* userpoints_by_group */  /* Master */ /* Contextual filter: OG membership: Group ID */
  /* userpoints_by_group */  /* Master */ $handler->display->display_options['arguments']['gid']['id'] = 'gid';
  /* userpoints_by_group */  /* Master */ $handler->display->display_options['arguments']['gid']['table'] = 'og_membership';
  /* userpoints_by_group */  /* Master */ $handler->display->display_options['arguments']['gid']['field'] = 'gid';
  /* userpoints_by_group */  /* Master */ $handler->display->display_options['arguments']['gid']['default_action'] = 'default';
  /* userpoints_by_group */  /* Master */ $handler->display->display_options['arguments']['gid']['default_argument_type'] = 'node';
  /* userpoints_by_group */  /* Master */ $handler->display->display_options['arguments']['gid']['summary']['number_of_records'] = '0';
  /* userpoints_by_group */  /* Master */ $handler->display->display_options['arguments']['gid']['summary']['format'] = 'default_summary';
  /* userpoints_by_group */  /* Master */ $handler->display->display_options['arguments']['gid']['summary_options']['items_per_page'] = '25';
  /* userpoints_by_group */  /* Master */ $handler->display->display_options['arguments']['gid']['specify_validation'] = TRUE;
  /* userpoints_by_group */  /* Master */ /* Filter criterion: User: Active */
  /* userpoints_by_group */  /* Master */ $handler->display->display_options['filters']['status']['id'] = 'status';
  /* userpoints_by_group */  /* Master */ $handler->display->display_options['filters']['status']['table'] = 'users';
  /* userpoints_by_group */  /* Master */ $handler->display->display_options['filters']['status']['field'] = 'status';
  /* userpoints_by_group */  /* Master */ $handler->display->display_options['filters']['status']['value'] = '1';
  /* userpoints_by_group */  /* Master */ $handler->display->display_options['filters']['status']['group'] = 1;
  /* userpoints_by_group */  /* Master */ $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* userpoints_by_group */ /* Display: Content pane */
  /* userpoints_by_group */  /* Content pane */ $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  /* userpoints_by_group */  /* Content pane */ $handler->display->display_options['defaults']['title'] = FALSE;
  /* userpoints_by_group */  /* Content pane */ $handler->display->display_options['title'] = 'Group\'s user engagement';
  /* userpoints_by_group */  /* Content pane */ $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  /* userpoints_by_group */  /* Content pane */ $handler->display->display_options['style_plugin'] = 'chart';
  /* userpoints_by_group */  /* Content pane */ $handler->display->display_options['style_options']['type'] = 'bar';
  /* userpoints_by_group */  /* Content pane */ $handler->display->display_options['style_options']['library'] = '';
  /* userpoints_by_group */  /* Content pane */ $handler->display->display_options['style_options']['label_field'] = 'field_name_first';
  /* userpoints_by_group */  /* Content pane */ $handler->display->display_options['style_options']['data_fields'] = array(
  /* userpoints_by_group */  /* Content pane */   'points' => 'points',
  /* userpoints_by_group */  /* Content pane */   'field_name_last' => 0,
  /* userpoints_by_group */  /* Content pane */   'field_name_first' => 0,
  /* userpoints_by_group */  /* Content pane */ );
  /* userpoints_by_group */  /* Content pane */ $handler->display->display_options['style_options']['field_colors'] = array(
  /* userpoints_by_group */  /* Content pane */   'field_name_last' => '#2f7ed8',
  /* userpoints_by_group */  /* Content pane */   'field_name_first' => '#0d233a',
  /* userpoints_by_group */  /* Content pane */   'points' => '#0433ff',
  /* userpoints_by_group */  /* Content pane */ );
  /* userpoints_by_group */  /* Content pane */ $handler->display->display_options['style_options']['title_position'] = '';
  /* userpoints_by_group */  /* Content pane */ $handler->display->display_options['style_options']['legend_position'] = 'top';
  /* userpoints_by_group */  /* Content pane */ $handler->display->display_options['style_options']['width'] = '';
  /* userpoints_by_group */  /* Content pane */ $handler->display->display_options['style_options']['height'] = '';
  /* userpoints_by_group */  /* Content pane */ $handler->display->display_options['style_options']['xaxis_labels_rotation'] = '0';
  /* userpoints_by_group */  /* Content pane */ $handler->display->display_options['style_options']['yaxis_min'] = '1';
  /* userpoints_by_group */  /* Content pane */ $handler->display->display_options['style_options']['yaxis_decimal_count'] = '1';
  /* userpoints_by_group */  /* Content pane */ $handler->display->display_options['style_options']['yaxis_labels_rotation'] = '0';
  /* userpoints_by_group */  /* Content pane */ $handler->display->display_options['defaults']['style_options'] = FALSE;
  /* userpoints_by_group */  /* Content pane */ $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  /* userpoints_by_group */  /* Content pane */ $handler->display->display_options['defaults']['row_options'] = FALSE;
  /* userpoints_by_group */ $translatables['userpoints_by_group'] = array(
  /* userpoints_by_group */   t('Master'),
  /* userpoints_by_group */   t('more'),
  /* userpoints_by_group */   t('Apply'),
  /* userpoints_by_group */   t('Reset'),
  /* userpoints_by_group */   t('Sort by'),
  /* userpoints_by_group */   t('Asc'),
  /* userpoints_by_group */   t('Desc'),
  /* userpoints_by_group */   t('Users'),
  /* userpoints_by_group */   t('[field_name_first] [field_name_last]'),
  /* userpoints_by_group */   t('User points'),
  /* userpoints_by_group */   t('.'),
  /* userpoints_by_group */   t(','),
  /* userpoints_by_group */   t('All'),
  /* userpoints_by_group */   t('Content pane'),
  /* userpoints_by_group */   t('Group\'s user engagement'),
  /* userpoints_by_group */   t('View panes'),
  /* userpoints_by_group */ );
  $export['userpoints_by_group'] = $view;

  return $export;
}
