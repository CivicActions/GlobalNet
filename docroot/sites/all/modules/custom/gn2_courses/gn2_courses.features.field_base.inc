<?php
/**
 * @file
 * gn2_courses.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function gn2_courses_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_display_all_fields'.
  $field_bases['field_display_all_fields'] = array(
  /* field_display_all_fields */   'active' => 1,
  /* field_display_all_fields */   'cardinality' => 1,
  /* field_display_all_fields */   'deleted' => 0,
  /* field_display_all_fields */   'entity_types' => array(),
  /* field_display_all_fields */   'field_name' => 'field_display_all_fields',
  /* field_display_all_fields */   'indexes' => array(
  /* field_display_all_fields */     'value' => array(
  /* field_display_all_fields */       0 => 'value',
  /* field_display_all_fields */     ),
  /* field_display_all_fields */   ),
  /* field_display_all_fields */   'locked' => 0,
  /* field_display_all_fields */   'module' => 'list',
  /* field_display_all_fields */   'settings' => array(
  /* field_display_all_fields */     'allowed_values' => array(
  /* field_display_all_fields */       'Yes' => 'Yes',
  /* field_display_all_fields */       'No' => 'No',
  /* field_display_all_fields */     ),
  /* field_display_all_fields */     'allowed_values_function' => '',
  /* field_display_all_fields */   ),
  /* field_display_all_fields */   'translatable' => 0,
  /* field_display_all_fields */   'type' => 'list_text',
  /* field_display_all_fields */ );

  // Exported field_base: 'field_session'.
  $field_bases['field_session'] = array(
  /* field_session */   'active' => 1,
  /* field_session */   'cardinality' => -1,
  /* field_session */   'deleted' => 0,
  /* field_session */   'entity_types' => array(),
  /* field_session */   'field_name' => 'field_session',
  /* field_session */   'indexes' => array(
  /* field_session */     'revision_id' => array(
  /* field_session */       0 => 'revision_id',
  /* field_session */     ),
  /* field_session */     'value' => array(
  /* field_session */       0 => 'value',
  /* field_session */     ),
  /* field_session */   ),
  /* field_session */   'locked' => 0,
  /* field_session */   'module' => 'field_collection',
  /* field_session */   'settings' => array(
  /* field_session */     'hide_blank_items' => 1,
  /* field_session */     'hide_initial_item' => FALSE,
  /* field_session */     'path' => '',
  /* field_session */   ),
  /* field_session */   'translatable' => 0,
  /* field_session */   'type' => 'field_collection',
  /* field_session */ );

  // Exported field_base: 'field_session_day'.
  $field_bases['field_session_day'] = array(
  /* field_session_day */   'active' => 1,
  /* field_session_day */   'cardinality' => -1,
  /* field_session_day */   'deleted' => 0,
  /* field_session_day */   'entity_types' => array(),
  /* field_session_day */   'field_name' => 'field_session_day',
  /* field_session_day */   'indexes' => array(
  /* field_session_day */     'revision_id' => array(
  /* field_session_day */       0 => 'revision_id',
  /* field_session_day */     ),
  /* field_session_day */     'value' => array(
  /* field_session_day */       0 => 'value',
  /* field_session_day */     ),
  /* field_session_day */   ),
  /* field_session_day */   'locked' => 0,
  /* field_session_day */   'module' => 'field_collection',
  /* field_session_day */   'settings' => array(
  /* field_session_day */     'hide_blank_items' => 1,
  /* field_session_day */     'hide_initial_item' => FALSE,
  /* field_session_day */     'path' => '',
  /* field_session_day */   ),
  /* field_session_day */   'translatable' => 0,
  /* field_session_day */   'type' => 'field_collection',
  /* field_session_day */ );

  // Exported field_base: 'field_unit'.
  $field_bases['field_unit'] = array(
  /* field_unit */   'active' => 1,
  /* field_unit */   'cardinality' => -1,
  /* field_unit */   'deleted' => 0,
  /* field_unit */   'entity_types' => array(),
  /* field_unit */   'field_name' => 'field_unit',
  /* field_unit */   'indexes' => array(
  /* field_unit */     'revision_id' => array(
  /* field_unit */       0 => 'revision_id',
  /* field_unit */     ),
  /* field_unit */     'value' => array(
  /* field_unit */       0 => 'value',
  /* field_unit */     ),
  /* field_unit */   ),
  /* field_unit */   'locked' => 0,
  /* field_unit */   'module' => 'field_collection',
  /* field_unit */   'settings' => array(
  /* field_unit */     'hide_blank_items' => 1,
  /* field_unit */     'hide_initial_item' => FALSE,
  /* field_unit */     'path' => '',
  /* field_unit */   ),
  /* field_unit */   'translatable' => 0,
  /* field_unit */   'type' => 'field_collection',
  /* field_unit */ );

  return $field_bases;
}
