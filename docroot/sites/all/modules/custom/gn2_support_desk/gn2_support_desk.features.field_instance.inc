<?php
/**
 * @file
 * gn2_support_desk.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function gn2_support_desk_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-support-field_actual_functionality'.
  $field_instances['node-support-field_actual_functionality'] = array(
  /* node-support-field_actual_functionality */   'bundle' => 'support',
  /* node-support-field_actual_functionality */   'default_value' => NULL,
  /* node-support-field_actual_functionality */   'deleted' => 0,
  /* node-support-field_actual_functionality */   'description' => '',
  /* node-support-field_actual_functionality */   'display' => array(
  /* node-support-field_actual_functionality */     'default' => array(
  /* node-support-field_actual_functionality */       'label' => 'above',
  /* node-support-field_actual_functionality */       'module' => 'text',
  /* node-support-field_actual_functionality */       'settings' => array(
  /* node-support-field_actual_functionality */         'field_formatter_class' => '',
  /* node-support-field_actual_functionality */       ),
  /* node-support-field_actual_functionality */       'type' => 'text_default',
  /* node-support-field_actual_functionality */       'weight' => 7,
  /* node-support-field_actual_functionality */     ),
  /* node-support-field_actual_functionality */     'events_list' => array(
  /* node-support-field_actual_functionality */       'label' => 'above',
  /* node-support-field_actual_functionality */       'settings' => array(),
  /* node-support-field_actual_functionality */       'type' => 'hidden',
  /* node-support-field_actual_functionality */       'weight' => 0,
  /* node-support-field_actual_functionality */     ),
  /* node-support-field_actual_functionality */     'featured_publication' => array(
  /* node-support-field_actual_functionality */       'label' => 'above',
  /* node-support-field_actual_functionality */       'settings' => array(),
  /* node-support-field_actual_functionality */       'type' => 'hidden',
  /* node-support-field_actual_functionality */       'weight' => 0,
  /* node-support-field_actual_functionality */     ),
  /* node-support-field_actual_functionality */     'group_teaser' => array(
  /* node-support-field_actual_functionality */       'label' => 'above',
  /* node-support-field_actual_functionality */       'settings' => array(),
  /* node-support-field_actual_functionality */       'type' => 'hidden',
  /* node-support-field_actual_functionality */       'weight' => 0,
  /* node-support-field_actual_functionality */     ),
  /* node-support-field_actual_functionality */     'one_column_teaser' => array(
  /* node-support-field_actual_functionality */       'label' => 'above',
  /* node-support-field_actual_functionality */       'settings' => array(),
  /* node-support-field_actual_functionality */       'type' => 'hidden',
  /* node-support-field_actual_functionality */       'weight' => 0,
  /* node-support-field_actual_functionality */     ),
  /* node-support-field_actual_functionality */     'post_teaser_group_landing_page' => array(
  /* node-support-field_actual_functionality */       'label' => 'above',
  /* node-support-field_actual_functionality */       'settings' => array(),
  /* node-support-field_actual_functionality */       'type' => 'hidden',
  /* node-support-field_actual_functionality */       'weight' => 0,
  /* node-support-field_actual_functionality */     ),
  /* node-support-field_actual_functionality */     'search_teaser' => array(
  /* node-support-field_actual_functionality */       'label' => 'above',
  /* node-support-field_actual_functionality */       'settings' => array(),
  /* node-support-field_actual_functionality */       'type' => 'hidden',
  /* node-support-field_actual_functionality */       'weight' => 0,
  /* node-support-field_actual_functionality */     ),
  /* node-support-field_actual_functionality */     'sidebar_' => array(
  /* node-support-field_actual_functionality */       'label' => 'above',
  /* node-support-field_actual_functionality */       'settings' => array(),
  /* node-support-field_actual_functionality */       'type' => 'hidden',
  /* node-support-field_actual_functionality */       'weight' => 0,
  /* node-support-field_actual_functionality */     ),
  /* node-support-field_actual_functionality */     'sidebar_teaser_v2' => array(
  /* node-support-field_actual_functionality */       'label' => 'above',
  /* node-support-field_actual_functionality */       'settings' => array(),
  /* node-support-field_actual_functionality */       'type' => 'hidden',
  /* node-support-field_actual_functionality */       'weight' => 0,
  /* node-support-field_actual_functionality */     ),
  /* node-support-field_actual_functionality */     'teaser' => array(
  /* node-support-field_actual_functionality */       'label' => 'above',
  /* node-support-field_actual_functionality */       'settings' => array(),
  /* node-support-field_actual_functionality */       'type' => 'hidden',
  /* node-support-field_actual_functionality */       'weight' => 0,
  /* node-support-field_actual_functionality */     ),
  /* node-support-field_actual_functionality */     'teaserthumb' => array(
  /* node-support-field_actual_functionality */       'label' => 'above',
  /* node-support-field_actual_functionality */       'settings' => array(),
  /* node-support-field_actual_functionality */       'type' => 'hidden',
  /* node-support-field_actual_functionality */       'weight' => 0,
  /* node-support-field_actual_functionality */     ),
  /* node-support-field_actual_functionality */     'time_and_location' => array(
  /* node-support-field_actual_functionality */       'label' => 'above',
  /* node-support-field_actual_functionality */       'settings' => array(),
  /* node-support-field_actual_functionality */       'type' => 'hidden',
  /* node-support-field_actual_functionality */       'weight' => 0,
  /* node-support-field_actual_functionality */     ),
  /* node-support-field_actual_functionality */     'title_and_time' => array(
  /* node-support-field_actual_functionality */       'label' => 'above',
  /* node-support-field_actual_functionality */       'settings' => array(),
  /* node-support-field_actual_functionality */       'type' => 'hidden',
  /* node-support-field_actual_functionality */       'weight' => 0,
  /* node-support-field_actual_functionality */     ),
  /* node-support-field_actual_functionality */   ),
  /* node-support-field_actual_functionality */   'entity_type' => 'node',
  /* node-support-field_actual_functionality */   'fences_wrapper' => 'div',
  /* node-support-field_actual_functionality */   'field_name' => 'field_actual_functionality',
  /* node-support-field_actual_functionality */   'label' => 'What actually happened?',
  /* node-support-field_actual_functionality */   'required' => 0,
  /* node-support-field_actual_functionality */   'settings' => array(
  /* node-support-field_actual_functionality */     'better_formats' => array(
  /* node-support-field_actual_functionality */       'allowed_formats' => array(
  /* node-support-field_actual_functionality */         'filtered_html' => 'filtered_html',
  /* node-support-field_actual_functionality */         'full_html' => 0,
  /* node-support-field_actual_functionality */         'php_code' => 0,
  /* node-support-field_actual_functionality */         'plain_text' => 'plain_text',
  /* node-support-field_actual_functionality */         'sessions_wysiwyg' => 0,
  /* node-support-field_actual_functionality */       ),
  /* node-support-field_actual_functionality */       'allowed_formats_toggle' => 1,
  /* node-support-field_actual_functionality */       'default_order_toggle' => 0,
  /* node-support-field_actual_functionality */       'default_order_wrapper' => array(
  /* node-support-field_actual_functionality */         'formats' => array(
  /* node-support-field_actual_functionality */           'filtered_html' => array(
  /* node-support-field_actual_functionality */             'weight' => -10,
  /* node-support-field_actual_functionality */           ),
  /* node-support-field_actual_functionality */           'full_html' => array(
  /* node-support-field_actual_functionality */             'weight' => -8,
  /* node-support-field_actual_functionality */           ),
  /* node-support-field_actual_functionality */           'php_code' => array(
  /* node-support-field_actual_functionality */             'weight' => -7,
  /* node-support-field_actual_functionality */           ),
  /* node-support-field_actual_functionality */           'plain_text' => array(
  /* node-support-field_actual_functionality */             'weight' => -9,
  /* node-support-field_actual_functionality */           ),
  /* node-support-field_actual_functionality */           'sessions_wysiwyg' => array(
  /* node-support-field_actual_functionality */             'weight' => 0,
  /* node-support-field_actual_functionality */           ),
  /* node-support-field_actual_functionality */         ),
  /* node-support-field_actual_functionality */       ),
  /* node-support-field_actual_functionality */     ),
  /* node-support-field_actual_functionality */     'text_processing' => 1,
  /* node-support-field_actual_functionality */     'user_register_form' => FALSE,
  /* node-support-field_actual_functionality */   ),
  /* node-support-field_actual_functionality */   'widget' => array(
  /* node-support-field_actual_functionality */     'active' => 1,
  /* node-support-field_actual_functionality */     'module' => 'text',
  /* node-support-field_actual_functionality */     'settings' => array(
  /* node-support-field_actual_functionality */       'rows' => 5,
  /* node-support-field_actual_functionality */     ),
  /* node-support-field_actual_functionality */     'type' => 'text_textarea',
  /* node-support-field_actual_functionality */     'weight' => 5,
  /* node-support-field_actual_functionality */   ),
  /* node-support-field_actual_functionality */ );

  // Exported field_instance: 'node-support-field_admin_note'.
  $field_instances['node-support-field_admin_note'] = array(
  /* node-support-field_admin_note */   'bundle' => 'support',
  /* node-support-field_admin_note */   'default_value' => NULL,
  /* node-support-field_admin_note */   'deleted' => 0,
  /* node-support-field_admin_note */   'description' => '',
  /* node-support-field_admin_note */   'display' => array(
  /* node-support-field_admin_note */     'default' => array(
  /* node-support-field_admin_note */       'label' => 'above',
  /* node-support-field_admin_note */       'module' => 'text',
  /* node-support-field_admin_note */       'settings' => array(
  /* node-support-field_admin_note */         'field_formatter_class' => '',
  /* node-support-field_admin_note */       ),
  /* node-support-field_admin_note */       'type' => 'text_default',
  /* node-support-field_admin_note */       'weight' => 15,
  /* node-support-field_admin_note */     ),
  /* node-support-field_admin_note */     'events_list' => array(
  /* node-support-field_admin_note */       'label' => 'above',
  /* node-support-field_admin_note */       'settings' => array(),
  /* node-support-field_admin_note */       'type' => 'hidden',
  /* node-support-field_admin_note */       'weight' => 0,
  /* node-support-field_admin_note */     ),
  /* node-support-field_admin_note */     'featured_publication' => array(
  /* node-support-field_admin_note */       'label' => 'above',
  /* node-support-field_admin_note */       'settings' => array(),
  /* node-support-field_admin_note */       'type' => 'hidden',
  /* node-support-field_admin_note */       'weight' => 0,
  /* node-support-field_admin_note */     ),
  /* node-support-field_admin_note */     'group_teaser' => array(
  /* node-support-field_admin_note */       'label' => 'above',
  /* node-support-field_admin_note */       'settings' => array(),
  /* node-support-field_admin_note */       'type' => 'hidden',
  /* node-support-field_admin_note */       'weight' => 0,
  /* node-support-field_admin_note */     ),
  /* node-support-field_admin_note */     'one_column_teaser' => array(
  /* node-support-field_admin_note */       'label' => 'above',
  /* node-support-field_admin_note */       'settings' => array(),
  /* node-support-field_admin_note */       'type' => 'hidden',
  /* node-support-field_admin_note */       'weight' => 0,
  /* node-support-field_admin_note */     ),
  /* node-support-field_admin_note */     'post_teaser_group_landing_page' => array(
  /* node-support-field_admin_note */       'label' => 'above',
  /* node-support-field_admin_note */       'settings' => array(),
  /* node-support-field_admin_note */       'type' => 'hidden',
  /* node-support-field_admin_note */       'weight' => 0,
  /* node-support-field_admin_note */     ),
  /* node-support-field_admin_note */     'search_teaser' => array(
  /* node-support-field_admin_note */       'label' => 'above',
  /* node-support-field_admin_note */       'settings' => array(),
  /* node-support-field_admin_note */       'type' => 'hidden',
  /* node-support-field_admin_note */       'weight' => 0,
  /* node-support-field_admin_note */     ),
  /* node-support-field_admin_note */     'sidebar_' => array(
  /* node-support-field_admin_note */       'label' => 'above',
  /* node-support-field_admin_note */       'settings' => array(),
  /* node-support-field_admin_note */       'type' => 'hidden',
  /* node-support-field_admin_note */       'weight' => 0,
  /* node-support-field_admin_note */     ),
  /* node-support-field_admin_note */     'sidebar_teaser_v2' => array(
  /* node-support-field_admin_note */       'label' => 'above',
  /* node-support-field_admin_note */       'settings' => array(),
  /* node-support-field_admin_note */       'type' => 'hidden',
  /* node-support-field_admin_note */       'weight' => 0,
  /* node-support-field_admin_note */     ),
  /* node-support-field_admin_note */     'teaser' => array(
  /* node-support-field_admin_note */       'label' => 'above',
  /* node-support-field_admin_note */       'settings' => array(),
  /* node-support-field_admin_note */       'type' => 'hidden',
  /* node-support-field_admin_note */       'weight' => 0,
  /* node-support-field_admin_note */     ),
  /* node-support-field_admin_note */     'teaserthumb' => array(
  /* node-support-field_admin_note */       'label' => 'above',
  /* node-support-field_admin_note */       'settings' => array(),
  /* node-support-field_admin_note */       'type' => 'hidden',
  /* node-support-field_admin_note */       'weight' => 0,
  /* node-support-field_admin_note */     ),
  /* node-support-field_admin_note */     'time_and_location' => array(
  /* node-support-field_admin_note */       'label' => 'above',
  /* node-support-field_admin_note */       'settings' => array(),
  /* node-support-field_admin_note */       'type' => 'hidden',
  /* node-support-field_admin_note */       'weight' => 0,
  /* node-support-field_admin_note */     ),
  /* node-support-field_admin_note */     'title_and_time' => array(
  /* node-support-field_admin_note */       'label' => 'above',
  /* node-support-field_admin_note */       'settings' => array(),
  /* node-support-field_admin_note */       'type' => 'hidden',
  /* node-support-field_admin_note */       'weight' => 0,
  /* node-support-field_admin_note */     ),
  /* node-support-field_admin_note */   ),
  /* node-support-field_admin_note */   'entity_type' => 'node',
  /* node-support-field_admin_note */   'fences_wrapper' => 'div',
  /* node-support-field_admin_note */   'field_name' => 'field_admin_note',
  /* node-support-field_admin_note */   'label' => 'Admin note',
  /* node-support-field_admin_note */   'required' => 0,
  /* node-support-field_admin_note */   'settings' => array(
  /* node-support-field_admin_note */     'better_formats' => array(
  /* node-support-field_admin_note */       'allowed_formats' => array(
  /* node-support-field_admin_note */         'filtered_html' => 'filtered_html',
  /* node-support-field_admin_note */         'full_html' => 'full_html',
  /* node-support-field_admin_note */         'php_code' => 'php_code',
  /* node-support-field_admin_note */         'plain_text' => 'plain_text',
  /* node-support-field_admin_note */         'sessions_wysiwyg' => 'sessions_wysiwyg',
  /* node-support-field_admin_note */       ),
  /* node-support-field_admin_note */       'allowed_formats_toggle' => 0,
  /* node-support-field_admin_note */       'default_order_toggle' => 0,
  /* node-support-field_admin_note */       'default_order_wrapper' => array(
  /* node-support-field_admin_note */         'formats' => array(
  /* node-support-field_admin_note */           'filtered_html' => array(
  /* node-support-field_admin_note */             'weight' => -10,
  /* node-support-field_admin_note */           ),
  /* node-support-field_admin_note */           'full_html' => array(
  /* node-support-field_admin_note */             'weight' => -8,
  /* node-support-field_admin_note */           ),
  /* node-support-field_admin_note */           'php_code' => array(
  /* node-support-field_admin_note */             'weight' => -7,
  /* node-support-field_admin_note */           ),
  /* node-support-field_admin_note */           'plain_text' => array(
  /* node-support-field_admin_note */             'weight' => -9,
  /* node-support-field_admin_note */           ),
  /* node-support-field_admin_note */           'sessions_wysiwyg' => array(
  /* node-support-field_admin_note */             'weight' => 0,
  /* node-support-field_admin_note */           ),
  /* node-support-field_admin_note */         ),
  /* node-support-field_admin_note */       ),
  /* node-support-field_admin_note */     ),
  /* node-support-field_admin_note */     'text_processing' => 0,
  /* node-support-field_admin_note */     'user_register_form' => FALSE,
  /* node-support-field_admin_note */   ),
  /* node-support-field_admin_note */   'widget' => array(
  /* node-support-field_admin_note */     'active' => 1,
  /* node-support-field_admin_note */     'module' => 'text',
  /* node-support-field_admin_note */     'settings' => array(
  /* node-support-field_admin_note */       'rows' => 5,
  /* node-support-field_admin_note */     ),
  /* node-support-field_admin_note */     'type' => 'text_textarea',
  /* node-support-field_admin_note */     'weight' => 43,
  /* node-support-field_admin_note */   ),
  /* node-support-field_admin_note */ );

  // Exported field_instance: 'node-support-field_attach_files'.
  $field_instances['node-support-field_attach_files'] = array(
  /* node-support-field_attach_files */   'bundle' => 'support',
  /* node-support-field_attach_files */   'deleted' => 0,
  /* node-support-field_attach_files */   'description' => '',
  /* node-support-field_attach_files */   'display' => array(
  /* node-support-field_attach_files */     'default' => array(
  /* node-support-field_attach_files */       'label' => 'above',
  /* node-support-field_attach_files */       'module' => 'file',
  /* node-support-field_attach_files */       'settings' => array(
  /* node-support-field_attach_files */         'field_formatter_class' => '',
  /* node-support-field_attach_files */       ),
  /* node-support-field_attach_files */       'type' => 'file_default',
  /* node-support-field_attach_files */       'weight' => 9,
  /* node-support-field_attach_files */     ),
  /* node-support-field_attach_files */     'events_list' => array(
  /* node-support-field_attach_files */       'label' => 'above',
  /* node-support-field_attach_files */       'settings' => array(),
  /* node-support-field_attach_files */       'type' => 'hidden',
  /* node-support-field_attach_files */       'weight' => 0,
  /* node-support-field_attach_files */     ),
  /* node-support-field_attach_files */     'featured_publication' => array(
  /* node-support-field_attach_files */       'label' => 'above',
  /* node-support-field_attach_files */       'settings' => array(),
  /* node-support-field_attach_files */       'type' => 'hidden',
  /* node-support-field_attach_files */       'weight' => 0,
  /* node-support-field_attach_files */     ),
  /* node-support-field_attach_files */     'group_teaser' => array(
  /* node-support-field_attach_files */       'label' => 'above',
  /* node-support-field_attach_files */       'settings' => array(),
  /* node-support-field_attach_files */       'type' => 'hidden',
  /* node-support-field_attach_files */       'weight' => 0,
  /* node-support-field_attach_files */     ),
  /* node-support-field_attach_files */     'one_column_teaser' => array(
  /* node-support-field_attach_files */       'label' => 'above',
  /* node-support-field_attach_files */       'settings' => array(),
  /* node-support-field_attach_files */       'type' => 'hidden',
  /* node-support-field_attach_files */       'weight' => 0,
  /* node-support-field_attach_files */     ),
  /* node-support-field_attach_files */     'post_teaser_group_landing_page' => array(
  /* node-support-field_attach_files */       'label' => 'above',
  /* node-support-field_attach_files */       'settings' => array(),
  /* node-support-field_attach_files */       'type' => 'hidden',
  /* node-support-field_attach_files */       'weight' => 0,
  /* node-support-field_attach_files */     ),
  /* node-support-field_attach_files */     'search_teaser' => array(
  /* node-support-field_attach_files */       'label' => 'above',
  /* node-support-field_attach_files */       'settings' => array(),
  /* node-support-field_attach_files */       'type' => 'hidden',
  /* node-support-field_attach_files */       'weight' => 0,
  /* node-support-field_attach_files */     ),
  /* node-support-field_attach_files */     'sidebar_' => array(
  /* node-support-field_attach_files */       'label' => 'above',
  /* node-support-field_attach_files */       'settings' => array(),
  /* node-support-field_attach_files */       'type' => 'hidden',
  /* node-support-field_attach_files */       'weight' => 0,
  /* node-support-field_attach_files */     ),
  /* node-support-field_attach_files */     'sidebar_teaser_v2' => array(
  /* node-support-field_attach_files */       'label' => 'above',
  /* node-support-field_attach_files */       'settings' => array(),
  /* node-support-field_attach_files */       'type' => 'hidden',
  /* node-support-field_attach_files */       'weight' => 0,
  /* node-support-field_attach_files */     ),
  /* node-support-field_attach_files */     'teaser' => array(
  /* node-support-field_attach_files */       'label' => 'above',
  /* node-support-field_attach_files */       'settings' => array(),
  /* node-support-field_attach_files */       'type' => 'hidden',
  /* node-support-field_attach_files */       'weight' => 0,
  /* node-support-field_attach_files */     ),
  /* node-support-field_attach_files */     'teaserthumb' => array(
  /* node-support-field_attach_files */       'label' => 'above',
  /* node-support-field_attach_files */       'settings' => array(),
  /* node-support-field_attach_files */       'type' => 'hidden',
  /* node-support-field_attach_files */       'weight' => 0,
  /* node-support-field_attach_files */     ),
  /* node-support-field_attach_files */     'time_and_location' => array(
  /* node-support-field_attach_files */       'label' => 'above',
  /* node-support-field_attach_files */       'settings' => array(),
  /* node-support-field_attach_files */       'type' => 'hidden',
  /* node-support-field_attach_files */       'weight' => 0,
  /* node-support-field_attach_files */     ),
  /* node-support-field_attach_files */     'title_and_time' => array(
  /* node-support-field_attach_files */       'label' => 'above',
  /* node-support-field_attach_files */       'settings' => array(),
  /* node-support-field_attach_files */       'type' => 'hidden',
  /* node-support-field_attach_files */       'weight' => 0,
  /* node-support-field_attach_files */     ),
  /* node-support-field_attach_files */   ),
  /* node-support-field_attach_files */   'entity_type' => 'node',
  /* node-support-field_attach_files */   'fences_wrapper' => 'div',
  /* node-support-field_attach_files */   'field_name' => 'field_attach_files',
  /* node-support-field_attach_files */   'label' => 'Attach Files',
  /* node-support-field_attach_files */   'required' => 0,
  /* node-support-field_attach_files */   'settings' => array(
  /* node-support-field_attach_files */     'description_field' => 0,
  /* node-support-field_attach_files */     'file_directory' => '',
  /* node-support-field_attach_files */     'file_extensions' => 'txt pdf doc docx jpg png gif',
  /* node-support-field_attach_files */     'max_filesize' => '20 MB',
  /* node-support-field_attach_files */     'user_register_form' => FALSE,
  /* node-support-field_attach_files */   ),
  /* node-support-field_attach_files */   'widget' => array(
  /* node-support-field_attach_files */     'active' => 1,
  /* node-support-field_attach_files */     'module' => 'file',
  /* node-support-field_attach_files */     'settings' => array(
  /* node-support-field_attach_files */       'progress_indicator' => 'throbber',
  /* node-support-field_attach_files */     ),
  /* node-support-field_attach_files */     'type' => 'file_generic',
  /* node-support-field_attach_files */     'weight' => 6,
  /* node-support-field_attach_files */   ),
  /* node-support-field_attach_files */ );

  // Exported field_instance: 'node-support-field_description'.
  $field_instances['node-support-field_description'] = array(
  /* node-support-field_description */   'bundle' => 'support',
  /* node-support-field_description */   'default_value' => NULL,
  /* node-support-field_description */   'deleted' => 0,
  /* node-support-field_description */   'description' => '',
  /* node-support-field_description */   'display' => array(
  /* node-support-field_description */     'default' => array(
  /* node-support-field_description */       'label' => 'above',
  /* node-support-field_description */       'module' => 'text',
  /* node-support-field_description */       'settings' => array(
  /* node-support-field_description */         'field_formatter_class' => '',
  /* node-support-field_description */       ),
  /* node-support-field_description */       'type' => 'text_default',
  /* node-support-field_description */       'weight' => 5,
  /* node-support-field_description */     ),
  /* node-support-field_description */     'events_list' => array(
  /* node-support-field_description */       'label' => 'above',
  /* node-support-field_description */       'settings' => array(),
  /* node-support-field_description */       'type' => 'hidden',
  /* node-support-field_description */       'weight' => 0,
  /* node-support-field_description */     ),
  /* node-support-field_description */     'featured_publication' => array(
  /* node-support-field_description */       'label' => 'above',
  /* node-support-field_description */       'settings' => array(),
  /* node-support-field_description */       'type' => 'hidden',
  /* node-support-field_description */       'weight' => 0,
  /* node-support-field_description */     ),
  /* node-support-field_description */     'group_teaser' => array(
  /* node-support-field_description */       'label' => 'above',
  /* node-support-field_description */       'settings' => array(),
  /* node-support-field_description */       'type' => 'hidden',
  /* node-support-field_description */       'weight' => 0,
  /* node-support-field_description */     ),
  /* node-support-field_description */     'one_column_teaser' => array(
  /* node-support-field_description */       'label' => 'above',
  /* node-support-field_description */       'settings' => array(),
  /* node-support-field_description */       'type' => 'hidden',
  /* node-support-field_description */       'weight' => 0,
  /* node-support-field_description */     ),
  /* node-support-field_description */     'post_teaser_group_landing_page' => array(
  /* node-support-field_description */       'label' => 'above',
  /* node-support-field_description */       'settings' => array(),
  /* node-support-field_description */       'type' => 'hidden',
  /* node-support-field_description */       'weight' => 0,
  /* node-support-field_description */     ),
  /* node-support-field_description */     'search_teaser' => array(
  /* node-support-field_description */       'label' => 'above',
  /* node-support-field_description */       'settings' => array(),
  /* node-support-field_description */       'type' => 'hidden',
  /* node-support-field_description */       'weight' => 0,
  /* node-support-field_description */     ),
  /* node-support-field_description */     'sidebar_' => array(
  /* node-support-field_description */       'label' => 'above',
  /* node-support-field_description */       'settings' => array(),
  /* node-support-field_description */       'type' => 'hidden',
  /* node-support-field_description */       'weight' => 0,
  /* node-support-field_description */     ),
  /* node-support-field_description */     'sidebar_teaser_v2' => array(
  /* node-support-field_description */       'label' => 'above',
  /* node-support-field_description */       'settings' => array(),
  /* node-support-field_description */       'type' => 'hidden',
  /* node-support-field_description */       'weight' => 0,
  /* node-support-field_description */     ),
  /* node-support-field_description */     'teaser' => array(
  /* node-support-field_description */       'label' => 'above',
  /* node-support-field_description */       'settings' => array(),
  /* node-support-field_description */       'type' => 'hidden',
  /* node-support-field_description */       'weight' => 0,
  /* node-support-field_description */     ),
  /* node-support-field_description */     'teaserthumb' => array(
  /* node-support-field_description */       'label' => 'above',
  /* node-support-field_description */       'settings' => array(),
  /* node-support-field_description */       'type' => 'hidden',
  /* node-support-field_description */       'weight' => 0,
  /* node-support-field_description */     ),
  /* node-support-field_description */     'time_and_location' => array(
  /* node-support-field_description */       'label' => 'above',
  /* node-support-field_description */       'settings' => array(),
  /* node-support-field_description */       'type' => 'hidden',
  /* node-support-field_description */       'weight' => 0,
  /* node-support-field_description */     ),
  /* node-support-field_description */     'title_and_time' => array(
  /* node-support-field_description */       'label' => 'above',
  /* node-support-field_description */       'settings' => array(),
  /* node-support-field_description */       'type' => 'hidden',
  /* node-support-field_description */       'weight' => 0,
  /* node-support-field_description */     ),
  /* node-support-field_description */   ),
  /* node-support-field_description */   'entity_type' => 'node',
  /* node-support-field_description */   'fences_wrapper' => 'div',
  /* node-support-field_description */   'field_name' => 'field_description',
  /* node-support-field_description */   'label' => 'Please describe the problem in more detail',
  /* node-support-field_description */   'required' => 1,
  /* node-support-field_description */   'settings' => array(
  /* node-support-field_description */     'better_formats' => array(
  /* node-support-field_description */       'allowed_formats' => array(
  /* node-support-field_description */         'filtered_html' => 'filtered_html',
  /* node-support-field_description */         'full_html' => 0,
  /* node-support-field_description */         'php_code' => 0,
  /* node-support-field_description */         'plain_text' => 'plain_text',
  /* node-support-field_description */         'sessions_wysiwyg' => 0,
  /* node-support-field_description */       ),
  /* node-support-field_description */       'allowed_formats_toggle' => 1,
  /* node-support-field_description */       'default_order_toggle' => 0,
  /* node-support-field_description */       'default_order_wrapper' => array(
  /* node-support-field_description */         'formats' => array(
  /* node-support-field_description */           'filtered_html' => array(
  /* node-support-field_description */             'weight' => -10,
  /* node-support-field_description */           ),
  /* node-support-field_description */           'full_html' => array(
  /* node-support-field_description */             'weight' => -8,
  /* node-support-field_description */           ),
  /* node-support-field_description */           'php_code' => array(
  /* node-support-field_description */             'weight' => -7,
  /* node-support-field_description */           ),
  /* node-support-field_description */           'plain_text' => array(
  /* node-support-field_description */             'weight' => -9,
  /* node-support-field_description */           ),
  /* node-support-field_description */           'sessions_wysiwyg' => array(
  /* node-support-field_description */             'weight' => 0,
  /* node-support-field_description */           ),
  /* node-support-field_description */         ),
  /* node-support-field_description */       ),
  /* node-support-field_description */     ),
  /* node-support-field_description */     'text_processing' => 1,
  /* node-support-field_description */     'user_register_form' => FALSE,
  /* node-support-field_description */   ),
  /* node-support-field_description */   'widget' => array(
  /* node-support-field_description */     'active' => 1,
  /* node-support-field_description */     'module' => 'text',
  /* node-support-field_description */     'settings' => array(
  /* node-support-field_description */       'rows' => 5,
  /* node-support-field_description */     ),
  /* node-support-field_description */     'type' => 'text_textarea',
  /* node-support-field_description */     'weight' => 3,
  /* node-support-field_description */   ),
  /* node-support-field_description */ );

  // Exported field_instance: 'node-support-field_email_address'.
  $field_instances['node-support-field_email_address'] = array(
  /* node-support-field_email_address */   'bundle' => 'support',
  /* node-support-field_email_address */   'default_value' => NULL,
  /* node-support-field_email_address */   'deleted' => 0,
  /* node-support-field_email_address */   'description' => '',
  /* node-support-field_email_address */   'display' => array(
  /* node-support-field_email_address */     'default' => array(
  /* node-support-field_email_address */       'label' => 'inline',
  /* node-support-field_email_address */       'module' => 'email',
  /* node-support-field_email_address */       'settings' => array(
  /* node-support-field_email_address */         'field_formatter_class' => '',
  /* node-support-field_email_address */       ),
  /* node-support-field_email_address */       'type' => 'email_default',
  /* node-support-field_email_address */       'weight' => 3,
  /* node-support-field_email_address */     ),
  /* node-support-field_email_address */     'events_list' => array(
  /* node-support-field_email_address */       'label' => 'above',
  /* node-support-field_email_address */       'settings' => array(),
  /* node-support-field_email_address */       'type' => 'hidden',
  /* node-support-field_email_address */       'weight' => 0,
  /* node-support-field_email_address */     ),
  /* node-support-field_email_address */     'featured_publication' => array(
  /* node-support-field_email_address */       'label' => 'above',
  /* node-support-field_email_address */       'settings' => array(),
  /* node-support-field_email_address */       'type' => 'hidden',
  /* node-support-field_email_address */       'weight' => 0,
  /* node-support-field_email_address */     ),
  /* node-support-field_email_address */     'group_teaser' => array(
  /* node-support-field_email_address */       'label' => 'above',
  /* node-support-field_email_address */       'settings' => array(),
  /* node-support-field_email_address */       'type' => 'hidden',
  /* node-support-field_email_address */       'weight' => 0,
  /* node-support-field_email_address */     ),
  /* node-support-field_email_address */     'one_column_teaser' => array(
  /* node-support-field_email_address */       'label' => 'above',
  /* node-support-field_email_address */       'settings' => array(),
  /* node-support-field_email_address */       'type' => 'hidden',
  /* node-support-field_email_address */       'weight' => 0,
  /* node-support-field_email_address */     ),
  /* node-support-field_email_address */     'post_teaser_group_landing_page' => array(
  /* node-support-field_email_address */       'label' => 'above',
  /* node-support-field_email_address */       'settings' => array(),
  /* node-support-field_email_address */       'type' => 'hidden',
  /* node-support-field_email_address */       'weight' => 0,
  /* node-support-field_email_address */     ),
  /* node-support-field_email_address */     'search_teaser' => array(
  /* node-support-field_email_address */       'label' => 'above',
  /* node-support-field_email_address */       'settings' => array(),
  /* node-support-field_email_address */       'type' => 'hidden',
  /* node-support-field_email_address */       'weight' => 0,
  /* node-support-field_email_address */     ),
  /* node-support-field_email_address */     'sidebar_' => array(
  /* node-support-field_email_address */       'label' => 'above',
  /* node-support-field_email_address */       'settings' => array(),
  /* node-support-field_email_address */       'type' => 'hidden',
  /* node-support-field_email_address */       'weight' => 0,
  /* node-support-field_email_address */     ),
  /* node-support-field_email_address */     'sidebar_teaser_v2' => array(
  /* node-support-field_email_address */       'label' => 'above',
  /* node-support-field_email_address */       'settings' => array(),
  /* node-support-field_email_address */       'type' => 'hidden',
  /* node-support-field_email_address */       'weight' => 0,
  /* node-support-field_email_address */     ),
  /* node-support-field_email_address */     'teaser' => array(
  /* node-support-field_email_address */       'label' => 'above',
  /* node-support-field_email_address */       'settings' => array(),
  /* node-support-field_email_address */       'type' => 'hidden',
  /* node-support-field_email_address */       'weight' => 0,
  /* node-support-field_email_address */     ),
  /* node-support-field_email_address */     'teaserthumb' => array(
  /* node-support-field_email_address */       'label' => 'above',
  /* node-support-field_email_address */       'settings' => array(),
  /* node-support-field_email_address */       'type' => 'hidden',
  /* node-support-field_email_address */       'weight' => 0,
  /* node-support-field_email_address */     ),
  /* node-support-field_email_address */     'time_and_location' => array(
  /* node-support-field_email_address */       'label' => 'above',
  /* node-support-field_email_address */       'settings' => array(),
  /* node-support-field_email_address */       'type' => 'hidden',
  /* node-support-field_email_address */       'weight' => 0,
  /* node-support-field_email_address */     ),
  /* node-support-field_email_address */     'title_and_time' => array(
  /* node-support-field_email_address */       'label' => 'above',
  /* node-support-field_email_address */       'settings' => array(),
  /* node-support-field_email_address */       'type' => 'hidden',
  /* node-support-field_email_address */       'weight' => 0,
  /* node-support-field_email_address */     ),
  /* node-support-field_email_address */   ),
  /* node-support-field_email_address */   'entity_type' => 'node',
  /* node-support-field_email_address */   'fences_wrapper' => 'div',
  /* node-support-field_email_address */   'field_name' => 'field_email_address',
  /* node-support-field_email_address */   'label' => 'Email',
  /* node-support-field_email_address */   'required' => 1,
  /* node-support-field_email_address */   'settings' => array(
  /* node-support-field_email_address */     'user_register_form' => FALSE,
  /* node-support-field_email_address */   ),
  /* node-support-field_email_address */   'widget' => array(
  /* node-support-field_email_address */     'active' => 1,
  /* node-support-field_email_address */     'module' => 'email',
  /* node-support-field_email_address */     'settings' => array(
  /* node-support-field_email_address */       'size' => 60,
  /* node-support-field_email_address */     ),
  /* node-support-field_email_address */     'type' => 'email_textfield',
  /* node-support-field_email_address */     'weight' => 35,
  /* node-support-field_email_address */   ),
  /* node-support-field_email_address */ );

  // Exported field_instance: 'node-support-field_expected_functionality'.
  $field_instances['node-support-field_expected_functionality'] = array(
  /* node-support-field_expected_functionality */   'bundle' => 'support',
  /* node-support-field_expected_functionality */   'default_value' => NULL,
  /* node-support-field_expected_functionality */   'deleted' => 0,
  /* node-support-field_expected_functionality */   'description' => '',
  /* node-support-field_expected_functionality */   'display' => array(
  /* node-support-field_expected_functionality */     'default' => array(
  /* node-support-field_expected_functionality */       'label' => 'above',
  /* node-support-field_expected_functionality */       'module' => 'text',
  /* node-support-field_expected_functionality */       'settings' => array(
  /* node-support-field_expected_functionality */         'field_formatter_class' => '',
  /* node-support-field_expected_functionality */       ),
  /* node-support-field_expected_functionality */       'type' => 'text_default',
  /* node-support-field_expected_functionality */       'weight' => 6,
  /* node-support-field_expected_functionality */     ),
  /* node-support-field_expected_functionality */     'events_list' => array(
  /* node-support-field_expected_functionality */       'label' => 'above',
  /* node-support-field_expected_functionality */       'settings' => array(),
  /* node-support-field_expected_functionality */       'type' => 'hidden',
  /* node-support-field_expected_functionality */       'weight' => 0,
  /* node-support-field_expected_functionality */     ),
  /* node-support-field_expected_functionality */     'featured_publication' => array(
  /* node-support-field_expected_functionality */       'label' => 'above',
  /* node-support-field_expected_functionality */       'settings' => array(),
  /* node-support-field_expected_functionality */       'type' => 'hidden',
  /* node-support-field_expected_functionality */       'weight' => 0,
  /* node-support-field_expected_functionality */     ),
  /* node-support-field_expected_functionality */     'group_teaser' => array(
  /* node-support-field_expected_functionality */       'label' => 'above',
  /* node-support-field_expected_functionality */       'settings' => array(),
  /* node-support-field_expected_functionality */       'type' => 'hidden',
  /* node-support-field_expected_functionality */       'weight' => 0,
  /* node-support-field_expected_functionality */     ),
  /* node-support-field_expected_functionality */     'one_column_teaser' => array(
  /* node-support-field_expected_functionality */       'label' => 'above',
  /* node-support-field_expected_functionality */       'settings' => array(),
  /* node-support-field_expected_functionality */       'type' => 'hidden',
  /* node-support-field_expected_functionality */       'weight' => 0,
  /* node-support-field_expected_functionality */     ),
  /* node-support-field_expected_functionality */     'post_teaser_group_landing_page' => array(
  /* node-support-field_expected_functionality */       'label' => 'above',
  /* node-support-field_expected_functionality */       'settings' => array(),
  /* node-support-field_expected_functionality */       'type' => 'hidden',
  /* node-support-field_expected_functionality */       'weight' => 0,
  /* node-support-field_expected_functionality */     ),
  /* node-support-field_expected_functionality */     'search_teaser' => array(
  /* node-support-field_expected_functionality */       'label' => 'above',
  /* node-support-field_expected_functionality */       'settings' => array(),
  /* node-support-field_expected_functionality */       'type' => 'hidden',
  /* node-support-field_expected_functionality */       'weight' => 0,
  /* node-support-field_expected_functionality */     ),
  /* node-support-field_expected_functionality */     'sidebar_' => array(
  /* node-support-field_expected_functionality */       'label' => 'above',
  /* node-support-field_expected_functionality */       'settings' => array(),
  /* node-support-field_expected_functionality */       'type' => 'hidden',
  /* node-support-field_expected_functionality */       'weight' => 0,
  /* node-support-field_expected_functionality */     ),
  /* node-support-field_expected_functionality */     'sidebar_teaser_v2' => array(
  /* node-support-field_expected_functionality */       'label' => 'above',
  /* node-support-field_expected_functionality */       'settings' => array(),
  /* node-support-field_expected_functionality */       'type' => 'hidden',
  /* node-support-field_expected_functionality */       'weight' => 0,
  /* node-support-field_expected_functionality */     ),
  /* node-support-field_expected_functionality */     'teaser' => array(
  /* node-support-field_expected_functionality */       'label' => 'above',
  /* node-support-field_expected_functionality */       'settings' => array(),
  /* node-support-field_expected_functionality */       'type' => 'hidden',
  /* node-support-field_expected_functionality */       'weight' => 0,
  /* node-support-field_expected_functionality */     ),
  /* node-support-field_expected_functionality */     'teaserthumb' => array(
  /* node-support-field_expected_functionality */       'label' => 'above',
  /* node-support-field_expected_functionality */       'settings' => array(),
  /* node-support-field_expected_functionality */       'type' => 'hidden',
  /* node-support-field_expected_functionality */       'weight' => 0,
  /* node-support-field_expected_functionality */     ),
  /* node-support-field_expected_functionality */     'time_and_location' => array(
  /* node-support-field_expected_functionality */       'label' => 'above',
  /* node-support-field_expected_functionality */       'settings' => array(),
  /* node-support-field_expected_functionality */       'type' => 'hidden',
  /* node-support-field_expected_functionality */       'weight' => 0,
  /* node-support-field_expected_functionality */     ),
  /* node-support-field_expected_functionality */     'title_and_time' => array(
  /* node-support-field_expected_functionality */       'label' => 'above',
  /* node-support-field_expected_functionality */       'settings' => array(),
  /* node-support-field_expected_functionality */       'type' => 'hidden',
  /* node-support-field_expected_functionality */       'weight' => 0,
  /* node-support-field_expected_functionality */     ),
  /* node-support-field_expected_functionality */   ),
  /* node-support-field_expected_functionality */   'entity_type' => 'node',
  /* node-support-field_expected_functionality */   'fences_wrapper' => 'div',
  /* node-support-field_expected_functionality */   'field_name' => 'field_expected_functionality',
  /* node-support-field_expected_functionality */   'label' => 'What did you expect to happen?',
  /* node-support-field_expected_functionality */   'required' => 0,
  /* node-support-field_expected_functionality */   'settings' => array(
  /* node-support-field_expected_functionality */     'better_formats' => array(
  /* node-support-field_expected_functionality */       'allowed_formats' => array(
  /* node-support-field_expected_functionality */         'filtered_html' => 'filtered_html',
  /* node-support-field_expected_functionality */         'full_html' => 0,
  /* node-support-field_expected_functionality */         'php_code' => 0,
  /* node-support-field_expected_functionality */         'plain_text' => 'plain_text',
  /* node-support-field_expected_functionality */         'sessions_wysiwyg' => 0,
  /* node-support-field_expected_functionality */       ),
  /* node-support-field_expected_functionality */       'allowed_formats_toggle' => 1,
  /* node-support-field_expected_functionality */       'default_order_toggle' => 0,
  /* node-support-field_expected_functionality */       'default_order_wrapper' => array(
  /* node-support-field_expected_functionality */         'formats' => array(
  /* node-support-field_expected_functionality */           'filtered_html' => array(
  /* node-support-field_expected_functionality */             'weight' => -10,
  /* node-support-field_expected_functionality */           ),
  /* node-support-field_expected_functionality */           'full_html' => array(
  /* node-support-field_expected_functionality */             'weight' => -8,
  /* node-support-field_expected_functionality */           ),
  /* node-support-field_expected_functionality */           'php_code' => array(
  /* node-support-field_expected_functionality */             'weight' => -7,
  /* node-support-field_expected_functionality */           ),
  /* node-support-field_expected_functionality */           'plain_text' => array(
  /* node-support-field_expected_functionality */             'weight' => -9,
  /* node-support-field_expected_functionality */           ),
  /* node-support-field_expected_functionality */           'sessions_wysiwyg' => array(
  /* node-support-field_expected_functionality */             'weight' => 0,
  /* node-support-field_expected_functionality */           ),
  /* node-support-field_expected_functionality */         ),
  /* node-support-field_expected_functionality */       ),
  /* node-support-field_expected_functionality */     ),
  /* node-support-field_expected_functionality */     'text_processing' => 1,
  /* node-support-field_expected_functionality */     'user_register_form' => FALSE,
  /* node-support-field_expected_functionality */   ),
  /* node-support-field_expected_functionality */   'widget' => array(
  /* node-support-field_expected_functionality */     'active' => 1,
  /* node-support-field_expected_functionality */     'module' => 'text',
  /* node-support-field_expected_functionality */     'settings' => array(
  /* node-support-field_expected_functionality */       'rows' => 5,
  /* node-support-field_expected_functionality */     ),
  /* node-support-field_expected_functionality */     'type' => 'text_textarea',
  /* node-support-field_expected_functionality */     'weight' => 4,
  /* node-support-field_expected_functionality */   ),
  /* node-support-field_expected_functionality */ );

  // Exported field_instance: 'node-support-field_json_capture'.
  $field_instances['node-support-field_json_capture'] = array(
  /* node-support-field_json_capture */   'bundle' => 'support',
  /* node-support-field_json_capture */   'default_value' => NULL,
  /* node-support-field_json_capture */   'deleted' => 0,
  /* node-support-field_json_capture */   'description' => '',
  /* node-support-field_json_capture */   'display' => array(
  /* node-support-field_json_capture */     'default' => array(
  /* node-support-field_json_capture */       'label' => 'above',
  /* node-support-field_json_capture */       'module' => 'text',
  /* node-support-field_json_capture */       'settings' => array(
  /* node-support-field_json_capture */         'field_formatter_class' => '',
  /* node-support-field_json_capture */       ),
  /* node-support-field_json_capture */       'type' => 'text_default',
  /* node-support-field_json_capture */       'weight' => 17,
  /* node-support-field_json_capture */     ),
  /* node-support-field_json_capture */     'events_list' => array(
  /* node-support-field_json_capture */       'label' => 'above',
  /* node-support-field_json_capture */       'settings' => array(),
  /* node-support-field_json_capture */       'type' => 'hidden',
  /* node-support-field_json_capture */       'weight' => 0,
  /* node-support-field_json_capture */     ),
  /* node-support-field_json_capture */     'featured_publication' => array(
  /* node-support-field_json_capture */       'label' => 'above',
  /* node-support-field_json_capture */       'settings' => array(),
  /* node-support-field_json_capture */       'type' => 'hidden',
  /* node-support-field_json_capture */       'weight' => 0,
  /* node-support-field_json_capture */     ),
  /* node-support-field_json_capture */     'group_teaser' => array(
  /* node-support-field_json_capture */       'label' => 'above',
  /* node-support-field_json_capture */       'settings' => array(),
  /* node-support-field_json_capture */       'type' => 'hidden',
  /* node-support-field_json_capture */       'weight' => 0,
  /* node-support-field_json_capture */     ),
  /* node-support-field_json_capture */     'one_column_teaser' => array(
  /* node-support-field_json_capture */       'label' => 'above',
  /* node-support-field_json_capture */       'settings' => array(),
  /* node-support-field_json_capture */       'type' => 'hidden',
  /* node-support-field_json_capture */       'weight' => 0,
  /* node-support-field_json_capture */     ),
  /* node-support-field_json_capture */     'post_teaser_group_landing_page' => array(
  /* node-support-field_json_capture */       'label' => 'above',
  /* node-support-field_json_capture */       'settings' => array(),
  /* node-support-field_json_capture */       'type' => 'hidden',
  /* node-support-field_json_capture */       'weight' => 0,
  /* node-support-field_json_capture */     ),
  /* node-support-field_json_capture */     'search_teaser' => array(
  /* node-support-field_json_capture */       'label' => 'above',
  /* node-support-field_json_capture */       'settings' => array(),
  /* node-support-field_json_capture */       'type' => 'hidden',
  /* node-support-field_json_capture */       'weight' => 0,
  /* node-support-field_json_capture */     ),
  /* node-support-field_json_capture */     'sidebar_' => array(
  /* node-support-field_json_capture */       'label' => 'above',
  /* node-support-field_json_capture */       'settings' => array(),
  /* node-support-field_json_capture */       'type' => 'hidden',
  /* node-support-field_json_capture */       'weight' => 0,
  /* node-support-field_json_capture */     ),
  /* node-support-field_json_capture */     'sidebar_teaser_v2' => array(
  /* node-support-field_json_capture */       'label' => 'above',
  /* node-support-field_json_capture */       'settings' => array(),
  /* node-support-field_json_capture */       'type' => 'hidden',
  /* node-support-field_json_capture */       'weight' => 0,
  /* node-support-field_json_capture */     ),
  /* node-support-field_json_capture */     'teaser' => array(
  /* node-support-field_json_capture */       'label' => 'above',
  /* node-support-field_json_capture */       'settings' => array(),
  /* node-support-field_json_capture */       'type' => 'hidden',
  /* node-support-field_json_capture */       'weight' => 0,
  /* node-support-field_json_capture */     ),
  /* node-support-field_json_capture */     'teaserthumb' => array(
  /* node-support-field_json_capture */       'label' => 'above',
  /* node-support-field_json_capture */       'settings' => array(),
  /* node-support-field_json_capture */       'type' => 'hidden',
  /* node-support-field_json_capture */       'weight' => 0,
  /* node-support-field_json_capture */     ),
  /* node-support-field_json_capture */     'time_and_location' => array(
  /* node-support-field_json_capture */       'label' => 'above',
  /* node-support-field_json_capture */       'settings' => array(),
  /* node-support-field_json_capture */       'type' => 'hidden',
  /* node-support-field_json_capture */       'weight' => 0,
  /* node-support-field_json_capture */     ),
  /* node-support-field_json_capture */     'title_and_time' => array(
  /* node-support-field_json_capture */       'label' => 'above',
  /* node-support-field_json_capture */       'settings' => array(),
  /* node-support-field_json_capture */       'type' => 'hidden',
  /* node-support-field_json_capture */       'weight' => 0,
  /* node-support-field_json_capture */     ),
  /* node-support-field_json_capture */   ),
  /* node-support-field_json_capture */   'entity_type' => 'node',
  /* node-support-field_json_capture */   'fences_wrapper' => 'div',
  /* node-support-field_json_capture */   'field_name' => 'field_json_capture',
  /* node-support-field_json_capture */   'label' => 'Json Capture',
  /* node-support-field_json_capture */   'required' => 0,
  /* node-support-field_json_capture */   'settings' => array(
  /* node-support-field_json_capture */     'better_formats' => array(
  /* node-support-field_json_capture */       'allowed_formats' => array(
  /* node-support-field_json_capture */         'filtered_html' => 'filtered_html',
  /* node-support-field_json_capture */         'full_html' => 'full_html',
  /* node-support-field_json_capture */         'php_code' => 'php_code',
  /* node-support-field_json_capture */         'plain_text' => 'plain_text',
  /* node-support-field_json_capture */         'sessions_wysiwyg' => 'sessions_wysiwyg',
  /* node-support-field_json_capture */       ),
  /* node-support-field_json_capture */       'allowed_formats_toggle' => 0,
  /* node-support-field_json_capture */       'default_order_toggle' => 0,
  /* node-support-field_json_capture */       'default_order_wrapper' => array(
  /* node-support-field_json_capture */         'formats' => array(
  /* node-support-field_json_capture */           'filtered_html' => array(
  /* node-support-field_json_capture */             'weight' => -10,
  /* node-support-field_json_capture */           ),
  /* node-support-field_json_capture */           'full_html' => array(
  /* node-support-field_json_capture */             'weight' => -8,
  /* node-support-field_json_capture */           ),
  /* node-support-field_json_capture */           'php_code' => array(
  /* node-support-field_json_capture */             'weight' => -7,
  /* node-support-field_json_capture */           ),
  /* node-support-field_json_capture */           'plain_text' => array(
  /* node-support-field_json_capture */             'weight' => -9,
  /* node-support-field_json_capture */           ),
  /* node-support-field_json_capture */           'sessions_wysiwyg' => array(
  /* node-support-field_json_capture */             'weight' => 0,
  /* node-support-field_json_capture */           ),
  /* node-support-field_json_capture */         ),
  /* node-support-field_json_capture */       ),
  /* node-support-field_json_capture */     ),
  /* node-support-field_json_capture */     'text_processing' => 0,
  /* node-support-field_json_capture */     'user_register_form' => FALSE,
  /* node-support-field_json_capture */   ),
  /* node-support-field_json_capture */   'widget' => array(
  /* node-support-field_json_capture */     'active' => 1,
  /* node-support-field_json_capture */     'module' => 'text',
  /* node-support-field_json_capture */     'settings' => array(
  /* node-support-field_json_capture */       'rows' => 5,
  /* node-support-field_json_capture */     ),
  /* node-support-field_json_capture */     'type' => 'text_textarea',
  /* node-support-field_json_capture */     'weight' => 37,
  /* node-support-field_json_capture */   ),
  /* node-support-field_json_capture */ );

  // Exported field_instance: 'node-support-field_name_first'.
  $field_instances['node-support-field_name_first'] = array(
  /* node-support-field_name_first */   'bundle' => 'support',
  /* node-support-field_name_first */   'default_value' => NULL,
  /* node-support-field_name_first */   'deleted' => 0,
  /* node-support-field_name_first */   'description' => '',
  /* node-support-field_name_first */   'display' => array(
  /* node-support-field_name_first */     'default' => array(
  /* node-support-field_name_first */       'label' => 'inline',
  /* node-support-field_name_first */       'module' => 'text',
  /* node-support-field_name_first */       'settings' => array(
  /* node-support-field_name_first */         'field_formatter_class' => '',
  /* node-support-field_name_first */       ),
  /* node-support-field_name_first */       'type' => 'text_default',
  /* node-support-field_name_first */       'weight' => 1,
  /* node-support-field_name_first */     ),
  /* node-support-field_name_first */     'events_list' => array(
  /* node-support-field_name_first */       'label' => 'above',
  /* node-support-field_name_first */       'settings' => array(),
  /* node-support-field_name_first */       'type' => 'hidden',
  /* node-support-field_name_first */       'weight' => 0,
  /* node-support-field_name_first */     ),
  /* node-support-field_name_first */     'featured_publication' => array(
  /* node-support-field_name_first */       'label' => 'above',
  /* node-support-field_name_first */       'settings' => array(),
  /* node-support-field_name_first */       'type' => 'hidden',
  /* node-support-field_name_first */       'weight' => 0,
  /* node-support-field_name_first */     ),
  /* node-support-field_name_first */     'group_teaser' => array(
  /* node-support-field_name_first */       'label' => 'above',
  /* node-support-field_name_first */       'settings' => array(),
  /* node-support-field_name_first */       'type' => 'hidden',
  /* node-support-field_name_first */       'weight' => 0,
  /* node-support-field_name_first */     ),
  /* node-support-field_name_first */     'one_column_teaser' => array(
  /* node-support-field_name_first */       'label' => 'above',
  /* node-support-field_name_first */       'settings' => array(),
  /* node-support-field_name_first */       'type' => 'hidden',
  /* node-support-field_name_first */       'weight' => 0,
  /* node-support-field_name_first */     ),
  /* node-support-field_name_first */     'post_teaser_group_landing_page' => array(
  /* node-support-field_name_first */       'label' => 'above',
  /* node-support-field_name_first */       'settings' => array(),
  /* node-support-field_name_first */       'type' => 'hidden',
  /* node-support-field_name_first */       'weight' => 0,
  /* node-support-field_name_first */     ),
  /* node-support-field_name_first */     'search_teaser' => array(
  /* node-support-field_name_first */       'label' => 'above',
  /* node-support-field_name_first */       'settings' => array(),
  /* node-support-field_name_first */       'type' => 'hidden',
  /* node-support-field_name_first */       'weight' => 0,
  /* node-support-field_name_first */     ),
  /* node-support-field_name_first */     'sidebar_' => array(
  /* node-support-field_name_first */       'label' => 'above',
  /* node-support-field_name_first */       'settings' => array(),
  /* node-support-field_name_first */       'type' => 'hidden',
  /* node-support-field_name_first */       'weight' => 0,
  /* node-support-field_name_first */     ),
  /* node-support-field_name_first */     'sidebar_teaser_v2' => array(
  /* node-support-field_name_first */       'label' => 'above',
  /* node-support-field_name_first */       'settings' => array(),
  /* node-support-field_name_first */       'type' => 'hidden',
  /* node-support-field_name_first */       'weight' => 0,
  /* node-support-field_name_first */     ),
  /* node-support-field_name_first */     'teaser' => array(
  /* node-support-field_name_first */       'label' => 'above',
  /* node-support-field_name_first */       'settings' => array(),
  /* node-support-field_name_first */       'type' => 'hidden',
  /* node-support-field_name_first */       'weight' => 0,
  /* node-support-field_name_first */     ),
  /* node-support-field_name_first */     'teaserthumb' => array(
  /* node-support-field_name_first */       'label' => 'above',
  /* node-support-field_name_first */       'settings' => array(),
  /* node-support-field_name_first */       'type' => 'hidden',
  /* node-support-field_name_first */       'weight' => 0,
  /* node-support-field_name_first */     ),
  /* node-support-field_name_first */     'time_and_location' => array(
  /* node-support-field_name_first */       'label' => 'above',
  /* node-support-field_name_first */       'settings' => array(),
  /* node-support-field_name_first */       'type' => 'hidden',
  /* node-support-field_name_first */       'weight' => 0,
  /* node-support-field_name_first */     ),
  /* node-support-field_name_first */     'title_and_time' => array(
  /* node-support-field_name_first */       'label' => 'above',
  /* node-support-field_name_first */       'settings' => array(),
  /* node-support-field_name_first */       'type' => 'hidden',
  /* node-support-field_name_first */       'weight' => 0,
  /* node-support-field_name_first */     ),
  /* node-support-field_name_first */   ),
  /* node-support-field_name_first */   'entity_type' => 'node',
  /* node-support-field_name_first */   'fences_wrapper' => 'div',
  /* node-support-field_name_first */   'field_name' => 'field_name_first',
  /* node-support-field_name_first */   'label' => 'First Name',
  /* node-support-field_name_first */   'required' => 1,
  /* node-support-field_name_first */   'settings' => array(
  /* node-support-field_name_first */     'better_formats' => array(
  /* node-support-field_name_first */       'allowed_formats' => array(
  /* node-support-field_name_first */         'filtered_html' => 'filtered_html',
  /* node-support-field_name_first */         'full_html' => 'full_html',
  /* node-support-field_name_first */         'php_code' => 'php_code',
  /* node-support-field_name_first */         'plain_text' => 'plain_text',
  /* node-support-field_name_first */         'sessions_wysiwyg' => 'sessions_wysiwyg',
  /* node-support-field_name_first */       ),
  /* node-support-field_name_first */       'allowed_formats_toggle' => 0,
  /* node-support-field_name_first */       'default_order_toggle' => 0,
  /* node-support-field_name_first */       'default_order_wrapper' => array(
  /* node-support-field_name_first */         'formats' => array(
  /* node-support-field_name_first */           'filtered_html' => array(
  /* node-support-field_name_first */             'weight' => -10,
  /* node-support-field_name_first */           ),
  /* node-support-field_name_first */           'full_html' => array(
  /* node-support-field_name_first */             'weight' => -8,
  /* node-support-field_name_first */           ),
  /* node-support-field_name_first */           'php_code' => array(
  /* node-support-field_name_first */             'weight' => -7,
  /* node-support-field_name_first */           ),
  /* node-support-field_name_first */           'plain_text' => array(
  /* node-support-field_name_first */             'weight' => -9,
  /* node-support-field_name_first */           ),
  /* node-support-field_name_first */           'sessions_wysiwyg' => array(
  /* node-support-field_name_first */             'weight' => 0,
  /* node-support-field_name_first */           ),
  /* node-support-field_name_first */         ),
  /* node-support-field_name_first */       ),
  /* node-support-field_name_first */     ),
  /* node-support-field_name_first */     'text_processing' => 0,
  /* node-support-field_name_first */     'user_register_form' => FALSE,
  /* node-support-field_name_first */   ),
  /* node-support-field_name_first */   'widget' => array(
  /* node-support-field_name_first */     'active' => 1,
  /* node-support-field_name_first */     'module' => 'text',
  /* node-support-field_name_first */     'settings' => array(
  /* node-support-field_name_first */       'size' => 60,
  /* node-support-field_name_first */     ),
  /* node-support-field_name_first */     'type' => 'text_textfield',
  /* node-support-field_name_first */     'weight' => 33,
  /* node-support-field_name_first */   ),
  /* node-support-field_name_first */ );

  // Exported field_instance: 'node-support-field_name_last'.
  $field_instances['node-support-field_name_last'] = array(
  /* node-support-field_name_last */   'bundle' => 'support',
  /* node-support-field_name_last */   'default_value' => NULL,
  /* node-support-field_name_last */   'deleted' => 0,
  /* node-support-field_name_last */   'description' => '',
  /* node-support-field_name_last */   'display' => array(
  /* node-support-field_name_last */     'default' => array(
  /* node-support-field_name_last */       'label' => 'inline',
  /* node-support-field_name_last */       'module' => 'text',
  /* node-support-field_name_last */       'settings' => array(
  /* node-support-field_name_last */         'field_formatter_class' => '',
  /* node-support-field_name_last */       ),
  /* node-support-field_name_last */       'type' => 'text_default',
  /* node-support-field_name_last */       'weight' => 2,
  /* node-support-field_name_last */     ),
  /* node-support-field_name_last */     'events_list' => array(
  /* node-support-field_name_last */       'label' => 'above',
  /* node-support-field_name_last */       'settings' => array(),
  /* node-support-field_name_last */       'type' => 'hidden',
  /* node-support-field_name_last */       'weight' => 0,
  /* node-support-field_name_last */     ),
  /* node-support-field_name_last */     'featured_publication' => array(
  /* node-support-field_name_last */       'label' => 'above',
  /* node-support-field_name_last */       'settings' => array(),
  /* node-support-field_name_last */       'type' => 'hidden',
  /* node-support-field_name_last */       'weight' => 0,
  /* node-support-field_name_last */     ),
  /* node-support-field_name_last */     'group_teaser' => array(
  /* node-support-field_name_last */       'label' => 'above',
  /* node-support-field_name_last */       'settings' => array(),
  /* node-support-field_name_last */       'type' => 'hidden',
  /* node-support-field_name_last */       'weight' => 0,
  /* node-support-field_name_last */     ),
  /* node-support-field_name_last */     'one_column_teaser' => array(
  /* node-support-field_name_last */       'label' => 'above',
  /* node-support-field_name_last */       'settings' => array(),
  /* node-support-field_name_last */       'type' => 'hidden',
  /* node-support-field_name_last */       'weight' => 0,
  /* node-support-field_name_last */     ),
  /* node-support-field_name_last */     'post_teaser_group_landing_page' => array(
  /* node-support-field_name_last */       'label' => 'above',
  /* node-support-field_name_last */       'settings' => array(),
  /* node-support-field_name_last */       'type' => 'hidden',
  /* node-support-field_name_last */       'weight' => 0,
  /* node-support-field_name_last */     ),
  /* node-support-field_name_last */     'search_teaser' => array(
  /* node-support-field_name_last */       'label' => 'above',
  /* node-support-field_name_last */       'settings' => array(),
  /* node-support-field_name_last */       'type' => 'hidden',
  /* node-support-field_name_last */       'weight' => 0,
  /* node-support-field_name_last */     ),
  /* node-support-field_name_last */     'sidebar_' => array(
  /* node-support-field_name_last */       'label' => 'above',
  /* node-support-field_name_last */       'settings' => array(),
  /* node-support-field_name_last */       'type' => 'hidden',
  /* node-support-field_name_last */       'weight' => 0,
  /* node-support-field_name_last */     ),
  /* node-support-field_name_last */     'sidebar_teaser_v2' => array(
  /* node-support-field_name_last */       'label' => 'above',
  /* node-support-field_name_last */       'settings' => array(),
  /* node-support-field_name_last */       'type' => 'hidden',
  /* node-support-field_name_last */       'weight' => 0,
  /* node-support-field_name_last */     ),
  /* node-support-field_name_last */     'teaser' => array(
  /* node-support-field_name_last */       'label' => 'above',
  /* node-support-field_name_last */       'settings' => array(),
  /* node-support-field_name_last */       'type' => 'hidden',
  /* node-support-field_name_last */       'weight' => 0,
  /* node-support-field_name_last */     ),
  /* node-support-field_name_last */     'teaserthumb' => array(
  /* node-support-field_name_last */       'label' => 'above',
  /* node-support-field_name_last */       'settings' => array(),
  /* node-support-field_name_last */       'type' => 'hidden',
  /* node-support-field_name_last */       'weight' => 0,
  /* node-support-field_name_last */     ),
  /* node-support-field_name_last */     'time_and_location' => array(
  /* node-support-field_name_last */       'label' => 'above',
  /* node-support-field_name_last */       'settings' => array(),
  /* node-support-field_name_last */       'type' => 'hidden',
  /* node-support-field_name_last */       'weight' => 0,
  /* node-support-field_name_last */     ),
  /* node-support-field_name_last */     'title_and_time' => array(
  /* node-support-field_name_last */       'label' => 'above',
  /* node-support-field_name_last */       'settings' => array(),
  /* node-support-field_name_last */       'type' => 'hidden',
  /* node-support-field_name_last */       'weight' => 0,
  /* node-support-field_name_last */     ),
  /* node-support-field_name_last */   ),
  /* node-support-field_name_last */   'entity_type' => 'node',
  /* node-support-field_name_last */   'fences_wrapper' => 'div',
  /* node-support-field_name_last */   'field_name' => 'field_name_last',
  /* node-support-field_name_last */   'label' => 'Family Name',
  /* node-support-field_name_last */   'required' => 1,
  /* node-support-field_name_last */   'settings' => array(
  /* node-support-field_name_last */     'better_formats' => array(
  /* node-support-field_name_last */       'allowed_formats' => array(
  /* node-support-field_name_last */         'filtered_html' => 'filtered_html',
  /* node-support-field_name_last */         'full_html' => 'full_html',
  /* node-support-field_name_last */         'php_code' => 'php_code',
  /* node-support-field_name_last */         'plain_text' => 'plain_text',
  /* node-support-field_name_last */         'sessions_wysiwyg' => 'sessions_wysiwyg',
  /* node-support-field_name_last */       ),
  /* node-support-field_name_last */       'allowed_formats_toggle' => 0,
  /* node-support-field_name_last */       'default_order_toggle' => 0,
  /* node-support-field_name_last */       'default_order_wrapper' => array(
  /* node-support-field_name_last */         'formats' => array(
  /* node-support-field_name_last */           'filtered_html' => array(
  /* node-support-field_name_last */             'weight' => -10,
  /* node-support-field_name_last */           ),
  /* node-support-field_name_last */           'full_html' => array(
  /* node-support-field_name_last */             'weight' => -8,
  /* node-support-field_name_last */           ),
  /* node-support-field_name_last */           'php_code' => array(
  /* node-support-field_name_last */             'weight' => -7,
  /* node-support-field_name_last */           ),
  /* node-support-field_name_last */           'plain_text' => array(
  /* node-support-field_name_last */             'weight' => -9,
  /* node-support-field_name_last */           ),
  /* node-support-field_name_last */           'sessions_wysiwyg' => array(
  /* node-support-field_name_last */             'weight' => 0,
  /* node-support-field_name_last */           ),
  /* node-support-field_name_last */         ),
  /* node-support-field_name_last */       ),
  /* node-support-field_name_last */     ),
  /* node-support-field_name_last */     'text_processing' => 0,
  /* node-support-field_name_last */     'user_register_form' => FALSE,
  /* node-support-field_name_last */   ),
  /* node-support-field_name_last */   'widget' => array(
  /* node-support-field_name_last */     'active' => 1,
  /* node-support-field_name_last */     'module' => 'text',
  /* node-support-field_name_last */     'settings' => array(
  /* node-support-field_name_last */       'size' => 60,
  /* node-support-field_name_last */     ),
  /* node-support-field_name_last */     'type' => 'text_textfield',
  /* node-support-field_name_last */     'weight' => 34,
  /* node-support-field_name_last */   ),
  /* node-support-field_name_last */ );

  // Exported field_instance: 'node-support-field_parent_organization'.
  $field_instances['node-support-field_parent_organization'] = array(
  /* node-support-field_parent_organization */   'bundle' => 'support',
  /* node-support-field_parent_organization */   'default_value' => NULL,
  /* node-support-field_parent_organization */   'default_value_function' => '',
  /* node-support-field_parent_organization */   'deleted' => 0,
  /* node-support-field_parent_organization */   'description' => '',
  /* node-support-field_parent_organization */   'display' => array(
  /* node-support-field_parent_organization */     'default' => array(
  /* node-support-field_parent_organization */       'label' => 'inline',
  /* node-support-field_parent_organization */       'module' => 'entityreference',
  /* node-support-field_parent_organization */       'settings' => array(
  /* node-support-field_parent_organization */         'field_formatter_class' => '',
  /* node-support-field_parent_organization */         'link' => FALSE,
  /* node-support-field_parent_organization */       ),
  /* node-support-field_parent_organization */       'type' => 'entityreference_label',
  /* node-support-field_parent_organization */       'weight' => 9,
  /* node-support-field_parent_organization */     ),
  /* node-support-field_parent_organization */     'events_list' => array(
  /* node-support-field_parent_organization */       'label' => 'above',
  /* node-support-field_parent_organization */       'settings' => array(),
  /* node-support-field_parent_organization */       'type' => 'hidden',
  /* node-support-field_parent_organization */       'weight' => 0,
  /* node-support-field_parent_organization */     ),
  /* node-support-field_parent_organization */     'featured_publication' => array(
  /* node-support-field_parent_organization */       'label' => 'above',
  /* node-support-field_parent_organization */       'settings' => array(),
  /* node-support-field_parent_organization */       'type' => 'hidden',
  /* node-support-field_parent_organization */       'weight' => 0,
  /* node-support-field_parent_organization */     ),
  /* node-support-field_parent_organization */     'group_teaser' => array(
  /* node-support-field_parent_organization */       'label' => 'above',
  /* node-support-field_parent_organization */       'settings' => array(),
  /* node-support-field_parent_organization */       'type' => 'hidden',
  /* node-support-field_parent_organization */       'weight' => 0,
  /* node-support-field_parent_organization */     ),
  /* node-support-field_parent_organization */     'one_column_teaser' => array(
  /* node-support-field_parent_organization */       'label' => 'above',
  /* node-support-field_parent_organization */       'settings' => array(),
  /* node-support-field_parent_organization */       'type' => 'hidden',
  /* node-support-field_parent_organization */       'weight' => 0,
  /* node-support-field_parent_organization */     ),
  /* node-support-field_parent_organization */     'post_teaser_group_landing_page' => array(
  /* node-support-field_parent_organization */       'label' => 'above',
  /* node-support-field_parent_organization */       'settings' => array(),
  /* node-support-field_parent_organization */       'type' => 'hidden',
  /* node-support-field_parent_organization */       'weight' => 0,
  /* node-support-field_parent_organization */     ),
  /* node-support-field_parent_organization */     'search_teaser' => array(
  /* node-support-field_parent_organization */       'label' => 'above',
  /* node-support-field_parent_organization */       'settings' => array(),
  /* node-support-field_parent_organization */       'type' => 'hidden',
  /* node-support-field_parent_organization */       'weight' => 0,
  /* node-support-field_parent_organization */     ),
  /* node-support-field_parent_organization */     'sidebar_' => array(
  /* node-support-field_parent_organization */       'label' => 'above',
  /* node-support-field_parent_organization */       'settings' => array(),
  /* node-support-field_parent_organization */       'type' => 'hidden',
  /* node-support-field_parent_organization */       'weight' => 0,
  /* node-support-field_parent_organization */     ),
  /* node-support-field_parent_organization */     'sidebar_teaser_v2' => array(
  /* node-support-field_parent_organization */       'label' => 'above',
  /* node-support-field_parent_organization */       'settings' => array(),
  /* node-support-field_parent_organization */       'type' => 'hidden',
  /* node-support-field_parent_organization */       'weight' => 0,
  /* node-support-field_parent_organization */     ),
  /* node-support-field_parent_organization */     'teaser' => array(
  /* node-support-field_parent_organization */       'label' => 'above',
  /* node-support-field_parent_organization */       'settings' => array(),
  /* node-support-field_parent_organization */       'type' => 'hidden',
  /* node-support-field_parent_organization */       'weight' => 0,
  /* node-support-field_parent_organization */     ),
  /* node-support-field_parent_organization */     'teaserthumb' => array(
  /* node-support-field_parent_organization */       'label' => 'above',
  /* node-support-field_parent_organization */       'settings' => array(),
  /* node-support-field_parent_organization */       'type' => 'hidden',
  /* node-support-field_parent_organization */       'weight' => 0,
  /* node-support-field_parent_organization */     ),
  /* node-support-field_parent_organization */     'time_and_location' => array(
  /* node-support-field_parent_organization */       'label' => 'above',
  /* node-support-field_parent_organization */       'settings' => array(),
  /* node-support-field_parent_organization */       'type' => 'hidden',
  /* node-support-field_parent_organization */       'weight' => 0,
  /* node-support-field_parent_organization */     ),
  /* node-support-field_parent_organization */     'title_and_time' => array(
  /* node-support-field_parent_organization */       'label' => 'above',
  /* node-support-field_parent_organization */       'settings' => array(),
  /* node-support-field_parent_organization */       'type' => 'hidden',
  /* node-support-field_parent_organization */       'weight' => 0,
  /* node-support-field_parent_organization */     ),
  /* node-support-field_parent_organization */   ),
  /* node-support-field_parent_organization */   'entity_type' => 'node',
  /* node-support-field_parent_organization */   'fences_wrapper' => 'div',
  /* node-support-field_parent_organization */   'field_name' => 'field_parent_organization',
  /* node-support-field_parent_organization */   'label' => 'Parent Organization',
  /* node-support-field_parent_organization */   'required' => 1,
  /* node-support-field_parent_organization */   'settings' => array(
  /* node-support-field_parent_organization */     'behaviors' => array(
  /* node-support-field_parent_organization */       'prepopulate' => array(
  /* node-support-field_parent_organization */         'status' => 0,
  /* node-support-field_parent_organization */       ),
  /* node-support-field_parent_organization */     ),
  /* node-support-field_parent_organization */     'user_register_form' => FALSE,
  /* node-support-field_parent_organization */   ),
  /* node-support-field_parent_organization */   'widget' => array(
  /* node-support-field_parent_organization */     'active' => 1,
  /* node-support-field_parent_organization */     'module' => 'options',
  /* node-support-field_parent_organization */     'settings' => array(
  /* node-support-field_parent_organization */       'apply_chosen' => '',
  /* node-support-field_parent_organization */     ),
  /* node-support-field_parent_organization */     'type' => 'options_select',
  /* node-support-field_parent_organization */     'weight' => 38,
  /* node-support-field_parent_organization */   ),
  /* node-support-field_parent_organization */ );

  // Exported field_instance: 'node-support-field_support_category'.
  $field_instances['node-support-field_support_category'] = array(
  /* node-support-field_support_category */   'bundle' => 'support',
  /* node-support-field_support_category */   'default_value' => NULL,
  /* node-support-field_support_category */   'deleted' => 0,
  /* node-support-field_support_category */   'description' => '',
  /* node-support-field_support_category */   'display' => array(
  /* node-support-field_support_category */     'default' => array(
  /* node-support-field_support_category */       'label' => 'above',
  /* node-support-field_support_category */       'module' => 'list',
  /* node-support-field_support_category */       'settings' => array(
  /* node-support-field_support_category */         'field_formatter_class' => '',
  /* node-support-field_support_category */       ),
  /* node-support-field_support_category */       'type' => 'list_default',
  /* node-support-field_support_category */       'weight' => 0,
  /* node-support-field_support_category */     ),
  /* node-support-field_support_category */     'events_list' => array(
  /* node-support-field_support_category */       'label' => 'above',
  /* node-support-field_support_category */       'settings' => array(),
  /* node-support-field_support_category */       'type' => 'hidden',
  /* node-support-field_support_category */       'weight' => 0,
  /* node-support-field_support_category */     ),
  /* node-support-field_support_category */     'featured_publication' => array(
  /* node-support-field_support_category */       'label' => 'above',
  /* node-support-field_support_category */       'settings' => array(),
  /* node-support-field_support_category */       'type' => 'hidden',
  /* node-support-field_support_category */       'weight' => 0,
  /* node-support-field_support_category */     ),
  /* node-support-field_support_category */     'group_teaser' => array(
  /* node-support-field_support_category */       'label' => 'above',
  /* node-support-field_support_category */       'settings' => array(),
  /* node-support-field_support_category */       'type' => 'hidden',
  /* node-support-field_support_category */       'weight' => 0,
  /* node-support-field_support_category */     ),
  /* node-support-field_support_category */     'one_column_teaser' => array(
  /* node-support-field_support_category */       'label' => 'above',
  /* node-support-field_support_category */       'settings' => array(),
  /* node-support-field_support_category */       'type' => 'hidden',
  /* node-support-field_support_category */       'weight' => 0,
  /* node-support-field_support_category */     ),
  /* node-support-field_support_category */     'post_teaser_group_landing_page' => array(
  /* node-support-field_support_category */       'label' => 'above',
  /* node-support-field_support_category */       'settings' => array(),
  /* node-support-field_support_category */       'type' => 'hidden',
  /* node-support-field_support_category */       'weight' => 0,
  /* node-support-field_support_category */     ),
  /* node-support-field_support_category */     'search_teaser' => array(
  /* node-support-field_support_category */       'label' => 'above',
  /* node-support-field_support_category */       'settings' => array(),
  /* node-support-field_support_category */       'type' => 'hidden',
  /* node-support-field_support_category */       'weight' => 0,
  /* node-support-field_support_category */     ),
  /* node-support-field_support_category */     'sidebar_' => array(
  /* node-support-field_support_category */       'label' => 'above',
  /* node-support-field_support_category */       'settings' => array(),
  /* node-support-field_support_category */       'type' => 'hidden',
  /* node-support-field_support_category */       'weight' => 0,
  /* node-support-field_support_category */     ),
  /* node-support-field_support_category */     'sidebar_teaser_v2' => array(
  /* node-support-field_support_category */       'label' => 'above',
  /* node-support-field_support_category */       'settings' => array(),
  /* node-support-field_support_category */       'type' => 'hidden',
  /* node-support-field_support_category */       'weight' => 0,
  /* node-support-field_support_category */     ),
  /* node-support-field_support_category */     'teaser' => array(
  /* node-support-field_support_category */       'label' => 'above',
  /* node-support-field_support_category */       'settings' => array(),
  /* node-support-field_support_category */       'type' => 'hidden',
  /* node-support-field_support_category */       'weight' => 0,
  /* node-support-field_support_category */     ),
  /* node-support-field_support_category */     'teaserthumb' => array(
  /* node-support-field_support_category */       'label' => 'above',
  /* node-support-field_support_category */       'settings' => array(),
  /* node-support-field_support_category */       'type' => 'hidden',
  /* node-support-field_support_category */       'weight' => 0,
  /* node-support-field_support_category */     ),
  /* node-support-field_support_category */     'time_and_location' => array(
  /* node-support-field_support_category */       'label' => 'above',
  /* node-support-field_support_category */       'settings' => array(),
  /* node-support-field_support_category */       'type' => 'hidden',
  /* node-support-field_support_category */       'weight' => 0,
  /* node-support-field_support_category */     ),
  /* node-support-field_support_category */     'title_and_time' => array(
  /* node-support-field_support_category */       'label' => 'above',
  /* node-support-field_support_category */       'settings' => array(),
  /* node-support-field_support_category */       'type' => 'hidden',
  /* node-support-field_support_category */       'weight' => 0,
  /* node-support-field_support_category */     ),
  /* node-support-field_support_category */   ),
  /* node-support-field_support_category */   'entity_type' => 'node',
  /* node-support-field_support_category */   'fences_wrapper' => 'div',
  /* node-support-field_support_category */   'field_name' => 'field_support_category',
  /* node-support-field_support_category */   'label' => 'How can we help you?',
  /* node-support-field_support_category */   'required' => 1,
  /* node-support-field_support_category */   'settings' => array(
  /* node-support-field_support_category */     'user_register_form' => FALSE,
  /* node-support-field_support_category */   ),
  /* node-support-field_support_category */   'widget' => array(
  /* node-support-field_support_category */     'active' => 1,
  /* node-support-field_support_category */     'module' => 'options',
  /* node-support-field_support_category */     'settings' => array(),
  /* node-support-field_support_category */     'type' => 'options_buttons',
  /* node-support-field_support_category */     'weight' => 2,
  /* node-support-field_support_category */   ),
  /* node-support-field_support_category */ );

  // Exported field_instance: 'node-support-field_support_owner'.
  $field_instances['node-support-field_support_owner'] = array(
  /* node-support-field_support_owner */   'bundle' => 'support',
  /* node-support-field_support_owner */   'default_value' => NULL,
  /* node-support-field_support_owner */   'default_value_function' => 'entityreference_prepopulate_field_default_value',
  /* node-support-field_support_owner */   'deleted' => 0,
  /* node-support-field_support_owner */   'description' => '',
  /* node-support-field_support_owner */   'display' => array(
  /* node-support-field_support_owner */     'default' => array(
  /* node-support-field_support_owner */       'label' => 'inline',
  /* node-support-field_support_owner */       'module' => 'entityreference',
  /* node-support-field_support_owner */       'settings' => array(
  /* node-support-field_support_owner */         'field_formatter_class' => '',
  /* node-support-field_support_owner */         'link' => FALSE,
  /* node-support-field_support_owner */       ),
  /* node-support-field_support_owner */       'type' => 'entityreference_label',
  /* node-support-field_support_owner */       'weight' => 13,
  /* node-support-field_support_owner */     ),
  /* node-support-field_support_owner */     'events_list' => array(
  /* node-support-field_support_owner */       'label' => 'above',
  /* node-support-field_support_owner */       'settings' => array(),
  /* node-support-field_support_owner */       'type' => 'hidden',
  /* node-support-field_support_owner */       'weight' => 0,
  /* node-support-field_support_owner */     ),
  /* node-support-field_support_owner */     'featured_publication' => array(
  /* node-support-field_support_owner */       'label' => 'above',
  /* node-support-field_support_owner */       'settings' => array(),
  /* node-support-field_support_owner */       'type' => 'hidden',
  /* node-support-field_support_owner */       'weight' => 0,
  /* node-support-field_support_owner */     ),
  /* node-support-field_support_owner */     'group_teaser' => array(
  /* node-support-field_support_owner */       'label' => 'above',
  /* node-support-field_support_owner */       'settings' => array(),
  /* node-support-field_support_owner */       'type' => 'hidden',
  /* node-support-field_support_owner */       'weight' => 0,
  /* node-support-field_support_owner */     ),
  /* node-support-field_support_owner */     'one_column_teaser' => array(
  /* node-support-field_support_owner */       'label' => 'above',
  /* node-support-field_support_owner */       'settings' => array(),
  /* node-support-field_support_owner */       'type' => 'hidden',
  /* node-support-field_support_owner */       'weight' => 0,
  /* node-support-field_support_owner */     ),
  /* node-support-field_support_owner */     'post_teaser_group_landing_page' => array(
  /* node-support-field_support_owner */       'label' => 'above',
  /* node-support-field_support_owner */       'settings' => array(),
  /* node-support-field_support_owner */       'type' => 'hidden',
  /* node-support-field_support_owner */       'weight' => 0,
  /* node-support-field_support_owner */     ),
  /* node-support-field_support_owner */     'search_teaser' => array(
  /* node-support-field_support_owner */       'label' => 'above',
  /* node-support-field_support_owner */       'settings' => array(),
  /* node-support-field_support_owner */       'type' => 'hidden',
  /* node-support-field_support_owner */       'weight' => 0,
  /* node-support-field_support_owner */     ),
  /* node-support-field_support_owner */     'sidebar_' => array(
  /* node-support-field_support_owner */       'label' => 'above',
  /* node-support-field_support_owner */       'settings' => array(),
  /* node-support-field_support_owner */       'type' => 'hidden',
  /* node-support-field_support_owner */       'weight' => 0,
  /* node-support-field_support_owner */     ),
  /* node-support-field_support_owner */     'sidebar_teaser_v2' => array(
  /* node-support-field_support_owner */       'label' => 'above',
  /* node-support-field_support_owner */       'settings' => array(),
  /* node-support-field_support_owner */       'type' => 'hidden',
  /* node-support-field_support_owner */       'weight' => 0,
  /* node-support-field_support_owner */     ),
  /* node-support-field_support_owner */     'teaser' => array(
  /* node-support-field_support_owner */       'label' => 'above',
  /* node-support-field_support_owner */       'settings' => array(),
  /* node-support-field_support_owner */       'type' => 'hidden',
  /* node-support-field_support_owner */       'weight' => 0,
  /* node-support-field_support_owner */     ),
  /* node-support-field_support_owner */     'teaserthumb' => array(
  /* node-support-field_support_owner */       'label' => 'above',
  /* node-support-field_support_owner */       'settings' => array(),
  /* node-support-field_support_owner */       'type' => 'hidden',
  /* node-support-field_support_owner */       'weight' => 0,
  /* node-support-field_support_owner */     ),
  /* node-support-field_support_owner */     'time_and_location' => array(
  /* node-support-field_support_owner */       'label' => 'above',
  /* node-support-field_support_owner */       'settings' => array(),
  /* node-support-field_support_owner */       'type' => 'hidden',
  /* node-support-field_support_owner */       'weight' => 0,
  /* node-support-field_support_owner */     ),
  /* node-support-field_support_owner */     'title_and_time' => array(
  /* node-support-field_support_owner */       'label' => 'above',
  /* node-support-field_support_owner */       'settings' => array(),
  /* node-support-field_support_owner */       'type' => 'hidden',
  /* node-support-field_support_owner */       'weight' => 0,
  /* node-support-field_support_owner */     ),
  /* node-support-field_support_owner */   ),
  /* node-support-field_support_owner */   'entity_type' => 'node',
  /* node-support-field_support_owner */   'fences_wrapper' => 'div',
  /* node-support-field_support_owner */   'field_name' => 'field_support_owner',
  /* node-support-field_support_owner */   'label' => 'Owner',
  /* node-support-field_support_owner */   'required' => 0,
  /* node-support-field_support_owner */   'settings' => array(
  /* node-support-field_support_owner */     'behaviors' => array(
  /* node-support-field_support_owner */       'prepopulate' => array(
  /* node-support-field_support_owner */         'action' => 'none',
  /* node-support-field_support_owner */         'action_on_edit' => 0,
  /* node-support-field_support_owner */         'fallback' => 'none',
  /* node-support-field_support_owner */         'providers' => array(
  /* node-support-field_support_owner */           'og_context' => 1,
  /* node-support-field_support_owner */           'url' => 1,
  /* node-support-field_support_owner */         ),
  /* node-support-field_support_owner */         'skip_perm' => 0,
  /* node-support-field_support_owner */         'status' => 1,
  /* node-support-field_support_owner */       ),
  /* node-support-field_support_owner */     ),
  /* node-support-field_support_owner */     'user_register_form' => FALSE,
  /* node-support-field_support_owner */   ),
  /* node-support-field_support_owner */   'widget' => array(
  /* node-support-field_support_owner */     'active' => 1,
  /* node-support-field_support_owner */     'module' => 'options',
  /* node-support-field_support_owner */     'settings' => array(
  /* node-support-field_support_owner */       'apply_chosen' => '',
  /* node-support-field_support_owner */     ),
  /* node-support-field_support_owner */     'type' => 'options_select',
  /* node-support-field_support_owner */     'weight' => 42,
  /* node-support-field_support_owner */   ),
  /* node-support-field_support_owner */ );

  // Exported field_instance: 'node-support-field_support_priority'.
  $field_instances['node-support-field_support_priority'] = array(
  /* node-support-field_support_priority */   'bundle' => 'support',
  /* node-support-field_support_priority */   'default_value' => array(
  /* node-support-field_support_priority */     0 => array(
  /* node-support-field_support_priority */       'value' => 'Medium',
  /* node-support-field_support_priority */     ),
  /* node-support-field_support_priority */   ),
  /* node-support-field_support_priority */   'deleted' => 0,
  /* node-support-field_support_priority */   'description' => '',
  /* node-support-field_support_priority */   'display' => array(
  /* node-support-field_support_priority */     'default' => array(
  /* node-support-field_support_priority */       'label' => 'inline',
  /* node-support-field_support_priority */       'module' => 'list',
  /* node-support-field_support_priority */       'settings' => array(
  /* node-support-field_support_priority */         'field_formatter_class' => '',
  /* node-support-field_support_priority */       ),
  /* node-support-field_support_priority */       'type' => 'list_default',
  /* node-support-field_support_priority */       'weight' => 11,
  /* node-support-field_support_priority */     ),
  /* node-support-field_support_priority */     'events_list' => array(
  /* node-support-field_support_priority */       'label' => 'above',
  /* node-support-field_support_priority */       'settings' => array(),
  /* node-support-field_support_priority */       'type' => 'hidden',
  /* node-support-field_support_priority */       'weight' => 0,
  /* node-support-field_support_priority */     ),
  /* node-support-field_support_priority */     'featured_publication' => array(
  /* node-support-field_support_priority */       'label' => 'above',
  /* node-support-field_support_priority */       'settings' => array(),
  /* node-support-field_support_priority */       'type' => 'hidden',
  /* node-support-field_support_priority */       'weight' => 0,
  /* node-support-field_support_priority */     ),
  /* node-support-field_support_priority */     'group_teaser' => array(
  /* node-support-field_support_priority */       'label' => 'above',
  /* node-support-field_support_priority */       'settings' => array(),
  /* node-support-field_support_priority */       'type' => 'hidden',
  /* node-support-field_support_priority */       'weight' => 0,
  /* node-support-field_support_priority */     ),
  /* node-support-field_support_priority */     'one_column_teaser' => array(
  /* node-support-field_support_priority */       'label' => 'above',
  /* node-support-field_support_priority */       'settings' => array(),
  /* node-support-field_support_priority */       'type' => 'hidden',
  /* node-support-field_support_priority */       'weight' => 0,
  /* node-support-field_support_priority */     ),
  /* node-support-field_support_priority */     'post_teaser_group_landing_page' => array(
  /* node-support-field_support_priority */       'label' => 'above',
  /* node-support-field_support_priority */       'settings' => array(),
  /* node-support-field_support_priority */       'type' => 'hidden',
  /* node-support-field_support_priority */       'weight' => 0,
  /* node-support-field_support_priority */     ),
  /* node-support-field_support_priority */     'search_teaser' => array(
  /* node-support-field_support_priority */       'label' => 'above',
  /* node-support-field_support_priority */       'settings' => array(),
  /* node-support-field_support_priority */       'type' => 'hidden',
  /* node-support-field_support_priority */       'weight' => 0,
  /* node-support-field_support_priority */     ),
  /* node-support-field_support_priority */     'sidebar_' => array(
  /* node-support-field_support_priority */       'label' => 'above',
  /* node-support-field_support_priority */       'settings' => array(),
  /* node-support-field_support_priority */       'type' => 'hidden',
  /* node-support-field_support_priority */       'weight' => 0,
  /* node-support-field_support_priority */     ),
  /* node-support-field_support_priority */     'sidebar_teaser_v2' => array(
  /* node-support-field_support_priority */       'label' => 'above',
  /* node-support-field_support_priority */       'settings' => array(),
  /* node-support-field_support_priority */       'type' => 'hidden',
  /* node-support-field_support_priority */       'weight' => 0,
  /* node-support-field_support_priority */     ),
  /* node-support-field_support_priority */     'teaser' => array(
  /* node-support-field_support_priority */       'label' => 'above',
  /* node-support-field_support_priority */       'settings' => array(),
  /* node-support-field_support_priority */       'type' => 'hidden',
  /* node-support-field_support_priority */       'weight' => 0,
  /* node-support-field_support_priority */     ),
  /* node-support-field_support_priority */     'teaserthumb' => array(
  /* node-support-field_support_priority */       'label' => 'above',
  /* node-support-field_support_priority */       'settings' => array(),
  /* node-support-field_support_priority */       'type' => 'hidden',
  /* node-support-field_support_priority */       'weight' => 0,
  /* node-support-field_support_priority */     ),
  /* node-support-field_support_priority */     'time_and_location' => array(
  /* node-support-field_support_priority */       'label' => 'above',
  /* node-support-field_support_priority */       'settings' => array(),
  /* node-support-field_support_priority */       'type' => 'hidden',
  /* node-support-field_support_priority */       'weight' => 0,
  /* node-support-field_support_priority */     ),
  /* node-support-field_support_priority */     'title_and_time' => array(
  /* node-support-field_support_priority */       'label' => 'above',
  /* node-support-field_support_priority */       'settings' => array(),
  /* node-support-field_support_priority */       'type' => 'hidden',
  /* node-support-field_support_priority */       'weight' => 0,
  /* node-support-field_support_priority */     ),
  /* node-support-field_support_priority */   ),
  /* node-support-field_support_priority */   'entity_type' => 'node',
  /* node-support-field_support_priority */   'fences_wrapper' => 'div',
  /* node-support-field_support_priority */   'field_name' => 'field_support_priority',
  /* node-support-field_support_priority */   'label' => 'Priority',
  /* node-support-field_support_priority */   'required' => 0,
  /* node-support-field_support_priority */   'settings' => array(
  /* node-support-field_support_priority */     'user_register_form' => FALSE,
  /* node-support-field_support_priority */   ),
  /* node-support-field_support_priority */   'widget' => array(
  /* node-support-field_support_priority */     'active' => 1,
  /* node-support-field_support_priority */     'module' => 'options',
  /* node-support-field_support_priority */     'settings' => array(
  /* node-support-field_support_priority */       'apply_chosen' => '',
  /* node-support-field_support_priority */     ),
  /* node-support-field_support_priority */     'type' => 'options_select',
  /* node-support-field_support_priority */     'weight' => 40,
  /* node-support-field_support_priority */   ),
  /* node-support-field_support_priority */ );

  // Exported field_instance: 'node-support-field_support_resolution'.
  $field_instances['node-support-field_support_resolution'] = array(
  /* node-support-field_support_resolution */   'bundle' => 'support',
  /* node-support-field_support_resolution */   'default_value' => array(
  /* node-support-field_support_resolution */     0 => array(
  /* node-support-field_support_resolution */       'value' => 'Not resolved',
  /* node-support-field_support_resolution */     ),
  /* node-support-field_support_resolution */   ),
  /* node-support-field_support_resolution */   'deleted' => 0,
  /* node-support-field_support_resolution */   'description' => '',
  /* node-support-field_support_resolution */   'display' => array(
  /* node-support-field_support_resolution */     'default' => array(
  /* node-support-field_support_resolution */       'label' => 'inline',
  /* node-support-field_support_resolution */       'module' => 'list',
  /* node-support-field_support_resolution */       'settings' => array(
  /* node-support-field_support_resolution */         'field_formatter_class' => '',
  /* node-support-field_support_resolution */       ),
  /* node-support-field_support_resolution */       'type' => 'list_default',
  /* node-support-field_support_resolution */       'weight' => 12,
  /* node-support-field_support_resolution */     ),
  /* node-support-field_support_resolution */     'events_list' => array(
  /* node-support-field_support_resolution */       'label' => 'above',
  /* node-support-field_support_resolution */       'settings' => array(),
  /* node-support-field_support_resolution */       'type' => 'hidden',
  /* node-support-field_support_resolution */       'weight' => 0,
  /* node-support-field_support_resolution */     ),
  /* node-support-field_support_resolution */     'featured_publication' => array(
  /* node-support-field_support_resolution */       'label' => 'above',
  /* node-support-field_support_resolution */       'settings' => array(),
  /* node-support-field_support_resolution */       'type' => 'hidden',
  /* node-support-field_support_resolution */       'weight' => 0,
  /* node-support-field_support_resolution */     ),
  /* node-support-field_support_resolution */     'group_teaser' => array(
  /* node-support-field_support_resolution */       'label' => 'above',
  /* node-support-field_support_resolution */       'settings' => array(),
  /* node-support-field_support_resolution */       'type' => 'hidden',
  /* node-support-field_support_resolution */       'weight' => 0,
  /* node-support-field_support_resolution */     ),
  /* node-support-field_support_resolution */     'one_column_teaser' => array(
  /* node-support-field_support_resolution */       'label' => 'above',
  /* node-support-field_support_resolution */       'settings' => array(),
  /* node-support-field_support_resolution */       'type' => 'hidden',
  /* node-support-field_support_resolution */       'weight' => 0,
  /* node-support-field_support_resolution */     ),
  /* node-support-field_support_resolution */     'post_teaser_group_landing_page' => array(
  /* node-support-field_support_resolution */       'label' => 'above',
  /* node-support-field_support_resolution */       'settings' => array(),
  /* node-support-field_support_resolution */       'type' => 'hidden',
  /* node-support-field_support_resolution */       'weight' => 0,
  /* node-support-field_support_resolution */     ),
  /* node-support-field_support_resolution */     'search_teaser' => array(
  /* node-support-field_support_resolution */       'label' => 'above',
  /* node-support-field_support_resolution */       'settings' => array(),
  /* node-support-field_support_resolution */       'type' => 'hidden',
  /* node-support-field_support_resolution */       'weight' => 0,
  /* node-support-field_support_resolution */     ),
  /* node-support-field_support_resolution */     'sidebar_' => array(
  /* node-support-field_support_resolution */       'label' => 'above',
  /* node-support-field_support_resolution */       'settings' => array(),
  /* node-support-field_support_resolution */       'type' => 'hidden',
  /* node-support-field_support_resolution */       'weight' => 0,
  /* node-support-field_support_resolution */     ),
  /* node-support-field_support_resolution */     'sidebar_teaser_v2' => array(
  /* node-support-field_support_resolution */       'label' => 'above',
  /* node-support-field_support_resolution */       'settings' => array(),
  /* node-support-field_support_resolution */       'type' => 'hidden',
  /* node-support-field_support_resolution */       'weight' => 0,
  /* node-support-field_support_resolution */     ),
  /* node-support-field_support_resolution */     'teaser' => array(
  /* node-support-field_support_resolution */       'label' => 'above',
  /* node-support-field_support_resolution */       'settings' => array(),
  /* node-support-field_support_resolution */       'type' => 'hidden',
  /* node-support-field_support_resolution */       'weight' => 0,
  /* node-support-field_support_resolution */     ),
  /* node-support-field_support_resolution */     'teaserthumb' => array(
  /* node-support-field_support_resolution */       'label' => 'above',
  /* node-support-field_support_resolution */       'settings' => array(),
  /* node-support-field_support_resolution */       'type' => 'hidden',
  /* node-support-field_support_resolution */       'weight' => 0,
  /* node-support-field_support_resolution */     ),
  /* node-support-field_support_resolution */     'time_and_location' => array(
  /* node-support-field_support_resolution */       'label' => 'above',
  /* node-support-field_support_resolution */       'settings' => array(),
  /* node-support-field_support_resolution */       'type' => 'hidden',
  /* node-support-field_support_resolution */       'weight' => 0,
  /* node-support-field_support_resolution */     ),
  /* node-support-field_support_resolution */     'title_and_time' => array(
  /* node-support-field_support_resolution */       'label' => 'above',
  /* node-support-field_support_resolution */       'settings' => array(),
  /* node-support-field_support_resolution */       'type' => 'hidden',
  /* node-support-field_support_resolution */       'weight' => 0,
  /* node-support-field_support_resolution */     ),
  /* node-support-field_support_resolution */   ),
  /* node-support-field_support_resolution */   'entity_type' => 'node',
  /* node-support-field_support_resolution */   'fences_wrapper' => 'div',
  /* node-support-field_support_resolution */   'field_name' => 'field_support_resolution',
  /* node-support-field_support_resolution */   'label' => 'Resolution',
  /* node-support-field_support_resolution */   'required' => 0,
  /* node-support-field_support_resolution */   'settings' => array(
  /* node-support-field_support_resolution */     'user_register_form' => FALSE,
  /* node-support-field_support_resolution */   ),
  /* node-support-field_support_resolution */   'widget' => array(
  /* node-support-field_support_resolution */     'active' => 1,
  /* node-support-field_support_resolution */     'module' => 'options',
  /* node-support-field_support_resolution */     'settings' => array(
  /* node-support-field_support_resolution */       'apply_chosen' => '',
  /* node-support-field_support_resolution */     ),
  /* node-support-field_support_resolution */     'type' => 'options_select',
  /* node-support-field_support_resolution */     'weight' => 41,
  /* node-support-field_support_resolution */   ),
  /* node-support-field_support_resolution */ );

  // Exported field_instance: 'node-support-field_support_status'.
  $field_instances['node-support-field_support_status'] = array(
  /* node-support-field_support_status */   'bundle' => 'support',
  /* node-support-field_support_status */   'default_value' => array(
  /* node-support-field_support_status */     0 => array(
  /* node-support-field_support_status */       'value' => 'Created',
  /* node-support-field_support_status */     ),
  /* node-support-field_support_status */   ),
  /* node-support-field_support_status */   'deleted' => 0,
  /* node-support-field_support_status */   'description' => '',
  /* node-support-field_support_status */   'display' => array(
  /* node-support-field_support_status */     'default' => array(
  /* node-support-field_support_status */       'label' => 'inline',
  /* node-support-field_support_status */       'module' => 'list',
  /* node-support-field_support_status */       'settings' => array(
  /* node-support-field_support_status */         'field_formatter_class' => '',
  /* node-support-field_support_status */       ),
  /* node-support-field_support_status */       'type' => 'list_default',
  /* node-support-field_support_status */       'weight' => 10,
  /* node-support-field_support_status */     ),
  /* node-support-field_support_status */     'events_list' => array(
  /* node-support-field_support_status */       'label' => 'above',
  /* node-support-field_support_status */       'settings' => array(),
  /* node-support-field_support_status */       'type' => 'hidden',
  /* node-support-field_support_status */       'weight' => 0,
  /* node-support-field_support_status */     ),
  /* node-support-field_support_status */     'featured_publication' => array(
  /* node-support-field_support_status */       'label' => 'above',
  /* node-support-field_support_status */       'settings' => array(),
  /* node-support-field_support_status */       'type' => 'hidden',
  /* node-support-field_support_status */       'weight' => 0,
  /* node-support-field_support_status */     ),
  /* node-support-field_support_status */     'group_teaser' => array(
  /* node-support-field_support_status */       'label' => 'above',
  /* node-support-field_support_status */       'settings' => array(),
  /* node-support-field_support_status */       'type' => 'hidden',
  /* node-support-field_support_status */       'weight' => 0,
  /* node-support-field_support_status */     ),
  /* node-support-field_support_status */     'one_column_teaser' => array(
  /* node-support-field_support_status */       'label' => 'above',
  /* node-support-field_support_status */       'settings' => array(),
  /* node-support-field_support_status */       'type' => 'hidden',
  /* node-support-field_support_status */       'weight' => 0,
  /* node-support-field_support_status */     ),
  /* node-support-field_support_status */     'post_teaser_group_landing_page' => array(
  /* node-support-field_support_status */       'label' => 'above',
  /* node-support-field_support_status */       'settings' => array(),
  /* node-support-field_support_status */       'type' => 'hidden',
  /* node-support-field_support_status */       'weight' => 0,
  /* node-support-field_support_status */     ),
  /* node-support-field_support_status */     'search_teaser' => array(
  /* node-support-field_support_status */       'label' => 'above',
  /* node-support-field_support_status */       'settings' => array(),
  /* node-support-field_support_status */       'type' => 'hidden',
  /* node-support-field_support_status */       'weight' => 0,
  /* node-support-field_support_status */     ),
  /* node-support-field_support_status */     'sidebar_' => array(
  /* node-support-field_support_status */       'label' => 'above',
  /* node-support-field_support_status */       'settings' => array(),
  /* node-support-field_support_status */       'type' => 'hidden',
  /* node-support-field_support_status */       'weight' => 0,
  /* node-support-field_support_status */     ),
  /* node-support-field_support_status */     'sidebar_teaser_v2' => array(
  /* node-support-field_support_status */       'label' => 'above',
  /* node-support-field_support_status */       'settings' => array(),
  /* node-support-field_support_status */       'type' => 'hidden',
  /* node-support-field_support_status */       'weight' => 0,
  /* node-support-field_support_status */     ),
  /* node-support-field_support_status */     'teaser' => array(
  /* node-support-field_support_status */       'label' => 'above',
  /* node-support-field_support_status */       'settings' => array(),
  /* node-support-field_support_status */       'type' => 'hidden',
  /* node-support-field_support_status */       'weight' => 0,
  /* node-support-field_support_status */     ),
  /* node-support-field_support_status */     'teaserthumb' => array(
  /* node-support-field_support_status */       'label' => 'above',
  /* node-support-field_support_status */       'settings' => array(),
  /* node-support-field_support_status */       'type' => 'hidden',
  /* node-support-field_support_status */       'weight' => 0,
  /* node-support-field_support_status */     ),
  /* node-support-field_support_status */     'time_and_location' => array(
  /* node-support-field_support_status */       'label' => 'above',
  /* node-support-field_support_status */       'settings' => array(),
  /* node-support-field_support_status */       'type' => 'hidden',
  /* node-support-field_support_status */       'weight' => 0,
  /* node-support-field_support_status */     ),
  /* node-support-field_support_status */     'title_and_time' => array(
  /* node-support-field_support_status */       'label' => 'above',
  /* node-support-field_support_status */       'settings' => array(),
  /* node-support-field_support_status */       'type' => 'hidden',
  /* node-support-field_support_status */       'weight' => 0,
  /* node-support-field_support_status */     ),
  /* node-support-field_support_status */   ),
  /* node-support-field_support_status */   'entity_type' => 'node',
  /* node-support-field_support_status */   'fences_wrapper' => 'div',
  /* node-support-field_support_status */   'field_name' => 'field_support_status',
  /* node-support-field_support_status */   'label' => 'Status',
  /* node-support-field_support_status */   'required' => 0,
  /* node-support-field_support_status */   'settings' => array(
  /* node-support-field_support_status */     'user_register_form' => FALSE,
  /* node-support-field_support_status */   ),
  /* node-support-field_support_status */   'widget' => array(
  /* node-support-field_support_status */     'active' => 1,
  /* node-support-field_support_status */     'module' => 'options',
  /* node-support-field_support_status */     'settings' => array(
  /* node-support-field_support_status */       'apply_chosen' => '',
  /* node-support-field_support_status */     ),
  /* node-support-field_support_status */     'type' => 'options_select',
  /* node-support-field_support_status */     'weight' => 39,
  /* node-support-field_support_status */   ),
  /* node-support-field_support_status */ );

  // Exported field_instance: 'node-support-field_telephone_number'.
  $field_instances['node-support-field_telephone_number'] = array(
  /* node-support-field_telephone_number */   'bundle' => 'support',
  /* node-support-field_telephone_number */   'default_value' => NULL,
  /* node-support-field_telephone_number */   'deleted' => 0,
  /* node-support-field_telephone_number */   'description' => '',
  /* node-support-field_telephone_number */   'display' => array(
  /* node-support-field_telephone_number */     'default' => array(
  /* node-support-field_telephone_number */       'label' => 'inline',
  /* node-support-field_telephone_number */       'module' => 'text',
  /* node-support-field_telephone_number */       'settings' => array(
  /* node-support-field_telephone_number */         'field_formatter_class' => '',
  /* node-support-field_telephone_number */       ),
  /* node-support-field_telephone_number */       'type' => 'text_default',
  /* node-support-field_telephone_number */       'weight' => 4,
  /* node-support-field_telephone_number */     ),
  /* node-support-field_telephone_number */     'events_list' => array(
  /* node-support-field_telephone_number */       'label' => 'above',
  /* node-support-field_telephone_number */       'settings' => array(),
  /* node-support-field_telephone_number */       'type' => 'hidden',
  /* node-support-field_telephone_number */       'weight' => 0,
  /* node-support-field_telephone_number */     ),
  /* node-support-field_telephone_number */     'featured_publication' => array(
  /* node-support-field_telephone_number */       'label' => 'above',
  /* node-support-field_telephone_number */       'settings' => array(),
  /* node-support-field_telephone_number */       'type' => 'hidden',
  /* node-support-field_telephone_number */       'weight' => 0,
  /* node-support-field_telephone_number */     ),
  /* node-support-field_telephone_number */     'group_teaser' => array(
  /* node-support-field_telephone_number */       'label' => 'above',
  /* node-support-field_telephone_number */       'settings' => array(),
  /* node-support-field_telephone_number */       'type' => 'hidden',
  /* node-support-field_telephone_number */       'weight' => 0,
  /* node-support-field_telephone_number */     ),
  /* node-support-field_telephone_number */     'one_column_teaser' => array(
  /* node-support-field_telephone_number */       'label' => 'above',
  /* node-support-field_telephone_number */       'settings' => array(),
  /* node-support-field_telephone_number */       'type' => 'hidden',
  /* node-support-field_telephone_number */       'weight' => 0,
  /* node-support-field_telephone_number */     ),
  /* node-support-field_telephone_number */     'post_teaser_group_landing_page' => array(
  /* node-support-field_telephone_number */       'label' => 'above',
  /* node-support-field_telephone_number */       'settings' => array(),
  /* node-support-field_telephone_number */       'type' => 'hidden',
  /* node-support-field_telephone_number */       'weight' => 0,
  /* node-support-field_telephone_number */     ),
  /* node-support-field_telephone_number */     'search_teaser' => array(
  /* node-support-field_telephone_number */       'label' => 'above',
  /* node-support-field_telephone_number */       'settings' => array(),
  /* node-support-field_telephone_number */       'type' => 'hidden',
  /* node-support-field_telephone_number */       'weight' => 0,
  /* node-support-field_telephone_number */     ),
  /* node-support-field_telephone_number */     'sidebar_' => array(
  /* node-support-field_telephone_number */       'label' => 'above',
  /* node-support-field_telephone_number */       'settings' => array(),
  /* node-support-field_telephone_number */       'type' => 'hidden',
  /* node-support-field_telephone_number */       'weight' => 0,
  /* node-support-field_telephone_number */     ),
  /* node-support-field_telephone_number */     'sidebar_teaser_v2' => array(
  /* node-support-field_telephone_number */       'label' => 'above',
  /* node-support-field_telephone_number */       'settings' => array(),
  /* node-support-field_telephone_number */       'type' => 'hidden',
  /* node-support-field_telephone_number */       'weight' => 0,
  /* node-support-field_telephone_number */     ),
  /* node-support-field_telephone_number */     'teaser' => array(
  /* node-support-field_telephone_number */       'label' => 'above',
  /* node-support-field_telephone_number */       'settings' => array(),
  /* node-support-field_telephone_number */       'type' => 'hidden',
  /* node-support-field_telephone_number */       'weight' => 0,
  /* node-support-field_telephone_number */     ),
  /* node-support-field_telephone_number */     'teaserthumb' => array(
  /* node-support-field_telephone_number */       'label' => 'above',
  /* node-support-field_telephone_number */       'settings' => array(),
  /* node-support-field_telephone_number */       'type' => 'hidden',
  /* node-support-field_telephone_number */       'weight' => 0,
  /* node-support-field_telephone_number */     ),
  /* node-support-field_telephone_number */     'time_and_location' => array(
  /* node-support-field_telephone_number */       'label' => 'above',
  /* node-support-field_telephone_number */       'settings' => array(),
  /* node-support-field_telephone_number */       'type' => 'hidden',
  /* node-support-field_telephone_number */       'weight' => 0,
  /* node-support-field_telephone_number */     ),
  /* node-support-field_telephone_number */     'title_and_time' => array(
  /* node-support-field_telephone_number */       'label' => 'above',
  /* node-support-field_telephone_number */       'settings' => array(),
  /* node-support-field_telephone_number */       'type' => 'hidden',
  /* node-support-field_telephone_number */       'weight' => 0,
  /* node-support-field_telephone_number */     ),
  /* node-support-field_telephone_number */   ),
  /* node-support-field_telephone_number */   'entity_type' => 'node',
  /* node-support-field_telephone_number */   'fences_wrapper' => 'div',
  /* node-support-field_telephone_number */   'field_name' => 'field_telephone_number',
  /* node-support-field_telephone_number */   'label' => 'Telephone Number',
  /* node-support-field_telephone_number */   'required' => 0,
  /* node-support-field_telephone_number */   'settings' => array(
  /* node-support-field_telephone_number */     'better_formats' => array(
  /* node-support-field_telephone_number */       'allowed_formats' => array(
  /* node-support-field_telephone_number */         'filtered_html' => 'filtered_html',
  /* node-support-field_telephone_number */         'full_html' => 'full_html',
  /* node-support-field_telephone_number */         'php_code' => 'php_code',
  /* node-support-field_telephone_number */         'plain_text' => 'plain_text',
  /* node-support-field_telephone_number */         'sessions_wysiwyg' => 'sessions_wysiwyg',
  /* node-support-field_telephone_number */       ),
  /* node-support-field_telephone_number */       'allowed_formats_toggle' => 0,
  /* node-support-field_telephone_number */       'default_order_toggle' => 0,
  /* node-support-field_telephone_number */       'default_order_wrapper' => array(
  /* node-support-field_telephone_number */         'formats' => array(
  /* node-support-field_telephone_number */           'filtered_html' => array(
  /* node-support-field_telephone_number */             'weight' => -10,
  /* node-support-field_telephone_number */           ),
  /* node-support-field_telephone_number */           'full_html' => array(
  /* node-support-field_telephone_number */             'weight' => -8,
  /* node-support-field_telephone_number */           ),
  /* node-support-field_telephone_number */           'php_code' => array(
  /* node-support-field_telephone_number */             'weight' => -7,
  /* node-support-field_telephone_number */           ),
  /* node-support-field_telephone_number */           'plain_text' => array(
  /* node-support-field_telephone_number */             'weight' => -9,
  /* node-support-field_telephone_number */           ),
  /* node-support-field_telephone_number */           'sessions_wysiwyg' => array(
  /* node-support-field_telephone_number */             'weight' => 0,
  /* node-support-field_telephone_number */           ),
  /* node-support-field_telephone_number */         ),
  /* node-support-field_telephone_number */       ),
  /* node-support-field_telephone_number */     ),
  /* node-support-field_telephone_number */     'text_processing' => 0,
  /* node-support-field_telephone_number */     'user_register_form' => FALSE,
  /* node-support-field_telephone_number */   ),
  /* node-support-field_telephone_number */   'widget' => array(
  /* node-support-field_telephone_number */     'active' => 1,
  /* node-support-field_telephone_number */     'module' => 'text',
  /* node-support-field_telephone_number */     'settings' => array(
  /* node-support-field_telephone_number */       'size' => 60,
  /* node-support-field_telephone_number */     ),
  /* node-support-field_telephone_number */     'type' => 'text_textfield',
  /* node-support-field_telephone_number */     'weight' => 36,
  /* node-support-field_telephone_number */   ),
  /* node-support-field_telephone_number */ );

  // Translatables
  // Included for use with string extractors like potx.
  t('Admin note');
  t('Attach Files');
  t('Email');
  t('Family Name');
  t('First Name');
  t('How can we help you?');
  t('Json Capture');
  t('Owner');
  t('Parent Organization');
  t('Please describe the problem in more detail');
  t('Priority');
  t('Resolution');
  t('Status');
  t('Telephone Number');
  t('What actually happened?');
  t('What did you expect to happen?');

  return $field_instances;
}
