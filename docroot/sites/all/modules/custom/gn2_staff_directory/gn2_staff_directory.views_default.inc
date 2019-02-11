<?php
/**
 * @file
 * gn2_staff_directory.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function gn2_staff_directory_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'staff_directory';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'users';
  $view->human_name = 'Staff Directory';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Staff and Faculty Directory';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'access user profiles';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['query']['options']['pure_distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Header: Global: Messages */
  $handler->display->display_options['header']['messages']['id'] = 'messages';
  $handler->display->display_options['header']['messages']['table'] = 'views';
  $handler->display->display_options['header']['messages']['field'] = 'messages';
  /* Header: Global: Unfiltered text */
  $handler->display->display_options['header']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['header']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['header']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['header']['area_text_custom']['label'] = 'Title';
  $handler->display->display_options['header']['area_text_custom']['content'] = '<h2>Staff and Faculty Directory</h2>';
  /* Relationship: OG membership: Group Node from OG membership */
  $handler->display->display_options['relationships']['og_membership_related_node_group']['id'] = 'og_membership_related_node_group';
  $handler->display->display_options['relationships']['og_membership_related_node_group']['table'] = 'og_membership';
  $handler->display->display_options['relationships']['og_membership_related_node_group']['field'] = 'og_membership_related_node_group';
  $handler->display->display_options['relationships']['og_membership_related_node_group']['required'] = TRUE;
  /* Relationship: OG membership: OG membership from User */
  $handler->display->display_options['relationships']['og_membership_rel']['id'] = 'og_membership_rel';
  $handler->display->display_options['relationships']['og_membership_rel']['table'] = 'users';
  $handler->display->display_options['relationships']['og_membership_rel']['field'] = 'og_membership_rel';
  /* Relationship: OG membership: OG Roles from membership */
  $handler->display->display_options['relationships']['og_users_roles']['id'] = 'og_users_roles';
  $handler->display->display_options['relationships']['og_users_roles']['table'] = 'og_membership';
  $handler->display->display_options['relationships']['og_users_roles']['field'] = 'og_users_roles';
  /* Field: User: Rank/Prefix */
  $handler->display->display_options['fields']['field_user_rank_prefix']['id'] = 'field_user_rank_prefix';
  $handler->display->display_options['fields']['field_user_rank_prefix']['table'] = 'field_data_field_user_rank_prefix';
  $handler->display->display_options['fields']['field_user_rank_prefix']['field'] = 'field_user_rank_prefix';
  $handler->display->display_options['fields']['field_user_rank_prefix']['label'] = '';
  $handler->display->display_options['fields']['field_user_rank_prefix']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_user_rank_prefix']['element_type'] = '0';
  $handler->display->display_options['fields']['field_user_rank_prefix']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_user_rank_prefix']['element_wrapper_type'] = 'span';
  $handler->display->display_options['fields']['field_user_rank_prefix']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_user_rank_prefix']['settings'] = array(
    'field_formatter_class' => '',
  );
  $handler->display->display_options['fields']['field_user_rank_prefix']['field_api_classes'] = TRUE;
  /* Field: Field: Given Name */
  $handler->display->display_options['fields']['field_name_first_1']['id'] = 'field_name_first_1';
  $handler->display->display_options['fields']['field_name_first_1']['table'] = 'field_data_field_name_first';
  $handler->display->display_options['fields']['field_name_first_1']['field'] = 'field_name_first';
  $handler->display->display_options['fields']['field_name_first_1']['label'] = '';
  $handler->display->display_options['fields']['field_name_first_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_name_first_1']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_name_first_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_name_first_1']['settings'] = array(
    'field_formatter_class' => '',
  );
  /* Field: Field: Family Name */
  $handler->display->display_options['fields']['field_name_last']['id'] = 'field_name_last';
  $handler->display->display_options['fields']['field_name_last']['table'] = 'field_data_field_name_last';
  $handler->display->display_options['fields']['field_name_last']['field'] = 'field_name_last';
  $handler->display->display_options['fields']['field_name_last']['label'] = '';
  $handler->display->display_options['fields']['field_name_last']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_name_last']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_name_last']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_name_last']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_name_last']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_name_last']['settings'] = array(
    'field_formatter_class' => '',
  );
  $handler->display->display_options['fields']['field_name_last']['field_api_classes'] = TRUE;
  /* Field: User: Suffix */
  $handler->display->display_options['fields']['field_user_suffix']['id'] = 'field_user_suffix';
  $handler->display->display_options['fields']['field_user_suffix']['table'] = 'field_data_field_user_suffix';
  $handler->display->display_options['fields']['field_user_suffix']['field'] = 'field_user_suffix';
  $handler->display->display_options['fields']['field_user_suffix']['label'] = '';
  $handler->display->display_options['fields']['field_user_suffix']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_user_suffix']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_user_suffix']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_user_suffix']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_user_suffix']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_user_suffix']['settings'] = array(
    'field_formatter_class' => '',
  );
  $handler->display->display_options['fields']['field_user_suffix']['field_api_classes'] = TRUE;
  /* Field: User: Link */
  $handler->display->display_options['fields']['view_user']['id'] = 'view_user';
  $handler->display->display_options['fields']['view_user']['table'] = 'users';
  $handler->display->display_options['fields']['view_user']['field'] = 'view_user';
  $handler->display->display_options['fields']['view_user']['label'] = '';
  $handler->display->display_options['fields']['view_user']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['view_user']['alter']['text'] = '[field_user_rank_prefix] [field_name_first_1] [field_name_last] [field_user_suffix]';
  $handler->display->display_options['fields']['view_user']['element_type'] = 'span';
  $handler->display->display_options['fields']['view_user']['element_label_colon'] = FALSE;
  /* Field: User: Job title */
  $handler->display->display_options['fields']['field_user_title']['id'] = 'field_user_title';
  $handler->display->display_options['fields']['field_user_title']['table'] = 'field_data_field_user_title';
  $handler->display->display_options['fields']['field_user_title']['field'] = 'field_user_title';
  $handler->display->display_options['fields']['field_user_title']['label'] = '';
  $handler->display->display_options['fields']['field_user_title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_user_title']['element_type'] = '0';
  $handler->display->display_options['fields']['field_user_title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_user_title']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_user_title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_user_title']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_user_title']['settings'] = array(
    'field_formatter_class' => '',
  );
  $handler->display->display_options['fields']['field_user_title']['field_api_classes'] = TRUE;
  /* Field: User: Organization */
  $handler->display->display_options['fields']['field_user_organization']['id'] = 'field_user_organization';
  $handler->display->display_options['fields']['field_user_organization']['table'] = 'field_data_field_user_organization';
  $handler->display->display_options['fields']['field_user_organization']['field'] = 'field_user_organization';
  $handler->display->display_options['fields']['field_user_organization']['label'] = '';
  $handler->display->display_options['fields']['field_user_organization']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_user_organization']['alter']['text'] = '<i>[field_user_title], </i>[field_user_organization]';
  $handler->display->display_options['fields']['field_user_organization']['element_type'] = '0';
  $handler->display->display_options['fields']['field_user_organization']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_user_organization']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_user_organization']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_user_organization']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_user_organization']['settings'] = array(
    'field_formatter_class' => '',
  );
  $handler->display->display_options['fields']['field_user_organization']['field_api_classes'] = TRUE;
  /* Sort criterion: Field: Family Name (field_name_last) */
  $handler->display->display_options['sorts']['field_name_last_value']['id'] = 'field_name_last_value';
  $handler->display->display_options['sorts']['field_name_last_value']['table'] = 'field_data_field_name_last';
  $handler->display->display_options['sorts']['field_name_last_value']['field'] = 'field_name_last_value';
  /* Sort criterion: Field: Given Name (field_name_first) */
  $handler->display->display_options['sorts']['field_name_first_value']['id'] = 'field_name_first_value';
  $handler->display->display_options['sorts']['field_name_first_value']['table'] = 'field_data_field_name_first';
  $handler->display->display_options['sorts']['field_name_first_value']['field'] = 'field_name_first_value';
  /* Contextual filter: OG membership: Group ID */
  $handler->display->display_options['arguments']['gid']['id'] = 'gid';
  $handler->display->display_options['arguments']['gid']['table'] = 'og_membership';
  $handler->display->display_options['arguments']['gid']['field'] = 'gid';
  $handler->display->display_options['arguments']['gid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['gid']['default_argument_type'] = 'query';
  $handler->display->display_options['arguments']['gid']['default_argument_options']['parameter'] = 'gid';
  $handler->display->display_options['arguments']['gid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['gid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['gid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: OG user roles: Role Name */
  $handler->display->display_options['filters']['name']['id'] = 'name';
  $handler->display->display_options['filters']['name']['table'] = 'og_role';
  $handler->display->display_options['filters']['name']['field'] = 'name';
  $handler->display->display_options['filters']['name']['relationship'] = 'og_users_roles';
  $handler->display->display_options['filters']['name']['value'] = array(
    'faculty' => 'faculty',
    'staff' => 'staff',
  );
  $handler->display->display_options['filters']['name']['reduce_duplicates'] = TRUE;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'node/%/staff-directory';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['path'] = 'node/%/staff-directory';
  $translatables['staff_directory'] = array(
    t('Master'),
    t('Staff and Faculty Directory'),
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
    t('Title'),
    t('<h2>Staff and Faculty Directory</h2>'),
    t('Group node from OG membership'),
    t('OG membership from user'),
    t('OG Roles from OG membership'),
    t('[field_user_rank_prefix] [field_name_first_1] [field_name_last] [field_user_suffix]'),
    t('<i>[field_user_title], </i>[field_user_organization]'),
    t('All'),
    t('Page'),
  );
  $export['staff_directory'] = $view;

  return $export;
}
