<?php
/**
 * @file
 * gn2_support_desk.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function gn2_support_desk_views_default_views() {
  $export = array();

  /* support */ $view = new view();
  /* support */ $view->name = 'support';
  /* support */ $view->description = '';
  /* support */ $view->tag = 'default';
  /* support */ $view->base_table = 'node';
  /* support */ $view->human_name = 'Support';
  /* support */ $view->core = 7;
  /* support */ $view->api_version = '3.0';
  /* support */ $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* support */ /* Display: Master */
  /* support */  /* Master */ $handler = $view->new_display('default', 'Master', 'default');
  /* support */  /* Master */ $handler->display->display_options['title'] = 'Support';
  /* support */  /* Master */ $handler->display->display_options['use_more_always'] = FALSE;
  /* support */  /* Master */ $handler->display->display_options['access']['type'] = 'role';
  /* support */  /* Master */ $handler->display->display_options['access']['role'] = array(
  /* support */  /* Master */   9 => '9',
  /* support */  /* Master */ );
  /* support */  /* Master */ $handler->display->display_options['cache']['type'] = 'none';
  /* support */  /* Master */ $handler->display->display_options['query']['type'] = 'views_query';
  /* support */  /* Master */ $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  /* support */  /* Master */ $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Go';
  /* support */  /* Master */ $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  /* support */  /* Master */ $handler->display->display_options['exposed_form']['options']['expose_sort_order'] = FALSE;
  /* support */  /* Master */ $handler->display->display_options['exposed_form']['options']['bef'] = array(
  /* support */  /* Master */   'general' => array(
  /* support */  /* Master */     'input_required' => 0,
  /* support */  /* Master */     'text_input_required' => array(
  /* support */  /* Master */       'text_input_required' => array(
  /* support */  /* Master */         'value' => 'Select any filter and click on Apply to see results',
  /* support */  /* Master */         'format' => 'filtered_html',
  /* support */  /* Master */       ),
  /* support */  /* Master */     ),
  /* support */  /* Master */     'allow_secondary' => 0,
  /* support */  /* Master */     'secondary_label' => 'Advanced options',
  /* support */  /* Master */     'secondary_collapse_override' => '0',
  /* support */  /* Master */   ),
  /* support */  /* Master */   'combine' => array(
  /* support */  /* Master */     'bef_format' => 'default',
  /* support */  /* Master */     'more_options' => array(
  /* support */  /* Master */       'autosubmit' => 0,
  /* support */  /* Master */       'is_secondary' => 0,
  /* support */  /* Master */       'any_label' => '',
  /* support */  /* Master */       'bef_filter_description' => '',
  /* support */  /* Master */       'tokens' => array(
  /* support */  /* Master */         'available' => array(
  /* support */  /* Master */           0 => 'global_types',
  /* support */  /* Master */         ),
  /* support */  /* Master */       ),
  /* support */  /* Master */       'rewrite' => array(
  /* support */  /* Master */         'filter_rewrite_values' => '',
  /* support */  /* Master */       ),
  /* support */  /* Master */     ),
  /* support */  /* Master */   ),
  /* support */  /* Master */   'field_support_priority_value' => array(
  /* support */  /* Master */     'bef_format' => 'default',
  /* support */  /* Master */     'more_options' => array(
  /* support */  /* Master */       'bef_select_all_none' => 0,
  /* support */  /* Master */       'bef_collapsible' => 0,
  /* support */  /* Master */       'autosubmit' => 0,
  /* support */  /* Master */       'is_secondary' => 0,
  /* support */  /* Master */       'any_label' => '',
  /* support */  /* Master */       'bef_filter_description' => '',
  /* support */  /* Master */       'tokens' => array(
  /* support */  /* Master */         'available' => array(
  /* support */  /* Master */           0 => 'global_types',
  /* support */  /* Master */         ),
  /* support */  /* Master */       ),
  /* support */  /* Master */       'rewrite' => array(
  /* support */  /* Master */         'filter_rewrite_values' => '',
  /* support */  /* Master */       ),
  /* support */  /* Master */     ),
  /* support */  /* Master */   ),
  /* support */  /* Master */   'field_support_status_value' => array(
  /* support */  /* Master */     'bef_format' => 'default',
  /* support */  /* Master */     'more_options' => array(
  /* support */  /* Master */       'bef_select_all_none' => 0,
  /* support */  /* Master */       'bef_collapsible' => 0,
  /* support */  /* Master */       'autosubmit' => 0,
  /* support */  /* Master */       'is_secondary' => 0,
  /* support */  /* Master */       'any_label' => '',
  /* support */  /* Master */       'bef_filter_description' => '',
  /* support */  /* Master */       'tokens' => array(
  /* support */  /* Master */         'available' => array(
  /* support */  /* Master */           0 => 'global_types',
  /* support */  /* Master */         ),
  /* support */  /* Master */       ),
  /* support */  /* Master */       'rewrite' => array(
  /* support */  /* Master */         'filter_rewrite_values' => '',
  /* support */  /* Master */       ),
  /* support */  /* Master */     ),
  /* support */  /* Master */   ),
  /* support */  /* Master */   'field_support_resolution_value' => array(
  /* support */  /* Master */     'bef_format' => 'default',
  /* support */  /* Master */     'more_options' => array(
  /* support */  /* Master */       'bef_select_all_none' => 0,
  /* support */  /* Master */       'bef_collapsible' => 0,
  /* support */  /* Master */       'autosubmit' => 0,
  /* support */  /* Master */       'is_secondary' => 0,
  /* support */  /* Master */       'any_label' => '',
  /* support */  /* Master */       'bef_filter_description' => '',
  /* support */  /* Master */       'tokens' => array(
  /* support */  /* Master */         'available' => array(
  /* support */  /* Master */           0 => 'global_types',
  /* support */  /* Master */         ),
  /* support */  /* Master */       ),
  /* support */  /* Master */       'rewrite' => array(
  /* support */  /* Master */         'filter_rewrite_values' => '',
  /* support */  /* Master */       ),
  /* support */  /* Master */     ),
  /* support */  /* Master */   ),
  /* support */  /* Master */   'field_support_owner_target_id' => array(
  /* support */  /* Master */     'bef_format' => 'default',
  /* support */  /* Master */     'slider_options' => array(
  /* support */  /* Master */       'bef_slider_min' => '0',
  /* support */  /* Master */       'bef_slider_max' => '99999',
  /* support */  /* Master */       'bef_slider_step' => '1',
  /* support */  /* Master */       'bef_slider_animate' => '',
  /* support */  /* Master */       'bef_slider_orientation' => 'horizontal',
  /* support */  /* Master */     ),
  /* support */  /* Master */     'more_options' => array(
  /* support */  /* Master */       'autosubmit' => 0,
  /* support */  /* Master */       'is_secondary' => 0,
  /* support */  /* Master */       'any_label' => '',
  /* support */  /* Master */       'bef_filter_description' => '',
  /* support */  /* Master */       'tokens' => array(
  /* support */  /* Master */         'available' => array(
  /* support */  /* Master */           0 => 'global_types',
  /* support */  /* Master */         ),
  /* support */  /* Master */       ),
  /* support */  /* Master */       'rewrite' => array(
  /* support */  /* Master */         'filter_rewrite_values' => '',
  /* support */  /* Master */       ),
  /* support */  /* Master */     ),
  /* support */  /* Master */   ),
  /* support */  /* Master */   'created' => array(
  /* support */  /* Master */     'bef_format' => 'bef_datepicker',
  /* support */  /* Master */     'more_options' => array(
  /* support */  /* Master */       'autosubmit' => 0,
  /* support */  /* Master */       'is_secondary' => 0,
  /* support */  /* Master */       'any_label' => '',
  /* support */  /* Master */       'bef_filter_description' => '',
  /* support */  /* Master */       'tokens' => array(
  /* support */  /* Master */         'available' => array(
  /* support */  /* Master */           0 => 'global_types',
  /* support */  /* Master */         ),
  /* support */  /* Master */       ),
  /* support */  /* Master */       'rewrite' => array(
  /* support */  /* Master */         'filter_rewrite_values' => '',
  /* support */  /* Master */       ),
  /* support */  /* Master */       'datepicker_options' => '',
  /* support */  /* Master */     ),
  /* support */  /* Master */   ),
  /* support */  /* Master */   'changed' => array(
  /* support */  /* Master */     'bef_format' => 'bef_datepicker',
  /* support */  /* Master */     'more_options' => array(
  /* support */  /* Master */       'autosubmit' => 0,
  /* support */  /* Master */       'is_secondary' => 0,
  /* support */  /* Master */       'any_label' => '',
  /* support */  /* Master */       'bef_filter_description' => '',
  /* support */  /* Master */       'tokens' => array(
  /* support */  /* Master */         'available' => array(
  /* support */  /* Master */           0 => 'global_types',
  /* support */  /* Master */         ),
  /* support */  /* Master */       ),
  /* support */  /* Master */       'rewrite' => array(
  /* support */  /* Master */         'filter_rewrite_values' => '',
  /* support */  /* Master */       ),
  /* support */  /* Master */       'datepicker_options' => '',
  /* support */  /* Master */     ),
  /* support */  /* Master */   ),
  /* support */  /* Master */ );
  /* support */  /* Master */ $handler->display->display_options['pager']['type'] = 'full';
  /* support */  /* Master */ $handler->display->display_options['pager']['options']['items_per_page'] = '100';
  /* support */  /* Master */ $handler->display->display_options['style_plugin'] = 'table';
  /* support */  /* Master */ $handler->display->display_options['style_options']['columns'] = array(
  /* support */  /* Master */   'title' => 'title',
  /* support */  /* Master */   'created' => 'created',
  /* support */  /* Master */   'changed' => 'changed',
  /* support */  /* Master */   'field_name_last' => 'field_name_last',
  /* support */  /* Master */   'field_name_first' => 'field_name_first',
  /* support */  /* Master */   'field_telephone_number' => 'field_telephone_number',
  /* support */  /* Master */   'field_email_address' => 'field_email_address',
  /* support */  /* Master */   'field_description' => 'field_description',
  /* support */  /* Master */   'field_support_status' => 'field_support_status',
  /* support */  /* Master */   'field_support_priority' => 'field_support_priority',
  /* support */  /* Master */   'field_support_owner' => 'field_support_owner',
  /* support */  /* Master */   'field_support_resolution' => 'field_support_resolution',
  /* support */  /* Master */ );
  /* support */  /* Master */ $handler->display->display_options['style_options']['default'] = 'created';
  /* support */  /* Master */ $handler->display->display_options['style_options']['info'] = array(
  /* support */  /* Master */   'title' => array(
  /* support */  /* Master */     'sortable' => 1,
  /* support */  /* Master */     'default_sort_order' => 'asc',
  /* support */  /* Master */     'align' => 'views-align-left',
  /* support */  /* Master */     'separator' => '',
  /* support */  /* Master */     'empty_column' => 0,
  /* support */  /* Master */   ),
  /* support */  /* Master */   'created' => array(
  /* support */  /* Master */     'sortable' => 1,
  /* support */  /* Master */     'default_sort_order' => 'desc',
  /* support */  /* Master */     'align' => 'views-align-left',
  /* support */  /* Master */     'separator' => '',
  /* support */  /* Master */     'empty_column' => 0,
  /* support */  /* Master */   ),
  /* support */  /* Master */   'changed' => array(
  /* support */  /* Master */     'sortable' => 1,
  /* support */  /* Master */     'default_sort_order' => 'desc',
  /* support */  /* Master */     'align' => '',
  /* support */  /* Master */     'separator' => '',
  /* support */  /* Master */     'empty_column' => 0,
  /* support */  /* Master */   ),
  /* support */  /* Master */   'field_name_last' => array(
  /* support */  /* Master */     'sortable' => 0,
  /* support */  /* Master */     'default_sort_order' => 'asc',
  /* support */  /* Master */     'align' => '',
  /* support */  /* Master */     'separator' => '',
  /* support */  /* Master */     'empty_column' => 0,
  /* support */  /* Master */   ),
  /* support */  /* Master */   'field_name_first' => array(
  /* support */  /* Master */     'sortable' => 0,
  /* support */  /* Master */     'default_sort_order' => 'asc',
  /* support */  /* Master */     'align' => '',
  /* support */  /* Master */     'separator' => '',
  /* support */  /* Master */     'empty_column' => 0,
  /* support */  /* Master */   ),
  /* support */  /* Master */   'field_telephone_number' => array(
  /* support */  /* Master */     'sortable' => 0,
  /* support */  /* Master */     'default_sort_order' => 'asc',
  /* support */  /* Master */     'align' => '',
  /* support */  /* Master */     'separator' => '',
  /* support */  /* Master */     'empty_column' => 0,
  /* support */  /* Master */   ),
  /* support */  /* Master */   'field_email_address' => array(
  /* support */  /* Master */     'sortable' => 0,
  /* support */  /* Master */     'default_sort_order' => 'asc',
  /* support */  /* Master */     'align' => '',
  /* support */  /* Master */     'separator' => '',
  /* support */  /* Master */     'empty_column' => 0,
  /* support */  /* Master */   ),
  /* support */  /* Master */   'field_description' => array(
  /* support */  /* Master */     'sortable' => 0,
  /* support */  /* Master */     'default_sort_order' => 'asc',
  /* support */  /* Master */     'align' => 'views-align-left',
  /* support */  /* Master */     'separator' => '',
  /* support */  /* Master */     'empty_column' => 0,
  /* support */  /* Master */   ),
  /* support */  /* Master */   'field_support_status' => array(
  /* support */  /* Master */     'sortable' => 1,
  /* support */  /* Master */     'default_sort_order' => 'asc',
  /* support */  /* Master */     'align' => 'views-align-left',
  /* support */  /* Master */     'separator' => '',
  /* support */  /* Master */     'empty_column' => 0,
  /* support */  /* Master */   ),
  /* support */  /* Master */   'field_support_priority' => array(
  /* support */  /* Master */     'sortable' => 1,
  /* support */  /* Master */     'default_sort_order' => 'asc',
  /* support */  /* Master */     'align' => 'views-align-left',
  /* support */  /* Master */     'separator' => '',
  /* support */  /* Master */     'empty_column' => 0,
  /* support */  /* Master */   ),
  /* support */  /* Master */   'field_support_owner' => array(
  /* support */  /* Master */     'sortable' => 0,
  /* support */  /* Master */     'default_sort_order' => 'asc',
  /* support */  /* Master */     'align' => '',
  /* support */  /* Master */     'separator' => '',
  /* support */  /* Master */     'empty_column' => 0,
  /* support */  /* Master */   ),
  /* support */  /* Master */   'field_support_resolution' => array(
  /* support */  /* Master */     'sortable' => 0,
  /* support */  /* Master */     'default_sort_order' => 'asc',
  /* support */  /* Master */     'align' => '',
  /* support */  /* Master */     'separator' => '',
  /* support */  /* Master */     'empty_column' => 0,
  /* support */  /* Master */   ),
  /* support */  /* Master */ );
  /* support */  /* Master */ $handler->display->display_options['style_options']['caption'] = 'Manager\'s Support Ticket List';
  /* support */  /* Master */ /* Relationship: Entity Reference: Referenced Entity */
  /* support */  /* Master */ $handler->display->display_options['relationships']['field_parent_organization_target_id']['id'] = 'field_parent_organization_target_id';
  /* support */  /* Master */ $handler->display->display_options['relationships']['field_parent_organization_target_id']['table'] = 'field_data_field_parent_organization';
  /* support */  /* Master */ $handler->display->display_options['relationships']['field_parent_organization_target_id']['field'] = 'field_parent_organization_target_id';
  /* support */  /* Master */ $handler->display->display_options['relationships']['field_parent_organization_target_id']['label'] = 'field_parent_organization';
  /* support */  /* Master */ /* Relationship: Content: Author */
  /* support */  /* Master */ $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  /* support */  /* Master */ $handler->display->display_options['relationships']['uid']['table'] = 'node';
  /* support */  /* Master */ $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* support */  /* Master */ /* Field: Content: Priority */
  /* support */  /* Master */ $handler->display->display_options['fields']['field_support_priority']['id'] = 'field_support_priority';
  /* support */  /* Master */ $handler->display->display_options['fields']['field_support_priority']['table'] = 'field_data_field_support_priority';
  /* support */  /* Master */ $handler->display->display_options['fields']['field_support_priority']['field'] = 'field_support_priority';
  /* support */  /* Master */ $handler->display->display_options['fields']['field_support_priority']['element_type'] = '0';
  /* support */  /* Master */ $handler->display->display_options['fields']['field_support_priority']['element_label_colon'] = FALSE;
  /* support */  /* Master */ $handler->display->display_options['fields']['field_support_priority']['element_wrapper_type'] = '0';
  /* support */  /* Master */ $handler->display->display_options['fields']['field_support_priority']['element_default_classes'] = FALSE;
  /* support */  /* Master */ $handler->display->display_options['fields']['field_support_priority']['settings'] = array(
  /* support */  /* Master */   'field_formatter_class' => '',
  /* support */  /* Master */ );
  /* support */  /* Master */ $handler->display->display_options['fields']['field_support_priority']['field_api_classes'] = TRUE;
  /* support */  /* Master */ /* Field: Content: Status */
  /* support */  /* Master */ $handler->display->display_options['fields']['field_support_status']['id'] = 'field_support_status';
  /* support */  /* Master */ $handler->display->display_options['fields']['field_support_status']['table'] = 'field_data_field_support_status';
  /* support */  /* Master */ $handler->display->display_options['fields']['field_support_status']['field'] = 'field_support_status';
  /* support */  /* Master */ $handler->display->display_options['fields']['field_support_status']['element_type'] = '0';
  /* support */  /* Master */ $handler->display->display_options['fields']['field_support_status']['element_label_colon'] = FALSE;
  /* support */  /* Master */ $handler->display->display_options['fields']['field_support_status']['element_wrapper_type'] = '0';
  /* support */  /* Master */ $handler->display->display_options['fields']['field_support_status']['element_default_classes'] = FALSE;
  /* support */  /* Master */ $handler->display->display_options['fields']['field_support_status']['settings'] = array(
  /* support */  /* Master */   'field_formatter_class' => '',
  /* support */  /* Master */ );
  /* support */  /* Master */ $handler->display->display_options['fields']['field_support_status']['field_api_classes'] = TRUE;
  /* support */  /* Master */ /* Field: Content: Post date */
  /* support */  /* Master */ $handler->display->display_options['fields']['created']['id'] = 'created';
  /* support */  /* Master */ $handler->display->display_options['fields']['created']['table'] = 'node';
  /* support */  /* Master */ $handler->display->display_options['fields']['created']['field'] = 'created';
  /* support */  /* Master */ $handler->display->display_options['fields']['created']['label'] = 'Created';
  /* support */  /* Master */ $handler->display->display_options['fields']['created']['date_format'] = 'custom';
  /* support */  /* Master */ $handler->display->display_options['fields']['created']['custom_date_format'] = 'n/j/Y H:i';
  /* support */  /* Master */ $handler->display->display_options['fields']['created']['second_date_format'] = 'date_format_globalnet_date';
  /* support */  /* Master */ /* Field: Content: Updated date */
  /* support */  /* Master */ $handler->display->display_options['fields']['changed']['id'] = 'changed';
  /* support */  /* Master */ $handler->display->display_options['fields']['changed']['table'] = 'node';
  /* support */  /* Master */ $handler->display->display_options['fields']['changed']['field'] = 'changed';
  /* support */  /* Master */ $handler->display->display_options['fields']['changed']['label'] = 'Updated';
  /* support */  /* Master */ $handler->display->display_options['fields']['changed']['element_label_colon'] = FALSE;
  /* support */  /* Master */ $handler->display->display_options['fields']['changed']['date_format'] = 'custom';
  /* support */  /* Master */ $handler->display->display_options['fields']['changed']['custom_date_format'] = 'n/j/Y H:i';
  /* support */  /* Master */ $handler->display->display_options['fields']['changed']['second_date_format'] = 'date_format_globalnet_date';
  /* support */  /* Master */ /* Field: Content: Edit link */
  /* support */  /* Master */ $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  /* support */  /* Master */ $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  /* support */  /* Master */ $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  /* support */  /* Master */ $handler->display->display_options['fields']['edit_node']['exclude'] = TRUE;
  /* support */  /* Master */ /* Field: Content: Title */
  /* support */  /* Master */ $handler->display->display_options['fields']['title']['id'] = 'title';
  /* support */  /* Master */ $handler->display->display_options['fields']['title']['table'] = 'node';
  /* support */  /* Master */ $handler->display->display_options['fields']['title']['field'] = 'title';
  /* support */  /* Master */ $handler->display->display_options['fields']['title']['label'] = 'Ticket ID';
  /* support */  /* Master */ $handler->display->display_options['fields']['title']['alter']['text'] = '<a href="/[title]/edit">[title]</a> ';
  /* support */  /* Master */ $handler->display->display_options['fields']['title']['alter']['path'] = '[edit_node] ';
  /* support */  /* Master */ $handler->display->display_options['fields']['title']['alter']['alt'] = '[title]';
  /* support */  /* Master */ $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  /* support */  /* Master */ $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* support */  /* Master */ /* Field: User: Name */
  /* support */  /* Master */ $handler->display->display_options['fields']['name_1']['id'] = 'name_1';
  /* support */  /* Master */ $handler->display->display_options['fields']['name_1']['table'] = 'users';
  /* support */  /* Master */ $handler->display->display_options['fields']['name_1']['field'] = 'name';
  /* support */  /* Master */ $handler->display->display_options['fields']['name_1']['relationship'] = 'uid';
  /* support */  /* Master */ $handler->display->display_options['fields']['name_1']['label'] = 'Username';
  /* support */  /* Master */ /* Field: Field: Family Name */
  /* support */  /* Master */ $handler->display->display_options['fields']['field_name_last']['id'] = 'field_name_last';
  /* support */  /* Master */ $handler->display->display_options['fields']['field_name_last']['table'] = 'field_data_field_name_last';
  /* support */  /* Master */ $handler->display->display_options['fields']['field_name_last']['field'] = 'field_name_last';
  /* support */  /* Master */ $handler->display->display_options['fields']['field_name_last']['exclude'] = TRUE;
  /* support */  /* Master */ $handler->display->display_options['fields']['field_name_last']['element_type'] = 'span';
  /* support */  /* Master */ $handler->display->display_options['fields']['field_name_last']['element_default_classes'] = FALSE;
  /* support */  /* Master */ $handler->display->display_options['fields']['field_name_last']['type'] = 'text_plain';
  /* support */  /* Master */ $handler->display->display_options['fields']['field_name_last']['settings'] = array(
  /* support */  /* Master */   'field_formatter_class' => '',
  /* support */  /* Master */ );
  /* support */  /* Master */ /* Field: Field: Given Name */
  /* support */  /* Master */ $handler->display->display_options['fields']['field_name_first']['id'] = 'field_name_first';
  /* support */  /* Master */ $handler->display->display_options['fields']['field_name_first']['table'] = 'field_data_field_name_first';
  /* support */  /* Master */ $handler->display->display_options['fields']['field_name_first']['field'] = 'field_name_first';
  /* support */  /* Master */ $handler->display->display_options['fields']['field_name_first']['label'] = 'Name';
  /* support */  /* Master */ $handler->display->display_options['fields']['field_name_first']['alter']['alter_text'] = TRUE;
  /* support */  /* Master */ $handler->display->display_options['fields']['field_name_first']['alter']['text'] = '[field_name_first] [field_name_last]';
  /* support */  /* Master */ $handler->display->display_options['fields']['field_name_first']['element_type'] = 'span';
  /* support */  /* Master */ $handler->display->display_options['fields']['field_name_first']['element_default_classes'] = FALSE;
  /* support */  /* Master */ $handler->display->display_options['fields']['field_name_first']['type'] = 'text_plain';
  /* support */  /* Master */ $handler->display->display_options['fields']['field_name_first']['settings'] = array(
  /* support */  /* Master */   'field_formatter_class' => '',
  /* support */  /* Master */ );
  /* support */  /* Master */ /* Field: Field: Telephone Number */
  /* support */  /* Master */ $handler->display->display_options['fields']['field_telephone_number']['id'] = 'field_telephone_number';
  /* support */  /* Master */ $handler->display->display_options['fields']['field_telephone_number']['table'] = 'field_data_field_telephone_number';
  /* support */  /* Master */ $handler->display->display_options['fields']['field_telephone_number']['field'] = 'field_telephone_number';
  /* support */  /* Master */ $handler->display->display_options['fields']['field_telephone_number']['exclude'] = TRUE;
  /* support */  /* Master */ $handler->display->display_options['fields']['field_telephone_number']['alter']['alter_text'] = TRUE;
  /* support */  /* Master */ $handler->display->display_options['fields']['field_telephone_number']['alter']['text'] = '- [field_telephone_number]';
  /* support */  /* Master */ $handler->display->display_options['fields']['field_telephone_number']['element_default_classes'] = FALSE;
  /* support */  /* Master */ $handler->display->display_options['fields']['field_telephone_number']['type'] = 'text_plain';
  /* support */  /* Master */ $handler->display->display_options['fields']['field_telephone_number']['settings'] = array(
  /* support */  /* Master */   'field_formatter_class' => '',
  /* support */  /* Master */ );
  /* support */  /* Master */ $handler->display->display_options['fields']['field_telephone_number']['field_api_classes'] = TRUE;
  /* support */  /* Master */ /* Field: Field: Email Address */
  /* support */  /* Master */ $handler->display->display_options['fields']['field_email_address']['id'] = 'field_email_address';
  /* support */  /* Master */ $handler->display->display_options['fields']['field_email_address']['table'] = 'field_data_field_email_address';
  /* support */  /* Master */ $handler->display->display_options['fields']['field_email_address']['field'] = 'field_email_address';
  /* support */  /* Master */ $handler->display->display_options['fields']['field_email_address']['label'] = 'Contact';
  /* support */  /* Master */ $handler->display->display_options['fields']['field_email_address']['alter']['alter_text'] = TRUE;
  /* support */  /* Master */ $handler->display->display_options['fields']['field_email_address']['alter']['text'] = '[field_email_address]  [field_telephone_number]';
  /* support */  /* Master */ $handler->display->display_options['fields']['field_email_address']['element_default_classes'] = FALSE;
  /* support */  /* Master */ $handler->display->display_options['fields']['field_email_address']['settings'] = array(
  /* support */  /* Master */   'field_formatter_class' => '',
  /* support */  /* Master */ );
  /* support */  /* Master */ $handler->display->display_options['fields']['field_email_address']['field_api_classes'] = TRUE;
  /* support */  /* Master */ /* Field: Field: Description */
  /* support */  /* Master */ $handler->display->display_options['fields']['field_description']['id'] = 'field_description';
  /* support */  /* Master */ $handler->display->display_options['fields']['field_description']['table'] = 'field_data_field_description';
  /* support */  /* Master */ $handler->display->display_options['fields']['field_description']['field'] = 'field_description';
  /* support */  /* Master */ $handler->display->display_options['fields']['field_description']['element_type'] = '0';
  /* support */  /* Master */ $handler->display->display_options['fields']['field_description']['element_wrapper_type'] = '0';
  /* support */  /* Master */ $handler->display->display_options['fields']['field_description']['element_default_classes'] = FALSE;
  /* support */  /* Master */ $handler->display->display_options['fields']['field_description']['type'] = 'text_plain';
  /* support */  /* Master */ $handler->display->display_options['fields']['field_description']['settings'] = array(
  /* support */  /* Master */   'field_formatter_class' => '',
  /* support */  /* Master */ );
  /* support */  /* Master */ $handler->display->display_options['fields']['field_description']['field_api_classes'] = TRUE;
  /* support */  /* Master */ /* Field: Content: Org Short Title */
  /* support */  /* Master */ $handler->display->display_options['fields']['field_org_short_title']['id'] = 'field_org_short_title';
  /* support */  /* Master */ $handler->display->display_options['fields']['field_org_short_title']['table'] = 'field_data_field_org_short_title';
  /* support */  /* Master */ $handler->display->display_options['fields']['field_org_short_title']['field'] = 'field_org_short_title';
  /* support */  /* Master */ $handler->display->display_options['fields']['field_org_short_title']['relationship'] = 'field_parent_organization_target_id';
  /* support */  /* Master */ $handler->display->display_options['fields']['field_org_short_title']['label'] = 'Org';
  /* support */  /* Master */ $handler->display->display_options['fields']['field_org_short_title']['element_type'] = '0';
  /* support */  /* Master */ $handler->display->display_options['fields']['field_org_short_title']['element_label_colon'] = FALSE;
  /* support */  /* Master */ $handler->display->display_options['fields']['field_org_short_title']['element_wrapper_type'] = '0';
  /* support */  /* Master */ $handler->display->display_options['fields']['field_org_short_title']['element_default_classes'] = FALSE;
  /* support */  /* Master */ $handler->display->display_options['fields']['field_org_short_title']['settings'] = array(
  /* support */  /* Master */   'field_formatter_class' => '',
  /* support */  /* Master */ );
  /* support */  /* Master */ $handler->display->display_options['fields']['field_org_short_title']['field_api_classes'] = TRUE;
  /* support */  /* Master */ /* Sort criterion: Content: Post date */
  /* support */  /* Master */ $handler->display->display_options['sorts']['created']['id'] = 'created';
  /* support */  /* Master */ $handler->display->display_options['sorts']['created']['table'] = 'node';
  /* support */  /* Master */ $handler->display->display_options['sorts']['created']['field'] = 'created';
  /* support */  /* Master */ $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* support */  /* Master */ $handler->display->display_options['sorts']['created']['expose']['label'] = 'Post date';
  /* support */  /* Master */ /* Sort criterion: Content: Updated date */
  /* support */  /* Master */ $handler->display->display_options['sorts']['changed']['id'] = 'changed';
  /* support */  /* Master */ $handler->display->display_options['sorts']['changed']['table'] = 'node';
  /* support */  /* Master */ $handler->display->display_options['sorts']['changed']['field'] = 'changed';
  /* support */  /* Master */ $handler->display->display_options['sorts']['changed']['order'] = 'DESC';
  /* support */  /* Master */ $handler->display->display_options['sorts']['changed']['expose']['label'] = 'Updated date';
  /* support */  /* Master */ /* Filter criterion: Content: Published */
  /* support */  /* Master */ $handler->display->display_options['filters']['status']['id'] = 'status';
  /* support */  /* Master */ $handler->display->display_options['filters']['status']['table'] = 'node';
  /* support */  /* Master */ $handler->display->display_options['filters']['status']['field'] = 'status';
  /* support */  /* Master */ $handler->display->display_options['filters']['status']['value'] = 1;
  /* support */  /* Master */ $handler->display->display_options['filters']['status']['group'] = 1;
  /* support */  /* Master */ $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* support */  /* Master */ /* Filter criterion: Content: Type */
  /* support */  /* Master */ $handler->display->display_options['filters']['type']['id'] = 'type';
  /* support */  /* Master */ $handler->display->display_options['filters']['type']['table'] = 'node';
  /* support */  /* Master */ $handler->display->display_options['filters']['type']['field'] = 'type';
  /* support */  /* Master */ $handler->display->display_options['filters']['type']['value'] = array(
  /* support */  /* Master */   'support' => 'support',
  /* support */  /* Master */ );
  /* support */  /* Master */ $handler->display->display_options['filters']['type']['group'] = 1;
  /* support */  /* Master */ /* Filter criterion: Content: Org Short Title (field_org_short_title) */
  /* support */  /* Master */ $handler->display->display_options['filters']['field_org_short_title_value']['id'] = 'field_org_short_title_value';
  /* support */  /* Master */ $handler->display->display_options['filters']['field_org_short_title_value']['table'] = 'field_data_field_org_short_title';
  /* support */  /* Master */ $handler->display->display_options['filters']['field_org_short_title_value']['field'] = 'field_org_short_title_value';
  /* support */  /* Master */ $handler->display->display_options['filters']['field_org_short_title_value']['relationship'] = 'field_parent_organization_target_id';
  /* support */  /* Master */ $handler->display->display_options['filters']['field_org_short_title_value']['operator'] = 'contains';
  /* support */  /* Master */ $handler->display->display_options['filters']['field_org_short_title_value']['group'] = 1;
  /* support */  /* Master */ $handler->display->display_options['filters']['field_org_short_title_value']['exposed'] = TRUE;
  /* support */  /* Master */ $handler->display->display_options['filters']['field_org_short_title_value']['expose']['operator_id'] = 'field_org_short_title_value_op';
  /* support */  /* Master */ $handler->display->display_options['filters']['field_org_short_title_value']['expose']['label'] = 'Partner org';
  /* support */  /* Master */ $handler->display->display_options['filters']['field_org_short_title_value']['expose']['operator'] = 'field_org_short_title_value_op';
  /* support */  /* Master */ $handler->display->display_options['filters']['field_org_short_title_value']['expose']['identifier'] = 'field_org_short_title_value';
  /* support */  /* Master */ $handler->display->display_options['filters']['field_org_short_title_value']['expose']['remember_roles'] = array(
  /* support */  /* Master */   2 => '2',
  /* support */  /* Master */   1 => 0,
  /* support */  /* Master */   9 => 0,
  /* support */  /* Master */   10 => 0,
  /* support */  /* Master */ );
  /* support */  /* Master */ $handler->display->display_options['filters']['field_org_short_title_value']['expose']['autocomplete_filter'] = 1;
  /* support */  /* Master */ $handler->display->display_options['filters']['field_org_short_title_value']['expose']['autocomplete_items'] = '10';
  /* support */  /* Master */ $handler->display->display_options['filters']['field_org_short_title_value']['expose']['autocomplete_min_chars'] = '0';
  /* support */  /* Master */ $handler->display->display_options['filters']['field_org_short_title_value']['expose']['autocomplete_field'] = 'field_org_short_title';
  /* support */  /* Master */ $handler->display->display_options['filters']['field_org_short_title_value']['expose']['autocomplete_raw_suggestion'] = 1;
  /* support */  /* Master */ $handler->display->display_options['filters']['field_org_short_title_value']['expose']['autocomplete_raw_dropdown'] = 1;
  /* support */  /* Master */ $handler->display->display_options['filters']['field_org_short_title_value']['expose']['autocomplete_dependent'] = 0;
  /* support */  /* Master */ /* Filter criterion: Content: Priority (field_support_priority) */
  /* support */  /* Master */ $handler->display->display_options['filters']['field_support_priority_value']['id'] = 'field_support_priority_value';
  /* support */  /* Master */ $handler->display->display_options['filters']['field_support_priority_value']['table'] = 'field_data_field_support_priority';
  /* support */  /* Master */ $handler->display->display_options['filters']['field_support_priority_value']['field'] = 'field_support_priority_value';
  /* support */  /* Master */ $handler->display->display_options['filters']['field_support_priority_value']['group'] = 1;
  /* support */  /* Master */ $handler->display->display_options['filters']['field_support_priority_value']['exposed'] = TRUE;
  /* support */  /* Master */ $handler->display->display_options['filters']['field_support_priority_value']['expose']['operator_id'] = 'field_support_priority_value_op';
  /* support */  /* Master */ $handler->display->display_options['filters']['field_support_priority_value']['expose']['label'] = 'Priority';
  /* support */  /* Master */ $handler->display->display_options['filters']['field_support_priority_value']['expose']['operator'] = 'field_support_priority_value_op';
  /* support */  /* Master */ $handler->display->display_options['filters']['field_support_priority_value']['expose']['identifier'] = 'field_support_priority_value';
  /* support */  /* Master */ $handler->display->display_options['filters']['field_support_priority_value']['expose']['multiple'] = TRUE;
  /* support */  /* Master */ $handler->display->display_options['filters']['field_support_priority_value']['expose']['remember_roles'] = array(
  /* support */  /* Master */   2 => '2',
  /* support */  /* Master */   1 => 0,
  /* support */  /* Master */   9 => 0,
  /* support */  /* Master */   10 => 0,
  /* support */  /* Master */   11 => 0,
  /* support */  /* Master */ );
  /* support */  /* Master */ /* Filter criterion: Content: Status (field_support_status) */
  /* support */  /* Master */ $handler->display->display_options['filters']['field_support_status_value']['id'] = 'field_support_status_value';
  /* support */  /* Master */ $handler->display->display_options['filters']['field_support_status_value']['table'] = 'field_data_field_support_status';
  /* support */  /* Master */ $handler->display->display_options['filters']['field_support_status_value']['field'] = 'field_support_status_value';
  /* support */  /* Master */ $handler->display->display_options['filters']['field_support_status_value']['group'] = 1;
  /* support */  /* Master */ $handler->display->display_options['filters']['field_support_status_value']['exposed'] = TRUE;
  /* support */  /* Master */ $handler->display->display_options['filters']['field_support_status_value']['expose']['operator_id'] = 'field_support_status_value_op';
  /* support */  /* Master */ $handler->display->display_options['filters']['field_support_status_value']['expose']['label'] = 'Status';
  /* support */  /* Master */ $handler->display->display_options['filters']['field_support_status_value']['expose']['operator'] = 'field_support_status_value_op';
  /* support */  /* Master */ $handler->display->display_options['filters']['field_support_status_value']['expose']['identifier'] = 'field_support_status_value';
  /* support */  /* Master */ $handler->display->display_options['filters']['field_support_status_value']['expose']['multiple'] = TRUE;
  /* support */  /* Master */ $handler->display->display_options['filters']['field_support_status_value']['expose']['remember_roles'] = array(
  /* support */  /* Master */   2 => '2',
  /* support */  /* Master */   1 => 0,
  /* support */  /* Master */   9 => 0,
  /* support */  /* Master */   10 => 0,
  /* support */  /* Master */   11 => 0,
  /* support */  /* Master */ );
  /* support */  /* Master */ /* Filter criterion: Content: Post date */
  /* support */  /* Master */ $handler->display->display_options['filters']['created']['id'] = 'created';
  /* support */  /* Master */ $handler->display->display_options['filters']['created']['table'] = 'node';
  /* support */  /* Master */ $handler->display->display_options['filters']['created']['field'] = 'created';
  /* support */  /* Master */ $handler->display->display_options['filters']['created']['operator'] = 'between';
  /* support */  /* Master */ $handler->display->display_options['filters']['created']['group'] = 1;
  /* support */  /* Master */ $handler->display->display_options['filters']['created']['exposed'] = TRUE;
  /* support */  /* Master */ $handler->display->display_options['filters']['created']['expose']['operator_id'] = 'created_op';
  /* support */  /* Master */ $handler->display->display_options['filters']['created']['expose']['label'] = 'Date Created';
  /* support */  /* Master */ $handler->display->display_options['filters']['created']['expose']['operator'] = 'created_op';
  /* support */  /* Master */ $handler->display->display_options['filters']['created']['expose']['identifier'] = 'created';
  /* support */  /* Master */ $handler->display->display_options['filters']['created']['expose']['remember_roles'] = array(
  /* support */  /* Master */   2 => '2',
  /* support */  /* Master */   1 => 0,
  /* support */  /* Master */   9 => 0,
  /* support */  /* Master */   10 => 0,
  /* support */  /* Master */   11 => 0,
  /* support */  /* Master */ );
  /* support */  /* Master */ /* Filter criterion: Content: Updated date */
  /* support */  /* Master */ $handler->display->display_options['filters']['changed']['id'] = 'changed';
  /* support */  /* Master */ $handler->display->display_options['filters']['changed']['table'] = 'node';
  /* support */  /* Master */ $handler->display->display_options['filters']['changed']['field'] = 'changed';
  /* support */  /* Master */ $handler->display->display_options['filters']['changed']['operator'] = 'between';
  /* support */  /* Master */ $handler->display->display_options['filters']['changed']['group'] = 1;
  /* support */  /* Master */ $handler->display->display_options['filters']['changed']['exposed'] = TRUE;
  /* support */  /* Master */ $handler->display->display_options['filters']['changed']['expose']['operator_id'] = 'changed_op';
  /* support */  /* Master */ $handler->display->display_options['filters']['changed']['expose']['label'] = 'Date Updated';
  /* support */  /* Master */ $handler->display->display_options['filters']['changed']['expose']['operator'] = 'changed_op';
  /* support */  /* Master */ $handler->display->display_options['filters']['changed']['expose']['identifier'] = 'changed';
  /* support */  /* Master */ $handler->display->display_options['filters']['changed']['expose']['remember_roles'] = array(
  /* support */  /* Master */   2 => '2',
  /* support */  /* Master */   1 => 0,
  /* support */  /* Master */   9 => 0,
  /* support */  /* Master */   10 => 0,
  /* support */  /* Master */   11 => 0,
  /* support */  /* Master */ );

  /* support */ /* Display: Admin - Support */
  /* support */  /* Admin - Support */ $handler = $view->new_display('page', 'Admin - Support', 'page');
  /* support */  /* Admin - Support */ $handler->display->display_options['path'] = 'admin/manage/support';
  /* support */  /* Admin - Support */ $handler->display->display_options['menu']['type'] = 'tab';
  /* support */  /* Admin - Support */ $handler->display->display_options['menu']['title'] = 'Support';
  /* support */  /* Admin - Support */ $handler->display->display_options['menu']['weight'] = '10';
  /* support */  /* Admin - Support */ $handler->display->display_options['menu']['context'] = 0;
  /* support */  /* Admin - Support */ $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* support */ /* Display: Thanks - Support */
  /* support */  /* Thanks - Support */ $handler = $view->new_display('page', 'Thanks - Support', 'page_2');
  /* support */  /* Thanks - Support */ $handler->display->display_options['defaults']['title'] = FALSE;
  /* support */  /* Thanks - Support */ $handler->display->display_options['defaults']['access'] = FALSE;
  /* support */  /* Thanks - Support */ $handler->display->display_options['access']['type'] = 'none';
  /* support */  /* Thanks - Support */ $handler->display->display_options['defaults']['pager'] = FALSE;
  /* support */  /* Thanks - Support */ $handler->display->display_options['pager']['type'] = 'some';
  /* support */  /* Thanks - Support */ $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  /* support */  /* Thanks - Support */ $handler->display->display_options['pager']['options']['offset'] = '0';
  /* support */  /* Thanks - Support */ $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  /* support */  /* Thanks - Support */ $handler->display->display_options['style_plugin'] = 'default';
  /* support */  /* Thanks - Support */ $handler->display->display_options['defaults']['style_options'] = FALSE;
  /* support */  /* Thanks - Support */ $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  /* support */  /* Thanks - Support */ $handler->display->display_options['row_plugin'] = 'fields';
  /* support */  /* Thanks - Support */ $handler->display->display_options['defaults']['row_options'] = FALSE;
  /* support */  /* Thanks - Support */ $handler->display->display_options['defaults']['header'] = FALSE;
  /* support */  /* Thanks - Support */ /* Header: Global: Text area */
  /* support */  /* Thanks - Support */ $handler->display->display_options['header']['area']['id'] = 'area';
  /* support */  /* Thanks - Support */ $handler->display->display_options['header']['area']['table'] = 'views';
  /* support */  /* Thanks - Support */ $handler->display->display_options['header']['area']['field'] = 'area';
  /* support */  /* Thanks - Support */ $handler->display->display_options['header']['area']['content'] = '<h2>Thank you. Your request for technical support has been submitted.</h2>
