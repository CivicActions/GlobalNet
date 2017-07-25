<?php
/**
 * @file
 * gn2_roles_perms.features.conditional_fields.inc
 */

/**
 * Implements hook_conditional_fields_default_fields().
 */
function gn2_roles_perms_conditional_fields_default_fields() {
  $items = array();

  /* field_which_course */ $items[] = array(
  /* field_which_course */   'entity' => 'user',
  /* field_which_course */   'bundle' => 'user',
  /* field_which_course */   'dependent' => 'field_which_course',
  /* field_which_course */   'dependee' => 'field_why_do_you_want',
  /* field_which_course */   'options' => array(
  /* field_which_course */     'state' => 'visible',
  /* field_which_course */     'condition' => 'value',
  /* field_which_course */     'grouping' => 'AND',
  /* field_which_course */     'effect' => 'show',
  /* field_which_course */     'effect_options' => array(),
  /* field_which_course */     'element_view' => array(
  /* field_which_course */       1 => 1,
  /* field_which_course */       2 => 2,
  /* field_which_course */       5 => 0,
  /* field_which_course */       3 => 0,
  /* field_which_course */       4 => 0,
  /* field_which_course */     ),
  /* field_which_course */     'element_view_per_role' => 0,
  /* field_which_course */     'element_view_roles' => array(
  /* field_which_course */       1 => array(
  /* field_which_course */         1 => 1,
  /* field_which_course */         2 => 2,
  /* field_which_course */         5 => 0,
  /* field_which_course */         3 => 0,
  /* field_which_course */         4 => 0,
  /* field_which_course */       ),
  /* field_which_course */       2 => array(
  /* field_which_course */         1 => 1,
  /* field_which_course */         2 => 2,
  /* field_which_course */         5 => 0,
  /* field_which_course */         3 => 0,
  /* field_which_course */         4 => 0,
  /* field_which_course */       ),
  /* field_which_course */       9 => array(
  /* field_which_course */         1 => 1,
  /* field_which_course */         2 => 2,
  /* field_which_course */         5 => 0,
  /* field_which_course */         3 => 0,
  /* field_which_course */         4 => 0,
  /* field_which_course */       ),
  /* field_which_course */     ),
  /* field_which_course */     'element_edit' => array(
  /* field_which_course */       1 => 1,
  /* field_which_course */       3 => 0,
  /* field_which_course */     ),
  /* field_which_course */     'element_edit_per_role' => 0,
  /* field_which_course */     'element_edit_roles' => array(
  /* field_which_course */       1 => array(
  /* field_which_course */         1 => 1,
  /* field_which_course */         3 => 0,
  /* field_which_course */       ),
  /* field_which_course */       2 => array(
  /* field_which_course */         1 => 1,
  /* field_which_course */         3 => 0,
  /* field_which_course */       ),
  /* field_which_course */       9 => array(
  /* field_which_course */         1 => 1,
  /* field_which_course */         3 => 0,
  /* field_which_course */       ),
  /* field_which_course */     ),
  /* field_which_course */     'selector' => '',
  /* field_which_course */     'values_set' => 1,
  /* field_which_course */     'value_form' => 1,
  /* field_which_course */     'value' => array(
  /* field_which_course */       0 => array(
  /* field_which_course */         'value' => 1,
  /* field_which_course */       ),
  /* field_which_course */     ),
  /* field_which_course */     'values' => array(),
  /* field_which_course */   ),
  /* field_which_course */ );

  /* field_which_course_did_you */ $items[] = array(
  /* field_which_course_did_you */   'entity' => 'user',
  /* field_which_course_did_you */   'bundle' => 'user',
  /* field_which_course_did_you */   'dependent' => 'field_which_course_did_you',
  /* field_which_course_did_you */   'dependee' => 'field_why_do_you_want',
  /* field_which_course_did_you */   'options' => array(
  /* field_which_course_did_you */     'state' => 'visible',
  /* field_which_course_did_you */     'condition' => 'value',
  /* field_which_course_did_you */     'grouping' => 'AND',
  /* field_which_course_did_you */     'effect' => 'show',
  /* field_which_course_did_you */     'effect_options' => array(),
  /* field_which_course_did_you */     'element_view' => array(
  /* field_which_course_did_you */       1 => 1,
  /* field_which_course_did_you */       2 => 2,
  /* field_which_course_did_you */       5 => 0,
  /* field_which_course_did_you */       3 => 0,
  /* field_which_course_did_you */       4 => 0,
  /* field_which_course_did_you */     ),
  /* field_which_course_did_you */     'element_view_per_role' => 0,
  /* field_which_course_did_you */     'element_view_roles' => array(
  /* field_which_course_did_you */       1 => array(
  /* field_which_course_did_you */         1 => 1,
  /* field_which_course_did_you */         2 => 2,
  /* field_which_course_did_you */         5 => 0,
  /* field_which_course_did_you */         3 => 0,
  /* field_which_course_did_you */         4 => 0,
  /* field_which_course_did_you */       ),
  /* field_which_course_did_you */       2 => array(
  /* field_which_course_did_you */         1 => 1,
  /* field_which_course_did_you */         2 => 2,
  /* field_which_course_did_you */         5 => 0,
  /* field_which_course_did_you */         3 => 0,
  /* field_which_course_did_you */         4 => 0,
  /* field_which_course_did_you */       ),
  /* field_which_course_did_you */       9 => array(
  /* field_which_course_did_you */         1 => 1,
  /* field_which_course_did_you */         2 => 2,
  /* field_which_course_did_you */         5 => 0,
  /* field_which_course_did_you */         3 => 0,
  /* field_which_course_did_you */         4 => 0,
  /* field_which_course_did_you */       ),
  /* field_which_course_did_you */     ),
  /* field_which_course_did_you */     'element_edit' => array(
  /* field_which_course_did_you */       1 => 1,
  /* field_which_course_did_you */       3 => 0,
  /* field_which_course_did_you */     ),
  /* field_which_course_did_you */     'element_edit_per_role' => 0,
  /* field_which_course_did_you */     'element_edit_roles' => array(
  /* field_which_course_did_you */       1 => array(
  /* field_which_course_did_you */         1 => 1,
  /* field_which_course_did_you */         3 => 0,
  /* field_which_course_did_you */       ),
  /* field_which_course_did_you */       2 => array(
  /* field_which_course_did_you */         1 => 1,
  /* field_which_course_did_you */         3 => 0,
  /* field_which_course_did_you */       ),
  /* field_which_course_did_you */       9 => array(
  /* field_which_course_did_you */         1 => 1,
  /* field_which_course_did_you */         3 => 0,
  /* field_which_course_did_you */       ),
  /* field_which_course_did_you */     ),
  /* field_which_course_did_you */     'selector' => '',
  /* field_which_course_did_you */     'values_set' => 1,
  /* field_which_course_did_you */     'value_form' => 4,
  /* field_which_course_did_you */     'value' => array(
  /* field_which_course_did_you */       0 => array(
  /* field_which_course_did_you */         'value' => 4,
  /* field_which_course_did_you */       ),
  /* field_which_course_did_you */     ),
  /* field_which_course_did_you */     'values' => array(),
  /* field_which_course_did_you */   ),
  /* field_which_course_did_you */ );

  /* field_which_course_teach */ $items[] = array(
  /* field_which_course_teach */   'entity' => 'user',
  /* field_which_course_teach */   'bundle' => 'user',
  /* field_which_course_teach */   'dependent' => 'field_which_course_teach',
  /* field_which_course_teach */   'dependee' => 'field_why_do_you_want',
  /* field_which_course_teach */   'options' => array(
  /* field_which_course_teach */     'state' => 'visible',
  /* field_which_course_teach */     'condition' => 'value',
  /* field_which_course_teach */     'grouping' => 'AND',
  /* field_which_course_teach */     'effect' => 'show',
  /* field_which_course_teach */     'effect_options' => array(),
  /* field_which_course_teach */     'element_view' => array(
  /* field_which_course_teach */       1 => 1,
  /* field_which_course_teach */       2 => 2,
  /* field_which_course_teach */       5 => 0,
  /* field_which_course_teach */       3 => 0,
  /* field_which_course_teach */       4 => 0,
  /* field_which_course_teach */     ),
  /* field_which_course_teach */     'element_view_per_role' => 0,
  /* field_which_course_teach */     'element_view_roles' => array(
  /* field_which_course_teach */       1 => array(
  /* field_which_course_teach */         1 => 1,
  /* field_which_course_teach */         2 => 2,
  /* field_which_course_teach */         5 => 0,
  /* field_which_course_teach */         3 => 0,
  /* field_which_course_teach */         4 => 0,
  /* field_which_course_teach */       ),
  /* field_which_course_teach */       2 => array(
  /* field_which_course_teach */         1 => 1,
  /* field_which_course_teach */         2 => 2,
  /* field_which_course_teach */         5 => 0,
  /* field_which_course_teach */         3 => 0,
  /* field_which_course_teach */         4 => 0,
  /* field_which_course_teach */       ),
  /* field_which_course_teach */       9 => array(
  /* field_which_course_teach */         1 => 1,
  /* field_which_course_teach */         2 => 2,
  /* field_which_course_teach */         5 => 0,
  /* field_which_course_teach */         3 => 0,
  /* field_which_course_teach */         4 => 0,
  /* field_which_course_teach */       ),
  /* field_which_course_teach */     ),
  /* field_which_course_teach */     'element_edit' => array(
  /* field_which_course_teach */       1 => 1,
  /* field_which_course_teach */       3 => 0,
  /* field_which_course_teach */     ),
  /* field_which_course_teach */     'element_edit_per_role' => 0,
  /* field_which_course_teach */     'element_edit_roles' => array(
  /* field_which_course_teach */       1 => array(
  /* field_which_course_teach */         1 => 1,
  /* field_which_course_teach */         3 => 0,
  /* field_which_course_teach */       ),
  /* field_which_course_teach */       2 => array(
  /* field_which_course_teach */         1 => 1,
  /* field_which_course_teach */         3 => 0,
  /* field_which_course_teach */       ),
  /* field_which_course_teach */       9 => array(
  /* field_which_course_teach */         1 => 1,
  /* field_which_course_teach */         3 => 0,
  /* field_which_course_teach */       ),
  /* field_which_course_teach */     ),
  /* field_which_course_teach */     'selector' => '',
  /* field_which_course_teach */     'values_set' => 1,
  /* field_which_course_teach */     'value_form' => 2,
  /* field_which_course_teach */     'value' => array(
  /* field_which_course_teach */       0 => array(
  /* field_which_course_teach */         'value' => 2,
  /* field_which_course_teach */       ),
  /* field_which_course_teach */     ),
  /* field_which_course_teach */     'values' => array(),
  /* field_which_course_teach */   ),
  /* field_which_course_teach */ );

  /* field_which_event_attend */ $items[] = array(
  /* field_which_event_attend */   'entity' => 'user',
  /* field_which_event_attend */   'bundle' => 'user',
  /* field_which_event_attend */   'dependent' => 'field_which_event_attend',
  /* field_which_event_attend */   'dependee' => 'field_why_do_you_want',
  /* field_which_event_attend */   'options' => array(
  /* field_which_event_attend */     'state' => 'visible',
  /* field_which_event_attend */     'condition' => 'value',
  /* field_which_event_attend */     'grouping' => 'AND',
  /* field_which_event_attend */     'effect' => 'show',
  /* field_which_event_attend */     'effect_options' => array(),
  /* field_which_event_attend */     'element_view' => array(
  /* field_which_event_attend */       1 => 1,
  /* field_which_event_attend */       2 => 2,
  /* field_which_event_attend */       5 => 0,
  /* field_which_event_attend */       3 => 0,
  /* field_which_event_attend */       4 => 0,
  /* field_which_event_attend */     ),
  /* field_which_event_attend */     'element_view_per_role' => 0,
  /* field_which_event_attend */     'element_view_roles' => array(
  /* field_which_event_attend */       1 => array(
  /* field_which_event_attend */         1 => 1,
  /* field_which_event_attend */         2 => 2,
  /* field_which_event_attend */         5 => 0,
  /* field_which_event_attend */         3 => 0,
  /* field_which_event_attend */         4 => 0,
  /* field_which_event_attend */       ),
  /* field_which_event_attend */       2 => array(
  /* field_which_event_attend */         1 => 1,
  /* field_which_event_attend */         2 => 2,
  /* field_which_event_attend */         5 => 0,
  /* field_which_event_attend */         3 => 0,
  /* field_which_event_attend */         4 => 0,
  /* field_which_event_attend */       ),
  /* field_which_event_attend */       9 => array(
  /* field_which_event_attend */         1 => 1,
  /* field_which_event_attend */         2 => 2,
  /* field_which_event_attend */         5 => 0,
  /* field_which_event_attend */         3 => 0,
  /* field_which_event_attend */         4 => 0,
  /* field_which_event_attend */       ),
  /* field_which_event_attend */     ),
  /* field_which_event_attend */     'element_edit' => array(
  /* field_which_event_attend */       1 => 1,
  /* field_which_event_attend */       3 => 0,
  /* field_which_event_attend */     ),
  /* field_which_event_attend */     'element_edit_per_role' => 0,
  /* field_which_event_attend */     'element_edit_roles' => array(
  /* field_which_event_attend */       1 => array(
  /* field_which_event_attend */         1 => 1,
  /* field_which_event_attend */         3 => 0,
  /* field_which_event_attend */       ),
  /* field_which_event_attend */       2 => array(
  /* field_which_event_attend */         1 => 1,
  /* field_which_event_attend */         3 => 0,
  /* field_which_event_attend */       ),
  /* field_which_event_attend */       9 => array(
  /* field_which_event_attend */         1 => 1,
  /* field_which_event_attend */         3 => 0,
  /* field_which_event_attend */       ),
  /* field_which_event_attend */     ),
  /* field_which_event_attend */     'selector' => '',
  /* field_which_event_attend */     'values_set' => 1,
  /* field_which_event_attend */     'value_form' => 3,
  /* field_which_event_attend */     'value' => array(
  /* field_which_event_attend */       0 => array(
  /* field_which_event_attend */         'value' => 3,
  /* field_which_event_attend */       ),
  /* field_which_event_attend */     ),
  /* field_which_event_attend */     'values' => array(),
  /* field_which_event_attend */   ),
  /* field_which_event_attend */ );

  /* field_who_teaches */ $items[] = array(
  /* field_who_teaches */   'entity' => 'user',
  /* field_who_teaches */   'bundle' => 'user',
  /* field_who_teaches */   'dependent' => 'field_who_teaches',
  /* field_who_teaches */   'dependee' => 'field_why_do_you_want',
  /* field_who_teaches */   'options' => array(
  /* field_who_teaches */     'state' => 'visible',
  /* field_who_teaches */     'condition' => 'value',
  /* field_who_teaches */     'grouping' => 'AND',
  /* field_who_teaches */     'effect' => 'show',
  /* field_who_teaches */     'effect_options' => array(),
  /* field_who_teaches */     'element_view' => array(
  /* field_who_teaches */       1 => 1,
  /* field_who_teaches */       2 => 2,
  /* field_who_teaches */       5 => 0,
  /* field_who_teaches */       3 => 0,
  /* field_who_teaches */       4 => 0,
  /* field_who_teaches */     ),
  /* field_who_teaches */     'element_view_per_role' => 0,
  /* field_who_teaches */     'element_view_roles' => array(
  /* field_who_teaches */       1 => array(
  /* field_who_teaches */         1 => 1,
  /* field_who_teaches */         2 => 2,
  /* field_who_teaches */         5 => 0,
  /* field_who_teaches */         3 => 0,
  /* field_who_teaches */         4 => 0,
  /* field_who_teaches */       ),
  /* field_who_teaches */       2 => array(
  /* field_who_teaches */         1 => 1,
  /* field_who_teaches */         2 => 2,
  /* field_who_teaches */         5 => 0,
  /* field_who_teaches */         3 => 0,
  /* field_who_teaches */         4 => 0,
  /* field_who_teaches */       ),
  /* field_who_teaches */       9 => array(
  /* field_who_teaches */         1 => 1,
  /* field_who_teaches */         2 => 2,
  /* field_who_teaches */         5 => 0,
  /* field_who_teaches */         3 => 0,
  /* field_who_teaches */         4 => 0,
  /* field_who_teaches */       ),
  /* field_who_teaches */     ),
  /* field_who_teaches */     'element_edit' => array(
  /* field_who_teaches */       1 => 1,
  /* field_who_teaches */       3 => 0,
  /* field_who_teaches */     ),
  /* field_who_teaches */     'element_edit_per_role' => 0,
  /* field_who_teaches */     'element_edit_roles' => array(
  /* field_who_teaches */       1 => array(
  /* field_who_teaches */         1 => 1,
  /* field_who_teaches */         3 => 0,
  /* field_who_teaches */       ),
  /* field_who_teaches */       2 => array(
  /* field_who_teaches */         1 => 1,
  /* field_who_teaches */         3 => 0,
  /* field_who_teaches */       ),
  /* field_who_teaches */       9 => array(
  /* field_who_teaches */         1 => 1,
  /* field_who_teaches */         3 => 0,
  /* field_who_teaches */       ),
  /* field_who_teaches */     ),
  /* field_who_teaches */     'selector' => '',
  /* field_who_teaches */     'values_set' => 1,
  /* field_who_teaches */     'value_form' => 1,
  /* field_who_teaches */     'value' => array(
  /* field_who_teaches */       0 => array(
  /* field_who_teaches */         'value' => 1,
  /* field_who_teaches */       ),
  /* field_who_teaches */     ),
  /* field_who_teaches */     'values' => array(),
  /* field_who_teaches */   ),
  /* field_who_teaches */ );

  return $items;
}
