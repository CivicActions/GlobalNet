<?php
/**
 * @file
 * gn2_tech_support.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function gn2_tech_support_views_default_views() {
  $export = array();

  /* tech_support */ $view = new view();
  /* tech_support */ $view->name = 'tech_support';
  /* tech_support */ $view->description = '';
  /* tech_support */ $view->tag = 'default';
  /* tech_support */ $view->base_table = 'entityform';
  /* tech_support */ $view->human_name = 'Tech Support';
  /* tech_support */ $view->core = 7;
  /* tech_support */ $view->api_version = '3.0';
  /* tech_support */ $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* tech_support */ /* Display: Master */
  /* tech_support */  /* Master */ $handler = $view->new_display('default', 'Master', 'default');
  /* tech_support */  /* Master */ $handler->display->display_options['title'] = 'Tech Support Review';
  /* tech_support */  /* Master */ $handler->display->display_options['use_more_always'] = FALSE;
  /* tech_support */  /* Master */ $handler->display->display_options['access']['type'] = 'role';
  /* tech_support */  /* Master */ $handler->display->display_options['access']['role'] = array(
  /* tech_support */  /* Master */   9 => '9',
  /* tech_support */  /* Master */ );
  /* tech_support */  /* Master */ $handler->display->display_options['cache']['type'] = 'none';
  /* tech_support */  /* Master */ $handler->display->display_options['query']['type'] = 'views_query';
  /* tech_support */  /* Master */ $handler->display->display_options['query']['options']['distinct'] = TRUE;
  /* tech_support */  /* Master */ $handler->display->display_options['exposed_form']['type'] = 'basic';
  /* tech_support */  /* Master */ $handler->display->display_options['pager']['type'] = 'full';
  /* tech_support */  /* Master */ $handler->display->display_options['style_plugin'] = 'table';
  /* tech_support */  /* Master */ $handler->display->display_options['style_options']['columns'] = array(
  /* tech_support */  /* Master */   'views_bulk_operations' => 'views_bulk_operations',
  /* tech_support */  /* Master */   'field_name_last' => 'field_name_last',
  /* tech_support */  /* Master */   'field_name_first' => 'field_name_first',
  /* tech_support */  /* Master */   'field_email' => 'field_email',
  /* tech_support */  /* Master */   'field_organization' => 'field_organization',
  /* tech_support */  /* Master */   'created' => 'created',
  /* tech_support */  /* Master */   'nothing' => 'nothing',
  /* tech_support */  /* Master */   'field_how_can_we_help_you_' => 'field_how_can_we_help_you_',
  /* tech_support */  /* Master */   'field_anything_else' => 'field_anything_else',
  /* tech_support */  /* Master */   'field_status' => 'field_status',
  /* tech_support */  /* Master */   'field_notified_to' => 'field_notified_to',
  /* tech_support */  /* Master */ );
  /* tech_support */  /* Master */ $handler->display->display_options['style_options']['default'] = 'created';
  /* tech_support */  /* Master */ $handler->display->display_options['style_options']['info'] = array(
  /* tech_support */  /* Master */   'views_bulk_operations' => array(
  /* tech_support */  /* Master */     'align' => '',
  /* tech_support */  /* Master */     'separator' => '',
  /* tech_support */  /* Master */     'empty_column' => 0,
  /* tech_support */  /* Master */   ),
  /* tech_support */  /* Master */   'field_name_last' => array(
  /* tech_support */  /* Master */     'sortable' => 1,
  /* tech_support */  /* Master */     'default_sort_order' => 'asc',
  /* tech_support */  /* Master */     'align' => '',
  /* tech_support */  /* Master */     'separator' => '',
  /* tech_support */  /* Master */     'empty_column' => 0,
  /* tech_support */  /* Master */   ),
  /* tech_support */  /* Master */   'field_name_first' => array(
  /* tech_support */  /* Master */     'sortable' => 0,
  /* tech_support */  /* Master */     'default_sort_order' => 'asc',
  /* tech_support */  /* Master */     'align' => '',
  /* tech_support */  /* Master */     'separator' => '',
  /* tech_support */  /* Master */     'empty_column' => 0,
  /* tech_support */  /* Master */   ),
  /* tech_support */  /* Master */   'field_email' => array(
  /* tech_support */  /* Master */     'sortable' => 0,
  /* tech_support */  /* Master */     'default_sort_order' => 'asc',
  /* tech_support */  /* Master */     'align' => '',
  /* tech_support */  /* Master */     'separator' => '',
  /* tech_support */  /* Master */     'empty_column' => 0,
  /* tech_support */  /* Master */   ),
  /* tech_support */  /* Master */   'field_organization' => array(
  /* tech_support */  /* Master */     'sortable' => 1,
  /* tech_support */  /* Master */     'default_sort_order' => 'asc',
  /* tech_support */  /* Master */     'align' => '',
  /* tech_support */  /* Master */     'separator' => '',
  /* tech_support */  /* Master */     'empty_column' => 0,
  /* tech_support */  /* Master */   ),
  /* tech_support */  /* Master */   'created' => array(
  /* tech_support */  /* Master */     'sortable' => 1,
  /* tech_support */  /* Master */     'default_sort_order' => 'desc',
  /* tech_support */  /* Master */     'align' => '',
  /* tech_support */  /* Master */     'separator' => '',
  /* tech_support */  /* Master */     'empty_column' => 0,
  /* tech_support */  /* Master */   ),
  /* tech_support */  /* Master */   'nothing' => array(
  /* tech_support */  /* Master */     'align' => '',
  /* tech_support */  /* Master */     'separator' => '',
  /* tech_support */  /* Master */     'empty_column' => 0,
  /* tech_support */  /* Master */   ),
  /* tech_support */  /* Master */   'field_how_can_we_help_you_' => array(
  /* tech_support */  /* Master */     'sortable' => 0,
  /* tech_support */  /* Master */     'default_sort_order' => 'asc',
  /* tech_support */  /* Master */     'align' => '',
  /* tech_support */  /* Master */     'separator' => '',
  /* tech_support */  /* Master */     'empty_column' => 0,
  /* tech_support */  /* Master */   ),
  /* tech_support */  /* Master */   'field_anything_else' => array(
  /* tech_support */  /* Master */     'sortable' => 0,
  /* tech_support */  /* Master */     'default_sort_order' => 'asc',
  /* tech_support */  /* Master */     'align' => '',
  /* tech_support */  /* Master */     'separator' => '',
  /* tech_support */  /* Master */     'empty_column' => 0,
  /* tech_support */  /* Master */   ),
  /* tech_support */  /* Master */   'field_status' => array(
  /* tech_support */  /* Master */     'sortable' => 1,
  /* tech_support */  /* Master */     'default_sort_order' => 'asc',
  /* tech_support */  /* Master */     'align' => '',
  /* tech_support */  /* Master */     'separator' => '',
  /* tech_support */  /* Master */     'empty_column' => 0,
  /* tech_support */  /* Master */   ),
  /* tech_support */  /* Master */   'field_notified_to' => array(
  /* tech_support */  /* Master */     'sortable' => 0,
  /* tech_support */  /* Master */     'default_sort_order' => 'asc',
  /* tech_support */  /* Master */     'align' => '',
  /* tech_support */  /* Master */     'separator' => '',
  /* tech_support */  /* Master */     'empty_column' => 0,
  /* tech_support */  /* Master */   ),
  /* tech_support */  /* Master */ );
  /* tech_support */  /* Master */ /* Header: Global: Text area */
  /* tech_support */  /* Master */ $handler->display->display_options['header']['area']['id'] = 'area';
  /* tech_support */  /* Master */ $handler->display->display_options['header']['area']['table'] = 'views';
  /* tech_support */  /* Master */ $handler->display->display_options['header']['area']['field'] = 'area';
  /* tech_support */  /* Master */ $handler->display->display_options['header']['area']['content'] = '<a href="/admin/tech_support_revision/export/csv">Export to CSV</a>';
  /* tech_support */  /* Master */ $handler->display->display_options['header']['area']['format'] = 'filtered_html';
  /* tech_support */  /* Master */ /* Relationship: Entity Reference: Referenced Entity */
  /* tech_support */  /* Master */ $handler->display->display_options['relationships']['field_organization_target_id']['id'] = 'field_organization_target_id';
  /* tech_support */  /* Master */ $handler->display->display_options['relationships']['field_organization_target_id']['table'] = 'field_data_field_organization';
  /* tech_support */  /* Master */ $handler->display->display_options['relationships']['field_organization_target_id']['field'] = 'field_organization_target_id';
  /* tech_support */  /* Master */ /* Relationship: Entity Reference: Referencing entity */
  /* tech_support */  /* Master */ $handler->display->display_options['relationships']['reverse_field_organization_entityform']['id'] = 'reverse_field_organization_entityform';
  /* tech_support */  /* Master */ $handler->display->display_options['relationships']['reverse_field_organization_entityform']['table'] = 'node';
  /* tech_support */  /* Master */ $handler->display->display_options['relationships']['reverse_field_organization_entityform']['field'] = 'reverse_field_organization_entityform';
  /* tech_support */  /* Master */ $handler->display->display_options['relationships']['reverse_field_organization_entityform']['relationship'] = 'field_organization_target_id';
  /* tech_support */  /* Master */ /* Relationship: Entityform Submission: User uid */
  /* tech_support */  /* Master */ $handler->display->display_options['relationships']['user']['id'] = 'user';
  /* tech_support */  /* Master */ $handler->display->display_options['relationships']['user']['table'] = 'entityform';
  /* tech_support */  /* Master */ $handler->display->display_options['relationships']['user']['field'] = 'user';
  /* tech_support */  /* Master */ /* Relationship: User: Content authored */
  /* tech_support */  /* Master */ $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  /* tech_support */  /* Master */ $handler->display->display_options['relationships']['uid']['table'] = 'users';
  /* tech_support */  /* Master */ $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* tech_support */  /* Master */ $handler->display->display_options['relationships']['uid']['relationship'] = 'user';
  /* tech_support */  /* Master */ /* Field: Bulk operations: Entityform Submission */
  /* tech_support */  /* Master */ $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  /* tech_support */  /* Master */ $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'entityform';
  /* tech_support */  /* Master */ $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  /* tech_support */  /* Master */ $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '0';
  /* tech_support */  /* Master */ $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  /* tech_support */  /* Master */ $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['row_clickable'] = 1;
  /* tech_support */  /* Master */ $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  /* tech_support */  /* Master */ $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  /* tech_support */  /* Master */ $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
  /* tech_support */  /* Master */   'action::views_bulk_operations_modify_action' => array(
  /* tech_support */  /* Master */     'selected' => 1,
  /* tech_support */  /* Master */     'postpone_processing' => 0,
  /* tech_support */  /* Master */     'skip_confirmation' => 0,
  /* tech_support */  /* Master */     'override_label' => 0,
  /* tech_support */  /* Master */     'label' => '',
  /* tech_support */  /* Master */     'settings' => array(
  /* tech_support */  /* Master */       'show_all_tokens' => 1,
  /* tech_support */  /* Master */       'display_values' => array(
  /* tech_support */  /* Master */         'tech_support::field_status' => 'tech_support::field_status',
  /* tech_support */  /* Master */       ),
  /* tech_support */  /* Master */     ),
  /* tech_support */  /* Master */   ),
  /* tech_support */  /* Master */ );
  /* tech_support */  /* Master */ /* Field: Field: Family Name */
  /* tech_support */  /* Master */ $handler->display->display_options['fields']['field_name_last']['id'] = 'field_name_last';
  /* tech_support */  /* Master */ $handler->display->display_options['fields']['field_name_last']['table'] = 'field_data_field_name_last';
  /* tech_support */  /* Master */ $handler->display->display_options['fields']['field_name_last']['field'] = 'field_name_last';
  /* tech_support */  /* Master */ $handler->display->display_options['fields']['field_name_last']['exclude'] = TRUE;
  /* tech_support */  /* Master */ $handler->display->display_options['fields']['field_name_last']['element_type'] = '0';
  /* tech_support */  /* Master */ $handler->display->display_options['fields']['field_name_last']['element_wrapper_type'] = '0';
  /* tech_support */  /* Master */ $handler->display->display_options['fields']['field_name_last']['element_default_classes'] = FALSE;
  /* tech_support */  /* Master */ $handler->display->display_options['fields']['field_name_last']['settings'] = array(
  /* tech_support */  /* Master */   'field_formatter_class' => '',
  /* tech_support */  /* Master */ );
  /* tech_support */  /* Master */ $handler->display->display_options['fields']['field_name_last']['field_api_classes'] = TRUE;
  /* tech_support */  /* Master */ /* Field: Field: Given Name */
  /* tech_support */  /* Master */ $handler->display->display_options['fields']['field_name_first']['id'] = 'field_name_first';
  /* tech_support */  /* Master */ $handler->display->display_options['fields']['field_name_first']['table'] = 'field_data_field_name_first';
  /* tech_support */  /* Master */ $handler->display->display_options['fields']['field_name_first']['field'] = 'field_name_first';
  /* tech_support */  /* Master */ $handler->display->display_options['fields']['field_name_first']['exclude'] = TRUE;
  /* tech_support */  /* Master */ $handler->display->display_options['fields']['field_name_first']['element_type'] = '0';
  /* tech_support */  /* Master */ $handler->display->display_options['fields']['field_name_first']['element_wrapper_type'] = '0';
  /* tech_support */  /* Master */ $handler->display->display_options['fields']['field_name_first']['element_default_classes'] = FALSE;
  /* tech_support */  /* Master */ $handler->display->display_options['fields']['field_name_first']['settings'] = array(
  /* tech_support */  /* Master */   'field_formatter_class' => '',
  /* tech_support */  /* Master */ );
  /* tech_support */  /* Master */ $handler->display->display_options['fields']['field_name_first']['field_api_classes'] = TRUE;
  /* tech_support */  /* Master */ /* Field: User: Name */
  /* tech_support */  /* Master */ $handler->display->display_options['fields']['name']['id'] = 'name';
  /* tech_support */  /* Master */ $handler->display->display_options['fields']['name']['table'] = 'users';
  /* tech_support */  /* Master */ $handler->display->display_options['fields']['name']['field'] = 'name';
  /* tech_support */  /* Master */ $handler->display->display_options['fields']['name']['relationship'] = 'user';
  /* tech_support */  /* Master */ $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  /* tech_support */  /* Master */ $handler->display->display_options['fields']['name']['hide_empty'] = TRUE;
  /* tech_support */  /* Master */ $handler->display->display_options['fields']['name']['empty_zero'] = TRUE;
  /* tech_support */  /* Master */ /* Field: Entityform Submission: Email Address */
  /* tech_support */  /* Master */ $handler->display->display_options['fields']['field_email']['id'] = 'field_email';
  /* tech_support */  /* Master */ $handler->display->display_options['fields']['field_email']['table'] = 'field_data_field_email';
  /* tech_support */  /* Master */ $handler->display->display_options['fields']['field_email']['field'] = 'field_email';
  /* tech_support */  /* Master */ $handler->display->display_options['fields']['field_email']['label'] = 'Email address';
  /* tech_support */  /* Master */ $handler->display->display_options['fields']['field_email']['exclude'] = TRUE;
  /* tech_support */  /* Master */ $handler->display->display_options['fields']['field_email']['element_type'] = '0';
  /* tech_support */  /* Master */ $handler->display->display_options['fields']['field_email']['element_wrapper_type'] = '0';
  /* tech_support */  /* Master */ $handler->display->display_options['fields']['field_email']['element_default_classes'] = FALSE;
  /* tech_support */  /* Master */ $handler->display->display_options['fields']['field_email']['settings'] = array(
  /* tech_support */  /* Master */   'field_formatter_class' => '',
  /* tech_support */  /* Master */ );
  /* tech_support */  /* Master */ $handler->display->display_options['fields']['field_email']['field_api_classes'] = TRUE;
  /* tech_support */  /* Master */ /* Field: Entityform Submission: Organization */
  /* tech_support */  /* Master */ $handler->display->display_options['fields']['field_organization']['id'] = 'field_organization';
  /* tech_support */  /* Master */ $handler->display->display_options['fields']['field_organization']['table'] = 'field_data_field_organization';
  /* tech_support */  /* Master */ $handler->display->display_options['fields']['field_organization']['field'] = 'field_organization';
  /* tech_support */  /* Master */ $handler->display->display_options['fields']['field_organization']['element_type'] = '0';
  /* tech_support */  /* Master */ $handler->display->display_options['fields']['field_organization']['element_wrapper_type'] = '0';
  /* tech_support */  /* Master */ $handler->display->display_options['fields']['field_organization']['element_default_classes'] = FALSE;
  /* tech_support */  /* Master */ $handler->display->display_options['fields']['field_organization']['settings'] = array(
  /* tech_support */  /* Master */   'link' => 0,
  /* tech_support */  /* Master */   'field_formatter_class' => '',
  /* tech_support */  /* Master */ );
  /* tech_support */  /* Master */ $handler->display->display_options['fields']['field_organization']['field_api_classes'] = TRUE;
  /* tech_support */  /* Master */ /* Field: Entityform Submission: Date submitted */
  /* tech_support */  /* Master */ $handler->display->display_options['fields']['created']['id'] = 'created';
  /* tech_support */  /* Master */ $handler->display->display_options['fields']['created']['table'] = 'entityform';
  /* tech_support */  /* Master */ $handler->display->display_options['fields']['created']['field'] = 'created';
  /* tech_support */  /* Master */ $handler->display->display_options['fields']['created']['label'] = 'Date';
  /* tech_support */  /* Master */ $handler->display->display_options['fields']['created']['date_format'] = 'date_format_globalnet_date';
  /* tech_support */  /* Master */ $handler->display->display_options['fields']['created']['second_date_format'] = 'date_format_globalnet_date';
  /* tech_support */  /* Master */ /* Field: Global: Custom text */
  /* tech_support */  /* Master */ $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  /* tech_support */  /* Master */ $handler->display->display_options['fields']['nothing']['table'] = 'views';
  /* tech_support */  /* Master */ $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  /* tech_support */  /* Master */ $handler->display->display_options['fields']['nothing']['label'] = 'User Info';
  /* tech_support */  /* Master */ $handler->display->display_options['fields']['nothing']['alter']['text'] = '[field_name_first] [field_name_last] <br>
