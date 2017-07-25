<?php
/**
 * @file
 * GN2 Reports Views include.
 */

/**
 * Implements hook_views_data().
 */
function gn2_reports_views_data() {
  $data['gn2_user_report']['table']['group'] = t('User Import Base');

  $data['gn2_user_report']['table']['base'] = array(
    'title' => t('User Import Base'),
    'help' => t('Bulk User Import Base records'),
  );

  $data['gn2_user_report']['table']['join'] = array(
    'gn2_user_report_users' => array(
      'handler' => 'views_join',
      'left_table' => 'gn2_user_report_users',
      'left_field' => 'iid',
      'field' => 'iid',
    ),
  );

  $data['gn2_user_report']['oid'] = array(
    'title' => t('Organization ID'),
    'help' => t('The Organization node ID.'),
    'field' => array(
      'handler' => 'views_handler_field_node',
    ),
    'relationship' => array(
      'base' => 'node',
      'field' => 'nid',
      'handler' => 'views_handler_relationship',
      'label' => t('Node'),
    ),
    'argument' => array(
      'handler' => 'views_handler_argument_node_nid',
      'numeric' => TRUE,
      'validate type' => 'nid',
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_numeric',
    ),
  );
  
  $data['gn2_user_report_users']['table']['group'] = t('User Import Report');

  $data['gn2_user_report_users']['table']['base'] = array(
    'title' => t('User Import Report'),
    'help' => t('Bulk User Import records'),
  );

  $data['gn2_user_report_users']['table']['join'] = array(
    'gn2_user_report' => array(
      'handler' => 'views_join',
      'left_table' => 'gn2_user_report',
      'left_field' => 'iid',
      'field' => 'iid',
    ),
  );

  $data['gn2_user_report_users']['iid'] = array(
    'title' => t('Import ID'),
    'help' => t('The record ID for the bulk import'),
    'field' => array(
      'handler' => 'views_handler_field_numeric',
      'click sortable' => FALSE,
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
    'filter' => array(
      'handler' => 'views_handler_sort',
    ),
  );

  $data['gn2_user_report_users']['uid'] = array(
    'title' => t('Imported by'),
    'help' => t('The Importing User\'s Id'),
    'field' => array(
      'handler' => 'views_handler_field_entity',
      'click sortable' => FALSE,
    ),
    'field' => array(
      'handler' => 'views_handler_field_numeric',
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_numeric',
    ),
    'relationship' => array(
      'base' => 'users',
      'field' => 'uid',
      'handler' => 'views_handler_relationship',
      'label' => t('Importing User'),
    ),
  );

  $data['gn2_user_report_users']['iuid'] = array(
    'title' => t('Imported user'),
    'help' => t('The Imported User\'s ID'),
    'field' => array(
      'handler' => 'views_handler_field_entity',
      'click sortable' => FALSE,
    ),
    'field' => array(
      'handler' => 'views_handler_field_numeric',
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_numeric',
    ),
    'relationship' => array(
      'base' => 'users',
      'field' => 'iuid',
      'handler' => 'views_handler_relationship',
      'label' => t('Imported User'),
    ),
  );

  $data['gn2_user_report_users']['existing'] = array(
    'title' => t('Existing User'),
    'help' => t('Did the user exist before the import'),
    'field' => array(
      'handler' => 'views_handler_field_boolean',
      'click sortable' => FALSE,
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_numeric',
    ),
  );

  $data['gn2_user_report_users']['groups'] = array(
    'title' => t('Groups'),
    'help' => t('The Organic Groups to which the user was added.'),
    'field' => array(
      'handler' => 'gn2_reports_view_handler_field_groups',
      'click sortable' => FALSE,
    ),
    'filter' => array(
      'handler' => 'gn2_reports_view_handler_field_groups',
      'label' => t('Groups'),
    ),
  );

  $data['gn2_user_report_users']['timestamp'] = array(
    'title' => t('Imported Date'),
    'help' => t('The date the user was imported or updated'),
    'field' => array(
      'handler' => 'views_handler_field_date',
      'click sortable' => FALSE,
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_date',
    ),
  );

  return $data;
}
