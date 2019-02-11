<?php
/**
 * @file
 * gn2_feedback.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function gn2_feedback_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_feedback'.
  $field_bases['field_feedback'] = array(
  /* field_feedback */   'active' => 1,
  /* field_feedback */   'cardinality' => 1,
  /* field_feedback */   'deleted' => 0,
  /* field_feedback */   'entity_types' => array(),
  /* field_feedback */   'field_name' => 'field_feedback',
  /* field_feedback */   'indexes' => array(
  /* field_feedback */     'format' => array(
  /* field_feedback */       0 => 'format',
  /* field_feedback */     ),
  /* field_feedback */   ),
  /* field_feedback */   'locked' => 0,
  /* field_feedback */   'module' => 'text',
  /* field_feedback */   'settings' => array(),
  /* field_feedback */   'translatable' => 0,
  /* field_feedback */   'type' => 'text_long',
  /* field_feedback */ );

  // Exported field_base: 'field_feedback_expected'.
  $field_bases['field_feedback_expected'] = array(
  /* field_feedback_expected */   'active' => 1,
  /* field_feedback_expected */   'cardinality' => 1,
  /* field_feedback_expected */   'deleted' => 0,
  /* field_feedback_expected */   'entity_types' => array(),
  /* field_feedback_expected */   'field_name' => 'field_feedback_expected',
  /* field_feedback_expected */   'indexes' => array(
  /* field_feedback_expected */     'format' => array(
  /* field_feedback_expected */       0 => 'format',
  /* field_feedback_expected */     ),
  /* field_feedback_expected */   ),
  /* field_feedback_expected */   'locked' => 0,
  /* field_feedback_expected */   'module' => 'text',
  /* field_feedback_expected */   'settings' => array(),
  /* field_feedback_expected */   'translatable' => 0,
  /* field_feedback_expected */   'type' => 'text_long',
  /* field_feedback_expected */ );

  // Exported field_base: 'field_feedback_experienced'.
  $field_bases['field_feedback_experienced'] = array(
  /* field_feedback_experienced */   'active' => 1,
  /* field_feedback_experienced */   'cardinality' => 1,
  /* field_feedback_experienced */   'deleted' => 0,
  /* field_feedback_experienced */   'entity_types' => array(),
  /* field_feedback_experienced */   'field_name' => 'field_feedback_experienced',
  /* field_feedback_experienced */   'indexes' => array(
  /* field_feedback_experienced */     'format' => array(
  /* field_feedback_experienced */       0 => 'format',
  /* field_feedback_experienced */     ),
  /* field_feedback_experienced */   ),
  /* field_feedback_experienced */   'locked' => 0,
  /* field_feedback_experienced */   'module' => 'text',
  /* field_feedback_experienced */   'settings' => array(),
  /* field_feedback_experienced */   'translatable' => 0,
  /* field_feedback_experienced */   'type' => 'text_long',
  /* field_feedback_experienced */ );

  // Exported field_base: 'field_feedback_operation'.
  $field_bases['field_feedback_operation'] = array(
  /* field_feedback_operation */   'active' => 1,
  /* field_feedback_operation */   'cardinality' => 1,
  /* field_feedback_operation */   'deleted' => 0,
  /* field_feedback_operation */   'entity_types' => array(),
  /* field_feedback_operation */   'field_name' => 'field_feedback_operation',
  /* field_feedback_operation */   'indexes' => array(
  /* field_feedback_operation */     'format' => array(
  /* field_feedback_operation */       0 => 'format',
  /* field_feedback_operation */     ),
  /* field_feedback_operation */   ),
  /* field_feedback_operation */   'locked' => 0,
  /* field_feedback_operation */   'module' => 'text',
  /* field_feedback_operation */   'settings' => array(),
  /* field_feedback_operation */   'translatable' => 0,
  /* field_feedback_operation */   'type' => 'text_long',
  /* field_feedback_operation */ );

  // Exported field_base: 'field_feedback_url'.
  $field_bases['field_feedback_url'] = array(
  /* field_feedback_url */   'active' => 1,
  /* field_feedback_url */   'cardinality' => 1,
  /* field_feedback_url */   'deleted' => 0,
  /* field_feedback_url */   'entity_types' => array(),
  /* field_feedback_url */   'field_name' => 'field_feedback_url',
  /* field_feedback_url */   'indexes' => array(
  /* field_feedback_url */     'format' => array(
  /* field_feedback_url */       0 => 'format',
  /* field_feedback_url */     ),
  /* field_feedback_url */   ),
  /* field_feedback_url */   'locked' => 0,
  /* field_feedback_url */   'module' => 'text',
  /* field_feedback_url */   'settings' => array(
  /* field_feedback_url */     'max_length' => 255,
  /* field_feedback_url */   ),
  /* field_feedback_url */   'translatable' => 0,
  /* field_feedback_url */   'type' => 'text',
  /* field_feedback_url */ );

  return $field_bases;
}
