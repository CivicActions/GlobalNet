<?php
/**
 * @file
 * gn2_admin_dashboard.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function gn2_admin_dashboard_views_default_views() {
  $export = array();

  /* admin_content */ $view = new view();
  /* admin_content */ $view->name = 'admin_content';
  /* admin_content */ $view->description = '';
  /* admin_content */ $view->tag = 'default';
  /* admin_content */ $view->base_table = 'node';
  /* admin_content */ $view->human_name = 'Admin content';
  /* admin_content */ $view->core = 7;
  /* admin_content */ $view->api_version = '3.0';
  /* admin_content */ $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* admin_content */ /* Display: Master */
  /* admin_content */  /* Master */ $handler = $view->new_display('default', 'Master', 'default');
  /* admin_content */  /* Master */ $handler->display->display_options['title'] = 'Admin Content';
  /* admin_content */  /* Master */ $handler->display->display_options['use_more_always'] = FALSE;
  /* admin_content */  /* Master */ $handler->display->display_options['access']['type'] = 'gn2_og_any_group_manager_access';
  /* admin_content */  /* Master */ $handler->display->display_options['cache']['type'] = 'none';
  /* admin_content */  /* Master */ $handler->display->display_options['query']['type'] = 'views_query';
  /* admin_content */  /* Master */ $handler->display->display_options['query']['options']['distinct'] = TRUE;
  /* admin_content */  /* Master */ $handler->display->display_options['exposed_form']['type'] = 'basic';
  /* admin_content */  /* Master */ $handler->display->display_options['pager']['type'] = 'none';
  /* admin_content */  /* Master */ $handler->display->display_options['pager']['options']['offset'] = '0';
  /* admin_content */  /* Master */ $handler->display->display_options['style_plugin'] = 'datatables';
  /* admin_content */  /* Master */ $handler->display->display_options['style_options']['columns'] = array(
  /* admin_content */  /* Master */   'views_bulk_operations' => 'views_bulk_operations',
  /* admin_content */  /* Master */   'edit_node' => 'edit_node',
  /* admin_content */  /* Master */   'nid' => 'nid',
  /* admin_content */  /* Master */   'title' => 'title',
  /* admin_content */  /* Master */   'field_event_date' => 'field_event_date',
  /* admin_content */  /* Master */   'name' => 'name',
  /* admin_content */  /* Master */   'field_event_contact_person' => 'field_event_contact_person',
  /* admin_content */  /* Master */   'status' => 'status',
  /* admin_content */  /* Master */   'created' => 'created',
  /* admin_content */  /* Master */   'changed' => 'changed',
  /* admin_content */  /* Master */ );
  /* admin_content */  /* Master */ $handler->display->display_options['style_options']['default'] = 'created';
  /* admin_content */  /* Master */ $handler->display->display_options['style_options']['info'] = array(
  /* admin_content */  /* Master */   'views_bulk_operations' => array(
  /* admin_content */  /* Master */     'align' => 'views-align-left',
  /* admin_content */  /* Master */     'separator' => '',
  /* admin_content */  /* Master */     'empty_column' => 0,
  /* admin_content */  /* Master */   ),
  /* admin_content */  /* Master */   'edit_node' => array(
  /* admin_content */  /* Master */     'align' => 'views-align-left',
  /* admin_content */  /* Master */     'separator' => '',
  /* admin_content */  /* Master */     'empty_column' => 0,
  /* admin_content */  /* Master */   ),
  /* admin_content */  /* Master */   'nid' => array(
  /* admin_content */  /* Master */     'sortable' => 1,
  /* admin_content */  /* Master */     'default_sort_order' => 'asc',
  /* admin_content */  /* Master */     'align' => '',
  /* admin_content */  /* Master */     'separator' => '',
  /* admin_content */  /* Master */     'empty_column' => 0,
  /* admin_content */  /* Master */   ),
  /* admin_content */  /* Master */   'title' => array(
  /* admin_content */  /* Master */     'sortable' => 1,
  /* admin_content */  /* Master */     'default_sort_order' => 'asc',
  /* admin_content */  /* Master */     'align' => 'views-align-left',
  /* admin_content */  /* Master */     'separator' => '',
  /* admin_content */  /* Master */     'empty_column' => 0,
  /* admin_content */  /* Master */   ),
  /* admin_content */  /* Master */   'field_event_date' => array(
  /* admin_content */  /* Master */     'align' => 'views-align-left',
  /* admin_content */  /* Master */     'separator' => '',
  /* admin_content */  /* Master */     'empty_column' => 0,
  /* admin_content */  /* Master */   ),
  /* admin_content */  /* Master */   'name' => array(
  /* admin_content */  /* Master */     'sortable' => 1,
  /* admin_content */  /* Master */     'default_sort_order' => 'asc',
  /* admin_content */  /* Master */     'align' => 'views-align-left',
  /* admin_content */  /* Master */     'separator' => '',
  /* admin_content */  /* Master */     'empty_column' => 0,
  /* admin_content */  /* Master */   ),
  /* admin_content */  /* Master */   'field_event_contact_person' => array(
  /* admin_content */  /* Master */     'align' => 'views-align-left',
  /* admin_content */  /* Master */     'separator' => '',
  /* admin_content */  /* Master */     'empty_column' => 0,
  /* admin_content */  /* Master */   ),
  /* admin_content */  /* Master */   'status' => array(
  /* admin_content */  /* Master */     'sortable' => 0,
  /* admin_content */  /* Master */     'default_sort_order' => 'asc',
  /* admin_content */  /* Master */     'align' => 'views-align-left',
  /* admin_content */  /* Master */     'separator' => '',
  /* admin_content */  /* Master */     'empty_column' => 0,
  /* admin_content */  /* Master */   ),
  /* admin_content */  /* Master */   'created' => array(
  /* admin_content */  /* Master */     'sortable' => 1,
  /* admin_content */  /* Master */     'default_sort_order' => 'desc',
  /* admin_content */  /* Master */     'align' => 'views-align-left',
  /* admin_content */  /* Master */     'separator' => '',
  /* admin_content */  /* Master */     'empty_column' => 0,
  /* admin_content */  /* Master */   ),
  /* admin_content */  /* Master */   'changed' => array(
  /* admin_content */  /* Master */     'sortable' => 0,
  /* admin_content */  /* Master */     'default_sort_order' => 'asc',
  /* admin_content */  /* Master */     'align' => 'views-align-left',
  /* admin_content */  /* Master */     'separator' => '',
  /* admin_content */  /* Master */     'empty_column' => 0,
  /* admin_content */  /* Master */   ),
  /* admin_content */  /* Master */ );
  /* admin_content */  /* Master */ $handler->display->display_options['style_options']['elements'] = array(
  /* admin_content */  /* Master */   'search_box' => 1,
  /* admin_content */  /* Master */   'table_info' => 0,
  /* admin_content */  /* Master */   'save_state' => 0,
  /* admin_content */  /* Master */   'table_tools' => 0,
  /* admin_content */  /* Master */ );
  /* admin_content */  /* Master */ $handler->display->display_options['style_options']['layout'] = array(
  /* admin_content */  /* Master */   'autowidth' => 0,
  /* admin_content */  /* Master */   'themeroller' => 0,
  /* admin_content */  /* Master */   'sdom' => '',
  /* admin_content */  /* Master */ );
  /* admin_content */  /* Master */ $handler->display->display_options['style_options']['pages'] = array(
  /* admin_content */  /* Master */   'pagination_style' => 'full_numbers',
  /* admin_content */  /* Master */   'length_change' => 0,
  /* admin_content */  /* Master */   'display_length' => '50',
  /* admin_content */  /* Master */ );
  /* admin_content */  /* Master */ /* Relationship: Content: Author */
  /* admin_content */  /* Master */ $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  /* admin_content */  /* Master */ $handler->display->display_options['relationships']['uid']['table'] = 'node';
  /* admin_content */  /* Master */ $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* admin_content */  /* Master */ /* Field: Bulk operations: Content */
  /* admin_content */  /* Master */ $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  /* admin_content */  /* Master */ $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'node';
  /* admin_content */  /* Master */ $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  /* admin_content */  /* Master */ $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '0';
  /* admin_content */  /* Master */ $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  /* admin_content */  /* Master */ $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  /* admin_content */  /* Master */ $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  /* admin_content */  /* Master */ $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
  /* admin_content */  /* Master */   'action::node_assign_owner_action' => array(
  /* admin_content */  /* Master */     'selected' => 1,
  /* admin_content */  /* Master */     'postpone_processing' => 0,
  /* admin_content */  /* Master */     'skip_confirmation' => 0,
  /* admin_content */  /* Master */     'override_label' => 0,
  /* admin_content */  /* Master */     'label' => '',
  /* admin_content */  /* Master */   ),
  /* admin_content */  /* Master */   'action::views_bulk_operations_delete_item' => array(
  /* admin_content */  /* Master */     'selected' => 1,
  /* admin_content */  /* Master */     'postpone_processing' => 0,
  /* admin_content */  /* Master */     'skip_confirmation' => 0,
  /* admin_content */  /* Master */     'override_label' => 0,
  /* admin_content */  /* Master */     'label' => '',
  /* admin_content */  /* Master */   ),
  /* admin_content */  /* Master */   'action::node_publish_action' => array(
  /* admin_content */  /* Master */     'selected' => 1,
  /* admin_content */  /* Master */     'postpone_processing' => 0,
  /* admin_content */  /* Master */     'skip_confirmation' => 0,
  /* admin_content */  /* Master */     'override_label' => 0,
  /* admin_content */  /* Master */     'label' => '',
  /* admin_content */  /* Master */   ),
  /* admin_content */  /* Master */   'action::node_unpublish_action' => array(
  /* admin_content */  /* Master */     'selected' => 1,
  /* admin_content */  /* Master */     'postpone_processing' => 0,
  /* admin_content */  /* Master */     'skip_confirmation' => 0,
  /* admin_content */  /* Master */     'override_label' => 0,
  /* admin_content */  /* Master */     'label' => '',
  /* admin_content */  /* Master */   ),
  /* admin_content */  /* Master */ );
  /* admin_content */  /* Master */ /* Field: Content: Edit link */
  /* admin_content */  /* Master */ $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  /* admin_content */  /* Master */ $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  /* admin_content */  /* Master */ $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  /* admin_content */  /* Master */ /* Field: Content: Nid */
  /* admin_content */  /* Master */ $handler->display->display_options['fields']['nid']['id'] = 'nid';
  /* admin_content */  /* Master */ $handler->display->display_options['fields']['nid']['table'] = 'node';
  /* admin_content */  /* Master */ $handler->display->display_options['fields']['nid']['field'] = 'nid';
  /* admin_content */  /* Master */ $handler->display->display_options['fields']['nid']['label'] = 'ID';
  /* admin_content */  /* Master */ $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  /* admin_content */  /* Master */ $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* admin_content */  /* Master */ /* Field: Content: Title */
  /* admin_content */  /* Master */ $handler->display->display_options['fields']['title']['id'] = 'title';
  /* admin_content */  /* Master */ $handler->display->display_options['fields']['title']['table'] = 'node';
  /* admin_content */  /* Master */ $handler->display->display_options['fields']['title']['field'] = 'title';
  /* admin_content */  /* Master */ $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  /* admin_content */  /* Master */ $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* admin_content */  /* Master */ /* Field: Content: Date And Time */
  /* admin_content */  /* Master */ $handler->display->display_options['fields']['field_event_date']['id'] = 'field_event_date';
  /* admin_content */  /* Master */ $handler->display->display_options['fields']['field_event_date']['table'] = 'field_data_field_event_date';
  /* admin_content */  /* Master */ $handler->display->display_options['fields']['field_event_date']['field'] = 'field_event_date';
  /* admin_content */  /* Master */ $handler->display->display_options['fields']['field_event_date']['label'] = 'Event Start Date';
  /* admin_content */  /* Master */ $handler->display->display_options['fields']['field_event_date']['element_type'] = '0';
  /* admin_content */  /* Master */ $handler->display->display_options['fields']['field_event_date']['element_label_colon'] = FALSE;
  /* admin_content */  /* Master */ $handler->display->display_options['fields']['field_event_date']['element_wrapper_type'] = '0';
  /* admin_content */  /* Master */ $handler->display->display_options['fields']['field_event_date']['element_default_classes'] = FALSE;
  /* admin_content */  /* Master */ $handler->display->display_options['fields']['field_event_date']['settings'] = array(
  /* admin_content */  /* Master */   'format_type' => 'date_format_globalnet_date_time',
  /* admin_content */  /* Master */   'fromto' => 'value',
  /* admin_content */  /* Master */   'multiple_number' => '1',
  /* admin_content */  /* Master */   'multiple_from' => '',
  /* admin_content */  /* Master */   'multiple_to' => '',
  /* admin_content */  /* Master */   'show_repeat_rule' => 'hide',
  /* admin_content */  /* Master */   'field_formatter_class' => '',
  /* admin_content */  /* Master */ );
  /* admin_content */  /* Master */ $handler->display->display_options['fields']['field_event_date']['delta_limit'] = '1';
  /* admin_content */  /* Master */ $handler->display->display_options['fields']['field_event_date']['delta_offset'] = '0';
  /* admin_content */  /* Master */ $handler->display->display_options['fields']['field_event_date']['field_api_classes'] = TRUE;
  /* admin_content */  /* Master */ /* Field: User: Name */
  /* admin_content */  /* Master */ $handler->display->display_options['fields']['name']['id'] = 'name';
  /* admin_content */  /* Master */ $handler->display->display_options['fields']['name']['table'] = 'users';
  /* admin_content */  /* Master */ $handler->display->display_options['fields']['name']['field'] = 'name';
  /* admin_content */  /* Master */ $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  /* admin_content */  /* Master */ $handler->display->display_options['fields']['name']['label'] = 'Author';
  /* admin_content */  /* Master */ $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  /* admin_content */  /* Master */ /* Field: Content: Event Contact Person */
  /* admin_content */  /* Master */ $handler->display->display_options['fields']['field_event_contact_person']['id'] = 'field_event_contact_person';
  /* admin_content */  /* Master */ $handler->display->display_options['fields']['field_event_contact_person']['table'] = 'field_data_field_event_contact_person';
  /* admin_content */  /* Master */ $handler->display->display_options['fields']['field_event_contact_person']['field'] = 'field_event_contact_person';
  /* admin_content */  /* Master */ $handler->display->display_options['fields']['field_event_contact_person']['label'] = 'Contact Person';
  /* admin_content */  /* Master */ $handler->display->display_options['fields']['field_event_contact_person']['element_type'] = '0';
  /* admin_content */  /* Master */ $handler->display->display_options['fields']['field_event_contact_person']['element_label_colon'] = FALSE;
  /* admin_content */  /* Master */ $handler->display->display_options['fields']['field_event_contact_person']['element_wrapper_type'] = '0';
  /* admin_content */  /* Master */ $handler->display->display_options['fields']['field_event_contact_person']['element_default_classes'] = FALSE;
  /* admin_content */  /* Master */ $handler->display->display_options['fields']['field_event_contact_person']['settings'] = array(
  /* admin_content */  /* Master */   'link' => 1,
  /* admin_content */  /* Master */   'field_formatter_class' => '',
  /* admin_content */  /* Master */ );
  /* admin_content */  /* Master */ $handler->display->display_options['fields']['field_event_contact_person']['delta_limit'] = '1';
  /* admin_content */  /* Master */ $handler->display->display_options['fields']['field_event_contact_person']['delta_offset'] = '0';
  /* admin_content */  /* Master */ $handler->display->display_options['fields']['field_event_contact_person']['field_api_classes'] = TRUE;
  /* admin_content */  /* Master */ /* Field: Content: Title */
  /* admin_content */  /* Master */ $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  /* admin_content */  /* Master */ $handler->display->display_options['fields']['title_1']['table'] = 'node';
  /* admin_content */  /* Master */ $handler->display->display_options['fields']['title_1']['field'] = 'title';
  /* admin_content */  /* Master */ $handler->display->display_options['fields']['title_1']['label'] = 'Parent Group';
  /* admin_content */  /* Master */ $handler->display->display_options['fields']['title_1']['element_label_colon'] = FALSE;
  /* admin_content */  /* Master */ /* Field: Content: Organization Short Title */
  /* admin_content */  /* Master */ $handler->display->display_options['fields']['organization_short']['id'] = 'organization_short';
  /* admin_content */  /* Master */ $handler->display->display_options['fields']['organization_short']['table'] = 'node';
  /* admin_content */  /* Master */ $handler->display->display_options['fields']['organization_short']['field'] = 'organization_short';
  /* admin_content */  /* Master */ $handler->display->display_options['fields']['organization_short']['label'] = 'Parent Org';
  /* admin_content */  /* Master */ $handler->display->display_options['fields']['organization_short']['element_label_colon'] = FALSE;
  /* admin_content */  /* Master */ /* Field: Content: Published */
  /* admin_content */  /* Master */ $handler->display->display_options['fields']['status']['id'] = 'status';
  /* admin_content */  /* Master */ $handler->display->display_options['fields']['status']['table'] = 'node';
  /* admin_content */  /* Master */ $handler->display->display_options['fields']['status']['field'] = 'status';
  /* admin_content */  /* Master */ /* Field: Content: Post date */
  /* admin_content */  /* Master */ $handler->display->display_options['fields']['created']['id'] = 'created';
  /* admin_content */  /* Master */ $handler->display->display_options['fields']['created']['table'] = 'node';
  /* admin_content */  /* Master */ $handler->display->display_options['fields']['created']['field'] = 'created';
  /* admin_content */  /* Master */ $handler->display->display_options['fields']['created']['label'] = 'Date Posted';
  /* admin_content */  /* Master */ $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  /* admin_content */  /* Master */ $handler->display->display_options['fields']['created']['date_format'] = 'date_format_globalnet_date_time';
  /* admin_content */  /* Master */ $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
  /* admin_content */  /* Master */ /* Field: Content: Updated date */
  /* admin_content */  /* Master */ $handler->display->display_options['fields']['changed']['id'] = 'changed';
  /* admin_content */  /* Master */ $handler->display->display_options['fields']['changed']['table'] = 'node';
  /* admin_content */  /* Master */ $handler->display->display_options['fields']['changed']['field'] = 'changed';
  /* admin_content */  /* Master */ $handler->display->display_options['fields']['changed']['label'] = 'Date Updated';
  /* admin_content */  /* Master */ $handler->display->display_options['fields']['changed']['element_label_colon'] = FALSE;
  /* admin_content */  /* Master */ $handler->display->display_options['fields']['changed']['date_format'] = 'date_format_globalnet_date_time';
  /* admin_content */  /* Master */ $handler->display->display_options['fields']['changed']['second_date_format'] = 'date_format_globalnet_date';
  /* admin_content */  /* Master */ /* Sort criterion: Content: Post date */
  /* admin_content */  /* Master */ $handler->display->display_options['sorts']['created']['id'] = 'created';
  /* admin_content */  /* Master */ $handler->display->display_options['sorts']['created']['table'] = 'node';
  /* admin_content */  /* Master */ $handler->display->display_options['sorts']['created']['field'] = 'created';
  /* admin_content */  /* Master */ $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* admin_content */  /* Master */ /* Contextual filter: OG membership: Group ID */
  /* admin_content */  /* Master */ $handler->display->display_options['arguments']['gid']['id'] = 'gid';
  /* admin_content */  /* Master */ $handler->display->display_options['arguments']['gid']['table'] = 'og_membership';
  /* admin_content */  /* Master */ $handler->display->display_options['arguments']['gid']['field'] = 'gid';
  /* admin_content */  /* Master */ $handler->display->display_options['arguments']['gid']['default_argument_type'] = 'fixed';
  /* admin_content */  /* Master */ $handler->display->display_options['arguments']['gid']['summary']['number_of_records'] = '0';
  /* admin_content */  /* Master */ $handler->display->display_options['arguments']['gid']['summary']['format'] = 'default_summary';
  /* admin_content */  /* Master */ $handler->display->display_options['arguments']['gid']['summary_options']['items_per_page'] = '25';
  /* admin_content */  /* Master */ /* Filter criterion: Content: Published */
  /* admin_content */  /* Master */ $handler->display->display_options['filters']['status']['id'] = 'status';
  /* admin_content */  /* Master */ $handler->display->display_options['filters']['status']['table'] = 'node';
  /* admin_content */  /* Master */ $handler->display->display_options['filters']['status']['field'] = 'status';
  /* admin_content */  /* Master */ $handler->display->display_options['filters']['status']['value'] = '1';
  /* admin_content */  /* Master */ $handler->display->display_options['filters']['status']['group'] = 1;
  /* admin_content */  /* Master */ $handler->display->display_options['filters']['status']['expose']['operator_id'] = '';
  /* admin_content */  /* Master */ $handler->display->display_options['filters']['status']['expose']['label'] = 'Published';
  /* admin_content */  /* Master */ $handler->display->display_options['filters']['status']['expose']['operator'] = 'status_op';
  /* admin_content */  /* Master */ $handler->display->display_options['filters']['status']['expose']['identifier'] = 'status';
  /* admin_content */  /* Master */ $handler->display->display_options['filters']['status']['expose']['remember_roles'] = array(
  /* admin_content */  /* Master */   2 => '2',
  /* admin_content */  /* Master */   1 => 0,
  /* admin_content */  /* Master */   9 => 0,
  /* admin_content */  /* Master */ );
  /* admin_content */  /* Master */ /* Filter criterion: Content: Type */
  /* admin_content */  /* Master */ $handler->display->display_options['filters']['type']['id'] = 'type';
  /* admin_content */  /* Master */ $handler->display->display_options['filters']['type']['table'] = 'node';
  /* admin_content */  /* Master */ $handler->display->display_options['filters']['type']['field'] = 'type';
  /* admin_content */  /* Master */ $handler->display->display_options['filters']['type']['value'] = array(
  /* admin_content */  /* Master */   'event' => 'event',
  /* admin_content */  /* Master */ );
  /* admin_content */  /* Master */ $handler->display->display_options['filters']['type']['group'] = 1;
  /* admin_content */  /* Master */ $handler->display->display_options['filters']['type']['expose']['operator_id'] = 'type_op';
  /* admin_content */  /* Master */ $handler->display->display_options['filters']['type']['expose']['label'] = 'Content Type';
  /* admin_content */  /* Master */ $handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
  /* admin_content */  /* Master */ $handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';
  /* admin_content */  /* Master */ $handler->display->display_options['filters']['type']['expose']['multiple'] = TRUE;
  /* admin_content */  /* Master */ $handler->display->display_options['filters']['type']['expose']['remember_roles'] = array(
  /* admin_content */  /* Master */   2 => '2',
  /* admin_content */  /* Master */   1 => 0,
  /* admin_content */  /* Master */   9 => 0,
  /* admin_content */  /* Master */ );

  /* admin_content */ /* Display: Manage Content */
  /* admin_content */  /* Manage Content */ $handler = $view->new_display('page', 'Manage Content', 'page_manage_content');
  /* admin_content */  /* Manage Content */ $handler->display->display_options['defaults']['title'] = FALSE;
  /* admin_content */  /* Manage Content */ $handler->display->display_options['title'] = 'Manage Content';
  /* admin_content */  /* Manage Content */ $handler->display->display_options['defaults']['pager'] = FALSE;
  /* admin_content */  /* Manage Content */ $handler->display->display_options['pager']['type'] = 'full';
  /* admin_content */  /* Manage Content */ $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  /* admin_content */  /* Manage Content */ $handler->display->display_options['pager']['options']['offset'] = '0';
  /* admin_content */  /* Manage Content */ $handler->display->display_options['pager']['options']['id'] = '0';
  /* admin_content */  /* Manage Content */ $handler->display->display_options['pager']['options']['quantity'] = '9';
  /* admin_content */  /* Manage Content */ $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  /* admin_content */  /* Manage Content */ $handler->display->display_options['style_plugin'] = 'table';
  /* admin_content */  /* Manage Content */ $handler->display->display_options['style_options']['columns'] = array(
  /* admin_content */  /* Manage Content */   'views_bulk_operations' => 'views_bulk_operations',
  /* admin_content */  /* Manage Content */   'uid' => 'uid',
  /* admin_content */  /* Manage Content */   'status' => 'status',
  /* admin_content */  /* Manage Content */   'type' => 'type',
  /* admin_content */  /* Manage Content */   'title' => 'title',
  /* admin_content */  /* Manage Content */   'edit_node' => 'edit_node',
  /* admin_content */  /* Manage Content */   'name' => 'name',
  /* admin_content */  /* Manage Content */   'nid' => 'nid',
  /* admin_content */  /* Manage Content */   'og_group_ref' => 'og_group_ref',
  /* admin_content */  /* Manage Content */   'field_gn2_simple_access_1' => 'field_gn2_simple_access_1',
  /* admin_content */  /* Manage Content */   'created' => 'created',
  /* admin_content */  /* Manage Content */   'changed' => 'changed',
  /* admin_content */  /* Manage Content */   'timestamp' => 'timestamp',
  /* admin_content */  /* Manage Content */ );
  /* admin_content */  /* Manage Content */ $handler->display->display_options['style_options']['default'] = 'changed';
  /* admin_content */  /* Manage Content */ $handler->display->display_options['style_options']['info'] = array(
  /* admin_content */  /* Manage Content */   'views_bulk_operations' => array(
  /* admin_content */  /* Manage Content */     'align' => '',
  /* admin_content */  /* Manage Content */     'separator' => '',
  /* admin_content */  /* Manage Content */     'empty_column' => 0,
  /* admin_content */  /* Manage Content */   ),
  /* admin_content */  /* Manage Content */   'uid' => array(
  /* admin_content */  /* Manage Content */     'align' => '',
  /* admin_content */  /* Manage Content */     'separator' => '',
  /* admin_content */  /* Manage Content */     'empty_column' => 0,
  /* admin_content */  /* Manage Content */   ),
  /* admin_content */  /* Manage Content */   'status' => array(
  /* admin_content */  /* Manage Content */     'sortable' => 0,
  /* admin_content */  /* Manage Content */     'default_sort_order' => 'asc',
  /* admin_content */  /* Manage Content */     'align' => '',
  /* admin_content */  /* Manage Content */     'separator' => '',
  /* admin_content */  /* Manage Content */     'empty_column' => 0,
  /* admin_content */  /* Manage Content */   ),
  /* admin_content */  /* Manage Content */   'type' => array(
  /* admin_content */  /* Manage Content */     'sortable' => 1,
  /* admin_content */  /* Manage Content */     'default_sort_order' => 'asc',
  /* admin_content */  /* Manage Content */     'align' => '',
  /* admin_content */  /* Manage Content */     'separator' => '',
  /* admin_content */  /* Manage Content */     'empty_column' => 0,
  /* admin_content */  /* Manage Content */   ),
  /* admin_content */  /* Manage Content */   'title' => array(
  /* admin_content */  /* Manage Content */     'sortable' => 1,
  /* admin_content */  /* Manage Content */     'default_sort_order' => 'asc',
  /* admin_content */  /* Manage Content */     'align' => '',
  /* admin_content */  /* Manage Content */     'separator' => '',
  /* admin_content */  /* Manage Content */     'empty_column' => 0,
  /* admin_content */  /* Manage Content */   ),
  /* admin_content */  /* Manage Content */   'edit_node' => array(
  /* admin_content */  /* Manage Content */     'align' => '',
  /* admin_content */  /* Manage Content */     'separator' => '',
  /* admin_content */  /* Manage Content */     'empty_column' => 0,
  /* admin_content */  /* Manage Content */   ),
  /* admin_content */  /* Manage Content */   'name' => array(
  /* admin_content */  /* Manage Content */     'sortable' => 1,
  /* admin_content */  /* Manage Content */     'default_sort_order' => 'asc',
  /* admin_content */  /* Manage Content */     'align' => '',
  /* admin_content */  /* Manage Content */     'separator' => '',
  /* admin_content */  /* Manage Content */     'empty_column' => 0,
  /* admin_content */  /* Manage Content */   ),
  /* admin_content */  /* Manage Content */   'nid' => array(
  /* admin_content */  /* Manage Content */     'sortable' => 1,
  /* admin_content */  /* Manage Content */     'default_sort_order' => 'asc',
  /* admin_content */  /* Manage Content */     'align' => '',
  /* admin_content */  /* Manage Content */     'separator' => '',
  /* admin_content */  /* Manage Content */     'empty_column' => 0,
  /* admin_content */  /* Manage Content */   ),
  /* admin_content */  /* Manage Content */   'og_group_ref' => array(
  /* admin_content */  /* Manage Content */     'align' => '',
  /* admin_content */  /* Manage Content */     'separator' => '',
  /* admin_content */  /* Manage Content */     'empty_column' => 0,
  /* admin_content */  /* Manage Content */   ),
  /* admin_content */  /* Manage Content */   'field_gn2_simple_access_1' => array(
  /* admin_content */  /* Manage Content */     'sortable' => 1,
  /* admin_content */  /* Manage Content */     'default_sort_order' => 'asc',
  /* admin_content */  /* Manage Content */     'align' => '',
  /* admin_content */  /* Manage Content */     'separator' => '',
  /* admin_content */  /* Manage Content */     'empty_column' => 0,
  /* admin_content */  /* Manage Content */   ),
  /* admin_content */  /* Manage Content */   'created' => array(
  /* admin_content */  /* Manage Content */     'sortable' => 1,
  /* admin_content */  /* Manage Content */     'default_sort_order' => 'desc',
  /* admin_content */  /* Manage Content */     'align' => '',
  /* admin_content */  /* Manage Content */     'separator' => '',
  /* admin_content */  /* Manage Content */     'empty_column' => 0,
  /* admin_content */  /* Manage Content */   ),
  /* admin_content */  /* Manage Content */   'changed' => array(
  /* admin_content */  /* Manage Content */     'sortable' => 1,
  /* admin_content */  /* Manage Content */     'default_sort_order' => 'desc',
  /* admin_content */  /* Manage Content */     'align' => '',
  /* admin_content */  /* Manage Content */     'separator' => '',
  /* admin_content */  /* Manage Content */     'empty_column' => 0,
  /* admin_content */  /* Manage Content */   ),
  /* admin_content */  /* Manage Content */   'timestamp' => array(
  /* admin_content */  /* Manage Content */     'align' => '',
  /* admin_content */  /* Manage Content */     'separator' => '',
  /* admin_content */  /* Manage Content */     'empty_column' => 0,
  /* admin_content */  /* Manage Content */   ),
  /* admin_content */  /* Manage Content */ );
  /* admin_content */  /* Manage Content */ $handler->display->display_options['defaults']['style_options'] = FALSE;
  /* admin_content */  /* Manage Content */ $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  /* admin_content */  /* Manage Content */ $handler->display->display_options['defaults']['row_options'] = FALSE;
  /* admin_content */  /* Manage Content */ $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* admin_content */  /* Manage Content */ /* Relationship: OG membership: Group Node from OG membership */
  /* admin_content */  /* Manage Content */ $handler->display->display_options['relationships']['og_membership_related_node_group']['id'] = 'og_membership_related_node_group';
  /* admin_content */  /* Manage Content */ $handler->display->display_options['relationships']['og_membership_related_node_group']['table'] = 'og_membership';
  /* admin_content */  /* Manage Content */ $handler->display->display_options['relationships']['og_membership_related_node_group']['field'] = 'og_membership_related_node_group';
  /* admin_content */  /* Manage Content */ /* Relationship: OG membership: Node from OG membership */
  /* admin_content */  /* Manage Content */ $handler->display->display_options['relationships']['og_membership_related_node']['id'] = 'og_membership_related_node';
  /* admin_content */  /* Manage Content */ $handler->display->display_options['relationships']['og_membership_related_node']['table'] = 'og_membership';
  /* admin_content */  /* Manage Content */ $handler->display->display_options['relationships']['og_membership_related_node']['field'] = 'og_membership_related_node';
  /* admin_content */  /* Manage Content */ /* Relationship: OG membership: OG membership from Node */
  /* admin_content */  /* Manage Content */ $handler->display->display_options['relationships']['og_membership_rel']['id'] = 'og_membership_rel';
  /* admin_content */  /* Manage Content */ $handler->display->display_options['relationships']['og_membership_rel']['table'] = 'node';
  /* admin_content */  /* Manage Content */ $handler->display->display_options['relationships']['og_membership_rel']['field'] = 'og_membership_rel';
  /* admin_content */  /* Manage Content */ /* Relationship: OG membership: OG membership from Node group */
  /* admin_content */  /* Manage Content */ $handler->display->display_options['relationships']['og_membership_rel_group']['id'] = 'og_membership_rel_group';
  /* admin_content */  /* Manage Content */ $handler->display->display_options['relationships']['og_membership_rel_group']['table'] = 'node';
  /* admin_content */  /* Manage Content */ $handler->display->display_options['relationships']['og_membership_rel_group']['field'] = 'og_membership_rel_group';
  /* admin_content */  /* Manage Content */ /* Relationship: OG membership: OG Roles from membership */
  /* admin_content */  /* Manage Content */ $handler->display->display_options['relationships']['og_users_roles']['id'] = 'og_users_roles';
  /* admin_content */  /* Manage Content */ $handler->display->display_options['relationships']['og_users_roles']['table'] = 'og_membership';
  /* admin_content */  /* Manage Content */ $handler->display->display_options['relationships']['og_users_roles']['field'] = 'og_users_roles';
  /* admin_content */  /* Manage Content */ /* Relationship: OG membership: Type */
  /* admin_content */  /* Manage Content */ $handler->display->display_options['relationships']['type']['id'] = 'type';
  /* admin_content */  /* Manage Content */ $handler->display->display_options['relationships']['type']['table'] = 'og_membership';
  /* admin_content */  /* Manage Content */ $handler->display->display_options['relationships']['type']['field'] = 'type';
  /* admin_content */  /* Manage Content */ /* Relationship: Content: Author */
  /* admin_content */  /* Manage Content */ $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  /* admin_content */  /* Manage Content */ $handler->display->display_options['relationships']['uid']['table'] = 'node';
  /* admin_content */  /* Manage Content */ $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* admin_content */  /* Manage Content */ /* Relationship: Content: Vote results */
  /* admin_content */  /* Manage Content */ $handler->display->display_options['relationships']['votingapi_cache']['id'] = 'votingapi_cache';
  /* admin_content */  /* Manage Content */ $handler->display->display_options['relationships']['votingapi_cache']['table'] = 'node';
  /* admin_content */  /* Manage Content */ $handler->display->display_options['relationships']['votingapi_cache']['field'] = 'votingapi_cache';
  /* admin_content */  /* Manage Content */ $handler->display->display_options['relationships']['votingapi_cache']['label'] = 'Likes';
  /* admin_content */  /* Manage Content */ $handler->display->display_options['relationships']['votingapi_cache']['votingapi'] = array(
  /* admin_content */  /* Manage Content */   'value_type' => '',
  /* admin_content */  /* Manage Content */   'tag' => 'vote',
  /* admin_content */  /* Manage Content */   'function' => 'count',
  /* admin_content */  /* Manage Content */ );
  /* admin_content */  /* Manage Content */ /* Relationship: Content: Vote results */
  /* admin_content */  /* Manage Content */ $handler->display->display_options['relationships']['votingapi_cache_1']['id'] = 'votingapi_cache_1';
  /* admin_content */  /* Manage Content */ $handler->display->display_options['relationships']['votingapi_cache_1']['table'] = 'node';
  /* admin_content */  /* Manage Content */ $handler->display->display_options['relationships']['votingapi_cache_1']['field'] = 'votingapi_cache';
  /* admin_content */  /* Manage Content */ $handler->display->display_options['relationships']['votingapi_cache_1']['relationship'] = 'og_membership_related_node';
  /* admin_content */  /* Manage Content */ $handler->display->display_options['relationships']['votingapi_cache_1']['votingapi'] = array(
  /* admin_content */  /* Manage Content */   'value_type' => '',
  /* admin_content */  /* Manage Content */   'tag' => '',
  /* admin_content */  /* Manage Content */   'function' => 'sum',
  /* admin_content */  /* Manage Content */ );
  /* admin_content */  /* Manage Content */ $handler->display->display_options['defaults']['fields'] = FALSE;
  /* admin_content */  /* Manage Content */ /* Field: Bulk operations: Content */
  /* admin_content */  /* Manage Content */ $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  /* admin_content */  /* Manage Content */ $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'node';
  /* admin_content */  /* Manage Content */ $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  /* admin_content */  /* Manage Content */ $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '0';
  /* admin_content */  /* Manage Content */ $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  /* admin_content */  /* Manage Content */ $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  /* admin_content */  /* Manage Content */ $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  /* admin_content */  /* Manage Content */ $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
  /* admin_content */  /* Manage Content */   'action::node_assign_owner_action' => array(
  /* admin_content */  /* Manage Content */     'selected' => 1,
  /* admin_content */  /* Manage Content */     'postpone_processing' => 0,
  /* admin_content */  /* Manage Content */     'skip_confirmation' => 0,
  /* admin_content */  /* Manage Content */     'override_label' => 0,
  /* admin_content */  /* Manage Content */     'label' => '',
  /* admin_content */  /* Manage Content */   ),
  /* admin_content */  /* Manage Content */   'action::views_bulk_operations_delete_item' => array(
  /* admin_content */  /* Manage Content */     'selected' => 1,
  /* admin_content */  /* Manage Content */     'postpone_processing' => 0,
  /* admin_content */  /* Manage Content */     'skip_confirmation' => 0,
  /* admin_content */  /* Manage Content */     'override_label' => 0,
  /* admin_content */  /* Manage Content */     'label' => '',
  /* admin_content */  /* Manage Content */   ),
  /* admin_content */  /* Manage Content */   'rules_component::rules_make_organization_visible' => array(
  /* admin_content */  /* Manage Content */     'selected' => 1,
  /* admin_content */  /* Manage Content */     'postpone_processing' => 0,
  /* admin_content */  /* Manage Content */     'skip_confirmation' => 0,
  /* admin_content */  /* Manage Content */     'override_label' => 0,
  /* admin_content */  /* Manage Content */     'label' => '',
  /* admin_content */  /* Manage Content */   ),
  /* admin_content */  /* Manage Content */   'rules_component::rules_make_public' => array(
  /* admin_content */  /* Manage Content */     'selected' => 1,
  /* admin_content */  /* Manage Content */     'postpone_processing' => 0,
  /* admin_content */  /* Manage Content */     'skip_confirmation' => 0,
  /* admin_content */  /* Manage Content */     'override_label' => 0,
  /* admin_content */  /* Manage Content */     'label' => '',
  /* admin_content */  /* Manage Content */   ),
  /* admin_content */  /* Manage Content */   'rules_component::rules_make_sitewide' => array(
  /* admin_content */  /* Manage Content */     'selected' => 1,
  /* admin_content */  /* Manage Content */     'postpone_processing' => 0,
  /* admin_content */  /* Manage Content */     'skip_confirmation' => 0,
  /* admin_content */  /* Manage Content */     'override_label' => 0,
  /* admin_content */  /* Manage Content */     'label' => '',
  /* admin_content */  /* Manage Content */   ),
  /* admin_content */  /* Manage Content */   'action::node_publish_action' => array(
  /* admin_content */  /* Manage Content */     'selected' => 1,
  /* admin_content */  /* Manage Content */     'postpone_processing' => 0,
  /* admin_content */  /* Manage Content */     'skip_confirmation' => 0,
  /* admin_content */  /* Manage Content */     'override_label' => 0,
  /* admin_content */  /* Manage Content */     'label' => '',
  /* admin_content */  /* Manage Content */   ),
  /* admin_content */  /* Manage Content */   'rules_component::scheduler_remove_unpublish_date_component' => array(
  /* admin_content */  /* Manage Content */     'selected' => 1,
  /* admin_content */  /* Manage Content */     'postpone_processing' => 0,
  /* admin_content */  /* Manage Content */     'skip_confirmation' => 0,
  /* admin_content */  /* Manage Content */     'override_label' => 0,
  /* admin_content */  /* Manage Content */     'label' => '',
  /* admin_content */  /* Manage Content */   ),
  /* admin_content */  /* Manage Content */   'action::node_unpublish_action' => array(
  /* admin_content */  /* Manage Content */     'selected' => 1,
  /* admin_content */  /* Manage Content */     'postpone_processing' => 0,
  /* admin_content */  /* Manage Content */     'skip_confirmation' => 0,
  /* admin_content */  /* Manage Content */     'override_label' => 0,
  /* admin_content */  /* Manage Content */     'label' => '',
  /* admin_content */  /* Manage Content */   ),
  /* admin_content */  /* Manage Content */   'action::node_unpublish_by_keyword_action' => array(
  /* admin_content */  /* Manage Content */     'selected' => 1,
  /* admin_content */  /* Manage Content */     'postpone_processing' => 0,
  /* admin_content */  /* Manage Content */     'skip_confirmation' => 0,
  /* admin_content */  /* Manage Content */     'override_label' => 0,
  /* admin_content */  /* Manage Content */     'label' => '',
  /* admin_content */  /* Manage Content */   ),
  /* admin_content */  /* Manage Content */ );
  /* admin_content */  /* Manage Content */ /* Field: Content: Author uid */
  /* admin_content */  /* Manage Content */ $handler->display->display_options['fields']['uid']['id'] = 'uid';
  /* admin_content */  /* Manage Content */ $handler->display->display_options['fields']['uid']['table'] = 'node';
  /* admin_content */  /* Manage Content */ $handler->display->display_options['fields']['uid']['field'] = 'uid';
  /* admin_content */  /* Manage Content */ $handler->display->display_options['fields']['uid']['exclude'] = TRUE;
  /* admin_content */  /* Manage Content */ /* Field: Content: Published */
  /* admin_content */  /* Manage Content */ $handler->display->display_options['fields']['status']['id'] = 'status';
  /* admin_content */  /* Manage Content */ $handler->display->display_options['fields']['status']['table'] = 'node';
  /* admin_content */  /* Manage Content */ $handler->display->display_options['fields']['status']['field'] = 'status';
  /* admin_content */  /* Manage Content */ /* Field: Content: Type */
  /* admin_content */  /* Manage Content */ $handler->display->display_options['fields']['type']['id'] = 'type';
  /* admin_content */  /* Manage Content */ $handler->display->display_options['fields']['type']['table'] = 'node';
  /* admin_content */  /* Manage Content */ $handler->display->display_options['fields']['type']['field'] = 'type';
  /* admin_content */  /* Manage Content */ /* Field: Content: Title */
  /* admin_content */  /* Manage Content */ $handler->display->display_options['fields']['title']['id'] = 'title';
  /* admin_content */  /* Manage Content */ $handler->display->display_options['fields']['title']['table'] = 'node';
  /* admin_content */  /* Manage Content */ $handler->display->display_options['fields']['title']['field'] = 'title';
  /* admin_content */  /* Manage Content */ $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  /* admin_content */  /* Manage Content */ $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* admin_content */  /* Manage Content */ /* Field: Content: Edit link */
  /* admin_content */  /* Manage Content */ $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  /* admin_content */  /* Manage Content */ $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  /* admin_content */  /* Manage Content */ $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  /* admin_content */  /* Manage Content */ /* Field: User: Name */
  /* admin_content */  /* Manage Content */ $handler->display->display_options['fields']['name']['id'] = 'name';
  /* admin_content */  /* Manage Content */ $handler->display->display_options['fields']['name']['table'] = 'users';
  /* admin_content */  /* Manage Content */ $handler->display->display_options['fields']['name']['field'] = 'name';
  /* admin_content */  /* Manage Content */ $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  /* admin_content */  /* Manage Content */ $handler->display->display_options['fields']['name']['label'] = 'Author';
  /* admin_content */  /* Manage Content */ /* Field: Content: Nid */
  /* admin_content */  /* Manage Content */ $handler->display->display_options['fields']['nid']['id'] = 'nid';
  /* admin_content */  /* Manage Content */ $handler->display->display_options['fields']['nid']['table'] = 'node';
  /* admin_content */  /* Manage Content */ $handler->display->display_options['fields']['nid']['field'] = 'nid';
  /* admin_content */  /* Manage Content */ /* Field: Content: Groups audience */
  /* admin_content */  /* Manage Content */ $handler->display->display_options['fields']['og_group_ref']['id'] = 'og_group_ref';
  /* admin_content */  /* Manage Content */ $handler->display->display_options['fields']['og_group_ref']['table'] = 'og_membership';
  /* admin_content */  /* Manage Content */ $handler->display->display_options['fields']['og_group_ref']['field'] = 'og_group_ref';
  /* admin_content */  /* Manage Content */ $handler->display->display_options['fields']['og_group_ref']['settings'] = array(
  /* admin_content */  /* Manage Content */   'link' => 0,
  /* admin_content */  /* Manage Content */   'field_formatter_class' => '',
  /* admin_content */  /* Manage Content */ );
  /* admin_content */  /* Manage Content */ $handler->display->display_options['fields']['og_group_ref']['delta_offset'] = '0';
  /* admin_content */  /* Manage Content */ /* Field: Content: Who can see this content? */
  /* admin_content */  /* Manage Content */ $handler->display->display_options['fields']['field_gn2_simple_access_1']['id'] = 'field_gn2_simple_access_1';
  /* admin_content */  /* Manage Content */ $handler->display->display_options['fields']['field_gn2_simple_access_1']['table'] = 'field_data_field_gn2_simple_access';
  /* admin_content */  /* Manage Content */ $handler->display->display_options['fields']['field_gn2_simple_access_1']['field'] = 'field_gn2_simple_access';
  /* admin_content */  /* Manage Content */ $handler->display->display_options['fields']['field_gn2_simple_access_1']['settings'] = array(
  /* admin_content */  /* Manage Content */   'field_formatter_class' => '',
  /* admin_content */  /* Manage Content */ );
  /* admin_content */  /* Manage Content */ /* Field: Content: Post date */
  /* admin_content */  /* Manage Content */ $handler->display->display_options['fields']['created']['id'] = 'created';
  /* admin_content */  /* Manage Content */ $handler->display->display_options['fields']['created']['table'] = 'node';
  /* admin_content */  /* Manage Content */ $handler->display->display_options['fields']['created']['field'] = 'created';
  /* admin_content */  /* Manage Content */ $handler->display->display_options['fields']['created']['label'] = 'PostDate';
  /* admin_content */  /* Manage Content */ $handler->display->display_options['fields']['created']['date_format'] = 'short';
  /* admin_content */  /* Manage Content */ $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
  /* admin_content */  /* Manage Content */ /* Field: Content: Updated date */
  /* admin_content */  /* Manage Content */ $handler->display->display_options['fields']['changed']['id'] = 'changed';
  /* admin_content */  /* Manage Content */ $handler->display->display_options['fields']['changed']['table'] = 'node';
  /* admin_content */  /* Manage Content */ $handler->display->display_options['fields']['changed']['field'] = 'changed';
  /* admin_content */  /* Manage Content */ $handler->display->display_options['fields']['changed']['date_format'] = 'short';
  /* admin_content */  /* Manage Content */ $handler->display->display_options['fields']['changed']['second_date_format'] = 'date_format_globalnet_date';
  /* admin_content */  /* Manage Content */ /* Field: Content: Has new content */
  /* admin_content */  /* Manage Content */ $handler->display->display_options['fields']['timestamp']['id'] = 'timestamp';
  /* admin_content */  /* Manage Content */ $handler->display->display_options['fields']['timestamp']['table'] = 'history';
  /* admin_content */  /* Manage Content */ $handler->display->display_options['fields']['timestamp']['field'] = 'timestamp';
  /* admin_content */  /* Manage Content */ $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* admin_content */  /* Manage Content */ /* Sort criterion: Content: Updated date */
  /* admin_content */  /* Manage Content */ $handler->display->display_options['sorts']['changed']['id'] = 'changed';
  /* admin_content */  /* Manage Content */ $handler->display->display_options['sorts']['changed']['table'] = 'node';
  /* admin_content */  /* Manage Content */ $handler->display->display_options['sorts']['changed']['field'] = 'changed';
  /* admin_content */  /* Manage Content */ $handler->display->display_options['sorts']['changed']['order'] = 'DESC';
  /* admin_content */  /* Manage Content */ $handler->display->display_options['sorts']['changed']['exposed'] = TRUE;
  /* admin_content */  /* Manage Content */ $handler->display->display_options['sorts']['changed']['expose']['label'] = 'Updated date';
  /* admin_content */  /* Manage Content */ /* Sort criterion: Content: Post date */
  /* admin_content */  /* Manage Content */ $handler->display->display_options['sorts']['created']['id'] = 'created';
  /* admin_content */  /* Manage Content */ $handler->display->display_options['sorts']['created']['table'] = 'node';
  /* admin_content */  /* Manage Content */ $handler->display->display_options['sorts']['created']['field'] = 'created';
  /* admin_content */  /* Manage Content */ $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* admin_content */  /* Manage Content */ $handler->display->display_options['sorts']['created']['exposed'] = TRUE;
  /* admin_content */  /* Manage Content */ $handler->display->display_options['sorts']['created']['expose']['label'] = 'Post date';
  /* admin_content */  /* Manage Content */ /* Sort criterion: OG membership: Group ID */
  /* admin_content */  /* Manage Content */ $handler->display->display_options['sorts']['gid']['id'] = 'gid';
  /* admin_content */  /* Manage Content */ $handler->display->display_options['sorts']['gid']['table'] = 'og_membership';
  /* admin_content */  /* Manage Content */ $handler->display->display_options['sorts']['gid']['field'] = 'gid';
  /* admin_content */  /* Manage Content */ $handler->display->display_options['sorts']['gid']['expose']['label'] = 'Group ID';
  /* admin_content */  /* Manage Content */ $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  /* admin_content */  /* Manage Content */ $handler->display->display_options['defaults']['filters'] = FALSE;
  /* admin_content */  /* Manage Content */ /* Filter criterion: Content: Published */
  /* admin_content */  /* Manage Content */ $handler->display->display_options['filters']['status']['id'] = 'status';
  /* admin_content */  /* Manage Content */ $handler->display->display_options['filters']['status']['table'] = 'node';
  /* admin_content */  /* Manage Content */ $handler->display->display_options['filters']['status']['field'] = 'status';
  /* admin_content */  /* Manage Content */ $handler->display->display_options['filters']['status']['value'] = 'All';
  /* admin_content */  /* Manage Content */ $handler->display->display_options['filters']['status']['group'] = 1;
  /* admin_content */  /* Manage Content */ $handler->display->display_options['filters']['status']['exposed'] = TRUE;
  /* admin_content */  /* Manage Content */ $handler->display->display_options['filters']['status']['expose']['operator_id'] = '';
  /* admin_content */  /* Manage Content */ $handler->display->display_options['filters']['status']['expose']['label'] = 'Published';
  /* admin_content */  /* Manage Content */ $handler->display->display_options['filters']['status']['expose']['operator'] = 'status_op';
  /* admin_content */  /* Manage Content */ $handler->display->display_options['filters']['status']['expose']['identifier'] = 'status';
  /* admin_content */  /* Manage Content */ $handler->display->display_options['filters']['status']['expose']['remember_roles'] = array(
  /* admin_content */  /* Manage Content */   2 => '2',
  /* admin_content */  /* Manage Content */   1 => 0,
  /* admin_content */  /* Manage Content */   9 => 0,
  /* admin_content */  /* Manage Content */ );
  /* admin_content */  /* Manage Content */ /* Filter criterion: Content: Type */
  /* admin_content */  /* Manage Content */ $handler->display->display_options['filters']['type']['id'] = 'type';
  /* admin_content */  /* Manage Content */ $handler->display->display_options['filters']['type']['table'] = 'node';
  /* admin_content */  /* Manage Content */ $handler->display->display_options['filters']['type']['field'] = 'type';
  /* admin_content */  /* Manage Content */ $handler->display->display_options['filters']['type']['value'] = array(
  /* admin_content */  /* Manage Content */   'about_page' => 'about_page',
  /* admin_content */  /* Manage Content */   'alumni_group' => 'alumni_group',
  /* admin_content */  /* Manage Content */   'announcement' => 'announcement',
  /* admin_content */  /* Manage Content */   'coi' => 'coi',
  /* admin_content */  /* Manage Content */   'course' => 'course',
  /* admin_content */  /* Manage Content */   'course_group' => 'course_group',
  /* admin_content */  /* Manage Content */   'program' => 'program',
  /* admin_content */  /* Manage Content */   'event' => 'event',
  /* admin_content */  /* Manage Content */   'media_gallery' => 'media_gallery',
  /* admin_content */  /* Manage Content */   'group' => 'group',
  /* admin_content */  /* Manage Content */   'help' => 'help',
  /* admin_content */  /* Manage Content */   'news' => 'news',
  /* admin_content */  /* Manage Content */   'organization' => 'organization',
  /* admin_content */  /* Manage Content */   'page' => 'page',
  /* admin_content */  /* Manage Content */   'panel' => 'panel',
  /* admin_content */  /* Manage Content */   'poll' => 'poll',
  /* admin_content */  /* Manage Content */   'post' => 'post',
  /* admin_content */  /* Manage Content */   'publication' => 'publication',
  /* admin_content */  /* Manage Content */ );
  /* admin_content */  /* Manage Content */ $handler->display->display_options['filters']['type']['group'] = 1;
  /* admin_content */  /* Manage Content */ $handler->display->display_options['filters']['type']['exposed'] = TRUE;
  /* admin_content */  /* Manage Content */ $handler->display->display_options['filters']['type']['expose']['operator_id'] = 'type_op';
  /* admin_content */  /* Manage Content */ $handler->display->display_options['filters']['type']['expose']['label'] = 'Content Type';
  /* admin_content */  /* Manage Content */ $handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
  /* admin_content */  /* Manage Content */ $handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';
  /* admin_content */  /* Manage Content */ $handler->display->display_options['filters']['type']['expose']['multiple'] = TRUE;
  /* admin_content */  /* Manage Content */ $handler->display->display_options['filters']['type']['expose']['remember_roles'] = array(
  /* admin_content */  /* Manage Content */   2 => '2',
  /* admin_content */  /* Manage Content */   1 => 0,
  /* admin_content */  /* Manage Content */   9 => 0,
  /* admin_content */  /* Manage Content */ );
  /* admin_content */  /* Manage Content */ $handler->display->display_options['filters']['type']['expose']['reduce'] = TRUE;
  /* admin_content */  /* Manage Content */ /* Filter criterion: Content: Who can see this content? (field_gn2_simple_access) */
  /* admin_content */  /* Manage Content */ $handler->display->display_options['filters']['field_gn2_simple_access_value']['id'] = 'field_gn2_simple_access_value';
  /* admin_content */  /* Manage Content */ $handler->display->display_options['filters']['field_gn2_simple_access_value']['table'] = 'field_data_field_gn2_simple_access';
  /* admin_content */  /* Manage Content */ $handler->display->display_options['filters']['field_gn2_simple_access_value']['field'] = 'field_gn2_simple_access_value';
  /* admin_content */  /* Manage Content */ $handler->display->display_options['filters']['field_gn2_simple_access_value']['value'] = array(
  /* admin_content */  /* Manage Content */   'all' => 'all',
  /* admin_content */  /* Manage Content */   'public' => 'public',
  /* admin_content */  /* Manage Content */ );
  /* admin_content */  /* Manage Content */ $handler->display->display_options['filters']['field_gn2_simple_access_value']['group'] = 1;
  /* admin_content */  /* Manage Content */ $handler->display->display_options['filters']['field_gn2_simple_access_value']['exposed'] = TRUE;
  /* admin_content */  /* Manage Content */ $handler->display->display_options['filters']['field_gn2_simple_access_value']['expose']['operator_id'] = 'field_gn2_simple_access_value_op';
  /* admin_content */  /* Manage Content */ $handler->display->display_options['filters']['field_gn2_simple_access_value']['expose']['label'] = 'Public';
  /* admin_content */  /* Manage Content */ $handler->display->display_options['filters']['field_gn2_simple_access_value']['expose']['operator'] = 'field_gn2_simple_access_value_op';
  /* admin_content */  /* Manage Content */ $handler->display->display_options['filters']['field_gn2_simple_access_value']['expose']['identifier'] = 'field_gn2_simple_access_value';
  /* admin_content */  /* Manage Content */ $handler->display->display_options['filters']['field_gn2_simple_access_value']['expose']['remember_roles'] = array(
  /* admin_content */  /* Manage Content */   2 => '2',
  /* admin_content */  /* Manage Content */   1 => 0,
  /* admin_content */  /* Manage Content */   9 => 0,
  /* admin_content */  /* Manage Content */   10 => 0,
  /* admin_content */  /* Manage Content */ );
  /* admin_content */  /* Manage Content */ $handler->display->display_options['filters']['field_gn2_simple_access_value']['expose']['reduce'] = TRUE;
  /* admin_content */  /* Manage Content */ /* Filter criterion: Global: Combine fields filter */
  /* admin_content */  /* Manage Content */ $handler->display->display_options['filters']['combine']['id'] = 'combine';
  /* admin_content */  /* Manage Content */ $handler->display->display_options['filters']['combine']['table'] = 'views';
  /* admin_content */  /* Manage Content */ $handler->display->display_options['filters']['combine']['field'] = 'combine';
  /* admin_content */  /* Manage Content */ $handler->display->display_options['filters']['combine']['operator'] = 'word';
  /* admin_content */  /* Manage Content */ $handler->display->display_options['filters']['combine']['exposed'] = TRUE;
  /* admin_content */  /* Manage Content */ $handler->display->display_options['filters']['combine']['expose']['operator_id'] = 'combine_op';
  /* admin_content */  /* Manage Content */ $handler->display->display_options['filters']['combine']['expose']['label'] = 'Search';
  /* admin_content */  /* Manage Content */ $handler->display->display_options['filters']['combine']['expose']['operator'] = 'combine_op';
  /* admin_content */  /* Manage Content */ $handler->display->display_options['filters']['combine']['expose']['identifier'] = 'combine';
  /* admin_content */  /* Manage Content */ $handler->display->display_options['filters']['combine']['expose']['remember_roles'] = array(
  /* admin_content */  /* Manage Content */   2 => '2',
  /* admin_content */  /* Manage Content */   1 => 0,
  /* admin_content */  /* Manage Content */   9 => 0,
  /* admin_content */  /* Manage Content */   10 => 0,
  /* admin_content */  /* Manage Content */ );
  /* admin_content */  /* Manage Content */ $handler->display->display_options['filters']['combine']['expose']['autocomplete_items'] = '10';
  /* admin_content */  /* Manage Content */ $handler->display->display_options['filters']['combine']['expose']['autocomplete_min_chars'] = '0';
  /* admin_content */  /* Manage Content */ $handler->display->display_options['filters']['combine']['expose']['autocomplete_raw_suggestion'] = 1;
  /* admin_content */  /* Manage Content */ $handler->display->display_options['filters']['combine']['expose']['autocomplete_raw_dropdown'] = 1;
  /* admin_content */  /* Manage Content */ $handler->display->display_options['filters']['combine']['expose']['autocomplete_dependent'] = 0;
  /* admin_content */  /* Manage Content */ $handler->display->display_options['filters']['combine']['fields'] = array(
  /* admin_content */  /* Manage Content */   'title' => 'title',
  /* admin_content */  /* Manage Content */   'name' => 'name',
  /* admin_content */  /* Manage Content */ );
  /* admin_content */  /* Manage Content */ $handler->display->display_options['path'] = 'admin/manage/content';

  /* admin_content */ /* Display: Manage Events */
  /* admin_content */  /* Manage Events */ $handler = $view->new_display('page', 'Manage Events', 'page_manage_events');
  /* admin_content */  /* Manage Events */ $handler->display->display_options['defaults']['title'] = FALSE;
  /* admin_content */  /* Manage Events */ $handler->display->display_options['title'] = 'Manage Events';
  /* admin_content */  /* Manage Events */ $handler->display->display_options['defaults']['css_class'] = FALSE;
  /* admin_content */  /* Manage Events */ $handler->display->display_options['defaults']['pager'] = FALSE;
  /* admin_content */  /* Manage Events */ $handler->display->display_options['pager']['type'] = 'mini';
  /* admin_content */  /* Manage Events */ $handler->display->display_options['pager']['options']['items_per_page'] = '25';
  /* admin_content */  /* Manage Events */ $handler->display->display_options['pager']['options']['offset'] = '0';
  /* admin_content */  /* Manage Events */ $handler->display->display_options['pager']['options']['id'] = '0';
  /* admin_content */  /* Manage Events */ $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  /* admin_content */  /* Manage Events */ $handler->display->display_options['style_plugin'] = 'table';
  /* admin_content */  /* Manage Events */ $handler->display->display_options['style_options']['columns'] = array(
  /* admin_content */  /* Manage Events */   'views_bulk_operations' => 'views_bulk_operations',
  /* admin_content */  /* Manage Events */   'edit_node' => 'edit_node',
  /* admin_content */  /* Manage Events */   'nid' => 'nid',
  /* admin_content */  /* Manage Events */   'title' => 'title',
  /* admin_content */  /* Manage Events */   'field_event_date' => 'field_event_date',
  /* admin_content */  /* Manage Events */   'field_event_start_date' => 'field_event_start_date',
  /* admin_content */  /* Manage Events */   'name' => 'name',
  /* admin_content */  /* Manage Events */   'field_event_contact_person' => 'field_event_contact_person',
  /* admin_content */  /* Manage Events */   'title_1' => 'title_1',
  /* admin_content */  /* Manage Events */   'organization_short' => 'organization_short',
  /* admin_content */  /* Manage Events */   'status' => 'status',
  /* admin_content */  /* Manage Events */   'created' => 'created',
  /* admin_content */  /* Manage Events */   'changed' => 'changed',
  /* admin_content */  /* Manage Events */ );
  /* admin_content */  /* Manage Events */ $handler->display->display_options['style_options']['default'] = 'created';
  /* admin_content */  /* Manage Events */ $handler->display->display_options['style_options']['info'] = array(
  /* admin_content */  /* Manage Events */   'views_bulk_operations' => array(
  /* admin_content */  /* Manage Events */     'align' => '',
  /* admin_content */  /* Manage Events */     'separator' => '',
  /* admin_content */  /* Manage Events */     'empty_column' => 0,
  /* admin_content */  /* Manage Events */   ),
  /* admin_content */  /* Manage Events */   'edit_node' => array(
  /* admin_content */  /* Manage Events */     'align' => '',
  /* admin_content */  /* Manage Events */     'separator' => '',
  /* admin_content */  /* Manage Events */     'empty_column' => 0,
  /* admin_content */  /* Manage Events */   ),
  /* admin_content */  /* Manage Events */   'nid' => array(
  /* admin_content */  /* Manage Events */     'sortable' => 1,
  /* admin_content */  /* Manage Events */     'default_sort_order' => 'asc',
  /* admin_content */  /* Manage Events */     'align' => '',
  /* admin_content */  /* Manage Events */     'separator' => '',
  /* admin_content */  /* Manage Events */     'empty_column' => 0,
  /* admin_content */  /* Manage Events */   ),
  /* admin_content */  /* Manage Events */   'title' => array(
  /* admin_content */  /* Manage Events */     'sortable' => 1,
  /* admin_content */  /* Manage Events */     'default_sort_order' => 'asc',
  /* admin_content */  /* Manage Events */     'align' => '',
  /* admin_content */  /* Manage Events */     'separator' => '',
  /* admin_content */  /* Manage Events */     'empty_column' => 0,
  /* admin_content */  /* Manage Events */   ),
  /* admin_content */  /* Manage Events */   'field_event_date' => array(
  /* admin_content */  /* Manage Events */     'align' => '',
  /* admin_content */  /* Manage Events */     'separator' => '',
  /* admin_content */  /* Manage Events */     'empty_column' => 0,
  /* admin_content */  /* Manage Events */   ),
  /* admin_content */  /* Manage Events */   'field_event_start_date' => array(
  /* admin_content */  /* Manage Events */     'sortable' => 1,
  /* admin_content */  /* Manage Events */     'default_sort_order' => 'asc',
  /* admin_content */  /* Manage Events */     'align' => '',
  /* admin_content */  /* Manage Events */     'separator' => '',
  /* admin_content */  /* Manage Events */     'empty_column' => 0,
  /* admin_content */  /* Manage Events */   ),
  /* admin_content */  /* Manage Events */   'name' => array(
  /* admin_content */  /* Manage Events */     'sortable' => 1,
  /* admin_content */  /* Manage Events */     'default_sort_order' => 'asc',
  /* admin_content */  /* Manage Events */     'align' => '',
  /* admin_content */  /* Manage Events */     'separator' => '',
  /* admin_content */  /* Manage Events */     'empty_column' => 0,
  /* admin_content */  /* Manage Events */   ),
  /* admin_content */  /* Manage Events */   'field_event_contact_person' => array(
  /* admin_content */  /* Manage Events */     'align' => '',
  /* admin_content */  /* Manage Events */     'separator' => '',
  /* admin_content */  /* Manage Events */     'empty_column' => 0,
  /* admin_content */  /* Manage Events */   ),
  /* admin_content */  /* Manage Events */   'title_1' => array(
  /* admin_content */  /* Manage Events */     'sortable' => 0,
  /* admin_content */  /* Manage Events */     'default_sort_order' => 'asc',
  /* admin_content */  /* Manage Events */     'align' => '',
  /* admin_content */  /* Manage Events */     'separator' => '',
  /* admin_content */  /* Manage Events */     'empty_column' => 0,
  /* admin_content */  /* Manage Events */   ),
  /* admin_content */  /* Manage Events */   'organization_short' => array(
  /* admin_content */  /* Manage Events */     'align' => '',
  /* admin_content */  /* Manage Events */     'separator' => '',
  /* admin_content */  /* Manage Events */     'empty_column' => 0,
  /* admin_content */  /* Manage Events */   ),
  /* admin_content */  /* Manage Events */   'status' => array(
  /* admin_content */  /* Manage Events */     'sortable' => 1,
  /* admin_content */  /* Manage Events */     'default_sort_order' => 'asc',
  /* admin_content */  /* Manage Events */     'align' => '',
  /* admin_content */  /* Manage Events */     'separator' => '',
  /* admin_content */  /* Manage Events */     'empty_column' => 0,
  /* admin_content */  /* Manage Events */   ),
  /* admin_content */  /* Manage Events */   'created' => array(
  /* admin_content */  /* Manage Events */     'sortable' => 1,
  /* admin_content */  /* Manage Events */     'default_sort_order' => 'desc',
  /* admin_content */  /* Manage Events */     'align' => '',
  /* admin_content */  /* Manage Events */     'separator' => '',
  /* admin_content */  /* Manage Events */     'empty_column' => 0,
  /* admin_content */  /* Manage Events */   ),
  /* admin_content */  /* Manage Events */   'changed' => array(
  /* admin_content */  /* Manage Events */     'sortable' => 1,
  /* admin_content */  /* Manage Events */     'default_sort_order' => 'desc',
  /* admin_content */  /* Manage Events */     'align' => '',
  /* admin_content */  /* Manage Events */     'separator' => '',
  /* admin_content */  /* Manage Events */     'empty_column' => 0,
  /* admin_content */  /* Manage Events */   ),
  /* admin_content */  /* Manage Events */ );
  /* admin_content */  /* Manage Events */ $handler->display->display_options['defaults']['style_options'] = FALSE;
  /* admin_content */  /* Manage Events */ $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  /* admin_content */  /* Manage Events */ $handler->display->display_options['defaults']['row_options'] = FALSE;
  /* admin_content */  /* Manage Events */ $handler->display->display_options['defaults']['fields'] = FALSE;
  /* admin_content */  /* Manage Events */ /* Field: Bulk operations: Content */
  /* admin_content */  /* Manage Events */ $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  /* admin_content */  /* Manage Events */ $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'node';
  /* admin_content */  /* Manage Events */ $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  /* admin_content */  /* Manage Events */ $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '0';
  /* admin_content */  /* Manage Events */ $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  /* admin_content */  /* Manage Events */ $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  /* admin_content */  /* Manage Events */ $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  /* admin_content */  /* Manage Events */ $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
  /* admin_content */  /* Manage Events */   'action::node_assign_owner_action' => array(
  /* admin_content */  /* Manage Events */     'selected' => 1,
  /* admin_content */  /* Manage Events */     'postpone_processing' => 0,
  /* admin_content */  /* Manage Events */     'skip_confirmation' => 0,
  /* admin_content */  /* Manage Events */     'override_label' => 0,
  /* admin_content */  /* Manage Events */     'label' => '',
  /* admin_content */  /* Manage Events */   ),
  /* admin_content */  /* Manage Events */   'action::views_bulk_operations_delete_item' => array(
  /* admin_content */  /* Manage Events */     'selected' => 1,
  /* admin_content */  /* Manage Events */     'postpone_processing' => 0,
  /* admin_content */  /* Manage Events */     'skip_confirmation' => 0,
  /* admin_content */  /* Manage Events */     'override_label' => 0,
  /* admin_content */  /* Manage Events */     'label' => '',
  /* admin_content */  /* Manage Events */   ),
  /* admin_content */  /* Manage Events */   'action::node_publish_action' => array(
  /* admin_content */  /* Manage Events */     'selected' => 1,
  /* admin_content */  /* Manage Events */     'postpone_processing' => 0,
  /* admin_content */  /* Manage Events */     'skip_confirmation' => 0,
  /* admin_content */  /* Manage Events */     'override_label' => 0,
  /* admin_content */  /* Manage Events */     'label' => '',
  /* admin_content */  /* Manage Events */   ),
  /* admin_content */  /* Manage Events */   'action::node_unpublish_action' => array(
  /* admin_content */  /* Manage Events */     'selected' => 1,
  /* admin_content */  /* Manage Events */     'postpone_processing' => 0,
  /* admin_content */  /* Manage Events */     'skip_confirmation' => 0,
  /* admin_content */  /* Manage Events */     'override_label' => 0,
  /* admin_content */  /* Manage Events */     'label' => '',
  /* admin_content */  /* Manage Events */   ),
  /* admin_content */  /* Manage Events */ );
  /* admin_content */  /* Manage Events */ /* Field: Content: Edit link */
  /* admin_content */  /* Manage Events */ $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  /* admin_content */  /* Manage Events */ $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  /* admin_content */  /* Manage Events */ $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  /* admin_content */  /* Manage Events */ /* Field: Content: Nid */
  /* admin_content */  /* Manage Events */ $handler->display->display_options['fields']['nid']['id'] = 'nid';
  /* admin_content */  /* Manage Events */ $handler->display->display_options['fields']['nid']['table'] = 'node';
  /* admin_content */  /* Manage Events */ $handler->display->display_options['fields']['nid']['field'] = 'nid';
  /* admin_content */  /* Manage Events */ $handler->display->display_options['fields']['nid']['label'] = 'ID';
  /* admin_content */  /* Manage Events */ $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  /* admin_content */  /* Manage Events */ $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* admin_content */  /* Manage Events */ /* Field: Content: Title */
  /* admin_content */  /* Manage Events */ $handler->display->display_options['fields']['title']['id'] = 'title';
  /* admin_content */  /* Manage Events */ $handler->display->display_options['fields']['title']['table'] = 'node';
  /* admin_content */  /* Manage Events */ $handler->display->display_options['fields']['title']['field'] = 'title';
  /* admin_content */  /* Manage Events */ $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  /* admin_content */  /* Manage Events */ $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* admin_content */  /* Manage Events */ /* Field: Content: Event Start Date */
  /* admin_content */  /* Manage Events */ $handler->display->display_options['fields']['field_event_start_date']['id'] = 'field_event_start_date';
  /* admin_content */  /* Manage Events */ $handler->display->display_options['fields']['field_event_start_date']['table'] = 'field_data_field_event_start_date';
  /* admin_content */  /* Manage Events */ $handler->display->display_options['fields']['field_event_start_date']['field'] = 'field_event_start_date';
  /* admin_content */  /* Manage Events */ $handler->display->display_options['fields']['field_event_start_date']['element_type'] = '0';
  /* admin_content */  /* Manage Events */ $handler->display->display_options['fields']['field_event_start_date']['element_label_colon'] = FALSE;
  /* admin_content */  /* Manage Events */ $handler->display->display_options['fields']['field_event_start_date']['element_wrapper_type'] = '0';
  /* admin_content */  /* Manage Events */ $handler->display->display_options['fields']['field_event_start_date']['element_default_classes'] = FALSE;
  /* admin_content */  /* Manage Events */ $handler->display->display_options['fields']['field_event_start_date']['settings'] = array(
  /* admin_content */  /* Manage Events */   'format_type' => 'long',
  /* admin_content */  /* Manage Events */   'fromto' => 'both',
  /* admin_content */  /* Manage Events */   'multiple_number' => '',
  /* admin_content */  /* Manage Events */   'multiple_from' => '',
  /* admin_content */  /* Manage Events */   'multiple_to' => '',
  /* admin_content */  /* Manage Events */   'show_repeat_rule' => 'show',
  /* admin_content */  /* Manage Events */   'field_formatter_class' => '',
  /* admin_content */  /* Manage Events */ );
  /* admin_content */  /* Manage Events */ $handler->display->display_options['fields']['field_event_start_date']['field_api_classes'] = TRUE;
  /* admin_content */  /* Manage Events */ /* Field: User: Name */
  /* admin_content */  /* Manage Events */ $handler->display->display_options['fields']['name']['id'] = 'name';
  /* admin_content */  /* Manage Events */ $handler->display->display_options['fields']['name']['table'] = 'users';
  /* admin_content */  /* Manage Events */ $handler->display->display_options['fields']['name']['field'] = 'name';
  /* admin_content */  /* Manage Events */ $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  /* admin_content */  /* Manage Events */ $handler->display->display_options['fields']['name']['label'] = 'Author';
  /* admin_content */  /* Manage Events */ $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  /* admin_content */  /* Manage Events */ /* Field: Content: Event Contact Person */
  /* admin_content */  /* Manage Events */ $handler->display->display_options['fields']['field_event_contact_person']['id'] = 'field_event_contact_person';
  /* admin_content */  /* Manage Events */ $handler->display->display_options['fields']['field_event_contact_person']['table'] = 'field_data_field_event_contact_person';
  /* admin_content */  /* Manage Events */ $handler->display->display_options['fields']['field_event_contact_person']['field'] = 'field_event_contact_person';
  /* admin_content */  /* Manage Events */ $handler->display->display_options['fields']['field_event_contact_person']['label'] = 'Contact Person';
  /* admin_content */  /* Manage Events */ $handler->display->display_options['fields']['field_event_contact_person']['element_type'] = '0';
  /* admin_content */  /* Manage Events */ $handler->display->display_options['fields']['field_event_contact_person']['element_label_colon'] = FALSE;
  /* admin_content */  /* Manage Events */ $handler->display->display_options['fields']['field_event_contact_person']['element_wrapper_type'] = '0';
  /* admin_content */  /* Manage Events */ $handler->display->display_options['fields']['field_event_contact_person']['element_default_classes'] = FALSE;
  /* admin_content */  /* Manage Events */ $handler->display->display_options['fields']['field_event_contact_person']['settings'] = array(
  /* admin_content */  /* Manage Events */   'link' => 1,
  /* admin_content */  /* Manage Events */   'field_formatter_class' => '',
  /* admin_content */  /* Manage Events */ );
  /* admin_content */  /* Manage Events */ $handler->display->display_options['fields']['field_event_contact_person']['delta_limit'] = '1';
  /* admin_content */  /* Manage Events */ $handler->display->display_options['fields']['field_event_contact_person']['delta_offset'] = '0';
  /* admin_content */  /* Manage Events */ $handler->display->display_options['fields']['field_event_contact_person']['field_api_classes'] = TRUE;
  /* admin_content */  /* Manage Events */ /* Field: Content: Title */
  /* admin_content */  /* Manage Events */ $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  /* admin_content */  /* Manage Events */ $handler->display->display_options['fields']['title_1']['table'] = 'node';
  /* admin_content */  /* Manage Events */ $handler->display->display_options['fields']['title_1']['field'] = 'title';
  /* admin_content */  /* Manage Events */ $handler->display->display_options['fields']['title_1']['label'] = 'Parent Group';
  /* admin_content */  /* Manage Events */ $handler->display->display_options['fields']['title_1']['element_label_colon'] = FALSE;
  /* admin_content */  /* Manage Events */ /* Field: Content: Organization Short Title */
  /* admin_content */  /* Manage Events */ $handler->display->display_options['fields']['organization_short']['id'] = 'organization_short';
  /* admin_content */  /* Manage Events */ $handler->display->display_options['fields']['organization_short']['table'] = 'node';
  /* admin_content */  /* Manage Events */ $handler->display->display_options['fields']['organization_short']['field'] = 'organization_short';
  /* admin_content */  /* Manage Events */ $handler->display->display_options['fields']['organization_short']['label'] = 'Parent Org';
  /* admin_content */  /* Manage Events */ $handler->display->display_options['fields']['organization_short']['element_label_colon'] = FALSE;
  /* admin_content */  /* Manage Events */ /* Field: Content: Published */
  /* admin_content */  /* Manage Events */ $handler->display->display_options['fields']['status']['id'] = 'status';
  /* admin_content */  /* Manage Events */ $handler->display->display_options['fields']['status']['table'] = 'node';
  /* admin_content */  /* Manage Events */ $handler->display->display_options['fields']['status']['field'] = 'status';
  /* admin_content */  /* Manage Events */ /* Field: Content: Post date */
  /* admin_content */  /* Manage Events */ $handler->display->display_options['fields']['created']['id'] = 'created';
  /* admin_content */  /* Manage Events */ $handler->display->display_options['fields']['created']['table'] = 'node';
  /* admin_content */  /* Manage Events */ $handler->display->display_options['fields']['created']['field'] = 'created';
  /* admin_content */  /* Manage Events */ $handler->display->display_options['fields']['created']['label'] = 'Date Posted';
  /* admin_content */  /* Manage Events */ $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  /* admin_content */  /* Manage Events */ $handler->display->display_options['fields']['created']['date_format'] = 'date_format_globalnet_date_time';
  /* admin_content */  /* Manage Events */ $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
  /* admin_content */  /* Manage Events */ /* Field: Content: Updated date */
  /* admin_content */  /* Manage Events */ $handler->display->display_options['fields']['changed']['id'] = 'changed';
  /* admin_content */  /* Manage Events */ $handler->display->display_options['fields']['changed']['table'] = 'node';
  /* admin_content */  /* Manage Events */ $handler->display->display_options['fields']['changed']['field'] = 'changed';
  /* admin_content */  /* Manage Events */ $handler->display->display_options['fields']['changed']['label'] = 'Date Updated';
  /* admin_content */  /* Manage Events */ $handler->display->display_options['fields']['changed']['element_label_colon'] = FALSE;
  /* admin_content */  /* Manage Events */ $handler->display->display_options['fields']['changed']['date_format'] = 'date_format_globalnet_date_time';
  /* admin_content */  /* Manage Events */ $handler->display->display_options['fields']['changed']['second_date_format'] = 'date_format_globalnet_date';
  /* admin_content */  /* Manage Events */ $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  /* admin_content */  /* Manage Events */ $handler->display->display_options['defaults']['filters'] = FALSE;
  /* admin_content */  /* Manage Events */ /* Filter criterion: Global: Combine fields filter */
  /* admin_content */  /* Manage Events */ $handler->display->display_options['filters']['combine']['id'] = 'combine';
  /* admin_content */  /* Manage Events */ $handler->display->display_options['filters']['combine']['table'] = 'views';
  /* admin_content */  /* Manage Events */ $handler->display->display_options['filters']['combine']['field'] = 'combine';
  /* admin_content */  /* Manage Events */ $handler->display->display_options['filters']['combine']['operator'] = 'word';
  /* admin_content */  /* Manage Events */ $handler->display->display_options['filters']['combine']['group'] = 1;
  /* admin_content */  /* Manage Events */ $handler->display->display_options['filters']['combine']['exposed'] = TRUE;
  /* admin_content */  /* Manage Events */ $handler->display->display_options['filters']['combine']['expose']['operator_id'] = 'combine_op';
  /* admin_content */  /* Manage Events */ $handler->display->display_options['filters']['combine']['expose']['label'] = 'Search';
  /* admin_content */  /* Manage Events */ $handler->display->display_options['filters']['combine']['expose']['operator'] = 'combine_op';
  /* admin_content */  /* Manage Events */ $handler->display->display_options['filters']['combine']['expose']['identifier'] = 'combine';
  /* admin_content */  /* Manage Events */ $handler->display->display_options['filters']['combine']['expose']['remember_roles'] = array(
  /* admin_content */  /* Manage Events */   2 => '2',
  /* admin_content */  /* Manage Events */   1 => 0,
  /* admin_content */  /* Manage Events */   9 => 0,
  /* admin_content */  /* Manage Events */   10 => 0,
  /* admin_content */  /* Manage Events */ );
  /* admin_content */  /* Manage Events */ $handler->display->display_options['filters']['combine']['expose']['autocomplete_items'] = '10';
  /* admin_content */  /* Manage Events */ $handler->display->display_options['filters']['combine']['expose']['autocomplete_min_chars'] = '0';
  /* admin_content */  /* Manage Events */ $handler->display->display_options['filters']['combine']['expose']['autocomplete_raw_suggestion'] = 1;
  /* admin_content */  /* Manage Events */ $handler->display->display_options['filters']['combine']['expose']['autocomplete_raw_dropdown'] = 1;
  /* admin_content */  /* Manage Events */ $handler->display->display_options['filters']['combine']['expose']['autocomplete_dependent'] = 0;
  /* admin_content */  /* Manage Events */ $handler->display->display_options['filters']['combine']['fields'] = array(
  /* admin_content */  /* Manage Events */   'title' => 'title',
  /* admin_content */  /* Manage Events */   'name' => 'name',
  /* admin_content */  /* Manage Events */   'field_event_contact_person' => 'field_event_contact_person',
  /* admin_content */  /* Manage Events */   'organization_short' => 'organization_short',
  /* admin_content */  /* Manage Events */ );
  /* admin_content */  /* Manage Events */ /* Filter criterion: Content: Published */
  /* admin_content */  /* Manage Events */ $handler->display->display_options['filters']['status']['id'] = 'status';
  /* admin_content */  /* Manage Events */ $handler->display->display_options['filters']['status']['table'] = 'node';
  /* admin_content */  /* Manage Events */ $handler->display->display_options['filters']['status']['field'] = 'status';
  /* admin_content */  /* Manage Events */ $handler->display->display_options['filters']['status']['value'] = '1';
  /* admin_content */  /* Manage Events */ $handler->display->display_options['filters']['status']['group'] = 1;
  /* admin_content */  /* Manage Events */ $handler->display->display_options['filters']['status']['exposed'] = TRUE;
  /* admin_content */  /* Manage Events */ $handler->display->display_options['filters']['status']['expose']['operator_id'] = '';
  /* admin_content */  /* Manage Events */ $handler->display->display_options['filters']['status']['expose']['label'] = 'Published';
  /* admin_content */  /* Manage Events */ $handler->display->display_options['filters']['status']['expose']['operator'] = 'status_op';
  /* admin_content */  /* Manage Events */ $handler->display->display_options['filters']['status']['expose']['identifier'] = 'status';
  /* admin_content */  /* Manage Events */ $handler->display->display_options['filters']['status']['expose']['remember_roles'] = array(
  /* admin_content */  /* Manage Events */   2 => '2',
  /* admin_content */  /* Manage Events */   1 => 0,
  /* admin_content */  /* Manage Events */   9 => 0,
  /* admin_content */  /* Manage Events */ );
  /* admin_content */  /* Manage Events */ /* Filter criterion: Content: Type */
  /* admin_content */  /* Manage Events */ $handler->display->display_options['filters']['type']['id'] = 'type';
  /* admin_content */  /* Manage Events */ $handler->display->display_options['filters']['type']['table'] = 'node';
  /* admin_content */  /* Manage Events */ $handler->display->display_options['filters']['type']['field'] = 'type';
  /* admin_content */  /* Manage Events */ $handler->display->display_options['filters']['type']['value'] = array(
  /* admin_content */  /* Manage Events */   'event' => 'event',
  /* admin_content */  /* Manage Events */ );
  /* admin_content */  /* Manage Events */ $handler->display->display_options['filters']['type']['group'] = 1;
  /* admin_content */  /* Manage Events */ $handler->display->display_options['filters']['type']['expose']['operator_id'] = 'type_op';
  /* admin_content */  /* Manage Events */ $handler->display->display_options['filters']['type']['expose']['label'] = 'Content Type';
  /* admin_content */  /* Manage Events */ $handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
  /* admin_content */  /* Manage Events */ $handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';
  /* admin_content */  /* Manage Events */ $handler->display->display_options['filters']['type']['expose']['multiple'] = TRUE;
  /* admin_content */  /* Manage Events */ $handler->display->display_options['filters']['type']['expose']['remember_roles'] = array(
  /* admin_content */  /* Manage Events */   2 => '2',
  /* admin_content */  /* Manage Events */   1 => 0,
  /* admin_content */  /* Manage Events */   9 => 0,
  /* admin_content */  /* Manage Events */ );
  /* admin_content */  /* Manage Events */ $handler->display->display_options['path'] = 'admin/manage/events';

  /* admin_content */ /* Display: Manage Events: Table */
  /* admin_content */  /* Manage Events: Table */ $handler = $view->new_display('page', 'Manage Events: Table', 'page_manage_events_table');
  /* admin_content */  /* Manage Events: Table */ $handler->display->display_options['defaults']['title'] = FALSE;
  /* admin_content */  /* Manage Events: Table */ $handler->display->display_options['title'] = 'Manage Events';
  /* admin_content */  /* Manage Events: Table */ $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  /* admin_content */  /* Manage Events: Table */ $handler->display->display_options['style_plugin'] = 'table';
  /* admin_content */  /* Manage Events: Table */ $handler->display->display_options['style_options']['columns'] = array(
  /* admin_content */  /* Manage Events: Table */   'views_bulk_operations' => 'views_bulk_operations',
  /* admin_content */  /* Manage Events: Table */   'edit_node' => 'edit_node',
  /* admin_content */  /* Manage Events: Table */   'nid' => 'nid',
  /* admin_content */  /* Manage Events: Table */   'title' => 'title',
  /* admin_content */  /* Manage Events: Table */   'field_event_date' => 'field_event_date',
  /* admin_content */  /* Manage Events: Table */   'name' => 'name',
  /* admin_content */  /* Manage Events: Table */   'field_event_contact_person' => 'field_event_contact_person',
  /* admin_content */  /* Manage Events: Table */   'status' => 'status',
  /* admin_content */  /* Manage Events: Table */   'created' => 'created',
  /* admin_content */  /* Manage Events: Table */   'changed' => 'changed',
  /* admin_content */  /* Manage Events: Table */ );
  /* admin_content */  /* Manage Events: Table */ $handler->display->display_options['style_options']['default'] = 'created';
  /* admin_content */  /* Manage Events: Table */ $handler->display->display_options['style_options']['info'] = array(
  /* admin_content */  /* Manage Events: Table */   'views_bulk_operations' => array(
  /* admin_content */  /* Manage Events: Table */     'align' => '',
  /* admin_content */  /* Manage Events: Table */     'separator' => '',
  /* admin_content */  /* Manage Events: Table */     'empty_column' => 0,
  /* admin_content */  /* Manage Events: Table */   ),
  /* admin_content */  /* Manage Events: Table */   'edit_node' => array(
  /* admin_content */  /* Manage Events: Table */     'align' => '',
  /* admin_content */  /* Manage Events: Table */     'separator' => '',
  /* admin_content */  /* Manage Events: Table */     'empty_column' => 0,
  /* admin_content */  /* Manage Events: Table */   ),
  /* admin_content */  /* Manage Events: Table */   'nid' => array(
  /* admin_content */  /* Manage Events: Table */     'sortable' => 1,
  /* admin_content */  /* Manage Events: Table */     'default_sort_order' => 'asc',
  /* admin_content */  /* Manage Events: Table */     'align' => '',
  /* admin_content */  /* Manage Events: Table */     'separator' => '',
  /* admin_content */  /* Manage Events: Table */     'empty_column' => 0,
  /* admin_content */  /* Manage Events: Table */   ),
  /* admin_content */  /* Manage Events: Table */   'title' => array(
  /* admin_content */  /* Manage Events: Table */     'sortable' => 1,
  /* admin_content */  /* Manage Events: Table */     'default_sort_order' => 'asc',
  /* admin_content */  /* Manage Events: Table */     'align' => '',
  /* admin_content */  /* Manage Events: Table */     'separator' => '',
  /* admin_content */  /* Manage Events: Table */     'empty_column' => 0,
  /* admin_content */  /* Manage Events: Table */   ),
  /* admin_content */  /* Manage Events: Table */   'field_event_date' => array(
  /* admin_content */  /* Manage Events: Table */     'align' => '',
  /* admin_content */  /* Manage Events: Table */     'separator' => '',
  /* admin_content */  /* Manage Events: Table */     'empty_column' => 0,
  /* admin_content */  /* Manage Events: Table */   ),
  /* admin_content */  /* Manage Events: Table */   'name' => array(
  /* admin_content */  /* Manage Events: Table */     'sortable' => 1,
  /* admin_content */  /* Manage Events: Table */     'default_sort_order' => 'asc',
  /* admin_content */  /* Manage Events: Table */     'align' => '',
  /* admin_content */  /* Manage Events: Table */     'separator' => '',
  /* admin_content */  /* Manage Events: Table */     'empty_column' => 0,
  /* admin_content */  /* Manage Events: Table */   ),
  /* admin_content */  /* Manage Events: Table */   'field_event_contact_person' => array(
  /* admin_content */  /* Manage Events: Table */     'align' => '',
  /* admin_content */  /* Manage Events: Table */     'separator' => '',
  /* admin_content */  /* Manage Events: Table */     'empty_column' => 0,
  /* admin_content */  /* Manage Events: Table */   ),
  /* admin_content */  /* Manage Events: Table */   'status' => array(
  /* admin_content */  /* Manage Events: Table */     'sortable' => 1,
  /* admin_content */  /* Manage Events: Table */     'default_sort_order' => 'asc',
  /* admin_content */  /* Manage Events: Table */     'align' => '',
  /* admin_content */  /* Manage Events: Table */     'separator' => '',
  /* admin_content */  /* Manage Events: Table */     'empty_column' => 0,
  /* admin_content */  /* Manage Events: Table */   ),
  /* admin_content */  /* Manage Events: Table */   'created' => array(
  /* admin_content */  /* Manage Events: Table */     'sortable' => 1,
  /* admin_content */  /* Manage Events: Table */     'default_sort_order' => 'desc',
  /* admin_content */  /* Manage Events: Table */     'align' => '',
  /* admin_content */  /* Manage Events: Table */     'separator' => '',
  /* admin_content */  /* Manage Events: Table */     'empty_column' => 0,
  /* admin_content */  /* Manage Events: Table */   ),
  /* admin_content */  /* Manage Events: Table */   'changed' => array(
  /* admin_content */  /* Manage Events: Table */     'sortable' => 1,
  /* admin_content */  /* Manage Events: Table */     'default_sort_order' => 'desc',
  /* admin_content */  /* Manage Events: Table */     'align' => '',
  /* admin_content */  /* Manage Events: Table */     'separator' => '',
  /* admin_content */  /* Manage Events: Table */     'empty_column' => 0,
  /* admin_content */  /* Manage Events: Table */   ),
  /* admin_content */  /* Manage Events: Table */ );
  /* admin_content */  /* Manage Events: Table */ $handler->display->display_options['style_options']['sticky'] = TRUE;
  /* admin_content */  /* Manage Events: Table */ $handler->display->display_options['defaults']['style_options'] = FALSE;
  /* admin_content */  /* Manage Events: Table */ $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  /* admin_content */  /* Manage Events: Table */ $handler->display->display_options['defaults']['row_options'] = FALSE;
  /* admin_content */  /* Manage Events: Table */ $handler->display->display_options['path'] = 'admin/manage/events_table';

  /* admin_content */ /* Display: Dashboard | Manage Content */
  /* admin_content */  /* Dashboard | Manage Content */ $handler = $view->new_display('page', 'Dashboard | Manage Content', 'page_1');
  /* admin_content */  /* Dashboard | Manage Content */ $handler->display->display_options['defaults']['title'] = FALSE;
  /* admin_content */  /* Dashboard | Manage Content */ $handler->display->display_options['title'] = 'Manage Content';
  /* admin_content */  /* Dashboard | Manage Content */ $handler->display->display_options['defaults']['pager'] = FALSE;
  /* admin_content */  /* Dashboard | Manage Content */ $handler->display->display_options['pager']['type'] = 'full';
  /* admin_content */  /* Dashboard | Manage Content */ $handler->display->display_options['pager']['options']['items_per_page'] = '100';
  /* admin_content */  /* Dashboard | Manage Content */ $handler->display->display_options['pager']['options']['offset'] = '0';
  /* admin_content */  /* Dashboard | Manage Content */ $handler->display->display_options['pager']['options']['id'] = '0';
  /* admin_content */  /* Dashboard | Manage Content */ $handler->display->display_options['pager']['options']['quantity'] = '9';
  /* admin_content */  /* Dashboard | Manage Content */ $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  /* admin_content */  /* Dashboard | Manage Content */ $handler->display->display_options['style_plugin'] = 'table';
  /* admin_content */  /* Dashboard | Manage Content */ $handler->display->display_options['style_options']['columns'] = array(
  /* admin_content */  /* Dashboard | Manage Content */   'views_bulk_operations' => 'views_bulk_operations',
  /* admin_content */  /* Dashboard | Manage Content */   'uid' => 'uid',
  /* admin_content */  /* Dashboard | Manage Content */   'status' => 'status',
  /* admin_content */  /* Dashboard | Manage Content */   'type' => 'type',
  /* admin_content */  /* Dashboard | Manage Content */   'title' => 'title',
  /* admin_content */  /* Dashboard | Manage Content */   'edit_node' => 'edit_node',
  /* admin_content */  /* Dashboard | Manage Content */   'name' => 'name',
  /* admin_content */  /* Dashboard | Manage Content */   'nid' => 'nid',
  /* admin_content */  /* Dashboard | Manage Content */   'og_group_ref' => 'og_group_ref',
  /* admin_content */  /* Dashboard | Manage Content */   'field_gn2_simple_access_1' => 'field_gn2_simple_access_1',
  /* admin_content */  /* Dashboard | Manage Content */   'created' => 'created',
  /* admin_content */  /* Dashboard | Manage Content */   'changed' => 'changed',
  /* admin_content */  /* Dashboard | Manage Content */   'timestamp' => 'timestamp',
  /* admin_content */  /* Dashboard | Manage Content */ );
  /* admin_content */  /* Dashboard | Manage Content */ $handler->display->display_options['style_options']['default'] = 'changed';
  /* admin_content */  /* Dashboard | Manage Content */ $handler->display->display_options['style_options']['info'] = array(
  /* admin_content */  /* Dashboard | Manage Content */   'views_bulk_operations' => array(
  /* admin_content */  /* Dashboard | Manage Content */     'align' => '',
  /* admin_content */  /* Dashboard | Manage Content */     'separator' => '',
  /* admin_content */  /* Dashboard | Manage Content */     'empty_column' => 0,
  /* admin_content */  /* Dashboard | Manage Content */   ),
  /* admin_content */  /* Dashboard | Manage Content */   'uid' => array(
  /* admin_content */  /* Dashboard | Manage Content */     'align' => '',
  /* admin_content */  /* Dashboard | Manage Content */     'separator' => '',
  /* admin_content */  /* Dashboard | Manage Content */     'empty_column' => 0,
  /* admin_content */  /* Dashboard | Manage Content */   ),
  /* admin_content */  /* Dashboard | Manage Content */   'status' => array(
  /* admin_content */  /* Dashboard | Manage Content */     'sortable' => 1,
  /* admin_content */  /* Dashboard | Manage Content */     'default_sort_order' => 'asc',
  /* admin_content */  /* Dashboard | Manage Content */     'align' => '',
  /* admin_content */  /* Dashboard | Manage Content */     'separator' => '',
  /* admin_content */  /* Dashboard | Manage Content */     'empty_column' => 0,
  /* admin_content */  /* Dashboard | Manage Content */   ),
  /* admin_content */  /* Dashboard | Manage Content */   'type' => array(
  /* admin_content */  /* Dashboard | Manage Content */     'sortable' => 1,
  /* admin_content */  /* Dashboard | Manage Content */     'default_sort_order' => 'asc',
  /* admin_content */  /* Dashboard | Manage Content */     'align' => '',
  /* admin_content */  /* Dashboard | Manage Content */     'separator' => '',
  /* admin_content */  /* Dashboard | Manage Content */     'empty_column' => 0,
  /* admin_content */  /* Dashboard | Manage Content */   ),
  /* admin_content */  /* Dashboard | Manage Content */   'title' => array(
  /* admin_content */  /* Dashboard | Manage Content */     'sortable' => 1,
  /* admin_content */  /* Dashboard | Manage Content */     'default_sort_order' => 'asc',
  /* admin_content */  /* Dashboard | Manage Content */     'align' => '',
  /* admin_content */  /* Dashboard | Manage Content */     'separator' => '',
  /* admin_content */  /* Dashboard | Manage Content */     'empty_column' => 0,
  /* admin_content */  /* Dashboard | Manage Content */   ),
  /* admin_content */  /* Dashboard | Manage Content */   'edit_node' => array(
  /* admin_content */  /* Dashboard | Manage Content */     'align' => '',
  /* admin_content */  /* Dashboard | Manage Content */     'separator' => '',
  /* admin_content */  /* Dashboard | Manage Content */     'empty_column' => 0,
  /* admin_content */  /* Dashboard | Manage Content */   ),
  /* admin_content */  /* Dashboard | Manage Content */   'name' => array(
  /* admin_content */  /* Dashboard | Manage Content */     'sortable' => 1,
  /* admin_content */  /* Dashboard | Manage Content */     'default_sort_order' => 'asc',
  /* admin_content */  /* Dashboard | Manage Content */     'align' => '',
  /* admin_content */  /* Dashboard | Manage Content */     'separator' => '',
  /* admin_content */  /* Dashboard | Manage Content */     'empty_column' => 0,
  /* admin_content */  /* Dashboard | Manage Content */   ),
  /* admin_content */  /* Dashboard | Manage Content */   'nid' => array(
  /* admin_content */  /* Dashboard | Manage Content */     'sortable' => 1,
  /* admin_content */  /* Dashboard | Manage Content */     'default_sort_order' => 'asc',
  /* admin_content */  /* Dashboard | Manage Content */     'align' => '',
  /* admin_content */  /* Dashboard | Manage Content */     'separator' => '',
  /* admin_content */  /* Dashboard | Manage Content */     'empty_column' => 0,
  /* admin_content */  /* Dashboard | Manage Content */   ),
  /* admin_content */  /* Dashboard | Manage Content */   'og_group_ref' => array(
  /* admin_content */  /* Dashboard | Manage Content */     'align' => '',
  /* admin_content */  /* Dashboard | Manage Content */     'separator' => '',
  /* admin_content */  /* Dashboard | Manage Content */     'empty_column' => 0,
  /* admin_content */  /* Dashboard | Manage Content */   ),
  /* admin_content */  /* Dashboard | Manage Content */   'field_gn2_simple_access_1' => array(
  /* admin_content */  /* Dashboard | Manage Content */     'sortable' => 1,
  /* admin_content */  /* Dashboard | Manage Content */     'default_sort_order' => 'asc',
  /* admin_content */  /* Dashboard | Manage Content */     'align' => '',
  /* admin_content */  /* Dashboard | Manage Content */     'separator' => '',
  /* admin_content */  /* Dashboard | Manage Content */     'empty_column' => 0,
  /* admin_content */  /* Dashboard | Manage Content */   ),
  /* admin_content */  /* Dashboard | Manage Content */   'created' => array(
  /* admin_content */  /* Dashboard | Manage Content */     'sortable' => 1,
  /* admin_content */  /* Dashboard | Manage Content */     'default_sort_order' => 'asc',
  /* admin_content */  /* Dashboard | Manage Content */     'align' => '',
  /* admin_content */  /* Dashboard | Manage Content */     'separator' => '',
  /* admin_content */  /* Dashboard | Manage Content */     'empty_column' => 0,
  /* admin_content */  /* Dashboard | Manage Content */   ),
  /* admin_content */  /* Dashboard | Manage Content */   'changed' => array(
  /* admin_content */  /* Dashboard | Manage Content */     'sortable' => 1,
  /* admin_content */  /* Dashboard | Manage Content */     'default_sort_order' => 'desc',
  /* admin_content */  /* Dashboard | Manage Content */     'align' => '',
  /* admin_content */  /* Dashboard | Manage Content */     'separator' => '',
  /* admin_content */  /* Dashboard | Manage Content */     'empty_column' => 0,
  /* admin_content */  /* Dashboard | Manage Content */   ),
  /* admin_content */  /* Dashboard | Manage Content */   'timestamp' => array(
  /* admin_content */  /* Dashboard | Manage Content */     'align' => '',
  /* admin_content */  /* Dashboard | Manage Content */     'separator' => '',
  /* admin_content */  /* Dashboard | Manage Content */     'empty_column' => 0,
  /* admin_content */  /* Dashboard | Manage Content */   ),
  /* admin_content */  /* Dashboard | Manage Content */ );
  /* admin_content */  /* Dashboard | Manage Content */ $handler->display->display_options['defaults']['style_options'] = FALSE;
  /* admin_content */  /* Dashboard | Manage Content */ $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  /* admin_content */  /* Dashboard | Manage Content */ $handler->display->display_options['defaults']['row_options'] = FALSE;
  /* admin_content */  /* Dashboard | Manage Content */ $handler->display->display_options['defaults']['header'] = FALSE;
  /* admin_content */  /* Dashboard | Manage Content */ $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* admin_content */  /* Dashboard | Manage Content */ /* Relationship: OG membership: Group Node from OG membership */
  /* admin_content */  /* Dashboard | Manage Content */ $handler->display->display_options['relationships']['og_membership_related_node_group']['id'] = 'og_membership_related_node_group';
  /* admin_content */  /* Dashboard | Manage Content */ $handler->display->display_options['relationships']['og_membership_related_node_group']['table'] = 'og_membership';
  /* admin_content */  /* Dashboard | Manage Content */ $handler->display->display_options['relationships']['og_membership_related_node_group']['field'] = 'og_membership_related_node_group';
  /* admin_content */  /* Dashboard | Manage Content */ /* Relationship: OG membership: Node from OG membership */
  /* admin_content */  /* Dashboard | Manage Content */ $handler->display->display_options['relationships']['og_membership_related_node']['id'] = 'og_membership_related_node';
  /* admin_content */  /* Dashboard | Manage Content */ $handler->display->display_options['relationships']['og_membership_related_node']['table'] = 'og_membership';
  /* admin_content */  /* Dashboard | Manage Content */ $handler->display->display_options['relationships']['og_membership_related_node']['field'] = 'og_membership_related_node';
  /* admin_content */  /* Dashboard | Manage Content */ /* Relationship: OG membership: OG membership from Node */
  /* admin_content */  /* Dashboard | Manage Content */ $handler->display->display_options['relationships']['og_membership_rel']['id'] = 'og_membership_rel';
  /* admin_content */  /* Dashboard | Manage Content */ $handler->display->display_options['relationships']['og_membership_rel']['table'] = 'node';
  /* admin_content */  /* Dashboard | Manage Content */ $handler->display->display_options['relationships']['og_membership_rel']['field'] = 'og_membership_rel';
  /* admin_content */  /* Dashboard | Manage Content */ /* Relationship: OG membership: OG membership from Node group */
  /* admin_content */  /* Dashboard | Manage Content */ $handler->display->display_options['relationships']['og_membership_rel_group']['id'] = 'og_membership_rel_group';
  /* admin_content */  /* Dashboard | Manage Content */ $handler->display->display_options['relationships']['og_membership_rel_group']['table'] = 'node';
  /* admin_content */  /* Dashboard | Manage Content */ $handler->display->display_options['relationships']['og_membership_rel_group']['field'] = 'og_membership_rel_group';
  /* admin_content */  /* Dashboard | Manage Content */ /* Relationship: OG membership: OG Roles from membership */
  /* admin_content */  /* Dashboard | Manage Content */ $handler->display->display_options['relationships']['og_users_roles']['id'] = 'og_users_roles';
  /* admin_content */  /* Dashboard | Manage Content */ $handler->display->display_options['relationships']['og_users_roles']['table'] = 'og_membership';
  /* admin_content */  /* Dashboard | Manage Content */ $handler->display->display_options['relationships']['og_users_roles']['field'] = 'og_users_roles';
  /* admin_content */  /* Dashboard | Manage Content */ /* Relationship: OG membership: Type */
  /* admin_content */  /* Dashboard | Manage Content */ $handler->display->display_options['relationships']['type']['id'] = 'type';
  /* admin_content */  /* Dashboard | Manage Content */ $handler->display->display_options['relationships']['type']['table'] = 'og_membership';
  /* admin_content */  /* Dashboard | Manage Content */ $handler->display->display_options['relationships']['type']['field'] = 'type';
  /* admin_content */  /* Dashboard | Manage Content */ /* Relationship: Content: Author */
  /* admin_content */  /* Dashboard | Manage Content */ $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  /* admin_content */  /* Dashboard | Manage Content */ $handler->display->display_options['relationships']['uid']['table'] = 'node';
  /* admin_content */  /* Dashboard | Manage Content */ $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* admin_content */  /* Dashboard | Manage Content */ /* Relationship: Content: Vote results */
  /* admin_content */  /* Dashboard | Manage Content */ $handler->display->display_options['relationships']['votingapi_cache']['id'] = 'votingapi_cache';
  /* admin_content */  /* Dashboard | Manage Content */ $handler->display->display_options['relationships']['votingapi_cache']['table'] = 'node';
  /* admin_content */  /* Dashboard | Manage Content */ $handler->display->display_options['relationships']['votingapi_cache']['field'] = 'votingapi_cache';
  /* admin_content */  /* Dashboard | Manage Content */ $handler->display->display_options['relationships']['votingapi_cache']['label'] = 'Likes';
  /* admin_content */  /* Dashboard | Manage Content */ $handler->display->display_options['relationships']['votingapi_cache']['votingapi'] = array(
  /* admin_content */  /* Dashboard | Manage Content */   'value_type' => '',
  /* admin_content */  /* Dashboard | Manage Content */   'tag' => 'vote',
  /* admin_content */  /* Dashboard | Manage Content */   'function' => 'count',
  /* admin_content */  /* Dashboard | Manage Content */ );
  /* admin_content */  /* Dashboard | Manage Content */ /* Relationship: Content: Vote results */
  /* admin_content */  /* Dashboard | Manage Content */ $handler->display->display_options['relationships']['votingapi_cache_1']['id'] = 'votingapi_cache_1';
  /* admin_content */  /* Dashboard | Manage Content */ $handler->display->display_options['relationships']['votingapi_cache_1']['table'] = 'node';
  /* admin_content */  /* Dashboard | Manage Content */ $handler->display->display_options['relationships']['votingapi_cache_1']['field'] = 'votingapi_cache';
  /* admin_content */  /* Dashboard | Manage Content */ $handler->display->display_options['relationships']['votingapi_cache_1']['relationship'] = 'og_membership_related_node';
  /* admin_content */  /* Dashboard | Manage Content */ $handler->display->display_options['relationships']['votingapi_cache_1']['votingapi'] = array(
  /* admin_content */  /* Dashboard | Manage Content */   'value_type' => '',
  /* admin_content */  /* Dashboard | Manage Content */   'tag' => '',
  /* admin_content */  /* Dashboard | Manage Content */   'function' => 'sum',
  /* admin_content */  /* Dashboard | Manage Content */ );
  /* admin_content */  /* Dashboard | Manage Content */ $handler->display->display_options['defaults']['fields'] = FALSE;
  /* admin_content */  /* Dashboard | Manage Content */ /* Field: Bulk operations: Content */
  /* admin_content */  /* Dashboard | Manage Content */ $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  /* admin_content */  /* Dashboard | Manage Content */ $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'node';
  /* admin_content */  /* Dashboard | Manage Content */ $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  /* admin_content */  /* Dashboard | Manage Content */ $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '0';
  /* admin_content */  /* Dashboard | Manage Content */ $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  /* admin_content */  /* Dashboard | Manage Content */ $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['row_clickable'] = 1;
  /* admin_content */  /* Dashboard | Manage Content */ $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  /* admin_content */  /* Dashboard | Manage Content */ $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  /* admin_content */  /* Dashboard | Manage Content */ $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
  /* admin_content */  /* Dashboard | Manage Content */   'action::node_assign_owner_action' => array(
  /* admin_content */  /* Dashboard | Manage Content */     'selected' => 1,
  /* admin_content */  /* Dashboard | Manage Content */     'postpone_processing' => 0,
  /* admin_content */  /* Dashboard | Manage Content */     'skip_confirmation' => 0,
  /* admin_content */  /* Dashboard | Manage Content */     'override_label' => 0,
  /* admin_content */  /* Dashboard | Manage Content */     'label' => '',
  /* admin_content */  /* Dashboard | Manage Content */   ),
  /* admin_content */  /* Dashboard | Manage Content */   'action::views_bulk_operations_delete_item' => array(
  /* admin_content */  /* Dashboard | Manage Content */     'selected' => 1,
  /* admin_content */  /* Dashboard | Manage Content */     'postpone_processing' => 0,
  /* admin_content */  /* Dashboard | Manage Content */     'skip_confirmation' => 0,
  /* admin_content */  /* Dashboard | Manage Content */     'override_label' => 0,
  /* admin_content */  /* Dashboard | Manage Content */     'label' => '',
  /* admin_content */  /* Dashboard | Manage Content */   ),
  /* admin_content */  /* Dashboard | Manage Content */   'rules_component::rules_make_organization_visible' => array(
  /* admin_content */  /* Dashboard | Manage Content */     'selected' => 1,
  /* admin_content */  /* Dashboard | Manage Content */     'postpone_processing' => 0,
  /* admin_content */  /* Dashboard | Manage Content */     'skip_confirmation' => 0,
  /* admin_content */  /* Dashboard | Manage Content */     'override_label' => 0,
  /* admin_content */  /* Dashboard | Manage Content */     'label' => '',
  /* admin_content */  /* Dashboard | Manage Content */   ),
  /* admin_content */  /* Dashboard | Manage Content */   'rules_component::rules_make_public' => array(
  /* admin_content */  /* Dashboard | Manage Content */     'selected' => 1,
  /* admin_content */  /* Dashboard | Manage Content */     'postpone_processing' => 0,
  /* admin_content */  /* Dashboard | Manage Content */     'skip_confirmation' => 0,
  /* admin_content */  /* Dashboard | Manage Content */     'override_label' => 0,
  /* admin_content */  /* Dashboard | Manage Content */     'label' => '',
  /* admin_content */  /* Dashboard | Manage Content */   ),
  /* admin_content */  /* Dashboard | Manage Content */   'rules_component::rules_make_sitewide' => array(
  /* admin_content */  /* Dashboard | Manage Content */     'selected' => 1,
  /* admin_content */  /* Dashboard | Manage Content */     'postpone_processing' => 0,
  /* admin_content */  /* Dashboard | Manage Content */     'skip_confirmation' => 0,
  /* admin_content */  /* Dashboard | Manage Content */     'override_label' => 0,
  /* admin_content */  /* Dashboard | Manage Content */     'label' => '',
  /* admin_content */  /* Dashboard | Manage Content */   ),
  /* admin_content */  /* Dashboard | Manage Content */   'action::node_publish_action' => array(
  /* admin_content */  /* Dashboard | Manage Content */     'selected' => 1,
  /* admin_content */  /* Dashboard | Manage Content */     'postpone_processing' => 0,
  /* admin_content */  /* Dashboard | Manage Content */     'skip_confirmation' => 0,
  /* admin_content */  /* Dashboard | Manage Content */     'override_label' => 0,
  /* admin_content */  /* Dashboard | Manage Content */     'label' => '',
  /* admin_content */  /* Dashboard | Manage Content */   ),
  /* admin_content */  /* Dashboard | Manage Content */   'rules_component::scheduler_remove_unpublish_date_component' => array(
  /* admin_content */  /* Dashboard | Manage Content */     'selected' => 1,
  /* admin_content */  /* Dashboard | Manage Content */     'postpone_processing' => 0,
  /* admin_content */  /* Dashboard | Manage Content */     'skip_confirmation' => 0,
  /* admin_content */  /* Dashboard | Manage Content */     'override_label' => 0,
  /* admin_content */  /* Dashboard | Manage Content */     'label' => '',
  /* admin_content */  /* Dashboard | Manage Content */   ),
  /* admin_content */  /* Dashboard | Manage Content */   'action::node_save_action' => array(
  /* admin_content */  /* Dashboard | Manage Content */     'selected' => 1,
  /* admin_content */  /* Dashboard | Manage Content */     'postpone_processing' => 0,
  /* admin_content */  /* Dashboard | Manage Content */     'skip_confirmation' => 1,
  /* admin_content */  /* Dashboard | Manage Content */     'override_label' => 0,
  /* admin_content */  /* Dashboard | Manage Content */     'label' => '',
  /* admin_content */  /* Dashboard | Manage Content */   ),
  /* admin_content */  /* Dashboard | Manage Content */   'action::node_unpublish_action' => array(
  /* admin_content */  /* Dashboard | Manage Content */     'selected' => 1,
  /* admin_content */  /* Dashboard | Manage Content */     'postpone_processing' => 0,
  /* admin_content */  /* Dashboard | Manage Content */     'skip_confirmation' => 0,
  /* admin_content */  /* Dashboard | Manage Content */     'override_label' => 0,
  /* admin_content */  /* Dashboard | Manage Content */     'label' => '',
  /* admin_content */  /* Dashboard | Manage Content */   ),
  /* admin_content */  /* Dashboard | Manage Content */   'action::node_unpublish_by_keyword_action' => array(
  /* admin_content */  /* Dashboard | Manage Content */     'selected' => 1,
  /* admin_content */  /* Dashboard | Manage Content */     'postpone_processing' => 0,
  /* admin_content */  /* Dashboard | Manage Content */     'skip_confirmation' => 0,
  /* admin_content */  /* Dashboard | Manage Content */     'override_label' => 0,
  /* admin_content */  /* Dashboard | Manage Content */     'label' => '',
  /* admin_content */  /* Dashboard | Manage Content */   ),
  /* admin_content */  /* Dashboard | Manage Content */   'action::pathauto_node_update_action' => array(
  /* admin_content */  /* Dashboard | Manage Content */     'selected' => 1,
  /* admin_content */  /* Dashboard | Manage Content */     'postpone_processing' => 0,
  /* admin_content */  /* Dashboard | Manage Content */     'skip_confirmation' => 1,
  /* admin_content */  /* Dashboard | Manage Content */     'override_label' => 0,
  /* admin_content */  /* Dashboard | Manage Content */     'label' => '',
  /* admin_content */  /* Dashboard | Manage Content */   ),
  /* admin_content */  /* Dashboard | Manage Content */ );
  /* admin_content */  /* Dashboard | Manage Content */ /* Field: Content: Author uid */
  /* admin_content */  /* Dashboard | Manage Content */ $handler->display->display_options['fields']['uid']['id'] = 'uid';
  /* admin_content */  /* Dashboard | Manage Content */ $handler->display->display_options['fields']['uid']['table'] = 'node';
  /* admin_content */  /* Dashboard | Manage Content */ $handler->display->display_options['fields']['uid']['field'] = 'uid';
  /* admin_content */  /* Dashboard | Manage Content */ $handler->display->display_options['fields']['uid']['exclude'] = TRUE;
  /* admin_content */  /* Dashboard | Manage Content */ /* Field: Content: Published */
  /* admin_content */  /* Dashboard | Manage Content */ $handler->display->display_options['fields']['status']['id'] = 'status';
  /* admin_content */  /* Dashboard | Manage Content */ $handler->display->display_options['fields']['status']['table'] = 'node';
  /* admin_content */  /* Dashboard | Manage Content */ $handler->display->display_options['fields']['status']['field'] = 'status';
  /* admin_content */  /* Dashboard | Manage Content */ /* Field: Content: Type */
  /* admin_content */  /* Dashboard | Manage Content */ $handler->display->display_options['fields']['type']['id'] = 'type';
  /* admin_content */  /* Dashboard | Manage Content */ $handler->display->display_options['fields']['type']['table'] = 'node';
  /* admin_content */  /* Dashboard | Manage Content */ $handler->display->display_options['fields']['type']['field'] = 'type';
  /* admin_content */  /* Dashboard | Manage Content */ /* Field: Content: Title */
  /* admin_content */  /* Dashboard | Manage Content */ $handler->display->display_options['fields']['title']['id'] = 'title';
  /* admin_content */  /* Dashboard | Manage Content */ $handler->display->display_options['fields']['title']['table'] = 'node';
  /* admin_content */  /* Dashboard | Manage Content */ $handler->display->display_options['fields']['title']['field'] = 'title';
  /* admin_content */  /* Dashboard | Manage Content */ $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  /* admin_content */  /* Dashboard | Manage Content */ $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* admin_content */  /* Dashboard | Manage Content */ /* Field: Content: Edit link */
  /* admin_content */  /* Dashboard | Manage Content */ $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  /* admin_content */  /* Dashboard | Manage Content */ $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  /* admin_content */  /* Dashboard | Manage Content */ $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  /* admin_content */  /* Dashboard | Manage Content */ /* Field: User: Name */
  /* admin_content */  /* Dashboard | Manage Content */ $handler->display->display_options['fields']['name']['id'] = 'name';
  /* admin_content */  /* Dashboard | Manage Content */ $handler->display->display_options['fields']['name']['table'] = 'users';
  /* admin_content */  /* Dashboard | Manage Content */ $handler->display->display_options['fields']['name']['field'] = 'name';
  /* admin_content */  /* Dashboard | Manage Content */ $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  /* admin_content */  /* Dashboard | Manage Content */ $handler->display->display_options['fields']['name']['label'] = 'Author';
  /* admin_content */  /* Dashboard | Manage Content */ /* Field: Content: Nid */
  /* admin_content */  /* Dashboard | Manage Content */ $handler->display->display_options['fields']['nid']['id'] = 'nid';
  /* admin_content */  /* Dashboard | Manage Content */ $handler->display->display_options['fields']['nid']['table'] = 'node';
  /* admin_content */  /* Dashboard | Manage Content */ $handler->display->display_options['fields']['nid']['field'] = 'nid';
  /* admin_content */  /* Dashboard | Manage Content */ /* Field: Content: Groups audience */
  /* admin_content */  /* Dashboard | Manage Content */ $handler->display->display_options['fields']['og_group_ref']['id'] = 'og_group_ref';
  /* admin_content */  /* Dashboard | Manage Content */ $handler->display->display_options['fields']['og_group_ref']['table'] = 'og_membership';
  /* admin_content */  /* Dashboard | Manage Content */ $handler->display->display_options['fields']['og_group_ref']['field'] = 'og_group_ref';
  /* admin_content */  /* Dashboard | Manage Content */ $handler->display->display_options['fields']['og_group_ref']['settings'] = array(
  /* admin_content */  /* Dashboard | Manage Content */   'link' => 0,
  /* admin_content */  /* Dashboard | Manage Content */   'field_formatter_class' => '',
  /* admin_content */  /* Dashboard | Manage Content */ );
  /* admin_content */  /* Dashboard | Manage Content */ $handler->display->display_options['fields']['og_group_ref']['delta_offset'] = '0';
  /* admin_content */  /* Dashboard | Manage Content */ /* Field: Content: Who can see this content? */
  /* admin_content */  /* Dashboard | Manage Content */ $handler->display->display_options['fields']['field_gn2_simple_access_1']['id'] = 'field_gn2_simple_access_1';
  /* admin_content */  /* Dashboard | Manage Content */ $handler->display->display_options['fields']['field_gn2_simple_access_1']['table'] = 'field_data_field_gn2_simple_access';
  /* admin_content */  /* Dashboard | Manage Content */ $handler->display->display_options['fields']['field_gn2_simple_access_1']['field'] = 'field_gn2_simple_access';
  /* admin_content */  /* Dashboard | Manage Content */ $handler->display->display_options['fields']['field_gn2_simple_access_1']['settings'] = array(
  /* admin_content */  /* Dashboard | Manage Content */   'field_formatter_class' => '',
  /* admin_content */  /* Dashboard | Manage Content */ );
  /* admin_content */  /* Dashboard | Manage Content */ /* Field: Content: Post date */
  /* admin_content */  /* Dashboard | Manage Content */ $handler->display->display_options['fields']['created']['id'] = 'created';
  /* admin_content */  /* Dashboard | Manage Content */ $handler->display->display_options['fields']['created']['table'] = 'node';
  /* admin_content */  /* Dashboard | Manage Content */ $handler->display->display_options['fields']['created']['field'] = 'created';
  /* admin_content */  /* Dashboard | Manage Content */ $handler->display->display_options['fields']['created']['label'] = 'PostDate';
  /* admin_content */  /* Dashboard | Manage Content */ $handler->display->display_options['fields']['created']['date_format'] = 'short';
  /* admin_content */  /* Dashboard | Manage Content */ $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
  /* admin_content */  /* Dashboard | Manage Content */ /* Field: Content: Updated date */
  /* admin_content */  /* Dashboard | Manage Content */ $handler->display->display_options['fields']['changed']['id'] = 'changed';
  /* admin_content */  /* Dashboard | Manage Content */ $handler->display->display_options['fields']['changed']['table'] = 'node';
  /* admin_content */  /* Dashboard | Manage Content */ $handler->display->display_options['fields']['changed']['field'] = 'changed';
  /* admin_content */  /* Dashboard | Manage Content */ $handler->display->display_options['fields']['changed']['date_format'] = 'short';
  /* admin_content */  /* Dashboard | Manage Content */ $handler->display->display_options['fields']['changed']['second_date_format'] = 'date_format_globalnet_date';
  /* admin_content */  /* Dashboard | Manage Content */ /* Field: Content: Has new content */
  /* admin_content */  /* Dashboard | Manage Content */ $handler->display->display_options['fields']['timestamp']['id'] = 'timestamp';
  /* admin_content */  /* Dashboard | Manage Content */ $handler->display->display_options['fields']['timestamp']['table'] = 'history';
  /* admin_content */  /* Dashboard | Manage Content */ $handler->display->display_options['fields']['timestamp']['field'] = 'timestamp';
  /* admin_content */  /* Dashboard | Manage Content */ $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* admin_content */  /* Dashboard | Manage Content */ /* Sort criterion: Content: Updated date */
  /* admin_content */  /* Dashboard | Manage Content */ $handler->display->display_options['sorts']['changed']['id'] = 'changed';
  /* admin_content */  /* Dashboard | Manage Content */ $handler->display->display_options['sorts']['changed']['table'] = 'node';
  /* admin_content */  /* Dashboard | Manage Content */ $handler->display->display_options['sorts']['changed']['field'] = 'changed';
  /* admin_content */  /* Dashboard | Manage Content */ $handler->display->display_options['sorts']['changed']['order'] = 'DESC';
  /* admin_content */  /* Dashboard | Manage Content */ $handler->display->display_options['sorts']['changed']['exposed'] = TRUE;
  /* admin_content */  /* Dashboard | Manage Content */ $handler->display->display_options['sorts']['changed']['expose']['label'] = 'Updated date';
  /* admin_content */  /* Dashboard | Manage Content */ /* Sort criterion: Content: Post date */
  /* admin_content */  /* Dashboard | Manage Content */ $handler->display->display_options['sorts']['created']['id'] = 'created';
  /* admin_content */  /* Dashboard | Manage Content */ $handler->display->display_options['sorts']['created']['table'] = 'node';
  /* admin_content */  /* Dashboard | Manage Content */ $handler->display->display_options['sorts']['created']['field'] = 'created';
  /* admin_content */  /* Dashboard | Manage Content */ $handler->display->display_options['sorts']['created']['exposed'] = TRUE;
  /* admin_content */  /* Dashboard | Manage Content */ $handler->display->display_options['sorts']['created']['expose']['label'] = 'Post date';
  /* admin_content */  /* Dashboard | Manage Content */ /* Sort criterion: OG membership: Group ID */
  /* admin_content */  /* Dashboard | Manage Content */ $handler->display->display_options['sorts']['gid']['id'] = 'gid';
  /* admin_content */  /* Dashboard | Manage Content */ $handler->display->display_options['sorts']['gid']['table'] = 'og_membership';
  /* admin_content */  /* Dashboard | Manage Content */ $handler->display->display_options['sorts']['gid']['field'] = 'gid';
  /* admin_content */  /* Dashboard | Manage Content */ $handler->display->display_options['sorts']['gid']['expose']['label'] = 'Group ID';
  /* admin_content */  /* Dashboard | Manage Content */ $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* admin_content */  /* Dashboard | Manage Content */ /* Contextual filter: Content: Parent Organization (field_parent_organization) */
  /* admin_content */  /* Dashboard | Manage Content */ $handler->display->display_options['arguments']['field_parent_organization_target_id']['id'] = 'field_parent_organization_target_id';
  /* admin_content */  /* Dashboard | Manage Content */ $handler->display->display_options['arguments']['field_parent_organization_target_id']['table'] = 'field_data_field_parent_organization';
  /* admin_content */  /* Dashboard | Manage Content */ $handler->display->display_options['arguments']['field_parent_organization_target_id']['field'] = 'field_parent_organization_target_id';
  /* admin_content */  /* Dashboard | Manage Content */ $handler->display->display_options['arguments']['field_parent_organization_target_id']['relationship'] = 'og_membership_related_node';
  /* admin_content */  /* Dashboard | Manage Content */ $handler->display->display_options['arguments']['field_parent_organization_target_id']['default_action'] = 'default';
  /* admin_content */  /* Dashboard | Manage Content */ $handler->display->display_options['arguments']['field_parent_organization_target_id']['default_argument_type'] = 'node';
  /* admin_content */  /* Dashboard | Manage Content */ $handler->display->display_options['arguments']['field_parent_organization_target_id']['summary']['number_of_records'] = '0';
  /* admin_content */  /* Dashboard | Manage Content */ $handler->display->display_options['arguments']['field_parent_organization_target_id']['summary']['format'] = 'default_summary';
  /* admin_content */  /* Dashboard | Manage Content */ $handler->display->display_options['arguments']['field_parent_organization_target_id']['summary_options']['items_per_page'] = '25';
  /* admin_content */  /* Dashboard | Manage Content */ $handler->display->display_options['arguments']['field_parent_organization_target_id']['specify_validation'] = TRUE;
  /* admin_content */  /* Dashboard | Manage Content */ $handler->display->display_options['arguments']['field_parent_organization_target_id']['validate']['type'] = 'og';
  /* admin_content */  /* Dashboard | Manage Content */ $handler->display->display_options['arguments']['field_parent_organization_target_id']['validate']['fail'] = 'empty';
  /* admin_content */  /* Dashboard | Manage Content */ $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  /* admin_content */  /* Dashboard | Manage Content */ $handler->display->display_options['defaults']['filters'] = FALSE;
  /* admin_content */  /* Dashboard | Manage Content */ /* Filter criterion: Content: Published */
  /* admin_content */  /* Dashboard | Manage Content */ $handler->display->display_options['filters']['status']['id'] = 'status';
  /* admin_content */  /* Dashboard | Manage Content */ $handler->display->display_options['filters']['status']['table'] = 'node';
  /* admin_content */  /* Dashboard | Manage Content */ $handler->display->display_options['filters']['status']['field'] = 'status';
  /* admin_content */  /* Dashboard | Manage Content */ $handler->display->display_options['filters']['status']['value'] = 'All';
  /* admin_content */  /* Dashboard | Manage Content */ $handler->display->display_options['filters']['status']['group'] = 1;
  /* admin_content */  /* Dashboard | Manage Content */ $handler->display->display_options['filters']['status']['exposed'] = TRUE;
  /* admin_content */  /* Dashboard | Manage Content */ $handler->display->display_options['filters']['status']['expose']['operator_id'] = '';
  /* admin_content */  /* Dashboard | Manage Content */ $handler->display->display_options['filters']['status']['expose']['label'] = 'Published';
  /* admin_content */  /* Dashboard | Manage Content */ $handler->display->display_options['filters']['status']['expose']['operator'] = 'status_op';
  /* admin_content */  /* Dashboard | Manage Content */ $handler->display->display_options['filters']['status']['expose']['identifier'] = 'status';
  /* admin_content */  /* Dashboard | Manage Content */ $handler->display->display_options['filters']['status']['expose']['remember_roles'] = array(
  /* admin_content */  /* Dashboard | Manage Content */   2 => '2',
  /* admin_content */  /* Dashboard | Manage Content */   1 => 0,
  /* admin_content */  /* Dashboard | Manage Content */   9 => 0,
  /* admin_content */  /* Dashboard | Manage Content */ );
  /* admin_content */  /* Dashboard | Manage Content */ /* Filter criterion: Content: Type */
  /* admin_content */  /* Dashboard | Manage Content */ $handler->display->display_options['filters']['type']['id'] = 'type';
  /* admin_content */  /* Dashboard | Manage Content */ $handler->display->display_options['filters']['type']['table'] = 'node';
  /* admin_content */  /* Dashboard | Manage Content */ $handler->display->display_options['filters']['type']['field'] = 'type';
  /* admin_content */  /* Dashboard | Manage Content */ $handler->display->display_options['filters']['type']['value'] = array(
  /* admin_content */  /* Dashboard | Manage Content */   'about_page' => 'about_page',
  /* admin_content */  /* Dashboard | Manage Content */   'alumni_group' => 'alumni_group',
  /* admin_content */  /* Dashboard | Manage Content */   'announcement' => 'announcement',
  /* admin_content */  /* Dashboard | Manage Content */   'coi' => 'coi',
  /* admin_content */  /* Dashboard | Manage Content */   'course' => 'course',
  /* admin_content */  /* Dashboard | Manage Content */   'course_group' => 'course_group',
  /* admin_content */  /* Dashboard | Manage Content */   'program' => 'program',
  /* admin_content */  /* Dashboard | Manage Content */   'event' => 'event',
  /* admin_content */  /* Dashboard | Manage Content */   'media_gallery' => 'media_gallery',
  /* admin_content */  /* Dashboard | Manage Content */   'group' => 'group',
  /* admin_content */  /* Dashboard | Manage Content */   'help' => 'help',
  /* admin_content */  /* Dashboard | Manage Content */   'news' => 'news',
  /* admin_content */  /* Dashboard | Manage Content */   'organization' => 'organization',
  /* admin_content */  /* Dashboard | Manage Content */   'page' => 'page',
  /* admin_content */  /* Dashboard | Manage Content */   'panel' => 'panel',
  /* admin_content */  /* Dashboard | Manage Content */   'poll' => 'poll',
  /* admin_content */  /* Dashboard | Manage Content */   'post' => 'post',
  /* admin_content */  /* Dashboard | Manage Content */   'publication' => 'publication',
  /* admin_content */  /* Dashboard | Manage Content */ );
  /* admin_content */  /* Dashboard | Manage Content */ $handler->display->display_options['filters']['type']['group'] = 1;
  /* admin_content */  /* Dashboard | Manage Content */ $handler->display->display_options['filters']['type']['exposed'] = TRUE;
  /* admin_content */  /* Dashboard | Manage Content */ $handler->display->display_options['filters']['type']['expose']['operator_id'] = 'type_op';
  /* admin_content */  /* Dashboard | Manage Content */ $handler->display->display_options['filters']['type']['expose']['label'] = 'Content Type';
  /* admin_content */  /* Dashboard | Manage Content */ $handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
  /* admin_content */  /* Dashboard | Manage Content */ $handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';
  /* admin_content */  /* Dashboard | Manage Content */ $handler->display->display_options['filters']['type']['expose']['multiple'] = TRUE;
  /* admin_content */  /* Dashboard | Manage Content */ $handler->display->display_options['filters']['type']['expose']['remember_roles'] = array(
  /* admin_content */  /* Dashboard | Manage Content */   2 => '2',
  /* admin_content */  /* Dashboard | Manage Content */   1 => 0,
  /* admin_content */  /* Dashboard | Manage Content */   9 => 0,
  /* admin_content */  /* Dashboard | Manage Content */ );
  /* admin_content */  /* Dashboard | Manage Content */ $handler->display->display_options['filters']['type']['expose']['reduce'] = TRUE;
  /* admin_content */  /* Dashboard | Manage Content */ /* Filter criterion: Content: Who can see this content? (field_gn2_simple_access) */
  /* admin_content */  /* Dashboard | Manage Content */ $handler->display->display_options['filters']['field_gn2_simple_access_value']['id'] = 'field_gn2_simple_access_value';
  /* admin_content */  /* Dashboard | Manage Content */ $handler->display->display_options['filters']['field_gn2_simple_access_value']['table'] = 'field_data_field_gn2_simple_access';
  /* admin_content */  /* Dashboard | Manage Content */ $handler->display->display_options['filters']['field_gn2_simple_access_value']['field'] = 'field_gn2_simple_access_value';
  /* admin_content */  /* Dashboard | Manage Content */ $handler->display->display_options['filters']['field_gn2_simple_access_value']['value'] = array(
  /* admin_content */  /* Dashboard | Manage Content */   'all' => 'all',
  /* admin_content */  /* Dashboard | Manage Content */   'public' => 'public',
  /* admin_content */  /* Dashboard | Manage Content */ );
  /* admin_content */  /* Dashboard | Manage Content */ $handler->display->display_options['filters']['field_gn2_simple_access_value']['group'] = 1;
  /* admin_content */  /* Dashboard | Manage Content */ $handler->display->display_options['filters']['field_gn2_simple_access_value']['exposed'] = TRUE;
  /* admin_content */  /* Dashboard | Manage Content */ $handler->display->display_options['filters']['field_gn2_simple_access_value']['expose']['operator_id'] = 'field_gn2_simple_access_value_op';
  /* admin_content */  /* Dashboard | Manage Content */ $handler->display->display_options['filters']['field_gn2_simple_access_value']['expose']['label'] = 'Public';
  /* admin_content */  /* Dashboard | Manage Content */ $handler->display->display_options['filters']['field_gn2_simple_access_value']['expose']['operator'] = 'field_gn2_simple_access_value_op';
  /* admin_content */  /* Dashboard | Manage Content */ $handler->display->display_options['filters']['field_gn2_simple_access_value']['expose']['identifier'] = 'field_gn2_simple_access_value';
  /* admin_content */  /* Dashboard | Manage Content */ $handler->display->display_options['filters']['field_gn2_simple_access_value']['expose']['remember_roles'] = array(
  /* admin_content */  /* Dashboard | Manage Content */   2 => '2',
  /* admin_content */  /* Dashboard | Manage Content */   1 => 0,
  /* admin_content */  /* Dashboard | Manage Content */   9 => 0,
  /* admin_content */  /* Dashboard | Manage Content */   10 => 0,
  /* admin_content */  /* Dashboard | Manage Content */ );
  /* admin_content */  /* Dashboard | Manage Content */ $handler->display->display_options['filters']['field_gn2_simple_access_value']['expose']['reduce'] = TRUE;
  /* admin_content */  /* Dashboard | Manage Content */ /* Filter criterion: Content: Title */
  /* admin_content */  /* Dashboard | Manage Content */ $handler->display->display_options['filters']['title']['id'] = 'title';
  /* admin_content */  /* Dashboard | Manage Content */ $handler->display->display_options['filters']['title']['table'] = 'node';
  /* admin_content */  /* Dashboard | Manage Content */ $handler->display->display_options['filters']['title']['field'] = 'title';
  /* admin_content */  /* Dashboard | Manage Content */ $handler->display->display_options['filters']['title']['operator'] = 'word';
  /* admin_content */  /* Dashboard | Manage Content */ $handler->display->display_options['filters']['title']['group'] = 1;
  /* admin_content */  /* Dashboard | Manage Content */ $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  /* admin_content */  /* Dashboard | Manage Content */ $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  /* admin_content */  /* Dashboard | Manage Content */ $handler->display->display_options['filters']['title']['expose']['label'] = 'Title';
  /* admin_content */  /* Dashboard | Manage Content */ $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  /* admin_content */  /* Dashboard | Manage Content */ $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  /* admin_content */  /* Dashboard | Manage Content */ $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
  /* admin_content */  /* Dashboard | Manage Content */   2 => '2',
  /* admin_content */  /* Dashboard | Manage Content */   1 => 0,
  /* admin_content */  /* Dashboard | Manage Content */   9 => 0,
  /* admin_content */  /* Dashboard | Manage Content */   10 => 0,
  /* admin_content */  /* Dashboard | Manage Content */ );
  /* admin_content */  /* Dashboard | Manage Content */ $handler->display->display_options['filters']['title']['expose']['autocomplete_items'] = '10';
  /* admin_content */  /* Dashboard | Manage Content */ $handler->display->display_options['filters']['title']['expose']['autocomplete_min_chars'] = '0';
  /* admin_content */  /* Dashboard | Manage Content */ $handler->display->display_options['filters']['title']['expose']['autocomplete_field'] = 'title';
  /* admin_content */  /* Dashboard | Manage Content */ $handler->display->display_options['filters']['title']['expose']['autocomplete_raw_suggestion'] = 1;
  /* admin_content */  /* Dashboard | Manage Content */ $handler->display->display_options['filters']['title']['expose']['autocomplete_raw_dropdown'] = 1;
  /* admin_content */  /* Dashboard | Manage Content */ $handler->display->display_options['filters']['title']['expose']['autocomplete_dependent'] = 0;
  /* admin_content */  /* Dashboard | Manage Content */ /* Filter criterion: User: Name */
  /* admin_content */  /* Dashboard | Manage Content */ $handler->display->display_options['filters']['uid']['id'] = 'uid';
  /* admin_content */  /* Dashboard | Manage Content */ $handler->display->display_options['filters']['uid']['table'] = 'users';
  /* admin_content */  /* Dashboard | Manage Content */ $handler->display->display_options['filters']['uid']['field'] = 'uid';
  /* admin_content */  /* Dashboard | Manage Content */ $handler->display->display_options['filters']['uid']['relationship'] = 'uid';
  /* admin_content */  /* Dashboard | Manage Content */ $handler->display->display_options['filters']['uid']['value'] = '';
  /* admin_content */  /* Dashboard | Manage Content */ $handler->display->display_options['filters']['uid']['group'] = 1;
  /* admin_content */  /* Dashboard | Manage Content */ $handler->display->display_options['filters']['uid']['exposed'] = TRUE;
  /* admin_content */  /* Dashboard | Manage Content */ $handler->display->display_options['filters']['uid']['expose']['operator_id'] = 'uid_op';
  /* admin_content */  /* Dashboard | Manage Content */ $handler->display->display_options['filters']['uid']['expose']['label'] = 'Name';
  /* admin_content */  /* Dashboard | Manage Content */ $handler->display->display_options['filters']['uid']['expose']['operator'] = 'uid_op';
  /* admin_content */  /* Dashboard | Manage Content */ $handler->display->display_options['filters']['uid']['expose']['identifier'] = 'uid';
  /* admin_content */  /* Dashboard | Manage Content */ $handler->display->display_options['filters']['uid']['expose']['remember_roles'] = array(
  /* admin_content */  /* Dashboard | Manage Content */   2 => '2',
  /* admin_content */  /* Dashboard | Manage Content */   1 => 0,
  /* admin_content */  /* Dashboard | Manage Content */   9 => 0,
  /* admin_content */  /* Dashboard | Manage Content */   10 => 0,
  /* admin_content */  /* Dashboard | Manage Content */ );
  /* admin_content */  /* Dashboard | Manage Content */ $handler->display->display_options['filters']['uid']['expose']['reduce'] = TRUE;
  /* admin_content */  /* Dashboard | Manage Content */ /* Filter criterion: Global: Combine fields filter */
  /* admin_content */  /* Dashboard | Manage Content */ $handler->display->display_options['filters']['combine']['id'] = 'combine';
  /* admin_content */  /* Dashboard | Manage Content */ $handler->display->display_options['filters']['combine']['table'] = 'views';
  /* admin_content */  /* Dashboard | Manage Content */ $handler->display->display_options['filters']['combine']['field'] = 'combine';
  /* admin_content */  /* Dashboard | Manage Content */ $handler->display->display_options['filters']['combine']['operator'] = 'word';
  /* admin_content */  /* Dashboard | Manage Content */ $handler->display->display_options['filters']['combine']['exposed'] = TRUE;
  /* admin_content */  /* Dashboard | Manage Content */ $handler->display->display_options['filters']['combine']['expose']['operator_id'] = 'combine_op';
  /* admin_content */  /* Dashboard | Manage Content */ $handler->display->display_options['filters']['combine']['expose']['label'] = 'Search';
  /* admin_content */  /* Dashboard | Manage Content */ $handler->display->display_options['filters']['combine']['expose']['operator'] = 'combine_op';
  /* admin_content */  /* Dashboard | Manage Content */ $handler->display->display_options['filters']['combine']['expose']['identifier'] = 'combine';
  /* admin_content */  /* Dashboard | Manage Content */ $handler->display->display_options['filters']['combine']['expose']['remember_roles'] = array(
  /* admin_content */  /* Dashboard | Manage Content */   2 => '2',
  /* admin_content */  /* Dashboard | Manage Content */   1 => 0,
  /* admin_content */  /* Dashboard | Manage Content */   9 => 0,
  /* admin_content */  /* Dashboard | Manage Content */   10 => 0,
  /* admin_content */  /* Dashboard | Manage Content */ );
  /* admin_content */  /* Dashboard | Manage Content */ $handler->display->display_options['filters']['combine']['expose']['autocomplete_items'] = '10';
  /* admin_content */  /* Dashboard | Manage Content */ $handler->display->display_options['filters']['combine']['expose']['autocomplete_min_chars'] = '0';
  /* admin_content */  /* Dashboard | Manage Content */ $handler->display->display_options['filters']['combine']['expose']['autocomplete_raw_suggestion'] = 1;
  /* admin_content */  /* Dashboard | Manage Content */ $handler->display->display_options['filters']['combine']['expose']['autocomplete_raw_dropdown'] = 1;
  /* admin_content */  /* Dashboard | Manage Content */ $handler->display->display_options['filters']['combine']['expose']['autocomplete_dependent'] = 0;
  /* admin_content */  /* Dashboard | Manage Content */ $handler->display->display_options['filters']['combine']['fields'] = array(
  /* admin_content */  /* Dashboard | Manage Content */   'title' => 'title',
  /* admin_content */  /* Dashboard | Manage Content */   'name' => 'name',
  /* admin_content */  /* Dashboard | Manage Content */ );
  /* admin_content */  /* Dashboard | Manage Content */ $handler->display->display_options['path'] = 'node/%/dashboard/content';
  /* admin_content */  /* Dashboard | Manage Content */ $handler->display->display_options['menu']['type'] = 'tab';
  /* admin_content */  /* Dashboard | Manage Content */ $handler->display->display_options['menu']['title'] = 'Manage Content';
  /* admin_content */  /* Dashboard | Manage Content */ $handler->display->display_options['menu']['weight'] = '4';
  /* admin_content */  /* Dashboard | Manage Content */ $handler->display->display_options['menu']['context'] = 0;
  /* admin_content */  /* Dashboard | Manage Content */ $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* admin_content */ /* Display: Dashboard | Content Analytics */
  /* admin_content */  /* Dashboard | Content Analytics */ $handler = $view->new_display('page', 'Dashboard | Content Analytics', 'page_2');
  /* admin_content */  /* Dashboard | Content Analytics */ $handler->display->display_options['defaults']['title'] = FALSE;
  /* admin_content */  /* Dashboard | Content Analytics */ $handler->display->display_options['title'] = 'Content Analytics';
  /* admin_content */  /* Dashboard | Content Analytics */ $handler->display->display_options['defaults']['access'] = FALSE;
  /* admin_content */  /* Dashboard | Content Analytics */ $handler->display->display_options['access']['type'] = 'gn2_manager_access';
  /* admin_content */  /* Dashboard | Content Analytics */ $handler->display->display_options['access']['gn2_roles'] = array(
  /* admin_content */  /* Dashboard | Content Analytics */   'org_manager' => 'org_manager',
  /* admin_content */  /* Dashboard | Content Analytics */   'faculty' => 'faculty',
  /* admin_content */  /* Dashboard | Content Analytics */ );
  /* admin_content */  /* Dashboard | Content Analytics */ $handler->display->display_options['defaults']['pager'] = FALSE;
  /* admin_content */  /* Dashboard | Content Analytics */ $handler->display->display_options['pager']['type'] = 'full';
  /* admin_content */  /* Dashboard | Content Analytics */ $handler->display->display_options['pager']['options']['items_per_page'] = '100';
  /* admin_content */  /* Dashboard | Content Analytics */ $handler->display->display_options['pager']['options']['offset'] = '0';
  /* admin_content */  /* Dashboard | Content Analytics */ $handler->display->display_options['pager']['options']['id'] = '0';
  /* admin_content */  /* Dashboard | Content Analytics */ $handler->display->display_options['pager']['options']['quantity'] = '9';
  /* admin_content */  /* Dashboard | Content Analytics */ $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  /* admin_content */  /* Dashboard | Content Analytics */ $handler->display->display_options['style_plugin'] = 'table';
  /* admin_content */  /* Dashboard | Content Analytics */ $handler->display->display_options['style_options']['columns'] = array(
  /* admin_content */  /* Dashboard | Content Analytics */   'uid' => 'uid',
  /* admin_content */  /* Dashboard | Content Analytics */   'nid' => 'nid',
  /* admin_content */  /* Dashboard | Content Analytics */   'title' => 'title',
  /* admin_content */  /* Dashboard | Content Analytics */   'type' => 'type',
  /* admin_content */  /* Dashboard | Content Analytics */   'name' => 'name',
  /* admin_content */  /* Dashboard | Content Analytics */   'field_gn2_simple_access_1' => 'field_gn2_simple_access_1',
  /* admin_content */  /* Dashboard | Content Analytics */   'created' => 'created',
  /* admin_content */  /* Dashboard | Content Analytics */   'changed' => 'changed',
  /* admin_content */  /* Dashboard | Content Analytics */   'timestamp' => 'timestamp',
  /* admin_content */  /* Dashboard | Content Analytics */   'daycount' => 'daycount',
  /* admin_content */  /* Dashboard | Content Analytics */   'totalcount' => 'totalcount',
  /* admin_content */  /* Dashboard | Content Analytics */   'value' => 'value',
  /* admin_content */  /* Dashboard | Content Analytics */   'comment_count' => 'comment_count',
  /* admin_content */  /* Dashboard | Content Analytics */ );
  /* admin_content */  /* Dashboard | Content Analytics */ $handler->display->display_options['style_options']['default'] = 'totalcount';
  /* admin_content */  /* Dashboard | Content Analytics */ $handler->display->display_options['style_options']['info'] = array(
  /* admin_content */  /* Dashboard | Content Analytics */   'uid' => array(
  /* admin_content */  /* Dashboard | Content Analytics */     'align' => '',
  /* admin_content */  /* Dashboard | Content Analytics */     'separator' => '',
  /* admin_content */  /* Dashboard | Content Analytics */     'empty_column' => 0,
  /* admin_content */  /* Dashboard | Content Analytics */   ),
  /* admin_content */  /* Dashboard | Content Analytics */   'nid' => array(
  /* admin_content */  /* Dashboard | Content Analytics */     'sortable' => 1,
  /* admin_content */  /* Dashboard | Content Analytics */     'default_sort_order' => 'asc',
  /* admin_content */  /* Dashboard | Content Analytics */     'align' => '',
  /* admin_content */  /* Dashboard | Content Analytics */     'separator' => '',
  /* admin_content */  /* Dashboard | Content Analytics */     'empty_column' => 0,
  /* admin_content */  /* Dashboard | Content Analytics */   ),
  /* admin_content */  /* Dashboard | Content Analytics */   'title' => array(
  /* admin_content */  /* Dashboard | Content Analytics */     'sortable' => 1,
  /* admin_content */  /* Dashboard | Content Analytics */     'default_sort_order' => 'asc',
  /* admin_content */  /* Dashboard | Content Analytics */     'align' => '',
  /* admin_content */  /* Dashboard | Content Analytics */     'separator' => '',
  /* admin_content */  /* Dashboard | Content Analytics */     'empty_column' => 0,
  /* admin_content */  /* Dashboard | Content Analytics */   ),
  /* admin_content */  /* Dashboard | Content Analytics */   'type' => array(
  /* admin_content */  /* Dashboard | Content Analytics */     'sortable' => 0,
  /* admin_content */  /* Dashboard | Content Analytics */     'default_sort_order' => 'asc',
  /* admin_content */  /* Dashboard | Content Analytics */     'align' => '',
  /* admin_content */  /* Dashboard | Content Analytics */     'separator' => '',
  /* admin_content */  /* Dashboard | Content Analytics */     'empty_column' => 0,
  /* admin_content */  /* Dashboard | Content Analytics */   ),
  /* admin_content */  /* Dashboard | Content Analytics */   'name' => array(
  /* admin_content */  /* Dashboard | Content Analytics */     'sortable' => 1,
  /* admin_content */  /* Dashboard | Content Analytics */     'default_sort_order' => 'asc',
  /* admin_content */  /* Dashboard | Content Analytics */     'align' => '',
  /* admin_content */  /* Dashboard | Content Analytics */     'separator' => '',
  /* admin_content */  /* Dashboard | Content Analytics */     'empty_column' => 0,
  /* admin_content */  /* Dashboard | Content Analytics */   ),
  /* admin_content */  /* Dashboard | Content Analytics */   'field_gn2_simple_access_1' => array(
  /* admin_content */  /* Dashboard | Content Analytics */     'sortable' => 1,
  /* admin_content */  /* Dashboard | Content Analytics */     'default_sort_order' => 'asc',
  /* admin_content */  /* Dashboard | Content Analytics */     'align' => '',
  /* admin_content */  /* Dashboard | Content Analytics */     'separator' => '',
  /* admin_content */  /* Dashboard | Content Analytics */     'empty_column' => 0,
  /* admin_content */  /* Dashboard | Content Analytics */   ),
  /* admin_content */  /* Dashboard | Content Analytics */   'created' => array(
  /* admin_content */  /* Dashboard | Content Analytics */     'sortable' => 1,
  /* admin_content */  /* Dashboard | Content Analytics */     'default_sort_order' => 'asc',
  /* admin_content */  /* Dashboard | Content Analytics */     'align' => '',
  /* admin_content */  /* Dashboard | Content Analytics */     'separator' => '',
  /* admin_content */  /* Dashboard | Content Analytics */     'empty_column' => 0,
  /* admin_content */  /* Dashboard | Content Analytics */   ),
  /* admin_content */  /* Dashboard | Content Analytics */   'changed' => array(
  /* admin_content */  /* Dashboard | Content Analytics */     'sortable' => 1,
  /* admin_content */  /* Dashboard | Content Analytics */     'default_sort_order' => 'desc',
  /* admin_content */  /* Dashboard | Content Analytics */     'align' => '',
  /* admin_content */  /* Dashboard | Content Analytics */     'separator' => '',
  /* admin_content */  /* Dashboard | Content Analytics */     'empty_column' => 0,
  /* admin_content */  /* Dashboard | Content Analytics */   ),
  /* admin_content */  /* Dashboard | Content Analytics */   'timestamp' => array(
  /* admin_content */  /* Dashboard | Content Analytics */     'sortable' => 1,
  /* admin_content */  /* Dashboard | Content Analytics */     'default_sort_order' => 'desc',
  /* admin_content */  /* Dashboard | Content Analytics */     'align' => '',
  /* admin_content */  /* Dashboard | Content Analytics */     'separator' => '',
  /* admin_content */  /* Dashboard | Content Analytics */     'empty_column' => 0,
  /* admin_content */  /* Dashboard | Content Analytics */   ),
  /* admin_content */  /* Dashboard | Content Analytics */   'daycount' => array(
  /* admin_content */  /* Dashboard | Content Analytics */     'sortable' => 1,
  /* admin_content */  /* Dashboard | Content Analytics */     'default_sort_order' => 'desc',
  /* admin_content */  /* Dashboard | Content Analytics */     'align' => '',
  /* admin_content */  /* Dashboard | Content Analytics */     'separator' => '',
  /* admin_content */  /* Dashboard | Content Analytics */     'empty_column' => 0,
  /* admin_content */  /* Dashboard | Content Analytics */   ),
  /* admin_content */  /* Dashboard | Content Analytics */   'totalcount' => array(
  /* admin_content */  /* Dashboard | Content Analytics */     'sortable' => 1,
  /* admin_content */  /* Dashboard | Content Analytics */     'default_sort_order' => 'desc',
  /* admin_content */  /* Dashboard | Content Analytics */     'align' => '',
  /* admin_content */  /* Dashboard | Content Analytics */     'separator' => '',
  /* admin_content */  /* Dashboard | Content Analytics */     'empty_column' => 0,
  /* admin_content */  /* Dashboard | Content Analytics */   ),
  /* admin_content */  /* Dashboard | Content Analytics */   'value' => array(
  /* admin_content */  /* Dashboard | Content Analytics */     'sortable' => 1,
  /* admin_content */  /* Dashboard | Content Analytics */     'default_sort_order' => 'desc',
  /* admin_content */  /* Dashboard | Content Analytics */     'align' => '',
  /* admin_content */  /* Dashboard | Content Analytics */     'separator' => '',
  /* admin_content */  /* Dashboard | Content Analytics */     'empty_column' => 0,
  /* admin_content */  /* Dashboard | Content Analytics */   ),
  /* admin_content */  /* Dashboard | Content Analytics */   'comment_count' => array(
  /* admin_content */  /* Dashboard | Content Analytics */     'sortable' => 1,
  /* admin_content */  /* Dashboard | Content Analytics */     'default_sort_order' => 'desc',
  /* admin_content */  /* Dashboard | Content Analytics */     'align' => '',
  /* admin_content */  /* Dashboard | Content Analytics */     'separator' => '',
  /* admin_content */  /* Dashboard | Content Analytics */     'empty_column' => 0,
  /* admin_content */  /* Dashboard | Content Analytics */   ),
  /* admin_content */  /* Dashboard | Content Analytics */ );
  /* admin_content */  /* Dashboard | Content Analytics */ $handler->display->display_options['defaults']['style_options'] = FALSE;
  /* admin_content */  /* Dashboard | Content Analytics */ $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  /* admin_content */  /* Dashboard | Content Analytics */ $handler->display->display_options['defaults']['row_options'] = FALSE;
  /* admin_content */  /* Dashboard | Content Analytics */ $handler->display->display_options['defaults']['header'] = FALSE;
  /* admin_content */  /* Dashboard | Content Analytics */ $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* admin_content */  /* Dashboard | Content Analytics */ /* Relationship: OG membership: Group Node from OG membership */
  /* admin_content */  /* Dashboard | Content Analytics */ $handler->display->display_options['relationships']['og_membership_related_node_group']['id'] = 'og_membership_related_node_group';
  /* admin_content */  /* Dashboard | Content Analytics */ $handler->display->display_options['relationships']['og_membership_related_node_group']['table'] = 'og_membership';
  /* admin_content */  /* Dashboard | Content Analytics */ $handler->display->display_options['relationships']['og_membership_related_node_group']['field'] = 'og_membership_related_node_group';
  /* admin_content */  /* Dashboard | Content Analytics */ /* Relationship: OG membership: Node from OG membership */
  /* admin_content */  /* Dashboard | Content Analytics */ $handler->display->display_options['relationships']['og_membership_related_node']['id'] = 'og_membership_related_node';
  /* admin_content */  /* Dashboard | Content Analytics */ $handler->display->display_options['relationships']['og_membership_related_node']['table'] = 'og_membership';
  /* admin_content */  /* Dashboard | Content Analytics */ $handler->display->display_options['relationships']['og_membership_related_node']['field'] = 'og_membership_related_node';
  /* admin_content */  /* Dashboard | Content Analytics */ /* Relationship: OG membership: OG membership from Node */
  /* admin_content */  /* Dashboard | Content Analytics */ $handler->display->display_options['relationships']['og_membership_rel']['id'] = 'og_membership_rel';
  /* admin_content */  /* Dashboard | Content Analytics */ $handler->display->display_options['relationships']['og_membership_rel']['table'] = 'node';
  /* admin_content */  /* Dashboard | Content Analytics */ $handler->display->display_options['relationships']['og_membership_rel']['field'] = 'og_membership_rel';
  /* admin_content */  /* Dashboard | Content Analytics */ /* Relationship: OG membership: OG membership from Node group */
  /* admin_content */  /* Dashboard | Content Analytics */ $handler->display->display_options['relationships']['og_membership_rel_group']['id'] = 'og_membership_rel_group';
  /* admin_content */  /* Dashboard | Content Analytics */ $handler->display->display_options['relationships']['og_membership_rel_group']['table'] = 'node';
  /* admin_content */  /* Dashboard | Content Analytics */ $handler->display->display_options['relationships']['og_membership_rel_group']['field'] = 'og_membership_rel_group';
  /* admin_content */  /* Dashboard | Content Analytics */ /* Relationship: OG membership: OG Roles from membership */
  /* admin_content */  /* Dashboard | Content Analytics */ $handler->display->display_options['relationships']['og_users_roles']['id'] = 'og_users_roles';
  /* admin_content */  /* Dashboard | Content Analytics */ $handler->display->display_options['relationships']['og_users_roles']['table'] = 'og_membership';
  /* admin_content */  /* Dashboard | Content Analytics */ $handler->display->display_options['relationships']['og_users_roles']['field'] = 'og_users_roles';
  /* admin_content */  /* Dashboard | Content Analytics */ /* Relationship: OG membership: Type */
  /* admin_content */  /* Dashboard | Content Analytics */ $handler->display->display_options['relationships']['type']['id'] = 'type';
  /* admin_content */  /* Dashboard | Content Analytics */ $handler->display->display_options['relationships']['type']['table'] = 'og_membership';
  /* admin_content */  /* Dashboard | Content Analytics */ $handler->display->display_options['relationships']['type']['field'] = 'type';
  /* admin_content */  /* Dashboard | Content Analytics */ /* Relationship: Content: Author */
  /* admin_content */  /* Dashboard | Content Analytics */ $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  /* admin_content */  /* Dashboard | Content Analytics */ $handler->display->display_options['relationships']['uid']['table'] = 'node';
  /* admin_content */  /* Dashboard | Content Analytics */ $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* admin_content */  /* Dashboard | Content Analytics */ /* Relationship: Content: Vote results */
  /* admin_content */  /* Dashboard | Content Analytics */ $handler->display->display_options['relationships']['votingapi_cache']['id'] = 'votingapi_cache';
  /* admin_content */  /* Dashboard | Content Analytics */ $handler->display->display_options['relationships']['votingapi_cache']['table'] = 'node';
  /* admin_content */  /* Dashboard | Content Analytics */ $handler->display->display_options['relationships']['votingapi_cache']['field'] = 'votingapi_cache';
  /* admin_content */  /* Dashboard | Content Analytics */ $handler->display->display_options['relationships']['votingapi_cache']['label'] = 'Likes';
  /* admin_content */  /* Dashboard | Content Analytics */ $handler->display->display_options['relationships']['votingapi_cache']['votingapi'] = array(
  /* admin_content */  /* Dashboard | Content Analytics */   'value_type' => '',
  /* admin_content */  /* Dashboard | Content Analytics */   'tag' => 'vote',
  /* admin_content */  /* Dashboard | Content Analytics */   'function' => 'count',
  /* admin_content */  /* Dashboard | Content Analytics */ );
  /* admin_content */  /* Dashboard | Content Analytics */ /* Relationship: Content: Vote results */
  /* admin_content */  /* Dashboard | Content Analytics */ $handler->display->display_options['relationships']['votingapi_cache_1']['id'] = 'votingapi_cache_1';
  /* admin_content */  /* Dashboard | Content Analytics */ $handler->display->display_options['relationships']['votingapi_cache_1']['table'] = 'node';
  /* admin_content */  /* Dashboard | Content Analytics */ $handler->display->display_options['relationships']['votingapi_cache_1']['field'] = 'votingapi_cache';
  /* admin_content */  /* Dashboard | Content Analytics */ $handler->display->display_options['relationships']['votingapi_cache_1']['relationship'] = 'og_membership_related_node';
  /* admin_content */  /* Dashboard | Content Analytics */ $handler->display->display_options['relationships']['votingapi_cache_1']['votingapi'] = array(
  /* admin_content */  /* Dashboard | Content Analytics */   'value_type' => '',
  /* admin_content */  /* Dashboard | Content Analytics */   'tag' => '',
  /* admin_content */  /* Dashboard | Content Analytics */   'function' => 'sum',
  /* admin_content */  /* Dashboard | Content Analytics */ );
  /* admin_content */  /* Dashboard | Content Analytics */ $handler->display->display_options['defaults']['fields'] = FALSE;
  /* admin_content */  /* Dashboard | Content Analytics */ /* Field: Content: Author uid */
  /* admin_content */  /* Dashboard | Content Analytics */ $handler->display->display_options['fields']['uid']['id'] = 'uid';
  /* admin_content */  /* Dashboard | Content Analytics */ $handler->display->display_options['fields']['uid']['table'] = 'node';
  /* admin_content */  /* Dashboard | Content Analytics */ $handler->display->display_options['fields']['uid']['field'] = 'uid';
  /* admin_content */  /* Dashboard | Content Analytics */ $handler->display->display_options['fields']['uid']['exclude'] = TRUE;
  /* admin_content */  /* Dashboard | Content Analytics */ /* Field: Content: Nid */
  /* admin_content */  /* Dashboard | Content Analytics */ $handler->display->display_options['fields']['nid']['id'] = 'nid';
  /* admin_content */  /* Dashboard | Content Analytics */ $handler->display->display_options['fields']['nid']['table'] = 'node';
  /* admin_content */  /* Dashboard | Content Analytics */ $handler->display->display_options['fields']['nid']['field'] = 'nid';
  /* admin_content */  /* Dashboard | Content Analytics */ /* Field: Content: Title */
  /* admin_content */  /* Dashboard | Content Analytics */ $handler->display->display_options['fields']['title']['id'] = 'title';
  /* admin_content */  /* Dashboard | Content Analytics */ $handler->display->display_options['fields']['title']['table'] = 'node';
  /* admin_content */  /* Dashboard | Content Analytics */ $handler->display->display_options['fields']['title']['field'] = 'title';
  /* admin_content */  /* Dashboard | Content Analytics */ $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  /* admin_content */  /* Dashboard | Content Analytics */ $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* admin_content */  /* Dashboard | Content Analytics */ /* Field: Content: Type */
  /* admin_content */  /* Dashboard | Content Analytics */ $handler->display->display_options['fields']['type']['id'] = 'type';
  /* admin_content */  /* Dashboard | Content Analytics */ $handler->display->display_options['fields']['type']['table'] = 'node';
  /* admin_content */  /* Dashboard | Content Analytics */ $handler->display->display_options['fields']['type']['field'] = 'type';
  /* admin_content */  /* Dashboard | Content Analytics */ /* Field: User: Name */
  /* admin_content */  /* Dashboard | Content Analytics */ $handler->display->display_options['fields']['name']['id'] = 'name';
  /* admin_content */  /* Dashboard | Content Analytics */ $handler->display->display_options['fields']['name']['table'] = 'users';
  /* admin_content */  /* Dashboard | Content Analytics */ $handler->display->display_options['fields']['name']['field'] = 'name';
  /* admin_content */  /* Dashboard | Content Analytics */ $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  /* admin_content */  /* Dashboard | Content Analytics */ $handler->display->display_options['fields']['name']['label'] = 'Author';
  /* admin_content */  /* Dashboard | Content Analytics */ /* Field: Content: Who can see this content? */
  /* admin_content */  /* Dashboard | Content Analytics */ $handler->display->display_options['fields']['field_gn2_simple_access_1']['id'] = 'field_gn2_simple_access_1';
  /* admin_content */  /* Dashboard | Content Analytics */ $handler->display->display_options['fields']['field_gn2_simple_access_1']['table'] = 'field_data_field_gn2_simple_access';
  /* admin_content */  /* Dashboard | Content Analytics */ $handler->display->display_options['fields']['field_gn2_simple_access_1']['field'] = 'field_gn2_simple_access';
  /* admin_content */  /* Dashboard | Content Analytics */ $handler->display->display_options['fields']['field_gn2_simple_access_1']['settings'] = array(
  /* admin_content */  /* Dashboard | Content Analytics */   'field_formatter_class' => '',
  /* admin_content */  /* Dashboard | Content Analytics */ );
  /* admin_content */  /* Dashboard | Content Analytics */ /* Field: Content: Post date */
  /* admin_content */  /* Dashboard | Content Analytics */ $handler->display->display_options['fields']['created']['id'] = 'created';
  /* admin_content */  /* Dashboard | Content Analytics */ $handler->display->display_options['fields']['created']['table'] = 'node';
  /* admin_content */  /* Dashboard | Content Analytics */ $handler->display->display_options['fields']['created']['field'] = 'created';
  /* admin_content */  /* Dashboard | Content Analytics */ $handler->display->display_options['fields']['created']['label'] = 'PostDate';
  /* admin_content */  /* Dashboard | Content Analytics */ $handler->display->display_options['fields']['created']['date_format'] = 'short';
  /* admin_content */  /* Dashboard | Content Analytics */ $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
  /* admin_content */  /* Dashboard | Content Analytics */ /* Field: Content: Updated date */
  /* admin_content */  /* Dashboard | Content Analytics */ $handler->display->display_options['fields']['changed']['id'] = 'changed';
  /* admin_content */  /* Dashboard | Content Analytics */ $handler->display->display_options['fields']['changed']['table'] = 'node';
  /* admin_content */  /* Dashboard | Content Analytics */ $handler->display->display_options['fields']['changed']['field'] = 'changed';
  /* admin_content */  /* Dashboard | Content Analytics */ $handler->display->display_options['fields']['changed']['date_format'] = 'short';
  /* admin_content */  /* Dashboard | Content Analytics */ $handler->display->display_options['fields']['changed']['second_date_format'] = 'date_format_globalnet_date';
  /* admin_content */  /* Dashboard | Content Analytics */ /* Field: Content statistics: Most recent view */
  /* admin_content */  /* Dashboard | Content Analytics */ $handler->display->display_options['fields']['timestamp']['id'] = 'timestamp';
  /* admin_content */  /* Dashboard | Content Analytics */ $handler->display->display_options['fields']['timestamp']['table'] = 'node_counter';
  /* admin_content */  /* Dashboard | Content Analytics */ $handler->display->display_options['fields']['timestamp']['field'] = 'timestamp';
  /* admin_content */  /* Dashboard | Content Analytics */ $handler->display->display_options['fields']['timestamp']['label'] = 'Recent view date';
  /* admin_content */  /* Dashboard | Content Analytics */ $handler->display->display_options['fields']['timestamp']['date_format'] = 'short';
  /* admin_content */  /* Dashboard | Content Analytics */ $handler->display->display_options['fields']['timestamp']['second_date_format'] = 'date_format_globalnet_date';
  /* admin_content */  /* Dashboard | Content Analytics */ /* Field: Content statistics: Views today */
  /* admin_content */  /* Dashboard | Content Analytics */ $handler->display->display_options['fields']['daycount']['id'] = 'daycount';
  /* admin_content */  /* Dashboard | Content Analytics */ $handler->display->display_options['fields']['daycount']['table'] = 'node_counter';
  /* admin_content */  /* Dashboard | Content Analytics */ $handler->display->display_options['fields']['daycount']['field'] = 'daycount';
  /* admin_content */  /* Dashboard | Content Analytics */ /* Field: Content statistics: Total views */
  /* admin_content */  /* Dashboard | Content Analytics */ $handler->display->display_options['fields']['totalcount']['id'] = 'totalcount';
  /* admin_content */  /* Dashboard | Content Analytics */ $handler->display->display_options['fields']['totalcount']['table'] = 'node_counter';
  /* admin_content */  /* Dashboard | Content Analytics */ $handler->display->display_options['fields']['totalcount']['field'] = 'totalcount';
  /* admin_content */  /* Dashboard | Content Analytics */ /* Field: Vote results: Value */
  /* admin_content */  /* Dashboard | Content Analytics */ $handler->display->display_options['fields']['value']['id'] = 'value';
  /* admin_content */  /* Dashboard | Content Analytics */ $handler->display->display_options['fields']['value']['table'] = 'votingapi_cache';
  /* admin_content */  /* Dashboard | Content Analytics */ $handler->display->display_options['fields']['value']['field'] = 'value';
  /* admin_content */  /* Dashboard | Content Analytics */ $handler->display->display_options['fields']['value']['relationship'] = 'votingapi_cache';
  /* admin_content */  /* Dashboard | Content Analytics */ $handler->display->display_options['fields']['value']['label'] = 'Likes';
  /* admin_content */  /* Dashboard | Content Analytics */ $handler->display->display_options['fields']['value']['precision'] = '0';
  /* admin_content */  /* Dashboard | Content Analytics */ /* Field: Content: Comment count */
  /* admin_content */  /* Dashboard | Content Analytics */ $handler->display->display_options['fields']['comment_count']['id'] = 'comment_count';
  /* admin_content */  /* Dashboard | Content Analytics */ $handler->display->display_options['fields']['comment_count']['table'] = 'node_comment_statistics';
  /* admin_content */  /* Dashboard | Content Analytics */ $handler->display->display_options['fields']['comment_count']['field'] = 'comment_count';
  /* admin_content */  /* Dashboard | Content Analytics */ $handler->display->display_options['fields']['comment_count']['label'] = 'Comments';
  /* admin_content */  /* Dashboard | Content Analytics */ $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* admin_content */  /* Dashboard | Content Analytics */ $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* admin_content */  /* Dashboard | Content Analytics */ /* Contextual filter: Content: Parent Organization (field_parent_organization) */
  /* admin_content */  /* Dashboard | Content Analytics */ $handler->display->display_options['arguments']['field_parent_organization_target_id']['id'] = 'field_parent_organization_target_id';
  /* admin_content */  /* Dashboard | Content Analytics */ $handler->display->display_options['arguments']['field_parent_organization_target_id']['table'] = 'field_data_field_parent_organization';
  /* admin_content */  /* Dashboard | Content Analytics */ $handler->display->display_options['arguments']['field_parent_organization_target_id']['field'] = 'field_parent_organization_target_id';
  /* admin_content */  /* Dashboard | Content Analytics */ $handler->display->display_options['arguments']['field_parent_organization_target_id']['relationship'] = 'og_membership_related_node';
  /* admin_content */  /* Dashboard | Content Analytics */ $handler->display->display_options['arguments']['field_parent_organization_target_id']['default_action'] = 'default';
  /* admin_content */  /* Dashboard | Content Analytics */ $handler->display->display_options['arguments']['field_parent_organization_target_id']['default_argument_type'] = 'node';
  /* admin_content */  /* Dashboard | Content Analytics */ $handler->display->display_options['arguments']['field_parent_organization_target_id']['summary']['number_of_records'] = '0';
  /* admin_content */  /* Dashboard | Content Analytics */ $handler->display->display_options['arguments']['field_parent_organization_target_id']['summary']['format'] = 'default_summary';
  /* admin_content */  /* Dashboard | Content Analytics */ $handler->display->display_options['arguments']['field_parent_organization_target_id']['summary_options']['items_per_page'] = '25';
  /* admin_content */  /* Dashboard | Content Analytics */ $handler->display->display_options['arguments']['field_parent_organization_target_id']['specify_validation'] = TRUE;
  /* admin_content */  /* Dashboard | Content Analytics */ $handler->display->display_options['arguments']['field_parent_organization_target_id']['validate']['type'] = 'og';
  /* admin_content */  /* Dashboard | Content Analytics */ $handler->display->display_options['arguments']['field_parent_organization_target_id']['validate']['fail'] = 'empty';
  /* admin_content */  /* Dashboard | Content Analytics */ $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  /* admin_content */  /* Dashboard | Content Analytics */ $handler->display->display_options['defaults']['filters'] = FALSE;
  /* admin_content */  /* Dashboard | Content Analytics */ /* Filter criterion: Content: Type */
  /* admin_content */  /* Dashboard | Content Analytics */ $handler->display->display_options['filters']['type']['id'] = 'type';
  /* admin_content */  /* Dashboard | Content Analytics */ $handler->display->display_options['filters']['type']['table'] = 'node';
  /* admin_content */  /* Dashboard | Content Analytics */ $handler->display->display_options['filters']['type']['field'] = 'type';
  /* admin_content */  /* Dashboard | Content Analytics */ $handler->display->display_options['filters']['type']['value'] = array(
  /* admin_content */  /* Dashboard | Content Analytics */   'about_page' => 'about_page',
  /* admin_content */  /* Dashboard | Content Analytics */   'alumni_group' => 'alumni_group',
  /* admin_content */  /* Dashboard | Content Analytics */   'announcement' => 'announcement',
  /* admin_content */  /* Dashboard | Content Analytics */   'coi' => 'coi',
  /* admin_content */  /* Dashboard | Content Analytics */   'course' => 'course',
  /* admin_content */  /* Dashboard | Content Analytics */   'course_group' => 'course_group',
  /* admin_content */  /* Dashboard | Content Analytics */   'program' => 'program',
  /* admin_content */  /* Dashboard | Content Analytics */   'event' => 'event',
  /* admin_content */  /* Dashboard | Content Analytics */   'media_gallery' => 'media_gallery',
  /* admin_content */  /* Dashboard | Content Analytics */   'group' => 'group',
  /* admin_content */  /* Dashboard | Content Analytics */   'help' => 'help',
  /* admin_content */  /* Dashboard | Content Analytics */   'news' => 'news',
  /* admin_content */  /* Dashboard | Content Analytics */   'organization' => 'organization',
  /* admin_content */  /* Dashboard | Content Analytics */   'page' => 'page',
  /* admin_content */  /* Dashboard | Content Analytics */   'panel' => 'panel',
  /* admin_content */  /* Dashboard | Content Analytics */   'poll' => 'poll',
  /* admin_content */  /* Dashboard | Content Analytics */   'post' => 'post',
  /* admin_content */  /* Dashboard | Content Analytics */   'publication' => 'publication',
  /* admin_content */  /* Dashboard | Content Analytics */ );
  /* admin_content */  /* Dashboard | Content Analytics */ $handler->display->display_options['filters']['type']['group'] = 1;
  /* admin_content */  /* Dashboard | Content Analytics */ $handler->display->display_options['filters']['type']['exposed'] = TRUE;
  /* admin_content */  /* Dashboard | Content Analytics */ $handler->display->display_options['filters']['type']['expose']['operator_id'] = 'type_op';
  /* admin_content */  /* Dashboard | Content Analytics */ $handler->display->display_options['filters']['type']['expose']['label'] = 'Content Type';
  /* admin_content */  /* Dashboard | Content Analytics */ $handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
  /* admin_content */  /* Dashboard | Content Analytics */ $handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';
  /* admin_content */  /* Dashboard | Content Analytics */ $handler->display->display_options['filters']['type']['expose']['multiple'] = TRUE;
  /* admin_content */  /* Dashboard | Content Analytics */ $handler->display->display_options['filters']['type']['expose']['remember_roles'] = array(
  /* admin_content */  /* Dashboard | Content Analytics */   2 => '2',
  /* admin_content */  /* Dashboard | Content Analytics */   1 => 0,
  /* admin_content */  /* Dashboard | Content Analytics */   9 => 0,
  /* admin_content */  /* Dashboard | Content Analytics */ );
  /* admin_content */  /* Dashboard | Content Analytics */ $handler->display->display_options['filters']['type']['expose']['reduce'] = TRUE;
  /* admin_content */  /* Dashboard | Content Analytics */ /* Filter criterion: Content: Title */
  /* admin_content */  /* Dashboard | Content Analytics */ $handler->display->display_options['filters']['title']['id'] = 'title';
  /* admin_content */  /* Dashboard | Content Analytics */ $handler->display->display_options['filters']['title']['table'] = 'node';
  /* admin_content */  /* Dashboard | Content Analytics */ $handler->display->display_options['filters']['title']['field'] = 'title';
  /* admin_content */  /* Dashboard | Content Analytics */ $handler->display->display_options['filters']['title']['operator'] = 'word';
  /* admin_content */  /* Dashboard | Content Analytics */ $handler->display->display_options['filters']['title']['group'] = 1;
  /* admin_content */  /* Dashboard | Content Analytics */ $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  /* admin_content */  /* Dashboard | Content Analytics */ $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  /* admin_content */  /* Dashboard | Content Analytics */ $handler->display->display_options['filters']['title']['expose']['label'] = 'Title';
  /* admin_content */  /* Dashboard | Content Analytics */ $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  /* admin_content */  /* Dashboard | Content Analytics */ $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  /* admin_content */  /* Dashboard | Content Analytics */ $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
  /* admin_content */  /* Dashboard | Content Analytics */   2 => '2',
  /* admin_content */  /* Dashboard | Content Analytics */   1 => 0,
  /* admin_content */  /* Dashboard | Content Analytics */   9 => 0,
  /* admin_content */  /* Dashboard | Content Analytics */   10 => 0,
  /* admin_content */  /* Dashboard | Content Analytics */ );
  /* admin_content */  /* Dashboard | Content Analytics */ $handler->display->display_options['filters']['title']['expose']['autocomplete_items'] = '10';
  /* admin_content */  /* Dashboard | Content Analytics */ $handler->display->display_options['filters']['title']['expose']['autocomplete_min_chars'] = '0';
  /* admin_content */  /* Dashboard | Content Analytics */ $handler->display->display_options['filters']['title']['expose']['autocomplete_field'] = 'title';
  /* admin_content */  /* Dashboard | Content Analytics */ $handler->display->display_options['filters']['title']['expose']['autocomplete_raw_suggestion'] = 1;
  /* admin_content */  /* Dashboard | Content Analytics */ $handler->display->display_options['filters']['title']['expose']['autocomplete_raw_dropdown'] = 1;
  /* admin_content */  /* Dashboard | Content Analytics */ $handler->display->display_options['filters']['title']['expose']['autocomplete_dependent'] = 0;
  /* admin_content */  /* Dashboard | Content Analytics */ /* Filter criterion: User: Name */
  /* admin_content */  /* Dashboard | Content Analytics */ $handler->display->display_options['filters']['uid']['id'] = 'uid';
  /* admin_content */  /* Dashboard | Content Analytics */ $handler->display->display_options['filters']['uid']['table'] = 'users';
  /* admin_content */  /* Dashboard | Content Analytics */ $handler->display->display_options['filters']['uid']['field'] = 'uid';
  /* admin_content */  /* Dashboard | Content Analytics */ $handler->display->display_options['filters']['uid']['relationship'] = 'uid';
  /* admin_content */  /* Dashboard | Content Analytics */ $handler->display->display_options['filters']['uid']['value'] = '';
  /* admin_content */  /* Dashboard | Content Analytics */ $handler->display->display_options['filters']['uid']['group'] = 1;
  /* admin_content */  /* Dashboard | Content Analytics */ $handler->display->display_options['filters']['uid']['exposed'] = TRUE;
  /* admin_content */  /* Dashboard | Content Analytics */ $handler->display->display_options['filters']['uid']['expose']['operator_id'] = 'uid_op';
  /* admin_content */  /* Dashboard | Content Analytics */ $handler->display->display_options['filters']['uid']['expose']['label'] = 'Name';
  /* admin_content */  /* Dashboard | Content Analytics */ $handler->display->display_options['filters']['uid']['expose']['operator'] = 'uid_op';
  /* admin_content */  /* Dashboard | Content Analytics */ $handler->display->display_options['filters']['uid']['expose']['identifier'] = 'uid';
  /* admin_content */  /* Dashboard | Content Analytics */ $handler->display->display_options['filters']['uid']['expose']['remember_roles'] = array(
  /* admin_content */  /* Dashboard | Content Analytics */   2 => '2',
  /* admin_content */  /* Dashboard | Content Analytics */   1 => 0,
  /* admin_content */  /* Dashboard | Content Analytics */   9 => 0,
  /* admin_content */  /* Dashboard | Content Analytics */   10 => 0,
  /* admin_content */  /* Dashboard | Content Analytics */ );
  /* admin_content */  /* Dashboard | Content Analytics */ $handler->display->display_options['filters']['uid']['expose']['reduce'] = TRUE;
  /* admin_content */  /* Dashboard | Content Analytics */ /* Filter criterion: Content: Updated date */
  /* admin_content */  /* Dashboard | Content Analytics */ $handler->display->display_options['filters']['changed']['id'] = 'changed';
  /* admin_content */  /* Dashboard | Content Analytics */ $handler->display->display_options['filters']['changed']['table'] = 'node';
  /* admin_content */  /* Dashboard | Content Analytics */ $handler->display->display_options['filters']['changed']['field'] = 'changed';
  /* admin_content */  /* Dashboard | Content Analytics */ $handler->display->display_options['filters']['changed']['operator'] = 'between';
  /* admin_content */  /* Dashboard | Content Analytics */ $handler->display->display_options['filters']['changed']['exposed'] = TRUE;
  /* admin_content */  /* Dashboard | Content Analytics */ $handler->display->display_options['filters']['changed']['expose']['operator_id'] = 'changed_op';
  /* admin_content */  /* Dashboard | Content Analytics */ $handler->display->display_options['filters']['changed']['expose']['label'] = 'Updated date';
  /* admin_content */  /* Dashboard | Content Analytics */ $handler->display->display_options['filters']['changed']['expose']['operator'] = 'changed_op';
  /* admin_content */  /* Dashboard | Content Analytics */ $handler->display->display_options['filters']['changed']['expose']['identifier'] = 'changed';
  /* admin_content */  /* Dashboard | Content Analytics */ $handler->display->display_options['filters']['changed']['expose']['remember_roles'] = array(
  /* admin_content */  /* Dashboard | Content Analytics */   2 => '2',
  /* admin_content */  /* Dashboard | Content Analytics */   1 => 0,
  /* admin_content */  /* Dashboard | Content Analytics */   9 => 0,
  /* admin_content */  /* Dashboard | Content Analytics */   10 => 0,
  /* admin_content */  /* Dashboard | Content Analytics */ );
  /* admin_content */  /* Dashboard | Content Analytics */ $handler->display->display_options['path'] = 'node/%/dashboard/content-analytics';
  /* admin_content */  /* Dashboard | Content Analytics */ $handler->display->display_options['menu']['type'] = 'tab';
  /* admin_content */  /* Dashboard | Content Analytics */ $handler->display->display_options['menu']['title'] = 'Content Analytics';
  /* admin_content */  /* Dashboard | Content Analytics */ $handler->display->display_options['menu']['weight'] = '5';
  /* admin_content */  /* Dashboard | Content Analytics */ $handler->display->display_options['menu']['context'] = 0;
  /* admin_content */  /* Dashboard | Content Analytics */ $handler->display->display_options['menu']['context_only_inline'] = 0;
  /* admin_content */ $translatables['admin_content'] = array(
  /* admin_content */   t('Master'),
  /* admin_content */   t('Admin Content'),
  /* admin_content */   t('more'),
  /* admin_content */   t('Apply'),
  /* admin_content */   t('Reset'),
  /* admin_content */   t('Sort by'),
  /* admin_content */   t('Asc'),
  /* admin_content */   t('Desc'),
  /* admin_content */   t('author'),
  /* admin_content */   t('Content'),
  /* admin_content */   t('- Choose an operation -'),
  /* admin_content */   t('Edit link'),
  /* admin_content */   t('ID'),
  /* admin_content */   t('Title'),
  /* admin_content */   t('Event Start Date'),
  /* admin_content */   t('Author'),
  /* admin_content */   t('Contact Person'),
  /* admin_content */   t('Parent Group'),
  /* admin_content */   t('Parent Org'),
  /* admin_content */   t('Published'),
  /* admin_content */   t('Date Posted'),
  /* admin_content */   t('Date Updated'),
  /* admin_content */   t('All'),
  /* admin_content */   t('Content Type'),
  /* admin_content */   t('Manage Content'),
  /* admin_content */   t('Items per page'),
  /* admin_content */   t('- All -'),
  /* admin_content */   t('Offset'),
  /* admin_content */   t('« first'),
  /* admin_content */   t('‹ previous'),
  /* admin_content */   t('next ›'),
  /* admin_content */   t('last »'),
  /* admin_content */   t('Group node from OG membership'),
  /* admin_content */   t('node from OG membership'),
  /* admin_content */   t('OG membership from node'),
  /* admin_content */   t('OG membership from node group'),
  /* admin_content */   t('OG Roles from OG membership'),
  /* admin_content */   t('OG membership type'),
  /* admin_content */   t('Likes'),
  /* admin_content */   t('Vote results'),
  /* admin_content */   t('Author uid'),
  /* admin_content */   t('Type'),
  /* admin_content */   t('Nid'),
  /* admin_content */   t('Groups audience'),
  /* admin_content */   t('Who can see this content?'),
  /* admin_content */   t('PostDate'),
  /* admin_content */   t('Updated date'),
  /* admin_content */   t('Has new content'),
  /* admin_content */   t('Post date'),
  /* admin_content */   t('Group ID'),
  /* admin_content */   t('Public'),
  /* admin_content */   t('Search'),
  /* admin_content */   t('Manage Events'),
  /* admin_content */   t('Manage Events: Table'),
  /* admin_content */   t('Dashboard | Manage Content'),
  /* admin_content */   t('Name'),
  /* admin_content */   t('Dashboard | Content Analytics'),
  /* admin_content */   t('Content Analytics'),
  /* admin_content */   t('Recent view date'),
  /* admin_content */   t('Views today'),
  /* admin_content */   t('.'),
  /* admin_content */   t(','),
  /* admin_content */   t('Total views'),
  /* admin_content */   t('Comments'),
  /* admin_content */ );
  $export['admin_content'] = $view;

  /* admin_files */ $view = new view();
  /* admin_files */ $view->name = 'admin_files';
  /* admin_files */ $view->description = '';
  /* admin_files */ $view->tag = 'default';
  /* admin_files */ $view->base_table = 'file_managed';
  /* admin_files */ $view->human_name = 'Admin Files';
  /* admin_files */ $view->core = 7;
  /* admin_files */ $view->api_version = '3.0';
  /* admin_files */ $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* admin_files */ /* Display: Master */
  /* admin_files */  /* Master */ $handler = $view->new_display('default', 'Master', 'default');
  /* admin_files */  /* Master */ $handler->display->display_options['title'] = 'Manage Files';
  /* admin_files */  /* Master */ $handler->display->display_options['use_more_always'] = FALSE;
  /* admin_files */  /* Master */ $handler->display->display_options['group_by'] = TRUE;
  /* admin_files */  /* Master */ $handler->display->display_options['access']['type'] = 'gn2_manager_access';
  /* admin_files */  /* Master */ $handler->display->display_options['access']['gn2_roles'] = array(
  /* admin_files */  /* Master */   'org_manager' => 'org_manager',
  /* admin_files */  /* Master */   'faculty' => 'faculty',
  /* admin_files */  /* Master */ );
  /* admin_files */  /* Master */ $handler->display->display_options['cache']['type'] = 'none';
  /* admin_files */  /* Master */ $handler->display->display_options['query']['type'] = 'views_query';
  /* admin_files */  /* Master */ $handler->display->display_options['exposed_form']['type'] = 'basic';
  /* admin_files */  /* Master */ $handler->display->display_options['pager']['type'] = 'full';
  /* admin_files */  /* Master */ $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  /* admin_files */  /* Master */ $handler->display->display_options['pager']['options']['offset'] = '0';
  /* admin_files */  /* Master */ $handler->display->display_options['pager']['options']['id'] = '0';
  /* admin_files */  /* Master */ $handler->display->display_options['pager']['options']['quantity'] = '4';
  /* admin_files */  /* Master */ $handler->display->display_options['style_plugin'] = 'datatables';
  /* admin_files */  /* Master */ $handler->display->display_options['style_options']['columns'] = array(
  /* admin_files */  /* Master */   'views_bulk_operations' => 'views_bulk_operations',
  /* admin_files */  /* Master */   'fid' => 'fid',
  /* admin_files */  /* Master */   'filename' => 'filename',
  /* admin_files */  /* Master */   'download' => 'download',
  /* admin_files */  /* Master */   'edit' => 'edit',
  /* admin_files */  /* Master */   'filemime' => 'filemime',
  /* admin_files */  /* Master */   'timestamp' => 'timestamp',
  /* admin_files */  /* Master */   'filesize' => 'filesize',
  /* admin_files */  /* Master */   'type' => 'type',
  /* admin_files */  /* Master */   'count' => 'count',
  /* admin_files */  /* Master */   'nothing' => 'nothing',
  /* admin_files */  /* Master */ );
  /* admin_files */  /* Master */ $handler->display->display_options['style_options']['default'] = 'timestamp';
  /* admin_files */  /* Master */ $handler->display->display_options['style_options']['info'] = array(
  /* admin_files */  /* Master */   'views_bulk_operations' => array(
  /* admin_files */  /* Master */     'align' => '',
  /* admin_files */  /* Master */     'separator' => '',
  /* admin_files */  /* Master */     'empty_column' => 0,
  /* admin_files */  /* Master */   ),
  /* admin_files */  /* Master */   'fid' => array(
  /* admin_files */  /* Master */     'sortable' => 0,
  /* admin_files */  /* Master */     'default_sort_order' => 'asc',
  /* admin_files */  /* Master */     'align' => '',
  /* admin_files */  /* Master */     'separator' => '',
  /* admin_files */  /* Master */     'empty_column' => 0,
  /* admin_files */  /* Master */   ),
  /* admin_files */  /* Master */   'filename' => array(
  /* admin_files */  /* Master */     'sortable' => 1,
  /* admin_files */  /* Master */     'default_sort_order' => 'asc',
  /* admin_files */  /* Master */     'align' => '',
  /* admin_files */  /* Master */     'separator' => '',
  /* admin_files */  /* Master */     'empty_column' => 0,
  /* admin_files */  /* Master */   ),
  /* admin_files */  /* Master */   'download' => array(
  /* admin_files */  /* Master */     'align' => '',
  /* admin_files */  /* Master */     'separator' => '',
  /* admin_files */  /* Master */     'empty_column' => 0,
  /* admin_files */  /* Master */   ),
  /* admin_files */  /* Master */   'edit' => array(
  /* admin_files */  /* Master */     'align' => '',
  /* admin_files */  /* Master */     'separator' => '',
  /* admin_files */  /* Master */     'empty_column' => 0,
  /* admin_files */  /* Master */   ),
  /* admin_files */  /* Master */   'filemime' => array(
  /* admin_files */  /* Master */     'sortable' => 0,
  /* admin_files */  /* Master */     'default_sort_order' => 'asc',
  /* admin_files */  /* Master */     'align' => '',
  /* admin_files */  /* Master */     'separator' => '',
  /* admin_files */  /* Master */     'empty_column' => 0,
  /* admin_files */  /* Master */   ),
  /* admin_files */  /* Master */   'timestamp' => array(
  /* admin_files */  /* Master */     'sortable' => 1,
  /* admin_files */  /* Master */     'default_sort_order' => 'asc',
  /* admin_files */  /* Master */     'align' => '',
  /* admin_files */  /* Master */     'separator' => '',
  /* admin_files */  /* Master */     'empty_column' => 0,
  /* admin_files */  /* Master */   ),
  /* admin_files */  /* Master */   'filesize' => array(
  /* admin_files */  /* Master */     'sortable' => 1,
  /* admin_files */  /* Master */     'default_sort_order' => 'asc',
  /* admin_files */  /* Master */     'align' => '',
  /* admin_files */  /* Master */     'separator' => '',
  /* admin_files */  /* Master */     'empty_column' => 0,
  /* admin_files */  /* Master */   ),
  /* admin_files */  /* Master */   'type' => array(
  /* admin_files */  /* Master */     'sortable' => 1,
  /* admin_files */  /* Master */     'default_sort_order' => 'asc',
  /* admin_files */  /* Master */     'align' => '',
  /* admin_files */  /* Master */     'separator' => '',
  /* admin_files */  /* Master */     'empty_column' => 0,
  /* admin_files */  /* Master */   ),
  /* admin_files */  /* Master */   'count' => array(
  /* admin_files */  /* Master */     'sortable' => 1,
  /* admin_files */  /* Master */     'default_sort_order' => 'asc',
  /* admin_files */  /* Master */     'align' => '',
  /* admin_files */  /* Master */     'separator' => '',
  /* admin_files */  /* Master */     'empty_column' => 0,
  /* admin_files */  /* Master */   ),
  /* admin_files */  /* Master */   'nothing' => array(
  /* admin_files */  /* Master */     'align' => '',
  /* admin_files */  /* Master */     'separator' => '',
  /* admin_files */  /* Master */     'empty_column' => 0,
  /* admin_files */  /* Master */   ),
  /* admin_files */  /* Master */ );
  /* admin_files */  /* Master */ $handler->display->display_options['style_options']['elements'] = array(
  /* admin_files */  /* Master */   'search_box' => 1,
  /* admin_files */  /* Master */   'table_info' => 1,
  /* admin_files */  /* Master */   'save_state' => 0,
  /* admin_files */  /* Master */   'table_tools' => 0,
  /* admin_files */  /* Master */ );
  /* admin_files */  /* Master */ $handler->display->display_options['style_options']['layout'] = array(
  /* admin_files */  /* Master */   'autowidth' => 0,
  /* admin_files */  /* Master */   'themeroller' => 0,
  /* admin_files */  /* Master */   'sdom' => '',
  /* admin_files */  /* Master */ );
  /* admin_files */  /* Master */ $handler->display->display_options['style_options']['pages'] = array(
  /* admin_files */  /* Master */   'pagination_style' => 'no_pagination',
  /* admin_files */  /* Master */   'length_change' => 0,
  /* admin_files */  /* Master */   'display_length' => '50',
  /* admin_files */  /* Master */ );
  /* admin_files */  /* Master */ /* Relationship: File Usage: Content */
  /* admin_files */  /* Master */ $handler->display->display_options['relationships']['file_to_node']['id'] = 'file_to_node';
  /* admin_files */  /* Master */ $handler->display->display_options['relationships']['file_to_node']['table'] = 'file_usage';
  /* admin_files */  /* Master */ $handler->display->display_options['relationships']['file_to_node']['field'] = 'file_to_node';
  /* admin_files */  /* Master */ /* Relationship: Field: Associated Media (field_media:fid) */
  /* admin_files */  /* Master */ $handler->display->display_options['relationships']['field_media_fid']['id'] = 'field_media_fid';
  /* admin_files */  /* Master */ $handler->display->display_options['relationships']['field_media_fid']['table'] = 'field_data_field_media';
  /* admin_files */  /* Master */ $handler->display->display_options['relationships']['field_media_fid']['field'] = 'field_media_fid';
  /* admin_files */  /* Master */ $handler->display->display_options['relationships']['field_media_fid']['relationship'] = 'file_to_node';
  /* admin_files */  /* Master */ /* Relationship: OG membership: Group Node from OG membership */
  /* admin_files */  /* Master */ $handler->display->display_options['relationships']['og_membership_related_node_group']['id'] = 'og_membership_related_node_group';
  /* admin_files */  /* Master */ $handler->display->display_options['relationships']['og_membership_related_node_group']['table'] = 'og_membership';
  /* admin_files */  /* Master */ $handler->display->display_options['relationships']['og_membership_related_node_group']['field'] = 'og_membership_related_node_group';
  /* admin_files */  /* Master */ $handler->display->display_options['relationships']['og_membership_related_node_group']['relationship'] = 'file_to_node';
  /* admin_files */  /* Master */ /* Relationship: OG membership: Node from OG membership */
  /* admin_files */  /* Master */ $handler->display->display_options['relationships']['og_membership_related_node']['id'] = 'og_membership_related_node';
  /* admin_files */  /* Master */ $handler->display->display_options['relationships']['og_membership_related_node']['table'] = 'og_membership';
  /* admin_files */  /* Master */ $handler->display->display_options['relationships']['og_membership_related_node']['field'] = 'og_membership_related_node';
  /* admin_files */  /* Master */ $handler->display->display_options['relationships']['og_membership_related_node']['relationship'] = 'file_to_node';
  /* admin_files */  /* Master */ /* Relationship: OG membership: OG membership from Node */
  /* admin_files */  /* Master */ $handler->display->display_options['relationships']['og_membership_rel']['id'] = 'og_membership_rel';
  /* admin_files */  /* Master */ $handler->display->display_options['relationships']['og_membership_rel']['table'] = 'node';
  /* admin_files */  /* Master */ $handler->display->display_options['relationships']['og_membership_rel']['field'] = 'og_membership_rel';
  /* admin_files */  /* Master */ $handler->display->display_options['relationships']['og_membership_rel']['relationship'] = 'file_to_node';
  /* admin_files */  /* Master */ /* Relationship: OG membership: OG membership from Node group */
  /* admin_files */  /* Master */ $handler->display->display_options['relationships']['og_membership_rel_group']['id'] = 'og_membership_rel_group';
  /* admin_files */  /* Master */ $handler->display->display_options['relationships']['og_membership_rel_group']['table'] = 'node';
  /* admin_files */  /* Master */ $handler->display->display_options['relationships']['og_membership_rel_group']['field'] = 'og_membership_rel_group';
  /* admin_files */  /* Master */ $handler->display->display_options['relationships']['og_membership_rel_group']['relationship'] = 'file_to_node';
  /* admin_files */  /* Master */ /* Field: Bulk operations: File */
  /* admin_files */  /* Master */ $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  /* admin_files */  /* Master */ $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'file_managed';
  /* admin_files */  /* Master */ $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  /* admin_files */  /* Master */ $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '0';
  /* admin_files */  /* Master */ $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  /* admin_files */  /* Master */ $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['row_clickable'] = 1;
  /* admin_files */  /* Master */ $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  /* admin_files */  /* Master */ $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  /* admin_files */  /* Master */ $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
  /* admin_files */  /* Master */   'action::views_bulk_operations_delete_item' => array(
  /* admin_files */  /* Master */     'selected' => 1,
  /* admin_files */  /* Master */     'postpone_processing' => 0,
  /* admin_files */  /* Master */     'skip_confirmation' => 0,
  /* admin_files */  /* Master */     'override_label' => 0,
  /* admin_files */  /* Master */     'label' => '',
  /* admin_files */  /* Master */   ),
  /* admin_files */  /* Master */ );
  /* admin_files */  /* Master */ /* Field: File: File ID */
  /* admin_files */  /* Master */ $handler->display->display_options['fields']['fid']['id'] = 'fid';
  /* admin_files */  /* Master */ $handler->display->display_options['fields']['fid']['table'] = 'file_managed';
  /* admin_files */  /* Master */ $handler->display->display_options['fields']['fid']['field'] = 'fid';
  /* admin_files */  /* Master */ /* Field: File: Name */
  /* admin_files */  /* Master */ $handler->display->display_options['fields']['filename']['id'] = 'filename';
  /* admin_files */  /* Master */ $handler->display->display_options['fields']['filename']['table'] = 'file_managed';
  /* admin_files */  /* Master */ $handler->display->display_options['fields']['filename']['field'] = 'filename';
  /* admin_files */  /* Master */ $handler->display->display_options['fields']['filename']['label'] = 'File name';
  /* admin_files */  /* Master */ $handler->display->display_options['fields']['filename']['alter']['word_boundary'] = FALSE;
  /* admin_files */  /* Master */ $handler->display->display_options['fields']['filename']['alter']['ellipsis'] = FALSE;
  /* admin_files */  /* Master */ /* Field: File: Download link */
  /* admin_files */  /* Master */ $handler->display->display_options['fields']['download']['id'] = 'download';
  /* admin_files */  /* Master */ $handler->display->display_options['fields']['download']['table'] = 'file_managed';
  /* admin_files */  /* Master */ $handler->display->display_options['fields']['download']['field'] = 'download';
  /* admin_files */  /* Master */ $handler->display->display_options['fields']['download']['exclude'] = TRUE;
  /* admin_files */  /* Master */ /* Field: File: Edit link */
  /* admin_files */  /* Master */ $handler->display->display_options['fields']['edit']['id'] = 'edit';
  /* admin_files */  /* Master */ $handler->display->display_options['fields']['edit']['table'] = 'file_managed';
  /* admin_files */  /* Master */ $handler->display->display_options['fields']['edit']['field'] = 'edit';
  /* admin_files */  /* Master */ $handler->display->display_options['fields']['edit']['exclude'] = TRUE;
  /* admin_files */  /* Master */ /* Field: File: Mime type */
  /* admin_files */  /* Master */ $handler->display->display_options['fields']['filemime']['id'] = 'filemime';
  /* admin_files */  /* Master */ $handler->display->display_options['fields']['filemime']['table'] = 'file_managed';
  /* admin_files */  /* Master */ $handler->display->display_options['fields']['filemime']['field'] = 'filemime';
  /* admin_files */  /* Master */ $handler->display->display_options['fields']['filemime']['exclude'] = TRUE;
  /* admin_files */  /* Master */ /* Field: File: Upload date */
  /* admin_files */  /* Master */ $handler->display->display_options['fields']['timestamp']['id'] = 'timestamp';
  /* admin_files */  /* Master */ $handler->display->display_options['fields']['timestamp']['table'] = 'file_managed';
  /* admin_files */  /* Master */ $handler->display->display_options['fields']['timestamp']['field'] = 'timestamp';
  /* admin_files */  /* Master */ $handler->display->display_options['fields']['timestamp']['date_format'] = 'date_format_military_with_time';
  /* admin_files */  /* Master */ $handler->display->display_options['fields']['timestamp']['second_date_format'] = 'date_format_globalnet_date';
  /* admin_files */  /* Master */ /* Field: File: Size */
  /* admin_files */  /* Master */ $handler->display->display_options['fields']['filesize']['id'] = 'filesize';
  /* admin_files */  /* Master */ $handler->display->display_options['fields']['filesize']['table'] = 'file_managed';
  /* admin_files */  /* Master */ $handler->display->display_options['fields']['filesize']['field'] = 'filesize';
  /* admin_files */  /* Master */ /* Field: File: Type */
  /* admin_files */  /* Master */ $handler->display->display_options['fields']['type']['id'] = 'type';
  /* admin_files */  /* Master */ $handler->display->display_options['fields']['type']['table'] = 'file_managed';
  /* admin_files */  /* Master */ $handler->display->display_options['fields']['type']['field'] = 'type';
  /* admin_files */  /* Master */ $handler->display->display_options['fields']['type']['machine_name'] = 0;
  /* admin_files */  /* Master */ /* Field: COUNT(File Usage: Use count) */
  /* admin_files */  /* Master */ $handler->display->display_options['fields']['count']['id'] = 'count';
  /* admin_files */  /* Master */ $handler->display->display_options['fields']['count']['table'] = 'file_usage';
  /* admin_files */  /* Master */ $handler->display->display_options['fields']['count']['field'] = 'count';
  /* admin_files */  /* Master */ $handler->display->display_options['fields']['count']['group_type'] = 'count';
  /* admin_files */  /* Master */ /* Field: Content statistics: Most recent view */
  /* admin_files */  /* Master */ $handler->display->display_options['fields']['timestamp_1']['id'] = 'timestamp_1';
  /* admin_files */  /* Master */ $handler->display->display_options['fields']['timestamp_1']['table'] = 'node_counter';
  /* admin_files */  /* Master */ $handler->display->display_options['fields']['timestamp_1']['field'] = 'timestamp';
  /* admin_files */  /* Master */ $handler->display->display_options['fields']['timestamp_1']['relationship'] = 'file_to_node';
  /* admin_files */  /* Master */ $handler->display->display_options['fields']['timestamp_1']['label'] = 'Recent view date';
  /* admin_files */  /* Master */ $handler->display->display_options['fields']['timestamp_1']['date_format'] = 'short';
  /* admin_files */  /* Master */ $handler->display->display_options['fields']['timestamp_1']['second_date_format'] = 'date_format_globalnet_date';
  /* admin_files */  /* Master */ /* Field: Content statistics: Views today */
  /* admin_files */  /* Master */ $handler->display->display_options['fields']['daycount']['id'] = 'daycount';
  /* admin_files */  /* Master */ $handler->display->display_options['fields']['daycount']['table'] = 'node_counter';
  /* admin_files */  /* Master */ $handler->display->display_options['fields']['daycount']['field'] = 'daycount';
  /* admin_files */  /* Master */ /* Field: Content statistics: Total views */
  /* admin_files */  /* Master */ $handler->display->display_options['fields']['totalcount']['id'] = 'totalcount';
  /* admin_files */  /* Master */ $handler->display->display_options['fields']['totalcount']['table'] = 'node_counter';
  /* admin_files */  /* Master */ $handler->display->display_options['fields']['totalcount']['field'] = 'totalcount';
  /* admin_files */  /* Master */ $handler->display->display_options['fields']['totalcount']['relationship'] = 'file_to_node';
  /* admin_files */  /* Master */ /* Field: Global: Custom text */
  /* admin_files */  /* Master */ $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  /* admin_files */  /* Master */ $handler->display->display_options['fields']['nothing']['table'] = 'views';
  /* admin_files */  /* Master */ $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  /* admin_files */  /* Master */ $handler->display->display_options['fields']['nothing']['label'] = 'Links';
  /* admin_files */  /* Master */ $handler->display->display_options['fields']['nothing']['alter']['text'] = '[edit] <br>
[download]';
  /* admin_files */  /* Master */ /* Sort criterion: File: Upload date */
  /* admin_files */  /* Master */ $handler->display->display_options['sorts']['timestamp']['id'] = 'timestamp';
  /* admin_files */  /* Master */ $handler->display->display_options['sorts']['timestamp']['table'] = 'file_managed';
  /* admin_files */  /* Master */ $handler->display->display_options['sorts']['timestamp']['field'] = 'timestamp';
  /* admin_files */  /* Master */ $handler->display->display_options['sorts']['timestamp']['order'] = 'DESC';
  /* admin_files */  /* Master */ /* Contextual filter: Content: Parent Organization (field_parent_organization) */
  /* admin_files */  /* Master */ $handler->display->display_options['arguments']['field_parent_organization_target_id']['id'] = 'field_parent_organization_target_id';
  /* admin_files */  /* Master */ $handler->display->display_options['arguments']['field_parent_organization_target_id']['table'] = 'field_data_field_parent_organization';
  /* admin_files */  /* Master */ $handler->display->display_options['arguments']['field_parent_organization_target_id']['field'] = 'field_parent_organization_target_id';
  /* admin_files */  /* Master */ $handler->display->display_options['arguments']['field_parent_organization_target_id']['relationship'] = 'og_membership_related_node';
  /* admin_files */  /* Master */ $handler->display->display_options['arguments']['field_parent_organization_target_id']['default_action'] = 'default';
  /* admin_files */  /* Master */ $handler->display->display_options['arguments']['field_parent_organization_target_id']['default_argument_type'] = 'node';
  /* admin_files */  /* Master */ $handler->display->display_options['arguments']['field_parent_organization_target_id']['summary']['number_of_records'] = '0';
  /* admin_files */  /* Master */ $handler->display->display_options['arguments']['field_parent_organization_target_id']['summary']['format'] = 'default_summary';
  /* admin_files */  /* Master */ $handler->display->display_options['arguments']['field_parent_organization_target_id']['summary_options']['items_per_page'] = '25';
  /* admin_files */  /* Master */ $handler->display->display_options['arguments']['field_parent_organization_target_id']['specify_validation'] = TRUE;
  /* admin_files */  /* Master */ $handler->display->display_options['arguments']['field_parent_organization_target_id']['validate']['type'] = 'og';
  /* admin_files */  /* Master */ /* Filter criterion: File: Type */
  /* admin_files */  /* Master */ $handler->display->display_options['filters']['type']['id'] = 'type';
  /* admin_files */  /* Master */ $handler->display->display_options['filters']['type']['table'] = 'file_managed';
  /* admin_files */  /* Master */ $handler->display->display_options['filters']['type']['field'] = 'type';
  /* admin_files */  /* Master */ $handler->display->display_options['filters']['type']['exposed'] = TRUE;
  /* admin_files */  /* Master */ $handler->display->display_options['filters']['type']['expose']['operator_id'] = 'type_op';
  /* admin_files */  /* Master */ $handler->display->display_options['filters']['type']['expose']['label'] = 'Type';
  /* admin_files */  /* Master */ $handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
  /* admin_files */  /* Master */ $handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';
  /* admin_files */  /* Master */ $handler->display->display_options['filters']['type']['expose']['remember_roles'] = array(
  /* admin_files */  /* Master */   2 => '2',
  /* admin_files */  /* Master */   1 => 0,
  /* admin_files */  /* Master */   9 => 0,
  /* admin_files */  /* Master */   10 => 0,
  /* admin_files */  /* Master */ );

  /* admin_files */ /* Display: Dashboard - Files */
  /* admin_files */  /* Dashboard - Files */ $handler = $view->new_display('page', 'Dashboard - Files', 'page');
  /* admin_files */  /* Dashboard - Files */ $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  /* admin_files */  /* Dashboard - Files */ $handler->display->display_options['style_plugin'] = 'table';
  /* admin_files */  /* Dashboard - Files */ $handler->display->display_options['style_options']['columns'] = array(
  /* admin_files */  /* Dashboard - Files */   'views_bulk_operations' => 'views_bulk_operations',
  /* admin_files */  /* Dashboard - Files */   'fid' => 'fid',
  /* admin_files */  /* Dashboard - Files */   'filename' => 'filename',
  /* admin_files */  /* Dashboard - Files */   'download' => 'download',
  /* admin_files */  /* Dashboard - Files */   'edit' => 'edit',
  /* admin_files */  /* Dashboard - Files */   'filemime' => 'filemime',
  /* admin_files */  /* Dashboard - Files */   'timestamp' => 'timestamp',
  /* admin_files */  /* Dashboard - Files */   'filesize' => 'filesize',
  /* admin_files */  /* Dashboard - Files */   'type' => 'type',
  /* admin_files */  /* Dashboard - Files */   'count' => 'count',
  /* admin_files */  /* Dashboard - Files */   'timestamp_1' => 'timestamp_1',
  /* admin_files */  /* Dashboard - Files */   'daycount' => 'daycount',
  /* admin_files */  /* Dashboard - Files */   'totalcount' => 'totalcount',
  /* admin_files */  /* Dashboard - Files */   'nothing' => 'nothing',
  /* admin_files */  /* Dashboard - Files */ );
  /* admin_files */  /* Dashboard - Files */ $handler->display->display_options['style_options']['default'] = 'timestamp';
  /* admin_files */  /* Dashboard - Files */ $handler->display->display_options['style_options']['info'] = array(
  /* admin_files */  /* Dashboard - Files */   'views_bulk_operations' => array(
  /* admin_files */  /* Dashboard - Files */     'align' => '',
  /* admin_files */  /* Dashboard - Files */     'separator' => '',
  /* admin_files */  /* Dashboard - Files */     'empty_column' => 0,
  /* admin_files */  /* Dashboard - Files */   ),
  /* admin_files */  /* Dashboard - Files */   'fid' => array(
  /* admin_files */  /* Dashboard - Files */     'sortable' => 0,
  /* admin_files */  /* Dashboard - Files */     'default_sort_order' => 'asc',
  /* admin_files */  /* Dashboard - Files */     'align' => '',
  /* admin_files */  /* Dashboard - Files */     'separator' => '',
  /* admin_files */  /* Dashboard - Files */     'empty_column' => 0,
  /* admin_files */  /* Dashboard - Files */   ),
  /* admin_files */  /* Dashboard - Files */   'filename' => array(
  /* admin_files */  /* Dashboard - Files */     'sortable' => 1,
  /* admin_files */  /* Dashboard - Files */     'default_sort_order' => 'asc',
  /* admin_files */  /* Dashboard - Files */     'align' => '',
  /* admin_files */  /* Dashboard - Files */     'separator' => '',
  /* admin_files */  /* Dashboard - Files */     'empty_column' => 0,
  /* admin_files */  /* Dashboard - Files */   ),
  /* admin_files */  /* Dashboard - Files */   'download' => array(
  /* admin_files */  /* Dashboard - Files */     'align' => '',
  /* admin_files */  /* Dashboard - Files */     'separator' => '',
  /* admin_files */  /* Dashboard - Files */     'empty_column' => 0,
  /* admin_files */  /* Dashboard - Files */   ),
  /* admin_files */  /* Dashboard - Files */   'edit' => array(
  /* admin_files */  /* Dashboard - Files */     'align' => '',
  /* admin_files */  /* Dashboard - Files */     'separator' => '',
  /* admin_files */  /* Dashboard - Files */     'empty_column' => 0,
  /* admin_files */  /* Dashboard - Files */   ),
  /* admin_files */  /* Dashboard - Files */   'filemime' => array(
  /* admin_files */  /* Dashboard - Files */     'sortable' => 1,
  /* admin_files */  /* Dashboard - Files */     'default_sort_order' => 'asc',
  /* admin_files */  /* Dashboard - Files */     'align' => '',
  /* admin_files */  /* Dashboard - Files */     'separator' => '',
  /* admin_files */  /* Dashboard - Files */     'empty_column' => 0,
  /* admin_files */  /* Dashboard - Files */   ),
  /* admin_files */  /* Dashboard - Files */   'timestamp' => array(
  /* admin_files */  /* Dashboard - Files */     'sortable' => 1,
  /* admin_files */  /* Dashboard - Files */     'default_sort_order' => 'asc',
  /* admin_files */  /* Dashboard - Files */     'align' => '',
  /* admin_files */  /* Dashboard - Files */     'separator' => '',
  /* admin_files */  /* Dashboard - Files */     'empty_column' => 0,
  /* admin_files */  /* Dashboard - Files */   ),
  /* admin_files */  /* Dashboard - Files */   'filesize' => array(
  /* admin_files */  /* Dashboard - Files */     'sortable' => 1,
  /* admin_files */  /* Dashboard - Files */     'default_sort_order' => 'asc',
  /* admin_files */  /* Dashboard - Files */     'align' => '',
  /* admin_files */  /* Dashboard - Files */     'separator' => '',
  /* admin_files */  /* Dashboard - Files */     'empty_column' => 0,
  /* admin_files */  /* Dashboard - Files */   ),
  /* admin_files */  /* Dashboard - Files */   'type' => array(
  /* admin_files */  /* Dashboard - Files */     'sortable' => 1,
  /* admin_files */  /* Dashboard - Files */     'default_sort_order' => 'asc',
  /* admin_files */  /* Dashboard - Files */     'align' => '',
  /* admin_files */  /* Dashboard - Files */     'separator' => '',
  /* admin_files */  /* Dashboard - Files */     'empty_column' => 0,
  /* admin_files */  /* Dashboard - Files */   ),
  /* admin_files */  /* Dashboard - Files */   'count' => array(
  /* admin_files */  /* Dashboard - Files */     'sortable' => 1,
  /* admin_files */  /* Dashboard - Files */     'default_sort_order' => 'asc',
  /* admin_files */  /* Dashboard - Files */     'align' => '',
  /* admin_files */  /* Dashboard - Files */     'separator' => '',
  /* admin_files */  /* Dashboard - Files */     'empty_column' => 0,
  /* admin_files */  /* Dashboard - Files */   ),
  /* admin_files */  /* Dashboard - Files */   'timestamp_1' => array(
  /* admin_files */  /* Dashboard - Files */     'sortable' => 1,
  /* admin_files */  /* Dashboard - Files */     'default_sort_order' => 'asc',
  /* admin_files */  /* Dashboard - Files */     'align' => '',
  /* admin_files */  /* Dashboard - Files */     'separator' => '',
  /* admin_files */  /* Dashboard - Files */     'empty_column' => 0,
  /* admin_files */  /* Dashboard - Files */   ),
  /* admin_files */  /* Dashboard - Files */   'daycount' => array(
  /* admin_files */  /* Dashboard - Files */     'sortable' => 1,
  /* admin_files */  /* Dashboard - Files */     'default_sort_order' => 'asc',
  /* admin_files */  /* Dashboard - Files */     'align' => '',
  /* admin_files */  /* Dashboard - Files */     'separator' => '',
  /* admin_files */  /* Dashboard - Files */     'empty_column' => 0,
  /* admin_files */  /* Dashboard - Files */   ),
  /* admin_files */  /* Dashboard - Files */   'totalcount' => array(
  /* admin_files */  /* Dashboard - Files */     'sortable' => 1,
  /* admin_files */  /* Dashboard - Files */     'default_sort_order' => 'asc',
  /* admin_files */  /* Dashboard - Files */     'align' => '',
  /* admin_files */  /* Dashboard - Files */     'separator' => '',
  /* admin_files */  /* Dashboard - Files */     'empty_column' => 0,
  /* admin_files */  /* Dashboard - Files */   ),
  /* admin_files */  /* Dashboard - Files */   'nothing' => array(
  /* admin_files */  /* Dashboard - Files */     'align' => '',
  /* admin_files */  /* Dashboard - Files */     'separator' => '',
  /* admin_files */  /* Dashboard - Files */     'empty_column' => 0,
  /* admin_files */  /* Dashboard - Files */   ),
  /* admin_files */  /* Dashboard - Files */ );
  /* admin_files */  /* Dashboard - Files */ $handler->display->display_options['defaults']['style_options'] = FALSE;
  /* admin_files */  /* Dashboard - Files */ $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  /* admin_files */  /* Dashboard - Files */ $handler->display->display_options['defaults']['row_options'] = FALSE;
  /* admin_files */  /* Dashboard - Files */ $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  /* admin_files */  /* Dashboard - Files */ $handler->display->display_options['defaults']['filters'] = FALSE;
  /* admin_files */  /* Dashboard - Files */ /* Filter criterion: File: Type */
  /* admin_files */  /* Dashboard - Files */ $handler->display->display_options['filters']['type']['id'] = 'type';
  /* admin_files */  /* Dashboard - Files */ $handler->display->display_options['filters']['type']['table'] = 'file_managed';
  /* admin_files */  /* Dashboard - Files */ $handler->display->display_options['filters']['type']['field'] = 'type';
  /* admin_files */  /* Dashboard - Files */ $handler->display->display_options['filters']['type']['exposed'] = TRUE;
  /* admin_files */  /* Dashboard - Files */ $handler->display->display_options['filters']['type']['expose']['operator_id'] = 'type_op';
  /* admin_files */  /* Dashboard - Files */ $handler->display->display_options['filters']['type']['expose']['label'] = 'Type';
  /* admin_files */  /* Dashboard - Files */ $handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
  /* admin_files */  /* Dashboard - Files */ $handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';
  /* admin_files */  /* Dashboard - Files */ $handler->display->display_options['filters']['type']['expose']['remember_roles'] = array(
  /* admin_files */  /* Dashboard - Files */   2 => '2',
  /* admin_files */  /* Dashboard - Files */   1 => 0,
  /* admin_files */  /* Dashboard - Files */   9 => 0,
  /* admin_files */  /* Dashboard - Files */   10 => 0,
  /* admin_files */  /* Dashboard - Files */ );
  /* admin_files */  /* Dashboard - Files */ /* Filter criterion: File: Name */
  /* admin_files */  /* Dashboard - Files */ $handler->display->display_options['filters']['filename']['id'] = 'filename';
  /* admin_files */  /* Dashboard - Files */ $handler->display->display_options['filters']['filename']['table'] = 'file_managed';
  /* admin_files */  /* Dashboard - Files */ $handler->display->display_options['filters']['filename']['field'] = 'filename';
  /* admin_files */  /* Dashboard - Files */ $handler->display->display_options['filters']['filename']['operator'] = 'word';
  /* admin_files */  /* Dashboard - Files */ $handler->display->display_options['filters']['filename']['exposed'] = TRUE;
  /* admin_files */  /* Dashboard - Files */ $handler->display->display_options['filters']['filename']['expose']['operator_id'] = 'filename_op';
  /* admin_files */  /* Dashboard - Files */ $handler->display->display_options['filters']['filename']['expose']['label'] = 'File Name';
  /* admin_files */  /* Dashboard - Files */ $handler->display->display_options['filters']['filename']['expose']['operator'] = 'filename_op';
  /* admin_files */  /* Dashboard - Files */ $handler->display->display_options['filters']['filename']['expose']['identifier'] = 'filename';
  /* admin_files */  /* Dashboard - Files */ $handler->display->display_options['filters']['filename']['expose']['remember_roles'] = array(
  /* admin_files */  /* Dashboard - Files */   2 => '2',
  /* admin_files */  /* Dashboard - Files */   1 => 0,
  /* admin_files */  /* Dashboard - Files */   9 => 0,
  /* admin_files */  /* Dashboard - Files */   10 => 0,
  /* admin_files */  /* Dashboard - Files */ );
  /* admin_files */  /* Dashboard - Files */ $handler->display->display_options['filters']['filename']['expose']['autocomplete_items'] = '10';
  /* admin_files */  /* Dashboard - Files */ $handler->display->display_options['filters']['filename']['expose']['autocomplete_min_chars'] = '0';
  /* admin_files */  /* Dashboard - Files */ $handler->display->display_options['filters']['filename']['expose']['autocomplete_field'] = 'filename';
  /* admin_files */  /* Dashboard - Files */ $handler->display->display_options['filters']['filename']['expose']['autocomplete_raw_suggestion'] = 1;
  /* admin_files */  /* Dashboard - Files */ $handler->display->display_options['filters']['filename']['expose']['autocomplete_raw_dropdown'] = 1;
  /* admin_files */  /* Dashboard - Files */ $handler->display->display_options['filters']['filename']['expose']['autocomplete_dependent'] = 0;
  /* admin_files */  /* Dashboard - Files */ /* Filter criterion: File: Upload date */
  /* admin_files */  /* Dashboard - Files */ $handler->display->display_options['filters']['timestamp']['id'] = 'timestamp';
  /* admin_files */  /* Dashboard - Files */ $handler->display->display_options['filters']['timestamp']['table'] = 'file_managed';
  /* admin_files */  /* Dashboard - Files */ $handler->display->display_options['filters']['timestamp']['field'] = 'timestamp';
  /* admin_files */  /* Dashboard - Files */ $handler->display->display_options['filters']['timestamp']['operator'] = 'between';
  /* admin_files */  /* Dashboard - Files */ $handler->display->display_options['filters']['timestamp']['exposed'] = TRUE;
  /* admin_files */  /* Dashboard - Files */ $handler->display->display_options['filters']['timestamp']['expose']['operator_id'] = 'timestamp_op';
  /* admin_files */  /* Dashboard - Files */ $handler->display->display_options['filters']['timestamp']['expose']['label'] = 'Upload date';
  /* admin_files */  /* Dashboard - Files */ $handler->display->display_options['filters']['timestamp']['expose']['operator'] = 'timestamp_op';
  /* admin_files */  /* Dashboard - Files */ $handler->display->display_options['filters']['timestamp']['expose']['identifier'] = 'timestamp';
  /* admin_files */  /* Dashboard - Files */ $handler->display->display_options['filters']['timestamp']['expose']['remember_roles'] = array(
  /* admin_files */  /* Dashboard - Files */   2 => '2',
  /* admin_files */  /* Dashboard - Files */   1 => 0,
  /* admin_files */  /* Dashboard - Files */   9 => 0,
  /* admin_files */  /* Dashboard - Files */   10 => 0,
  /* admin_files */  /* Dashboard - Files */ );
  /* admin_files */  /* Dashboard - Files */ $handler->display->display_options['path'] = 'node/%/dashboard/files';
  /* admin_files */  /* Dashboard - Files */ $handler->display->display_options['menu']['type'] = 'tab';
  /* admin_files */  /* Dashboard - Files */ $handler->display->display_options['menu']['title'] = 'Manage Files';
  /* admin_files */  /* Dashboard - Files */ $handler->display->display_options['menu']['weight'] = '6';
  /* admin_files */  /* Dashboard - Files */ $handler->display->display_options['menu']['context'] = 0;
  /* admin_files */  /* Dashboard - Files */ $handler->display->display_options['menu']['context_only_inline'] = 0;
  /* admin_files */ $translatables['admin_files'] = array(
  /* admin_files */   t('Master'),
  /* admin_files */   t('Manage Files'),
  /* admin_files */   t('more'),
  /* admin_files */   t('Apply'),
  /* admin_files */   t('Reset'),
  /* admin_files */   t('Sort by'),
  /* admin_files */   t('Asc'),
  /* admin_files */   t('Desc'),
  /* admin_files */   t('Items per page'),
  /* admin_files */   t('- All -'),
  /* admin_files */   t('Offset'),
  /* admin_files */   t('« first'),
  /* admin_files */   t('‹ previous'),
  /* admin_files */   t('next ›'),
  /* admin_files */   t('last »'),
  /* admin_files */   t('Content'),
  /* admin_files */   t('file from field_media'),
  /* admin_files */   t('Group node from OG membership'),
  /* admin_files */   t('node from OG membership'),
  /* admin_files */   t('OG membership from node'),
  /* admin_files */   t('OG membership from node group'),
  /* admin_files */   t('File'),
  /* admin_files */   t('- Choose an operation -'),
  /* admin_files */   t('File ID'),
  /* admin_files */   t('File name'),
  /* admin_files */   t('Download link'),
  /* admin_files */   t('Edit link'),
  /* admin_files */   t('Mime type'),
  /* admin_files */   t('Upload date'),
  /* admin_files */   t('Size'),
  /* admin_files */   t('Type'),
  /* admin_files */   t('Use count'),
  /* admin_files */   t('.'),
  /* admin_files */   t(','),
  /* admin_files */   t('Recent view date'),
  /* admin_files */   t('Views today'),
  /* admin_files */   t('Total views'),
  /* admin_files */   t('Links'),
  /* admin_files */   t('[edit] <br>
[download]'),
  /* admin_files */   t('All'),
  /* admin_files */   t('Dashboard - Files'),
  /* admin_files */   t('File Name'),
  /* admin_files */ );
  $export['admin_files'] = $view;

  /* folder_bulk_delete */ $view = new view();
  /* folder_bulk_delete */ $view->name = 'folder_bulk_delete';
  /* folder_bulk_delete */ $view->description = '';
  /* folder_bulk_delete */ $view->tag = 'default';
  /* folder_bulk_delete */ $view->base_table = 'node';
  /* folder_bulk_delete */ $view->human_name = 'Folder bulk delete';
  /* folder_bulk_delete */ $view->core = 7;
  /* folder_bulk_delete */ $view->api_version = '3.0';
  /* folder_bulk_delete */ $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* folder_bulk_delete */ /* Display: Master */
  /* folder_bulk_delete */  /* Master */ $handler = $view->new_display('default', 'Master', 'default');
  /* folder_bulk_delete */  /* Master */ $handler->display->display_options['title'] = 'Folder bulk delete';
  /* folder_bulk_delete */  /* Master */ $handler->display->display_options['use_more_always'] = FALSE;
  /* folder_bulk_delete */  /* Master */ $handler->display->display_options['access']['type'] = 'role';
  /* folder_bulk_delete */  /* Master */ $handler->display->display_options['access']['role'] = array(
  /* folder_bulk_delete */  /* Master */   9 => '9',
  /* folder_bulk_delete */  /* Master */ );
  /* folder_bulk_delete */  /* Master */ $handler->display->display_options['cache']['type'] = 'none';
  /* folder_bulk_delete */  /* Master */ $handler->display->display_options['query']['type'] = 'views_query';
  /* folder_bulk_delete */  /* Master */ $handler->display->display_options['exposed_form']['type'] = 'basic';
  /* folder_bulk_delete */  /* Master */ $handler->display->display_options['pager']['type'] = 'none';
  /* folder_bulk_delete */  /* Master */ $handler->display->display_options['style_plugin'] = 'table';
  /* folder_bulk_delete */  /* Master */ $handler->display->display_options['style_options']['columns'] = array(
  /* folder_bulk_delete */  /* Master */   'views_bulk_operations' => 'views_bulk_operations',
  /* folder_bulk_delete */  /* Master */   'media_gallery_file' => 'media_gallery_file',
  /* folder_bulk_delete */  /* Master */ );
  /* folder_bulk_delete */  /* Master */ $handler->display->display_options['style_options']['default'] = '-1';
  /* folder_bulk_delete */  /* Master */ $handler->display->display_options['style_options']['info'] = array(
  /* folder_bulk_delete */  /* Master */   'views_bulk_operations' => array(
  /* folder_bulk_delete */  /* Master */     'align' => '',
  /* folder_bulk_delete */  /* Master */     'separator' => '',
  /* folder_bulk_delete */  /* Master */     'empty_column' => 0,
  /* folder_bulk_delete */  /* Master */   ),
  /* folder_bulk_delete */  /* Master */   'media_gallery_file' => array(
  /* folder_bulk_delete */  /* Master */     'sortable' => 0,
  /* folder_bulk_delete */  /* Master */     'default_sort_order' => 'asc',
  /* folder_bulk_delete */  /* Master */     'align' => '',
  /* folder_bulk_delete */  /* Master */     'separator' => '',
  /* folder_bulk_delete */  /* Master */     'empty_column' => 0,
  /* folder_bulk_delete */  /* Master */   ),
  /* folder_bulk_delete */  /* Master */ );
  /* folder_bulk_delete */  /* Master */ /* Relationship: Content: Gallery media (media_gallery_file:fid) */
  /* folder_bulk_delete */  /* Master */ $handler->display->display_options['relationships']['media_gallery_file_fid']['id'] = 'media_gallery_file_fid';
  /* folder_bulk_delete */  /* Master */ $handler->display->display_options['relationships']['media_gallery_file_fid']['table'] = 'field_data_media_gallery_file';
  /* folder_bulk_delete */  /* Master */ $handler->display->display_options['relationships']['media_gallery_file_fid']['field'] = 'media_gallery_file_fid';
  /* folder_bulk_delete */  /* Master */ $handler->display->display_options['relationships']['media_gallery_file_fid']['required'] = TRUE;
  /* folder_bulk_delete */  /* Master */ /* Field: Bulk operations: File */
  /* folder_bulk_delete */  /* Master */ $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  /* folder_bulk_delete */  /* Master */ $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'file_managed';
  /* folder_bulk_delete */  /* Master */ $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  /* folder_bulk_delete */  /* Master */ $handler->display->display_options['fields']['views_bulk_operations']['relationship'] = 'media_gallery_file_fid';
  /* folder_bulk_delete */  /* Master */ $handler->display->display_options['fields']['views_bulk_operations']['label'] = '';
  /* folder_bulk_delete */  /* Master */ $handler->display->display_options['fields']['views_bulk_operations']['element_label_colon'] = FALSE;
  /* folder_bulk_delete */  /* Master */ $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '0';
  /* folder_bulk_delete */  /* Master */ $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  /* folder_bulk_delete */  /* Master */ $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['row_clickable'] = 1;
  /* folder_bulk_delete */  /* Master */ $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  /* folder_bulk_delete */  /* Master */ $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  /* folder_bulk_delete */  /* Master */ $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
  /* folder_bulk_delete */  /* Master */   'action::views_bulk_operations_delete_item' => array(
  /* folder_bulk_delete */  /* Master */     'selected' => 1,
  /* folder_bulk_delete */  /* Master */     'postpone_processing' => 0,
  /* folder_bulk_delete */  /* Master */     'skip_confirmation' => 0,
  /* folder_bulk_delete */  /* Master */     'override_label' => 0,
  /* folder_bulk_delete */  /* Master */     'label' => '',
  /* folder_bulk_delete */  /* Master */   ),
  /* folder_bulk_delete */  /* Master */ );
  /* folder_bulk_delete */  /* Master */ /* Field: Content: Gallery media */
  /* folder_bulk_delete */  /* Master */ $handler->display->display_options['fields']['media_gallery_file']['id'] = 'media_gallery_file';
  /* folder_bulk_delete */  /* Master */ $handler->display->display_options['fields']['media_gallery_file']['table'] = 'field_data_media_gallery_file';
  /* folder_bulk_delete */  /* Master */ $handler->display->display_options['fields']['media_gallery_file']['field'] = 'media_gallery_file';
  /* folder_bulk_delete */  /* Master */ $handler->display->display_options['fields']['media_gallery_file']['label'] = '';
  /* folder_bulk_delete */  /* Master */ $handler->display->display_options['fields']['media_gallery_file']['element_label_colon'] = FALSE;
  /* folder_bulk_delete */  /* Master */ $handler->display->display_options['fields']['media_gallery_file']['element_default_classes'] = FALSE;
  /* folder_bulk_delete */  /* Master */ $handler->display->display_options['fields']['media_gallery_file']['click_sort_column'] = 'fid';
  /* folder_bulk_delete */  /* Master */ $handler->display->display_options['fields']['media_gallery_file']['type'] = 'file_rendered';
  /* folder_bulk_delete */  /* Master */ $handler->display->display_options['fields']['media_gallery_file']['settings'] = array(
  /* folder_bulk_delete */  /* Master */   'file_view_mode' => 'preview',
  /* folder_bulk_delete */  /* Master */   'field_formatter_class' => '',
  /* folder_bulk_delete */  /* Master */ );
  /* folder_bulk_delete */  /* Master */ $handler->display->display_options['fields']['media_gallery_file']['group_rows'] = FALSE;
  /* folder_bulk_delete */  /* Master */ $handler->display->display_options['fields']['media_gallery_file']['delta_offset'] = '0';
  /* folder_bulk_delete */  /* Master */ $handler->display->display_options['fields']['media_gallery_file']['multi_type'] = 'ul';
  /* folder_bulk_delete */  /* Master */ /* Field: Content: Gallery media */
  /* folder_bulk_delete */  /* Master */ $handler->display->display_options['fields']['media_gallery_file_1']['id'] = 'media_gallery_file_1';
  /* folder_bulk_delete */  /* Master */ $handler->display->display_options['fields']['media_gallery_file_1']['table'] = 'field_data_media_gallery_file';
  /* folder_bulk_delete */  /* Master */ $handler->display->display_options['fields']['media_gallery_file_1']['field'] = 'media_gallery_file';
  /* folder_bulk_delete */  /* Master */ $handler->display->display_options['fields']['media_gallery_file_1']['label'] = 'File';
  /* folder_bulk_delete */  /* Master */ $handler->display->display_options['fields']['media_gallery_file_1']['click_sort_column'] = 'fid';
  /* folder_bulk_delete */  /* Master */ $handler->display->display_options['fields']['media_gallery_file_1']['type'] = 'file_url_plain';
  /* folder_bulk_delete */  /* Master */ $handler->display->display_options['fields']['media_gallery_file_1']['settings'] = array(
  /* folder_bulk_delete */  /* Master */   'field_formatter_class' => '',
  /* folder_bulk_delete */  /* Master */ );
  /* folder_bulk_delete */  /* Master */ $handler->display->display_options['fields']['media_gallery_file_1']['group_rows'] = FALSE;
  /* folder_bulk_delete */  /* Master */ $handler->display->display_options['fields']['media_gallery_file_1']['delta_offset'] = '0';
  /* folder_bulk_delete */  /* Master */ /* Sort criterion: Content: Post date */
  /* folder_bulk_delete */  /* Master */ $handler->display->display_options['sorts']['created']['id'] = 'created';
  /* folder_bulk_delete */  /* Master */ $handler->display->display_options['sorts']['created']['table'] = 'node';
  /* folder_bulk_delete */  /* Master */ $handler->display->display_options['sorts']['created']['field'] = 'created';
  /* folder_bulk_delete */  /* Master */ $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* folder_bulk_delete */  /* Master */ /* Contextual filter: Content: Nid */
  /* folder_bulk_delete */  /* Master */ $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  /* folder_bulk_delete */  /* Master */ $handler->display->display_options['arguments']['nid']['table'] = 'node';
  /* folder_bulk_delete */  /* Master */ $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  /* folder_bulk_delete */  /* Master */ $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  /* folder_bulk_delete */  /* Master */ $handler->display->display_options['arguments']['nid']['title_enable'] = TRUE;
  /* folder_bulk_delete */  /* Master */ $handler->display->display_options['arguments']['nid']['title'] = '%1 files';
  /* folder_bulk_delete */  /* Master */ $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  /* folder_bulk_delete */  /* Master */ $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  /* folder_bulk_delete */  /* Master */ $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  /* folder_bulk_delete */  /* Master */ $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  /* folder_bulk_delete */  /* Master */ $handler->display->display_options['arguments']['nid']['specify_validation'] = TRUE;
  /* folder_bulk_delete */  /* Master */ /* Filter criterion: Content: Published */
  /* folder_bulk_delete */  /* Master */ $handler->display->display_options['filters']['status']['id'] = 'status';
  /* folder_bulk_delete */  /* Master */ $handler->display->display_options['filters']['status']['table'] = 'node';
  /* folder_bulk_delete */  /* Master */ $handler->display->display_options['filters']['status']['field'] = 'status';
  /* folder_bulk_delete */  /* Master */ $handler->display->display_options['filters']['status']['value'] = 1;
  /* folder_bulk_delete */  /* Master */ $handler->display->display_options['filters']['status']['group'] = 1;
  /* folder_bulk_delete */  /* Master */ $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* folder_bulk_delete */  /* Master */ /* Filter criterion: Content: Type */
  /* folder_bulk_delete */  /* Master */ $handler->display->display_options['filters']['type']['id'] = 'type';
  /* folder_bulk_delete */  /* Master */ $handler->display->display_options['filters']['type']['table'] = 'node';
  /* folder_bulk_delete */  /* Master */ $handler->display->display_options['filters']['type']['field'] = 'type';
  /* folder_bulk_delete */  /* Master */ $handler->display->display_options['filters']['type']['value'] = array(
  /* folder_bulk_delete */  /* Master */   'media_gallery' => 'media_gallery',
  /* folder_bulk_delete */  /* Master */ );

  /* folder_bulk_delete */ /* Display: Page */
  /* folder_bulk_delete */  /* Page */ $handler = $view->new_display('page', 'Page', 'page');
  /* folder_bulk_delete */  /* Page */ $handler->display->display_options['path'] = 'node/%/bulk-image-delete';
  /* folder_bulk_delete */ $translatables['folder_bulk_delete'] = array(
  /* folder_bulk_delete */   t('Master'),
  /* folder_bulk_delete */   t('Folder bulk delete'),
  /* folder_bulk_delete */   t('more'),
  /* folder_bulk_delete */   t('Apply'),
  /* folder_bulk_delete */   t('Reset'),
  /* folder_bulk_delete */   t('Sort by'),
  /* folder_bulk_delete */   t('Asc'),
  /* folder_bulk_delete */   t('Desc'),
  /* folder_bulk_delete */   t('file from media_gallery_file'),
  /* folder_bulk_delete */   t('- Choose an operation -'),
  /* folder_bulk_delete */   t('File'),
  /* folder_bulk_delete */   t('All'),
  /* folder_bulk_delete */   t('%1 files'),
  /* folder_bulk_delete */   t('Page'),
  /* folder_bulk_delete */ );
  $export['folder_bulk_delete'] = $view;

  /* guide_content_for_admin */ $view = new view();
  /* guide_content_for_admin */ $view->name = 'guide_content_for_admin';
  /* guide_content_for_admin */ $view->description = '';
  /* guide_content_for_admin */ $view->tag = 'default';
  /* guide_content_for_admin */ $view->base_table = 'node';
  /* guide_content_for_admin */ $view->human_name = 'Guide Content for Admin';
  /* guide_content_for_admin */ $view->core = 7;
  /* guide_content_for_admin */ $view->api_version = '3.0';
  /* guide_content_for_admin */ $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* guide_content_for_admin */ /* Display: Master */
  /* guide_content_for_admin */  /* Master */ $handler = $view->new_display('default', 'Master', 'default');
  /* guide_content_for_admin */  /* Master */ $handler->display->display_options['use_more_always'] = FALSE;
  /* guide_content_for_admin */  /* Master */ $handler->display->display_options['access']['type'] = 'perm';
  /* guide_content_for_admin */  /* Master */ $handler->display->display_options['cache']['type'] = 'none';
  /* guide_content_for_admin */  /* Master */ $handler->display->display_options['query']['type'] = 'views_query';
  /* guide_content_for_admin */  /* Master */ $handler->display->display_options['query']['options']['distinct'] = TRUE;
  /* guide_content_for_admin */  /* Master */ $handler->display->display_options['exposed_form']['type'] = 'basic';
  /* guide_content_for_admin */  /* Master */ $handler->display->display_options['pager']['type'] = 'full';
  /* guide_content_for_admin */  /* Master */ $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  /* guide_content_for_admin */  /* Master */ $handler->display->display_options['pager']['options']['offset'] = '0';
  /* guide_content_for_admin */  /* Master */ $handler->display->display_options['pager']['options']['id'] = '0';
  /* guide_content_for_admin */  /* Master */ $handler->display->display_options['pager']['options']['quantity'] = '9';
  /* guide_content_for_admin */  /* Master */ $handler->display->display_options['style_plugin'] = 'default';
  /* guide_content_for_admin */  /* Master */ $handler->display->display_options['row_plugin'] = 'fields';
  /* guide_content_for_admin */  /* Master */ /* Relationship: Content: Help topics (field_help_topics) */
  /* guide_content_for_admin */  /* Master */ $handler->display->display_options['relationships']['field_help_topics_tid']['id'] = 'field_help_topics_tid';
  /* guide_content_for_admin */  /* Master */ $handler->display->display_options['relationships']['field_help_topics_tid']['table'] = 'field_data_field_help_topics';
  /* guide_content_for_admin */  /* Master */ $handler->display->display_options['relationships']['field_help_topics_tid']['field'] = 'field_help_topics_tid';
  /* guide_content_for_admin */  /* Master */ /* Field: Taxonomy term: Term ID */
  /* guide_content_for_admin */  /* Master */ $handler->display->display_options['fields']['tid']['id'] = 'tid';
  /* guide_content_for_admin */  /* Master */ $handler->display->display_options['fields']['tid']['table'] = 'taxonomy_term_data';
  /* guide_content_for_admin */  /* Master */ $handler->display->display_options['fields']['tid']['field'] = 'tid';
  /* guide_content_for_admin */  /* Master */ $handler->display->display_options['fields']['tid']['relationship'] = 'field_help_topics_tid';
  /* guide_content_for_admin */  /* Master */ $handler->display->display_options['fields']['tid']['label'] = '';
  /* guide_content_for_admin */  /* Master */ $handler->display->display_options['fields']['tid']['exclude'] = TRUE;
  /* guide_content_for_admin */  /* Master */ $handler->display->display_options['fields']['tid']['element_label_colon'] = FALSE;
  /* guide_content_for_admin */  /* Master */ $handler->display->display_options['fields']['tid']['separator'] = '';
  /* guide_content_for_admin */  /* Master */ /* Field: Content: Nid */
  /* guide_content_for_admin */  /* Master */ $handler->display->display_options['fields']['nid']['id'] = 'nid';
  /* guide_content_for_admin */  /* Master */ $handler->display->display_options['fields']['nid']['table'] = 'node';
  /* guide_content_for_admin */  /* Master */ $handler->display->display_options['fields']['nid']['field'] = 'nid';
  /* guide_content_for_admin */  /* Master */ $handler->display->display_options['fields']['nid']['label'] = '';
  /* guide_content_for_admin */  /* Master */ $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  /* guide_content_for_admin */  /* Master */ $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* guide_content_for_admin */  /* Master */ /* Field: Content: Title */
  /* guide_content_for_admin */  /* Master */ $handler->display->display_options['fields']['title']['id'] = 'title';
  /* guide_content_for_admin */  /* Master */ $handler->display->display_options['fields']['title']['table'] = 'node';
  /* guide_content_for_admin */  /* Master */ $handler->display->display_options['fields']['title']['field'] = 'title';
  /* guide_content_for_admin */  /* Master */ $handler->display->display_options['fields']['title']['label'] = '';
  /* guide_content_for_admin */  /* Master */ $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  /* guide_content_for_admin */  /* Master */ $handler->display->display_options['fields']['title']['alter']['text'] = '<a href="/guide/[tid]/[nid]">
[title]
</a>';
  /* guide_content_for_admin */  /* Master */ $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  /* guide_content_for_admin */  /* Master */ $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* guide_content_for_admin */  /* Master */ $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* guide_content_for_admin */  /* Master */ $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* guide_content_for_admin */  /* Master */ /* Sort criterion: Content: Title */
  /* guide_content_for_admin */  /* Master */ $handler->display->display_options['sorts']['title']['id'] = 'title';
  /* guide_content_for_admin */  /* Master */ $handler->display->display_options['sorts']['title']['table'] = 'node';
  /* guide_content_for_admin */  /* Master */ $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* guide_content_for_admin */  /* Master */ $handler->display->display_options['sorts']['title']['order'] = 'DESC';
  /* guide_content_for_admin */  /* Master */ /* Contextual filter: Content: Help topics (field_help_topics) */
  /* guide_content_for_admin */  /* Master */ $handler->display->display_options['arguments']['field_help_topics_tid']['id'] = 'field_help_topics_tid';
  /* guide_content_for_admin */  /* Master */ $handler->display->display_options['arguments']['field_help_topics_tid']['table'] = 'field_data_field_help_topics';
  /* guide_content_for_admin */  /* Master */ $handler->display->display_options['arguments']['field_help_topics_tid']['field'] = 'field_help_topics_tid';
  /* guide_content_for_admin */  /* Master */ $handler->display->display_options['arguments']['field_help_topics_tid']['default_action'] = 'default';
  /* guide_content_for_admin */  /* Master */ $handler->display->display_options['arguments']['field_help_topics_tid']['default_argument_type'] = 'raw';
  /* guide_content_for_admin */  /* Master */ $handler->display->display_options['arguments']['field_help_topics_tid']['default_argument_options']['index'] = '1';
  /* guide_content_for_admin */  /* Master */ $handler->display->display_options['arguments']['field_help_topics_tid']['summary']['number_of_records'] = '0';
  /* guide_content_for_admin */  /* Master */ $handler->display->display_options['arguments']['field_help_topics_tid']['summary']['format'] = 'default_summary';
  /* guide_content_for_admin */  /* Master */ $handler->display->display_options['arguments']['field_help_topics_tid']['summary_options']['items_per_page'] = '25';
  /* guide_content_for_admin */  /* Master */ $handler->display->display_options['arguments']['field_help_topics_tid']['specify_validation'] = TRUE;
  /* guide_content_for_admin */  /* Master */ $handler->display->display_options['arguments']['field_help_topics_tid']['validate']['type'] = 'taxonomy_term';
  /* guide_content_for_admin */  /* Master */ $handler->display->display_options['arguments']['field_help_topics_tid']['validate_options']['vocabularies'] = array(
  /* guide_content_for_admin */  /* Master */   'help' => 'help',
  /* guide_content_for_admin */  /* Master */ );
  /* guide_content_for_admin */  /* Master */ $handler->display->display_options['arguments']['field_help_topics_tid']['validate']['fail'] = 'empty';
  /* guide_content_for_admin */  /* Master */ /* Filter criterion: Content: Published */
  /* guide_content_for_admin */  /* Master */ $handler->display->display_options['filters']['status']['id'] = 'status';
  /* guide_content_for_admin */  /* Master */ $handler->display->display_options['filters']['status']['table'] = 'node';
  /* guide_content_for_admin */  /* Master */ $handler->display->display_options['filters']['status']['field'] = 'status';
  /* guide_content_for_admin */  /* Master */ $handler->display->display_options['filters']['status']['value'] = 1;
  /* guide_content_for_admin */  /* Master */ $handler->display->display_options['filters']['status']['group'] = 1;
  /* guide_content_for_admin */  /* Master */ $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* guide_content_for_admin */  /* Master */ /* Filter criterion: Content: Type */
  /* guide_content_for_admin */  /* Master */ $handler->display->display_options['filters']['type']['id'] = 'type';
  /* guide_content_for_admin */  /* Master */ $handler->display->display_options['filters']['type']['table'] = 'node';
  /* guide_content_for_admin */  /* Master */ $handler->display->display_options['filters']['type']['field'] = 'type';
  /* guide_content_for_admin */  /* Master */ $handler->display->display_options['filters']['type']['value'] = array(
  /* guide_content_for_admin */  /* Master */   'help' => 'help',
  /* guide_content_for_admin */  /* Master */ );
  /* guide_content_for_admin */  /* Master */ /* Filter criterion: Content: Display for group managers (field_group_manager_display) */
  /* guide_content_for_admin */  /* Master */ $handler->display->display_options['filters']['field_group_manager_display_value']['id'] = 'field_group_manager_display_value';
  /* guide_content_for_admin */  /* Master */ $handler->display->display_options['filters']['field_group_manager_display_value']['table'] = 'field_data_field_group_manager_display';
  /* guide_content_for_admin */  /* Master */ $handler->display->display_options['filters']['field_group_manager_display_value']['field'] = 'field_group_manager_display_value';
  /* guide_content_for_admin */  /* Master */ $handler->display->display_options['filters']['field_group_manager_display_value']['value'] = array(
  /* guide_content_for_admin */  /* Master */   1 => '1',
  /* guide_content_for_admin */  /* Master */ );

  /* guide_content_for_admin */ /* Display: Admin Guide Term Node List */
  /* guide_content_for_admin */  /* Admin Guide Term Node List */ $handler = $view->new_display('panel_pane', 'Admin Guide Term Node List', 'panel_pane_1');
  /* guide_content_for_admin */  /* Admin Guide Term Node List */ $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* guide_content_for_admin */  /* Admin Guide Term Node List */ $handler->display->display_options['defaults']['fields'] = FALSE;
  /* guide_content_for_admin */  /* Admin Guide Term Node List */ /* Field: Content: Help topics */
  /* guide_content_for_admin */  /* Admin Guide Term Node List */ $handler->display->display_options['fields']['field_help_topics']['id'] = 'field_help_topics';
  /* guide_content_for_admin */  /* Admin Guide Term Node List */ $handler->display->display_options['fields']['field_help_topics']['table'] = 'field_data_field_help_topics';
  /* guide_content_for_admin */  /* Admin Guide Term Node List */ $handler->display->display_options['fields']['field_help_topics']['field'] = 'field_help_topics';
  /* guide_content_for_admin */  /* Admin Guide Term Node List */ $handler->display->display_options['fields']['field_help_topics']['label'] = '';
  /* guide_content_for_admin */  /* Admin Guide Term Node List */ $handler->display->display_options['fields']['field_help_topics']['exclude'] = TRUE;
  /* guide_content_for_admin */  /* Admin Guide Term Node List */ $handler->display->display_options['fields']['field_help_topics']['element_label_colon'] = FALSE;
  /* guide_content_for_admin */  /* Admin Guide Term Node List */ $handler->display->display_options['fields']['field_help_topics']['element_default_classes'] = FALSE;
  /* guide_content_for_admin */  /* Admin Guide Term Node List */ $handler->display->display_options['fields']['field_help_topics']['type'] = 'taxonomy_term_reference_plain';
  /* guide_content_for_admin */  /* Admin Guide Term Node List */ $handler->display->display_options['fields']['field_help_topics']['settings'] = array(
  /* guide_content_for_admin */  /* Admin Guide Term Node List */   'field_formatter_class' => '',
  /* guide_content_for_admin */  /* Admin Guide Term Node List */ );
  /* guide_content_for_admin */  /* Admin Guide Term Node List */ $handler->display->display_options['fields']['field_help_topics']['delta_limit'] = '1';
  /* guide_content_for_admin */  /* Admin Guide Term Node List */ $handler->display->display_options['fields']['field_help_topics']['delta_offset'] = '0';
  /* guide_content_for_admin */  /* Admin Guide Term Node List */ $handler->display->display_options['fields']['field_help_topics']['separator'] = '';
  /* guide_content_for_admin */  /* Admin Guide Term Node List */ /* Field: Content: Nid */
  /* guide_content_for_admin */  /* Admin Guide Term Node List */ $handler->display->display_options['fields']['nid']['id'] = 'nid';
  /* guide_content_for_admin */  /* Admin Guide Term Node List */ $handler->display->display_options['fields']['nid']['table'] = 'node';
  /* guide_content_for_admin */  /* Admin Guide Term Node List */ $handler->display->display_options['fields']['nid']['field'] = 'nid';
  /* guide_content_for_admin */  /* Admin Guide Term Node List */ $handler->display->display_options['fields']['nid']['label'] = '';
  /* guide_content_for_admin */  /* Admin Guide Term Node List */ $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  /* guide_content_for_admin */  /* Admin Guide Term Node List */ $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* guide_content_for_admin */  /* Admin Guide Term Node List */ /* Field: Content: Title */
  /* guide_content_for_admin */  /* Admin Guide Term Node List */ $handler->display->display_options['fields']['title']['id'] = 'title';
  /* guide_content_for_admin */  /* Admin Guide Term Node List */ $handler->display->display_options['fields']['title']['table'] = 'node';
  /* guide_content_for_admin */  /* Admin Guide Term Node List */ $handler->display->display_options['fields']['title']['field'] = 'title';
  /* guide_content_for_admin */  /* Admin Guide Term Node List */ $handler->display->display_options['fields']['title']['label'] = '';
  /* guide_content_for_admin */  /* Admin Guide Term Node List */ $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  /* guide_content_for_admin */  /* Admin Guide Term Node List */ $handler->display->display_options['fields']['title']['alter']['path'] = 'users/dashboard/[field_help_topics]/[nid]';
  /* guide_content_for_admin */  /* Admin Guide Term Node List */ $handler->display->display_options['fields']['title']['alter']['absolute'] = TRUE;
  /* guide_content_for_admin */  /* Admin Guide Term Node List */ $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = TRUE;
  /* guide_content_for_admin */  /* Admin Guide Term Node List */ $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  /* guide_content_for_admin */  /* Admin Guide Term Node List */ $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* guide_content_for_admin */  /* Admin Guide Term Node List */ $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* guide_content_for_admin */  /* Admin Guide Term Node List */ $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* guide_content_for_admin */  /* Admin Guide Term Node List */ $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* guide_content_for_admin */  /* Admin Guide Term Node List */ /* Contextual filter: Content: Help topics (field_help_topics) */
  /* guide_content_for_admin */  /* Admin Guide Term Node List */ $handler->display->display_options['arguments']['field_help_topics_tid']['id'] = 'field_help_topics_tid';
  /* guide_content_for_admin */  /* Admin Guide Term Node List */ $handler->display->display_options['arguments']['field_help_topics_tid']['table'] = 'field_data_field_help_topics';
  /* guide_content_for_admin */  /* Admin Guide Term Node List */ $handler->display->display_options['arguments']['field_help_topics_tid']['field'] = 'field_help_topics_tid';
  /* guide_content_for_admin */  /* Admin Guide Term Node List */ $handler->display->display_options['arguments']['field_help_topics_tid']['default_action'] = 'default';
  /* guide_content_for_admin */  /* Admin Guide Term Node List */ $handler->display->display_options['arguments']['field_help_topics_tid']['default_argument_type'] = 'raw';
  /* guide_content_for_admin */  /* Admin Guide Term Node List */ $handler->display->display_options['arguments']['field_help_topics_tid']['default_argument_options']['index'] = '2';
  /* guide_content_for_admin */  /* Admin Guide Term Node List */ $handler->display->display_options['arguments']['field_help_topics_tid']['summary']['number_of_records'] = '0';
  /* guide_content_for_admin */  /* Admin Guide Term Node List */ $handler->display->display_options['arguments']['field_help_topics_tid']['summary']['format'] = 'default_summary';
  /* guide_content_for_admin */  /* Admin Guide Term Node List */ $handler->display->display_options['arguments']['field_help_topics_tid']['summary_options']['items_per_page'] = '25';
  /* guide_content_for_admin */  /* Admin Guide Term Node List */ $handler->display->display_options['arguments']['field_help_topics_tid']['specify_validation'] = TRUE;
  /* guide_content_for_admin */  /* Admin Guide Term Node List */ $handler->display->display_options['arguments']['field_help_topics_tid']['validate']['type'] = 'taxonomy_term';
  /* guide_content_for_admin */  /* Admin Guide Term Node List */ $handler->display->display_options['arguments']['field_help_topics_tid']['validate_options']['vocabularies'] = array(
  /* guide_content_for_admin */  /* Admin Guide Term Node List */   'help' => 'help',
  /* guide_content_for_admin */  /* Admin Guide Term Node List */ );
  /* guide_content_for_admin */  /* Admin Guide Term Node List */ $handler->display->display_options['arguments']['field_help_topics_tid']['validate_options']['type'] = 'convert';
  /* guide_content_for_admin */  /* Admin Guide Term Node List */ $handler->display->display_options['arguments']['field_help_topics_tid']['validate_options']['transform'] = TRUE;
  /* guide_content_for_admin */  /* Admin Guide Term Node List */ $handler->display->display_options['arguments']['field_help_topics_tid']['validate']['fail'] = 'empty';
  /* guide_content_for_admin */  /* Admin Guide Term Node List */ $handler->display->display_options['argument_input'] = array(
  /* guide_content_for_admin */  /* Admin Guide Term Node List */   'field_help_topics_tid' => array(
  /* guide_content_for_admin */  /* Admin Guide Term Node List */     'type' => 'panel',
  /* guide_content_for_admin */  /* Admin Guide Term Node List */     'context' => 'terms.name',
  /* guide_content_for_admin */  /* Admin Guide Term Node List */     'context_optional' => 0,
  /* guide_content_for_admin */  /* Admin Guide Term Node List */     'panel' => '1',
  /* guide_content_for_admin */  /* Admin Guide Term Node List */     'fixed' => '',
  /* guide_content_for_admin */  /* Admin Guide Term Node List */     'label' => 'Content: Help topics (field_help_topics)',
  /* guide_content_for_admin */  /* Admin Guide Term Node List */   ),
  /* guide_content_for_admin */  /* Admin Guide Term Node List */ );

  /* guide_content_for_admin */ /* Display: Admin Guide Term Node Content */
  /* guide_content_for_admin */  /* Admin Guide Term Node Content */ $handler = $view->new_display('panel_pane', 'Admin Guide Term Node Content', 'panel_pane_2');
  /* guide_content_for_admin */  /* Admin Guide Term Node Content */ $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* guide_content_for_admin */  /* Admin Guide Term Node Content */ $handler->display->display_options['defaults']['fields'] = FALSE;
  /* guide_content_for_admin */  /* Admin Guide Term Node Content */ /* Field: Content: Title */
  /* guide_content_for_admin */  /* Admin Guide Term Node Content */ $handler->display->display_options['fields']['title']['id'] = 'title';
  /* guide_content_for_admin */  /* Admin Guide Term Node Content */ $handler->display->display_options['fields']['title']['table'] = 'node';
  /* guide_content_for_admin */  /* Admin Guide Term Node Content */ $handler->display->display_options['fields']['title']['field'] = 'title';
  /* guide_content_for_admin */  /* Admin Guide Term Node Content */ $handler->display->display_options['fields']['title']['label'] = '';
  /* guide_content_for_admin */  /* Admin Guide Term Node Content */ $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  /* guide_content_for_admin */  /* Admin Guide Term Node Content */ $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* guide_content_for_admin */  /* Admin Guide Term Node Content */ $handler->display->display_options['fields']['title']['element_type'] = 'h3';
  /* guide_content_for_admin */  /* Admin Guide Term Node Content */ $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* guide_content_for_admin */  /* Admin Guide Term Node Content */ $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* guide_content_for_admin */  /* Admin Guide Term Node Content */ /* Field: Content: Body */
  /* guide_content_for_admin */  /* Admin Guide Term Node Content */ $handler->display->display_options['fields']['body']['id'] = 'body';
  /* guide_content_for_admin */  /* Admin Guide Term Node Content */ $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  /* guide_content_for_admin */  /* Admin Guide Term Node Content */ $handler->display->display_options['fields']['body']['field'] = 'body';
  /* guide_content_for_admin */  /* Admin Guide Term Node Content */ $handler->display->display_options['fields']['body']['label'] = '';
  /* guide_content_for_admin */  /* Admin Guide Term Node Content */ $handler->display->display_options['fields']['body']['element_type'] = '0';
  /* guide_content_for_admin */  /* Admin Guide Term Node Content */ $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* guide_content_for_admin */  /* Admin Guide Term Node Content */ $handler->display->display_options['fields']['body']['element_wrapper_type'] = '0';
  /* guide_content_for_admin */  /* Admin Guide Term Node Content */ $handler->display->display_options['fields']['body']['element_default_classes'] = FALSE;
  /* guide_content_for_admin */  /* Admin Guide Term Node Content */ $handler->display->display_options['fields']['body']['settings'] = array(
  /* guide_content_for_admin */  /* Admin Guide Term Node Content */   'field_formatter_class' => '',
  /* guide_content_for_admin */  /* Admin Guide Term Node Content */ );
  /* guide_content_for_admin */  /* Admin Guide Term Node Content */ $handler->display->display_options['fields']['body']['field_api_classes'] = TRUE;
  /* guide_content_for_admin */  /* Admin Guide Term Node Content */ /* Field: Content: Edit link */
  /* guide_content_for_admin */  /* Admin Guide Term Node Content */ $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  /* guide_content_for_admin */  /* Admin Guide Term Node Content */ $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  /* guide_content_for_admin */  /* Admin Guide Term Node Content */ $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  /* guide_content_for_admin */  /* Admin Guide Term Node Content */ $handler->display->display_options['fields']['edit_node']['label'] = '';
  /* guide_content_for_admin */  /* Admin Guide Term Node Content */ $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  /* guide_content_for_admin */  /* Admin Guide Term Node Content */ $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* guide_content_for_admin */  /* Admin Guide Term Node Content */ /* Contextual filter: Content: Nid */
  /* guide_content_for_admin */  /* Admin Guide Term Node Content */ $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  /* guide_content_for_admin */  /* Admin Guide Term Node Content */ $handler->display->display_options['arguments']['nid']['table'] = 'node';
  /* guide_content_for_admin */  /* Admin Guide Term Node Content */ $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  /* guide_content_for_admin */  /* Admin Guide Term Node Content */ $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  /* guide_content_for_admin */  /* Admin Guide Term Node Content */ $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'raw';
  /* guide_content_for_admin */  /* Admin Guide Term Node Content */ $handler->display->display_options['arguments']['nid']['default_argument_options']['index'] = '3';
  /* guide_content_for_admin */  /* Admin Guide Term Node Content */ $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  /* guide_content_for_admin */  /* Admin Guide Term Node Content */ $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  /* guide_content_for_admin */  /* Admin Guide Term Node Content */ $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  /* guide_content_for_admin */  /* Admin Guide Term Node Content */ $handler->display->display_options['arguments']['nid']['specify_validation'] = TRUE;
  /* guide_content_for_admin */  /* Admin Guide Term Node Content */ $handler->display->display_options['arguments']['nid']['validate']['type'] = 'node';
  /* guide_content_for_admin */  /* Admin Guide Term Node Content */ $handler->display->display_options['arguments']['nid']['validate_options']['types'] = array(
  /* guide_content_for_admin */  /* Admin Guide Term Node Content */   'help' => 'help',
  /* guide_content_for_admin */  /* Admin Guide Term Node Content */ );
  /* guide_content_for_admin */  /* Admin Guide Term Node Content */ $handler->display->display_options['argument_input'] = array(
  /* guide_content_for_admin */  /* Admin Guide Term Node Content */   'field_help_topics_tid' => array(
  /* guide_content_for_admin */  /* Admin Guide Term Node Content */     'type' => 'panel',
  /* guide_content_for_admin */  /* Admin Guide Term Node Content */     'context' => 'entity:comment.author',
  /* guide_content_for_admin */  /* Admin Guide Term Node Content */     'context_optional' => 0,
  /* guide_content_for_admin */  /* Admin Guide Term Node Content */     'panel' => '1',
  /* guide_content_for_admin */  /* Admin Guide Term Node Content */     'fixed' => '',
  /* guide_content_for_admin */  /* Admin Guide Term Node Content */     'label' => 'Content: Help topics (field_help_topics)',
  /* guide_content_for_admin */  /* Admin Guide Term Node Content */   ),
  /* guide_content_for_admin */  /* Admin Guide Term Node Content */   'nid' => array(
  /* guide_content_for_admin */  /* Admin Guide Term Node Content */     'type' => 'panel',
  /* guide_content_for_admin */  /* Admin Guide Term Node Content */     'context' => 'entity:comment.author',
  /* guide_content_for_admin */  /* Admin Guide Term Node Content */     'context_optional' => 0,
  /* guide_content_for_admin */  /* Admin Guide Term Node Content */     'panel' => '2',
  /* guide_content_for_admin */  /* Admin Guide Term Node Content */     'fixed' => '',
  /* guide_content_for_admin */  /* Admin Guide Term Node Content */     'label' => 'Content: Nid',
  /* guide_content_for_admin */  /* Admin Guide Term Node Content */   ),
  /* guide_content_for_admin */  /* Admin Guide Term Node Content */ );

  /* guide_content_for_admin */ /* Display: Admin Guide FAQ */
  /* guide_content_for_admin */  /* Admin Guide FAQ */ $handler = $view->new_display('panel_pane', 'Admin Guide FAQ', 'panel_pane_3');
  /* guide_content_for_admin */  /* Admin Guide FAQ */ $handler->display->display_options['defaults']['title'] = FALSE;
  /* guide_content_for_admin */  /* Admin Guide FAQ */ $handler->display->display_options['title'] = 'Frequently Asked Questions';
  /* guide_content_for_admin */  /* Admin Guide FAQ */ $handler->display->display_options['defaults']['query'] = FALSE;
  /* guide_content_for_admin */  /* Admin Guide FAQ */ $handler->display->display_options['query']['type'] = 'views_query';
  /* guide_content_for_admin */  /* Admin Guide FAQ */ $handler->display->display_options['query']['options']['distinct'] = TRUE;
  /* guide_content_for_admin */  /* Admin Guide FAQ */ $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* guide_content_for_admin */  /* Admin Guide FAQ */ $handler->display->display_options['defaults']['fields'] = FALSE;
  /* guide_content_for_admin */  /* Admin Guide FAQ */ /* Field: Content: Help topics */
  /* guide_content_for_admin */  /* Admin Guide FAQ */ $handler->display->display_options['fields']['field_help_topics']['id'] = 'field_help_topics';
  /* guide_content_for_admin */  /* Admin Guide FAQ */ $handler->display->display_options['fields']['field_help_topics']['table'] = 'field_data_field_help_topics';
  /* guide_content_for_admin */  /* Admin Guide FAQ */ $handler->display->display_options['fields']['field_help_topics']['field'] = 'field_help_topics';
  /* guide_content_for_admin */  /* Admin Guide FAQ */ $handler->display->display_options['fields']['field_help_topics']['label'] = '';
  /* guide_content_for_admin */  /* Admin Guide FAQ */ $handler->display->display_options['fields']['field_help_topics']['exclude'] = TRUE;
  /* guide_content_for_admin */  /* Admin Guide FAQ */ $handler->display->display_options['fields']['field_help_topics']['alter']['text'] = '[field_help_topics]';
  /* guide_content_for_admin */  /* Admin Guide FAQ */ $handler->display->display_options['fields']['field_help_topics']['element_label_colon'] = FALSE;
  /* guide_content_for_admin */  /* Admin Guide FAQ */ $handler->display->display_options['fields']['field_help_topics']['element_default_classes'] = FALSE;
  /* guide_content_for_admin */  /* Admin Guide FAQ */ $handler->display->display_options['fields']['field_help_topics']['type'] = 'taxonomy_term_reference_plain';
  /* guide_content_for_admin */  /* Admin Guide FAQ */ $handler->display->display_options['fields']['field_help_topics']['settings'] = array(
  /* guide_content_for_admin */  /* Admin Guide FAQ */   'field_formatter_class' => '',
  /* guide_content_for_admin */  /* Admin Guide FAQ */ );
  /* guide_content_for_admin */  /* Admin Guide FAQ */ $handler->display->display_options['fields']['field_help_topics']['delta_limit'] = '1';
  /* guide_content_for_admin */  /* Admin Guide FAQ */ $handler->display->display_options['fields']['field_help_topics']['delta_offset'] = '0';
  /* guide_content_for_admin */  /* Admin Guide FAQ */ $handler->display->display_options['fields']['field_help_topics']['separator'] = '';
  /* guide_content_for_admin */  /* Admin Guide FAQ */ /* Field: Content: Nid */
  /* guide_content_for_admin */  /* Admin Guide FAQ */ $handler->display->display_options['fields']['nid']['id'] = 'nid';
  /* guide_content_for_admin */  /* Admin Guide FAQ */ $handler->display->display_options['fields']['nid']['table'] = 'node';
  /* guide_content_for_admin */  /* Admin Guide FAQ */ $handler->display->display_options['fields']['nid']['field'] = 'nid';
  /* guide_content_for_admin */  /* Admin Guide FAQ */ $handler->display->display_options['fields']['nid']['label'] = '';
  /* guide_content_for_admin */  /* Admin Guide FAQ */ $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  /* guide_content_for_admin */  /* Admin Guide FAQ */ $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* guide_content_for_admin */  /* Admin Guide FAQ */ /* Field: Content: Title */
  /* guide_content_for_admin */  /* Admin Guide FAQ */ $handler->display->display_options['fields']['title']['id'] = 'title';
  /* guide_content_for_admin */  /* Admin Guide FAQ */ $handler->display->display_options['fields']['title']['table'] = 'node';
  /* guide_content_for_admin */  /* Admin Guide FAQ */ $handler->display->display_options['fields']['title']['field'] = 'title';
  /* guide_content_for_admin */  /* Admin Guide FAQ */ $handler->display->display_options['fields']['title']['label'] = '';
  /* guide_content_for_admin */  /* Admin Guide FAQ */ $handler->display->display_options['fields']['title']['alter']['text'] = '<a href="/guide/[tid]/[nid]">
[title]
</a>';
  /* guide_content_for_admin */  /* Admin Guide FAQ */ $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  /* guide_content_for_admin */  /* Admin Guide FAQ */ $handler->display->display_options['fields']['title']['alter']['path'] = 'users/dashboard/[field_help_topics]/[nid]';
  /* guide_content_for_admin */  /* Admin Guide FAQ */ $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = TRUE;
  /* guide_content_for_admin */  /* Admin Guide FAQ */ $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = TRUE;
  /* guide_content_for_admin */  /* Admin Guide FAQ */ $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  /* guide_content_for_admin */  /* Admin Guide FAQ */ $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* guide_content_for_admin */  /* Admin Guide FAQ */ $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* guide_content_for_admin */  /* Admin Guide FAQ */ $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* guide_content_for_admin */  /* Admin Guide FAQ */ $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* guide_content_for_admin */  /* Admin Guide FAQ */ $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  /* guide_content_for_admin */  /* Admin Guide FAQ */ $handler->display->display_options['defaults']['filters'] = FALSE;
  /* guide_content_for_admin */  /* Admin Guide FAQ */ /* Filter criterion: Content: Published */
  /* guide_content_for_admin */  /* Admin Guide FAQ */ $handler->display->display_options['filters']['status']['id'] = 'status';
  /* guide_content_for_admin */  /* Admin Guide FAQ */ $handler->display->display_options['filters']['status']['table'] = 'node';
  /* guide_content_for_admin */  /* Admin Guide FAQ */ $handler->display->display_options['filters']['status']['field'] = 'status';
  /* guide_content_for_admin */  /* Admin Guide FAQ */ $handler->display->display_options['filters']['status']['value'] = 1;
  /* guide_content_for_admin */  /* Admin Guide FAQ */ $handler->display->display_options['filters']['status']['group'] = 1;
  /* guide_content_for_admin */  /* Admin Guide FAQ */ $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* guide_content_for_admin */  /* Admin Guide FAQ */ /* Filter criterion: Content: Type */
  /* guide_content_for_admin */  /* Admin Guide FAQ */ $handler->display->display_options['filters']['type']['id'] = 'type';
  /* guide_content_for_admin */  /* Admin Guide FAQ */ $handler->display->display_options['filters']['type']['table'] = 'node';
  /* guide_content_for_admin */  /* Admin Guide FAQ */ $handler->display->display_options['filters']['type']['field'] = 'type';
  /* guide_content_for_admin */  /* Admin Guide FAQ */ $handler->display->display_options['filters']['type']['value'] = array(
  /* guide_content_for_admin */  /* Admin Guide FAQ */   'help' => 'help',
  /* guide_content_for_admin */  /* Admin Guide FAQ */ );
  /* guide_content_for_admin */  /* Admin Guide FAQ */ /* Filter criterion: Content: Sticky */
  /* guide_content_for_admin */  /* Admin Guide FAQ */ $handler->display->display_options['filters']['sticky']['id'] = 'sticky';
  /* guide_content_for_admin */  /* Admin Guide FAQ */ $handler->display->display_options['filters']['sticky']['table'] = 'node';
  /* guide_content_for_admin */  /* Admin Guide FAQ */ $handler->display->display_options['filters']['sticky']['field'] = 'sticky';
  /* guide_content_for_admin */  /* Admin Guide FAQ */ $handler->display->display_options['filters']['sticky']['value'] = '1';
  /* guide_content_for_admin */  /* Admin Guide FAQ */ /* Filter criterion: Content: Display for group managers (field_group_manager_display) */
  /* guide_content_for_admin */  /* Admin Guide FAQ */ $handler->display->display_options['filters']['field_group_manager_display_value']['id'] = 'field_group_manager_display_value';
  /* guide_content_for_admin */  /* Admin Guide FAQ */ $handler->display->display_options['filters']['field_group_manager_display_value']['table'] = 'field_data_field_group_manager_display';
  /* guide_content_for_admin */  /* Admin Guide FAQ */ $handler->display->display_options['filters']['field_group_manager_display_value']['field'] = 'field_group_manager_display_value';
  /* guide_content_for_admin */  /* Admin Guide FAQ */ $handler->display->display_options['filters']['field_group_manager_display_value']['value'] = array(
  /* guide_content_for_admin */  /* Admin Guide FAQ */   1 => '1',
  /* guide_content_for_admin */  /* Admin Guide FAQ */ );
  /* guide_content_for_admin */ $translatables['guide_content_for_admin'] = array(
  /* guide_content_for_admin */   t('Master'),
  /* guide_content_for_admin */   t('more'),
  /* guide_content_for_admin */   t('Apply'),
  /* guide_content_for_admin */   t('Reset'),
  /* guide_content_for_admin */   t('Sort by'),
  /* guide_content_for_admin */   t('Asc'),
  /* guide_content_for_admin */   t('Desc'),
  /* guide_content_for_admin */   t('Items per page'),
  /* guide_content_for_admin */   t('- All -'),
  /* guide_content_for_admin */   t('Offset'),
  /* guide_content_for_admin */   t('« first'),
  /* guide_content_for_admin */   t('‹ previous'),
  /* guide_content_for_admin */   t('next ›'),
  /* guide_content_for_admin */   t('last »'),
  /* guide_content_for_admin */   t('term from field_help_topics'),
  /* guide_content_for_admin */   t('.'),
  /* guide_content_for_admin */   t('<a href="/guide/[tid]/[nid]">
[title]
</a>'),
  /* guide_content_for_admin */   t('All'),
  /* guide_content_for_admin */   t('Admin Guide Term Node List'),
  /* guide_content_for_admin */   t('View panes'),
  /* guide_content_for_admin */   t('Admin Guide Term Node Content'),
  /* guide_content_for_admin */   t('Admin Guide FAQ'),
  /* guide_content_for_admin */   t('Frequently Asked Questions'),
  /* guide_content_for_admin */   t('[field_help_topics]'),
  /* guide_content_for_admin */ );
  $export['guide_content_for_admin'] = $view;

  /* guide_terms_for_admin */ $view = new view();
  /* guide_terms_for_admin */ $view->name = 'guide_terms_for_admin';
  /* guide_terms_for_admin */ $view->description = '';
  /* guide_terms_for_admin */ $view->tag = 'default';
  /* guide_terms_for_admin */ $view->base_table = 'taxonomy_term_data';
  /* guide_terms_for_admin */ $view->human_name = 'Guide Terms for Admin';
  /* guide_terms_for_admin */ $view->core = 7;
  /* guide_terms_for_admin */ $view->api_version = '3.0';
  /* guide_terms_for_admin */ $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* guide_terms_for_admin */ /* Display: Master */
  /* guide_terms_for_admin */  /* Master */ $handler = $view->new_display('default', 'Master', 'default');
  /* guide_terms_for_admin */  /* Master */ $handler->display->display_options['use_more_always'] = FALSE;
  /* guide_terms_for_admin */  /* Master */ $handler->display->display_options['access']['type'] = 'perm';
  /* guide_terms_for_admin */  /* Master */ $handler->display->display_options['cache']['type'] = 'none';
  /* guide_terms_for_admin */  /* Master */ $handler->display->display_options['query']['type'] = 'views_query';
  /* guide_terms_for_admin */  /* Master */ $handler->display->display_options['query']['options']['distinct'] = TRUE;
  /* guide_terms_for_admin */  /* Master */ $handler->display->display_options['exposed_form']['type'] = 'basic';
  /* guide_terms_for_admin */  /* Master */ $handler->display->display_options['pager']['type'] = 'full';
  /* guide_terms_for_admin */  /* Master */ $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  /* guide_terms_for_admin */  /* Master */ $handler->display->display_options['pager']['options']['offset'] = '0';
  /* guide_terms_for_admin */  /* Master */ $handler->display->display_options['pager']['options']['id'] = '0';
  /* guide_terms_for_admin */  /* Master */ $handler->display->display_options['pager']['options']['quantity'] = '9';
  /* guide_terms_for_admin */  /* Master */ $handler->display->display_options['style_plugin'] = 'default';
  /* guide_terms_for_admin */  /* Master */ $handler->display->display_options['row_plugin'] = 'fields';
  /* guide_terms_for_admin */  /* Master */ /* Relationship: Taxonomy term: Content using Help topics */
  /* guide_terms_for_admin */  /* Master */ $handler->display->display_options['relationships']['reverse_field_help_topics_node']['id'] = 'reverse_field_help_topics_node';
  /* guide_terms_for_admin */  /* Master */ $handler->display->display_options['relationships']['reverse_field_help_topics_node']['table'] = 'taxonomy_term_data';
  /* guide_terms_for_admin */  /* Master */ $handler->display->display_options['relationships']['reverse_field_help_topics_node']['field'] = 'reverse_field_help_topics_node';
  /* guide_terms_for_admin */  /* Master */ /* Field: Taxonomy term: Name */
  /* guide_terms_for_admin */  /* Master */ $handler->display->display_options['fields']['name']['id'] = 'name';
  /* guide_terms_for_admin */  /* Master */ $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  /* guide_terms_for_admin */  /* Master */ $handler->display->display_options['fields']['name']['field'] = 'name';
  /* guide_terms_for_admin */  /* Master */ $handler->display->display_options['fields']['name']['label'] = '';
  /* guide_terms_for_admin */  /* Master */ $handler->display->display_options['fields']['name']['alter']['make_link'] = TRUE;
  /* guide_terms_for_admin */  /* Master */ $handler->display->display_options['fields']['name']['alter']['path'] = 'users/dashboard/[name]';
  /* guide_terms_for_admin */  /* Master */ $handler->display->display_options['fields']['name']['alter']['absolute'] = TRUE;
  /* guide_terms_for_admin */  /* Master */ $handler->display->display_options['fields']['name']['alter']['replace_spaces'] = TRUE;
  /* guide_terms_for_admin */  /* Master */ $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  /* guide_terms_for_admin */  /* Master */ $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  /* guide_terms_for_admin */  /* Master */ $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  /* guide_terms_for_admin */  /* Master */ /* Filter criterion: Taxonomy term: Vocabulary */
  /* guide_terms_for_admin */  /* Master */ $handler->display->display_options['filters']['vid']['id'] = 'vid';
  /* guide_terms_for_admin */  /* Master */ $handler->display->display_options['filters']['vid']['table'] = 'taxonomy_term_data';
  /* guide_terms_for_admin */  /* Master */ $handler->display->display_options['filters']['vid']['field'] = 'vid';
  /* guide_terms_for_admin */  /* Master */ $handler->display->display_options['filters']['vid']['value'] = array(
  /* guide_terms_for_admin */  /* Master */   4 => '4',
  /* guide_terms_for_admin */  /* Master */ );
  /* guide_terms_for_admin */  /* Master */ /* Filter criterion: Content: Display for group managers (field_group_manager_display) */
  /* guide_terms_for_admin */  /* Master */ $handler->display->display_options['filters']['field_group_manager_display_value']['id'] = 'field_group_manager_display_value';
  /* guide_terms_for_admin */  /* Master */ $handler->display->display_options['filters']['field_group_manager_display_value']['table'] = 'field_data_field_group_manager_display';
  /* guide_terms_for_admin */  /* Master */ $handler->display->display_options['filters']['field_group_manager_display_value']['field'] = 'field_group_manager_display_value';
  /* guide_terms_for_admin */  /* Master */ $handler->display->display_options['filters']['field_group_manager_display_value']['relationship'] = 'reverse_field_help_topics_node';
  /* guide_terms_for_admin */  /* Master */ $handler->display->display_options['filters']['field_group_manager_display_value']['value'] = array(
  /* guide_terms_for_admin */  /* Master */   1 => '1',
  /* guide_terms_for_admin */  /* Master */ );

  /* guide_terms_for_admin */ /* Display: Admin Guide Terms List */
  /* guide_terms_for_admin */  /* Admin Guide Terms List */ $handler = $view->new_display('panel_pane', 'Admin Guide Terms List', 'panel_pane_1');
  /* guide_terms_for_admin */  /* Admin Guide Terms List */ $handler->display->display_options['defaults']['fields'] = FALSE;
  /* guide_terms_for_admin */  /* Admin Guide Terms List */ /* Field: Taxonomy term: Term ID */
  /* guide_terms_for_admin */  /* Admin Guide Terms List */ $handler->display->display_options['fields']['tid']['id'] = 'tid';
  /* guide_terms_for_admin */  /* Admin Guide Terms List */ $handler->display->display_options['fields']['tid']['table'] = 'taxonomy_term_data';
  /* guide_terms_for_admin */  /* Admin Guide Terms List */ $handler->display->display_options['fields']['tid']['field'] = 'tid';
  /* guide_terms_for_admin */  /* Admin Guide Terms List */ $handler->display->display_options['fields']['tid']['label'] = '';
  /* guide_terms_for_admin */  /* Admin Guide Terms List */ $handler->display->display_options['fields']['tid']['exclude'] = TRUE;
  /* guide_terms_for_admin */  /* Admin Guide Terms List */ $handler->display->display_options['fields']['tid']['element_label_colon'] = FALSE;
  /* guide_terms_for_admin */  /* Admin Guide Terms List */ $handler->display->display_options['fields']['tid']['element_default_classes'] = FALSE;
  /* guide_terms_for_admin */  /* Admin Guide Terms List */ $handler->display->display_options['fields']['tid']['separator'] = '';
  /* guide_terms_for_admin */  /* Admin Guide Terms List */ /* Field: Taxonomy term: Name */
  /* guide_terms_for_admin */  /* Admin Guide Terms List */ $handler->display->display_options['fields']['name']['id'] = 'name';
  /* guide_terms_for_admin */  /* Admin Guide Terms List */ $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  /* guide_terms_for_admin */  /* Admin Guide Terms List */ $handler->display->display_options['fields']['name']['field'] = 'name';
  /* guide_terms_for_admin */  /* Admin Guide Terms List */ $handler->display->display_options['fields']['name']['label'] = '';
  /* guide_terms_for_admin */  /* Admin Guide Terms List */ $handler->display->display_options['fields']['name']['alter']['make_link'] = TRUE;
  /* guide_terms_for_admin */  /* Admin Guide Terms List */ $handler->display->display_options['fields']['name']['alter']['path'] = 'users/dashboard/[name]';
  /* guide_terms_for_admin */  /* Admin Guide Terms List */ $handler->display->display_options['fields']['name']['alter']['absolute'] = TRUE;
  /* guide_terms_for_admin */  /* Admin Guide Terms List */ $handler->display->display_options['fields']['name']['alter']['replace_spaces'] = TRUE;
  /* guide_terms_for_admin */  /* Admin Guide Terms List */ $handler->display->display_options['fields']['name']['alter']['rel'] = '[tid]';
  /* guide_terms_for_admin */  /* Admin Guide Terms List */ $handler->display->display_options['fields']['name']['alter']['link_class'] = 'help-link';
  /* guide_terms_for_admin */  /* Admin Guide Terms List */ $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  /* guide_terms_for_admin */  /* Admin Guide Terms List */ $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  /* guide_terms_for_admin */  /* Admin Guide Terms List */ $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;

  /* guide_terms_for_admin */ /* Display: Admin Guide Term Description */
  /* guide_terms_for_admin */  /* Admin Guide Term Description */ $handler = $view->new_display('panel_pane', 'Admin Guide Term Description', 'panel_pane_2');
  /* guide_terms_for_admin */  /* Admin Guide Term Description */ $handler->display->display_options['defaults']['fields'] = FALSE;
  /* guide_terms_for_admin */  /* Admin Guide Term Description */ /* Field: Taxonomy term: Name */
  /* guide_terms_for_admin */  /* Admin Guide Term Description */ $handler->display->display_options['fields']['name']['id'] = 'name';
  /* guide_terms_for_admin */  /* Admin Guide Term Description */ $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  /* guide_terms_for_admin */  /* Admin Guide Term Description */ $handler->display->display_options['fields']['name']['field'] = 'name';
  /* guide_terms_for_admin */  /* Admin Guide Term Description */ $handler->display->display_options['fields']['name']['label'] = '';
  /* guide_terms_for_admin */  /* Admin Guide Term Description */ $handler->display->display_options['fields']['name']['alter']['absolute'] = TRUE;
  /* guide_terms_for_admin */  /* Admin Guide Term Description */ $handler->display->display_options['fields']['name']['alter']['replace_spaces'] = TRUE;
  /* guide_terms_for_admin */  /* Admin Guide Term Description */ $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  /* guide_terms_for_admin */  /* Admin Guide Term Description */ $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  /* guide_terms_for_admin */  /* Admin Guide Term Description */ $handler->display->display_options['fields']['name']['element_type'] = 'h3';
  /* guide_terms_for_admin */  /* Admin Guide Term Description */ $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  /* guide_terms_for_admin */  /* Admin Guide Term Description */ /* Field: Taxonomy term: Term description */
  /* guide_terms_for_admin */  /* Admin Guide Term Description */ $handler->display->display_options['fields']['description']['id'] = 'description';
  /* guide_terms_for_admin */  /* Admin Guide Term Description */ $handler->display->display_options['fields']['description']['table'] = 'taxonomy_term_data';
  /* guide_terms_for_admin */  /* Admin Guide Term Description */ $handler->display->display_options['fields']['description']['field'] = 'description';
  /* guide_terms_for_admin */  /* Admin Guide Term Description */ $handler->display->display_options['fields']['description']['label'] = '';
  /* guide_terms_for_admin */  /* Admin Guide Term Description */ $handler->display->display_options['fields']['description']['element_label_colon'] = FALSE;
  /* guide_terms_for_admin */  /* Admin Guide Term Description */ $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* guide_terms_for_admin */  /* Admin Guide Term Description */ /* Contextual filter: Taxonomy term: Term ID */
  /* guide_terms_for_admin */  /* Admin Guide Term Description */ $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  /* guide_terms_for_admin */  /* Admin Guide Term Description */ $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_term_data';
  /* guide_terms_for_admin */  /* Admin Guide Term Description */ $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  /* guide_terms_for_admin */  /* Admin Guide Term Description */ $handler->display->display_options['arguments']['tid']['default_action'] = 'default';
  /* guide_terms_for_admin */  /* Admin Guide Term Description */ $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'raw';
  /* guide_terms_for_admin */  /* Admin Guide Term Description */ $handler->display->display_options['arguments']['tid']['default_argument_options']['index'] = '2';
  /* guide_terms_for_admin */  /* Admin Guide Term Description */ $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  /* guide_terms_for_admin */  /* Admin Guide Term Description */ $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  /* guide_terms_for_admin */  /* Admin Guide Term Description */ $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
  /* guide_terms_for_admin */  /* Admin Guide Term Description */ $handler->display->display_options['arguments']['tid']['specify_validation'] = TRUE;
  /* guide_terms_for_admin */  /* Admin Guide Term Description */ $handler->display->display_options['arguments']['tid']['validate']['type'] = 'taxonomy_term';
  /* guide_terms_for_admin */  /* Admin Guide Term Description */ $handler->display->display_options['arguments']['tid']['validate_options']['vocabularies'] = array(
  /* guide_terms_for_admin */  /* Admin Guide Term Description */   'help' => 'help',
  /* guide_terms_for_admin */  /* Admin Guide Term Description */ );
  /* guide_terms_for_admin */  /* Admin Guide Term Description */ $handler->display->display_options['arguments']['tid']['validate_options']['type'] = 'convert';
  /* guide_terms_for_admin */  /* Admin Guide Term Description */ $handler->display->display_options['arguments']['tid']['validate_options']['transform'] = TRUE;
  /* guide_terms_for_admin */  /* Admin Guide Term Description */ $handler->display->display_options['argument_input'] = array(
  /* guide_terms_for_admin */  /* Admin Guide Term Description */   'tid' => array(
  /* guide_terms_for_admin */  /* Admin Guide Term Description */     'type' => 'panel',
  /* guide_terms_for_admin */  /* Admin Guide Term Description */     'context' => 'entity:comment.author',
  /* guide_terms_for_admin */  /* Admin Guide Term Description */     'context_optional' => 0,
  /* guide_terms_for_admin */  /* Admin Guide Term Description */     'panel' => '1',
  /* guide_terms_for_admin */  /* Admin Guide Term Description */     'fixed' => '',
  /* guide_terms_for_admin */  /* Admin Guide Term Description */     'label' => 'Taxonomy term: Term ID',
  /* guide_terms_for_admin */  /* Admin Guide Term Description */   ),
  /* guide_terms_for_admin */  /* Admin Guide Term Description */ );
  /* guide_terms_for_admin */ $translatables['guide_terms_for_admin'] = array(
  /* guide_terms_for_admin */   t('Master'),
  /* guide_terms_for_admin */   t('more'),
  /* guide_terms_for_admin */   t('Apply'),
  /* guide_terms_for_admin */   t('Reset'),
  /* guide_terms_for_admin */   t('Sort by'),
  /* guide_terms_for_admin */   t('Asc'),
  /* guide_terms_for_admin */   t('Desc'),
  /* guide_terms_for_admin */   t('Items per page'),
  /* guide_terms_for_admin */   t('- All -'),
  /* guide_terms_for_admin */   t('Offset'),
  /* guide_terms_for_admin */   t('« first'),
  /* guide_terms_for_admin */   t('‹ previous'),
  /* guide_terms_for_admin */   t('next ›'),
  /* guide_terms_for_admin */   t('last »'),
  /* guide_terms_for_admin */   t('field_help_topics'),
  /* guide_terms_for_admin */   t('Admin Guide Terms List'),
  /* guide_terms_for_admin */   t('.'),
  /* guide_terms_for_admin */   t('View panes'),
  /* guide_terms_for_admin */   t('Admin Guide Term Description'),
  /* guide_terms_for_admin */   t('All'),
  /* guide_terms_for_admin */ );
  $export['guide_terms_for_admin'] = $view;

  /* manage_orphaned_content */ $view = new view();
  /* manage_orphaned_content */ $view->name = 'manage_orphaned_content';
  /* manage_orphaned_content */ $view->description = '';
  /* manage_orphaned_content */ $view->tag = 'default';
  /* manage_orphaned_content */ $view->base_table = 'node';
  /* manage_orphaned_content */ $view->human_name = 'Manage orphaned content';
  /* manage_orphaned_content */ $view->core = 7;
  /* manage_orphaned_content */ $view->api_version = '3.0';
  /* manage_orphaned_content */ $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* manage_orphaned_content */ /* Display: Master */
  /* manage_orphaned_content */  /* Master */ $handler = $view->new_display('default', 'Master', 'default');
  /* manage_orphaned_content */  /* Master */ $handler->display->display_options['title'] = 'Orphaned Content';
  /* manage_orphaned_content */  /* Master */ $handler->display->display_options['use_more_always'] = FALSE;
  /* manage_orphaned_content */  /* Master */ $handler->display->display_options['access']['type'] = 'role';
  /* manage_orphaned_content */  /* Master */ $handler->display->display_options['access']['role'] = array(
  /* manage_orphaned_content */  /* Master */   9 => '9',
  /* manage_orphaned_content */  /* Master */ );
  /* manage_orphaned_content */  /* Master */ $handler->display->display_options['cache']['type'] = 'none';
  /* manage_orphaned_content */  /* Master */ $handler->display->display_options['query']['type'] = 'views_query';
  /* manage_orphaned_content */  /* Master */ $handler->display->display_options['exposed_form']['type'] = 'basic';
  /* manage_orphaned_content */  /* Master */ $handler->display->display_options['pager']['type'] = 'full';
  /* manage_orphaned_content */  /* Master */ $handler->display->display_options['pager']['options']['items_per_page'] = '25';
  /* manage_orphaned_content */  /* Master */ $handler->display->display_options['pager']['options']['offset'] = '0';
  /* manage_orphaned_content */  /* Master */ $handler->display->display_options['pager']['options']['id'] = '0';
  /* manage_orphaned_content */  /* Master */ $handler->display->display_options['pager']['options']['quantity'] = '9';
  /* manage_orphaned_content */  /* Master */ $handler->display->display_options['style_plugin'] = 'table';
  /* manage_orphaned_content */  /* Master */ $handler->display->display_options['style_options']['columns'] = array(
  /* manage_orphaned_content */  /* Master */   'title' => 'title',
  /* manage_orphaned_content */  /* Master */   'field_publication_author' => 'field_publication_author',
  /* manage_orphaned_content */  /* Master */   'created' => 'created',
  /* manage_orphaned_content */  /* Master */   'type' => 'type',
  /* manage_orphaned_content */  /* Master */ );
  /* manage_orphaned_content */  /* Master */ $handler->display->display_options['style_options']['default'] = 'created';
  /* manage_orphaned_content */  /* Master */ $handler->display->display_options['style_options']['info'] = array(
  /* manage_orphaned_content */  /* Master */   'title' => array(
  /* manage_orphaned_content */  /* Master */     'sortable' => 1,
  /* manage_orphaned_content */  /* Master */     'default_sort_order' => 'asc',
  /* manage_orphaned_content */  /* Master */     'align' => '',
  /* manage_orphaned_content */  /* Master */     'separator' => '',
  /* manage_orphaned_content */  /* Master */     'empty_column' => 0,
  /* manage_orphaned_content */  /* Master */   ),
  /* manage_orphaned_content */  /* Master */   'field_publication_author' => array(
  /* manage_orphaned_content */  /* Master */     'sortable' => 1,
  /* manage_orphaned_content */  /* Master */     'default_sort_order' => 'asc',
  /* manage_orphaned_content */  /* Master */     'align' => '',
  /* manage_orphaned_content */  /* Master */     'separator' => '',
  /* manage_orphaned_content */  /* Master */     'empty_column' => 0,
  /* manage_orphaned_content */  /* Master */   ),
  /* manage_orphaned_content */  /* Master */   'created' => array(
  /* manage_orphaned_content */  /* Master */     'sortable' => 1,
  /* manage_orphaned_content */  /* Master */     'default_sort_order' => 'asc',
  /* manage_orphaned_content */  /* Master */     'align' => '',
  /* manage_orphaned_content */  /* Master */     'separator' => '',
  /* manage_orphaned_content */  /* Master */     'empty_column' => 0,
  /* manage_orphaned_content */  /* Master */   ),
  /* manage_orphaned_content */  /* Master */   'type' => array(
  /* manage_orphaned_content */  /* Master */     'sortable' => 1,
  /* manage_orphaned_content */  /* Master */     'default_sort_order' => 'asc',
  /* manage_orphaned_content */  /* Master */     'align' => '',
  /* manage_orphaned_content */  /* Master */     'separator' => '',
  /* manage_orphaned_content */  /* Master */     'empty_column' => 0,
  /* manage_orphaned_content */  /* Master */   ),
  /* manage_orphaned_content */  /* Master */ );
  /* manage_orphaned_content */  /* Master */ /* Field: Content: Title */
  /* manage_orphaned_content */  /* Master */ $handler->display->display_options['fields']['title']['id'] = 'title';
  /* manage_orphaned_content */  /* Master */ $handler->display->display_options['fields']['title']['table'] = 'node';
  /* manage_orphaned_content */  /* Master */ $handler->display->display_options['fields']['title']['field'] = 'title';
  /* manage_orphaned_content */  /* Master */ $handler->display->display_options['fields']['title']['label'] = '';
  /* manage_orphaned_content */  /* Master */ $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  /* manage_orphaned_content */  /* Master */ $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* manage_orphaned_content */  /* Master */ /* Field: Content: Type */
  /* manage_orphaned_content */  /* Master */ $handler->display->display_options['fields']['type']['id'] = 'type';
  /* manage_orphaned_content */  /* Master */ $handler->display->display_options['fields']['type']['table'] = 'node';
  /* manage_orphaned_content */  /* Master */ $handler->display->display_options['fields']['type']['field'] = 'type';
  /* manage_orphaned_content */  /* Master */ /* Field: Content: Post date */
  /* manage_orphaned_content */  /* Master */ $handler->display->display_options['fields']['created']['id'] = 'created';
  /* manage_orphaned_content */  /* Master */ $handler->display->display_options['fields']['created']['table'] = 'node';
  /* manage_orphaned_content */  /* Master */ $handler->display->display_options['fields']['created']['field'] = 'created';
  /* manage_orphaned_content */  /* Master */ $handler->display->display_options['fields']['created']['date_format'] = 'short';
  /* manage_orphaned_content */  /* Master */ $handler->display->display_options['fields']['created']['second_date_format'] = 'date_format_globalnet_date';
  /* manage_orphaned_content */  /* Master */ /* Field: Content: Author */
  /* manage_orphaned_content */  /* Master */ $handler->display->display_options['fields']['field_publication_author']['id'] = 'field_publication_author';
  /* manage_orphaned_content */  /* Master */ $handler->display->display_options['fields']['field_publication_author']['table'] = 'field_data_field_publication_author';
  /* manage_orphaned_content */  /* Master */ $handler->display->display_options['fields']['field_publication_author']['field'] = 'field_publication_author';
  /* manage_orphaned_content */  /* Master */ $handler->display->display_options['fields']['field_publication_author']['element_type'] = '0';
  /* manage_orphaned_content */  /* Master */ $handler->display->display_options['fields']['field_publication_author']['element_wrapper_type'] = '0';
  /* manage_orphaned_content */  /* Master */ $handler->display->display_options['fields']['field_publication_author']['element_default_classes'] = FALSE;
  /* manage_orphaned_content */  /* Master */ $handler->display->display_options['fields']['field_publication_author']['settings'] = array(
  /* manage_orphaned_content */  /* Master */   'field_formatter_class' => '',
  /* manage_orphaned_content */  /* Master */ );
  /* manage_orphaned_content */  /* Master */ $handler->display->display_options['fields']['field_publication_author']['field_api_classes'] = TRUE;
  /* manage_orphaned_content */  /* Master */ /* Sort criterion: Content: Post date */
  /* manage_orphaned_content */  /* Master */ $handler->display->display_options['sorts']['created']['id'] = 'created';
  /* manage_orphaned_content */  /* Master */ $handler->display->display_options['sorts']['created']['table'] = 'node';
  /* manage_orphaned_content */  /* Master */ $handler->display->display_options['sorts']['created']['field'] = 'created';
  /* manage_orphaned_content */  /* Master */ $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* manage_orphaned_content */  /* Master */ /* Filter criterion: Content: Published */
  /* manage_orphaned_content */  /* Master */ $handler->display->display_options['filters']['status']['id'] = 'status';
  /* manage_orphaned_content */  /* Master */ $handler->display->display_options['filters']['status']['table'] = 'node';
  /* manage_orphaned_content */  /* Master */ $handler->display->display_options['filters']['status']['field'] = 'status';
  /* manage_orphaned_content */  /* Master */ $handler->display->display_options['filters']['status']['value'] = 1;
  /* manage_orphaned_content */  /* Master */ $handler->display->display_options['filters']['status']['group'] = 1;
  /* manage_orphaned_content */  /* Master */ $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* manage_orphaned_content */  /* Master */ /* Filter criterion: Content: Groups audience (og_group_ref) */
  /* manage_orphaned_content */  /* Master */ $handler->display->display_options['filters']['og_group_ref_target_id']['id'] = 'og_group_ref_target_id';
  /* manage_orphaned_content */  /* Master */ $handler->display->display_options['filters']['og_group_ref_target_id']['table'] = 'og_membership';
  /* manage_orphaned_content */  /* Master */ $handler->display->display_options['filters']['og_group_ref_target_id']['field'] = 'og_group_ref_target_id';
  /* manage_orphaned_content */  /* Master */ $handler->display->display_options['filters']['og_group_ref_target_id']['operator'] = 'empty';
  /* manage_orphaned_content */  /* Master */ /* Filter criterion: Content: Type */
  /* manage_orphaned_content */  /* Master */ $handler->display->display_options['filters']['type']['id'] = 'type';
  /* manage_orphaned_content */  /* Master */ $handler->display->display_options['filters']['type']['table'] = 'node';
  /* manage_orphaned_content */  /* Master */ $handler->display->display_options['filters']['type']['field'] = 'type';
  /* manage_orphaned_content */  /* Master */ $handler->display->display_options['filters']['type']['value'] = array(
  /* manage_orphaned_content */  /* Master */   'alumni_group' => 'alumni_group',
  /* manage_orphaned_content */  /* Master */   'announcement' => 'announcement',
  /* manage_orphaned_content */  /* Master */   'coi' => 'coi',
  /* manage_orphaned_content */  /* Master */   'course' => 'course',
  /* manage_orphaned_content */  /* Master */   'course_group' => 'course_group',
  /* manage_orphaned_content */  /* Master */   'program' => 'program',
  /* manage_orphaned_content */  /* Master */   'event' => 'event',
  /* manage_orphaned_content */  /* Master */   'media_gallery' => 'media_gallery',
  /* manage_orphaned_content */  /* Master */   'group' => 'group',
  /* manage_orphaned_content */  /* Master */   'news' => 'news',
  /* manage_orphaned_content */  /* Master */   'poll' => 'poll',
  /* manage_orphaned_content */  /* Master */   'post' => 'post',
  /* manage_orphaned_content */  /* Master */   'publication' => 'publication',
  /* manage_orphaned_content */  /* Master */ );

  /* manage_orphaned_content */ /* Display: Orphaned Content */
  /* manage_orphaned_content */  /* Orphaned Content */ $handler = $view->new_display('page', 'Orphaned Content', 'page_1');
  /* manage_orphaned_content */  /* Orphaned Content */ $handler->display->display_options['path'] = 'admin/reports/orphaned-content';
  /* manage_orphaned_content */  /* Orphaned Content */ $handler->display->display_options['menu']['type'] = 'tab';
  /* manage_orphaned_content */  /* Orphaned Content */ $handler->display->display_options['menu']['title'] = 'Orphaned Content';
  /* manage_orphaned_content */  /* Orphaned Content */ $handler->display->display_options['menu']['weight'] = '0';
  /* manage_orphaned_content */  /* Orphaned Content */ $handler->display->display_options['menu']['context'] = 0;
  /* manage_orphaned_content */  /* Orphaned Content */ $handler->display->display_options['menu']['context_only_inline'] = 0;
  /* manage_orphaned_content */ $translatables['manage_orphaned_content'] = array(
  /* manage_orphaned_content */   t('Master'),
  /* manage_orphaned_content */   t('Orphaned Content'),
  /* manage_orphaned_content */   t('more'),
  /* manage_orphaned_content */   t('Apply'),
  /* manage_orphaned_content */   t('Reset'),
  /* manage_orphaned_content */   t('Sort by'),
  /* manage_orphaned_content */   t('Asc'),
  /* manage_orphaned_content */   t('Desc'),
  /* manage_orphaned_content */   t('Items per page'),
  /* manage_orphaned_content */   t('- All -'),
  /* manage_orphaned_content */   t('Offset'),
  /* manage_orphaned_content */   t('« first'),
  /* manage_orphaned_content */   t('‹ previous'),
  /* manage_orphaned_content */   t('next ›'),
  /* manage_orphaned_content */   t('last »'),
  /* manage_orphaned_content */   t('Type'),
  /* manage_orphaned_content */   t('Post date'),
  /* manage_orphaned_content */   t('Author'),
  /* manage_orphaned_content */ );
  $export['manage_orphaned_content'] = $view;

  /* manage_users */ $view = new view();
  /* manage_users */ $view->name = 'manage_users';
  /* manage_users */ $view->description = '';
  /* manage_users */ $view->tag = 'default';
  /* manage_users */ $view->base_table = 'users';
  /* manage_users */ $view->human_name = 'Manage Users';
  /* manage_users */ $view->core = 7;
  /* manage_users */ $view->api_version = '3.0';
  /* manage_users */ $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* manage_users */ /* Display: Master */
  /* manage_users */  /* Master */ $handler = $view->new_display('default', 'Master', 'default');
  /* manage_users */  /* Master */ $handler->display->display_options['title'] = 'Manage Users';
  /* manage_users */  /* Master */ $handler->display->display_options['use_more_always'] = FALSE;
  /* manage_users */  /* Master */ $handler->display->display_options['access']['type'] = 'gn2_admin_dashboard_manager_access';
  /* manage_users */  /* Master */ $handler->display->display_options['cache']['type'] = 'none';
  /* manage_users */  /* Master */ $handler->display->display_options['query']['type'] = 'views_query';
  /* manage_users */  /* Master */ $handler->display->display_options['query']['options']['disable_sql_rewrite'] = TRUE;
  /* manage_users */  /* Master */ $handler->display->display_options['query']['options']['distinct'] = TRUE;
  /* manage_users */  /* Master */ $handler->display->display_options['exposed_form']['type'] = 'basic';
  /* manage_users */  /* Master */ $handler->display->display_options['pager']['type'] = 'full';
  /* manage_users */  /* Master */ $handler->display->display_options['pager']['options']['items_per_page'] = '25';
  /* manage_users */  /* Master */ $handler->display->display_options['style_plugin'] = 'datatables';
  /* manage_users */  /* Master */ $handler->display->display_options['style_options']['columns'] = array(
  /* manage_users */  /* Master */   'name' => 'name',
  /* manage_users */  /* Master */   'field_name_last' => 'field_name_last',
  /* manage_users */  /* Master */   'field_name_first' => 'field_name_first',
  /* manage_users */  /* Master */   'status' => 'status',
  /* manage_users */  /* Master */   'mail' => 'mail',
  /* manage_users */  /* Master */   'uid' => 'uid',
  /* manage_users */  /* Master */ );
  /* manage_users */  /* Master */ $handler->display->display_options['style_options']['default'] = 'name';
  /* manage_users */  /* Master */ $handler->display->display_options['style_options']['info'] = array(
  /* manage_users */  /* Master */   'name' => array(
  /* manage_users */  /* Master */     'sortable' => 0,
  /* manage_users */  /* Master */     'default_sort_order' => 'asc',
  /* manage_users */  /* Master */     'align' => '',
  /* manage_users */  /* Master */     'separator' => '',
  /* manage_users */  /* Master */     'empty_column' => 0,
  /* manage_users */  /* Master */   ),
  /* manage_users */  /* Master */   'field_name_last' => array(
  /* manage_users */  /* Master */     'sortable' => 1,
  /* manage_users */  /* Master */     'default_sort_order' => 'asc',
  /* manage_users */  /* Master */     'align' => '',
  /* manage_users */  /* Master */     'separator' => '',
  /* manage_users */  /* Master */     'empty_column' => 0,
  /* manage_users */  /* Master */   ),
  /* manage_users */  /* Master */   'field_name_first' => array(
  /* manage_users */  /* Master */     'sortable' => 0,
  /* manage_users */  /* Master */     'default_sort_order' => 'asc',
  /* manage_users */  /* Master */     'align' => '',
  /* manage_users */  /* Master */     'separator' => '',
  /* manage_users */  /* Master */     'empty_column' => 0,
  /* manage_users */  /* Master */   ),
  /* manage_users */  /* Master */   'status' => array(
  /* manage_users */  /* Master */     'sortable' => 1,
  /* manage_users */  /* Master */     'default_sort_order' => 'asc',
  /* manage_users */  /* Master */     'align' => '',
  /* manage_users */  /* Master */     'separator' => '',
  /* manage_users */  /* Master */     'empty_column' => 0,
  /* manage_users */  /* Master */   ),
  /* manage_users */  /* Master */   'mail' => array(
  /* manage_users */  /* Master */     'sortable' => 0,
  /* manage_users */  /* Master */     'default_sort_order' => 'asc',
  /* manage_users */  /* Master */     'align' => '',
  /* manage_users */  /* Master */     'separator' => '',
  /* manage_users */  /* Master */     'empty_column' => 0,
  /* manage_users */  /* Master */   ),
  /* manage_users */  /* Master */   'uid' => array(
  /* manage_users */  /* Master */     'sortable' => 0,
  /* manage_users */  /* Master */     'default_sort_order' => 'asc',
  /* manage_users */  /* Master */     'align' => '',
  /* manage_users */  /* Master */     'separator' => '',
  /* manage_users */  /* Master */     'empty_column' => 0,
  /* manage_users */  /* Master */   ),
  /* manage_users */  /* Master */ );
  /* manage_users */  /* Master */ $handler->display->display_options['style_options']['elements'] = array(
  /* manage_users */  /* Master */   'search_box' => 1,
  /* manage_users */  /* Master */   'table_info' => 1,
  /* manage_users */  /* Master */   'save_state' => 0,
  /* manage_users */  /* Master */   'table_tools' => 0,
  /* manage_users */  /* Master */ );
  /* manage_users */  /* Master */ $handler->display->display_options['style_options']['layout'] = array(
  /* manage_users */  /* Master */   'autowidth' => 0,
  /* manage_users */  /* Master */   'themeroller' => 0,
  /* manage_users */  /* Master */   'sdom' => '',
  /* manage_users */  /* Master */ );
  /* manage_users */  /* Master */ $handler->display->display_options['style_options']['pages'] = array(
  /* manage_users */  /* Master */   'pagination_style' => '0',
  /* manage_users */  /* Master */   'length_change' => 0,
  /* manage_users */  /* Master */   'display_length' => '25',
  /* manage_users */  /* Master */ );
  /* manage_users */  /* Master */ /* Relationship: OG membership: Group Node from OG membership */
  /* manage_users */  /* Master */ $handler->display->display_options['relationships']['og_membership_related_node_group']['id'] = 'og_membership_related_node_group';
  /* manage_users */  /* Master */ $handler->display->display_options['relationships']['og_membership_related_node_group']['table'] = 'og_membership';
  /* manage_users */  /* Master */ $handler->display->display_options['relationships']['og_membership_related_node_group']['field'] = 'og_membership_related_node_group';
  /* manage_users */  /* Master */ /* Field: User: Name */
  /* manage_users */  /* Master */ $handler->display->display_options['fields']['name']['id'] = 'name';
  /* manage_users */  /* Master */ $handler->display->display_options['fields']['name']['table'] = 'users';
  /* manage_users */  /* Master */ $handler->display->display_options['fields']['name']['field'] = 'name';
  /* manage_users */  /* Master */ $handler->display->display_options['fields']['name']['label'] = 'Username';
  /* manage_users */  /* Master */ $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  /* manage_users */  /* Master */ $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  /* manage_users */  /* Master */ /* Field: Field: Family Name */
  /* manage_users */  /* Master */ $handler->display->display_options['fields']['field_name_last']['id'] = 'field_name_last';
  /* manage_users */  /* Master */ $handler->display->display_options['fields']['field_name_last']['table'] = 'field_data_field_name_last';
  /* manage_users */  /* Master */ $handler->display->display_options['fields']['field_name_last']['field'] = 'field_name_last';
  /* manage_users */  /* Master */ $handler->display->display_options['fields']['field_name_last']['element_default_classes'] = FALSE;
  /* manage_users */  /* Master */ $handler->display->display_options['fields']['field_name_last']['settings'] = array(
  /* manage_users */  /* Master */   'field_formatter_class' => '',
  /* manage_users */  /* Master */ );
  /* manage_users */  /* Master */ /* Field: Field: Given Name */
  /* manage_users */  /* Master */ $handler->display->display_options['fields']['field_name_first']['id'] = 'field_name_first';
  /* manage_users */  /* Master */ $handler->display->display_options['fields']['field_name_first']['table'] = 'field_data_field_name_first';
  /* manage_users */  /* Master */ $handler->display->display_options['fields']['field_name_first']['field'] = 'field_name_first';
  /* manage_users */  /* Master */ $handler->display->display_options['fields']['field_name_first']['label'] = 'First Name';
  /* manage_users */  /* Master */ $handler->display->display_options['fields']['field_name_first']['settings'] = array(
  /* manage_users */  /* Master */   'field_formatter_class' => '',
  /* manage_users */  /* Master */ );
  /* manage_users */  /* Master */ /* Field: User: Active */
  /* manage_users */  /* Master */ $handler->display->display_options['fields']['status']['id'] = 'status';
  /* manage_users */  /* Master */ $handler->display->display_options['fields']['status']['table'] = 'users';
  /* manage_users */  /* Master */ $handler->display->display_options['fields']['status']['field'] = 'status';
  /* manage_users */  /* Master */ $handler->display->display_options['fields']['status']['label'] = 'Status';
  /* manage_users */  /* Master */ $handler->display->display_options['fields']['status']['type'] = 'active-blocked';
  /* manage_users */  /* Master */ $handler->display->display_options['fields']['status']['not'] = 0;
  /* manage_users */  /* Master */ /* Field: User: E-mail */
  /* manage_users */  /* Master */ $handler->display->display_options['fields']['mail']['id'] = 'mail';
  /* manage_users */  /* Master */ $handler->display->display_options['fields']['mail']['table'] = 'users';
  /* manage_users */  /* Master */ $handler->display->display_options['fields']['mail']['field'] = 'mail';
  /* manage_users */  /* Master */ /* Field: User: Uid */
  /* manage_users */  /* Master */ $handler->display->display_options['fields']['uid']['id'] = 'uid';
  /* manage_users */  /* Master */ $handler->display->display_options['fields']['uid']['table'] = 'users';
  /* manage_users */  /* Master */ $handler->display->display_options['fields']['uid']['field'] = 'uid';
  /* manage_users */  /* Master */ $handler->display->display_options['fields']['uid']['label'] = '';
  /* manage_users */  /* Master */ $handler->display->display_options['fields']['uid']['alter']['alter_text'] = TRUE;
  /* manage_users */  /* Master */ $handler->display->display_options['fields']['uid']['alter']['text'] = '<a href="/user/[uid]/edit?destination=node/!1/dashboard/users">edit</a><br />
<a href="/admin/manage/users/update/block/[uid]?destination=node/!1/dashboard/users">block</a><br />
<a href="/admin/manage/users/update/unblock/[uid]?destination=node/!1/dashboard/users">unblock</a><br />
<a href="/admin/manage/users/update/unlock/[uid]?destination=node/!1/dashboard/users">unlock</a><br />
<a href="/messages/new/[uid]?destination=node/!1/dashboard/users">send message</a>';
  /* manage_users */  /* Master */ $handler->display->display_options['fields']['uid']['element_label_colon'] = FALSE;
  /* manage_users */  /* Master */ $handler->display->display_options['fields']['uid']['link_to_user'] = FALSE;
  /* manage_users */  /* Master */ /* Sort criterion: User: Created date */
  /* manage_users */  /* Master */ $handler->display->display_options['sorts']['created']['id'] = 'created';
  /* manage_users */  /* Master */ $handler->display->display_options['sorts']['created']['table'] = 'users';
  /* manage_users */  /* Master */ $handler->display->display_options['sorts']['created']['field'] = 'created';
  /* manage_users */  /* Master */ $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* manage_users */  /* Master */ /* Contextual filter: Content: Parent Organization (field_parent_organization) */
  /* manage_users */  /* Master */ $handler->display->display_options['arguments']['field_parent_organization_target_id']['id'] = 'field_parent_organization_target_id';
  /* manage_users */  /* Master */ $handler->display->display_options['arguments']['field_parent_organization_target_id']['table'] = 'field_data_field_parent_organization';
  /* manage_users */  /* Master */ $handler->display->display_options['arguments']['field_parent_organization_target_id']['field'] = 'field_parent_organization_target_id';
  /* manage_users */  /* Master */ $handler->display->display_options['arguments']['field_parent_organization_target_id']['relationship'] = 'og_membership_related_node_group';
  /* manage_users */  /* Master */ $handler->display->display_options['arguments']['field_parent_organization_target_id']['default_action'] = 'default';
  /* manage_users */  /* Master */ $handler->display->display_options['arguments']['field_parent_organization_target_id']['default_argument_type'] = 'node';
  /* manage_users */  /* Master */ $handler->display->display_options['arguments']['field_parent_organization_target_id']['summary']['number_of_records'] = '0';
  /* manage_users */  /* Master */ $handler->display->display_options['arguments']['field_parent_organization_target_id']['summary']['format'] = 'default_summary';
  /* manage_users */  /* Master */ $handler->display->display_options['arguments']['field_parent_organization_target_id']['summary_options']['items_per_page'] = '25';
  /* manage_users */  /* Master */ $handler->display->display_options['arguments']['field_parent_organization_target_id']['specify_validation'] = TRUE;
  /* manage_users */  /* Master */ $handler->display->display_options['arguments']['field_parent_organization_target_id']['validate']['type'] = 'og';
  /* manage_users */  /* Master */ $handler->display->display_options['arguments']['field_parent_organization_target_id']['validate']['fail'] = 'empty';

  /* manage_users */ /* Display: Page */
  /* manage_users */  /* Page */ $handler = $view->new_display('page', 'Page', 'page');
  /* manage_users */  /* Page */ $handler->display->display_options['path'] = 'node/%/dashboard/users';
  /* manage_users */  /* Page */ $handler->display->display_options['menu']['title'] = 'Manage Users';
  /* manage_users */  /* Page */ $handler->display->display_options['menu']['weight'] = '1';
  /* manage_users */  /* Page */ $handler->display->display_options['menu']['context'] = 0;
  /* manage_users */  /* Page */ $handler->display->display_options['menu']['context_only_inline'] = 0;
  /* manage_users */ $translatables['manage_users'] = array(
  /* manage_users */   t('Master'),
  /* manage_users */   t('Manage Users'),
  /* manage_users */   t('more'),
  /* manage_users */   t('Apply'),
  /* manage_users */   t('Reset'),
  /* manage_users */   t('Sort by'),
  /* manage_users */   t('Asc'),
  /* manage_users */   t('Desc'),
  /* manage_users */   t('Items per page'),
  /* manage_users */   t('- All -'),
  /* manage_users */   t('Offset'),
  /* manage_users */   t('« first'),
  /* manage_users */   t('‹ previous'),
  /* manage_users */   t('next ›'),
  /* manage_users */   t('last »'),
  /* manage_users */   t('Group node from OG membership'),
  /* manage_users */   t('Username'),
  /* manage_users */   t('Family Name'),
  /* manage_users */   t('First Name'),
  /* manage_users */   t('Status'),
  /* manage_users */   t('E-mail'),
  /* manage_users */   t('<a href="/user/[uid]/edit?destination=node/!1/dashboard/users">edit</a><br />
<a href="/admin/manage/users/update/block/[uid]?destination=node/!1/dashboard/users">block</a><br />
<a href="/admin/manage/users/update/unblock/[uid]?destination=node/!1/dashboard/users">unblock</a><br />
<a href="/admin/manage/users/update/unlock/[uid]?destination=node/!1/dashboard/users">unlock</a><br />
<a href="/messages/new/[uid]?destination=node/!1/dashboard/users">send message</a>'),
  /* manage_users */   t('All'),
  /* manage_users */   t('Page'),
  /* manage_users */ );
  $export['manage_users'] = $view;

  /* manager_entityform_page */ $view = new view();
  /* manager_entityform_page */ $view->name = 'manager_entityform_page';
  /* manager_entityform_page */ $view->description = '';
  /* manager_entityform_page */ $view->tag = 'default';
  /* manager_entityform_page */ $view->base_table = 'entityform_type';
  /* manager_entityform_page */ $view->human_name = 'Manager Entityform Page';
  /* manager_entityform_page */ $view->core = 7;
  /* manager_entityform_page */ $view->api_version = '3.0';
  /* manager_entityform_page */ $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* manager_entityform_page */ /* Display: Master */
  /* manager_entityform_page */  /* Master */ $handler = $view->new_display('default', 'Master', 'default');
  /* manager_entityform_page */  /* Master */ $handler->display->display_options['title'] = 'Forms';
  /* manager_entityform_page */  /* Master */ $handler->display->display_options['use_more_always'] = FALSE;
  /* manager_entityform_page */  /* Master */ $handler->display->display_options['access']['type'] = 'gn2_admin_dashboard_manager_access';
  /* manager_entityform_page */  /* Master */ $handler->display->display_options['cache']['type'] = 'none';
  /* manager_entityform_page */  /* Master */ $handler->display->display_options['query']['type'] = 'views_query';
  /* manager_entityform_page */  /* Master */ $handler->display->display_options['exposed_form']['type'] = 'basic';
  /* manager_entityform_page */  /* Master */ $handler->display->display_options['pager']['type'] = 'full';
  /* manager_entityform_page */  /* Master */ $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  /* manager_entityform_page */  /* Master */ $handler->display->display_options['style_plugin'] = 'table';
  /* manager_entityform_page */  /* Master */ $handler->display->display_options['style_options']['columns'] = array(
  /* manager_entityform_page */  /* Master */   'label' => 'label',
  /* manager_entityform_page */  /* Master */ );
  /* manager_entityform_page */  /* Master */ $handler->display->display_options['style_options']['default'] = '-1';
  /* manager_entityform_page */  /* Master */ $handler->display->display_options['style_options']['info'] = array(
  /* manager_entityform_page */  /* Master */   'label' => array(
  /* manager_entityform_page */  /* Master */     'sortable' => 0,
  /* manager_entityform_page */  /* Master */     'default_sort_order' => 'asc',
  /* manager_entityform_page */  /* Master */     'align' => '',
  /* manager_entityform_page */  /* Master */     'separator' => '',
  /* manager_entityform_page */  /* Master */     'empty_column' => 0,
  /* manager_entityform_page */  /* Master */   ),
  /* manager_entityform_page */  /* Master */ );
  /* manager_entityform_page */  /* Master */ /* Field: Entityform Type: Label */
  /* manager_entityform_page */  /* Master */ $handler->display->display_options['fields']['label']['id'] = 'label';
  /* manager_entityform_page */  /* Master */ $handler->display->display_options['fields']['label']['table'] = 'entityform_type';
  /* manager_entityform_page */  /* Master */ $handler->display->display_options['fields']['label']['field'] = 'label';
  /* manager_entityform_page */  /* Master */ $handler->display->display_options['fields']['label']['label'] = 'Form';
  /* manager_entityform_page */  /* Master */ $handler->display->display_options['fields']['label']['element_label_colon'] = FALSE;
  /* manager_entityform_page */  /* Master */ /* Field: Entityform Type: Machine-readable name */
  /* manager_entityform_page */  /* Master */ $handler->display->display_options['fields']['type']['id'] = 'type';
  /* manager_entityform_page */  /* Master */ $handler->display->display_options['fields']['type']['table'] = 'entityform_type';
  /* manager_entityform_page */  /* Master */ $handler->display->display_options['fields']['type']['field'] = 'type';
  /* manager_entityform_page */  /* Master */ $handler->display->display_options['fields']['type']['label'] = 'Submissions';
  /* manager_entityform_page */  /* Master */ $handler->display->display_options['fields']['type']['alter']['alter_text'] = TRUE;
  /* manager_entityform_page */  /* Master */ $handler->display->display_options['fields']['type']['alter']['text'] = 'View submissions';
  /* manager_entityform_page */  /* Master */ $handler->display->display_options['fields']['type']['alter']['make_link'] = TRUE;
  /* manager_entityform_page */  /* Master */ $handler->display->display_options['fields']['type']['alter']['path'] = 'admin/manage/form/submissions/[type]/table';
  /* manager_entityform_page */  /* Master */ $handler->display->display_options['fields']['type']['element_label_colon'] = FALSE;
  /* manager_entityform_page */  /* Master */ /* Filter criterion: Entityform Type: Machine-readable name */
  /* manager_entityform_page */  /* Master */ $handler->display->display_options['filters']['type']['id'] = 'type';
  /* manager_entityform_page */  /* Master */ $handler->display->display_options['filters']['type']['table'] = 'entityform_type';
  /* manager_entityform_page */  /* Master */ $handler->display->display_options['filters']['type']['field'] = 'type';
  /* manager_entityform_page */  /* Master */ $handler->display->display_options['filters']['type']['value'] = 'userreg';
  /* manager_entityform_page */  /* Master */ /* Filter criterion: Entityform Type: Machine-readable name */
  /* manager_entityform_page */  /* Master */ $handler->display->display_options['filters']['type_1']['id'] = 'type_1';
  /* manager_entityform_page */  /* Master */ $handler->display->display_options['filters']['type_1']['table'] = 'entityform_type';
  /* manager_entityform_page */  /* Master */ $handler->display->display_options['filters']['type_1']['field'] = 'type';
  /* manager_entityform_page */  /* Master */ $handler->display->display_options['filters']['type_1']['operator'] = '!=';
  /* manager_entityform_page */  /* Master */ $handler->display->display_options['filters']['type_1']['value'] = 'join_org';

  /* manager_entityform_page */ /* Display: Page */
  /* manager_entityform_page */  /* Page */ $handler = $view->new_display('page', 'Page', 'page');
  /* manager_entityform_page */  /* Page */ $handler->display->display_options['defaults']['fields'] = FALSE;
  /* manager_entityform_page */  /* Page */ /* Field: Entityform Type: Label */
  /* manager_entityform_page */  /* Page */ $handler->display->display_options['fields']['label']['id'] = 'label';
  /* manager_entityform_page */  /* Page */ $handler->display->display_options['fields']['label']['table'] = 'entityform_type';
  /* manager_entityform_page */  /* Page */ $handler->display->display_options['fields']['label']['field'] = 'label';
  /* manager_entityform_page */  /* Page */ $handler->display->display_options['fields']['label']['label'] = '';
  /* manager_entityform_page */  /* Page */ $handler->display->display_options['fields']['label']['element_label_colon'] = FALSE;
  /* manager_entityform_page */  /* Page */ /* Field: Entityform Type: Machine-readable name */
  /* manager_entityform_page */  /* Page */ $handler->display->display_options['fields']['type']['id'] = 'type';
  /* manager_entityform_page */  /* Page */ $handler->display->display_options['fields']['type']['table'] = 'entityform_type';
  /* manager_entityform_page */  /* Page */ $handler->display->display_options['fields']['type']['field'] = 'type';
  /* manager_entityform_page */  /* Page */ $handler->display->display_options['fields']['type']['label'] = '';
  /* manager_entityform_page */  /* Page */ $handler->display->display_options['fields']['type']['alter']['alter_text'] = TRUE;
  /* manager_entityform_page */  /* Page */ $handler->display->display_options['fields']['type']['alter']['text'] = 'View submissions';
  /* manager_entityform_page */  /* Page */ $handler->display->display_options['fields']['type']['alter']['make_link'] = TRUE;
  /* manager_entityform_page */  /* Page */ $handler->display->display_options['fields']['type']['alter']['path'] = 'admin/manage/form/submissions/[type]';
  /* manager_entityform_page */  /* Page */ $handler->display->display_options['fields']['type']['element_label_colon'] = FALSE;
  /* manager_entityform_page */  /* Page */ $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  /* manager_entityform_page */  /* Page */ $handler->display->display_options['defaults']['filters'] = FALSE;
  /* manager_entityform_page */  /* Page */ /* Filter criterion: Entityform Type: Machine-readable name */
  /* manager_entityform_page */  /* Page */ $handler->display->display_options['filters']['type']['id'] = 'type';
  /* manager_entityform_page */  /* Page */ $handler->display->display_options['filters']['type']['table'] = 'entityform_type';
  /* manager_entityform_page */  /* Page */ $handler->display->display_options['filters']['type']['field'] = 'type';
  /* manager_entityform_page */  /* Page */ $handler->display->display_options['filters']['type']['operator'] = '!=';
  /* manager_entityform_page */  /* Page */ $handler->display->display_options['filters']['type']['value'] = 'userreg';
  /* manager_entityform_page */  /* Page */ /* Filter criterion: Entityform Type: Machine-readable name */
  /* manager_entityform_page */  /* Page */ $handler->display->display_options['filters']['type_1']['id'] = 'type_1';
  /* manager_entityform_page */  /* Page */ $handler->display->display_options['filters']['type_1']['table'] = 'entityform_type';
  /* manager_entityform_page */  /* Page */ $handler->display->display_options['filters']['type_1']['field'] = 'type';
  /* manager_entityform_page */  /* Page */ $handler->display->display_options['filters']['type_1']['operator'] = '!=';
  /* manager_entityform_page */  /* Page */ $handler->display->display_options['filters']['type_1']['value'] = 'join_org';
  /* manager_entityform_page */  /* Page */ /* Filter criterion: Entityform Type: Machine-readable name */
  /* manager_entityform_page */  /* Page */ $handler->display->display_options['filters']['type_2']['id'] = 'type_2';
  /* manager_entityform_page */  /* Page */ $handler->display->display_options['filters']['type_2']['table'] = 'entityform_type';
  /* manager_entityform_page */  /* Page */ $handler->display->display_options['filters']['type_2']['field'] = 'type';
  /* manager_entityform_page */  /* Page */ $handler->display->display_options['filters']['type_2']['operator'] = '!=';
  /* manager_entityform_page */  /* Page */ $handler->display->display_options['filters']['type_2']['value'] = 'session';
  /* manager_entityform_page */  /* Page */ /* Filter criterion: Entityform Type: Machine-readable name */
  /* manager_entityform_page */  /* Page */ $handler->display->display_options['filters']['type_3']['id'] = 'type_3';
  /* manager_entityform_page */  /* Page */ $handler->display->display_options['filters']['type_3']['table'] = 'entityform_type';
  /* manager_entityform_page */  /* Page */ $handler->display->display_options['filters']['type_3']['field'] = 'type';
  /* manager_entityform_page */  /* Page */ $handler->display->display_options['filters']['type_3']['operator'] = '!=';
  /* manager_entityform_page */  /* Page */ $handler->display->display_options['filters']['type_3']['value'] = 'reject_request';
  /* manager_entityform_page */  /* Page */ /* Filter criterion: Entityform Type: Machine-readable name */
  /* manager_entityform_page */  /* Page */ $handler->display->display_options['filters']['type_4']['id'] = 'type_4';
  /* manager_entityform_page */  /* Page */ $handler->display->display_options['filters']['type_4']['table'] = 'entityform_type';
  /* manager_entityform_page */  /* Page */ $handler->display->display_options['filters']['type_4']['field'] = 'type';
  /* manager_entityform_page */  /* Page */ $handler->display->display_options['filters']['type_4']['operator'] = '!=';
  /* manager_entityform_page */  /* Page */ $handler->display->display_options['filters']['type_4']['value'] = 'feedback';
  /* manager_entityform_page */  /* Page */ $handler->display->display_options['path'] = 'admin/manage/forms';

  /* manager_entityform_page */ /* Display: Attachment */
  /* manager_entityform_page */  /* Attachment */ $handler = $view->new_display('attachment', 'Attachment', 'attachment_1');
  /* manager_entityform_page */  /* Attachment */ $handler->display->display_options['pager']['type'] = 'some';
  /* manager_entityform_page */  /* Attachment */ $handler->display->display_options['defaults']['fields'] = FALSE;
  /* manager_entityform_page */  /* Attachment */ /* Field: Entityform Type: Label */
  /* manager_entityform_page */  /* Attachment */ $handler->display->display_options['fields']['label']['id'] = 'label';
  /* manager_entityform_page */  /* Attachment */ $handler->display->display_options['fields']['label']['table'] = 'entityform_type';
  /* manager_entityform_page */  /* Attachment */ $handler->display->display_options['fields']['label']['field'] = 'label';
  /* manager_entityform_page */  /* Attachment */ $handler->display->display_options['fields']['label']['label'] = 'Form';
  /* manager_entityform_page */  /* Attachment */ $handler->display->display_options['fields']['label']['element_label_colon'] = FALSE;
  /* manager_entityform_page */  /* Attachment */ /* Field: Entityform Type: Machine-readable name */
  /* manager_entityform_page */  /* Attachment */ $handler->display->display_options['fields']['type']['id'] = 'type';
  /* manager_entityform_page */  /* Attachment */ $handler->display->display_options['fields']['type']['table'] = 'entityform_type';
  /* manager_entityform_page */  /* Attachment */ $handler->display->display_options['fields']['type']['field'] = 'type';
  /* manager_entityform_page */  /* Attachment */ $handler->display->display_options['fields']['type']['label'] = 'Submissions';
  /* manager_entityform_page */  /* Attachment */ $handler->display->display_options['fields']['type']['alter']['alter_text'] = TRUE;
  /* manager_entityform_page */  /* Attachment */ $handler->display->display_options['fields']['type']['alter']['text'] = 'View submissions';
  /* manager_entityform_page */  /* Attachment */ $handler->display->display_options['fields']['type']['alter']['make_link'] = TRUE;
  /* manager_entityform_page */  /* Attachment */ $handler->display->display_options['fields']['type']['alter']['path'] = 'admin/manage/userform/submissions/[type]';
  /* manager_entityform_page */  /* Attachment */ $handler->display->display_options['fields']['type']['element_label_colon'] = FALSE;
  /* manager_entityform_page */  /* Attachment */ $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  /* manager_entityform_page */  /* Attachment */ $handler->display->display_options['filter_groups']['groups'] = array(
  /* manager_entityform_page */  /* Attachment */   1 => 'OR',
  /* manager_entityform_page */  /* Attachment */ );
  /* manager_entityform_page */  /* Attachment */ $handler->display->display_options['defaults']['filters'] = FALSE;
  /* manager_entityform_page */  /* Attachment */ /* Filter criterion: Entityform Type: Machine-readable name */
  /* manager_entityform_page */  /* Attachment */ $handler->display->display_options['filters']['type']['id'] = 'type';
  /* manager_entityform_page */  /* Attachment */ $handler->display->display_options['filters']['type']['table'] = 'entityform_type';
  /* manager_entityform_page */  /* Attachment */ $handler->display->display_options['filters']['type']['field'] = 'type';
  /* manager_entityform_page */  /* Attachment */ $handler->display->display_options['filters']['type']['value'] = 'userreg';
  /* manager_entityform_page */  /* Attachment */ $handler->display->display_options['filters']['type']['group'] = 1;
  /* manager_entityform_page */  /* Attachment */ /* Filter criterion: Entityform Type: Machine-readable name */
  /* manager_entityform_page */  /* Attachment */ $handler->display->display_options['filters']['type_1']['id'] = 'type_1';
  /* manager_entityform_page */  /* Attachment */ $handler->display->display_options['filters']['type_1']['table'] = 'entityform_type';
  /* manager_entityform_page */  /* Attachment */ $handler->display->display_options['filters']['type_1']['field'] = 'type';
  /* manager_entityform_page */  /* Attachment */ $handler->display->display_options['filters']['type_1']['value'] = 'join_org';
  /* manager_entityform_page */  /* Attachment */ $handler->display->display_options['filters']['type_1']['group'] = 1;
  /* manager_entityform_page */  /* Attachment */ $handler->display->display_options['displays'] = array(
  /* manager_entityform_page */  /* Attachment */   'default' => 'default',
  /* manager_entityform_page */  /* Attachment */   'page' => 'page',
  /* manager_entityform_page */  /* Attachment */   'page_1' => 0,
  /* manager_entityform_page */  /* Attachment */ );

  /* manager_entityform_page */ /* Display: Dashboard | Forms */
  /* manager_entityform_page */  /* Dashboard | Forms */ $handler = $view->new_display('page', 'Dashboard | Forms', 'page_1');
  /* manager_entityform_page */  /* Dashboard | Forms */ $handler->display->display_options['defaults']['fields'] = FALSE;
  /* manager_entityform_page */  /* Dashboard | Forms */ /* Field: Entityform Type: Label */
  /* manager_entityform_page */  /* Dashboard | Forms */ $handler->display->display_options['fields']['label']['id'] = 'label';
  /* manager_entityform_page */  /* Dashboard | Forms */ $handler->display->display_options['fields']['label']['table'] = 'entityform_type';
  /* manager_entityform_page */  /* Dashboard | Forms */ $handler->display->display_options['fields']['label']['field'] = 'label';
  /* manager_entityform_page */  /* Dashboard | Forms */ $handler->display->display_options['fields']['label']['label'] = '';
  /* manager_entityform_page */  /* Dashboard | Forms */ $handler->display->display_options['fields']['label']['element_label_colon'] = FALSE;
  /* manager_entityform_page */  /* Dashboard | Forms */ /* Field: Entityform Type: Machine-readable name */
  /* manager_entityform_page */  /* Dashboard | Forms */ $handler->display->display_options['fields']['type']['id'] = 'type';
  /* manager_entityform_page */  /* Dashboard | Forms */ $handler->display->display_options['fields']['type']['table'] = 'entityform_type';
  /* manager_entityform_page */  /* Dashboard | Forms */ $handler->display->display_options['fields']['type']['field'] = 'type';
  /* manager_entityform_page */  /* Dashboard | Forms */ $handler->display->display_options['fields']['type']['label'] = '';
  /* manager_entityform_page */  /* Dashboard | Forms */ $handler->display->display_options['fields']['type']['alter']['alter_text'] = TRUE;
  /* manager_entityform_page */  /* Dashboard | Forms */ $handler->display->display_options['fields']['type']['alter']['text'] = 'View submissions';
  /* manager_entityform_page */  /* Dashboard | Forms */ $handler->display->display_options['fields']['type']['alter']['make_link'] = TRUE;
  /* manager_entityform_page */  /* Dashboard | Forms */ $handler->display->display_options['fields']['type']['alter']['path'] = 'node/!1/dashboard/forms/submissions/[type]';
  /* manager_entityform_page */  /* Dashboard | Forms */ $handler->display->display_options['fields']['type']['element_label_colon'] = FALSE;
  /* manager_entityform_page */  /* Dashboard | Forms */ $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* manager_entityform_page */  /* Dashboard | Forms */ /* Contextual filter: Global: Null */
  /* manager_entityform_page */  /* Dashboard | Forms */ $handler->display->display_options['arguments']['null']['id'] = 'null';
  /* manager_entityform_page */  /* Dashboard | Forms */ $handler->display->display_options['arguments']['null']['table'] = 'views';
  /* manager_entityform_page */  /* Dashboard | Forms */ $handler->display->display_options['arguments']['null']['field'] = 'null';
  /* manager_entityform_page */  /* Dashboard | Forms */ $handler->display->display_options['arguments']['null']['default_action'] = 'default';
  /* manager_entityform_page */  /* Dashboard | Forms */ $handler->display->display_options['arguments']['null']['default_argument_type'] = 'node';
  /* manager_entityform_page */  /* Dashboard | Forms */ $handler->display->display_options['arguments']['null']['summary']['number_of_records'] = '0';
  /* manager_entityform_page */  /* Dashboard | Forms */ $handler->display->display_options['arguments']['null']['summary']['format'] = 'default_summary';
  /* manager_entityform_page */  /* Dashboard | Forms */ $handler->display->display_options['arguments']['null']['summary_options']['items_per_page'] = '25';
  /* manager_entityform_page */  /* Dashboard | Forms */ $handler->display->display_options['arguments']['null']['specify_validation'] = TRUE;
  /* manager_entityform_page */  /* Dashboard | Forms */ $handler->display->display_options['arguments']['null']['validate']['type'] = 'og';
  /* manager_entityform_page */  /* Dashboard | Forms */ $handler->display->display_options['arguments']['null']['validate']['fail'] = 'empty';
  /* manager_entityform_page */  /* Dashboard | Forms */ $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  /* manager_entityform_page */  /* Dashboard | Forms */ $handler->display->display_options['filter_groups']['groups'] = array(
  /* manager_entityform_page */  /* Dashboard | Forms */   1 => 'OR',
  /* manager_entityform_page */  /* Dashboard | Forms */ );
  /* manager_entityform_page */  /* Dashboard | Forms */ $handler->display->display_options['defaults']['filters'] = FALSE;
  /* manager_entityform_page */  /* Dashboard | Forms */ /* Filter criterion: Entityform Type: Machine-readable name */
  /* manager_entityform_page */  /* Dashboard | Forms */ $handler->display->display_options['filters']['type']['id'] = 'type';
  /* manager_entityform_page */  /* Dashboard | Forms */ $handler->display->display_options['filters']['type']['table'] = 'entityform_type';
  /* manager_entityform_page */  /* Dashboard | Forms */ $handler->display->display_options['filters']['type']['field'] = 'type';
  /* manager_entityform_page */  /* Dashboard | Forms */ $handler->display->display_options['filters']['type']['value'] = 'course_feedback';
  /* manager_entityform_page */  /* Dashboard | Forms */ $handler->display->display_options['filters']['type']['group'] = 1;
  /* manager_entityform_page */  /* Dashboard | Forms */ /* Filter criterion: Entityform Type: Machine-readable name */
  /* manager_entityform_page */  /* Dashboard | Forms */ $handler->display->display_options['filters']['type_1']['id'] = 'type_1';
  /* manager_entityform_page */  /* Dashboard | Forms */ $handler->display->display_options['filters']['type_1']['table'] = 'entityform_type';
  /* manager_entityform_page */  /* Dashboard | Forms */ $handler->display->display_options['filters']['type_1']['field'] = 'type';
  /* manager_entityform_page */  /* Dashboard | Forms */ $handler->display->display_options['filters']['type_1']['value'] = 'tech_support';
  /* manager_entityform_page */  /* Dashboard | Forms */ $handler->display->display_options['filters']['type_1']['group'] = 1;
  /* manager_entityform_page */  /* Dashboard | Forms */ /* Filter criterion: Entityform Type: Machine-readable name */
  /* manager_entityform_page */  /* Dashboard | Forms */ $handler->display->display_options['filters']['type_2']['id'] = 'type_2';
  /* manager_entityform_page */  /* Dashboard | Forms */ $handler->display->display_options['filters']['type_2']['table'] = 'entityform_type';
  /* manager_entityform_page */  /* Dashboard | Forms */ $handler->display->display_options['filters']['type_2']['field'] = 'type';
  /* manager_entityform_page */  /* Dashboard | Forms */ $handler->display->display_options['filters']['type_2']['value'] = 'group_feedback';
  /* manager_entityform_page */  /* Dashboard | Forms */ $handler->display->display_options['filters']['type_2']['group'] = 1;
  /* manager_entityform_page */  /* Dashboard | Forms */ /* Filter criterion: Entityform Type: Machine-readable name */
  /* manager_entityform_page */  /* Dashboard | Forms */ $handler->display->display_options['filters']['type_3']['id'] = 'type_3';
  /* manager_entityform_page */  /* Dashboard | Forms */ $handler->display->display_options['filters']['type_3']['table'] = 'entityform_type';
  /* manager_entityform_page */  /* Dashboard | Forms */ $handler->display->display_options['filters']['type_3']['field'] = 'type';
  /* manager_entityform_page */  /* Dashboard | Forms */ $handler->display->display_options['filters']['type_3']['value'] = 'event_feedback';
  /* manager_entityform_page */  /* Dashboard | Forms */ $handler->display->display_options['filters']['type_3']['group'] = 1;
  /* manager_entityform_page */  /* Dashboard | Forms */ $handler->display->display_options['path'] = 'node/%/dashboard/forms';

  /* manager_entityform_page */ /* Display: Attachment */
  /* manager_entityform_page */  /* Attachment */ $handler = $view->new_display('attachment', 'Attachment', 'attachment_2');
  /* manager_entityform_page */  /* Attachment */ $handler->display->display_options['pager']['type'] = 'some';
  /* manager_entityform_page */  /* Attachment */ $handler->display->display_options['defaults']['fields'] = FALSE;
  /* manager_entityform_page */  /* Attachment */ /* Field: Entityform Type: Label */
  /* manager_entityform_page */  /* Attachment */ $handler->display->display_options['fields']['label']['id'] = 'label';
  /* manager_entityform_page */  /* Attachment */ $handler->display->display_options['fields']['label']['table'] = 'entityform_type';
  /* manager_entityform_page */  /* Attachment */ $handler->display->display_options['fields']['label']['field'] = 'label';
  /* manager_entityform_page */  /* Attachment */ $handler->display->display_options['fields']['label']['label'] = 'Form';
  /* manager_entityform_page */  /* Attachment */ $handler->display->display_options['fields']['label']['element_label_colon'] = FALSE;
  /* manager_entityform_page */  /* Attachment */ /* Field: Entityform Type: Machine-readable name */
  /* manager_entityform_page */  /* Attachment */ $handler->display->display_options['fields']['type']['id'] = 'type';
  /* manager_entityform_page */  /* Attachment */ $handler->display->display_options['fields']['type']['table'] = 'entityform_type';
  /* manager_entityform_page */  /* Attachment */ $handler->display->display_options['fields']['type']['field'] = 'type';
  /* manager_entityform_page */  /* Attachment */ $handler->display->display_options['fields']['type']['label'] = 'Submissions';
  /* manager_entityform_page */  /* Attachment */ $handler->display->display_options['fields']['type']['alter']['alter_text'] = TRUE;
  /* manager_entityform_page */  /* Attachment */ $handler->display->display_options['fields']['type']['alter']['text'] = 'View submissions';
  /* manager_entityform_page */  /* Attachment */ $handler->display->display_options['fields']['type']['alter']['make_link'] = TRUE;
  /* manager_entityform_page */  /* Attachment */ $handler->display->display_options['fields']['type']['alter']['path'] = 'node/!1/dashboard/userforms/submissions/[type]';
  /* manager_entityform_page */  /* Attachment */ $handler->display->display_options['fields']['type']['element_label_colon'] = FALSE;
  /* manager_entityform_page */  /* Attachment */ $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* manager_entityform_page */  /* Attachment */ /* Contextual filter: Global: Null */
  /* manager_entityform_page */  /* Attachment */ $handler->display->display_options['arguments']['null']['id'] = 'null';
  /* manager_entityform_page */  /* Attachment */ $handler->display->display_options['arguments']['null']['table'] = 'views';
  /* manager_entityform_page */  /* Attachment */ $handler->display->display_options['arguments']['null']['field'] = 'null';
  /* manager_entityform_page */  /* Attachment */ $handler->display->display_options['arguments']['null']['default_action'] = 'default';
  /* manager_entityform_page */  /* Attachment */ $handler->display->display_options['arguments']['null']['default_argument_type'] = 'node';
  /* manager_entityform_page */  /* Attachment */ $handler->display->display_options['arguments']['null']['summary']['number_of_records'] = '0';
  /* manager_entityform_page */  /* Attachment */ $handler->display->display_options['arguments']['null']['summary']['format'] = 'default_summary';
  /* manager_entityform_page */  /* Attachment */ $handler->display->display_options['arguments']['null']['summary_options']['items_per_page'] = '25';
  /* manager_entityform_page */  /* Attachment */ $handler->display->display_options['arguments']['null']['specify_validation'] = TRUE;
  /* manager_entityform_page */  /* Attachment */ $handler->display->display_options['arguments']['null']['validate']['type'] = 'og';
  /* manager_entityform_page */  /* Attachment */ $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  /* manager_entityform_page */  /* Attachment */ $handler->display->display_options['filter_groups']['groups'] = array(
  /* manager_entityform_page */  /* Attachment */   1 => 'OR',
  /* manager_entityform_page */  /* Attachment */ );
  /* manager_entityform_page */  /* Attachment */ $handler->display->display_options['defaults']['filters'] = FALSE;
  /* manager_entityform_page */  /* Attachment */ /* Filter criterion: Entityform Type: Machine-readable name */
  /* manager_entityform_page */  /* Attachment */ $handler->display->display_options['filters']['type']['id'] = 'type';
  /* manager_entityform_page */  /* Attachment */ $handler->display->display_options['filters']['type']['table'] = 'entityform_type';
  /* manager_entityform_page */  /* Attachment */ $handler->display->display_options['filters']['type']['field'] = 'type';
  /* manager_entityform_page */  /* Attachment */ $handler->display->display_options['filters']['type']['value'] = 'userreg';
  /* manager_entityform_page */  /* Attachment */ $handler->display->display_options['filters']['type']['group'] = 1;
  /* manager_entityform_page */  /* Attachment */ /* Filter criterion: Entityform Type: Machine-readable name */
  /* manager_entityform_page */  /* Attachment */ $handler->display->display_options['filters']['type_1']['id'] = 'type_1';
  /* manager_entityform_page */  /* Attachment */ $handler->display->display_options['filters']['type_1']['table'] = 'entityform_type';
  /* manager_entityform_page */  /* Attachment */ $handler->display->display_options['filters']['type_1']['field'] = 'type';
  /* manager_entityform_page */  /* Attachment */ $handler->display->display_options['filters']['type_1']['value'] = 'join_org';
  /* manager_entityform_page */  /* Attachment */ $handler->display->display_options['filters']['type_1']['group'] = 1;
  /* manager_entityform_page */  /* Attachment */ $handler->display->display_options['displays'] = array(
  /* manager_entityform_page */  /* Attachment */   'page_1' => 'page_1',
  /* manager_entityform_page */  /* Attachment */   'default' => 0,
  /* manager_entityform_page */  /* Attachment */   'page' => 0,
  /* manager_entityform_page */  /* Attachment */ );
  /* manager_entityform_page */ $translatables['manager_entityform_page'] = array(
  /* manager_entityform_page */   t('Master'),
  /* manager_entityform_page */   t('Forms'),
  /* manager_entityform_page */   t('more'),
  /* manager_entityform_page */   t('Apply'),
  /* manager_entityform_page */   t('Reset'),
  /* manager_entityform_page */   t('Sort by'),
  /* manager_entityform_page */   t('Asc'),
  /* manager_entityform_page */   t('Desc'),
  /* manager_entityform_page */   t('Items per page'),
  /* manager_entityform_page */   t('- All -'),
  /* manager_entityform_page */   t('Offset'),
  /* manager_entityform_page */   t('« first'),
  /* manager_entityform_page */   t('‹ previous'),
  /* manager_entityform_page */   t('next ›'),
  /* manager_entityform_page */   t('last »'),
  /* manager_entityform_page */   t('Form'),
  /* manager_entityform_page */   t('Submissions'),
  /* manager_entityform_page */   t('View submissions'),
  /* manager_entityform_page */   t('Page'),
  /* manager_entityform_page */   t('Attachment'),
  /* manager_entityform_page */   t('Dashboard | Forms'),
  /* manager_entityform_page */   t('All'),
  /* manager_entityform_page */ );
  $export['manager_entityform_page'] = $view;

  /* manager_entityforms */ $view = new view();
  /* manager_entityforms */ $view->name = 'manager_entityforms';
  /* manager_entityforms */ $view->description = 'A list of all entityforms submissions to be as an admin report';
  /* manager_entityforms */ $view->tag = 'entityforms';
  /* manager_entityforms */ $view->base_table = 'entityform';
  /* manager_entityforms */ $view->human_name = 'Manager Entityforms';
  /* manager_entityforms */ $view->core = 7;
  /* manager_entityforms */ $view->api_version = '3.0';
  /* manager_entityforms */ $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* manager_entityforms */ /* Display: Master */
  /* manager_entityforms */  /* Master */ $handler = $view->new_display('default', 'Master', 'default');
  /* manager_entityforms */  /* Master */ $handler->display->display_options['title'] = 'List';
  /* manager_entityforms */  /* Master */ $handler->display->display_options['use_ajax'] = TRUE;
  /* manager_entityforms */  /* Master */ $handler->display->display_options['use_more_always'] = FALSE;
  /* manager_entityforms */  /* Master */ $handler->display->display_options['access']['type'] = 'gn2_og_any_hr_manager_access';
  /* manager_entityforms */  /* Master */ $handler->display->display_options['cache']['type'] = 'none';
  /* manager_entityforms */  /* Master */ $handler->display->display_options['query']['type'] = 'views_query';
  /* manager_entityforms */  /* Master */ $handler->display->display_options['query']['options']['disable_sql_rewrite'] = TRUE;
  /* manager_entityforms */  /* Master */ $handler->display->display_options['exposed_form']['type'] = 'basic';
  /* manager_entityforms */  /* Master */ $handler->display->display_options['pager']['type'] = 'full';
  /* manager_entityforms */  /* Master */ $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  /* manager_entityforms */  /* Master */ $handler->display->display_options['pager']['options']['offset'] = '0';
  /* manager_entityforms */  /* Master */ $handler->display->display_options['pager']['options']['id'] = '0';
  /* manager_entityforms */  /* Master */ $handler->display->display_options['style_plugin'] = 'table';
  /* manager_entityforms */  /* Master */ $handler->display->display_options['style_options']['columns'] = array(
  /* manager_entityforms */  /* Master */   'name' => 'name',
  /* manager_entityforms */  /* Master */   'entityform_id' => 'entityform_id',
  /* manager_entityforms */  /* Master */ );
  /* manager_entityforms */  /* Master */ $handler->display->display_options['style_options']['default'] = '-1';
  /* manager_entityforms */  /* Master */ $handler->display->display_options['style_options']['info'] = array(
  /* manager_entityforms */  /* Master */   'name' => array(
  /* manager_entityforms */  /* Master */     'sortable' => 0,
  /* manager_entityforms */  /* Master */     'default_sort_order' => 'asc',
  /* manager_entityforms */  /* Master */     'align' => '',
  /* manager_entityforms */  /* Master */     'separator' => '',
  /* manager_entityforms */  /* Master */   ),
  /* manager_entityforms */  /* Master */   'entityform_id' => array(
  /* manager_entityforms */  /* Master */     'sortable' => 0,
  /* manager_entityforms */  /* Master */     'default_sort_order' => 'asc',
  /* manager_entityforms */  /* Master */     'align' => '',
  /* manager_entityforms */  /* Master */     'separator' => '',
  /* manager_entityforms */  /* Master */   ),
  /* manager_entityforms */  /* Master */ );
  /* manager_entityforms */  /* Master */ /* No results behavior: Global: Text area */
  /* manager_entityforms */  /* Master */ $handler->display->display_options['empty']['area']['id'] = 'area';
  /* manager_entityforms */  /* Master */ $handler->display->display_options['empty']['area']['table'] = 'views';
  /* manager_entityforms */  /* Master */ $handler->display->display_options['empty']['area']['field'] = 'area';
  /* manager_entityforms */  /* Master */ $handler->display->display_options['empty']['area']['label'] = 'Empty ';
  /* manager_entityforms */  /* Master */ $handler->display->display_options['empty']['area']['content'] = 'No form submissions available.';
  /* manager_entityforms */  /* Master */ /* Relationship: Entityform Submission: Uid */
  /* manager_entityforms */  /* Master */ $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  /* manager_entityforms */  /* Master */ $handler->display->display_options['relationships']['uid']['table'] = 'entityform';
  /* manager_entityforms */  /* Master */ $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* manager_entityforms */  /* Master */ /* Field: Bulk operations: Entityform Submission */
  /* manager_entityforms */  /* Master */ $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  /* manager_entityforms */  /* Master */ $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'entityform';
  /* manager_entityforms */  /* Master */ $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  /* manager_entityforms */  /* Master */ $handler->display->display_options['fields']['views_bulk_operations']['label'] = '';
  /* manager_entityforms */  /* Master */ $handler->display->display_options['fields']['views_bulk_operations']['element_label_colon'] = FALSE;
  /* manager_entityforms */  /* Master */ $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '1';
  /* manager_entityforms */  /* Master */ $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  /* manager_entityforms */  /* Master */ $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  /* manager_entityforms */  /* Master */ $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  /* manager_entityforms */  /* Master */ $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
  /* manager_entityforms */  /* Master */   'action::views_bulk_operations_delete_item' => array(
  /* manager_entityforms */  /* Master */     'selected' => 1,
  /* manager_entityforms */  /* Master */     'skip_confirmation' => 0,
  /* manager_entityforms */  /* Master */     'override_label' => 1,
  /* manager_entityforms */  /* Master */     'label' => 'Delete Submissions',
  /* manager_entityforms */  /* Master */     'postpone_processing' => 0,
  /* manager_entityforms */  /* Master */   ),
  /* manager_entityforms */  /* Master */ );
  /* manager_entityforms */  /* Master */ /* Field: User: Name */
  /* manager_entityforms */  /* Master */ $handler->display->display_options['fields']['name']['id'] = 'name';
  /* manager_entityforms */  /* Master */ $handler->display->display_options['fields']['name']['table'] = 'users';
  /* manager_entityforms */  /* Master */ $handler->display->display_options['fields']['name']['field'] = 'name';
  /* manager_entityforms */  /* Master */ $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  /* manager_entityforms */  /* Master */ $handler->display->display_options['fields']['name']['label'] = 'Submitter';
  /* manager_entityforms */  /* Master */ /* Field: Entityform Submission: Date submitted */
  /* manager_entityforms */  /* Master */ $handler->display->display_options['fields']['created']['id'] = 'created';
  /* manager_entityforms */  /* Master */ $handler->display->display_options['fields']['created']['table'] = 'entityform';
  /* manager_entityforms */  /* Master */ $handler->display->display_options['fields']['created']['field'] = 'created';
  /* manager_entityforms */  /* Master */ $handler->display->display_options['fields']['created']['date_format'] = 'medium';
  /* manager_entityforms */  /* Master */ /* Field: Entityform Submission: Date changed */
  /* manager_entityforms */  /* Master */ $handler->display->display_options['fields']['changed']['id'] = 'changed';
  /* manager_entityforms */  /* Master */ $handler->display->display_options['fields']['changed']['table'] = 'entityform';
  /* manager_entityforms */  /* Master */ $handler->display->display_options['fields']['changed']['field'] = 'changed';
  /* manager_entityforms */  /* Master */ $handler->display->display_options['fields']['changed']['hide_alter_empty'] = FALSE;
  /* manager_entityforms */  /* Master */ /* Field: Entityform Submission: Link */
  /* manager_entityforms */  /* Master */ $handler->display->display_options['fields']['link_entityform']['id'] = 'link_entityform';
  /* manager_entityforms */  /* Master */ $handler->display->display_options['fields']['link_entityform']['table'] = 'entityform';
  /* manager_entityforms */  /* Master */ $handler->display->display_options['fields']['link_entityform']['field'] = 'link_entityform';
  /* manager_entityforms */  /* Master */ $handler->display->display_options['fields']['link_entityform']['label'] = '';
  /* manager_entityforms */  /* Master */ $handler->display->display_options['fields']['link_entityform']['element_label_colon'] = FALSE;
  /* manager_entityforms */  /* Master */ $handler->display->display_options['fields']['link_entityform']['text'] = 'View';
  /* manager_entityforms */  /* Master */ /* Sort criterion: Entityform Submission: Date submitted */
  /* manager_entityforms */  /* Master */ $handler->display->display_options['sorts']['created']['id'] = 'created';
  /* manager_entityforms */  /* Master */ $handler->display->display_options['sorts']['created']['table'] = 'entityform';
  /* manager_entityforms */  /* Master */ $handler->display->display_options['sorts']['created']['field'] = 'created';
  /* manager_entityforms */  /* Master */ $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* manager_entityforms */  /* Master */ /* Contextual filter: Entityform Submission: Entityform Type */
  /* manager_entityforms */  /* Master */ $handler->display->display_options['arguments']['type']['id'] = 'type';
  /* manager_entityforms */  /* Master */ $handler->display->display_options['arguments']['type']['table'] = 'entityform';
  /* manager_entityforms */  /* Master */ $handler->display->display_options['arguments']['type']['field'] = 'type';
  /* manager_entityforms */  /* Master */ $handler->display->display_options['arguments']['type']['default_action'] = 'not found';
  /* manager_entityforms */  /* Master */ $handler->display->display_options['arguments']['type']['title_enable'] = TRUE;
  /* manager_entityforms */  /* Master */ $handler->display->display_options['arguments']['type']['title'] = 'Submissions for %1';
  /* manager_entityforms */  /* Master */ $handler->display->display_options['arguments']['type']['default_argument_type'] = 'fixed';
  /* manager_entityforms */  /* Master */ $handler->display->display_options['arguments']['type']['summary']['number_of_records'] = '0';
  /* manager_entityforms */  /* Master */ $handler->display->display_options['arguments']['type']['summary']['format'] = 'default_summary';
  /* manager_entityforms */  /* Master */ $handler->display->display_options['arguments']['type']['summary_options']['items_per_page'] = '25';
  /* manager_entityforms */  /* Master */ $handler->display->display_options['arguments']['type']['limit'] = '0';
  /* manager_entityforms */  /* Master */ /* Filter criterion: Entityform Submission: Date submitted */
  /* manager_entityforms */  /* Master */ $handler->display->display_options['filters']['created']['id'] = 'created';
  /* manager_entityforms */  /* Master */ $handler->display->display_options['filters']['created']['table'] = 'entityform';
  /* manager_entityforms */  /* Master */ $handler->display->display_options['filters']['created']['field'] = 'created';
  /* manager_entityforms */  /* Master */ $handler->display->display_options['filters']['created']['operator'] = '>';
  /* manager_entityforms */  /* Master */ $handler->display->display_options['filters']['created']['exposed'] = TRUE;
  /* manager_entityforms */  /* Master */ $handler->display->display_options['filters']['created']['expose']['operator_id'] = 'created_op';
  /* manager_entityforms */  /* Master */ $handler->display->display_options['filters']['created']['expose']['label'] = 'Date submitted';
  /* manager_entityforms */  /* Master */ $handler->display->display_options['filters']['created']['expose']['use_operator'] = TRUE;
  /* manager_entityforms */  /* Master */ $handler->display->display_options['filters']['created']['expose']['operator'] = 'created_op';
  /* manager_entityforms */  /* Master */ $handler->display->display_options['filters']['created']['expose']['identifier'] = 'created';
  /* manager_entityforms */  /* Master */ /* Filter criterion: Entityform Submission: Draft */
  /* manager_entityforms */  /* Master */ $handler->display->display_options['filters']['draft']['id'] = 'draft';
  /* manager_entityforms */  /* Master */ $handler->display->display_options['filters']['draft']['table'] = 'entityform';
  /* manager_entityforms */  /* Master */ $handler->display->display_options['filters']['draft']['field'] = 'draft';
  /* manager_entityforms */  /* Master */ $handler->display->display_options['filters']['draft']['operator'] = '!=';
  /* manager_entityforms */  /* Master */ $handler->display->display_options['filters']['draft']['value']['value'] = '1';

  /* manager_entityforms */ /* Display: Submissions list page */
  /* manager_entityforms */  /* Submissions list page */ $handler = $view->new_display('page', 'Submissions list page', 'entityforms_admin_page');
  /* manager_entityforms */  /* Submissions list page */ $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* manager_entityforms */  /* Submissions list page */ /* Relationship: Entityform Submission: Uid */
  /* manager_entityforms */  /* Submissions list page */ $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  /* manager_entityforms */  /* Submissions list page */ $handler->display->display_options['relationships']['uid']['table'] = 'entityform';
  /* manager_entityforms */  /* Submissions list page */ $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* manager_entityforms */  /* Submissions list page */ $handler->display->display_options['defaults']['fields'] = FALSE;
  /* manager_entityforms */  /* Submissions list page */ /* Field: Bulk operations: Entityform Submission */
  /* manager_entityforms */  /* Submissions list page */ $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  /* manager_entityforms */  /* Submissions list page */ $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'entityform';
  /* manager_entityforms */  /* Submissions list page */ $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  /* manager_entityforms */  /* Submissions list page */ $handler->display->display_options['fields']['views_bulk_operations']['label'] = '';
  /* manager_entityforms */  /* Submissions list page */ $handler->display->display_options['fields']['views_bulk_operations']['element_label_colon'] = FALSE;
  /* manager_entityforms */  /* Submissions list page */ $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '1';
  /* manager_entityforms */  /* Submissions list page */ $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  /* manager_entityforms */  /* Submissions list page */ $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  /* manager_entityforms */  /* Submissions list page */ $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  /* manager_entityforms */  /* Submissions list page */ $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
  /* manager_entityforms */  /* Submissions list page */   'action::views_bulk_operations_delete_item' => array(
  /* manager_entityforms */  /* Submissions list page */     'selected' => 1,
  /* manager_entityforms */  /* Submissions list page */     'skip_confirmation' => 0,
  /* manager_entityforms */  /* Submissions list page */     'override_label' => 1,
  /* manager_entityforms */  /* Submissions list page */     'label' => 'Delete Submissions',
  /* manager_entityforms */  /* Submissions list page */     'postpone_processing' => 0,
  /* manager_entityforms */  /* Submissions list page */   ),
  /* manager_entityforms */  /* Submissions list page */ );
  /* manager_entityforms */  /* Submissions list page */ /* Field: Entityform Submission: Groups audience */
  /* manager_entityforms */  /* Submissions list page */ $handler->display->display_options['fields']['og_entityform_group_ref']['id'] = 'og_entityform_group_ref';
  /* manager_entityforms */  /* Submissions list page */ $handler->display->display_options['fields']['og_entityform_group_ref']['table'] = 'og_membership';
  /* manager_entityforms */  /* Submissions list page */ $handler->display->display_options['fields']['og_entityform_group_ref']['field'] = 'og_entityform_group_ref';
  /* manager_entityforms */  /* Submissions list page */ $handler->display->display_options['fields']['og_entityform_group_ref']['label'] = 'Group';
  /* manager_entityforms */  /* Submissions list page */ $handler->display->display_options['fields']['og_entityform_group_ref']['settings'] = array(
  /* manager_entityforms */  /* Submissions list page */   'link' => 1,
  /* manager_entityforms */  /* Submissions list page */   'field_formatter_class' => '',
  /* manager_entityforms */  /* Submissions list page */ );
  /* manager_entityforms */  /* Submissions list page */ $handler->display->display_options['fields']['og_entityform_group_ref']['delta_offset'] = '0';
  /* manager_entityforms */  /* Submissions list page */ /* Field: User: Name */
  /* manager_entityforms */  /* Submissions list page */ $handler->display->display_options['fields']['name']['id'] = 'name';
  /* manager_entityforms */  /* Submissions list page */ $handler->display->display_options['fields']['name']['table'] = 'users';
  /* manager_entityforms */  /* Submissions list page */ $handler->display->display_options['fields']['name']['field'] = 'name';
  /* manager_entityforms */  /* Submissions list page */ $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  /* manager_entityforms */  /* Submissions list page */ $handler->display->display_options['fields']['name']['label'] = 'Submitter';
  /* manager_entityforms */  /* Submissions list page */ /* Field: Entityform Submission: Date submitted */
  /* manager_entityforms */  /* Submissions list page */ $handler->display->display_options['fields']['created']['id'] = 'created';
  /* manager_entityforms */  /* Submissions list page */ $handler->display->display_options['fields']['created']['table'] = 'entityform';
  /* manager_entityforms */  /* Submissions list page */ $handler->display->display_options['fields']['created']['field'] = 'created';
  /* manager_entityforms */  /* Submissions list page */ $handler->display->display_options['fields']['created']['date_format'] = 'medium';
  /* manager_entityforms */  /* Submissions list page */ /* Field: Entityform Submission: Date changed */
  /* manager_entityforms */  /* Submissions list page */ $handler->display->display_options['fields']['changed']['id'] = 'changed';
  /* manager_entityforms */  /* Submissions list page */ $handler->display->display_options['fields']['changed']['table'] = 'entityform';
  /* manager_entityforms */  /* Submissions list page */ $handler->display->display_options['fields']['changed']['field'] = 'changed';
  /* manager_entityforms */  /* Submissions list page */ $handler->display->display_options['fields']['changed']['hide_alter_empty'] = FALSE;
  /* manager_entityforms */  /* Submissions list page */ /* Field: Entityform Submission: Link */
  /* manager_entityforms */  /* Submissions list page */ $handler->display->display_options['fields']['link_entityform']['id'] = 'link_entityform';
  /* manager_entityforms */  /* Submissions list page */ $handler->display->display_options['fields']['link_entityform']['table'] = 'entityform';
  /* manager_entityforms */  /* Submissions list page */ $handler->display->display_options['fields']['link_entityform']['field'] = 'link_entityform';
  /* manager_entityforms */  /* Submissions list page */ $handler->display->display_options['fields']['link_entityform']['label'] = '';
  /* manager_entityforms */  /* Submissions list page */ $handler->display->display_options['fields']['link_entityform']['element_label_colon'] = FALSE;
  /* manager_entityforms */  /* Submissions list page */ $handler->display->display_options['fields']['link_entityform']['text'] = 'View';
  /* manager_entityforms */  /* Submissions list page */ $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* manager_entityforms */  /* Submissions list page */ /* Contextual filter: Entityform Submission: Entityform Type */
  /* manager_entityforms */  /* Submissions list page */ $handler->display->display_options['arguments']['type']['id'] = 'type';
  /* manager_entityforms */  /* Submissions list page */ $handler->display->display_options['arguments']['type']['table'] = 'entityform';
  /* manager_entityforms */  /* Submissions list page */ $handler->display->display_options['arguments']['type']['field'] = 'type';
  /* manager_entityforms */  /* Submissions list page */ $handler->display->display_options['arguments']['type']['default_action'] = 'not found';
  /* manager_entityforms */  /* Submissions list page */ $handler->display->display_options['arguments']['type']['title_enable'] = TRUE;
  /* manager_entityforms */  /* Submissions list page */ $handler->display->display_options['arguments']['type']['title'] = 'Submissions for %1';
  /* manager_entityforms */  /* Submissions list page */ $handler->display->display_options['arguments']['type']['default_argument_type'] = 'fixed';
  /* manager_entityforms */  /* Submissions list page */ $handler->display->display_options['arguments']['type']['summary']['number_of_records'] = '0';
  /* manager_entityforms */  /* Submissions list page */ $handler->display->display_options['arguments']['type']['summary']['format'] = 'default_summary';
  /* manager_entityforms */  /* Submissions list page */ $handler->display->display_options['arguments']['type']['summary_options']['items_per_page'] = '25';
  /* manager_entityforms */  /* Submissions list page */ $handler->display->display_options['arguments']['type']['limit'] = '0';
  /* manager_entityforms */  /* Submissions list page */ $handler->display->display_options['path'] = 'admin/manage/form/submissions/%/list';
  /* manager_entityforms */  /* Submissions list page */ $handler->display->display_options['menu']['type'] = 'default tab';
  /* manager_entityforms */  /* Submissions list page */ $handler->display->display_options['menu']['title'] = 'List';
  /* manager_entityforms */  /* Submissions list page */ $handler->display->display_options['menu']['description'] = 'View Submissions for all Entityforms';
  /* manager_entityforms */  /* Submissions list page */ $handler->display->display_options['menu']['weight'] = '0';
  /* manager_entityforms */  /* Submissions list page */ $handler->display->display_options['menu']['name'] = 'management';
  /* manager_entityforms */  /* Submissions list page */ $handler->display->display_options['menu']['context'] = 0;
  /* manager_entityforms */  /* Submissions list page */ $handler->display->display_options['tab_options']['type'] = 'normal';
  /* manager_entityforms */  /* Submissions list page */ $handler->display->display_options['tab_options']['title'] = 'Submissions';
  /* manager_entityforms */  /* Submissions list page */ $handler->display->display_options['tab_options']['weight'] = '0';
  /* manager_entityforms */  /* Submissions list page */ $handler->display->display_options['tab_options']['name'] = 'management';

  /* manager_entityforms */ /* Display: Submissions XML Data export */
  /* manager_entityforms */  /* Submissions XML Data export */ $handler = $view->new_display('views_data_export', 'Submissions XML Data export', 'autofields_xml');
  /* manager_entityforms */  /* Submissions XML Data export */ $handler->display->display_options['pager']['type'] = 'none';
  /* manager_entityforms */  /* Submissions XML Data export */ $handler->display->display_options['pager']['options']['offset'] = '0';
  /* manager_entityforms */  /* Submissions XML Data export */ $handler->display->display_options['style_plugin'] = 'views_data_export_xml';
  /* manager_entityforms */  /* Submissions XML Data export */ $handler->display->display_options['style_options']['provide_file'] = 1;
  /* manager_entityforms */  /* Submissions XML Data export */ $handler->display->display_options['style_options']['filename'] = '%1-title_submissions_%timestamp-full.xml';
  /* manager_entityforms */  /* Submissions XML Data export */ $handler->display->display_options['style_options']['parent_sort'] = 1;
  /* manager_entityforms */  /* Submissions XML Data export */ $handler->display->display_options['style_options']['transform'] = 1;
  /* manager_entityforms */  /* Submissions XML Data export */ $handler->display->display_options['style_options']['root_node'] = 'entityforms';
  /* manager_entityforms */  /* Submissions XML Data export */ $handler->display->display_options['style_options']['item_node'] = 'entityform';
  /* manager_entityforms */  /* Submissions XML Data export */ $handler->display->display_options['defaults']['fields'] = FALSE;
  /* manager_entityforms */  /* Submissions XML Data export */ /* Field: Entityform Submission: Groups audience */
  /* manager_entityforms */  /* Submissions XML Data export */ $handler->display->display_options['fields']['og_entityform_group_ref']['id'] = 'og_entityform_group_ref';
  /* manager_entityforms */  /* Submissions XML Data export */ $handler->display->display_options['fields']['og_entityform_group_ref']['table'] = 'og_membership';
  /* manager_entityforms */  /* Submissions XML Data export */ $handler->display->display_options['fields']['og_entityform_group_ref']['field'] = 'og_entityform_group_ref';
  /* manager_entityforms */  /* Submissions XML Data export */ $handler->display->display_options['fields']['og_entityform_group_ref']['label'] = 'Group';
  /* manager_entityforms */  /* Submissions XML Data export */ $handler->display->display_options['fields']['og_entityform_group_ref']['settings'] = array(
  /* manager_entityforms */  /* Submissions XML Data export */   'link' => 0,
  /* manager_entityforms */  /* Submissions XML Data export */   'field_formatter_class' => '',
  /* manager_entityforms */  /* Submissions XML Data export */ );
  /* manager_entityforms */  /* Submissions XML Data export */ $handler->display->display_options['fields']['og_entityform_group_ref']['delta_offset'] = '0';
  /* manager_entityforms */  /* Submissions XML Data export */ /* Field: User: Name */
  /* manager_entityforms */  /* Submissions XML Data export */ $handler->display->display_options['fields']['name']['id'] = 'name';
  /* manager_entityforms */  /* Submissions XML Data export */ $handler->display->display_options['fields']['name']['table'] = 'users';
  /* manager_entityforms */  /* Submissions XML Data export */ $handler->display->display_options['fields']['name']['field'] = 'name';
  /* manager_entityforms */  /* Submissions XML Data export */ $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  /* manager_entityforms */  /* Submissions XML Data export */ $handler->display->display_options['fields']['name']['label'] = 'Submitter';
  /* manager_entityforms */  /* Submissions XML Data export */ /* Field: Entityform Submission: Date submitted */
  /* manager_entityforms */  /* Submissions XML Data export */ $handler->display->display_options['fields']['created']['id'] = 'created';
  /* manager_entityforms */  /* Submissions XML Data export */ $handler->display->display_options['fields']['created']['table'] = 'entityform';
  /* manager_entityforms */  /* Submissions XML Data export */ $handler->display->display_options['fields']['created']['field'] = 'created';
  /* manager_entityforms */  /* Submissions XML Data export */ $handler->display->display_options['fields']['created']['date_format'] = 'medium';
  /* manager_entityforms */  /* Submissions XML Data export */ /* Field: Entityform Submission: Date changed */
  /* manager_entityforms */  /* Submissions XML Data export */ $handler->display->display_options['fields']['changed']['id'] = 'changed';
  /* manager_entityforms */  /* Submissions XML Data export */ $handler->display->display_options['fields']['changed']['table'] = 'entityform';
  /* manager_entityforms */  /* Submissions XML Data export */ $handler->display->display_options['fields']['changed']['field'] = 'changed';
  /* manager_entityforms */  /* Submissions XML Data export */ $handler->display->display_options['fields']['changed']['hide_alter_empty'] = FALSE;
  /* manager_entityforms */  /* Submissions XML Data export */ $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* manager_entityforms */  /* Submissions XML Data export */ /* Contextual filter: Entityform Submission: Entityform Type */
  /* manager_entityforms */  /* Submissions XML Data export */ $handler->display->display_options['arguments']['type']['id'] = 'type';
  /* manager_entityforms */  /* Submissions XML Data export */ $handler->display->display_options['arguments']['type']['table'] = 'entityform';
  /* manager_entityforms */  /* Submissions XML Data export */ $handler->display->display_options['arguments']['type']['field'] = 'type';
  /* manager_entityforms */  /* Submissions XML Data export */ $handler->display->display_options['arguments']['type']['title_enable'] = TRUE;
  /* manager_entityforms */  /* Submissions XML Data export */ $handler->display->display_options['arguments']['type']['title'] = 'entityform_submissions_%1';
  /* manager_entityforms */  /* Submissions XML Data export */ $handler->display->display_options['arguments']['type']['default_argument_type'] = 'fixed';
  /* manager_entityforms */  /* Submissions XML Data export */ $handler->display->display_options['arguments']['type']['summary']['number_of_records'] = '0';
  /* manager_entityforms */  /* Submissions XML Data export */ $handler->display->display_options['arguments']['type']['summary']['format'] = 'default_summary';
  /* manager_entityforms */  /* Submissions XML Data export */ $handler->display->display_options['arguments']['type']['summary_options']['items_per_page'] = '25';
  /* manager_entityforms */  /* Submissions XML Data export */ $handler->display->display_options['arguments']['type']['limit'] = '0';
  /* manager_entityforms */  /* Submissions XML Data export */ $handler->display->display_options['path'] = 'admin/manage/form/submissions/%/xml';
  /* manager_entityforms */  /* Submissions XML Data export */ $handler->display->display_options['displays'] = array(
  /* manager_entityforms */  /* Submissions XML Data export */   'entityforms_admin_page' => 'entityforms_admin_page',
  /* manager_entityforms */  /* Submissions XML Data export */   'autofields_table' => 'autofields_table',
  /* manager_entityforms */  /* Submissions XML Data export */   'block_1' => 'block_1',
  /* manager_entityforms */  /* Submissions XML Data export */   'default' => 0,
  /* manager_entityforms */  /* Submissions XML Data export */ );

  /* manager_entityforms */ /* Display: Submissions CSV Data export */
  /* manager_entityforms */  /* Submissions CSV Data export */ $handler = $view->new_display('views_data_export', 'Submissions CSV Data export', 'autofields_csv');
  /* manager_entityforms */  /* Submissions CSV Data export */ $handler->display->display_options['pager']['type'] = 'none';
  /* manager_entityforms */  /* Submissions CSV Data export */ $handler->display->display_options['pager']['options']['offset'] = '0';
  /* manager_entityforms */  /* Submissions CSV Data export */ $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  /* manager_entityforms */  /* Submissions CSV Data export */ $handler->display->display_options['style_options']['provide_file'] = 1;
  /* manager_entityforms */  /* Submissions CSV Data export */ $handler->display->display_options['style_options']['filename'] = '%1-title_submissions_%timestamp-full.csv';
  /* manager_entityforms */  /* Submissions CSV Data export */ $handler->display->display_options['style_options']['parent_sort'] = 1;
  /* manager_entityforms */  /* Submissions CSV Data export */ $handler->display->display_options['style_options']['quote'] = 1;
  /* manager_entityforms */  /* Submissions CSV Data export */ $handler->display->display_options['style_options']['trim'] = 0;
  /* manager_entityforms */  /* Submissions CSV Data export */ $handler->display->display_options['style_options']['replace_newlines'] = 0;
  /* manager_entityforms */  /* Submissions CSV Data export */ $handler->display->display_options['style_options']['header'] = 1;
  /* manager_entityforms */  /* Submissions CSV Data export */ $handler->display->display_options['style_options']['encoding'] = 'ASCII';
  /* manager_entityforms */  /* Submissions CSV Data export */ $handler->display->display_options['defaults']['fields'] = FALSE;
  /* manager_entityforms */  /* Submissions CSV Data export */ /* Field: Entityform Submission: Groups audience */
  /* manager_entityforms */  /* Submissions CSV Data export */ $handler->display->display_options['fields']['og_entityform_group_ref']['id'] = 'og_entityform_group_ref';
  /* manager_entityforms */  /* Submissions CSV Data export */ $handler->display->display_options['fields']['og_entityform_group_ref']['table'] = 'og_membership';
  /* manager_entityforms */  /* Submissions CSV Data export */ $handler->display->display_options['fields']['og_entityform_group_ref']['field'] = 'og_entityform_group_ref';
  /* manager_entityforms */  /* Submissions CSV Data export */ $handler->display->display_options['fields']['og_entityform_group_ref']['label'] = 'Group';
  /* manager_entityforms */  /* Submissions CSV Data export */ $handler->display->display_options['fields']['og_entityform_group_ref']['settings'] = array(
  /* manager_entityforms */  /* Submissions CSV Data export */   'link' => 0,
  /* manager_entityforms */  /* Submissions CSV Data export */   'field_formatter_class' => '',
  /* manager_entityforms */  /* Submissions CSV Data export */ );
  /* manager_entityforms */  /* Submissions CSV Data export */ $handler->display->display_options['fields']['og_entityform_group_ref']['delta_offset'] = '0';
  /* manager_entityforms */  /* Submissions CSV Data export */ /* Field: User: Name */
  /* manager_entityforms */  /* Submissions CSV Data export */ $handler->display->display_options['fields']['name']['id'] = 'name';
  /* manager_entityforms */  /* Submissions CSV Data export */ $handler->display->display_options['fields']['name']['table'] = 'users';
  /* manager_entityforms */  /* Submissions CSV Data export */ $handler->display->display_options['fields']['name']['field'] = 'name';
  /* manager_entityforms */  /* Submissions CSV Data export */ $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  /* manager_entityforms */  /* Submissions CSV Data export */ $handler->display->display_options['fields']['name']['label'] = 'Submitter';
  /* manager_entityforms */  /* Submissions CSV Data export */ /* Field: Entityform Submission: Date submitted */
  /* manager_entityforms */  /* Submissions CSV Data export */ $handler->display->display_options['fields']['created']['id'] = 'created';
  /* manager_entityforms */  /* Submissions CSV Data export */ $handler->display->display_options['fields']['created']['table'] = 'entityform';
  /* manager_entityforms */  /* Submissions CSV Data export */ $handler->display->display_options['fields']['created']['field'] = 'created';
  /* manager_entityforms */  /* Submissions CSV Data export */ $handler->display->display_options['fields']['created']['date_format'] = 'medium';
  /* manager_entityforms */  /* Submissions CSV Data export */ /* Field: Entityform Submission: Date changed */
  /* manager_entityforms */  /* Submissions CSV Data export */ $handler->display->display_options['fields']['changed']['id'] = 'changed';
  /* manager_entityforms */  /* Submissions CSV Data export */ $handler->display->display_options['fields']['changed']['table'] = 'entityform';
  /* manager_entityforms */  /* Submissions CSV Data export */ $handler->display->display_options['fields']['changed']['field'] = 'changed';
  /* manager_entityforms */  /* Submissions CSV Data export */ $handler->display->display_options['fields']['changed']['hide_alter_empty'] = FALSE;
  /* manager_entityforms */  /* Submissions CSV Data export */ $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* manager_entityforms */  /* Submissions CSV Data export */ /* Contextual filter: Entityform Submission: Entityform Type */
  /* manager_entityforms */  /* Submissions CSV Data export */ $handler->display->display_options['arguments']['type']['id'] = 'type';
  /* manager_entityforms */  /* Submissions CSV Data export */ $handler->display->display_options['arguments']['type']['table'] = 'entityform';
  /* manager_entityforms */  /* Submissions CSV Data export */ $handler->display->display_options['arguments']['type']['field'] = 'type';
  /* manager_entityforms */  /* Submissions CSV Data export */ $handler->display->display_options['arguments']['type']['title_enable'] = TRUE;
  /* manager_entityforms */  /* Submissions CSV Data export */ $handler->display->display_options['arguments']['type']['title'] = 'entityform_submissions_%1';
  /* manager_entityforms */  /* Submissions CSV Data export */ $handler->display->display_options['arguments']['type']['default_argument_type'] = 'fixed';
  /* manager_entityforms */  /* Submissions CSV Data export */ $handler->display->display_options['arguments']['type']['summary']['number_of_records'] = '0';
  /* manager_entityforms */  /* Submissions CSV Data export */ $handler->display->display_options['arguments']['type']['summary']['format'] = 'default_summary';
  /* manager_entityforms */  /* Submissions CSV Data export */ $handler->display->display_options['arguments']['type']['summary_options']['items_per_page'] = '25';
  /* manager_entityforms */  /* Submissions CSV Data export */ $handler->display->display_options['arguments']['type']['limit'] = '0';
  /* manager_entityforms */  /* Submissions CSV Data export */ $handler->display->display_options['path'] = 'admin/manage/form/submissions/%/csv';
  /* manager_entityforms */  /* Submissions CSV Data export */ $handler->display->display_options['displays'] = array(
  /* manager_entityforms */  /* Submissions CSV Data export */   'entityforms_admin_page' => 'entityforms_admin_page',
  /* manager_entityforms */  /* Submissions CSV Data export */   'autofields_table' => 'autofields_table',
  /* manager_entityforms */  /* Submissions CSV Data export */   'default' => 0,
  /* manager_entityforms */  /* Submissions CSV Data export */ );

  /* manager_entityforms */ /* Display: Submissions table page */
  /* manager_entityforms */  /* Submissions table page */ $handler = $view->new_display('page', 'Submissions table page', 'autofields_table');
  /* manager_entityforms */  /* Submissions table page */ $handler->display->display_options['enabled'] = FALSE;
  /* manager_entityforms */  /* Submissions table page */ $handler->display->display_options['defaults']['fields'] = FALSE;
  /* manager_entityforms */  /* Submissions table page */ /* Field: Bulk operations: Entityform Submission */
  /* manager_entityforms */  /* Submissions table page */ $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  /* manager_entityforms */  /* Submissions table page */ $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'entityform';
  /* manager_entityforms */  /* Submissions table page */ $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  /* manager_entityforms */  /* Submissions table page */ $handler->display->display_options['fields']['views_bulk_operations']['label'] = '';
  /* manager_entityforms */  /* Submissions table page */ $handler->display->display_options['fields']['views_bulk_operations']['element_label_colon'] = FALSE;
  /* manager_entityforms */  /* Submissions table page */ $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '1';
  /* manager_entityforms */  /* Submissions table page */ $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  /* manager_entityforms */  /* Submissions table page */ $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  /* manager_entityforms */  /* Submissions table page */ $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  /* manager_entityforms */  /* Submissions table page */ $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
  /* manager_entityforms */  /* Submissions table page */   'action::views_bulk_operations_delete_item' => array(
  /* manager_entityforms */  /* Submissions table page */     'selected' => 1,
  /* manager_entityforms */  /* Submissions table page */     'skip_confirmation' => 0,
  /* manager_entityforms */  /* Submissions table page */     'override_label' => 1,
  /* manager_entityforms */  /* Submissions table page */     'label' => 'Delete Submissions',
  /* manager_entityforms */  /* Submissions table page */     'postpone_processing' => 0,
  /* manager_entityforms */  /* Submissions table page */   ),
  /* manager_entityforms */  /* Submissions table page */ );
  /* manager_entityforms */  /* Submissions table page */ /* Field: User: Name */
  /* manager_entityforms */  /* Submissions table page */ $handler->display->display_options['fields']['name']['id'] = 'name';
  /* manager_entityforms */  /* Submissions table page */ $handler->display->display_options['fields']['name']['table'] = 'users';
  /* manager_entityforms */  /* Submissions table page */ $handler->display->display_options['fields']['name']['field'] = 'name';
  /* manager_entityforms */  /* Submissions table page */ $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  /* manager_entityforms */  /* Submissions table page */ $handler->display->display_options['fields']['name']['label'] = 'Submitter';
  /* manager_entityforms */  /* Submissions table page */ /* Field: Entityform Type: Label */
  /* manager_entityforms */  /* Submissions table page */ $handler->display->display_options['fields']['label_1']['id'] = 'label_1';
  /* manager_entityforms */  /* Submissions table page */ $handler->display->display_options['fields']['label_1']['table'] = 'entityform_type';
  /* manager_entityforms */  /* Submissions table page */ $handler->display->display_options['fields']['label_1']['field'] = 'label';
  /* manager_entityforms */  /* Submissions table page */ $handler->display->display_options['fields']['label_1']['label'] = 'Form Type';
  /* manager_entityforms */  /* Submissions table page */ /* Field: Entityform Submission: Date submitted */
  /* manager_entityforms */  /* Submissions table page */ $handler->display->display_options['fields']['created']['id'] = 'created';
  /* manager_entityforms */  /* Submissions table page */ $handler->display->display_options['fields']['created']['table'] = 'entityform';
  /* manager_entityforms */  /* Submissions table page */ $handler->display->display_options['fields']['created']['field'] = 'created';
  /* manager_entityforms */  /* Submissions table page */ $handler->display->display_options['fields']['created']['date_format'] = 'medium';
  /* manager_entityforms */  /* Submissions table page */ /* Field: Entityform Submission: Date changed */
  /* manager_entityforms */  /* Submissions table page */ $handler->display->display_options['fields']['changed']['id'] = 'changed';
  /* manager_entityforms */  /* Submissions table page */ $handler->display->display_options['fields']['changed']['table'] = 'entityform';
  /* manager_entityforms */  /* Submissions table page */ $handler->display->display_options['fields']['changed']['field'] = 'changed';
  /* manager_entityforms */  /* Submissions table page */ $handler->display->display_options['fields']['changed']['hide_alter_empty'] = FALSE;
  /* manager_entityforms */  /* Submissions table page */ $handler->display->display_options['path'] = 'admin/manage/form/submissions/%/table';
  /* manager_entityforms */  /* Submissions table page */ $handler->display->display_options['menu']['type'] = 'tab';
  /* manager_entityforms */  /* Submissions table page */ $handler->display->display_options['menu']['title'] = 'Table';
  /* manager_entityforms */  /* Submissions table page */ $handler->display->display_options['menu']['description'] = 'View Submissions for all Entityforms';
  /* manager_entityforms */  /* Submissions table page */ $handler->display->display_options['menu']['weight'] = '0';
  /* manager_entityforms */  /* Submissions table page */ $handler->display->display_options['menu']['name'] = 'management';
  /* manager_entityforms */  /* Submissions table page */ $handler->display->display_options['menu']['context'] = 0;
  /* manager_entityforms */  /* Submissions table page */ $handler->display->display_options['tab_options']['weight'] = '0';

  /* manager_entityforms */ /* Display: User Submissions list page */
  /* manager_entityforms */  /* User Submissions list page */ $handler = $view->new_display('page', 'User Submissions list page', 'page_1');
  /* manager_entityforms */  /* User Submissions list page */ $handler->display->display_options['defaults']['fields'] = FALSE;
  /* manager_entityforms */  /* User Submissions list page */ /* Field: Bulk operations: Entityform Submission */
  /* manager_entityforms */  /* User Submissions list page */ $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  /* manager_entityforms */  /* User Submissions list page */ $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'entityform';
  /* manager_entityforms */  /* User Submissions list page */ $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  /* manager_entityforms */  /* User Submissions list page */ $handler->display->display_options['fields']['views_bulk_operations']['label'] = '';
  /* manager_entityforms */  /* User Submissions list page */ $handler->display->display_options['fields']['views_bulk_operations']['element_label_colon'] = FALSE;
  /* manager_entityforms */  /* User Submissions list page */ $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '1';
  /* manager_entityforms */  /* User Submissions list page */ $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  /* manager_entityforms */  /* User Submissions list page */ $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  /* manager_entityforms */  /* User Submissions list page */ $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  /* manager_entityforms */  /* User Submissions list page */ $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
  /* manager_entityforms */  /* User Submissions list page */   'action::views_bulk_operations_delete_item' => array(
  /* manager_entityforms */  /* User Submissions list page */     'selected' => 1,
  /* manager_entityforms */  /* User Submissions list page */     'skip_confirmation' => 0,
  /* manager_entityforms */  /* User Submissions list page */     'override_label' => 1,
  /* manager_entityforms */  /* User Submissions list page */     'label' => 'Delete Submissions',
  /* manager_entityforms */  /* User Submissions list page */     'postpone_processing' => 0,
  /* manager_entityforms */  /* User Submissions list page */   ),
  /* manager_entityforms */  /* User Submissions list page */ );
  /* manager_entityforms */  /* User Submissions list page */ /* Field: User: Name */
  /* manager_entityforms */  /* User Submissions list page */ $handler->display->display_options['fields']['name']['id'] = 'name';
  /* manager_entityforms */  /* User Submissions list page */ $handler->display->display_options['fields']['name']['table'] = 'users';
  /* manager_entityforms */  /* User Submissions list page */ $handler->display->display_options['fields']['name']['field'] = 'name';
  /* manager_entityforms */  /* User Submissions list page */ $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  /* manager_entityforms */  /* User Submissions list page */ $handler->display->display_options['fields']['name']['label'] = 'Submitter';
  /* manager_entityforms */  /* User Submissions list page */ /* Field: Field: Family Name */
  /* manager_entityforms */  /* User Submissions list page */ $handler->display->display_options['fields']['field_name_last']['id'] = 'field_name_last';
  /* manager_entityforms */  /* User Submissions list page */ $handler->display->display_options['fields']['field_name_last']['table'] = 'field_data_field_name_last';
  /* manager_entityforms */  /* User Submissions list page */ $handler->display->display_options['fields']['field_name_last']['field'] = 'field_name_last';
  /* manager_entityforms */  /* User Submissions list page */ $handler->display->display_options['fields']['field_name_last']['label'] = '';
  /* manager_entityforms */  /* User Submissions list page */ $handler->display->display_options['fields']['field_name_last']['exclude'] = TRUE;
  /* manager_entityforms */  /* User Submissions list page */ $handler->display->display_options['fields']['field_name_last']['element_type'] = '0';
  /* manager_entityforms */  /* User Submissions list page */ $handler->display->display_options['fields']['field_name_last']['element_label_colon'] = FALSE;
  /* manager_entityforms */  /* User Submissions list page */ $handler->display->display_options['fields']['field_name_last']['element_wrapper_type'] = '0';
  /* manager_entityforms */  /* User Submissions list page */ $handler->display->display_options['fields']['field_name_last']['element_default_classes'] = FALSE;
  /* manager_entityforms */  /* User Submissions list page */ $handler->display->display_options['fields']['field_name_last']['settings'] = array(
  /* manager_entityforms */  /* User Submissions list page */   'field_formatter_class' => '',
  /* manager_entityforms */  /* User Submissions list page */ );
  /* manager_entityforms */  /* User Submissions list page */ $handler->display->display_options['fields']['field_name_last']['field_api_classes'] = TRUE;
  /* manager_entityforms */  /* User Submissions list page */ /* Field: Field: Given Name */
  /* manager_entityforms */  /* User Submissions list page */ $handler->display->display_options['fields']['field_name_first']['id'] = 'field_name_first';
  /* manager_entityforms */  /* User Submissions list page */ $handler->display->display_options['fields']['field_name_first']['table'] = 'field_data_field_name_first';
  /* manager_entityforms */  /* User Submissions list page */ $handler->display->display_options['fields']['field_name_first']['field'] = 'field_name_first';
  /* manager_entityforms */  /* User Submissions list page */ $handler->display->display_options['fields']['field_name_first']['label'] = 'Name';
  /* manager_entityforms */  /* User Submissions list page */ $handler->display->display_options['fields']['field_name_first']['alter']['alter_text'] = TRUE;
  /* manager_entityforms */  /* User Submissions list page */ $handler->display->display_options['fields']['field_name_first']['alter']['text'] = '[field_name_first]  [field_name_last]';
  /* manager_entityforms */  /* User Submissions list page */ $handler->display->display_options['fields']['field_name_first']['element_type'] = '0';
  /* manager_entityforms */  /* User Submissions list page */ $handler->display->display_options['fields']['field_name_first']['element_wrapper_type'] = '0';
  /* manager_entityforms */  /* User Submissions list page */ $handler->display->display_options['fields']['field_name_first']['element_default_classes'] = FALSE;
  /* manager_entityforms */  /* User Submissions list page */ $handler->display->display_options['fields']['field_name_first']['settings'] = array(
  /* manager_entityforms */  /* User Submissions list page */   'field_formatter_class' => '',
  /* manager_entityforms */  /* User Submissions list page */ );
  /* manager_entityforms */  /* User Submissions list page */ $handler->display->display_options['fields']['field_name_first']['field_api_classes'] = TRUE;
  /* manager_entityforms */  /* User Submissions list page */ /* Field: Entityform Submission: Status */
  /* manager_entityforms */  /* User Submissions list page */ $handler->display->display_options['fields']['field_status']['id'] = 'field_status';
  /* manager_entityforms */  /* User Submissions list page */ $handler->display->display_options['fields']['field_status']['table'] = 'field_data_field_status';
  /* manager_entityforms */  /* User Submissions list page */ $handler->display->display_options['fields']['field_status']['field'] = 'field_status';
  /* manager_entityforms */  /* User Submissions list page */ $handler->display->display_options['fields']['field_status']['element_type'] = '0';
  /* manager_entityforms */  /* User Submissions list page */ $handler->display->display_options['fields']['field_status']['element_wrapper_type'] = '0';
  /* manager_entityforms */  /* User Submissions list page */ $handler->display->display_options['fields']['field_status']['element_default_classes'] = FALSE;
  /* manager_entityforms */  /* User Submissions list page */ $handler->display->display_options['fields']['field_status']['settings'] = array(
  /* manager_entityforms */  /* User Submissions list page */   'field_formatter_class' => '',
  /* manager_entityforms */  /* User Submissions list page */ );
  /* manager_entityforms */  /* User Submissions list page */ $handler->display->display_options['fields']['field_status']['field_api_classes'] = TRUE;
  /* manager_entityforms */  /* User Submissions list page */ /* Field: Entityform Submission: Date submitted */
  /* manager_entityforms */  /* User Submissions list page */ $handler->display->display_options['fields']['created']['id'] = 'created';
  /* manager_entityforms */  /* User Submissions list page */ $handler->display->display_options['fields']['created']['table'] = 'entityform';
  /* manager_entityforms */  /* User Submissions list page */ $handler->display->display_options['fields']['created']['field'] = 'created';
  /* manager_entityforms */  /* User Submissions list page */ $handler->display->display_options['fields']['created']['date_format'] = 'medium';
  /* manager_entityforms */  /* User Submissions list page */ /* Field: Entityform Submission: Date changed */
  /* manager_entityforms */  /* User Submissions list page */ $handler->display->display_options['fields']['changed']['id'] = 'changed';
  /* manager_entityforms */  /* User Submissions list page */ $handler->display->display_options['fields']['changed']['table'] = 'entityform';
  /* manager_entityforms */  /* User Submissions list page */ $handler->display->display_options['fields']['changed']['field'] = 'changed';
  /* manager_entityforms */  /* User Submissions list page */ $handler->display->display_options['fields']['changed']['hide_alter_empty'] = FALSE;
  /* manager_entityforms */  /* User Submissions list page */ /* Field: Entityform Submission: Entityform submission ID */
  /* manager_entityforms */  /* User Submissions list page */ $handler->display->display_options['fields']['entityform_id']['id'] = 'entityform_id';
  /* manager_entityforms */  /* User Submissions list page */ $handler->display->display_options['fields']['entityform_id']['table'] = 'entityform';
  /* manager_entityforms */  /* User Submissions list page */ $handler->display->display_options['fields']['entityform_id']['field'] = 'entityform_id';
  /* manager_entityforms */  /* User Submissions list page */ $handler->display->display_options['fields']['entityform_id']['label'] = '';
  /* manager_entityforms */  /* User Submissions list page */ $handler->display->display_options['fields']['entityform_id']['exclude'] = TRUE;
  /* manager_entityforms */  /* User Submissions list page */ $handler->display->display_options['fields']['entityform_id']['element_label_colon'] = FALSE;
  /* manager_entityforms */  /* User Submissions list page */ $handler->display->display_options['fields']['entityform_id']['separator'] = '';
  /* manager_entityforms */  /* User Submissions list page */ /* Field: Global: Custom text */
  /* manager_entityforms */  /* User Submissions list page */ $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  /* manager_entityforms */  /* User Submissions list page */ $handler->display->display_options['fields']['nothing']['table'] = 'views';
  /* manager_entityforms */  /* User Submissions list page */ $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  /* manager_entityforms */  /* User Submissions list page */ $handler->display->display_options['fields']['nothing']['label'] = '';
  /* manager_entityforms */  /* User Submissions list page */ $handler->display->display_options['fields']['nothing']['alter']['text'] = 'View';
  /* manager_entityforms */  /* User Submissions list page */ $handler->display->display_options['fields']['nothing']['alter']['make_link'] = TRUE;
  /* manager_entityforms */  /* User Submissions list page */ $handler->display->display_options['fields']['nothing']['alter']['path'] = 'admin/manage/users/regforms/[entityform_id]';
  /* manager_entityforms */  /* User Submissions list page */ $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* manager_entityforms */  /* User Submissions list page */ $handler->display->display_options['path'] = 'admin/manage/userform/submissions/%/list';
  /* manager_entityforms */  /* User Submissions list page */ $handler->display->display_options['menu']['type'] = 'default tab';
  /* manager_entityforms */  /* User Submissions list page */ $handler->display->display_options['menu']['title'] = 'List';
  /* manager_entityforms */  /* User Submissions list page */ $handler->display->display_options['menu']['description'] = 'View Submissions for all Entityforms';
  /* manager_entityforms */  /* User Submissions list page */ $handler->display->display_options['menu']['weight'] = '0';
  /* manager_entityforms */  /* User Submissions list page */ $handler->display->display_options['menu']['name'] = 'management';
  /* manager_entityforms */  /* User Submissions list page */ $handler->display->display_options['menu']['context'] = 0;
  /* manager_entityforms */  /* User Submissions list page */ $handler->display->display_options['tab_options']['type'] = 'normal';
  /* manager_entityforms */  /* User Submissions list page */ $handler->display->display_options['tab_options']['title'] = 'Submissions';
  /* manager_entityforms */  /* User Submissions list page */ $handler->display->display_options['tab_options']['weight'] = '0';
  /* manager_entityforms */  /* User Submissions list page */ $handler->display->display_options['tab_options']['name'] = 'management';

  /* manager_entityforms */ /* Display: User Submissions XML Data export */
  /* manager_entityforms */  /* User Submissions XML Data export */ $handler = $view->new_display('views_data_export', 'User Submissions XML Data export', 'views_data_export_1');
  /* manager_entityforms */  /* User Submissions XML Data export */ $handler->display->display_options['pager']['type'] = 'none';
  /* manager_entityforms */  /* User Submissions XML Data export */ $handler->display->display_options['pager']['options']['offset'] = '0';
  /* manager_entityforms */  /* User Submissions XML Data export */ $handler->display->display_options['style_plugin'] = 'views_data_export_xml';
  /* manager_entityforms */  /* User Submissions XML Data export */ $handler->display->display_options['style_options']['provide_file'] = 1;
  /* manager_entityforms */  /* User Submissions XML Data export */ $handler->display->display_options['style_options']['filename'] = '%1-title_submissions_%timestamp-full.xml';
  /* manager_entityforms */  /* User Submissions XML Data export */ $handler->display->display_options['style_options']['parent_sort'] = 1;
  /* manager_entityforms */  /* User Submissions XML Data export */ $handler->display->display_options['style_options']['transform'] = 1;
  /* manager_entityforms */  /* User Submissions XML Data export */ $handler->display->display_options['style_options']['root_node'] = 'entityforms';
  /* manager_entityforms */  /* User Submissions XML Data export */ $handler->display->display_options['style_options']['item_node'] = 'entityform';
  /* manager_entityforms */  /* User Submissions XML Data export */ $handler->display->display_options['defaults']['fields'] = FALSE;
  /* manager_entityforms */  /* User Submissions XML Data export */ /* Field: User: Name */
  /* manager_entityforms */  /* User Submissions XML Data export */ $handler->display->display_options['fields']['name']['id'] = 'name';
  /* manager_entityforms */  /* User Submissions XML Data export */ $handler->display->display_options['fields']['name']['table'] = 'users';
  /* manager_entityforms */  /* User Submissions XML Data export */ $handler->display->display_options['fields']['name']['field'] = 'name';
  /* manager_entityforms */  /* User Submissions XML Data export */ $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  /* manager_entityforms */  /* User Submissions XML Data export */ $handler->display->display_options['fields']['name']['label'] = 'Submitter';
  /* manager_entityforms */  /* User Submissions XML Data export */ /* Field: Field: Family Name */
  /* manager_entityforms */  /* User Submissions XML Data export */ $handler->display->display_options['fields']['field_name_last']['id'] = 'field_name_last';
  /* manager_entityforms */  /* User Submissions XML Data export */ $handler->display->display_options['fields']['field_name_last']['table'] = 'field_data_field_name_last';
  /* manager_entityforms */  /* User Submissions XML Data export */ $handler->display->display_options['fields']['field_name_last']['field'] = 'field_name_last';
  /* manager_entityforms */  /* User Submissions XML Data export */ $handler->display->display_options['fields']['field_name_last']['label'] = '';
  /* manager_entityforms */  /* User Submissions XML Data export */ $handler->display->display_options['fields']['field_name_last']['exclude'] = TRUE;
  /* manager_entityforms */  /* User Submissions XML Data export */ $handler->display->display_options['fields']['field_name_last']['element_type'] = '0';
  /* manager_entityforms */  /* User Submissions XML Data export */ $handler->display->display_options['fields']['field_name_last']['element_label_colon'] = FALSE;
  /* manager_entityforms */  /* User Submissions XML Data export */ $handler->display->display_options['fields']['field_name_last']['element_wrapper_type'] = '0';
  /* manager_entityforms */  /* User Submissions XML Data export */ $handler->display->display_options['fields']['field_name_last']['element_default_classes'] = FALSE;
  /* manager_entityforms */  /* User Submissions XML Data export */ $handler->display->display_options['fields']['field_name_last']['settings'] = array(
  /* manager_entityforms */  /* User Submissions XML Data export */   'field_formatter_class' => '',
  /* manager_entityforms */  /* User Submissions XML Data export */ );
  /* manager_entityforms */  /* User Submissions XML Data export */ $handler->display->display_options['fields']['field_name_last']['field_api_classes'] = TRUE;
  /* manager_entityforms */  /* User Submissions XML Data export */ /* Field: Field: Given Name */
  /* manager_entityforms */  /* User Submissions XML Data export */ $handler->display->display_options['fields']['field_name_first']['id'] = 'field_name_first';
  /* manager_entityforms */  /* User Submissions XML Data export */ $handler->display->display_options['fields']['field_name_first']['table'] = 'field_data_field_name_first';
  /* manager_entityforms */  /* User Submissions XML Data export */ $handler->display->display_options['fields']['field_name_first']['field'] = 'field_name_first';
  /* manager_entityforms */  /* User Submissions XML Data export */ $handler->display->display_options['fields']['field_name_first']['label'] = 'Name';
  /* manager_entityforms */  /* User Submissions XML Data export */ $handler->display->display_options['fields']['field_name_first']['alter']['alter_text'] = TRUE;
  /* manager_entityforms */  /* User Submissions XML Data export */ $handler->display->display_options['fields']['field_name_first']['alter']['text'] = '[field_name_first] [field_name_last]';
  /* manager_entityforms */  /* User Submissions XML Data export */ $handler->display->display_options['fields']['field_name_first']['element_type'] = '0';
  /* manager_entityforms */  /* User Submissions XML Data export */ $handler->display->display_options['fields']['field_name_first']['element_label_colon'] = FALSE;
  /* manager_entityforms */  /* User Submissions XML Data export */ $handler->display->display_options['fields']['field_name_first']['element_wrapper_type'] = '0';
  /* manager_entityforms */  /* User Submissions XML Data export */ $handler->display->display_options['fields']['field_name_first']['element_default_classes'] = FALSE;
  /* manager_entityforms */  /* User Submissions XML Data export */ $handler->display->display_options['fields']['field_name_first']['settings'] = array(
  /* manager_entityforms */  /* User Submissions XML Data export */   'field_formatter_class' => '',
  /* manager_entityforms */  /* User Submissions XML Data export */ );
  /* manager_entityforms */  /* User Submissions XML Data export */ $handler->display->display_options['fields']['field_name_first']['field_api_classes'] = TRUE;
  /* manager_entityforms */  /* User Submissions XML Data export */ /* Field: Entityform Submission: Status */
  /* manager_entityforms */  /* User Submissions XML Data export */ $handler->display->display_options['fields']['field_status']['id'] = 'field_status';
  /* manager_entityforms */  /* User Submissions XML Data export */ $handler->display->display_options['fields']['field_status']['table'] = 'field_data_field_status';
  /* manager_entityforms */  /* User Submissions XML Data export */ $handler->display->display_options['fields']['field_status']['field'] = 'field_status';
  /* manager_entityforms */  /* User Submissions XML Data export */ $handler->display->display_options['fields']['field_status']['element_type'] = '0';
  /* manager_entityforms */  /* User Submissions XML Data export */ $handler->display->display_options['fields']['field_status']['element_wrapper_type'] = '0';
  /* manager_entityforms */  /* User Submissions XML Data export */ $handler->display->display_options['fields']['field_status']['element_default_classes'] = FALSE;
  /* manager_entityforms */  /* User Submissions XML Data export */ $handler->display->display_options['fields']['field_status']['settings'] = array(
  /* manager_entityforms */  /* User Submissions XML Data export */   'field_formatter_class' => '',
  /* manager_entityforms */  /* User Submissions XML Data export */ );
  /* manager_entityforms */  /* User Submissions XML Data export */ $handler->display->display_options['fields']['field_status']['field_api_classes'] = TRUE;
  /* manager_entityforms */  /* User Submissions XML Data export */ /* Field: Entityform Submission: Date submitted */
  /* manager_entityforms */  /* User Submissions XML Data export */ $handler->display->display_options['fields']['created']['id'] = 'created';
  /* manager_entityforms */  /* User Submissions XML Data export */ $handler->display->display_options['fields']['created']['table'] = 'entityform';
  /* manager_entityforms */  /* User Submissions XML Data export */ $handler->display->display_options['fields']['created']['field'] = 'created';
  /* manager_entityforms */  /* User Submissions XML Data export */ $handler->display->display_options['fields']['created']['date_format'] = 'medium';
  /* manager_entityforms */  /* User Submissions XML Data export */ /* Field: Entityform Submission: Date changed */
  /* manager_entityforms */  /* User Submissions XML Data export */ $handler->display->display_options['fields']['changed']['id'] = 'changed';
  /* manager_entityforms */  /* User Submissions XML Data export */ $handler->display->display_options['fields']['changed']['table'] = 'entityform';
  /* manager_entityforms */  /* User Submissions XML Data export */ $handler->display->display_options['fields']['changed']['field'] = 'changed';
  /* manager_entityforms */  /* User Submissions XML Data export */ $handler->display->display_options['fields']['changed']['hide_alter_empty'] = FALSE;
  /* manager_entityforms */  /* User Submissions XML Data export */ $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* manager_entityforms */  /* User Submissions XML Data export */ /* Contextual filter: Entityform Submission: Entityform Type */
  /* manager_entityforms */  /* User Submissions XML Data export */ $handler->display->display_options['arguments']['type']['id'] = 'type';
  /* manager_entityforms */  /* User Submissions XML Data export */ $handler->display->display_options['arguments']['type']['table'] = 'entityform';
  /* manager_entityforms */  /* User Submissions XML Data export */ $handler->display->display_options['arguments']['type']['field'] = 'type';
  /* manager_entityforms */  /* User Submissions XML Data export */ $handler->display->display_options['arguments']['type']['title_enable'] = TRUE;
  /* manager_entityforms */  /* User Submissions XML Data export */ $handler->display->display_options['arguments']['type']['title'] = 'entityform_submissions_%1';
  /* manager_entityforms */  /* User Submissions XML Data export */ $handler->display->display_options['arguments']['type']['default_argument_type'] = 'fixed';
  /* manager_entityforms */  /* User Submissions XML Data export */ $handler->display->display_options['arguments']['type']['summary']['number_of_records'] = '0';
  /* manager_entityforms */  /* User Submissions XML Data export */ $handler->display->display_options['arguments']['type']['summary']['format'] = 'default_summary';
  /* manager_entityforms */  /* User Submissions XML Data export */ $handler->display->display_options['arguments']['type']['summary_options']['items_per_page'] = '25';
  /* manager_entityforms */  /* User Submissions XML Data export */ $handler->display->display_options['arguments']['type']['limit'] = '0';
  /* manager_entityforms */  /* User Submissions XML Data export */ $handler->display->display_options['path'] = 'admin/manage/form/submissions/%/xml';
  /* manager_entityforms */  /* User Submissions XML Data export */ $handler->display->display_options['displays'] = array(
  /* manager_entityforms */  /* User Submissions XML Data export */   'page_1' => 'page_1',
  /* manager_entityforms */  /* User Submissions XML Data export */   'default' => 0,
  /* manager_entityforms */  /* User Submissions XML Data export */   'entityforms_admin_page' => 0,
  /* manager_entityforms */  /* User Submissions XML Data export */   'autofields_table' => 0,
  /* manager_entityforms */  /* User Submissions XML Data export */ );

  /* manager_entityforms */ /* Display: User Submissions CSV Data export */
  /* manager_entityforms */  /* User Submissions CSV Data export */ $handler = $view->new_display('views_data_export', 'User Submissions CSV Data export', 'views_data_export_2');
  /* manager_entityforms */  /* User Submissions CSV Data export */ $handler->display->display_options['pager']['type'] = 'none';
  /* manager_entityforms */  /* User Submissions CSV Data export */ $handler->display->display_options['pager']['options']['offset'] = '0';
  /* manager_entityforms */  /* User Submissions CSV Data export */ $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  /* manager_entityforms */  /* User Submissions CSV Data export */ $handler->display->display_options['style_options']['provide_file'] = 1;
  /* manager_entityforms */  /* User Submissions CSV Data export */ $handler->display->display_options['style_options']['filename'] = '%1-title_submissions_%timestamp-full.csv';
  /* manager_entityforms */  /* User Submissions CSV Data export */ $handler->display->display_options['style_options']['parent_sort'] = 1;
  /* manager_entityforms */  /* User Submissions CSV Data export */ $handler->display->display_options['style_options']['quote'] = 1;
  /* manager_entityforms */  /* User Submissions CSV Data export */ $handler->display->display_options['style_options']['trim'] = 0;
  /* manager_entityforms */  /* User Submissions CSV Data export */ $handler->display->display_options['style_options']['replace_newlines'] = 0;
  /* manager_entityforms */  /* User Submissions CSV Data export */ $handler->display->display_options['style_options']['header'] = 1;
  /* manager_entityforms */  /* User Submissions CSV Data export */ $handler->display->display_options['style_options']['encoding'] = 'ASCII';
  /* manager_entityforms */  /* User Submissions CSV Data export */ $handler->display->display_options['defaults']['fields'] = FALSE;
  /* manager_entityforms */  /* User Submissions CSV Data export */ /* Field: User: Name */
  /* manager_entityforms */  /* User Submissions CSV Data export */ $handler->display->display_options['fields']['name']['id'] = 'name';
  /* manager_entityforms */  /* User Submissions CSV Data export */ $handler->display->display_options['fields']['name']['table'] = 'users';
  /* manager_entityforms */  /* User Submissions CSV Data export */ $handler->display->display_options['fields']['name']['field'] = 'name';
  /* manager_entityforms */  /* User Submissions CSV Data export */ $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  /* manager_entityforms */  /* User Submissions CSV Data export */ $handler->display->display_options['fields']['name']['label'] = 'Submitter';
  /* manager_entityforms */  /* User Submissions CSV Data export */ /* Field: Field: Family Name */
  /* manager_entityforms */  /* User Submissions CSV Data export */ $handler->display->display_options['fields']['field_name_last']['id'] = 'field_name_last';
  /* manager_entityforms */  /* User Submissions CSV Data export */ $handler->display->display_options['fields']['field_name_last']['table'] = 'field_data_field_name_last';
  /* manager_entityforms */  /* User Submissions CSV Data export */ $handler->display->display_options['fields']['field_name_last']['field'] = 'field_name_last';
  /* manager_entityforms */  /* User Submissions CSV Data export */ $handler->display->display_options['fields']['field_name_last']['label'] = '';
  /* manager_entityforms */  /* User Submissions CSV Data export */ $handler->display->display_options['fields']['field_name_last']['exclude'] = TRUE;
  /* manager_entityforms */  /* User Submissions CSV Data export */ $handler->display->display_options['fields']['field_name_last']['element_type'] = '0';
  /* manager_entityforms */  /* User Submissions CSV Data export */ $handler->display->display_options['fields']['field_name_last']['element_label_colon'] = FALSE;
  /* manager_entityforms */  /* User Submissions CSV Data export */ $handler->display->display_options['fields']['field_name_last']['element_wrapper_type'] = '0';
  /* manager_entityforms */  /* User Submissions CSV Data export */ $handler->display->display_options['fields']['field_name_last']['element_default_classes'] = FALSE;
  /* manager_entityforms */  /* User Submissions CSV Data export */ $handler->display->display_options['fields']['field_name_last']['settings'] = array(
  /* manager_entityforms */  /* User Submissions CSV Data export */   'field_formatter_class' => '',
  /* manager_entityforms */  /* User Submissions CSV Data export */ );
  /* manager_entityforms */  /* User Submissions CSV Data export */ $handler->display->display_options['fields']['field_name_last']['field_api_classes'] = TRUE;
  /* manager_entityforms */  /* User Submissions CSV Data export */ /* Field: Field: Given Name */
  /* manager_entityforms */  /* User Submissions CSV Data export */ $handler->display->display_options['fields']['field_name_first']['id'] = 'field_name_first';
  /* manager_entityforms */  /* User Submissions CSV Data export */ $handler->display->display_options['fields']['field_name_first']['table'] = 'field_data_field_name_first';
  /* manager_entityforms */  /* User Submissions CSV Data export */ $handler->display->display_options['fields']['field_name_first']['field'] = 'field_name_first';
  /* manager_entityforms */  /* User Submissions CSV Data export */ $handler->display->display_options['fields']['field_name_first']['label'] = 'Name';
  /* manager_entityforms */  /* User Submissions CSV Data export */ $handler->display->display_options['fields']['field_name_first']['alter']['alter_text'] = TRUE;
  /* manager_entityforms */  /* User Submissions CSV Data export */ $handler->display->display_options['fields']['field_name_first']['alter']['text'] = '[field_name_first] [field_name_last]';
  /* manager_entityforms */  /* User Submissions CSV Data export */ $handler->display->display_options['fields']['field_name_first']['element_type'] = '0';
  /* manager_entityforms */  /* User Submissions CSV Data export */ $handler->display->display_options['fields']['field_name_first']['element_wrapper_type'] = '0';
  /* manager_entityforms */  /* User Submissions CSV Data export */ $handler->display->display_options['fields']['field_name_first']['element_default_classes'] = FALSE;
  /* manager_entityforms */  /* User Submissions CSV Data export */ $handler->display->display_options['fields']['field_name_first']['settings'] = array(
  /* manager_entityforms */  /* User Submissions CSV Data export */   'field_formatter_class' => '',
  /* manager_entityforms */  /* User Submissions CSV Data export */ );
  /* manager_entityforms */  /* User Submissions CSV Data export */ $handler->display->display_options['fields']['field_name_first']['field_api_classes'] = TRUE;
  /* manager_entityforms */  /* User Submissions CSV Data export */ /* Field: Entityform Submission: Status */
  /* manager_entityforms */  /* User Submissions CSV Data export */ $handler->display->display_options['fields']['field_status']['id'] = 'field_status';
  /* manager_entityforms */  /* User Submissions CSV Data export */ $handler->display->display_options['fields']['field_status']['table'] = 'field_data_field_status';
  /* manager_entityforms */  /* User Submissions CSV Data export */ $handler->display->display_options['fields']['field_status']['field'] = 'field_status';
  /* manager_entityforms */  /* User Submissions CSV Data export */ $handler->display->display_options['fields']['field_status']['element_type'] = '0';
  /* manager_entityforms */  /* User Submissions CSV Data export */ $handler->display->display_options['fields']['field_status']['element_wrapper_type'] = '0';
  /* manager_entityforms */  /* User Submissions CSV Data export */ $handler->display->display_options['fields']['field_status']['element_default_classes'] = FALSE;
  /* manager_entityforms */  /* User Submissions CSV Data export */ $handler->display->display_options['fields']['field_status']['settings'] = array(
  /* manager_entityforms */  /* User Submissions CSV Data export */   'field_formatter_class' => '',
  /* manager_entityforms */  /* User Submissions CSV Data export */ );
  /* manager_entityforms */  /* User Submissions CSV Data export */ $handler->display->display_options['fields']['field_status']['field_api_classes'] = TRUE;
  /* manager_entityforms */  /* User Submissions CSV Data export */ /* Field: Entityform Submission: Date submitted */
  /* manager_entityforms */  /* User Submissions CSV Data export */ $handler->display->display_options['fields']['created']['id'] = 'created';
  /* manager_entityforms */  /* User Submissions CSV Data export */ $handler->display->display_options['fields']['created']['table'] = 'entityform';
  /* manager_entityforms */  /* User Submissions CSV Data export */ $handler->display->display_options['fields']['created']['field'] = 'created';
  /* manager_entityforms */  /* User Submissions CSV Data export */ $handler->display->display_options['fields']['created']['date_format'] = 'medium';
  /* manager_entityforms */  /* User Submissions CSV Data export */ /* Field: Entityform Submission: Date changed */
  /* manager_entityforms */  /* User Submissions CSV Data export */ $handler->display->display_options['fields']['changed']['id'] = 'changed';
  /* manager_entityforms */  /* User Submissions CSV Data export */ $handler->display->display_options['fields']['changed']['table'] = 'entityform';
  /* manager_entityforms */  /* User Submissions CSV Data export */ $handler->display->display_options['fields']['changed']['field'] = 'changed';
  /* manager_entityforms */  /* User Submissions CSV Data export */ $handler->display->display_options['fields']['changed']['hide_alter_empty'] = FALSE;
  /* manager_entityforms */  /* User Submissions CSV Data export */ $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* manager_entityforms */  /* User Submissions CSV Data export */ /* Contextual filter: Entityform Submission: Entityform Type */
  /* manager_entityforms */  /* User Submissions CSV Data export */ $handler->display->display_options['arguments']['type']['id'] = 'type';
  /* manager_entityforms */  /* User Submissions CSV Data export */ $handler->display->display_options['arguments']['type']['table'] = 'entityform';
  /* manager_entityforms */  /* User Submissions CSV Data export */ $handler->display->display_options['arguments']['type']['field'] = 'type';
  /* manager_entityforms */  /* User Submissions CSV Data export */ $handler->display->display_options['arguments']['type']['title_enable'] = TRUE;
  /* manager_entityforms */  /* User Submissions CSV Data export */ $handler->display->display_options['arguments']['type']['title'] = 'entityform_submissions_%1';
  /* manager_entityforms */  /* User Submissions CSV Data export */ $handler->display->display_options['arguments']['type']['default_argument_type'] = 'fixed';
  /* manager_entityforms */  /* User Submissions CSV Data export */ $handler->display->display_options['arguments']['type']['summary']['number_of_records'] = '0';
  /* manager_entityforms */  /* User Submissions CSV Data export */ $handler->display->display_options['arguments']['type']['summary']['format'] = 'default_summary';
  /* manager_entityforms */  /* User Submissions CSV Data export */ $handler->display->display_options['arguments']['type']['summary_options']['items_per_page'] = '25';
  /* manager_entityforms */  /* User Submissions CSV Data export */ $handler->display->display_options['arguments']['type']['limit'] = '0';
  /* manager_entityforms */  /* User Submissions CSV Data export */ $handler->display->display_options['path'] = 'admin/manage/userform/submissions/%/csv';
  /* manager_entityforms */  /* User Submissions CSV Data export */ $handler->display->display_options['displays'] = array(
  /* manager_entityforms */  /* User Submissions CSV Data export */   'page_1' => 'page_1',
  /* manager_entityforms */  /* User Submissions CSV Data export */   'default' => 0,
  /* manager_entityforms */  /* User Submissions CSV Data export */   'entityforms_admin_page' => 0,
  /* manager_entityforms */  /* User Submissions CSV Data export */   'autofields_table' => 0,
  /* manager_entityforms */  /* User Submissions CSV Data export */ );

  /* manager_entityforms */ /* Display: Dashboard | Submissions page */
  /* manager_entityforms */  /* Dashboard | Submissions page */ $handler = $view->new_display('page', 'Dashboard | Submissions page', 'page_2');
  /* manager_entityforms */  /* Dashboard | Submissions page */ $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  /* manager_entityforms */  /* Dashboard | Submissions page */ $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  /* manager_entityforms */  /* Dashboard | Submissions page */ $handler->display->display_options['exposed_form']['options']['bef'] = array(
  /* manager_entityforms */  /* Dashboard | Submissions page */   'general' => array(
  /* manager_entityforms */  /* Dashboard | Submissions page */     'allow_secondary' => 0,
  /* manager_entityforms */  /* Dashboard | Submissions page */     'secondary_label' => 'Advanced options',
  /* manager_entityforms */  /* Dashboard | Submissions page */   ),
  /* manager_entityforms */  /* Dashboard | Submissions page */   'created' => array(
  /* manager_entityforms */  /* Dashboard | Submissions page */     'bef_format' => 'default',
  /* manager_entityforms */  /* Dashboard | Submissions page */     'more_options' => array(
  /* manager_entityforms */  /* Dashboard | Submissions page */       'is_secondary' => 0,
  /* manager_entityforms */  /* Dashboard | Submissions page */       'any_label' => '',
  /* manager_entityforms */  /* Dashboard | Submissions page */       'bef_filter_description' => '',
  /* manager_entityforms */  /* Dashboard | Submissions page */       'tokens' => array(
  /* manager_entityforms */  /* Dashboard | Submissions page */         'available' => array(
  /* manager_entityforms */  /* Dashboard | Submissions page */           0 => 'global_types',
  /* manager_entityforms */  /* Dashboard | Submissions page */         ),
  /* manager_entityforms */  /* Dashboard | Submissions page */       ),
  /* manager_entityforms */  /* Dashboard | Submissions page */       'rewrite' => array(
  /* manager_entityforms */  /* Dashboard | Submissions page */         'filter_rewrite_values' => '',
  /* manager_entityforms */  /* Dashboard | Submissions page */       ),
  /* manager_entityforms */  /* Dashboard | Submissions page */     ),
  /* manager_entityforms */  /* Dashboard | Submissions page */   ),
  /* manager_entityforms */  /* Dashboard | Submissions page */   'field_status_value' => array(
  /* manager_entityforms */  /* Dashboard | Submissions page */     'bef_format' => 'default',
  /* manager_entityforms */  /* Dashboard | Submissions page */     'more_options' => array(
  /* manager_entityforms */  /* Dashboard | Submissions page */       'bef_select_all_none' => FALSE,
  /* manager_entityforms */  /* Dashboard | Submissions page */       'bef_collapsible' => 0,
  /* manager_entityforms */  /* Dashboard | Submissions page */       'is_secondary' => 0,
  /* manager_entityforms */  /* Dashboard | Submissions page */       'any_label' => 'All',
  /* manager_entityforms */  /* Dashboard | Submissions page */       'bef_filter_description' => 'This list displays Pending submissions. <br/>
Click the drop-down arrow and press Go <br/>
 to display Approved, Denied or All submissions.',
  /* manager_entityforms */  /* Dashboard | Submissions page */       'tokens' => array(
  /* manager_entityforms */  /* Dashboard | Submissions page */         'available' => array(
  /* manager_entityforms */  /* Dashboard | Submissions page */           0 => 'global_types',
  /* manager_entityforms */  /* Dashboard | Submissions page */         ),
  /* manager_entityforms */  /* Dashboard | Submissions page */       ),
  /* manager_entityforms */  /* Dashboard | Submissions page */       'rewrite' => array(
  /* manager_entityforms */  /* Dashboard | Submissions page */         'filter_rewrite_values' => '',
  /* manager_entityforms */  /* Dashboard | Submissions page */       ),
  /* manager_entityforms */  /* Dashboard | Submissions page */     ),
  /* manager_entityforms */  /* Dashboard | Submissions page */   ),
  /* manager_entityforms */  /* Dashboard | Submissions page */ );
  /* manager_entityforms */  /* Dashboard | Submissions page */ $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* manager_entityforms */  /* Dashboard | Submissions page */ /* Relationship: Entityform Submission: Uid */
  /* manager_entityforms */  /* Dashboard | Submissions page */ $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  /* manager_entityforms */  /* Dashboard | Submissions page */ $handler->display->display_options['relationships']['uid']['table'] = 'entityform';
  /* manager_entityforms */  /* Dashboard | Submissions page */ $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* manager_entityforms */  /* Dashboard | Submissions page */ $handler->display->display_options['defaults']['fields'] = FALSE;
  /* manager_entityforms */  /* Dashboard | Submissions page */ /* Field: Bulk operations: Entityform Submission */
  /* manager_entityforms */  /* Dashboard | Submissions page */ $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  /* manager_entityforms */  /* Dashboard | Submissions page */ $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'entityform';
  /* manager_entityforms */  /* Dashboard | Submissions page */ $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  /* manager_entityforms */  /* Dashboard | Submissions page */ $handler->display->display_options['fields']['views_bulk_operations']['label'] = '';
  /* manager_entityforms */  /* Dashboard | Submissions page */ $handler->display->display_options['fields']['views_bulk_operations']['element_label_colon'] = FALSE;
  /* manager_entityforms */  /* Dashboard | Submissions page */ $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '1';
  /* manager_entityforms */  /* Dashboard | Submissions page */ $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  /* manager_entityforms */  /* Dashboard | Submissions page */ $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  /* manager_entityforms */  /* Dashboard | Submissions page */ $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  /* manager_entityforms */  /* Dashboard | Submissions page */ $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
  /* manager_entityforms */  /* Dashboard | Submissions page */   'action::views_bulk_operations_delete_item' => array(
  /* manager_entityforms */  /* Dashboard | Submissions page */     'selected' => 1,
  /* manager_entityforms */  /* Dashboard | Submissions page */     'skip_confirmation' => 0,
  /* manager_entityforms */  /* Dashboard | Submissions page */     'override_label' => 1,
  /* manager_entityforms */  /* Dashboard | Submissions page */     'label' => 'Delete Submissions',
  /* manager_entityforms */  /* Dashboard | Submissions page */     'postpone_processing' => 0,
  /* manager_entityforms */  /* Dashboard | Submissions page */   ),
  /* manager_entityforms */  /* Dashboard | Submissions page */ );
  /* manager_entityforms */  /* Dashboard | Submissions page */ /* Field: Field: Family Name */
  /* manager_entityforms */  /* Dashboard | Submissions page */ $handler->display->display_options['fields']['field_name_last']['id'] = 'field_name_last';
  /* manager_entityforms */  /* Dashboard | Submissions page */ $handler->display->display_options['fields']['field_name_last']['table'] = 'field_data_field_name_last';
  /* manager_entityforms */  /* Dashboard | Submissions page */ $handler->display->display_options['fields']['field_name_last']['field'] = 'field_name_last';
  /* manager_entityforms */  /* Dashboard | Submissions page */ $handler->display->display_options['fields']['field_name_last']['label'] = '';
  /* manager_entityforms */  /* Dashboard | Submissions page */ $handler->display->display_options['fields']['field_name_last']['exclude'] = TRUE;
  /* manager_entityforms */  /* Dashboard | Submissions page */ $handler->display->display_options['fields']['field_name_last']['element_type'] = '0';
  /* manager_entityforms */  /* Dashboard | Submissions page */ $handler->display->display_options['fields']['field_name_last']['element_label_colon'] = FALSE;
  /* manager_entityforms */  /* Dashboard | Submissions page */ $handler->display->display_options['fields']['field_name_last']['element_wrapper_type'] = '0';
  /* manager_entityforms */  /* Dashboard | Submissions page */ $handler->display->display_options['fields']['field_name_last']['element_default_classes'] = FALSE;
  /* manager_entityforms */  /* Dashboard | Submissions page */ $handler->display->display_options['fields']['field_name_last']['settings'] = array(
  /* manager_entityforms */  /* Dashboard | Submissions page */   'field_formatter_class' => '',
  /* manager_entityforms */  /* Dashboard | Submissions page */ );
  /* manager_entityforms */  /* Dashboard | Submissions page */ $handler->display->display_options['fields']['field_name_last']['field_api_classes'] = TRUE;
  /* manager_entityforms */  /* Dashboard | Submissions page */ /* Field: Field: Given Name */
  /* manager_entityforms */  /* Dashboard | Submissions page */ $handler->display->display_options['fields']['field_name_first']['id'] = 'field_name_first';
  /* manager_entityforms */  /* Dashboard | Submissions page */ $handler->display->display_options['fields']['field_name_first']['table'] = 'field_data_field_name_first';
  /* manager_entityforms */  /* Dashboard | Submissions page */ $handler->display->display_options['fields']['field_name_first']['field'] = 'field_name_first';
  /* manager_entityforms */  /* Dashboard | Submissions page */ $handler->display->display_options['fields']['field_name_first']['label'] = '';
  /* manager_entityforms */  /* Dashboard | Submissions page */ $handler->display->display_options['fields']['field_name_first']['exclude'] = TRUE;
  /* manager_entityforms */  /* Dashboard | Submissions page */ $handler->display->display_options['fields']['field_name_first']['element_type'] = '0';
  /* manager_entityforms */  /* Dashboard | Submissions page */ $handler->display->display_options['fields']['field_name_first']['element_label_colon'] = FALSE;
  /* manager_entityforms */  /* Dashboard | Submissions page */ $handler->display->display_options['fields']['field_name_first']['element_wrapper_type'] = '0';
  /* manager_entityforms */  /* Dashboard | Submissions page */ $handler->display->display_options['fields']['field_name_first']['element_default_classes'] = FALSE;
  /* manager_entityforms */  /* Dashboard | Submissions page */ $handler->display->display_options['fields']['field_name_first']['settings'] = array(
  /* manager_entityforms */  /* Dashboard | Submissions page */   'field_formatter_class' => '',
  /* manager_entityforms */  /* Dashboard | Submissions page */ );
  /* manager_entityforms */  /* Dashboard | Submissions page */ $handler->display->display_options['fields']['field_name_first']['field_api_classes'] = TRUE;
  /* manager_entityforms */  /* Dashboard | Submissions page */ /* Field: Global: Custom text */
  /* manager_entityforms */  /* Dashboard | Submissions page */ $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  /* manager_entityforms */  /* Dashboard | Submissions page */ $handler->display->display_options['fields']['nothing']['table'] = 'views';
  /* manager_entityforms */  /* Dashboard | Submissions page */ $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  /* manager_entityforms */  /* Dashboard | Submissions page */ $handler->display->display_options['fields']['nothing']['label'] = 'Name';
  /* manager_entityforms */  /* Dashboard | Submissions page */ $handler->display->display_options['fields']['nothing']['alter']['text'] = '[field_name_first] [field_name_last] ';
  /* manager_entityforms */  /* Dashboard | Submissions page */ /* Field: Entityform Submission: Date submitted */
  /* manager_entityforms */  /* Dashboard | Submissions page */ $handler->display->display_options['fields']['created']['id'] = 'created';
  /* manager_entityforms */  /* Dashboard | Submissions page */ $handler->display->display_options['fields']['created']['table'] = 'entityform';
  /* manager_entityforms */  /* Dashboard | Submissions page */ $handler->display->display_options['fields']['created']['field'] = 'created';
  /* manager_entityforms */  /* Dashboard | Submissions page */ $handler->display->display_options['fields']['created']['date_format'] = 'medium';
  /* manager_entityforms */  /* Dashboard | Submissions page */ /* Field: Entityform Submission: Date changed */
  /* manager_entityforms */  /* Dashboard | Submissions page */ $handler->display->display_options['fields']['changed']['id'] = 'changed';
  /* manager_entityforms */  /* Dashboard | Submissions page */ $handler->display->display_options['fields']['changed']['table'] = 'entityform';
  /* manager_entityforms */  /* Dashboard | Submissions page */ $handler->display->display_options['fields']['changed']['field'] = 'changed';
  /* manager_entityforms */  /* Dashboard | Submissions page */ $handler->display->display_options['fields']['changed']['hide_alter_empty'] = FALSE;
  /* manager_entityforms */  /* Dashboard | Submissions page */ /* Field: Entityform Submission: Link */
  /* manager_entityforms */  /* Dashboard | Submissions page */ $handler->display->display_options['fields']['link_entityform']['id'] = 'link_entityform';
  /* manager_entityforms */  /* Dashboard | Submissions page */ $handler->display->display_options['fields']['link_entityform']['table'] = 'entityform';
  /* manager_entityforms */  /* Dashboard | Submissions page */ $handler->display->display_options['fields']['link_entityform']['field'] = 'link_entityform';
  /* manager_entityforms */  /* Dashboard | Submissions page */ $handler->display->display_options['fields']['link_entityform']['label'] = '';
  /* manager_entityforms */  /* Dashboard | Submissions page */ $handler->display->display_options['fields']['link_entityform']['element_label_colon'] = FALSE;
  /* manager_entityforms */  /* Dashboard | Submissions page */ $handler->display->display_options['fields']['link_entityform']['text'] = 'View';
  /* manager_entityforms */  /* Dashboard | Submissions page */ /* Field: Entityform Submission: Status */
  /* manager_entityforms */  /* Dashboard | Submissions page */ $handler->display->display_options['fields']['field_status']['id'] = 'field_status';
  /* manager_entityforms */  /* Dashboard | Submissions page */ $handler->display->display_options['fields']['field_status']['table'] = 'field_data_field_status';
  /* manager_entityforms */  /* Dashboard | Submissions page */ $handler->display->display_options['fields']['field_status']['field'] = 'field_status';
  /* manager_entityforms */  /* Dashboard | Submissions page */ $handler->display->display_options['fields']['field_status']['element_type'] = '0';
  /* manager_entityforms */  /* Dashboard | Submissions page */ $handler->display->display_options['fields']['field_status']['element_wrapper_type'] = '0';
  /* manager_entityforms */  /* Dashboard | Submissions page */ $handler->display->display_options['fields']['field_status']['element_default_classes'] = FALSE;
  /* manager_entityforms */  /* Dashboard | Submissions page */ $handler->display->display_options['fields']['field_status']['settings'] = array(
  /* manager_entityforms */  /* Dashboard | Submissions page */   'field_formatter_class' => '',
  /* manager_entityforms */  /* Dashboard | Submissions page */ );
  /* manager_entityforms */  /* Dashboard | Submissions page */ $handler->display->display_options['fields']['field_status']['field_api_classes'] = TRUE;
  /* manager_entityforms */  /* Dashboard | Submissions page */ $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* manager_entityforms */  /* Dashboard | Submissions page */ /* Sort criterion: Entityform Submission: Date submitted */
  /* manager_entityforms */  /* Dashboard | Submissions page */ $handler->display->display_options['sorts']['created']['id'] = 'created';
  /* manager_entityforms */  /* Dashboard | Submissions page */ $handler->display->display_options['sorts']['created']['table'] = 'entityform';
  /* manager_entityforms */  /* Dashboard | Submissions page */ $handler->display->display_options['sorts']['created']['field'] = 'created';
  /* manager_entityforms */  /* Dashboard | Submissions page */ $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* manager_entityforms */  /* Dashboard | Submissions page */ $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* manager_entityforms */  /* Dashboard | Submissions page */ /* Contextual filter: Entityform Submission: Organization (field_organization) */
  /* manager_entityforms */  /* Dashboard | Submissions page */ $handler->display->display_options['arguments']['field_organization_target_id']['id'] = 'field_organization_target_id';
  /* manager_entityforms */  /* Dashboard | Submissions page */ $handler->display->display_options['arguments']['field_organization_target_id']['table'] = 'field_data_field_organization';
  /* manager_entityforms */  /* Dashboard | Submissions page */ $handler->display->display_options['arguments']['field_organization_target_id']['field'] = 'field_organization_target_id';
  /* manager_entityforms */  /* Dashboard | Submissions page */ $handler->display->display_options['arguments']['field_organization_target_id']['default_action'] = 'default';
  /* manager_entityforms */  /* Dashboard | Submissions page */ $handler->display->display_options['arguments']['field_organization_target_id']['default_argument_type'] = 'node';
  /* manager_entityforms */  /* Dashboard | Submissions page */ $handler->display->display_options['arguments']['field_organization_target_id']['summary']['number_of_records'] = '0';
  /* manager_entityforms */  /* Dashboard | Submissions page */ $handler->display->display_options['arguments']['field_organization_target_id']['summary']['format'] = 'default_summary';
  /* manager_entityforms */  /* Dashboard | Submissions page */ $handler->display->display_options['arguments']['field_organization_target_id']['summary_options']['items_per_page'] = '25';
  /* manager_entityforms */  /* Dashboard | Submissions page */ $handler->display->display_options['arguments']['field_organization_target_id']['specify_validation'] = TRUE;
  /* manager_entityforms */  /* Dashboard | Submissions page */ $handler->display->display_options['arguments']['field_organization_target_id']['validate']['type'] = 'og';
  /* manager_entityforms */  /* Dashboard | Submissions page */ $handler->display->display_options['arguments']['field_organization_target_id']['validate']['fail'] = 'empty';
  /* manager_entityforms */  /* Dashboard | Submissions page */ /* Contextual filter: Entityform Submission: Entityform Type */
  /* manager_entityforms */  /* Dashboard | Submissions page */ $handler->display->display_options['arguments']['type']['id'] = 'type';
  /* manager_entityforms */  /* Dashboard | Submissions page */ $handler->display->display_options['arguments']['type']['table'] = 'entityform';
  /* manager_entityforms */  /* Dashboard | Submissions page */ $handler->display->display_options['arguments']['type']['field'] = 'type';
  /* manager_entityforms */  /* Dashboard | Submissions page */ $handler->display->display_options['arguments']['type']['default_action'] = 'default';
  /* manager_entityforms */  /* Dashboard | Submissions page */ $handler->display->display_options['arguments']['type']['title_enable'] = TRUE;
  /* manager_entityforms */  /* Dashboard | Submissions page */ $handler->display->display_options['arguments']['type']['title'] = ' %2 submissions for %1';
  /* manager_entityforms */  /* Dashboard | Submissions page */ $handler->display->display_options['arguments']['type']['default_argument_type'] = 'node';
  /* manager_entityforms */  /* Dashboard | Submissions page */ $handler->display->display_options['arguments']['type']['summary']['number_of_records'] = '0';
  /* manager_entityforms */  /* Dashboard | Submissions page */ $handler->display->display_options['arguments']['type']['summary']['format'] = 'default_summary';
  /* manager_entityforms */  /* Dashboard | Submissions page */ $handler->display->display_options['arguments']['type']['summary_options']['items_per_page'] = '25';
  /* manager_entityforms */  /* Dashboard | Submissions page */ $handler->display->display_options['arguments']['type']['limit'] = '0';
  /* manager_entityforms */  /* Dashboard | Submissions page */ $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  /* manager_entityforms */  /* Dashboard | Submissions page */ $handler->display->display_options['defaults']['filters'] = FALSE;
  /* manager_entityforms */  /* Dashboard | Submissions page */ /* Filter criterion: Entityform Submission: Date submitted */
  /* manager_entityforms */  /* Dashboard | Submissions page */ $handler->display->display_options['filters']['created']['id'] = 'created';
  /* manager_entityforms */  /* Dashboard | Submissions page */ $handler->display->display_options['filters']['created']['table'] = 'entityform';
  /* manager_entityforms */  /* Dashboard | Submissions page */ $handler->display->display_options['filters']['created']['field'] = 'created';
  /* manager_entityforms */  /* Dashboard | Submissions page */ $handler->display->display_options['filters']['created']['operator'] = '>';
  /* manager_entityforms */  /* Dashboard | Submissions page */ $handler->display->display_options['filters']['created']['exposed'] = TRUE;
  /* manager_entityforms */  /* Dashboard | Submissions page */ $handler->display->display_options['filters']['created']['expose']['operator_id'] = 'created_op';
  /* manager_entityforms */  /* Dashboard | Submissions page */ $handler->display->display_options['filters']['created']['expose']['label'] = 'Date submitted';
  /* manager_entityforms */  /* Dashboard | Submissions page */ $handler->display->display_options['filters']['created']['expose']['use_operator'] = TRUE;
  /* manager_entityforms */  /* Dashboard | Submissions page */ $handler->display->display_options['filters']['created']['expose']['operator'] = 'created_op';
  /* manager_entityforms */  /* Dashboard | Submissions page */ $handler->display->display_options['filters']['created']['expose']['identifier'] = 'created';
  /* manager_entityforms */  /* Dashboard | Submissions page */ /* Filter criterion: Entityform Submission: Draft */
  /* manager_entityforms */  /* Dashboard | Submissions page */ $handler->display->display_options['filters']['draft']['id'] = 'draft';
  /* manager_entityforms */  /* Dashboard | Submissions page */ $handler->display->display_options['filters']['draft']['table'] = 'entityform';
  /* manager_entityforms */  /* Dashboard | Submissions page */ $handler->display->display_options['filters']['draft']['field'] = 'draft';
  /* manager_entityforms */  /* Dashboard | Submissions page */ $handler->display->display_options['filters']['draft']['operator'] = '!=';
  /* manager_entityforms */  /* Dashboard | Submissions page */ $handler->display->display_options['filters']['draft']['value']['value'] = '1';
  /* manager_entityforms */  /* Dashboard | Submissions page */ /* Filter criterion: Entityform Submission: Status (field_status) */
  /* manager_entityforms */  /* Dashboard | Submissions page */ $handler->display->display_options['filters']['field_status_value']['id'] = 'field_status_value';
  /* manager_entityforms */  /* Dashboard | Submissions page */ $handler->display->display_options['filters']['field_status_value']['table'] = 'field_data_field_status';
  /* manager_entityforms */  /* Dashboard | Submissions page */ $handler->display->display_options['filters']['field_status_value']['field'] = 'field_status_value';
  /* manager_entityforms */  /* Dashboard | Submissions page */ $handler->display->display_options['filters']['field_status_value']['value'] = array(
  /* manager_entityforms */  /* Dashboard | Submissions page */   0 => '0',
  /* manager_entityforms */  /* Dashboard | Submissions page */ );
  /* manager_entityforms */  /* Dashboard | Submissions page */ $handler->display->display_options['filters']['field_status_value']['exposed'] = TRUE;
  /* manager_entityforms */  /* Dashboard | Submissions page */ $handler->display->display_options['filters']['field_status_value']['expose']['operator_id'] = 'field_status_value_op';
  /* manager_entityforms */  /* Dashboard | Submissions page */ $handler->display->display_options['filters']['field_status_value']['expose']['label'] = 'Submission status';
  /* manager_entityforms */  /* Dashboard | Submissions page */ $handler->display->display_options['filters']['field_status_value']['expose']['operator'] = 'field_status_value_op';
  /* manager_entityforms */  /* Dashboard | Submissions page */ $handler->display->display_options['filters']['field_status_value']['expose']['identifier'] = 'field_status_value';
  /* manager_entityforms */  /* Dashboard | Submissions page */ $handler->display->display_options['filters']['field_status_value']['expose']['remember_roles'] = array(
  /* manager_entityforms */  /* Dashboard | Submissions page */   2 => '2',
  /* manager_entityforms */  /* Dashboard | Submissions page */   1 => 0,
  /* manager_entityforms */  /* Dashboard | Submissions page */   9 => 0,
  /* manager_entityforms */  /* Dashboard | Submissions page */   10 => 0,
  /* manager_entityforms */  /* Dashboard | Submissions page */ );
  /* manager_entityforms */  /* Dashboard | Submissions page */ $handler->display->display_options['path'] = 'node/%/dashboard/forms/submissions/%';
  /* manager_entityforms */  /* Dashboard | Submissions page */ $handler->display->display_options['menu']['type'] = 'default tab';
  /* manager_entityforms */  /* Dashboard | Submissions page */ $handler->display->display_options['menu']['title'] = 'List';
  /* manager_entityforms */  /* Dashboard | Submissions page */ $handler->display->display_options['menu']['description'] = 'View Submissions for all Entityforms';
  /* manager_entityforms */  /* Dashboard | Submissions page */ $handler->display->display_options['menu']['weight'] = '0';
  /* manager_entityforms */  /* Dashboard | Submissions page */ $handler->display->display_options['menu']['name'] = 'management';
  /* manager_entityforms */  /* Dashboard | Submissions page */ $handler->display->display_options['menu']['context'] = 0;
  /* manager_entityforms */  /* Dashboard | Submissions page */ $handler->display->display_options['tab_options']['type'] = 'normal';
  /* manager_entityforms */  /* Dashboard | Submissions page */ $handler->display->display_options['tab_options']['title'] = 'Submissions';
  /* manager_entityforms */  /* Dashboard | Submissions page */ $handler->display->display_options['tab_options']['weight'] = '0';
  /* manager_entityforms */  /* Dashboard | Submissions page */ $handler->display->display_options['tab_options']['name'] = 'management';

  /* manager_entityforms */ /* Display: Dashboard | XML Data export */
  /* manager_entityforms */  /* Dashboard | XML Data export */ $handler = $view->new_display('views_data_export', 'Dashboard | XML Data export', 'views_data_export_3');
  /* manager_entityforms */  /* Dashboard | XML Data export */ $handler->display->display_options['pager']['type'] = 'none';
  /* manager_entityforms */  /* Dashboard | XML Data export */ $handler->display->display_options['pager']['options']['offset'] = '0';
  /* manager_entityforms */  /* Dashboard | XML Data export */ $handler->display->display_options['style_plugin'] = 'views_data_export_xml';
  /* manager_entityforms */  /* Dashboard | XML Data export */ $handler->display->display_options['style_options']['provide_file'] = 1;
  /* manager_entityforms */  /* Dashboard | XML Data export */ $handler->display->display_options['style_options']['filename'] = '%1-title_submissions_%timestamp-full.xml';
  /* manager_entityforms */  /* Dashboard | XML Data export */ $handler->display->display_options['style_options']['parent_sort'] = 1;
  /* manager_entityforms */  /* Dashboard | XML Data export */ $handler->display->display_options['style_options']['transform'] = 1;
  /* manager_entityforms */  /* Dashboard | XML Data export */ $handler->display->display_options['style_options']['root_node'] = 'entityforms';
  /* manager_entityforms */  /* Dashboard | XML Data export */ $handler->display->display_options['style_options']['item_node'] = 'entityform';
  /* manager_entityforms */  /* Dashboard | XML Data export */ $handler->display->display_options['defaults']['fields'] = FALSE;
  /* manager_entityforms */  /* Dashboard | XML Data export */ /* Field: Entityform Submission: Groups audience */
  /* manager_entityforms */  /* Dashboard | XML Data export */ $handler->display->display_options['fields']['og_entityform_group_ref']['id'] = 'og_entityform_group_ref';
  /* manager_entityforms */  /* Dashboard | XML Data export */ $handler->display->display_options['fields']['og_entityform_group_ref']['table'] = 'og_membership';
  /* manager_entityforms */  /* Dashboard | XML Data export */ $handler->display->display_options['fields']['og_entityform_group_ref']['field'] = 'og_entityform_group_ref';
  /* manager_entityforms */  /* Dashboard | XML Data export */ $handler->display->display_options['fields']['og_entityform_group_ref']['label'] = 'Group';
  /* manager_entityforms */  /* Dashboard | XML Data export */ $handler->display->display_options['fields']['og_entityform_group_ref']['settings'] = array(
  /* manager_entityforms */  /* Dashboard | XML Data export */   'link' => 0,
  /* manager_entityforms */  /* Dashboard | XML Data export */   'field_formatter_class' => '',
  /* manager_entityforms */  /* Dashboard | XML Data export */ );
  /* manager_entityforms */  /* Dashboard | XML Data export */ $handler->display->display_options['fields']['og_entityform_group_ref']['delta_offset'] = '0';
  /* manager_entityforms */  /* Dashboard | XML Data export */ /* Field: User: Name */
  /* manager_entityforms */  /* Dashboard | XML Data export */ $handler->display->display_options['fields']['name']['id'] = 'name';
  /* manager_entityforms */  /* Dashboard | XML Data export */ $handler->display->display_options['fields']['name']['table'] = 'users';
  /* manager_entityforms */  /* Dashboard | XML Data export */ $handler->display->display_options['fields']['name']['field'] = 'name';
  /* manager_entityforms */  /* Dashboard | XML Data export */ $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  /* manager_entityforms */  /* Dashboard | XML Data export */ $handler->display->display_options['fields']['name']['label'] = 'Submitter';
  /* manager_entityforms */  /* Dashboard | XML Data export */ /* Field: Entityform Submission: Date submitted */
  /* manager_entityforms */  /* Dashboard | XML Data export */ $handler->display->display_options['fields']['created']['id'] = 'created';
  /* manager_entityforms */  /* Dashboard | XML Data export */ $handler->display->display_options['fields']['created']['table'] = 'entityform';
  /* manager_entityforms */  /* Dashboard | XML Data export */ $handler->display->display_options['fields']['created']['field'] = 'created';
  /* manager_entityforms */  /* Dashboard | XML Data export */ $handler->display->display_options['fields']['created']['date_format'] = 'medium';
  /* manager_entityforms */  /* Dashboard | XML Data export */ /* Field: Entityform Submission: Date changed */
  /* manager_entityforms */  /* Dashboard | XML Data export */ $handler->display->display_options['fields']['changed']['id'] = 'changed';
  /* manager_entityforms */  /* Dashboard | XML Data export */ $handler->display->display_options['fields']['changed']['table'] = 'entityform';
  /* manager_entityforms */  /* Dashboard | XML Data export */ $handler->display->display_options['fields']['changed']['field'] = 'changed';
  /* manager_entityforms */  /* Dashboard | XML Data export */ $handler->display->display_options['fields']['changed']['hide_alter_empty'] = FALSE;
  /* manager_entityforms */  /* Dashboard | XML Data export */ $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* manager_entityforms */  /* Dashboard | XML Data export */ /* Contextual filter: Entityform Submission: Organization (field_organization) */
  /* manager_entityforms */  /* Dashboard | XML Data export */ $handler->display->display_options['arguments']['field_organization_target_id']['id'] = 'field_organization_target_id';
  /* manager_entityforms */  /* Dashboard | XML Data export */ $handler->display->display_options['arguments']['field_organization_target_id']['table'] = 'field_data_field_organization';
  /* manager_entityforms */  /* Dashboard | XML Data export */ $handler->display->display_options['arguments']['field_organization_target_id']['field'] = 'field_organization_target_id';
  /* manager_entityforms */  /* Dashboard | XML Data export */ $handler->display->display_options['arguments']['field_organization_target_id']['default_action'] = 'default';
  /* manager_entityforms */  /* Dashboard | XML Data export */ $handler->display->display_options['arguments']['field_organization_target_id']['default_argument_type'] = 'node';
  /* manager_entityforms */  /* Dashboard | XML Data export */ $handler->display->display_options['arguments']['field_organization_target_id']['summary']['number_of_records'] = '0';
  /* manager_entityforms */  /* Dashboard | XML Data export */ $handler->display->display_options['arguments']['field_organization_target_id']['summary']['format'] = 'default_summary';
  /* manager_entityforms */  /* Dashboard | XML Data export */ $handler->display->display_options['arguments']['field_organization_target_id']['summary_options']['items_per_page'] = '25';
  /* manager_entityforms */  /* Dashboard | XML Data export */ $handler->display->display_options['arguments']['field_organization_target_id']['specify_validation'] = TRUE;
  /* manager_entityforms */  /* Dashboard | XML Data export */ $handler->display->display_options['arguments']['field_organization_target_id']['validate']['type'] = 'og';
  /* manager_entityforms */  /* Dashboard | XML Data export */ $handler->display->display_options['arguments']['field_organization_target_id']['validate']['fail'] = 'empty';
  /* manager_entityforms */  /* Dashboard | XML Data export */ /* Contextual filter: Entityform Submission: Entityform Type */
  /* manager_entityforms */  /* Dashboard | XML Data export */ $handler->display->display_options['arguments']['type']['id'] = 'type';
  /* manager_entityforms */  /* Dashboard | XML Data export */ $handler->display->display_options['arguments']['type']['table'] = 'entityform';
  /* manager_entityforms */  /* Dashboard | XML Data export */ $handler->display->display_options['arguments']['type']['field'] = 'type';
  /* manager_entityforms */  /* Dashboard | XML Data export */ $handler->display->display_options['arguments']['type']['title_enable'] = TRUE;
  /* manager_entityforms */  /* Dashboard | XML Data export */ $handler->display->display_options['arguments']['type']['title'] = 'entityform_submissions_%1';
  /* manager_entityforms */  /* Dashboard | XML Data export */ $handler->display->display_options['arguments']['type']['default_argument_type'] = 'fixed';
  /* manager_entityforms */  /* Dashboard | XML Data export */ $handler->display->display_options['arguments']['type']['summary']['number_of_records'] = '0';
  /* manager_entityforms */  /* Dashboard | XML Data export */ $handler->display->display_options['arguments']['type']['summary']['format'] = 'default_summary';
  /* manager_entityforms */  /* Dashboard | XML Data export */ $handler->display->display_options['arguments']['type']['summary_options']['items_per_page'] = '25';
  /* manager_entityforms */  /* Dashboard | XML Data export */ $handler->display->display_options['arguments']['type']['limit'] = '0';
  /* manager_entityforms */  /* Dashboard | XML Data export */ $handler->display->display_options['path'] = 'node/%/dashboard/forms/submissions/%/xml';
  /* manager_entityforms */  /* Dashboard | XML Data export */ $handler->display->display_options['displays'] = array(
  /* manager_entityforms */  /* Dashboard | XML Data export */   'page_2' => 'page_2',
  /* manager_entityforms */  /* Dashboard | XML Data export */   'default' => 0,
  /* manager_entityforms */  /* Dashboard | XML Data export */   'entityforms_admin_page' => 0,
  /* manager_entityforms */  /* Dashboard | XML Data export */   'autofields_table' => 0,
  /* manager_entityforms */  /* Dashboard | XML Data export */   'page_1' => 0,
  /* manager_entityforms */  /* Dashboard | XML Data export */   'page_3' => 0,
  /* manager_entityforms */  /* Dashboard | XML Data export */ );

  /* manager_entityforms */ /* Display: Dashboard | CSV Data export */
  /* manager_entityforms */  /* Dashboard | CSV Data export */ $handler = $view->new_display('views_data_export', 'Dashboard | CSV Data export', 'views_data_export_4');
  /* manager_entityforms */  /* Dashboard | CSV Data export */ $handler->display->display_options['pager']['type'] = 'none';
  /* manager_entityforms */  /* Dashboard | CSV Data export */ $handler->display->display_options['pager']['options']['offset'] = '0';
  /* manager_entityforms */  /* Dashboard | CSV Data export */ $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  /* manager_entityforms */  /* Dashboard | CSV Data export */ $handler->display->display_options['style_options']['provide_file'] = 1;
  /* manager_entityforms */  /* Dashboard | CSV Data export */ $handler->display->display_options['style_options']['filename'] = '%1-title_submissions_%timestamp-full.csv';
  /* manager_entityforms */  /* Dashboard | CSV Data export */ $handler->display->display_options['style_options']['parent_sort'] = 1;
  /* manager_entityforms */  /* Dashboard | CSV Data export */ $handler->display->display_options['style_options']['quote'] = 1;
  /* manager_entityforms */  /* Dashboard | CSV Data export */ $handler->display->display_options['style_options']['trim'] = 0;
  /* manager_entityforms */  /* Dashboard | CSV Data export */ $handler->display->display_options['style_options']['replace_newlines'] = 0;
  /* manager_entityforms */  /* Dashboard | CSV Data export */ $handler->display->display_options['style_options']['header'] = 1;
  /* manager_entityforms */  /* Dashboard | CSV Data export */ $handler->display->display_options['style_options']['encoding'] = 'ASCII';
  /* manager_entityforms */  /* Dashboard | CSV Data export */ $handler->display->display_options['defaults']['fields'] = FALSE;
  /* manager_entityforms */  /* Dashboard | CSV Data export */ /* Field: Entityform Submission: Groups audience */
  /* manager_entityforms */  /* Dashboard | CSV Data export */ $handler->display->display_options['fields']['og_entityform_group_ref']['id'] = 'og_entityform_group_ref';
  /* manager_entityforms */  /* Dashboard | CSV Data export */ $handler->display->display_options['fields']['og_entityform_group_ref']['table'] = 'og_membership';
  /* manager_entityforms */  /* Dashboard | CSV Data export */ $handler->display->display_options['fields']['og_entityform_group_ref']['field'] = 'og_entityform_group_ref';
  /* manager_entityforms */  /* Dashboard | CSV Data export */ $handler->display->display_options['fields']['og_entityform_group_ref']['label'] = 'Group';
  /* manager_entityforms */  /* Dashboard | CSV Data export */ $handler->display->display_options['fields']['og_entityform_group_ref']['settings'] = array(
  /* manager_entityforms */  /* Dashboard | CSV Data export */   'link' => 0,
  /* manager_entityforms */  /* Dashboard | CSV Data export */   'field_formatter_class' => '',
  /* manager_entityforms */  /* Dashboard | CSV Data export */ );
  /* manager_entityforms */  /* Dashboard | CSV Data export */ $handler->display->display_options['fields']['og_entityform_group_ref']['delta_offset'] = '0';
  /* manager_entityforms */  /* Dashboard | CSV Data export */ /* Field: User: Name */
  /* manager_entityforms */  /* Dashboard | CSV Data export */ $handler->display->display_options['fields']['name']['id'] = 'name';
  /* manager_entityforms */  /* Dashboard | CSV Data export */ $handler->display->display_options['fields']['name']['table'] = 'users';
  /* manager_entityforms */  /* Dashboard | CSV Data export */ $handler->display->display_options['fields']['name']['field'] = 'name';
  /* manager_entityforms */  /* Dashboard | CSV Data export */ $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  /* manager_entityforms */  /* Dashboard | CSV Data export */ $handler->display->display_options['fields']['name']['label'] = 'Submitter';
  /* manager_entityforms */  /* Dashboard | CSV Data export */ /* Field: Entityform Submission: Date submitted */
  /* manager_entityforms */  /* Dashboard | CSV Data export */ $handler->display->display_options['fields']['created']['id'] = 'created';
  /* manager_entityforms */  /* Dashboard | CSV Data export */ $handler->display->display_options['fields']['created']['table'] = 'entityform';
  /* manager_entityforms */  /* Dashboard | CSV Data export */ $handler->display->display_options['fields']['created']['field'] = 'created';
  /* manager_entityforms */  /* Dashboard | CSV Data export */ $handler->display->display_options['fields']['created']['date_format'] = 'medium';
  /* manager_entityforms */  /* Dashboard | CSV Data export */ /* Field: Entityform Submission: Date changed */
  /* manager_entityforms */  /* Dashboard | CSV Data export */ $handler->display->display_options['fields']['changed']['id'] = 'changed';
  /* manager_entityforms */  /* Dashboard | CSV Data export */ $handler->display->display_options['fields']['changed']['table'] = 'entityform';
  /* manager_entityforms */  /* Dashboard | CSV Data export */ $handler->display->display_options['fields']['changed']['field'] = 'changed';
  /* manager_entityforms */  /* Dashboard | CSV Data export */ $handler->display->display_options['fields']['changed']['hide_alter_empty'] = FALSE;
  /* manager_entityforms */  /* Dashboard | CSV Data export */ $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* manager_entityforms */  /* Dashboard | CSV Data export */ /* Contextual filter: Entityform Submission: Organization (field_organization) */
  /* manager_entityforms */  /* Dashboard | CSV Data export */ $handler->display->display_options['arguments']['field_organization_target_id']['id'] = 'field_organization_target_id';
  /* manager_entityforms */  /* Dashboard | CSV Data export */ $handler->display->display_options['arguments']['field_organization_target_id']['table'] = 'field_data_field_organization';
  /* manager_entityforms */  /* Dashboard | CSV Data export */ $handler->display->display_options['arguments']['field_organization_target_id']['field'] = 'field_organization_target_id';
  /* manager_entityforms */  /* Dashboard | CSV Data export */ $handler->display->display_options['arguments']['field_organization_target_id']['default_action'] = 'default';
  /* manager_entityforms */  /* Dashboard | CSV Data export */ $handler->display->display_options['arguments']['field_organization_target_id']['default_argument_type'] = 'node';
  /* manager_entityforms */  /* Dashboard | CSV Data export */ $handler->display->display_options['arguments']['field_organization_target_id']['summary']['number_of_records'] = '0';
  /* manager_entityforms */  /* Dashboard | CSV Data export */ $handler->display->display_options['arguments']['field_organization_target_id']['summary']['format'] = 'default_summary';
  /* manager_entityforms */  /* Dashboard | CSV Data export */ $handler->display->display_options['arguments']['field_organization_target_id']['summary_options']['items_per_page'] = '25';
  /* manager_entityforms */  /* Dashboard | CSV Data export */ $handler->display->display_options['arguments']['field_organization_target_id']['specify_validation'] = TRUE;
  /* manager_entityforms */  /* Dashboard | CSV Data export */ $handler->display->display_options['arguments']['field_organization_target_id']['validate']['type'] = 'og';
  /* manager_entityforms */  /* Dashboard | CSV Data export */ $handler->display->display_options['arguments']['field_organization_target_id']['validate']['fail'] = 'empty';
  /* manager_entityforms */  /* Dashboard | CSV Data export */ /* Contextual filter: Entityform Submission: Entityform Type */
  /* manager_entityforms */  /* Dashboard | CSV Data export */ $handler->display->display_options['arguments']['type']['id'] = 'type';
  /* manager_entityforms */  /* Dashboard | CSV Data export */ $handler->display->display_options['arguments']['type']['table'] = 'entityform';
  /* manager_entityforms */  /* Dashboard | CSV Data export */ $handler->display->display_options['arguments']['type']['field'] = 'type';
  /* manager_entityforms */  /* Dashboard | CSV Data export */ $handler->display->display_options['arguments']['type']['title_enable'] = TRUE;
  /* manager_entityforms */  /* Dashboard | CSV Data export */ $handler->display->display_options['arguments']['type']['title'] = 'entityform_submissions_%1';
  /* manager_entityforms */  /* Dashboard | CSV Data export */ $handler->display->display_options['arguments']['type']['default_argument_type'] = 'fixed';
  /* manager_entityforms */  /* Dashboard | CSV Data export */ $handler->display->display_options['arguments']['type']['summary']['number_of_records'] = '0';
  /* manager_entityforms */  /* Dashboard | CSV Data export */ $handler->display->display_options['arguments']['type']['summary']['format'] = 'default_summary';
  /* manager_entityforms */  /* Dashboard | CSV Data export */ $handler->display->display_options['arguments']['type']['summary_options']['items_per_page'] = '25';
  /* manager_entityforms */  /* Dashboard | CSV Data export */ $handler->display->display_options['arguments']['type']['limit'] = '0';
  /* manager_entityforms */  /* Dashboard | CSV Data export */ $handler->display->display_options['path'] = 'node/%/dashboard/forms/submissions/%/csv';
  /* manager_entityforms */  /* Dashboard | CSV Data export */ $handler->display->display_options['displays'] = array(
  /* manager_entityforms */  /* Dashboard | CSV Data export */   'page_2' => 'page_2',
  /* manager_entityforms */  /* Dashboard | CSV Data export */   'default' => 0,
  /* manager_entityforms */  /* Dashboard | CSV Data export */   'entityforms_admin_page' => 0,
  /* manager_entityforms */  /* Dashboard | CSV Data export */   'autofields_table' => 0,
  /* manager_entityforms */  /* Dashboard | CSV Data export */   'page_1' => 0,
  /* manager_entityforms */  /* Dashboard | CSV Data export */   'page_3' => 0,
  /* manager_entityforms */  /* Dashboard | CSV Data export */ );

  /* manager_entityforms */ /* Display: Dashboard | User Submissions */
  /* manager_entityforms */  /* Dashboard | User Submissions */ $handler = $view->new_display('page', 'Dashboard | User Submissions', 'page_3');
  /* manager_entityforms */  /* Dashboard | User Submissions */ $handler->display->display_options['defaults']['fields'] = FALSE;
  /* manager_entityforms */  /* Dashboard | User Submissions */ /* Field: Bulk operations: Entityform Submission */
  /* manager_entityforms */  /* Dashboard | User Submissions */ $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  /* manager_entityforms */  /* Dashboard | User Submissions */ $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'entityform';
  /* manager_entityforms */  /* Dashboard | User Submissions */ $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  /* manager_entityforms */  /* Dashboard | User Submissions */ $handler->display->display_options['fields']['views_bulk_operations']['label'] = '';
  /* manager_entityforms */  /* Dashboard | User Submissions */ $handler->display->display_options['fields']['views_bulk_operations']['element_label_colon'] = FALSE;
  /* manager_entityforms */  /* Dashboard | User Submissions */ $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '1';
  /* manager_entityforms */  /* Dashboard | User Submissions */ $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  /* manager_entityforms */  /* Dashboard | User Submissions */ $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  /* manager_entityforms */  /* Dashboard | User Submissions */ $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  /* manager_entityforms */  /* Dashboard | User Submissions */ $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
  /* manager_entityforms */  /* Dashboard | User Submissions */   'action::views_bulk_operations_delete_item' => array(
  /* manager_entityforms */  /* Dashboard | User Submissions */     'selected' => 1,
  /* manager_entityforms */  /* Dashboard | User Submissions */     'skip_confirmation' => 0,
  /* manager_entityforms */  /* Dashboard | User Submissions */     'override_label' => 1,
  /* manager_entityforms */  /* Dashboard | User Submissions */     'label' => 'Delete Submissions',
  /* manager_entityforms */  /* Dashboard | User Submissions */     'postpone_processing' => 0,
  /* manager_entityforms */  /* Dashboard | User Submissions */   ),
  /* manager_entityforms */  /* Dashboard | User Submissions */ );
  /* manager_entityforms */  /* Dashboard | User Submissions */ /* Field: User: Name */
  /* manager_entityforms */  /* Dashboard | User Submissions */ $handler->display->display_options['fields']['name']['id'] = 'name';
  /* manager_entityforms */  /* Dashboard | User Submissions */ $handler->display->display_options['fields']['name']['table'] = 'users';
  /* manager_entityforms */  /* Dashboard | User Submissions */ $handler->display->display_options['fields']['name']['field'] = 'name';
  /* manager_entityforms */  /* Dashboard | User Submissions */ $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  /* manager_entityforms */  /* Dashboard | User Submissions */ $handler->display->display_options['fields']['name']['label'] = 'Submitter';
  /* manager_entityforms */  /* Dashboard | User Submissions */ /* Field: Field: Family Name */
  /* manager_entityforms */  /* Dashboard | User Submissions */ $handler->display->display_options['fields']['field_name_last']['id'] = 'field_name_last';
  /* manager_entityforms */  /* Dashboard | User Submissions */ $handler->display->display_options['fields']['field_name_last']['table'] = 'field_data_field_name_last';
  /* manager_entityforms */  /* Dashboard | User Submissions */ $handler->display->display_options['fields']['field_name_last']['field'] = 'field_name_last';
  /* manager_entityforms */  /* Dashboard | User Submissions */ $handler->display->display_options['fields']['field_name_last']['label'] = '';
  /* manager_entityforms */  /* Dashboard | User Submissions */ $handler->display->display_options['fields']['field_name_last']['exclude'] = TRUE;
  /* manager_entityforms */  /* Dashboard | User Submissions */ $handler->display->display_options['fields']['field_name_last']['element_type'] = '0';
  /* manager_entityforms */  /* Dashboard | User Submissions */ $handler->display->display_options['fields']['field_name_last']['element_label_colon'] = FALSE;
  /* manager_entityforms */  /* Dashboard | User Submissions */ $handler->display->display_options['fields']['field_name_last']['element_wrapper_type'] = '0';
  /* manager_entityforms */  /* Dashboard | User Submissions */ $handler->display->display_options['fields']['field_name_last']['element_default_classes'] = FALSE;
  /* manager_entityforms */  /* Dashboard | User Submissions */ $handler->display->display_options['fields']['field_name_last']['settings'] = array(
  /* manager_entityforms */  /* Dashboard | User Submissions */   'field_formatter_class' => '',
  /* manager_entityforms */  /* Dashboard | User Submissions */ );
  /* manager_entityforms */  /* Dashboard | User Submissions */ $handler->display->display_options['fields']['field_name_last']['field_api_classes'] = TRUE;
  /* manager_entityforms */  /* Dashboard | User Submissions */ /* Field: Field: Given Name */
  /* manager_entityforms */  /* Dashboard | User Submissions */ $handler->display->display_options['fields']['field_name_first']['id'] = 'field_name_first';
  /* manager_entityforms */  /* Dashboard | User Submissions */ $handler->display->display_options['fields']['field_name_first']['table'] = 'field_data_field_name_first';
  /* manager_entityforms */  /* Dashboard | User Submissions */ $handler->display->display_options['fields']['field_name_first']['field'] = 'field_name_first';
  /* manager_entityforms */  /* Dashboard | User Submissions */ $handler->display->display_options['fields']['field_name_first']['label'] = 'Name';
  /* manager_entityforms */  /* Dashboard | User Submissions */ $handler->display->display_options['fields']['field_name_first']['alter']['alter_text'] = TRUE;
  /* manager_entityforms */  /* Dashboard | User Submissions */ $handler->display->display_options['fields']['field_name_first']['alter']['text'] = '[field_name_first]  [field_name_last]';
  /* manager_entityforms */  /* Dashboard | User Submissions */ $handler->display->display_options['fields']['field_name_first']['element_type'] = '0';
  /* manager_entityforms */  /* Dashboard | User Submissions */ $handler->display->display_options['fields']['field_name_first']['element_wrapper_type'] = '0';
  /* manager_entityforms */  /* Dashboard | User Submissions */ $handler->display->display_options['fields']['field_name_first']['element_default_classes'] = FALSE;
  /* manager_entityforms */  /* Dashboard | User Submissions */ $handler->display->display_options['fields']['field_name_first']['settings'] = array(
  /* manager_entityforms */  /* Dashboard | User Submissions */   'field_formatter_class' => '',
  /* manager_entityforms */  /* Dashboard | User Submissions */ );
  /* manager_entityforms */  /* Dashboard | User Submissions */ $handler->display->display_options['fields']['field_name_first']['field_api_classes'] = TRUE;
  /* manager_entityforms */  /* Dashboard | User Submissions */ /* Field: Entityform Submission: Status */
  /* manager_entityforms */  /* Dashboard | User Submissions */ $handler->display->display_options['fields']['field_status']['id'] = 'field_status';
  /* manager_entityforms */  /* Dashboard | User Submissions */ $handler->display->display_options['fields']['field_status']['table'] = 'field_data_field_status';
  /* manager_entityforms */  /* Dashboard | User Submissions */ $handler->display->display_options['fields']['field_status']['field'] = 'field_status';
  /* manager_entityforms */  /* Dashboard | User Submissions */ $handler->display->display_options['fields']['field_status']['element_type'] = '0';
  /* manager_entityforms */  /* Dashboard | User Submissions */ $handler->display->display_options['fields']['field_status']['element_wrapper_type'] = '0';
  /* manager_entityforms */  /* Dashboard | User Submissions */ $handler->display->display_options['fields']['field_status']['element_default_classes'] = FALSE;
  /* manager_entityforms */  /* Dashboard | User Submissions */ $handler->display->display_options['fields']['field_status']['settings'] = array(
  /* manager_entityforms */  /* Dashboard | User Submissions */   'field_formatter_class' => '',
  /* manager_entityforms */  /* Dashboard | User Submissions */ );
  /* manager_entityforms */  /* Dashboard | User Submissions */ $handler->display->display_options['fields']['field_status']['field_api_classes'] = TRUE;
  /* manager_entityforms */  /* Dashboard | User Submissions */ /* Field: Entityform Submission: Date submitted */
  /* manager_entityforms */  /* Dashboard | User Submissions */ $handler->display->display_options['fields']['created']['id'] = 'created';
  /* manager_entityforms */  /* Dashboard | User Submissions */ $handler->display->display_options['fields']['created']['table'] = 'entityform';
  /* manager_entityforms */  /* Dashboard | User Submissions */ $handler->display->display_options['fields']['created']['field'] = 'created';
  /* manager_entityforms */  /* Dashboard | User Submissions */ $handler->display->display_options['fields']['created']['date_format'] = 'medium';
  /* manager_entityforms */  /* Dashboard | User Submissions */ /* Field: Entityform Submission: Date changed */
  /* manager_entityforms */  /* Dashboard | User Submissions */ $handler->display->display_options['fields']['changed']['id'] = 'changed';
  /* manager_entityforms */  /* Dashboard | User Submissions */ $handler->display->display_options['fields']['changed']['table'] = 'entityform';
  /* manager_entityforms */  /* Dashboard | User Submissions */ $handler->display->display_options['fields']['changed']['field'] = 'changed';
  /* manager_entityforms */  /* Dashboard | User Submissions */ $handler->display->display_options['fields']['changed']['hide_alter_empty'] = FALSE;
  /* manager_entityforms */  /* Dashboard | User Submissions */ /* Field: Entityform Submission: Entityform submission ID */
  /* manager_entityforms */  /* Dashboard | User Submissions */ $handler->display->display_options['fields']['entityform_id']['id'] = 'entityform_id';
  /* manager_entityforms */  /* Dashboard | User Submissions */ $handler->display->display_options['fields']['entityform_id']['table'] = 'entityform';
  /* manager_entityforms */  /* Dashboard | User Submissions */ $handler->display->display_options['fields']['entityform_id']['field'] = 'entityform_id';
  /* manager_entityforms */  /* Dashboard | User Submissions */ $handler->display->display_options['fields']['entityform_id']['label'] = '';
  /* manager_entityforms */  /* Dashboard | User Submissions */ $handler->display->display_options['fields']['entityform_id']['exclude'] = TRUE;
  /* manager_entityforms */  /* Dashboard | User Submissions */ $handler->display->display_options['fields']['entityform_id']['element_label_colon'] = FALSE;
  /* manager_entityforms */  /* Dashboard | User Submissions */ $handler->display->display_options['fields']['entityform_id']['separator'] = '';
  /* manager_entityforms */  /* Dashboard | User Submissions */ /* Field: Global: Custom text */
  /* manager_entityforms */  /* Dashboard | User Submissions */ $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  /* manager_entityforms */  /* Dashboard | User Submissions */ $handler->display->display_options['fields']['nothing']['table'] = 'views';
  /* manager_entityforms */  /* Dashboard | User Submissions */ $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  /* manager_entityforms */  /* Dashboard | User Submissions */ $handler->display->display_options['fields']['nothing']['label'] = '';
  /* manager_entityforms */  /* Dashboard | User Submissions */ $handler->display->display_options['fields']['nothing']['alter']['text'] = 'View';
  /* manager_entityforms */  /* Dashboard | User Submissions */ $handler->display->display_options['fields']['nothing']['alter']['make_link'] = TRUE;
  /* manager_entityforms */  /* Dashboard | User Submissions */ $handler->display->display_options['fields']['nothing']['alter']['path'] = 'admin/manage/users/regforms/[entityform_id]?destination=node/!1/dashboard/userforms/submissions/!2';
  /* manager_entityforms */  /* Dashboard | User Submissions */ $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* manager_entityforms */  /* Dashboard | User Submissions */ $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* manager_entityforms */  /* Dashboard | User Submissions */ /* Contextual filter: Entityform Submission: Organization (field_organization) */
  /* manager_entityforms */  /* Dashboard | User Submissions */ $handler->display->display_options['arguments']['field_organization_target_id']['id'] = 'field_organization_target_id';
  /* manager_entityforms */  /* Dashboard | User Submissions */ $handler->display->display_options['arguments']['field_organization_target_id']['table'] = 'field_data_field_organization';
  /* manager_entityforms */  /* Dashboard | User Submissions */ $handler->display->display_options['arguments']['field_organization_target_id']['field'] = 'field_organization_target_id';
  /* manager_entityforms */  /* Dashboard | User Submissions */ $handler->display->display_options['arguments']['field_organization_target_id']['default_action'] = 'default';
  /* manager_entityforms */  /* Dashboard | User Submissions */ $handler->display->display_options['arguments']['field_organization_target_id']['default_argument_type'] = 'node';
  /* manager_entityforms */  /* Dashboard | User Submissions */ $handler->display->display_options['arguments']['field_organization_target_id']['summary']['number_of_records'] = '0';
  /* manager_entityforms */  /* Dashboard | User Submissions */ $handler->display->display_options['arguments']['field_organization_target_id']['summary']['format'] = 'default_summary';
  /* manager_entityforms */  /* Dashboard | User Submissions */ $handler->display->display_options['arguments']['field_organization_target_id']['summary_options']['items_per_page'] = '25';
  /* manager_entityforms */  /* Dashboard | User Submissions */ $handler->display->display_options['arguments']['field_organization_target_id']['specify_validation'] = TRUE;
  /* manager_entityforms */  /* Dashboard | User Submissions */ $handler->display->display_options['arguments']['field_organization_target_id']['validate']['type'] = 'og';
  /* manager_entityforms */  /* Dashboard | User Submissions */ $handler->display->display_options['arguments']['field_organization_target_id']['validate']['fail'] = 'empty';
  /* manager_entityforms */  /* Dashboard | User Submissions */ /* Contextual filter: Entityform Submission: Entityform Type */
  /* manager_entityforms */  /* Dashboard | User Submissions */ $handler->display->display_options['arguments']['type']['id'] = 'type';
  /* manager_entityforms */  /* Dashboard | User Submissions */ $handler->display->display_options['arguments']['type']['table'] = 'entityform';
  /* manager_entityforms */  /* Dashboard | User Submissions */ $handler->display->display_options['arguments']['type']['field'] = 'type';
  /* manager_entityforms */  /* Dashboard | User Submissions */ $handler->display->display_options['arguments']['type']['default_action'] = 'not found';
  /* manager_entityforms */  /* Dashboard | User Submissions */ $handler->display->display_options['arguments']['type']['title_enable'] = TRUE;
  /* manager_entityforms */  /* Dashboard | User Submissions */ $handler->display->display_options['arguments']['type']['title'] = 'Submissions for %1';
  /* manager_entityforms */  /* Dashboard | User Submissions */ $handler->display->display_options['arguments']['type']['default_argument_type'] = 'fixed';
  /* manager_entityforms */  /* Dashboard | User Submissions */ $handler->display->display_options['arguments']['type']['summary']['number_of_records'] = '0';
  /* manager_entityforms */  /* Dashboard | User Submissions */ $handler->display->display_options['arguments']['type']['summary']['format'] = 'default_summary';
  /* manager_entityforms */  /* Dashboard | User Submissions */ $handler->display->display_options['arguments']['type']['summary_options']['items_per_page'] = '25';
  /* manager_entityforms */  /* Dashboard | User Submissions */ $handler->display->display_options['arguments']['type']['limit'] = '0';
  /* manager_entityforms */  /* Dashboard | User Submissions */ $handler->display->display_options['path'] = 'node/%/dashboard/userforms/submissions/%';
  /* manager_entityforms */  /* Dashboard | User Submissions */ $handler->display->display_options['menu']['type'] = 'default tab';
  /* manager_entityforms */  /* Dashboard | User Submissions */ $handler->display->display_options['menu']['title'] = 'List';
  /* manager_entityforms */  /* Dashboard | User Submissions */ $handler->display->display_options['menu']['description'] = 'View Submissions for all Entityforms';
  /* manager_entityforms */  /* Dashboard | User Submissions */ $handler->display->display_options['menu']['weight'] = '0';
  /* manager_entityforms */  /* Dashboard | User Submissions */ $handler->display->display_options['menu']['name'] = 'management';
  /* manager_entityforms */  /* Dashboard | User Submissions */ $handler->display->display_options['menu']['context'] = 0;
  /* manager_entityforms */  /* Dashboard | User Submissions */ $handler->display->display_options['tab_options']['type'] = 'normal';
  /* manager_entityforms */  /* Dashboard | User Submissions */ $handler->display->display_options['tab_options']['title'] = 'Submissions';
  /* manager_entityforms */  /* Dashboard | User Submissions */ $handler->display->display_options['tab_options']['weight'] = '0';
  /* manager_entityforms */  /* Dashboard | User Submissions */ $handler->display->display_options['tab_options']['name'] = 'management';

  /* manager_entityforms */ /* Display: Dashboard | User XML Data export */
  /* manager_entityforms */  /* Dashboard | User XML Data export */ $handler = $view->new_display('views_data_export', 'Dashboard | User XML Data export', 'views_data_export_5');
  /* manager_entityforms */  /* Dashboard | User XML Data export */ $handler->display->display_options['pager']['type'] = 'none';
  /* manager_entityforms */  /* Dashboard | User XML Data export */ $handler->display->display_options['pager']['options']['offset'] = '0';
  /* manager_entityforms */  /* Dashboard | User XML Data export */ $handler->display->display_options['style_plugin'] = 'views_data_export_xml';
  /* manager_entityforms */  /* Dashboard | User XML Data export */ $handler->display->display_options['style_options']['provide_file'] = 1;
  /* manager_entityforms */  /* Dashboard | User XML Data export */ $handler->display->display_options['style_options']['filename'] = '%1-title_submissions_%timestamp-full.xml';
  /* manager_entityforms */  /* Dashboard | User XML Data export */ $handler->display->display_options['style_options']['parent_sort'] = 1;
  /* manager_entityforms */  /* Dashboard | User XML Data export */ $handler->display->display_options['style_options']['transform'] = 1;
  /* manager_entityforms */  /* Dashboard | User XML Data export */ $handler->display->display_options['style_options']['root_node'] = 'entityforms';
  /* manager_entityforms */  /* Dashboard | User XML Data export */ $handler->display->display_options['style_options']['item_node'] = 'entityform';
  /* manager_entityforms */  /* Dashboard | User XML Data export */ $handler->display->display_options['defaults']['fields'] = FALSE;
  /* manager_entityforms */  /* Dashboard | User XML Data export */ /* Field: User: Name */
  /* manager_entityforms */  /* Dashboard | User XML Data export */ $handler->display->display_options['fields']['name']['id'] = 'name';
  /* manager_entityforms */  /* Dashboard | User XML Data export */ $handler->display->display_options['fields']['name']['table'] = 'users';
  /* manager_entityforms */  /* Dashboard | User XML Data export */ $handler->display->display_options['fields']['name']['field'] = 'name';
  /* manager_entityforms */  /* Dashboard | User XML Data export */ $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  /* manager_entityforms */  /* Dashboard | User XML Data export */ $handler->display->display_options['fields']['name']['label'] = 'Submitter';
  /* manager_entityforms */  /* Dashboard | User XML Data export */ /* Field: Field: Family Name */
  /* manager_entityforms */  /* Dashboard | User XML Data export */ $handler->display->display_options['fields']['field_name_last']['id'] = 'field_name_last';
  /* manager_entityforms */  /* Dashboard | User XML Data export */ $handler->display->display_options['fields']['field_name_last']['table'] = 'field_data_field_name_last';
  /* manager_entityforms */  /* Dashboard | User XML Data export */ $handler->display->display_options['fields']['field_name_last']['field'] = 'field_name_last';
  /* manager_entityforms */  /* Dashboard | User XML Data export */ $handler->display->display_options['fields']['field_name_last']['label'] = '';
  /* manager_entityforms */  /* Dashboard | User XML Data export */ $handler->display->display_options['fields']['field_name_last']['exclude'] = TRUE;
  /* manager_entityforms */  /* Dashboard | User XML Data export */ $handler->display->display_options['fields']['field_name_last']['element_type'] = '0';
  /* manager_entityforms */  /* Dashboard | User XML Data export */ $handler->display->display_options['fields']['field_name_last']['element_label_colon'] = FALSE;
  /* manager_entityforms */  /* Dashboard | User XML Data export */ $handler->display->display_options['fields']['field_name_last']['element_wrapper_type'] = '0';
  /* manager_entityforms */  /* Dashboard | User XML Data export */ $handler->display->display_options['fields']['field_name_last']['element_default_classes'] = FALSE;
  /* manager_entityforms */  /* Dashboard | User XML Data export */ $handler->display->display_options['fields']['field_name_last']['settings'] = array(
  /* manager_entityforms */  /* Dashboard | User XML Data export */   'field_formatter_class' => '',
  /* manager_entityforms */  /* Dashboard | User XML Data export */ );
  /* manager_entityforms */  /* Dashboard | User XML Data export */ $handler->display->display_options['fields']['field_name_last']['field_api_classes'] = TRUE;
  /* manager_entityforms */  /* Dashboard | User XML Data export */ /* Field: Field: Given Name */
  /* manager_entityforms */  /* Dashboard | User XML Data export */ $handler->display->display_options['fields']['field_name_first']['id'] = 'field_name_first';
  /* manager_entityforms */  /* Dashboard | User XML Data export */ $handler->display->display_options['fields']['field_name_first']['table'] = 'field_data_field_name_first';
  /* manager_entityforms */  /* Dashboard | User XML Data export */ $handler->display->display_options['fields']['field_name_first']['field'] = 'field_name_first';
  /* manager_entityforms */  /* Dashboard | User XML Data export */ $handler->display->display_options['fields']['field_name_first']['label'] = 'Name';
  /* manager_entityforms */  /* Dashboard | User XML Data export */ $handler->display->display_options['fields']['field_name_first']['alter']['alter_text'] = TRUE;
  /* manager_entityforms */  /* Dashboard | User XML Data export */ $handler->display->display_options['fields']['field_name_first']['alter']['text'] = '[field_name_first] [field_name_last]';
  /* manager_entityforms */  /* Dashboard | User XML Data export */ $handler->display->display_options['fields']['field_name_first']['element_type'] = '0';
  /* manager_entityforms */  /* Dashboard | User XML Data export */ $handler->display->display_options['fields']['field_name_first']['element_label_colon'] = FALSE;
  /* manager_entityforms */  /* Dashboard | User XML Data export */ $handler->display->display_options['fields']['field_name_first']['element_wrapper_type'] = '0';
  /* manager_entityforms */  /* Dashboard | User XML Data export */ $handler->display->display_options['fields']['field_name_first']['element_default_classes'] = FALSE;
  /* manager_entityforms */  /* Dashboard | User XML Data export */ $handler->display->display_options['fields']['field_name_first']['settings'] = array(
  /* manager_entityforms */  /* Dashboard | User XML Data export */   'field_formatter_class' => '',
  /* manager_entityforms */  /* Dashboard | User XML Data export */ );
  /* manager_entityforms */  /* Dashboard | User XML Data export */ $handler->display->display_options['fields']['field_name_first']['field_api_classes'] = TRUE;
  /* manager_entityforms */  /* Dashboard | User XML Data export */ /* Field: Entityform Submission: Status */
  /* manager_entityforms */  /* Dashboard | User XML Data export */ $handler->display->display_options['fields']['field_status']['id'] = 'field_status';
  /* manager_entityforms */  /* Dashboard | User XML Data export */ $handler->display->display_options['fields']['field_status']['table'] = 'field_data_field_status';
  /* manager_entityforms */  /* Dashboard | User XML Data export */ $handler->display->display_options['fields']['field_status']['field'] = 'field_status';
  /* manager_entityforms */  /* Dashboard | User XML Data export */ $handler->display->display_options['fields']['field_status']['element_type'] = '0';
  /* manager_entityforms */  /* Dashboard | User XML Data export */ $handler->display->display_options['fields']['field_status']['element_wrapper_type'] = '0';
  /* manager_entityforms */  /* Dashboard | User XML Data export */ $handler->display->display_options['fields']['field_status']['element_default_classes'] = FALSE;
  /* manager_entityforms */  /* Dashboard | User XML Data export */ $handler->display->display_options['fields']['field_status']['settings'] = array(
  /* manager_entityforms */  /* Dashboard | User XML Data export */   'field_formatter_class' => '',
  /* manager_entityforms */  /* Dashboard | User XML Data export */ );
  /* manager_entityforms */  /* Dashboard | User XML Data export */ $handler->display->display_options['fields']['field_status']['field_api_classes'] = TRUE;
  /* manager_entityforms */  /* Dashboard | User XML Data export */ /* Field: Entityform Submission: Date submitted */
  /* manager_entityforms */  /* Dashboard | User XML Data export */ $handler->display->display_options['fields']['created']['id'] = 'created';
  /* manager_entityforms */  /* Dashboard | User XML Data export */ $handler->display->display_options['fields']['created']['table'] = 'entityform';
  /* manager_entityforms */  /* Dashboard | User XML Data export */ $handler->display->display_options['fields']['created']['field'] = 'created';
  /* manager_entityforms */  /* Dashboard | User XML Data export */ $handler->display->display_options['fields']['created']['date_format'] = 'medium';
  /* manager_entityforms */  /* Dashboard | User XML Data export */ /* Field: Entityform Submission: Date changed */
  /* manager_entityforms */  /* Dashboard | User XML Data export */ $handler->display->display_options['fields']['changed']['id'] = 'changed';
  /* manager_entityforms */  /* Dashboard | User XML Data export */ $handler->display->display_options['fields']['changed']['table'] = 'entityform';
  /* manager_entityforms */  /* Dashboard | User XML Data export */ $handler->display->display_options['fields']['changed']['field'] = 'changed';
  /* manager_entityforms */  /* Dashboard | User XML Data export */ $handler->display->display_options['fields']['changed']['hide_alter_empty'] = FALSE;
  /* manager_entityforms */  /* Dashboard | User XML Data export */ $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* manager_entityforms */  /* Dashboard | User XML Data export */ /* Contextual filter: Entityform Submission: Organization (field_organization) */
  /* manager_entityforms */  /* Dashboard | User XML Data export */ $handler->display->display_options['arguments']['field_organization_target_id']['id'] = 'field_organization_target_id';
  /* manager_entityforms */  /* Dashboard | User XML Data export */ $handler->display->display_options['arguments']['field_organization_target_id']['table'] = 'field_data_field_organization';
  /* manager_entityforms */  /* Dashboard | User XML Data export */ $handler->display->display_options['arguments']['field_organization_target_id']['field'] = 'field_organization_target_id';
  /* manager_entityforms */  /* Dashboard | User XML Data export */ $handler->display->display_options['arguments']['field_organization_target_id']['default_action'] = 'default';
  /* manager_entityforms */  /* Dashboard | User XML Data export */ $handler->display->display_options['arguments']['field_organization_target_id']['default_argument_type'] = 'node';
  /* manager_entityforms */  /* Dashboard | User XML Data export */ $handler->display->display_options['arguments']['field_organization_target_id']['summary']['number_of_records'] = '0';
  /* manager_entityforms */  /* Dashboard | User XML Data export */ $handler->display->display_options['arguments']['field_organization_target_id']['summary']['format'] = 'default_summary';
  /* manager_entityforms */  /* Dashboard | User XML Data export */ $handler->display->display_options['arguments']['field_organization_target_id']['summary_options']['items_per_page'] = '25';
  /* manager_entityforms */  /* Dashboard | User XML Data export */ $handler->display->display_options['arguments']['field_organization_target_id']['specify_validation'] = TRUE;
  /* manager_entityforms */  /* Dashboard | User XML Data export */ $handler->display->display_options['arguments']['field_organization_target_id']['validate']['type'] = 'og';
  /* manager_entityforms */  /* Dashboard | User XML Data export */ $handler->display->display_options['arguments']['field_organization_target_id']['validate']['fail'] = 'empty';
  /* manager_entityforms */  /* Dashboard | User XML Data export */ /* Contextual filter: Entityform Submission: Entityform Type */
  /* manager_entityforms */  /* Dashboard | User XML Data export */ $handler->display->display_options['arguments']['type']['id'] = 'type';
  /* manager_entityforms */  /* Dashboard | User XML Data export */ $handler->display->display_options['arguments']['type']['table'] = 'entityform';
  /* manager_entityforms */  /* Dashboard | User XML Data export */ $handler->display->display_options['arguments']['type']['field'] = 'type';
  /* manager_entityforms */  /* Dashboard | User XML Data export */ $handler->display->display_options['arguments']['type']['title_enable'] = TRUE;
  /* manager_entityforms */  /* Dashboard | User XML Data export */ $handler->display->display_options['arguments']['type']['title'] = 'entityform_submissions_%1';
  /* manager_entityforms */  /* Dashboard | User XML Data export */ $handler->display->display_options['arguments']['type']['default_argument_type'] = 'fixed';
  /* manager_entityforms */  /* Dashboard | User XML Data export */ $handler->display->display_options['arguments']['type']['summary']['number_of_records'] = '0';
  /* manager_entityforms */  /* Dashboard | User XML Data export */ $handler->display->display_options['arguments']['type']['summary']['format'] = 'default_summary';
  /* manager_entityforms */  /* Dashboard | User XML Data export */ $handler->display->display_options['arguments']['type']['summary_options']['items_per_page'] = '25';
  /* manager_entityforms */  /* Dashboard | User XML Data export */ $handler->display->display_options['arguments']['type']['limit'] = '0';
  /* manager_entityforms */  /* Dashboard | User XML Data export */ $handler->display->display_options['path'] = 'node/%/dashboard/userforms/submissions/%/xml';
  /* manager_entityforms */  /* Dashboard | User XML Data export */ $handler->display->display_options['displays'] = array(
  /* manager_entityforms */  /* Dashboard | User XML Data export */   'page_3' => 'page_3',
  /* manager_entityforms */  /* Dashboard | User XML Data export */   'default' => 0,
  /* manager_entityforms */  /* Dashboard | User XML Data export */   'entityforms_admin_page' => 0,
  /* manager_entityforms */  /* Dashboard | User XML Data export */   'autofields_table' => 0,
  /* manager_entityforms */  /* Dashboard | User XML Data export */   'page_1' => 0,
  /* manager_entityforms */  /* Dashboard | User XML Data export */   'page_2' => 0,
  /* manager_entityforms */  /* Dashboard | User XML Data export */ );

  /* manager_entityforms */ /* Display: Dashboard | User CSV Data export */
  /* manager_entityforms */  /* Dashboard | User CSV Data export */ $handler = $view->new_display('views_data_export', 'Dashboard | User CSV Data export', 'views_data_export_6');
  /* manager_entityforms */  /* Dashboard | User CSV Data export */ $handler->display->display_options['pager']['type'] = 'none';
  /* manager_entityforms */  /* Dashboard | User CSV Data export */ $handler->display->display_options['pager']['options']['offset'] = '0';
  /* manager_entityforms */  /* Dashboard | User CSV Data export */ $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  /* manager_entityforms */  /* Dashboard | User CSV Data export */ $handler->display->display_options['style_options']['provide_file'] = 1;
  /* manager_entityforms */  /* Dashboard | User CSV Data export */ $handler->display->display_options['style_options']['filename'] = '%1-title_submissions_%timestamp-full.csv';
  /* manager_entityforms */  /* Dashboard | User CSV Data export */ $handler->display->display_options['style_options']['parent_sort'] = 1;
  /* manager_entityforms */  /* Dashboard | User CSV Data export */ $handler->display->display_options['style_options']['quote'] = 1;
  /* manager_entityforms */  /* Dashboard | User CSV Data export */ $handler->display->display_options['style_options']['trim'] = 0;
  /* manager_entityforms */  /* Dashboard | User CSV Data export */ $handler->display->display_options['style_options']['replace_newlines'] = 0;
  /* manager_entityforms */  /* Dashboard | User CSV Data export */ $handler->display->display_options['style_options']['header'] = 1;
  /* manager_entityforms */  /* Dashboard | User CSV Data export */ $handler->display->display_options['style_options']['encoding'] = 'ASCII';
  /* manager_entityforms */  /* Dashboard | User CSV Data export */ $handler->display->display_options['defaults']['fields'] = FALSE;
  /* manager_entityforms */  /* Dashboard | User CSV Data export */ /* Field: User: Name */
  /* manager_entityforms */  /* Dashboard | User CSV Data export */ $handler->display->display_options['fields']['name']['id'] = 'name';
  /* manager_entityforms */  /* Dashboard | User CSV Data export */ $handler->display->display_options['fields']['name']['table'] = 'users';
  /* manager_entityforms */  /* Dashboard | User CSV Data export */ $handler->display->display_options['fields']['name']['field'] = 'name';
  /* manager_entityforms */  /* Dashboard | User CSV Data export */ $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  /* manager_entityforms */  /* Dashboard | User CSV Data export */ $handler->display->display_options['fields']['name']['label'] = 'Submitter';
  /* manager_entityforms */  /* Dashboard | User CSV Data export */ /* Field: Field: Family Name */
  /* manager_entityforms */  /* Dashboard | User CSV Data export */ $handler->display->display_options['fields']['field_name_last']['id'] = 'field_name_last';
  /* manager_entityforms */  /* Dashboard | User CSV Data export */ $handler->display->display_options['fields']['field_name_last']['table'] = 'field_data_field_name_last';
  /* manager_entityforms */  /* Dashboard | User CSV Data export */ $handler->display->display_options['fields']['field_name_last']['field'] = 'field_name_last';
  /* manager_entityforms */  /* Dashboard | User CSV Data export */ $handler->display->display_options['fields']['field_name_last']['label'] = '';
  /* manager_entityforms */  /* Dashboard | User CSV Data export */ $handler->display->display_options['fields']['field_name_last']['exclude'] = TRUE;
  /* manager_entityforms */  /* Dashboard | User CSV Data export */ $handler->display->display_options['fields']['field_name_last']['element_type'] = '0';
  /* manager_entityforms */  /* Dashboard | User CSV Data export */ $handler->display->display_options['fields']['field_name_last']['element_label_colon'] = FALSE;
  /* manager_entityforms */  /* Dashboard | User CSV Data export */ $handler->display->display_options['fields']['field_name_last']['element_wrapper_type'] = '0';
  /* manager_entityforms */  /* Dashboard | User CSV Data export */ $handler->display->display_options['fields']['field_name_last']['element_default_classes'] = FALSE;
  /* manager_entityforms */  /* Dashboard | User CSV Data export */ $handler->display->display_options['fields']['field_name_last']['settings'] = array(
  /* manager_entityforms */  /* Dashboard | User CSV Data export */   'field_formatter_class' => '',
  /* manager_entityforms */  /* Dashboard | User CSV Data export */ );
  /* manager_entityforms */  /* Dashboard | User CSV Data export */ $handler->display->display_options['fields']['field_name_last']['field_api_classes'] = TRUE;
  /* manager_entityforms */  /* Dashboard | User CSV Data export */ /* Field: Field: Given Name */
  /* manager_entityforms */  /* Dashboard | User CSV Data export */ $handler->display->display_options['fields']['field_name_first']['id'] = 'field_name_first';
  /* manager_entityforms */  /* Dashboard | User CSV Data export */ $handler->display->display_options['fields']['field_name_first']['table'] = 'field_data_field_name_first';
  /* manager_entityforms */  /* Dashboard | User CSV Data export */ $handler->display->display_options['fields']['field_name_first']['field'] = 'field_name_first';
  /* manager_entityforms */  /* Dashboard | User CSV Data export */ $handler->display->display_options['fields']['field_name_first']['label'] = 'Name';
  /* manager_entityforms */  /* Dashboard | User CSV Data export */ $handler->display->display_options['fields']['field_name_first']['alter']['alter_text'] = TRUE;
  /* manager_entityforms */  /* Dashboard | User CSV Data export */ $handler->display->display_options['fields']['field_name_first']['alter']['text'] = '[field_name_first] [field_name_last]';
  /* manager_entityforms */  /* Dashboard | User CSV Data export */ $handler->display->display_options['fields']['field_name_first']['element_type'] = '0';
  /* manager_entityforms */  /* Dashboard | User CSV Data export */ $handler->display->display_options['fields']['field_name_first']['element_wrapper_type'] = '0';
  /* manager_entityforms */  /* Dashboard | User CSV Data export */ $handler->display->display_options['fields']['field_name_first']['element_default_classes'] = FALSE;
  /* manager_entityforms */  /* Dashboard | User CSV Data export */ $handler->display->display_options['fields']['field_name_first']['settings'] = array(
  /* manager_entityforms */  /* Dashboard | User CSV Data export */   'field_formatter_class' => '',
  /* manager_entityforms */  /* Dashboard | User CSV Data export */ );
  /* manager_entityforms */  /* Dashboard | User CSV Data export */ $handler->display->display_options['fields']['field_name_first']['field_api_classes'] = TRUE;
  /* manager_entityforms */  /* Dashboard | User CSV Data export */ /* Field: Entityform Submission: Status */
  /* manager_entityforms */  /* Dashboard | User CSV Data export */ $handler->display->display_options['fields']['field_status']['id'] = 'field_status';
  /* manager_entityforms */  /* Dashboard | User CSV Data export */ $handler->display->display_options['fields']['field_status']['table'] = 'field_data_field_status';
  /* manager_entityforms */  /* Dashboard | User CSV Data export */ $handler->display->display_options['fields']['field_status']['field'] = 'field_status';
  /* manager_entityforms */  /* Dashboard | User CSV Data export */ $handler->display->display_options['fields']['field_status']['element_type'] = '0';
  /* manager_entityforms */  /* Dashboard | User CSV Data export */ $handler->display->display_options['fields']['field_status']['element_wrapper_type'] = '0';
  /* manager_entityforms */  /* Dashboard | User CSV Data export */ $handler->display->display_options['fields']['field_status']['element_default_classes'] = FALSE;
  /* manager_entityforms */  /* Dashboard | User CSV Data export */ $handler->display->display_options['fields']['field_status']['settings'] = array(
  /* manager_entityforms */  /* Dashboard | User CSV Data export */   'field_formatter_class' => '',
  /* manager_entityforms */  /* Dashboard | User CSV Data export */ );
  /* manager_entityforms */  /* Dashboard | User CSV Data export */ $handler->display->display_options['fields']['field_status']['field_api_classes'] = TRUE;
  /* manager_entityforms */  /* Dashboard | User CSV Data export */ /* Field: Entityform Submission: Date submitted */
  /* manager_entityforms */  /* Dashboard | User CSV Data export */ $handler->display->display_options['fields']['created']['id'] = 'created';
  /* manager_entityforms */  /* Dashboard | User CSV Data export */ $handler->display->display_options['fields']['created']['table'] = 'entityform';
  /* manager_entityforms */  /* Dashboard | User CSV Data export */ $handler->display->display_options['fields']['created']['field'] = 'created';
  /* manager_entityforms */  /* Dashboard | User CSV Data export */ $handler->display->display_options['fields']['created']['date_format'] = 'medium';
  /* manager_entityforms */  /* Dashboard | User CSV Data export */ /* Field: Entityform Submission: Date changed */
  /* manager_entityforms */  /* Dashboard | User CSV Data export */ $handler->display->display_options['fields']['changed']['id'] = 'changed';
  /* manager_entityforms */  /* Dashboard | User CSV Data export */ $handler->display->display_options['fields']['changed']['table'] = 'entityform';
  /* manager_entityforms */  /* Dashboard | User CSV Data export */ $handler->display->display_options['fields']['changed']['field'] = 'changed';
  /* manager_entityforms */  /* Dashboard | User CSV Data export */ $handler->display->display_options['fields']['changed']['hide_alter_empty'] = FALSE;
  /* manager_entityforms */  /* Dashboard | User CSV Data export */ $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* manager_entityforms */  /* Dashboard | User CSV Data export */ /* Contextual filter: Entityform Submission: Organization (field_organization) */
  /* manager_entityforms */  /* Dashboard | User CSV Data export */ $handler->display->display_options['arguments']['field_organization_target_id']['id'] = 'field_organization_target_id';
  /* manager_entityforms */  /* Dashboard | User CSV Data export */ $handler->display->display_options['arguments']['field_organization_target_id']['table'] = 'field_data_field_organization';
  /* manager_entityforms */  /* Dashboard | User CSV Data export */ $handler->display->display_options['arguments']['field_organization_target_id']['field'] = 'field_organization_target_id';
  /* manager_entityforms */  /* Dashboard | User CSV Data export */ $handler->display->display_options['arguments']['field_organization_target_id']['default_action'] = 'default';
  /* manager_entityforms */  /* Dashboard | User CSV Data export */ $handler->display->display_options['arguments']['field_organization_target_id']['default_argument_type'] = 'node';
  /* manager_entityforms */  /* Dashboard | User CSV Data export */ $handler->display->display_options['arguments']['field_organization_target_id']['summary']['number_of_records'] = '0';
  /* manager_entityforms */  /* Dashboard | User CSV Data export */ $handler->display->display_options['arguments']['field_organization_target_id']['summary']['format'] = 'default_summary';
  /* manager_entityforms */  /* Dashboard | User CSV Data export */ $handler->display->display_options['arguments']['field_organization_target_id']['summary_options']['items_per_page'] = '25';
  /* manager_entityforms */  /* Dashboard | User CSV Data export */ $handler->display->display_options['arguments']['field_organization_target_id']['specify_validation'] = TRUE;
  /* manager_entityforms */  /* Dashboard | User CSV Data export */ $handler->display->display_options['arguments']['field_organization_target_id']['validate']['type'] = 'og';
  /* manager_entityforms */  /* Dashboard | User CSV Data export */ $handler->display->display_options['arguments']['field_organization_target_id']['validate']['fail'] = 'empty';
  /* manager_entityforms */  /* Dashboard | User CSV Data export */ /* Contextual filter: Entityform Submission: Entityform Type */
  /* manager_entityforms */  /* Dashboard | User CSV Data export */ $handler->display->display_options['arguments']['type']['id'] = 'type';
  /* manager_entityforms */  /* Dashboard | User CSV Data export */ $handler->display->display_options['arguments']['type']['table'] = 'entityform';
  /* manager_entityforms */  /* Dashboard | User CSV Data export */ $handler->display->display_options['arguments']['type']['field'] = 'type';
  /* manager_entityforms */  /* Dashboard | User CSV Data export */ $handler->display->display_options['arguments']['type']['title_enable'] = TRUE;
  /* manager_entityforms */  /* Dashboard | User CSV Data export */ $handler->display->display_options['arguments']['type']['title'] = 'entityform_submissions_%1';
  /* manager_entityforms */  /* Dashboard | User CSV Data export */ $handler->display->display_options['arguments']['type']['default_argument_type'] = 'fixed';
  /* manager_entityforms */  /* Dashboard | User CSV Data export */ $handler->display->display_options['arguments']['type']['summary']['number_of_records'] = '0';
  /* manager_entityforms */  /* Dashboard | User CSV Data export */ $handler->display->display_options['arguments']['type']['summary']['format'] = 'default_summary';
  /* manager_entityforms */  /* Dashboard | User CSV Data export */ $handler->display->display_options['arguments']['type']['summary_options']['items_per_page'] = '25';
  /* manager_entityforms */  /* Dashboard | User CSV Data export */ $handler->display->display_options['arguments']['type']['limit'] = '0';
  /* manager_entityforms */  /* Dashboard | User CSV Data export */ $handler->display->display_options['path'] = 'node/%/dashboard/userforms/submissions/%/csv';
  /* manager_entityforms */  /* Dashboard | User CSV Data export */ $handler->display->display_options['displays'] = array(
  /* manager_entityforms */  /* Dashboard | User CSV Data export */   'page_3' => 'page_3',
  /* manager_entityforms */  /* Dashboard | User CSV Data export */   'default' => 0,
  /* manager_entityforms */  /* Dashboard | User CSV Data export */   'entityforms_admin_page' => 0,
  /* manager_entityforms */  /* Dashboard | User CSV Data export */   'autofields_table' => 0,
  /* manager_entityforms */  /* Dashboard | User CSV Data export */   'page_1' => 0,
  /* manager_entityforms */  /* Dashboard | User CSV Data export */   'page_2' => 0,
  /* manager_entityforms */  /* Dashboard | User CSV Data export */ );
  /* manager_entityforms */ $translatables['manager_entityforms'] = array(
  /* manager_entityforms */   t('Master'),
  /* manager_entityforms */   t('List'),
  /* manager_entityforms */   t('more'),
  /* manager_entityforms */   t('Apply'),
  /* manager_entityforms */   t('Reset'),
  /* manager_entityforms */   t('Sort by'),
  /* manager_entityforms */   t('Asc'),
  /* manager_entityforms */   t('Desc'),
  /* manager_entityforms */   t('Items per page'),
  /* manager_entityforms */   t('- All -'),
  /* manager_entityforms */   t('Offset'),
  /* manager_entityforms */   t('« first'),
  /* manager_entityforms */   t('‹ previous'),
  /* manager_entityforms */   t('next ›'),
  /* manager_entityforms */   t('last »'),
  /* manager_entityforms */   t('Empty '),
  /* manager_entityforms */   t('No form submissions available.'),
  /* manager_entityforms */   t('User Submitting'),
  /* manager_entityforms */   t('- Choose an operation -'),
  /* manager_entityforms */   t('Delete Submissions'),
  /* manager_entityforms */   t('Submitter'),
  /* manager_entityforms */   t('Date submitted'),
  /* manager_entityforms */   t('Date changed'),
  /* manager_entityforms */   t('View'),
  /* manager_entityforms */   t('All'),
  /* manager_entityforms */   t('Submissions for %1'),
  /* manager_entityforms */   t('Submissions list page'),
  /* manager_entityforms */   t('Group'),
  /* manager_entityforms */   t('Submissions XML Data export'),
  /* manager_entityforms */   t('entityform_submissions_%1'),
  /* manager_entityforms */   t('Submissions CSV Data export'),
  /* manager_entityforms */   t('Submissions table page'),
  /* manager_entityforms */   t('Form Type'),
  /* manager_entityforms */   t('User Submissions list page'),
  /* manager_entityforms */   t('Name'),
  /* manager_entityforms */   t('[field_name_first]  [field_name_last]'),
  /* manager_entityforms */   t('Status'),
  /* manager_entityforms */   t('.'),
  /* manager_entityforms */   t('User Submissions XML Data export'),
  /* manager_entityforms */   t('[field_name_first] [field_name_last]'),
  /* manager_entityforms */   t('User Submissions CSV Data export'),
  /* manager_entityforms */   t('Dashboard | Submissions page'),
  /* manager_entityforms */   t('Advanced options'),
  /* manager_entityforms */   t('This list displays Pending submissions. <br/>
Click the drop-down arrow and press Go <br/>
 to display Approved, Denied or All submissions.'),
  /* manager_entityforms */   t('[field_name_first] [field_name_last] '),
  /* manager_entityforms */   t(' %2 submissions for %1'),
  /* manager_entityforms */   t('Submission status'),
  /* manager_entityforms */   t('Dashboard | XML Data export'),
  /* manager_entityforms */   t('Dashboard | CSV Data export'),
  /* manager_entityforms */   t('Dashboard | User Submissions'),
  /* manager_entityforms */   t('Dashboard | User XML Data export'),
  /* manager_entityforms */   t('Dashboard | User CSV Data export'),
  /* manager_entityforms */ );
  $export['manager_entityforms'] = $view;

  /* user_bulk_block */ $view = new view();
  /* user_bulk_block */ $view->name = 'user_bulk_block';
  /* user_bulk_block */ $view->description = '';
  /* user_bulk_block */ $view->tag = 'default';
  /* user_bulk_block */ $view->base_table = 'users';
  /* user_bulk_block */ $view->human_name = 'User Bulk Block';
  /* user_bulk_block */ $view->core = 7;
  /* user_bulk_block */ $view->api_version = '3.0';
  /* user_bulk_block */ $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* user_bulk_block */ /* Display: Master */
  /* user_bulk_block */  /* Master */ $handler = $view->new_display('default', 'Master', 'default');
  /* user_bulk_block */  /* Master */ $handler->display->display_options['title'] = 'Manage users';
  /* user_bulk_block */  /* Master */ $handler->display->display_options['use_more_always'] = FALSE;
  /* user_bulk_block */  /* Master */ $handler->display->display_options['access']['type'] = 'gn2_og_any_hr_manager_access';
  /* user_bulk_block */  /* Master */ $handler->display->display_options['cache']['type'] = 'none';
  /* user_bulk_block */  /* Master */ $handler->display->display_options['query']['type'] = 'views_query';
  /* user_bulk_block */  /* Master */ $handler->display->display_options['query']['options']['distinct'] = TRUE;
  /* user_bulk_block */  /* Master */ $handler->display->display_options['query']['options']['pure_distinct'] = TRUE;
  /* user_bulk_block */  /* Master */ $handler->display->display_options['exposed_form']['type'] = 'basic';
  /* user_bulk_block */  /* Master */ $handler->display->display_options['pager']['type'] = 'full';
  /* user_bulk_block */  /* Master */ $handler->display->display_options['pager']['options']['items_per_page'] = '25';
  /* user_bulk_block */  /* Master */ $handler->display->display_options['style_plugin'] = 'table';
  /* user_bulk_block */  /* Master */ $handler->display->display_options['style_options']['columns'] = array(
  /* user_bulk_block */  /* Master */   'views_bulk_operations' => 'views_bulk_operations',
  /* user_bulk_block */  /* Master */   'field_name_first' => 'field_name_first',
  /* user_bulk_block */  /* Master */   'field_name_last' => 'field_name_last',
  /* user_bulk_block */  /* Master */   'name' => 'name',
  /* user_bulk_block */  /* Master */   'status' => 'status',
  /* user_bulk_block */  /* Master */   'created' => 'created',
  /* user_bulk_block */  /* Master */ );
  /* user_bulk_block */  /* Master */ $handler->display->display_options['style_options']['default'] = '-1';
  /* user_bulk_block */  /* Master */ $handler->display->display_options['style_options']['info'] = array(
  /* user_bulk_block */  /* Master */   'views_bulk_operations' => array(
  /* user_bulk_block */  /* Master */     'align' => '',
  /* user_bulk_block */  /* Master */     'separator' => '',
  /* user_bulk_block */  /* Master */     'empty_column' => 0,
  /* user_bulk_block */  /* Master */   ),
  /* user_bulk_block */  /* Master */   'field_name_first' => array(
  /* user_bulk_block */  /* Master */     'sortable' => 0,
  /* user_bulk_block */  /* Master */     'default_sort_order' => 'asc',
  /* user_bulk_block */  /* Master */     'align' => '',
  /* user_bulk_block */  /* Master */     'separator' => '',
  /* user_bulk_block */  /* Master */     'empty_column' => 0,
  /* user_bulk_block */  /* Master */   ),
  /* user_bulk_block */  /* Master */   'field_name_last' => array(
  /* user_bulk_block */  /* Master */     'sortable' => 1,
  /* user_bulk_block */  /* Master */     'default_sort_order' => 'asc',
  /* user_bulk_block */  /* Master */     'align' => '',
  /* user_bulk_block */  /* Master */     'separator' => '',
  /* user_bulk_block */  /* Master */     'empty_column' => 0,
  /* user_bulk_block */  /* Master */   ),
  /* user_bulk_block */  /* Master */   'name' => array(
  /* user_bulk_block */  /* Master */     'sortable' => 1,
  /* user_bulk_block */  /* Master */     'default_sort_order' => 'asc',
  /* user_bulk_block */  /* Master */     'align' => '',
  /* user_bulk_block */  /* Master */     'separator' => '',
  /* user_bulk_block */  /* Master */     'empty_column' => 0,
  /* user_bulk_block */  /* Master */   ),
  /* user_bulk_block */  /* Master */   'status' => array(
  /* user_bulk_block */  /* Master */     'sortable' => 1,
  /* user_bulk_block */  /* Master */     'default_sort_order' => 'asc',
  /* user_bulk_block */  /* Master */     'align' => '',
  /* user_bulk_block */  /* Master */     'separator' => '',
  /* user_bulk_block */  /* Master */     'empty_column' => 0,
  /* user_bulk_block */  /* Master */   ),
  /* user_bulk_block */  /* Master */   'created' => array(
  /* user_bulk_block */  /* Master */     'sortable' => 1,
  /* user_bulk_block */  /* Master */     'default_sort_order' => 'asc',
  /* user_bulk_block */  /* Master */     'align' => '',
  /* user_bulk_block */  /* Master */     'separator' => '',
  /* user_bulk_block */  /* Master */     'empty_column' => 0,
  /* user_bulk_block */  /* Master */   ),
  /* user_bulk_block */  /* Master */ );
  /* user_bulk_block */  /* Master */ /* Relationship: OG membership: Group Node from OG membership */
  /* user_bulk_block */  /* Master */ $handler->display->display_options['relationships']['og_membership_related_node_group']['id'] = 'og_membership_related_node_group';
  /* user_bulk_block */  /* Master */ $handler->display->display_options['relationships']['og_membership_related_node_group']['table'] = 'og_membership';
  /* user_bulk_block */  /* Master */ $handler->display->display_options['relationships']['og_membership_related_node_group']['field'] = 'og_membership_related_node_group';
  /* user_bulk_block */  /* Master */ /* Field: Bulk operations: User */
  /* user_bulk_block */  /* Master */ $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  /* user_bulk_block */  /* Master */ $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'users';
  /* user_bulk_block */  /* Master */ $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  /* user_bulk_block */  /* Master */ $handler->display->display_options['fields']['views_bulk_operations']['element_default_classes'] = FALSE;
  /* user_bulk_block */  /* Master */ $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '0';
  /* user_bulk_block */  /* Master */ $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  /* user_bulk_block */  /* Master */ $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['row_clickable'] = 0;
  /* user_bulk_block */  /* Master */ $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  /* user_bulk_block */  /* Master */ $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  /* user_bulk_block */  /* Master */ $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
  /* user_bulk_block */  /* Master */   'action::user_block_user_action' => array(
  /* user_bulk_block */  /* Master */     'selected' => 1,
  /* user_bulk_block */  /* Master */     'postpone_processing' => 0,
  /* user_bulk_block */  /* Master */     'skip_confirmation' => 0,
  /* user_bulk_block */  /* Master */     'override_label' => 0,
  /* user_bulk_block */  /* Master */     'label' => '',
  /* user_bulk_block */  /* Master */   ),
  /* user_bulk_block */  /* Master */   'action::gn2_og_unblock_user_action' => array(
  /* user_bulk_block */  /* Master */     'selected' => 1,
  /* user_bulk_block */  /* Master */     'postpone_processing' => 0,
  /* user_bulk_block */  /* Master */     'skip_confirmation' => 0,
  /* user_bulk_block */  /* Master */     'override_label' => 0,
  /* user_bulk_block */  /* Master */     'label' => '',
  /* user_bulk_block */  /* Master */   ),
  /* user_bulk_block */  /* Master */ );
  /* user_bulk_block */  /* Master */ /* Field: Field: Given Name */
  /* user_bulk_block */  /* Master */ $handler->display->display_options['fields']['field_name_first']['id'] = 'field_name_first';
  /* user_bulk_block */  /* Master */ $handler->display->display_options['fields']['field_name_first']['table'] = 'field_data_field_name_first';
  /* user_bulk_block */  /* Master */ $handler->display->display_options['fields']['field_name_first']['field'] = 'field_name_first';
  /* user_bulk_block */  /* Master */ $handler->display->display_options['fields']['field_name_first']['element_default_classes'] = FALSE;
  /* user_bulk_block */  /* Master */ $handler->display->display_options['fields']['field_name_first']['settings'] = array(
  /* user_bulk_block */  /* Master */   'field_formatter_class' => '',
  /* user_bulk_block */  /* Master */ );
  /* user_bulk_block */  /* Master */ /* Field: Field: Family Name */
  /* user_bulk_block */  /* Master */ $handler->display->display_options['fields']['field_name_last']['id'] = 'field_name_last';
  /* user_bulk_block */  /* Master */ $handler->display->display_options['fields']['field_name_last']['table'] = 'field_data_field_name_last';
  /* user_bulk_block */  /* Master */ $handler->display->display_options['fields']['field_name_last']['field'] = 'field_name_last';
  /* user_bulk_block */  /* Master */ $handler->display->display_options['fields']['field_name_last']['element_default_classes'] = FALSE;
  /* user_bulk_block */  /* Master */ $handler->display->display_options['fields']['field_name_last']['settings'] = array(
  /* user_bulk_block */  /* Master */   'field_formatter_class' => '',
  /* user_bulk_block */  /* Master */ );
  /* user_bulk_block */  /* Master */ /* Field: User: Name */
  /* user_bulk_block */  /* Master */ $handler->display->display_options['fields']['name']['id'] = 'name';
  /* user_bulk_block */  /* Master */ $handler->display->display_options['fields']['name']['table'] = 'users';
  /* user_bulk_block */  /* Master */ $handler->display->display_options['fields']['name']['field'] = 'name';
  /* user_bulk_block */  /* Master */ $handler->display->display_options['fields']['name']['label'] = 'Username';
  /* user_bulk_block */  /* Master */ $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  /* user_bulk_block */  /* Master */ $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  /* user_bulk_block */  /* Master */ $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  /* user_bulk_block */  /* Master */ /* Field: User: Active */
  /* user_bulk_block */  /* Master */ $handler->display->display_options['fields']['status']['id'] = 'status';
  /* user_bulk_block */  /* Master */ $handler->display->display_options['fields']['status']['table'] = 'users';
  /* user_bulk_block */  /* Master */ $handler->display->display_options['fields']['status']['field'] = 'status';
  /* user_bulk_block */  /* Master */ $handler->display->display_options['fields']['status']['not'] = 0;
  /* user_bulk_block */  /* Master */ /* Field: User: Created date */
  /* user_bulk_block */  /* Master */ $handler->display->display_options['fields']['created']['id'] = 'created';
  /* user_bulk_block */  /* Master */ $handler->display->display_options['fields']['created']['table'] = 'users';
  /* user_bulk_block */  /* Master */ $handler->display->display_options['fields']['created']['field'] = 'created';
  /* user_bulk_block */  /* Master */ $handler->display->display_options['fields']['created']['label'] = 'Date joined';
  /* user_bulk_block */  /* Master */ $handler->display->display_options['fields']['created']['date_format'] = 'date_format_globalnet_date';
  /* user_bulk_block */  /* Master */ $handler->display->display_options['fields']['created']['second_date_format'] = 'date_format_globalnet_date';
  /* user_bulk_block */  /* Master */ /* Field: User: Link */
  /* user_bulk_block */  /* Master */ $handler->display->display_options['fields']['view_user']['id'] = 'view_user';
  /* user_bulk_block */  /* Master */ $handler->display->display_options['fields']['view_user']['table'] = 'users';
  /* user_bulk_block */  /* Master */ $handler->display->display_options['fields']['view_user']['field'] = 'view_user';
  /* user_bulk_block */  /* Master */ $handler->display->display_options['fields']['view_user']['label'] = '';
  /* user_bulk_block */  /* Master */ $handler->display->display_options['fields']['view_user']['element_label_colon'] = FALSE;
  /* user_bulk_block */  /* Master */ /* Sort criterion: User: Created date */
  /* user_bulk_block */  /* Master */ $handler->display->display_options['sorts']['created']['id'] = 'created';
  /* user_bulk_block */  /* Master */ $handler->display->display_options['sorts']['created']['table'] = 'users';
  /* user_bulk_block */  /* Master */ $handler->display->display_options['sorts']['created']['field'] = 'created';
  /* user_bulk_block */  /* Master */ $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* user_bulk_block */  /* Master */ /* Contextual filter: Content: Parent Organization (field_parent_organization) */
  /* user_bulk_block */  /* Master */ $handler->display->display_options['arguments']['field_parent_organization_target_id']['id'] = 'field_parent_organization_target_id';
  /* user_bulk_block */  /* Master */ $handler->display->display_options['arguments']['field_parent_organization_target_id']['table'] = 'field_data_field_parent_organization';
  /* user_bulk_block */  /* Master */ $handler->display->display_options['arguments']['field_parent_organization_target_id']['field'] = 'field_parent_organization_target_id';
  /* user_bulk_block */  /* Master */ $handler->display->display_options['arguments']['field_parent_organization_target_id']['relationship'] = 'og_membership_related_node_group';
  /* user_bulk_block */  /* Master */ $handler->display->display_options['arguments']['field_parent_organization_target_id']['default_action'] = 'default';
  /* user_bulk_block */  /* Master */ $handler->display->display_options['arguments']['field_parent_organization_target_id']['default_argument_type'] = 'node';
  /* user_bulk_block */  /* Master */ $handler->display->display_options['arguments']['field_parent_organization_target_id']['summary']['number_of_records'] = '0';
  /* user_bulk_block */  /* Master */ $handler->display->display_options['arguments']['field_parent_organization_target_id']['summary']['format'] = 'default_summary';
  /* user_bulk_block */  /* Master */ $handler->display->display_options['arguments']['field_parent_organization_target_id']['summary_options']['items_per_page'] = '25';
  /* user_bulk_block */  /* Master */ $handler->display->display_options['arguments']['field_parent_organization_target_id']['validate']['type'] = 'og';
  /* user_bulk_block */  /* Master */ $handler->display->display_options['arguments']['field_parent_organization_target_id']['validate']['fail'] = 'empty';
  /* user_bulk_block */  /* Master */ /* Contextual filter: User: Group membership (og_user_node) */
  /* user_bulk_block */  /* Master */ $handler->display->display_options['arguments']['og_user_node_target_id']['id'] = 'og_user_node_target_id';
  /* user_bulk_block */  /* Master */ $handler->display->display_options['arguments']['og_user_node_target_id']['table'] = 'og_membership';
  /* user_bulk_block */  /* Master */ $handler->display->display_options['arguments']['og_user_node_target_id']['field'] = 'og_user_node_target_id';
  /* user_bulk_block */  /* Master */ $handler->display->display_options['arguments']['og_user_node_target_id']['default_action'] = 'default';
  /* user_bulk_block */  /* Master */ $handler->display->display_options['arguments']['og_user_node_target_id']['exception']['value'] = '';
  /* user_bulk_block */  /* Master */ $handler->display->display_options['arguments']['og_user_node_target_id']['default_argument_type'] = 'node';
  /* user_bulk_block */  /* Master */ $handler->display->display_options['arguments']['og_user_node_target_id']['default_argument_skip_url'] = TRUE;
  /* user_bulk_block */  /* Master */ $handler->display->display_options['arguments']['og_user_node_target_id']['summary']['number_of_records'] = '0';
  /* user_bulk_block */  /* Master */ $handler->display->display_options['arguments']['og_user_node_target_id']['summary']['format'] = 'default_summary';
  /* user_bulk_block */  /* Master */ $handler->display->display_options['arguments']['og_user_node_target_id']['summary_options']['items_per_page'] = '25';
  /* user_bulk_block */  /* Master */ $handler->display->display_options['arguments']['og_user_node_target_id']['specify_validation'] = TRUE;
  /* user_bulk_block */  /* Master */ $handler->display->display_options['arguments']['og_user_node_target_id']['validate']['type'] = 'og';
  /* user_bulk_block */  /* Master */ $handler->display->display_options['arguments']['og_user_node_target_id']['validate']['fail'] = 'empty';
  /* user_bulk_block */  /* Master */ /* Filter criterion: User: Active */
  /* user_bulk_block */  /* Master */ $handler->display->display_options['filters']['status']['id'] = 'status';
  /* user_bulk_block */  /* Master */ $handler->display->display_options['filters']['status']['table'] = 'users';
  /* user_bulk_block */  /* Master */ $handler->display->display_options['filters']['status']['field'] = 'status';
  /* user_bulk_block */  /* Master */ $handler->display->display_options['filters']['status']['value'] = '0';
  /* user_bulk_block */  /* Master */ $handler->display->display_options['filters']['status']['group'] = 1;
  /* user_bulk_block */  /* Master */ $handler->display->display_options['filters']['status']['exposed'] = TRUE;
  /* user_bulk_block */  /* Master */ $handler->display->display_options['filters']['status']['expose']['operator_id'] = '';
  /* user_bulk_block */  /* Master */ $handler->display->display_options['filters']['status']['expose']['label'] = 'Active';
  /* user_bulk_block */  /* Master */ $handler->display->display_options['filters']['status']['expose']['operator'] = 'status_op';
  /* user_bulk_block */  /* Master */ $handler->display->display_options['filters']['status']['expose']['identifier'] = 'status';
  /* user_bulk_block */  /* Master */ $handler->display->display_options['filters']['status']['expose']['required'] = TRUE;
  /* user_bulk_block */  /* Master */ $handler->display->display_options['filters']['status']['expose']['remember_roles'] = array(
  /* user_bulk_block */  /* Master */   2 => '2',
  /* user_bulk_block */  /* Master */   1 => 0,
  /* user_bulk_block */  /* Master */   9 => 0,
  /* user_bulk_block */  /* Master */   10 => 0,
  /* user_bulk_block */  /* Master */ );

  /* user_bulk_block */ /* Display: Page */
  /* user_bulk_block */  /* Page */ $handler = $view->new_display('page', 'Page', 'page');
  /* user_bulk_block */  /* Page */ $handler->display->display_options['defaults']['css_class'] = FALSE;
  /* user_bulk_block */  /* Page */ $handler->display->display_options['css_class'] = 'view__admin--manage-users';
  /* user_bulk_block */  /* Page */ $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  /* user_bulk_block */  /* Page */ $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  /* user_bulk_block */  /* Page */ $handler->display->display_options['exposed_form']['options']['bef'] = array(
  /* user_bulk_block */  /* Page */   'general' => array(
  /* user_bulk_block */  /* Page */     'allow_secondary' => 0,
  /* user_bulk_block */  /* Page */     'secondary_label' => 'Advanced options',
  /* user_bulk_block */  /* Page */   ),
  /* user_bulk_block */  /* Page */   'status' => array(
  /* user_bulk_block */  /* Page */     'bef_format' => 'default',
  /* user_bulk_block */  /* Page */     'more_options' => array(
  /* user_bulk_block */  /* Page */       'bef_select_all_none' => FALSE,
  /* user_bulk_block */  /* Page */       'bef_collapsible' => 0,
  /* user_bulk_block */  /* Page */       'is_secondary' => 0,
  /* user_bulk_block */  /* Page */       'any_label' => '',
  /* user_bulk_block */  /* Page */       'bef_filter_description' => '',
  /* user_bulk_block */  /* Page */       'tokens' => array(
  /* user_bulk_block */  /* Page */         'available' => array(
  /* user_bulk_block */  /* Page */           0 => 'global_types',
  /* user_bulk_block */  /* Page */         ),
  /* user_bulk_block */  /* Page */       ),
  /* user_bulk_block */  /* Page */       'rewrite' => array(
  /* user_bulk_block */  /* Page */         'filter_rewrite_values' => '',
  /* user_bulk_block */  /* Page */       ),
  /* user_bulk_block */  /* Page */     ),
  /* user_bulk_block */  /* Page */   ),
  /* user_bulk_block */  /* Page */   'combine' => array(
  /* user_bulk_block */  /* Page */     'bef_format' => 'default',
  /* user_bulk_block */  /* Page */     'more_options' => array(
  /* user_bulk_block */  /* Page */       'is_secondary' => 0,
  /* user_bulk_block */  /* Page */       'any_label' => '',
  /* user_bulk_block */  /* Page */       'bef_filter_description' => 'This Members list displays both Blocked and Active user accounts.<br/> 
To search for a user, type or paste a Username, Given Name, Last Name or E-mail address.<br/>
To search for <b>Active users only</b>, first select<b> YES</b> in the Active dropdown field, type the user information in the search field and click the GO button. <br/>
To search for <b>Blocked user accounts</b>, select <b>NO</b>, type in the user information, and click the GO button.',
  /* user_bulk_block */  /* Page */       'tokens' => array(
  /* user_bulk_block */  /* Page */         'available' => array(
  /* user_bulk_block */  /* Page */           0 => 'global_types',
  /* user_bulk_block */  /* Page */         ),
  /* user_bulk_block */  /* Page */       ),
  /* user_bulk_block */  /* Page */       'rewrite' => array(
  /* user_bulk_block */  /* Page */         'filter_rewrite_values' => '',
  /* user_bulk_block */  /* Page */       ),
  /* user_bulk_block */  /* Page */     ),
  /* user_bulk_block */  /* Page */   ),
  /* user_bulk_block */  /* Page */ );
  /* user_bulk_block */  /* Page */ $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  /* user_bulk_block */  /* Page */ $handler->display->display_options['style_plugin'] = 'table';
  /* user_bulk_block */  /* Page */ $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  /* user_bulk_block */  /* Page */ $handler->display->display_options['style_options']['columns'] = array(
  /* user_bulk_block */  /* Page */   'views_bulk_operations' => 'views_bulk_operations',
  /* user_bulk_block */  /* Page */   'field_name_first' => 'field_name_first',
  /* user_bulk_block */  /* Page */   'field_name_last' => 'field_name_last',
  /* user_bulk_block */  /* Page */   'name' => 'name',
  /* user_bulk_block */  /* Page */   'status' => 'status',
  /* user_bulk_block */  /* Page */   'created' => 'created',
  /* user_bulk_block */  /* Page */   'view_user' => 'view_user',
  /* user_bulk_block */  /* Page */   'mail' => 'mail',
  /* user_bulk_block */  /* Page */ );
  /* user_bulk_block */  /* Page */ $handler->display->display_options['style_options']['default'] = '-1';
  /* user_bulk_block */  /* Page */ $handler->display->display_options['style_options']['info'] = array(
  /* user_bulk_block */  /* Page */   'views_bulk_operations' => array(
  /* user_bulk_block */  /* Page */     'align' => '',
  /* user_bulk_block */  /* Page */     'separator' => '',
  /* user_bulk_block */  /* Page */     'empty_column' => 0,
  /* user_bulk_block */  /* Page */   ),
  /* user_bulk_block */  /* Page */   'field_name_first' => array(
  /* user_bulk_block */  /* Page */     'sortable' => 0,
  /* user_bulk_block */  /* Page */     'default_sort_order' => 'asc',
  /* user_bulk_block */  /* Page */     'align' => '',
  /* user_bulk_block */  /* Page */     'separator' => '',
  /* user_bulk_block */  /* Page */     'empty_column' => 0,
  /* user_bulk_block */  /* Page */   ),
  /* user_bulk_block */  /* Page */   'field_name_last' => array(
  /* user_bulk_block */  /* Page */     'sortable' => 1,
  /* user_bulk_block */  /* Page */     'default_sort_order' => 'asc',
  /* user_bulk_block */  /* Page */     'align' => '',
  /* user_bulk_block */  /* Page */     'separator' => '',
  /* user_bulk_block */  /* Page */     'empty_column' => 0,
  /* user_bulk_block */  /* Page */   ),
  /* user_bulk_block */  /* Page */   'name' => array(
  /* user_bulk_block */  /* Page */     'sortable' => 1,
  /* user_bulk_block */  /* Page */     'default_sort_order' => 'asc',
  /* user_bulk_block */  /* Page */     'align' => '',
  /* user_bulk_block */  /* Page */     'separator' => '',
  /* user_bulk_block */  /* Page */     'empty_column' => 0,
  /* user_bulk_block */  /* Page */   ),
  /* user_bulk_block */  /* Page */   'status' => array(
  /* user_bulk_block */  /* Page */     'sortable' => 1,
  /* user_bulk_block */  /* Page */     'default_sort_order' => 'asc',
  /* user_bulk_block */  /* Page */     'align' => '',
  /* user_bulk_block */  /* Page */     'separator' => '',
  /* user_bulk_block */  /* Page */     'empty_column' => 0,
  /* user_bulk_block */  /* Page */   ),
  /* user_bulk_block */  /* Page */   'created' => array(
  /* user_bulk_block */  /* Page */     'sortable' => 1,
  /* user_bulk_block */  /* Page */     'default_sort_order' => 'asc',
  /* user_bulk_block */  /* Page */     'align' => '',
  /* user_bulk_block */  /* Page */     'separator' => '',
  /* user_bulk_block */  /* Page */     'empty_column' => 0,
  /* user_bulk_block */  /* Page */   ),
  /* user_bulk_block */  /* Page */   'view_user' => array(
  /* user_bulk_block */  /* Page */     'align' => '',
  /* user_bulk_block */  /* Page */     'separator' => '',
  /* user_bulk_block */  /* Page */     'empty_column' => 0,
  /* user_bulk_block */  /* Page */   ),
  /* user_bulk_block */  /* Page */   'mail' => array(
  /* user_bulk_block */  /* Page */     'sortable' => 0,
  /* user_bulk_block */  /* Page */     'default_sort_order' => 'asc',
  /* user_bulk_block */  /* Page */     'align' => '',
  /* user_bulk_block */  /* Page */     'separator' => '',
  /* user_bulk_block */  /* Page */     'empty_column' => 0,
  /* user_bulk_block */  /* Page */   ),
  /* user_bulk_block */  /* Page */ );
  /* user_bulk_block */  /* Page */ $handler->display->display_options['defaults']['style_options'] = FALSE;
  /* user_bulk_block */  /* Page */ $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  /* user_bulk_block */  /* Page */ $handler->display->display_options['defaults']['row_options'] = FALSE;
  /* user_bulk_block */  /* Page */ $handler->display->display_options['defaults']['fields'] = FALSE;
  /* user_bulk_block */  /* Page */ /* Field: Bulk operations: User */
  /* user_bulk_block */  /* Page */ $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  /* user_bulk_block */  /* Page */ $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'users';
  /* user_bulk_block */  /* Page */ $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  /* user_bulk_block */  /* Page */ $handler->display->display_options['fields']['views_bulk_operations']['element_default_classes'] = FALSE;
  /* user_bulk_block */  /* Page */ $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '0';
  /* user_bulk_block */  /* Page */ $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  /* user_bulk_block */  /* Page */ $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['row_clickable'] = 0;
  /* user_bulk_block */  /* Page */ $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  /* user_bulk_block */  /* Page */ $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  /* user_bulk_block */  /* Page */ $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
  /* user_bulk_block */  /* Page */   'action::user_block_user_action' => array(
  /* user_bulk_block */  /* Page */     'selected' => 1,
  /* user_bulk_block */  /* Page */     'postpone_processing' => 0,
  /* user_bulk_block */  /* Page */     'skip_confirmation' => 0,
  /* user_bulk_block */  /* Page */     'override_label' => 0,
  /* user_bulk_block */  /* Page */     'label' => '',
  /* user_bulk_block */  /* Page */   ),
  /* user_bulk_block */  /* Page */   'action::gn2_og_unblock_user_action' => array(
  /* user_bulk_block */  /* Page */     'selected' => 1,
  /* user_bulk_block */  /* Page */     'postpone_processing' => 0,
  /* user_bulk_block */  /* Page */     'skip_confirmation' => 0,
  /* user_bulk_block */  /* Page */     'override_label' => 0,
  /* user_bulk_block */  /* Page */     'label' => '',
  /* user_bulk_block */  /* Page */   ),
  /* user_bulk_block */  /* Page */ );
  /* user_bulk_block */  /* Page */ /* Field: Field: Given Name */
  /* user_bulk_block */  /* Page */ $handler->display->display_options['fields']['field_name_first']['id'] = 'field_name_first';
  /* user_bulk_block */  /* Page */ $handler->display->display_options['fields']['field_name_first']['table'] = 'field_data_field_name_first';
  /* user_bulk_block */  /* Page */ $handler->display->display_options['fields']['field_name_first']['field'] = 'field_name_first';
  /* user_bulk_block */  /* Page */ $handler->display->display_options['fields']['field_name_first']['element_default_classes'] = FALSE;
  /* user_bulk_block */  /* Page */ $handler->display->display_options['fields']['field_name_first']['settings'] = array(
  /* user_bulk_block */  /* Page */   'field_formatter_class' => '',
  /* user_bulk_block */  /* Page */ );
  /* user_bulk_block */  /* Page */ /* Field: Field: Family Name */
  /* user_bulk_block */  /* Page */ $handler->display->display_options['fields']['field_name_last']['id'] = 'field_name_last';
  /* user_bulk_block */  /* Page */ $handler->display->display_options['fields']['field_name_last']['table'] = 'field_data_field_name_last';
  /* user_bulk_block */  /* Page */ $handler->display->display_options['fields']['field_name_last']['field'] = 'field_name_last';
  /* user_bulk_block */  /* Page */ $handler->display->display_options['fields']['field_name_last']['element_default_classes'] = FALSE;
  /* user_bulk_block */  /* Page */ $handler->display->display_options['fields']['field_name_last']['settings'] = array(
  /* user_bulk_block */  /* Page */   'field_formatter_class' => '',
  /* user_bulk_block */  /* Page */ );
  /* user_bulk_block */  /* Page */ /* Field: User: Name */
  /* user_bulk_block */  /* Page */ $handler->display->display_options['fields']['name']['id'] = 'name';
  /* user_bulk_block */  /* Page */ $handler->display->display_options['fields']['name']['table'] = 'users';
  /* user_bulk_block */  /* Page */ $handler->display->display_options['fields']['name']['field'] = 'name';
  /* user_bulk_block */  /* Page */ $handler->display->display_options['fields']['name']['label'] = 'Username';
  /* user_bulk_block */  /* Page */ $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  /* user_bulk_block */  /* Page */ $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  /* user_bulk_block */  /* Page */ $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  /* user_bulk_block */  /* Page */ /* Field: User: Active */
  /* user_bulk_block */  /* Page */ $handler->display->display_options['fields']['status']['id'] = 'status';
  /* user_bulk_block */  /* Page */ $handler->display->display_options['fields']['status']['table'] = 'users';
  /* user_bulk_block */  /* Page */ $handler->display->display_options['fields']['status']['field'] = 'status';
  /* user_bulk_block */  /* Page */ $handler->display->display_options['fields']['status']['not'] = 0;
  /* user_bulk_block */  /* Page */ /* Field: User: Created date */
  /* user_bulk_block */  /* Page */ $handler->display->display_options['fields']['created']['id'] = 'created';
  /* user_bulk_block */  /* Page */ $handler->display->display_options['fields']['created']['table'] = 'users';
  /* user_bulk_block */  /* Page */ $handler->display->display_options['fields']['created']['field'] = 'created';
  /* user_bulk_block */  /* Page */ $handler->display->display_options['fields']['created']['label'] = 'Date joined';
  /* user_bulk_block */  /* Page */ $handler->display->display_options['fields']['created']['date_format'] = 'date_format_globalnet_date';
  /* user_bulk_block */  /* Page */ $handler->display->display_options['fields']['created']['second_date_format'] = 'date_format_globalnet_date';
  /* user_bulk_block */  /* Page */ /* Field: User: Link */
  /* user_bulk_block */  /* Page */ $handler->display->display_options['fields']['view_user']['id'] = 'view_user';
  /* user_bulk_block */  /* Page */ $handler->display->display_options['fields']['view_user']['table'] = 'users';
  /* user_bulk_block */  /* Page */ $handler->display->display_options['fields']['view_user']['field'] = 'view_user';
  /* user_bulk_block */  /* Page */ $handler->display->display_options['fields']['view_user']['label'] = '';
  /* user_bulk_block */  /* Page */ $handler->display->display_options['fields']['view_user']['element_label_colon'] = FALSE;
  /* user_bulk_block */  /* Page */ /* Field: User: E-mail */
  /* user_bulk_block */  /* Page */ $handler->display->display_options['fields']['mail']['id'] = 'mail';
  /* user_bulk_block */  /* Page */ $handler->display->display_options['fields']['mail']['table'] = 'users';
  /* user_bulk_block */  /* Page */ $handler->display->display_options['fields']['mail']['field'] = 'mail';
  /* user_bulk_block */  /* Page */ $handler->display->display_options['fields']['mail']['exclude'] = TRUE;
  /* user_bulk_block */  /* Page */ /* Field: User: Uid */
  /* user_bulk_block */  /* Page */ $handler->display->display_options['fields']['uid']['id'] = 'uid';
  /* user_bulk_block */  /* Page */ $handler->display->display_options['fields']['uid']['table'] = 'users';
  /* user_bulk_block */  /* Page */ $handler->display->display_options['fields']['uid']['field'] = 'uid';
  /* user_bulk_block */  /* Page */ $handler->display->display_options['fields']['uid']['label'] = '';
  /* user_bulk_block */  /* Page */ $handler->display->display_options['fields']['uid']['exclude'] = TRUE;
  /* user_bulk_block */  /* Page */ $handler->display->display_options['fields']['uid']['element_label_colon'] = FALSE;
  /* user_bulk_block */  /* Page */ $handler->display->display_options['fields']['uid']['link_to_user'] = FALSE;
  /* user_bulk_block */  /* Page */ /* Field: Global: Custom text */
  /* user_bulk_block */  /* Page */ $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  /* user_bulk_block */  /* Page */ $handler->display->display_options['fields']['nothing']['table'] = 'views';
  /* user_bulk_block */  /* Page */ $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  /* user_bulk_block */  /* Page */ $handler->display->display_options['fields']['nothing']['label'] = '';
  /* user_bulk_block */  /* Page */ $handler->display->display_options['fields']['nothing']['alter']['text'] = 'edit';
  /* user_bulk_block */  /* Page */ $handler->display->display_options['fields']['nothing']['alter']['make_link'] = TRUE;
  /* user_bulk_block */  /* Page */ $handler->display->display_options['fields']['nothing']['alter']['path'] = 'user/[uid]/edit';
  /* user_bulk_block */  /* Page */ $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* user_bulk_block */  /* Page */ $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  /* user_bulk_block */  /* Page */ $handler->display->display_options['defaults']['filters'] = FALSE;
  /* user_bulk_block */  /* Page */ /* Filter criterion: User: Active */
  /* user_bulk_block */  /* Page */ $handler->display->display_options['filters']['status']['id'] = 'status';
  /* user_bulk_block */  /* Page */ $handler->display->display_options['filters']['status']['table'] = 'users';
  /* user_bulk_block */  /* Page */ $handler->display->display_options['filters']['status']['field'] = 'status';
  /* user_bulk_block */  /* Page */ $handler->display->display_options['filters']['status']['value'] = 'All';
  /* user_bulk_block */  /* Page */ $handler->display->display_options['filters']['status']['group'] = 1;
  /* user_bulk_block */  /* Page */ $handler->display->display_options['filters']['status']['exposed'] = TRUE;
  /* user_bulk_block */  /* Page */ $handler->display->display_options['filters']['status']['expose']['operator_id'] = '';
  /* user_bulk_block */  /* Page */ $handler->display->display_options['filters']['status']['expose']['label'] = 'Active';
  /* user_bulk_block */  /* Page */ $handler->display->display_options['filters']['status']['expose']['operator'] = 'status_op';
  /* user_bulk_block */  /* Page */ $handler->display->display_options['filters']['status']['expose']['identifier'] = 'status';
  /* user_bulk_block */  /* Page */ $handler->display->display_options['filters']['status']['expose']['remember_roles'] = array(
  /* user_bulk_block */  /* Page */   2 => '2',
  /* user_bulk_block */  /* Page */   1 => 0,
  /* user_bulk_block */  /* Page */   9 => 0,
  /* user_bulk_block */  /* Page */   10 => 0,
  /* user_bulk_block */  /* Page */ );
  /* user_bulk_block */  /* Page */ /* Filter criterion: Global: Combine fields filter */
  /* user_bulk_block */  /* Page */ $handler->display->display_options['filters']['combine']['id'] = 'combine';
  /* user_bulk_block */  /* Page */ $handler->display->display_options['filters']['combine']['table'] = 'views';
  /* user_bulk_block */  /* Page */ $handler->display->display_options['filters']['combine']['field'] = 'combine';
  /* user_bulk_block */  /* Page */ $handler->display->display_options['filters']['combine']['operator'] = 'word';
  /* user_bulk_block */  /* Page */ $handler->display->display_options['filters']['combine']['group'] = 1;
  /* user_bulk_block */  /* Page */ $handler->display->display_options['filters']['combine']['exposed'] = TRUE;
  /* user_bulk_block */  /* Page */ $handler->display->display_options['filters']['combine']['expose']['operator_id'] = 'combine_op';
  /* user_bulk_block */  /* Page */ $handler->display->display_options['filters']['combine']['expose']['label'] = 'Combined User Search';
  /* user_bulk_block */  /* Page */ $handler->display->display_options['filters']['combine']['expose']['operator'] = 'combine_op';
  /* user_bulk_block */  /* Page */ $handler->display->display_options['filters']['combine']['expose']['identifier'] = 'combine';
  /* user_bulk_block */  /* Page */ $handler->display->display_options['filters']['combine']['expose']['remember_roles'] = array(
  /* user_bulk_block */  /* Page */   2 => '2',
  /* user_bulk_block */  /* Page */   1 => 0,
  /* user_bulk_block */  /* Page */   9 => 0,
  /* user_bulk_block */  /* Page */   10 => 0,
  /* user_bulk_block */  /* Page */ );
  /* user_bulk_block */  /* Page */ $handler->display->display_options['filters']['combine']['expose']['autocomplete_items'] = '10';
  /* user_bulk_block */  /* Page */ $handler->display->display_options['filters']['combine']['expose']['autocomplete_min_chars'] = '0';
  /* user_bulk_block */  /* Page */ $handler->display->display_options['filters']['combine']['expose']['autocomplete_raw_suggestion'] = 1;
  /* user_bulk_block */  /* Page */ $handler->display->display_options['filters']['combine']['expose']['autocomplete_raw_dropdown'] = 1;
  /* user_bulk_block */  /* Page */ $handler->display->display_options['filters']['combine']['expose']['autocomplete_dependent'] = 0;
  /* user_bulk_block */  /* Page */ $handler->display->display_options['filters']['combine']['fields'] = array(
  /* user_bulk_block */  /* Page */   'field_name_first' => 'field_name_first',
  /* user_bulk_block */  /* Page */   'field_name_last' => 'field_name_last',
  /* user_bulk_block */  /* Page */   'name' => 'name',
  /* user_bulk_block */  /* Page */   'mail' => 'mail',
  /* user_bulk_block */  /* Page */ );
  /* user_bulk_block */  /* Page */ $handler->display->display_options['path'] = 'node/%/dashboard/bulk-users';
  /* user_bulk_block */  /* Page */ $handler->display->display_options['menu']['type'] = 'tab';
  /* user_bulk_block */  /* Page */ $handler->display->display_options['menu']['title'] = 'Manage Members';
  /* user_bulk_block */  /* Page */ $handler->display->display_options['menu']['weight'] = '3';
  /* user_bulk_block */  /* Page */ $handler->display->display_options['menu']['context'] = 0;
  /* user_bulk_block */  /* Page */ $handler->display->display_options['menu']['context_only_inline'] = 0;
  /* user_bulk_block */ $translatables['user_bulk_block'] = array(
  /* user_bulk_block */   t('Master'),
  /* user_bulk_block */   t('Manage users'),
  /* user_bulk_block */   t('more'),
  /* user_bulk_block */   t('Apply'),
  /* user_bulk_block */   t('Reset'),
  /* user_bulk_block */   t('Sort by'),
  /* user_bulk_block */   t('Asc'),
  /* user_bulk_block */   t('Desc'),
  /* user_bulk_block */   t('Items per page'),
  /* user_bulk_block */   t('- All -'),
  /* user_bulk_block */   t('Offset'),
  /* user_bulk_block */   t('« first'),
  /* user_bulk_block */   t('‹ previous'),
  /* user_bulk_block */   t('next ›'),
  /* user_bulk_block */   t('last »'),
  /* user_bulk_block */   t('Group node from OG membership'),
  /* user_bulk_block */   t('User'),
  /* user_bulk_block */   t('- Choose an operation -'),
  /* user_bulk_block */   t('Given Name'),
  /* user_bulk_block */   t('Family Name'),
  /* user_bulk_block */   t('Username'),
  /* user_bulk_block */   t('Active'),
  /* user_bulk_block */   t('Date joined'),
  /* user_bulk_block */   t('All'),
  /* user_bulk_block */   t('Page'),
  /* user_bulk_block */   t('Advanced options'),
  /* user_bulk_block */   t('This Members list displays both Blocked and Active user accounts.<br/> 
To search for a user, type or paste a Username, Given Name, Last Name or E-mail address.<br/>
To search for <b>Active users only</b>, first select<b> YES</b> in the Active dropdown field, type the user information in the search field and click the GO button. <br/>
To search for <b>Blocked user accounts</b>, select <b>NO</b>, type in the user information, and click the GO button.'),
  /* user_bulk_block */   t('E-mail'),
  /* user_bulk_block */   t('edit'),
  /* user_bulk_block */   t('Combined User Search'),
  /* user_bulk_block */ );
  $export['user_bulk_block'] = $view;

  return $export;
}
