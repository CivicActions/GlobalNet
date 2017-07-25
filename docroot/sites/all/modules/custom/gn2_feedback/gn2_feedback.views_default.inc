<?php
/**
 * @file
 * gn2_feedback.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function gn2_feedback_views_default_views() {
  $export = array();

  /* course_feedback */ $view = new view();
  /* course_feedback */ $view->name = 'course_feedback';
  /* course_feedback */ $view->description = '';
  /* course_feedback */ $view->tag = 'default';
  /* course_feedback */ $view->base_table = 'entityform';
  /* course_feedback */ $view->human_name = 'Course Feedback';
  /* course_feedback */ $view->core = 7;
  /* course_feedback */ $view->api_version = '3.0';
  /* course_feedback */ $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* course_feedback */ /* Display: Master */
  /* course_feedback */  /* Master */ $handler = $view->new_display('default', 'Master', 'default');
  /* course_feedback */  /* Master */ $handler->display->display_options['title'] = 'Course Feedback';
  /* course_feedback */  /* Master */ $handler->display->display_options['use_more_always'] = FALSE;
  /* course_feedback */  /* Master */ $handler->display->display_options['access']['type'] = 'gn2_og_any_group_manager_access';
  /* course_feedback */  /* Master */ $handler->display->display_options['cache']['type'] = 'none';
  /* course_feedback */  /* Master */ $handler->display->display_options['query']['type'] = 'views_query';
  /* course_feedback */  /* Master */ $handler->display->display_options['query']['options']['disable_sql_rewrite'] = TRUE;
  /* course_feedback */  /* Master */ $handler->display->display_options['exposed_form']['type'] = 'basic';
  /* course_feedback */  /* Master */ $handler->display->display_options['pager']['type'] = 'full';
  /* course_feedback */  /* Master */ $handler->display->display_options['pager']['options']['items_per_page'] = '30';
  /* course_feedback */  /* Master */ $handler->display->display_options['style_plugin'] = 'table';
  /* course_feedback */  /* Master */ $handler->display->display_options['style_options']['columns'] = array(
  /* course_feedback */  /* Master */   'entityform_id' => 'entityform_id',
  /* course_feedback */  /* Master */   'field_feedback_category' => 'field_feedback_category',
  /* course_feedback */  /* Master */   'created' => 'created',
  /* course_feedback */  /* Master */   'field_title' => 'field_title',
  /* course_feedback */  /* Master */   'field_description' => 'field_description',
  /* course_feedback */  /* Master */   'name' => 'name',
  /* course_feedback */  /* Master */ );
  /* course_feedback */  /* Master */ $handler->display->display_options['style_options']['default'] = '-1';
  /* course_feedback */  /* Master */ $handler->display->display_options['style_options']['info'] = array(
  /* course_feedback */  /* Master */   'entityform_id' => array(
  /* course_feedback */  /* Master */     'sortable' => 0,
  /* course_feedback */  /* Master */     'default_sort_order' => 'asc',
  /* course_feedback */  /* Master */     'align' => '',
  /* course_feedback */  /* Master */     'separator' => '',
  /* course_feedback */  /* Master */     'empty_column' => 0,
  /* course_feedback */  /* Master */   ),
  /* course_feedback */  /* Master */   'field_feedback_category' => array(
  /* course_feedback */  /* Master */     'sortable' => 1,
  /* course_feedback */  /* Master */     'default_sort_order' => 'asc',
  /* course_feedback */  /* Master */     'align' => '',
  /* course_feedback */  /* Master */     'separator' => '',
  /* course_feedback */  /* Master */     'empty_column' => 0,
  /* course_feedback */  /* Master */   ),
  /* course_feedback */  /* Master */   'created' => array(
  /* course_feedback */  /* Master */     'sortable' => 1,
  /* course_feedback */  /* Master */     'default_sort_order' => 'asc',
  /* course_feedback */  /* Master */     'align' => '',
  /* course_feedback */  /* Master */     'separator' => '',
  /* course_feedback */  /* Master */     'empty_column' => 0,
  /* course_feedback */  /* Master */   ),
  /* course_feedback */  /* Master */   'field_title' => array(
  /* course_feedback */  /* Master */     'sortable' => 0,
  /* course_feedback */  /* Master */     'default_sort_order' => 'asc',
  /* course_feedback */  /* Master */     'align' => '',
  /* course_feedback */  /* Master */     'separator' => '',
  /* course_feedback */  /* Master */     'empty_column' => 0,
  /* course_feedback */  /* Master */   ),
  /* course_feedback */  /* Master */   'field_description' => array(
  /* course_feedback */  /* Master */     'sortable' => 0,
  /* course_feedback */  /* Master */     'default_sort_order' => 'asc',
  /* course_feedback */  /* Master */     'align' => '',
  /* course_feedback */  /* Master */     'separator' => '',
  /* course_feedback */  /* Master */     'empty_column' => 0,
  /* course_feedback */  /* Master */   ),
  /* course_feedback */  /* Master */   'name' => array(
  /* course_feedback */  /* Master */     'sortable' => 0,
  /* course_feedback */  /* Master */     'default_sort_order' => 'asc',
  /* course_feedback */  /* Master */     'align' => '',
  /* course_feedback */  /* Master */     'separator' => '',
  /* course_feedback */  /* Master */     'empty_column' => 0,
  /* course_feedback */  /* Master */   ),
  /* course_feedback */  /* Master */ );
  /* course_feedback */  /* Master */ /* No results behavior: Global: Text area */
  /* course_feedback */  /* Master */ $handler->display->display_options['empty']['area']['id'] = 'area';
  /* course_feedback */  /* Master */ $handler->display->display_options['empty']['area']['table'] = 'views';
  /* course_feedback */  /* Master */ $handler->display->display_options['empty']['area']['field'] = 'area';
  /* course_feedback */  /* Master */ $handler->display->display_options['empty']['area']['empty'] = TRUE;
  /* course_feedback */  /* Master */ $handler->display->display_options['empty']['area']['content'] = 'There is no feedback for this course.';
  /* course_feedback */  /* Master */ $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  /* course_feedback */  /* Master */ /* Relationship: Entityform Submission: User uid */
  /* course_feedback */  /* Master */ $handler->display->display_options['relationships']['user']['id'] = 'user';
  /* course_feedback */  /* Master */ $handler->display->display_options['relationships']['user']['table'] = 'entityform';
  /* course_feedback */  /* Master */ $handler->display->display_options['relationships']['user']['field'] = 'user';
  /* course_feedback */  /* Master */ $handler->display->display_options['relationships']['user']['required'] = TRUE;
  /* course_feedback */  /* Master */ /* Field: Entityform Submission: Entityform submission ID */
  /* course_feedback */  /* Master */ $handler->display->display_options['fields']['entityform_id']['id'] = 'entityform_id';
  /* course_feedback */  /* Master */ $handler->display->display_options['fields']['entityform_id']['table'] = 'entityform';
  /* course_feedback */  /* Master */ $handler->display->display_options['fields']['entityform_id']['field'] = 'entityform_id';
  /* course_feedback */  /* Master */ $handler->display->display_options['fields']['entityform_id']['label'] = 'Id';
  /* course_feedback */  /* Master */ /* Field: Entityform Submission: Feedback category */
  /* course_feedback */  /* Master */ $handler->display->display_options['fields']['field_feedback_category']['id'] = 'field_feedback_category';
  /* course_feedback */  /* Master */ $handler->display->display_options['fields']['field_feedback_category']['table'] = 'field_data_field_feedback_category';
  /* course_feedback */  /* Master */ $handler->display->display_options['fields']['field_feedback_category']['field'] = 'field_feedback_category';
  /* course_feedback */  /* Master */ $handler->display->display_options['fields']['field_feedback_category']['label'] = 'Category';
  /* course_feedback */  /* Master */ $handler->display->display_options['fields']['field_feedback_category']['element_type'] = '0';
  /* course_feedback */  /* Master */ $handler->display->display_options['fields']['field_feedback_category']['element_wrapper_type'] = '0';
  /* course_feedback */  /* Master */ $handler->display->display_options['fields']['field_feedback_category']['element_default_classes'] = FALSE;
  /* course_feedback */  /* Master */ $handler->display->display_options['fields']['field_feedback_category']['settings'] = array(
  /* course_feedback */  /* Master */   'field_formatter_class' => '',
  /* course_feedback */  /* Master */ );
  /* course_feedback */  /* Master */ $handler->display->display_options['fields']['field_feedback_category']['field_api_classes'] = TRUE;
  /* course_feedback */  /* Master */ /* Field: Entityform Submission: Date submitted */
  /* course_feedback */  /* Master */ $handler->display->display_options['fields']['created']['id'] = 'created';
  /* course_feedback */  /* Master */ $handler->display->display_options['fields']['created']['table'] = 'entityform';
  /* course_feedback */  /* Master */ $handler->display->display_options['fields']['created']['field'] = 'created';
  /* course_feedback */  /* Master */ $handler->display->display_options['fields']['created']['label'] = 'Created';
  /* course_feedback */  /* Master */ $handler->display->display_options['fields']['created']['date_format'] = 'date_format_globalnet_date';
  /* course_feedback */  /* Master */ $handler->display->display_options['fields']['created']['second_date_format'] = 'date_format_globalnet_date';
  /* course_feedback */  /* Master */ /* Field: Field: Title */
  /* course_feedback */  /* Master */ $handler->display->display_options['fields']['field_title']['id'] = 'field_title';
  /* course_feedback */  /* Master */ $handler->display->display_options['fields']['field_title']['table'] = 'field_data_field_title';
  /* course_feedback */  /* Master */ $handler->display->display_options['fields']['field_title']['field'] = 'field_title';
  /* course_feedback */  /* Master */ $handler->display->display_options['fields']['field_title']['element_type'] = '0';
  /* course_feedback */  /* Master */ $handler->display->display_options['fields']['field_title']['element_wrapper_type'] = '0';
  /* course_feedback */  /* Master */ $handler->display->display_options['fields']['field_title']['element_default_classes'] = FALSE;
  /* course_feedback */  /* Master */ $handler->display->display_options['fields']['field_title']['settings'] = array(
  /* course_feedback */  /* Master */   'field_formatter_class' => '',
  /* course_feedback */  /* Master */ );
  /* course_feedback */  /* Master */ $handler->display->display_options['fields']['field_title']['field_api_classes'] = TRUE;
  /* course_feedback */  /* Master */ /* Field: Field: Description */
  /* course_feedback */  /* Master */ $handler->display->display_options['fields']['field_description']['id'] = 'field_description';
  /* course_feedback */  /* Master */ $handler->display->display_options['fields']['field_description']['table'] = 'field_data_field_description';
  /* course_feedback */  /* Master */ $handler->display->display_options['fields']['field_description']['field'] = 'field_description';
  /* course_feedback */  /* Master */ $handler->display->display_options['fields']['field_description']['element_type'] = '0';
  /* course_feedback */  /* Master */ $handler->display->display_options['fields']['field_description']['element_wrapper_type'] = '0';
  /* course_feedback */  /* Master */ $handler->display->display_options['fields']['field_description']['element_default_classes'] = FALSE;
  /* course_feedback */  /* Master */ $handler->display->display_options['fields']['field_description']['settings'] = array(
  /* course_feedback */  /* Master */   'field_formatter_class' => '',
  /* course_feedback */  /* Master */ );
  /* course_feedback */  /* Master */ $handler->display->display_options['fields']['field_description']['field_api_classes'] = TRUE;
  /* course_feedback */  /* Master */ /* Field: User: Name */
  /* course_feedback */  /* Master */ $handler->display->display_options['fields']['name']['id'] = 'name';
  /* course_feedback */  /* Master */ $handler->display->display_options['fields']['name']['table'] = 'users';
  /* course_feedback */  /* Master */ $handler->display->display_options['fields']['name']['field'] = 'name';
  /* course_feedback */  /* Master */ $handler->display->display_options['fields']['name']['relationship'] = 'user';
  /* course_feedback */  /* Master */ /* Contextual filter: Entityform Submission: Groups audience (og_entityform_group_ref) */
  /* course_feedback */  /* Master */ $handler->display->display_options['arguments']['og_entityform_group_ref_target_id']['id'] = 'og_entityform_group_ref_target_id';
  /* course_feedback */  /* Master */ $handler->display->display_options['arguments']['og_entityform_group_ref_target_id']['table'] = 'og_membership';
  /* course_feedback */  /* Master */ $handler->display->display_options['arguments']['og_entityform_group_ref_target_id']['field'] = 'og_entityform_group_ref_target_id';
  /* course_feedback */  /* Master */ $handler->display->display_options['arguments']['og_entityform_group_ref_target_id']['default_action'] = 'default';
  /* course_feedback */  /* Master */ $handler->display->display_options['arguments']['og_entityform_group_ref_target_id']['default_argument_type'] = 'og_context';
  /* course_feedback */  /* Master */ $handler->display->display_options['arguments']['og_entityform_group_ref_target_id']['summary']['number_of_records'] = '0';
  /* course_feedback */  /* Master */ $handler->display->display_options['arguments']['og_entityform_group_ref_target_id']['summary']['format'] = 'default_summary';
  /* course_feedback */  /* Master */ $handler->display->display_options['arguments']['og_entityform_group_ref_target_id']['summary_options']['items_per_page'] = '25';
  /* course_feedback */  /* Master */ /* Filter criterion: Entityform Submission: Entityform Type */
  /* course_feedback */  /* Master */ $handler->display->display_options['filters']['type']['id'] = 'type';
  /* course_feedback */  /* Master */ $handler->display->display_options['filters']['type']['table'] = 'entityform';
  /* course_feedback */  /* Master */ $handler->display->display_options['filters']['type']['field'] = 'type';
  /* course_feedback */  /* Master */ $handler->display->display_options['filters']['type']['value'] = array(
  /* course_feedback */  /* Master */   'course_feedback' => 'course_feedback',
  /* course_feedback */  /* Master */ );
  /* course_feedback */  /* Master */ $handler->display->display_options['filters']['type']['group'] = 1;
  /* course_feedback */  /* Master */ /* Filter criterion: Entityform Submission: Feedback category (field_feedback_category) */
  /* course_feedback */  /* Master */ $handler->display->display_options['filters']['field_feedback_category_value']['id'] = 'field_feedback_category_value';
  /* course_feedback */  /* Master */ $handler->display->display_options['filters']['field_feedback_category_value']['table'] = 'field_data_field_feedback_category';
  /* course_feedback */  /* Master */ $handler->display->display_options['filters']['field_feedback_category_value']['field'] = 'field_feedback_category_value';
  /* course_feedback */  /* Master */ $handler->display->display_options['filters']['field_feedback_category_value']['group'] = 1;
  /* course_feedback */  /* Master */ $handler->display->display_options['filters']['field_feedback_category_value']['exposed'] = TRUE;
  /* course_feedback */  /* Master */ $handler->display->display_options['filters']['field_feedback_category_value']['expose']['operator_id'] = 'field_feedback_category_value_op';
  /* course_feedback */  /* Master */ $handler->display->display_options['filters']['field_feedback_category_value']['expose']['label'] = 'Category';
  /* course_feedback */  /* Master */ $handler->display->display_options['filters']['field_feedback_category_value']['expose']['operator'] = 'field_feedback_category_value_op';
  /* course_feedback */  /* Master */ $handler->display->display_options['filters']['field_feedback_category_value']['expose']['identifier'] = 'field_feedback_category_value';
  /* course_feedback */  /* Master */ $handler->display->display_options['filters']['field_feedback_category_value']['expose']['remember_roles'] = array(
  /* course_feedback */  /* Master */   2 => '2',
  /* course_feedback */  /* Master */   1 => 0,
  /* course_feedback */  /* Master */   9 => 0,
  /* course_feedback */  /* Master */   10 => 0,
  /* course_feedback */  /* Master */ );
  /* course_feedback */  /* Master */ /* Filter criterion: User: Name */
  /* course_feedback */  /* Master */ $handler->display->display_options['filters']['uid']['id'] = 'uid';
  /* course_feedback */  /* Master */ $handler->display->display_options['filters']['uid']['table'] = 'users';
  /* course_feedback */  /* Master */ $handler->display->display_options['filters']['uid']['field'] = 'uid';
  /* course_feedback */  /* Master */ $handler->display->display_options['filters']['uid']['relationship'] = 'user';
  /* course_feedback */  /* Master */ $handler->display->display_options['filters']['uid']['value'] = '';
  /* course_feedback */  /* Master */ $handler->display->display_options['filters']['uid']['group'] = 1;
  /* course_feedback */  /* Master */ $handler->display->display_options['filters']['uid']['exposed'] = TRUE;
  /* course_feedback */  /* Master */ $handler->display->display_options['filters']['uid']['expose']['operator_id'] = 'uid_op';
  /* course_feedback */  /* Master */ $handler->display->display_options['filters']['uid']['expose']['label'] = 'Author';
  /* course_feedback */  /* Master */ $handler->display->display_options['filters']['uid']['expose']['operator'] = 'uid_op';
  /* course_feedback */  /* Master */ $handler->display->display_options['filters']['uid']['expose']['identifier'] = 'uid';
  /* course_feedback */  /* Master */ $handler->display->display_options['filters']['uid']['expose']['remember_roles'] = array(
  /* course_feedback */  /* Master */   2 => '2',
  /* course_feedback */  /* Master */   1 => 0,
  /* course_feedback */  /* Master */   9 => 0,
  /* course_feedback */  /* Master */   10 => 0,
  /* course_feedback */  /* Master */ );
  /* course_feedback */  /* Master */ /* Filter criterion: Date: Date (entityform) */
  /* course_feedback */  /* Master */ $handler->display->display_options['filters']['date_filter']['id'] = 'date_filter';
  /* course_feedback */  /* Master */ $handler->display->display_options['filters']['date_filter']['table'] = 'entityform';
  /* course_feedback */  /* Master */ $handler->display->display_options['filters']['date_filter']['field'] = 'date_filter';
  /* course_feedback */  /* Master */ $handler->display->display_options['filters']['date_filter']['operator'] = 'between';
  /* course_feedback */  /* Master */ $handler->display->display_options['filters']['date_filter']['group'] = 1;
  /* course_feedback */  /* Master */ $handler->display->display_options['filters']['date_filter']['exposed'] = TRUE;
  /* course_feedback */  /* Master */ $handler->display->display_options['filters']['date_filter']['expose']['operator_id'] = 'date_filter_op';
  /* course_feedback */  /* Master */ $handler->display->display_options['filters']['date_filter']['expose']['label'] = 'Created';
  /* course_feedback */  /* Master */ $handler->display->display_options['filters']['date_filter']['expose']['operator'] = 'date_filter_op';
  /* course_feedback */  /* Master */ $handler->display->display_options['filters']['date_filter']['expose']['identifier'] = 'date_filter';
  /* course_feedback */  /* Master */ $handler->display->display_options['filters']['date_filter']['expose']['remember_roles'] = array(
  /* course_feedback */  /* Master */   2 => '2',
  /* course_feedback */  /* Master */   1 => 0,
  /* course_feedback */  /* Master */   9 => 0,
  /* course_feedback */  /* Master */   10 => 0,
  /* course_feedback */  /* Master */ );
  /* course_feedback */  /* Master */ $handler->display->display_options['filters']['date_filter']['form_type'] = 'date_popup';
  /* course_feedback */  /* Master */ $handler->display->display_options['filters']['date_filter']['date_fields'] = array(
  /* course_feedback */  /* Master */   'entityform.created' => 'entityform.created',
  /* course_feedback */  /* Master */ );
  /* course_feedback */ $translatables['course_feedback'] = array(
  /* course_feedback */   t('Master'),
  /* course_feedback */   t('Course Feedback'),
  /* course_feedback */   t('more'),
  /* course_feedback */   t('Apply'),
  /* course_feedback */   t('Reset'),
  /* course_feedback */   t('Sort by'),
  /* course_feedback */   t('Asc'),
  /* course_feedback */   t('Desc'),
  /* course_feedback */   t('Items per page'),
  /* course_feedback */   t('- All -'),
  /* course_feedback */   t('Offset'),
  /* course_feedback */   t('« first'),
  /* course_feedback */   t('‹ previous'),
  /* course_feedback */   t('next ›'),
  /* course_feedback */   t('last »'),
  /* course_feedback */   t('There is no feedback for this course.'),
  /* course_feedback */   t('User'),
  /* course_feedback */   t('Id'),
  /* course_feedback */   t('.'),
  /* course_feedback */   t(','),
  /* course_feedback */   t('Category'),
  /* course_feedback */   t('Created'),
  /* course_feedback */   t('Title'),
  /* course_feedback */   t('Description'),
  /* course_feedback */   t('Name'),
  /* course_feedback */   t('All'),
  /* course_feedback */   t('Author'),
  /* course_feedback */ );
  $export['course_feedback'] = $view;

  return $export;
}
