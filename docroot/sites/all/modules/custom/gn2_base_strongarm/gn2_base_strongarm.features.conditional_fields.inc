<?php
/**
 * @file
 * gn2_base_strongarm.features.conditional_fields.inc
 */

/**
 * Implements hook_conditional_fields_default_fields().
 */
function gn2_base_strongarm_conditional_fields_default_fields() {
  $items = array();

  /* field_actual_functionality */ $items[] = array(
  /* field_actual_functionality */   'entity' => 'node',
  /* field_actual_functionality */   'bundle' => 'support',
  /* field_actual_functionality */   'dependent' => 'field_actual_functionality',
  /* field_actual_functionality */   'dependee' => 'field_support_category',
  /* field_actual_functionality */   'options' => array(
  /* field_actual_functionality */     'state' => 'visible',
  /* field_actual_functionality */     'condition' => 'value',
  /* field_actual_functionality */     'grouping' => 'AND',
  /* field_actual_functionality */     'effect' => 'show',
  /* field_actual_functionality */     'effect_options' => array(),
  /* field_actual_functionality */     'element_view' => array(
  /* field_actual_functionality */       1 => 1,
  /* field_actual_functionality */       2 => 2,
  /* field_actual_functionality */       5 => 0,
  /* field_actual_functionality */       3 => 0,
  /* field_actual_functionality */       4 => 0,
  /* field_actual_functionality */     ),
  /* field_actual_functionality */     'element_view_per_role' => 0,
  /* field_actual_functionality */     'element_view_roles' => array(
  /* field_actual_functionality */       1 => array(
  /* field_actual_functionality */         1 => 1,
  /* field_actual_functionality */         2 => 2,
  /* field_actual_functionality */         5 => 0,
  /* field_actual_functionality */         3 => 0,
  /* field_actual_functionality */         4 => 0,
  /* field_actual_functionality */       ),
  /* field_actual_functionality */       2 => array(
  /* field_actual_functionality */         1 => 1,
  /* field_actual_functionality */         2 => 2,
  /* field_actual_functionality */         5 => 0,
  /* field_actual_functionality */         3 => 0,
  /* field_actual_functionality */         4 => 0,
  /* field_actual_functionality */       ),
  /* field_actual_functionality */       9 => array(
  /* field_actual_functionality */         1 => 1,
  /* field_actual_functionality */         2 => 2,
  /* field_actual_functionality */         5 => 0,
  /* field_actual_functionality */         3 => 0,
  /* field_actual_functionality */         4 => 0,
  /* field_actual_functionality */       ),
  /* field_actual_functionality */       10 => array(
  /* field_actual_functionality */         1 => 1,
  /* field_actual_functionality */         2 => 2,
  /* field_actual_functionality */         5 => 0,
  /* field_actual_functionality */         3 => 0,
  /* field_actual_functionality */         4 => 0,
  /* field_actual_functionality */       ),
  /* field_actual_functionality */     ),
  /* field_actual_functionality */     'element_edit' => array(
  /* field_actual_functionality */       1 => 1,
  /* field_actual_functionality */       3 => 0,
  /* field_actual_functionality */     ),
  /* field_actual_functionality */     'element_edit_per_role' => 0,
  /* field_actual_functionality */     'element_edit_roles' => array(
  /* field_actual_functionality */       1 => array(
  /* field_actual_functionality */         1 => 1,
  /* field_actual_functionality */         3 => 0,
  /* field_actual_functionality */       ),
  /* field_actual_functionality */       2 => array(
  /* field_actual_functionality */         1 => 1,
  /* field_actual_functionality */         3 => 0,
  /* field_actual_functionality */       ),
  /* field_actual_functionality */       9 => array(
  /* field_actual_functionality */         1 => 1,
  /* field_actual_functionality */         3 => 0,
  /* field_actual_functionality */       ),
  /* field_actual_functionality */       10 => array(
  /* field_actual_functionality */         1 => 1,
  /* field_actual_functionality */         3 => 0,
  /* field_actual_functionality */       ),
  /* field_actual_functionality */     ),
  /* field_actual_functionality */     'selector' => '',
  /* field_actual_functionality */     'values_set' => 1,
  /* field_actual_functionality */     'value_form' => 6,
  /* field_actual_functionality */     'value' => array(
  /* field_actual_functionality */       0 => array(
  /* field_actual_functionality */         'value' => 6,
  /* field_actual_functionality */       ),
  /* field_actual_functionality */     ),
  /* field_actual_functionality */     'values' => array(),
  /* field_actual_functionality */   ),
  /* field_actual_functionality */ );

  /* field_expected_functionality */ $items[] = array(
  /* field_expected_functionality */   'entity' => 'node',
  /* field_expected_functionality */   'bundle' => 'support',
  /* field_expected_functionality */   'dependent' => 'field_expected_functionality',
  /* field_expected_functionality */   'dependee' => 'field_support_category',
  /* field_expected_functionality */   'options' => array(
  /* field_expected_functionality */     'state' => 'visible',
  /* field_expected_functionality */     'condition' => 'value',
  /* field_expected_functionality */     'grouping' => 'AND',
  /* field_expected_functionality */     'effect' => 'show',
  /* field_expected_functionality */     'effect_options' => array(),
  /* field_expected_functionality */     'element_view' => array(
  /* field_expected_functionality */       1 => 1,
  /* field_expected_functionality */       2 => 2,
  /* field_expected_functionality */       5 => 0,
  /* field_expected_functionality */       3 => 0,
  /* field_expected_functionality */       4 => 0,
  /* field_expected_functionality */     ),
  /* field_expected_functionality */     'element_view_per_role' => 0,
  /* field_expected_functionality */     'element_view_roles' => array(
  /* field_expected_functionality */       1 => array(
  /* field_expected_functionality */         1 => 1,
  /* field_expected_functionality */         2 => 2,
  /* field_expected_functionality */         5 => 0,
  /* field_expected_functionality */         3 => 0,
  /* field_expected_functionality */         4 => 0,
  /* field_expected_functionality */       ),
  /* field_expected_functionality */       2 => array(
  /* field_expected_functionality */         1 => 1,
  /* field_expected_functionality */         2 => 2,
  /* field_expected_functionality */         5 => 0,
  /* field_expected_functionality */         3 => 0,
  /* field_expected_functionality */         4 => 0,
  /* field_expected_functionality */       ),
  /* field_expected_functionality */       9 => array(
  /* field_expected_functionality */         1 => 1,
  /* field_expected_functionality */         2 => 2,
  /* field_expected_functionality */         5 => 0,
  /* field_expected_functionality */         3 => 0,
  /* field_expected_functionality */         4 => 0,
  /* field_expected_functionality */       ),
  /* field_expected_functionality */       10 => array(
  /* field_expected_functionality */         1 => 1,
  /* field_expected_functionality */         2 => 2,
  /* field_expected_functionality */         5 => 0,
  /* field_expected_functionality */         3 => 0,
  /* field_expected_functionality */         4 => 0,
  /* field_expected_functionality */       ),
  /* field_expected_functionality */     ),
  /* field_expected_functionality */     'element_edit' => array(
  /* field_expected_functionality */       1 => 1,
  /* field_expected_functionality */       3 => 0,
  /* field_expected_functionality */     ),
  /* field_expected_functionality */     'element_edit_per_role' => 0,
  /* field_expected_functionality */     'element_edit_roles' => array(
  /* field_expected_functionality */       1 => array(
  /* field_expected_functionality */         1 => 1,
  /* field_expected_functionality */         3 => 0,
  /* field_expected_functionality */       ),
  /* field_expected_functionality */       2 => array(
  /* field_expected_functionality */         1 => 1,
  /* field_expected_functionality */         3 => 0,
  /* field_expected_functionality */       ),
  /* field_expected_functionality */       9 => array(
  /* field_expected_functionality */         1 => 1,
  /* field_expected_functionality */         3 => 0,
  /* field_expected_functionality */       ),
  /* field_expected_functionality */       10 => array(
  /* field_expected_functionality */         1 => 1,
  /* field_expected_functionality */         3 => 0,
  /* field_expected_functionality */       ),
  /* field_expected_functionality */     ),
  /* field_expected_functionality */     'selector' => '',
  /* field_expected_functionality */     'values_set' => 1,
  /* field_expected_functionality */     'value_form' => 6,
  /* field_expected_functionality */     'value' => array(
  /* field_expected_functionality */       0 => array(
  /* field_expected_functionality */         'value' => 6,
  /* field_expected_functionality */       ),
  /* field_expected_functionality */     ),
  /* field_expected_functionality */     'values' => array(),
  /* field_expected_functionality */   ),
  /* field_expected_functionality */ );

  /* field_ip_address_range */ $items[] = array(
  /* field_ip_address_range */   'entity' => 'node',
  /* field_ip_address_range */   'bundle' => 'support',
  /* field_ip_address_range */   'dependent' => 'field_ip_address_range',
  /* field_ip_address_range */   'dependee' => 'field_support_category',
  /* field_ip_address_range */   'options' => array(
  /* field_ip_address_range */     'state' => 'visible',
  /* field_ip_address_range */     'condition' => 'value',
  /* field_ip_address_range */     'grouping' => 'AND',
  /* field_ip_address_range */     'effect' => 'show',
  /* field_ip_address_range */     'effect_options' => array(),
  /* field_ip_address_range */     'element_view' => array(
  /* field_ip_address_range */       1 => 1,
  /* field_ip_address_range */       2 => 2,
  /* field_ip_address_range */       5 => 0,
  /* field_ip_address_range */       3 => 0,
  /* field_ip_address_range */       4 => 0,
  /* field_ip_address_range */     ),
  /* field_ip_address_range */     'element_view_per_role' => 0,
  /* field_ip_address_range */     'element_view_roles' => array(
  /* field_ip_address_range */       1 => array(
  /* field_ip_address_range */         1 => 1,
  /* field_ip_address_range */         2 => 2,
  /* field_ip_address_range */         5 => 0,
  /* field_ip_address_range */         3 => 0,
  /* field_ip_address_range */         4 => 0,
  /* field_ip_address_range */       ),
  /* field_ip_address_range */       2 => array(
  /* field_ip_address_range */         1 => 1,
  /* field_ip_address_range */         2 => 2,
  /* field_ip_address_range */         5 => 0,
  /* field_ip_address_range */         3 => 0,
  /* field_ip_address_range */         4 => 0,
  /* field_ip_address_range */       ),
  /* field_ip_address_range */       9 => array(
  /* field_ip_address_range */         1 => 1,
  /* field_ip_address_range */         2 => 2,
  /* field_ip_address_range */         5 => 0,
  /* field_ip_address_range */         3 => 0,
  /* field_ip_address_range */         4 => 0,
  /* field_ip_address_range */       ),
  /* field_ip_address_range */       10 => array(
  /* field_ip_address_range */         1 => 1,
  /* field_ip_address_range */         2 => 2,
  /* field_ip_address_range */         5 => 0,
  /* field_ip_address_range */         3 => 0,
  /* field_ip_address_range */         4 => 0,
  /* field_ip_address_range */       ),
  /* field_ip_address_range */       11 => array(
  /* field_ip_address_range */         1 => 1,
  /* field_ip_address_range */         2 => 2,
  /* field_ip_address_range */         5 => 0,
  /* field_ip_address_range */         3 => 0,
  /* field_ip_address_range */         4 => 0,
  /* field_ip_address_range */       ),
  /* field_ip_address_range */     ),
  /* field_ip_address_range */     'element_edit' => array(
  /* field_ip_address_range */       1 => 1,
  /* field_ip_address_range */       3 => 0,
  /* field_ip_address_range */     ),
  /* field_ip_address_range */     'element_edit_per_role' => 0,
  /* field_ip_address_range */     'element_edit_roles' => array(
  /* field_ip_address_range */       1 => array(
  /* field_ip_address_range */         1 => 1,
  /* field_ip_address_range */         3 => 0,
  /* field_ip_address_range */       ),
  /* field_ip_address_range */       2 => array(
  /* field_ip_address_range */         1 => 1,
  /* field_ip_address_range */         3 => 0,
  /* field_ip_address_range */       ),
  /* field_ip_address_range */       9 => array(
  /* field_ip_address_range */         1 => 1,
  /* field_ip_address_range */         3 => 0,
  /* field_ip_address_range */       ),
  /* field_ip_address_range */       10 => array(
  /* field_ip_address_range */         1 => 1,
  /* field_ip_address_range */         3 => 0,
  /* field_ip_address_range */       ),
  /* field_ip_address_range */       11 => array(
  /* field_ip_address_range */         1 => 1,
  /* field_ip_address_range */         3 => 0,
  /* field_ip_address_range */       ),
  /* field_ip_address_range */     ),
  /* field_ip_address_range */     'selector' => '',
  /* field_ip_address_range */     'values_set' => 1,
  /* field_ip_address_range */     'value_form' => 7,
  /* field_ip_address_range */     'value' => array(
  /* field_ip_address_range */       0 => array(
  /* field_ip_address_range */         'value' => 7,
  /* field_ip_address_range */       ),
  /* field_ip_address_range */     ),
  /* field_ip_address_range */     'values' => array(),
  /* field_ip_address_range */   ),
  /* field_ip_address_range */ );

  /* field_whitelist_dates */ $items[] = array(
  /* field_whitelist_dates */   'entity' => 'node',
  /* field_whitelist_dates */   'bundle' => 'support',
  /* field_whitelist_dates */   'dependent' => 'field_whitelist_dates',
  /* field_whitelist_dates */   'dependee' => 'field_support_category',
  /* field_whitelist_dates */   'options' => array(
  /* field_whitelist_dates */     'state' => 'visible',
  /* field_whitelist_dates */     'condition' => 'value',
  /* field_whitelist_dates */     'grouping' => 'AND',
  /* field_whitelist_dates */     'effect' => 'show',
  /* field_whitelist_dates */     'effect_options' => array(),
  /* field_whitelist_dates */     'element_view' => array(
  /* field_whitelist_dates */       1 => 1,
  /* field_whitelist_dates */       2 => 2,
  /* field_whitelist_dates */       5 => 0,
  /* field_whitelist_dates */       3 => 0,
  /* field_whitelist_dates */       4 => 0,
  /* field_whitelist_dates */     ),
  /* field_whitelist_dates */     'element_view_per_role' => 0,
  /* field_whitelist_dates */     'element_view_roles' => array(
  /* field_whitelist_dates */       1 => array(
  /* field_whitelist_dates */         1 => 1,
  /* field_whitelist_dates */         2 => 2,
  /* field_whitelist_dates */         5 => 0,
  /* field_whitelist_dates */         3 => 0,
  /* field_whitelist_dates */         4 => 0,
  /* field_whitelist_dates */       ),
  /* field_whitelist_dates */       2 => array(
  /* field_whitelist_dates */         1 => 1,
  /* field_whitelist_dates */         2 => 2,
  /* field_whitelist_dates */         5 => 0,
  /* field_whitelist_dates */         3 => 0,
  /* field_whitelist_dates */         4 => 0,
  /* field_whitelist_dates */       ),
  /* field_whitelist_dates */       9 => array(
  /* field_whitelist_dates */         1 => 1,
  /* field_whitelist_dates */         2 => 2,
  /* field_whitelist_dates */         5 => 0,
  /* field_whitelist_dates */         3 => 0,
  /* field_whitelist_dates */         4 => 0,
  /* field_whitelist_dates */       ),
  /* field_whitelist_dates */       10 => array(
  /* field_whitelist_dates */         1 => 1,
  /* field_whitelist_dates */         2 => 2,
  /* field_whitelist_dates */         5 => 0,
  /* field_whitelist_dates */         3 => 0,
  /* field_whitelist_dates */         4 => 0,
  /* field_whitelist_dates */       ),
  /* field_whitelist_dates */       11 => array(
  /* field_whitelist_dates */         1 => 1,
  /* field_whitelist_dates */         2 => 2,
  /* field_whitelist_dates */         5 => 0,
  /* field_whitelist_dates */         3 => 0,
  /* field_whitelist_dates */         4 => 0,
  /* field_whitelist_dates */       ),
  /* field_whitelist_dates */     ),
  /* field_whitelist_dates */     'element_edit' => array(
  /* field_whitelist_dates */       1 => 1,
  /* field_whitelist_dates */       3 => 0,
  /* field_whitelist_dates */     ),
  /* field_whitelist_dates */     'element_edit_per_role' => 0,
  /* field_whitelist_dates */     'element_edit_roles' => array(
  /* field_whitelist_dates */       1 => array(
  /* field_whitelist_dates */         1 => 1,
  /* field_whitelist_dates */         3 => 0,
  /* field_whitelist_dates */       ),
  /* field_whitelist_dates */       2 => array(
  /* field_whitelist_dates */         1 => 1,
  /* field_whitelist_dates */         3 => 0,
  /* field_whitelist_dates */       ),
  /* field_whitelist_dates */       9 => array(
  /* field_whitelist_dates */         1 => 1,
  /* field_whitelist_dates */         3 => 0,
  /* field_whitelist_dates */       ),
  /* field_whitelist_dates */       10 => array(
  /* field_whitelist_dates */         1 => 1,
  /* field_whitelist_dates */         3 => 0,
  /* field_whitelist_dates */       ),
  /* field_whitelist_dates */       11 => array(
  /* field_whitelist_dates */         1 => 1,
  /* field_whitelist_dates */         3 => 0,
  /* field_whitelist_dates */       ),
  /* field_whitelist_dates */     ),
  /* field_whitelist_dates */     'selector' => '',
  /* field_whitelist_dates */     'values_set' => 1,
  /* field_whitelist_dates */     'value_form' => 7,
  /* field_whitelist_dates */     'value' => array(
  /* field_whitelist_dates */       0 => array(
  /* field_whitelist_dates */         'value' => 7,
  /* field_whitelist_dates */       ),
  /* field_whitelist_dates */     ),
  /* field_whitelist_dates */     'values' => array(),
  /* field_whitelist_dates */   ),
  /* field_whitelist_dates */ );

  return $items;
}
