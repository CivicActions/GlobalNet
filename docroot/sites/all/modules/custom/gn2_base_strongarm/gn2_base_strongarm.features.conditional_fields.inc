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

  return $items;
}
