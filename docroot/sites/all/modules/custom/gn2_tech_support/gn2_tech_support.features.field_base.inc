<?php
/**
 * @file
 * gn2_tech_support.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function gn2_tech_support_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_how_can_we_help_you_'.
  $field_bases['field_how_can_we_help_you_'] = array(
  /* field_how_can_we_help_you_ */   'active' => 1,
  /* field_how_can_we_help_you_ */   'cardinality' => 1,
  /* field_how_can_we_help_you_ */   'deleted' => 0,
  /* field_how_can_we_help_you_ */   'entity_types' => array(),
  /* field_how_can_we_help_you_ */   'field_name' => 'field_how_can_we_help_you_',
  /* field_how_can_we_help_you_ */   'indexes' => array(
  /* field_how_can_we_help_you_ */     'value' => array(
  /* field_how_can_we_help_you_ */       0 => 'value',
  /* field_how_can_we_help_you_ */     ),
  /* field_how_can_we_help_you_ */   ),
  /* field_how_can_we_help_you_ */   'locked' => 0,
  /* field_how_can_we_help_you_ */   'module' => 'list',
  /* field_how_can_we_help_you_ */   'settings' => array(
  /* field_how_can_we_help_you_ */     'allowed_values' => array(
  /* field_how_can_we_help_you_ */       1 => 'I have a problem with my password',
  /* field_how_can_we_help_you_ */       2 => 'I forgot my username',
  /* field_how_can_we_help_you_ */       3 => 'My account has been blocked',
  /* field_how_can_we_help_you_ */       4 => 'I need access to a specific group, course or information',
  /* field_how_can_we_help_you_ */       5 => 'I would like to schedule a specific training',
  /* field_how_can_we_help_you_ */       6 => 'Other',
  /* field_how_can_we_help_you_ */     ),
  /* field_how_can_we_help_you_ */     'allowed_values_function' => '',
  /* field_how_can_we_help_you_ */   ),
  /* field_how_can_we_help_you_ */   'translatable' => 0,
  /* field_how_can_we_help_you_ */   'type' => 'list_text',
  /* field_how_can_we_help_you_ */ );

  // Exported field_base: 'field_notified_to'.
  $field_bases['field_notified_to'] = array(
  /* field_notified_to */   'active' => 1,
  /* field_notified_to */   'cardinality' => 1,
  /* field_notified_to */   'deleted' => 0,
  /* field_notified_to */   'entity_types' => array(),
  /* field_notified_to */   'field_name' => 'field_notified_to',
  /* field_notified_to */   'indexes' => array(
  /* field_notified_to */     'format' => array(
  /* field_notified_to */       0 => 'format',
  /* field_notified_to */     ),
  /* field_notified_to */   ),
  /* field_notified_to */   'locked' => 0,
  /* field_notified_to */   'module' => 'text',
  /* field_notified_to */   'settings' => array(),
  /* field_notified_to */   'translatable' => 0,
  /* field_notified_to */   'type' => 'text_long',
  /* field_notified_to */ );

  return $field_bases;
}
