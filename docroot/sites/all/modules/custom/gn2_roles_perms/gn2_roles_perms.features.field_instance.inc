<?php
/**
 * @file
 * gn2_roles_perms.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function gn2_roles_perms_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-alumni_group-body'
  $field_instances['node-alumni_group-body'] = array(
  /* node-alumni_group-body */   'bundle' => 'alumni_group',
  /* node-alumni_group-body */   'default_value' => NULL,
  /* node-alumni_group-body */   'deleted' => 0,
  /* node-alumni_group-body */   'description' => '',
  /* node-alumni_group-body */   'display' => array(
  /* node-alumni_group-body */     'default' => array(
  /* node-alumni_group-body */       'label' => 'above',
  /* node-alumni_group-body */       'module' => 'text',
  /* node-alumni_group-body */       'settings' => array(
  /* node-alumni_group-body */         'field_formatter_class' => '',
  /* node-alumni_group-body */       ),
  /* node-alumni_group-body */       'type' => 'text_default',
  /* node-alumni_group-body */       'weight' => 12,
  /* node-alumni_group-body */     ),
  /* node-alumni_group-body */     'search_teaser' => array(
  /* node-alumni_group-body */       'label' => 'above',
  /* node-alumni_group-body */       'settings' => array(),
  /* node-alumni_group-body */       'type' => 'hidden',
  /* node-alumni_group-body */       'weight' => 0,
  /* node-alumni_group-body */     ),
  /* node-alumni_group-body */     'sidebar_' => array(
  /* node-alumni_group-body */       'label' => 'above',
  /* node-alumni_group-body */       'settings' => array(),
  /* node-alumni_group-body */       'type' => 'hidden',
  /* node-alumni_group-body */       'weight' => 0,
  /* node-alumni_group-body */     ),
  /* node-alumni_group-body */     'sidebar_teaser_v2' => array(
  /* node-alumni_group-body */       'label' => 'above',
  /* node-alumni_group-body */       'settings' => array(),
  /* node-alumni_group-body */       'type' => 'hidden',
  /* node-alumni_group-body */       'weight' => 0,
  /* node-alumni_group-body */     ),
  /* node-alumni_group-body */     'teaser' => array(
  /* node-alumni_group-body */       'label' => 'above',
  /* node-alumni_group-body */       'settings' => array(),
  /* node-alumni_group-body */       'type' => 'hidden',
  /* node-alumni_group-body */       'weight' => 0,
  /* node-alumni_group-body */     ),
  /* node-alumni_group-body */     'teaserthumb' => array(
  /* node-alumni_group-body */       'label' => 'above',
  /* node-alumni_group-body */       'settings' => array(),
  /* node-alumni_group-body */       'type' => 'hidden',
  /* node-alumni_group-body */       'weight' => 0,
  /* node-alumni_group-body */     ),
  /* node-alumni_group-body */   ),
  /* node-alumni_group-body */   'entity_type' => 'node',
  /* node-alumni_group-body */   'fences_wrapper' => 'no_wrapper',
  /* node-alumni_group-body */   'field_name' => 'body',
  /* node-alumni_group-body */   'label' => 'Body',
  /* node-alumni_group-body */   'required' => 0,
  /* node-alumni_group-body */   'settings' => array(
  /* node-alumni_group-body */     'display_summary' => 0,
  /* node-alumni_group-body */     'text_processing' => 1,
  /* node-alumni_group-body */     'user_field_privacy' => FALSE,
  /* node-alumni_group-body */     'user_register_form' => FALSE,
  /* node-alumni_group-body */   ),
  /* node-alumni_group-body */   'widget' => array(
  /* node-alumni_group-body */     'active' => 1,
  /* node-alumni_group-body */     'module' => 'text',
  /* node-alumni_group-body */     'settings' => array(
  /* node-alumni_group-body */       'label_help_description' => '',
  /* node-alumni_group-body */       'rows' => 20,
  /* node-alumni_group-body */       'summary_rows' => 5,
  /* node-alumni_group-body */     ),
  /* node-alumni_group-body */     'type' => 'text_textarea_with_summary',
  /* node-alumni_group-body */     'weight' => 4,
  /* node-alumni_group-body */   ),
  /* node-alumni_group-body */ );

  // Translatables
  // Included for use with string extractors like potx.
  t('Body');

  return $field_instances;
}
