<?php
/**
 * @file
 * gn2_about.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function gn2_about_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-about_page-body'.
  $field_instances['node-about_page-body'] = array(
  /* node-about_page-body */   'bundle' => 'about_page',
  /* node-about_page-body */   'default_value' => NULL,
  /* node-about_page-body */   'deleted' => 0,
  /* node-about_page-body */   'description' => '',
  /* node-about_page-body */   'display' => array(
  /* node-about_page-body */     'default' => array(
  /* node-about_page-body */       'label' => 'hidden',
  /* node-about_page-body */       'module' => 'text',
  /* node-about_page-body */       'settings' => array(
  /* node-about_page-body */         'field_formatter_class' => '',
  /* node-about_page-body */       ),
  /* node-about_page-body */       'type' => 'text_default',
  /* node-about_page-body */       'weight' => 1,
  /* node-about_page-body */     ),
  /* node-about_page-body */     'events_list' => array(
  /* node-about_page-body */       'label' => 'above',
  /* node-about_page-body */       'settings' => array(),
  /* node-about_page-body */       'type' => 'hidden',
  /* node-about_page-body */       'weight' => 0,
  /* node-about_page-body */     ),
  /* node-about_page-body */     'one_column_teaser' => array(
  /* node-about_page-body */       'label' => 'above',
  /* node-about_page-body */       'settings' => array(),
  /* node-about_page-body */       'type' => 'hidden',
  /* node-about_page-body */       'weight' => 0,
  /* node-about_page-body */     ),
  /* node-about_page-body */     'post_teaser_group_landing_page' => array(
  /* node-about_page-body */       'label' => 'above',
  /* node-about_page-body */       'settings' => array(),
  /* node-about_page-body */       'type' => 'hidden',
  /* node-about_page-body */       'weight' => 0,
  /* node-about_page-body */     ),
  /* node-about_page-body */     'search_teaser' => array(
  /* node-about_page-body */       'label' => 'above',
  /* node-about_page-body */       'settings' => array(),
  /* node-about_page-body */       'type' => 'hidden',
  /* node-about_page-body */       'weight' => 0,
  /* node-about_page-body */     ),
  /* node-about_page-body */     'sidebar_' => array(
  /* node-about_page-body */       'label' => 'above',
  /* node-about_page-body */       'settings' => array(),
  /* node-about_page-body */       'type' => 'hidden',
  /* node-about_page-body */       'weight' => 0,
  /* node-about_page-body */     ),
  /* node-about_page-body */     'sidebar_teaser_v2' => array(
  /* node-about_page-body */       'label' => 'above',
  /* node-about_page-body */       'settings' => array(),
  /* node-about_page-body */       'type' => 'hidden',
  /* node-about_page-body */       'weight' => 0,
  /* node-about_page-body */     ),
  /* node-about_page-body */     'teaser' => array(
  /* node-about_page-body */       'label' => 'hidden',
  /* node-about_page-body */       'module' => 'text',
  /* node-about_page-body */       'settings' => array(
  /* node-about_page-body */         'field_formatter_class' => '',
  /* node-about_page-body */         'trim_length' => 600,
  /* node-about_page-body */       ),
  /* node-about_page-body */       'type' => 'text_summary_or_trimmed',
  /* node-about_page-body */       'weight' => 1,
  /* node-about_page-body */     ),
  /* node-about_page-body */     'teaserthumb' => array(
  /* node-about_page-body */       'label' => 'above',
  /* node-about_page-body */       'settings' => array(),
  /* node-about_page-body */       'type' => 'hidden',
  /* node-about_page-body */       'weight' => 0,
  /* node-about_page-body */     ),
  /* node-about_page-body */     'time_and_location' => array(
  /* node-about_page-body */       'label' => 'above',
  /* node-about_page-body */       'settings' => array(),
  /* node-about_page-body */       'type' => 'hidden',
  /* node-about_page-body */       'weight' => 0,
  /* node-about_page-body */     ),
  /* node-about_page-body */     'title_and_time' => array(
  /* node-about_page-body */       'label' => 'above',
  /* node-about_page-body */       'settings' => array(),
  /* node-about_page-body */       'type' => 'hidden',
  /* node-about_page-body */       'weight' => 0,
  /* node-about_page-body */     ),
  /* node-about_page-body */   ),
  /* node-about_page-body */   'entity_type' => 'node',
  /* node-about_page-body */   'fences_wrapper' => 'div',
  /* node-about_page-body */   'field_name' => 'body',
  /* node-about_page-body */   'label' => 'About',
  /* node-about_page-body */   'required' => 1,
  /* node-about_page-body */   'settings' => array(
  /* node-about_page-body */     'better_formats' => array(
  /* node-about_page-body */       'allowed_formats' => array(
  /* node-about_page-body */         'filtered_html' => 'filtered_html',
  /* node-about_page-body */         'full_html' => 'full_html',
  /* node-about_page-body */         'plain_text' => 'plain_text',
  /* node-about_page-body */       ),
  /* node-about_page-body */       'allowed_formats_toggle' => 0,
  /* node-about_page-body */       'default_order_toggle' => 0,
  /* node-about_page-body */       'default_order_wrapper' => array(
  /* node-about_page-body */         'formats' => array(
  /* node-about_page-body */           'filtered_html' => array(
  /* node-about_page-body */             'weight' => -10,
  /* node-about_page-body */           ),
  /* node-about_page-body */           'full_html' => array(
  /* node-about_page-body */             'weight' => -8,
  /* node-about_page-body */           ),
  /* node-about_page-body */           'plain_text' => array(
  /* node-about_page-body */             'weight' => -9,
  /* node-about_page-body */           ),
  /* node-about_page-body */         ),
  /* node-about_page-body */       ),
  /* node-about_page-body */     ),
  /* node-about_page-body */     'display_summary' => 0,
  /* node-about_page-body */     'text_processing' => 1,
  /* node-about_page-body */     'user_field_privacy' => FALSE,
  /* node-about_page-body */     'user_register_form' => FALSE,
  /* node-about_page-body */   ),
  /* node-about_page-body */   'widget' => array(
  /* node-about_page-body */     'active' => 1,
  /* node-about_page-body */     'module' => 'text',
  /* node-about_page-body */     'settings' => array(
  /* node-about_page-body */       'label_help_description' => '',
  /* node-about_page-body */       'rows' => 10,
  /* node-about_page-body */       'summary_rows' => 5,
  /* node-about_page-body */     ),
  /* node-about_page-body */     'type' => 'text_textarea_with_summary',
  /* node-about_page-body */     'weight' => 2,
  /* node-about_page-body */   ),
  /* node-about_page-body */ );

  // Exported field_instance: 'node-about_page-field_administration'.
  $field_instances['node-about_page-field_administration'] = array(
  /* node-about_page-field_administration */   'bundle' => 'about_page',
  /* node-about_page-field_administration */   'default_value' => NULL,
  /* node-about_page-field_administration */   'deleted' => 0,
  /* node-about_page-field_administration */   'description' => '',
  /* node-about_page-field_administration */   'display' => array(
  /* node-about_page-field_administration */     'default' => array(
  /* node-about_page-field_administration */       'label' => 'above',
  /* node-about_page-field_administration */       'module' => 'text',
  /* node-about_page-field_administration */       'settings' => array(
  /* node-about_page-field_administration */         'field_formatter_class' => '',
  /* node-about_page-field_administration */       ),
  /* node-about_page-field_administration */       'type' => 'text_default',
  /* node-about_page-field_administration */       'weight' => 7,
  /* node-about_page-field_administration */     ),
  /* node-about_page-field_administration */     'events_list' => array(
  /* node-about_page-field_administration */       'label' => 'above',
  /* node-about_page-field_administration */       'settings' => array(),
  /* node-about_page-field_administration */       'type' => 'hidden',
  /* node-about_page-field_administration */       'weight' => 0,
  /* node-about_page-field_administration */     ),
  /* node-about_page-field_administration */     'one_column_teaser' => array(
  /* node-about_page-field_administration */       'label' => 'above',
  /* node-about_page-field_administration */       'settings' => array(),
  /* node-about_page-field_administration */       'type' => 'hidden',
  /* node-about_page-field_administration */       'weight' => 0,
  /* node-about_page-field_administration */     ),
  /* node-about_page-field_administration */     'post_teaser_group_landing_page' => array(
  /* node-about_page-field_administration */       'label' => 'above',
  /* node-about_page-field_administration */       'settings' => array(),
  /* node-about_page-field_administration */       'type' => 'hidden',
  /* node-about_page-field_administration */       'weight' => 0,
  /* node-about_page-field_administration */     ),
  /* node-about_page-field_administration */     'search_teaser' => array(
  /* node-about_page-field_administration */       'label' => 'above',
  /* node-about_page-field_administration */       'settings' => array(),
  /* node-about_page-field_administration */       'type' => 'hidden',
  /* node-about_page-field_administration */       'weight' => 0,
  /* node-about_page-field_administration */     ),
  /* node-about_page-field_administration */     'sidebar_' => array(
  /* node-about_page-field_administration */       'label' => 'above',
  /* node-about_page-field_administration */       'settings' => array(),
  /* node-about_page-field_administration */       'type' => 'hidden',
  /* node-about_page-field_administration */       'weight' => 0,
  /* node-about_page-field_administration */     ),
  /* node-about_page-field_administration */     'sidebar_teaser_v2' => array(
  /* node-about_page-field_administration */       'label' => 'above',
  /* node-about_page-field_administration */       'settings' => array(),
  /* node-about_page-field_administration */       'type' => 'hidden',
  /* node-about_page-field_administration */       'weight' => 0,
  /* node-about_page-field_administration */     ),
  /* node-about_page-field_administration */     'teaser' => array(
  /* node-about_page-field_administration */       'label' => 'above',
  /* node-about_page-field_administration */       'settings' => array(),
  /* node-about_page-field_administration */       'type' => 'hidden',
  /* node-about_page-field_administration */       'weight' => 0,
  /* node-about_page-field_administration */     ),
  /* node-about_page-field_administration */     'teaserthumb' => array(
  /* node-about_page-field_administration */       'label' => 'above',
  /* node-about_page-field_administration */       'settings' => array(),
  /* node-about_page-field_administration */       'type' => 'hidden',
  /* node-about_page-field_administration */       'weight' => 0,
  /* node-about_page-field_administration */     ),
  /* node-about_page-field_administration */     'time_and_location' => array(
  /* node-about_page-field_administration */       'label' => 'above',
  /* node-about_page-field_administration */       'settings' => array(),
  /* node-about_page-field_administration */       'type' => 'hidden',
  /* node-about_page-field_administration */       'weight' => 0,
  /* node-about_page-field_administration */     ),
  /* node-about_page-field_administration */     'title_and_time' => array(
  /* node-about_page-field_administration */       'label' => 'above',
  /* node-about_page-field_administration */       'settings' => array(),
  /* node-about_page-field_administration */       'type' => 'hidden',
  /* node-about_page-field_administration */       'weight' => 0,
  /* node-about_page-field_administration */     ),
  /* node-about_page-field_administration */   ),
  /* node-about_page-field_administration */   'entity_type' => 'node',
  /* node-about_page-field_administration */   'fences_wrapper' => 'div',
  /* node-about_page-field_administration */   'field_name' => 'field_administration',
  /* node-about_page-field_administration */   'label' => 'Administration',
  /* node-about_page-field_administration */   'required' => 0,
  /* node-about_page-field_administration */   'settings' => array(
  /* node-about_page-field_administration */     'better_formats' => array(
  /* node-about_page-field_administration */       'allowed_formats' => array(
  /* node-about_page-field_administration */         'filtered_html' => 'filtered_html',
  /* node-about_page-field_administration */         'full_html' => 'full_html',
  /* node-about_page-field_administration */         'plain_text' => 'plain_text',
  /* node-about_page-field_administration */       ),
  /* node-about_page-field_administration */       'allowed_formats_toggle' => 0,
  /* node-about_page-field_administration */       'default_order_toggle' => 0,
  /* node-about_page-field_administration */       'default_order_wrapper' => array(
  /* node-about_page-field_administration */         'formats' => array(
  /* node-about_page-field_administration */           'filtered_html' => array(
  /* node-about_page-field_administration */             'weight' => -10,
  /* node-about_page-field_administration */           ),
  /* node-about_page-field_administration */           'full_html' => array(
  /* node-about_page-field_administration */             'weight' => -8,
  /* node-about_page-field_administration */           ),
  /* node-about_page-field_administration */           'plain_text' => array(
  /* node-about_page-field_administration */             'weight' => -9,
  /* node-about_page-field_administration */           ),
  /* node-about_page-field_administration */         ),
  /* node-about_page-field_administration */       ),
  /* node-about_page-field_administration */     ),
  /* node-about_page-field_administration */     'text_processing' => 1,
  /* node-about_page-field_administration */     'user_field_privacy' => FALSE,
  /* node-about_page-field_administration */     'user_register_form' => FALSE,
  /* node-about_page-field_administration */   ),
  /* node-about_page-field_administration */   'widget' => array(
  /* node-about_page-field_administration */     'active' => 1,
  /* node-about_page-field_administration */     'module' => 'text',
  /* node-about_page-field_administration */     'settings' => array(
  /* node-about_page-field_administration */       'label_help_description' => '',
  /* node-about_page-field_administration */       'rows' => 5,
  /* node-about_page-field_administration */     ),
  /* node-about_page-field_administration */     'type' => 'text_textarea',
  /* node-about_page-field_administration */     'weight' => 7,
  /* node-about_page-field_administration */   ),
  /* node-about_page-field_administration */ );

  // Exported field_instance: 'node-about_page-field_call_to_action'.
  $field_instances['node-about_page-field_call_to_action'] = array(
  /* node-about_page-field_call_to_action */   'bundle' => 'about_page',
  /* node-about_page-field_call_to_action */   'default_value' => NULL,
  /* node-about_page-field_call_to_action */   'deleted' => 0,
  /* node-about_page-field_call_to_action */   'description' => '',
  /* node-about_page-field_call_to_action */   'display' => array(
  /* node-about_page-field_call_to_action */     'default' => array(
  /* node-about_page-field_call_to_action */       'label' => 'above',
  /* node-about_page-field_call_to_action */       'module' => 'text',
  /* node-about_page-field_call_to_action */       'settings' => array(
  /* node-about_page-field_call_to_action */         'field_formatter_class' => '',
  /* node-about_page-field_call_to_action */       ),
  /* node-about_page-field_call_to_action */       'type' => 'text_default',
  /* node-about_page-field_call_to_action */       'weight' => 3,
  /* node-about_page-field_call_to_action */     ),
  /* node-about_page-field_call_to_action */     'events_list' => array(
  /* node-about_page-field_call_to_action */       'label' => 'above',
  /* node-about_page-field_call_to_action */       'settings' => array(),
  /* node-about_page-field_call_to_action */       'type' => 'hidden',
  /* node-about_page-field_call_to_action */       'weight' => 0,
  /* node-about_page-field_call_to_action */     ),
  /* node-about_page-field_call_to_action */     'one_column_teaser' => array(
  /* node-about_page-field_call_to_action */       'label' => 'above',
  /* node-about_page-field_call_to_action */       'settings' => array(),
  /* node-about_page-field_call_to_action */       'type' => 'hidden',
  /* node-about_page-field_call_to_action */       'weight' => 0,
  /* node-about_page-field_call_to_action */     ),
  /* node-about_page-field_call_to_action */     'post_teaser_group_landing_page' => array(
  /* node-about_page-field_call_to_action */       'label' => 'above',
  /* node-about_page-field_call_to_action */       'settings' => array(),
  /* node-about_page-field_call_to_action */       'type' => 'hidden',
  /* node-about_page-field_call_to_action */       'weight' => 0,
  /* node-about_page-field_call_to_action */     ),
  /* node-about_page-field_call_to_action */     'search_teaser' => array(
  /* node-about_page-field_call_to_action */       'label' => 'above',
  /* node-about_page-field_call_to_action */       'settings' => array(),
  /* node-about_page-field_call_to_action */       'type' => 'hidden',
  /* node-about_page-field_call_to_action */       'weight' => 0,
  /* node-about_page-field_call_to_action */     ),
  /* node-about_page-field_call_to_action */     'sidebar_' => array(
  /* node-about_page-field_call_to_action */       'label' => 'above',
  /* node-about_page-field_call_to_action */       'settings' => array(),
  /* node-about_page-field_call_to_action */       'type' => 'hidden',
  /* node-about_page-field_call_to_action */       'weight' => 0,
  /* node-about_page-field_call_to_action */     ),
  /* node-about_page-field_call_to_action */     'sidebar_teaser_v2' => array(
  /* node-about_page-field_call_to_action */       'label' => 'above',
  /* node-about_page-field_call_to_action */       'settings' => array(),
  /* node-about_page-field_call_to_action */       'type' => 'hidden',
  /* node-about_page-field_call_to_action */       'weight' => 0,
  /* node-about_page-field_call_to_action */     ),
  /* node-about_page-field_call_to_action */     'teaser' => array(
  /* node-about_page-field_call_to_action */       'label' => 'above',
  /* node-about_page-field_call_to_action */       'settings' => array(),
  /* node-about_page-field_call_to_action */       'type' => 'hidden',
  /* node-about_page-field_call_to_action */       'weight' => 0,
  /* node-about_page-field_call_to_action */     ),
  /* node-about_page-field_call_to_action */     'teaserthumb' => array(
  /* node-about_page-field_call_to_action */       'label' => 'above',
  /* node-about_page-field_call_to_action */       'settings' => array(),
  /* node-about_page-field_call_to_action */       'type' => 'hidden',
  /* node-about_page-field_call_to_action */       'weight' => 0,
  /* node-about_page-field_call_to_action */     ),
  /* node-about_page-field_call_to_action */     'time_and_location' => array(
  /* node-about_page-field_call_to_action */       'label' => 'above',
  /* node-about_page-field_call_to_action */       'settings' => array(),
  /* node-about_page-field_call_to_action */       'type' => 'hidden',
  /* node-about_page-field_call_to_action */       'weight' => 0,
  /* node-about_page-field_call_to_action */     ),
  /* node-about_page-field_call_to_action */     'title_and_time' => array(
  /* node-about_page-field_call_to_action */       'label' => 'above',
  /* node-about_page-field_call_to_action */       'settings' => array(),
  /* node-about_page-field_call_to_action */       'type' => 'hidden',
  /* node-about_page-field_call_to_action */       'weight' => 0,
  /* node-about_page-field_call_to_action */     ),
  /* node-about_page-field_call_to_action */   ),
  /* node-about_page-field_call_to_action */   'entity_type' => 'node',
  /* node-about_page-field_call_to_action */   'fences_wrapper' => 'div',
  /* node-about_page-field_call_to_action */   'field_name' => 'field_call_to_action',
  /* node-about_page-field_call_to_action */   'label' => 'Call to Action',
  /* node-about_page-field_call_to_action */   'required' => 0,
  /* node-about_page-field_call_to_action */   'settings' => array(
  /* node-about_page-field_call_to_action */     'better_formats' => array(
  /* node-about_page-field_call_to_action */       'allowed_formats' => array(
  /* node-about_page-field_call_to_action */         'filtered_html' => 'filtered_html',
  /* node-about_page-field_call_to_action */         'full_html' => 'full_html',
  /* node-about_page-field_call_to_action */         'plain_text' => 'plain_text',
  /* node-about_page-field_call_to_action */       ),
  /* node-about_page-field_call_to_action */       'allowed_formats_toggle' => 0,
  /* node-about_page-field_call_to_action */       'default_order_toggle' => 0,
  /* node-about_page-field_call_to_action */       'default_order_wrapper' => array(
  /* node-about_page-field_call_to_action */         'formats' => array(
  /* node-about_page-field_call_to_action */           'filtered_html' => array(
  /* node-about_page-field_call_to_action */             'weight' => -10,
  /* node-about_page-field_call_to_action */           ),
  /* node-about_page-field_call_to_action */           'full_html' => array(
  /* node-about_page-field_call_to_action */             'weight' => -8,
  /* node-about_page-field_call_to_action */           ),
  /* node-about_page-field_call_to_action */           'plain_text' => array(
  /* node-about_page-field_call_to_action */             'weight' => -9,
  /* node-about_page-field_call_to_action */           ),
  /* node-about_page-field_call_to_action */         ),
  /* node-about_page-field_call_to_action */       ),
  /* node-about_page-field_call_to_action */     ),
  /* node-about_page-field_call_to_action */     'text_processing' => 1,
  /* node-about_page-field_call_to_action */     'user_field_privacy' => FALSE,
  /* node-about_page-field_call_to_action */     'user_register_form' => FALSE,
  /* node-about_page-field_call_to_action */   ),
  /* node-about_page-field_call_to_action */   'widget' => array(
  /* node-about_page-field_call_to_action */     'active' => 1,
  /* node-about_page-field_call_to_action */     'module' => 'text',
  /* node-about_page-field_call_to_action */     'settings' => array(
  /* node-about_page-field_call_to_action */       'label_help_description' => '',
  /* node-about_page-field_call_to_action */       'rows' => 5,
  /* node-about_page-field_call_to_action */     ),
  /* node-about_page-field_call_to_action */     'type' => 'text_textarea',
  /* node-about_page-field_call_to_action */     'weight' => 4,
  /* node-about_page-field_call_to_action */   ),
  /* node-about_page-field_call_to_action */ );

  // Exported field_instance: 'node-about_page-field_contact_information'.
  $field_instances['node-about_page-field_contact_information'] = array(
  /* node-about_page-field_contact_information */   'bundle' => 'about_page',
  /* node-about_page-field_contact_information */   'default_value' => NULL,
  /* node-about_page-field_contact_information */   'deleted' => 0,
  /* node-about_page-field_contact_information */   'description' => '',
  /* node-about_page-field_contact_information */   'display' => array(
  /* node-about_page-field_contact_information */     'default' => array(
  /* node-about_page-field_contact_information */       'label' => 'above',
  /* node-about_page-field_contact_information */       'module' => 'text',
  /* node-about_page-field_contact_information */       'settings' => array(
  /* node-about_page-field_contact_information */         'field_formatter_class' => '',
  /* node-about_page-field_contact_information */       ),
  /* node-about_page-field_contact_information */       'type' => 'text_default',
  /* node-about_page-field_contact_information */       'weight' => 2,
  /* node-about_page-field_contact_information */     ),
  /* node-about_page-field_contact_information */     'events_list' => array(
  /* node-about_page-field_contact_information */       'label' => 'above',
  /* node-about_page-field_contact_information */       'settings' => array(),
  /* node-about_page-field_contact_information */       'type' => 'hidden',
  /* node-about_page-field_contact_information */       'weight' => 0,
  /* node-about_page-field_contact_information */     ),
  /* node-about_page-field_contact_information */     'one_column_teaser' => array(
  /* node-about_page-field_contact_information */       'label' => 'above',
  /* node-about_page-field_contact_information */       'settings' => array(),
  /* node-about_page-field_contact_information */       'type' => 'hidden',
  /* node-about_page-field_contact_information */       'weight' => 0,
  /* node-about_page-field_contact_information */     ),
  /* node-about_page-field_contact_information */     'post_teaser_group_landing_page' => array(
  /* node-about_page-field_contact_information */       'label' => 'above',
  /* node-about_page-field_contact_information */       'settings' => array(),
  /* node-about_page-field_contact_information */       'type' => 'hidden',
  /* node-about_page-field_contact_information */       'weight' => 0,
  /* node-about_page-field_contact_information */     ),
  /* node-about_page-field_contact_information */     'search_teaser' => array(
  /* node-about_page-field_contact_information */       'label' => 'above',
  /* node-about_page-field_contact_information */       'settings' => array(),
  /* node-about_page-field_contact_information */       'type' => 'hidden',
  /* node-about_page-field_contact_information */       'weight' => 0,
  /* node-about_page-field_contact_information */     ),
  /* node-about_page-field_contact_information */     'sidebar_' => array(
  /* node-about_page-field_contact_information */       'label' => 'above',
  /* node-about_page-field_contact_information */       'settings' => array(),
  /* node-about_page-field_contact_information */       'type' => 'hidden',
  /* node-about_page-field_contact_information */       'weight' => 0,
  /* node-about_page-field_contact_information */     ),
  /* node-about_page-field_contact_information */     'sidebar_teaser_v2' => array(
  /* node-about_page-field_contact_information */       'label' => 'above',
  /* node-about_page-field_contact_information */       'settings' => array(),
  /* node-about_page-field_contact_information */       'type' => 'hidden',
  /* node-about_page-field_contact_information */       'weight' => 0,
  /* node-about_page-field_contact_information */     ),
  /* node-about_page-field_contact_information */     'teaser' => array(
  /* node-about_page-field_contact_information */       'label' => 'above',
  /* node-about_page-field_contact_information */       'settings' => array(),
  /* node-about_page-field_contact_information */       'type' => 'hidden',
  /* node-about_page-field_contact_information */       'weight' => 0,
  /* node-about_page-field_contact_information */     ),
  /* node-about_page-field_contact_information */     'teaserthumb' => array(
  /* node-about_page-field_contact_information */       'label' => 'above',
  /* node-about_page-field_contact_information */       'settings' => array(),
  /* node-about_page-field_contact_information */       'type' => 'hidden',
  /* node-about_page-field_contact_information */       'weight' => 0,
  /* node-about_page-field_contact_information */     ),
  /* node-about_page-field_contact_information */     'time_and_location' => array(
  /* node-about_page-field_contact_information */       'label' => 'above',
  /* node-about_page-field_contact_information */       'settings' => array(),
  /* node-about_page-field_contact_information */       'type' => 'hidden',
  /* node-about_page-field_contact_information */       'weight' => 0,
  /* node-about_page-field_contact_information */     ),
  /* node-about_page-field_contact_information */     'title_and_time' => array(
  /* node-about_page-field_contact_information */       'label' => 'above',
  /* node-about_page-field_contact_information */       'settings' => array(),
  /* node-about_page-field_contact_information */       'type' => 'hidden',
  /* node-about_page-field_contact_information */       'weight' => 0,
  /* node-about_page-field_contact_information */     ),
  /* node-about_page-field_contact_information */   ),
  /* node-about_page-field_contact_information */   'entity_type' => 'node',
  /* node-about_page-field_contact_information */   'fences_wrapper' => 'div',
  /* node-about_page-field_contact_information */   'field_name' => 'field_contact_information',
  /* node-about_page-field_contact_information */   'label' => 'Contact Information',
  /* node-about_page-field_contact_information */   'required' => 0,
  /* node-about_page-field_contact_information */   'settings' => array(
  /* node-about_page-field_contact_information */     'better_formats' => array(
  /* node-about_page-field_contact_information */       'allowed_formats' => array(
  /* node-about_page-field_contact_information */         'filtered_html' => 'filtered_html',
  /* node-about_page-field_contact_information */         'full_html' => 'full_html',
  /* node-about_page-field_contact_information */         'plain_text' => 'plain_text',
  /* node-about_page-field_contact_information */       ),
  /* node-about_page-field_contact_information */       'allowed_formats_toggle' => 0,
  /* node-about_page-field_contact_information */       'default_order_toggle' => 0,
  /* node-about_page-field_contact_information */       'default_order_wrapper' => array(
  /* node-about_page-field_contact_information */         'formats' => array(
  /* node-about_page-field_contact_information */           'filtered_html' => array(
  /* node-about_page-field_contact_information */             'weight' => -10,
  /* node-about_page-field_contact_information */           ),
  /* node-about_page-field_contact_information */           'full_html' => array(
  /* node-about_page-field_contact_information */             'weight' => -8,
  /* node-about_page-field_contact_information */           ),
  /* node-about_page-field_contact_information */           'plain_text' => array(
  /* node-about_page-field_contact_information */             'weight' => -9,
  /* node-about_page-field_contact_information */           ),
  /* node-about_page-field_contact_information */         ),
  /* node-about_page-field_contact_information */       ),
  /* node-about_page-field_contact_information */     ),
  /* node-about_page-field_contact_information */     'text_processing' => 1,
  /* node-about_page-field_contact_information */     'user_field_privacy' => FALSE,
  /* node-about_page-field_contact_information */     'user_register_form' => FALSE,
  /* node-about_page-field_contact_information */   ),
  /* node-about_page-field_contact_information */   'widget' => array(
  /* node-about_page-field_contact_information */     'active' => 1,
  /* node-about_page-field_contact_information */     'module' => 'text',
  /* node-about_page-field_contact_information */     'settings' => array(
  /* node-about_page-field_contact_information */       'label_help_description' => '',
  /* node-about_page-field_contact_information */       'rows' => 5,
  /* node-about_page-field_contact_information */     ),
  /* node-about_page-field_contact_information */     'type' => 'text_textarea',
  /* node-about_page-field_contact_information */     'weight' => 15,
  /* node-about_page-field_contact_information */   ),
  /* node-about_page-field_contact_information */ );

  // Exported field_instance: 'node-about_page-field_employment'.
  $field_instances['node-about_page-field_employment'] = array(
  /* node-about_page-field_employment */   'bundle' => 'about_page',
  /* node-about_page-field_employment */   'default_value' => NULL,
  /* node-about_page-field_employment */   'deleted' => 0,
  /* node-about_page-field_employment */   'description' => '',
  /* node-about_page-field_employment */   'display' => array(
  /* node-about_page-field_employment */     'default' => array(
  /* node-about_page-field_employment */       'label' => 'above',
  /* node-about_page-field_employment */       'module' => 'text',
  /* node-about_page-field_employment */       'settings' => array(
  /* node-about_page-field_employment */         'field_formatter_class' => '',
  /* node-about_page-field_employment */       ),
  /* node-about_page-field_employment */       'type' => 'text_default',
  /* node-about_page-field_employment */       'weight' => 8,
  /* node-about_page-field_employment */     ),
  /* node-about_page-field_employment */     'events_list' => array(
  /* node-about_page-field_employment */       'label' => 'above',
  /* node-about_page-field_employment */       'settings' => array(),
  /* node-about_page-field_employment */       'type' => 'hidden',
  /* node-about_page-field_employment */       'weight' => 0,
  /* node-about_page-field_employment */     ),
  /* node-about_page-field_employment */     'one_column_teaser' => array(
  /* node-about_page-field_employment */       'label' => 'above',
  /* node-about_page-field_employment */       'settings' => array(),
  /* node-about_page-field_employment */       'type' => 'hidden',
  /* node-about_page-field_employment */       'weight' => 0,
  /* node-about_page-field_employment */     ),
  /* node-about_page-field_employment */     'post_teaser_group_landing_page' => array(
  /* node-about_page-field_employment */       'label' => 'above',
  /* node-about_page-field_employment */       'settings' => array(),
  /* node-about_page-field_employment */       'type' => 'hidden',
  /* node-about_page-field_employment */       'weight' => 0,
  /* node-about_page-field_employment */     ),
  /* node-about_page-field_employment */     'search_teaser' => array(
  /* node-about_page-field_employment */       'label' => 'above',
  /* node-about_page-field_employment */       'settings' => array(),
  /* node-about_page-field_employment */       'type' => 'hidden',
  /* node-about_page-field_employment */       'weight' => 0,
  /* node-about_page-field_employment */     ),
  /* node-about_page-field_employment */     'sidebar_' => array(
  /* node-about_page-field_employment */       'label' => 'above',
  /* node-about_page-field_employment */       'settings' => array(),
  /* node-about_page-field_employment */       'type' => 'hidden',
  /* node-about_page-field_employment */       'weight' => 0,
  /* node-about_page-field_employment */     ),
  /* node-about_page-field_employment */     'sidebar_teaser_v2' => array(
  /* node-about_page-field_employment */       'label' => 'above',
  /* node-about_page-field_employment */       'settings' => array(),
  /* node-about_page-field_employment */       'type' => 'hidden',
  /* node-about_page-field_employment */       'weight' => 0,
  /* node-about_page-field_employment */     ),
  /* node-about_page-field_employment */     'teaser' => array(
  /* node-about_page-field_employment */       'label' => 'above',
  /* node-about_page-field_employment */       'settings' => array(),
  /* node-about_page-field_employment */       'type' => 'hidden',
  /* node-about_page-field_employment */       'weight' => 0,
  /* node-about_page-field_employment */     ),
  /* node-about_page-field_employment */     'teaserthumb' => array(
  /* node-about_page-field_employment */       'label' => 'above',
  /* node-about_page-field_employment */       'settings' => array(),
  /* node-about_page-field_employment */       'type' => 'hidden',
  /* node-about_page-field_employment */       'weight' => 0,
  /* node-about_page-field_employment */     ),
  /* node-about_page-field_employment */     'time_and_location' => array(
  /* node-about_page-field_employment */       'label' => 'above',
  /* node-about_page-field_employment */       'settings' => array(),
  /* node-about_page-field_employment */       'type' => 'hidden',
  /* node-about_page-field_employment */       'weight' => 0,
  /* node-about_page-field_employment */     ),
  /* node-about_page-field_employment */     'title_and_time' => array(
  /* node-about_page-field_employment */       'label' => 'above',
  /* node-about_page-field_employment */       'settings' => array(),
  /* node-about_page-field_employment */       'type' => 'hidden',
  /* node-about_page-field_employment */       'weight' => 0,
  /* node-about_page-field_employment */     ),
  /* node-about_page-field_employment */   ),
  /* node-about_page-field_employment */   'entity_type' => 'node',
  /* node-about_page-field_employment */   'fences_wrapper' => 'div',
  /* node-about_page-field_employment */   'field_name' => 'field_employment',
  /* node-about_page-field_employment */   'label' => 'Employment',
  /* node-about_page-field_employment */   'required' => 0,
  /* node-about_page-field_employment */   'settings' => array(
  /* node-about_page-field_employment */     'better_formats' => array(
  /* node-about_page-field_employment */       'allowed_formats' => array(
  /* node-about_page-field_employment */         'filtered_html' => 'filtered_html',
  /* node-about_page-field_employment */         'full_html' => 'full_html',
  /* node-about_page-field_employment */         'plain_text' => 'plain_text',
  /* node-about_page-field_employment */       ),
  /* node-about_page-field_employment */       'allowed_formats_toggle' => 0,
  /* node-about_page-field_employment */       'default_order_toggle' => 0,
  /* node-about_page-field_employment */       'default_order_wrapper' => array(
  /* node-about_page-field_employment */         'formats' => array(
  /* node-about_page-field_employment */           'filtered_html' => array(
  /* node-about_page-field_employment */             'weight' => -10,
  /* node-about_page-field_employment */           ),
  /* node-about_page-field_employment */           'full_html' => array(
  /* node-about_page-field_employment */             'weight' => -8,
  /* node-about_page-field_employment */           ),
  /* node-about_page-field_employment */           'plain_text' => array(
  /* node-about_page-field_employment */             'weight' => -9,
  /* node-about_page-field_employment */           ),
  /* node-about_page-field_employment */         ),
  /* node-about_page-field_employment */       ),
  /* node-about_page-field_employment */     ),
  /* node-about_page-field_employment */     'text_processing' => 1,
  /* node-about_page-field_employment */     'user_field_privacy' => FALSE,
  /* node-about_page-field_employment */     'user_register_form' => FALSE,
  /* node-about_page-field_employment */   ),
  /* node-about_page-field_employment */   'widget' => array(
  /* node-about_page-field_employment */     'active' => 1,
  /* node-about_page-field_employment */     'module' => 'text',
  /* node-about_page-field_employment */     'settings' => array(
  /* node-about_page-field_employment */       'label_help_description' => '',
  /* node-about_page-field_employment */       'rows' => 5,
  /* node-about_page-field_employment */     ),
  /* node-about_page-field_employment */     'type' => 'text_textarea',
  /* node-about_page-field_employment */     'weight' => 8,
  /* node-about_page-field_employment */   ),
  /* node-about_page-field_employment */ );

  // Exported field_instance: 'node-about_page-field_facebook'.
  $field_instances['node-about_page-field_facebook'] = array(
  /* node-about_page-field_facebook */   'bundle' => 'about_page',
  /* node-about_page-field_facebook */   'default_value' => NULL,
  /* node-about_page-field_facebook */   'deleted' => 0,
  /* node-about_page-field_facebook */   'description' => '',
  /* node-about_page-field_facebook */   'display' => array(
  /* node-about_page-field_facebook */     'default' => array(
  /* node-about_page-field_facebook */       'label' => 'above',
  /* node-about_page-field_facebook */       'module' => 'text',
  /* node-about_page-field_facebook */       'settings' => array(
  /* node-about_page-field_facebook */         'field_formatter_class' => '',
  /* node-about_page-field_facebook */       ),
  /* node-about_page-field_facebook */       'type' => 'text_default',
  /* node-about_page-field_facebook */       'weight' => 11,
  /* node-about_page-field_facebook */     ),
  /* node-about_page-field_facebook */     'events_list' => array(
  /* node-about_page-field_facebook */       'label' => 'above',
  /* node-about_page-field_facebook */       'settings' => array(),
  /* node-about_page-field_facebook */       'type' => 'hidden',
  /* node-about_page-field_facebook */       'weight' => 0,
  /* node-about_page-field_facebook */     ),
  /* node-about_page-field_facebook */     'one_column_teaser' => array(
  /* node-about_page-field_facebook */       'label' => 'above',
  /* node-about_page-field_facebook */       'settings' => array(),
  /* node-about_page-field_facebook */       'type' => 'hidden',
  /* node-about_page-field_facebook */       'weight' => 0,
  /* node-about_page-field_facebook */     ),
  /* node-about_page-field_facebook */     'post_teaser_group_landing_page' => array(
  /* node-about_page-field_facebook */       'label' => 'above',
  /* node-about_page-field_facebook */       'settings' => array(),
  /* node-about_page-field_facebook */       'type' => 'hidden',
  /* node-about_page-field_facebook */       'weight' => 0,
  /* node-about_page-field_facebook */     ),
  /* node-about_page-field_facebook */     'search_teaser' => array(
  /* node-about_page-field_facebook */       'label' => 'above',
  /* node-about_page-field_facebook */       'settings' => array(),
  /* node-about_page-field_facebook */       'type' => 'hidden',
  /* node-about_page-field_facebook */       'weight' => 0,
  /* node-about_page-field_facebook */     ),
  /* node-about_page-field_facebook */     'sidebar_' => array(
  /* node-about_page-field_facebook */       'label' => 'above',
  /* node-about_page-field_facebook */       'settings' => array(),
  /* node-about_page-field_facebook */       'type' => 'hidden',
  /* node-about_page-field_facebook */       'weight' => 0,
  /* node-about_page-field_facebook */     ),
  /* node-about_page-field_facebook */     'sidebar_teaser_v2' => array(
  /* node-about_page-field_facebook */       'label' => 'above',
  /* node-about_page-field_facebook */       'settings' => array(),
  /* node-about_page-field_facebook */       'type' => 'hidden',
  /* node-about_page-field_facebook */       'weight' => 0,
  /* node-about_page-field_facebook */     ),
  /* node-about_page-field_facebook */     'teaser' => array(
  /* node-about_page-field_facebook */       'label' => 'above',
  /* node-about_page-field_facebook */       'settings' => array(),
  /* node-about_page-field_facebook */       'type' => 'hidden',
  /* node-about_page-field_facebook */       'weight' => 0,
  /* node-about_page-field_facebook */     ),
  /* node-about_page-field_facebook */     'teaserthumb' => array(
  /* node-about_page-field_facebook */       'label' => 'above',
  /* node-about_page-field_facebook */       'settings' => array(),
  /* node-about_page-field_facebook */       'type' => 'hidden',
  /* node-about_page-field_facebook */       'weight' => 0,
  /* node-about_page-field_facebook */     ),
  /* node-about_page-field_facebook */     'time_and_location' => array(
  /* node-about_page-field_facebook */       'label' => 'above',
  /* node-about_page-field_facebook */       'settings' => array(),
  /* node-about_page-field_facebook */       'type' => 'hidden',
  /* node-about_page-field_facebook */       'weight' => 0,
  /* node-about_page-field_facebook */     ),
  /* node-about_page-field_facebook */     'title_and_time' => array(
  /* node-about_page-field_facebook */       'label' => 'above',
  /* node-about_page-field_facebook */       'settings' => array(),
  /* node-about_page-field_facebook */       'type' => 'hidden',
  /* node-about_page-field_facebook */       'weight' => 0,
  /* node-about_page-field_facebook */     ),
  /* node-about_page-field_facebook */   ),
  /* node-about_page-field_facebook */   'entity_type' => 'node',
  /* node-about_page-field_facebook */   'fences_wrapper' => 'div',
  /* node-about_page-field_facebook */   'field_name' => 'field_facebook',
  /* node-about_page-field_facebook */   'label' => 'Facebook',
  /* node-about_page-field_facebook */   'required' => 0,
  /* node-about_page-field_facebook */   'settings' => array(
  /* node-about_page-field_facebook */     'better_formats' => array(
  /* node-about_page-field_facebook */       'allowed_formats' => array(
  /* node-about_page-field_facebook */         'filtered_html' => 'filtered_html',
  /* node-about_page-field_facebook */         'full_html' => 'full_html',
  /* node-about_page-field_facebook */         'plain_text' => 'plain_text',
  /* node-about_page-field_facebook */       ),
  /* node-about_page-field_facebook */       'allowed_formats_toggle' => 0,
  /* node-about_page-field_facebook */       'default_order_toggle' => 0,
  /* node-about_page-field_facebook */       'default_order_wrapper' => array(
  /* node-about_page-field_facebook */         'formats' => array(
  /* node-about_page-field_facebook */           'filtered_html' => array(
  /* node-about_page-field_facebook */             'weight' => -10,
  /* node-about_page-field_facebook */           ),
  /* node-about_page-field_facebook */           'full_html' => array(
  /* node-about_page-field_facebook */             'weight' => -8,
  /* node-about_page-field_facebook */           ),
  /* node-about_page-field_facebook */           'plain_text' => array(
  /* node-about_page-field_facebook */             'weight' => -9,
  /* node-about_page-field_facebook */           ),
  /* node-about_page-field_facebook */         ),
  /* node-about_page-field_facebook */       ),
  /* node-about_page-field_facebook */     ),
  /* node-about_page-field_facebook */     'text_processing' => 0,
  /* node-about_page-field_facebook */     'user_field_privacy' => FALSE,
  /* node-about_page-field_facebook */     'user_register_form' => FALSE,
  /* node-about_page-field_facebook */   ),
  /* node-about_page-field_facebook */   'widget' => array(
  /* node-about_page-field_facebook */     'active' => 1,
  /* node-about_page-field_facebook */     'module' => 'text',
  /* node-about_page-field_facebook */     'settings' => array(
  /* node-about_page-field_facebook */       'label_help_description' => '',
  /* node-about_page-field_facebook */       'size' => 60,
  /* node-about_page-field_facebook */     ),
  /* node-about_page-field_facebook */     'type' => 'text_textfield',
  /* node-about_page-field_facebook */     'weight' => 16,
  /* node-about_page-field_facebook */   ),
  /* node-about_page-field_facebook */ );

  // Exported field_instance: 'node-about_page-field_gn2_simple_access'.
  $field_instances['node-about_page-field_gn2_simple_access'] = array(
  /* node-about_page-field_gn2_simple_access */   'bundle' => 'about_page',
  /* node-about_page-field_gn2_simple_access */   'default_value' => array(
  /* node-about_page-field_gn2_simple_access */     0 => array(
  /* node-about_page-field_gn2_simple_access */       'value' => 'sitewide',
  /* node-about_page-field_gn2_simple_access */     ),
  /* node-about_page-field_gn2_simple_access */   ),
  /* node-about_page-field_gn2_simple_access */   'deleted' => 0,
  /* node-about_page-field_gn2_simple_access */   'description' => '',
  /* node-about_page-field_gn2_simple_access */   'display' => array(
  /* node-about_page-field_gn2_simple_access */     'default' => array(
  /* node-about_page-field_gn2_simple_access */       'label' => 'above',
  /* node-about_page-field_gn2_simple_access */       'module' => 'list',
  /* node-about_page-field_gn2_simple_access */       'settings' => array(
  /* node-about_page-field_gn2_simple_access */         'field_formatter_class' => '',
  /* node-about_page-field_gn2_simple_access */       ),
  /* node-about_page-field_gn2_simple_access */       'type' => 'list_default',
  /* node-about_page-field_gn2_simple_access */       'weight' => 17,
  /* node-about_page-field_gn2_simple_access */     ),
  /* node-about_page-field_gn2_simple_access */     'events_list' => array(
  /* node-about_page-field_gn2_simple_access */       'label' => 'above',
  /* node-about_page-field_gn2_simple_access */       'settings' => array(),
  /* node-about_page-field_gn2_simple_access */       'type' => 'hidden',
  /* node-about_page-field_gn2_simple_access */       'weight' => 0,
  /* node-about_page-field_gn2_simple_access */     ),
  /* node-about_page-field_gn2_simple_access */     'one_column_teaser' => array(
  /* node-about_page-field_gn2_simple_access */       'label' => 'above',
  /* node-about_page-field_gn2_simple_access */       'settings' => array(),
  /* node-about_page-field_gn2_simple_access */       'type' => 'hidden',
  /* node-about_page-field_gn2_simple_access */       'weight' => 0,
  /* node-about_page-field_gn2_simple_access */     ),
  /* node-about_page-field_gn2_simple_access */     'post_teaser_group_landing_page' => array(
  /* node-about_page-field_gn2_simple_access */       'label' => 'above',
  /* node-about_page-field_gn2_simple_access */       'settings' => array(),
  /* node-about_page-field_gn2_simple_access */       'type' => 'hidden',
  /* node-about_page-field_gn2_simple_access */       'weight' => 0,
  /* node-about_page-field_gn2_simple_access */     ),
  /* node-about_page-field_gn2_simple_access */     'search_teaser' => array(
  /* node-about_page-field_gn2_simple_access */       'label' => 'above',
  /* node-about_page-field_gn2_simple_access */       'settings' => array(),
  /* node-about_page-field_gn2_simple_access */       'type' => 'hidden',
  /* node-about_page-field_gn2_simple_access */       'weight' => 0,
  /* node-about_page-field_gn2_simple_access */     ),
  /* node-about_page-field_gn2_simple_access */     'sidebar_' => array(
  /* node-about_page-field_gn2_simple_access */       'label' => 'above',
  /* node-about_page-field_gn2_simple_access */       'settings' => array(),
  /* node-about_page-field_gn2_simple_access */       'type' => 'hidden',
  /* node-about_page-field_gn2_simple_access */       'weight' => 0,
  /* node-about_page-field_gn2_simple_access */     ),
  /* node-about_page-field_gn2_simple_access */     'sidebar_teaser_v2' => array(
  /* node-about_page-field_gn2_simple_access */       'label' => 'above',
  /* node-about_page-field_gn2_simple_access */       'settings' => array(),
  /* node-about_page-field_gn2_simple_access */       'type' => 'hidden',
  /* node-about_page-field_gn2_simple_access */       'weight' => 0,
  /* node-about_page-field_gn2_simple_access */     ),
  /* node-about_page-field_gn2_simple_access */     'teaser' => array(
  /* node-about_page-field_gn2_simple_access */       'label' => 'above',
  /* node-about_page-field_gn2_simple_access */       'settings' => array(),
  /* node-about_page-field_gn2_simple_access */       'type' => 'hidden',
  /* node-about_page-field_gn2_simple_access */       'weight' => 0,
  /* node-about_page-field_gn2_simple_access */     ),
  /* node-about_page-field_gn2_simple_access */     'teaserthumb' => array(
  /* node-about_page-field_gn2_simple_access */       'label' => 'above',
  /* node-about_page-field_gn2_simple_access */       'settings' => array(),
  /* node-about_page-field_gn2_simple_access */       'type' => 'hidden',
  /* node-about_page-field_gn2_simple_access */       'weight' => 0,
  /* node-about_page-field_gn2_simple_access */     ),
  /* node-about_page-field_gn2_simple_access */     'time_and_location' => array(
  /* node-about_page-field_gn2_simple_access */       'label' => 'above',
  /* node-about_page-field_gn2_simple_access */       'settings' => array(),
  /* node-about_page-field_gn2_simple_access */       'type' => 'hidden',
  /* node-about_page-field_gn2_simple_access */       'weight' => 0,
  /* node-about_page-field_gn2_simple_access */     ),
  /* node-about_page-field_gn2_simple_access */     'title_and_time' => array(
  /* node-about_page-field_gn2_simple_access */       'label' => 'above',
  /* node-about_page-field_gn2_simple_access */       'settings' => array(),
  /* node-about_page-field_gn2_simple_access */       'type' => 'hidden',
  /* node-about_page-field_gn2_simple_access */       'weight' => 0,
  /* node-about_page-field_gn2_simple_access */     ),
  /* node-about_page-field_gn2_simple_access */   ),
  /* node-about_page-field_gn2_simple_access */   'entity_type' => 'node',
  /* node-about_page-field_gn2_simple_access */   'fences_wrapper' => 'div',
  /* node-about_page-field_gn2_simple_access */   'field_name' => 'field_gn2_simple_access',
  /* node-about_page-field_gn2_simple_access */   'label' => 'Who can see this content?',
  /* node-about_page-field_gn2_simple_access */   'required' => 0,
  /* node-about_page-field_gn2_simple_access */   'settings' => array(
  /* node-about_page-field_gn2_simple_access */     'user_register_form' => FALSE,
  /* node-about_page-field_gn2_simple_access */   ),
  /* node-about_page-field_gn2_simple_access */   'widget' => array(
  /* node-about_page-field_gn2_simple_access */     'active' => 1,
  /* node-about_page-field_gn2_simple_access */     'module' => 'options',
  /* node-about_page-field_gn2_simple_access */     'settings' => array(),
  /* node-about_page-field_gn2_simple_access */     'type' => 'options_buttons',
  /* node-about_page-field_gn2_simple_access */     'weight' => 5,
  /* node-about_page-field_gn2_simple_access */   ),
  /* node-about_page-field_gn2_simple_access */ );

  // Exported field_instance: 'node-about_page-field_google_plus'.
  $field_instances['node-about_page-field_google_plus'] = array(
  /* node-about_page-field_google_plus */   'bundle' => 'about_page',
  /* node-about_page-field_google_plus */   'default_value' => NULL,
  /* node-about_page-field_google_plus */   'deleted' => 0,
  /* node-about_page-field_google_plus */   'description' => '',
  /* node-about_page-field_google_plus */   'display' => array(
  /* node-about_page-field_google_plus */     'default' => array(
  /* node-about_page-field_google_plus */       'label' => 'above',
  /* node-about_page-field_google_plus */       'module' => 'text',
  /* node-about_page-field_google_plus */       'settings' => array(
  /* node-about_page-field_google_plus */         'field_formatter_class' => '',
  /* node-about_page-field_google_plus */       ),
  /* node-about_page-field_google_plus */       'type' => 'text_default',
  /* node-about_page-field_google_plus */       'weight' => 14,
  /* node-about_page-field_google_plus */     ),
  /* node-about_page-field_google_plus */     'events_list' => array(
  /* node-about_page-field_google_plus */       'label' => 'above',
  /* node-about_page-field_google_plus */       'settings' => array(),
  /* node-about_page-field_google_plus */       'type' => 'hidden',
  /* node-about_page-field_google_plus */       'weight' => 0,
  /* node-about_page-field_google_plus */     ),
  /* node-about_page-field_google_plus */     'one_column_teaser' => array(
  /* node-about_page-field_google_plus */       'label' => 'above',
  /* node-about_page-field_google_plus */       'settings' => array(),
  /* node-about_page-field_google_plus */       'type' => 'hidden',
  /* node-about_page-field_google_plus */       'weight' => 0,
  /* node-about_page-field_google_plus */     ),
  /* node-about_page-field_google_plus */     'post_teaser_group_landing_page' => array(
  /* node-about_page-field_google_plus */       'label' => 'above',
  /* node-about_page-field_google_plus */       'settings' => array(),
  /* node-about_page-field_google_plus */       'type' => 'hidden',
  /* node-about_page-field_google_plus */       'weight' => 0,
  /* node-about_page-field_google_plus */     ),
  /* node-about_page-field_google_plus */     'search_teaser' => array(
  /* node-about_page-field_google_plus */       'label' => 'above',
  /* node-about_page-field_google_plus */       'settings' => array(),
  /* node-about_page-field_google_plus */       'type' => 'hidden',
  /* node-about_page-field_google_plus */       'weight' => 0,
  /* node-about_page-field_google_plus */     ),
  /* node-about_page-field_google_plus */     'sidebar_' => array(
  /* node-about_page-field_google_plus */       'label' => 'above',
  /* node-about_page-field_google_plus */       'settings' => array(),
  /* node-about_page-field_google_plus */       'type' => 'hidden',
  /* node-about_page-field_google_plus */       'weight' => 0,
  /* node-about_page-field_google_plus */     ),
  /* node-about_page-field_google_plus */     'sidebar_teaser_v2' => array(
  /* node-about_page-field_google_plus */       'label' => 'above',
  /* node-about_page-field_google_plus */       'settings' => array(),
  /* node-about_page-field_google_plus */       'type' => 'hidden',
  /* node-about_page-field_google_plus */       'weight' => 0,
  /* node-about_page-field_google_plus */     ),
  /* node-about_page-field_google_plus */     'teaser' => array(
  /* node-about_page-field_google_plus */       'label' => 'above',
  /* node-about_page-field_google_plus */       'settings' => array(),
  /* node-about_page-field_google_plus */       'type' => 'hidden',
  /* node-about_page-field_google_plus */       'weight' => 0,
  /* node-about_page-field_google_plus */     ),
  /* node-about_page-field_google_plus */     'teaserthumb' => array(
  /* node-about_page-field_google_plus */       'label' => 'above',
  /* node-about_page-field_google_plus */       'settings' => array(),
  /* node-about_page-field_google_plus */       'type' => 'hidden',
  /* node-about_page-field_google_plus */       'weight' => 0,
  /* node-about_page-field_google_plus */     ),
  /* node-about_page-field_google_plus */     'time_and_location' => array(
  /* node-about_page-field_google_plus */       'label' => 'above',
  /* node-about_page-field_google_plus */       'settings' => array(),
  /* node-about_page-field_google_plus */       'type' => 'hidden',
  /* node-about_page-field_google_plus */       'weight' => 0,
  /* node-about_page-field_google_plus */     ),
  /* node-about_page-field_google_plus */     'title_and_time' => array(
  /* node-about_page-field_google_plus */       'label' => 'above',
  /* node-about_page-field_google_plus */       'settings' => array(),
  /* node-about_page-field_google_plus */       'type' => 'hidden',
  /* node-about_page-field_google_plus */       'weight' => 0,
  /* node-about_page-field_google_plus */     ),
  /* node-about_page-field_google_plus */   ),
  /* node-about_page-field_google_plus */   'entity_type' => 'node',
  /* node-about_page-field_google_plus */   'fences_wrapper' => 'div',
  /* node-about_page-field_google_plus */   'field_name' => 'field_google_plus',
  /* node-about_page-field_google_plus */   'label' => 'Google Plus',
  /* node-about_page-field_google_plus */   'required' => 0,
  /* node-about_page-field_google_plus */   'settings' => array(
  /* node-about_page-field_google_plus */     'better_formats' => array(
  /* node-about_page-field_google_plus */       'allowed_formats' => array(
  /* node-about_page-field_google_plus */         'filtered_html' => 'filtered_html',
  /* node-about_page-field_google_plus */         'full_html' => 'full_html',
  /* node-about_page-field_google_plus */         'plain_text' => 'plain_text',
  /* node-about_page-field_google_plus */       ),
  /* node-about_page-field_google_plus */       'allowed_formats_toggle' => 0,
  /* node-about_page-field_google_plus */       'default_order_toggle' => 0,
  /* node-about_page-field_google_plus */       'default_order_wrapper' => array(
  /* node-about_page-field_google_plus */         'formats' => array(
  /* node-about_page-field_google_plus */           'filtered_html' => array(
  /* node-about_page-field_google_plus */             'weight' => -10,
  /* node-about_page-field_google_plus */           ),
  /* node-about_page-field_google_plus */           'full_html' => array(
  /* node-about_page-field_google_plus */             'weight' => -8,
  /* node-about_page-field_google_plus */           ),
  /* node-about_page-field_google_plus */           'plain_text' => array(
  /* node-about_page-field_google_plus */             'weight' => -9,
  /* node-about_page-field_google_plus */           ),
  /* node-about_page-field_google_plus */         ),
  /* node-about_page-field_google_plus */       ),
  /* node-about_page-field_google_plus */     ),
  /* node-about_page-field_google_plus */     'text_processing' => 0,
  /* node-about_page-field_google_plus */     'user_field_privacy' => FALSE,
  /* node-about_page-field_google_plus */     'user_register_form' => FALSE,
  /* node-about_page-field_google_plus */   ),
  /* node-about_page-field_google_plus */   'widget' => array(
  /* node-about_page-field_google_plus */     'active' => 1,
  /* node-about_page-field_google_plus */     'module' => 'text',
  /* node-about_page-field_google_plus */     'settings' => array(
  /* node-about_page-field_google_plus */       'label_help_description' => '',
  /* node-about_page-field_google_plus */       'size' => 60,
  /* node-about_page-field_google_plus */     ),
  /* node-about_page-field_google_plus */     'type' => 'text_textfield',
  /* node-about_page-field_google_plus */     'weight' => 19,
  /* node-about_page-field_google_plus */   ),
  /* node-about_page-field_google_plus */ );

  // Exported field_instance: 'node-about_page-field_instagram'.
  $field_instances['node-about_page-field_instagram'] = array(
  /* node-about_page-field_instagram */   'bundle' => 'about_page',
  /* node-about_page-field_instagram */   'default_value' => NULL,
  /* node-about_page-field_instagram */   'deleted' => 0,
  /* node-about_page-field_instagram */   'description' => '',
  /* node-about_page-field_instagram */   'display' => array(
  /* node-about_page-field_instagram */     'default' => array(
  /* node-about_page-field_instagram */       'label' => 'above',
  /* node-about_page-field_instagram */       'module' => 'text',
  /* node-about_page-field_instagram */       'settings' => array(
  /* node-about_page-field_instagram */         'field_formatter_class' => '',
  /* node-about_page-field_instagram */       ),
  /* node-about_page-field_instagram */       'type' => 'text_default',
  /* node-about_page-field_instagram */       'weight' => 19,
  /* node-about_page-field_instagram */     ),
  /* node-about_page-field_instagram */     'events_list' => array(
  /* node-about_page-field_instagram */       'label' => 'above',
  /* node-about_page-field_instagram */       'settings' => array(),
  /* node-about_page-field_instagram */       'type' => 'hidden',
  /* node-about_page-field_instagram */       'weight' => 0,
  /* node-about_page-field_instagram */     ),
  /* node-about_page-field_instagram */     'one_column_teaser' => array(
  /* node-about_page-field_instagram */       'label' => 'above',
  /* node-about_page-field_instagram */       'settings' => array(),
  /* node-about_page-field_instagram */       'type' => 'hidden',
  /* node-about_page-field_instagram */       'weight' => 0,
  /* node-about_page-field_instagram */     ),
  /* node-about_page-field_instagram */     'post_teaser_group_landing_page' => array(
  /* node-about_page-field_instagram */       'label' => 'above',
  /* node-about_page-field_instagram */       'settings' => array(),
  /* node-about_page-field_instagram */       'type' => 'hidden',
  /* node-about_page-field_instagram */       'weight' => 0,
  /* node-about_page-field_instagram */     ),
  /* node-about_page-field_instagram */     'search_teaser' => array(
  /* node-about_page-field_instagram */       'label' => 'above',
  /* node-about_page-field_instagram */       'settings' => array(),
  /* node-about_page-field_instagram */       'type' => 'hidden',
  /* node-about_page-field_instagram */       'weight' => 0,
  /* node-about_page-field_instagram */     ),
  /* node-about_page-field_instagram */     'sidebar_' => array(
  /* node-about_page-field_instagram */       'label' => 'above',
  /* node-about_page-field_instagram */       'settings' => array(),
  /* node-about_page-field_instagram */       'type' => 'hidden',
  /* node-about_page-field_instagram */       'weight' => 0,
  /* node-about_page-field_instagram */     ),
  /* node-about_page-field_instagram */     'sidebar_teaser_v2' => array(
  /* node-about_page-field_instagram */       'label' => 'above',
  /* node-about_page-field_instagram */       'settings' => array(),
  /* node-about_page-field_instagram */       'type' => 'hidden',
  /* node-about_page-field_instagram */       'weight' => 0,
  /* node-about_page-field_instagram */     ),
  /* node-about_page-field_instagram */     'teaser' => array(
  /* node-about_page-field_instagram */       'label' => 'above',
  /* node-about_page-field_instagram */       'settings' => array(),
  /* node-about_page-field_instagram */       'type' => 'hidden',
  /* node-about_page-field_instagram */       'weight' => 0,
  /* node-about_page-field_instagram */     ),
  /* node-about_page-field_instagram */     'teaserthumb' => array(
  /* node-about_page-field_instagram */       'label' => 'above',
  /* node-about_page-field_instagram */       'settings' => array(),
  /* node-about_page-field_instagram */       'type' => 'hidden',
  /* node-about_page-field_instagram */       'weight' => 0,
  /* node-about_page-field_instagram */     ),
  /* node-about_page-field_instagram */     'time_and_location' => array(
  /* node-about_page-field_instagram */       'label' => 'above',
  /* node-about_page-field_instagram */       'settings' => array(),
  /* node-about_page-field_instagram */       'type' => 'hidden',
  /* node-about_page-field_instagram */       'weight' => 0,
  /* node-about_page-field_instagram */     ),
  /* node-about_page-field_instagram */     'title_and_time' => array(
  /* node-about_page-field_instagram */       'label' => 'above',
  /* node-about_page-field_instagram */       'settings' => array(),
  /* node-about_page-field_instagram */       'type' => 'hidden',
  /* node-about_page-field_instagram */       'weight' => 0,
  /* node-about_page-field_instagram */     ),
  /* node-about_page-field_instagram */   ),
  /* node-about_page-field_instagram */   'entity_type' => 'node',
  /* node-about_page-field_instagram */   'fences_wrapper' => 'div',
  /* node-about_page-field_instagram */   'field_name' => 'field_instagram',
  /* node-about_page-field_instagram */   'label' => 'Instagram',
  /* node-about_page-field_instagram */   'required' => 0,
  /* node-about_page-field_instagram */   'settings' => array(
  /* node-about_page-field_instagram */     'better_formats' => array(
  /* node-about_page-field_instagram */       'allowed_formats' => array(
  /* node-about_page-field_instagram */         'filtered_html' => 'filtered_html',
  /* node-about_page-field_instagram */         'full_html' => 'full_html',
  /* node-about_page-field_instagram */         'plain_text' => 'plain_text',
  /* node-about_page-field_instagram */         'sessions_wysiwyg' => 'sessions_wysiwyg',
  /* node-about_page-field_instagram */       ),
  /* node-about_page-field_instagram */       'allowed_formats_toggle' => 0,
  /* node-about_page-field_instagram */       'default_order_toggle' => 0,
  /* node-about_page-field_instagram */       'default_order_wrapper' => array(
  /* node-about_page-field_instagram */         'formats' => array(
  /* node-about_page-field_instagram */           'filtered_html' => array(
  /* node-about_page-field_instagram */             'weight' => -10,
  /* node-about_page-field_instagram */           ),
  /* node-about_page-field_instagram */           'full_html' => array(
  /* node-about_page-field_instagram */             'weight' => -8,
  /* node-about_page-field_instagram */           ),
  /* node-about_page-field_instagram */           'plain_text' => array(
  /* node-about_page-field_instagram */             'weight' => -9,
  /* node-about_page-field_instagram */           ),
  /* node-about_page-field_instagram */           'sessions_wysiwyg' => array(
  /* node-about_page-field_instagram */             'weight' => 0,
  /* node-about_page-field_instagram */           ),
  /* node-about_page-field_instagram */         ),
  /* node-about_page-field_instagram */       ),
  /* node-about_page-field_instagram */     ),
  /* node-about_page-field_instagram */     'text_processing' => 0,
  /* node-about_page-field_instagram */     'user_register_form' => FALSE,
  /* node-about_page-field_instagram */   ),
  /* node-about_page-field_instagram */   'widget' => array(
  /* node-about_page-field_instagram */     'active' => 1,
  /* node-about_page-field_instagram */     'module' => 'text',
  /* node-about_page-field_instagram */     'settings' => array(
  /* node-about_page-field_instagram */       'size' => 60,
  /* node-about_page-field_instagram */     ),
  /* node-about_page-field_instagram */     'type' => 'text_textfield',
  /* node-about_page-field_instagram */     'weight' => 21,
  /* node-about_page-field_instagram */   ),
  /* node-about_page-field_instagram */ );

  // Exported field_instance: 'node-about_page-field_leadership'.
  $field_instances['node-about_page-field_leadership'] = array(
  /* node-about_page-field_leadership */   'bundle' => 'about_page',
  /* node-about_page-field_leadership */   'default_value' => NULL,
  /* node-about_page-field_leadership */   'deleted' => 0,
  /* node-about_page-field_leadership */   'description' => '',
  /* node-about_page-field_leadership */   'display' => array(
  /* node-about_page-field_leadership */     'default' => array(
  /* node-about_page-field_leadership */       'label' => 'above',
  /* node-about_page-field_leadership */       'module' => 'text',
  /* node-about_page-field_leadership */       'settings' => array(
  /* node-about_page-field_leadership */         'field_formatter_class' => '',
  /* node-about_page-field_leadership */       ),
  /* node-about_page-field_leadership */       'type' => 'text_default',
  /* node-about_page-field_leadership */       'weight' => 6,
  /* node-about_page-field_leadership */     ),
  /* node-about_page-field_leadership */     'events_list' => array(
  /* node-about_page-field_leadership */       'label' => 'above',
  /* node-about_page-field_leadership */       'settings' => array(),
  /* node-about_page-field_leadership */       'type' => 'hidden',
  /* node-about_page-field_leadership */       'weight' => 0,
  /* node-about_page-field_leadership */     ),
  /* node-about_page-field_leadership */     'one_column_teaser' => array(
  /* node-about_page-field_leadership */       'label' => 'above',
  /* node-about_page-field_leadership */       'settings' => array(),
  /* node-about_page-field_leadership */       'type' => 'hidden',
  /* node-about_page-field_leadership */       'weight' => 0,
  /* node-about_page-field_leadership */     ),
  /* node-about_page-field_leadership */     'post_teaser_group_landing_page' => array(
  /* node-about_page-field_leadership */       'label' => 'above',
  /* node-about_page-field_leadership */       'settings' => array(),
  /* node-about_page-field_leadership */       'type' => 'hidden',
  /* node-about_page-field_leadership */       'weight' => 0,
  /* node-about_page-field_leadership */     ),
  /* node-about_page-field_leadership */     'search_teaser' => array(
  /* node-about_page-field_leadership */       'label' => 'above',
  /* node-about_page-field_leadership */       'settings' => array(),
  /* node-about_page-field_leadership */       'type' => 'hidden',
  /* node-about_page-field_leadership */       'weight' => 0,
  /* node-about_page-field_leadership */     ),
  /* node-about_page-field_leadership */     'sidebar_' => array(
  /* node-about_page-field_leadership */       'label' => 'above',
  /* node-about_page-field_leadership */       'settings' => array(),
  /* node-about_page-field_leadership */       'type' => 'hidden',
  /* node-about_page-field_leadership */       'weight' => 0,
  /* node-about_page-field_leadership */     ),
  /* node-about_page-field_leadership */     'sidebar_teaser_v2' => array(
  /* node-about_page-field_leadership */       'label' => 'above',
  /* node-about_page-field_leadership */       'settings' => array(),
  /* node-about_page-field_leadership */       'type' => 'hidden',
  /* node-about_page-field_leadership */       'weight' => 0,
  /* node-about_page-field_leadership */     ),
  /* node-about_page-field_leadership */     'teaser' => array(
  /* node-about_page-field_leadership */       'label' => 'above',
  /* node-about_page-field_leadership */       'settings' => array(),
  /* node-about_page-field_leadership */       'type' => 'hidden',
  /* node-about_page-field_leadership */       'weight' => 0,
  /* node-about_page-field_leadership */     ),
  /* node-about_page-field_leadership */     'teaserthumb' => array(
  /* node-about_page-field_leadership */       'label' => 'above',
  /* node-about_page-field_leadership */       'settings' => array(),
  /* node-about_page-field_leadership */       'type' => 'hidden',
  /* node-about_page-field_leadership */       'weight' => 0,
  /* node-about_page-field_leadership */     ),
  /* node-about_page-field_leadership */     'time_and_location' => array(
  /* node-about_page-field_leadership */       'label' => 'above',
  /* node-about_page-field_leadership */       'settings' => array(),
  /* node-about_page-field_leadership */       'type' => 'hidden',
  /* node-about_page-field_leadership */       'weight' => 0,
  /* node-about_page-field_leadership */     ),
  /* node-about_page-field_leadership */     'title_and_time' => array(
  /* node-about_page-field_leadership */       'label' => 'above',
  /* node-about_page-field_leadership */       'settings' => array(),
  /* node-about_page-field_leadership */       'type' => 'hidden',
  /* node-about_page-field_leadership */       'weight' => 0,
  /* node-about_page-field_leadership */     ),
  /* node-about_page-field_leadership */   ),
  /* node-about_page-field_leadership */   'entity_type' => 'node',
  /* node-about_page-field_leadership */   'fences_wrapper' => 'div',
  /* node-about_page-field_leadership */   'field_name' => 'field_leadership',
  /* node-about_page-field_leadership */   'label' => 'Leadership',
  /* node-about_page-field_leadership */   'required' => 0,
  /* node-about_page-field_leadership */   'settings' => array(
  /* node-about_page-field_leadership */     'better_formats' => array(
  /* node-about_page-field_leadership */       'allowed_formats' => array(
  /* node-about_page-field_leadership */         'filtered_html' => 'filtered_html',
  /* node-about_page-field_leadership */         'full_html' => 'full_html',
  /* node-about_page-field_leadership */         'plain_text' => 'plain_text',
  /* node-about_page-field_leadership */       ),
  /* node-about_page-field_leadership */       'allowed_formats_toggle' => 0,
  /* node-about_page-field_leadership */       'default_order_toggle' => 0,
  /* node-about_page-field_leadership */       'default_order_wrapper' => array(
  /* node-about_page-field_leadership */         'formats' => array(
  /* node-about_page-field_leadership */           'filtered_html' => array(
  /* node-about_page-field_leadership */             'weight' => -10,
  /* node-about_page-field_leadership */           ),
  /* node-about_page-field_leadership */           'full_html' => array(
  /* node-about_page-field_leadership */             'weight' => -8,
  /* node-about_page-field_leadership */           ),
  /* node-about_page-field_leadership */           'plain_text' => array(
  /* node-about_page-field_leadership */             'weight' => -9,
  /* node-about_page-field_leadership */           ),
  /* node-about_page-field_leadership */         ),
  /* node-about_page-field_leadership */       ),
  /* node-about_page-field_leadership */     ),
  /* node-about_page-field_leadership */     'text_processing' => 1,
  /* node-about_page-field_leadership */     'user_field_privacy' => FALSE,
  /* node-about_page-field_leadership */     'user_register_form' => FALSE,
  /* node-about_page-field_leadership */   ),
  /* node-about_page-field_leadership */   'widget' => array(
  /* node-about_page-field_leadership */     'active' => 1,
  /* node-about_page-field_leadership */     'module' => 'text',
  /* node-about_page-field_leadership */     'settings' => array(
  /* node-about_page-field_leadership */       'label_help_description' => '',
  /* node-about_page-field_leadership */       'rows' => 5,
  /* node-about_page-field_leadership */     ),
  /* node-about_page-field_leadership */     'type' => 'text_textarea',
  /* node-about_page-field_leadership */     'weight' => 6,
  /* node-about_page-field_leadership */   ),
  /* node-about_page-field_leadership */ );

  // Exported field_instance: 'node-about_page-field_linkedin'.
  $field_instances['node-about_page-field_linkedin'] = array(
  /* node-about_page-field_linkedin */   'bundle' => 'about_page',
  /* node-about_page-field_linkedin */   'default_value' => NULL,
  /* node-about_page-field_linkedin */   'deleted' => 0,
  /* node-about_page-field_linkedin */   'description' => '',
  /* node-about_page-field_linkedin */   'display' => array(
  /* node-about_page-field_linkedin */     'default' => array(
  /* node-about_page-field_linkedin */       'label' => 'above',
  /* node-about_page-field_linkedin */       'module' => 'text',
  /* node-about_page-field_linkedin */       'settings' => array(
  /* node-about_page-field_linkedin */         'field_formatter_class' => '',
  /* node-about_page-field_linkedin */       ),
  /* node-about_page-field_linkedin */       'type' => 'text_default',
  /* node-about_page-field_linkedin */       'weight' => 13,
  /* node-about_page-field_linkedin */     ),
  /* node-about_page-field_linkedin */     'events_list' => array(
  /* node-about_page-field_linkedin */       'label' => 'above',
  /* node-about_page-field_linkedin */       'settings' => array(),
  /* node-about_page-field_linkedin */       'type' => 'hidden',
  /* node-about_page-field_linkedin */       'weight' => 0,
  /* node-about_page-field_linkedin */     ),
  /* node-about_page-field_linkedin */     'one_column_teaser' => array(
  /* node-about_page-field_linkedin */       'label' => 'above',
  /* node-about_page-field_linkedin */       'settings' => array(),
  /* node-about_page-field_linkedin */       'type' => 'hidden',
  /* node-about_page-field_linkedin */       'weight' => 0,
  /* node-about_page-field_linkedin */     ),
  /* node-about_page-field_linkedin */     'post_teaser_group_landing_page' => array(
  /* node-about_page-field_linkedin */       'label' => 'above',
  /* node-about_page-field_linkedin */       'settings' => array(),
  /* node-about_page-field_linkedin */       'type' => 'hidden',
  /* node-about_page-field_linkedin */       'weight' => 0,
  /* node-about_page-field_linkedin */     ),
  /* node-about_page-field_linkedin */     'search_teaser' => array(
  /* node-about_page-field_linkedin */       'label' => 'above',
  /* node-about_page-field_linkedin */       'settings' => array(),
  /* node-about_page-field_linkedin */       'type' => 'hidden',
  /* node-about_page-field_linkedin */       'weight' => 0,
  /* node-about_page-field_linkedin */     ),
  /* node-about_page-field_linkedin */     'sidebar_' => array(
  /* node-about_page-field_linkedin */       'label' => 'above',
  /* node-about_page-field_linkedin */       'settings' => array(),
  /* node-about_page-field_linkedin */       'type' => 'hidden',
  /* node-about_page-field_linkedin */       'weight' => 0,
  /* node-about_page-field_linkedin */     ),
  /* node-about_page-field_linkedin */     'sidebar_teaser_v2' => array(
  /* node-about_page-field_linkedin */       'label' => 'above',
  /* node-about_page-field_linkedin */       'settings' => array(),
  /* node-about_page-field_linkedin */       'type' => 'hidden',
  /* node-about_page-field_linkedin */       'weight' => 0,
  /* node-about_page-field_linkedin */     ),
  /* node-about_page-field_linkedin */     'teaser' => array(
  /* node-about_page-field_linkedin */       'label' => 'above',
  /* node-about_page-field_linkedin */       'settings' => array(),
  /* node-about_page-field_linkedin */       'type' => 'hidden',
  /* node-about_page-field_linkedin */       'weight' => 0,
  /* node-about_page-field_linkedin */     ),
  /* node-about_page-field_linkedin */     'teaserthumb' => array(
  /* node-about_page-field_linkedin */       'label' => 'above',
  /* node-about_page-field_linkedin */       'settings' => array(),
  /* node-about_page-field_linkedin */       'type' => 'hidden',
  /* node-about_page-field_linkedin */       'weight' => 0,
  /* node-about_page-field_linkedin */     ),
  /* node-about_page-field_linkedin */     'time_and_location' => array(
  /* node-about_page-field_linkedin */       'label' => 'above',
  /* node-about_page-field_linkedin */       'settings' => array(),
  /* node-about_page-field_linkedin */       'type' => 'hidden',
  /* node-about_page-field_linkedin */       'weight' => 0,
  /* node-about_page-field_linkedin */     ),
  /* node-about_page-field_linkedin */     'title_and_time' => array(
  /* node-about_page-field_linkedin */       'label' => 'above',
  /* node-about_page-field_linkedin */       'settings' => array(),
  /* node-about_page-field_linkedin */       'type' => 'hidden',
  /* node-about_page-field_linkedin */       'weight' => 0,
  /* node-about_page-field_linkedin */     ),
  /* node-about_page-field_linkedin */   ),
  /* node-about_page-field_linkedin */   'entity_type' => 'node',
  /* node-about_page-field_linkedin */   'fences_wrapper' => 'div',
  /* node-about_page-field_linkedin */   'field_name' => 'field_linkedin',
  /* node-about_page-field_linkedin */   'label' => 'LinkedIn',
  /* node-about_page-field_linkedin */   'required' => 0,
  /* node-about_page-field_linkedin */   'settings' => array(
  /* node-about_page-field_linkedin */     'better_formats' => array(
  /* node-about_page-field_linkedin */       'allowed_formats' => array(
  /* node-about_page-field_linkedin */         'filtered_html' => 'filtered_html',
  /* node-about_page-field_linkedin */         'full_html' => 'full_html',
  /* node-about_page-field_linkedin */         'plain_text' => 'plain_text',
  /* node-about_page-field_linkedin */       ),
  /* node-about_page-field_linkedin */       'allowed_formats_toggle' => 0,
  /* node-about_page-field_linkedin */       'default_order_toggle' => 0,
  /* node-about_page-field_linkedin */       'default_order_wrapper' => array(
  /* node-about_page-field_linkedin */         'formats' => array(
  /* node-about_page-field_linkedin */           'filtered_html' => array(
  /* node-about_page-field_linkedin */             'weight' => -10,
  /* node-about_page-field_linkedin */           ),
  /* node-about_page-field_linkedin */           'full_html' => array(
  /* node-about_page-field_linkedin */             'weight' => -8,
  /* node-about_page-field_linkedin */           ),
  /* node-about_page-field_linkedin */           'plain_text' => array(
  /* node-about_page-field_linkedin */             'weight' => -9,
  /* node-about_page-field_linkedin */           ),
  /* node-about_page-field_linkedin */         ),
  /* node-about_page-field_linkedin */       ),
  /* node-about_page-field_linkedin */     ),
  /* node-about_page-field_linkedin */     'text_processing' => 0,
  /* node-about_page-field_linkedin */     'user_field_privacy' => FALSE,
  /* node-about_page-field_linkedin */     'user_register_form' => FALSE,
  /* node-about_page-field_linkedin */   ),
  /* node-about_page-field_linkedin */   'widget' => array(
  /* node-about_page-field_linkedin */     'active' => 1,
  /* node-about_page-field_linkedin */     'module' => 'text',
  /* node-about_page-field_linkedin */     'settings' => array(
  /* node-about_page-field_linkedin */       'label_help_description' => '',
  /* node-about_page-field_linkedin */       'size' => 60,
  /* node-about_page-field_linkedin */     ),
  /* node-about_page-field_linkedin */     'type' => 'text_textfield',
  /* node-about_page-field_linkedin */     'weight' => 18,
  /* node-about_page-field_linkedin */   ),
  /* node-about_page-field_linkedin */ );

  // Exported field_instance: 'node-about_page-field_main_image'.
  $field_instances['node-about_page-field_main_image'] = array(
  /* node-about_page-field_main_image */   'bundle' => 'about_page',
  /* node-about_page-field_main_image */   'deleted' => 0,
  /* node-about_page-field_main_image */   'description' => 'The "Main Image" appears before the text of your news item, between the title and author information. If you do not also upload a thumbnail image, this image will accompany any teasers for this news item. Files must not exceed 8 MB and be 800 x 500 in dimension. Allowed file types: png gif jpg jpeg. Images should be rectangular such that the horizontal dimensions are largest.',
  /* node-about_page-field_main_image */   'display' => array(
  /* node-about_page-field_main_image */     'default' => array(
  /* node-about_page-field_main_image */       'label' => 'above',
  /* node-about_page-field_main_image */       'module' => 'image',
  /* node-about_page-field_main_image */       'settings' => array(
  /* node-about_page-field_main_image */         'field_formatter_class' => '',
  /* node-about_page-field_main_image */         'image_link' => '',
  /* node-about_page-field_main_image */         'image_style' => '',
  /* node-about_page-field_main_image */       ),
  /* node-about_page-field_main_image */       'type' => 'image',
  /* node-about_page-field_main_image */       'weight' => 4,
  /* node-about_page-field_main_image */     ),
  /* node-about_page-field_main_image */     'events_list' => array(
  /* node-about_page-field_main_image */       'label' => 'above',
  /* node-about_page-field_main_image */       'settings' => array(),
  /* node-about_page-field_main_image */       'type' => 'hidden',
  /* node-about_page-field_main_image */       'weight' => 0,
  /* node-about_page-field_main_image */     ),
  /* node-about_page-field_main_image */     'one_column_teaser' => array(
  /* node-about_page-field_main_image */       'label' => 'above',
  /* node-about_page-field_main_image */       'settings' => array(),
  /* node-about_page-field_main_image */       'type' => 'hidden',
  /* node-about_page-field_main_image */       'weight' => 0,
  /* node-about_page-field_main_image */     ),
  /* node-about_page-field_main_image */     'post_teaser_group_landing_page' => array(
  /* node-about_page-field_main_image */       'label' => 'above',
  /* node-about_page-field_main_image */       'settings' => array(),
  /* node-about_page-field_main_image */       'type' => 'hidden',
  /* node-about_page-field_main_image */       'weight' => 0,
  /* node-about_page-field_main_image */     ),
  /* node-about_page-field_main_image */     'search_teaser' => array(
  /* node-about_page-field_main_image */       'label' => 'above',
  /* node-about_page-field_main_image */       'settings' => array(),
  /* node-about_page-field_main_image */       'type' => 'hidden',
  /* node-about_page-field_main_image */       'weight' => 0,
  /* node-about_page-field_main_image */     ),
  /* node-about_page-field_main_image */     'sidebar_' => array(
  /* node-about_page-field_main_image */       'label' => 'above',
  /* node-about_page-field_main_image */       'settings' => array(),
  /* node-about_page-field_main_image */       'type' => 'hidden',
  /* node-about_page-field_main_image */       'weight' => 0,
  /* node-about_page-field_main_image */     ),
  /* node-about_page-field_main_image */     'sidebar_teaser_v2' => array(
  /* node-about_page-field_main_image */       'label' => 'above',
  /* node-about_page-field_main_image */       'settings' => array(),
  /* node-about_page-field_main_image */       'type' => 'hidden',
  /* node-about_page-field_main_image */       'weight' => 0,
  /* node-about_page-field_main_image */     ),
  /* node-about_page-field_main_image */     'teaser' => array(
  /* node-about_page-field_main_image */       'label' => 'above',
  /* node-about_page-field_main_image */       'settings' => array(),
  /* node-about_page-field_main_image */       'type' => 'hidden',
  /* node-about_page-field_main_image */       'weight' => 0,
  /* node-about_page-field_main_image */     ),
  /* node-about_page-field_main_image */     'teaserthumb' => array(
  /* node-about_page-field_main_image */       'label' => 'above',
  /* node-about_page-field_main_image */       'settings' => array(),
  /* node-about_page-field_main_image */       'type' => 'hidden',
  /* node-about_page-field_main_image */       'weight' => 0,
  /* node-about_page-field_main_image */     ),
  /* node-about_page-field_main_image */     'time_and_location' => array(
  /* node-about_page-field_main_image */       'label' => 'above',
  /* node-about_page-field_main_image */       'settings' => array(),
  /* node-about_page-field_main_image */       'type' => 'hidden',
  /* node-about_page-field_main_image */       'weight' => 0,
  /* node-about_page-field_main_image */     ),
  /* node-about_page-field_main_image */     'title_and_time' => array(
  /* node-about_page-field_main_image */       'label' => 'above',
  /* node-about_page-field_main_image */       'settings' => array(),
  /* node-about_page-field_main_image */       'type' => 'hidden',
  /* node-about_page-field_main_image */       'weight' => 0,
  /* node-about_page-field_main_image */     ),
  /* node-about_page-field_main_image */   ),
  /* node-about_page-field_main_image */   'entity_type' => 'node',
  /* node-about_page-field_main_image */   'fences_wrapper' => 'div',
  /* node-about_page-field_main_image */   'field_name' => 'field_main_image',
  /* node-about_page-field_main_image */   'label' => 'Main Image',
  /* node-about_page-field_main_image */   'required' => 0,
  /* node-about_page-field_main_image */   'settings' => array(
  /* node-about_page-field_main_image */     'alt_field' => 0,
  /* node-about_page-field_main_image */     'default_image' => 0,
  /* node-about_page-field_main_image */     'file_directory' => 'img/aboutpage',
  /* node-about_page-field_main_image */     'file_extensions' => 'png gif jpg jpeg',
  /* node-about_page-field_main_image */     'max_filesize' => '',
  /* node-about_page-field_main_image */     'max_resolution' => '',
  /* node-about_page-field_main_image */     'min_resolution' => '',
  /* node-about_page-field_main_image */     'title_field' => 0,
  /* node-about_page-field_main_image */     'user_field_privacy' => FALSE,
  /* node-about_page-field_main_image */     'user_register_form' => FALSE,
  /* node-about_page-field_main_image */   ),
  /* node-about_page-field_main_image */   'widget' => array(
  /* node-about_page-field_main_image */     'active' => 1,
  /* node-about_page-field_main_image */     'module' => 'media',
  /* node-about_page-field_main_image */     'settings' => array(
  /* node-about_page-field_main_image */       'allowed_schemes' => array(
  /* node-about_page-field_main_image */         'private' => 'private',
  /* node-about_page-field_main_image */         'public' => 'public',
  /* node-about_page-field_main_image */         'vimeo' => 0,
  /* node-about_page-field_main_image */         'youtube' => 0,
  /* node-about_page-field_main_image */       ),
  /* node-about_page-field_main_image */       'allowed_types' => array(
  /* node-about_page-field_main_image */         'audio' => 0,
  /* node-about_page-field_main_image */         'document' => 0,
  /* node-about_page-field_main_image */         'image' => 'image',
  /* node-about_page-field_main_image */         'video' => 0,
  /* node-about_page-field_main_image */       ),
  /* node-about_page-field_main_image */       'browser_plugins' => array(
  /* node-about_page-field_main_image */         'media_default--media_browser_1' => 0,
  /* node-about_page-field_main_image */         'media_default--media_browser_my_files' => 'media_default--media_browser_my_files',
  /* node-about_page-field_main_image */         'media_internet' => 0,
  /* node-about_page-field_main_image */         'upload' => 'upload',
  /* node-about_page-field_main_image */       ),
  /* node-about_page-field_main_image */     ),
  /* node-about_page-field_main_image */     'type' => 'media_generic',
  /* node-about_page-field_main_image */     'weight' => 3,
  /* node-about_page-field_main_image */   ),
  /* node-about_page-field_main_image */ );

  // Exported field_instance: 'node-about_page-field_mission'.
  $field_instances['node-about_page-field_mission'] = array(
  /* node-about_page-field_mission */   'bundle' => 'about_page',
  /* node-about_page-field_mission */   'default_value' => NULL,
  /* node-about_page-field_mission */   'deleted' => 0,
  /* node-about_page-field_mission */   'description' => '',
  /* node-about_page-field_mission */   'display' => array(
  /* node-about_page-field_mission */     'default' => array(
  /* node-about_page-field_mission */       'label' => 'above',
  /* node-about_page-field_mission */       'module' => 'text',
  /* node-about_page-field_mission */       'settings' => array(
  /* node-about_page-field_mission */         'field_formatter_class' => '',
  /* node-about_page-field_mission */       ),
  /* node-about_page-field_mission */       'type' => 'text_default',
  /* node-about_page-field_mission */       'weight' => 5,
  /* node-about_page-field_mission */     ),
  /* node-about_page-field_mission */     'events_list' => array(
  /* node-about_page-field_mission */       'label' => 'above',
  /* node-about_page-field_mission */       'settings' => array(),
  /* node-about_page-field_mission */       'type' => 'hidden',
  /* node-about_page-field_mission */       'weight' => 0,
  /* node-about_page-field_mission */     ),
  /* node-about_page-field_mission */     'one_column_teaser' => array(
  /* node-about_page-field_mission */       'label' => 'above',
  /* node-about_page-field_mission */       'settings' => array(),
  /* node-about_page-field_mission */       'type' => 'hidden',
  /* node-about_page-field_mission */       'weight' => 0,
  /* node-about_page-field_mission */     ),
  /* node-about_page-field_mission */     'post_teaser_group_landing_page' => array(
  /* node-about_page-field_mission */       'label' => 'above',
  /* node-about_page-field_mission */       'settings' => array(),
  /* node-about_page-field_mission */       'type' => 'hidden',
  /* node-about_page-field_mission */       'weight' => 0,
  /* node-about_page-field_mission */     ),
  /* node-about_page-field_mission */     'search_teaser' => array(
  /* node-about_page-field_mission */       'label' => 'above',
  /* node-about_page-field_mission */       'settings' => array(),
  /* node-about_page-field_mission */       'type' => 'hidden',
  /* node-about_page-field_mission */       'weight' => 0,
  /* node-about_page-field_mission */     ),
  /* node-about_page-field_mission */     'sidebar_' => array(
  /* node-about_page-field_mission */       'label' => 'above',
  /* node-about_page-field_mission */       'settings' => array(),
  /* node-about_page-field_mission */       'type' => 'hidden',
  /* node-about_page-field_mission */       'weight' => 0,
  /* node-about_page-field_mission */     ),
  /* node-about_page-field_mission */     'sidebar_teaser_v2' => array(
  /* node-about_page-field_mission */       'label' => 'above',
  /* node-about_page-field_mission */       'settings' => array(),
  /* node-about_page-field_mission */       'type' => 'hidden',
  /* node-about_page-field_mission */       'weight' => 0,
  /* node-about_page-field_mission */     ),
  /* node-about_page-field_mission */     'teaser' => array(
  /* node-about_page-field_mission */       'label' => 'above',
  /* node-about_page-field_mission */       'settings' => array(),
  /* node-about_page-field_mission */       'type' => 'hidden',
  /* node-about_page-field_mission */       'weight' => 0,
  /* node-about_page-field_mission */     ),
  /* node-about_page-field_mission */     'teaserthumb' => array(
  /* node-about_page-field_mission */       'label' => 'above',
  /* node-about_page-field_mission */       'settings' => array(),
  /* node-about_page-field_mission */       'type' => 'hidden',
  /* node-about_page-field_mission */       'weight' => 0,
  /* node-about_page-field_mission */     ),
  /* node-about_page-field_mission */     'time_and_location' => array(
  /* node-about_page-field_mission */       'label' => 'above',
  /* node-about_page-field_mission */       'settings' => array(),
  /* node-about_page-field_mission */       'type' => 'hidden',
  /* node-about_page-field_mission */       'weight' => 0,
  /* node-about_page-field_mission */     ),
  /* node-about_page-field_mission */     'title_and_time' => array(
  /* node-about_page-field_mission */       'label' => 'above',
  /* node-about_page-field_mission */       'settings' => array(),
  /* node-about_page-field_mission */       'type' => 'hidden',
  /* node-about_page-field_mission */       'weight' => 0,
  /* node-about_page-field_mission */     ),
  /* node-about_page-field_mission */   ),
  /* node-about_page-field_mission */   'entity_type' => 'node',
  /* node-about_page-field_mission */   'fences_wrapper' => 'div',
  /* node-about_page-field_mission */   'field_name' => 'field_mission',
  /* node-about_page-field_mission */   'label' => 'Mission',
  /* node-about_page-field_mission */   'required' => 0,
  /* node-about_page-field_mission */   'settings' => array(
  /* node-about_page-field_mission */     'better_formats' => array(
  /* node-about_page-field_mission */       'allowed_formats' => array(
  /* node-about_page-field_mission */         'filtered_html' => 'filtered_html',
  /* node-about_page-field_mission */         'full_html' => 'full_html',
  /* node-about_page-field_mission */         'plain_text' => 'plain_text',
  /* node-about_page-field_mission */       ),
  /* node-about_page-field_mission */       'allowed_formats_toggle' => 0,
  /* node-about_page-field_mission */       'default_order_toggle' => 0,
  /* node-about_page-field_mission */       'default_order_wrapper' => array(
  /* node-about_page-field_mission */         'formats' => array(
  /* node-about_page-field_mission */           'filtered_html' => array(
  /* node-about_page-field_mission */             'weight' => -10,
  /* node-about_page-field_mission */           ),
  /* node-about_page-field_mission */           'full_html' => array(
  /* node-about_page-field_mission */             'weight' => -8,
  /* node-about_page-field_mission */           ),
  /* node-about_page-field_mission */           'plain_text' => array(
  /* node-about_page-field_mission */             'weight' => -9,
  /* node-about_page-field_mission */           ),
  /* node-about_page-field_mission */         ),
  /* node-about_page-field_mission */       ),
  /* node-about_page-field_mission */     ),
  /* node-about_page-field_mission */     'text_processing' => 1,
  /* node-about_page-field_mission */     'user_field_privacy' => FALSE,
  /* node-about_page-field_mission */     'user_register_form' => FALSE,
  /* node-about_page-field_mission */   ),
  /* node-about_page-field_mission */   'widget' => array(
  /* node-about_page-field_mission */     'active' => 1,
  /* node-about_page-field_mission */     'module' => 'text',
  /* node-about_page-field_mission */     'settings' => array(
  /* node-about_page-field_mission */       'label_help_description' => '',
  /* node-about_page-field_mission */       'rows' => 5,
  /* node-about_page-field_mission */     ),
  /* node-about_page-field_mission */     'type' => 'text_textarea',
  /* node-about_page-field_mission */     'weight' => 5,
  /* node-about_page-field_mission */   ),
  /* node-about_page-field_mission */ );

  // Exported field_instance: 'node-about_page-field_org_short_title'.
  $field_instances['node-about_page-field_org_short_title'] = array(
  /* node-about_page-field_org_short_title */   'bundle' => 'about_page',
  /* node-about_page-field_org_short_title */   'default_value' => NULL,
  /* node-about_page-field_org_short_title */   'deleted' => 0,
  /* node-about_page-field_org_short_title */   'description' => '',
  /* node-about_page-field_org_short_title */   'display' => array(
  /* node-about_page-field_org_short_title */     'default' => array(
  /* node-about_page-field_org_short_title */       'label' => 'above',
  /* node-about_page-field_org_short_title */       'module' => 'text',
  /* node-about_page-field_org_short_title */       'settings' => array(
  /* node-about_page-field_org_short_title */         'field_formatter_class' => '',
  /* node-about_page-field_org_short_title */       ),
  /* node-about_page-field_org_short_title */       'type' => 'text_default',
  /* node-about_page-field_org_short_title */       'weight' => 10,
  /* node-about_page-field_org_short_title */     ),
  /* node-about_page-field_org_short_title */     'events_list' => array(
  /* node-about_page-field_org_short_title */       'label' => 'above',
  /* node-about_page-field_org_short_title */       'settings' => array(),
  /* node-about_page-field_org_short_title */       'type' => 'hidden',
  /* node-about_page-field_org_short_title */       'weight' => 0,
  /* node-about_page-field_org_short_title */     ),
  /* node-about_page-field_org_short_title */     'one_column_teaser' => array(
  /* node-about_page-field_org_short_title */       'label' => 'above',
  /* node-about_page-field_org_short_title */       'settings' => array(),
  /* node-about_page-field_org_short_title */       'type' => 'hidden',
  /* node-about_page-field_org_short_title */       'weight' => 0,
  /* node-about_page-field_org_short_title */     ),
  /* node-about_page-field_org_short_title */     'post_teaser_group_landing_page' => array(
  /* node-about_page-field_org_short_title */       'label' => 'above',
  /* node-about_page-field_org_short_title */       'settings' => array(),
  /* node-about_page-field_org_short_title */       'type' => 'hidden',
  /* node-about_page-field_org_short_title */       'weight' => 0,
  /* node-about_page-field_org_short_title */     ),
  /* node-about_page-field_org_short_title */     'search_teaser' => array(
  /* node-about_page-field_org_short_title */       'label' => 'above',
  /* node-about_page-field_org_short_title */       'settings' => array(),
  /* node-about_page-field_org_short_title */       'type' => 'hidden',
  /* node-about_page-field_org_short_title */       'weight' => 0,
  /* node-about_page-field_org_short_title */     ),
  /* node-about_page-field_org_short_title */     'sidebar_' => array(
  /* node-about_page-field_org_short_title */       'label' => 'above',
  /* node-about_page-field_org_short_title */       'settings' => array(),
  /* node-about_page-field_org_short_title */       'type' => 'hidden',
  /* node-about_page-field_org_short_title */       'weight' => 0,
  /* node-about_page-field_org_short_title */     ),
  /* node-about_page-field_org_short_title */     'sidebar_teaser_v2' => array(
  /* node-about_page-field_org_short_title */       'label' => 'above',
  /* node-about_page-field_org_short_title */       'settings' => array(),
  /* node-about_page-field_org_short_title */       'type' => 'hidden',
  /* node-about_page-field_org_short_title */       'weight' => 0,
  /* node-about_page-field_org_short_title */     ),
  /* node-about_page-field_org_short_title */     'teaser' => array(
  /* node-about_page-field_org_short_title */       'label' => 'above',
  /* node-about_page-field_org_short_title */       'settings' => array(),
  /* node-about_page-field_org_short_title */       'type' => 'hidden',
  /* node-about_page-field_org_short_title */       'weight' => 0,
  /* node-about_page-field_org_short_title */     ),
  /* node-about_page-field_org_short_title */     'teaserthumb' => array(
  /* node-about_page-field_org_short_title */       'label' => 'above',
  /* node-about_page-field_org_short_title */       'settings' => array(),
  /* node-about_page-field_org_short_title */       'type' => 'hidden',
  /* node-about_page-field_org_short_title */       'weight' => 0,
  /* node-about_page-field_org_short_title */     ),
  /* node-about_page-field_org_short_title */     'time_and_location' => array(
  /* node-about_page-field_org_short_title */       'label' => 'above',
  /* node-about_page-field_org_short_title */       'settings' => array(),
  /* node-about_page-field_org_short_title */       'type' => 'hidden',
  /* node-about_page-field_org_short_title */       'weight' => 0,
  /* node-about_page-field_org_short_title */     ),
  /* node-about_page-field_org_short_title */     'title_and_time' => array(
  /* node-about_page-field_org_short_title */       'label' => 'above',
  /* node-about_page-field_org_short_title */       'settings' => array(),
  /* node-about_page-field_org_short_title */       'type' => 'hidden',
  /* node-about_page-field_org_short_title */       'weight' => 0,
  /* node-about_page-field_org_short_title */     ),
  /* node-about_page-field_org_short_title */   ),
  /* node-about_page-field_org_short_title */   'entity_type' => 'node',
  /* node-about_page-field_org_short_title */   'fences_wrapper' => 'div',
  /* node-about_page-field_org_short_title */   'field_name' => 'field_org_short_title',
  /* node-about_page-field_org_short_title */   'label' => 'Org Short Title',
  /* node-about_page-field_org_short_title */   'required' => 1,
  /* node-about_page-field_org_short_title */   'settings' => array(
  /* node-about_page-field_org_short_title */     'better_formats' => array(
  /* node-about_page-field_org_short_title */       'allowed_formats' => array(
  /* node-about_page-field_org_short_title */         'filtered_html' => 'filtered_html',
  /* node-about_page-field_org_short_title */         'full_html' => 'full_html',
  /* node-about_page-field_org_short_title */         'plain_text' => 'plain_text',
  /* node-about_page-field_org_short_title */       ),
  /* node-about_page-field_org_short_title */       'allowed_formats_toggle' => 0,
  /* node-about_page-field_org_short_title */       'default_order_toggle' => 0,
  /* node-about_page-field_org_short_title */       'default_order_wrapper' => array(
  /* node-about_page-field_org_short_title */         'formats' => array(
  /* node-about_page-field_org_short_title */           'filtered_html' => array(
  /* node-about_page-field_org_short_title */             'weight' => -10,
  /* node-about_page-field_org_short_title */           ),
  /* node-about_page-field_org_short_title */           'full_html' => array(
  /* node-about_page-field_org_short_title */             'weight' => -8,
  /* node-about_page-field_org_short_title */           ),
  /* node-about_page-field_org_short_title */           'plain_text' => array(
  /* node-about_page-field_org_short_title */             'weight' => -9,
  /* node-about_page-field_org_short_title */           ),
  /* node-about_page-field_org_short_title */         ),
  /* node-about_page-field_org_short_title */       ),
  /* node-about_page-field_org_short_title */     ),
  /* node-about_page-field_org_short_title */     'text_processing' => 0,
  /* node-about_page-field_org_short_title */     'user_field_privacy' => FALSE,
  /* node-about_page-field_org_short_title */     'user_register_form' => FALSE,
  /* node-about_page-field_org_short_title */   ),
  /* node-about_page-field_org_short_title */   'widget' => array(
  /* node-about_page-field_org_short_title */     'active' => 1,
  /* node-about_page-field_org_short_title */     'module' => 'text',
  /* node-about_page-field_org_short_title */     'settings' => array(
  /* node-about_page-field_org_short_title */       'label_help_description' => '',
  /* node-about_page-field_org_short_title */       'size' => 60,
  /* node-about_page-field_org_short_title */     ),
  /* node-about_page-field_org_short_title */     'type' => 'text_textfield',
  /* node-about_page-field_org_short_title */     'weight' => 14,
  /* node-about_page-field_org_short_title */   ),
  /* node-about_page-field_org_short_title */ );

  // Exported field_instance: 'node-about_page-field_twitter'.
  $field_instances['node-about_page-field_twitter'] = array(
  /* node-about_page-field_twitter */   'bundle' => 'about_page',
  /* node-about_page-field_twitter */   'default_value' => NULL,
  /* node-about_page-field_twitter */   'deleted' => 0,
  /* node-about_page-field_twitter */   'description' => '',
  /* node-about_page-field_twitter */   'display' => array(
  /* node-about_page-field_twitter */     'default' => array(
  /* node-about_page-field_twitter */       'label' => 'above',
  /* node-about_page-field_twitter */       'module' => 'text',
  /* node-about_page-field_twitter */       'settings' => array(
  /* node-about_page-field_twitter */         'field_formatter_class' => '',
  /* node-about_page-field_twitter */       ),
  /* node-about_page-field_twitter */       'type' => 'text_default',
  /* node-about_page-field_twitter */       'weight' => 12,
  /* node-about_page-field_twitter */     ),
  /* node-about_page-field_twitter */     'events_list' => array(
  /* node-about_page-field_twitter */       'label' => 'above',
  /* node-about_page-field_twitter */       'settings' => array(),
  /* node-about_page-field_twitter */       'type' => 'hidden',
  /* node-about_page-field_twitter */       'weight' => 0,
  /* node-about_page-field_twitter */     ),
  /* node-about_page-field_twitter */     'one_column_teaser' => array(
  /* node-about_page-field_twitter */       'label' => 'above',
  /* node-about_page-field_twitter */       'settings' => array(),
  /* node-about_page-field_twitter */       'type' => 'hidden',
  /* node-about_page-field_twitter */       'weight' => 0,
  /* node-about_page-field_twitter */     ),
  /* node-about_page-field_twitter */     'post_teaser_group_landing_page' => array(
  /* node-about_page-field_twitter */       'label' => 'above',
  /* node-about_page-field_twitter */       'settings' => array(),
  /* node-about_page-field_twitter */       'type' => 'hidden',
  /* node-about_page-field_twitter */       'weight' => 0,
  /* node-about_page-field_twitter */     ),
  /* node-about_page-field_twitter */     'search_teaser' => array(
  /* node-about_page-field_twitter */       'label' => 'above',
  /* node-about_page-field_twitter */       'settings' => array(),
  /* node-about_page-field_twitter */       'type' => 'hidden',
  /* node-about_page-field_twitter */       'weight' => 0,
  /* node-about_page-field_twitter */     ),
  /* node-about_page-field_twitter */     'sidebar_' => array(
  /* node-about_page-field_twitter */       'label' => 'above',
  /* node-about_page-field_twitter */       'settings' => array(),
  /* node-about_page-field_twitter */       'type' => 'hidden',
  /* node-about_page-field_twitter */       'weight' => 0,
  /* node-about_page-field_twitter */     ),
  /* node-about_page-field_twitter */     'sidebar_teaser_v2' => array(
  /* node-about_page-field_twitter */       'label' => 'above',
  /* node-about_page-field_twitter */       'settings' => array(),
  /* node-about_page-field_twitter */       'type' => 'hidden',
  /* node-about_page-field_twitter */       'weight' => 0,
  /* node-about_page-field_twitter */     ),
  /* node-about_page-field_twitter */     'teaser' => array(
  /* node-about_page-field_twitter */       'label' => 'above',
  /* node-about_page-field_twitter */       'settings' => array(),
  /* node-about_page-field_twitter */       'type' => 'hidden',
  /* node-about_page-field_twitter */       'weight' => 0,
  /* node-about_page-field_twitter */     ),
  /* node-about_page-field_twitter */     'teaserthumb' => array(
  /* node-about_page-field_twitter */       'label' => 'above',
  /* node-about_page-field_twitter */       'settings' => array(),
  /* node-about_page-field_twitter */       'type' => 'hidden',
  /* node-about_page-field_twitter */       'weight' => 0,
  /* node-about_page-field_twitter */     ),
  /* node-about_page-field_twitter */     'time_and_location' => array(
  /* node-about_page-field_twitter */       'label' => 'above',
  /* node-about_page-field_twitter */       'settings' => array(),
  /* node-about_page-field_twitter */       'type' => 'hidden',
  /* node-about_page-field_twitter */       'weight' => 0,
  /* node-about_page-field_twitter */     ),
  /* node-about_page-field_twitter */     'title_and_time' => array(
  /* node-about_page-field_twitter */       'label' => 'above',
  /* node-about_page-field_twitter */       'settings' => array(),
  /* node-about_page-field_twitter */       'type' => 'hidden',
  /* node-about_page-field_twitter */       'weight' => 0,
  /* node-about_page-field_twitter */     ),
  /* node-about_page-field_twitter */   ),
  /* node-about_page-field_twitter */   'entity_type' => 'node',
  /* node-about_page-field_twitter */   'fences_wrapper' => 'div',
  /* node-about_page-field_twitter */   'field_name' => 'field_twitter',
  /* node-about_page-field_twitter */   'label' => 'Twitter',
  /* node-about_page-field_twitter */   'required' => 0,
  /* node-about_page-field_twitter */   'settings' => array(
  /* node-about_page-field_twitter */     'better_formats' => array(
  /* node-about_page-field_twitter */       'allowed_formats' => array(
  /* node-about_page-field_twitter */         'filtered_html' => 'filtered_html',
  /* node-about_page-field_twitter */         'full_html' => 'full_html',
  /* node-about_page-field_twitter */         'plain_text' => 'plain_text',
  /* node-about_page-field_twitter */       ),
  /* node-about_page-field_twitter */       'allowed_formats_toggle' => 0,
  /* node-about_page-field_twitter */       'default_order_toggle' => 0,
  /* node-about_page-field_twitter */       'default_order_wrapper' => array(
  /* node-about_page-field_twitter */         'formats' => array(
  /* node-about_page-field_twitter */           'filtered_html' => array(
  /* node-about_page-field_twitter */             'weight' => -10,
  /* node-about_page-field_twitter */           ),
  /* node-about_page-field_twitter */           'full_html' => array(
  /* node-about_page-field_twitter */             'weight' => -8,
  /* node-about_page-field_twitter */           ),
  /* node-about_page-field_twitter */           'plain_text' => array(
  /* node-about_page-field_twitter */             'weight' => -9,
  /* node-about_page-field_twitter */           ),
  /* node-about_page-field_twitter */         ),
  /* node-about_page-field_twitter */       ),
  /* node-about_page-field_twitter */     ),
  /* node-about_page-field_twitter */     'text_processing' => 0,
  /* node-about_page-field_twitter */     'user_field_privacy' => FALSE,
  /* node-about_page-field_twitter */     'user_register_form' => FALSE,
  /* node-about_page-field_twitter */   ),
  /* node-about_page-field_twitter */   'widget' => array(
  /* node-about_page-field_twitter */     'active' => 1,
  /* node-about_page-field_twitter */     'module' => 'text',
  /* node-about_page-field_twitter */     'settings' => array(
  /* node-about_page-field_twitter */       'label_help_description' => '',
  /* node-about_page-field_twitter */       'size' => 60,
  /* node-about_page-field_twitter */     ),
  /* node-about_page-field_twitter */     'type' => 'text_textfield',
  /* node-about_page-field_twitter */     'weight' => 17,
  /* node-about_page-field_twitter */   ),
  /* node-about_page-field_twitter */ );

  // Exported field_instance: 'node-about_page-field_visitor_information'.
  $field_instances['node-about_page-field_visitor_information'] = array(
  /* node-about_page-field_visitor_information */   'bundle' => 'about_page',
  /* node-about_page-field_visitor_information */   'default_value' => NULL,
  /* node-about_page-field_visitor_information */   'deleted' => 0,
  /* node-about_page-field_visitor_information */   'description' => '',
  /* node-about_page-field_visitor_information */   'display' => array(
  /* node-about_page-field_visitor_information */     'default' => array(
  /* node-about_page-field_visitor_information */       'label' => 'above',
  /* node-about_page-field_visitor_information */       'module' => 'text',
  /* node-about_page-field_visitor_information */       'settings' => array(
  /* node-about_page-field_visitor_information */         'field_formatter_class' => '',
  /* node-about_page-field_visitor_information */       ),
  /* node-about_page-field_visitor_information */       'type' => 'text_default',
  /* node-about_page-field_visitor_information */       'weight' => 9,
  /* node-about_page-field_visitor_information */     ),
  /* node-about_page-field_visitor_information */     'events_list' => array(
  /* node-about_page-field_visitor_information */       'label' => 'above',
  /* node-about_page-field_visitor_information */       'settings' => array(),
  /* node-about_page-field_visitor_information */       'type' => 'hidden',
  /* node-about_page-field_visitor_information */       'weight' => 0,
  /* node-about_page-field_visitor_information */     ),
  /* node-about_page-field_visitor_information */     'one_column_teaser' => array(
  /* node-about_page-field_visitor_information */       'label' => 'above',
  /* node-about_page-field_visitor_information */       'settings' => array(),
  /* node-about_page-field_visitor_information */       'type' => 'hidden',
  /* node-about_page-field_visitor_information */       'weight' => 0,
  /* node-about_page-field_visitor_information */     ),
  /* node-about_page-field_visitor_information */     'post_teaser_group_landing_page' => array(
  /* node-about_page-field_visitor_information */       'label' => 'above',
  /* node-about_page-field_visitor_information */       'settings' => array(),
  /* node-about_page-field_visitor_information */       'type' => 'hidden',
  /* node-about_page-field_visitor_information */       'weight' => 0,
  /* node-about_page-field_visitor_information */     ),
  /* node-about_page-field_visitor_information */     'search_teaser' => array(
  /* node-about_page-field_visitor_information */       'label' => 'above',
  /* node-about_page-field_visitor_information */       'settings' => array(),
  /* node-about_page-field_visitor_information */       'type' => 'hidden',
  /* node-about_page-field_visitor_information */       'weight' => 0,
  /* node-about_page-field_visitor_information */     ),
  /* node-about_page-field_visitor_information */     'sidebar_' => array(
  /* node-about_page-field_visitor_information */       'label' => 'above',
  /* node-about_page-field_visitor_information */       'settings' => array(),
  /* node-about_page-field_visitor_information */       'type' => 'hidden',
  /* node-about_page-field_visitor_information */       'weight' => 0,
  /* node-about_page-field_visitor_information */     ),
  /* node-about_page-field_visitor_information */     'sidebar_teaser_v2' => array(
  /* node-about_page-field_visitor_information */       'label' => 'above',
  /* node-about_page-field_visitor_information */       'settings' => array(),
  /* node-about_page-field_visitor_information */       'type' => 'hidden',
  /* node-about_page-field_visitor_information */       'weight' => 0,
  /* node-about_page-field_visitor_information */     ),
  /* node-about_page-field_visitor_information */     'teaser' => array(
  /* node-about_page-field_visitor_information */       'label' => 'above',
  /* node-about_page-field_visitor_information */       'settings' => array(),
  /* node-about_page-field_visitor_information */       'type' => 'hidden',
  /* node-about_page-field_visitor_information */       'weight' => 0,
  /* node-about_page-field_visitor_information */     ),
  /* node-about_page-field_visitor_information */     'teaserthumb' => array(
  /* node-about_page-field_visitor_information */       'label' => 'above',
  /* node-about_page-field_visitor_information */       'settings' => array(),
  /* node-about_page-field_visitor_information */       'type' => 'hidden',
  /* node-about_page-field_visitor_information */       'weight' => 0,
  /* node-about_page-field_visitor_information */     ),
  /* node-about_page-field_visitor_information */     'time_and_location' => array(
  /* node-about_page-field_visitor_information */       'label' => 'above',
  /* node-about_page-field_visitor_information */       'settings' => array(),
  /* node-about_page-field_visitor_information */       'type' => 'hidden',
  /* node-about_page-field_visitor_information */       'weight' => 0,
  /* node-about_page-field_visitor_information */     ),
  /* node-about_page-field_visitor_information */     'title_and_time' => array(
  /* node-about_page-field_visitor_information */       'label' => 'above',
  /* node-about_page-field_visitor_information */       'settings' => array(),
  /* node-about_page-field_visitor_information */       'type' => 'hidden',
  /* node-about_page-field_visitor_information */       'weight' => 0,
  /* node-about_page-field_visitor_information */     ),
  /* node-about_page-field_visitor_information */   ),
  /* node-about_page-field_visitor_information */   'entity_type' => 'node',
  /* node-about_page-field_visitor_information */   'fences_wrapper' => 'div',
  /* node-about_page-field_visitor_information */   'field_name' => 'field_visitor_information',
  /* node-about_page-field_visitor_information */   'label' => 'Visitor Information',
  /* node-about_page-field_visitor_information */   'required' => 0,
  /* node-about_page-field_visitor_information */   'settings' => array(
  /* node-about_page-field_visitor_information */     'better_formats' => array(
  /* node-about_page-field_visitor_information */       'allowed_formats' => array(
  /* node-about_page-field_visitor_information */         'filtered_html' => 'filtered_html',
  /* node-about_page-field_visitor_information */         'full_html' => 'full_html',
  /* node-about_page-field_visitor_information */         'plain_text' => 'plain_text',
  /* node-about_page-field_visitor_information */       ),
  /* node-about_page-field_visitor_information */       'allowed_formats_toggle' => 0,
  /* node-about_page-field_visitor_information */       'default_order_toggle' => 0,
  /* node-about_page-field_visitor_information */       'default_order_wrapper' => array(
  /* node-about_page-field_visitor_information */         'formats' => array(
  /* node-about_page-field_visitor_information */           'filtered_html' => array(
  /* node-about_page-field_visitor_information */             'weight' => -10,
  /* node-about_page-field_visitor_information */           ),
  /* node-about_page-field_visitor_information */           'full_html' => array(
  /* node-about_page-field_visitor_information */             'weight' => -8,
  /* node-about_page-field_visitor_information */           ),
  /* node-about_page-field_visitor_information */           'plain_text' => array(
  /* node-about_page-field_visitor_information */             'weight' => -9,
  /* node-about_page-field_visitor_information */           ),
  /* node-about_page-field_visitor_information */         ),
  /* node-about_page-field_visitor_information */       ),
  /* node-about_page-field_visitor_information */     ),
  /* node-about_page-field_visitor_information */     'text_processing' => 1,
  /* node-about_page-field_visitor_information */     'user_field_privacy' => FALSE,
  /* node-about_page-field_visitor_information */     'user_register_form' => FALSE,
  /* node-about_page-field_visitor_information */   ),
  /* node-about_page-field_visitor_information */   'widget' => array(
  /* node-about_page-field_visitor_information */     'active' => 1,
  /* node-about_page-field_visitor_information */     'module' => 'text',
  /* node-about_page-field_visitor_information */     'settings' => array(
  /* node-about_page-field_visitor_information */       'label_help_description' => '',
  /* node-about_page-field_visitor_information */       'rows' => 5,
  /* node-about_page-field_visitor_information */     ),
  /* node-about_page-field_visitor_information */     'type' => 'text_textarea',
  /* node-about_page-field_visitor_information */     'weight' => 9,
  /* node-about_page-field_visitor_information */   ),
  /* node-about_page-field_visitor_information */ );

  // Exported field_instance: 'node-about_page-field_youtube'.
  $field_instances['node-about_page-field_youtube'] = array(
  /* node-about_page-field_youtube */   'bundle' => 'about_page',
  /* node-about_page-field_youtube */   'default_value' => NULL,
  /* node-about_page-field_youtube */   'deleted' => 0,
  /* node-about_page-field_youtube */   'description' => '',
  /* node-about_page-field_youtube */   'display' => array(
  /* node-about_page-field_youtube */     'default' => array(
  /* node-about_page-field_youtube */       'label' => 'above',
  /* node-about_page-field_youtube */       'module' => 'text',
  /* node-about_page-field_youtube */       'settings' => array(
  /* node-about_page-field_youtube */         'field_formatter_class' => '',
  /* node-about_page-field_youtube */       ),
  /* node-about_page-field_youtube */       'type' => 'text_default',
  /* node-about_page-field_youtube */       'weight' => 15,
  /* node-about_page-field_youtube */     ),
  /* node-about_page-field_youtube */     'events_list' => array(
  /* node-about_page-field_youtube */       'label' => 'above',
  /* node-about_page-field_youtube */       'settings' => array(),
  /* node-about_page-field_youtube */       'type' => 'hidden',
  /* node-about_page-field_youtube */       'weight' => 0,
  /* node-about_page-field_youtube */     ),
  /* node-about_page-field_youtube */     'one_column_teaser' => array(
  /* node-about_page-field_youtube */       'label' => 'above',
  /* node-about_page-field_youtube */       'settings' => array(),
  /* node-about_page-field_youtube */       'type' => 'hidden',
  /* node-about_page-field_youtube */       'weight' => 0,
  /* node-about_page-field_youtube */     ),
  /* node-about_page-field_youtube */     'post_teaser_group_landing_page' => array(
  /* node-about_page-field_youtube */       'label' => 'above',
  /* node-about_page-field_youtube */       'settings' => array(),
  /* node-about_page-field_youtube */       'type' => 'hidden',
  /* node-about_page-field_youtube */       'weight' => 0,
  /* node-about_page-field_youtube */     ),
  /* node-about_page-field_youtube */     'search_teaser' => array(
  /* node-about_page-field_youtube */       'label' => 'above',
  /* node-about_page-field_youtube */       'settings' => array(),
  /* node-about_page-field_youtube */       'type' => 'hidden',
  /* node-about_page-field_youtube */       'weight' => 0,
  /* node-about_page-field_youtube */     ),
  /* node-about_page-field_youtube */     'sidebar_' => array(
  /* node-about_page-field_youtube */       'label' => 'above',
  /* node-about_page-field_youtube */       'settings' => array(),
  /* node-about_page-field_youtube */       'type' => 'hidden',
  /* node-about_page-field_youtube */       'weight' => 0,
  /* node-about_page-field_youtube */     ),
  /* node-about_page-field_youtube */     'sidebar_teaser_v2' => array(
  /* node-about_page-field_youtube */       'label' => 'above',
  /* node-about_page-field_youtube */       'settings' => array(),
  /* node-about_page-field_youtube */       'type' => 'hidden',
  /* node-about_page-field_youtube */       'weight' => 0,
  /* node-about_page-field_youtube */     ),
  /* node-about_page-field_youtube */     'teaser' => array(
  /* node-about_page-field_youtube */       'label' => 'above',
  /* node-about_page-field_youtube */       'settings' => array(),
  /* node-about_page-field_youtube */       'type' => 'hidden',
  /* node-about_page-field_youtube */       'weight' => 0,
  /* node-about_page-field_youtube */     ),
  /* node-about_page-field_youtube */     'teaserthumb' => array(
  /* node-about_page-field_youtube */       'label' => 'above',
  /* node-about_page-field_youtube */       'settings' => array(),
  /* node-about_page-field_youtube */       'type' => 'hidden',
  /* node-about_page-field_youtube */       'weight' => 0,
  /* node-about_page-field_youtube */     ),
  /* node-about_page-field_youtube */     'time_and_location' => array(
  /* node-about_page-field_youtube */       'label' => 'above',
  /* node-about_page-field_youtube */       'settings' => array(),
  /* node-about_page-field_youtube */       'type' => 'hidden',
  /* node-about_page-field_youtube */       'weight' => 0,
  /* node-about_page-field_youtube */     ),
  /* node-about_page-field_youtube */     'title_and_time' => array(
  /* node-about_page-field_youtube */       'label' => 'above',
  /* node-about_page-field_youtube */       'settings' => array(),
  /* node-about_page-field_youtube */       'type' => 'hidden',
  /* node-about_page-field_youtube */       'weight' => 0,
  /* node-about_page-field_youtube */     ),
  /* node-about_page-field_youtube */   ),
  /* node-about_page-field_youtube */   'entity_type' => 'node',
  /* node-about_page-field_youtube */   'fences_wrapper' => 'div',
  /* node-about_page-field_youtube */   'field_name' => 'field_youtube',
  /* node-about_page-field_youtube */   'label' => 'YouTube',
  /* node-about_page-field_youtube */   'required' => 0,
  /* node-about_page-field_youtube */   'settings' => array(
  /* node-about_page-field_youtube */     'better_formats' => array(
  /* node-about_page-field_youtube */       'allowed_formats' => array(
  /* node-about_page-field_youtube */         'filtered_html' => 'filtered_html',
  /* node-about_page-field_youtube */         'full_html' => 'full_html',
  /* node-about_page-field_youtube */         'plain_text' => 'plain_text',
  /* node-about_page-field_youtube */       ),
  /* node-about_page-field_youtube */       'allowed_formats_toggle' => 0,
  /* node-about_page-field_youtube */       'default_order_toggle' => 0,
  /* node-about_page-field_youtube */       'default_order_wrapper' => array(
  /* node-about_page-field_youtube */         'formats' => array(
  /* node-about_page-field_youtube */           'filtered_html' => array(
  /* node-about_page-field_youtube */             'weight' => -10,
  /* node-about_page-field_youtube */           ),
  /* node-about_page-field_youtube */           'full_html' => array(
  /* node-about_page-field_youtube */             'weight' => -8,
  /* node-about_page-field_youtube */           ),
  /* node-about_page-field_youtube */           'plain_text' => array(
  /* node-about_page-field_youtube */             'weight' => -9,
  /* node-about_page-field_youtube */           ),
  /* node-about_page-field_youtube */         ),
  /* node-about_page-field_youtube */       ),
  /* node-about_page-field_youtube */     ),
  /* node-about_page-field_youtube */     'text_processing' => 0,
  /* node-about_page-field_youtube */     'user_field_privacy' => FALSE,
  /* node-about_page-field_youtube */     'user_register_form' => FALSE,
  /* node-about_page-field_youtube */   ),
  /* node-about_page-field_youtube */   'widget' => array(
  /* node-about_page-field_youtube */     'active' => 1,
  /* node-about_page-field_youtube */     'module' => 'text',
  /* node-about_page-field_youtube */     'settings' => array(
  /* node-about_page-field_youtube */       'label_help_description' => '',
  /* node-about_page-field_youtube */       'size' => 60,
  /* node-about_page-field_youtube */     ),
  /* node-about_page-field_youtube */     'type' => 'text_textfield',
  /* node-about_page-field_youtube */     'weight' => 20,
  /* node-about_page-field_youtube */   ),
  /* node-about_page-field_youtube */ );

  // Exported field_instance: 'node-about_page-group_content_access'.
  $field_instances['node-about_page-group_content_access'] = array(
  /* node-about_page-group_content_access */   'bundle' => 'about_page',
  /* node-about_page-group_content_access */   'default_value' => NULL,
  /* node-about_page-group_content_access */   'deleted' => 0,
  /* node-about_page-group_content_access */   'description' => '',
  /* node-about_page-group_content_access */   'display' => array(
  /* node-about_page-group_content_access */     'default' => array(
  /* node-about_page-group_content_access */       'label' => 'above',
  /* node-about_page-group_content_access */       'module' => 'list',
  /* node-about_page-group_content_access */       'settings' => array(
  /* node-about_page-group_content_access */         'field_formatter_class' => '',
  /* node-about_page-group_content_access */       ),
  /* node-about_page-group_content_access */       'type' => 'list_default',
  /* node-about_page-group_content_access */       'weight' => 18,
  /* node-about_page-group_content_access */     ),
  /* node-about_page-group_content_access */     'events_list' => array(
  /* node-about_page-group_content_access */       'label' => 'above',
  /* node-about_page-group_content_access */       'settings' => array(),
  /* node-about_page-group_content_access */       'type' => 'hidden',
  /* node-about_page-group_content_access */       'weight' => 0,
  /* node-about_page-group_content_access */     ),
  /* node-about_page-group_content_access */     'one_column_teaser' => array(
  /* node-about_page-group_content_access */       'label' => 'above',
  /* node-about_page-group_content_access */       'settings' => array(),
  /* node-about_page-group_content_access */       'type' => 'hidden',
  /* node-about_page-group_content_access */       'weight' => 0,
  /* node-about_page-group_content_access */     ),
  /* node-about_page-group_content_access */     'post_teaser_group_landing_page' => array(
  /* node-about_page-group_content_access */       'label' => 'above',
  /* node-about_page-group_content_access */       'settings' => array(),
  /* node-about_page-group_content_access */       'type' => 'hidden',
  /* node-about_page-group_content_access */       'weight' => 0,
  /* node-about_page-group_content_access */     ),
  /* node-about_page-group_content_access */     'search_teaser' => array(
  /* node-about_page-group_content_access */       'label' => 'above',
  /* node-about_page-group_content_access */       'settings' => array(),
  /* node-about_page-group_content_access */       'type' => 'hidden',
  /* node-about_page-group_content_access */       'weight' => 0,
  /* node-about_page-group_content_access */     ),
  /* node-about_page-group_content_access */     'sidebar_' => array(
  /* node-about_page-group_content_access */       'label' => 'above',
  /* node-about_page-group_content_access */       'settings' => array(),
  /* node-about_page-group_content_access */       'type' => 'hidden',
  /* node-about_page-group_content_access */       'weight' => 0,
  /* node-about_page-group_content_access */     ),
  /* node-about_page-group_content_access */     'sidebar_teaser_v2' => array(
  /* node-about_page-group_content_access */       'label' => 'above',
  /* node-about_page-group_content_access */       'settings' => array(),
  /* node-about_page-group_content_access */       'type' => 'hidden',
  /* node-about_page-group_content_access */       'weight' => 0,
  /* node-about_page-group_content_access */     ),
  /* node-about_page-group_content_access */     'teaser' => array(
  /* node-about_page-group_content_access */       'label' => 'above',
  /* node-about_page-group_content_access */       'settings' => array(),
  /* node-about_page-group_content_access */       'type' => 'hidden',
  /* node-about_page-group_content_access */       'weight' => 0,
  /* node-about_page-group_content_access */     ),
  /* node-about_page-group_content_access */     'teaserthumb' => array(
  /* node-about_page-group_content_access */       'label' => 'above',
  /* node-about_page-group_content_access */       'settings' => array(),
  /* node-about_page-group_content_access */       'type' => 'hidden',
  /* node-about_page-group_content_access */       'weight' => 0,
  /* node-about_page-group_content_access */     ),
  /* node-about_page-group_content_access */     'time_and_location' => array(
  /* node-about_page-group_content_access */       'label' => 'above',
  /* node-about_page-group_content_access */       'settings' => array(),
  /* node-about_page-group_content_access */       'type' => 'hidden',
  /* node-about_page-group_content_access */       'weight' => 0,
  /* node-about_page-group_content_access */     ),
  /* node-about_page-group_content_access */     'title_and_time' => array(
  /* node-about_page-group_content_access */       'label' => 'above',
  /* node-about_page-group_content_access */       'settings' => array(),
  /* node-about_page-group_content_access */       'type' => 'hidden',
  /* node-about_page-group_content_access */       'weight' => 0,
  /* node-about_page-group_content_access */     ),
  /* node-about_page-group_content_access */   ),
  /* node-about_page-group_content_access */   'entity_type' => 'node',
  /* node-about_page-group_content_access */   'fences_wrapper' => 'div',
  /* node-about_page-group_content_access */   'field_name' => 'group_content_access',
  /* node-about_page-group_content_access */   'label' => 'Group content visibility',
  /* node-about_page-group_content_access */   'required' => 0,
  /* node-about_page-group_content_access */   'settings' => array(
  /* node-about_page-group_content_access */     'user_register_form' => FALSE,
  /* node-about_page-group_content_access */   ),
  /* node-about_page-group_content_access */   'widget' => array(
  /* node-about_page-group_content_access */     'active' => 1,
  /* node-about_page-group_content_access */     'module' => 'options',
  /* node-about_page-group_content_access */     'settings' => array(
  /* node-about_page-group_content_access */       'apply_chosen' => '',
  /* node-about_page-group_content_access */     ),
  /* node-about_page-group_content_access */     'type' => 'options_select',
  /* node-about_page-group_content_access */     'weight' => 6,
  /* node-about_page-group_content_access */   ),
  /* node-about_page-group_content_access */ );

  // Exported field_instance: 'node-about_page-og_group_ref'.
  $field_instances['node-about_page-og_group_ref'] = array(
  /* node-about_page-og_group_ref */   'bundle' => 'about_page',
  /* node-about_page-og_group_ref */   'default_value' => NULL,
  /* node-about_page-og_group_ref */   'deleted' => 0,
  /* node-about_page-og_group_ref */   'description' => '',
  /* node-about_page-og_group_ref */   'display' => array(
  /* node-about_page-og_group_ref */     'default' => array(
  /* node-about_page-og_group_ref */       'label' => 'above',
  /* node-about_page-og_group_ref */       'module' => 'og_ui',
  /* node-about_page-og_group_ref */       'settings' => array(
  /* node-about_page-og_group_ref */         'field_formatter_class' => '',
  /* node-about_page-og_group_ref */       ),
  /* node-about_page-og_group_ref */       'type' => 'og_list_default',
  /* node-about_page-og_group_ref */       'weight' => 0,
  /* node-about_page-og_group_ref */     ),
  /* node-about_page-og_group_ref */     'events_list' => array(
  /* node-about_page-og_group_ref */       'label' => 'above',
  /* node-about_page-og_group_ref */       'settings' => array(),
  /* node-about_page-og_group_ref */       'type' => 'hidden',
  /* node-about_page-og_group_ref */       'weight' => 0,
  /* node-about_page-og_group_ref */     ),
  /* node-about_page-og_group_ref */     'one_column_teaser' => array(
  /* node-about_page-og_group_ref */       'label' => 'above',
  /* node-about_page-og_group_ref */       'settings' => array(),
  /* node-about_page-og_group_ref */       'type' => 'hidden',
  /* node-about_page-og_group_ref */       'weight' => 0,
  /* node-about_page-og_group_ref */     ),
  /* node-about_page-og_group_ref */     'post_teaser_group_landing_page' => array(
  /* node-about_page-og_group_ref */       'label' => 'above',
  /* node-about_page-og_group_ref */       'settings' => array(),
  /* node-about_page-og_group_ref */       'type' => 'hidden',
  /* node-about_page-og_group_ref */       'weight' => 0,
  /* node-about_page-og_group_ref */     ),
  /* node-about_page-og_group_ref */     'search_teaser' => array(
  /* node-about_page-og_group_ref */       'label' => 'above',
  /* node-about_page-og_group_ref */       'settings' => array(),
  /* node-about_page-og_group_ref */       'type' => 'hidden',
  /* node-about_page-og_group_ref */       'weight' => 0,
  /* node-about_page-og_group_ref */     ),
  /* node-about_page-og_group_ref */     'sidebar_' => array(
  /* node-about_page-og_group_ref */       'label' => 'above',
  /* node-about_page-og_group_ref */       'settings' => array(),
  /* node-about_page-og_group_ref */       'type' => 'hidden',
  /* node-about_page-og_group_ref */       'weight' => 0,
  /* node-about_page-og_group_ref */     ),
  /* node-about_page-og_group_ref */     'sidebar_teaser_v2' => array(
  /* node-about_page-og_group_ref */       'label' => 'above',
  /* node-about_page-og_group_ref */       'settings' => array(),
  /* node-about_page-og_group_ref */       'type' => 'hidden',
  /* node-about_page-og_group_ref */       'weight' => 0,
  /* node-about_page-og_group_ref */     ),
  /* node-about_page-og_group_ref */     'teaser' => array(
  /* node-about_page-og_group_ref */       'label' => 'above',
  /* node-about_page-og_group_ref */       'settings' => array(),
  /* node-about_page-og_group_ref */       'type' => 'hidden',
  /* node-about_page-og_group_ref */       'weight' => 0,
  /* node-about_page-og_group_ref */     ),
  /* node-about_page-og_group_ref */     'teaserthumb' => array(
  /* node-about_page-og_group_ref */       'label' => 'above',
  /* node-about_page-og_group_ref */       'settings' => array(),
  /* node-about_page-og_group_ref */       'type' => 'hidden',
  /* node-about_page-og_group_ref */       'weight' => 0,
  /* node-about_page-og_group_ref */     ),
  /* node-about_page-og_group_ref */     'time_and_location' => array(
  /* node-about_page-og_group_ref */       'label' => 'above',
  /* node-about_page-og_group_ref */       'settings' => array(),
  /* node-about_page-og_group_ref */       'type' => 'hidden',
  /* node-about_page-og_group_ref */       'weight' => 0,
  /* node-about_page-og_group_ref */     ),
  /* node-about_page-og_group_ref */     'title_and_time' => array(
  /* node-about_page-og_group_ref */       'label' => 'above',
  /* node-about_page-og_group_ref */       'settings' => array(),
  /* node-about_page-og_group_ref */       'type' => 'hidden',
  /* node-about_page-og_group_ref */       'weight' => 0,
  /* node-about_page-og_group_ref */     ),
  /* node-about_page-og_group_ref */   ),
  /* node-about_page-og_group_ref */   'entity_type' => 'node',
  /* node-about_page-og_group_ref */   'field_name' => 'og_group_ref',
  /* node-about_page-og_group_ref */   'label' => 'Groups audience',
  /* node-about_page-og_group_ref */   'required' => FALSE,
  /* node-about_page-og_group_ref */   'settings' => array(
  /* node-about_page-og_group_ref */     'behaviors' => array(
  /* node-about_page-og_group_ref */       'og_widget' => array(
  /* node-about_page-og_group_ref */         'admin' => array(
  /* node-about_page-og_group_ref */           'widget_type' => 'entityreference_autocomplete',
  /* node-about_page-og_group_ref */         ),
  /* node-about_page-og_group_ref */         'default' => array(
  /* node-about_page-og_group_ref */           'widget_type' => 'options_select',
  /* node-about_page-og_group_ref */         ),
  /* node-about_page-og_group_ref */         'status' => TRUE,
  /* node-about_page-og_group_ref */       ),
  /* node-about_page-og_group_ref */     ),
  /* node-about_page-og_group_ref */     'user_field_privacy' => FALSE,
  /* node-about_page-og_group_ref */     'user_register_form' => FALSE,
  /* node-about_page-og_group_ref */   ),
  /* node-about_page-og_group_ref */   'view modes' => array(
  /* node-about_page-og_group_ref */     'full' => array(
  /* node-about_page-og_group_ref */       'custom settings' => FALSE,
  /* node-about_page-og_group_ref */       'label' => 'Full',
  /* node-about_page-og_group_ref */       'type' => 'og_list_default',
  /* node-about_page-og_group_ref */     ),
  /* node-about_page-og_group_ref */     'teaser' => array(
  /* node-about_page-og_group_ref */       'custom settings' => FALSE,
  /* node-about_page-og_group_ref */       'label' => 'Teaser',
  /* node-about_page-og_group_ref */       'type' => 'og_list_default',
  /* node-about_page-og_group_ref */     ),
  /* node-about_page-og_group_ref */   ),
  /* node-about_page-og_group_ref */   'widget' => array(
  /* node-about_page-og_group_ref */     'module' => 'og',
  /* node-about_page-og_group_ref */     'settings' => array(),
  /* node-about_page-og_group_ref */     'type' => 'og_complex',
  /* node-about_page-og_group_ref */     'weight' => 4,
  /* node-about_page-og_group_ref */   ),
  /* node-about_page-og_group_ref */ );

  // Translatables
  // Included for use with string extractors like potx.
  t('About');
  t('Administration');
  t('Call to Action');
  t('Contact Information');
  t('Employment');
  t('Facebook');
  t('Google Plus');
  t('Group content visibility');
  t('Groups audience');
  t('Instagram');
  t('Leadership');
  t('LinkedIn');
  t('Main Image');
  t('Mission');
  t('Org Short Title');
  t('The "Main Image" appears before the text of your news item, between the title and author information. If you do not also upload a thumbnail image, this image will accompany any teasers for this news item. Files must not exceed 8 MB and be 800 x 500 in dimension. Allowed file types: png gif jpg jpeg. Images should be rectangular such that the horizontal dimensions are largest.');
  t('Twitter');
  t('Visitor Information');
  t('Who can see this content?');
  t('YouTube');

  return $field_instances;
}
