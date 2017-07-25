<?php
/**
 * @file
 * gn2_roles_perms.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function gn2_roles_perms_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_anything_else'
  $field_bases['field_anything_else'] = array(
  /* field_anything_else */   'active' => 1,
  /* field_anything_else */   'cardinality' => 1,
  /* field_anything_else */   'deleted' => 0,
  /* field_anything_else */   'entity_types' => array(),
  /* field_anything_else */   'field_name' => 'field_anything_else',
  /* field_anything_else */   'indexes' => array(
  /* field_anything_else */     'format' => array(
  /* field_anything_else */       0 => 'format',
  /* field_anything_else */     ),
  /* field_anything_else */   ),
  /* field_anything_else */   'locked' => 0,
  /* field_anything_else */   'module' => 'text',
  /* field_anything_else */   'settings' => array(),
  /* field_anything_else */   'translatable' => 0,
  /* field_anything_else */   'type' => 'text_long',
  /* field_anything_else */ );

  // Exported field_base: 'field_which_course'
  $field_bases['field_which_course'] = array(
  /* field_which_course */   'active' => 1,
  /* field_which_course */   'cardinality' => 1,
  /* field_which_course */   'deleted' => 0,
  /* field_which_course */   'entity_types' => array(),
  /* field_which_course */   'field_name' => 'field_which_course',
  /* field_which_course */   'indexes' => array(
  /* field_which_course */     'format' => array(
  /* field_which_course */       0 => 'format',
  /* field_which_course */     ),
  /* field_which_course */   ),
  /* field_which_course */   'locked' => 0,
  /* field_which_course */   'module' => 'text',
  /* field_which_course */   'settings' => array(
  /* field_which_course */     'max_length' => 255,
  /* field_which_course */   ),
  /* field_which_course */   'translatable' => 0,
  /* field_which_course */   'type' => 'text',
  /* field_which_course */ );

  // Exported field_base: 'field_which_course_did_you'
  $field_bases['field_which_course_did_you'] = array(
  /* field_which_course_did_you */   'active' => 1,
  /* field_which_course_did_you */   'cardinality' => 1,
  /* field_which_course_did_you */   'deleted' => 0,
  /* field_which_course_did_you */   'entity_types' => array(),
  /* field_which_course_did_you */   'field_name' => 'field_which_course_did_you',
  /* field_which_course_did_you */   'indexes' => array(
  /* field_which_course_did_you */     'format' => array(
  /* field_which_course_did_you */       0 => 'format',
  /* field_which_course_did_you */     ),
  /* field_which_course_did_you */   ),
  /* field_which_course_did_you */   'locked' => 0,
  /* field_which_course_did_you */   'module' => 'text',
  /* field_which_course_did_you */   'settings' => array(
  /* field_which_course_did_you */     'max_length' => 255,
  /* field_which_course_did_you */   ),
  /* field_which_course_did_you */   'translatable' => 0,
  /* field_which_course_did_you */   'type' => 'text',
  /* field_which_course_did_you */ );

  // Exported field_base: 'field_which_course_teach'
  $field_bases['field_which_course_teach'] = array(
  /* field_which_course_teach */   'active' => 1,
  /* field_which_course_teach */   'cardinality' => 1,
  /* field_which_course_teach */   'deleted' => 0,
  /* field_which_course_teach */   'entity_types' => array(),
  /* field_which_course_teach */   'field_name' => 'field_which_course_teach',
  /* field_which_course_teach */   'indexes' => array(
  /* field_which_course_teach */     'format' => array(
  /* field_which_course_teach */       0 => 'format',
  /* field_which_course_teach */     ),
  /* field_which_course_teach */   ),
  /* field_which_course_teach */   'locked' => 0,
  /* field_which_course_teach */   'module' => 'text',
  /* field_which_course_teach */   'settings' => array(
  /* field_which_course_teach */     'max_length' => 255,
  /* field_which_course_teach */   ),
  /* field_which_course_teach */   'translatable' => 0,
  /* field_which_course_teach */   'type' => 'text',
  /* field_which_course_teach */ );

  // Exported field_base: 'field_which_event_attend'
  $field_bases['field_which_event_attend'] = array(
  /* field_which_event_attend */   'active' => 1,
  /* field_which_event_attend */   'cardinality' => 1,
  /* field_which_event_attend */   'deleted' => 0,
  /* field_which_event_attend */   'entity_types' => array(),
  /* field_which_event_attend */   'field_name' => 'field_which_event_attend',
  /* field_which_event_attend */   'indexes' => array(
  /* field_which_event_attend */     'format' => array(
  /* field_which_event_attend */       0 => 'format',
  /* field_which_event_attend */     ),
  /* field_which_event_attend */   ),
  /* field_which_event_attend */   'locked' => 0,
  /* field_which_event_attend */   'module' => 'text',
  /* field_which_event_attend */   'settings' => array(
  /* field_which_event_attend */     'max_length' => 255,
  /* field_which_event_attend */   ),
  /* field_which_event_attend */   'translatable' => 0,
  /* field_which_event_attend */   'type' => 'text',
  /* field_which_event_attend */ );

  // Exported field_base: 'field_who_teaches'
  $field_bases['field_who_teaches'] = array(
  /* field_who_teaches */   'active' => 1,
  /* field_who_teaches */   'cardinality' => 1,
  /* field_who_teaches */   'deleted' => 0,
  /* field_who_teaches */   'entity_types' => array(),
  /* field_who_teaches */   'field_name' => 'field_who_teaches',
  /* field_who_teaches */   'indexes' => array(
  /* field_who_teaches */     'format' => array(
  /* field_who_teaches */       0 => 'format',
  /* field_who_teaches */     ),
  /* field_who_teaches */   ),
  /* field_who_teaches */   'locked' => 0,
  /* field_who_teaches */   'module' => 'text',
  /* field_who_teaches */   'settings' => array(
  /* field_who_teaches */     'max_length' => 255,
  /* field_who_teaches */   ),
  /* field_who_teaches */   'translatable' => 0,
  /* field_who_teaches */   'type' => 'text',
  /* field_who_teaches */ );

  // Exported field_base: 'field_why_do_you_want'
  $field_bases['field_why_do_you_want'] = array(
  /* field_why_do_you_want */   'active' => 1,
  /* field_why_do_you_want */   'cardinality' => 1,
  /* field_why_do_you_want */   'deleted' => 0,
  /* field_why_do_you_want */   'entity_types' => array(),
  /* field_why_do_you_want */   'field_name' => 'field_why_do_you_want',
  /* field_why_do_you_want */   'indexes' => array(
  /* field_why_do_you_want */     'value' => array(
  /* field_why_do_you_want */       0 => 'value',
  /* field_why_do_you_want */     ),
  /* field_why_do_you_want */   ),
  /* field_why_do_you_want */   'locked' => 0,
  /* field_why_do_you_want */   'module' => 'list',
  /* field_why_do_you_want */   'settings' => array(
  /* field_why_do_you_want */     'allowed_values' => array(
  /* field_why_do_you_want */       1 => 'To attend a course',
  /* field_why_do_you_want */       2 => 'To teach a course, seminar or workshop',
  /* field_why_do_you_want */       3 => 'To attend an event',
  /* field_why_do_you_want */       4 => 'I attended a course in the past',
  /* field_why_do_you_want */       5 => 'Other',
  /* field_why_do_you_want */     ),
  /* field_why_do_you_want */     'allowed_values_function' => '',
  /* field_why_do_you_want */   ),
  /* field_why_do_you_want */   'translatable' => 0,
  /* field_why_do_you_want */   'type' => 'list_integer',
  /* field_why_do_you_want */ );

  return $field_bases;
}
