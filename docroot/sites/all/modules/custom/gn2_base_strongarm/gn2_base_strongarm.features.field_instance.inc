<?php
/**
 * @file
 * gn2_base_strongarm.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function gn2_base_strongarm_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-group-field_group_leader'.
  $field_instances['node-group-field_group_leader'] = array(
  /* node-group-field_group_leader */   'bundle' => 'group',
  /* node-group-field_group_leader */   'default_value' => NULL,
  /* node-group-field_group_leader */   'default_value_function' => '',
  /* node-group-field_group_leader */   'deleted' => 0,
  /* node-group-field_group_leader */   'description' => '',
  /* node-group-field_group_leader */   'display' => array(
  /* node-group-field_group_leader */     'default' => array(
  /* node-group-field_group_leader */       'label' => 'above',
  /* node-group-field_group_leader */       'module' => 'entityreference',
  /* node-group-field_group_leader */       'settings' => array(
  /* node-group-field_group_leader */         'field_formatter_class' => '',
  /* node-group-field_group_leader */         'link' => FALSE,
  /* node-group-field_group_leader */       ),
  /* node-group-field_group_leader */       'type' => 'entityreference_label',
  /* node-group-field_group_leader */       'weight' => 21,
  /* node-group-field_group_leader */     ),
  /* node-group-field_group_leader */     'group_teaser' => array(
  /* node-group-field_group_leader */       'label' => 'above',
  /* node-group-field_group_leader */       'settings' => array(),
  /* node-group-field_group_leader */       'type' => 'hidden',
  /* node-group-field_group_leader */       'weight' => 0,
  /* node-group-field_group_leader */     ),
  /* node-group-field_group_leader */     'one_column_teaser' => array(
  /* node-group-field_group_leader */       'label' => 'above',
  /* node-group-field_group_leader */       'settings' => array(),
  /* node-group-field_group_leader */       'type' => 'hidden',
  /* node-group-field_group_leader */       'weight' => 0,
  /* node-group-field_group_leader */     ),
  /* node-group-field_group_leader */     'search_teaser' => array(
  /* node-group-field_group_leader */       'label' => 'above',
  /* node-group-field_group_leader */       'settings' => array(),
  /* node-group-field_group_leader */       'type' => 'hidden',
  /* node-group-field_group_leader */       'weight' => 0,
  /* node-group-field_group_leader */     ),
  /* node-group-field_group_leader */     'sidebar_' => array(
  /* node-group-field_group_leader */       'label' => 'above',
  /* node-group-field_group_leader */       'settings' => array(),
  /* node-group-field_group_leader */       'type' => 'hidden',
  /* node-group-field_group_leader */       'weight' => 0,
  /* node-group-field_group_leader */     ),
  /* node-group-field_group_leader */     'sidebar_teaser_v2' => array(
  /* node-group-field_group_leader */       'label' => 'above',
  /* node-group-field_group_leader */       'settings' => array(),
  /* node-group-field_group_leader */       'type' => 'hidden',
  /* node-group-field_group_leader */       'weight' => 0,
  /* node-group-field_group_leader */     ),
  /* node-group-field_group_leader */     'teaser' => array(
  /* node-group-field_group_leader */       'label' => 'above',
  /* node-group-field_group_leader */       'settings' => array(),
  /* node-group-field_group_leader */       'type' => 'hidden',
  /* node-group-field_group_leader */       'weight' => 0,
  /* node-group-field_group_leader */     ),
  /* node-group-field_group_leader */     'teaserthumb' => array(
  /* node-group-field_group_leader */       'label' => 'above',
  /* node-group-field_group_leader */       'settings' => array(),
  /* node-group-field_group_leader */       'type' => 'hidden',
  /* node-group-field_group_leader */       'weight' => 0,
  /* node-group-field_group_leader */     ),
  /* node-group-field_group_leader */   ),
  /* node-group-field_group_leader */   'entity_type' => 'node',
  /* node-group-field_group_leader */   'fences_wrapper' => 'div',
  /* node-group-field_group_leader */   'field_name' => 'field_group_leader',
  /* node-group-field_group_leader */   'label' => 'Group Leader',
  /* node-group-field_group_leader */   'required' => 0,
  /* node-group-field_group_leader */   'settings' => array(
  /* node-group-field_group_leader */     'behaviors' => array(
  /* node-group-field_group_leader */       'prepopulate' => array(
  /* node-group-field_group_leader */         'status' => 0,
  /* node-group-field_group_leader */       ),
  /* node-group-field_group_leader */     ),
  /* node-group-field_group_leader */     'user_register_form' => FALSE,
  /* node-group-field_group_leader */   ),
  /* node-group-field_group_leader */   'widget' => array(
  /* node-group-field_group_leader */     'active' => 1,
  /* node-group-field_group_leader */     'module' => 'entityreference',
  /* node-group-field_group_leader */     'settings' => array(
  /* node-group-field_group_leader */       'match_operator' => 'CONTAINS',
  /* node-group-field_group_leader */       'path' => '',
  /* node-group-field_group_leader */       'size' => 60,
  /* node-group-field_group_leader */     ),
  /* node-group-field_group_leader */     'type' => 'entityreference_autocomplete',
  /* node-group-field_group_leader */     'weight' => 3,
  /* node-group-field_group_leader */   ),
  /* node-group-field_group_leader */ );

  // Translatables
  // Included for use with string extractors like potx.
  t('Group Leader');

  return $field_instances;
}