<a href="#">Learn more about our support process</a><br/><br/>
Track your request here: [title]<br/>
<strong>Note:</strong> You can also track your support requests in the "Support" tab in your "My Globalnet" section.
';
  /* support */  /* Thanks - Support */ $handler->display->display_options['header']['area']['format'] = 'filtered_html';
  /* support */  /* Thanks - Support */ $handler->display->display_options['header']['area']['tokenize'] = TRUE;
  /* support */  /* Thanks - Support */ $handler->display->display_options['defaults']['fields'] = FALSE;
  /* support */  /* Thanks - Support */ /* Field: Content: Title */
  /* support */  /* Thanks - Support */ $handler->display->display_options['fields']['title']['id'] = 'title';
  /* support */  /* Thanks - Support */ $handler->display->display_options['fields']['title']['table'] = 'node';
  /* support */  /* Thanks - Support */ $handler->display->display_options['fields']['title']['field'] = 'title';
  /* support */  /* Thanks - Support */ $handler->display->display_options['fields']['title']['label'] = '';
  /* support */  /* Thanks - Support */ $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  /* support */  /* Thanks - Support */ $handler->display->display_options['fields']['title']['alter']['path'] = '[title]';
  /* support */  /* Thanks - Support */ $handler->display->display_options['fields']['title']['alter']['absolute'] = TRUE;
  /* support */  /* Thanks - Support */ $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  /* support */  /* Thanks - Support */ $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* support */  /* Thanks - Support */ $handler->display->display_options['fields']['title']['element_class'] = 'hide';
  /* support */  /* Thanks - Support */ $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* support */  /* Thanks - Support */ $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  /* support */  /* Thanks - Support */ $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  /* support */  /* Thanks - Support */ $handler->display->display_options['defaults']['filters'] = FALSE;
  /* support */  /* Thanks - Support */ /* Filter criterion: Content: Published */
  /* support */  /* Thanks - Support */ $handler->display->display_options['filters']['status']['id'] = 'status';
  /* support */  /* Thanks - Support */ $handler->display->display_options['filters']['status']['table'] = 'node';
  /* support */  /* Thanks - Support */ $handler->display->display_options['filters']['status']['field'] = 'status';
  /* support */  /* Thanks - Support */ $handler->display->display_options['filters']['status']['value'] = 1;
  /* support */  /* Thanks - Support */ $handler->display->display_options['filters']['status']['group'] = 1;
  /* support */  /* Thanks - Support */ $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* support */  /* Thanks - Support */ /* Filter criterion: Content: Type */
  /* support */  /* Thanks - Support */ $handler->display->display_options['filters']['type']['id'] = 'type';
  /* support */  /* Thanks - Support */ $handler->display->display_options['filters']['type']['table'] = 'node';
  /* support */  /* Thanks - Support */ $handler->display->display_options['filters']['type']['field'] = 'type';
  /* support */  /* Thanks - Support */ $handler->display->display_options['filters']['type']['value'] = array(
  /* support */  /* Thanks - Support */   'support' => 'support',
  /* support */  /* Thanks - Support */ );
  /* support */  /* Thanks - Support */ $handler->display->display_options['path'] = 'support/thanks';

  /* support */ /* Display: Organization - Support */
  /* support */  /* Organization - Support */ $handler = $view->new_display('page', 'Organization - Support', 'page_1');
  /* support */  /* Organization - Support */ $handler->display->display_options['defaults']['title'] = FALSE;
  /* support */  /* Organization - Support */ $handler->display->display_options['title'] = 'Support Desk';
  /* support */  /* Organization - Support */ $handler->display->display_options['defaults']['access'] = FALSE;
  /* support */  /* Organization - Support */ $handler->display->display_options['access']['type'] = 'gn2_og_any_hr_manager_access';
  /* support */  /* Organization - Support */ $handler->display->display_options['defaults']['fields'] = FALSE;
  /* support */  /* Organization - Support */ /* Field: Content: Title */
  /* support */  /* Organization - Support */ $handler->display->display_options['fields']['title']['id'] = 'title';
  /* support */  /* Organization - Support */ $handler->display->display_options['fields']['title']['table'] = 'node';
  /* support */  /* Organization - Support */ $handler->display->display_options['fields']['title']['field'] = 'title';
  /* support */  /* Organization - Support */ $handler->display->display_options['fields']['title']['label'] = 'Ticket ID';
  /* support */  /* Organization - Support */ $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  /* support */  /* Organization - Support */ $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* support */  /* Organization - Support */ /* Field: Content: Post date */
  /* support */  /* Organization - Support */ $handler->display->display_options['fields']['created']['id'] = 'created';
  /* support */  /* Organization - Support */ $handler->display->display_options['fields']['created']['table'] = 'node';
  /* support */  /* Organization - Support */ $handler->display->display_options['fields']['created']['field'] = 'created';
  /* support */  /* Organization - Support */ $handler->display->display_options['fields']['created']['label'] = 'Created';
  /* support */  /* Organization - Support */ $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  /* support */  /* Organization - Support */ $handler->display->display_options['fields']['created']['date_format'] = 'custom';
  /* support */  /* Organization - Support */ $handler->display->display_options['fields']['created']['custom_date_format'] = 'n/j/Y H:i';
  /* support */  /* Organization - Support */ $handler->display->display_options['fields']['created']['second_date_format'] = 'date_format_globalnet_date';
  /* support */  /* Organization - Support */ /* Field: Content: Updated date */
  /* support */  /* Organization - Support */ $handler->display->display_options['fields']['changed']['id'] = 'changed';
  /* support */  /* Organization - Support */ $handler->display->display_options['fields']['changed']['table'] = 'node';
  /* support */  /* Organization - Support */ $handler->display->display_options['fields']['changed']['field'] = 'changed';
  /* support */  /* Organization - Support */ $handler->display->display_options['fields']['changed']['label'] = 'Updated';
  /* support */  /* Organization - Support */ $handler->display->display_options['fields']['changed']['element_label_colon'] = FALSE;
  /* support */  /* Organization - Support */ $handler->display->display_options['fields']['changed']['date_format'] = 'custom';
  /* support */  /* Organization - Support */ $handler->display->display_options['fields']['changed']['custom_date_format'] = 'n/j/Y H:i';
  /* support */  /* Organization - Support */ $handler->display->display_options['fields']['changed']['second_date_format'] = 'date_format_globalnet_date';
  /* support */  /* Organization - Support */ /* Field: Field: Family Name */
  /* support */  /* Organization - Support */ $handler->display->display_options['fields']['field_name_last']['id'] = 'field_name_last';
  /* support */  /* Organization - Support */ $handler->display->display_options['fields']['field_name_last']['table'] = 'field_data_field_name_last';
  /* support */  /* Organization - Support */ $handler->display->display_options['fields']['field_name_last']['field'] = 'field_name_last';
  /* support */  /* Organization - Support */ $handler->display->display_options['fields']['field_name_last']['exclude'] = TRUE;
  /* support */  /* Organization - Support */ $handler->display->display_options['fields']['field_name_last']['element_type'] = 'span';
  /* support */  /* Organization - Support */ $handler->display->display_options['fields']['field_name_last']['element_default_classes'] = FALSE;
  /* support */  /* Organization - Support */ $handler->display->display_options['fields']['field_name_last']['type'] = 'text_plain';
  /* support */  /* Organization - Support */ $handler->display->display_options['fields']['field_name_last']['settings'] = array(
  /* support */  /* Organization - Support */   'field_formatter_class' => '',
  /* support */  /* Organization - Support */ );
  /* support */  /* Organization - Support */ /* Field: Field: Given Name */
  /* support */  /* Organization - Support */ $handler->display->display_options['fields']['field_name_first']['id'] = 'field_name_first';
  /* support */  /* Organization - Support */ $handler->display->display_options['fields']['field_name_first']['table'] = 'field_data_field_name_first';
  /* support */  /* Organization - Support */ $handler->display->display_options['fields']['field_name_first']['field'] = 'field_name_first';
  /* support */  /* Organization - Support */ $handler->display->display_options['fields']['field_name_first']['label'] = 'Name';
  /* support */  /* Organization - Support */ $handler->display->display_options['fields']['field_name_first']['alter']['alter_text'] = TRUE;
  /* support */  /* Organization - Support */ $handler->display->display_options['fields']['field_name_first']['alter']['text'] = '[field_name_first] [field_name_last]';
  /* support */  /* Organization - Support */ $handler->display->display_options['fields']['field_name_first']['element_type'] = 'span';
  /* support */  /* Organization - Support */ $handler->display->display_options['fields']['field_name_first']['element_default_classes'] = FALSE;
  /* support */  /* Organization - Support */ $handler->display->display_options['fields']['field_name_first']['type'] = 'text_plain';
  /* support */  /* Organization - Support */ $handler->display->display_options['fields']['field_name_first']['settings'] = array(
  /* support */  /* Organization - Support */   'field_formatter_class' => '',
  /* support */  /* Organization - Support */ );
  /* support */  /* Organization - Support */ /* Field: Field: Telephone Number */
  /* support */  /* Organization - Support */ $handler->display->display_options['fields']['field_telephone_number']['id'] = 'field_telephone_number';
  /* support */  /* Organization - Support */ $handler->display->display_options['fields']['field_telephone_number']['table'] = 'field_data_field_telephone_number';
  /* support */  /* Organization - Support */ $handler->display->display_options['fields']['field_telephone_number']['field'] = 'field_telephone_number';
  /* support */  /* Organization - Support */ $handler->display->display_options['fields']['field_telephone_number']['exclude'] = TRUE;
  /* support */  /* Organization - Support */ $handler->display->display_options['fields']['field_telephone_number']['alter']['alter_text'] = TRUE;
  /* support */  /* Organization - Support */ $handler->display->display_options['fields']['field_telephone_number']['alter']['text'] = '- [field_telephone_number]';
  /* support */  /* Organization - Support */ $handler->display->display_options['fields']['field_telephone_number']['element_default_classes'] = FALSE;
  /* support */  /* Organization - Support */ $handler->display->display_options['fields']['field_telephone_number']['type'] = 'text_plain';
  /* support */  /* Organization - Support */ $handler->display->display_options['fields']['field_telephone_number']['settings'] = array(
  /* support */  /* Organization - Support */   'field_formatter_class' => '',
  /* support */  /* Organization - Support */ );
  /* support */  /* Organization - Support */ $handler->display->display_options['fields']['field_telephone_number']['field_api_classes'] = TRUE;
  /* support */  /* Organization - Support */ /* Field: Field: Email Address */
  /* support */  /* Organization - Support */ $handler->display->display_options['fields']['field_email_address']['id'] = 'field_email_address';
  /* support */  /* Organization - Support */ $handler->display->display_options['fields']['field_email_address']['table'] = 'field_data_field_email_address';
  /* support */  /* Organization - Support */ $handler->display->display_options['fields']['field_email_address']['field'] = 'field_email_address';
  /* support */  /* Organization - Support */ $handler->display->display_options['fields']['field_email_address']['label'] = 'Contact';
  /* support */  /* Organization - Support */ $handler->display->display_options['fields']['field_email_address']['alter']['alter_text'] = TRUE;
  /* support */  /* Organization - Support */ $handler->display->display_options['fields']['field_email_address']['alter']['text'] = '[field_email_address]  [field_telephone_number]';
  /* support */  /* Organization - Support */ $handler->display->display_options['fields']['field_email_address']['element_default_classes'] = FALSE;
  /* support */  /* Organization - Support */ $handler->display->display_options['fields']['field_email_address']['settings'] = array(
  /* support */  /* Organization - Support */   'field_formatter_class' => '',
  /* support */  /* Organization - Support */ );
  /* support */  /* Organization - Support */ $handler->display->display_options['fields']['field_email_address']['field_api_classes'] = TRUE;
  /* support */  /* Organization - Support */ /* Field: Field: Description */
  /* support */  /* Organization - Support */ $handler->display->display_options['fields']['field_description']['id'] = 'field_description';
  /* support */  /* Organization - Support */ $handler->display->display_options['fields']['field_description']['table'] = 'field_data_field_description';
  /* support */  /* Organization - Support */ $handler->display->display_options['fields']['field_description']['field'] = 'field_description';
  /* support */  /* Organization - Support */ $handler->display->display_options['fields']['field_description']['element_type'] = '0';
  /* support */  /* Organization - Support */ $handler->display->display_options['fields']['field_description']['element_wrapper_type'] = '0';
  /* support */  /* Organization - Support */ $handler->display->display_options['fields']['field_description']['element_default_classes'] = FALSE;
  /* support */  /* Organization - Support */ $handler->display->display_options['fields']['field_description']['type'] = 'text_plain';
  /* support */  /* Organization - Support */ $handler->display->display_options['fields']['field_description']['settings'] = array(
  /* support */  /* Organization - Support */   'field_formatter_class' => '',
  /* support */  /* Organization - Support */ );
  /* support */  /* Organization - Support */ $handler->display->display_options['fields']['field_description']['field_api_classes'] = TRUE;
  /* support */  /* Organization - Support */ /* Field: Content: Status */
  /* support */  /* Organization - Support */ $handler->display->display_options['fields']['field_support_status']['id'] = 'field_support_status';
  /* support */  /* Organization - Support */ $handler->display->display_options['fields']['field_support_status']['table'] = 'field_data_field_support_status';
  /* support */  /* Organization - Support */ $handler->display->display_options['fields']['field_support_status']['field'] = 'field_support_status';
  /* support */  /* Organization - Support */ $handler->display->display_options['fields']['field_support_status']['element_type'] = '0';
  /* support */  /* Organization - Support */ $handler->display->display_options['fields']['field_support_status']['element_wrapper_type'] = '0';
  /* support */  /* Organization - Support */ $handler->display->display_options['fields']['field_support_status']['element_default_classes'] = FALSE;
  /* support */  /* Organization - Support */ $handler->display->display_options['fields']['field_support_status']['settings'] = array(
  /* support */  /* Organization - Support */   'field_formatter_class' => '',
  /* support */  /* Organization - Support */ );
  /* support */  /* Organization - Support */ $handler->display->display_options['fields']['field_support_status']['field_api_classes'] = TRUE;
  /* support */  /* Organization - Support */ /* Field: Content: Priority */
  /* support */  /* Organization - Support */ $handler->display->display_options['fields']['field_support_priority']['id'] = 'field_support_priority';
  /* support */  /* Organization - Support */ $handler->display->display_options['fields']['field_support_priority']['table'] = 'field_data_field_support_priority';
  /* support */  /* Organization - Support */ $handler->display->display_options['fields']['field_support_priority']['field'] = 'field_support_priority';
  /* support */  /* Organization - Support */ $handler->display->display_options['fields']['field_support_priority']['element_type'] = '0';
  /* support */  /* Organization - Support */ $handler->display->display_options['fields']['field_support_priority']['element_wrapper_type'] = '0';
  /* support */  /* Organization - Support */ $handler->display->display_options['fields']['field_support_priority']['element_default_classes'] = FALSE;
  /* support */  /* Organization - Support */ $handler->display->display_options['fields']['field_support_priority']['settings'] = array(
  /* support */  /* Organization - Support */   'field_formatter_class' => '',
  /* support */  /* Organization - Support */ );
  /* support */  /* Organization - Support */ $handler->display->display_options['fields']['field_support_priority']['field_api_classes'] = TRUE;
  /* support */  /* Organization - Support */ /* Field: Content: Owner */
  /* support */  /* Organization - Support */ $handler->display->display_options['fields']['field_support_owner']['id'] = 'field_support_owner';
  /* support */  /* Organization - Support */ $handler->display->display_options['fields']['field_support_owner']['table'] = 'field_data_field_support_owner';
  /* support */  /* Organization - Support */ $handler->display->display_options['fields']['field_support_owner']['field'] = 'field_support_owner';
  /* support */  /* Organization - Support */ $handler->display->display_options['fields']['field_support_owner']['element_type'] = '0';
  /* support */  /* Organization - Support */ $handler->display->display_options['fields']['field_support_owner']['element_label_colon'] = FALSE;
  /* support */  /* Organization - Support */ $handler->display->display_options['fields']['field_support_owner']['element_wrapper_type'] = '0';
  /* support */  /* Organization - Support */ $handler->display->display_options['fields']['field_support_owner']['element_default_classes'] = FALSE;
  /* support */  /* Organization - Support */ $handler->display->display_options['fields']['field_support_owner']['settings'] = array(
  /* support */  /* Organization - Support */   'link' => 0,
  /* support */  /* Organization - Support */   'field_formatter_class' => '',
  /* support */  /* Organization - Support */ );
  /* support */  /* Organization - Support */ $handler->display->display_options['fields']['field_support_owner']['field_api_classes'] = TRUE;
  /* support */  /* Organization - Support */ /* Field: Content: Resolution */
  /* support */  /* Organization - Support */ $handler->display->display_options['fields']['field_support_resolution']['id'] = 'field_support_resolution';
  /* support */  /* Organization - Support */ $handler->display->display_options['fields']['field_support_resolution']['table'] = 'field_data_field_support_resolution';
  /* support */  /* Organization - Support */ $handler->display->display_options['fields']['field_support_resolution']['field'] = 'field_support_resolution';
  /* support */  /* Organization - Support */ $handler->display->display_options['fields']['field_support_resolution']['element_type'] = '0';
  /* support */  /* Organization - Support */ $handler->display->display_options['fields']['field_support_resolution']['element_wrapper_type'] = '0';
  /* support */  /* Organization - Support */ $handler->display->display_options['fields']['field_support_resolution']['element_default_classes'] = FALSE;
  /* support */  /* Organization - Support */ $handler->display->display_options['fields']['field_support_resolution']['settings'] = array(
  /* support */  /* Organization - Support */   'field_formatter_class' => '',
  /* support */  /* Organization - Support */ );
  /* support */  /* Organization - Support */ $handler->display->display_options['fields']['field_support_resolution']['field_api_classes'] = TRUE;
  /* support */  /* Organization - Support */ $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* support */  /* Organization - Support */ /* Contextual filter: Content: Nid */
  /* support */  /* Organization - Support */ $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  /* support */  /* Organization - Support */ $handler->display->display_options['arguments']['nid']['table'] = 'node';
  /* support */  /* Organization - Support */ $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  /* support */  /* Organization - Support */ $handler->display->display_options['arguments']['nid']['relationship'] = 'field_parent_organization_target_id';
  /* support */  /* Organization - Support */ $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  /* support */  /* Organization - Support */ $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  /* support */  /* Organization - Support */ $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  /* support */  /* Organization - Support */ $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  /* support */  /* Organization - Support */ $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  /* support */  /* Organization - Support */ $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  /* support */  /* Organization - Support */ $handler->display->display_options['defaults']['filters'] = FALSE;
  /* support */  /* Organization - Support */ /* Filter criterion: Content: Published */
  /* support */  /* Organization - Support */ $handler->display->display_options['filters']['status']['id'] = 'status';
  /* support */  /* Organization - Support */ $handler->display->display_options['filters']['status']['table'] = 'node';
  /* support */  /* Organization - Support */ $handler->display->display_options['filters']['status']['field'] = 'status';
  /* support */  /* Organization - Support */ $handler->display->display_options['filters']['status']['value'] = 1;
  /* support */  /* Organization - Support */ $handler->display->display_options['filters']['status']['group'] = 1;
  /* support */  /* Organization - Support */ $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* support */  /* Organization - Support */ /* Filter criterion: Content: Type */
  /* support */  /* Organization - Support */ $handler->display->display_options['filters']['type']['id'] = 'type';
  /* support */  /* Organization - Support */ $handler->display->display_options['filters']['type']['table'] = 'node';
  /* support */  /* Organization - Support */ $handler->display->display_options['filters']['type']['field'] = 'type';
  /* support */  /* Organization - Support */ $handler->display->display_options['filters']['type']['value'] = array(
  /* support */  /* Organization - Support */   'support' => 'support',
  /* support */  /* Organization - Support */ );
  /* support */  /* Organization - Support */ $handler->display->display_options['filters']['type']['group'] = 1;
  /* support */  /* Organization - Support */ /* Filter criterion: Global: Combine fields filter */
  /* support */  /* Organization - Support */ $handler->display->display_options['filters']['combine']['id'] = 'combine';
  /* support */  /* Organization - Support */ $handler->display->display_options['filters']['combine']['table'] = 'views';
  /* support */  /* Organization - Support */ $handler->display->display_options['filters']['combine']['field'] = 'combine';
  /* support */  /* Organization - Support */ $handler->display->display_options['filters']['combine']['operator'] = 'word';
  /* support */  /* Organization - Support */ $handler->display->display_options['filters']['combine']['group'] = 1;
  /* support */  /* Organization - Support */ $handler->display->display_options['filters']['combine']['exposed'] = TRUE;
  /* support */  /* Organization - Support */ $handler->display->display_options['filters']['combine']['expose']['operator_id'] = 'combine_op';
  /* support */  /* Organization - Support */ $handler->display->display_options['filters']['combine']['expose']['label'] = 'Search';
  /* support */  /* Organization - Support */ $handler->display->display_options['filters']['combine']['expose']['operator'] = 'combine_op';
  /* support */  /* Organization - Support */ $handler->display->display_options['filters']['combine']['expose']['identifier'] = 'combine';
  /* support */  /* Organization - Support */ $handler->display->display_options['filters']['combine']['expose']['remember_roles'] = array(
  /* support */  /* Organization - Support */   2 => '2',
  /* support */  /* Organization - Support */   1 => 0,
  /* support */  /* Organization - Support */   9 => 0,
  /* support */  /* Organization - Support */   10 => 0,
  /* support */  /* Organization - Support */ );
  /* support */  /* Organization - Support */ $handler->display->display_options['filters']['combine']['expose']['autocomplete_items'] = '10';
  /* support */  /* Organization - Support */ $handler->display->display_options['filters']['combine']['expose']['autocomplete_min_chars'] = '0';
  /* support */  /* Organization - Support */ $handler->display->display_options['filters']['combine']['expose']['autocomplete_raw_suggestion'] = 1;
  /* support */  /* Organization - Support */ $handler->display->display_options['filters']['combine']['expose']['autocomplete_raw_dropdown'] = 1;
  /* support */  /* Organization - Support */ $handler->display->display_options['filters']['combine']['expose']['autocomplete_dependent'] = 0;
  /* support */  /* Organization - Support */ $handler->display->display_options['filters']['combine']['fields'] = array(
  /* support */  /* Organization - Support */   'field_name_last' => 'field_name_last',
  /* support */  /* Organization - Support */   'field_name_first' => 'field_name_first',
  /* support */  /* Organization - Support */   'field_description' => 'field_description',
  /* support */  /* Organization - Support */ );
  /* support */  /* Organization - Support */ /* Filter criterion: Content: Priority (field_support_priority) */
  /* support */  /* Organization - Support */ $handler->display->display_options['filters']['field_support_priority_value']['id'] = 'field_support_priority_value';
  /* support */  /* Organization - Support */ $handler->display->display_options['filters']['field_support_priority_value']['table'] = 'field_data_field_support_priority';
  /* support */  /* Organization - Support */ $handler->display->display_options['filters']['field_support_priority_value']['field'] = 'field_support_priority_value';
  /* support */  /* Organization - Support */ $handler->display->display_options['filters']['field_support_priority_value']['group'] = 1;
  /* support */  /* Organization - Support */ $handler->display->display_options['filters']['field_support_priority_value']['exposed'] = TRUE;
  /* support */  /* Organization - Support */ $handler->display->display_options['filters']['field_support_priority_value']['expose']['operator_id'] = 'field_support_priority_value_op';
  /* support */  /* Organization - Support */ $handler->display->display_options['filters']['field_support_priority_value']['expose']['label'] = 'Priority';
  /* support */  /* Organization - Support */ $handler->display->display_options['filters']['field_support_priority_value']['expose']['operator'] = 'field_support_priority_value_op';
  /* support */  /* Organization - Support */ $handler->display->display_options['filters']['field_support_priority_value']['expose']['identifier'] = 'field_support_priority_value';
  /* support */  /* Organization - Support */ $handler->display->display_options['filters']['field_support_priority_value']['expose']['multiple'] = TRUE;
  /* support */  /* Organization - Support */ $handler->display->display_options['filters']['field_support_priority_value']['expose']['remember_roles'] = array(
  /* support */  /* Organization - Support */   2 => '2',
  /* support */  /* Organization - Support */   1 => 0,
  /* support */  /* Organization - Support */   9 => 0,
  /* support */  /* Organization - Support */   10 => 0,
  /* support */  /* Organization - Support */ );
  /* support */  /* Organization - Support */ /* Filter criterion: Content: Status (field_support_status) */
  /* support */  /* Organization - Support */ $handler->display->display_options['filters']['field_support_status_value']['id'] = 'field_support_status_value';
  /* support */  /* Organization - Support */ $handler->display->display_options['filters']['field_support_status_value']['table'] = 'field_data_field_support_status';
  /* support */  /* Organization - Support */ $handler->display->display_options['filters']['field_support_status_value']['field'] = 'field_support_status_value';
  /* support */  /* Organization - Support */ $handler->display->display_options['filters']['field_support_status_value']['group'] = 1;
  /* support */  /* Organization - Support */ $handler->display->display_options['filters']['field_support_status_value']['exposed'] = TRUE;
  /* support */  /* Organization - Support */ $handler->display->display_options['filters']['field_support_status_value']['expose']['operator_id'] = 'field_support_status_value_op';
  /* support */  /* Organization - Support */ $handler->display->display_options['filters']['field_support_status_value']['expose']['label'] = 'Status';
  /* support */  /* Organization - Support */ $handler->display->display_options['filters']['field_support_status_value']['expose']['operator'] = 'field_support_status_value_op';
  /* support */  /* Organization - Support */ $handler->display->display_options['filters']['field_support_status_value']['expose']['identifier'] = 'field_support_status_value';
  /* support */  /* Organization - Support */ $handler->display->display_options['filters']['field_support_status_value']['expose']['multiple'] = TRUE;
  /* support */  /* Organization - Support */ $handler->display->display_options['filters']['field_support_status_value']['expose']['remember_roles'] = array(
  /* support */  /* Organization - Support */   2 => '2',
  /* support */  /* Organization - Support */   1 => 0,
  /* support */  /* Organization - Support */   9 => 0,
  /* support */  /* Organization - Support */   10 => 0,
  /* support */  /* Organization - Support */ );
  /* support */  /* Organization - Support */ /* Filter criterion: Content: Resolution (field_support_resolution) */
  /* support */  /* Organization - Support */ $handler->display->display_options['filters']['field_support_resolution_value']['id'] = 'field_support_resolution_value';
  /* support */  /* Organization - Support */ $handler->display->display_options['filters']['field_support_resolution_value']['table'] = 'field_data_field_support_resolution';
  /* support */  /* Organization - Support */ $handler->display->display_options['filters']['field_support_resolution_value']['field'] = 'field_support_resolution_value';
  /* support */  /* Organization - Support */ $handler->display->display_options['filters']['field_support_resolution_value']['group'] = 1;
  /* support */  /* Organization - Support */ $handler->display->display_options['filters']['field_support_resolution_value']['exposed'] = TRUE;
  /* support */  /* Organization - Support */ $handler->display->display_options['filters']['field_support_resolution_value']['expose']['operator_id'] = 'field_support_resolution_value_op';
  /* support */  /* Organization - Support */ $handler->display->display_options['filters']['field_support_resolution_value']['expose']['label'] = 'Resolution';
  /* support */  /* Organization - Support */ $handler->display->display_options['filters']['field_support_resolution_value']['expose']['operator'] = 'field_support_resolution_value_op';
  /* support */  /* Organization - Support */ $handler->display->display_options['filters']['field_support_resolution_value']['expose']['identifier'] = 'field_support_resolution_value';
  /* support */  /* Organization - Support */ $handler->display->display_options['filters']['field_support_resolution_value']['expose']['multiple'] = TRUE;
  /* support */  /* Organization - Support */ $handler->display->display_options['filters']['field_support_resolution_value']['expose']['remember_roles'] = array(
  /* support */  /* Organization - Support */   2 => '2',
  /* support */  /* Organization - Support */   1 => 0,
  /* support */  /* Organization - Support */   9 => 0,
  /* support */  /* Organization - Support */   10 => 0,
  /* support */  /* Organization - Support */ );
  /* support */  /* Organization - Support */ /* Filter criterion: Content: Owner (field_support_owner) */
  /* support */  /* Organization - Support */ $handler->display->display_options['filters']['field_support_owner_target_id']['id'] = 'field_support_owner_target_id';
  /* support */  /* Organization - Support */ $handler->display->display_options['filters']['field_support_owner_target_id']['table'] = 'field_data_field_support_owner';
  /* support */  /* Organization - Support */ $handler->display->display_options['filters']['field_support_owner_target_id']['field'] = 'field_support_owner_target_id';
  /* support */  /* Organization - Support */ $handler->display->display_options['filters']['field_support_owner_target_id']['group'] = 1;
  /* support */  /* Organization - Support */ $handler->display->display_options['filters']['field_support_owner_target_id']['exposed'] = TRUE;
  /* support */  /* Organization - Support */ $handler->display->display_options['filters']['field_support_owner_target_id']['expose']['operator_id'] = 'field_support_owner_target_id_op';
  /* support */  /* Organization - Support */ $handler->display->display_options['filters']['field_support_owner_target_id']['expose']['label'] = 'Owner';
  /* support */  /* Organization - Support */ $handler->display->display_options['filters']['field_support_owner_target_id']['expose']['operator'] = 'field_support_owner_target_id_op';
  /* support */  /* Organization - Support */ $handler->display->display_options['filters']['field_support_owner_target_id']['expose']['identifier'] = 'field_support_owner_target_id';
  /* support */  /* Organization - Support */ $handler->display->display_options['filters']['field_support_owner_target_id']['expose']['remember_roles'] = array(
  /* support */  /* Organization - Support */   2 => '2',
  /* support */  /* Organization - Support */   1 => 0,
  /* support */  /* Organization - Support */   9 => 0,
  /* support */  /* Organization - Support */   10 => 0,
  /* support */  /* Organization - Support */ );
  /* support */  /* Organization - Support */ /* Filter criterion: Content: Post date */
  /* support */  /* Organization - Support */ $handler->display->display_options['filters']['created']['id'] = 'created';
  /* support */  /* Organization - Support */ $handler->display->display_options['filters']['created']['table'] = 'node';
  /* support */  /* Organization - Support */ $handler->display->display_options['filters']['created']['field'] = 'created';
  /* support */  /* Organization - Support */ $handler->display->display_options['filters']['created']['operator'] = 'between';
  /* support */  /* Organization - Support */ $handler->display->display_options['filters']['created']['exposed'] = TRUE;
  /* support */  /* Organization - Support */ $handler->display->display_options['filters']['created']['expose']['operator_id'] = 'created_op';
  /* support */  /* Organization - Support */ $handler->display->display_options['filters']['created']['expose']['label'] = 'Date Created';
  /* support */  /* Organization - Support */ $handler->display->display_options['filters']['created']['expose']['operator'] = 'created_op';
  /* support */  /* Organization - Support */ $handler->display->display_options['filters']['created']['expose']['identifier'] = 'created';
  /* support */  /* Organization - Support */ $handler->display->display_options['filters']['created']['expose']['remember'] = TRUE;
  /* support */  /* Organization - Support */ $handler->display->display_options['filters']['created']['expose']['remember_roles'] = array(
  /* support */  /* Organization - Support */   2 => '2',
  /* support */  /* Organization - Support */   9 => '9',
  /* support */  /* Organization - Support */   10 => '10',
  /* support */  /* Organization - Support */   11 => '11',
  /* support */  /* Organization - Support */   1 => 0,
  /* support */  /* Organization - Support */ );
  /* support */  /* Organization - Support */ /* Filter criterion: Content: Updated date */
  /* support */  /* Organization - Support */ $handler->display->display_options['filters']['changed']['id'] = 'changed';
  /* support */  /* Organization - Support */ $handler->display->display_options['filters']['changed']['table'] = 'node';
  /* support */  /* Organization - Support */ $handler->display->display_options['filters']['changed']['field'] = 'changed';
  /* support */  /* Organization - Support */ $handler->display->display_options['filters']['changed']['operator'] = 'between';
  /* support */  /* Organization - Support */ $handler->display->display_options['filters']['changed']['exposed'] = TRUE;
  /* support */  /* Organization - Support */ $handler->display->display_options['filters']['changed']['expose']['operator_id'] = 'changed_op';
  /* support */  /* Organization - Support */ $handler->display->display_options['filters']['changed']['expose']['label'] = 'Date Updated';
  /* support */  /* Organization - Support */ $handler->display->display_options['filters']['changed']['expose']['operator'] = 'changed_op';
  /* support */  /* Organization - Support */ $handler->display->display_options['filters']['changed']['expose']['identifier'] = 'changed';
  /* support */  /* Organization - Support */ $handler->display->display_options['filters']['changed']['expose']['remember_roles'] = array(
  /* support */  /* Organization - Support */   2 => '2',
  /* support */  /* Organization - Support */   1 => 0,
  /* support */  /* Organization - Support */   9 => 0,
  /* support */  /* Organization - Support */   10 => 0,
  /* support */  /* Organization - Support */   11 => 0,
  /* support */  /* Organization - Support */ );
  /* support */  /* Organization - Support */ $handler->display->display_options['path'] = 'node/%/dashboard/support';
  /* support */  /* Organization - Support */ $handler->display->display_options['menu']['type'] = 'tab';
  /* support */  /* Organization - Support */ $handler->display->display_options['menu']['title'] = 'Support';
  /* support */  /* Organization - Support */ $handler->display->display_options['menu']['weight'] = '10';
  /* support */  /* Organization - Support */ $handler->display->display_options['menu']['context'] = 0;
  /* support */  /* Organization - Support */ $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* support */ /* Display: Data export */
  /* support */  /* Data export */ $handler = $view->new_display('views_data_export', 'Data export', 'support_data_export');
  /* support */  /* Data export */ $handler->display->display_options['pager']['type'] = 'some';
  /* support */  /* Data export */ $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  /* support */  /* Data export */ $handler->display->display_options['style_options']['provide_file'] = 1;
  /* support */  /* Data export */ $handler->display->display_options['style_options']['filename'] = '%view-export-%timestamp-full.csv';
  /* support */  /* Data export */ $handler->display->display_options['style_options']['parent_sort'] = 0;
  /* support */  /* Data export */ $handler->display->display_options['style_options']['quote'] = 1;
  /* support */  /* Data export */ $handler->display->display_options['style_options']['trim'] = 1;
  /* support */  /* Data export */ $handler->display->display_options['style_options']['replace_newlines'] = 0;
  /* support */  /* Data export */ $handler->display->display_options['style_options']['newline_token'] = '1';
  /* support */  /* Data export */ $handler->display->display_options['style_options']['header'] = 1;
  /* support */  /* Data export */ $handler->display->display_options['style_options']['keep_html'] = 0;
  /* support */  /* Data export */ $handler->display->display_options['path'] = 'admin/manage/support/export';
  /* support */  /* Data export */ $handler->display->display_options['displays'] = array(
  /* support */  /* Data export */   'page' => 'page',
  /* support */  /* Data export */   'default' => 0,
  /* support */  /* Data export */   'page_2' => 0,
  /* support */  /* Data export */   'page_1' => 0,
  /* support */  /* Data export */ );
  /* support */ $translatables['support'] = array(
  /* support */   t('Master'),
  /* support */   t('Support'),
  /* support */   t('more'),
  /* support */   t('Go'),
  /* support */   t('Reset'),
  /* support */   t('Sort by'),
  /* support */   t('Asc'),
  /* support */   t('Desc'),
  /* support */   t('Select any filter and click on Apply to see results'),
  /* support */   t('Advanced options'),
  /* support */   t('Items per page'),
  /* support */   t('- All -'),
  /* support */   t('Offset'),
  /* support */   t('« first'),
  /* support */   t('‹ previous'),
  /* support */   t('next ›'),
  /* support */   t('last »'),
  /* support */   t('field_parent_organization'),
  /* support */   t('author'),
  /* support */   t('Priority'),
  /* support */   t('Status'),
  /* support */   t('Created'),
  /* support */   t('Updated'),
  /* support */   t('Edit link'),
  /* support */   t('Ticket ID'),
  /* support */   t('<a href="/[title]/edit">[title]</a> '),
  /* support */   t('[title]'),
  /* support */   t('Username'),
  /* support */   t('Family Name'),
  /* support */   t('Name'),
  /* support */   t('[field_name_first] [field_name_last]'),
  /* support */   t('Telephone Number'),
  /* support */   t('- [field_telephone_number]'),
  /* support */   t('Contact'),
  /* support */   t('[field_email_address]  [field_telephone_number]'),
  /* support */   t('Description'),
  /* support */   t('Org'),
  /* support */   t('Post date'),
  /* support */   t('Updated date'),
  /* support */   t('Partner org'),
  /* support */   t('Date Created'),
  /* support */   t('Date Updated'),
  /* support */   t('Admin - Support'),
  /* support */   t('Thanks - Support'),
  /* support */   t('<h2>Thank you. Your request for technical support has been submitted.</h2>
<a href="#">Learn more about our support process</a><br/><br/>
Track your request here: [title]<br/>
<strong>Note:</strong> You can also track your support requests in the "Support" tab in your "My Globalnet" section.
'),
  /* support */   t('Organization - Support'),
  /* support */   t('Support Desk'),
  /* support */   t('Owner'),
  /* support */   t('Resolution'),
  /* support */   t('All'),
  /* support */   t('Search'),
  /* support */   t('Data export'),
  /* support */ );
  $export['support'] = $view;

  /* support_comments */ $view = new view();
  /* support_comments */ $view->name = 'support_comments';
  /* support_comments */ $view->description = '';
  /* support_comments */ $view->tag = 'default';
  /* support_comments */ $view->base_table = 'comment';
  /* support_comments */ $view->human_name = 'Support Comments';
  /* support_comments */ $view->core = 7;
  /* support_comments */ $view->api_version = '3.0';
  /* support_comments */ $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* support_comments */ /* Display: Master */
  /* support_comments */  /* Master */ $handler = $view->new_display('default', 'Master', 'default');
  /* support_comments */  /* Master */ $handler->display->display_options['title'] = 'Support Comments';
  /* support_comments */  /* Master */ $handler->display->display_options['use_more_always'] = FALSE;
  /* support_comments */  /* Master */ $handler->display->display_options['access']['type'] = 'perm';
  /* support_comments */  /* Master */ $handler->display->display_options['access']['perm'] = 'access comments';
  /* support_comments */  /* Master */ $handler->display->display_options['cache']['type'] = 'none';
  /* support_comments */  /* Master */ $handler->display->display_options['query']['type'] = 'views_query';
  /* support_comments */  /* Master */ $handler->display->display_options['exposed_form']['type'] = 'basic';
  /* support_comments */  /* Master */ $handler->display->display_options['pager']['type'] = 'full';
  /* support_comments */  /* Master */ $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  /* support_comments */  /* Master */ $handler->display->display_options['style_plugin'] = 'table';
  /* support_comments */  /* Master */ /* Relationship: Comment: Content */
  /* support_comments */  /* Master */ $handler->display->display_options['relationships']['nid']['id'] = 'nid';
  /* support_comments */  /* Master */ $handler->display->display_options['relationships']['nid']['table'] = 'comment';
  /* support_comments */  /* Master */ $handler->display->display_options['relationships']['nid']['field'] = 'nid';
  /* support_comments */  /* Master */ $handler->display->display_options['relationships']['nid']['required'] = TRUE;
  /* support_comments */  /* Master */ /* Relationship: Comment: Author */
  /* support_comments */  /* Master */ $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  /* support_comments */  /* Master */ $handler->display->display_options['relationships']['uid']['table'] = 'comment';
  /* support_comments */  /* Master */ $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* support_comments */  /* Master */ /* Field: Comment: Post date */
  /* support_comments */  /* Master */ $handler->display->display_options['fields']['created']['id'] = 'created';
  /* support_comments */  /* Master */ $handler->display->display_options['fields']['created']['table'] = 'comment';
  /* support_comments */  /* Master */ $handler->display->display_options['fields']['created']['field'] = 'created';
  /* support_comments */  /* Master */ $handler->display->display_options['fields']['created']['label'] = 'Date';
  /* support_comments */  /* Master */ $handler->display->display_options['fields']['created']['date_format'] = 'date_format_military_with_time';
  /* support_comments */  /* Master */ $handler->display->display_options['fields']['created']['second_date_format'] = 'date_format_globalnet_date';
  /* support_comments */  /* Master */ /* Field: User: Name */
  /* support_comments */  /* Master */ $handler->display->display_options['fields']['name_1']['id'] = 'name_1';
  /* support_comments */  /* Master */ $handler->display->display_options['fields']['name_1']['table'] = 'users';
  /* support_comments */  /* Master */ $handler->display->display_options['fields']['name_1']['field'] = 'name';
  /* support_comments */  /* Master */ $handler->display->display_options['fields']['name_1']['relationship'] = 'uid';
  /* support_comments */  /* Master */ $handler->display->display_options['fields']['name_1']['label'] = 'Who';
  /* support_comments */  /* Master */ $handler->display->display_options['fields']['name_1']['exclude'] = TRUE;
  /* support_comments */  /* Master */ /* Field: Comment: Comment */
  /* support_comments */  /* Master */ $handler->display->display_options['fields']['comment_body']['id'] = 'comment_body';
  /* support_comments */  /* Master */ $handler->display->display_options['fields']['comment_body']['table'] = 'field_data_comment_body';
  /* support_comments */  /* Master */ $handler->display->display_options['fields']['comment_body']['field'] = 'comment_body';
  /* support_comments */  /* Master */ $handler->display->display_options['fields']['comment_body']['element_type'] = '0';
  /* support_comments */  /* Master */ $handler->display->display_options['fields']['comment_body']['element_wrapper_type'] = '0';
  /* support_comments */  /* Master */ $handler->display->display_options['fields']['comment_body']['element_default_classes'] = FALSE;
  /* support_comments */  /* Master */ $handler->display->display_options['fields']['comment_body']['settings'] = array(
  /* support_comments */  /* Master */   'field_formatter_class' => '',
  /* support_comments */  /* Master */ );
  /* support_comments */  /* Master */ $handler->display->display_options['fields']['comment_body']['field_api_classes'] = TRUE;
  /* support_comments */  /* Master */ /* Sort criterion: Comment: Post date */
  /* support_comments */  /* Master */ $handler->display->display_options['sorts']['created']['id'] = 'created';
  /* support_comments */  /* Master */ $handler->display->display_options['sorts']['created']['table'] = 'comment';
  /* support_comments */  /* Master */ $handler->display->display_options['sorts']['created']['field'] = 'created';
  /* support_comments */  /* Master */ $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* support_comments */  /* Master */ /* Contextual filter: Comment: Nid */
  /* support_comments */  /* Master */ $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  /* support_comments */  /* Master */ $handler->display->display_options['arguments']['nid']['table'] = 'comment';
  /* support_comments */  /* Master */ $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  /* support_comments */  /* Master */ $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  /* support_comments */  /* Master */ $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'raw';
  /* support_comments */  /* Master */ $handler->display->display_options['arguments']['nid']['default_argument_options']['index'] = '0';
  /* support_comments */  /* Master */ $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  /* support_comments */  /* Master */ $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  /* support_comments */  /* Master */ $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  /* support_comments */  /* Master */ /* Filter criterion: Comment: Approved */
  /* support_comments */  /* Master */ $handler->display->display_options['filters']['status']['id'] = 'status';
  /* support_comments */  /* Master */ $handler->display->display_options['filters']['status']['table'] = 'comment';
  /* support_comments */  /* Master */ $handler->display->display_options['filters']['status']['field'] = 'status';
  /* support_comments */  /* Master */ $handler->display->display_options['filters']['status']['value'] = 1;
  /* support_comments */  /* Master */ $handler->display->display_options['filters']['status']['group'] = 1;
  /* support_comments */  /* Master */ $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* support_comments */  /* Master */ /* Filter criterion: Content: Published */
  /* support_comments */  /* Master */ $handler->display->display_options['filters']['status_node']['id'] = 'status_node';
  /* support_comments */  /* Master */ $handler->display->display_options['filters']['status_node']['table'] = 'node';
  /* support_comments */  /* Master */ $handler->display->display_options['filters']['status_node']['field'] = 'status';
  /* support_comments */  /* Master */ $handler->display->display_options['filters']['status_node']['relationship'] = 'nid';
  /* support_comments */  /* Master */ $handler->display->display_options['filters']['status_node']['value'] = 1;
  /* support_comments */  /* Master */ $handler->display->display_options['filters']['status_node']['group'] = 1;
  /* support_comments */  /* Master */ $handler->display->display_options['filters']['status_node']['expose']['operator'] = FALSE;

  /* support_comments */ /* Display: Page */
  /* support_comments */  /* Page */ $handler = $view->new_display('page', 'Page', 'page');
  /* support_comments */  /* Page */ $handler->display->display_options['defaults']['access'] = FALSE;
  /* support_comments */  /* Page */ $handler->display->display_options['access']['type'] = 'none';
  /* support_comments */  /* Page */ $handler->display->display_options['path'] = 'admin/manage/support-comments';
  /* support_comments */ $translatables['support_comments'] = array(
  /* support_comments */   t('Master'),
  /* support_comments */   t('Support Comments'),
  /* support_comments */   t('more'),
  /* support_comments */   t('Apply'),
  /* support_comments */   t('Reset'),
  /* support_comments */   t('Sort by'),
  /* support_comments */   t('Asc'),
  /* support_comments */   t('Desc'),
  /* support_comments */   t('Items per page'),
  /* support_comments */   t('- All -'),
  /* support_comments */   t('Offset'),
  /* support_comments */   t('« first'),
  /* support_comments */   t('‹ previous'),
  /* support_comments */   t('next ›'),
  /* support_comments */   t('last »'),
  /* support_comments */   t('Content'),
  /* support_comments */   t('author'),
  /* support_comments */   t('Date'),
  /* support_comments */   t('Who'),
  /* support_comments */   t('Comment'),
  /* support_comments */   t('All'),
  /* support_comments */   t('Page'),
  /* support_comments */ );
  $export['support_comments'] = $view;

  /* support_details */ $view = new view();
  /* support_details */ $view->name = 'support_details';
  /* support_details */ $view->description = '';
  /* support_details */ $view->tag = 'default';
  /* support_details */ $view->base_table = 'node';
  /* support_details */ $view->human_name = 'Support Details';
  /* support_details */ $view->core = 7;
  /* support_details */ $view->api_version = '3.0';
  /* support_details */ $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* support_details */ /* Display: Master */
  /* support_details */  /* Master */ $handler = $view->new_display('default', 'Master', 'default');
  /* support_details */  /* Master */ $handler->display->display_options['title'] = 'Support Description';
  /* support_details */  /* Master */ $handler->display->display_options['use_more_always'] = FALSE;
  /* support_details */  /* Master */ $handler->display->display_options['access']['type'] = 'perm';
  /* support_details */  /* Master */ $handler->display->display_options['cache']['type'] = 'none';
  /* support_details */  /* Master */ $handler->display->display_options['query']['type'] = 'views_query';
  /* support_details */  /* Master */ $handler->display->display_options['exposed_form']['type'] = 'basic';
  /* support_details */  /* Master */ $handler->display->display_options['pager']['type'] = 'some';
  /* support_details */  /* Master */ $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  /* support_details */  /* Master */ $handler->display->display_options['style_plugin'] = 'default';
  /* support_details */  /* Master */ $handler->display->display_options['style_options']['row_class'] = 'support-detail';
  /* support_details */  /* Master */ $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  /* support_details */  /* Master */ $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  /* support_details */  /* Master */ $handler->display->display_options['row_plugin'] = 'fields';
  /* support_details */  /* Master */ $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  /* support_details */  /* Master */ /* Relationship: Content: Author */
  /* support_details */  /* Master */ $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  /* support_details */  /* Master */ $handler->display->display_options['relationships']['uid']['table'] = 'node';
  /* support_details */  /* Master */ $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* support_details */  /* Master */ /* Field: Content: Priority */
  /* support_details */  /* Master */ $handler->display->display_options['fields']['field_support_priority']['id'] = 'field_support_priority';
  /* support_details */  /* Master */ $handler->display->display_options['fields']['field_support_priority']['table'] = 'field_data_field_support_priority';
  /* support_details */  /* Master */ $handler->display->display_options['fields']['field_support_priority']['field'] = 'field_support_priority';
  /* support_details */  /* Master */ $handler->display->display_options['fields']['field_support_priority']['settings'] = array(
  /* support_details */  /* Master */   'field_formatter_class' => '',
  /* support_details */  /* Master */ );
  /* support_details */  /* Master */ /* Field: Content: Status */
  /* support_details */  /* Master */ $handler->display->display_options['fields']['field_support_status']['id'] = 'field_support_status';
  /* support_details */  /* Master */ $handler->display->display_options['fields']['field_support_status']['table'] = 'field_data_field_support_status';
  /* support_details */  /* Master */ $handler->display->display_options['fields']['field_support_status']['field'] = 'field_support_status';
  /* support_details */  /* Master */ $handler->display->display_options['fields']['field_support_status']['settings'] = array(
  /* support_details */  /* Master */   'field_formatter_class' => '',
  /* support_details */  /* Master */ );
  /* support_details */  /* Master */ /* Field: Content: Post date */
  /* support_details */  /* Master */ $handler->display->display_options['fields']['created_1']['id'] = 'created_1';
  /* support_details */  /* Master */ $handler->display->display_options['fields']['created_1']['table'] = 'node';
  /* support_details */  /* Master */ $handler->display->display_options['fields']['created_1']['field'] = 'created';
  /* support_details */  /* Master */ $handler->display->display_options['fields']['created_1']['label'] = 'Age';
  /* support_details */  /* Master */ $handler->display->display_options['fields']['created_1']['date_format'] = 'raw time ago';
  /* support_details */  /* Master */ $handler->display->display_options['fields']['created_1']['second_date_format'] = 'date_format_globalnet_date';
  /* support_details */  /* Master */ /* Field: Content: How can we help you? */
  /* support_details */  /* Master */ $handler->display->display_options['fields']['field_support_category']['id'] = 'field_support_category';
  /* support_details */  /* Master */ $handler->display->display_options['fields']['field_support_category']['table'] = 'field_data_field_support_category';
  /* support_details */  /* Master */ $handler->display->display_options['fields']['field_support_category']['field'] = 'field_support_category';
  /* support_details */  /* Master */ $handler->display->display_options['fields']['field_support_category']['label'] = 'Category';
  /* support_details */  /* Master */ $handler->display->display_options['fields']['field_support_category']['settings'] = array(
  /* support_details */  /* Master */   'field_formatter_class' => '',
  /* support_details */  /* Master */ );
  /* support_details */  /* Master */ /* Field: Content: Resolution */
  /* support_details */  /* Master */ $handler->display->display_options['fields']['field_support_resolution']['id'] = 'field_support_resolution';
  /* support_details */  /* Master */ $handler->display->display_options['fields']['field_support_resolution']['table'] = 'field_data_field_support_resolution';
  /* support_details */  /* Master */ $handler->display->display_options['fields']['field_support_resolution']['field'] = 'field_support_resolution';
  /* support_details */  /* Master */ $handler->display->display_options['fields']['field_support_resolution']['settings'] = array(
  /* support_details */  /* Master */   'field_formatter_class' => '',
  /* support_details */  /* Master */ );
  /* support_details */  /* Master */ /* Field: Content: Parent Organization */
  /* support_details */  /* Master */ $handler->display->display_options['fields']['field_parent_organization']['id'] = 'field_parent_organization';
  /* support_details */  /* Master */ $handler->display->display_options['fields']['field_parent_organization']['table'] = 'field_data_field_parent_organization';
  /* support_details */  /* Master */ $handler->display->display_options['fields']['field_parent_organization']['field'] = 'field_parent_organization';
  /* support_details */  /* Master */ $handler->display->display_options['fields']['field_parent_organization']['label'] = 'Organization';
  /* support_details */  /* Master */ $handler->display->display_options['fields']['field_parent_organization']['element_label_colon'] = FALSE;
  /* support_details */  /* Master */ $handler->display->display_options['fields']['field_parent_organization']['settings'] = array(
  /* support_details */  /* Master */   'link' => 0,
  /* support_details */  /* Master */   'field_formatter_class' => '',
  /* support_details */  /* Master */ );
  /* support_details */  /* Master */ /* Field: Content: Owner */
  /* support_details */  /* Master */ $handler->display->display_options['fields']['field_support_owner']['id'] = 'field_support_owner';
  /* support_details */  /* Master */ $handler->display->display_options['fields']['field_support_owner']['table'] = 'field_data_field_support_owner';
  /* support_details */  /* Master */ $handler->display->display_options['fields']['field_support_owner']['field'] = 'field_support_owner';
  /* support_details */  /* Master */ $handler->display->display_options['fields']['field_support_owner']['settings'] = array(
  /* support_details */  /* Master */   'link' => 0,
  /* support_details */  /* Master */   'field_formatter_class' => '',
  /* support_details */  /* Master */ );
  /* support_details */  /* Master */ /* Field: Content: Post date */
  /* support_details */  /* Master */ $handler->display->display_options['fields']['created']['id'] = 'created';
  /* support_details */  /* Master */ $handler->display->display_options['fields']['created']['table'] = 'node';
  /* support_details */  /* Master */ $handler->display->display_options['fields']['created']['field'] = 'created';
  /* support_details */  /* Master */ $handler->display->display_options['fields']['created']['label'] = 'Created';
  /* support_details */  /* Master */ $handler->display->display_options['fields']['created']['date_format'] = 'date_format_military_with_time';
  /* support_details */  /* Master */ $handler->display->display_options['fields']['created']['second_date_format'] = 'date_format_globalnet_date';
  /* support_details */  /* Master */ /* Field: Content: Updated date */
  /* support_details */  /* Master */ $handler->display->display_options['fields']['changed']['id'] = 'changed';
  /* support_details */  /* Master */ $handler->display->display_options['fields']['changed']['table'] = 'node';
  /* support_details */  /* Master */ $handler->display->display_options['fields']['changed']['field'] = 'changed';
  /* support_details */  /* Master */ $handler->display->display_options['fields']['changed']['label'] = 'Updated';
  /* support_details */  /* Master */ $handler->display->display_options['fields']['changed']['date_format'] = 'date_format_military_with_time';
  /* support_details */  /* Master */ $handler->display->display_options['fields']['changed']['second_date_format'] = 'date_format_globalnet_date';
  /* support_details */  /* Master */ /* Contextual filter: Content: Nid */
  /* support_details */  /* Master */ $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  /* support_details */  /* Master */ $handler->display->display_options['arguments']['nid']['table'] = 'node';
  /* support_details */  /* Master */ $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  /* support_details */  /* Master */ $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  /* support_details */  /* Master */ $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'raw';
  /* support_details */  /* Master */ $handler->display->display_options['arguments']['nid']['default_argument_options']['index'] = '0';
  /* support_details */  /* Master */ $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  /* support_details */  /* Master */ $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  /* support_details */  /* Master */ $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';

  /* support_details */ /* Display: Support details */
  /* support_details */  /* Support details */ $handler = $view->new_display('page', 'Support details', 'page');
  /* support_details */  /* Support details */ $handler->display->display_options['defaults']['title'] = FALSE;
  /* support_details */  /* Support details */ $handler->display->display_options['title'] = 'Support Details';
  /* support_details */  /* Support details */ $handler->display->display_options['path'] = 'support-details';

  /* support_details */ /* Display: Reporter details */
  /* support_details */  /* Reporter details */ $handler = $view->new_display('page', 'Reporter details', 'page_1');
  /* support_details */  /* Reporter details */ $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  /* support_details */  /* Reporter details */ $handler->display->display_options['style_plugin'] = 'default';
  /* support_details */  /* Reporter details */ $handler->display->display_options['style_options']['row_class'] = 'reporter-detail';
  /* support_details */  /* Reporter details */ $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  /* support_details */  /* Reporter details */ $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  /* support_details */  /* Reporter details */ $handler->display->display_options['defaults']['style_options'] = FALSE;
  /* support_details */  /* Reporter details */ $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  /* support_details */  /* Reporter details */ $handler->display->display_options['row_plugin'] = 'fields';
  /* support_details */  /* Reporter details */ $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  /* support_details */  /* Reporter details */ $handler->display->display_options['defaults']['row_options'] = FALSE;
  /* support_details */  /* Reporter details */ $handler->display->display_options['defaults']['fields'] = FALSE;
  /* support_details */  /* Reporter details */ /* Field: Field: Given Name */
  /* support_details */  /* Reporter details */ $handler->display->display_options['fields']['field_name_first']['id'] = 'field_name_first';
  /* support_details */  /* Reporter details */ $handler->display->display_options['fields']['field_name_first']['table'] = 'field_data_field_name_first';
  /* support_details */  /* Reporter details */ $handler->display->display_options['fields']['field_name_first']['field'] = 'field_name_first';
  /* support_details */  /* Reporter details */ $handler->display->display_options['fields']['field_name_first']['label'] = 'Name';
  /* support_details */  /* Reporter details */ $handler->display->display_options['fields']['field_name_first']['element_type'] = '0';
  /* support_details */  /* Reporter details */ $handler->display->display_options['fields']['field_name_first']['element_wrapper_type'] = 'span';
  /* support_details */  /* Reporter details */ $handler->display->display_options['fields']['field_name_first']['settings'] = array(
  /* support_details */  /* Reporter details */   'field_formatter_class' => 'inline',
  /* support_details */  /* Reporter details */ );
  /* support_details */  /* Reporter details */ /* Field: Field: Family Name */
  /* support_details */  /* Reporter details */ $handler->display->display_options['fields']['field_name_last']['id'] = 'field_name_last';
  /* support_details */  /* Reporter details */ $handler->display->display_options['fields']['field_name_last']['table'] = 'field_data_field_name_last';
  /* support_details */  /* Reporter details */ $handler->display->display_options['fields']['field_name_last']['field'] = 'field_name_last';
  /* support_details */  /* Reporter details */ $handler->display->display_options['fields']['field_name_last']['label'] = '';
  /* support_details */  /* Reporter details */ $handler->display->display_options['fields']['field_name_last']['element_type'] = '0';
  /* support_details */  /* Reporter details */ $handler->display->display_options['fields']['field_name_last']['element_label_colon'] = FALSE;
  /* support_details */  /* Reporter details */ $handler->display->display_options['fields']['field_name_last']['element_wrapper_type'] = 'span';
  /* support_details */  /* Reporter details */ $handler->display->display_options['fields']['field_name_last']['settings'] = array(
  /* support_details */  /* Reporter details */   'field_formatter_class' => 'inline',
  /* support_details */  /* Reporter details */ );
  /* support_details */  /* Reporter details */ /* Field: Content: Author uid */
  /* support_details */  /* Reporter details */ $handler->display->display_options['fields']['uid']['id'] = 'uid';
  /* support_details */  /* Reporter details */ $handler->display->display_options['fields']['uid']['table'] = 'node';
  /* support_details */  /* Reporter details */ $handler->display->display_options['fields']['uid']['field'] = 'uid';
  /* support_details */  /* Reporter details */ $handler->display->display_options['fields']['uid']['exclude'] = TRUE;
  /* support_details */  /* Reporter details */ $handler->display->display_options['fields']['uid']['link_to_user'] = FALSE;
  /* support_details */  /* Reporter details */ /* Field: User: Name */
  /* support_details */  /* Reporter details */ $handler->display->display_options['fields']['name']['id'] = 'name';
  /* support_details */  /* Reporter details */ $handler->display->display_options['fields']['name']['table'] = 'users';
  /* support_details */  /* Reporter details */ $handler->display->display_options['fields']['name']['field'] = 'name';
  /* support_details */  /* Reporter details */ $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  /* support_details */  /* Reporter details */ $handler->display->display_options['fields']['name']['label'] = 'Created by Username';
  /* support_details */  /* Reporter details */ $handler->display->display_options['fields']['name']['hide_empty'] = TRUE;
  /* support_details */  /* Reporter details */ /* Field: Field: Telephone Number */
  /* support_details */  /* Reporter details */ $handler->display->display_options['fields']['field_telephone_number']['id'] = 'field_telephone_number';
  /* support_details */  /* Reporter details */ $handler->display->display_options['fields']['field_telephone_number']['table'] = 'field_data_field_telephone_number';
  /* support_details */  /* Reporter details */ $handler->display->display_options['fields']['field_telephone_number']['field'] = 'field_telephone_number';
  /* support_details */  /* Reporter details */ $handler->display->display_options['fields']['field_telephone_number']['label'] = 'Phone';
  /* support_details */  /* Reporter details */ $handler->display->display_options['fields']['field_telephone_number']['element_type'] = '0';
  /* support_details */  /* Reporter details */ $handler->display->display_options['fields']['field_telephone_number']['element_wrapper_type'] = 'span';
  /* support_details */  /* Reporter details */ $handler->display->display_options['fields']['field_telephone_number']['settings'] = array(
  /* support_details */  /* Reporter details */   'field_formatter_class' => '',
  /* support_details */  /* Reporter details */ );
  /* support_details */  /* Reporter details */ $handler->display->display_options['path'] = 'support-detail-reporter';

  /* support_details */ /* Display: Problem Detail */
  /* support_details */  /* Problem Detail */ $handler = $view->new_display('page', 'Problem Detail', 'page_2');
  /* support_details */  /* Problem Detail */ $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  /* support_details */  /* Problem Detail */ $handler->display->display_options['style_plugin'] = 'default';
  /* support_details */  /* Problem Detail */ $handler->display->display_options['style_options']['row_class'] = 'problem-detail';
  /* support_details */  /* Problem Detail */ $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  /* support_details */  /* Problem Detail */ $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  /* support_details */  /* Problem Detail */ $handler->display->display_options['defaults']['style_options'] = FALSE;
  /* support_details */  /* Problem Detail */ $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  /* support_details */  /* Problem Detail */ $handler->display->display_options['row_plugin'] = 'fields';
  /* support_details */  /* Problem Detail */ $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  /* support_details */  /* Problem Detail */ $handler->display->display_options['defaults']['row_options'] = FALSE;
  /* support_details */  /* Problem Detail */ $handler->display->display_options['defaults']['fields'] = FALSE;
  /* support_details */  /* Problem Detail */ /* Field: Field: Description */
  /* support_details */  /* Problem Detail */ $handler->display->display_options['fields']['field_description']['id'] = 'field_description';
  /* support_details */  /* Problem Detail */ $handler->display->display_options['fields']['field_description']['table'] = 'field_data_field_description';
  /* support_details */  /* Problem Detail */ $handler->display->display_options['fields']['field_description']['field'] = 'field_description';
  /* support_details */  /* Problem Detail */ $handler->display->display_options['fields']['field_description']['alter']['strip_tags'] = TRUE;
  /* support_details */  /* Problem Detail */ $handler->display->display_options['fields']['field_description']['element_label_colon'] = FALSE;
  /* support_details */  /* Problem Detail */ $handler->display->display_options['fields']['field_description']['settings'] = array(
  /* support_details */  /* Problem Detail */   'field_formatter_class' => '',
  /* support_details */  /* Problem Detail */ );
  /* support_details */  /* Problem Detail */ /* Field: Content: What did you expect to happen? */
  /* support_details */  /* Problem Detail */ $handler->display->display_options['fields']['field_expected_functionality']['id'] = 'field_expected_functionality';
  /* support_details */  /* Problem Detail */ $handler->display->display_options['fields']['field_expected_functionality']['table'] = 'field_data_field_expected_functionality';
  /* support_details */  /* Problem Detail */ $handler->display->display_options['fields']['field_expected_functionality']['field'] = 'field_expected_functionality';
  /* support_details */  /* Problem Detail */ $handler->display->display_options['fields']['field_expected_functionality']['label'] = 'Expected result';
  /* support_details */  /* Problem Detail */ $handler->display->display_options['fields']['field_expected_functionality']['alter']['strip_tags'] = TRUE;
  /* support_details */  /* Problem Detail */ $handler->display->display_options['fields']['field_expected_functionality']['element_label_colon'] = FALSE;
  /* support_details */  /* Problem Detail */ $handler->display->display_options['fields']['field_expected_functionality']['settings'] = array(
  /* support_details */  /* Problem Detail */   'field_formatter_class' => '',
  /* support_details */  /* Problem Detail */ );
  /* support_details */  /* Problem Detail */ /* Field: Content: What actually happened? */
  /* support_details */  /* Problem Detail */ $handler->display->display_options['fields']['field_actual_functionality']['id'] = 'field_actual_functionality';
  /* support_details */  /* Problem Detail */ $handler->display->display_options['fields']['field_actual_functionality']['table'] = 'field_data_field_actual_functionality';
  /* support_details */  /* Problem Detail */ $handler->display->display_options['fields']['field_actual_functionality']['field'] = 'field_actual_functionality';
  /* support_details */  /* Problem Detail */ $handler->display->display_options['fields']['field_actual_functionality']['label'] = 'Actual result';
  /* support_details */  /* Problem Detail */ $handler->display->display_options['fields']['field_actual_functionality']['alter']['strip_tags'] = TRUE;
  /* support_details */  /* Problem Detail */ $handler->display->display_options['fields']['field_actual_functionality']['element_label_colon'] = FALSE;
  /* support_details */  /* Problem Detail */ $handler->display->display_options['fields']['field_actual_functionality']['settings'] = array(
  /* support_details */  /* Problem Detail */   'field_formatter_class' => '',
  /* support_details */  /* Problem Detail */ );
  /* support_details */  /* Problem Detail */ $handler->display->display_options['path'] = 'support-detail-problem';
  /* support_details */ $translatables['support_details'] = array(
  /* support_details */   t('Master'),
  /* support_details */   t('Support Description'),
  /* support_details */   t('more'),
  /* support_details */   t('Apply'),
  /* support_details */   t('Reset'),
  /* support_details */   t('Sort by'),
  /* support_details */   t('Asc'),
  /* support_details */   t('Desc'),
  /* support_details */   t('author'),
  /* support_details */   t('Priority'),
  /* support_details */   t('Status'),
  /* support_details */   t('Age'),
  /* support_details */   t('Category'),
  /* support_details */   t('Resolution'),
  /* support_details */   t('Organization'),
  /* support_details */   t('Owner'),
  /* support_details */   t('Created'),
  /* support_details */   t('Updated'),
  /* support_details */   t('All'),
  /* support_details */   t('Support details'),
  /* support_details */   t('Support Details'),
  /* support_details */   t('Reporter details'),
  /* support_details */   t('Name'),
  /* support_details */   t('Author uid'),
  /* support_details */   t('Created by Username'),
  /* support_details */   t('Phone'),
  /* support_details */   t('Problem Detail'),
  /* support_details */   t('Description'),
  /* support_details */   t('Expected result'),
  /* support_details */   t('Actual result'),
  /* support_details */ );
  $export['support_details'] = $view;

  /* support_ticket_activity */ $view = new view();
  /* support_ticket_activity */ $view->name = 'support_ticket_activity';
  /* support_ticket_activity */ $view->description = '';
  /* support_ticket_activity */ $view->tag = 'default';
  /* support_ticket_activity */ $view->base_table = 'node';
  /* support_ticket_activity */ $view->human_name = 'Support Ticket Activity';
  /* support_ticket_activity */ $view->core = 7;
  /* support_ticket_activity */ $view->api_version = '3.0';
  /* support_ticket_activity */ $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* support_ticket_activity */ /* Display: Master */
  /* support_ticket_activity */  /* Master */ $handler = $view->new_display('default', 'Master', 'default');
  /* support_ticket_activity */  /* Master */ $handler->display->display_options['title'] = 'Support Ticket Activity';
  /* support_ticket_activity */  /* Master */ $handler->display->display_options['use_more_always'] = FALSE;
  /* support_ticket_activity */  /* Master */ $handler->display->display_options['group_by'] = TRUE;
  /* support_ticket_activity */  /* Master */ $handler->display->display_options['access']['type'] = 'gn2_og_org_manager_access';
  /* support_ticket_activity */  /* Master */ $handler->display->display_options['cache']['type'] = 'none';
  /* support_ticket_activity */  /* Master */ $handler->display->display_options['query']['type'] = 'views_query';
  /* support_ticket_activity */  /* Master */ $handler->display->display_options['query']['options']['distinct'] = TRUE;
  /* support_ticket_activity */  /* Master */ $handler->display->display_options['exposed_form']['type'] = 'basic';
  /* support_ticket_activity */  /* Master */ $handler->display->display_options['pager']['type'] = 'none';
  /* support_ticket_activity */  /* Master */ $handler->display->display_options['pager']['options']['offset'] = '0';
  /* support_ticket_activity */  /* Master */ $handler->display->display_options['style_plugin'] = 'table';
  /* support_ticket_activity */  /* Master */ $handler->display->display_options['style_options']['columns'] = array(
  /* support_ticket_activity */  /* Master */   'title' => 'title',
  /* support_ticket_activity */  /* Master */   'timestamp' => 'timestamp',
  /* support_ticket_activity */  /* Master */   'field_name' => 'field_name',
  /* support_ticket_activity */  /* Master */   'log' => 'log',
  /* support_ticket_activity */  /* Master */   'type' => 'type',
  /* support_ticket_activity */  /* Master */   'uid' => 'uid',
  /* support_ticket_activity */  /* Master */   'after_value_text' => 'after_value_text',
  /* support_ticket_activity */  /* Master */   'before_value_text' => 'before_value_text',
  /* support_ticket_activity */  /* Master */ );
  /* support_ticket_activity */  /* Master */ $handler->display->display_options['style_options']['default'] = '-1';
  /* support_ticket_activity */  /* Master */ $handler->display->display_options['style_options']['info'] = array(
  /* support_ticket_activity */  /* Master */   'title' => array(
  /* support_ticket_activity */  /* Master */     'sortable' => 1,
  /* support_ticket_activity */  /* Master */     'default_sort_order' => 'desc',
  /* support_ticket_activity */  /* Master */     'align' => 'views-align-left',
  /* support_ticket_activity */  /* Master */     'separator' => '',
  /* support_ticket_activity */  /* Master */     'empty_column' => 0,
  /* support_ticket_activity */  /* Master */   ),
  /* support_ticket_activity */  /* Master */   'timestamp' => array(
  /* support_ticket_activity */  /* Master */     'sortable' => 1,
  /* support_ticket_activity */  /* Master */     'default_sort_order' => 'desc',
  /* support_ticket_activity */  /* Master */     'align' => 'views-align-left',
  /* support_ticket_activity */  /* Master */     'separator' => '',
  /* support_ticket_activity */  /* Master */     'empty_column' => 0,
  /* support_ticket_activity */  /* Master */   ),
  /* support_ticket_activity */  /* Master */   'field_name' => array(
  /* support_ticket_activity */  /* Master */     'sortable' => 1,
  /* support_ticket_activity */  /* Master */     'default_sort_order' => 'desc',
  /* support_ticket_activity */  /* Master */     'align' => 'views-align-left',
  /* support_ticket_activity */  /* Master */     'separator' => '',
  /* support_ticket_activity */  /* Master */     'empty_column' => 0,
  /* support_ticket_activity */  /* Master */   ),
  /* support_ticket_activity */  /* Master */   'log' => array(
  /* support_ticket_activity */  /* Master */     'sortable' => 1,
  /* support_ticket_activity */  /* Master */     'default_sort_order' => 'desc',
  /* support_ticket_activity */  /* Master */     'align' => 'views-align-left',
  /* support_ticket_activity */  /* Master */     'separator' => '',
  /* support_ticket_activity */  /* Master */     'empty_column' => 0,
  /* support_ticket_activity */  /* Master */   ),
  /* support_ticket_activity */  /* Master */   'type' => array(
  /* support_ticket_activity */  /* Master */     'sortable' => 1,
  /* support_ticket_activity */  /* Master */     'default_sort_order' => 'desc',
  /* support_ticket_activity */  /* Master */     'align' => 'views-align-left',
  /* support_ticket_activity */  /* Master */     'separator' => '',
  /* support_ticket_activity */  /* Master */     'empty_column' => 0,
  /* support_ticket_activity */  /* Master */   ),
  /* support_ticket_activity */  /* Master */   'uid' => array(
  /* support_ticket_activity */  /* Master */     'sortable' => 1,
  /* support_ticket_activity */  /* Master */     'default_sort_order' => 'desc',
  /* support_ticket_activity */  /* Master */     'align' => 'views-align-left',
  /* support_ticket_activity */  /* Master */     'separator' => '',
  /* support_ticket_activity */  /* Master */     'empty_column' => 0,
  /* support_ticket_activity */  /* Master */   ),
  /* support_ticket_activity */  /* Master */   'after_value_text' => array(
  /* support_ticket_activity */  /* Master */     'sortable' => 1,
  /* support_ticket_activity */  /* Master */     'default_sort_order' => 'desc',
  /* support_ticket_activity */  /* Master */     'align' => 'views-align-left',
  /* support_ticket_activity */  /* Master */     'separator' => '',
  /* support_ticket_activity */  /* Master */     'empty_column' => 0,
  /* support_ticket_activity */  /* Master */   ),
  /* support_ticket_activity */  /* Master */   'before_value_text' => array(
  /* support_ticket_activity */  /* Master */     'sortable' => 1,
  /* support_ticket_activity */  /* Master */     'default_sort_order' => 'desc',
  /* support_ticket_activity */  /* Master */     'align' => 'views-align-left',
  /* support_ticket_activity */  /* Master */     'separator' => '',
  /* support_ticket_activity */  /* Master */     'empty_column' => 0,
  /* support_ticket_activity */  /* Master */   ),
  /* support_ticket_activity */  /* Master */ );
  /* support_ticket_activity */  /* Master */ /* Field: Content: Nid */
  /* support_ticket_activity */  /* Master */ $handler->display->display_options['fields']['nid']['id'] = 'nid';
  /* support_ticket_activity */  /* Master */ $handler->display->display_options['fields']['nid']['table'] = 'node';
  /* support_ticket_activity */  /* Master */ $handler->display->display_options['fields']['nid']['field'] = 'nid';
  /* support_ticket_activity */  /* Master */ $handler->display->display_options['fields']['nid']['label'] = '';
  /* support_ticket_activity */  /* Master */ $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* support_ticket_activity */  /* Master */ /* Field: Field Tracker: Creation Date */
  /* support_ticket_activity */  /* Master */ $handler->display->display_options['fields']['timestamp']['id'] = 'timestamp';
  /* support_ticket_activity */  /* Master */ $handler->display->display_options['fields']['timestamp']['table'] = 'track_field_changes_audit';
  /* support_ticket_activity */  /* Master */ $handler->display->display_options['fields']['timestamp']['field'] = 'timestamp';
  /* support_ticket_activity */  /* Master */ $handler->display->display_options['fields']['timestamp']['label'] = 'Date/Time of Change';
  /* support_ticket_activity */  /* Master */ $handler->display->display_options['fields']['timestamp']['date_format'] = 'date_format_military_with_time';
  /* support_ticket_activity */  /* Master */ $handler->display->display_options['fields']['timestamp']['second_date_format'] = 'date_format_globalnet_date';
  /* support_ticket_activity */  /* Master */ /* Field: Field Tracker: Field Name */
  /* support_ticket_activity */  /* Master */ $handler->display->display_options['fields']['field_name']['id'] = 'field_name';
  /* support_ticket_activity */  /* Master */ $handler->display->display_options['fields']['field_name']['table'] = 'track_field_changes_audit';
  /* support_ticket_activity */  /* Master */ $handler->display->display_options['fields']['field_name']['field'] = 'field_name';
  /* support_ticket_activity */  /* Master */ /* Field: Field Tracker: Track Changes Log */
  /* support_ticket_activity */  /* Master */ $handler->display->display_options['fields']['log']['id'] = 'log';
  /* support_ticket_activity */  /* Master */ $handler->display->display_options['fields']['log']['table'] = 'track_field_changes_audit';
  /* support_ticket_activity */  /* Master */ $handler->display->display_options['fields']['log']['field'] = 'log';
  /* support_ticket_activity */  /* Master */ $handler->display->display_options['fields']['log']['label'] = 'Log message';
  /* support_ticket_activity */  /* Master */ /* Field: Field Tracker: Value Before */
  /* support_ticket_activity */  /* Master */ $handler->display->display_options['fields']['before_value_text']['id'] = 'before_value_text';
  /* support_ticket_activity */  /* Master */ $handler->display->display_options['fields']['before_value_text']['table'] = 'track_field_changes_audit';
  /* support_ticket_activity */  /* Master */ $handler->display->display_options['fields']['before_value_text']['field'] = 'before_value_text';
  /* support_ticket_activity */  /* Master */ /* Field: Field Tracker: Value After */
  /* support_ticket_activity */  /* Master */ $handler->display->display_options['fields']['after_value_text']['id'] = 'after_value_text';
  /* support_ticket_activity */  /* Master */ $handler->display->display_options['fields']['after_value_text']['table'] = 'track_field_changes_audit';
  /* support_ticket_activity */  /* Master */ $handler->display->display_options['fields']['after_value_text']['field'] = 'after_value_text';
  /* support_ticket_activity */  /* Master */ /* Field: Field Tracker: User */
  /* support_ticket_activity */  /* Master */ $handler->display->display_options['fields']['uid']['id'] = 'uid';
  /* support_ticket_activity */  /* Master */ $handler->display->display_options['fields']['uid']['table'] = 'track_field_changes_audit';
  /* support_ticket_activity */  /* Master */ $handler->display->display_options['fields']['uid']['field'] = 'uid';
  /* support_ticket_activity */  /* Master */ /* Sort criterion: Content: Updated/commented date */
  /* support_ticket_activity */  /* Master */ $handler->display->display_options['sorts']['last_updated']['id'] = 'last_updated';
  /* support_ticket_activity */  /* Master */ $handler->display->display_options['sorts']['last_updated']['table'] = 'node_comment_statistics';
  /* support_ticket_activity */  /* Master */ $handler->display->display_options['sorts']['last_updated']['field'] = 'last_updated';
  /* support_ticket_activity */  /* Master */ $handler->display->display_options['sorts']['last_updated']['order'] = 'DESC';
  /* support_ticket_activity */  /* Master */ $handler->display->display_options['sorts']['last_updated']['granularity'] = 'minute';
  /* support_ticket_activity */  /* Master */ /* Contextual filter: Content: Nid */
  /* support_ticket_activity */  /* Master */ $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  /* support_ticket_activity */  /* Master */ $handler->display->display_options['arguments']['nid']['table'] = 'node';
  /* support_ticket_activity */  /* Master */ $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  /* support_ticket_activity */  /* Master */ $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  /* support_ticket_activity */  /* Master */ $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'raw';
  /* support_ticket_activity */  /* Master */ $handler->display->display_options['arguments']['nid']['default_argument_options']['index'] = '0';
  /* support_ticket_activity */  /* Master */ $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  /* support_ticket_activity */  /* Master */ $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  /* support_ticket_activity */  /* Master */ $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  /* support_ticket_activity */  /* Master */ /* Filter criterion: Content: Published */
  /* support_ticket_activity */  /* Master */ $handler->display->display_options['filters']['status']['id'] = 'status';
  /* support_ticket_activity */  /* Master */ $handler->display->display_options['filters']['status']['table'] = 'node';
  /* support_ticket_activity */  /* Master */ $handler->display->display_options['filters']['status']['field'] = 'status';
  /* support_ticket_activity */  /* Master */ $handler->display->display_options['filters']['status']['value'] = 1;
  /* support_ticket_activity */  /* Master */ $handler->display->display_options['filters']['status']['group'] = 1;
  /* support_ticket_activity */  /* Master */ $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* support_ticket_activity */  /* Master */ /* Filter criterion: Content: Type */
  /* support_ticket_activity */  /* Master */ $handler->display->display_options['filters']['type']['id'] = 'type';
  /* support_ticket_activity */  /* Master */ $handler->display->display_options['filters']['type']['table'] = 'node';
  /* support_ticket_activity */  /* Master */ $handler->display->display_options['filters']['type']['field'] = 'type';
  /* support_ticket_activity */  /* Master */ $handler->display->display_options['filters']['type']['value'] = array(
  /* support_ticket_activity */  /* Master */   'support' => 'support',
  /* support_ticket_activity */  /* Master */ );

  /* support_ticket_activity */ /* Display: Page */
  /* support_ticket_activity */  /* Page */ $handler = $view->new_display('page', 'Page', 'page');
  /* support_ticket_activity */  /* Page */ $handler->display->display_options['path'] = 'admin/manage/support-ticket-activity';

  /* support_ticket_activity */ /* Display: User support request activity */
  /* support_ticket_activity */  /* User support request activity */ $handler = $view->new_display('panel_pane', 'User support request activity', 'panel_pane_1');
  /* support_ticket_activity */  /* User support request activity */ $handler->display->display_options['defaults']['title'] = FALSE;
  /* support_ticket_activity */  /* User support request activity */ $handler->display->display_options['title'] = 'Support Updates';
  /* support_ticket_activity */  /* User support request activity */ $handler->display->display_options['defaults']['access'] = FALSE;
  /* support_ticket_activity */  /* User support request activity */ $handler->display->display_options['access']['type'] = 'none';
  /* support_ticket_activity */  /* User support request activity */ $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  /* support_ticket_activity */  /* User support request activity */ $handler->display->display_options['style_plugin'] = 'table';
  /* support_ticket_activity */  /* User support request activity */ $handler->display->display_options['style_options']['columns'] = array(
  /* support_ticket_activity */  /* User support request activity */   'title' => 'title',
  /* support_ticket_activity */  /* User support request activity */   'timestamp_1' => 'timestamp_1',
  /* support_ticket_activity */  /* User support request activity */   'timestamp' => 'timestamp',
  /* support_ticket_activity */  /* User support request activity */   'field_support_priority' => 'field_support_priority',
  /* support_ticket_activity */  /* User support request activity */   'field_support_status' => 'field_support_status',
  /* support_ticket_activity */  /* User support request activity */   'last_comment_timestamp' => 'last_comment_timestamp',
  /* support_ticket_activity */  /* User support request activity */   'last_comment_name' => 'last_comment_name',
  /* support_ticket_activity */  /* User support request activity */   'comment_body' => 'comment_body',
  /* support_ticket_activity */  /* User support request activity */ );
  /* support_ticket_activity */  /* User support request activity */ $handler->display->display_options['style_options']['default'] = '-1';
  /* support_ticket_activity */  /* User support request activity */ $handler->display->display_options['style_options']['info'] = array(
  /* support_ticket_activity */  /* User support request activity */   'title' => array(
  /* support_ticket_activity */  /* User support request activity */     'sortable' => 1,
  /* support_ticket_activity */  /* User support request activity */     'default_sort_order' => 'desc',
  /* support_ticket_activity */  /* User support request activity */     'align' => 'views-align-left',
  /* support_ticket_activity */  /* User support request activity */     'separator' => '',
  /* support_ticket_activity */  /* User support request activity */     'empty_column' => 0,
  /* support_ticket_activity */  /* User support request activity */   ),
  /* support_ticket_activity */  /* User support request activity */   'timestamp_1' => array(
  /* support_ticket_activity */  /* User support request activity */     'sortable' => 1,
  /* support_ticket_activity */  /* User support request activity */     'default_sort_order' => 'asc',
  /* support_ticket_activity */  /* User support request activity */     'align' => '',
  /* support_ticket_activity */  /* User support request activity */     'separator' => '',
  /* support_ticket_activity */  /* User support request activity */     'empty_column' => 0,
  /* support_ticket_activity */  /* User support request activity */   ),
  /* support_ticket_activity */  /* User support request activity */   'timestamp' => array(
  /* support_ticket_activity */  /* User support request activity */     'sortable' => 1,
  /* support_ticket_activity */  /* User support request activity */     'default_sort_order' => 'desc',
  /* support_ticket_activity */  /* User support request activity */     'align' => 'views-align-left',
  /* support_ticket_activity */  /* User support request activity */     'separator' => '',
  /* support_ticket_activity */  /* User support request activity */     'empty_column' => 0,
  /* support_ticket_activity */  /* User support request activity */   ),
  /* support_ticket_activity */  /* User support request activity */   'field_support_priority' => array(
  /* support_ticket_activity */  /* User support request activity */     'sortable' => 1,
  /* support_ticket_activity */  /* User support request activity */     'default_sort_order' => 'asc',
  /* support_ticket_activity */  /* User support request activity */     'align' => '',
  /* support_ticket_activity */  /* User support request activity */     'separator' => '',
  /* support_ticket_activity */  /* User support request activity */     'empty_column' => 0,
  /* support_ticket_activity */  /* User support request activity */   ),
  /* support_ticket_activity */  /* User support request activity */   'field_support_status' => array(
  /* support_ticket_activity */  /* User support request activity */     'sortable' => 1,
  /* support_ticket_activity */  /* User support request activity */     'default_sort_order' => 'asc',
  /* support_ticket_activity */  /* User support request activity */     'align' => '',
  /* support_ticket_activity */  /* User support request activity */     'separator' => '',
  /* support_ticket_activity */  /* User support request activity */     'empty_column' => 0,
  /* support_ticket_activity */  /* User support request activity */   ),
  /* support_ticket_activity */  /* User support request activity */   'last_comment_timestamp' => array(
  /* support_ticket_activity */  /* User support request activity */     'sortable' => 1,
  /* support_ticket_activity */  /* User support request activity */     'default_sort_order' => 'asc',
  /* support_ticket_activity */  /* User support request activity */     'align' => '',
  /* support_ticket_activity */  /* User support request activity */     'separator' => '',
  /* support_ticket_activity */  /* User support request activity */     'empty_column' => 0,
  /* support_ticket_activity */  /* User support request activity */   ),
  /* support_ticket_activity */  /* User support request activity */   'last_comment_name' => array(
  /* support_ticket_activity */  /* User support request activity */     'sortable' => 0,
  /* support_ticket_activity */  /* User support request activity */     'default_sort_order' => 'asc',
  /* support_ticket_activity */  /* User support request activity */     'align' => '',
  /* support_ticket_activity */  /* User support request activity */     'separator' => '',
  /* support_ticket_activity */  /* User support request activity */     'empty_column' => 0,
  /* support_ticket_activity */  /* User support request activity */   ),
  /* support_ticket_activity */  /* User support request activity */   'comment_body' => array(
  /* support_ticket_activity */  /* User support request activity */     'sortable' => 0,
  /* support_ticket_activity */  /* User support request activity */     'default_sort_order' => 'asc',
  /* support_ticket_activity */  /* User support request activity */     'align' => '',
  /* support_ticket_activity */  /* User support request activity */     'separator' => '',
  /* support_ticket_activity */  /* User support request activity */     'empty_column' => 0,
  /* support_ticket_activity */  /* User support request activity */   ),
  /* support_ticket_activity */  /* User support request activity */ );
  /* support_ticket_activity */  /* User support request activity */ $handler->display->display_options['defaults']['style_options'] = FALSE;
  /* support_ticket_activity */  /* User support request activity */ $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  /* support_ticket_activity */  /* User support request activity */ $handler->display->display_options['defaults']['row_options'] = FALSE;
  /* support_ticket_activity */  /* User support request activity */ $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* support_ticket_activity */  /* User support request activity */ /* Relationship: Comment: Last Comment */
  /* support_ticket_activity */  /* User support request activity */ $handler->display->display_options['relationships']['cid']['id'] = 'cid';
  /* support_ticket_activity */  /* User support request activity */ $handler->display->display_options['relationships']['cid']['table'] = 'node_comment_statistics';
  /* support_ticket_activity */  /* User support request activity */ $handler->display->display_options['relationships']['cid']['field'] = 'cid';
  /* support_ticket_activity */  /* User support request activity */ $handler->display->display_options['defaults']['fields'] = FALSE;
  /* support_ticket_activity */  /* User support request activity */ /* Field: Content: Title */
  /* support_ticket_activity */  /* User support request activity */ $handler->display->display_options['fields']['title']['id'] = 'title';
  /* support_ticket_activity */  /* User support request activity */ $handler->display->display_options['fields']['title']['table'] = 'node';
  /* support_ticket_activity */  /* User support request activity */ $handler->display->display_options['fields']['title']['field'] = 'title';
  /* support_ticket_activity */  /* User support request activity */ /* Field: Field Tracker: Creation Date */
  /* support_ticket_activity */  /* User support request activity */ $handler->display->display_options['fields']['timestamp_1']['id'] = 'timestamp_1';
  /* support_ticket_activity */  /* User support request activity */ $handler->display->display_options['fields']['timestamp_1']['table'] = 'track_field_changes_audit';
  /* support_ticket_activity */  /* User support request activity */ $handler->display->display_options['fields']['timestamp_1']['field'] = 'timestamp';
  /* support_ticket_activity */  /* User support request activity */ $handler->display->display_options['fields']['timestamp_1']['label'] = 'Opened';
  /* support_ticket_activity */  /* User support request activity */ $handler->display->display_options['fields']['timestamp_1']['date_format'] = 'date_format_military_with_time';
  /* support_ticket_activity */  /* User support request activity */ $handler->display->display_options['fields']['timestamp_1']['second_date_format'] = 'date_format_globalnet_date';
  /* support_ticket_activity */  /* User support request activity */ /* Field: Field Tracker: Creation Date */
  /* support_ticket_activity */  /* User support request activity */ $handler->display->display_options['fields']['timestamp']['id'] = 'timestamp';
  /* support_ticket_activity */  /* User support request activity */ $handler->display->display_options['fields']['timestamp']['table'] = 'track_field_changes_audit';
  /* support_ticket_activity */  /* User support request activity */ $handler->display->display_options['fields']['timestamp']['field'] = 'timestamp';
  /* support_ticket_activity */  /* User support request activity */ $handler->display->display_options['fields']['timestamp']['label'] = 'Last Update';
  /* support_ticket_activity */  /* User support request activity */ $handler->display->display_options['fields']['timestamp']['date_format'] = 'date_format_military_with_time';
  /* support_ticket_activity */  /* User support request activity */ $handler->display->display_options['fields']['timestamp']['second_date_format'] = 'date_format_globalnet_date';
  /* support_ticket_activity */  /* User support request activity */ /* Field: Content: Priority */
  /* support_ticket_activity */  /* User support request activity */ $handler->display->display_options['fields']['field_support_priority']['id'] = 'field_support_priority';
  /* support_ticket_activity */  /* User support request activity */ $handler->display->display_options['fields']['field_support_priority']['table'] = 'field_data_field_support_priority';
  /* support_ticket_activity */  /* User support request activity */ $handler->display->display_options['fields']['field_support_priority']['field'] = 'field_support_priority';
  /* support_ticket_activity */  /* User support request activity */ $handler->display->display_options['fields']['field_support_priority']['element_type'] = '0';
  /* support_ticket_activity */  /* User support request activity */ $handler->display->display_options['fields']['field_support_priority']['element_label_colon'] = FALSE;
  /* support_ticket_activity */  /* User support request activity */ $handler->display->display_options['fields']['field_support_priority']['element_wrapper_type'] = '0';
  /* support_ticket_activity */  /* User support request activity */ $handler->display->display_options['fields']['field_support_priority']['element_default_classes'] = FALSE;
  /* support_ticket_activity */  /* User support request activity */ $handler->display->display_options['fields']['field_support_priority']['settings'] = array(
  /* support_ticket_activity */  /* User support request activity */   'field_formatter_class' => '',
  /* support_ticket_activity */  /* User support request activity */ );
  /* support_ticket_activity */  /* User support request activity */ $handler->display->display_options['fields']['field_support_priority']['field_api_classes'] = TRUE;
  /* support_ticket_activity */  /* User support request activity */ /* Field: Content: Status */
  /* support_ticket_activity */  /* User support request activity */ $handler->display->display_options['fields']['field_support_status']['id'] = 'field_support_status';
  /* support_ticket_activity */  /* User support request activity */ $handler->display->display_options['fields']['field_support_status']['table'] = 'field_data_field_support_status';
  /* support_ticket_activity */  /* User support request activity */ $handler->display->display_options['fields']['field_support_status']['field'] = 'field_support_status';
  /* support_ticket_activity */  /* User support request activity */ $handler->display->display_options['fields']['field_support_status']['element_type'] = '0';
  /* support_ticket_activity */  /* User support request activity */ $handler->display->display_options['fields']['field_support_status']['element_label_colon'] = FALSE;
  /* support_ticket_activity */  /* User support request activity */ $handler->display->display_options['fields']['field_support_status']['element_wrapper_type'] = '0';
  /* support_ticket_activity */  /* User support request activity */ $handler->display->display_options['fields']['field_support_status']['element_default_classes'] = FALSE;
  /* support_ticket_activity */  /* User support request activity */ $handler->display->display_options['fields']['field_support_status']['settings'] = array(
  /* support_ticket_activity */  /* User support request activity */   'field_formatter_class' => '',
  /* support_ticket_activity */  /* User support request activity */ );
  /* support_ticket_activity */  /* User support request activity */ $handler->display->display_options['fields']['field_support_status']['field_api_classes'] = TRUE;
  /* support_ticket_activity */  /* User support request activity */ /* Field: Content: Last comment time */
  /* support_ticket_activity */  /* User support request activity */ $handler->display->display_options['fields']['last_comment_timestamp']['id'] = 'last_comment_timestamp';
  /* support_ticket_activity */  /* User support request activity */ $handler->display->display_options['fields']['last_comment_timestamp']['table'] = 'node_comment_statistics';
  /* support_ticket_activity */  /* User support request activity */ $handler->display->display_options['fields']['last_comment_timestamp']['field'] = 'last_comment_timestamp';
  /* support_ticket_activity */  /* User support request activity */ $handler->display->display_options['fields']['last_comment_timestamp']['date_format'] = 'date_format_globalnet_date';
  /* support_ticket_activity */  /* User support request activity */ $handler->display->display_options['fields']['last_comment_timestamp']['second_date_format'] = 'date_format_globalnet_date';
  /* support_ticket_activity */  /* User support request activity */ /* Field: Content: Last comment author */
  /* support_ticket_activity */  /* User support request activity */ $handler->display->display_options['fields']['last_comment_name']['id'] = 'last_comment_name';
  /* support_ticket_activity */  /* User support request activity */ $handler->display->display_options['fields']['last_comment_name']['table'] = 'node_comment_statistics';
  /* support_ticket_activity */  /* User support request activity */ $handler->display->display_options['fields']['last_comment_name']['field'] = 'last_comment_name';
  /* support_ticket_activity */  /* User support request activity */ /* Field: Comment: Comment */
  /* support_ticket_activity */  /* User support request activity */ $handler->display->display_options['fields']['comment_body']['id'] = 'comment_body';
  /* support_ticket_activity */  /* User support request activity */ $handler->display->display_options['fields']['comment_body']['table'] = 'field_data_comment_body';
  /* support_ticket_activity */  /* User support request activity */ $handler->display->display_options['fields']['comment_body']['field'] = 'comment_body';
  /* support_ticket_activity */  /* User support request activity */ $handler->display->display_options['fields']['comment_body']['relationship'] = 'cid';
  /* support_ticket_activity */  /* User support request activity */ $handler->display->display_options['fields']['comment_body']['element_type'] = '0';
  /* support_ticket_activity */  /* User support request activity */ $handler->display->display_options['fields']['comment_body']['element_label_colon'] = FALSE;
  /* support_ticket_activity */  /* User support request activity */ $handler->display->display_options['fields']['comment_body']['element_wrapper_type'] = '0';
  /* support_ticket_activity */  /* User support request activity */ $handler->display->display_options['fields']['comment_body']['element_default_classes'] = FALSE;
  /* support_ticket_activity */  /* User support request activity */ $handler->display->display_options['fields']['comment_body']['settings'] = array(
  /* support_ticket_activity */  /* User support request activity */   'field_formatter_class' => '',
  /* support_ticket_activity */  /* User support request activity */ );
  /* support_ticket_activity */  /* User support request activity */ $handler->display->display_options['fields']['comment_body']['field_api_classes'] = TRUE;
  /* support_ticket_activity */  /* User support request activity */ $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* support_ticket_activity */  /* User support request activity */ /* Contextual filter: Content: Author uid */
  /* support_ticket_activity */  /* User support request activity */ $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  /* support_ticket_activity */  /* User support request activity */ $handler->display->display_options['arguments']['uid']['table'] = 'node';
  /* support_ticket_activity */  /* User support request activity */ $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  /* support_ticket_activity */  /* User support request activity */ $handler->display->display_options['arguments']['uid']['default_action'] = 'default';
  /* support_ticket_activity */  /* User support request activity */ $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'current_user';
  /* support_ticket_activity */  /* User support request activity */ $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  /* support_ticket_activity */  /* User support request activity */ $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  /* support_ticket_activity */  /* User support request activity */ $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  /* support_ticket_activity */ $translatables['support_ticket_activity'] = array(
  /* support_ticket_activity */   t('Master'),
  /* support_ticket_activity */   t('Support Ticket Activity'),
  /* support_ticket_activity */   t('more'),
  /* support_ticket_activity */   t('Apply'),
  /* support_ticket_activity */   t('Reset'),
  /* support_ticket_activity */   t('Sort by'),
  /* support_ticket_activity */   t('Asc'),
  /* support_ticket_activity */   t('Desc'),
  /* support_ticket_activity */   t('Date/Time of Change'),
  /* support_ticket_activity */   t('Field Name'),
  /* support_ticket_activity */   t('Log message'),
  /* support_ticket_activity */   t('Value Before'),
  /* support_ticket_activity */   t('Value After'),
  /* support_ticket_activity */   t('User'),
  /* support_ticket_activity */   t('All'),
  /* support_ticket_activity */   t('Page'),
  /* support_ticket_activity */   t('User support request activity'),
  /* support_ticket_activity */   t('Support Updates'),
  /* support_ticket_activity */   t('Last Comment'),
  /* support_ticket_activity */   t('Title'),
  /* support_ticket_activity */   t('Opened'),
  /* support_ticket_activity */   t('Last Update'),
  /* support_ticket_activity */   t('Priority'),
  /* support_ticket_activity */   t('Status'),
  /* support_ticket_activity */   t('Last comment time'),
  /* support_ticket_activity */   t('Last comment author'),
  /* support_ticket_activity */   t('Comment'),
  /* support_ticket_activity */   t('View panes'),
  /* support_ticket_activity */ );
  $export['support_ticket_activity'] = $view;

  return $export;
}
