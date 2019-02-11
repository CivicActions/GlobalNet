<?php
/**
 * @file
 * gn2_og.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function gn2_og_views_default_views() {
  $export = array();

  /* blocked_users */ $view = new view();
  /* blocked_users */ $view->name = 'blocked_users';
  /* blocked_users */ $view->description = '';
  /* blocked_users */ $view->tag = 'default';
  /* blocked_users */ $view->base_table = 'og_membership';
  /* blocked_users */ $view->human_name = 'Blocked Users';
  /* blocked_users */ $view->core = 7;
  /* blocked_users */ $view->api_version = '3.0';
  /* blocked_users */ $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* blocked_users */ /* Display: Master */
  /* blocked_users */  /* Master */ $handler = $view->new_display('default', 'Master', 'default');
  /* blocked_users */  /* Master */ $handler->display->display_options['title'] = 'Blocked Users';
  /* blocked_users */  /* Master */ $handler->display->display_options['use_more_always'] = FALSE;
  /* blocked_users */  /* Master */ $handler->display->display_options['access']['type'] = 'none';
  /* blocked_users */  /* Master */ $handler->display->display_options['cache']['type'] = 'none';
  /* blocked_users */  /* Master */ $handler->display->display_options['query']['type'] = 'views_query';
  /* blocked_users */  /* Master */ $handler->display->display_options['exposed_form']['type'] = 'basic';
  /* blocked_users */  /* Master */ $handler->display->display_options['pager']['type'] = 'full';
  /* blocked_users */  /* Master */ $handler->display->display_options['pager']['options']['items_per_page'] = '25';
  /* blocked_users */  /* Master */ $handler->display->display_options['pager']['options']['offset'] = '0';
  /* blocked_users */  /* Master */ $handler->display->display_options['pager']['options']['id'] = '0';
  /* blocked_users */  /* Master */ $handler->display->display_options['pager']['options']['quantity'] = '9';
  /* blocked_users */  /* Master */ $handler->display->display_options['style_plugin'] = 'table';
  /* blocked_users */  /* Master */ $handler->display->display_options['style_options']['columns'] = array(
  /* blocked_users */  /* Master */   'id' => 'id',
  /* blocked_users */  /* Master */   'field_name_last' => 'field_name_last',
  /* blocked_users */  /* Master */   'field_name_first' => 'field_name_first',
  /* blocked_users */  /* Master */ );
  /* blocked_users */  /* Master */ $handler->display->display_options['style_options']['default'] = '-1';
  /* blocked_users */  /* Master */ $handler->display->display_options['style_options']['info'] = array(
  /* blocked_users */  /* Master */   'id' => array(
  /* blocked_users */  /* Master */     'sortable' => 0,
  /* blocked_users */  /* Master */     'default_sort_order' => 'asc',
  /* blocked_users */  /* Master */     'align' => '',
  /* blocked_users */  /* Master */     'separator' => '',
  /* blocked_users */  /* Master */     'empty_column' => 0,
  /* blocked_users */  /* Master */   ),
  /* blocked_users */  /* Master */   'field_name_last' => array(
  /* blocked_users */  /* Master */     'sortable' => 0,
  /* blocked_users */  /* Master */     'default_sort_order' => 'asc',
  /* blocked_users */  /* Master */     'align' => '',
  /* blocked_users */  /* Master */     'separator' => '',
  /* blocked_users */  /* Master */     'empty_column' => 0,
  /* blocked_users */  /* Master */   ),
  /* blocked_users */  /* Master */   'field_name_first' => array(
  /* blocked_users */  /* Master */     'sortable' => 0,
  /* blocked_users */  /* Master */     'default_sort_order' => 'asc',
  /* blocked_users */  /* Master */     'align' => '',
  /* blocked_users */  /* Master */     'separator' => '',
  /* blocked_users */  /* Master */     'empty_column' => 0,
  /* blocked_users */  /* Master */   ),
  /* blocked_users */  /* Master */ );
  /* blocked_users */  /* Master */ /* Relationship: OG membership: User from OG membership */
  /* blocked_users */  /* Master */ $handler->display->display_options['relationships']['og_membership_related_user']['id'] = 'og_membership_related_user';
  /* blocked_users */  /* Master */ $handler->display->display_options['relationships']['og_membership_related_user']['table'] = 'og_membership';
  /* blocked_users */  /* Master */ $handler->display->display_options['relationships']['og_membership_related_user']['field'] = 'og_membership_related_user';
  /* blocked_users */  /* Master */ /* Relationship: OG membership: Group Node from OG membership */
  /* blocked_users */  /* Master */ $handler->display->display_options['relationships']['og_membership_related_node_group']['id'] = 'og_membership_related_node_group';
  /* blocked_users */  /* Master */ $handler->display->display_options['relationships']['og_membership_related_node_group']['table'] = 'og_membership';
  /* blocked_users */  /* Master */ $handler->display->display_options['relationships']['og_membership_related_node_group']['field'] = 'og_membership_related_node_group';
  /* blocked_users */  /* Master */ /* Field: Bulk operations: OG membership */
  /* blocked_users */  /* Master */ $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  /* blocked_users */  /* Master */ $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'og_membership';
  /* blocked_users */  /* Master */ $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  /* blocked_users */  /* Master */ $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '0';
  /* blocked_users */  /* Master */ $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  /* blocked_users */  /* Master */ $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['row_clickable'] = 1;
  /* blocked_users */  /* Master */ $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  /* blocked_users */  /* Master */ $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  /* blocked_users */  /* Master */ $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
  /* blocked_users */  /* Master */   'action::og_set_state_action' => array(
  /* blocked_users */  /* Master */     'selected' => 1,
  /* blocked_users */  /* Master */     'postpone_processing' => 0,
  /* blocked_users */  /* Master */     'skip_confirmation' => 0,
  /* blocked_users */  /* Master */     'override_label' => 0,
  /* blocked_users */  /* Master */     'label' => '',
  /* blocked_users */  /* Master */   ),
  /* blocked_users */  /* Master */ );
  /* blocked_users */  /* Master */ /* Field: OG membership: Og membership ID */
  /* blocked_users */  /* Master */ $handler->display->display_options['fields']['id']['id'] = 'id';
  /* blocked_users */  /* Master */ $handler->display->display_options['fields']['id']['table'] = 'og_membership';
  /* blocked_users */  /* Master */ $handler->display->display_options['fields']['id']['field'] = 'id';
  /* blocked_users */  /* Master */ $handler->display->display_options['fields']['id']['label'] = 'ID';
  /* blocked_users */  /* Master */ $handler->display->display_options['fields']['id']['exclude'] = TRUE;
  /* blocked_users */  /* Master */ /* Field: Field: Family Name */
  /* blocked_users */  /* Master */ $handler->display->display_options['fields']['field_name_last']['id'] = 'field_name_last';
  /* blocked_users */  /* Master */ $handler->display->display_options['fields']['field_name_last']['table'] = 'field_data_field_name_last';
  /* blocked_users */  /* Master */ $handler->display->display_options['fields']['field_name_last']['field'] = 'field_name_last';
  /* blocked_users */  /* Master */ $handler->display->display_options['fields']['field_name_last']['relationship'] = 'og_membership_related_user';
  /* blocked_users */  /* Master */ $handler->display->display_options['fields']['field_name_last']['label'] = '';
  /* blocked_users */  /* Master */ $handler->display->display_options['fields']['field_name_last']['exclude'] = TRUE;
  /* blocked_users */  /* Master */ $handler->display->display_options['fields']['field_name_last']['element_label_colon'] = FALSE;
  /* blocked_users */  /* Master */ $handler->display->display_options['fields']['field_name_last']['settings'] = array(
  /* blocked_users */  /* Master */   'field_formatter_class' => '',
  /* blocked_users */  /* Master */ );
  /* blocked_users */  /* Master */ /* Field: Field: Given Name */
  /* blocked_users */  /* Master */ $handler->display->display_options['fields']['field_name_first']['id'] = 'field_name_first';
  /* blocked_users */  /* Master */ $handler->display->display_options['fields']['field_name_first']['table'] = 'field_data_field_name_first';
  /* blocked_users */  /* Master */ $handler->display->display_options['fields']['field_name_first']['field'] = 'field_name_first';
  /* blocked_users */  /* Master */ $handler->display->display_options['fields']['field_name_first']['relationship'] = 'og_membership_related_user';
  /* blocked_users */  /* Master */ $handler->display->display_options['fields']['field_name_first']['label'] = '';
  /* blocked_users */  /* Master */ $handler->display->display_options['fields']['field_name_first']['exclude'] = TRUE;
  /* blocked_users */  /* Master */ $handler->display->display_options['fields']['field_name_first']['element_type'] = '0';
  /* blocked_users */  /* Master */ $handler->display->display_options['fields']['field_name_first']['element_label_colon'] = FALSE;
  /* blocked_users */  /* Master */ $handler->display->display_options['fields']['field_name_first']['element_wrapper_type'] = '0';
  /* blocked_users */  /* Master */ $handler->display->display_options['fields']['field_name_first']['element_default_classes'] = FALSE;
  /* blocked_users */  /* Master */ $handler->display->display_options['fields']['field_name_first']['settings'] = array(
  /* blocked_users */  /* Master */   'field_formatter_class' => '',
  /* blocked_users */  /* Master */ );
  /* blocked_users */  /* Master */ $handler->display->display_options['fields']['field_name_first']['field_api_classes'] = TRUE;
  /* blocked_users */  /* Master */ /* Field: Content: Nid */
  /* blocked_users */  /* Master */ $handler->display->display_options['fields']['nid']['id'] = 'nid';
  /* blocked_users */  /* Master */ $handler->display->display_options['fields']['nid']['table'] = 'node';
  /* blocked_users */  /* Master */ $handler->display->display_options['fields']['nid']['field'] = 'nid';
  /* blocked_users */  /* Master */ $handler->display->display_options['fields']['nid']['relationship'] = 'og_membership_related_node_group';
  /* blocked_users */  /* Master */ $handler->display->display_options['fields']['nid']['label'] = '';
  /* blocked_users */  /* Master */ $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  /* blocked_users */  /* Master */ $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* blocked_users */  /* Master */ /* Field: Content: Title */
  /* blocked_users */  /* Master */ $handler->display->display_options['fields']['title']['id'] = 'title';
  /* blocked_users */  /* Master */ $handler->display->display_options['fields']['title']['table'] = 'node';
  /* blocked_users */  /* Master */ $handler->display->display_options['fields']['title']['field'] = 'title';
  /* blocked_users */  /* Master */ $handler->display->display_options['fields']['title']['relationship'] = 'og_membership_related_node_group';
  /* blocked_users */  /* Master */ $handler->display->display_options['fields']['title']['label'] = '';
  /* blocked_users */  /* Master */ $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  /* blocked_users */  /* Master */ $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* blocked_users */  /* Master */ /* Field: Content: Type */
  /* blocked_users */  /* Master */ $handler->display->display_options['fields']['type']['id'] = 'type';
  /* blocked_users */  /* Master */ $handler->display->display_options['fields']['type']['table'] = 'node';
  /* blocked_users */  /* Master */ $handler->display->display_options['fields']['type']['field'] = 'type';
  /* blocked_users */  /* Master */ $handler->display->display_options['fields']['type']['relationship'] = 'og_membership_related_node_group';
  /* blocked_users */  /* Master */ $handler->display->display_options['fields']['type']['label'] = 'Group Type';
  /* blocked_users */  /* Master */ /* Field: User: Uid */
  /* blocked_users */  /* Master */ $handler->display->display_options['fields']['uid']['id'] = 'uid';
  /* blocked_users */  /* Master */ $handler->display->display_options['fields']['uid']['table'] = 'users';
  /* blocked_users */  /* Master */ $handler->display->display_options['fields']['uid']['field'] = 'uid';
  /* blocked_users */  /* Master */ $handler->display->display_options['fields']['uid']['relationship'] = 'og_membership_related_user';
  /* blocked_users */  /* Master */ $handler->display->display_options['fields']['uid']['label'] = '';
  /* blocked_users */  /* Master */ $handler->display->display_options['fields']['uid']['exclude'] = TRUE;
  /* blocked_users */  /* Master */ $handler->display->display_options['fields']['uid']['element_label_colon'] = FALSE;
  /* blocked_users */  /* Master */ $handler->display->display_options['fields']['uid']['link_to_user'] = FALSE;
  /* blocked_users */  /* Master */ /* Field: User: Name */
  /* blocked_users */  /* Master */ $handler->display->display_options['fields']['name']['id'] = 'name';
  /* blocked_users */  /* Master */ $handler->display->display_options['fields']['name']['table'] = 'users';
  /* blocked_users */  /* Master */ $handler->display->display_options['fields']['name']['field'] = 'name';
  /* blocked_users */  /* Master */ $handler->display->display_options['fields']['name']['relationship'] = 'og_membership_related_user';
  /* blocked_users */  /* Master */ $handler->display->display_options['fields']['name']['label'] = '';
  /* blocked_users */  /* Master */ $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  /* blocked_users */  /* Master */ $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  /* blocked_users */  /* Master */ /* Field: Global: Custom text */
  /* blocked_users */  /* Master */ $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  /* blocked_users */  /* Master */ $handler->display->display_options['fields']['nothing']['table'] = 'views';
  /* blocked_users */  /* Master */ $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  /* blocked_users */  /* Master */ $handler->display->display_options['fields']['nothing']['label'] = 'User';
  /* blocked_users */  /* Master */ $handler->display->display_options['fields']['nothing']['alter']['text'] = '[field_name_first] [field_name_last] ([name])';
  /* blocked_users */  /* Master */ /* Field: Global: Custom text */
  /* blocked_users */  /* Master */ $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  /* blocked_users */  /* Master */ $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  /* blocked_users */  /* Master */ $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  /* blocked_users */  /* Master */ $handler->display->display_options['fields']['nothing_1']['label'] = 'Group';
  /* blocked_users */  /* Master */ $handler->display->display_options['fields']['nothing_1']['alter']['text'] = '[title] ([nid])';
  /* blocked_users */  /* Master */ /* Sort criterion: OG membership: Created */
  /* blocked_users */  /* Master */ $handler->display->display_options['sorts']['created']['id'] = 'created';
  /* blocked_users */  /* Master */ $handler->display->display_options['sorts']['created']['table'] = 'og_membership';
  /* blocked_users */  /* Master */ $handler->display->display_options['sorts']['created']['field'] = 'created';
  /* blocked_users */  /* Master */ $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* blocked_users */  /* Master */ /* Filter criterion: OG membership: State */
  /* blocked_users */  /* Master */ $handler->display->display_options['filters']['state']['id'] = 'state';
  /* blocked_users */  /* Master */ $handler->display->display_options['filters']['state']['table'] = 'og_membership';
  /* blocked_users */  /* Master */ $handler->display->display_options['filters']['state']['field'] = 'state';
  /* blocked_users */  /* Master */ $handler->display->display_options['filters']['state']['value'] = array(
  /* blocked_users */  /* Master */   3 => '3',
  /* blocked_users */  /* Master */ );
  /* blocked_users */  /* Master */ $handler->display->display_options['filters']['state']['group'] = 1;
  /* blocked_users */  /* Master */ /* Filter criterion: Global: Combine fields filter */
  /* blocked_users */  /* Master */ $handler->display->display_options['filters']['combine']['id'] = 'combine';
  /* blocked_users */  /* Master */ $handler->display->display_options['filters']['combine']['table'] = 'views';
  /* blocked_users */  /* Master */ $handler->display->display_options['filters']['combine']['field'] = 'combine';
  /* blocked_users */  /* Master */ $handler->display->display_options['filters']['combine']['operator'] = 'word';
  /* blocked_users */  /* Master */ $handler->display->display_options['filters']['combine']['group'] = 1;
  /* blocked_users */  /* Master */ $handler->display->display_options['filters']['combine']['exposed'] = TRUE;
  /* blocked_users */  /* Master */ $handler->display->display_options['filters']['combine']['expose']['operator_id'] = 'combine_op';
  /* blocked_users */  /* Master */ $handler->display->display_options['filters']['combine']['expose']['label'] = 'Search';
  /* blocked_users */  /* Master */ $handler->display->display_options['filters']['combine']['expose']['description'] = 'User name, nid or title';
  /* blocked_users */  /* Master */ $handler->display->display_options['filters']['combine']['expose']['operator'] = 'combine_op';
  /* blocked_users */  /* Master */ $handler->display->display_options['filters']['combine']['expose']['identifier'] = 'combine';
  /* blocked_users */  /* Master */ $handler->display->display_options['filters']['combine']['expose']['remember_roles'] = array(
  /* blocked_users */  /* Master */   2 => '2',
  /* blocked_users */  /* Master */   1 => 0,
  /* blocked_users */  /* Master */   9 => 0,
  /* blocked_users */  /* Master */   10 => 0,
  /* blocked_users */  /* Master */ );
  /* blocked_users */  /* Master */ $handler->display->display_options['filters']['combine']['expose']['autocomplete_items'] = '10';
  /* blocked_users */  /* Master */ $handler->display->display_options['filters']['combine']['expose']['autocomplete_min_chars'] = '0';
  /* blocked_users */  /* Master */ $handler->display->display_options['filters']['combine']['expose']['autocomplete_raw_suggestion'] = 1;
  /* blocked_users */  /* Master */ $handler->display->display_options['filters']['combine']['expose']['autocomplete_raw_dropdown'] = 1;
  /* blocked_users */  /* Master */ $handler->display->display_options['filters']['combine']['expose']['autocomplete_dependent'] = 0;
  /* blocked_users */  /* Master */ $handler->display->display_options['filters']['combine']['fields'] = array(
  /* blocked_users */  /* Master */   'field_name_last' => 'field_name_last',
  /* blocked_users */  /* Master */   'field_name_first' => 'field_name_first',
  /* blocked_users */  /* Master */   'nid' => 'nid',
  /* blocked_users */  /* Master */   'title' => 'title',
  /* blocked_users */  /* Master */ );
  /* blocked_users */  /* Master */ /* Filter criterion: Content: Type */
  /* blocked_users */  /* Master */ $handler->display->display_options['filters']['type']['id'] = 'type';
  /* blocked_users */  /* Master */ $handler->display->display_options['filters']['type']['table'] = 'node';
  /* blocked_users */  /* Master */ $handler->display->display_options['filters']['type']['field'] = 'type';
  /* blocked_users */  /* Master */ $handler->display->display_options['filters']['type']['relationship'] = 'og_membership_related_node_group';
  /* blocked_users */  /* Master */ $handler->display->display_options['filters']['type']['group'] = 1;
  /* blocked_users */  /* Master */ $handler->display->display_options['filters']['type']['exposed'] = TRUE;
  /* blocked_users */  /* Master */ $handler->display->display_options['filters']['type']['expose']['operator_id'] = 'type_op';
  /* blocked_users */  /* Master */ $handler->display->display_options['filters']['type']['expose']['label'] = 'Group Type';
  /* blocked_users */  /* Master */ $handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
  /* blocked_users */  /* Master */ $handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';
  /* blocked_users */  /* Master */ $handler->display->display_options['filters']['type']['expose']['multiple'] = TRUE;
  /* blocked_users */  /* Master */ $handler->display->display_options['filters']['type']['expose']['remember_roles'] = array(
  /* blocked_users */  /* Master */   2 => '2',
  /* blocked_users */  /* Master */   1 => 0,
  /* blocked_users */  /* Master */   9 => 0,
  /* blocked_users */  /* Master */   10 => 0,
  /* blocked_users */  /* Master */ );

  /* blocked_users */ /* Display: Page */
  /* blocked_users */  /* Page */ $handler = $view->new_display('page', 'Page', 'page');
  /* blocked_users */  /* Page */ $handler->display->display_options['path'] = 'admin/people/blocked-users';
  /* blocked_users */  /* Page */ $handler->display->display_options['menu']['type'] = 'tab';
  /* blocked_users */  /* Page */ $handler->display->display_options['menu']['title'] = 'Blocked users';
  /* blocked_users */  /* Page */ $handler->display->display_options['menu']['weight'] = '10';
  /* blocked_users */  /* Page */ $handler->display->display_options['menu']['name'] = 'management';
  /* blocked_users */  /* Page */ $handler->display->display_options['menu']['context'] = 0;
  /* blocked_users */  /* Page */ $handler->display->display_options['menu']['context_only_inline'] = 0;
  /* blocked_users */ $translatables['blocked_users'] = array(
  /* blocked_users */   t('Master'),
  /* blocked_users */   t('Blocked Users'),
  /* blocked_users */   t('more'),
  /* blocked_users */   t('Apply'),
  /* blocked_users */   t('Reset'),
  /* blocked_users */   t('Sort by'),
  /* blocked_users */   t('Asc'),
  /* blocked_users */   t('Desc'),
  /* blocked_users */   t('Items per page'),
  /* blocked_users */   t('- All -'),
  /* blocked_users */   t('Offset'),
  /* blocked_users */   t('« first'),
  /* blocked_users */   t('‹ previous'),
  /* blocked_users */   t('next ›'),
  /* blocked_users */   t('last »'),
  /* blocked_users */   t('user from OG membership'),
  /* blocked_users */   t('Group node from OG membership'),
  /* blocked_users */   t('OG membership'),
  /* blocked_users */   t('- Choose an operation -'),
  /* blocked_users */   t('ID'),
  /* blocked_users */   t('.'),
  /* blocked_users */   t(','),
  /* blocked_users */   t('Group Type'),
  /* blocked_users */   t('User'),
  /* blocked_users */   t('[field_name_first] [field_name_last] ([name])'),
  /* blocked_users */   t('Group'),
  /* blocked_users */   t('[title] ([nid])'),
  /* blocked_users */   t('Search'),
  /* blocked_users */   t('User name, nid or title'),
  /* blocked_users */   t('Page'),
  /* blocked_users */ );
  $export['blocked_users'] = $view;

  /* communities */ $view = new view();
  /* communities */ $view->name = 'communities';
  /* communities */ $view->description = '';
  /* communities */ $view->tag = 'default';
  /* communities */ $view->base_table = 'node';
  /* communities */ $view->human_name = 'Communities';
  /* communities */ $view->core = 7;
  /* communities */ $view->api_version = '3.0';
  /* communities */ $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* communities */ /* Display: Master */
  /* communities */  /* Master */ $handler = $view->new_display('default', 'Master', 'default');
  /* communities */  /* Master */ $handler->display->display_options['title'] = 'GlobalNET Partners';
  /* communities */  /* Master */ $handler->display->display_options['css_class'] = 'community-listing';
  /* communities */  /* Master */ $handler->display->display_options['use_more_always'] = FALSE;
  /* communities */  /* Master */ $handler->display->display_options['group_by'] = TRUE;
  /* communities */  /* Master */ $handler->display->display_options['access']['type'] = 'perm';
  /* communities */  /* Master */ $handler->display->display_options['cache']['type'] = 'none';
  /* communities */  /* Master */ $handler->display->display_options['query']['type'] = 'views_query';
  /* communities */  /* Master */ $handler->display->display_options['exposed_form']['type'] = 'basic';
  /* communities */  /* Master */ $handler->display->display_options['pager']['type'] = 'none';
  /* communities */  /* Master */ $handler->display->display_options['style_plugin'] = 'default';
  /* communities */  /* Master */ $handler->display->display_options['style_options']['row_class'] = 'community-listing-item';
  /* communities */  /* Master */ $handler->display->display_options['row_plugin'] = 'fields';
  /* communities */  /* Master */ $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* communities */  /* Master */ /* Relationship: OG membership: OG membership from Node group */
  /* communities */  /* Master */ $handler->display->display_options['relationships']['og_membership_rel_group']['id'] = 'og_membership_rel_group';
  /* communities */  /* Master */ $handler->display->display_options['relationships']['og_membership_rel_group']['table'] = 'node';
  /* communities */  /* Master */ $handler->display->display_options['relationships']['og_membership_rel_group']['field'] = 'og_membership_rel_group';
  /* communities */  /* Master */ $handler->display->display_options['relationships']['og_membership_rel_group']['required'] = TRUE;
  /* communities */  /* Master */ /* Relationship: OG membership: User from OG membership */
  /* communities */  /* Master */ $handler->display->display_options['relationships']['og_membership_related_user']['id'] = 'og_membership_related_user';
  /* communities */  /* Master */ $handler->display->display_options['relationships']['og_membership_related_user']['table'] = 'og_membership';
  /* communities */  /* Master */ $handler->display->display_options['relationships']['og_membership_related_user']['field'] = 'og_membership_related_user';
  /* communities */  /* Master */ $handler->display->display_options['relationships']['og_membership_related_user']['relationship'] = 'og_membership_rel_group';
  /* communities */  /* Master */ $handler->display->display_options['relationships']['og_membership_related_user']['required'] = TRUE;
  /* communities */  /* Master */ /* Field: Content: Title */
  /* communities */  /* Master */ $handler->display->display_options['fields']['title']['id'] = 'title';
  /* communities */  /* Master */ $handler->display->display_options['fields']['title']['table'] = 'node';
  /* communities */  /* Master */ $handler->display->display_options['fields']['title']['field'] = 'title';
  /* communities */  /* Master */ $handler->display->display_options['fields']['title']['label'] = '';
  /* communities */  /* Master */ $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  /* communities */  /* Master */ $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  /* communities */  /* Master */ $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* communities */  /* Master */ $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* communities */  /* Master */ /* Field: Content: Small Logo */
  /* communities */  /* Master */ $handler->display->display_options['fields']['field_logo']['id'] = 'field_logo';
  /* communities */  /* Master */ $handler->display->display_options['fields']['field_logo']['table'] = 'field_data_field_logo';
  /* communities */  /* Master */ $handler->display->display_options['fields']['field_logo']['field'] = 'field_logo';
  /* communities */  /* Master */ $handler->display->display_options['fields']['field_logo']['label'] = '';
  /* communities */  /* Master */ $handler->display->display_options['fields']['field_logo']['exclude'] = TRUE;
  /* communities */  /* Master */ $handler->display->display_options['fields']['field_logo']['element_type'] = '0';
  /* communities */  /* Master */ $handler->display->display_options['fields']['field_logo']['element_label_colon'] = FALSE;
  /* communities */  /* Master */ $handler->display->display_options['fields']['field_logo']['element_wrapper_type'] = '0';
  /* communities */  /* Master */ $handler->display->display_options['fields']['field_logo']['element_default_classes'] = FALSE;
  /* communities */  /* Master */ $handler->display->display_options['fields']['field_logo']['click_sort_column'] = 'fid';
  /* communities */  /* Master */ $handler->display->display_options['fields']['field_logo']['settings'] = array(
  /* communities */  /* Master */   'image_style' => 'medium',
  /* communities */  /* Master */   'image_link' => 'content',
  /* communities */  /* Master */   'field_formatter_class' => '',
  /* communities */  /* Master */ );
  /* communities */  /* Master */ $handler->display->display_options['fields']['field_logo']['group_column'] = 'entity_id';
  /* communities */  /* Master */ $handler->display->display_options['fields']['field_logo']['field_api_classes'] = TRUE;
  /* communities */  /* Master */ /* Field: COUNT(DISTINCT User: Uid) */
  /* communities */  /* Master */ $handler->display->display_options['fields']['uid']['id'] = 'uid';
  /* communities */  /* Master */ $handler->display->display_options['fields']['uid']['table'] = 'users';
  /* communities */  /* Master */ $handler->display->display_options['fields']['uid']['field'] = 'uid';
  /* communities */  /* Master */ $handler->display->display_options['fields']['uid']['relationship'] = 'og_membership_related_user';
  /* communities */  /* Master */ $handler->display->display_options['fields']['uid']['group_type'] = 'count_distinct';
  /* communities */  /* Master */ $handler->display->display_options['fields']['uid']['label'] = '';
  /* communities */  /* Master */ $handler->display->display_options['fields']['uid']['exclude'] = TRUE;
  /* communities */  /* Master */ $handler->display->display_options['fields']['uid']['alter']['alter_text'] = TRUE;
  /* communities */  /* Master */ $handler->display->display_options['fields']['uid']['alter']['text'] = '[uid] Members';
  /* communities */  /* Master */ $handler->display->display_options['fields']['uid']['element_label_colon'] = FALSE;
  /* communities */  /* Master */ /* Field: Content: Body */
  /* communities */  /* Master */ $handler->display->display_options['fields']['body']['id'] = 'body';
  /* communities */  /* Master */ $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  /* communities */  /* Master */ $handler->display->display_options['fields']['body']['field'] = 'body';
  /* communities */  /* Master */ $handler->display->display_options['fields']['body']['label'] = '';
  /* communities */  /* Master */ $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  /* communities */  /* Master */ $handler->display->display_options['fields']['body']['element_type'] = '0';
  /* communities */  /* Master */ $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* communities */  /* Master */ $handler->display->display_options['fields']['body']['element_wrapper_type'] = '0';
  /* communities */  /* Master */ $handler->display->display_options['fields']['body']['element_default_classes'] = FALSE;
  /* communities */  /* Master */ $handler->display->display_options['fields']['body']['settings'] = array(
  /* communities */  /* Master */   'field_formatter_class' => '',
  /* communities */  /* Master */ );
  /* communities */  /* Master */ $handler->display->display_options['fields']['body']['group_columns'] = array(
  /* communities */  /* Master */   'language' => 'language',
  /* communities */  /* Master */   'format' => 'format',
  /* communities */  /* Master */ );
  /* communities */  /* Master */ $handler->display->display_options['fields']['body']['field_api_classes'] = TRUE;
  /* communities */  /* Master */ /* Field: Global: Custom text */
  /* communities */  /* Master */ $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  /* communities */  /* Master */ $handler->display->display_options['fields']['nothing']['table'] = 'views';
  /* communities */  /* Master */ $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  /* communities */  /* Master */ $handler->display->display_options['fields']['nothing']['label'] = '';
  /* communities */  /* Master */ $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="community__image">
  [field_logo]
