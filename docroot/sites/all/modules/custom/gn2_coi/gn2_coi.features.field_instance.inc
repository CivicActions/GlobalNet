<?php
/**
 * @file
 * gn2_coi.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function gn2_coi_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-coi-body'.
  $field_instances['node-coi-body'] = array(
  /* node-coi-body */   'bundle' => 'coi',
  /* node-coi-body */   'default_value' => NULL,
  /* node-coi-body */   'deleted' => 0,
  /* node-coi-body */   'description' => '',
  /* node-coi-body */   'display' => array(
  /* node-coi-body */     'default' => array(
  /* node-coi-body */       'label' => 'hidden',
  /* node-coi-body */       'module' => 'text',
  /* node-coi-body */       'settings' => array(
  /* node-coi-body */         'field_formatter_class' => '',
  /* node-coi-body */       ),
  /* node-coi-body */       'type' => 'text_default',
  /* node-coi-body */       'weight' => 1,
  /* node-coi-body */     ),
  /* node-coi-body */     'events_list' => array(
  /* node-coi-body */       'label' => 'above',
  /* node-coi-body */       'settings' => array(),
  /* node-coi-body */       'type' => 'hidden',
  /* node-coi-body */       'weight' => 0,
  /* node-coi-body */     ),
  /* node-coi-body */     'one_column_teaser' => array(
  /* node-coi-body */       'label' => 'above',
  /* node-coi-body */       'settings' => array(),
  /* node-coi-body */       'type' => 'hidden',
  /* node-coi-body */       'weight' => 0,
  /* node-coi-body */     ),
  /* node-coi-body */     'sidebar_' => array(
  /* node-coi-body */       'label' => 'above',
  /* node-coi-body */       'settings' => array(),
  /* node-coi-body */       'type' => 'hidden',
  /* node-coi-body */       'weight' => 0,
  /* node-coi-body */     ),
  /* node-coi-body */     'sidebar_teaser' => array(
  /* node-coi-body */       'label' => 'above',
  /* node-coi-body */       'settings' => array(),
  /* node-coi-body */       'type' => 'hidden',
  /* node-coi-body */       'weight' => 0,
  /* node-coi-body */     ),
  /* node-coi-body */     'sidebar_teaser_v2' => array(
  /* node-coi-body */       'label' => 'above',
  /* node-coi-body */       'settings' => array(),
  /* node-coi-body */       'type' => 'hidden',
  /* node-coi-body */       'weight' => 0,
  /* node-coi-body */     ),
  /* node-coi-body */     'teaser' => array(
  /* node-coi-body */       'label' => 'hidden',
  /* node-coi-body */       'module' => 'text',
  /* node-coi-body */       'settings' => array(
  /* node-coi-body */         'field_formatter_class' => '',
  /* node-coi-body */         'trim_length' => 600,
  /* node-coi-body */       ),
  /* node-coi-body */       'type' => 'text_summary_or_trimmed',
  /* node-coi-body */       'weight' => 1,
  /* node-coi-body */     ),
  /* node-coi-body */     'teaser_w_thumb_and_search' => array(
  /* node-coi-body */       'label' => 'above',
  /* node-coi-body */       'settings' => array(),
  /* node-coi-body */       'type' => 'hidden',
  /* node-coi-body */       'weight' => 0,
  /* node-coi-body */     ),
  /* node-coi-body */     'teaserthumb' => array(
  /* node-coi-body */       'label' => 'above',
  /* node-coi-body */       'settings' => array(),
  /* node-coi-body */       'type' => 'hidden',
  /* node-coi-body */       'weight' => 0,
  /* node-coi-body */     ),
  /* node-coi-body */     'time_and_location' => array(
  /* node-coi-body */       'label' => 'above',
  /* node-coi-body */       'settings' => array(),
  /* node-coi-body */       'type' => 'hidden',
  /* node-coi-body */       'weight' => 0,
  /* node-coi-body */     ),
  /* node-coi-body */     'title_and_time' => array(
  /* node-coi-body */       'label' => 'above',
  /* node-coi-body */       'settings' => array(),
  /* node-coi-body */       'type' => 'hidden',
  /* node-coi-body */       'weight' => 0,
  /* node-coi-body */     ),
  /* node-coi-body */   ),
  /* node-coi-body */   'entity_type' => 'node',
  /* node-coi-body */   'fences_wrapper' => 'div',
  /* node-coi-body */   'field_name' => 'body',
  /* node-coi-body */   'label' => 'Description',
  /* node-coi-body */   'required' => 0,
  /* node-coi-body */   'settings' => array(
  /* node-coi-body */     'better_formats' => array(
  /* node-coi-body */       'allowed_formats' => array(
  /* node-coi-body */         'filtered_html' => 'filtered_html',
  /* node-coi-body */         'full_html' => 'full_html',
  /* node-coi-body */         'php_code' => 0,
  /* node-coi-body */         'plain_text' => 'plain_text',
  /* node-coi-body */       ),
  /* node-coi-body */       'allowed_formats_toggle' => 1,
  /* node-coi-body */       'default_order_toggle' => 0,
  /* node-coi-body */       'default_order_wrapper' => array(
  /* node-coi-body */         'formats' => array(
  /* node-coi-body */           'filtered_html' => array(
  /* node-coi-body */             'weight' => -10,
  /* node-coi-body */           ),
  /* node-coi-body */           'full_html' => array(
  /* node-coi-body */             'weight' => -8,
  /* node-coi-body */           ),
  /* node-coi-body */           'php_code' => array(
  /* node-coi-body */             'weight' => -7,
  /* node-coi-body */           ),
  /* node-coi-body */           'plain_text' => array(
  /* node-coi-body */             'weight' => -9,
  /* node-coi-body */           ),
  /* node-coi-body */         ),
  /* node-coi-body */       ),
  /* node-coi-body */     ),
  /* node-coi-body */     'display_summary' => 1,
  /* node-coi-body */     'text_processing' => 1,
  /* node-coi-body */     'user_field_privacy' => FALSE,
  /* node-coi-body */     'user_register_form' => FALSE,
  /* node-coi-body */   ),
  /* node-coi-body */   'widget' => array(
  /* node-coi-body */     'active' => 1,
  /* node-coi-body */     'module' => 'text',
  /* node-coi-body */     'settings' => array(
  /* node-coi-body */       'label_help_description' => '',
  /* node-coi-body */       'rows' => 10,
  /* node-coi-body */       'summary_rows' => 5,
  /* node-coi-body */     ),
  /* node-coi-body */     'type' => 'text_textarea_with_summary',
  /* node-coi-body */     'weight' => 9,
  /* node-coi-body */   ),
  /* node-coi-body */ );

  // Exported field_instance: 'node-coi-field_country'.
  $field_instances['node-coi-field_country'] = array(
  /* node-coi-field_country */   'bundle' => 'coi',
  /* node-coi-field_country */   'default_value' => NULL,
  /* node-coi-field_country */   'deleted' => 0,
  /* node-coi-field_country */   'description' => '',
  /* node-coi-field_country */   'display' => array(
  /* node-coi-field_country */     'default' => array(
  /* node-coi-field_country */       'label' => 'above',
  /* node-coi-field_country */       'module' => 'taxonomy',
  /* node-coi-field_country */       'settings' => array(
  /* node-coi-field_country */         'field_formatter_class' => '',
  /* node-coi-field_country */       ),
  /* node-coi-field_country */       'type' => 'taxonomy_term_reference_link',
  /* node-coi-field_country */       'weight' => 9,
  /* node-coi-field_country */     ),
  /* node-coi-field_country */     'events_list' => array(
  /* node-coi-field_country */       'label' => 'above',
  /* node-coi-field_country */       'settings' => array(),
  /* node-coi-field_country */       'type' => 'hidden',
  /* node-coi-field_country */       'weight' => 0,
  /* node-coi-field_country */     ),
  /* node-coi-field_country */     'one_column_teaser' => array(
  /* node-coi-field_country */       'label' => 'above',
  /* node-coi-field_country */       'settings' => array(),
  /* node-coi-field_country */       'type' => 'hidden',
  /* node-coi-field_country */       'weight' => 0,
  /* node-coi-field_country */     ),
  /* node-coi-field_country */     'sidebar_' => array(
  /* node-coi-field_country */       'label' => 'above',
  /* node-coi-field_country */       'settings' => array(),
  /* node-coi-field_country */       'type' => 'hidden',
  /* node-coi-field_country */       'weight' => 0,
  /* node-coi-field_country */     ),
  /* node-coi-field_country */     'sidebar_teaser_v2' => array(
  /* node-coi-field_country */       'label' => 'above',
  /* node-coi-field_country */       'settings' => array(),
  /* node-coi-field_country */       'type' => 'hidden',
  /* node-coi-field_country */       'weight' => 0,
  /* node-coi-field_country */     ),
  /* node-coi-field_country */     'teaser' => array(
  /* node-coi-field_country */       'label' => 'above',
  /* node-coi-field_country */       'settings' => array(),
  /* node-coi-field_country */       'type' => 'hidden',
  /* node-coi-field_country */       'weight' => 0,
  /* node-coi-field_country */     ),
  /* node-coi-field_country */     'teaser_w_thumb_and_search' => array(
  /* node-coi-field_country */       'label' => 'above',
  /* node-coi-field_country */       'settings' => array(),
  /* node-coi-field_country */       'type' => 'hidden',
  /* node-coi-field_country */       'weight' => 0,
  /* node-coi-field_country */     ),
  /* node-coi-field_country */     'teaserthumb' => array(
  /* node-coi-field_country */       'label' => 'above',
  /* node-coi-field_country */       'settings' => array(),
  /* node-coi-field_country */       'type' => 'hidden',
  /* node-coi-field_country */       'weight' => 0,
  /* node-coi-field_country */     ),
  /* node-coi-field_country */     'time_and_location' => array(
  /* node-coi-field_country */       'label' => 'above',
  /* node-coi-field_country */       'settings' => array(),
  /* node-coi-field_country */       'type' => 'hidden',
  /* node-coi-field_country */       'weight' => 0,
  /* node-coi-field_country */     ),
  /* node-coi-field_country */     'title_and_time' => array(
  /* node-coi-field_country */       'label' => 'above',
  /* node-coi-field_country */       'settings' => array(),
  /* node-coi-field_country */       'type' => 'hidden',
  /* node-coi-field_country */       'weight' => 0,
  /* node-coi-field_country */     ),
  /* node-coi-field_country */   ),
  /* node-coi-field_country */   'entity_type' => 'node',
  /* node-coi-field_country */   'fences_wrapper' => 'div',
  /* node-coi-field_country */   'field_name' => 'field_country',
  /* node-coi-field_country */   'label' => 'Countries',
  /* node-coi-field_country */   'required' => 0,
  /* node-coi-field_country */   'settings' => array(
  /* node-coi-field_country */     'user_field_privacy' => FALSE,
  /* node-coi-field_country */     'user_register_form' => FALSE,
  /* node-coi-field_country */   ),
  /* node-coi-field_country */   'widget' => array(
  /* node-coi-field_country */     'active' => 1,
  /* node-coi-field_country */     'module' => 'term_reference_tree',
  /* node-coi-field_country */     'settings' => array(
  /* node-coi-field_country */       'cascading_selection' => 0,
  /* node-coi-field_country */       'filter_view' => '',
  /* node-coi-field_country */       'label_help_description' => '',
  /* node-coi-field_country */       'leaves_only' => 0,
  /* node-coi-field_country */       'max_depth' => '',
  /* node-coi-field_country */       'parent_term_id' => '',
  /* node-coi-field_country */       'select_parents' => 0,
  /* node-coi-field_country */       'start_minimized' => 0,
  /* node-coi-field_country */       'token_display' => '',
  /* node-coi-field_country */       'track_list' => 0,
  /* node-coi-field_country */     ),
  /* node-coi-field_country */     'type' => 'term_reference_tree',
  /* node-coi-field_country */     'weight' => 2,
  /* node-coi-field_country */   ),
  /* node-coi-field_country */ );

  // Exported field_instance: 'node-coi-field_gn2_simple_access'.
  $field_instances['node-coi-field_gn2_simple_access'] = array(
  /* node-coi-field_gn2_simple_access */   'bundle' => 'coi',
  /* node-coi-field_gn2_simple_access */   'default_value' => array(
  /* node-coi-field_gn2_simple_access */     0 => array(
  /* node-coi-field_gn2_simple_access */       'value' => 'organization',
  /* node-coi-field_gn2_simple_access */     ),
  /* node-coi-field_gn2_simple_access */   ),
  /* node-coi-field_gn2_simple_access */   'deleted' => 0,
  /* node-coi-field_gn2_simple_access */   'description' => '',
  /* node-coi-field_gn2_simple_access */   'display' => array(
  /* node-coi-field_gn2_simple_access */     'default' => array(
  /* node-coi-field_gn2_simple_access */       'label' => 'above',
  /* node-coi-field_gn2_simple_access */       'module' => 'list',
  /* node-coi-field_gn2_simple_access */       'settings' => array(
  /* node-coi-field_gn2_simple_access */         'field_formatter_class' => '',
  /* node-coi-field_gn2_simple_access */       ),
  /* node-coi-field_gn2_simple_access */       'type' => 'list_default',
  /* node-coi-field_gn2_simple_access */       'weight' => 13,
  /* node-coi-field_gn2_simple_access */     ),
  /* node-coi-field_gn2_simple_access */     'events_list' => array(
  /* node-coi-field_gn2_simple_access */       'label' => 'above',
  /* node-coi-field_gn2_simple_access */       'settings' => array(),
  /* node-coi-field_gn2_simple_access */       'type' => 'hidden',
  /* node-coi-field_gn2_simple_access */       'weight' => 0,
  /* node-coi-field_gn2_simple_access */     ),
  /* node-coi-field_gn2_simple_access */     'one_column_teaser' => array(
  /* node-coi-field_gn2_simple_access */       'label' => 'above',
  /* node-coi-field_gn2_simple_access */       'settings' => array(),
  /* node-coi-field_gn2_simple_access */       'type' => 'hidden',
  /* node-coi-field_gn2_simple_access */       'weight' => 0,
  /* node-coi-field_gn2_simple_access */     ),
  /* node-coi-field_gn2_simple_access */     'sidebar_' => array(
  /* node-coi-field_gn2_simple_access */       'label' => 'above',
  /* node-coi-field_gn2_simple_access */       'settings' => array(),
  /* node-coi-field_gn2_simple_access */       'type' => 'hidden',
  /* node-coi-field_gn2_simple_access */       'weight' => 0,
  /* node-coi-field_gn2_simple_access */     ),
  /* node-coi-field_gn2_simple_access */     'sidebar_teaser_v2' => array(
  /* node-coi-field_gn2_simple_access */       'label' => 'above',
  /* node-coi-field_gn2_simple_access */       'settings' => array(),
  /* node-coi-field_gn2_simple_access */       'type' => 'hidden',
  /* node-coi-field_gn2_simple_access */       'weight' => 0,
  /* node-coi-field_gn2_simple_access */     ),
  /* node-coi-field_gn2_simple_access */     'teaser' => array(
  /* node-coi-field_gn2_simple_access */       'label' => 'above',
  /* node-coi-field_gn2_simple_access */       'settings' => array(),
  /* node-coi-field_gn2_simple_access */       'type' => 'hidden',
  /* node-coi-field_gn2_simple_access */       'weight' => 0,
  /* node-coi-field_gn2_simple_access */     ),
  /* node-coi-field_gn2_simple_access */     'teaser_w_thumb_and_search' => array(
  /* node-coi-field_gn2_simple_access */       'label' => 'above',
  /* node-coi-field_gn2_simple_access */       'settings' => array(),
  /* node-coi-field_gn2_simple_access */       'type' => 'hidden',
  /* node-coi-field_gn2_simple_access */       'weight' => 0,
  /* node-coi-field_gn2_simple_access */     ),
  /* node-coi-field_gn2_simple_access */     'teaserthumb' => array(
  /* node-coi-field_gn2_simple_access */       'label' => 'above',
  /* node-coi-field_gn2_simple_access */       'settings' => array(),
  /* node-coi-field_gn2_simple_access */       'type' => 'hidden',
  /* node-coi-field_gn2_simple_access */       'weight' => 0,
  /* node-coi-field_gn2_simple_access */     ),
  /* node-coi-field_gn2_simple_access */     'time_and_location' => array(
  /* node-coi-field_gn2_simple_access */       'label' => 'above',
  /* node-coi-field_gn2_simple_access */       'settings' => array(),
  /* node-coi-field_gn2_simple_access */       'type' => 'hidden',
  /* node-coi-field_gn2_simple_access */       'weight' => 0,
  /* node-coi-field_gn2_simple_access */     ),
  /* node-coi-field_gn2_simple_access */     'title_and_time' => array(
  /* node-coi-field_gn2_simple_access */       'label' => 'above',
  /* node-coi-field_gn2_simple_access */       'settings' => array(),
  /* node-coi-field_gn2_simple_access */       'type' => 'hidden',
  /* node-coi-field_gn2_simple_access */       'weight' => 0,
  /* node-coi-field_gn2_simple_access */     ),
  /* node-coi-field_gn2_simple_access */   ),
  /* node-coi-field_gn2_simple_access */   'entity_type' => 'node',
  /* node-coi-field_gn2_simple_access */   'fences_wrapper' => 'div',
  /* node-coi-field_gn2_simple_access */   'field_name' => 'field_gn2_simple_access',
  /* node-coi-field_gn2_simple_access */   'label' => 'Who can see this content?',
  /* node-coi-field_gn2_simple_access */   'required' => 0,
  /* node-coi-field_gn2_simple_access */   'settings' => array(
  /* node-coi-field_gn2_simple_access */     'user_field_privacy' => FALSE,
  /* node-coi-field_gn2_simple_access */     'user_register_form' => FALSE,
  /* node-coi-field_gn2_simple_access */   ),
  /* node-coi-field_gn2_simple_access */   'widget' => array(
  /* node-coi-field_gn2_simple_access */     'active' => 1,
  /* node-coi-field_gn2_simple_access */     'module' => 'options',
  /* node-coi-field_gn2_simple_access */     'settings' => array(
  /* node-coi-field_gn2_simple_access */       'label_help_description' => '',
  /* node-coi-field_gn2_simple_access */     ),
  /* node-coi-field_gn2_simple_access */     'type' => 'options_buttons',
  /* node-coi-field_gn2_simple_access */     'weight' => 17,
  /* node-coi-field_gn2_simple_access */   ),
  /* node-coi-field_gn2_simple_access */ );

  // Exported field_instance: 'node-coi-field_group_help'.
  $field_instances['node-coi-field_group_help'] = array(
  /* node-coi-field_group_help */   'bundle' => 'coi',
  /* node-coi-field_group_help */   'default_value' => NULL,
  /* node-coi-field_group_help */   'deleted' => 0,
  /* node-coi-field_group_help */   'description' => '',
  /* node-coi-field_group_help */   'display' => array(
  /* node-coi-field_group_help */     'default' => array(
  /* node-coi-field_group_help */       'label' => 'above',
  /* node-coi-field_group_help */       'module' => 'text',
  /* node-coi-field_group_help */       'settings' => array(
  /* node-coi-field_group_help */         'field_formatter_class' => '',
  /* node-coi-field_group_help */       ),
  /* node-coi-field_group_help */       'type' => 'text_default',
  /* node-coi-field_group_help */       'weight' => 12,
  /* node-coi-field_group_help */     ),
  /* node-coi-field_group_help */     'events_list' => array(
  /* node-coi-field_group_help */       'label' => 'above',
  /* node-coi-field_group_help */       'settings' => array(),
  /* node-coi-field_group_help */       'type' => 'hidden',
  /* node-coi-field_group_help */       'weight' => 0,
  /* node-coi-field_group_help */     ),
  /* node-coi-field_group_help */     'one_column_teaser' => array(
  /* node-coi-field_group_help */       'label' => 'above',
  /* node-coi-field_group_help */       'settings' => array(),
  /* node-coi-field_group_help */       'type' => 'hidden',
  /* node-coi-field_group_help */       'weight' => 0,
  /* node-coi-field_group_help */     ),
  /* node-coi-field_group_help */     'sidebar_' => array(
  /* node-coi-field_group_help */       'label' => 'above',
  /* node-coi-field_group_help */       'settings' => array(),
  /* node-coi-field_group_help */       'type' => 'hidden',
  /* node-coi-field_group_help */       'weight' => 0,
  /* node-coi-field_group_help */     ),
  /* node-coi-field_group_help */     'sidebar_teaser_v2' => array(
  /* node-coi-field_group_help */       'label' => 'above',
  /* node-coi-field_group_help */       'settings' => array(),
  /* node-coi-field_group_help */       'type' => 'hidden',
  /* node-coi-field_group_help */       'weight' => 0,
  /* node-coi-field_group_help */     ),
  /* node-coi-field_group_help */     'teaser' => array(
  /* node-coi-field_group_help */       'label' => 'above',
  /* node-coi-field_group_help */       'settings' => array(),
  /* node-coi-field_group_help */       'type' => 'hidden',
  /* node-coi-field_group_help */       'weight' => 0,
  /* node-coi-field_group_help */     ),
  /* node-coi-field_group_help */     'teaser_w_thumb_and_search' => array(
  /* node-coi-field_group_help */       'label' => 'above',
  /* node-coi-field_group_help */       'settings' => array(),
  /* node-coi-field_group_help */       'type' => 'hidden',
  /* node-coi-field_group_help */       'weight' => 0,
  /* node-coi-field_group_help */     ),
  /* node-coi-field_group_help */     'teaserthumb' => array(
  /* node-coi-field_group_help */       'label' => 'above',
  /* node-coi-field_group_help */       'settings' => array(),
  /* node-coi-field_group_help */       'type' => 'hidden',
  /* node-coi-field_group_help */       'weight' => 0,
  /* node-coi-field_group_help */     ),
  /* node-coi-field_group_help */     'time_and_location' => array(
  /* node-coi-field_group_help */       'label' => 'above',
  /* node-coi-field_group_help */       'settings' => array(),
  /* node-coi-field_group_help */       'type' => 'hidden',
  /* node-coi-field_group_help */       'weight' => 0,
  /* node-coi-field_group_help */     ),
  /* node-coi-field_group_help */     'title_and_time' => array(
  /* node-coi-field_group_help */       'label' => 'above',
  /* node-coi-field_group_help */       'settings' => array(),
  /* node-coi-field_group_help */       'type' => 'hidden',
  /* node-coi-field_group_help */       'weight' => 0,
  /* node-coi-field_group_help */     ),
  /* node-coi-field_group_help */   ),
  /* node-coi-field_group_help */   'entity_type' => 'node',
  /* node-coi-field_group_help */   'fences_wrapper' => 'div',
  /* node-coi-field_group_help */   'field_name' => 'field_group_help',
  /* node-coi-field_group_help */   'label' => ' Help',
  /* node-coi-field_group_help */   'required' => 0,
  /* node-coi-field_group_help */   'settings' => array(
  /* node-coi-field_group_help */     'better_formats' => array(
  /* node-coi-field_group_help */       'allowed_formats' => array(
  /* node-coi-field_group_help */         'filtered_html' => 'filtered_html',
  /* node-coi-field_group_help */         'full_html' => 'full_html',
  /* node-coi-field_group_help */         'php_code' => 'php_code',
  /* node-coi-field_group_help */         'plain_text' => 'plain_text',
  /* node-coi-field_group_help */       ),
  /* node-coi-field_group_help */       'allowed_formats_toggle' => 0,
  /* node-coi-field_group_help */       'default_order_toggle' => 0,
  /* node-coi-field_group_help */       'default_order_wrapper' => array(
  /* node-coi-field_group_help */         'formats' => array(
  /* node-coi-field_group_help */           'filtered_html' => array(
  /* node-coi-field_group_help */             'weight' => -10,
  /* node-coi-field_group_help */           ),
  /* node-coi-field_group_help */           'full_html' => array(
  /* node-coi-field_group_help */             'weight' => -8,
  /* node-coi-field_group_help */           ),
  /* node-coi-field_group_help */           'php_code' => array(
  /* node-coi-field_group_help */             'weight' => -7,
  /* node-coi-field_group_help */           ),
  /* node-coi-field_group_help */           'plain_text' => array(
  /* node-coi-field_group_help */             'weight' => -9,
  /* node-coi-field_group_help */           ),
  /* node-coi-field_group_help */         ),
  /* node-coi-field_group_help */       ),
  /* node-coi-field_group_help */     ),
  /* node-coi-field_group_help */     'text_processing' => 0,
  /* node-coi-field_group_help */     'user_field_privacy' => FALSE,
  /* node-coi-field_group_help */     'user_register_form' => FALSE,
  /* node-coi-field_group_help */   ),
  /* node-coi-field_group_help */   'widget' => array(
  /* node-coi-field_group_help */     'active' => 1,
  /* node-coi-field_group_help */     'module' => 'text',
  /* node-coi-field_group_help */     'settings' => array(
  /* node-coi-field_group_help */       'label_help_description' => '',
  /* node-coi-field_group_help */       'rows' => 5,
  /* node-coi-field_group_help */     ),
  /* node-coi-field_group_help */     'type' => 'text_textarea',
  /* node-coi-field_group_help */     'weight' => 12,
  /* node-coi-field_group_help */   ),
  /* node-coi-field_group_help */ );

  // Exported field_instance: 'node-coi-field_group_short_title'.
  $field_instances['node-coi-field_group_short_title'] = array(
  /* node-coi-field_group_short_title */   'bundle' => 'coi',
  /* node-coi-field_group_short_title */   'default_value' => NULL,
  /* node-coi-field_group_short_title */   'deleted' => 0,
  /* node-coi-field_group_short_title */   'description' => '',
  /* node-coi-field_group_short_title */   'display' => array(
  /* node-coi-field_group_short_title */     'default' => array(
  /* node-coi-field_group_short_title */       'label' => 'above',
  /* node-coi-field_group_short_title */       'module' => 'text',
  /* node-coi-field_group_short_title */       'settings' => array(
  /* node-coi-field_group_short_title */         'field_formatter_class' => '',
  /* node-coi-field_group_short_title */       ),
  /* node-coi-field_group_short_title */       'type' => 'text_default',
  /* node-coi-field_group_short_title */       'weight' => 6,
  /* node-coi-field_group_short_title */     ),
  /* node-coi-field_group_short_title */     'events_list' => array(
  /* node-coi-field_group_short_title */       'label' => 'above',
  /* node-coi-field_group_short_title */       'settings' => array(),
  /* node-coi-field_group_short_title */       'type' => 'hidden',
  /* node-coi-field_group_short_title */       'weight' => 0,
  /* node-coi-field_group_short_title */     ),
  /* node-coi-field_group_short_title */     'one_column_teaser' => array(
  /* node-coi-field_group_short_title */       'label' => 'above',
  /* node-coi-field_group_short_title */       'settings' => array(),
  /* node-coi-field_group_short_title */       'type' => 'hidden',
  /* node-coi-field_group_short_title */       'weight' => 0,
  /* node-coi-field_group_short_title */     ),
  /* node-coi-field_group_short_title */     'sidebar_' => array(
  /* node-coi-field_group_short_title */       'label' => 'above',
  /* node-coi-field_group_short_title */       'settings' => array(),
  /* node-coi-field_group_short_title */       'type' => 'hidden',
  /* node-coi-field_group_short_title */       'weight' => 0,
  /* node-coi-field_group_short_title */     ),
  /* node-coi-field_group_short_title */     'sidebar_teaser_v2' => array(
  /* node-coi-field_group_short_title */       'label' => 'above',
  /* node-coi-field_group_short_title */       'settings' => array(),
  /* node-coi-field_group_short_title */       'type' => 'hidden',
  /* node-coi-field_group_short_title */       'weight' => 0,
  /* node-coi-field_group_short_title */     ),
  /* node-coi-field_group_short_title */     'teaser' => array(
  /* node-coi-field_group_short_title */       'label' => 'above',
  /* node-coi-field_group_short_title */       'settings' => array(),
  /* node-coi-field_group_short_title */       'type' => 'hidden',
  /* node-coi-field_group_short_title */       'weight' => 0,
  /* node-coi-field_group_short_title */     ),
  /* node-coi-field_group_short_title */     'teaser_w_thumb_and_search' => array(
  /* node-coi-field_group_short_title */       'label' => 'above',
  /* node-coi-field_group_short_title */       'settings' => array(),
  /* node-coi-field_group_short_title */       'type' => 'hidden',
  /* node-coi-field_group_short_title */       'weight' => 0,
  /* node-coi-field_group_short_title */     ),
  /* node-coi-field_group_short_title */     'teaserthumb' => array(
  /* node-coi-field_group_short_title */       'label' => 'above',
  /* node-coi-field_group_short_title */       'settings' => array(),
  /* node-coi-field_group_short_title */       'type' => 'hidden',
  /* node-coi-field_group_short_title */       'weight' => 0,
  /* node-coi-field_group_short_title */     ),
  /* node-coi-field_group_short_title */     'time_and_location' => array(
  /* node-coi-field_group_short_title */       'label' => 'above',
  /* node-coi-field_group_short_title */       'settings' => array(),
  /* node-coi-field_group_short_title */       'type' => 'hidden',
  /* node-coi-field_group_short_title */       'weight' => 0,
  /* node-coi-field_group_short_title */     ),
  /* node-coi-field_group_short_title */     'title_and_time' => array(
  /* node-coi-field_group_short_title */       'label' => 'above',
  /* node-coi-field_group_short_title */       'settings' => array(),
  /* node-coi-field_group_short_title */       'type' => 'hidden',
  /* node-coi-field_group_short_title */       'weight' => 0,
  /* node-coi-field_group_short_title */     ),
  /* node-coi-field_group_short_title */   ),
  /* node-coi-field_group_short_title */   'entity_type' => 'node',
  /* node-coi-field_group_short_title */   'fences_wrapper' => 'div',
  /* node-coi-field_group_short_title */   'field_name' => 'field_group_short_title',
  /* node-coi-field_group_short_title */   'label' => 'Group acronym',
  /* node-coi-field_group_short_title */   'required' => 0,
  /* node-coi-field_group_short_title */   'settings' => array(
  /* node-coi-field_group_short_title */     'better_formats' => array(
  /* node-coi-field_group_short_title */       'allowed_formats' => array(
  /* node-coi-field_group_short_title */         'filtered_html' => 'filtered_html',
  /* node-coi-field_group_short_title */         'full_html' => 'full_html',
  /* node-coi-field_group_short_title */         'php_code' => 'php_code',
  /* node-coi-field_group_short_title */         'plain_text' => 'plain_text',
  /* node-coi-field_group_short_title */       ),
  /* node-coi-field_group_short_title */       'allowed_formats_toggle' => 0,
  /* node-coi-field_group_short_title */       'default_order_toggle' => 0,
  /* node-coi-field_group_short_title */       'default_order_wrapper' => array(
  /* node-coi-field_group_short_title */         'formats' => array(
  /* node-coi-field_group_short_title */           'filtered_html' => array(
  /* node-coi-field_group_short_title */             'weight' => -10,
  /* node-coi-field_group_short_title */           ),
  /* node-coi-field_group_short_title */           'full_html' => array(
  /* node-coi-field_group_short_title */             'weight' => -8,
  /* node-coi-field_group_short_title */           ),
  /* node-coi-field_group_short_title */           'php_code' => array(
  /* node-coi-field_group_short_title */             'weight' => -7,
  /* node-coi-field_group_short_title */           ),
  /* node-coi-field_group_short_title */           'plain_text' => array(
  /* node-coi-field_group_short_title */             'weight' => -9,
  /* node-coi-field_group_short_title */           ),
  /* node-coi-field_group_short_title */         ),
  /* node-coi-field_group_short_title */       ),
  /* node-coi-field_group_short_title */     ),
  /* node-coi-field_group_short_title */     'text_processing' => 0,
  /* node-coi-field_group_short_title */     'user_field_privacy' => FALSE,
  /* node-coi-field_group_short_title */     'user_register_form' => FALSE,
  /* node-coi-field_group_short_title */   ),
  /* node-coi-field_group_short_title */   'widget' => array(
  /* node-coi-field_group_short_title */     'active' => 1,
  /* node-coi-field_group_short_title */     'module' => 'text',
  /* node-coi-field_group_short_title */     'settings' => array(
  /* node-coi-field_group_short_title */       'label_help_description' => '',
  /* node-coi-field_group_short_title */       'size' => 60,
  /* node-coi-field_group_short_title */     ),
  /* node-coi-field_group_short_title */     'type' => 'text_textfield',
  /* node-coi-field_group_short_title */     'weight' => 8,
  /* node-coi-field_group_short_title */   ),
  /* node-coi-field_group_short_title */ );

  // Exported field_instance: 'node-coi-field_main_image'.
  $field_instances['node-coi-field_main_image'] = array(
  /* node-coi-field_main_image */   'bundle' => 'coi',
  /* node-coi-field_main_image */   'deleted' => 0,
  /* node-coi-field_main_image */   'description' => '',
  /* node-coi-field_main_image */   'display' => array(
  /* node-coi-field_main_image */     'default' => array(
  /* node-coi-field_main_image */       'label' => 'above',
  /* node-coi-field_main_image */       'module' => 'image',
  /* node-coi-field_main_image */       'settings' => array(
  /* node-coi-field_main_image */         'field_formatter_class' => '',
  /* node-coi-field_main_image */         'image_link' => '',
  /* node-coi-field_main_image */         'image_style' => '',
  /* node-coi-field_main_image */       ),
  /* node-coi-field_main_image */       'type' => 'image',
  /* node-coi-field_main_image */       'weight' => 7,
  /* node-coi-field_main_image */     ),
  /* node-coi-field_main_image */     'events_list' => array(
  /* node-coi-field_main_image */       'label' => 'above',
  /* node-coi-field_main_image */       'settings' => array(),
  /* node-coi-field_main_image */       'type' => 'hidden',
  /* node-coi-field_main_image */       'weight' => 0,
  /* node-coi-field_main_image */     ),
  /* node-coi-field_main_image */     'one_column_teaser' => array(
  /* node-coi-field_main_image */       'label' => 'above',
  /* node-coi-field_main_image */       'settings' => array(),
  /* node-coi-field_main_image */       'type' => 'hidden',
  /* node-coi-field_main_image */       'weight' => 0,
  /* node-coi-field_main_image */     ),
  /* node-coi-field_main_image */     'sidebar_' => array(
  /* node-coi-field_main_image */       'label' => 'above',
  /* node-coi-field_main_image */       'settings' => array(),
  /* node-coi-field_main_image */       'type' => 'hidden',
  /* node-coi-field_main_image */       'weight' => 0,
  /* node-coi-field_main_image */     ),
  /* node-coi-field_main_image */     'sidebar_teaser_v2' => array(
  /* node-coi-field_main_image */       'label' => 'above',
  /* node-coi-field_main_image */       'settings' => array(),
  /* node-coi-field_main_image */       'type' => 'hidden',
  /* node-coi-field_main_image */       'weight' => 0,
  /* node-coi-field_main_image */     ),
  /* node-coi-field_main_image */     'teaser' => array(
  /* node-coi-field_main_image */       'label' => 'above',
  /* node-coi-field_main_image */       'settings' => array(),
  /* node-coi-field_main_image */       'type' => 'hidden',
  /* node-coi-field_main_image */       'weight' => 0,
  /* node-coi-field_main_image */     ),
  /* node-coi-field_main_image */     'teaser_w_thumb_and_search' => array(
  /* node-coi-field_main_image */       'label' => 'above',
  /* node-coi-field_main_image */       'settings' => array(),
  /* node-coi-field_main_image */       'type' => 'hidden',
  /* node-coi-field_main_image */       'weight' => 0,
  /* node-coi-field_main_image */     ),
  /* node-coi-field_main_image */     'teaserthumb' => array(
  /* node-coi-field_main_image */       'label' => 'above',
  /* node-coi-field_main_image */       'settings' => array(),
  /* node-coi-field_main_image */       'type' => 'hidden',
  /* node-coi-field_main_image */       'weight' => 0,
  /* node-coi-field_main_image */     ),
  /* node-coi-field_main_image */     'time_and_location' => array(
  /* node-coi-field_main_image */       'label' => 'above',
  /* node-coi-field_main_image */       'settings' => array(),
  /* node-coi-field_main_image */       'type' => 'hidden',
  /* node-coi-field_main_image */       'weight' => 0,
  /* node-coi-field_main_image */     ),
  /* node-coi-field_main_image */     'title_and_time' => array(
  /* node-coi-field_main_image */       'label' => 'above',
  /* node-coi-field_main_image */       'settings' => array(),
  /* node-coi-field_main_image */       'type' => 'hidden',
  /* node-coi-field_main_image */       'weight' => 0,
  /* node-coi-field_main_image */     ),
  /* node-coi-field_main_image */   ),
  /* node-coi-field_main_image */   'entity_type' => 'node',
  /* node-coi-field_main_image */   'fences_wrapper' => 'div',
  /* node-coi-field_main_image */   'field_name' => 'field_main_image',
  /* node-coi-field_main_image */   'label' => 'Main Image',
  /* node-coi-field_main_image */   'required' => 0,
  /* node-coi-field_main_image */   'settings' => array(
  /* node-coi-field_main_image */     'alt_field' => 0,
  /* node-coi-field_main_image */     'default_image' => 0,
  /* node-coi-field_main_image */     'file_directory' => '',
  /* node-coi-field_main_image */     'file_extensions' => 'png gif jpg jpeg',
  /* node-coi-field_main_image */     'max_filesize' => '',
  /* node-coi-field_main_image */     'max_resolution' => '',
  /* node-coi-field_main_image */     'min_resolution' => '',
  /* node-coi-field_main_image */     'title_field' => 0,
  /* node-coi-field_main_image */     'user_field_privacy' => FALSE,
  /* node-coi-field_main_image */     'user_register_form' => FALSE,
  /* node-coi-field_main_image */   ),
  /* node-coi-field_main_image */   'widget' => array(
  /* node-coi-field_main_image */     'active' => 1,
  /* node-coi-field_main_image */     'module' => 'media',
  /* node-coi-field_main_image */     'settings' => array(
  /* node-coi-field_main_image */       'allowed_schemes' => array(
  /* node-coi-field_main_image */         'private' => 'private',
  /* node-coi-field_main_image */         'public' => 0,
  /* node-coi-field_main_image */         'vimeo' => 0,
  /* node-coi-field_main_image */         'youtube' => 0,
  /* node-coi-field_main_image */       ),
  /* node-coi-field_main_image */       'allowed_types' => array(
  /* node-coi-field_main_image */         'audio' => 0,
  /* node-coi-field_main_image */         'document' => 0,
  /* node-coi-field_main_image */         'image' => 'image',
  /* node-coi-field_main_image */         'video' => 0,
  /* node-coi-field_main_image */       ),
  /* node-coi-field_main_image */       'browser_plugins' => array(
  /* node-coi-field_main_image */         'media_default--media_browser_1' => 'media_default--media_browser_1',
  /* node-coi-field_main_image */         'media_default--media_browser_my_files' => 'media_default--media_browser_my_files',
  /* node-coi-field_main_image */         'media_internet' => 0,
  /* node-coi-field_main_image */         'upload' => 'upload',
  /* node-coi-field_main_image */       ),
  /* node-coi-field_main_image */       'label_help_description' => '',
  /* node-coi-field_main_image */     ),
  /* node-coi-field_main_image */     'type' => 'media_generic',
  /* node-coi-field_main_image */     'weight' => 10,
  /* node-coi-field_main_image */   ),
  /* node-coi-field_main_image */ );

  // Exported field_instance: 'node-coi-field_rec_links'.
  $field_instances['node-coi-field_rec_links'] = array(
  /* node-coi-field_rec_links */   'bundle' => 'coi',
  /* node-coi-field_rec_links */   'default_value' => NULL,
  /* node-coi-field_rec_links */   'deleted' => 0,
  /* node-coi-field_rec_links */   'description' => '',
  /* node-coi-field_rec_links */   'display' => array(
  /* node-coi-field_rec_links */     'default' => array(
  /* node-coi-field_rec_links */       'label' => 'above',
  /* node-coi-field_rec_links */       'module' => 'link',
  /* node-coi-field_rec_links */       'settings' => array(
  /* node-coi-field_rec_links */         'field_formatter_class' => '',
  /* node-coi-field_rec_links */       ),
  /* node-coi-field_rec_links */       'type' => 'link_default',
  /* node-coi-field_rec_links */       'weight' => 8,
  /* node-coi-field_rec_links */     ),
  /* node-coi-field_rec_links */     'events_list' => array(
  /* node-coi-field_rec_links */       'label' => 'above',
  /* node-coi-field_rec_links */       'settings' => array(),
  /* node-coi-field_rec_links */       'type' => 'hidden',
  /* node-coi-field_rec_links */       'weight' => 0,
  /* node-coi-field_rec_links */     ),
  /* node-coi-field_rec_links */     'one_column_teaser' => array(
  /* node-coi-field_rec_links */       'label' => 'above',
  /* node-coi-field_rec_links */       'settings' => array(),
  /* node-coi-field_rec_links */       'type' => 'hidden',
  /* node-coi-field_rec_links */       'weight' => 0,
  /* node-coi-field_rec_links */     ),
  /* node-coi-field_rec_links */     'sidebar_' => array(
  /* node-coi-field_rec_links */       'label' => 'above',
  /* node-coi-field_rec_links */       'settings' => array(),
  /* node-coi-field_rec_links */       'type' => 'hidden',
  /* node-coi-field_rec_links */       'weight' => 0,
  /* node-coi-field_rec_links */     ),
  /* node-coi-field_rec_links */     'sidebar_teaser_v2' => array(
  /* node-coi-field_rec_links */       'label' => 'above',
  /* node-coi-field_rec_links */       'settings' => array(),
  /* node-coi-field_rec_links */       'type' => 'hidden',
  /* node-coi-field_rec_links */       'weight' => 0,
  /* node-coi-field_rec_links */     ),
  /* node-coi-field_rec_links */     'teaser' => array(
  /* node-coi-field_rec_links */       'label' => 'above',
  /* node-coi-field_rec_links */       'settings' => array(),
  /* node-coi-field_rec_links */       'type' => 'hidden',
  /* node-coi-field_rec_links */       'weight' => 0,
  /* node-coi-field_rec_links */     ),
  /* node-coi-field_rec_links */     'teaser_w_thumb_and_search' => array(
  /* node-coi-field_rec_links */       'label' => 'above',
  /* node-coi-field_rec_links */       'settings' => array(),
  /* node-coi-field_rec_links */       'type' => 'hidden',
  /* node-coi-field_rec_links */       'weight' => 0,
  /* node-coi-field_rec_links */     ),
  /* node-coi-field_rec_links */     'teaserthumb' => array(
  /* node-coi-field_rec_links */       'label' => 'above',
  /* node-coi-field_rec_links */       'settings' => array(),
  /* node-coi-field_rec_links */       'type' => 'hidden',
  /* node-coi-field_rec_links */       'weight' => 0,
  /* node-coi-field_rec_links */     ),
  /* node-coi-field_rec_links */     'time_and_location' => array(
  /* node-coi-field_rec_links */       'label' => 'above',
  /* node-coi-field_rec_links */       'settings' => array(),
  /* node-coi-field_rec_links */       'type' => 'hidden',
  /* node-coi-field_rec_links */       'weight' => 0,
  /* node-coi-field_rec_links */     ),
  /* node-coi-field_rec_links */     'title_and_time' => array(
  /* node-coi-field_rec_links */       'label' => 'above',
  /* node-coi-field_rec_links */       'settings' => array(),
  /* node-coi-field_rec_links */       'type' => 'hidden',
  /* node-coi-field_rec_links */       'weight' => 0,
  /* node-coi-field_rec_links */     ),
  /* node-coi-field_rec_links */   ),
  /* node-coi-field_rec_links */   'entity_type' => 'node',
  /* node-coi-field_rec_links */   'fences_wrapper' => 'div',
  /* node-coi-field_rec_links */   'field_name' => 'field_rec_links',
  /* node-coi-field_rec_links */   'label' => 'Recommended Links',
  /* node-coi-field_rec_links */   'required' => 0,
  /* node-coi-field_rec_links */   'settings' => array(
  /* node-coi-field_rec_links */     'absolute_url' => 1,
  /* node-coi-field_rec_links */     'attributes' => array(
  /* node-coi-field_rec_links */       'class' => '',
  /* node-coi-field_rec_links */       'configurable_class' => 0,
  /* node-coi-field_rec_links */       'configurable_title' => 0,
  /* node-coi-field_rec_links */       'rel' => '',
  /* node-coi-field_rec_links */       'target' => 'default',
  /* node-coi-field_rec_links */       'title' => '',
  /* node-coi-field_rec_links */     ),
  /* node-coi-field_rec_links */     'display' => array(
  /* node-coi-field_rec_links */       'url_cutoff' => 80,
  /* node-coi-field_rec_links */     ),
  /* node-coi-field_rec_links */     'enable_tokens' => 1,
  /* node-coi-field_rec_links */     'rel_remove' => 'default',
  /* node-coi-field_rec_links */     'title' => 'optional',
  /* node-coi-field_rec_links */     'title_label_use_field_label' => 0,
  /* node-coi-field_rec_links */     'title_maxlength' => 128,
  /* node-coi-field_rec_links */     'title_value' => '',
  /* node-coi-field_rec_links */     'url' => 0,
  /* node-coi-field_rec_links */     'user_field_privacy' => FALSE,
  /* node-coi-field_rec_links */     'user_register_form' => FALSE,
  /* node-coi-field_rec_links */     'validate_url' => 1,
  /* node-coi-field_rec_links */   ),
  /* node-coi-field_rec_links */   'widget' => array(
  /* node-coi-field_rec_links */     'active' => 0,
  /* node-coi-field_rec_links */     'module' => 'link',
  /* node-coi-field_rec_links */     'settings' => array(
  /* node-coi-field_rec_links */       'label_help_description' => '',
  /* node-coi-field_rec_links */     ),
  /* node-coi-field_rec_links */     'type' => 'link_field',
  /* node-coi-field_rec_links */     'weight' => 11,
  /* node-coi-field_rec_links */   ),
  /* node-coi-field_rec_links */ );

  // Exported field_instance: 'node-coi-field_region'.
  $field_instances['node-coi-field_region'] = array(
  /* node-coi-field_region */   'bundle' => 'coi',
  /* node-coi-field_region */   'default_value' => NULL,
  /* node-coi-field_region */   'deleted' => 0,
  /* node-coi-field_region */   'description' => '',
  /* node-coi-field_region */   'display' => array(
  /* node-coi-field_region */     'default' => array(
  /* node-coi-field_region */       'label' => 'above',
  /* node-coi-field_region */       'module' => 'taxonomy',
  /* node-coi-field_region */       'settings' => array(
  /* node-coi-field_region */         'field_formatter_class' => '',
  /* node-coi-field_region */       ),
  /* node-coi-field_region */       'type' => 'taxonomy_term_reference_link',
  /* node-coi-field_region */       'weight' => 11,
  /* node-coi-field_region */     ),
  /* node-coi-field_region */     'events_list' => array(
  /* node-coi-field_region */       'label' => 'above',
  /* node-coi-field_region */       'settings' => array(),
  /* node-coi-field_region */       'type' => 'hidden',
  /* node-coi-field_region */       'weight' => 0,
  /* node-coi-field_region */     ),
  /* node-coi-field_region */     'one_column_teaser' => array(
  /* node-coi-field_region */       'label' => 'above',
  /* node-coi-field_region */       'settings' => array(),
  /* node-coi-field_region */       'type' => 'hidden',
  /* node-coi-field_region */       'weight' => 0,
  /* node-coi-field_region */     ),
  /* node-coi-field_region */     'sidebar_' => array(
  /* node-coi-field_region */       'label' => 'above',
  /* node-coi-field_region */       'settings' => array(),
  /* node-coi-field_region */       'type' => 'hidden',
  /* node-coi-field_region */       'weight' => 0,
  /* node-coi-field_region */     ),
  /* node-coi-field_region */     'sidebar_teaser_v2' => array(
  /* node-coi-field_region */       'label' => 'above',
  /* node-coi-field_region */       'settings' => array(),
  /* node-coi-field_region */       'type' => 'hidden',
  /* node-coi-field_region */       'weight' => 0,
  /* node-coi-field_region */     ),
  /* node-coi-field_region */     'teaser' => array(
  /* node-coi-field_region */       'label' => 'above',
  /* node-coi-field_region */       'settings' => array(),
  /* node-coi-field_region */       'type' => 'hidden',
  /* node-coi-field_region */       'weight' => 0,
  /* node-coi-field_region */     ),
  /* node-coi-field_region */     'teaser_w_thumb_and_search' => array(
  /* node-coi-field_region */       'label' => 'above',
  /* node-coi-field_region */       'settings' => array(),
  /* node-coi-field_region */       'type' => 'hidden',
  /* node-coi-field_region */       'weight' => 0,
  /* node-coi-field_region */     ),
  /* node-coi-field_region */     'teaserthumb' => array(
  /* node-coi-field_region */       'label' => 'above',
  /* node-coi-field_region */       'settings' => array(),
  /* node-coi-field_region */       'type' => 'hidden',
  /* node-coi-field_region */       'weight' => 0,
  /* node-coi-field_region */     ),
  /* node-coi-field_region */     'time_and_location' => array(
  /* node-coi-field_region */       'label' => 'above',
  /* node-coi-field_region */       'settings' => array(),
  /* node-coi-field_region */       'type' => 'hidden',
  /* node-coi-field_region */       'weight' => 0,
  /* node-coi-field_region */     ),
  /* node-coi-field_region */     'title_and_time' => array(
  /* node-coi-field_region */       'label' => 'above',
  /* node-coi-field_region */       'settings' => array(),
  /* node-coi-field_region */       'type' => 'hidden',
  /* node-coi-field_region */       'weight' => 0,
  /* node-coi-field_region */     ),
  /* node-coi-field_region */   ),
  /* node-coi-field_region */   'entity_type' => 'node',
  /* node-coi-field_region */   'fences_wrapper' => 'div',
  /* node-coi-field_region */   'field_name' => 'field_region',
  /* node-coi-field_region */   'label' => 'Regions',
  /* node-coi-field_region */   'required' => 0,
  /* node-coi-field_region */   'settings' => array(
  /* node-coi-field_region */     'user_field_privacy' => FALSE,
  /* node-coi-field_region */     'user_register_form' => FALSE,
  /* node-coi-field_region */   ),
  /* node-coi-field_region */   'widget' => array(
  /* node-coi-field_region */     'active' => 1,
  /* node-coi-field_region */     'module' => 'term_reference_tree',
  /* node-coi-field_region */     'settings' => array(
  /* node-coi-field_region */       'cascading_selection' => 0,
  /* node-coi-field_region */       'filter_view' => '',
  /* node-coi-field_region */       'label_help_description' => '',
  /* node-coi-field_region */       'leaves_only' => 0,
  /* node-coi-field_region */       'max_depth' => '',
  /* node-coi-field_region */       'parent_term_id' => '',
  /* node-coi-field_region */       'select_parents' => 0,
  /* node-coi-field_region */       'start_minimized' => 0,
  /* node-coi-field_region */       'token_display' => '',
  /* node-coi-field_region */       'track_list' => 0,
  /* node-coi-field_region */     ),
  /* node-coi-field_region */     'type' => 'term_reference_tree',
  /* node-coi-field_region */     'weight' => 7,
  /* node-coi-field_region */   ),
  /* node-coi-field_region */ );

  // Exported field_instance: 'node-coi-field_topic'.
  $field_instances['node-coi-field_topic'] = array(
  /* node-coi-field_topic */   'bundle' => 'coi',
  /* node-coi-field_topic */   'default_value' => NULL,
  /* node-coi-field_topic */   'deleted' => 0,
  /* node-coi-field_topic */   'description' => '',
  /* node-coi-field_topic */   'display' => array(
  /* node-coi-field_topic */     'default' => array(
  /* node-coi-field_topic */       'label' => 'above',
  /* node-coi-field_topic */       'module' => 'taxonomy',
  /* node-coi-field_topic */       'settings' => array(
  /* node-coi-field_topic */         'field_formatter_class' => '',
  /* node-coi-field_topic */       ),
  /* node-coi-field_topic */       'type' => 'taxonomy_term_reference_link',
  /* node-coi-field_topic */       'weight' => 10,
  /* node-coi-field_topic */     ),
  /* node-coi-field_topic */     'events_list' => array(
  /* node-coi-field_topic */       'label' => 'above',
  /* node-coi-field_topic */       'settings' => array(),
  /* node-coi-field_topic */       'type' => 'hidden',
  /* node-coi-field_topic */       'weight' => 0,
  /* node-coi-field_topic */     ),
  /* node-coi-field_topic */     'one_column_teaser' => array(
  /* node-coi-field_topic */       'label' => 'above',
  /* node-coi-field_topic */       'settings' => array(),
  /* node-coi-field_topic */       'type' => 'hidden',
  /* node-coi-field_topic */       'weight' => 0,
  /* node-coi-field_topic */     ),
  /* node-coi-field_topic */     'sidebar_' => array(
  /* node-coi-field_topic */       'label' => 'above',
  /* node-coi-field_topic */       'settings' => array(),
  /* node-coi-field_topic */       'type' => 'hidden',
  /* node-coi-field_topic */       'weight' => 0,
  /* node-coi-field_topic */     ),
  /* node-coi-field_topic */     'sidebar_teaser_v2' => array(
  /* node-coi-field_topic */       'label' => 'above',
  /* node-coi-field_topic */       'settings' => array(),
  /* node-coi-field_topic */       'type' => 'hidden',
  /* node-coi-field_topic */       'weight' => 0,
  /* node-coi-field_topic */     ),
  /* node-coi-field_topic */     'teaser' => array(
  /* node-coi-field_topic */       'label' => 'above',
  /* node-coi-field_topic */       'settings' => array(),
  /* node-coi-field_topic */       'type' => 'hidden',
  /* node-coi-field_topic */       'weight' => 0,
  /* node-coi-field_topic */     ),
  /* node-coi-field_topic */     'teaser_w_thumb_and_search' => array(
  /* node-coi-field_topic */       'label' => 'above',
  /* node-coi-field_topic */       'settings' => array(),
  /* node-coi-field_topic */       'type' => 'hidden',
  /* node-coi-field_topic */       'weight' => 0,
  /* node-coi-field_topic */     ),
  /* node-coi-field_topic */     'teaserthumb' => array(
  /* node-coi-field_topic */       'label' => 'above',
  /* node-coi-field_topic */       'settings' => array(),
  /* node-coi-field_topic */       'type' => 'hidden',
  /* node-coi-field_topic */       'weight' => 0,
  /* node-coi-field_topic */     ),
  /* node-coi-field_topic */     'time_and_location' => array(
  /* node-coi-field_topic */       'label' => 'above',
  /* node-coi-field_topic */       'settings' => array(),
  /* node-coi-field_topic */       'type' => 'hidden',
  /* node-coi-field_topic */       'weight' => 0,
  /* node-coi-field_topic */     ),
  /* node-coi-field_topic */     'title_and_time' => array(
  /* node-coi-field_topic */       'label' => 'above',
  /* node-coi-field_topic */       'settings' => array(),
  /* node-coi-field_topic */       'type' => 'hidden',
  /* node-coi-field_topic */       'weight' => 0,
  /* node-coi-field_topic */     ),
  /* node-coi-field_topic */   ),
  /* node-coi-field_topic */   'entity_type' => 'node',
  /* node-coi-field_topic */   'fences_wrapper' => 'div',
  /* node-coi-field_topic */   'field_name' => 'field_topic',
  /* node-coi-field_topic */   'label' => 'Topics',
  /* node-coi-field_topic */   'required' => 0,
  /* node-coi-field_topic */   'settings' => array(
  /* node-coi-field_topic */     'user_field_privacy' => FALSE,
  /* node-coi-field_topic */     'user_register_form' => FALSE,
  /* node-coi-field_topic */   ),
  /* node-coi-field_topic */   'widget' => array(
  /* node-coi-field_topic */     'active' => 1,
  /* node-coi-field_topic */     'module' => 'term_reference_tree',
  /* node-coi-field_topic */     'settings' => array(
  /* node-coi-field_topic */       'cascading_selection' => 0,
  /* node-coi-field_topic */       'filter_view' => '',
  /* node-coi-field_topic */       'label_help_description' => '',
  /* node-coi-field_topic */       'leaves_only' => 0,
  /* node-coi-field_topic */       'max_depth' => '',
  /* node-coi-field_topic */       'parent_term_id' => '',
  /* node-coi-field_topic */       'select_parents' => 0,
  /* node-coi-field_topic */       'start_minimized' => 0,
  /* node-coi-field_topic */       'token_display' => '',
  /* node-coi-field_topic */       'track_list' => 0,
  /* node-coi-field_topic */     ),
  /* node-coi-field_topic */     'type' => 'term_reference_tree',
  /* node-coi-field_topic */     'weight' => 3,
  /* node-coi-field_topic */   ),
  /* node-coi-field_topic */ );

  // Exported field_instance: 'node-coi-group_access'.
  $field_instances['node-coi-group_access'] = array(
  /* node-coi-group_access */   'bundle' => 'coi',
  /* node-coi-group_access */   'default_value' => array(
  /* node-coi-group_access */     0 => array(
  /* node-coi-group_access */       'value' => 1,
  /* node-coi-group_access */     ),
  /* node-coi-group_access */   ),
  /* node-coi-group_access */   'deleted' => 0,
  /* node-coi-group_access */   'description' => 'Please do not modify this field; Group visibility will be automatically set to its correct value upon saving.',
  /* node-coi-group_access */   'display' => array(
  /* node-coi-group_access */     'default' => array(
  /* node-coi-group_access */       'label' => 'above',
  /* node-coi-group_access */       'module' => 'list',
  /* node-coi-group_access */       'settings' => array(
  /* node-coi-group_access */         'field_formatter_class' => '',
  /* node-coi-group_access */       ),
  /* node-coi-group_access */       'type' => 'list_default',
  /* node-coi-group_access */       'weight' => 5,
  /* node-coi-group_access */     ),
  /* node-coi-group_access */     'events_list' => array(
  /* node-coi-group_access */       'label' => 'above',
  /* node-coi-group_access */       'settings' => array(),
  /* node-coi-group_access */       'type' => 'hidden',
  /* node-coi-group_access */       'weight' => 0,
  /* node-coi-group_access */     ),
  /* node-coi-group_access */     'one_column_teaser' => array(
  /* node-coi-group_access */       'label' => 'above',
  /* node-coi-group_access */       'settings' => array(),
  /* node-coi-group_access */       'type' => 'hidden',
  /* node-coi-group_access */       'weight' => 0,
  /* node-coi-group_access */     ),
  /* node-coi-group_access */     'sidebar_' => array(
  /* node-coi-group_access */       'label' => 'above',
  /* node-coi-group_access */       'settings' => array(),
  /* node-coi-group_access */       'type' => 'hidden',
  /* node-coi-group_access */       'weight' => 0,
  /* node-coi-group_access */     ),
  /* node-coi-group_access */     'sidebar_teaser' => array(
  /* node-coi-group_access */       'label' => 'above',
  /* node-coi-group_access */       'settings' => array(),
  /* node-coi-group_access */       'type' => 'hidden',
  /* node-coi-group_access */       'weight' => 0,
  /* node-coi-group_access */     ),
  /* node-coi-group_access */     'sidebar_teaser_v2' => array(
  /* node-coi-group_access */       'label' => 'above',
  /* node-coi-group_access */       'settings' => array(),
  /* node-coi-group_access */       'type' => 'hidden',
  /* node-coi-group_access */       'weight' => 0,
  /* node-coi-group_access */     ),
  /* node-coi-group_access */     'teaser' => array(
  /* node-coi-group_access */       'label' => 'above',
  /* node-coi-group_access */       'settings' => array(),
  /* node-coi-group_access */       'type' => 'hidden',
  /* node-coi-group_access */       'weight' => 0,
  /* node-coi-group_access */     ),
  /* node-coi-group_access */     'teaser_w_thumb_and_search' => array(
  /* node-coi-group_access */       'label' => 'above',
  /* node-coi-group_access */       'settings' => array(),
  /* node-coi-group_access */       'type' => 'hidden',
  /* node-coi-group_access */       'weight' => 0,
  /* node-coi-group_access */     ),
  /* node-coi-group_access */     'teaserthumb' => array(
  /* node-coi-group_access */       'label' => 'above',
  /* node-coi-group_access */       'settings' => array(),
  /* node-coi-group_access */       'type' => 'hidden',
  /* node-coi-group_access */       'weight' => 0,
  /* node-coi-group_access */     ),
  /* node-coi-group_access */     'time_and_location' => array(
  /* node-coi-group_access */       'label' => 'above',
  /* node-coi-group_access */       'settings' => array(),
  /* node-coi-group_access */       'type' => 'hidden',
  /* node-coi-group_access */       'weight' => 0,
  /* node-coi-group_access */     ),
  /* node-coi-group_access */     'title_and_time' => array(
  /* node-coi-group_access */       'label' => 'above',
  /* node-coi-group_access */       'settings' => array(),
  /* node-coi-group_access */       'type' => 'hidden',
  /* node-coi-group_access */       'weight' => 0,
  /* node-coi-group_access */     ),
  /* node-coi-group_access */   ),
  /* node-coi-group_access */   'entity_type' => 'node',
  /* node-coi-group_access */   'fences_wrapper' => 'div',
  /* node-coi-group_access */   'field_name' => 'group_access',
  /* node-coi-group_access */   'label' => 'Group visibility',
  /* node-coi-group_access */   'required' => 0,
  /* node-coi-group_access */   'settings' => array(
  /* node-coi-group_access */     'user_field_privacy' => FALSE,
  /* node-coi-group_access */     'user_register_form' => FALSE,
  /* node-coi-group_access */   ),
  /* node-coi-group_access */   'view modes' => array(
  /* node-coi-group_access */     'full' => array(
  /* node-coi-group_access */       'label' => 'above',
  /* node-coi-group_access */       'type' => 'options_onoff',
  /* node-coi-group_access */     ),
  /* node-coi-group_access */     'teaser' => array(
  /* node-coi-group_access */       'label' => 'above',
  /* node-coi-group_access */       'type' => 'options_onoff',
  /* node-coi-group_access */     ),
  /* node-coi-group_access */   ),
  /* node-coi-group_access */   'widget' => array(
  /* node-coi-group_access */     'active' => 1,
  /* node-coi-group_access */     'module' => 'options',
  /* node-coi-group_access */     'settings' => array(),
  /* node-coi-group_access */     'type' => 'options_buttons',
  /* node-coi-group_access */     'weight' => 16,
  /* node-coi-group_access */   ),
  /* node-coi-group_access */   'widget_type' => 'options_select',
  /* node-coi-group_access */ );

  // Exported field_instance: 'node-coi-group_group'.
  $field_instances['node-coi-group_group'] = array(
  /* node-coi-group_group */   'bundle' => 'coi',
  /* node-coi-group_group */   'default_value' => array(
  /* node-coi-group_group */     0 => array(
  /* node-coi-group_group */       'value' => 1,
  /* node-coi-group_group */     ),
  /* node-coi-group_group */   ),
  /* node-coi-group_group */   'deleted' => 0,
  /* node-coi-group_group */   'description' => 'Determine if this is an OG group.',
  /* node-coi-group_group */   'display' => array(
  /* node-coi-group_group */     'default' => array(
  /* node-coi-group_group */       'label' => 'above',
  /* node-coi-group_group */       'module' => 'og_ui',
  /* node-coi-group_group */       'settings' => array(
  /* node-coi-group_group */         'field_formatter_class' => '',
  /* node-coi-group_group */         'field_name' => FALSE,
  /* node-coi-group_group */       ),
  /* node-coi-group_group */       'type' => 'og_group_subscribe',
  /* node-coi-group_group */       'weight' => 14,
  /* node-coi-group_group */     ),
  /* node-coi-group_group */     'events_list' => array(
  /* node-coi-group_group */       'label' => 'above',
  /* node-coi-group_group */       'settings' => array(),
  /* node-coi-group_group */       'type' => 'hidden',
  /* node-coi-group_group */       'weight' => 0,
  /* node-coi-group_group */     ),
  /* node-coi-group_group */     'one_column_teaser' => array(
  /* node-coi-group_group */       'label' => 'above',
  /* node-coi-group_group */       'settings' => array(),
  /* node-coi-group_group */       'type' => 'hidden',
  /* node-coi-group_group */       'weight' => 0,
  /* node-coi-group_group */     ),
  /* node-coi-group_group */     'sidebar_' => array(
  /* node-coi-group_group */       'label' => 'above',
  /* node-coi-group_group */       'settings' => array(),
  /* node-coi-group_group */       'type' => 'hidden',
  /* node-coi-group_group */       'weight' => 0,
  /* node-coi-group_group */     ),
  /* node-coi-group_group */     'sidebar_teaser_v2' => array(
  /* node-coi-group_group */       'label' => 'above',
  /* node-coi-group_group */       'settings' => array(),
  /* node-coi-group_group */       'type' => 'hidden',
  /* node-coi-group_group */       'weight' => 0,
  /* node-coi-group_group */     ),
  /* node-coi-group_group */     'teaser' => array(
  /* node-coi-group_group */       'label' => 'above',
  /* node-coi-group_group */       'settings' => array(),
  /* node-coi-group_group */       'type' => 'hidden',
  /* node-coi-group_group */       'weight' => 0,
  /* node-coi-group_group */     ),
  /* node-coi-group_group */     'teaser_w_thumb_and_search' => array(
  /* node-coi-group_group */       'label' => 'above',
  /* node-coi-group_group */       'settings' => array(),
  /* node-coi-group_group */       'type' => 'hidden',
  /* node-coi-group_group */       'weight' => 0,
  /* node-coi-group_group */     ),
  /* node-coi-group_group */     'teaserthumb' => array(
  /* node-coi-group_group */       'label' => 'above',
  /* node-coi-group_group */       'settings' => array(),
  /* node-coi-group_group */       'type' => 'hidden',
  /* node-coi-group_group */       'weight' => 0,
  /* node-coi-group_group */     ),
  /* node-coi-group_group */     'time_and_location' => array(
  /* node-coi-group_group */       'label' => 'above',
  /* node-coi-group_group */       'settings' => array(),
  /* node-coi-group_group */       'type' => 'hidden',
  /* node-coi-group_group */       'weight' => 0,
  /* node-coi-group_group */     ),
  /* node-coi-group_group */     'title_and_time' => array(
  /* node-coi-group_group */       'label' => 'above',
  /* node-coi-group_group */       'settings' => array(),
  /* node-coi-group_group */       'type' => 'hidden',
  /* node-coi-group_group */       'weight' => 0,
  /* node-coi-group_group */     ),
  /* node-coi-group_group */   ),
  /* node-coi-group_group */   'display_label' => 1,
  /* node-coi-group_group */   'entity_type' => 'node',
  /* node-coi-group_group */   'fences_wrapper' => 'div',
  /* node-coi-group_group */   'field_name' => 'group_group',
  /* node-coi-group_group */   'label' => 'Group',
  /* node-coi-group_group */   'required' => 0,
  /* node-coi-group_group */   'settings' => array(
  /* node-coi-group_group */     'user_field_privacy' => FALSE,
  /* node-coi-group_group */     'user_register_form' => FALSE,
  /* node-coi-group_group */   ),
  /* node-coi-group_group */   'view modes' => array(
  /* node-coi-group_group */     'full' => array(
  /* node-coi-group_group */       'custom settings' => FALSE,
  /* node-coi-group_group */       'label' => 'Full',
  /* node-coi-group_group */       'type' => 'og_group_subscribe',
  /* node-coi-group_group */     ),
  /* node-coi-group_group */     'teaser' => array(
  /* node-coi-group_group */       'custom settings' => FALSE,
  /* node-coi-group_group */       'label' => 'Teaser',
  /* node-coi-group_group */       'type' => 'og_group_subscribe',
  /* node-coi-group_group */     ),
  /* node-coi-group_group */   ),
  /* node-coi-group_group */   'widget' => array(
  /* node-coi-group_group */     'active' => 1,
  /* node-coi-group_group */     'module' => 'options',
  /* node-coi-group_group */     'settings' => array(
  /* node-coi-group_group */       'display_label' => 0,
  /* node-coi-group_group */       'label_help_description' => '',
  /* node-coi-group_group */       'og_hide' => 1,
  /* node-coi-group_group */     ),
  /* node-coi-group_group */     'type' => 'options_onoff',
  /* node-coi-group_group */     'weight' => 14,
  /* node-coi-group_group */   ),
  /* node-coi-group_group */ );

  // Exported field_instance: 'node-coi-og_group_ref'.
  $field_instances['node-coi-og_group_ref'] = array(
  /* node-coi-og_group_ref */   'bundle' => 'coi',
  /* node-coi-og_group_ref */   'default_value' => NULL,
  /* node-coi-og_group_ref */   'deleted' => 0,
  /* node-coi-og_group_ref */   'description' => '',
  /* node-coi-og_group_ref */   'display' => array(
  /* node-coi-og_group_ref */     'default' => array(
  /* node-coi-og_group_ref */       'label' => 'above',
  /* node-coi-og_group_ref */       'module' => 'og_ui',
  /* node-coi-og_group_ref */       'settings' => array(
  /* node-coi-og_group_ref */         'field_formatter_class' => '',
  /* node-coi-og_group_ref */       ),
  /* node-coi-og_group_ref */       'type' => 'og_list_default',
  /* node-coi-og_group_ref */       'weight' => 2,
  /* node-coi-og_group_ref */     ),
  /* node-coi-og_group_ref */     'events_list' => array(
  /* node-coi-og_group_ref */       'label' => 'above',
  /* node-coi-og_group_ref */       'settings' => array(),
  /* node-coi-og_group_ref */       'type' => 'hidden',
  /* node-coi-og_group_ref */       'weight' => 0,
  /* node-coi-og_group_ref */     ),
  /* node-coi-og_group_ref */     'one_column_teaser' => array(
  /* node-coi-og_group_ref */       'label' => 'above',
  /* node-coi-og_group_ref */       'settings' => array(),
  /* node-coi-og_group_ref */       'type' => 'hidden',
  /* node-coi-og_group_ref */       'weight' => 0,
  /* node-coi-og_group_ref */     ),
  /* node-coi-og_group_ref */     'sidebar_' => array(
  /* node-coi-og_group_ref */       'label' => 'above',
  /* node-coi-og_group_ref */       'settings' => array(),
  /* node-coi-og_group_ref */       'type' => 'hidden',
  /* node-coi-og_group_ref */       'weight' => 0,
  /* node-coi-og_group_ref */     ),
  /* node-coi-og_group_ref */     'sidebar_teaser' => array(
  /* node-coi-og_group_ref */       'label' => 'above',
  /* node-coi-og_group_ref */       'settings' => array(),
  /* node-coi-og_group_ref */       'type' => 'hidden',
  /* node-coi-og_group_ref */       'weight' => 0,
  /* node-coi-og_group_ref */     ),
  /* node-coi-og_group_ref */     'sidebar_teaser_v2' => array(
  /* node-coi-og_group_ref */       'label' => 'above',
  /* node-coi-og_group_ref */       'settings' => array(),
  /* node-coi-og_group_ref */       'type' => 'hidden',
  /* node-coi-og_group_ref */       'weight' => 0,
  /* node-coi-og_group_ref */     ),
  /* node-coi-og_group_ref */     'teaser' => array(
  /* node-coi-og_group_ref */       'label' => 'above',
  /* node-coi-og_group_ref */       'settings' => array(),
  /* node-coi-og_group_ref */       'type' => 'hidden',
  /* node-coi-og_group_ref */       'weight' => 0,
  /* node-coi-og_group_ref */     ),
  /* node-coi-og_group_ref */     'teaser_w_thumb_and_search' => array(
  /* node-coi-og_group_ref */       'label' => 'above',
  /* node-coi-og_group_ref */       'settings' => array(),
  /* node-coi-og_group_ref */       'type' => 'hidden',
  /* node-coi-og_group_ref */       'weight' => 0,
  /* node-coi-og_group_ref */     ),
  /* node-coi-og_group_ref */     'teaserthumb' => array(
  /* node-coi-og_group_ref */       'label' => 'above',
  /* node-coi-og_group_ref */       'settings' => array(),
  /* node-coi-og_group_ref */       'type' => 'hidden',
  /* node-coi-og_group_ref */       'weight' => 0,
  /* node-coi-og_group_ref */     ),
  /* node-coi-og_group_ref */     'time_and_location' => array(
  /* node-coi-og_group_ref */       'label' => 'above',
  /* node-coi-og_group_ref */       'settings' => array(),
  /* node-coi-og_group_ref */       'type' => 'hidden',
  /* node-coi-og_group_ref */       'weight' => 0,
  /* node-coi-og_group_ref */     ),
  /* node-coi-og_group_ref */     'title_and_time' => array(
  /* node-coi-og_group_ref */       'label' => 'above',
  /* node-coi-og_group_ref */       'settings' => array(),
  /* node-coi-og_group_ref */       'type' => 'hidden',
  /* node-coi-og_group_ref */       'weight' => 0,
  /* node-coi-og_group_ref */     ),
  /* node-coi-og_group_ref */   ),
  /* node-coi-og_group_ref */   'entity_type' => 'node',
  /* node-coi-og_group_ref */   'field_name' => 'og_group_ref',
  /* node-coi-og_group_ref */   'label' => 'Groups audience',
  /* node-coi-og_group_ref */   'required' => FALSE,
  /* node-coi-og_group_ref */   'settings' => array(
  /* node-coi-og_group_ref */     'behaviors' => array(
  /* node-coi-og_group_ref */       'og_widget' => array(
  /* node-coi-og_group_ref */         'admin' => array(
  /* node-coi-og_group_ref */           'widget_type' => 'entityreference_autocomplete',
  /* node-coi-og_group_ref */         ),
  /* node-coi-og_group_ref */         'default' => array(
  /* node-coi-og_group_ref */           'widget_type' => 'options_select',
  /* node-coi-og_group_ref */         ),
  /* node-coi-og_group_ref */         'status' => TRUE,
  /* node-coi-og_group_ref */       ),
  /* node-coi-og_group_ref */     ),
  /* node-coi-og_group_ref */     'user_field_privacy' => FALSE,
  /* node-coi-og_group_ref */     'user_register_form' => FALSE,
  /* node-coi-og_group_ref */   ),
  /* node-coi-og_group_ref */   'view modes' => array(
  /* node-coi-og_group_ref */     'full' => array(
  /* node-coi-og_group_ref */       'custom settings' => FALSE,
  /* node-coi-og_group_ref */       'label' => 'Full',
  /* node-coi-og_group_ref */       'type' => 'og_list_default',
  /* node-coi-og_group_ref */     ),
  /* node-coi-og_group_ref */     'teaser' => array(
  /* node-coi-og_group_ref */       'custom settings' => FALSE,
  /* node-coi-og_group_ref */       'label' => 'Teaser',
  /* node-coi-og_group_ref */       'type' => 'og_list_default',
  /* node-coi-og_group_ref */     ),
  /* node-coi-og_group_ref */   ),
  /* node-coi-og_group_ref */   'widget' => array(
  /* node-coi-og_group_ref */     'module' => 'og',
  /* node-coi-og_group_ref */     'settings' => array(),
  /* node-coi-og_group_ref */     'type' => 'og_complex',
  /* node-coi-og_group_ref */     'weight' => 15,
  /* node-coi-og_group_ref */   ),
  /* node-coi-og_group_ref */ );

  // Exported field_instance: 'node-coi-og_roles_permissions'.
  $field_instances['node-coi-og_roles_permissions'] = array(
  /* node-coi-og_roles_permissions */   'bundle' => 'coi',
  /* node-coi-og_roles_permissions */   'default_value' => array(
  /* node-coi-og_roles_permissions */     0 => array(
  /* node-coi-og_roles_permissions */       'value' => 0,
  /* node-coi-og_roles_permissions */     ),
  /* node-coi-og_roles_permissions */   ),
  /* node-coi-og_roles_permissions */   'deleted' => 0,
  /* node-coi-og_roles_permissions */   'description' => '',
  /* node-coi-og_roles_permissions */   'display' => array(
  /* node-coi-og_roles_permissions */     'default' => array(
  /* node-coi-og_roles_permissions */       'label' => 'above',
  /* node-coi-og_roles_permissions */       'module' => 'list',
  /* node-coi-og_roles_permissions */       'settings' => array(
  /* node-coi-og_roles_permissions */         'field_formatter_class' => '',
  /* node-coi-og_roles_permissions */       ),
  /* node-coi-og_roles_permissions */       'type' => 'list_default',
  /* node-coi-og_roles_permissions */       'weight' => 4,
  /* node-coi-og_roles_permissions */     ),
  /* node-coi-og_roles_permissions */     'events_list' => array(
  /* node-coi-og_roles_permissions */       'label' => 'above',
  /* node-coi-og_roles_permissions */       'settings' => array(),
  /* node-coi-og_roles_permissions */       'type' => 'hidden',
  /* node-coi-og_roles_permissions */       'weight' => 0,
  /* node-coi-og_roles_permissions */     ),
  /* node-coi-og_roles_permissions */     'one_column_teaser' => array(
  /* node-coi-og_roles_permissions */       'label' => 'above',
  /* node-coi-og_roles_permissions */       'settings' => array(),
  /* node-coi-og_roles_permissions */       'type' => 'hidden',
  /* node-coi-og_roles_permissions */       'weight' => 0,
  /* node-coi-og_roles_permissions */     ),
  /* node-coi-og_roles_permissions */     'sidebar_' => array(
  /* node-coi-og_roles_permissions */       'label' => 'above',
  /* node-coi-og_roles_permissions */       'settings' => array(),
  /* node-coi-og_roles_permissions */       'type' => 'hidden',
  /* node-coi-og_roles_permissions */       'weight' => 0,
  /* node-coi-og_roles_permissions */     ),
  /* node-coi-og_roles_permissions */     'sidebar_teaser' => array(
  /* node-coi-og_roles_permissions */       'label' => 'above',
  /* node-coi-og_roles_permissions */       'settings' => array(),
  /* node-coi-og_roles_permissions */       'type' => 'hidden',
  /* node-coi-og_roles_permissions */       'weight' => 0,
  /* node-coi-og_roles_permissions */     ),
  /* node-coi-og_roles_permissions */     'sidebar_teaser_v2' => array(
  /* node-coi-og_roles_permissions */       'label' => 'above',
  /* node-coi-og_roles_permissions */       'settings' => array(),
  /* node-coi-og_roles_permissions */       'type' => 'hidden',
  /* node-coi-og_roles_permissions */       'weight' => 0,
  /* node-coi-og_roles_permissions */     ),
  /* node-coi-og_roles_permissions */     'teaser' => array(
  /* node-coi-og_roles_permissions */       'label' => 'above',
  /* node-coi-og_roles_permissions */       'settings' => array(),
  /* node-coi-og_roles_permissions */       'type' => 'hidden',
  /* node-coi-og_roles_permissions */       'weight' => 0,
  /* node-coi-og_roles_permissions */     ),
  /* node-coi-og_roles_permissions */     'teaser_w_thumb_and_search' => array(
  /* node-coi-og_roles_permissions */       'label' => 'above',
  /* node-coi-og_roles_permissions */       'settings' => array(),
  /* node-coi-og_roles_permissions */       'type' => 'hidden',
  /* node-coi-og_roles_permissions */       'weight' => 0,
  /* node-coi-og_roles_permissions */     ),
  /* node-coi-og_roles_permissions */     'teaserthumb' => array(
  /* node-coi-og_roles_permissions */       'label' => 'above',
  /* node-coi-og_roles_permissions */       'settings' => array(),
  /* node-coi-og_roles_permissions */       'type' => 'hidden',
  /* node-coi-og_roles_permissions */       'weight' => 0,
  /* node-coi-og_roles_permissions */     ),
  /* node-coi-og_roles_permissions */     'time_and_location' => array(
  /* node-coi-og_roles_permissions */       'label' => 'above',
  /* node-coi-og_roles_permissions */       'settings' => array(),
  /* node-coi-og_roles_permissions */       'type' => 'hidden',
  /* node-coi-og_roles_permissions */       'weight' => 0,
  /* node-coi-og_roles_permissions */     ),
  /* node-coi-og_roles_permissions */     'title_and_time' => array(
  /* node-coi-og_roles_permissions */       'label' => 'above',
  /* node-coi-og_roles_permissions */       'settings' => array(),
  /* node-coi-og_roles_permissions */       'type' => 'hidden',
  /* node-coi-og_roles_permissions */       'weight' => 0,
  /* node-coi-og_roles_permissions */     ),
  /* node-coi-og_roles_permissions */   ),
  /* node-coi-og_roles_permissions */   'entity_type' => 'node',
  /* node-coi-og_roles_permissions */   'field_name' => 'og_roles_permissions',
  /* node-coi-og_roles_permissions */   'label' => 'Group roles and permissions',
  /* node-coi-og_roles_permissions */   'required' => TRUE,
  /* node-coi-og_roles_permissions */   'settings' => array(
  /* node-coi-og_roles_permissions */     'user_field_privacy' => FALSE,
  /* node-coi-og_roles_permissions */     'user_register_form' => FALSE,
  /* node-coi-og_roles_permissions */   ),
  /* node-coi-og_roles_permissions */   'view modes' => array(
  /* node-coi-og_roles_permissions */     'full' => array(
  /* node-coi-og_roles_permissions */       'custom settings' => FALSE,
  /* node-coi-og_roles_permissions */       'label' => 'Full',
  /* node-coi-og_roles_permissions */       'type' => 'list_default',
  /* node-coi-og_roles_permissions */     ),
  /* node-coi-og_roles_permissions */     'teaser' => array(
  /* node-coi-og_roles_permissions */       'custom settings' => FALSE,
  /* node-coi-og_roles_permissions */       'label' => 'Teaser',
  /* node-coi-og_roles_permissions */       'type' => 'list_default',
  /* node-coi-og_roles_permissions */     ),
  /* node-coi-og_roles_permissions */   ),
  /* node-coi-og_roles_permissions */   'widget' => array(
  /* node-coi-og_roles_permissions */     'module' => 'options',
  /* node-coi-og_roles_permissions */     'settings' => array(
  /* node-coi-og_roles_permissions */       'apply_chosen' => '',
  /* node-coi-og_roles_permissions */     ),
  /* node-coi-og_roles_permissions */     'type' => 'options_select',
  /* node-coi-og_roles_permissions */     'weight' => 18,
  /* node-coi-og_roles_permissions */   ),
  /* node-coi-og_roles_permissions */ );

  // Translatables
  // Included for use with string extractors like potx.
  t(' Help');
  t('Countries');
  t('Description');
  t('Determine if this is an OG group.');
  t('Group');
  t('Group acronym');
  t('Group roles and permissions');
  t('Group visibility');
  t('Groups audience');
  t('Main Image');
  t('Please do not modify this field; Group visibility will be automatically set to its correct value upon saving.');
  t('Recommended Links');
  t('Regions');
  t('Topics');
  t('Who can see this content?');

  return $field_instances;
}
