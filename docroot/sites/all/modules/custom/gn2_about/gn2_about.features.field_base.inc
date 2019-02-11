<?php
/**
 * @file
 * gn2_about.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function gn2_about_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_instagram'.
  $field_bases['field_instagram'] = array(
  /* field_instagram */   'active' => 1,
  /* field_instagram */   'cardinality' => 1,
  /* field_instagram */   'deleted' => 0,
  /* field_instagram */   'entity_types' => array(),
  /* field_instagram */   'field_name' => 'field_instagram',
  /* field_instagram */   'indexes' => array(
  /* field_instagram */     'format' => array(
  /* field_instagram */       0 => 'format',
  /* field_instagram */     ),
  /* field_instagram */   ),
  /* field_instagram */   'locked' => 0,
  /* field_instagram */   'module' => 'text',
  /* field_instagram */   'settings' => array(
  /* field_instagram */     'max_length' => 255,
  /* field_instagram */   ),
  /* field_instagram */   'translatable' => 0,
  /* field_instagram */   'type' => 'text',
  /* field_instagram */ );

  return $field_bases;
}
