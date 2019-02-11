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

  $view = new view();
  $view->name = 'support';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Support';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Support';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    9 => '9',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Go';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['expose_sort_order'] = FALSE;
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'input_required' => 0,
      'text_input_required' => array(
        'text_input_required' => array(
          'value' => 'Select any filter and click on Apply to see results',
          'format' => 'filtered_html',
        ),
      ),
      'allow_secondary' => 0,
      'secondary_label' => 'Advanced options',
      'secondary_collapse_override' => '0',
    ),
    'combine' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'autosubmit' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
    'field_support_priority_value' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'bef_select_all_none' => 0,
        'bef_collapsible' => 0,
        'autosubmit' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
    'field_support_status_value' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'bef_select_all_none' => 0,
        'bef_collapsible' => 0,
        'autosubmit' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
    'field_support_resolution_value' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'bef_select_all_none' => 0,
        'bef_collapsible' => 0,
        'autosubmit' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
    'field_support_owner_target_id' => array(
      'bef_format' => 'default',
      'slider_options' => array(
        'bef_slider_min' => '0',
        'bef_slider_max' => '99999',
        'bef_slider_step' => '1',
        'bef_slider_animate' => '',
        'bef_slider_orientation' => 'horizontal',
      ),
      'more_options' => array(
        'autosubmit' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
    'created' => array(
      'bef_format' => 'bef_datepicker',
      'more_options' => array(
        'autosubmit' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
        'datepicker_options' => '',
      ),
    ),
    'changed' => array(
      'bef_format' => 'bef_datepicker',
      'more_options' => array(
        'autosubmit' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
        'datepicker_options' => '',
      ),
    ),
  );
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '100';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'created' => 'created',
    'changed' => 'changed',
    'field_name_last' => 'field_name_last',
    'field_name_first' => 'field_name_first',
    'field_telephone_number' => 'field_telephone_number',
    'field_email_address' => 'field_email_address',
    'field_description' => 'field_description',
    'field_support_status' => 'field_support_status',
    'field_support_priority' => 'field_support_priority',
    'field_support_owner' => 'field_support_owner',
    'field_support_resolution' => 'field_support_resolution',
  );
  $handler->display->display_options['style_options']['default'] = 'created';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => 'views-align-left',
      'separator' => '',
      'empty_column' => 0,
    ),
    'created' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => 'views-align-left',
      'separator' => '',
      'empty_column' => 0,
    ),
    'changed' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_name_last' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_name_first' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_telephone_number' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_email_address' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_description' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => 'views-align-left',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_support_status' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => 'views-align-left',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_support_priority' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => 'views-align-left',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_support_owner' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_support_resolution' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['caption'] = 'Manager\'s Support Ticket List';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_parent_organization_target_id']['id'] = 'field_parent_organization_target_id';
  $handler->display->display_options['relationships']['field_parent_organization_target_id']['table'] = 'field_data_field_parent_organization';
  $handler->display->display_options['relationships']['field_parent_organization_target_id']['field'] = 'field_parent_organization_target_id';
  $handler->display->display_options['relationships']['field_parent_organization_target_id']['label'] = 'field_parent_organization';
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Field: Content: Priority */
  $handler->display->display_options['fields']['field_support_priority']['id'] = 'field_support_priority';
  $handler->display->display_options['fields']['field_support_priority']['table'] = 'field_data_field_support_priority';
  $handler->display->display_options['fields']['field_support_priority']['field'] = 'field_support_priority';
  $handler->display->display_options['fields']['field_support_priority']['element_type'] = '0';
  $handler->display->display_options['fields']['field_support_priority']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_support_priority']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_support_priority']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_support_priority']['settings'] = array(
    'field_formatter_class' => '',
  );
  $handler->display->display_options['fields']['field_support_priority']['field_api_classes'] = TRUE;
  /* Field: Content: Status */
  $handler->display->display_options['fields']['field_support_status']['id'] = 'field_support_status';
  $handler->display->display_options['fields']['field_support_status']['table'] = 'field_data_field_support_status';
  $handler->display->display_options['fields']['field_support_status']['field'] = 'field_support_status';
  $handler->display->display_options['fields']['field_support_status']['element_type'] = '0';
  $handler->display->display_options['fields']['field_support_status']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_support_status']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_support_status']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_support_status']['settings'] = array(
    'field_formatter_class' => '',
  );
  $handler->display->display_options['fields']['field_support_status']['field_api_classes'] = TRUE;
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = 'Created';
  $handler->display->display_options['fields']['created']['date_format'] = 'custom';
  $handler->display->display_options['fields']['created']['custom_date_format'] = 'n/j/Y H:i';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'date_format_globalnet_date';
  /* Field: Content: Updated date */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'node';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['label'] = 'Updated';
  $handler->display->display_options['fields']['changed']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['changed']['date_format'] = 'custom';
  $handler->display->display_options['fields']['changed']['custom_date_format'] = 'n/j/Y H:i';
  $handler->display->display_options['fields']['changed']['second_date_format'] = 'date_format_globalnet_date';
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['exclude'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Ticket ID';
  $handler->display->display_options['fields']['title']['alter']['text'] = '<a href="/[title]/edit">[title]</a> ';
  $handler->display->display_options['fields']['title']['alter']['path'] = '[edit_node] ';
  $handler->display->display_options['fields']['title']['alter']['alt'] = '[title]';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name_1']['id'] = 'name_1';
  $handler->display->display_options['fields']['name_1']['table'] = 'users';
  $handler->display->display_options['fields']['name_1']['field'] = 'name';
  $handler->display->display_options['fields']['name_1']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name_1']['label'] = 'Username';
  /* Field: Field: Family Name */
  $handler->display->display_options['fields']['field_name_last']['id'] = 'field_name_last';
  $handler->display->display_options['fields']['field_name_last']['table'] = 'field_data_field_name_last';
  $handler->display->display_options['fields']['field_name_last']['field'] = 'field_name_last';
  $handler->display->display_options['fields']['field_name_last']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_name_last']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_name_last']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_name_last']['type'] = 'text_plain';
  $handler->display->display_options['fields']['field_name_last']['settings'] = array(
    'field_formatter_class' => '',
  );
  /* Field: Field: Given Name */
  $handler->display->display_options['fields']['field_name_first']['id'] = 'field_name_first';
  $handler->display->display_options['fields']['field_name_first']['table'] = 'field_data_field_name_first';
  $handler->display->display_options['fields']['field_name_first']['field'] = 'field_name_first';
  $handler->display->display_options['fields']['field_name_first']['label'] = 'Name';
  $handler->display->display_options['fields']['field_name_first']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_name_first']['alter']['text'] = '[field_name_first] [field_name_last]';
  $handler->display->display_options['fields']['field_name_first']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_name_first']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_name_first']['type'] = 'text_plain';
  $handler->display->display_options['fields']['field_name_first']['settings'] = array(
    'field_formatter_class' => '',
  );
  /* Field: Field: Telephone Number */
  $handler->display->display_options['fields']['field_telephone_number']['id'] = 'field_telephone_number';
  $handler->display->display_options['fields']['field_telephone_number']['table'] = 'field_data_field_telephone_number';
  $handler->display->display_options['fields']['field_telephone_number']['field'] = 'field_telephone_number';
  $handler->display->display_options['fields']['field_telephone_number']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_telephone_number']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_telephone_number']['alter']['text'] = '- [field_telephone_number]';
  $handler->display->display_options['fields']['field_telephone_number']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_telephone_number']['type'] = 'text_plain';
  $handler->display->display_options['fields']['field_telephone_number']['settings'] = array(
    'field_formatter_class' => '',
  );
  $handler->display->display_options['fields']['field_telephone_number']['field_api_classes'] = TRUE;
  /* Field: Field: Email Address */
  $handler->display->display_options['fields']['field_email_address']['id'] = 'field_email_address';
  $handler->display->display_options['fields']['field_email_address']['table'] = 'field_data_field_email_address';
  $handler->display->display_options['fields']['field_email_address']['field'] = 'field_email_address';
  $handler->display->display_options['fields']['field_email_address']['label'] = 'Contact';
  $handler->display->display_options['fields']['field_email_address']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_email_address']['alter']['text'] = '[field_email_address]  [field_telephone_number]';
  $handler->display->display_options['fields']['field_email_address']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_email_address']['settings'] = array(
    'field_formatter_class' => '',
  );
  $handler->display->display_options['fields']['field_email_address']['field_api_classes'] = TRUE;
  /* Field: Field: Description */
  $handler->display->display_options['fields']['field_description']['id'] = 'field_description';
  $handler->display->display_options['fields']['field_description']['table'] = 'field_data_field_description';
  $handler->display->display_options['fields']['field_description']['field'] = 'field_description';
  $handler->display->display_options['fields']['field_description']['element_type'] = '0';
  $handler->display->display_options['fields']['field_description']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_description']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_description']['type'] = 'text_plain';
  $handler->display->display_options['fields']['field_description']['settings'] = array(
    'field_formatter_class' => '',
  );
  $handler->display->display_options['fields']['field_description']['field_api_classes'] = TRUE;
  /* Field: Content: Org Short Title */
  $handler->display->display_options['fields']['field_org_short_title']['id'] = 'field_org_short_title';
  $handler->display->display_options['fields']['field_org_short_title']['table'] = 'field_data_field_org_short_title';
  $handler->display->display_options['fields']['field_org_short_title']['field'] = 'field_org_short_title';
  $handler->display->display_options['fields']['field_org_short_title']['relationship'] = 'field_parent_organization_target_id';
  $handler->display->display_options['fields']['field_org_short_title']['label'] = 'Org';
  $handler->display->display_options['fields']['field_org_short_title']['element_type'] = '0';
  $handler->display->display_options['fields']['field_org_short_title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_org_short_title']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_org_short_title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_org_short_title']['settings'] = array(
    'field_formatter_class' => '',
  );
  $handler->display->display_options['fields']['field_org_short_title']['field_api_classes'] = TRUE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['sorts']['created']['expose']['label'] = 'Post date';
  /* Sort criterion: Content: Updated date */
  $handler->display->display_options['sorts']['changed']['id'] = 'changed';
  $handler->display->display_options['sorts']['changed']['table'] = 'node';
  $handler->display->display_options['sorts']['changed']['field'] = 'changed';
  $handler->display->display_options['sorts']['changed']['order'] = 'DESC';
  $handler->display->display_options['sorts']['changed']['expose']['label'] = 'Updated date';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'support' => 'support',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Org Short Title (field_org_short_title) */
  $handler->display->display_options['filters']['field_org_short_title_value']['id'] = 'field_org_short_title_value';
  $handler->display->display_options['filters']['field_org_short_title_value']['table'] = 'field_data_field_org_short_title';
  $handler->display->display_options['filters']['field_org_short_title_value']['field'] = 'field_org_short_title_value';
  $handler->display->display_options['filters']['field_org_short_title_value']['relationship'] = 'field_parent_organization_target_id';
  $handler->display->display_options['filters']['field_org_short_title_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_org_short_title_value']['group'] = 1;
  $handler->display->display_options['filters']['field_org_short_title_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_org_short_title_value']['expose']['operator_id'] = 'field_org_short_title_value_op';
  $handler->display->display_options['filters']['field_org_short_title_value']['expose']['label'] = 'Partner org';
  $handler->display->display_options['filters']['field_org_short_title_value']['expose']['operator'] = 'field_org_short_title_value_op';
  $handler->display->display_options['filters']['field_org_short_title_value']['expose']['identifier'] = 'field_org_short_title_value';
  $handler->display->display_options['filters']['field_org_short_title_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    9 => 0,
    10 => 0,
  );
  $handler->display->display_options['filters']['field_org_short_title_value']['expose']['autocomplete_filter'] = 1;
  $handler->display->display_options['filters']['field_org_short_title_value']['expose']['autocomplete_items'] = '10';
  $handler->display->display_options['filters']['field_org_short_title_value']['expose']['autocomplete_min_chars'] = '0';
  $handler->display->display_options['filters']['field_org_short_title_value']['expose']['autocomplete_field'] = 'field_org_short_title';
  $handler->display->display_options['filters']['field_org_short_title_value']['expose']['autocomplete_raw_suggestion'] = 1;
  $handler->display->display_options['filters']['field_org_short_title_value']['expose']['autocomplete_raw_dropdown'] = 1;
  $handler->display->display_options['filters']['field_org_short_title_value']['expose']['autocomplete_dependent'] = 0;
  /* Filter criterion: Content: Priority (field_support_priority) */
  $handler->display->display_options['filters']['field_support_priority_value']['id'] = 'field_support_priority_value';
  $handler->display->display_options['filters']['field_support_priority_value']['table'] = 'field_data_field_support_priority';
  $handler->display->display_options['filters']['field_support_priority_value']['field'] = 'field_support_priority_value';
  $handler->display->display_options['filters']['field_support_priority_value']['group'] = 1;
  $handler->display->display_options['filters']['field_support_priority_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_support_priority_value']['expose']['operator_id'] = 'field_support_priority_value_op';
  $handler->display->display_options['filters']['field_support_priority_value']['expose']['label'] = 'Priority';
  $handler->display->display_options['filters']['field_support_priority_value']['expose']['operator'] = 'field_support_priority_value_op';
  $handler->display->display_options['filters']['field_support_priority_value']['expose']['identifier'] = 'field_support_priority_value';
  $handler->display->display_options['filters']['field_support_priority_value']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_support_priority_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    9 => 0,
    10 => 0,
    11 => 0,
  );
  /* Filter criterion: Content: Status (field_support_status) */
  $handler->display->display_options['filters']['field_support_status_value']['id'] = 'field_support_status_value';
  $handler->display->display_options['filters']['field_support_status_value']['table'] = 'field_data_field_support_status';
  $handler->display->display_options['filters']['field_support_status_value']['field'] = 'field_support_status_value';
  $handler->display->display_options['filters']['field_support_status_value']['group'] = 1;
  $handler->display->display_options['filters']['field_support_status_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_support_status_value']['expose']['operator_id'] = 'field_support_status_value_op';
  $handler->display->display_options['filters']['field_support_status_value']['expose']['label'] = 'Status';
  $handler->display->display_options['filters']['field_support_status_value']['expose']['operator'] = 'field_support_status_value_op';
  $handler->display->display_options['filters']['field_support_status_value']['expose']['identifier'] = 'field_support_status_value';
  $handler->display->display_options['filters']['field_support_status_value']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_support_status_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    9 => 0,
    10 => 0,
    11 => 0,
  );
  /* Filter criterion: Content: Post date */
  $handler->display->display_options['filters']['created']['id'] = 'created';
  $handler->display->display_options['filters']['created']['table'] = 'node';
  $handler->display->display_options['filters']['created']['field'] = 'created';
  $handler->display->display_options['filters']['created']['operator'] = 'between';
  $handler->display->display_options['filters']['created']['group'] = 1;
  $handler->display->display_options['filters']['created']['exposed'] = TRUE;
  $handler->display->display_options['filters']['created']['expose']['operator_id'] = 'created_op';
  $handler->display->display_options['filters']['created']['expose']['label'] = 'Date Created';
  $handler->display->display_options['filters']['created']['expose']['operator'] = 'created_op';
  $handler->display->display_options['filters']['created']['expose']['identifier'] = 'created';
  $handler->display->display_options['filters']['created']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    9 => 0,
    10 => 0,
    11 => 0,
  );
  /* Filter criterion: Content: Updated date */
  $handler->display->display_options['filters']['changed']['id'] = 'changed';
  $handler->display->display_options['filters']['changed']['table'] = 'node';
  $handler->display->display_options['filters']['changed']['field'] = 'changed';
  $handler->display->display_options['filters']['changed']['operator'] = 'between';
  $handler->display->display_options['filters']['changed']['group'] = 1;
  $handler->display->display_options['filters']['changed']['exposed'] = TRUE;
  $handler->display->display_options['filters']['changed']['expose']['operator_id'] = 'changed_op';
  $handler->display->display_options['filters']['changed']['expose']['label'] = 'Date Updated';
  $handler->display->display_options['filters']['changed']['expose']['operator'] = 'changed_op';
  $handler->display->display_options['filters']['changed']['expose']['identifier'] = 'changed';
  $handler->display->display_options['filters']['changed']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    9 => 0,
    10 => 0,
    11 => 0,
  );

  /* Display: Admin - Support */
  $handler = $view->new_display('page', 'Admin - Support', 'page');
  $handler->display->display_options['path'] = 'admin/manage/support';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Support';
  $handler->display->display_options['menu']['weight'] = '10';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Thanks - Support */
  $handler = $view->new_display('page', 'Thanks - Support', 'page_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<h2>Thank you. Your request for technical support has been submitted.</h2>
<a href="/guide/Search/40952">Learn more about our support process</a><br/><br/>
Track your request here: [title]<br/>
<strong>Note:</strong> You can also track your support requests in the "Support" tab in your "My Globalnet" section.
';
  $handler->display->display_options['header']['area']['format'] = 'filtered_html';
  $handler->display->display_options['header']['area']['tokenize'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = '[title]';
  $handler->display->display_options['fields']['title']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_class'] = 'hide';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'support' => 'support',
  );
  $handler->display->display_options['path'] = 'support/thanks';

  /* Display: Organization - Support */
  $handler = $view->new_display('page', 'Organization - Support', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Support Desk';
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'gn2_og_any_hr_manager_access';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Ticket ID';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = 'Created';
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'custom';
  $handler->display->display_options['fields']['created']['custom_date_format'] = 'n/j/Y H:i';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'date_format_globalnet_date';
  /* Field: Content: Updated date */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'node';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['label'] = 'Updated';
  $handler->display->display_options['fields']['changed']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['changed']['date_format'] = 'custom';
  $handler->display->display_options['fields']['changed']['custom_date_format'] = 'n/j/Y H:i';
  $handler->display->display_options['fields']['changed']['second_date_format'] = 'date_format_globalnet_date';
  /* Field: Field: Family Name */
  $handler->display->display_options['fields']['field_name_last']['id'] = 'field_name_last';
  $handler->display->display_options['fields']['field_name_last']['table'] = 'field_data_field_name_last';
  $handler->display->display_options['fields']['field_name_last']['field'] = 'field_name_last';
  $handler->display->display_options['fields']['field_name_last']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_name_last']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_name_last']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_name_last']['type'] = 'text_plain';
  $handler->display->display_options['fields']['field_name_last']['settings'] = array(
    'field_formatter_class' => '',
  );
  /* Field: Field: Given Name */
  $handler->display->display_options['fields']['field_name_first']['id'] = 'field_name_first';
  $handler->display->display_options['fields']['field_name_first']['table'] = 'field_data_field_name_first';
  $handler->display->display_options['fields']['field_name_first']['field'] = 'field_name_first';
  $handler->display->display_options['fields']['field_name_first']['label'] = 'Name';
  $handler->display->display_options['fields']['field_name_first']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_name_first']['alter']['text'] = '[field_name_first] [field_name_last]';
  $handler->display->display_options['fields']['field_name_first']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_name_first']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_name_first']['type'] = 'text_plain';
  $handler->display->display_options['fields']['field_name_first']['settings'] = array(
    'field_formatter_class' => '',
  );
  /* Field: Field: Telephone Number */
  $handler->display->display_options['fields']['field_telephone_number']['id'] = 'field_telephone_number';
  $handler->display->display_options['fields']['field_telephone_number']['table'] = 'field_data_field_telephone_number';
  $handler->display->display_options['fields']['field_telephone_number']['field'] = 'field_telephone_number';
  $handler->display->display_options['fields']['field_telephone_number']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_telephone_number']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_telephone_number']['alter']['text'] = '- [field_telephone_number]';
  $handler->display->display_options['fields']['field_telephone_number']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_telephone_number']['type'] = 'text_plain';
  $handler->display->display_options['fields']['field_telephone_number']['settings'] = array(
    'field_formatter_class' => '',
  );
  $handler->display->display_options['fields']['field_telephone_number']['field_api_classes'] = TRUE;
  /* Field: Field: Email Address */
  $handler->display->display_options['fields']['field_email_address']['id'] = 'field_email_address';
  $handler->display->display_options['fields']['field_email_address']['table'] = 'field_data_field_email_address';
  $handler->display->display_options['fields']['field_email_address']['field'] = 'field_email_address';
  $handler->display->display_options['fields']['field_email_address']['label'] = 'Contact';
  $handler->display->display_options['fields']['field_email_address']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_email_address']['alter']['text'] = '[field_email_address]  [field_telephone_number]';
  $handler->display->display_options['fields']['field_email_address']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_email_address']['settings'] = array(
    'field_formatter_class' => '',
  );
  $handler->display->display_options['fields']['field_email_address']['field_api_classes'] = TRUE;
  /* Field: Field: Description */
  $handler->display->display_options['fields']['field_description']['id'] = 'field_description';
  $handler->display->display_options['fields']['field_description']['table'] = 'field_data_field_description';
  $handler->display->display_options['fields']['field_description']['field'] = 'field_description';
  $handler->display->display_options['fields']['field_description']['element_type'] = '0';
  $handler->display->display_options['fields']['field_description']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_description']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_description']['type'] = 'text_plain';
  $handler->display->display_options['fields']['field_description']['settings'] = array(
    'field_formatter_class' => '',
  );
  $handler->display->display_options['fields']['field_description']['field_api_classes'] = TRUE;
  /* Field: Content: Status */
  $handler->display->display_options['fields']['field_support_status']['id'] = 'field_support_status';
  $handler->display->display_options['fields']['field_support_status']['table'] = 'field_data_field_support_status';
  $handler->display->display_options['fields']['field_support_status']['field'] = 'field_support_status';
  $handler->display->display_options['fields']['field_support_status']['element_type'] = '0';
  $handler->display->display_options['fields']['field_support_status']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_support_status']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_support_status']['settings'] = array(
    'field_formatter_class' => '',
  );
  $handler->display->display_options['fields']['field_support_status']['field_api_classes'] = TRUE;
  /* Field: Content: Priority */
  $handler->display->display_options['fields']['field_support_priority']['id'] = 'field_support_priority';
  $handler->display->display_options['fields']['field_support_priority']['table'] = 'field_data_field_support_priority';
  $handler->display->display_options['fields']['field_support_priority']['field'] = 'field_support_priority';
  $handler->display->display_options['fields']['field_support_priority']['element_type'] = '0';
  $handler->display->display_options['fields']['field_support_priority']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_support_priority']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_support_priority']['settings'] = array(
    'field_formatter_class' => '',
  );
  $handler->display->display_options['fields']['field_support_priority']['field_api_classes'] = TRUE;
  /* Field: Content: Owner */
  $handler->display->display_options['fields']['field_support_owner']['id'] = 'field_support_owner';
  $handler->display->display_options['fields']['field_support_owner']['table'] = 'field_data_field_support_owner';
  $handler->display->display_options['fields']['field_support_owner']['field'] = 'field_support_owner';
  $handler->display->display_options['fields']['field_support_owner']['element_type'] = '0';
  $handler->display->display_options['fields']['field_support_owner']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_support_owner']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_support_owner']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_support_owner']['settings'] = array(
    'link' => 0,
    'field_formatter_class' => '',
  );
  $handler->display->display_options['fields']['field_support_owner']['field_api_classes'] = TRUE;
  /* Field: Content: Resolution */
  $handler->display->display_options['fields']['field_support_resolution']['id'] = 'field_support_resolution';
  $handler->display->display_options['fields']['field_support_resolution']['table'] = 'field_data_field_support_resolution';
  $handler->display->display_options['fields']['field_support_resolution']['field'] = 'field_support_resolution';
  $handler->display->display_options['fields']['field_support_resolution']['element_type'] = '0';
  $handler->display->display_options['fields']['field_support_resolution']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_support_resolution']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_support_resolution']['settings'] = array(
    'field_formatter_class' => '',
  );
  $handler->display->display_options['fields']['field_support_resolution']['field_api_classes'] = TRUE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'field_parent_organization_target_id';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'support' => 'support',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Global: Combine fields filter */
  $handler->display->display_options['filters']['combine']['id'] = 'combine';
  $handler->display->display_options['filters']['combine']['table'] = 'views';
  $handler->display->display_options['filters']['combine']['field'] = 'combine';
  $handler->display->display_options['filters']['combine']['operator'] = 'word';
  $handler->display->display_options['filters']['combine']['group'] = 1;
  $handler->display->display_options['filters']['combine']['exposed'] = TRUE;
  $handler->display->display_options['filters']['combine']['expose']['operator_id'] = 'combine_op';
  $handler->display->display_options['filters']['combine']['expose']['label'] = 'Search';
  $handler->display->display_options['filters']['combine']['expose']['operator'] = 'combine_op';
  $handler->display->display_options['filters']['combine']['expose']['identifier'] = 'combine';
  $handler->display->display_options['filters']['combine']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    9 => 0,
    10 => 0,
  );
  $handler->display->display_options['filters']['combine']['expose']['autocomplete_items'] = '10';
  $handler->display->display_options['filters']['combine']['expose']['autocomplete_min_chars'] = '0';
  $handler->display->display_options['filters']['combine']['expose']['autocomplete_raw_suggestion'] = 1;
  $handler->display->display_options['filters']['combine']['expose']['autocomplete_raw_dropdown'] = 1;
  $handler->display->display_options['filters']['combine']['expose']['autocomplete_dependent'] = 0;
  $handler->display->display_options['filters']['combine']['fields'] = array(
    'field_name_last' => 'field_name_last',
    'field_name_first' => 'field_name_first',
    'field_description' => 'field_description',
  );
  /* Filter criterion: Content: Priority (field_support_priority) */
  $handler->display->display_options['filters']['field_support_priority_value']['id'] = 'field_support_priority_value';
  $handler->display->display_options['filters']['field_support_priority_value']['table'] = 'field_data_field_support_priority';
  $handler->display->display_options['filters']['field_support_priority_value']['field'] = 'field_support_priority_value';
  $handler->display->display_options['filters']['field_support_priority_value']['group'] = 1;
  $handler->display->display_options['filters']['field_support_priority_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_support_priority_value']['expose']['operator_id'] = 'field_support_priority_value_op';
  $handler->display->display_options['filters']['field_support_priority_value']['expose']['label'] = 'Priority';
  $handler->display->display_options['filters']['field_support_priority_value']['expose']['operator'] = 'field_support_priority_value_op';
  $handler->display->display_options['filters']['field_support_priority_value']['expose']['identifier'] = 'field_support_priority_value';
  $handler->display->display_options['filters']['field_support_priority_value']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_support_priority_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    9 => 0,
    10 => 0,
  );
  /* Filter criterion: Content: Status (field_support_status) */
  $handler->display->display_options['filters']['field_support_status_value']['id'] = 'field_support_status_value';
  $handler->display->display_options['filters']['field_support_status_value']['table'] = 'field_data_field_support_status';
  $handler->display->display_options['filters']['field_support_status_value']['field'] = 'field_support_status_value';
  $handler->display->display_options['filters']['field_support_status_value']['group'] = 1;
  $handler->display->display_options['filters']['field_support_status_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_support_status_value']['expose']['operator_id'] = 'field_support_status_value_op';
  $handler->display->display_options['filters']['field_support_status_value']['expose']['label'] = 'Status';
  $handler->display->display_options['filters']['field_support_status_value']['expose']['operator'] = 'field_support_status_value_op';
  $handler->display->display_options['filters']['field_support_status_value']['expose']['identifier'] = 'field_support_status_value';
  $handler->display->display_options['filters']['field_support_status_value']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_support_status_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    9 => 0,
    10 => 0,
  );
  /* Filter criterion: Content: Resolution (field_support_resolution) */
  $handler->display->display_options['filters']['field_support_resolution_value']['id'] = 'field_support_resolution_value';
  $handler->display->display_options['filters']['field_support_resolution_value']['table'] = 'field_data_field_support_resolution';
  $handler->display->display_options['filters']['field_support_resolution_value']['field'] = 'field_support_resolution_value';
  $handler->display->display_options['filters']['field_support_resolution_value']['group'] = 1;
  $handler->display->display_options['filters']['field_support_resolution_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_support_resolution_value']['expose']['operator_id'] = 'field_support_resolution_value_op';
  $handler->display->display_options['filters']['field_support_resolution_value']['expose']['label'] = 'Resolution';
  $handler->display->display_options['filters']['field_support_resolution_value']['expose']['operator'] = 'field_support_resolution_value_op';
  $handler->display->display_options['filters']['field_support_resolution_value']['expose']['identifier'] = 'field_support_resolution_value';
  $handler->display->display_options['filters']['field_support_resolution_value']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_support_resolution_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    9 => 0,
    10 => 0,
  );
  /* Filter criterion: Content: Owner (field_support_owner) */
  $handler->display->display_options['filters']['field_support_owner_target_id']['id'] = 'field_support_owner_target_id';
  $handler->display->display_options['filters']['field_support_owner_target_id']['table'] = 'field_data_field_support_owner';
  $handler->display->display_options['filters']['field_support_owner_target_id']['field'] = 'field_support_owner_target_id';
  $handler->display->display_options['filters']['field_support_owner_target_id']['group'] = 1;
  $handler->display->display_options['filters']['field_support_owner_target_id']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_support_owner_target_id']['expose']['operator_id'] = 'field_support_owner_target_id_op';
  $handler->display->display_options['filters']['field_support_owner_target_id']['expose']['label'] = 'Owner';
  $handler->display->display_options['filters']['field_support_owner_target_id']['expose']['operator'] = 'field_support_owner_target_id_op';
  $handler->display->display_options['filters']['field_support_owner_target_id']['expose']['identifier'] = 'field_support_owner_target_id';
  $handler->display->display_options['filters']['field_support_owner_target_id']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    9 => 0,
    10 => 0,
  );
  /* Filter criterion: Content: Post date */
  $handler->display->display_options['filters']['created']['id'] = 'created';
  $handler->display->display_options['filters']['created']['table'] = 'node';
  $handler->display->display_options['filters']['created']['field'] = 'created';
  $handler->display->display_options['filters']['created']['operator'] = 'between';
  $handler->display->display_options['filters']['created']['exposed'] = TRUE;
  $handler->display->display_options['filters']['created']['expose']['operator_id'] = 'created_op';
  $handler->display->display_options['filters']['created']['expose']['label'] = 'Date Created';
  $handler->display->display_options['filters']['created']['expose']['operator'] = 'created_op';
  $handler->display->display_options['filters']['created']['expose']['identifier'] = 'created';
  $handler->display->display_options['filters']['created']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['created']['expose']['remember_roles'] = array(
    2 => '2',
    9 => '9',
    10 => '10',
    11 => '11',
    1 => 0,
  );
  /* Filter criterion: Content: Updated date */
  $handler->display->display_options['filters']['changed']['id'] = 'changed';
  $handler->display->display_options['filters']['changed']['table'] = 'node';
  $handler->display->display_options['filters']['changed']['field'] = 'changed';
  $handler->display->display_options['filters']['changed']['operator'] = 'between';
  $handler->display->display_options['filters']['changed']['exposed'] = TRUE;
  $handler->display->display_options['filters']['changed']['expose']['operator_id'] = 'changed_op';
  $handler->display->display_options['filters']['changed']['expose']['label'] = 'Date Updated';
  $handler->display->display_options['filters']['changed']['expose']['operator'] = 'changed_op';
  $handler->display->display_options['filters']['changed']['expose']['identifier'] = 'changed';
  $handler->display->display_options['filters']['changed']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    9 => 0,
    10 => 0,
    11 => 0,
  );
  $handler->display->display_options['path'] = 'node/%/dashboard/support';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Support';
  $handler->display->display_options['menu']['weight'] = '10';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Data export */
  $handler = $view->new_display('views_data_export', 'Data export', 'support_data_export');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['filename'] = '%view-export-%timestamp-full.csv';
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['style_options']['quote'] = 1;
  $handler->display->display_options['style_options']['trim'] = 1;
  $handler->display->display_options['style_options']['replace_newlines'] = 0;
  $handler->display->display_options['style_options']['newline_token'] = '1';
  $handler->display->display_options['style_options']['header'] = 1;
  $handler->display->display_options['style_options']['keep_html'] = 0;
  $handler->display->display_options['path'] = 'admin/manage/support/export';
  $handler->display->display_options['displays'] = array(
    'page' => 'page',
    'default' => 0,
    'page_2' => 0,
    'page_1' => 0,
  );
  $translatables['support'] = array(
    t('Master'),
    t('Support'),
    t('more'),
    t('Go'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Select any filter and click on Apply to see results'),
    t('Advanced options'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('field_parent_organization'),
    t('author'),
    t('Priority'),
    t('Status'),
    t('Created'),
    t('Updated'),
    t('Edit link'),
    t('Ticket ID'),
    t('<a href="/[title]/edit">[title]</a> '),
    t('[title]'),
    t('Username'),
    t('Family Name'),
    t('Name'),
    t('[field_name_first] [field_name_last]'),
    t('Telephone Number'),
    t('- [field_telephone_number]'),
    t('Contact'),
    t('[field_email_address]  [field_telephone_number]'),
    t('Description'),
    t('Org'),
    t('Post date'),
    t('Updated date'),
    t('Partner org'),
    t('Date Created'),
    t('Date Updated'),
    t('Admin - Support'),
    t('Thanks - Support'),
    t('<h2>Thank you. Your request for technical support has been submitted.</h2>
<a href="/guide/Search/40952">Learn more about our support process</a><br/><br/>
Track your request here: [title]<br/>
<strong>Note:</strong> You can also track your support requests in the "Support" tab in your "My Globalnet" section.
'),
    t('Organization - Support'),
    t('Support Desk'),
    t('Owner'),
    t('Resolution'),
    t('All'),
    t('Search'),
    t('Data export'),
  );
  $export['support'] = $view;

  $view = new view();
  $view->name = 'support_comments';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'comment';
  $view->human_name = 'Support Comments';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Support Comments';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'access comments';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Relationship: Comment: Content */
  $handler->display->display_options['relationships']['nid']['id'] = 'nid';
  $handler->display->display_options['relationships']['nid']['table'] = 'comment';
  $handler->display->display_options['relationships']['nid']['field'] = 'nid';
  $handler->display->display_options['relationships']['nid']['required'] = TRUE;
  /* Relationship: Comment: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'comment';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Field: Comment: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'comment';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = 'Date';
  $handler->display->display_options['fields']['created']['date_format'] = 'date_format_military_with_time';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'date_format_globalnet_date';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name_1']['id'] = 'name_1';
  $handler->display->display_options['fields']['name_1']['table'] = 'users';
  $handler->display->display_options['fields']['name_1']['field'] = 'name';
  $handler->display->display_options['fields']['name_1']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name_1']['label'] = 'Who';
  $handler->display->display_options['fields']['name_1']['exclude'] = TRUE;
  /* Field: Comment: Comment */
  $handler->display->display_options['fields']['comment_body']['id'] = 'comment_body';
  $handler->display->display_options['fields']['comment_body']['table'] = 'field_data_comment_body';
  $handler->display->display_options['fields']['comment_body']['field'] = 'comment_body';
  $handler->display->display_options['fields']['comment_body']['element_type'] = '0';
  $handler->display->display_options['fields']['comment_body']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['comment_body']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['comment_body']['settings'] = array(
    'field_formatter_class' => '',
  );
  $handler->display->display_options['fields']['comment_body']['field_api_classes'] = TRUE;
  /* Sort criterion: Comment: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'comment';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Comment: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'comment';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['nid']['default_argument_options']['index'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Comment: Approved */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'comment';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status_node']['id'] = 'status_node';
  $handler->display->display_options['filters']['status_node']['table'] = 'node';
  $handler->display->display_options['filters']['status_node']['field'] = 'status';
  $handler->display->display_options['filters']['status_node']['relationship'] = 'nid';
  $handler->display->display_options['filters']['status_node']['value'] = 1;
  $handler->display->display_options['filters']['status_node']['group'] = 1;
  $handler->display->display_options['filters']['status_node']['expose']['operator'] = FALSE;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['path'] = 'admin/manage/support-comments';
  $translatables['support_comments'] = array(
    t('Master'),
    t('Support Comments'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('Content'),
    t('author'),
    t('Date'),
    t('Who'),
    t('Comment'),
    t('All'),
    t('Page'),
  );
  $export['support_comments'] = $view;

  $view = new view();
  $view->name = 'support_details';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Support Details';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Support Description';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'support-detail';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Field: Content: Priority */
  $handler->display->display_options['fields']['field_support_priority']['id'] = 'field_support_priority';
  $handler->display->display_options['fields']['field_support_priority']['table'] = 'field_data_field_support_priority';
  $handler->display->display_options['fields']['field_support_priority']['field'] = 'field_support_priority';
  $handler->display->display_options['fields']['field_support_priority']['settings'] = array(
    'field_formatter_class' => '',
  );
  /* Field: Content: Status */
  $handler->display->display_options['fields']['field_support_status']['id'] = 'field_support_status';
  $handler->display->display_options['fields']['field_support_status']['table'] = 'field_data_field_support_status';
  $handler->display->display_options['fields']['field_support_status']['field'] = 'field_support_status';
  $handler->display->display_options['fields']['field_support_status']['settings'] = array(
    'field_formatter_class' => '',
  );
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created_1']['id'] = 'created_1';
  $handler->display->display_options['fields']['created_1']['table'] = 'node';
  $handler->display->display_options['fields']['created_1']['field'] = 'created';
  $handler->display->display_options['fields']['created_1']['label'] = 'Age';
  $handler->display->display_options['fields']['created_1']['date_format'] = 'raw time ago';
  $handler->display->display_options['fields']['created_1']['second_date_format'] = 'date_format_globalnet_date';
  /* Field: Content: How can we help you? */
  $handler->display->display_options['fields']['field_support_category']['id'] = 'field_support_category';
  $handler->display->display_options['fields']['field_support_category']['table'] = 'field_data_field_support_category';
  $handler->display->display_options['fields']['field_support_category']['field'] = 'field_support_category';
  $handler->display->display_options['fields']['field_support_category']['label'] = 'Category';
  $handler->display->display_options['fields']['field_support_category']['settings'] = array(
    'field_formatter_class' => '',
  );
  /* Field: Content: Resolution */
  $handler->display->display_options['fields']['field_support_resolution']['id'] = 'field_support_resolution';
  $handler->display->display_options['fields']['field_support_resolution']['table'] = 'field_data_field_support_resolution';
  $handler->display->display_options['fields']['field_support_resolution']['field'] = 'field_support_resolution';
  $handler->display->display_options['fields']['field_support_resolution']['settings'] = array(
    'field_formatter_class' => '',
  );
  /* Field: Content: Parent Organization */
  $handler->display->display_options['fields']['field_parent_organization']['id'] = 'field_parent_organization';
  $handler->display->display_options['fields']['field_parent_organization']['table'] = 'field_data_field_parent_organization';
  $handler->display->display_options['fields']['field_parent_organization']['field'] = 'field_parent_organization';
  $handler->display->display_options['fields']['field_parent_organization']['label'] = 'Organization';
  $handler->display->display_options['fields']['field_parent_organization']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_parent_organization']['settings'] = array(
    'link' => 0,
    'field_formatter_class' => '',
  );
  /* Field: Content: Owner */
  $handler->display->display_options['fields']['field_support_owner']['id'] = 'field_support_owner';
  $handler->display->display_options['fields']['field_support_owner']['table'] = 'field_data_field_support_owner';
  $handler->display->display_options['fields']['field_support_owner']['field'] = 'field_support_owner';
  $handler->display->display_options['fields']['field_support_owner']['settings'] = array(
    'link' => 0,
    'field_formatter_class' => '',
  );
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = 'Created';
  $handler->display->display_options['fields']['created']['date_format'] = 'date_format_military_with_time';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'date_format_globalnet_date';
  /* Field: Content: Updated date */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'node';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['label'] = 'Updated';
  $handler->display->display_options['fields']['changed']['date_format'] = 'date_format_military_with_time';
  $handler->display->display_options['fields']['changed']['second_date_format'] = 'date_format_globalnet_date';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['nid']['default_argument_options']['index'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';

  /* Display: Support details */
  $handler = $view->new_display('page', 'Support details', 'page');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Support Details';
  $handler->display->display_options['path'] = 'support-details';

  /* Display: Reporter details */
  $handler = $view->new_display('page', 'Reporter details', 'page_1');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'reporter-detail';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field: Given Name */
  $handler->display->display_options['fields']['field_name_first']['id'] = 'field_name_first';
  $handler->display->display_options['fields']['field_name_first']['table'] = 'field_data_field_name_first';
  $handler->display->display_options['fields']['field_name_first']['field'] = 'field_name_first';
  $handler->display->display_options['fields']['field_name_first']['label'] = 'Name';
  $handler->display->display_options['fields']['field_name_first']['element_type'] = '0';
  $handler->display->display_options['fields']['field_name_first']['element_wrapper_type'] = 'span';
  $handler->display->display_options['fields']['field_name_first']['settings'] = array(
    'field_formatter_class' => 'inline',
  );
  /* Field: Field: Family Name */
  $handler->display->display_options['fields']['field_name_last']['id'] = 'field_name_last';
  $handler->display->display_options['fields']['field_name_last']['table'] = 'field_data_field_name_last';
  $handler->display->display_options['fields']['field_name_last']['field'] = 'field_name_last';
  $handler->display->display_options['fields']['field_name_last']['label'] = '';
  $handler->display->display_options['fields']['field_name_last']['element_type'] = '0';
  $handler->display->display_options['fields']['field_name_last']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_name_last']['element_wrapper_type'] = 'span';
  $handler->display->display_options['fields']['field_name_last']['settings'] = array(
    'field_formatter_class' => 'inline',
  );
  /* Field: Content: Author uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'node';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['uid']['link_to_user'] = FALSE;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['label'] = 'Created by Username';
  $handler->display->display_options['fields']['name']['hide_empty'] = TRUE;
  /* Field: Field: Telephone Number */
  $handler->display->display_options['fields']['field_telephone_number']['id'] = 'field_telephone_number';
  $handler->display->display_options['fields']['field_telephone_number']['table'] = 'field_data_field_telephone_number';
  $handler->display->display_options['fields']['field_telephone_number']['field'] = 'field_telephone_number';
  $handler->display->display_options['fields']['field_telephone_number']['label'] = 'Phone';
  $handler->display->display_options['fields']['field_telephone_number']['element_type'] = '0';
  $handler->display->display_options['fields']['field_telephone_number']['element_wrapper_type'] = 'span';
  $handler->display->display_options['fields']['field_telephone_number']['settings'] = array(
    'field_formatter_class' => '',
  );
  $handler->display->display_options['path'] = 'support-detail-reporter';

  /* Display: Problem Detail */
  $handler = $view->new_display('page', 'Problem Detail', 'page_2');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'problem-detail';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field: Description */
  $handler->display->display_options['fields']['field_description']['id'] = 'field_description';
  $handler->display->display_options['fields']['field_description']['table'] = 'field_data_field_description';
  $handler->display->display_options['fields']['field_description']['field'] = 'field_description';
  $handler->display->display_options['fields']['field_description']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_description']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_description']['settings'] = array(
    'field_formatter_class' => '',
  );
  /* Field: Content: What did you expect to happen? */
  $handler->display->display_options['fields']['field_expected_functionality']['id'] = 'field_expected_functionality';
  $handler->display->display_options['fields']['field_expected_functionality']['table'] = 'field_data_field_expected_functionality';
  $handler->display->display_options['fields']['field_expected_functionality']['field'] = 'field_expected_functionality';
  $handler->display->display_options['fields']['field_expected_functionality']['label'] = 'Expected result';
  $handler->display->display_options['fields']['field_expected_functionality']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_expected_functionality']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_expected_functionality']['settings'] = array(
    'field_formatter_class' => '',
  );
  /* Field: Content: What actually happened? */
  $handler->display->display_options['fields']['field_actual_functionality']['id'] = 'field_actual_functionality';
  $handler->display->display_options['fields']['field_actual_functionality']['table'] = 'field_data_field_actual_functionality';
  $handler->display->display_options['fields']['field_actual_functionality']['field'] = 'field_actual_functionality';
  $handler->display->display_options['fields']['field_actual_functionality']['label'] = 'Actual result';
  $handler->display->display_options['fields']['field_actual_functionality']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_actual_functionality']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_actual_functionality']['settings'] = array(
    'field_formatter_class' => '',
  );
  $handler->display->display_options['path'] = 'support-detail-problem';
  $translatables['support_details'] = array(
    t('Master'),
    t('Support Description'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('author'),
    t('Priority'),
    t('Status'),
    t('Age'),
    t('Category'),
    t('Resolution'),
    t('Organization'),
    t('Owner'),
    t('Created'),
    t('Updated'),
    t('All'),
    t('Support details'),
    t('Support Details'),
    t('Reporter details'),
    t('Name'),
    t('Author uid'),
    t('Created by Username'),
    t('Phone'),
    t('Problem Detail'),
    t('Description'),
    t('Expected result'),
    t('Actual result'),
  );
  $export['support_details'] = $view;

  $view = new view();
  $view->name = 'support_ticket_activity';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Support Ticket Activity';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Support Ticket Activity';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['access']['type'] = 'gn2_og_org_manager_access';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'timestamp' => 'timestamp',
    'field_name' => 'field_name',
    'log' => 'log',
    'type' => 'type',
    'uid' => 'uid',
    'after_value_text' => 'after_value_text',
    'before_value_text' => 'before_value_text',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => 'views-align-left',
      'separator' => '',
      'empty_column' => 0,
    ),
    'timestamp' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => 'views-align-left',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_name' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => 'views-align-left',
      'separator' => '',
      'empty_column' => 0,
    ),
    'log' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => 'views-align-left',
      'separator' => '',
      'empty_column' => 0,
    ),
    'type' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => 'views-align-left',
      'separator' => '',
      'empty_column' => 0,
    ),
    'uid' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => 'views-align-left',
      'separator' => '',
      'empty_column' => 0,
    ),
    'after_value_text' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => 'views-align-left',
      'separator' => '',
      'empty_column' => 0,
    ),
    'before_value_text' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => 'views-align-left',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Field Tracker: Creation Date */
  $handler->display->display_options['fields']['timestamp']['id'] = 'timestamp';
  $handler->display->display_options['fields']['timestamp']['table'] = 'track_field_changes_audit';
  $handler->display->display_options['fields']['timestamp']['field'] = 'timestamp';
  $handler->display->display_options['fields']['timestamp']['label'] = 'Date/Time of Change';
  $handler->display->display_options['fields']['timestamp']['date_format'] = 'date_format_military_with_time';
  $handler->display->display_options['fields']['timestamp']['second_date_format'] = 'date_format_globalnet_date';
  /* Field: Field Tracker: Field Name */
  $handler->display->display_options['fields']['field_name']['id'] = 'field_name';
  $handler->display->display_options['fields']['field_name']['table'] = 'track_field_changes_audit';
  $handler->display->display_options['fields']['field_name']['field'] = 'field_name';
  /* Field: Field Tracker: Track Changes Log */
  $handler->display->display_options['fields']['log']['id'] = 'log';
  $handler->display->display_options['fields']['log']['table'] = 'track_field_changes_audit';
  $handler->display->display_options['fields']['log']['field'] = 'log';
  $handler->display->display_options['fields']['log']['label'] = 'Log message';
  /* Field: Field Tracker: Value Before */
  $handler->display->display_options['fields']['before_value_text']['id'] = 'before_value_text';
  $handler->display->display_options['fields']['before_value_text']['table'] = 'track_field_changes_audit';
  $handler->display->display_options['fields']['before_value_text']['field'] = 'before_value_text';
  /* Field: Field Tracker: Value After */
  $handler->display->display_options['fields']['after_value_text']['id'] = 'after_value_text';
  $handler->display->display_options['fields']['after_value_text']['table'] = 'track_field_changes_audit';
  $handler->display->display_options['fields']['after_value_text']['field'] = 'after_value_text';
  /* Field: Field Tracker: User */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'track_field_changes_audit';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  /* Sort criterion: Content: Updated/commented date */
  $handler->display->display_options['sorts']['last_updated']['id'] = 'last_updated';
  $handler->display->display_options['sorts']['last_updated']['table'] = 'node_comment_statistics';
  $handler->display->display_options['sorts']['last_updated']['field'] = 'last_updated';
  $handler->display->display_options['sorts']['last_updated']['order'] = 'DESC';
  $handler->display->display_options['sorts']['last_updated']['granularity'] = 'minute';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['nid']['default_argument_options']['index'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'support' => 'support',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'admin/manage/support-ticket-activity';

  /* Display: User support request activity */
  $handler = $view->new_display('panel_pane', 'User support request activity', 'panel_pane_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Support Updates';
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'timestamp_1' => 'timestamp_1',
    'timestamp' => 'timestamp',
    'field_support_priority' => 'field_support_priority',
    'field_support_status' => 'field_support_status',
    'last_comment_timestamp' => 'last_comment_timestamp',
    'last_comment_name' => 'last_comment_name',
    'comment_body' => 'comment_body',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => 'views-align-left',
      'separator' => '',
      'empty_column' => 0,
    ),
    'timestamp_1' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'timestamp' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => 'views-align-left',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_support_priority' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_support_status' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'last_comment_timestamp' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'last_comment_name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'comment_body' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Comment: Last Comment */
  $handler->display->display_options['relationships']['cid']['id'] = 'cid';
  $handler->display->display_options['relationships']['cid']['table'] = 'node_comment_statistics';
  $handler->display->display_options['relationships']['cid']['field'] = 'cid';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  /* Field: Field Tracker: Creation Date */
  $handler->display->display_options['fields']['timestamp_1']['id'] = 'timestamp_1';
  $handler->display->display_options['fields']['timestamp_1']['table'] = 'track_field_changes_audit';
  $handler->display->display_options['fields']['timestamp_1']['field'] = 'timestamp';
  $handler->display->display_options['fields']['timestamp_1']['label'] = 'Opened';
  $handler->display->display_options['fields']['timestamp_1']['date_format'] = 'date_format_military_with_time';
  $handler->display->display_options['fields']['timestamp_1']['second_date_format'] = 'date_format_globalnet_date';
  /* Field: Field Tracker: Creation Date */
  $handler->display->display_options['fields']['timestamp']['id'] = 'timestamp';
  $handler->display->display_options['fields']['timestamp']['table'] = 'track_field_changes_audit';
  $handler->display->display_options['fields']['timestamp']['field'] = 'timestamp';
  $handler->display->display_options['fields']['timestamp']['label'] = 'Last Update';
  $handler->display->display_options['fields']['timestamp']['date_format'] = 'date_format_military_with_time';
  $handler->display->display_options['fields']['timestamp']['second_date_format'] = 'date_format_globalnet_date';
  /* Field: Content: Priority */
  $handler->display->display_options['fields']['field_support_priority']['id'] = 'field_support_priority';
  $handler->display->display_options['fields']['field_support_priority']['table'] = 'field_data_field_support_priority';
  $handler->display->display_options['fields']['field_support_priority']['field'] = 'field_support_priority';
  $handler->display->display_options['fields']['field_support_priority']['element_type'] = '0';
  $handler->display->display_options['fields']['field_support_priority']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_support_priority']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_support_priority']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_support_priority']['settings'] = array(
    'field_formatter_class' => '',
  );
  $handler->display->display_options['fields']['field_support_priority']['field_api_classes'] = TRUE;
  /* Field: Content: Status */
  $handler->display->display_options['fields']['field_support_status']['id'] = 'field_support_status';
  $handler->display->display_options['fields']['field_support_status']['table'] = 'field_data_field_support_status';
  $handler->display->display_options['fields']['field_support_status']['field'] = 'field_support_status';
  $handler->display->display_options['fields']['field_support_status']['element_type'] = '0';
  $handler->display->display_options['fields']['field_support_status']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_support_status']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_support_status']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_support_status']['settings'] = array(
    'field_formatter_class' => '',
  );
  $handler->display->display_options['fields']['field_support_status']['field_api_classes'] = TRUE;
  /* Field: Content: Last comment time */
  $handler->display->display_options['fields']['last_comment_timestamp']['id'] = 'last_comment_timestamp';
  $handler->display->display_options['fields']['last_comment_timestamp']['table'] = 'node_comment_statistics';
  $handler->display->display_options['fields']['last_comment_timestamp']['field'] = 'last_comment_timestamp';
  $handler->display->display_options['fields']['last_comment_timestamp']['date_format'] = 'date_format_globalnet_date';
  $handler->display->display_options['fields']['last_comment_timestamp']['second_date_format'] = 'date_format_globalnet_date';
  /* Field: Content: Last comment author */
  $handler->display->display_options['fields']['last_comment_name']['id'] = 'last_comment_name';
  $handler->display->display_options['fields']['last_comment_name']['table'] = 'node_comment_statistics';
  $handler->display->display_options['fields']['last_comment_name']['field'] = 'last_comment_name';
  /* Field: Comment: Comment */
  $handler->display->display_options['fields']['comment_body']['id'] = 'comment_body';
  $handler->display->display_options['fields']['comment_body']['table'] = 'field_data_comment_body';
  $handler->display->display_options['fields']['comment_body']['field'] = 'comment_body';
  $handler->display->display_options['fields']['comment_body']['relationship'] = 'cid';
  $handler->display->display_options['fields']['comment_body']['element_type'] = '0';
  $handler->display->display_options['fields']['comment_body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['comment_body']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['comment_body']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['comment_body']['settings'] = array(
    'field_formatter_class' => '',
  );
  $handler->display->display_options['fields']['comment_body']['field_api_classes'] = TRUE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Author uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'node';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'current_user';
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  $translatables['support_ticket_activity'] = array(
    t('Master'),
    t('Support Ticket Activity'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Date/Time of Change'),
    t('Field Name'),
    t('Log message'),
    t('Value Before'),
    t('Value After'),
    t('User'),
    t('All'),
    t('Page'),
    t('User support request activity'),
    t('Support Updates'),
    t('Last Comment'),
    t('Title'),
    t('Opened'),
    t('Last Update'),
    t('Priority'),
    t('Status'),
    t('Last comment time'),
    t('Last comment author'),
    t('Comment'),
    t('View panes'),
  );
  $export['support_ticket_activity'] = $view;

  return $export;
}
