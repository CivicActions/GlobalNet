<?php
/**
 * @file
 * gn2_library.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function gn2_library_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_link'.
  $field_bases['field_link'] = array(
  /* field_link */   'active' => 1,
  /* field_link */   'cardinality' => 1,
  /* field_link */   'deleted' => 0,
  /* field_link */   'entity_types' => array(),
  /* field_link */   'field_name' => 'field_link',
  /* field_link */   'indexes' => array(),
  /* field_link */   'locked' => 0,
  /* field_link */   'module' => 'link',
  /* field_link */   'settings' => array(
  /* field_link */     'attributes' => array(
  /* field_link */       'class' => '',
  /* field_link */       'rel' => '',
  /* field_link */       'target' => 'default',
  /* field_link */     ),
  /* field_link */     'display' => array(
  /* field_link */       'url_cutoff' => 80,
  /* field_link */     ),
  /* field_link */     'enable_tokens' => 1,
  /* field_link */     'title' => 'optional',
  /* field_link */     'title_maxlength' => 128,
  /* field_link */     'title_value' => '',
  /* field_link */     'url' => 0,
  /* field_link */   ),
  /* field_link */   'translatable' => 0,
  /* field_link */   'type' => 'link_field',
  /* field_link */ );

  // Exported field_base: 'field_resource_category'.
  $field_bases['field_resource_category'] = array(
  /* field_resource_category */   'active' => 1,
  /* field_resource_category */   'cardinality' => -1,
  /* field_resource_category */   'deleted' => 0,
  /* field_resource_category */   'entity_types' => array(),
  /* field_resource_category */   'field_name' => 'field_resource_category',
  /* field_resource_category */   'indexes' => array(
  /* field_resource_category */     'tid' => array(
  /* field_resource_category */       0 => 'tid',
  /* field_resource_category */     ),
  /* field_resource_category */   ),
  /* field_resource_category */   'locked' => 0,
  /* field_resource_category */   'module' => 'taxonomy',
  /* field_resource_category */   'settings' => array(
  /* field_resource_category */     'allowed_values' => array(
  /* field_resource_category */       0 => array(
  /* field_resource_category */         'vocabulary' => 'resource_category',
  /* field_resource_category */         'parent' => 0,
  /* field_resource_category */       ),
  /* field_resource_category */     ),
  /* field_resource_category */   ),
  /* field_resource_category */   'translatable' => 0,
  /* field_resource_category */   'type' => 'taxonomy_term_reference',
  /* field_resource_category */ );

  // Exported field_base: 'field_resource_description'.
  $field_bases['field_resource_description'] = array(
  /* field_resource_description */   'active' => 1,
  /* field_resource_description */   'cardinality' => 1,
  /* field_resource_description */   'deleted' => 0,
  /* field_resource_description */   'entity_types' => array(),
  /* field_resource_description */   'field_name' => 'field_resource_description',
  /* field_resource_description */   'indexes' => array(
  /* field_resource_description */     'format' => array(
  /* field_resource_description */       0 => 'format',
  /* field_resource_description */     ),
  /* field_resource_description */   ),
  /* field_resource_description */   'locked' => 0,
  /* field_resource_description */   'module' => 'text',
  /* field_resource_description */   'settings' => array(),
  /* field_resource_description */   'translatable' => 0,
  /* field_resource_description */   'type' => 'text_long',
  /* field_resource_description */ );

  // Exported field_base: 'field_resource_language'.
  $field_bases['field_resource_language'] = array(
  /* field_resource_language */   'active' => 1,
  /* field_resource_language */   'cardinality' => -1,
  /* field_resource_language */   'deleted' => 0,
  /* field_resource_language */   'entity_types' => array(),
  /* field_resource_language */   'field_name' => 'field_resource_language',
  /* field_resource_language */   'indexes' => array(
  /* field_resource_language */     'tid' => array(
  /* field_resource_language */       0 => 'tid',
  /* field_resource_language */     ),
  /* field_resource_language */   ),
  /* field_resource_language */   'locked' => 0,
  /* field_resource_language */   'module' => 'taxonomy',
  /* field_resource_language */   'settings' => array(
  /* field_resource_language */     'allowed_values' => array(
  /* field_resource_language */       0 => array(
  /* field_resource_language */         'vocabulary' => 'resource_language',
  /* field_resource_language */         'parent' => 0,
  /* field_resource_language */       ),
  /* field_resource_language */     ),
  /* field_resource_language */   ),
  /* field_resource_language */   'translatable' => 0,
  /* field_resource_language */   'type' => 'taxonomy_term_reference',
  /* field_resource_language */ );

  // Exported field_base: 'field_resource_tags'.
  $field_bases['field_resource_tags'] = array(
  /* field_resource_tags */   'active' => 1,
  /* field_resource_tags */   'cardinality' => -1,
  /* field_resource_tags */   'deleted' => 0,
  /* field_resource_tags */   'entity_types' => array(),
  /* field_resource_tags */   'field_name' => 'field_resource_tags',
  /* field_resource_tags */   'indexes' => array(
  /* field_resource_tags */     'tid' => array(
  /* field_resource_tags */       0 => 'tid',
  /* field_resource_tags */     ),
  /* field_resource_tags */   ),
  /* field_resource_tags */   'locked' => 0,
  /* field_resource_tags */   'module' => 'taxonomy',
  /* field_resource_tags */   'settings' => array(
  /* field_resource_tags */     'allowed_values' => array(
  /* field_resource_tags */       0 => array(
  /* field_resource_tags */         'vocabulary' => 'resources',
  /* field_resource_tags */         'parent' => 0,
  /* field_resource_tags */       ),
  /* field_resource_tags */     ),
  /* field_resource_tags */   ),
  /* field_resource_tags */   'translatable' => 0,
  /* field_resource_tags */   'type' => 'taxonomy_term_reference',
  /* field_resource_tags */ );

  // Exported field_base: 'field_resource_thumbnail'.
  $field_bases['field_resource_thumbnail'] = array(
  /* field_resource_thumbnail */   'active' => 1,
  /* field_resource_thumbnail */   'cardinality' => 1,
  /* field_resource_thumbnail */   'deleted' => 0,
  /* field_resource_thumbnail */   'entity_types' => array(),
  /* field_resource_thumbnail */   'field_name' => 'field_resource_thumbnail',
  /* field_resource_thumbnail */   'indexes' => array(
  /* field_resource_thumbnail */     'fid' => array(
  /* field_resource_thumbnail */       0 => 'fid',
  /* field_resource_thumbnail */     ),
  /* field_resource_thumbnail */   ),
  /* field_resource_thumbnail */   'locked' => 0,
  /* field_resource_thumbnail */   'module' => 'image',
  /* field_resource_thumbnail */   'settings' => array(
  /* field_resource_thumbnail */     'default_image' => 0,
  /* field_resource_thumbnail */     'uri_scheme' => 'private',
  /* field_resource_thumbnail */   ),
  /* field_resource_thumbnail */   'translatable' => 0,
  /* field_resource_thumbnail */   'type' => 'image',
  /* field_resource_thumbnail */ );

  // Exported field_base: 'field_resource_type'.
  $field_bases['field_resource_type'] = array(
  /* field_resource_type */   'active' => 1,
  /* field_resource_type */   'cardinality' => -1,
  /* field_resource_type */   'deleted' => 0,
  /* field_resource_type */   'entity_types' => array(),
  /* field_resource_type */   'field_name' => 'field_resource_type',
  /* field_resource_type */   'indexes' => array(
  /* field_resource_type */     'tid' => array(
  /* field_resource_type */       0 => 'tid',
  /* field_resource_type */     ),
  /* field_resource_type */   ),
  /* field_resource_type */   'locked' => 0,
  /* field_resource_type */   'module' => 'taxonomy',
  /* field_resource_type */   'settings' => array(
  /* field_resource_type */     'allowed_values' => array(
  /* field_resource_type */       0 => array(
  /* field_resource_type */         'vocabulary' => 'resource_type',
  /* field_resource_type */         'parent' => 0,
  /* field_resource_type */       ),
  /* field_resource_type */     ),
  /* field_resource_type */   ),
  /* field_resource_type */   'translatable' => 0,
  /* field_resource_type */   'type' => 'taxonomy_term_reference',
  /* field_resource_type */ );

  return $field_bases;
}
