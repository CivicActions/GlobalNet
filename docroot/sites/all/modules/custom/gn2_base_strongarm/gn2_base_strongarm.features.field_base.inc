<?php
/**
 * @file
 * gn2_base_strongarm.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function gn2_base_strongarm_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_group_leader'.
  $field_bases['field_group_leader'] = array(
  /* field_group_leader */   'active' => 1,
  /* field_group_leader */   'cardinality' => -1,
  /* field_group_leader */   'deleted' => 0,
  /* field_group_leader */   'entity_types' => array(),
  /* field_group_leader */   'field_name' => 'field_group_leader',
  /* field_group_leader */   'indexes' => array(
  /* field_group_leader */     'target_id' => array(
  /* field_group_leader */       0 => 'target_id',
  /* field_group_leader */     ),
  /* field_group_leader */   ),
  /* field_group_leader */   'locked' => 0,
  /* field_group_leader */   'module' => 'entityreference',
  /* field_group_leader */   'settings' => array(
  /* field_group_leader */     'handler' => 'base',
  /* field_group_leader */     'handler_settings' => array(
  /* field_group_leader */       'behaviors' => array(
  /* field_group_leader */         'views-select-list' => array(
  /* field_group_leader */           'status' => 0,
  /* field_group_leader */         ),
  /* field_group_leader */       ),
  /* field_group_leader */       'sort' => array(
  /* field_group_leader */         'type' => 'none',
  /* field_group_leader */       ),
  /* field_group_leader */       'target_bundles' => array(),
  /* field_group_leader */     ),
  /* field_group_leader */     'target_type' => 'user',
  /* field_group_leader */   ),
  /* field_group_leader */   'translatable' => 0,
  /* field_group_leader */   'type' => 'entityreference',
  /* field_group_leader */ );

  return $field_bases;
}