</div>
<div class="community__name">
<div class = "inner">
  [title]
</div>
</div>
<div class="community__description">
  [body]
</div>
<div class="community__members">
  [uid]
</div>';
  /* communities */  /* Master */ $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* communities */  /* Master */ /* Sort criterion: Content: Title */
  /* communities */  /* Master */ $handler->display->display_options['sorts']['title']['id'] = 'title';
  /* communities */  /* Master */ $handler->display->display_options['sorts']['title']['table'] = 'node';
  /* communities */  /* Master */ $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* communities */  /* Master */ /* Filter criterion: Content: Published */
  /* communities */  /* Master */ $handler->display->display_options['filters']['status']['id'] = 'status';
  /* communities */  /* Master */ $handler->display->display_options['filters']['status']['table'] = 'node';
  /* communities */  /* Master */ $handler->display->display_options['filters']['status']['field'] = 'status';
  /* communities */  /* Master */ $handler->display->display_options['filters']['status']['value'] = 1;
  /* communities */  /* Master */ $handler->display->display_options['filters']['status']['group'] = 1;
  /* communities */  /* Master */ $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* communities */  /* Master */ /* Filter criterion: Content: Type */
  /* communities */  /* Master */ $handler->display->display_options['filters']['type']['id'] = 'type';
  /* communities */  /* Master */ $handler->display->display_options['filters']['type']['table'] = 'node';
  /* communities */  /* Master */ $handler->display->display_options['filters']['type']['field'] = 'type';
  /* communities */  /* Master */ $handler->display->display_options['filters']['type']['value'] = array(
  /* communities */  /* Master */   'organization' => 'organization',
  /* communities */  /* Master */ );

  /* communities */ /* Display: Page */
  /* communities */  /* Page */ $handler = $view->new_display('page', 'Page', 'page_community_listing');
  /* communities */  /* Page */ $handler->display->display_options['path'] = 'partners';
  /* communities */ $translatables['communities'] = array(
  /* communities */   t('Master'),
  /* communities */   t('GlobalNET Partners'),
  /* communities */   t('more'),
  /* communities */   t('Apply'),
  /* communities */   t('Reset'),
  /* communities */   t('Sort by'),
  /* communities */   t('Asc'),
  /* communities */   t('Desc'),
  /* communities */   t('OG membership from node group'),
  /* communities */   t('user from OG membership'),
  /* communities */   t('[uid] Members'),
  /* communities */   t('<div class="community__image">
  [field_logo]
</div>
<div class="community__name">
<div class = "inner">
  [title]
</div>
</div>
<div class="community__description">
  [body]
</div>
<div class="community__members">
  [uid]
</div>'),
  /* communities */   t('Page'),
  /* communities */ );
  $export['communities'] = $view;

  /* groups_manage_unsubscribe */ $view = new view();
  /* groups_manage_unsubscribe */ $view->name = 'groups_manage_unsubscribe';
  /* groups_manage_unsubscribe */ $view->description = 'Displays user groups for different contexts.';
  /* groups_manage_unsubscribe */ $view->tag = 'group';
  /* groups_manage_unsubscribe */ $view->base_table = 'og_membership';
  /* groups_manage_unsubscribe */ $view->human_name = 'Groups Manage/Unsubscribe';
  /* groups_manage_unsubscribe */ $view->core = 7;
  /* groups_manage_unsubscribe */ $view->api_version = '3.0';
  /* groups_manage_unsubscribe */ $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* groups_manage_unsubscribe */ /* Display: Master */
  /* groups_manage_unsubscribe */  /* Master */ $handler = $view->new_display('default', 'Master', 'default');
  /* groups_manage_unsubscribe */  /* Master */ $handler->display->display_options['use_ajax'] = TRUE;
  /* groups_manage_unsubscribe */  /* Master */ $handler->display->display_options['use_more_always'] = FALSE;
  /* groups_manage_unsubscribe */  /* Master */ $handler->display->display_options['access']['type'] = 'gn2_og_manager_has_access';
  /* groups_manage_unsubscribe */  /* Master */ $handler->display->display_options['access']['roles'] = array(
  /* groups_manage_unsubscribe */  /* Master */   'org_manager' => 'org_manager',
  /* groups_manage_unsubscribe */  /* Master */   'group_manager' => 'group_manager',
  /* groups_manage_unsubscribe */  /* Master */ );
  /* groups_manage_unsubscribe */  /* Master */ $handler->display->display_options['cache']['type'] = 'none';
  /* groups_manage_unsubscribe */  /* Master */ $handler->display->display_options['query']['type'] = 'views_query';
  /* groups_manage_unsubscribe */  /* Master */ $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  /* groups_manage_unsubscribe */  /* Master */ $handler->display->display_options['exposed_form']['type'] = 'basic';
  /* groups_manage_unsubscribe */  /* Master */ $handler->display->display_options['pager']['type'] = 'some';
  /* groups_manage_unsubscribe */  /* Master */ $handler->display->display_options['pager']['options']['items_per_page'] = '30';
  /* groups_manage_unsubscribe */  /* Master */ $handler->display->display_options['pager']['options']['offset'] = '0';
  /* groups_manage_unsubscribe */  /* Master */ $handler->display->display_options['style_plugin'] = 'default';
  /* groups_manage_unsubscribe */  /* Master */ $handler->display->display_options['row_plugin'] = 'fields';
  /* groups_manage_unsubscribe */  /* Master */ /* Header: Global: Result summary */
  /* groups_manage_unsubscribe */  /* Master */ $handler->display->display_options['header']['result']['id'] = 'result';
  /* groups_manage_unsubscribe */  /* Master */ $handler->display->display_options['header']['result']['table'] = 'views';
  /* groups_manage_unsubscribe */  /* Master */ $handler->display->display_options['header']['result']['field'] = 'result';
  /* groups_manage_unsubscribe */  /* Master */ /* No results behavior: Global: Text area */
  /* groups_manage_unsubscribe */  /* Master */ $handler->display->display_options['empty']['area']['id'] = 'area';
  /* groups_manage_unsubscribe */  /* Master */ $handler->display->display_options['empty']['area']['table'] = 'views';
  /* groups_manage_unsubscribe */  /* Master */ $handler->display->display_options['empty']['area']['field'] = 'area';
  /* groups_manage_unsubscribe */  /* Master */ $handler->display->display_options['empty']['area']['content'] = 'User is not a member of any group.';
  /* groups_manage_unsubscribe */  /* Master */ /* Relationship: OG membership: Group Node from OG membership */
  /* groups_manage_unsubscribe */  /* Master */ $handler->display->display_options['relationships']['og_membership_related_node_group']['id'] = 'og_membership_related_node_group';
  /* groups_manage_unsubscribe */  /* Master */ $handler->display->display_options['relationships']['og_membership_related_node_group']['table'] = 'og_membership';
  /* groups_manage_unsubscribe */  /* Master */ $handler->display->display_options['relationships']['og_membership_related_node_group']['field'] = 'og_membership_related_node_group';
  /* groups_manage_unsubscribe */  /* Master */ /* Relationship: Content: Author */
  /* groups_manage_unsubscribe */  /* Master */ $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  /* groups_manage_unsubscribe */  /* Master */ $handler->display->display_options['relationships']['uid']['table'] = 'node';
  /* groups_manage_unsubscribe */  /* Master */ $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* groups_manage_unsubscribe */  /* Master */ $handler->display->display_options['relationships']['uid']['relationship'] = 'og_membership_related_node_group';
  /* groups_manage_unsubscribe */  /* Master */ /* Field: Content: Title */
  /* groups_manage_unsubscribe */  /* Master */ $handler->display->display_options['fields']['title']['id'] = 'title';
  /* groups_manage_unsubscribe */  /* Master */ $handler->display->display_options['fields']['title']['table'] = 'node';
  /* groups_manage_unsubscribe */  /* Master */ $handler->display->display_options['fields']['title']['field'] = 'title';
  /* groups_manage_unsubscribe */  /* Master */ $handler->display->display_options['fields']['title']['relationship'] = 'og_membership_related_node_group';
  /* groups_manage_unsubscribe */  /* Master */ $handler->display->display_options['fields']['title']['label'] = 'Group';
  /* groups_manage_unsubscribe */  /* Master */ $handler->display->display_options['fields']['title']['hide_alter_empty'] = FALSE;
  /* groups_manage_unsubscribe */  /* Master */ /* Field: OG membership: Created */
  /* groups_manage_unsubscribe */  /* Master */ $handler->display->display_options['fields']['created']['id'] = 'created';
  /* groups_manage_unsubscribe */  /* Master */ $handler->display->display_options['fields']['created']['table'] = 'og_membership';
  /* groups_manage_unsubscribe */  /* Master */ $handler->display->display_options['fields']['created']['field'] = 'created';
  /* groups_manage_unsubscribe */  /* Master */ $handler->display->display_options['fields']['created']['label'] = 'Member since';
  /* groups_manage_unsubscribe */  /* Master */ $handler->display->display_options['fields']['created']['hide_alter_empty'] = FALSE;
  /* groups_manage_unsubscribe */  /* Master */ $handler->display->display_options['fields']['created']['date_format'] = 'time ago';
  /* groups_manage_unsubscribe */  /* Master */ /* Contextual filter: We pass the user ID as the Entity ID. */
  /* groups_manage_unsubscribe */  /* Master */ $handler->display->display_options['arguments']['etid']['id'] = 'etid';
  /* groups_manage_unsubscribe */  /* Master */ $handler->display->display_options['arguments']['etid']['table'] = 'og_membership';
  /* groups_manage_unsubscribe */  /* Master */ $handler->display->display_options['arguments']['etid']['field'] = 'etid';
  /* groups_manage_unsubscribe */  /* Master */ $handler->display->display_options['arguments']['etid']['ui_name'] = 'We pass the user ID as the Entity ID.';
  /* groups_manage_unsubscribe */  /* Master */ $handler->display->display_options['arguments']['etid']['default_action'] = 'default';
  /* groups_manage_unsubscribe */  /* Master */ $handler->display->display_options['arguments']['etid']['title_enable'] = TRUE;
  /* groups_manage_unsubscribe */  /* Master */ $handler->display->display_options['arguments']['etid']['title'] = '%1\'s groups';
  /* groups_manage_unsubscribe */  /* Master */ $handler->display->display_options['arguments']['etid']['default_argument_type'] = 'current_user';
  /* groups_manage_unsubscribe */  /* Master */ $handler->display->display_options['arguments']['etid']['summary']['number_of_records'] = '0';
  /* groups_manage_unsubscribe */  /* Master */ $handler->display->display_options['arguments']['etid']['summary']['format'] = 'default_summary';
  /* groups_manage_unsubscribe */  /* Master */ $handler->display->display_options['arguments']['etid']['summary_options']['items_per_page'] = '25';
  /* groups_manage_unsubscribe */  /* Master */ $handler->display->display_options['arguments']['etid']['specify_validation'] = TRUE;
  /* groups_manage_unsubscribe */  /* Master */ $handler->display->display_options['arguments']['etid']['validate']['type'] = 'user';
  /* groups_manage_unsubscribe */  /* Master */ /* Filter criterion: OG membership: State */
  /* groups_manage_unsubscribe */  /* Master */ $handler->display->display_options['filters']['state']['id'] = 'state';
  /* groups_manage_unsubscribe */  /* Master */ $handler->display->display_options['filters']['state']['table'] = 'og_membership';
  /* groups_manage_unsubscribe */  /* Master */ $handler->display->display_options['filters']['state']['field'] = 'state';
  /* groups_manage_unsubscribe */  /* Master */ $handler->display->display_options['filters']['state']['value'] = array(
  /* groups_manage_unsubscribe */  /* Master */   1 => '1',
  /* groups_manage_unsubscribe */  /* Master */ );
  /* groups_manage_unsubscribe */  /* Master */ /* Filter criterion: Content: Published */
  /* groups_manage_unsubscribe */  /* Master */ $handler->display->display_options['filters']['status']['id'] = 'status';
  /* groups_manage_unsubscribe */  /* Master */ $handler->display->display_options['filters']['status']['table'] = 'node';
  /* groups_manage_unsubscribe */  /* Master */ $handler->display->display_options['filters']['status']['field'] = 'status';
  /* groups_manage_unsubscribe */  /* Master */ $handler->display->display_options['filters']['status']['relationship'] = 'og_membership_related_node_group';
  /* groups_manage_unsubscribe */  /* Master */ $handler->display->display_options['filters']['status']['value'] = '1';
  /* groups_manage_unsubscribe */  /* Master */ /* Filter criterion: OG membership: Entity_type */
  /* groups_manage_unsubscribe */  /* Master */ $handler->display->display_options['filters']['entity_type']['id'] = 'entity_type';
  /* groups_manage_unsubscribe */  /* Master */ $handler->display->display_options['filters']['entity_type']['table'] = 'og_membership';
  /* groups_manage_unsubscribe */  /* Master */ $handler->display->display_options['filters']['entity_type']['field'] = 'entity_type';
  /* groups_manage_unsubscribe */  /* Master */ $handler->display->display_options['filters']['entity_type']['value'] = 'user';

  /* groups_manage_unsubscribe */ /* Display: Manage and Unsubscribe From Groups */
  /* groups_manage_unsubscribe */  /* Manage and Unsubscribe From Groups */ $handler = $view->new_display('page', 'Manage and Unsubscribe From Groups', 'page_1');
  /* groups_manage_unsubscribe */  /* Manage and Unsubscribe From Groups */ $handler->display->display_options['defaults']['title'] = FALSE;
  /* groups_manage_unsubscribe */  /* Manage and Unsubscribe From Groups */ $handler->display->display_options['title'] = 'Manage Your Group Memberships';
  /* groups_manage_unsubscribe */  /* Manage and Unsubscribe From Groups */ $handler->display->display_options['display_description'] = 'A view to bulk unsubscribe from groups ';
  /* groups_manage_unsubscribe */  /* Manage and Unsubscribe From Groups */ $handler->display->display_options['defaults']['pager'] = FALSE;
  /* groups_manage_unsubscribe */  /* Manage and Unsubscribe From Groups */ $handler->display->display_options['pager']['type'] = 'full';
  /* groups_manage_unsubscribe */  /* Manage and Unsubscribe From Groups */ $handler->display->display_options['pager']['options']['items_per_page'] = '100';
  /* groups_manage_unsubscribe */  /* Manage and Unsubscribe From Groups */ $handler->display->display_options['pager']['options']['offset'] = '0';
  /* groups_manage_unsubscribe */  /* Manage and Unsubscribe From Groups */ $handler->display->display_options['pager']['options']['id'] = '0';
  /* groups_manage_unsubscribe */  /* Manage and Unsubscribe From Groups */ $handler->display->display_options['pager']['options']['quantity'] = '9';
  /* groups_manage_unsubscribe */  /* Manage and Unsubscribe From Groups */ $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  /* groups_manage_unsubscribe */  /* Manage and Unsubscribe From Groups */ $handler->display->display_options['style_plugin'] = 'table';
  /* groups_manage_unsubscribe */  /* Manage and Unsubscribe From Groups */ $handler->display->display_options['style_options']['columns'] = array(
  /* groups_manage_unsubscribe */  /* Manage and Unsubscribe From Groups */   'gid' => 'gid',
  /* groups_manage_unsubscribe */  /* Manage and Unsubscribe From Groups */   'title' => 'title',
  /* groups_manage_unsubscribe */  /* Manage and Unsubscribe From Groups */   'type' => 'type',
  /* groups_manage_unsubscribe */  /* Manage and Unsubscribe From Groups */   'created' => 'created',
  /* groups_manage_unsubscribe */  /* Manage and Unsubscribe From Groups */   'nothing' => 'nothing',
  /* groups_manage_unsubscribe */  /* Manage and Unsubscribe From Groups */ );
  /* groups_manage_unsubscribe */  /* Manage and Unsubscribe From Groups */ $handler->display->display_options['style_options']['default'] = 'created';
  /* groups_manage_unsubscribe */  /* Manage and Unsubscribe From Groups */ $handler->display->display_options['style_options']['info'] = array(
  /* groups_manage_unsubscribe */  /* Manage and Unsubscribe From Groups */   'gid' => array(
  /* groups_manage_unsubscribe */  /* Manage and Unsubscribe From Groups */     'sortable' => 1,
  /* groups_manage_unsubscribe */  /* Manage and Unsubscribe From Groups */     'default_sort_order' => 'asc',
  /* groups_manage_unsubscribe */  /* Manage and Unsubscribe From Groups */     'align' => '',
  /* groups_manage_unsubscribe */  /* Manage and Unsubscribe From Groups */     'separator' => '',
  /* groups_manage_unsubscribe */  /* Manage and Unsubscribe From Groups */     'empty_column' => 0,
  /* groups_manage_unsubscribe */  /* Manage and Unsubscribe From Groups */   ),
  /* groups_manage_unsubscribe */  /* Manage and Unsubscribe From Groups */   'title' => array(
  /* groups_manage_unsubscribe */  /* Manage and Unsubscribe From Groups */     'sortable' => 1,
  /* groups_manage_unsubscribe */  /* Manage and Unsubscribe From Groups */     'default_sort_order' => 'asc',
  /* groups_manage_unsubscribe */  /* Manage and Unsubscribe From Groups */     'align' => '',
  /* groups_manage_unsubscribe */  /* Manage and Unsubscribe From Groups */     'separator' => '',
  /* groups_manage_unsubscribe */  /* Manage and Unsubscribe From Groups */     'empty_column' => 0,
  /* groups_manage_unsubscribe */  /* Manage and Unsubscribe From Groups */   ),
  /* groups_manage_unsubscribe */  /* Manage and Unsubscribe From Groups */   'type' => array(
  /* groups_manage_unsubscribe */  /* Manage and Unsubscribe From Groups */     'sortable' => 0,
  /* groups_manage_unsubscribe */  /* Manage and Unsubscribe From Groups */     'default_sort_order' => 'asc',
  /* groups_manage_unsubscribe */  /* Manage and Unsubscribe From Groups */     'align' => '',
  /* groups_manage_unsubscribe */  /* Manage and Unsubscribe From Groups */     'separator' => '',
  /* groups_manage_unsubscribe */  /* Manage and Unsubscribe From Groups */     'empty_column' => 0,
  /* groups_manage_unsubscribe */  /* Manage and Unsubscribe From Groups */   ),
  /* groups_manage_unsubscribe */  /* Manage and Unsubscribe From Groups */   'created' => array(
  /* groups_manage_unsubscribe */  /* Manage and Unsubscribe From Groups */     'sortable' => 1,
  /* groups_manage_unsubscribe */  /* Manage and Unsubscribe From Groups */     'default_sort_order' => 'desc',
  /* groups_manage_unsubscribe */  /* Manage and Unsubscribe From Groups */     'align' => '',
  /* groups_manage_unsubscribe */  /* Manage and Unsubscribe From Groups */     'separator' => '',
  /* groups_manage_unsubscribe */  /* Manage and Unsubscribe From Groups */     'empty_column' => 0,
  /* groups_manage_unsubscribe */  /* Manage and Unsubscribe From Groups */   ),
  /* groups_manage_unsubscribe */  /* Manage and Unsubscribe From Groups */   'nothing' => array(
  /* groups_manage_unsubscribe */  /* Manage and Unsubscribe From Groups */     'align' => '',
  /* groups_manage_unsubscribe */  /* Manage and Unsubscribe From Groups */     'separator' => '',
  /* groups_manage_unsubscribe */  /* Manage and Unsubscribe From Groups */     'empty_column' => 0,
  /* groups_manage_unsubscribe */  /* Manage and Unsubscribe From Groups */   ),
  /* groups_manage_unsubscribe */  /* Manage and Unsubscribe From Groups */ );
  /* groups_manage_unsubscribe */  /* Manage and Unsubscribe From Groups */ $handler->display->display_options['defaults']['style_options'] = FALSE;
  /* groups_manage_unsubscribe */  /* Manage and Unsubscribe From Groups */ $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  /* groups_manage_unsubscribe */  /* Manage and Unsubscribe From Groups */ $handler->display->display_options['defaults']['row_options'] = FALSE;
  /* groups_manage_unsubscribe */  /* Manage and Unsubscribe From Groups */ $handler->display->display_options['defaults']['header'] = FALSE;
  /* groups_manage_unsubscribe */  /* Manage and Unsubscribe From Groups */ /* Header: Global: Result summary */
  /* groups_manage_unsubscribe */  /* Manage and Unsubscribe From Groups */ $handler->display->display_options['header']['result']['id'] = 'result';
  /* groups_manage_unsubscribe */  /* Manage and Unsubscribe From Groups */ $handler->display->display_options['header']['result']['table'] = 'views';
  /* groups_manage_unsubscribe */  /* Manage and Unsubscribe From Groups */ $handler->display->display_options['header']['result']['field'] = 'result';
  /* groups_manage_unsubscribe */  /* Manage and Unsubscribe From Groups */ $handler->display->display_options['header']['result']['content'] = '<b>Displaying @start - @end of @total groups</b>';
  /* groups_manage_unsubscribe */  /* Manage and Unsubscribe From Groups */ /* Header: Global: Text area */
  /* groups_manage_unsubscribe */  /* Manage and Unsubscribe From Groups */ $handler->display->display_options['header']['area']['id'] = 'area';
  /* groups_manage_unsubscribe */  /* Manage and Unsubscribe From Groups */ $handler->display->display_options['header']['area']['table'] = 'views';
  /* groups_manage_unsubscribe */  /* Manage and Unsubscribe From Groups */ $handler->display->display_options['header']['area']['field'] = 'area';
  /* groups_manage_unsubscribe */  /* Manage and Unsubscribe From Groups */ $handler->display->display_options['header']['area']['label'] = 'NOTE';
  /* groups_manage_unsubscribe */  /* Manage and Unsubscribe From Groups */ $handler->display->display_options['header']['area']['content'] = '<br><br><b>NOTE:</b> If you want to unsubscribe from a group, make sure you are not the Author of the group, or a group manager. You cannot unsubscribe from a group if you are the group author, or are a manager of the group.';
  /* groups_manage_unsubscribe */  /* Manage and Unsubscribe From Groups */ $handler->display->display_options['header']['area']['format'] = 'filtered_html';
  /* groups_manage_unsubscribe */  /* Manage and Unsubscribe From Groups */ $handler->display->display_options['defaults']['fields'] = FALSE;
  /* groups_manage_unsubscribe */  /* Manage and Unsubscribe From Groups */ /* Field: Content: Nid */
  /* groups_manage_unsubscribe */  /* Manage and Unsubscribe From Groups */ $handler->display->display_options['fields']['nid']['id'] = 'nid';
  /* groups_manage_unsubscribe */  /* Manage and Unsubscribe From Groups */ $handler->display->display_options['fields']['nid']['table'] = 'node';
  /* groups_manage_unsubscribe */  /* Manage and Unsubscribe From Groups */ $handler->display->display_options['fields']['nid']['field'] = 'nid';
  /* groups_manage_unsubscribe */  /* Manage and Unsubscribe From Groups */ $handler->display->display_options['fields']['nid']['relationship'] = 'og_membership_related_node_group';
  /* groups_manage_unsubscribe */  /* Manage and Unsubscribe From Groups */ $handler->display->display_options['fields']['nid']['label'] = 'Group ID';
  /* groups_manage_unsubscribe */  /* Manage and Unsubscribe From Groups */ /* Field: Content: Title */
  /* groups_manage_unsubscribe */  /* Manage and Unsubscribe From Groups */ $handler->display->display_options['fields']['title']['id'] = 'title';
  /* groups_manage_unsubscribe */  /* Manage and Unsubscribe From Groups */ $handler->display->display_options['fields']['title']['table'] = 'node';
  /* groups_manage_unsubscribe */  /* Manage and Unsubscribe From Groups */ $handler->display->display_options['fields']['title']['field'] = 'title';
  /* groups_manage_unsubscribe */  /* Manage and Unsubscribe From Groups */ $handler->display->display_options['fields']['title']['relationship'] = 'og_membership_related_node_group';
  /* groups_manage_unsubscribe */  /* Manage and Unsubscribe From Groups */ $handler->display->display_options['fields']['title']['label'] = 'Group';
  /* groups_manage_unsubscribe */  /* Manage and Unsubscribe From Groups */ $handler->display->display_options['fields']['title']['hide_alter_empty'] = FALSE;
  /* groups_manage_unsubscribe */  /* Manage and Unsubscribe From Groups */ /* Field: User: Name */
  /* groups_manage_unsubscribe */  /* Manage and Unsubscribe From Groups */ $handler->display->display_options['fields']['name']['id'] = 'name';
  /* groups_manage_unsubscribe */  /* Manage and Unsubscribe From Groups */ $handler->display->display_options['fields']['name']['table'] = 'users';
  /* groups_manage_unsubscribe */  /* Manage and Unsubscribe From Groups */ $handler->display->display_options['fields']['name']['field'] = 'name';
  /* groups_manage_unsubscribe */  /* Manage and Unsubscribe From Groups */ $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  /* groups_manage_unsubscribe */  /* Manage and Unsubscribe From Groups */ $handler->display->display_options['fields']['name']['label'] = 'Author';
  /* groups_manage_unsubscribe */  /* Manage and Unsubscribe From Groups */ /* Field: UIDfromContext */
  /* groups_manage_unsubscribe */  /* Manage and Unsubscribe From Groups */ $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  /* groups_manage_unsubscribe */  /* Manage and Unsubscribe From Groups */ $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  /* groups_manage_unsubscribe */  /* Manage and Unsubscribe From Groups */ $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  /* groups_manage_unsubscribe */  /* Manage and Unsubscribe From Groups */ $handler->display->display_options['fields']['nothing_1']['ui_name'] = 'UIDfromContext';
  /* groups_manage_unsubscribe */  /* Manage and Unsubscribe From Groups */ $handler->display->display_options['fields']['nothing_1']['alter']['text'] = '%1';
  /* groups_manage_unsubscribe */  /* Manage and Unsubscribe From Groups */ /* Field: Content: Author uid */
  /* groups_manage_unsubscribe */  /* Manage and Unsubscribe From Groups */ $handler->display->display_options['fields']['uid']['id'] = 'uid';
  /* groups_manage_unsubscribe */  /* Manage and Unsubscribe From Groups */ $handler->display->display_options['fields']['uid']['table'] = 'node';
  /* groups_manage_unsubscribe */  /* Manage and Unsubscribe From Groups */ $handler->display->display_options['fields']['uid']['field'] = 'uid';
  /* groups_manage_unsubscribe */  /* Manage and Unsubscribe From Groups */ $handler->display->display_options['fields']['uid']['relationship'] = 'og_membership_related_node_group';
  /* groups_manage_unsubscribe */  /* Manage and Unsubscribe From Groups */ $handler->display->display_options['fields']['uid']['link_to_user'] = FALSE;
  /* groups_manage_unsubscribe */  /* Manage and Unsubscribe From Groups */ /* Field: Content: Type */
  /* groups_manage_unsubscribe */  /* Manage and Unsubscribe From Groups */ $handler->display->display_options['fields']['type']['id'] = 'type';
  /* groups_manage_unsubscribe */  /* Manage and Unsubscribe From Groups */ $handler->display->display_options['fields']['type']['table'] = 'node';
  /* groups_manage_unsubscribe */  /* Manage and Unsubscribe From Groups */ $handler->display->display_options['fields']['type']['field'] = 'type';
  /* groups_manage_unsubscribe */  /* Manage and Unsubscribe From Groups */ $handler->display->display_options['fields']['type']['relationship'] = 'og_membership_related_node_group';
  /* groups_manage_unsubscribe */  /* Manage and Unsubscribe From Groups */ $handler->display->display_options['fields']['type']['label'] = 'Group Type';
  /* groups_manage_unsubscribe */  /* Manage and Unsubscribe From Groups */ /* Field: GN2 OG: Group Managers */
  /* groups_manage_unsubscribe */  /* Manage and Unsubscribe From Groups */ $handler->display->display_options['fields']['gn2_og_handler_group_managers_list']['id'] = 'gn2_og_handler_group_managers_list';
  /* groups_manage_unsubscribe */  /* Manage and Unsubscribe From Groups */ $handler->display->display_options['fields']['gn2_og_handler_group_managers_list']['table'] = 'node';
  /* groups_manage_unsubscribe */  /* Manage and Unsubscribe From Groups */ $handler->display->display_options['fields']['gn2_og_handler_group_managers_list']['field'] = 'gn2_og_handler_group_managers_list';
  /* groups_manage_unsubscribe */  /* Manage and Unsubscribe From Groups */ $handler->display->display_options['fields']['gn2_og_handler_group_managers_list']['relationship'] = 'og_membership_related_node_group';
  /* groups_manage_unsubscribe */  /* Manage and Unsubscribe From Groups */ /* Field: OG membership: Created */
  /* groups_manage_unsubscribe */  /* Manage and Unsubscribe From Groups */ $handler->display->display_options['fields']['created']['id'] = 'created';
  /* groups_manage_unsubscribe */  /* Manage and Unsubscribe From Groups */ $handler->display->display_options['fields']['created']['table'] = 'og_membership';
  /* groups_manage_unsubscribe */  /* Manage and Unsubscribe From Groups */ $handler->display->display_options['fields']['created']['field'] = 'created';
  /* groups_manage_unsubscribe */  /* Manage and Unsubscribe From Groups */ $handler->display->display_options['fields']['created']['label'] = 'Joined';
  /* groups_manage_unsubscribe */  /* Manage and Unsubscribe From Groups */ $handler->display->display_options['fields']['created']['hide_alter_empty'] = FALSE;
  /* groups_manage_unsubscribe */  /* Manage and Unsubscribe From Groups */ $handler->display->display_options['fields']['created']['date_format'] = 'medium';
  /* groups_manage_unsubscribe */  /* Manage and Unsubscribe From Groups */ $handler->display->display_options['fields']['created']['second_date_format'] = 'date_format_globalnet_date';
  /* groups_manage_unsubscribe */  /* Manage and Unsubscribe From Groups */ /* Field: Views: Views Conditional */
  /* groups_manage_unsubscribe */  /* Manage and Unsubscribe From Groups */ $handler->display->display_options['fields']['views_conditional']['id'] = 'views_conditional';
  /* groups_manage_unsubscribe */  /* Manage and Unsubscribe From Groups */ $handler->display->display_options['fields']['views_conditional']['table'] = 'views_conditional';
  /* groups_manage_unsubscribe */  /* Manage and Unsubscribe From Groups */ $handler->display->display_options['fields']['views_conditional']['field'] = 'views_conditional';
  /* groups_manage_unsubscribe */  /* Manage and Unsubscribe From Groups */ $handler->display->display_options['fields']['views_conditional']['label'] = 'Manage your group memberships';
  /* groups_manage_unsubscribe */  /* Manage and Unsubscribe From Groups */ $handler->display->display_options['fields']['views_conditional']['element_label_colon'] = FALSE;
  /* groups_manage_unsubscribe */  /* Manage and Unsubscribe From Groups */ $handler->display->display_options['fields']['views_conditional']['if'] = 'name';
  /* groups_manage_unsubscribe */  /* Manage and Unsubscribe From Groups */ $handler->display->display_options['fields']['views_conditional']['condition'] = '1';
  /* groups_manage_unsubscribe */  /* Manage and Unsubscribe From Groups */ $handler->display->display_options['fields']['views_conditional']['equalto'] = '[nothing_1]';
  /* groups_manage_unsubscribe */  /* Manage and Unsubscribe From Groups */ $handler->display->display_options['fields']['views_conditional']['then'] = '<strong><a href="/node/[nid]/edit?destination=/dashboard/unsubscribe-groups">Edit Group</a></strong> or <a href="/group/node/[nid]/admin/people">Manage membership</a>';
  /* groups_manage_unsubscribe */  /* Manage and Unsubscribe From Groups */ $handler->display->display_options['fields']['views_conditional']['or'] = '<strong><a href="/group/node/[nid]/unsubscribe?destination=/dashboard/unsubscribe-groups">Leave this group</a></strong> ';
  /* groups_manage_unsubscribe */  /* Manage and Unsubscribe From Groups */ $handler->display->display_options['fields']['views_conditional']['strip_tags'] = 0;
  /* groups_manage_unsubscribe */  /* Manage and Unsubscribe From Groups */ $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  /* groups_manage_unsubscribe */  /* Manage and Unsubscribe From Groups */ $handler->display->display_options['defaults']['filters'] = FALSE;
  /* groups_manage_unsubscribe */  /* Manage and Unsubscribe From Groups */ /* Filter criterion: Content: Published */
  /* groups_manage_unsubscribe */  /* Manage and Unsubscribe From Groups */ $handler->display->display_options['filters']['status']['id'] = 'status';
  /* groups_manage_unsubscribe */  /* Manage and Unsubscribe From Groups */ $handler->display->display_options['filters']['status']['table'] = 'node';
  /* groups_manage_unsubscribe */  /* Manage and Unsubscribe From Groups */ $handler->display->display_options['filters']['status']['field'] = 'status';
  /* groups_manage_unsubscribe */  /* Manage and Unsubscribe From Groups */ $handler->display->display_options['filters']['status']['relationship'] = 'og_membership_related_node_group';
  /* groups_manage_unsubscribe */  /* Manage and Unsubscribe From Groups */ $handler->display->display_options['filters']['status']['value'] = '1';
  /* groups_manage_unsubscribe */  /* Manage and Unsubscribe From Groups */ /* Filter criterion: OG membership: Entity_type */
  /* groups_manage_unsubscribe */  /* Manage and Unsubscribe From Groups */ $handler->display->display_options['filters']['entity_type']['id'] = 'entity_type';
  /* groups_manage_unsubscribe */  /* Manage and Unsubscribe From Groups */ $handler->display->display_options['filters']['entity_type']['table'] = 'og_membership';
  /* groups_manage_unsubscribe */  /* Manage and Unsubscribe From Groups */ $handler->display->display_options['filters']['entity_type']['field'] = 'entity_type';
  /* groups_manage_unsubscribe */  /* Manage and Unsubscribe From Groups */ $handler->display->display_options['filters']['entity_type']['value'] = 'user';
  /* groups_manage_unsubscribe */  /* Manage and Unsubscribe From Groups */ /* Filter criterion: Content: Type */
  /* groups_manage_unsubscribe */  /* Manage and Unsubscribe From Groups */ $handler->display->display_options['filters']['type']['id'] = 'type';
  /* groups_manage_unsubscribe */  /* Manage and Unsubscribe From Groups */ $handler->display->display_options['filters']['type']['table'] = 'node';
  /* groups_manage_unsubscribe */  /* Manage and Unsubscribe From Groups */ $handler->display->display_options['filters']['type']['field'] = 'type';
  /* groups_manage_unsubscribe */  /* Manage and Unsubscribe From Groups */ $handler->display->display_options['filters']['type']['relationship'] = 'og_membership_related_node_group';
  /* groups_manage_unsubscribe */  /* Manage and Unsubscribe From Groups */ $handler->display->display_options['filters']['type']['operator'] = 'not in';
  /* groups_manage_unsubscribe */  /* Manage and Unsubscribe From Groups */ $handler->display->display_options['filters']['type']['value'] = array(
  /* groups_manage_unsubscribe */  /* Manage and Unsubscribe From Groups */   'organization' => 'organization',
  /* groups_manage_unsubscribe */  /* Manage and Unsubscribe From Groups */ );
  /* groups_manage_unsubscribe */  /* Manage and Unsubscribe From Groups */ /* Filter criterion: OG membership: Created */
  /* groups_manage_unsubscribe */  /* Manage and Unsubscribe From Groups */ $handler->display->display_options['filters']['created']['id'] = 'created';
  /* groups_manage_unsubscribe */  /* Manage and Unsubscribe From Groups */ $handler->display->display_options['filters']['created']['table'] = 'og_membership';
  /* groups_manage_unsubscribe */  /* Manage and Unsubscribe From Groups */ $handler->display->display_options['filters']['created']['field'] = 'created';
  /* groups_manage_unsubscribe */  /* Manage and Unsubscribe From Groups */ $handler->display->display_options['filters']['created']['relationship'] = 'og_membership_related_node_group';
  /* groups_manage_unsubscribe */  /* Manage and Unsubscribe From Groups */ $handler->display->display_options['filters']['created']['operator'] = '<=';
  /* groups_manage_unsubscribe */  /* Manage and Unsubscribe From Groups */ $handler->display->display_options['filters']['created']['exposed'] = TRUE;
  /* groups_manage_unsubscribe */  /* Manage and Unsubscribe From Groups */ $handler->display->display_options['filters']['created']['expose']['operator_id'] = 'created_op';
  /* groups_manage_unsubscribe */  /* Manage and Unsubscribe From Groups */ $handler->display->display_options['filters']['created']['expose']['label'] = 'Joined';
  /* groups_manage_unsubscribe */  /* Manage and Unsubscribe From Groups */ $handler->display->display_options['filters']['created']['expose']['use_operator'] = TRUE;
  /* groups_manage_unsubscribe */  /* Manage and Unsubscribe From Groups */ $handler->display->display_options['filters']['created']['expose']['operator'] = 'created_op';
  /* groups_manage_unsubscribe */  /* Manage and Unsubscribe From Groups */ $handler->display->display_options['filters']['created']['expose']['identifier'] = 'created';
  /* groups_manage_unsubscribe */  /* Manage and Unsubscribe From Groups */ $handler->display->display_options['filters']['created']['expose']['remember_roles'] = array(
  /* groups_manage_unsubscribe */  /* Manage and Unsubscribe From Groups */   2 => '2',
  /* groups_manage_unsubscribe */  /* Manage and Unsubscribe From Groups */   1 => 0,
  /* groups_manage_unsubscribe */  /* Manage and Unsubscribe From Groups */   9 => 0,
  /* groups_manage_unsubscribe */  /* Manage and Unsubscribe From Groups */   10 => 0,
  /* groups_manage_unsubscribe */  /* Manage and Unsubscribe From Groups */ );
  /* groups_manage_unsubscribe */  /* Manage and Unsubscribe From Groups */ /* Filter criterion: Content: Type */
  /* groups_manage_unsubscribe */  /* Manage and Unsubscribe From Groups */ $handler->display->display_options['filters']['type_1']['id'] = 'type_1';
  /* groups_manage_unsubscribe */  /* Manage and Unsubscribe From Groups */ $handler->display->display_options['filters']['type_1']['table'] = 'node';
  /* groups_manage_unsubscribe */  /* Manage and Unsubscribe From Groups */ $handler->display->display_options['filters']['type_1']['field'] = 'type';
  /* groups_manage_unsubscribe */  /* Manage and Unsubscribe From Groups */ $handler->display->display_options['filters']['type_1']['relationship'] = 'og_membership_related_node_group';
  /* groups_manage_unsubscribe */  /* Manage and Unsubscribe From Groups */ $handler->display->display_options['filters']['type_1']['value'] = array(
  /* groups_manage_unsubscribe */  /* Manage and Unsubscribe From Groups */   'course' => 'course',
  /* groups_manage_unsubscribe */  /* Manage and Unsubscribe From Groups */   'course_group' => 'course_group',
  /* groups_manage_unsubscribe */  /* Manage and Unsubscribe From Groups */   'program' => 'program',
  /* groups_manage_unsubscribe */  /* Manage and Unsubscribe From Groups */   'event' => 'event',
  /* groups_manage_unsubscribe */  /* Manage and Unsubscribe From Groups */   'group' => 'group',
  /* groups_manage_unsubscribe */  /* Manage and Unsubscribe From Groups */ );
  /* groups_manage_unsubscribe */  /* Manage and Unsubscribe From Groups */ $handler->display->display_options['filters']['type_1']['exposed'] = TRUE;
  /* groups_manage_unsubscribe */  /* Manage and Unsubscribe From Groups */ $handler->display->display_options['filters']['type_1']['expose']['operator_id'] = 'type_1_op';
  /* groups_manage_unsubscribe */  /* Manage and Unsubscribe From Groups */ $handler->display->display_options['filters']['type_1']['expose']['label'] = 'Type';
  /* groups_manage_unsubscribe */  /* Manage and Unsubscribe From Groups */ $handler->display->display_options['filters']['type_1']['expose']['use_operator'] = TRUE;
  /* groups_manage_unsubscribe */  /* Manage and Unsubscribe From Groups */ $handler->display->display_options['filters']['type_1']['expose']['operator'] = 'type_1_op';
  /* groups_manage_unsubscribe */  /* Manage and Unsubscribe From Groups */ $handler->display->display_options['filters']['type_1']['expose']['identifier'] = 'type_1';
  /* groups_manage_unsubscribe */  /* Manage and Unsubscribe From Groups */ $handler->display->display_options['filters']['type_1']['expose']['multiple'] = TRUE;
  /* groups_manage_unsubscribe */  /* Manage and Unsubscribe From Groups */ $handler->display->display_options['filters']['type_1']['expose']['remember_roles'] = array(
  /* groups_manage_unsubscribe */  /* Manage and Unsubscribe From Groups */   2 => '2',
  /* groups_manage_unsubscribe */  /* Manage and Unsubscribe From Groups */   1 => 0,
  /* groups_manage_unsubscribe */  /* Manage and Unsubscribe From Groups */   9 => 0,
  /* groups_manage_unsubscribe */  /* Manage and Unsubscribe From Groups */   10 => 0,
  /* groups_manage_unsubscribe */  /* Manage and Unsubscribe From Groups */ );
  /* groups_manage_unsubscribe */  /* Manage and Unsubscribe From Groups */ $handler->display->display_options['filters']['type_1']['expose']['reduce'] = TRUE;
  /* groups_manage_unsubscribe */  /* Manage and Unsubscribe From Groups */ /* Filter criterion: Content: Title */
  /* groups_manage_unsubscribe */  /* Manage and Unsubscribe From Groups */ $handler->display->display_options['filters']['title']['id'] = 'title';
  /* groups_manage_unsubscribe */  /* Manage and Unsubscribe From Groups */ $handler->display->display_options['filters']['title']['table'] = 'node';
  /* groups_manage_unsubscribe */  /* Manage and Unsubscribe From Groups */ $handler->display->display_options['filters']['title']['field'] = 'title';
  /* groups_manage_unsubscribe */  /* Manage and Unsubscribe From Groups */ $handler->display->display_options['filters']['title']['relationship'] = 'og_membership_related_node_group';
  /* groups_manage_unsubscribe */  /* Manage and Unsubscribe From Groups */ $handler->display->display_options['filters']['title']['operator'] = 'contains';
  /* groups_manage_unsubscribe */  /* Manage and Unsubscribe From Groups */ $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  /* groups_manage_unsubscribe */  /* Manage and Unsubscribe From Groups */ $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  /* groups_manage_unsubscribe */  /* Manage and Unsubscribe From Groups */ $handler->display->display_options['filters']['title']['expose']['label'] = 'Group Title';
  /* groups_manage_unsubscribe */  /* Manage and Unsubscribe From Groups */ $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  /* groups_manage_unsubscribe */  /* Manage and Unsubscribe From Groups */ $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  /* groups_manage_unsubscribe */  /* Manage and Unsubscribe From Groups */ $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
  /* groups_manage_unsubscribe */  /* Manage and Unsubscribe From Groups */   2 => '2',
  /* groups_manage_unsubscribe */  /* Manage and Unsubscribe From Groups */   1 => 0,
  /* groups_manage_unsubscribe */  /* Manage and Unsubscribe From Groups */   9 => 0,
  /* groups_manage_unsubscribe */  /* Manage and Unsubscribe From Groups */   10 => 0,
  /* groups_manage_unsubscribe */  /* Manage and Unsubscribe From Groups */ );
  /* groups_manage_unsubscribe */  /* Manage and Unsubscribe From Groups */ $handler->display->display_options['filters']['title']['expose']['autocomplete_items'] = '10';
  /* groups_manage_unsubscribe */  /* Manage and Unsubscribe From Groups */ $handler->display->display_options['filters']['title']['expose']['autocomplete_min_chars'] = '0';
  /* groups_manage_unsubscribe */  /* Manage and Unsubscribe From Groups */ $handler->display->display_options['filters']['title']['expose']['autocomplete_field'] = 'title';
  /* groups_manage_unsubscribe */  /* Manage and Unsubscribe From Groups */ $handler->display->display_options['filters']['title']['expose']['autocomplete_raw_suggestion'] = 1;
  /* groups_manage_unsubscribe */  /* Manage and Unsubscribe From Groups */ $handler->display->display_options['filters']['title']['expose']['autocomplete_raw_dropdown'] = 1;
  /* groups_manage_unsubscribe */  /* Manage and Unsubscribe From Groups */ $handler->display->display_options['filters']['title']['expose']['autocomplete_dependent'] = 0;
  /* groups_manage_unsubscribe */  /* Manage and Unsubscribe From Groups */ $handler->display->display_options['path'] = 'dashboard/unsubscribe-groups';
  /* groups_manage_unsubscribe */ $translatables['groups_manage_unsubscribe'] = array(
  /* groups_manage_unsubscribe */   t('Master'),
  /* groups_manage_unsubscribe */   t('more'),
  /* groups_manage_unsubscribe */   t('Apply'),
  /* groups_manage_unsubscribe */   t('Reset'),
  /* groups_manage_unsubscribe */   t('Sort by'),
  /* groups_manage_unsubscribe */   t('Asc'),
  /* groups_manage_unsubscribe */   t('Desc'),
  /* groups_manage_unsubscribe */   t('Displaying @start - @end of @total'),
  /* groups_manage_unsubscribe */   t('User is not a member of any group.'),
  /* groups_manage_unsubscribe */   t('Group node from OG membership'),
  /* groups_manage_unsubscribe */   t('author'),
  /* groups_manage_unsubscribe */   t('Group'),
  /* groups_manage_unsubscribe */   t('Member since'),
  /* groups_manage_unsubscribe */   t('All'),
  /* groups_manage_unsubscribe */   t('%1\'s groups'),
  /* groups_manage_unsubscribe */   t('Manage and Unsubscribe From Groups'),
  /* groups_manage_unsubscribe */   t('Manage Your Group Memberships'),
  /* groups_manage_unsubscribe */   t('A view to bulk unsubscribe from groups '),
  /* groups_manage_unsubscribe */   t('Items per page'),
  /* groups_manage_unsubscribe */   t('- All -'),
  /* groups_manage_unsubscribe */   t('Offset'),
  /* groups_manage_unsubscribe */   t('« first'),
  /* groups_manage_unsubscribe */   t('‹ previous'),
  /* groups_manage_unsubscribe */   t('next ›'),
  /* groups_manage_unsubscribe */   t('last »'),
  /* groups_manage_unsubscribe */   t('<b>Displaying @start - @end of @total groups</b>'),
  /* groups_manage_unsubscribe */   t('NOTE'),
  /* groups_manage_unsubscribe */   t('<br><br><b>NOTE:</b> If you want to unsubscribe from a group, make sure you are not the Author of the group, or a group manager. You cannot unsubscribe from a group if you are the group author, or are a manager of the group.'),
  /* groups_manage_unsubscribe */   t('Group ID'),
  /* groups_manage_unsubscribe */   t('Author'),
  /* groups_manage_unsubscribe */   t('Custom text'),
  /* groups_manage_unsubscribe */   t('%1'),
  /* groups_manage_unsubscribe */   t('Author uid'),
  /* groups_manage_unsubscribe */   t('Group Type'),
  /* groups_manage_unsubscribe */   t('Group Managers'),
  /* groups_manage_unsubscribe */   t('Joined'),
  /* groups_manage_unsubscribe */   t('Manage your group memberships'),
  /* groups_manage_unsubscribe */   t('Type'),
  /* groups_manage_unsubscribe */   t('Group Title'),
  /* groups_manage_unsubscribe */ );
  $export['groups_manage_unsubscribe'] = $view;

  /* manage_organization_content */ $view = new view();
  /* manage_organization_content */ $view->name = 'manage_organization_content';
  /* manage_organization_content */ $view->description = '';
  /* manage_organization_content */ $view->tag = 'default';
  /* manage_organization_content */ $view->base_table = 'node';
  /* manage_organization_content */ $view->human_name = 'Manage Organization Content';
  /* manage_organization_content */ $view->core = 7;
  /* manage_organization_content */ $view->api_version = '3.0';
  /* manage_organization_content */ $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* manage_organization_content */ /* Display: Master */
  /* manage_organization_content */  /* Master */ $handler = $view->new_display('default', 'Master', 'default');
  /* manage_organization_content */  /* Master */ $handler->display->display_options['title'] = 'Manage Organization Content';
  /* manage_organization_content */  /* Master */ $handler->display->display_options['use_more_always'] = FALSE;
  /* manage_organization_content */  /* Master */ $handler->display->display_options['access']['type'] = 'gn2_og_any_group_manager_access';
  /* manage_organization_content */  /* Master */ $handler->display->display_options['cache']['type'] = 'none';
  /* manage_organization_content */  /* Master */ $handler->display->display_options['query']['type'] = 'views_query';
  /* manage_organization_content */  /* Master */ $handler->display->display_options['exposed_form']['type'] = 'basic';
  /* manage_organization_content */  /* Master */ $handler->display->display_options['pager']['type'] = 'full';
  /* manage_organization_content */  /* Master */ $handler->display->display_options['pager']['options']['items_per_page'] = '30';
  /* manage_organization_content */  /* Master */ $handler->display->display_options['style_plugin'] = 'table';
  /* manage_organization_content */  /* Master */ $handler->display->display_options['style_options']['columns'] = array(
  /* manage_organization_content */  /* Master */   'title' => 'title',
  /* manage_organization_content */  /* Master */   'views_bulk_operations' => 'views_bulk_operations',
  /* manage_organization_content */  /* Master */ );
  /* manage_organization_content */  /* Master */ $handler->display->display_options['style_options']['default'] = '-1';
  /* manage_organization_content */  /* Master */ $handler->display->display_options['style_options']['info'] = array(
  /* manage_organization_content */  /* Master */   'title' => array(
  /* manage_organization_content */  /* Master */     'sortable' => 0,
  /* manage_organization_content */  /* Master */     'default_sort_order' => 'asc',
  /* manage_organization_content */  /* Master */     'align' => '',
  /* manage_organization_content */  /* Master */     'separator' => '',
  /* manage_organization_content */  /* Master */     'empty_column' => 0,
  /* manage_organization_content */  /* Master */   ),
  /* manage_organization_content */  /* Master */   'views_bulk_operations' => array(
  /* manage_organization_content */  /* Master */     'align' => '',
  /* manage_organization_content */  /* Master */     'separator' => '',
  /* manage_organization_content */  /* Master */     'empty_column' => 0,
  /* manage_organization_content */  /* Master */   ),
  /* manage_organization_content */  /* Master */ );
  /* manage_organization_content */  /* Master */ /* Relationship: Content: Author */
  /* manage_organization_content */  /* Master */ $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  /* manage_organization_content */  /* Master */ $handler->display->display_options['relationships']['uid']['table'] = 'node';
  /* manage_organization_content */  /* Master */ $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* manage_organization_content */  /* Master */ /* Field: Content: Edit link */
  /* manage_organization_content */  /* Master */ $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  /* manage_organization_content */  /* Master */ $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  /* manage_organization_content */  /* Master */ $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  /* manage_organization_content */  /* Master */ $handler->display->display_options['fields']['edit_node']['exclude'] = TRUE;
  /* manage_organization_content */  /* Master */ /* Field: Content: Delete link */
  /* manage_organization_content */  /* Master */ $handler->display->display_options['fields']['delete_node']['id'] = 'delete_node';
  /* manage_organization_content */  /* Master */ $handler->display->display_options['fields']['delete_node']['table'] = 'views_entity_node';
  /* manage_organization_content */  /* Master */ $handler->display->display_options['fields']['delete_node']['field'] = 'delete_node';
  /* manage_organization_content */  /* Master */ $handler->display->display_options['fields']['delete_node']['exclude'] = TRUE;
  /* manage_organization_content */  /* Master */ /* Field: Bulk operations: Content */
  /* manage_organization_content */  /* Master */ $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  /* manage_organization_content */  /* Master */ $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'node';
  /* manage_organization_content */  /* Master */ $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  /* manage_organization_content */  /* Master */ $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '0';
  /* manage_organization_content */  /* Master */ $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  /* manage_organization_content */  /* Master */ $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['row_clickable'] = 1;
  /* manage_organization_content */  /* Master */ $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  /* manage_organization_content */  /* Master */ $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  /* manage_organization_content */  /* Master */ $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
  /* manage_organization_content */  /* Master */   'action::node_assign_owner_action' => array(
  /* manage_organization_content */  /* Master */     'selected' => 1,
  /* manage_organization_content */  /* Master */     'postpone_processing' => 1,
  /* manage_organization_content */  /* Master */     'skip_confirmation' => 0,
  /* manage_organization_content */  /* Master */     'override_label' => 0,
  /* manage_organization_content */  /* Master */     'label' => '',
  /* manage_organization_content */  /* Master */   ),
  /* manage_organization_content */  /* Master */   'action::views_bulk_operations_delete_item' => array(
  /* manage_organization_content */  /* Master */     'selected' => 1,
  /* manage_organization_content */  /* Master */     'postpone_processing' => 1,
  /* manage_organization_content */  /* Master */     'skip_confirmation' => 0,
  /* manage_organization_content */  /* Master */     'override_label' => 0,
  /* manage_organization_content */  /* Master */     'label' => '',
  /* manage_organization_content */  /* Master */   ),
  /* manage_organization_content */  /* Master */   'action::node_promote_action' => array(
  /* manage_organization_content */  /* Master */     'selected' => 1,
  /* manage_organization_content */  /* Master */     'postpone_processing' => 1,
  /* manage_organization_content */  /* Master */     'skip_confirmation' => 0,
  /* manage_organization_content */  /* Master */     'override_label' => 0,
  /* manage_organization_content */  /* Master */     'label' => '',
  /* manage_organization_content */  /* Master */   ),
  /* manage_organization_content */  /* Master */   'action::node_publish_action' => array(
  /* manage_organization_content */  /* Master */     'selected' => 1,
  /* manage_organization_content */  /* Master */     'postpone_processing' => 1,
  /* manage_organization_content */  /* Master */     'skip_confirmation' => 0,
  /* manage_organization_content */  /* Master */     'override_label' => 0,
  /* manage_organization_content */  /* Master */     'label' => '',
  /* manage_organization_content */  /* Master */   ),
  /* manage_organization_content */  /* Master */   'rules_component::scheduler_remove_publish_date_component' => array(
  /* manage_organization_content */  /* Master */     'selected' => 1,
  /* manage_organization_content */  /* Master */     'postpone_processing' => 1,
  /* manage_organization_content */  /* Master */     'skip_confirmation' => 0,
  /* manage_organization_content */  /* Master */     'override_label' => 0,
  /* manage_organization_content */  /* Master */     'label' => '',
  /* manage_organization_content */  /* Master */   ),
  /* manage_organization_content */  /* Master */   'rules_component::scheduler_remove_unpublish_date_component' => array(
  /* manage_organization_content */  /* Master */     'selected' => 1,
  /* manage_organization_content */  /* Master */     'postpone_processing' => 1,
  /* manage_organization_content */  /* Master */     'skip_confirmation' => 0,
  /* manage_organization_content */  /* Master */     'override_label' => 0,
  /* manage_organization_content */  /* Master */     'label' => '',
  /* manage_organization_content */  /* Master */   ),
  /* manage_organization_content */  /* Master */   'action::node_unpublish_action' => array(
  /* manage_organization_content */  /* Master */     'selected' => 1,
  /* manage_organization_content */  /* Master */     'postpone_processing' => 1,
  /* manage_organization_content */  /* Master */     'skip_confirmation' => 0,
  /* manage_organization_content */  /* Master */     'override_label' => 0,
  /* manage_organization_content */  /* Master */     'label' => '',
  /* manage_organization_content */  /* Master */   ),
  /* manage_organization_content */  /* Master */   'action::pathauto_node_update_action' => array(
  /* manage_organization_content */  /* Master */     'selected' => 1,
  /* manage_organization_content */  /* Master */     'postpone_processing' => 1,
  /* manage_organization_content */  /* Master */     'skip_confirmation' => 0,
  /* manage_organization_content */  /* Master */     'override_label' => 0,
  /* manage_organization_content */  /* Master */     'label' => '',
  /* manage_organization_content */  /* Master */   ),
  /* manage_organization_content */  /* Master */ );
  /* manage_organization_content */  /* Master */ /* Field: Content: Title */
  /* manage_organization_content */  /* Master */ $handler->display->display_options['fields']['title']['id'] = 'title';
  /* manage_organization_content */  /* Master */ $handler->display->display_options['fields']['title']['table'] = 'node';
  /* manage_organization_content */  /* Master */ $handler->display->display_options['fields']['title']['field'] = 'title';
  /* manage_organization_content */  /* Master */ $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  /* manage_organization_content */  /* Master */ $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* manage_organization_content */  /* Master */ /* Field: Content: Type */
  /* manage_organization_content */  /* Master */ $handler->display->display_options['fields']['type']['id'] = 'type';
  /* manage_organization_content */  /* Master */ $handler->display->display_options['fields']['type']['table'] = 'node';
  /* manage_organization_content */  /* Master */ $handler->display->display_options['fields']['type']['field'] = 'type';
  /* manage_organization_content */  /* Master */ /* Field: User: Name */
  /* manage_organization_content */  /* Master */ $handler->display->display_options['fields']['name']['id'] = 'name';
  /* manage_organization_content */  /* Master */ $handler->display->display_options['fields']['name']['table'] = 'users';
  /* manage_organization_content */  /* Master */ $handler->display->display_options['fields']['name']['field'] = 'name';
  /* manage_organization_content */  /* Master */ $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  /* manage_organization_content */  /* Master */ $handler->display->display_options['fields']['name']['label'] = 'Author';
  /* manage_organization_content */  /* Master */ /* Field: Content: Published */
  /* manage_organization_content */  /* Master */ $handler->display->display_options['fields']['status']['id'] = 'status';
  /* manage_organization_content */  /* Master */ $handler->display->display_options['fields']['status']['table'] = 'node';
  /* manage_organization_content */  /* Master */ $handler->display->display_options['fields']['status']['field'] = 'status';
  /* manage_organization_content */  /* Master */ $handler->display->display_options['fields']['status']['label'] = 'Status';
  /* manage_organization_content */  /* Master */ $handler->display->display_options['fields']['status']['type'] = 'published-notpublished';
  /* manage_organization_content */  /* Master */ $handler->display->display_options['fields']['status']['not'] = 0;
  /* manage_organization_content */  /* Master */ /* Field: Content: Updated date */
  /* manage_organization_content */  /* Master */ $handler->display->display_options['fields']['changed']['id'] = 'changed';
  /* manage_organization_content */  /* Master */ $handler->display->display_options['fields']['changed']['table'] = 'node';
  /* manage_organization_content */  /* Master */ $handler->display->display_options['fields']['changed']['field'] = 'changed';
  /* manage_organization_content */  /* Master */ $handler->display->display_options['fields']['changed']['label'] = 'Updated';
  /* manage_organization_content */  /* Master */ $handler->display->display_options['fields']['changed']['date_format'] = 'date_format_globalnet_date';
  /* manage_organization_content */  /* Master */ $handler->display->display_options['fields']['changed']['second_date_format'] = 'date_format_globalnet_date';
  /* manage_organization_content */  /* Master */ /* Field: Content: Language */
  /* manage_organization_content */  /* Master */ $handler->display->display_options['fields']['language']['id'] = 'language';
  /* manage_organization_content */  /* Master */ $handler->display->display_options['fields']['language']['table'] = 'node';
  /* manage_organization_content */  /* Master */ $handler->display->display_options['fields']['language']['field'] = 'language';
  /* manage_organization_content */  /* Master */ $handler->display->display_options['fields']['language']['empty'] = 'Language neutral';
  /* manage_organization_content */  /* Master */ /* Field: Global: Custom text */
  /* manage_organization_content */  /* Master */ $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  /* manage_organization_content */  /* Master */ $handler->display->display_options['fields']['nothing']['table'] = 'views';
  /* manage_organization_content */  /* Master */ $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  /* manage_organization_content */  /* Master */ $handler->display->display_options['fields']['nothing']['label'] = 'Operations';
  /* manage_organization_content */  /* Master */ $handler->display->display_options['fields']['nothing']['alter']['text'] = '[edit_node] | [delete_node]';
  /* manage_organization_content */  /* Master */ /* Sort criterion: Content: Updated date */
  /* manage_organization_content */  /* Master */ $handler->display->display_options['sorts']['changed']['id'] = 'changed';
  /* manage_organization_content */  /* Master */ $handler->display->display_options['sorts']['changed']['table'] = 'node';
  /* manage_organization_content */  /* Master */ $handler->display->display_options['sorts']['changed']['field'] = 'changed';
  /* manage_organization_content */  /* Master */ $handler->display->display_options['sorts']['changed']['order'] = 'DESC';
  /* manage_organization_content */  /* Master */ /* Sort criterion: Content: Post date */
  /* manage_organization_content */  /* Master */ $handler->display->display_options['sorts']['created']['id'] = 'created';
  /* manage_organization_content */  /* Master */ $handler->display->display_options['sorts']['created']['table'] = 'node';
  /* manage_organization_content */  /* Master */ $handler->display->display_options['sorts']['created']['field'] = 'created';
  /* manage_organization_content */  /* Master */ $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* manage_organization_content */  /* Master */ /* Contextual filter: Content: Parent Organization (field_parent_organization) */
  /* manage_organization_content */  /* Master */ $handler->display->display_options['arguments']['field_parent_organization_target_id']['id'] = 'field_parent_organization_target_id';
  /* manage_organization_content */  /* Master */ $handler->display->display_options['arguments']['field_parent_organization_target_id']['table'] = 'field_data_field_parent_organization';
  /* manage_organization_content */  /* Master */ $handler->display->display_options['arguments']['field_parent_organization_target_id']['field'] = 'field_parent_organization_target_id';
  /* manage_organization_content */  /* Master */ $handler->display->display_options['arguments']['field_parent_organization_target_id']['default_action'] = 'empty';
  /* manage_organization_content */  /* Master */ $handler->display->display_options['arguments']['field_parent_organization_target_id']['title_enable'] = TRUE;
  /* manage_organization_content */  /* Master */ $handler->display->display_options['arguments']['field_parent_organization_target_id']['title'] = 'Manage Organization Content for %1';
  /* manage_organization_content */  /* Master */ $handler->display->display_options['arguments']['field_parent_organization_target_id']['default_argument_type'] = 'og_user_groups';
  /* manage_organization_content */  /* Master */ $handler->display->display_options['arguments']['field_parent_organization_target_id']['summary']['number_of_records'] = '0';
  /* manage_organization_content */  /* Master */ $handler->display->display_options['arguments']['field_parent_organization_target_id']['summary']['format'] = 'default_summary';
  /* manage_organization_content */  /* Master */ $handler->display->display_options['arguments']['field_parent_organization_target_id']['summary_options']['items_per_page'] = '25';
  /* manage_organization_content */  /* Master */ $handler->display->display_options['arguments']['field_parent_organization_target_id']['specify_validation'] = TRUE;
  /* manage_organization_content */  /* Master */ $handler->display->display_options['arguments']['field_parent_organization_target_id']['validate']['type'] = 'node';
  /* manage_organization_content */  /* Master */ $handler->display->display_options['arguments']['field_parent_organization_target_id']['validate_options']['types'] = array(
  /* manage_organization_content */  /* Master */   'organization' => 'organization',
  /* manage_organization_content */  /* Master */ );
  /* manage_organization_content */  /* Master */ /* Filter criterion: Content: Published */
  /* manage_organization_content */  /* Master */ $handler->display->display_options['filters']['status']['id'] = 'status';
  /* manage_organization_content */  /* Master */ $handler->display->display_options['filters']['status']['table'] = 'node';
  /* manage_organization_content */  /* Master */ $handler->display->display_options['filters']['status']['field'] = 'status';
  /* manage_organization_content */  /* Master */ $handler->display->display_options['filters']['status']['value'] = 'All';
  /* manage_organization_content */  /* Master */ $handler->display->display_options['filters']['status']['group'] = 1;
  /* manage_organization_content */  /* Master */ $handler->display->display_options['filters']['status']['exposed'] = TRUE;
  /* manage_organization_content */  /* Master */ $handler->display->display_options['filters']['status']['expose']['operator_id'] = '';
  /* manage_organization_content */  /* Master */ $handler->display->display_options['filters']['status']['expose']['label'] = 'Published';
  /* manage_organization_content */  /* Master */ $handler->display->display_options['filters']['status']['expose']['operator'] = 'status_op';
  /* manage_organization_content */  /* Master */ $handler->display->display_options['filters']['status']['expose']['identifier'] = 'status';
  /* manage_organization_content */  /* Master */ $handler->display->display_options['filters']['status']['expose']['remember_roles'] = array(
  /* manage_organization_content */  /* Master */   2 => '2',
  /* manage_organization_content */  /* Master */   1 => 0,
  /* manage_organization_content */  /* Master */   9 => 0,
  /* manage_organization_content */  /* Master */   10 => 0,
  /* manage_organization_content */  /* Master */ );
  /* manage_organization_content */  /* Master */ /* Filter criterion: Content: Language */
  /* manage_organization_content */  /* Master */ $handler->display->display_options['filters']['language']['id'] = 'language';
  /* manage_organization_content */  /* Master */ $handler->display->display_options['filters']['language']['table'] = 'node';
  /* manage_organization_content */  /* Master */ $handler->display->display_options['filters']['language']['field'] = 'language';
  /* manage_organization_content */  /* Master */ $handler->display->display_options['filters']['language']['exposed'] = TRUE;
  /* manage_organization_content */  /* Master */ $handler->display->display_options['filters']['language']['expose']['operator_id'] = 'language_op';
  /* manage_organization_content */  /* Master */ $handler->display->display_options['filters']['language']['expose']['label'] = 'Language';
  /* manage_organization_content */  /* Master */ $handler->display->display_options['filters']['language']['expose']['operator'] = 'language_op';
  /* manage_organization_content */  /* Master */ $handler->display->display_options['filters']['language']['expose']['identifier'] = 'language';
  /* manage_organization_content */  /* Master */ $handler->display->display_options['filters']['language']['expose']['remember_roles'] = array(
  /* manage_organization_content */  /* Master */   2 => '2',
  /* manage_organization_content */  /* Master */   1 => 0,
  /* manage_organization_content */  /* Master */   9 => 0,
  /* manage_organization_content */  /* Master */   10 => 0,
  /* manage_organization_content */  /* Master */ );
  /* manage_organization_content */  /* Master */ /* Filter criterion: Content: Type */
  /* manage_organization_content */  /* Master */ $handler->display->display_options['filters']['type']['id'] = 'type';
  /* manage_organization_content */  /* Master */ $handler->display->display_options['filters']['type']['table'] = 'node';
  /* manage_organization_content */  /* Master */ $handler->display->display_options['filters']['type']['field'] = 'type';
  /* manage_organization_content */  /* Master */ $handler->display->display_options['filters']['type']['exposed'] = TRUE;
  /* manage_organization_content */  /* Master */ $handler->display->display_options['filters']['type']['expose']['operator_id'] = 'type_op';
  /* manage_organization_content */  /* Master */ $handler->display->display_options['filters']['type']['expose']['label'] = 'Type';
  /* manage_organization_content */  /* Master */ $handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
  /* manage_organization_content */  /* Master */ $handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';
  /* manage_organization_content */  /* Master */ $handler->display->display_options['filters']['type']['expose']['remember_roles'] = array(
  /* manage_organization_content */  /* Master */   2 => '2',
  /* manage_organization_content */  /* Master */   1 => 0,
  /* manage_organization_content */  /* Master */   9 => 0,
  /* manage_organization_content */  /* Master */   10 => 0,
  /* manage_organization_content */  /* Master */ );

  /* manage_organization_content */ /* Display: Page */
  /* manage_organization_content */  /* Page */ $handler = $view->new_display('page', 'Page', 'page_manage_full');
  /* manage_organization_content */  /* Page */ $handler->display->display_options['path'] = 'manage/organization-content';
  /* manage_organization_content */ $translatables['manage_organization_content'] = array(
  /* manage_organization_content */   t('Master'),
  /* manage_organization_content */   t('Manage Organization Content'),
  /* manage_organization_content */   t('more'),
  /* manage_organization_content */   t('Apply'),
  /* manage_organization_content */   t('Reset'),
  /* manage_organization_content */   t('Sort by'),
  /* manage_organization_content */   t('Asc'),
  /* manage_organization_content */   t('Desc'),
  /* manage_organization_content */   t('Items per page'),
  /* manage_organization_content */   t('- All -'),
  /* manage_organization_content */   t('Offset'),
  /* manage_organization_content */   t('« first'),
  /* manage_organization_content */   t('‹ previous'),
  /* manage_organization_content */   t('next ›'),
  /* manage_organization_content */   t('last »'),
  /* manage_organization_content */   t('author'),
  /* manage_organization_content */   t('Edit link'),
  /* manage_organization_content */   t('Delete link'),
  /* manage_organization_content */   t('Content'),
  /* manage_organization_content */   t('- Choose an operation -'),
  /* manage_organization_content */   t('Title'),
  /* manage_organization_content */   t('Type'),
  /* manage_organization_content */   t('Author'),
  /* manage_organization_content */   t('Status'),
  /* manage_organization_content */   t('Updated'),
  /* manage_organization_content */   t('Language'),
  /* manage_organization_content */   t('Language neutral'),
  /* manage_organization_content */   t('Operations'),
  /* manage_organization_content */   t('[edit_node] | [delete_node]'),
  /* manage_organization_content */   t('All'),
  /* manage_organization_content */   t('Manage Organization Content for %1'),
  /* manage_organization_content */   t('Published'),
  /* manage_organization_content */   t('Page'),
  /* manage_organization_content */ );
  $export['manage_organization_content'] = $view;

  /* og_members_admin_override */ $view = new view();
  /* og_members_admin_override */ $view->name = 'og_members_admin_override';
  /* og_members_admin_override */ $view->description = '';
  /* og_members_admin_override */ $view->tag = 'og';
  /* og_members_admin_override */ $view->base_table = 'users';
  /* og_members_admin_override */ $view->human_name = 'OG members admin: OVERRIDE';
  /* og_members_admin_override */ $view->core = 7;
  /* og_members_admin_override */ $view->api_version = '3.0';
  /* og_members_admin_override */ $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* og_members_admin_override */ /* Display: Master */
  /* og_members_admin_override */  /* Master */ $handler = $view->new_display('default', 'Master', 'default');
  /* og_members_admin_override */  /* Master */ $handler->display->display_options['title'] = 'OG members admin';
  /* og_members_admin_override */  /* Master */ $handler->display->display_options['css_class'] = 'view--admin--manage-members';
  /* og_members_admin_override */  /* Master */ $handler->display->display_options['use_more_always'] = FALSE;
  /* og_members_admin_override */  /* Master */ $handler->display->display_options['access']['type'] = 'none';
  /* og_members_admin_override */  /* Master */ $handler->display->display_options['cache']['type'] = 'none';
  /* og_members_admin_override */  /* Master */ $handler->display->display_options['query']['type'] = 'views_query';
  /* og_members_admin_override */  /* Master */ $handler->display->display_options['query']['options']['distinct'] = TRUE;
  /* og_members_admin_override */  /* Master */ $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  /* og_members_admin_override */  /* Master */ $handler->display->display_options['exposed_form']['options']['bef'] = array(
  /* og_members_admin_override */  /* Master */   'general' => array(
  /* og_members_admin_override */  /* Master */     'allow_secondary' => 0,
  /* og_members_admin_override */  /* Master */     'secondary_label' => 'Advanced options',
  /* og_members_admin_override */  /* Master */   ),
  /* og_members_admin_override */  /* Master */   'state' => array(
  /* og_members_admin_override */  /* Master */     'bef_format' => 'default',
  /* og_members_admin_override */  /* Master */     'more_options' => array(
  /* og_members_admin_override */  /* Master */       'bef_select_all_none' => FALSE,
  /* og_members_admin_override */  /* Master */       'bef_collapsible' => 0,
  /* og_members_admin_override */  /* Master */       'is_secondary' => 0,
  /* og_members_admin_override */  /* Master */       'any_label' => '',
  /* og_members_admin_override */  /* Master */       'bef_filter_description' => '',
  /* og_members_admin_override */  /* Master */       'tokens' => array(
  /* og_members_admin_override */  /* Master */         'available' => array(
  /* og_members_admin_override */  /* Master */           0 => 'global_types',
  /* og_members_admin_override */  /* Master */         ),
  /* og_members_admin_override */  /* Master */       ),
  /* og_members_admin_override */  /* Master */       'rewrite' => array(
  /* og_members_admin_override */  /* Master */         'filter_rewrite_values' => '',
  /* og_members_admin_override */  /* Master */       ),
  /* og_members_admin_override */  /* Master */     ),
  /* og_members_admin_override */  /* Master */   ),
  /* og_members_admin_override */  /* Master */   'name' => array(
  /* og_members_admin_override */  /* Master */     'bef_format' => 'default',
  /* og_members_admin_override */  /* Master */     'more_options' => array(
  /* og_members_admin_override */  /* Master */       'bef_select_all_none' => FALSE,
  /* og_members_admin_override */  /* Master */       'bef_collapsible' => 0,
  /* og_members_admin_override */  /* Master */       'is_secondary' => 0,
  /* og_members_admin_override */  /* Master */       'any_label' => '',
  /* og_members_admin_override */  /* Master */       'bef_filter_description' => '',
  /* og_members_admin_override */  /* Master */       'tokens' => array(
  /* og_members_admin_override */  /* Master */         'available' => array(
  /* og_members_admin_override */  /* Master */           0 => 'global_types',
  /* og_members_admin_override */  /* Master */         ),
  /* og_members_admin_override */  /* Master */       ),
  /* og_members_admin_override */  /* Master */       'rewrite' => array(
  /* og_members_admin_override */  /* Master */         'filter_rewrite_values' => '',
  /* og_members_admin_override */  /* Master */       ),
  /* og_members_admin_override */  /* Master */     ),
  /* og_members_admin_override */  /* Master */   ),
  /* og_members_admin_override */  /* Master */   'uid' => array(
  /* og_members_admin_override */  /* Master */     'bef_format' => 'default',
  /* og_members_admin_override */  /* Master */     'more_options' => array(
  /* og_members_admin_override */  /* Master */       'bef_select_all_none' => FALSE,
  /* og_members_admin_override */  /* Master */       'bef_collapsible' => 0,
  /* og_members_admin_override */  /* Master */       'is_secondary' => 0,
  /* og_members_admin_override */  /* Master */       'any_label' => '',
  /* og_members_admin_override */  /* Master */       'bef_filter_description' => '<br>
<p>To filter all members by "state" or "role," select an option from the State or Role field and click GO (e.g. selecting the role "group_manager" and clicking GO will show all group managers in the group).</p>
<p>To view specific members in the list, enter a comma separated list of user names and click GO. All three fields can also be used to filter in combination.</p>',
  /* og_members_admin_override */  /* Master */       'tokens' => array(
  /* og_members_admin_override */  /* Master */         'available' => array(
  /* og_members_admin_override */  /* Master */           0 => 'global_types',
  /* og_members_admin_override */  /* Master */         ),
  /* og_members_admin_override */  /* Master */       ),
  /* og_members_admin_override */  /* Master */       'rewrite' => array(
  /* og_members_admin_override */  /* Master */         'filter_rewrite_values' => '',
  /* og_members_admin_override */  /* Master */       ),
  /* og_members_admin_override */  /* Master */     ),
  /* og_members_admin_override */  /* Master */   ),
  /* og_members_admin_override */  /* Master */ );
  /* og_members_admin_override */  /* Master */ $handler->display->display_options['pager']['type'] = 'full';
  /* og_members_admin_override */  /* Master */ $handler->display->display_options['pager']['options']['items_per_page'] = '25';
  /* og_members_admin_override */  /* Master */ $handler->display->display_options['pager']['options']['offset'] = '0';
  /* og_members_admin_override */  /* Master */ $handler->display->display_options['pager']['options']['id'] = '0';
  /* og_members_admin_override */  /* Master */ $handler->display->display_options['style_plugin'] = 'table';
  /* og_members_admin_override */  /* Master */ $handler->display->display_options['style_options']['columns'] = array(
  /* og_members_admin_override */  /* Master */   'views_bulk_operations' => 'views_bulk_operations',
  /* og_members_admin_override */  /* Master */   'name' => 'name',
  /* og_members_admin_override */  /* Master */   'state' => 'state',
  /* og_members_admin_override */  /* Master */   'og_roles' => 'og_roles',
  /* og_members_admin_override */  /* Master */   'created' => 'created',
  /* og_members_admin_override */  /* Master */   'og_membership_request' => 'og_membership_request',
  /* og_members_admin_override */  /* Master */   'edit_membership' => 'edit_membership',
  /* og_members_admin_override */  /* Master */   'delete_membership' => 'edit_membership',
  /* og_members_admin_override */  /* Master */ );
  /* og_members_admin_override */  /* Master */ $handler->display->display_options['style_options']['default'] = 'name';
  /* og_members_admin_override */  /* Master */ $handler->display->display_options['style_options']['info'] = array(
  /* og_members_admin_override */  /* Master */   'views_bulk_operations' => array(
  /* og_members_admin_override */  /* Master */     'align' => '',
  /* og_members_admin_override */  /* Master */     'separator' => '',
  /* og_members_admin_override */  /* Master */     'empty_column' => 0,
  /* og_members_admin_override */  /* Master */   ),
  /* og_members_admin_override */  /* Master */   'name' => array(
  /* og_members_admin_override */  /* Master */     'sortable' => 1,
  /* og_members_admin_override */  /* Master */     'default_sort_order' => 'asc',
  /* og_members_admin_override */  /* Master */     'align' => '',
  /* og_members_admin_override */  /* Master */     'separator' => '',
  /* og_members_admin_override */  /* Master */     'empty_column' => 0,
  /* og_members_admin_override */  /* Master */   ),
  /* og_members_admin_override */  /* Master */   'state' => array(
  /* og_members_admin_override */  /* Master */     'sortable' => 1,
  /* og_members_admin_override */  /* Master */     'default_sort_order' => 'asc',
  /* og_members_admin_override */  /* Master */     'align' => '',
  /* og_members_admin_override */  /* Master */     'separator' => '',
  /* og_members_admin_override */  /* Master */     'empty_column' => 0,
  /* og_members_admin_override */  /* Master */   ),
  /* og_members_admin_override */  /* Master */   'og_roles' => array(
  /* og_members_admin_override */  /* Master */     'align' => '',
  /* og_members_admin_override */  /* Master */     'separator' => '',
  /* og_members_admin_override */  /* Master */     'empty_column' => 0,
  /* og_members_admin_override */  /* Master */   ),
  /* og_members_admin_override */  /* Master */   'created' => array(
  /* og_members_admin_override */  /* Master */     'sortable' => 1,
  /* og_members_admin_override */  /* Master */     'default_sort_order' => 'asc',
  /* og_members_admin_override */  /* Master */     'align' => '',
  /* og_members_admin_override */  /* Master */     'separator' => '',
  /* og_members_admin_override */  /* Master */     'empty_column' => 0,
  /* og_members_admin_override */  /* Master */   ),
  /* og_members_admin_override */  /* Master */   'og_membership_request' => array(
  /* og_members_admin_override */  /* Master */     'sortable' => 0,
  /* og_members_admin_override */  /* Master */     'default_sort_order' => 'asc',
  /* og_members_admin_override */  /* Master */     'align' => '',
  /* og_members_admin_override */  /* Master */     'separator' => '',
  /* og_members_admin_override */  /* Master */     'empty_column' => 0,
  /* og_members_admin_override */  /* Master */   ),
  /* og_members_admin_override */  /* Master */   'edit_membership' => array(
  /* og_members_admin_override */  /* Master */     'align' => '',
  /* og_members_admin_override */  /* Master */     'separator' => ' ',
  /* og_members_admin_override */  /* Master */     'empty_column' => 0,
  /* og_members_admin_override */  /* Master */   ),
  /* og_members_admin_override */  /* Master */   'delete_membership' => array(
  /* og_members_admin_override */  /* Master */     'align' => '',
  /* og_members_admin_override */  /* Master */     'separator' => '',
  /* og_members_admin_override */  /* Master */     'empty_column' => 0,
  /* og_members_admin_override */  /* Master */   ),
  /* og_members_admin_override */  /* Master */ );
  /* og_members_admin_override */  /* Master */ /* Header: OG membership: Group membership overview */
  /* og_members_admin_override */  /* Master */ $handler->display->display_options['header']['og_membership_overview']['id'] = 'og_membership_overview';
  /* og_members_admin_override */  /* Master */ $handler->display->display_options['header']['og_membership_overview']['table'] = 'og_membership';
  /* og_members_admin_override */  /* Master */ $handler->display->display_options['header']['og_membership_overview']['field'] = 'og_membership_overview';
  /* og_members_admin_override */  /* Master */ $handler->display->display_options['header']['og_membership_overview']['manager'] = 1;
  /* og_members_admin_override */  /* Master */ $handler->display->display_options['header']['og_membership_overview']['total_members_1'] = 1;
  /* og_members_admin_override */  /* Master */ $handler->display->display_options['header']['og_membership_overview']['total_members_2'] = 1;
  /* og_members_admin_override */  /* Master */ $handler->display->display_options['header']['og_membership_overview']['total_members_3'] = 1;
  /* og_members_admin_override */  /* Master */ $handler->display->display_options['header']['og_membership_overview']['total_members'] = 1;
  /* og_members_admin_override */  /* Master */ $handler->display->display_options['header']['og_membership_overview']['total_content'] = 1;
  /* og_members_admin_override */  /* Master */ /* No results behavior: Global: Text area */
  /* og_members_admin_override */  /* Master */ $handler->display->display_options['empty']['area']['id'] = 'area';
  /* og_members_admin_override */  /* Master */ $handler->display->display_options['empty']['area']['table'] = 'views';
  /* og_members_admin_override */  /* Master */ $handler->display->display_options['empty']['area']['field'] = 'area';
  /* og_members_admin_override */  /* Master */ $handler->display->display_options['empty']['area']['content'] = 'No people found matching the search criteria.';
  /* og_members_admin_override */  /* Master */ $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  /* og_members_admin_override */  /* Master */ /* Relationship: OG membership: OG membership from User */
  /* og_members_admin_override */  /* Master */ $handler->display->display_options['relationships']['og_membership_rel']['id'] = 'og_membership_rel';
  /* og_members_admin_override */  /* Master */ $handler->display->display_options['relationships']['og_membership_rel']['table'] = 'users';
  /* og_members_admin_override */  /* Master */ $handler->display->display_options['relationships']['og_membership_rel']['field'] = 'og_membership_rel';
  /* og_members_admin_override */  /* Master */ /* Relationship: OG membership: OG Roles from membership */
  /* og_members_admin_override */  /* Master */ $handler->display->display_options['relationships']['og_users_roles']['id'] = 'og_users_roles';
  /* og_members_admin_override */  /* Master */ $handler->display->display_options['relationships']['og_users_roles']['table'] = 'og_membership';
  /* og_members_admin_override */  /* Master */ $handler->display->display_options['relationships']['og_users_roles']['field'] = 'og_users_roles';
  /* og_members_admin_override */  /* Master */ $handler->display->display_options['relationships']['og_users_roles']['relationship'] = 'og_membership_rel';
  /* og_members_admin_override */  /* Master */ /* Field: User: Uid */
  /* og_members_admin_override */  /* Master */ $handler->display->display_options['fields']['uid']['id'] = 'uid';
  /* og_members_admin_override */  /* Master */ $handler->display->display_options['fields']['uid']['table'] = 'users';
  /* og_members_admin_override */  /* Master */ $handler->display->display_options['fields']['uid']['field'] = 'uid';
  /* og_members_admin_override */  /* Master */ $handler->display->display_options['fields']['uid']['label'] = '';
  /* og_members_admin_override */  /* Master */ $handler->display->display_options['fields']['uid']['exclude'] = TRUE;
  /* og_members_admin_override */  /* Master */ $handler->display->display_options['fields']['uid']['element_label_colon'] = FALSE;
  /* og_members_admin_override */  /* Master */ $handler->display->display_options['fields']['uid']['link_to_user'] = FALSE;
  /* og_members_admin_override */  /* Master */ /* Field: Bulk operations: OG membership */
  /* og_members_admin_override */  /* Master */ $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  /* og_members_admin_override */  /* Master */ $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'og_membership';
  /* og_members_admin_override */  /* Master */ $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  /* og_members_admin_override */  /* Master */ $handler->display->display_options['fields']['views_bulk_operations']['relationship'] = 'og_membership_rel';
  /* og_members_admin_override */  /* Master */ $handler->display->display_options['fields']['views_bulk_operations']['hide_alter_empty'] = FALSE;
  /* og_members_admin_override */  /* Master */ $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '0';
  /* og_members_admin_override */  /* Master */ $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  /* og_members_admin_override */  /* Master */ $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  /* og_members_admin_override */  /* Master */ $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  /* og_members_admin_override */  /* Master */ $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
  /* og_members_admin_override */  /* Master */   'action::og_user_roles_action' => array(
  /* og_members_admin_override */  /* Master */     'selected' => 1,
  /* og_members_admin_override */  /* Master */     'skip_confirmation' => 0,
  /* og_members_admin_override */  /* Master */     'override_label' => 0,
  /* og_members_admin_override */  /* Master */     'label' => '',
  /* og_members_admin_override */  /* Master */     'postpone_processing' => 0,
  /* og_members_admin_override */  /* Master */   ),
  /* og_members_admin_override */  /* Master */   'action::og_membership_delete_action' => array(
  /* og_members_admin_override */  /* Master */     'selected' => 1,
  /* og_members_admin_override */  /* Master */     'skip_confirmation' => 0,
  /* og_members_admin_override */  /* Master */     'override_label' => 0,
  /* og_members_admin_override */  /* Master */     'label' => '',
  /* og_members_admin_override */  /* Master */     'postpone_processing' => 0,
  /* og_members_admin_override */  /* Master */   ),
  /* og_members_admin_override */  /* Master */   'action::og_set_state_action' => array(
  /* og_members_admin_override */  /* Master */     'selected' => 1,
  /* og_members_admin_override */  /* Master */     'skip_confirmation' => 0,
  /* og_members_admin_override */  /* Master */     'override_label' => 0,
  /* og_members_admin_override */  /* Master */     'label' => '',
  /* og_members_admin_override */  /* Master */     'postpone_processing' => 0,
  /* og_members_admin_override */  /* Master */   ),
  /* og_members_admin_override */  /* Master */ );
  /* og_members_admin_override */  /* Master */ /* Field: User: Name */
  /* og_members_admin_override */  /* Master */ $handler->display->display_options['fields']['name']['id'] = 'name';
  /* og_members_admin_override */  /* Master */ $handler->display->display_options['fields']['name']['table'] = 'users';
  /* og_members_admin_override */  /* Master */ $handler->display->display_options['fields']['name']['field'] = 'name';
  /* og_members_admin_override */  /* Master */ $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  /* og_members_admin_override */  /* Master */ $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  /* og_members_admin_override */  /* Master */ /* Field: OG membership: State */
  /* og_members_admin_override */  /* Master */ $handler->display->display_options['fields']['state']['id'] = 'state';
  /* og_members_admin_override */  /* Master */ $handler->display->display_options['fields']['state']['table'] = 'og_membership';
  /* og_members_admin_override */  /* Master */ $handler->display->display_options['fields']['state']['field'] = 'state';
  /* og_members_admin_override */  /* Master */ $handler->display->display_options['fields']['state']['relationship'] = 'og_membership_rel';
  /* og_members_admin_override */  /* Master */ /* Field: OG membership: OG user roles in group */
  /* og_members_admin_override */  /* Master */ $handler->display->display_options['fields']['og_roles']['id'] = 'og_roles';
  /* og_members_admin_override */  /* Master */ $handler->display->display_options['fields']['og_roles']['table'] = 'og_membership';
  /* og_members_admin_override */  /* Master */ $handler->display->display_options['fields']['og_roles']['field'] = 'og_roles';
  /* og_members_admin_override */  /* Master */ $handler->display->display_options['fields']['og_roles']['relationship'] = 'og_membership_rel';
  /* og_members_admin_override */  /* Master */ $handler->display->display_options['fields']['og_roles']['label'] = 'Roles';
  /* og_members_admin_override */  /* Master */ $handler->display->display_options['fields']['og_roles']['type'] = 'ul';
  /* og_members_admin_override */  /* Master */ /* Field: OG membership: Created */
  /* og_members_admin_override */  /* Master */ $handler->display->display_options['fields']['created']['id'] = 'created';
  /* og_members_admin_override */  /* Master */ $handler->display->display_options['fields']['created']['table'] = 'og_membership';
  /* og_members_admin_override */  /* Master */ $handler->display->display_options['fields']['created']['field'] = 'created';
  /* og_members_admin_override */  /* Master */ $handler->display->display_options['fields']['created']['relationship'] = 'og_membership_rel';
  /* og_members_admin_override */  /* Master */ $handler->display->display_options['fields']['created']['label'] = 'Member since';
  /* og_members_admin_override */  /* Master */ $handler->display->display_options['fields']['created']['date_format'] = 'time ago';
  /* og_members_admin_override */  /* Master */ /* Field: OG membership: Request message */
  /* og_members_admin_override */  /* Master */ $handler->display->display_options['fields']['og_membership_request']['id'] = 'og_membership_request';
  /* og_members_admin_override */  /* Master */ $handler->display->display_options['fields']['og_membership_request']['table'] = 'field_data_og_membership_request';
  /* og_members_admin_override */  /* Master */ $handler->display->display_options['fields']['og_membership_request']['field'] = 'og_membership_request';
  /* og_members_admin_override */  /* Master */ $handler->display->display_options['fields']['og_membership_request']['relationship'] = 'og_membership_rel';
  /* og_members_admin_override */  /* Master */ /* Field: Global: Custom text */
  /* og_members_admin_override */  /* Master */ $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  /* og_members_admin_override */  /* Master */ $handler->display->display_options['fields']['nothing']['table'] = 'views';
  /* og_members_admin_override */  /* Master */ $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  /* og_members_admin_override */  /* Master */ $handler->display->display_options['fields']['nothing']['label'] = 'Last access';
  /* og_members_admin_override */  /* Master */ $handler->display->display_options['fields']['nothing']['alter']['text'] = '[uid]-!2';
  /* og_members_admin_override */  /* Master */ $handler->display->display_options['fields']['nothing']['element_default_classes'] = FALSE;
  /* og_members_admin_override */  /* Master */ /* Field: OG membership: Edit link */
  /* og_members_admin_override */  /* Master */ $handler->display->display_options['fields']['edit_membership']['id'] = 'edit_membership';
  /* og_members_admin_override */  /* Master */ $handler->display->display_options['fields']['edit_membership']['table'] = 'og_membership';
  /* og_members_admin_override */  /* Master */ $handler->display->display_options['fields']['edit_membership']['field'] = 'edit_membership';
  /* og_members_admin_override */  /* Master */ $handler->display->display_options['fields']['edit_membership']['relationship'] = 'og_membership_rel';
  /* og_members_admin_override */  /* Master */ $handler->display->display_options['fields']['edit_membership']['label'] = '';
  /* og_members_admin_override */  /* Master */ $handler->display->display_options['fields']['edit_membership']['element_label_colon'] = FALSE;
  /* og_members_admin_override */  /* Master */ $handler->display->display_options['fields']['edit_membership']['destination'] = TRUE;
  /* og_members_admin_override */  /* Master */ /* Field: OG membership: Delete link */
  /* og_members_admin_override */  /* Master */ $handler->display->display_options['fields']['delete_membership']['id'] = 'delete_membership';
  /* og_members_admin_override */  /* Master */ $handler->display->display_options['fields']['delete_membership']['table'] = 'og_membership';
  /* og_members_admin_override */  /* Master */ $handler->display->display_options['fields']['delete_membership']['field'] = 'delete_membership';
  /* og_members_admin_override */  /* Master */ $handler->display->display_options['fields']['delete_membership']['relationship'] = 'og_membership_rel';
  /* og_members_admin_override */  /* Master */ $handler->display->display_options['fields']['delete_membership']['label'] = '';
  /* og_members_admin_override */  /* Master */ $handler->display->display_options['fields']['delete_membership']['element_label_colon'] = FALSE;
  /* og_members_admin_override */  /* Master */ /* Sort criterion: User: Name */
  /* og_members_admin_override */  /* Master */ $handler->display->display_options['sorts']['name']['id'] = 'name';
  /* og_members_admin_override */  /* Master */ $handler->display->display_options['sorts']['name']['table'] = 'users';
  /* og_members_admin_override */  /* Master */ $handler->display->display_options['sorts']['name']['field'] = 'name';
  /* og_members_admin_override */  /* Master */ /* Contextual filter: OG membership: Group_type */
  /* og_members_admin_override */  /* Master */ $handler->display->display_options['arguments']['group_type']['id'] = 'group_type';
  /* og_members_admin_override */  /* Master */ $handler->display->display_options['arguments']['group_type']['table'] = 'og_membership';
  /* og_members_admin_override */  /* Master */ $handler->display->display_options['arguments']['group_type']['field'] = 'group_type';
  /* og_members_admin_override */  /* Master */ $handler->display->display_options['arguments']['group_type']['relationship'] = 'og_membership_rel';
  /* og_members_admin_override */  /* Master */ $handler->display->display_options['arguments']['group_type']['default_action'] = 'not found';
  /* og_members_admin_override */  /* Master */ $handler->display->display_options['arguments']['group_type']['default_argument_type'] = 'fixed';
  /* og_members_admin_override */  /* Master */ $handler->display->display_options['arguments']['group_type']['summary']['number_of_records'] = '0';
  /* og_members_admin_override */  /* Master */ $handler->display->display_options['arguments']['group_type']['summary']['format'] = 'default_summary';
  /* og_members_admin_override */  /* Master */ $handler->display->display_options['arguments']['group_type']['summary_options']['items_per_page'] = '25';
  /* og_members_admin_override */  /* Master */ $handler->display->display_options['arguments']['group_type']['limit'] = '0';
  /* og_members_admin_override */  /* Master */ /* Contextual filter: OG membership: Group ID */
  /* og_members_admin_override */  /* Master */ $handler->display->display_options['arguments']['gid']['id'] = 'gid';
  /* og_members_admin_override */  /* Master */ $handler->display->display_options['arguments']['gid']['table'] = 'og_membership';
  /* og_members_admin_override */  /* Master */ $handler->display->display_options['arguments']['gid']['field'] = 'gid';
  /* og_members_admin_override */  /* Master */ $handler->display->display_options['arguments']['gid']['relationship'] = 'og_membership_rel';
  /* og_members_admin_override */  /* Master */ $handler->display->display_options['arguments']['gid']['default_action'] = 'not found';
  /* og_members_admin_override */  /* Master */ $handler->display->display_options['arguments']['gid']['default_argument_type'] = 'fixed';
  /* og_members_admin_override */  /* Master */ $handler->display->display_options['arguments']['gid']['summary']['number_of_records'] = '0';
  /* og_members_admin_override */  /* Master */ $handler->display->display_options['arguments']['gid']['summary']['format'] = 'default_summary';
  /* og_members_admin_override */  /* Master */ $handler->display->display_options['arguments']['gid']['summary_options']['items_per_page'] = '25';
  /* og_members_admin_override */  /* Master */ /* Filter criterion: User: Active */
  /* og_members_admin_override */  /* Master */ $handler->display->display_options['filters']['status']['id'] = 'status';
  /* og_members_admin_override */  /* Master */ $handler->display->display_options['filters']['status']['table'] = 'users';
  /* og_members_admin_override */  /* Master */ $handler->display->display_options['filters']['status']['field'] = 'status';
  /* og_members_admin_override */  /* Master */ $handler->display->display_options['filters']['status']['value'] = '1';
  /* og_members_admin_override */  /* Master */ $handler->display->display_options['filters']['status']['group'] = 1;
  /* og_members_admin_override */  /* Master */ $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* og_members_admin_override */  /* Master */ /* Filter criterion: OG membership: State */
  /* og_members_admin_override */  /* Master */ $handler->display->display_options['filters']['state']['id'] = 'state';
  /* og_members_admin_override */  /* Master */ $handler->display->display_options['filters']['state']['table'] = 'og_membership';
  /* og_members_admin_override */  /* Master */ $handler->display->display_options['filters']['state']['field'] = 'state';
  /* og_members_admin_override */  /* Master */ $handler->display->display_options['filters']['state']['relationship'] = 'og_membership_rel';
  /* og_members_admin_override */  /* Master */ $handler->display->display_options['filters']['state']['group'] = 1;
  /* og_members_admin_override */  /* Master */ $handler->display->display_options['filters']['state']['exposed'] = TRUE;
  /* og_members_admin_override */  /* Master */ $handler->display->display_options['filters']['state']['expose']['operator_id'] = 'state_op';
  /* og_members_admin_override */  /* Master */ $handler->display->display_options['filters']['state']['expose']['label'] = 'State';
  /* og_members_admin_override */  /* Master */ $handler->display->display_options['filters']['state']['expose']['operator'] = 'state_op';
  /* og_members_admin_override */  /* Master */ $handler->display->display_options['filters']['state']['expose']['identifier'] = 'state';
  /* og_members_admin_override */  /* Master */ /* Filter criterion: OG user roles: Role Name */
  /* og_members_admin_override */  /* Master */ $handler->display->display_options['filters']['name']['id'] = 'name';
  /* og_members_admin_override */  /* Master */ $handler->display->display_options['filters']['name']['table'] = 'og_role';
  /* og_members_admin_override */  /* Master */ $handler->display->display_options['filters']['name']['field'] = 'name';
  /* og_members_admin_override */  /* Master */ $handler->display->display_options['filters']['name']['relationship'] = 'og_users_roles';
  /* og_members_admin_override */  /* Master */ $handler->display->display_options['filters']['name']['group'] = 1;
  /* og_members_admin_override */  /* Master */ $handler->display->display_options['filters']['name']['exposed'] = TRUE;
  /* og_members_admin_override */  /* Master */ $handler->display->display_options['filters']['name']['expose']['operator_id'] = 'name_op';
  /* og_members_admin_override */  /* Master */ $handler->display->display_options['filters']['name']['expose']['label'] = 'Role';
  /* og_members_admin_override */  /* Master */ $handler->display->display_options['filters']['name']['expose']['operator'] = 'name_op';
  /* og_members_admin_override */  /* Master */ $handler->display->display_options['filters']['name']['expose']['identifier'] = 'name';
  /* og_members_admin_override */  /* Master */ $handler->display->display_options['filters']['name']['expose']['remember_roles'] = array(
  /* og_members_admin_override */  /* Master */   2 => '2',
  /* og_members_admin_override */  /* Master */   1 => 0,
  /* og_members_admin_override */  /* Master */   9 => 0,
  /* og_members_admin_override */  /* Master */   10 => 0,
  /* og_members_admin_override */  /* Master */ );
  /* og_members_admin_override */  /* Master */ /* Filter criterion: User: Name */
  /* og_members_admin_override */  /* Master */ $handler->display->display_options['filters']['uid']['id'] = 'uid';
  /* og_members_admin_override */  /* Master */ $handler->display->display_options['filters']['uid']['table'] = 'users';
  /* og_members_admin_override */  /* Master */ $handler->display->display_options['filters']['uid']['field'] = 'uid';
  /* og_members_admin_override */  /* Master */ $handler->display->display_options['filters']['uid']['value'] = '';
  /* og_members_admin_override */  /* Master */ $handler->display->display_options['filters']['uid']['group'] = 1;
  /* og_members_admin_override */  /* Master */ $handler->display->display_options['filters']['uid']['exposed'] = TRUE;
  /* og_members_admin_override */  /* Master */ $handler->display->display_options['filters']['uid']['expose']['operator_id'] = 'uid_op';
  /* og_members_admin_override */  /* Master */ $handler->display->display_options['filters']['uid']['expose']['label'] = 'Name';
  /* og_members_admin_override */  /* Master */ $handler->display->display_options['filters']['uid']['expose']['operator'] = 'uid_op';
  /* og_members_admin_override */  /* Master */ $handler->display->display_options['filters']['uid']['expose']['identifier'] = 'uid';
  /* og_members_admin_override */ $translatables['og_members_admin_override'] = array(
  /* og_members_admin_override */   t('Master'),
  /* og_members_admin_override */   t('OG members admin'),
  /* og_members_admin_override */   t('more'),
  /* og_members_admin_override */   t('Apply'),
  /* og_members_admin_override */   t('Reset'),
  /* og_members_admin_override */   t('Sort by'),
  /* og_members_admin_override */   t('Asc'),
  /* og_members_admin_override */   t('Desc'),
  /* og_members_admin_override */   t('Advanced options'),
  /* og_members_admin_override */   t('<br>
<p>To filter all members by "state" or "role," select an option from the State or Role field and click GO (e.g. selecting the role "group_manager" and clicking GO will show all group managers in the group).</p>
<p>To view specific members in the list, enter a comma separated list of user names and click GO. All three fields can also be used to filter in combination.</p>'),
  /* og_members_admin_override */   t('Items per page'),
  /* og_members_admin_override */   t('- All -'),
  /* og_members_admin_override */   t('Offset'),
  /* og_members_admin_override */   t('« first'),
  /* og_members_admin_override */   t('‹ previous'),
  /* og_members_admin_override */   t('next ›'),
  /* og_members_admin_override */   t('last »'),
  /* og_members_admin_override */   t('No people found matching the search criteria.'),
  /* og_members_admin_override */   t('OG membership from user'),
  /* og_members_admin_override */   t('OG Roles from OG membership'),
  /* og_members_admin_override */   t('OG membership'),
  /* og_members_admin_override */   t('- Choose an operation -'),
  /* og_members_admin_override */   t('Name'),
  /* og_members_admin_override */   t('State'),
  /* og_members_admin_override */   t('Roles'),
  /* og_members_admin_override */   t('Member since'),
  /* og_members_admin_override */   t('Request message'),
  /* og_members_admin_override */   t('Last access'),
  /* og_members_admin_override */   t('[uid]-!2'),
  /* og_members_admin_override */   t('All'),
  /* og_members_admin_override */   t('Role'),
  /* og_members_admin_override */ );
  $export['og_members_admin_override'] = $view;

  /* organization_users */ $view = new view();
  /* organization_users */ $view->name = 'organization_users';
  /* organization_users */ $view->description = '';
  /* organization_users */ $view->tag = 'default';
  /* organization_users */ $view->base_table = 'users';
  /* organization_users */ $view->human_name = 'Organization Users';
  /* organization_users */ $view->core = 7;
  /* organization_users */ $view->api_version = '3.0';
  /* organization_users */ $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* organization_users */ /* Display: Master */
  /* organization_users */  /* Master */ $handler = $view->new_display('default', 'Master', 'default');
  /* organization_users */  /* Master */ $handler->display->display_options['title'] = 'Organization Users';
  /* organization_users */  /* Master */ $handler->display->display_options['use_more_always'] = FALSE;
  /* organization_users */  /* Master */ $handler->display->display_options['access']['type'] = 'gn2_og_any_hr_manager_access';
  /* organization_users */  /* Master */ $handler->display->display_options['cache']['type'] = 'none';
  /* organization_users */  /* Master */ $handler->display->display_options['query']['type'] = 'views_query';
  /* organization_users */  /* Master */ $handler->display->display_options['query']['options']['distinct'] = TRUE;
  /* organization_users */  /* Master */ $handler->display->display_options['exposed_form']['type'] = 'basic';
  /* organization_users */  /* Master */ $handler->display->display_options['pager']['type'] = 'full';
  /* organization_users */  /* Master */ $handler->display->display_options['pager']['options']['items_per_page'] = '30';
  /* organization_users */  /* Master */ $handler->display->display_options['style_plugin'] = 'table';
  /* organization_users */  /* Master */ $handler->display->display_options['style_options']['columns'] = array(
  /* organization_users */  /* Master */   'name' => 'name',
  /* organization_users */  /* Master */ );
  /* organization_users */  /* Master */ $handler->display->display_options['style_options']['default'] = '-1';
  /* organization_users */  /* Master */ $handler->display->display_options['style_options']['info'] = array(
  /* organization_users */  /* Master */   'name' => array(
  /* organization_users */  /* Master */     'sortable' => 0,
  /* organization_users */  /* Master */     'default_sort_order' => 'asc',
  /* organization_users */  /* Master */     'align' => '',
  /* organization_users */  /* Master */     'separator' => '',
  /* organization_users */  /* Master */     'empty_column' => 0,
  /* organization_users */  /* Master */   ),
  /* organization_users */  /* Master */ );
  /* organization_users */  /* Master */ /* Field: Bulk operations: User */
  /* organization_users */  /* Master */ $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  /* organization_users */  /* Master */ $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'users';
  /* organization_users */  /* Master */ $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  /* organization_users */  /* Master */ $handler->display->display_options['fields']['views_bulk_operations']['label'] = '';
  /* organization_users */  /* Master */ $handler->display->display_options['fields']['views_bulk_operations']['element_label_colon'] = FALSE;
  /* organization_users */  /* Master */ $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '0';
  /* organization_users */  /* Master */ $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  /* organization_users */  /* Master */ $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['row_clickable'] = 1;
  /* organization_users */  /* Master */ $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  /* organization_users */  /* Master */ $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  /* organization_users */  /* Master */ $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
  /* organization_users */  /* Master */   'action::user_block_user_action' => array(
  /* organization_users */  /* Master */     'selected' => 1,
  /* organization_users */  /* Master */     'postpone_processing' => 0,
  /* organization_users */  /* Master */     'skip_confirmation' => 0,
  /* organization_users */  /* Master */     'override_label' => 0,
  /* organization_users */  /* Master */     'label' => '',
  /* organization_users */  /* Master */   ),
  /* organization_users */  /* Master */   'action::one_time_login_send_action' => array(
  /* organization_users */  /* Master */     'selected' => 1,
  /* organization_users */  /* Master */     'postpone_processing' => 0,
  /* organization_users */  /* Master */     'skip_confirmation' => 0,
  /* organization_users */  /* Master */     'override_label' => 0,
  /* organization_users */  /* Master */     'label' => '',
  /* organization_users */  /* Master */   ),
  /* organization_users */  /* Master */   'action::gn2_og_unblock_user_action' => array(
  /* organization_users */  /* Master */     'selected' => 1,
  /* organization_users */  /* Master */     'postpone_processing' => 0,
  /* organization_users */  /* Master */     'skip_confirmation' => 0,
  /* organization_users */  /* Master */     'override_label' => 0,
  /* organization_users */  /* Master */     'label' => '',
  /* organization_users */  /* Master */   ),
  /* organization_users */  /* Master */ );
  /* organization_users */  /* Master */ /* Field: User: Name */
  /* organization_users */  /* Master */ $handler->display->display_options['fields']['name']['id'] = 'name';
  /* organization_users */  /* Master */ $handler->display->display_options['fields']['name']['table'] = 'users';
  /* organization_users */  /* Master */ $handler->display->display_options['fields']['name']['field'] = 'name';
  /* organization_users */  /* Master */ $handler->display->display_options['fields']['name']['label'] = 'Username';
  /* organization_users */  /* Master */ $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  /* organization_users */  /* Master */ $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  /* organization_users */  /* Master */ /* Field: User: Active */
  /* organization_users */  /* Master */ $handler->display->display_options['fields']['status']['id'] = 'status';
  /* organization_users */  /* Master */ $handler->display->display_options['fields']['status']['table'] = 'users';
  /* organization_users */  /* Master */ $handler->display->display_options['fields']['status']['field'] = 'status';
  /* organization_users */  /* Master */ $handler->display->display_options['fields']['status']['label'] = 'Status';
  /* organization_users */  /* Master */ $handler->display->display_options['fields']['status']['type'] = 'active-blocked';
  /* organization_users */  /* Master */ $handler->display->display_options['fields']['status']['not'] = 0;
  /* organization_users */  /* Master */ /* Field: User: Roles */
  /* organization_users */  /* Master */ $handler->display->display_options['fields']['rid']['id'] = 'rid';
  /* organization_users */  /* Master */ $handler->display->display_options['fields']['rid']['table'] = 'users_roles';
  /* organization_users */  /* Master */ $handler->display->display_options['fields']['rid']['field'] = 'rid';
  /* organization_users */  /* Master */ /* Field: User: Created date */
  /* organization_users */  /* Master */ $handler->display->display_options['fields']['created']['id'] = 'created';
  /* organization_users */  /* Master */ $handler->display->display_options['fields']['created']['table'] = 'users';
  /* organization_users */  /* Master */ $handler->display->display_options['fields']['created']['field'] = 'created';
  /* organization_users */  /* Master */ $handler->display->display_options['fields']['created']['label'] = 'Member since';
  /* organization_users */  /* Master */ $handler->display->display_options['fields']['created']['date_format'] = 'time ago';
  /* organization_users */  /* Master */ $handler->display->display_options['fields']['created']['second_date_format'] = 'date_format_globalnet_date';
  /* organization_users */  /* Master */ /* Field: User: Last access */
  /* organization_users */  /* Master */ $handler->display->display_options['fields']['access']['id'] = 'access';
  /* organization_users */  /* Master */ $handler->display->display_options['fields']['access']['table'] = 'users';
  /* organization_users */  /* Master */ $handler->display->display_options['fields']['access']['field'] = 'access';
  /* organization_users */  /* Master */ $handler->display->display_options['fields']['access']['date_format'] = 'date_format_globalnet_date';
  /* organization_users */  /* Master */ $handler->display->display_options['fields']['access']['second_date_format'] = 'date_format_globalnet_date';
  /* organization_users */  /* Master */ /* Field: User: Edit link */
  /* organization_users */  /* Master */ $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  /* organization_users */  /* Master */ $handler->display->display_options['fields']['edit_node']['table'] = 'users';
  /* organization_users */  /* Master */ $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  /* organization_users */  /* Master */ $handler->display->display_options['fields']['edit_node']['label'] = 'Operations';
  /* organization_users */  /* Master */ /* Sort criterion: User: Created date */
  /* organization_users */  /* Master */ $handler->display->display_options['sorts']['created']['id'] = 'created';
  /* organization_users */  /* Master */ $handler->display->display_options['sorts']['created']['table'] = 'users';
  /* organization_users */  /* Master */ $handler->display->display_options['sorts']['created']['field'] = 'created';
  /* organization_users */  /* Master */ $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* organization_users */  /* Master */ /* Contextual filter: User: Group membership (og_user_node) */
  /* organization_users */  /* Master */ $handler->display->display_options['arguments']['og_user_node_target_id']['id'] = 'og_user_node_target_id';
  /* organization_users */  /* Master */ $handler->display->display_options['arguments']['og_user_node_target_id']['table'] = 'og_membership';
  /* organization_users */  /* Master */ $handler->display->display_options['arguments']['og_user_node_target_id']['field'] = 'og_user_node_target_id';
  /* organization_users */  /* Master */ $handler->display->display_options['arguments']['og_user_node_target_id']['default_action'] = 'default';
  /* organization_users */  /* Master */ $handler->display->display_options['arguments']['og_user_node_target_id']['default_argument_type'] = 'gn2_og_hr_manged_orgs';
  /* organization_users */  /* Master */ $handler->display->display_options['arguments']['og_user_node_target_id']['summary']['number_of_records'] = '0';
  /* organization_users */  /* Master */ $handler->display->display_options['arguments']['og_user_node_target_id']['summary']['format'] = 'default_summary';
  /* organization_users */  /* Master */ $handler->display->display_options['arguments']['og_user_node_target_id']['summary_options']['items_per_page'] = '25';
  /* organization_users */  /* Master */ $handler->display->display_options['arguments']['og_user_node_target_id']['specify_validation'] = TRUE;
  /* organization_users */  /* Master */ $handler->display->display_options['arguments']['og_user_node_target_id']['validate']['type'] = 'node';
  /* organization_users */  /* Master */ $handler->display->display_options['arguments']['og_user_node_target_id']['validate_options']['types'] = array(
  /* organization_users */  /* Master */   'organization' => 'organization',
  /* organization_users */  /* Master */ );
  /* organization_users */  /* Master */ $handler->display->display_options['arguments']['og_user_node_target_id']['validate_options']['nid_type'] = 'nids';
  /* organization_users */  /* Master */ $handler->display->display_options['arguments']['og_user_node_target_id']['validate']['fail'] = 'access denied';
  /* organization_users */  /* Master */ $handler->display->display_options['arguments']['og_user_node_target_id']['break_phrase'] = TRUE;
  /* organization_users */  /* Master */ /* Filter criterion: User: Roles */
  /* organization_users */  /* Master */ $handler->display->display_options['filters']['rid']['id'] = 'rid';
  /* organization_users */  /* Master */ $handler->display->display_options['filters']['rid']['table'] = 'users_roles';
  /* organization_users */  /* Master */ $handler->display->display_options['filters']['rid']['field'] = 'rid';
  /* organization_users */  /* Master */ $handler->display->display_options['filters']['rid']['group'] = 1;
  /* organization_users */  /* Master */ $handler->display->display_options['filters']['rid']['exposed'] = TRUE;
  /* organization_users */  /* Master */ $handler->display->display_options['filters']['rid']['expose']['operator_id'] = 'rid_op';
  /* organization_users */  /* Master */ $handler->display->display_options['filters']['rid']['expose']['label'] = 'Roles';
  /* organization_users */  /* Master */ $handler->display->display_options['filters']['rid']['expose']['operator'] = 'rid_op';
  /* organization_users */  /* Master */ $handler->display->display_options['filters']['rid']['expose']['identifier'] = 'rid';
  /* organization_users */  /* Master */ $handler->display->display_options['filters']['rid']['expose']['remember_roles'] = array(
  /* organization_users */  /* Master */   2 => '2',
  /* organization_users */  /* Master */   1 => 0,
  /* organization_users */  /* Master */   9 => 0,
  /* organization_users */  /* Master */   10 => 0,
  /* organization_users */  /* Master */ );
  /* organization_users */  /* Master */ /* Filter criterion: User: Permission */
  /* organization_users */  /* Master */ $handler->display->display_options['filters']['permission']['id'] = 'permission';
  /* organization_users */  /* Master */ $handler->display->display_options['filters']['permission']['table'] = 'role_permission';
  /* organization_users */  /* Master */ $handler->display->display_options['filters']['permission']['field'] = 'permission';
  /* organization_users */  /* Master */ $handler->display->display_options['filters']['permission']['group'] = 1;
  /* organization_users */  /* Master */ $handler->display->display_options['filters']['permission']['exposed'] = TRUE;
  /* organization_users */  /* Master */ $handler->display->display_options['filters']['permission']['expose']['operator_id'] = 'permission_op';
  /* organization_users */  /* Master */ $handler->display->display_options['filters']['permission']['expose']['label'] = 'Permission';
  /* organization_users */  /* Master */ $handler->display->display_options['filters']['permission']['expose']['operator'] = 'permission_op';
  /* organization_users */  /* Master */ $handler->display->display_options['filters']['permission']['expose']['identifier'] = 'permission';
  /* organization_users */  /* Master */ $handler->display->display_options['filters']['permission']['expose']['remember_roles'] = array(
  /* organization_users */  /* Master */   2 => '2',
  /* organization_users */  /* Master */   1 => 0,
  /* organization_users */  /* Master */   9 => 0,
  /* organization_users */  /* Master */   10 => 0,
  /* organization_users */  /* Master */ );

  /* organization_users */ /* Display: Page */
  /* organization_users */  /* Page */ $handler = $view->new_display('page', 'Page', 'page');
  /* organization_users */  /* Page */ $handler->display->display_options['path'] = 'admin/manage/organization-users';
  /* organization_users */ $translatables['organization_users'] = array(
  /* organization_users */   t('Master'),
  /* organization_users */   t('Organization Users'),
  /* organization_users */   t('more'),
  /* organization_users */   t('Apply'),
  /* organization_users */   t('Reset'),
  /* organization_users */   t('Sort by'),
  /* organization_users */   t('Asc'),
  /* organization_users */   t('Desc'),
  /* organization_users */   t('Items per page'),
  /* organization_users */   t('- All -'),
  /* organization_users */   t('Offset'),
  /* organization_users */   t('« first'),
  /* organization_users */   t('‹ previous'),
  /* organization_users */   t('next ›'),
  /* organization_users */   t('last »'),
  /* organization_users */   t('- Choose an operation -'),
  /* organization_users */   t('Username'),
  /* organization_users */   t('Status'),
  /* organization_users */   t('Roles'),
  /* organization_users */   t('Member since'),
  /* organization_users */   t('Last access'),
  /* organization_users */   t('Operations'),
  /* organization_users */   t('All'),
  /* organization_users */   t('Permission'),
  /* organization_users */   t('Page'),
  /* organization_users */ );
  $export['organization_users'] = $view;

  return $export;
}
