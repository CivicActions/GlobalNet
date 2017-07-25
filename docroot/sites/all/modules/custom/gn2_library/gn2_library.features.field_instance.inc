<?php
/**
 * @file
 * gn2_library.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function gn2_library_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-resource_item-field_link'.
  $field_instances['node-resource_item-field_link'] = array(
  /* node-resource_item-field_link */   'bundle' => 'resource_item',
  /* node-resource_item-field_link */   'default_value' => NULL,
  /* node-resource_item-field_link */   'deleted' => 0,
  /* node-resource_item-field_link */   'description' => '',
  /* node-resource_item-field_link */   'display' => array(
  /* node-resource_item-field_link */     'default' => array(
  /* node-resource_item-field_link */       'label' => 'hidden',
  /* node-resource_item-field_link */       'module' => 'link',
  /* node-resource_item-field_link */       'settings' => array(
  /* node-resource_item-field_link */         'field_formatter_class' => '',
  /* node-resource_item-field_link */       ),
  /* node-resource_item-field_link */       'type' => 'link_default',
  /* node-resource_item-field_link */       'weight' => 1,
  /* node-resource_item-field_link */     ),
  /* node-resource_item-field_link */     'events_list' => array(
  /* node-resource_item-field_link */       'label' => 'above',
  /* node-resource_item-field_link */       'settings' => array(),
  /* node-resource_item-field_link */       'type' => 'hidden',
  /* node-resource_item-field_link */       'weight' => 0,
  /* node-resource_item-field_link */     ),
  /* node-resource_item-field_link */     'featured_publication' => array(
  /* node-resource_item-field_link */       'label' => 'above',
  /* node-resource_item-field_link */       'settings' => array(),
  /* node-resource_item-field_link */       'type' => 'hidden',
  /* node-resource_item-field_link */       'weight' => 0,
  /* node-resource_item-field_link */     ),
  /* node-resource_item-field_link */     'group_teaser' => array(
  /* node-resource_item-field_link */       'label' => 'above',
  /* node-resource_item-field_link */       'settings' => array(),
  /* node-resource_item-field_link */       'type' => 'hidden',
  /* node-resource_item-field_link */       'weight' => 0,
  /* node-resource_item-field_link */     ),
  /* node-resource_item-field_link */     'one_column_teaser' => array(
  /* node-resource_item-field_link */       'label' => 'above',
  /* node-resource_item-field_link */       'settings' => array(),
  /* node-resource_item-field_link */       'type' => 'hidden',
  /* node-resource_item-field_link */       'weight' => 0,
  /* node-resource_item-field_link */     ),
  /* node-resource_item-field_link */     'post_teaser_group_landing_page' => array(
  /* node-resource_item-field_link */       'label' => 'above',
  /* node-resource_item-field_link */       'settings' => array(),
  /* node-resource_item-field_link */       'type' => 'hidden',
  /* node-resource_item-field_link */       'weight' => 0,
  /* node-resource_item-field_link */     ),
  /* node-resource_item-field_link */     'search_teaser' => array(
  /* node-resource_item-field_link */       'label' => 'above',
  /* node-resource_item-field_link */       'settings' => array(),
  /* node-resource_item-field_link */       'type' => 'hidden',
  /* node-resource_item-field_link */       'weight' => 0,
  /* node-resource_item-field_link */     ),
  /* node-resource_item-field_link */     'sidebar_' => array(
  /* node-resource_item-field_link */       'label' => 'above',
  /* node-resource_item-field_link */       'settings' => array(),
  /* node-resource_item-field_link */       'type' => 'hidden',
  /* node-resource_item-field_link */       'weight' => 0,
  /* node-resource_item-field_link */     ),
  /* node-resource_item-field_link */     'sidebar_teaser_v2' => array(
  /* node-resource_item-field_link */       'label' => 'above',
  /* node-resource_item-field_link */       'settings' => array(),
  /* node-resource_item-field_link */       'type' => 'hidden',
  /* node-resource_item-field_link */       'weight' => 0,
  /* node-resource_item-field_link */     ),
  /* node-resource_item-field_link */     'teaser' => array(
  /* node-resource_item-field_link */       'label' => 'above',
  /* node-resource_item-field_link */       'settings' => array(),
  /* node-resource_item-field_link */       'type' => 'hidden',
  /* node-resource_item-field_link */       'weight' => 0,
  /* node-resource_item-field_link */     ),
  /* node-resource_item-field_link */     'teaserthumb' => array(
  /* node-resource_item-field_link */       'label' => 'above',
  /* node-resource_item-field_link */       'settings' => array(),
  /* node-resource_item-field_link */       'type' => 'hidden',
  /* node-resource_item-field_link */       'weight' => 0,
  /* node-resource_item-field_link */     ),
  /* node-resource_item-field_link */     'time_and_location' => array(
  /* node-resource_item-field_link */       'label' => 'above',
  /* node-resource_item-field_link */       'settings' => array(),
  /* node-resource_item-field_link */       'type' => 'hidden',
  /* node-resource_item-field_link */       'weight' => 0,
  /* node-resource_item-field_link */     ),
  /* node-resource_item-field_link */     'title_and_time' => array(
  /* node-resource_item-field_link */       'label' => 'above',
  /* node-resource_item-field_link */       'settings' => array(),
  /* node-resource_item-field_link */       'type' => 'hidden',
  /* node-resource_item-field_link */       'weight' => 0,
  /* node-resource_item-field_link */     ),
  /* node-resource_item-field_link */   ),
  /* node-resource_item-field_link */   'entity_type' => 'node',
  /* node-resource_item-field_link */   'fences_wrapper' => 'div',
  /* node-resource_item-field_link */   'field_name' => 'field_link',
  /* node-resource_item-field_link */   'label' => 'Link',
  /* node-resource_item-field_link */   'required' => 0,
  /* node-resource_item-field_link */   'settings' => array(
  /* node-resource_item-field_link */     'absolute_url' => 1,
  /* node-resource_item-field_link */     'attributes' => array(
  /* node-resource_item-field_link */       'class' => '',
  /* node-resource_item-field_link */       'configurable_class' => 0,
  /* node-resource_item-field_link */       'configurable_title' => 0,
  /* node-resource_item-field_link */       'rel' => '',
  /* node-resource_item-field_link */       'target' => 'default',
  /* node-resource_item-field_link */       'title' => '',
  /* node-resource_item-field_link */     ),
  /* node-resource_item-field_link */     'display' => array(
  /* node-resource_item-field_link */       'url_cutoff' => 80,
  /* node-resource_item-field_link */     ),
  /* node-resource_item-field_link */     'enable_tokens' => 1,
  /* node-resource_item-field_link */     'rel_remove' => 'default',
  /* node-resource_item-field_link */     'title' => 'optional',
  /* node-resource_item-field_link */     'title_label_use_field_label' => 0,
  /* node-resource_item-field_link */     'title_maxlength' => 128,
  /* node-resource_item-field_link */     'title_value' => '',
  /* node-resource_item-field_link */     'url' => 0,
  /* node-resource_item-field_link */     'user_register_form' => FALSE,
  /* node-resource_item-field_link */     'validate_url' => 1,
  /* node-resource_item-field_link */   ),
  /* node-resource_item-field_link */   'widget' => array(
  /* node-resource_item-field_link */     'active' => 0,
  /* node-resource_item-field_link */     'module' => 'link',
  /* node-resource_item-field_link */     'settings' => array(),
  /* node-resource_item-field_link */     'type' => 'link_field',
  /* node-resource_item-field_link */     'weight' => 4,
  /* node-resource_item-field_link */   ),
  /* node-resource_item-field_link */ );

  // Exported field_instance: 'node-resource_item-field_resource_category'.
  $field_instances['node-resource_item-field_resource_category'] = array(
  /* node-resource_item-field_resource_category */   'bundle' => 'resource_item',
  /* node-resource_item-field_resource_category */   'default_value' => NULL,
  /* node-resource_item-field_resource_category */   'deleted' => 0,
  /* node-resource_item-field_resource_category */   'description' => 'You may enter multiple values by placing comma at end of each term.',
  /* node-resource_item-field_resource_category */   'display' => array(
  /* node-resource_item-field_resource_category */     'default' => array(
  /* node-resource_item-field_resource_category */       'label' => 'above',
  /* node-resource_item-field_resource_category */       'module' => 'taxonomy',
  /* node-resource_item-field_resource_category */       'settings' => array(
  /* node-resource_item-field_resource_category */         'field_formatter_class' => '',
  /* node-resource_item-field_resource_category */       ),
  /* node-resource_item-field_resource_category */       'type' => 'taxonomy_term_reference_link',
  /* node-resource_item-field_resource_category */       'weight' => 5,
  /* node-resource_item-field_resource_category */     ),
  /* node-resource_item-field_resource_category */     'events_list' => array(
  /* node-resource_item-field_resource_category */       'label' => 'above',
  /* node-resource_item-field_resource_category */       'settings' => array(),
  /* node-resource_item-field_resource_category */       'type' => 'hidden',
  /* node-resource_item-field_resource_category */       'weight' => 0,
  /* node-resource_item-field_resource_category */     ),
  /* node-resource_item-field_resource_category */     'featured_publication' => array(
  /* node-resource_item-field_resource_category */       'label' => 'above',
  /* node-resource_item-field_resource_category */       'settings' => array(),
  /* node-resource_item-field_resource_category */       'type' => 'hidden',
  /* node-resource_item-field_resource_category */       'weight' => 0,
  /* node-resource_item-field_resource_category */     ),
  /* node-resource_item-field_resource_category */     'group_teaser' => array(
  /* node-resource_item-field_resource_category */       'label' => 'above',
  /* node-resource_item-field_resource_category */       'settings' => array(),
  /* node-resource_item-field_resource_category */       'type' => 'hidden',
  /* node-resource_item-field_resource_category */       'weight' => 0,
  /* node-resource_item-field_resource_category */     ),
  /* node-resource_item-field_resource_category */     'one_column_teaser' => array(
  /* node-resource_item-field_resource_category */       'label' => 'above',
  /* node-resource_item-field_resource_category */       'settings' => array(),
  /* node-resource_item-field_resource_category */       'type' => 'hidden',
  /* node-resource_item-field_resource_category */       'weight' => 0,
  /* node-resource_item-field_resource_category */     ),
  /* node-resource_item-field_resource_category */     'post_teaser_group_landing_page' => array(
  /* node-resource_item-field_resource_category */       'label' => 'above',
  /* node-resource_item-field_resource_category */       'settings' => array(),
  /* node-resource_item-field_resource_category */       'type' => 'hidden',
  /* node-resource_item-field_resource_category */       'weight' => 0,
  /* node-resource_item-field_resource_category */     ),
  /* node-resource_item-field_resource_category */     'search_teaser' => array(
  /* node-resource_item-field_resource_category */       'label' => 'above',
  /* node-resource_item-field_resource_category */       'settings' => array(),
  /* node-resource_item-field_resource_category */       'type' => 'hidden',
  /* node-resource_item-field_resource_category */       'weight' => 0,
  /* node-resource_item-field_resource_category */     ),
  /* node-resource_item-field_resource_category */     'sidebar_' => array(
  /* node-resource_item-field_resource_category */       'label' => 'above',
  /* node-resource_item-field_resource_category */       'settings' => array(),
  /* node-resource_item-field_resource_category */       'type' => 'hidden',
  /* node-resource_item-field_resource_category */       'weight' => 0,
  /* node-resource_item-field_resource_category */     ),
  /* node-resource_item-field_resource_category */     'sidebar_teaser_v2' => array(
  /* node-resource_item-field_resource_category */       'label' => 'above',
  /* node-resource_item-field_resource_category */       'settings' => array(),
  /* node-resource_item-field_resource_category */       'type' => 'hidden',
  /* node-resource_item-field_resource_category */       'weight' => 0,
  /* node-resource_item-field_resource_category */     ),
  /* node-resource_item-field_resource_category */     'teaser' => array(
  /* node-resource_item-field_resource_category */       'label' => 'above',
  /* node-resource_item-field_resource_category */       'settings' => array(),
  /* node-resource_item-field_resource_category */       'type' => 'hidden',
  /* node-resource_item-field_resource_category */       'weight' => 0,
  /* node-resource_item-field_resource_category */     ),
  /* node-resource_item-field_resource_category */     'teaserthumb' => array(
  /* node-resource_item-field_resource_category */       'label' => 'above',
  /* node-resource_item-field_resource_category */       'settings' => array(),
  /* node-resource_item-field_resource_category */       'type' => 'hidden',
  /* node-resource_item-field_resource_category */       'weight' => 0,
  /* node-resource_item-field_resource_category */     ),
  /* node-resource_item-field_resource_category */     'time_and_location' => array(
  /* node-resource_item-field_resource_category */       'label' => 'above',
  /* node-resource_item-field_resource_category */       'settings' => array(),
  /* node-resource_item-field_resource_category */       'type' => 'hidden',
  /* node-resource_item-field_resource_category */       'weight' => 0,
  /* node-resource_item-field_resource_category */     ),
  /* node-resource_item-field_resource_category */     'title_and_time' => array(
  /* node-resource_item-field_resource_category */       'label' => 'above',
  /* node-resource_item-field_resource_category */       'settings' => array(),
  /* node-resource_item-field_resource_category */       'type' => 'hidden',
  /* node-resource_item-field_resource_category */       'weight' => 0,
  /* node-resource_item-field_resource_category */     ),
  /* node-resource_item-field_resource_category */   ),
  /* node-resource_item-field_resource_category */   'entity_type' => 'node',
  /* node-resource_item-field_resource_category */   'fences_wrapper' => 'div',
  /* node-resource_item-field_resource_category */   'field_name' => 'field_resource_category',
  /* node-resource_item-field_resource_category */   'label' => 'Resource Category',
  /* node-resource_item-field_resource_category */   'required' => 1,
  /* node-resource_item-field_resource_category */   'settings' => array(
  /* node-resource_item-field_resource_category */     'user_register_form' => FALSE,
  /* node-resource_item-field_resource_category */   ),
  /* node-resource_item-field_resource_category */   'widget' => array(
  /* node-resource_item-field_resource_category */     'active' => 0,
  /* node-resource_item-field_resource_category */     'module' => 'taxonomy',
  /* node-resource_item-field_resource_category */     'settings' => array(
  /* node-resource_item-field_resource_category */       'autocomplete_path' => 'taxonomy/autocomplete',
  /* node-resource_item-field_resource_category */       'size' => 60,
  /* node-resource_item-field_resource_category */     ),
  /* node-resource_item-field_resource_category */     'type' => 'taxonomy_autocomplete',
  /* node-resource_item-field_resource_category */     'weight' => 6,
  /* node-resource_item-field_resource_category */   ),
  /* node-resource_item-field_resource_category */ );

  // Exported field_instance: 'node-resource_item-field_resource_description'.
  $field_instances['node-resource_item-field_resource_description'] = array(
  /* node-resource_item-field_resource_description */   'bundle' => 'resource_item',
  /* node-resource_item-field_resource_description */   'default_value' => NULL,
  /* node-resource_item-field_resource_description */   'deleted' => 0,
  /* node-resource_item-field_resource_description */   'description' => '',
  /* node-resource_item-field_resource_description */   'display' => array(
  /* node-resource_item-field_resource_description */     'default' => array(
  /* node-resource_item-field_resource_description */       'label' => 'hidden',
  /* node-resource_item-field_resource_description */       'module' => 'text',
  /* node-resource_item-field_resource_description */       'settings' => array(
  /* node-resource_item-field_resource_description */         'field_formatter_class' => '',
  /* node-resource_item-field_resource_description */       ),
  /* node-resource_item-field_resource_description */       'type' => 'text_default',
  /* node-resource_item-field_resource_description */       'weight' => 2,
  /* node-resource_item-field_resource_description */     ),
  /* node-resource_item-field_resource_description */     'events_list' => array(
  /* node-resource_item-field_resource_description */       'label' => 'above',
  /* node-resource_item-field_resource_description */       'settings' => array(),
  /* node-resource_item-field_resource_description */       'type' => 'hidden',
  /* node-resource_item-field_resource_description */       'weight' => 0,
  /* node-resource_item-field_resource_description */     ),
  /* node-resource_item-field_resource_description */     'featured_publication' => array(
  /* node-resource_item-field_resource_description */       'label' => 'above',
  /* node-resource_item-field_resource_description */       'settings' => array(),
  /* node-resource_item-field_resource_description */       'type' => 'hidden',
  /* node-resource_item-field_resource_description */       'weight' => 0,
  /* node-resource_item-field_resource_description */     ),
  /* node-resource_item-field_resource_description */     'group_teaser' => array(
  /* node-resource_item-field_resource_description */       'label' => 'above',
  /* node-resource_item-field_resource_description */       'settings' => array(),
  /* node-resource_item-field_resource_description */       'type' => 'hidden',
  /* node-resource_item-field_resource_description */       'weight' => 0,
  /* node-resource_item-field_resource_description */     ),
  /* node-resource_item-field_resource_description */     'one_column_teaser' => array(
  /* node-resource_item-field_resource_description */       'label' => 'above',
  /* node-resource_item-field_resource_description */       'settings' => array(),
  /* node-resource_item-field_resource_description */       'type' => 'hidden',
  /* node-resource_item-field_resource_description */       'weight' => 0,
  /* node-resource_item-field_resource_description */     ),
  /* node-resource_item-field_resource_description */     'post_teaser_group_landing_page' => array(
  /* node-resource_item-field_resource_description */       'label' => 'above',
  /* node-resource_item-field_resource_description */       'settings' => array(),
  /* node-resource_item-field_resource_description */       'type' => 'hidden',
  /* node-resource_item-field_resource_description */       'weight' => 0,
  /* node-resource_item-field_resource_description */     ),
  /* node-resource_item-field_resource_description */     'search_teaser' => array(
  /* node-resource_item-field_resource_description */       'label' => 'above',
  /* node-resource_item-field_resource_description */       'settings' => array(),
  /* node-resource_item-field_resource_description */       'type' => 'hidden',
  /* node-resource_item-field_resource_description */       'weight' => 0,
  /* node-resource_item-field_resource_description */     ),
  /* node-resource_item-field_resource_description */     'sidebar_' => array(
  /* node-resource_item-field_resource_description */       'label' => 'above',
  /* node-resource_item-field_resource_description */       'settings' => array(),
  /* node-resource_item-field_resource_description */       'type' => 'hidden',
  /* node-resource_item-field_resource_description */       'weight' => 0,
  /* node-resource_item-field_resource_description */     ),
  /* node-resource_item-field_resource_description */     'sidebar_teaser_v2' => array(
  /* node-resource_item-field_resource_description */       'label' => 'above',
  /* node-resource_item-field_resource_description */       'settings' => array(),
  /* node-resource_item-field_resource_description */       'type' => 'hidden',
  /* node-resource_item-field_resource_description */       'weight' => 0,
  /* node-resource_item-field_resource_description */     ),
  /* node-resource_item-field_resource_description */     'teaser' => array(
  /* node-resource_item-field_resource_description */       'label' => 'above',
  /* node-resource_item-field_resource_description */       'settings' => array(),
  /* node-resource_item-field_resource_description */       'type' => 'hidden',
  /* node-resource_item-field_resource_description */       'weight' => 0,
  /* node-resource_item-field_resource_description */     ),
  /* node-resource_item-field_resource_description */     'teaserthumb' => array(
  /* node-resource_item-field_resource_description */       'label' => 'above',
  /* node-resource_item-field_resource_description */       'settings' => array(),
  /* node-resource_item-field_resource_description */       'type' => 'hidden',
  /* node-resource_item-field_resource_description */       'weight' => 0,
  /* node-resource_item-field_resource_description */     ),
  /* node-resource_item-field_resource_description */     'time_and_location' => array(
  /* node-resource_item-field_resource_description */       'label' => 'above',
  /* node-resource_item-field_resource_description */       'settings' => array(),
  /* node-resource_item-field_resource_description */       'type' => 'hidden',
  /* node-resource_item-field_resource_description */       'weight' => 0,
  /* node-resource_item-field_resource_description */     ),
  /* node-resource_item-field_resource_description */     'title_and_time' => array(
  /* node-resource_item-field_resource_description */       'label' => 'above',
  /* node-resource_item-field_resource_description */       'settings' => array(),
  /* node-resource_item-field_resource_description */       'type' => 'hidden',
  /* node-resource_item-field_resource_description */       'weight' => 0,
  /* node-resource_item-field_resource_description */     ),
  /* node-resource_item-field_resource_description */   ),
  /* node-resource_item-field_resource_description */   'entity_type' => 'node',
  /* node-resource_item-field_resource_description */   'fences_wrapper' => 'div',
  /* node-resource_item-field_resource_description */   'field_name' => 'field_resource_description',
  /* node-resource_item-field_resource_description */   'label' => 'Resource Description',
  /* node-resource_item-field_resource_description */   'required' => 0,
  /* node-resource_item-field_resource_description */   'settings' => array(
  /* node-resource_item-field_resource_description */     'better_formats' => array(
  /* node-resource_item-field_resource_description */       'allowed_formats' => array(
  /* node-resource_item-field_resource_description */         'filtered_html' => 'filtered_html',
  /* node-resource_item-field_resource_description */         'full_html' => 'full_html',
  /* node-resource_item-field_resource_description */         'php_code' => 'php_code',
  /* node-resource_item-field_resource_description */         'plain_text' => 'plain_text',
  /* node-resource_item-field_resource_description */         'sessions_wysiwyg' => 'sessions_wysiwyg',
  /* node-resource_item-field_resource_description */       ),
  /* node-resource_item-field_resource_description */       'allowed_formats_toggle' => 0,
  /* node-resource_item-field_resource_description */       'default_order_toggle' => 0,
  /* node-resource_item-field_resource_description */       'default_order_wrapper' => array(
  /* node-resource_item-field_resource_description */         'formats' => array(
  /* node-resource_item-field_resource_description */           'filtered_html' => array(
  /* node-resource_item-field_resource_description */             'weight' => -10,
  /* node-resource_item-field_resource_description */           ),
  /* node-resource_item-field_resource_description */           'full_html' => array(
  /* node-resource_item-field_resource_description */             'weight' => -8,
  /* node-resource_item-field_resource_description */           ),
  /* node-resource_item-field_resource_description */           'php_code' => array(
  /* node-resource_item-field_resource_description */             'weight' => -7,
  /* node-resource_item-field_resource_description */           ),
  /* node-resource_item-field_resource_description */           'plain_text' => array(
  /* node-resource_item-field_resource_description */             'weight' => -9,
  /* node-resource_item-field_resource_description */           ),
  /* node-resource_item-field_resource_description */           'sessions_wysiwyg' => array(
  /* node-resource_item-field_resource_description */             'weight' => 0,
  /* node-resource_item-field_resource_description */           ),
  /* node-resource_item-field_resource_description */         ),
  /* node-resource_item-field_resource_description */       ),
  /* node-resource_item-field_resource_description */     ),
  /* node-resource_item-field_resource_description */     'text_processing' => 1,
  /* node-resource_item-field_resource_description */     'user_register_form' => FALSE,
  /* node-resource_item-field_resource_description */   ),
  /* node-resource_item-field_resource_description */   'widget' => array(
  /* node-resource_item-field_resource_description */     'active' => 1,
  /* node-resource_item-field_resource_description */     'module' => 'text',
  /* node-resource_item-field_resource_description */     'settings' => array(
  /* node-resource_item-field_resource_description */       'rows' => 5,
  /* node-resource_item-field_resource_description */     ),
  /* node-resource_item-field_resource_description */     'type' => 'text_textarea',
  /* node-resource_item-field_resource_description */     'weight' => 1,
  /* node-resource_item-field_resource_description */   ),
  /* node-resource_item-field_resource_description */ );

  // Exported field_instance: 'node-resource_item-field_resource_language'.
  $field_instances['node-resource_item-field_resource_language'] = array(
  /* node-resource_item-field_resource_language */   'bundle' => 'resource_item',
  /* node-resource_item-field_resource_language */   'default_value' => NULL,
  /* node-resource_item-field_resource_language */   'deleted' => 0,
  /* node-resource_item-field_resource_language */   'description' => '',
  /* node-resource_item-field_resource_language */   'display' => array(
  /* node-resource_item-field_resource_language */     'default' => array(
  /* node-resource_item-field_resource_language */       'label' => 'above',
  /* node-resource_item-field_resource_language */       'module' => 'taxonomy',
  /* node-resource_item-field_resource_language */       'settings' => array(
  /* node-resource_item-field_resource_language */         'field_formatter_class' => '',
  /* node-resource_item-field_resource_language */       ),
  /* node-resource_item-field_resource_language */       'type' => 'taxonomy_term_reference_link',
  /* node-resource_item-field_resource_language */       'weight' => 7,
  /* node-resource_item-field_resource_language */     ),
  /* node-resource_item-field_resource_language */     'events_list' => array(
  /* node-resource_item-field_resource_language */       'label' => 'above',
  /* node-resource_item-field_resource_language */       'settings' => array(),
  /* node-resource_item-field_resource_language */       'type' => 'hidden',
  /* node-resource_item-field_resource_language */       'weight' => 0,
  /* node-resource_item-field_resource_language */     ),
  /* node-resource_item-field_resource_language */     'featured_publication' => array(
  /* node-resource_item-field_resource_language */       'label' => 'above',
  /* node-resource_item-field_resource_language */       'settings' => array(),
  /* node-resource_item-field_resource_language */       'type' => 'hidden',
  /* node-resource_item-field_resource_language */       'weight' => 0,
  /* node-resource_item-field_resource_language */     ),
  /* node-resource_item-field_resource_language */     'group_teaser' => array(
  /* node-resource_item-field_resource_language */       'label' => 'above',
  /* node-resource_item-field_resource_language */       'settings' => array(),
  /* node-resource_item-field_resource_language */       'type' => 'hidden',
  /* node-resource_item-field_resource_language */       'weight' => 0,
  /* node-resource_item-field_resource_language */     ),
  /* node-resource_item-field_resource_language */     'one_column_teaser' => array(
  /* node-resource_item-field_resource_language */       'label' => 'above',
  /* node-resource_item-field_resource_language */       'settings' => array(),
  /* node-resource_item-field_resource_language */       'type' => 'hidden',
  /* node-resource_item-field_resource_language */       'weight' => 0,
  /* node-resource_item-field_resource_language */     ),
  /* node-resource_item-field_resource_language */     'post_teaser_group_landing_page' => array(
  /* node-resource_item-field_resource_language */       'label' => 'above',
  /* node-resource_item-field_resource_language */       'settings' => array(),
  /* node-resource_item-field_resource_language */       'type' => 'hidden',
  /* node-resource_item-field_resource_language */       'weight' => 0,
  /* node-resource_item-field_resource_language */     ),
  /* node-resource_item-field_resource_language */     'search_teaser' => array(
  /* node-resource_item-field_resource_language */       'label' => 'above',
  /* node-resource_item-field_resource_language */       'settings' => array(),
  /* node-resource_item-field_resource_language */       'type' => 'hidden',
  /* node-resource_item-field_resource_language */       'weight' => 0,
  /* node-resource_item-field_resource_language */     ),
  /* node-resource_item-field_resource_language */     'sidebar_' => array(
  /* node-resource_item-field_resource_language */       'label' => 'above',
  /* node-resource_item-field_resource_language */       'settings' => array(),
  /* node-resource_item-field_resource_language */       'type' => 'hidden',
  /* node-resource_item-field_resource_language */       'weight' => 0,
  /* node-resource_item-field_resource_language */     ),
  /* node-resource_item-field_resource_language */     'sidebar_teaser_v2' => array(
  /* node-resource_item-field_resource_language */       'label' => 'above',
  /* node-resource_item-field_resource_language */       'settings' => array(),
  /* node-resource_item-field_resource_language */       'type' => 'hidden',
  /* node-resource_item-field_resource_language */       'weight' => 0,
  /* node-resource_item-field_resource_language */     ),
  /* node-resource_item-field_resource_language */     'teaser' => array(
  /* node-resource_item-field_resource_language */       'label' => 'above',
  /* node-resource_item-field_resource_language */       'settings' => array(),
  /* node-resource_item-field_resource_language */       'type' => 'hidden',
  /* node-resource_item-field_resource_language */       'weight' => 0,
  /* node-resource_item-field_resource_language */     ),
  /* node-resource_item-field_resource_language */     'teaserthumb' => array(
  /* node-resource_item-field_resource_language */       'label' => 'above',
  /* node-resource_item-field_resource_language */       'settings' => array(),
  /* node-resource_item-field_resource_language */       'type' => 'hidden',
  /* node-resource_item-field_resource_language */       'weight' => 0,
  /* node-resource_item-field_resource_language */     ),
  /* node-resource_item-field_resource_language */     'time_and_location' => array(
  /* node-resource_item-field_resource_language */       'label' => 'above',
  /* node-resource_item-field_resource_language */       'settings' => array(),
  /* node-resource_item-field_resource_language */       'type' => 'hidden',
  /* node-resource_item-field_resource_language */       'weight' => 0,
  /* node-resource_item-field_resource_language */     ),
  /* node-resource_item-field_resource_language */     'title_and_time' => array(
  /* node-resource_item-field_resource_language */       'label' => 'above',
  /* node-resource_item-field_resource_language */       'settings' => array(),
  /* node-resource_item-field_resource_language */       'type' => 'hidden',
  /* node-resource_item-field_resource_language */       'weight' => 0,
  /* node-resource_item-field_resource_language */     ),
  /* node-resource_item-field_resource_language */   ),
  /* node-resource_item-field_resource_language */   'entity_type' => 'node',
  /* node-resource_item-field_resource_language */   'fences_wrapper' => 'div',
  /* node-resource_item-field_resource_language */   'field_name' => 'field_resource_language',
  /* node-resource_item-field_resource_language */   'label' => 'Resource Language',
  /* node-resource_item-field_resource_language */   'required' => 0,
  /* node-resource_item-field_resource_language */   'settings' => array(
  /* node-resource_item-field_resource_language */     'user_register_form' => FALSE,
  /* node-resource_item-field_resource_language */   ),
  /* node-resource_item-field_resource_language */   'widget' => array(
  /* node-resource_item-field_resource_language */     'active' => 0,
  /* node-resource_item-field_resource_language */     'module' => 'taxonomy',
  /* node-resource_item-field_resource_language */     'settings' => array(
  /* node-resource_item-field_resource_language */       'autocomplete_path' => 'taxonomy/autocomplete',
  /* node-resource_item-field_resource_language */       'size' => 60,
  /* node-resource_item-field_resource_language */     ),
  /* node-resource_item-field_resource_language */     'type' => 'taxonomy_autocomplete',
  /* node-resource_item-field_resource_language */     'weight' => 9,
  /* node-resource_item-field_resource_language */   ),
  /* node-resource_item-field_resource_language */ );

  // Exported field_instance: 'node-resource_item-field_resource_tags'.
  $field_instances['node-resource_item-field_resource_tags'] = array(
  /* node-resource_item-field_resource_tags */   'bundle' => 'resource_item',
  /* node-resource_item-field_resource_tags */   'default_value' => NULL,
  /* node-resource_item-field_resource_tags */   'deleted' => 0,
  /* node-resource_item-field_resource_tags */   'description' => 'You may enter multiple values by placing comma at end of each term.',
  /* node-resource_item-field_resource_tags */   'display' => array(
  /* node-resource_item-field_resource_tags */     'default' => array(
  /* node-resource_item-field_resource_tags */       'label' => 'above',
  /* node-resource_item-field_resource_tags */       'module' => 'taxonomy',
  /* node-resource_item-field_resource_tags */       'settings' => array(
  /* node-resource_item-field_resource_tags */         'field_formatter_class' => '',
  /* node-resource_item-field_resource_tags */       ),
  /* node-resource_item-field_resource_tags */       'type' => 'taxonomy_term_reference_link',
  /* node-resource_item-field_resource_tags */       'weight' => 3,
  /* node-resource_item-field_resource_tags */     ),
  /* node-resource_item-field_resource_tags */     'events_list' => array(
  /* node-resource_item-field_resource_tags */       'label' => 'above',
  /* node-resource_item-field_resource_tags */       'settings' => array(),
  /* node-resource_item-field_resource_tags */       'type' => 'hidden',
  /* node-resource_item-field_resource_tags */       'weight' => 0,
  /* node-resource_item-field_resource_tags */     ),
  /* node-resource_item-field_resource_tags */     'featured_publication' => array(
  /* node-resource_item-field_resource_tags */       'label' => 'above',
  /* node-resource_item-field_resource_tags */       'settings' => array(),
  /* node-resource_item-field_resource_tags */       'type' => 'hidden',
  /* node-resource_item-field_resource_tags */       'weight' => 0,
  /* node-resource_item-field_resource_tags */     ),
  /* node-resource_item-field_resource_tags */     'group_teaser' => array(
  /* node-resource_item-field_resource_tags */       'label' => 'above',
  /* node-resource_item-field_resource_tags */       'settings' => array(),
  /* node-resource_item-field_resource_tags */       'type' => 'hidden',
  /* node-resource_item-field_resource_tags */       'weight' => 0,
  /* node-resource_item-field_resource_tags */     ),
  /* node-resource_item-field_resource_tags */     'one_column_teaser' => array(
  /* node-resource_item-field_resource_tags */       'label' => 'above',
  /* node-resource_item-field_resource_tags */       'settings' => array(),
  /* node-resource_item-field_resource_tags */       'type' => 'hidden',
  /* node-resource_item-field_resource_tags */       'weight' => 0,
  /* node-resource_item-field_resource_tags */     ),
  /* node-resource_item-field_resource_tags */     'post_teaser_group_landing_page' => array(
  /* node-resource_item-field_resource_tags */       'label' => 'above',
  /* node-resource_item-field_resource_tags */       'settings' => array(),
  /* node-resource_item-field_resource_tags */       'type' => 'hidden',
  /* node-resource_item-field_resource_tags */       'weight' => 0,
  /* node-resource_item-field_resource_tags */     ),
  /* node-resource_item-field_resource_tags */     'search_teaser' => array(
  /* node-resource_item-field_resource_tags */       'label' => 'above',
  /* node-resource_item-field_resource_tags */       'settings' => array(),
  /* node-resource_item-field_resource_tags */       'type' => 'hidden',
  /* node-resource_item-field_resource_tags */       'weight' => 0,
  /* node-resource_item-field_resource_tags */     ),
  /* node-resource_item-field_resource_tags */     'sidebar_' => array(
  /* node-resource_item-field_resource_tags */       'label' => 'above',
  /* node-resource_item-field_resource_tags */       'settings' => array(),
  /* node-resource_item-field_resource_tags */       'type' => 'hidden',
  /* node-resource_item-field_resource_tags */       'weight' => 0,
  /* node-resource_item-field_resource_tags */     ),
  /* node-resource_item-field_resource_tags */     'sidebar_teaser_v2' => array(
  /* node-resource_item-field_resource_tags */       'label' => 'above',
  /* node-resource_item-field_resource_tags */       'settings' => array(),
  /* node-resource_item-field_resource_tags */       'type' => 'hidden',
  /* node-resource_item-field_resource_tags */       'weight' => 0,
  /* node-resource_item-field_resource_tags */     ),
  /* node-resource_item-field_resource_tags */     'teaser' => array(
  /* node-resource_item-field_resource_tags */       'label' => 'above',
  /* node-resource_item-field_resource_tags */       'settings' => array(),
  /* node-resource_item-field_resource_tags */       'type' => 'hidden',
  /* node-resource_item-field_resource_tags */       'weight' => 0,
  /* node-resource_item-field_resource_tags */     ),
  /* node-resource_item-field_resource_tags */     'teaserthumb' => array(
  /* node-resource_item-field_resource_tags */       'label' => 'above',
  /* node-resource_item-field_resource_tags */       'settings' => array(),
  /* node-resource_item-field_resource_tags */       'type' => 'hidden',
  /* node-resource_item-field_resource_tags */       'weight' => 0,
  /* node-resource_item-field_resource_tags */     ),
  /* node-resource_item-field_resource_tags */     'time_and_location' => array(
  /* node-resource_item-field_resource_tags */       'label' => 'above',
  /* node-resource_item-field_resource_tags */       'settings' => array(),
  /* node-resource_item-field_resource_tags */       'type' => 'hidden',
  /* node-resource_item-field_resource_tags */       'weight' => 0,
  /* node-resource_item-field_resource_tags */     ),
  /* node-resource_item-field_resource_tags */     'title_and_time' => array(
  /* node-resource_item-field_resource_tags */       'label' => 'above',
  /* node-resource_item-field_resource_tags */       'settings' => array(),
  /* node-resource_item-field_resource_tags */       'type' => 'hidden',
  /* node-resource_item-field_resource_tags */       'weight' => 0,
  /* node-resource_item-field_resource_tags */     ),
  /* node-resource_item-field_resource_tags */   ),
  /* node-resource_item-field_resource_tags */   'entity_type' => 'node',
  /* node-resource_item-field_resource_tags */   'fences_wrapper' => 'div',
  /* node-resource_item-field_resource_tags */   'field_name' => 'field_resource_tags',
  /* node-resource_item-field_resource_tags */   'label' => 'Resource Topic',
  /* node-resource_item-field_resource_tags */   'required' => 1,
  /* node-resource_item-field_resource_tags */   'settings' => array(
  /* node-resource_item-field_resource_tags */     'user_register_form' => FALSE,
  /* node-resource_item-field_resource_tags */   ),
  /* node-resource_item-field_resource_tags */   'widget' => array(
  /* node-resource_item-field_resource_tags */     'active' => 0,
  /* node-resource_item-field_resource_tags */     'module' => 'taxonomy',
  /* node-resource_item-field_resource_tags */     'settings' => array(
  /* node-resource_item-field_resource_tags */       'autocomplete_path' => 'taxonomy/autocomplete',
  /* node-resource_item-field_resource_tags */       'size' => 60,
  /* node-resource_item-field_resource_tags */     ),
  /* node-resource_item-field_resource_tags */     'type' => 'taxonomy_autocomplete',
  /* node-resource_item-field_resource_tags */     'weight' => 5,
  /* node-resource_item-field_resource_tags */   ),
  /* node-resource_item-field_resource_tags */ );

  // Exported field_instance: 'node-resource_item-field_resource_type'.
  $field_instances['node-resource_item-field_resource_type'] = array(
  /* node-resource_item-field_resource_type */   'bundle' => 'resource_item',
  /* node-resource_item-field_resource_type */   'default_value' => NULL,
  /* node-resource_item-field_resource_type */   'deleted' => 0,
  /* node-resource_item-field_resource_type */   'description' => 'You may enter multiple values by placing comma at end of each term.',
  /* node-resource_item-field_resource_type */   'display' => array(
  /* node-resource_item-field_resource_type */     'default' => array(
  /* node-resource_item-field_resource_type */       'label' => 'above',
  /* node-resource_item-field_resource_type */       'module' => 'taxonomy',
  /* node-resource_item-field_resource_type */       'settings' => array(
  /* node-resource_item-field_resource_type */         'field_formatter_class' => '',
  /* node-resource_item-field_resource_type */       ),
  /* node-resource_item-field_resource_type */       'type' => 'taxonomy_term_reference_link',
  /* node-resource_item-field_resource_type */       'weight' => 6,
  /* node-resource_item-field_resource_type */     ),
  /* node-resource_item-field_resource_type */     'events_list' => array(
  /* node-resource_item-field_resource_type */       'label' => 'above',
  /* node-resource_item-field_resource_type */       'settings' => array(),
  /* node-resource_item-field_resource_type */       'type' => 'hidden',
  /* node-resource_item-field_resource_type */       'weight' => 0,
  /* node-resource_item-field_resource_type */     ),
  /* node-resource_item-field_resource_type */     'featured_publication' => array(
  /* node-resource_item-field_resource_type */       'label' => 'above',
  /* node-resource_item-field_resource_type */       'settings' => array(),
  /* node-resource_item-field_resource_type */       'type' => 'hidden',
  /* node-resource_item-field_resource_type */       'weight' => 0,
  /* node-resource_item-field_resource_type */     ),
  /* node-resource_item-field_resource_type */     'group_teaser' => array(
  /* node-resource_item-field_resource_type */       'label' => 'above',
  /* node-resource_item-field_resource_type */       'settings' => array(),
  /* node-resource_item-field_resource_type */       'type' => 'hidden',
  /* node-resource_item-field_resource_type */       'weight' => 0,
  /* node-resource_item-field_resource_type */     ),
  /* node-resource_item-field_resource_type */     'one_column_teaser' => array(
  /* node-resource_item-field_resource_type */       'label' => 'above',
  /* node-resource_item-field_resource_type */       'settings' => array(),
  /* node-resource_item-field_resource_type */       'type' => 'hidden',
  /* node-resource_item-field_resource_type */       'weight' => 0,
  /* node-resource_item-field_resource_type */     ),
  /* node-resource_item-field_resource_type */     'post_teaser_group_landing_page' => array(
  /* node-resource_item-field_resource_type */       'label' => 'above',
  /* node-resource_item-field_resource_type */       'settings' => array(),
  /* node-resource_item-field_resource_type */       'type' => 'hidden',
  /* node-resource_item-field_resource_type */       'weight' => 0,
  /* node-resource_item-field_resource_type */     ),
  /* node-resource_item-field_resource_type */     'search_teaser' => array(
  /* node-resource_item-field_resource_type */       'label' => 'above',
  /* node-resource_item-field_resource_type */       'settings' => array(),
  /* node-resource_item-field_resource_type */       'type' => 'hidden',
  /* node-resource_item-field_resource_type */       'weight' => 0,
  /* node-resource_item-field_resource_type */     ),
  /* node-resource_item-field_resource_type */     'sidebar_' => array(
  /* node-resource_item-field_resource_type */       'label' => 'above',
  /* node-resource_item-field_resource_type */       'settings' => array(),
  /* node-resource_item-field_resource_type */       'type' => 'hidden',
  /* node-resource_item-field_resource_type */       'weight' => 0,
  /* node-resource_item-field_resource_type */     ),
  /* node-resource_item-field_resource_type */     'sidebar_teaser_v2' => array(
  /* node-resource_item-field_resource_type */       'label' => 'above',
  /* node-resource_item-field_resource_type */       'settings' => array(),
  /* node-resource_item-field_resource_type */       'type' => 'hidden',
  /* node-resource_item-field_resource_type */       'weight' => 0,
  /* node-resource_item-field_resource_type */     ),
  /* node-resource_item-field_resource_type */     'teaser' => array(
  /* node-resource_item-field_resource_type */       'label' => 'above',
  /* node-resource_item-field_resource_type */       'settings' => array(),
  /* node-resource_item-field_resource_type */       'type' => 'hidden',
  /* node-resource_item-field_resource_type */       'weight' => 0,
  /* node-resource_item-field_resource_type */     ),
  /* node-resource_item-field_resource_type */     'teaserthumb' => array(
  /* node-resource_item-field_resource_type */       'label' => 'above',
  /* node-resource_item-field_resource_type */       'settings' => array(),
  /* node-resource_item-field_resource_type */       'type' => 'hidden',
  /* node-resource_item-field_resource_type */       'weight' => 0,
  /* node-resource_item-field_resource_type */     ),
  /* node-resource_item-field_resource_type */     'time_and_location' => array(
  /* node-resource_item-field_resource_type */       'label' => 'above',
  /* node-resource_item-field_resource_type */       'settings' => array(),
  /* node-resource_item-field_resource_type */       'type' => 'hidden',
  /* node-resource_item-field_resource_type */       'weight' => 0,
  /* node-resource_item-field_resource_type */     ),
  /* node-resource_item-field_resource_type */     'title_and_time' => array(
  /* node-resource_item-field_resource_type */       'label' => 'above',
  /* node-resource_item-field_resource_type */       'settings' => array(),
  /* node-resource_item-field_resource_type */       'type' => 'hidden',
  /* node-resource_item-field_resource_type */       'weight' => 0,
  /* node-resource_item-field_resource_type */     ),
  /* node-resource_item-field_resource_type */   ),
  /* node-resource_item-field_resource_type */   'entity_type' => 'node',
  /* node-resource_item-field_resource_type */   'fences_wrapper' => 'div',
  /* node-resource_item-field_resource_type */   'field_name' => 'field_resource_type',
  /* node-resource_item-field_resource_type */   'label' => 'Resource Type',
  /* node-resource_item-field_resource_type */   'required' => 1,
  /* node-resource_item-field_resource_type */   'settings' => array(
  /* node-resource_item-field_resource_type */     'user_register_form' => FALSE,
  /* node-resource_item-field_resource_type */   ),
  /* node-resource_item-field_resource_type */   'widget' => array(
  /* node-resource_item-field_resource_type */     'active' => 0,
  /* node-resource_item-field_resource_type */     'module' => 'taxonomy',
  /* node-resource_item-field_resource_type */     'settings' => array(
  /* node-resource_item-field_resource_type */       'autocomplete_path' => 'taxonomy/autocomplete',
  /* node-resource_item-field_resource_type */       'size' => 60,
  /* node-resource_item-field_resource_type */     ),
  /* node-resource_item-field_resource_type */     'type' => 'taxonomy_autocomplete',
  /* node-resource_item-field_resource_type */     'weight' => 7,
  /* node-resource_item-field_resource_type */   ),
  /* node-resource_item-field_resource_type */ );

  // Exported field_instance: 'node-resource_item-og_group_ref'.
  $field_instances['node-resource_item-og_group_ref'] = array(
  /* node-resource_item-og_group_ref */   'bundle' => 'resource_item',
  /* node-resource_item-og_group_ref */   'default_value' => NULL,
  /* node-resource_item-og_group_ref */   'default_value_function' => 'entityreference_prepopulate_field_default_value',
  /* node-resource_item-og_group_ref */   'deleted' => 0,
  /* node-resource_item-og_group_ref */   'description' => '',
  /* node-resource_item-og_group_ref */   'display' => array(
  /* node-resource_item-og_group_ref */     'default' => array(
  /* node-resource_item-og_group_ref */       'label' => 'above',
  /* node-resource_item-og_group_ref */       'settings' => array(),
  /* node-resource_item-og_group_ref */       'type' => 'hidden',
  /* node-resource_item-og_group_ref */       'weight' => 4,
  /* node-resource_item-og_group_ref */     ),
  /* node-resource_item-og_group_ref */     'events_list' => array(
  /* node-resource_item-og_group_ref */       'label' => 'above',
  /* node-resource_item-og_group_ref */       'settings' => array(),
  /* node-resource_item-og_group_ref */       'type' => 'hidden',
  /* node-resource_item-og_group_ref */       'weight' => 0,
  /* node-resource_item-og_group_ref */     ),
  /* node-resource_item-og_group_ref */     'featured_publication' => array(
  /* node-resource_item-og_group_ref */       'label' => 'above',
  /* node-resource_item-og_group_ref */       'settings' => array(),
  /* node-resource_item-og_group_ref */       'type' => 'hidden',
  /* node-resource_item-og_group_ref */       'weight' => 0,
  /* node-resource_item-og_group_ref */     ),
  /* node-resource_item-og_group_ref */     'group_teaser' => array(
  /* node-resource_item-og_group_ref */       'label' => 'above',
  /* node-resource_item-og_group_ref */       'settings' => array(),
  /* node-resource_item-og_group_ref */       'type' => 'hidden',
  /* node-resource_item-og_group_ref */       'weight' => 0,
  /* node-resource_item-og_group_ref */     ),
  /* node-resource_item-og_group_ref */     'one_column_teaser' => array(
  /* node-resource_item-og_group_ref */       'label' => 'above',
  /* node-resource_item-og_group_ref */       'settings' => array(),
  /* node-resource_item-og_group_ref */       'type' => 'hidden',
  /* node-resource_item-og_group_ref */       'weight' => 0,
  /* node-resource_item-og_group_ref */     ),
  /* node-resource_item-og_group_ref */     'post_teaser_group_landing_page' => array(
  /* node-resource_item-og_group_ref */       'label' => 'above',
  /* node-resource_item-og_group_ref */       'settings' => array(),
  /* node-resource_item-og_group_ref */       'type' => 'hidden',
  /* node-resource_item-og_group_ref */       'weight' => 0,
  /* node-resource_item-og_group_ref */     ),
  /* node-resource_item-og_group_ref */     'search_teaser' => array(
  /* node-resource_item-og_group_ref */       'label' => 'above',
  /* node-resource_item-og_group_ref */       'settings' => array(),
  /* node-resource_item-og_group_ref */       'type' => 'hidden',
  /* node-resource_item-og_group_ref */       'weight' => 0,
  /* node-resource_item-og_group_ref */     ),
  /* node-resource_item-og_group_ref */     'sidebar_' => array(
  /* node-resource_item-og_group_ref */       'label' => 'above',
  /* node-resource_item-og_group_ref */       'settings' => array(),
  /* node-resource_item-og_group_ref */       'type' => 'hidden',
  /* node-resource_item-og_group_ref */       'weight' => 0,
  /* node-resource_item-og_group_ref */     ),
  /* node-resource_item-og_group_ref */     'sidebar_teaser_v2' => array(
  /* node-resource_item-og_group_ref */       'label' => 'above',
  /* node-resource_item-og_group_ref */       'settings' => array(),
  /* node-resource_item-og_group_ref */       'type' => 'hidden',
  /* node-resource_item-og_group_ref */       'weight' => 0,
  /* node-resource_item-og_group_ref */     ),
  /* node-resource_item-og_group_ref */     'teaser' => array(
  /* node-resource_item-og_group_ref */       'label' => 'above',
  /* node-resource_item-og_group_ref */       'settings' => array(),
  /* node-resource_item-og_group_ref */       'type' => 'hidden',
  /* node-resource_item-og_group_ref */       'weight' => 0,
  /* node-resource_item-og_group_ref */     ),
  /* node-resource_item-og_group_ref */     'teaserthumb' => array(
  /* node-resource_item-og_group_ref */       'label' => 'above',
  /* node-resource_item-og_group_ref */       'settings' => array(),
  /* node-resource_item-og_group_ref */       'type' => 'hidden',
  /* node-resource_item-og_group_ref */       'weight' => 0,
  /* node-resource_item-og_group_ref */     ),
  /* node-resource_item-og_group_ref */     'time_and_location' => array(
  /* node-resource_item-og_group_ref */       'label' => 'above',
  /* node-resource_item-og_group_ref */       'settings' => array(),
  /* node-resource_item-og_group_ref */       'type' => 'hidden',
  /* node-resource_item-og_group_ref */       'weight' => 0,
  /* node-resource_item-og_group_ref */     ),
  /* node-resource_item-og_group_ref */     'title_and_time' => array(
  /* node-resource_item-og_group_ref */       'label' => 'above',
  /* node-resource_item-og_group_ref */       'settings' => array(),
  /* node-resource_item-og_group_ref */       'type' => 'hidden',
  /* node-resource_item-og_group_ref */       'weight' => 0,
  /* node-resource_item-og_group_ref */     ),
  /* node-resource_item-og_group_ref */   ),
  /* node-resource_item-og_group_ref */   'entity_type' => 'node',
  /* node-resource_item-og_group_ref */   'fences_wrapper' => 'div',
  /* node-resource_item-og_group_ref */   'field_name' => 'og_group_ref',
  /* node-resource_item-og_group_ref */   'label' => 'Groups audience',
  /* node-resource_item-og_group_ref */   'required' => 0,
  /* node-resource_item-og_group_ref */   'settings' => array(
  /* node-resource_item-og_group_ref */     'behaviors' => array(
  /* node-resource_item-og_group_ref */       'og_widget' => array(
  /* node-resource_item-og_group_ref */         'access_override' => 0,
  /* node-resource_item-og_group_ref */         'admin' => array(
  /* node-resource_item-og_group_ref */           'widget_type' => 'options_select',
  /* node-resource_item-og_group_ref */         ),
  /* node-resource_item-og_group_ref */         'default' => array(
  /* node-resource_item-og_group_ref */           'widget_type' => 'options_select',
  /* node-resource_item-og_group_ref */         ),
  /* node-resource_item-og_group_ref */         'status' => TRUE,
  /* node-resource_item-og_group_ref */       ),
  /* node-resource_item-og_group_ref */       'prepopulate' => array(
  /* node-resource_item-og_group_ref */         'action' => 'none',
  /* node-resource_item-og_group_ref */         'action_on_edit' => 0,
  /* node-resource_item-og_group_ref */         'fallback' => 'none',
  /* node-resource_item-og_group_ref */         'providers' => array(
  /* node-resource_item-og_group_ref */           'og_context' => 1,
  /* node-resource_item-og_group_ref */           'url' => 1,
  /* node-resource_item-og_group_ref */         ),
  /* node-resource_item-og_group_ref */         'skip_perm' => 0,
  /* node-resource_item-og_group_ref */         'status' => 1,
  /* node-resource_item-og_group_ref */       ),
  /* node-resource_item-og_group_ref */     ),
  /* node-resource_item-og_group_ref */     'user_register_form' => FALSE,
  /* node-resource_item-og_group_ref */   ),
  /* node-resource_item-og_group_ref */   'widget' => array(
  /* node-resource_item-og_group_ref */     'active' => 0,
  /* node-resource_item-og_group_ref */     'module' => 'og',
  /* node-resource_item-og_group_ref */     'settings' => array(),
  /* node-resource_item-og_group_ref */     'type' => 'og_complex',
  /* node-resource_item-og_group_ref */     'weight' => 8,
  /* node-resource_item-og_group_ref */   ),
  /* node-resource_item-og_group_ref */ );

  // Translatables
  // Included for use with string extractors like potx.
  t('Groups audience');
  t('Link');
  t('Resource Category');
  t('Resource Description');
  t('Resource Language');
  t('Resource Topic');
  t('Resource Type');
  t('You may enter multiple values by placing comma at end of each term.');

  return $field_instances;
}
