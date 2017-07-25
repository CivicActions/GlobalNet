<?php
/**
 * @file
 * gn2_support_desk.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function gn2_support_desk_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_actual_functionality'.
  $field_bases['field_actual_functionality'] = array(
  /* field_actual_functionality */   'active' => 1,
  /* field_actual_functionality */   'cardinality' => 1,
  /* field_actual_functionality */   'deleted' => 0,
  /* field_actual_functionality */   'entity_types' => array(),
  /* field_actual_functionality */   'field_name' => 'field_actual_functionality',
  /* field_actual_functionality */   'indexes' => array(
  /* field_actual_functionality */     'format' => array(
  /* field_actual_functionality */       0 => 'format',
  /* field_actual_functionality */     ),
  /* field_actual_functionality */   ),
  /* field_actual_functionality */   'locked' => 0,
  /* field_actual_functionality */   'module' => 'text',
  /* field_actual_functionality */   'settings' => array(),
  /* field_actual_functionality */   'translatable' => 0,
  /* field_actual_functionality */   'type' => 'text_long',
  /* field_actual_functionality */ );

  // Exported field_base: 'field_admin_note'.
  $field_bases['field_admin_note'] = array(
  /* field_admin_note */   'active' => 1,
  /* field_admin_note */   'cardinality' => 1,
  /* field_admin_note */   'deleted' => 0,
  /* field_admin_note */   'entity_types' => array(),
  /* field_admin_note */   'field_name' => 'field_admin_note',
  /* field_admin_note */   'indexes' => array(
  /* field_admin_note */     'format' => array(
  /* field_admin_note */       0 => 'format',
  /* field_admin_note */     ),
  /* field_admin_note */   ),
  /* field_admin_note */   'locked' => 0,
  /* field_admin_note */   'module' => 'text',
  /* field_admin_note */   'settings' => array(),
  /* field_admin_note */   'translatable' => 0,
  /* field_admin_note */   'type' => 'text_long',
  /* field_admin_note */ );

  // Exported field_base: 'field_attach_files'.
  $field_bases['field_attach_files'] = array(
  /* field_attach_files */   'active' => 1,
  /* field_attach_files */   'cardinality' => -1,
  /* field_attach_files */   'deleted' => 0,
  /* field_attach_files */   'entity_types' => array(),
  /* field_attach_files */   'field_name' => 'field_attach_files',
  /* field_attach_files */   'indexes' => array(
  /* field_attach_files */     'fid' => array(
  /* field_attach_files */       0 => 'fid',
  /* field_attach_files */     ),
  /* field_attach_files */   ),
  /* field_attach_files */   'locked' => 0,
  /* field_attach_files */   'module' => 'file',
  /* field_attach_files */   'settings' => array(
  /* field_attach_files */     'display_default' => 0,
  /* field_attach_files */     'display_field' => 0,
  /* field_attach_files */     'uri_scheme' => 'public',
  /* field_attach_files */   ),
  /* field_attach_files */   'translatable' => 0,
  /* field_attach_files */   'type' => 'file',
  /* field_attach_files */ );

  // Exported field_base: 'field_expected_functionality'.
  $field_bases['field_expected_functionality'] = array(
  /* field_expected_functionality */   'active' => 1,
  /* field_expected_functionality */   'cardinality' => 1,
  /* field_expected_functionality */   'deleted' => 0,
  /* field_expected_functionality */   'entity_types' => array(),
  /* field_expected_functionality */   'field_name' => 'field_expected_functionality',
  /* field_expected_functionality */   'indexes' => array(
  /* field_expected_functionality */     'format' => array(
  /* field_expected_functionality */       0 => 'format',
  /* field_expected_functionality */     ),
  /* field_expected_functionality */   ),
  /* field_expected_functionality */   'locked' => 0,
  /* field_expected_functionality */   'module' => 'text',
  /* field_expected_functionality */   'settings' => array(),
  /* field_expected_functionality */   'translatable' => 0,
  /* field_expected_functionality */   'type' => 'text_long',
  /* field_expected_functionality */ );

  // Exported field_base: 'field_json_capture'.
  $field_bases['field_json_capture'] = array(
  /* field_json_capture */   'active' => 1,
  /* field_json_capture */   'cardinality' => 1,
  /* field_json_capture */   'deleted' => 0,
  /* field_json_capture */   'entity_types' => array(),
  /* field_json_capture */   'field_name' => 'field_json_capture',
  /* field_json_capture */   'indexes' => array(
  /* field_json_capture */     'format' => array(
  /* field_json_capture */       0 => 'format',
  /* field_json_capture */     ),
  /* field_json_capture */   ),
  /* field_json_capture */   'locked' => 0,
  /* field_json_capture */   'module' => 'text',
  /* field_json_capture */   'settings' => array(),
  /* field_json_capture */   'translatable' => 0,
  /* field_json_capture */   'type' => 'text_long',
  /* field_json_capture */ );

  // Exported field_base: 'field_support_category'.
  $field_bases['field_support_category'] = array(
  /* field_support_category */   'active' => 1,
  /* field_support_category */   'cardinality' => 1,
  /* field_support_category */   'deleted' => 0,
  /* field_support_category */   'entity_types' => array(),
  /* field_support_category */   'field_name' => 'field_support_category',
  /* field_support_category */   'indexes' => array(
  /* field_support_category */     'value' => array(
  /* field_support_category */       0 => 'value',
  /* field_support_category */     ),
  /* field_support_category */   ),
  /* field_support_category */   'locked' => 0,
  /* field_support_category */   'module' => 'list',
  /* field_support_category */   'settings' => array(
  /* field_support_category */     'allowed_values' => array(
  /* field_support_category */       1 => 'I have a problem with my password',
  /* field_support_category */       2 => 'I forgot my username',
  /* field_support_category */       3 => 'My account has been blocked',
  /* field_support_category */       4 => 'I need access to a specific group, course or information',
  /* field_support_category */       5 => 'I would like to schedule a specific training',
  /* field_support_category */       6 => 'Other',
  /* field_support_category */     ),
  /* field_support_category */     'allowed_values_function' => '',
  /* field_support_category */   ),
  /* field_support_category */   'translatable' => 0,
  /* field_support_category */   'type' => 'list_text',
  /* field_support_category */ );

  // Exported field_base: 'field_support_owner'.
  $field_bases['field_support_owner'] = array(
  /* field_support_owner */   'active' => 1,
  /* field_support_owner */   'cardinality' => 1,
  /* field_support_owner */   'deleted' => 0,
  /* field_support_owner */   'entity_types' => array(),
  /* field_support_owner */   'field_name' => 'field_support_owner',
  /* field_support_owner */   'indexes' => array(
  /* field_support_owner */     'target_id' => array(
  /* field_support_owner */       0 => 'target_id',
  /* field_support_owner */     ),
  /* field_support_owner */   ),
  /* field_support_owner */   'locked' => 0,
  /* field_support_owner */   'module' => 'entityreference',
  /* field_support_owner */   'settings' => array(
  /* field_support_owner */     'handler' => 'views',
  /* field_support_owner */     'handler_settings' => array(
  /* field_support_owner */       'behaviors' => array(
  /* field_support_owner */         'views-select-list' => array(
  /* field_support_owner */           'status' => 0,
  /* field_support_owner */         ),
  /* field_support_owner */       ),
  /* field_support_owner */       'view' => array(
  /* field_support_owner */         'args' => array(),
  /* field_support_owner */         'display_name' => 'entityreference_1',
  /* field_support_owner */         'view_name' => 'validator',
  /* field_support_owner */       ),
  /* field_support_owner */     ),
  /* field_support_owner */     'target_type' => 'user',
  /* field_support_owner */   ),
  /* field_support_owner */   'translatable' => 0,
  /* field_support_owner */   'type' => 'entityreference',
  /* field_support_owner */ );

  // Exported field_base: 'field_support_priority'.
  $field_bases['field_support_priority'] = array(
  /* field_support_priority */   'active' => 1,
  /* field_support_priority */   'cardinality' => 1,
  /* field_support_priority */   'deleted' => 0,
  /* field_support_priority */   'entity_types' => array(),
  /* field_support_priority */   'field_name' => 'field_support_priority',
  /* field_support_priority */   'indexes' => array(
  /* field_support_priority */     'value' => array(
  /* field_support_priority */       0 => 'value',
  /* field_support_priority */     ),
  /* field_support_priority */   ),
  /* field_support_priority */   'locked' => 0,
  /* field_support_priority */   'module' => 'list',
  /* field_support_priority */   'settings' => array(
  /* field_support_priority */     'allowed_values' => array(
  /* field_support_priority */       'High' => 'High',
  /* field_support_priority */       'Medium' => 'Medium',
  /* field_support_priority */       'Low' => 'Low',
  /* field_support_priority */     ),
  /* field_support_priority */     'allowed_values_function' => '',
  /* field_support_priority */   ),
  /* field_support_priority */   'translatable' => 0,
  /* field_support_priority */   'type' => 'list_text',
  /* field_support_priority */ );

  // Exported field_base: 'field_support_resolution'.
  $field_bases['field_support_resolution'] = array(
  /* field_support_resolution */   'active' => 1,
  /* field_support_resolution */   'cardinality' => 1,
  /* field_support_resolution */   'deleted' => 0,
  /* field_support_resolution */   'entity_types' => array(),
  /* field_support_resolution */   'field_name' => 'field_support_resolution',
  /* field_support_resolution */   'indexes' => array(
  /* field_support_resolution */     'value' => array(
  /* field_support_resolution */       0 => 'value',
  /* field_support_resolution */     ),
  /* field_support_resolution */   ),
  /* field_support_resolution */   'locked' => 0,
  /* field_support_resolution */   'module' => 'list',
  /* field_support_resolution */   'settings' => array(
  /* field_support_resolution */     'allowed_values' => array(
  /* field_support_resolution */       'Not resolved' => 'Not resolved',
  /* field_support_resolution */       'Escalated to dev' => 'Escalated to dev',
  /* field_support_resolution */       'Escalated to mgmt' => 'Escalated to mgmt',
  /* field_support_resolution */       'Resolved' => 'Resolved',
  /* field_support_resolution */     ),
  /* field_support_resolution */     'allowed_values_function' => '',
  /* field_support_resolution */   ),
  /* field_support_resolution */   'translatable' => 0,
  /* field_support_resolution */   'type' => 'list_text',
  /* field_support_resolution */ );

  // Exported field_base: 'field_support_status'.
  $field_bases['field_support_status'] = array(
  /* field_support_status */   'active' => 1,
  /* field_support_status */   'cardinality' => 1,
  /* field_support_status */   'deleted' => 0,
  /* field_support_status */   'entity_types' => array(),
  /* field_support_status */   'field_name' => 'field_support_status',
  /* field_support_status */   'indexes' => array(
  /* field_support_status */     'value' => array(
  /* field_support_status */       0 => 'value',
  /* field_support_status */     ),
  /* field_support_status */   ),
  /* field_support_status */   'locked' => 0,
  /* field_support_status */   'module' => 'list',
  /* field_support_status */   'settings' => array(
  /* field_support_status */     'allowed_values' => array(
  /* field_support_status */       'Created' => 'Created',
  /* field_support_status */       'In Progress' => 'In Progress',
  /* field_support_status */       'On Hold' => 'On Hold',
  /* field_support_status */       'Completed' => 'Completed',
  /* field_support_status */     ),
  /* field_support_status */     'allowed_values_function' => '',
  /* field_support_status */   ),
  /* field_support_status */   'translatable' => 0,
  /* field_support_status */   'type' => 'list_text',
  /* field_support_status */ );

  return $field_bases;
}
