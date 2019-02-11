<?php
/**
 * @file
 * gn2_courses.features.conditional_fields.inc
 */

/**
 * Implements hook_conditional_fields_default_fields().
 */
function gn2_courses_conditional_fields_default_fields() {
  $items = array();

  /* field_day_association */ $items[] = array(
  /* field_day_association */   'entity' => 'entityform',
  /* field_day_association */   'bundle' => 'session',
  /* field_day_association */   'dependent' => 'field_day_association',
  /* field_day_association */   'dependee' => 'field_type',
  /* field_day_association */   'options' => array(
  /* field_day_association */     'state' => 'visible',
  /* field_day_association */     'condition' => 'value',
  /* field_day_association */     'grouping' => 'AND',
  /* field_day_association */     'effect' => 'show',
  /* field_day_association */     'effect_options' => array(),
  /* field_day_association */     'element_view' => array(
  /* field_day_association */       1 => 1,
  /* field_day_association */       2 => 2,
  /* field_day_association */       5 => 0,
  /* field_day_association */       3 => 0,
  /* field_day_association */       4 => 0,
  /* field_day_association */     ),
  /* field_day_association */     'element_view_per_role' => 0,
  /* field_day_association */     'element_view_roles' => array(
  /* field_day_association */       1 => array(
  /* field_day_association */         1 => 1,
  /* field_day_association */         2 => 2,
  /* field_day_association */         5 => 0,
  /* field_day_association */         3 => 0,
  /* field_day_association */         4 => 0,
  /* field_day_association */       ),
  /* field_day_association */       2 => array(
  /* field_day_association */         1 => 1,
  /* field_day_association */         2 => 2,
  /* field_day_association */         5 => 0,
  /* field_day_association */         3 => 0,
  /* field_day_association */         4 => 0,
  /* field_day_association */       ),
  /* field_day_association */       9 => array(
  /* field_day_association */         1 => 1,
  /* field_day_association */         2 => 2,
  /* field_day_association */         5 => 0,
  /* field_day_association */         3 => 0,
  /* field_day_association */         4 => 0,
  /* field_day_association */       ),
  /* field_day_association */     ),
  /* field_day_association */     'element_edit' => array(
  /* field_day_association */       1 => 1,
  /* field_day_association */       3 => 0,
  /* field_day_association */     ),
  /* field_day_association */     'element_edit_per_role' => 0,
  /* field_day_association */     'element_edit_roles' => array(
  /* field_day_association */       1 => array(
  /* field_day_association */         1 => 1,
  /* field_day_association */         3 => 0,
  /* field_day_association */       ),
  /* field_day_association */       2 => array(
  /* field_day_association */         1 => 1,
  /* field_day_association */         3 => 0,
  /* field_day_association */       ),
  /* field_day_association */       9 => array(
  /* field_day_association */         1 => 1,
  /* field_day_association */         3 => 0,
  /* field_day_association */       ),
  /* field_day_association */     ),
  /* field_day_association */     'selector' => '',
  /* field_day_association */     'values_set' => 3,
  /* field_day_association */     'value_form' => '_none',
  /* field_day_association */     'values' => array(
  /* field_day_association */       0 => 'Unit',
  /* field_day_association */     ),
  /* field_day_association */     'value' => array(),
  /* field_day_association */   ),
  /* field_day_association */ );

  /* field_media */ $items[] = array(
  /* field_media */   'entity' => 'entityform',
  /* field_media */   'bundle' => 'session',
  /* field_media */   'dependent' => 'field_media',
  /* field_media */   'dependee' => 'field_type',
  /* field_media */   'options' => array(
  /* field_media */     'state' => 'visible',
  /* field_media */     'condition' => 'value',
  /* field_media */     'grouping' => 'AND',
  /* field_media */     'effect' => 'show',
  /* field_media */     'effect_options' => array(),
  /* field_media */     'element_view' => array(
  /* field_media */       1 => 1,
  /* field_media */       2 => 2,
  /* field_media */       5 => 0,
  /* field_media */       3 => 0,
  /* field_media */       4 => 0,
  /* field_media */     ),
  /* field_media */     'element_view_per_role' => 0,
  /* field_media */     'element_view_roles' => array(
  /* field_media */       1 => array(
  /* field_media */         1 => 1,
  /* field_media */         2 => 2,
  /* field_media */         5 => 0,
  /* field_media */         3 => 0,
  /* field_media */         4 => 0,
  /* field_media */       ),
  /* field_media */       2 => array(
  /* field_media */         1 => 1,
  /* field_media */         2 => 2,
  /* field_media */         5 => 0,
  /* field_media */         3 => 0,
  /* field_media */         4 => 0,
  /* field_media */       ),
  /* field_media */       9 => array(
  /* field_media */         1 => 1,
  /* field_media */         2 => 2,
  /* field_media */         5 => 0,
  /* field_media */         3 => 0,
  /* field_media */         4 => 0,
  /* field_media */       ),
  /* field_media */     ),
  /* field_media */     'element_edit' => array(
  /* field_media */       1 => 1,
  /* field_media */       3 => 0,
  /* field_media */     ),
  /* field_media */     'element_edit_per_role' => 0,
  /* field_media */     'element_edit_roles' => array(
  /* field_media */       1 => array(
  /* field_media */         1 => 1,
  /* field_media */         3 => 0,
  /* field_media */       ),
  /* field_media */       2 => array(
  /* field_media */         1 => 1,
  /* field_media */         3 => 0,
  /* field_media */       ),
  /* field_media */       9 => array(
  /* field_media */         1 => 1,
  /* field_media */         3 => 0,
  /* field_media */       ),
  /* field_media */     ),
  /* field_media */     'selector' => '',
  /* field_media */     'values_set' => 3,
  /* field_media */     'value_form' => '_none',
  /* field_media */     'values' => array(
  /* field_media */       0 => 'Day',
  /* field_media */       1 => 'Unit',
  /* field_media */     ),
  /* field_media */     'value' => array(),
  /* field_media */   ),
  /* field_media */ );

  /* field_node_association */ $items[] = array(
  /* field_node_association */   'entity' => 'entityform',
  /* field_node_association */   'bundle' => 'session',
  /* field_node_association */   'dependent' => 'field_node_association',
  /* field_node_association */   'dependee' => 'field_type',
  /* field_node_association */   'options' => array(
  /* field_node_association */     'state' => 'visible',
  /* field_node_association */     'condition' => 'value',
  /* field_node_association */     'grouping' => 'AND',
  /* field_node_association */     'effect' => 'show',
  /* field_node_association */     'effect_options' => array(),
  /* field_node_association */     'element_view' => array(
  /* field_node_association */       1 => 1,
  /* field_node_association */       2 => 2,
  /* field_node_association */       5 => 0,
  /* field_node_association */       3 => 0,
  /* field_node_association */       4 => 0,
  /* field_node_association */     ),
  /* field_node_association */     'element_view_per_role' => 0,
  /* field_node_association */     'element_view_roles' => array(
  /* field_node_association */       1 => array(
  /* field_node_association */         1 => 1,
  /* field_node_association */         2 => 2,
  /* field_node_association */         5 => 0,
  /* field_node_association */         3 => 0,
  /* field_node_association */         4 => 0,
  /* field_node_association */       ),
  /* field_node_association */       2 => array(
  /* field_node_association */         1 => 1,
  /* field_node_association */         2 => 2,
  /* field_node_association */         5 => 0,
  /* field_node_association */         3 => 0,
  /* field_node_association */         4 => 0,
  /* field_node_association */       ),
  /* field_node_association */       9 => array(
  /* field_node_association */         1 => 1,
  /* field_node_association */         2 => 2,
  /* field_node_association */         5 => 0,
  /* field_node_association */         3 => 0,
  /* field_node_association */         4 => 0,
  /* field_node_association */       ),
  /* field_node_association */     ),
  /* field_node_association */     'element_edit' => array(
  /* field_node_association */       1 => 1,
  /* field_node_association */       3 => 0,
  /* field_node_association */     ),
  /* field_node_association */     'element_edit_per_role' => 0,
  /* field_node_association */     'element_edit_roles' => array(
  /* field_node_association */       1 => array(
  /* field_node_association */         1 => 1,
  /* field_node_association */         3 => 0,
  /* field_node_association */       ),
  /* field_node_association */       2 => array(
  /* field_node_association */         1 => 1,
  /* field_node_association */         3 => 0,
  /* field_node_association */       ),
  /* field_node_association */       9 => array(
  /* field_node_association */         1 => 1,
  /* field_node_association */         3 => 0,
  /* field_node_association */       ),
  /* field_node_association */     ),
  /* field_node_association */     'selector' => '',
  /* field_node_association */     'values_set' => 3,
  /* field_node_association */     'value_form' => '_none',
  /* field_node_association */     'values' => array(
  /* field_node_association */       0 => 'Day',
  /* field_node_association */       1 => 'Unit',
  /* field_node_association */     ),
  /* field_node_association */     'value' => array(),
  /* field_node_association */   ),
  /* field_node_association */ );

  /* field_session_association */ $items[] = array(
  /* field_session_association */   'entity' => 'entityform',
  /* field_session_association */   'bundle' => 'session',
  /* field_session_association */   'dependent' => 'field_session_association',
  /* field_session_association */   'dependee' => 'field_type',
  /* field_session_association */   'options' => array(
  /* field_session_association */     'state' => 'visible',
  /* field_session_association */     'condition' => 'value',
  /* field_session_association */     'grouping' => 'AND',
  /* field_session_association */     'effect' => 'show',
  /* field_session_association */     'effect_options' => array(),
  /* field_session_association */     'element_view' => array(
  /* field_session_association */       1 => 1,
  /* field_session_association */       2 => 2,
  /* field_session_association */       5 => 0,
  /* field_session_association */       3 => 0,
  /* field_session_association */       4 => 0,
  /* field_session_association */     ),
  /* field_session_association */     'element_view_per_role' => 0,
  /* field_session_association */     'element_view_roles' => array(
  /* field_session_association */       1 => array(
  /* field_session_association */         1 => 1,
  /* field_session_association */         2 => 2,
  /* field_session_association */         5 => 0,
  /* field_session_association */         3 => 0,
  /* field_session_association */         4 => 0,
  /* field_session_association */       ),
  /* field_session_association */       2 => array(
  /* field_session_association */         1 => 1,
  /* field_session_association */         2 => 2,
  /* field_session_association */         5 => 0,
  /* field_session_association */         3 => 0,
  /* field_session_association */         4 => 0,
  /* field_session_association */       ),
  /* field_session_association */       9 => array(
  /* field_session_association */         1 => 1,
  /* field_session_association */         2 => 2,
  /* field_session_association */         5 => 0,
  /* field_session_association */         3 => 0,
  /* field_session_association */         4 => 0,
  /* field_session_association */       ),
  /* field_session_association */     ),
  /* field_session_association */     'element_edit' => array(
  /* field_session_association */       1 => 1,
  /* field_session_association */       3 => 0,
  /* field_session_association */     ),
  /* field_session_association */     'element_edit_per_role' => 0,
  /* field_session_association */     'element_edit_roles' => array(
  /* field_session_association */       1 => array(
  /* field_session_association */         1 => 1,
  /* field_session_association */         3 => 0,
  /* field_session_association */       ),
  /* field_session_association */       2 => array(
  /* field_session_association */         1 => 1,
  /* field_session_association */         3 => 0,
  /* field_session_association */       ),
  /* field_session_association */       9 => array(
  /* field_session_association */         1 => 1,
  /* field_session_association */         3 => 0,
  /* field_session_association */       ),
  /* field_session_association */     ),
  /* field_session_association */     'selector' => '',
  /* field_session_association */     'values_set' => 3,
  /* field_session_association */     'value_form' => '_none',
  /* field_session_association */     'values' => array(
  /* field_session_association */       0 => 'Day',
  /* field_session_association */     ),
  /* field_session_association */     'value' => array(),
  /* field_session_association */   ),
  /* field_session_association */ );

  /* field_session_presenter */ $items[] = array(
  /* field_session_presenter */   'entity' => 'entityform',
  /* field_session_presenter */   'bundle' => 'session',
  /* field_session_presenter */   'dependent' => 'field_session_presenter',
  /* field_session_presenter */   'dependee' => 'field_type',
  /* field_session_presenter */   'options' => array(
  /* field_session_presenter */     'state' => 'visible',
  /* field_session_presenter */     'condition' => 'value',
  /* field_session_presenter */     'grouping' => 'AND',
  /* field_session_presenter */     'effect' => 'show',
  /* field_session_presenter */     'effect_options' => array(),
  /* field_session_presenter */     'element_view' => array(
  /* field_session_presenter */       1 => 1,
  /* field_session_presenter */       2 => 2,
  /* field_session_presenter */       5 => 0,
  /* field_session_presenter */       3 => 0,
  /* field_session_presenter */       4 => 0,
  /* field_session_presenter */     ),
  /* field_session_presenter */     'element_view_per_role' => 0,
  /* field_session_presenter */     'element_view_roles' => array(
  /* field_session_presenter */       1 => array(
  /* field_session_presenter */         1 => 1,
  /* field_session_presenter */         2 => 2,
  /* field_session_presenter */         5 => 0,
  /* field_session_presenter */         3 => 0,
  /* field_session_presenter */         4 => 0,
  /* field_session_presenter */       ),
  /* field_session_presenter */       2 => array(
  /* field_session_presenter */         1 => 1,
  /* field_session_presenter */         2 => 2,
  /* field_session_presenter */         5 => 0,
  /* field_session_presenter */         3 => 0,
  /* field_session_presenter */         4 => 0,
  /* field_session_presenter */       ),
  /* field_session_presenter */       9 => array(
  /* field_session_presenter */         1 => 1,
  /* field_session_presenter */         2 => 2,
  /* field_session_presenter */         5 => 0,
  /* field_session_presenter */         3 => 0,
  /* field_session_presenter */         4 => 0,
  /* field_session_presenter */       ),
  /* field_session_presenter */     ),
  /* field_session_presenter */     'element_edit' => array(
  /* field_session_presenter */       1 => 1,
  /* field_session_presenter */       3 => 0,
  /* field_session_presenter */     ),
  /* field_session_presenter */     'element_edit_per_role' => 0,
  /* field_session_presenter */     'element_edit_roles' => array(
  /* field_session_presenter */       1 => array(
  /* field_session_presenter */         1 => 1,
  /* field_session_presenter */         3 => 0,
  /* field_session_presenter */       ),
  /* field_session_presenter */       2 => array(
  /* field_session_presenter */         1 => 1,
  /* field_session_presenter */         3 => 0,
  /* field_session_presenter */       ),
  /* field_session_presenter */       9 => array(
  /* field_session_presenter */         1 => 1,
  /* field_session_presenter */         3 => 0,
  /* field_session_presenter */       ),
  /* field_session_presenter */     ),
  /* field_session_presenter */     'selector' => '',
  /* field_session_presenter */     'values_set' => 3,
  /* field_session_presenter */     'value_form' => '_none',
  /* field_session_presenter */     'values' => array(
  /* field_session_presenter */       0 => 'Day',
  /* field_session_presenter */       1 => 'Unit',
  /* field_session_presenter */     ),
  /* field_session_presenter */     'value' => array(),
  /* field_session_presenter */   ),
  /* field_session_presenter */ );

  /* field_weight */ $items[] = array(
  /* field_weight */   'entity' => 'entityform',
  /* field_weight */   'bundle' => 'session',
  /* field_weight */   'dependent' => 'field_weight',
  /* field_weight */   'dependee' => 'field_type',
  /* field_weight */   'options' => array(
  /* field_weight */     'state' => 'visible',
  /* field_weight */     'condition' => 'value',
  /* field_weight */     'grouping' => 'AND',
  /* field_weight */     'effect' => 'show',
  /* field_weight */     'effect_options' => array(),
  /* field_weight */     'element_view' => array(
  /* field_weight */       1 => 1,
  /* field_weight */       2 => 2,
  /* field_weight */       5 => 0,
  /* field_weight */       3 => 0,
  /* field_weight */       4 => 0,
  /* field_weight */     ),
  /* field_weight */     'element_view_per_role' => 0,
  /* field_weight */     'element_view_roles' => array(
  /* field_weight */       1 => array(
  /* field_weight */         1 => 1,
  /* field_weight */         2 => 2,
  /* field_weight */         5 => 0,
  /* field_weight */         3 => 0,
  /* field_weight */         4 => 0,
  /* field_weight */       ),
  /* field_weight */       2 => array(
  /* field_weight */         1 => 1,
  /* field_weight */         2 => 2,
  /* field_weight */         5 => 0,
  /* field_weight */         3 => 0,
  /* field_weight */         4 => 0,
  /* field_weight */       ),
  /* field_weight */       9 => array(
  /* field_weight */         1 => 1,
  /* field_weight */         2 => 2,
  /* field_weight */         5 => 0,
  /* field_weight */         3 => 0,
  /* field_weight */         4 => 0,
  /* field_weight */       ),
  /* field_weight */     ),
  /* field_weight */     'element_edit' => array(
  /* field_weight */       1 => 1,
  /* field_weight */       3 => 0,
  /* field_weight */     ),
  /* field_weight */     'element_edit_per_role' => 0,
  /* field_weight */     'element_edit_roles' => array(
  /* field_weight */       1 => array(
  /* field_weight */         1 => 1,
  /* field_weight */         3 => 0,
  /* field_weight */       ),
  /* field_weight */       2 => array(
  /* field_weight */         1 => 1,
  /* field_weight */         3 => 0,
  /* field_weight */       ),
  /* field_weight */       9 => array(
  /* field_weight */         1 => 1,
  /* field_weight */         3 => 0,
  /* field_weight */       ),
  /* field_weight */     ),
  /* field_weight */     'selector' => '',
  /* field_weight */     'values_set' => 3,
  /* field_weight */     'value_form' => '_none',
  /* field_weight */     'values' => array(
  /* field_weight */       0 => 'Unit',
  /* field_weight */     ),
  /* field_weight */     'value' => array(),
  /* field_weight */   ),
  /* field_weight */ );

  /* field_date2 */ $items[] = array(
  /* field_date2 */   'entity' => 'entityform',
  /* field_date2 */   'bundle' => 'session',
  /* field_date2 */   'dependent' => 'field_date2',
  /* field_date2 */   'dependee' => 'field_type',
  /* field_date2 */   'options' => array(
  /* field_date2 */     'state' => 'visible',
  /* field_date2 */     'condition' => 'value',
  /* field_date2 */     'grouping' => 'AND',
  /* field_date2 */     'effect' => 'show',
  /* field_date2 */     'effect_options' => array(),
  /* field_date2 */     'element_view' => array(
  /* field_date2 */       1 => 1,
  /* field_date2 */       2 => 2,
  /* field_date2 */       5 => 0,
  /* field_date2 */       3 => 0,
  /* field_date2 */       4 => 0,
  /* field_date2 */     ),
  /* field_date2 */     'element_view_per_role' => 0,
  /* field_date2 */     'element_view_roles' => array(
  /* field_date2 */       1 => array(
  /* field_date2 */         1 => 1,
  /* field_date2 */         2 => 2,
  /* field_date2 */         5 => 0,
  /* field_date2 */         3 => 0,
  /* field_date2 */         4 => 0,
  /* field_date2 */       ),
  /* field_date2 */       2 => array(
  /* field_date2 */         1 => 1,
  /* field_date2 */         2 => 2,
  /* field_date2 */         5 => 0,
  /* field_date2 */         3 => 0,
  /* field_date2 */         4 => 0,
  /* field_date2 */       ),
  /* field_date2 */       9 => array(
  /* field_date2 */         1 => 1,
  /* field_date2 */         2 => 2,
  /* field_date2 */         5 => 0,
  /* field_date2 */         3 => 0,
  /* field_date2 */         4 => 0,
  /* field_date2 */       ),
  /* field_date2 */       10 => array(
  /* field_date2 */         1 => 1,
  /* field_date2 */         2 => 2,
  /* field_date2 */         5 => 0,
  /* field_date2 */         3 => 0,
  /* field_date2 */         4 => 0,
  /* field_date2 */       ),
  /* field_date2 */     ),
  /* field_date2 */     'element_edit' => array(
  /* field_date2 */       1 => 1,
  /* field_date2 */       3 => 0,
  /* field_date2 */     ),
  /* field_date2 */     'element_edit_per_role' => 0,
  /* field_date2 */     'element_edit_roles' => array(
  /* field_date2 */       1 => array(
  /* field_date2 */         1 => 1,
  /* field_date2 */         3 => 0,
  /* field_date2 */       ),
  /* field_date2 */       2 => array(
  /* field_date2 */         1 => 1,
  /* field_date2 */         3 => 0,
  /* field_date2 */       ),
  /* field_date2 */       9 => array(
  /* field_date2 */         1 => 1,
  /* field_date2 */         3 => 0,
  /* field_date2 */       ),
  /* field_date2 */       10 => array(
  /* field_date2 */         1 => 1,
  /* field_date2 */         3 => 0,
  /* field_date2 */       ),
  /* field_date2 */     ),
  /* field_date2 */     'selector' => '',
  /* field_date2 */     'values_set' => 2,
  /* field_date2 */     'value_form' => '_none',
  /* field_date2 */     'values' => array(
  /* field_date2 */       0 => 'Week',
  /* field_date2 */     ),
  /* field_date2 */     'value' => array(),
  /* field_date2 */   ),
  /* field_date2 */ );

  /* field_day_number */ $items[] = array(
  /* field_day_number */   'entity' => 'entityform',
  /* field_day_number */   'bundle' => 'session',
  /* field_day_number */   'dependent' => 'field_day_number',
  /* field_day_number */   'dependee' => 'field_type',
  /* field_day_number */   'options' => array(
  /* field_day_number */     'state' => 'visible',
  /* field_day_number */     'condition' => 'value',
  /* field_day_number */     'grouping' => 'AND',
  /* field_day_number */     'effect' => 'show',
  /* field_day_number */     'effect_options' => array(),
  /* field_day_number */     'element_view' => array(
  /* field_day_number */       1 => 1,
  /* field_day_number */       2 => 2,
  /* field_day_number */       5 => 0,
  /* field_day_number */       3 => 0,
  /* field_day_number */       4 => 0,
  /* field_day_number */     ),
  /* field_day_number */     'element_view_per_role' => 0,
  /* field_day_number */     'element_view_roles' => array(
  /* field_day_number */       1 => array(
  /* field_day_number */         1 => 1,
  /* field_day_number */         2 => 2,
  /* field_day_number */         5 => 0,
  /* field_day_number */         3 => 0,
  /* field_day_number */         4 => 0,
  /* field_day_number */       ),
  /* field_day_number */       2 => array(
  /* field_day_number */         1 => 1,
  /* field_day_number */         2 => 2,
  /* field_day_number */         5 => 0,
  /* field_day_number */         3 => 0,
  /* field_day_number */         4 => 0,
  /* field_day_number */       ),
  /* field_day_number */       9 => array(
  /* field_day_number */         1 => 1,
  /* field_day_number */         2 => 2,
  /* field_day_number */         5 => 0,
  /* field_day_number */         3 => 0,
  /* field_day_number */         4 => 0,
  /* field_day_number */       ),
  /* field_day_number */       10 => array(
  /* field_day_number */         1 => 1,
  /* field_day_number */         2 => 2,
  /* field_day_number */         5 => 0,
  /* field_day_number */         3 => 0,
  /* field_day_number */         4 => 0,
  /* field_day_number */       ),
  /* field_day_number */     ),
  /* field_day_number */     'element_edit' => array(
  /* field_day_number */       1 => 1,
  /* field_day_number */       3 => 0,
  /* field_day_number */     ),
  /* field_day_number */     'element_edit_per_role' => 0,
  /* field_day_number */     'element_edit_roles' => array(
  /* field_day_number */       1 => array(
  /* field_day_number */         1 => 1,
  /* field_day_number */         3 => 0,
  /* field_day_number */       ),
  /* field_day_number */       2 => array(
  /* field_day_number */         1 => 1,
  /* field_day_number */         3 => 0,
  /* field_day_number */       ),
  /* field_day_number */       9 => array(
  /* field_day_number */         1 => 1,
  /* field_day_number */         3 => 0,
  /* field_day_number */       ),
  /* field_day_number */       10 => array(
  /* field_day_number */         1 => 1,
  /* field_day_number */         3 => 0,
  /* field_day_number */       ),
  /* field_day_number */     ),
  /* field_day_number */     'selector' => '',
  /* field_day_number */     'values_set' => 2,
  /* field_day_number */     'value_form' => '_none',
  /* field_day_number */     'values' => array(
  /* field_day_number */       0 => 'Day',
  /* field_day_number */     ),
  /* field_day_number */     'value' => array(),
  /* field_day_number */   ),
  /* field_day_number */ );

  return $items;
}