[field_email]<br>
[name]';
  /* tech_support */  /* Master */ /* Field: Entityform Submission: How can we help you? */
  /* tech_support */  /* Master */ $handler->display->display_options['fields']['field_how_can_we_help_you_']['id'] = 'field_how_can_we_help_you_';
  /* tech_support */  /* Master */ $handler->display->display_options['fields']['field_how_can_we_help_you_']['table'] = 'field_data_field_how_can_we_help_you_';
  /* tech_support */  /* Master */ $handler->display->display_options['fields']['field_how_can_we_help_you_']['field'] = 'field_how_can_we_help_you_';
  /* tech_support */  /* Master */ $handler->display->display_options['fields']['field_how_can_we_help_you_']['element_type'] = '0';
  /* tech_support */  /* Master */ $handler->display->display_options['fields']['field_how_can_we_help_you_']['element_wrapper_type'] = '0';
  /* tech_support */  /* Master */ $handler->display->display_options['fields']['field_how_can_we_help_you_']['element_default_classes'] = FALSE;
  /* tech_support */  /* Master */ $handler->display->display_options['fields']['field_how_can_we_help_you_']['settings'] = array(
  /* tech_support */  /* Master */   'field_formatter_class' => '',
  /* tech_support */  /* Master */ );
  /* tech_support */  /* Master */ $handler->display->display_options['fields']['field_how_can_we_help_you_']['field_api_classes'] = TRUE;
  /* tech_support */  /* Master */ /* Field: Entityform Submission: Additional Comments/Remarks */
  /* tech_support */  /* Master */ $handler->display->display_options['fields']['field_anything_else']['id'] = 'field_anything_else';
  /* tech_support */  /* Master */ $handler->display->display_options['fields']['field_anything_else']['table'] = 'field_data_field_anything_else';
  /* tech_support */  /* Master */ $handler->display->display_options['fields']['field_anything_else']['field'] = 'field_anything_else';
  /* tech_support */  /* Master */ $handler->display->display_options['fields']['field_anything_else']['element_type'] = '0';
  /* tech_support */  /* Master */ $handler->display->display_options['fields']['field_anything_else']['element_wrapper_type'] = '0';
  /* tech_support */  /* Master */ $handler->display->display_options['fields']['field_anything_else']['element_default_classes'] = FALSE;
  /* tech_support */  /* Master */ $handler->display->display_options['fields']['field_anything_else']['settings'] = array(
  /* tech_support */  /* Master */   'field_formatter_class' => '',
  /* tech_support */  /* Master */ );
  /* tech_support */  /* Master */ $handler->display->display_options['fields']['field_anything_else']['field_api_classes'] = TRUE;
  /* tech_support */  /* Master */ /* Field: Entityform Submission: Status */
  /* tech_support */  /* Master */ $handler->display->display_options['fields']['field_status']['id'] = 'field_status';
  /* tech_support */  /* Master */ $handler->display->display_options['fields']['field_status']['table'] = 'field_data_field_status';
  /* tech_support */  /* Master */ $handler->display->display_options['fields']['field_status']['field'] = 'field_status';
  /* tech_support */  /* Master */ $handler->display->display_options['fields']['field_status']['element_type'] = '0';
  /* tech_support */  /* Master */ $handler->display->display_options['fields']['field_status']['element_wrapper_type'] = '0';
  /* tech_support */  /* Master */ $handler->display->display_options['fields']['field_status']['element_default_classes'] = FALSE;
  /* tech_support */  /* Master */ $handler->display->display_options['fields']['field_status']['settings'] = array(
  /* tech_support */  /* Master */   'field_formatter_class' => '',
  /* tech_support */  /* Master */ );
  /* tech_support */  /* Master */ $handler->display->display_options['fields']['field_status']['field_api_classes'] = TRUE;
  /* tech_support */  /* Master */ /* Field: Entityform Submission: Notified to */
  /* tech_support */  /* Master */ $handler->display->display_options['fields']['field_notified_to']['id'] = 'field_notified_to';
  /* tech_support */  /* Master */ $handler->display->display_options['fields']['field_notified_to']['table'] = 'field_data_field_notified_to';
  /* tech_support */  /* Master */ $handler->display->display_options['fields']['field_notified_to']['field'] = 'field_notified_to';
  /* tech_support */  /* Master */ $handler->display->display_options['fields']['field_notified_to']['element_type'] = '0';
  /* tech_support */  /* Master */ $handler->display->display_options['fields']['field_notified_to']['element_wrapper_type'] = '0';
  /* tech_support */  /* Master */ $handler->display->display_options['fields']['field_notified_to']['element_default_classes'] = FALSE;
  /* tech_support */  /* Master */ $handler->display->display_options['fields']['field_notified_to']['type'] = 'text_plain';
  /* tech_support */  /* Master */ $handler->display->display_options['fields']['field_notified_to']['settings'] = array(
  /* tech_support */  /* Master */   'field_formatter_class' => '',
  /* tech_support */  /* Master */ );
  /* tech_support */  /* Master */ $handler->display->display_options['fields']['field_notified_to']['field_api_classes'] = TRUE;
  /* tech_support */  /* Master */ /* Sort criterion: Entityform Submission: Date submitted */
  /* tech_support */  /* Master */ $handler->display->display_options['sorts']['created']['id'] = 'created';
  /* tech_support */  /* Master */ $handler->display->display_options['sorts']['created']['table'] = 'entityform';
  /* tech_support */  /* Master */ $handler->display->display_options['sorts']['created']['field'] = 'created';
  /* tech_support */  /* Master */ $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* tech_support */  /* Master */ $handler->display->display_options['sorts']['created']['exposed'] = TRUE;
  /* tech_support */  /* Master */ $handler->display->display_options['sorts']['created']['expose']['label'] = 'Date submitted';
  /* tech_support */  /* Master */ /* Filter criterion: Entityform Submission: Entityform Type */
  /* tech_support */  /* Master */ $handler->display->display_options['filters']['type']['id'] = 'type';
  /* tech_support */  /* Master */ $handler->display->display_options['filters']['type']['table'] = 'entityform';
  /* tech_support */  /* Master */ $handler->display->display_options['filters']['type']['field'] = 'type';
  /* tech_support */  /* Master */ $handler->display->display_options['filters']['type']['value'] = array(
  /* tech_support */  /* Master */   'tech_support' => 'tech_support',
  /* tech_support */  /* Master */ );
  /* tech_support */  /* Master */ $handler->display->display_options['filters']['type']['group'] = 1;
  /* tech_support */  /* Master */ /* Filter criterion: Entityform Submission: Status (field_status) */
  /* tech_support */  /* Master */ $handler->display->display_options['filters']['field_status_value']['id'] = 'field_status_value';
  /* tech_support */  /* Master */ $handler->display->display_options['filters']['field_status_value']['table'] = 'field_data_field_status';
  /* tech_support */  /* Master */ $handler->display->display_options['filters']['field_status_value']['field'] = 'field_status_value';
  /* tech_support */  /* Master */ $handler->display->display_options['filters']['field_status_value']['group'] = 1;
  /* tech_support */  /* Master */ $handler->display->display_options['filters']['field_status_value']['exposed'] = TRUE;
  /* tech_support */  /* Master */ $handler->display->display_options['filters']['field_status_value']['expose']['operator_id'] = 'field_status_value_op';
  /* tech_support */  /* Master */ $handler->display->display_options['filters']['field_status_value']['expose']['label'] = 'Status';
  /* tech_support */  /* Master */ $handler->display->display_options['filters']['field_status_value']['expose']['operator'] = 'field_status_value_op';
  /* tech_support */  /* Master */ $handler->display->display_options['filters']['field_status_value']['expose']['identifier'] = 'field_status_value';
  /* tech_support */  /* Master */ $handler->display->display_options['filters']['field_status_value']['expose']['remember_roles'] = array(
  /* tech_support */  /* Master */   2 => '2',
  /* tech_support */  /* Master */   1 => 0,
  /* tech_support */  /* Master */   9 => 0,
  /* tech_support */  /* Master */   10 => 0,
  /* tech_support */  /* Master */ );
  /* tech_support */  /* Master */ /* Filter criterion: Content: Org Short Title (field_org_short_title) */
  /* tech_support */  /* Master */ $handler->display->display_options['filters']['field_org_short_title_value']['id'] = 'field_org_short_title_value';
  /* tech_support */  /* Master */ $handler->display->display_options['filters']['field_org_short_title_value']['table'] = 'field_data_field_org_short_title';
  /* tech_support */  /* Master */ $handler->display->display_options['filters']['field_org_short_title_value']['field'] = 'field_org_short_title_value';
  /* tech_support */  /* Master */ $handler->display->display_options['filters']['field_org_short_title_value']['relationship'] = 'field_organization_target_id';
  /* tech_support */  /* Master */ $handler->display->display_options['filters']['field_org_short_title_value']['operator'] = 'word';
  /* tech_support */  /* Master */ $handler->display->display_options['filters']['field_org_short_title_value']['exposed'] = TRUE;
  /* tech_support */  /* Master */ $handler->display->display_options['filters']['field_org_short_title_value']['expose']['operator_id'] = 'field_org_short_title_value_op';
  /* tech_support */  /* Master */ $handler->display->display_options['filters']['field_org_short_title_value']['expose']['label'] = 'Org Short Title';
  /* tech_support */  /* Master */ $handler->display->display_options['filters']['field_org_short_title_value']['expose']['operator'] = 'field_org_short_title_value_op';
  /* tech_support */  /* Master */ $handler->display->display_options['filters']['field_org_short_title_value']['expose']['identifier'] = 'field_org_short_title_value';
  /* tech_support */  /* Master */ $handler->display->display_options['filters']['field_org_short_title_value']['expose']['remember_roles'] = array(
  /* tech_support */  /* Master */   2 => '2',
  /* tech_support */  /* Master */   1 => 0,
  /* tech_support */  /* Master */   9 => 0,
  /* tech_support */  /* Master */   10 => 0,
  /* tech_support */  /* Master */ );
  /* tech_support */  /* Master */ $handler->display->display_options['filters']['field_org_short_title_value']['expose']['autocomplete_items'] = '10';
  /* tech_support */  /* Master */ $handler->display->display_options['filters']['field_org_short_title_value']['expose']['autocomplete_min_chars'] = '0';
  /* tech_support */  /* Master */ $handler->display->display_options['filters']['field_org_short_title_value']['expose']['autocomplete_raw_suggestion'] = 1;
  /* tech_support */  /* Master */ $handler->display->display_options['filters']['field_org_short_title_value']['expose']['autocomplete_raw_dropdown'] = 1;
  /* tech_support */  /* Master */ $handler->display->display_options['filters']['field_org_short_title_value']['expose']['autocomplete_dependent'] = 0;

  /* tech_support */ /* Display: Page */
  /* tech_support */  /* Page */ $handler = $view->new_display('page', 'Page', 'page_1');
  /* tech_support */  /* Page */ $handler->display->display_options['path'] = 'admin/tech_support_revision';

  /* tech_support */ /* Display: Data export */
  /* tech_support */  /* Data export */ $handler = $view->new_display('views_data_export', 'Data export', 'views_data_export_1');
  /* tech_support */  /* Data export */ $handler->display->display_options['pager']['type'] = 'some';
  /* tech_support */  /* Data export */ $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  /* tech_support */  /* Data export */ $handler->display->display_options['path'] = 'admin/tech_support_revision/export/csv';
  /* tech_support */ $translatables['tech_support'] = array(
  /* tech_support */   t('Master'),
  /* tech_support */   t('Tech Support Review'),
  /* tech_support */   t('more'),
  /* tech_support */   t('Apply'),
  /* tech_support */   t('Reset'),
  /* tech_support */   t('Sort by'),
  /* tech_support */   t('Asc'),
  /* tech_support */   t('Desc'),
  /* tech_support */   t('Items per page'),
  /* tech_support */   t('- All -'),
  /* tech_support */   t('Offset'),
  /* tech_support */   t('« first'),
  /* tech_support */   t('‹ previous'),
  /* tech_support */   t('next ›'),
  /* tech_support */   t('last »'),
  /* tech_support */   t('<a href="/admin/tech_support_revision/export/csv">Export to CSV</a>'),
  /* tech_support */   t('Content entity referenced from field_organization'),
  /* tech_support */   t('Entityform Submission referencing Content from field_organization'),
  /* tech_support */   t('User'),
  /* tech_support */   t('nodes'),
  /* tech_support */   t('Entityform Submission'),
  /* tech_support */   t('- Choose an operation -'),
  /* tech_support */   t('Family Name'),
  /* tech_support */   t('Given Name'),
  /* tech_support */   t('Name'),
  /* tech_support */   t('Email address'),
  /* tech_support */   t('Organization'),
  /* tech_support */   t('Date'),
  /* tech_support */   t('User Info'),
  /* tech_support */   t('[field_name_first] [field_name_last] <br>
[field_email]<br>
[name]'),
  /* tech_support */   t('How can we help you?'),
  /* tech_support */   t('Additional Comments/Remarks'),
  /* tech_support */   t('Status'),
  /* tech_support */   t('Notified to'),
  /* tech_support */   t('Date submitted'),
  /* tech_support */   t('Org Short Title'),
  /* tech_support */   t('Page'),
  /* tech_support */   t('Data export'),
  /* tech_support */ );
  $export['tech_support'] = $view;

  return $export;
}
