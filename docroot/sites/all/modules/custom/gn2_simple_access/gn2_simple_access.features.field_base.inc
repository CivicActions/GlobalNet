<?php
/**
 * @file
 * gn2_simple_access.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function gn2_simple_access_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_gn2_simple_access'.
  $field_bases['field_gn2_simple_access'] = array(
  /* field_gn2_simple_access */   'active' => 1,
  /* field_gn2_simple_access */   'cardinality' => 1,
  /* field_gn2_simple_access */   'deleted' => 0,
  /* field_gn2_simple_access */   'entity_types' => array(),
  /* field_gn2_simple_access */   'field_name' => 'field_gn2_simple_access',
  /* field_gn2_simple_access */   'indexes' => array(
  /* field_gn2_simple_access */     'value' => array(
  /* field_gn2_simple_access */       0 => 'value',
  /* field_gn2_simple_access */     ),
  /* field_gn2_simple_access */   ),
  /* field_gn2_simple_access */   'locked' => 0,
  /* field_gn2_simple_access */   'module' => 'list',
  /* field_gn2_simple_access */   'settings' => array(
  /* field_gn2_simple_access */     'allowed_values' => array(
  /* field_gn2_simple_access */       'group' => '<strong>Group</strong><small> - Can be viewed only by members of the group.</small>',
  /* field_gn2_simple_access */       'organization' => '<strong>Organization</strong><small> - Can be viewed by a member of the Organization.</small>',
  /* field_gn2_simple_access */       'sitewide' => '<strong>Sitewide</strong><small> - Can be viewed by anyone with a GlobalNET account.</small>',
  /* field_gn2_simple_access */       'public' => '<strong>Public</strong><small> - Can be viewed by anyone on the World Wide Web.</small>',
  /* field_gn2_simple_access */     ),
  /* field_gn2_simple_access */     'allowed_values_function' => '',
  /* field_gn2_simple_access */   ),
  /* field_gn2_simple_access */   'translatable' => 0,
  /* field_gn2_simple_access */   'type' => 'list_text',
  /* field_gn2_simple_access */ );

  return $field_bases;
}
