<?php
/**
 * @file
 * gn2_feedback.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function gn2_feedback_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'entityform-feedback-field_feedback'.
  $field_instances['entityform-feedback-field_feedback'] = array(
  /* entityform-feedback-field_feedback */   'bundle' => 'feedback',
  /* entityform-feedback-field_feedback */   'default_value' => NULL,
  /* entityform-feedback-field_feedback */   'deleted' => 0,
  /* entityform-feedback-field_feedback */   'description' => '',
  /* entityform-feedback-field_feedback */   'display' => array(
  /* entityform-feedback-field_feedback */     'default' => array(
  /* entityform-feedback-field_feedback */       'label' => 'above',
  /* entityform-feedback-field_feedback */       'module' => 'text',
  /* entityform-feedback-field_feedback */       'settings' => array(
  /* entityform-feedback-field_feedback */         'field_formatter_class' => '',
  /* entityform-feedback-field_feedback */       ),
  /* entityform-feedback-field_feedback */       'type' => 'text_default',
  /* entityform-feedback-field_feedback */       'weight' => 7,
  /* entityform-feedback-field_feedback */     ),
  /* entityform-feedback-field_feedback */     'full' => array(
  /* entityform-feedback-field_feedback */       'label' => 'above',
  /* entityform-feedback-field_feedback */       'module' => 'text',
  /* entityform-feedback-field_feedback */       'settings' => array(
  /* entityform-feedback-field_feedback */         'field_formatter_class' => '',
  /* entityform-feedback-field_feedback */       ),
  /* entityform-feedback-field_feedback */       'type' => 'text_default',
  /* entityform-feedback-field_feedback */       'weight' => 7,
  /* entityform-feedback-field_feedback */     ),
  /* entityform-feedback-field_feedback */     'week' => array(
  /* entityform-feedback-field_feedback */       'label' => 'above',
  /* entityform-feedback-field_feedback */       'settings' => array(),
  /* entityform-feedback-field_feedback */       'type' => 'hidden',
  /* entityform-feedback-field_feedback */       'weight' => 0,
  /* entityform-feedback-field_feedback */     ),
  /* entityform-feedback-field_feedback */   ),
  /* entityform-feedback-field_feedback */   'entity_type' => 'entityform',
  /* entityform-feedback-field_feedback */   'fences_wrapper' => 'div',
  /* entityform-feedback-field_feedback */   'field_name' => 'field_feedback',
  /* entityform-feedback-field_feedback */   'label' => 'Feedback (compiled)',
  /* entityform-feedback-field_feedback */   'required' => 0,
  /* entityform-feedback-field_feedback */   'settings' => array(
  /* entityform-feedback-field_feedback */     'better_formats' => array(
  /* entityform-feedback-field_feedback */       'allowed_formats' => array(
  /* entityform-feedback-field_feedback */         'filtered_html' => 'filtered_html',
  /* entityform-feedback-field_feedback */         'full_html' => 'full_html',
  /* entityform-feedback-field_feedback */         'plain_text' => 'plain_text',
  /* entityform-feedback-field_feedback */       ),
  /* entityform-feedback-field_feedback */       'allowed_formats_toggle' => 0,
  /* entityform-feedback-field_feedback */       'default_order_toggle' => 0,
  /* entityform-feedback-field_feedback */       'default_order_wrapper' => array(
  /* entityform-feedback-field_feedback */         'formats' => array(
  /* entityform-feedback-field_feedback */           'filtered_html' => array(
  /* entityform-feedback-field_feedback */             'weight' => -10,
  /* entityform-feedback-field_feedback */           ),
  /* entityform-feedback-field_feedback */           'full_html' => array(
  /* entityform-feedback-field_feedback */             'weight' => -8,
  /* entityform-feedback-field_feedback */           ),
  /* entityform-feedback-field_feedback */           'plain_text' => array(
  /* entityform-feedback-field_feedback */             'weight' => -9,
  /* entityform-feedback-field_feedback */           ),
  /* entityform-feedback-field_feedback */         ),
  /* entityform-feedback-field_feedback */       ),
  /* entityform-feedback-field_feedback */     ),
  /* entityform-feedback-field_feedback */     'text_processing' => 0,
  /* entityform-feedback-field_feedback */     'user_field_privacy' => FALSE,
  /* entityform-feedback-field_feedback */     'user_register_form' => FALSE,
  /* entityform-feedback-field_feedback */   ),
  /* entityform-feedback-field_feedback */   'widget' => array(
  /* entityform-feedback-field_feedback */     'active' => 1,
  /* entityform-feedback-field_feedback */     'module' => 'text',
  /* entityform-feedback-field_feedback */     'settings' => array(
  /* entityform-feedback-field_feedback */       'rows' => 15,
  /* entityform-feedback-field_feedback */     ),
  /* entityform-feedback-field_feedback */     'type' => 'text_textarea',
  /* entityform-feedback-field_feedback */     'weight' => 7,
  /* entityform-feedback-field_feedback */   ),
  /* entityform-feedback-field_feedback */ );

  // Exported field_instance: 'entityform-feedback-field_feedback_expected'.
  $field_instances['entityform-feedback-field_feedback_expected'] = array(
  /* entityform-feedback-field_feedback_expected */   'bundle' => 'feedback',
  /* entityform-feedback-field_feedback_expected */   'default_value' => NULL,
  /* entityform-feedback-field_feedback_expected */   'deleted' => 0,
  /* entityform-feedback-field_feedback_expected */   'description' => '',
  /* entityform-feedback-field_feedback_expected */   'display' => array(
  /* entityform-feedback-field_feedback_expected */     'default' => array(
  /* entityform-feedback-field_feedback_expected */       'label' => 'above',
  /* entityform-feedback-field_feedback_expected */       'module' => 'text',
  /* entityform-feedback-field_feedback_expected */       'settings' => array(
  /* entityform-feedback-field_feedback_expected */         'field_formatter_class' => '',
  /* entityform-feedback-field_feedback_expected */       ),
  /* entityform-feedback-field_feedback_expected */       'type' => 'text_default',
  /* entityform-feedback-field_feedback_expected */       'weight' => 3,
  /* entityform-feedback-field_feedback_expected */     ),
  /* entityform-feedback-field_feedback_expected */     'full' => array(
  /* entityform-feedback-field_feedback_expected */       'label' => 'above',
  /* entityform-feedback-field_feedback_expected */       'module' => 'text',
  /* entityform-feedback-field_feedback_expected */       'settings' => array(
  /* entityform-feedback-field_feedback_expected */         'field_formatter_class' => '',
  /* entityform-feedback-field_feedback_expected */       ),
  /* entityform-feedback-field_feedback_expected */       'type' => 'text_default',
  /* entityform-feedback-field_feedback_expected */       'weight' => 3,
  /* entityform-feedback-field_feedback_expected */     ),
  /* entityform-feedback-field_feedback_expected */     'week' => array(
  /* entityform-feedback-field_feedback_expected */       'label' => 'above',
  /* entityform-feedback-field_feedback_expected */       'settings' => array(),
  /* entityform-feedback-field_feedback_expected */       'type' => 'hidden',
  /* entityform-feedback-field_feedback_expected */       'weight' => 0,
  /* entityform-feedback-field_feedback_expected */     ),
  /* entityform-feedback-field_feedback_expected */   ),
  /* entityform-feedback-field_feedback_expected */   'entity_type' => 'entityform',
  /* entityform-feedback-field_feedback_expected */   'fences_wrapper' => 'div',
  /* entityform-feedback-field_feedback_expected */   'field_name' => 'field_feedback_expected',
  /* entityform-feedback-field_feedback_expected */   'label' => 'Describe what you expected',
  /* entityform-feedback-field_feedback_expected */   'required' => 0,
  /* entityform-feedback-field_feedback_expected */   'settings' => array(
  /* entityform-feedback-field_feedback_expected */     'better_formats' => array(
  /* entityform-feedback-field_feedback_expected */       'allowed_formats' => array(
  /* entityform-feedback-field_feedback_expected */         'filtered_html' => 'filtered_html',
  /* entityform-feedback-field_feedback_expected */         'full_html' => 'full_html',
  /* entityform-feedback-field_feedback_expected */         'plain_text' => 'plain_text',
  /* entityform-feedback-field_feedback_expected */       ),
  /* entityform-feedback-field_feedback_expected */       'allowed_formats_toggle' => 0,
  /* entityform-feedback-field_feedback_expected */       'default_order_toggle' => 0,
  /* entityform-feedback-field_feedback_expected */       'default_order_wrapper' => array(
  /* entityform-feedback-field_feedback_expected */         'formats' => array(
  /* entityform-feedback-field_feedback_expected */           'filtered_html' => array(
  /* entityform-feedback-field_feedback_expected */             'weight' => -10,
  /* entityform-feedback-field_feedback_expected */           ),
  /* entityform-feedback-field_feedback_expected */           'full_html' => array(
  /* entityform-feedback-field_feedback_expected */             'weight' => -8,
  /* entityform-feedback-field_feedback_expected */           ),
  /* entityform-feedback-field_feedback_expected */           'plain_text' => array(
  /* entityform-feedback-field_feedback_expected */             'weight' => -9,
  /* entityform-feedback-field_feedback_expected */           ),
  /* entityform-feedback-field_feedback_expected */         ),
  /* entityform-feedback-field_feedback_expected */       ),
  /* entityform-feedback-field_feedback_expected */     ),
  /* entityform-feedback-field_feedback_expected */     'text_processing' => 0,
  /* entityform-feedback-field_feedback_expected */     'user_field_privacy' => FALSE,
  /* entityform-feedback-field_feedback_expected */     'user_register_form' => FALSE,
  /* entityform-feedback-field_feedback_expected */   ),
  /* entityform-feedback-field_feedback_expected */   'widget' => array(
  /* entityform-feedback-field_feedback_expected */     'active' => 1,
  /* entityform-feedback-field_feedback_expected */     'module' => 'text',
  /* entityform-feedback-field_feedback_expected */     'settings' => array(
  /* entityform-feedback-field_feedback_expected */       'rows' => 5,
  /* entityform-feedback-field_feedback_expected */     ),
  /* entityform-feedback-field_feedback_expected */     'type' => 'text_textarea',
  /* entityform-feedback-field_feedback_expected */     'weight' => 4,
  /* entityform-feedback-field_feedback_expected */   ),
  /* entityform-feedback-field_feedback_expected */ );

  // Exported field_instance: 'entityform-feedback-field_feedback_experienced'.
  $field_instances['entityform-feedback-field_feedback_experienced'] = array(
  /* entityform-feedback-field_feedback_experienced */   'bundle' => 'feedback',
  /* entityform-feedback-field_feedback_experienced */   'default_value' => NULL,
  /* entityform-feedback-field_feedback_experienced */   'deleted' => 0,
  /* entityform-feedback-field_feedback_experienced */   'description' => '',
  /* entityform-feedback-field_feedback_experienced */   'display' => array(
  /* entityform-feedback-field_feedback_experienced */     'default' => array(
  /* entityform-feedback-field_feedback_experienced */       'label' => 'above',
  /* entityform-feedback-field_feedback_experienced */       'module' => 'text',
  /* entityform-feedback-field_feedback_experienced */       'settings' => array(
  /* entityform-feedback-field_feedback_experienced */         'field_formatter_class' => '',
  /* entityform-feedback-field_feedback_experienced */       ),
  /* entityform-feedback-field_feedback_experienced */       'type' => 'text_default',
  /* entityform-feedback-field_feedback_experienced */       'weight' => 2,
  /* entityform-feedback-field_feedback_experienced */     ),
  /* entityform-feedback-field_feedback_experienced */     'full' => array(
  /* entityform-feedback-field_feedback_experienced */       'label' => 'above',
  /* entityform-feedback-field_feedback_experienced */       'module' => 'text',
  /* entityform-feedback-field_feedback_experienced */       'settings' => array(
  /* entityform-feedback-field_feedback_experienced */         'field_formatter_class' => '',
  /* entityform-feedback-field_feedback_experienced */       ),
  /* entityform-feedback-field_feedback_experienced */       'type' => 'text_default',
  /* entityform-feedback-field_feedback_experienced */       'weight' => 2,
  /* entityform-feedback-field_feedback_experienced */     ),
  /* entityform-feedback-field_feedback_experienced */     'week' => array(
  /* entityform-feedback-field_feedback_experienced */       'label' => 'above',
  /* entityform-feedback-field_feedback_experienced */       'settings' => array(),
  /* entityform-feedback-field_feedback_experienced */       'type' => 'hidden',
  /* entityform-feedback-field_feedback_experienced */       'weight' => 0,
  /* entityform-feedback-field_feedback_experienced */     ),
  /* entityform-feedback-field_feedback_experienced */   ),
  /* entityform-feedback-field_feedback_experienced */   'entity_type' => 'entityform',
  /* entityform-feedback-field_feedback_experienced */   'fences_wrapper' => 'div',
  /* entityform-feedback-field_feedback_experienced */   'field_name' => 'field_feedback_experienced',
  /* entityform-feedback-field_feedback_experienced */   'label' => 'Describe what you experienced',
  /* entityform-feedback-field_feedback_experienced */   'required' => 0,
  /* entityform-feedback-field_feedback_experienced */   'settings' => array(
  /* entityform-feedback-field_feedback_experienced */     'better_formats' => array(
  /* entityform-feedback-field_feedback_experienced */       'allowed_formats' => array(
  /* entityform-feedback-field_feedback_experienced */         'filtered_html' => 'filtered_html',
  /* entityform-feedback-field_feedback_experienced */         'full_html' => 'full_html',
  /* entityform-feedback-field_feedback_experienced */         'plain_text' => 'plain_text',
  /* entityform-feedback-field_feedback_experienced */       ),
  /* entityform-feedback-field_feedback_experienced */       'allowed_formats_toggle' => 0,
  /* entityform-feedback-field_feedback_experienced */       'default_order_toggle' => 0,
  /* entityform-feedback-field_feedback_experienced */       'default_order_wrapper' => array(
  /* entityform-feedback-field_feedback_experienced */         'formats' => array(
  /* entityform-feedback-field_feedback_experienced */           'filtered_html' => array(
  /* entityform-feedback-field_feedback_experienced */             'weight' => -10,
  /* entityform-feedback-field_feedback_experienced */           ),
  /* entityform-feedback-field_feedback_experienced */           'full_html' => array(
  /* entityform-feedback-field_feedback_experienced */             'weight' => -8,
  /* entityform-feedback-field_feedback_experienced */           ),
  /* entityform-feedback-field_feedback_experienced */           'plain_text' => array(
  /* entityform-feedback-field_feedback_experienced */             'weight' => -9,
  /* entityform-feedback-field_feedback_experienced */           ),
  /* entityform-feedback-field_feedback_experienced */         ),
  /* entityform-feedback-field_feedback_experienced */       ),
  /* entityform-feedback-field_feedback_experienced */     ),
  /* entityform-feedback-field_feedback_experienced */     'text_processing' => 0,
  /* entityform-feedback-field_feedback_experienced */     'user_field_privacy' => FALSE,
  /* entityform-feedback-field_feedback_experienced */     'user_register_form' => FALSE,
  /* entityform-feedback-field_feedback_experienced */   ),
  /* entityform-feedback-field_feedback_experienced */   'widget' => array(
  /* entityform-feedback-field_feedback_experienced */     'active' => 1,
  /* entityform-feedback-field_feedback_experienced */     'module' => 'text',
  /* entityform-feedback-field_feedback_experienced */     'settings' => array(
  /* entityform-feedback-field_feedback_experienced */       'rows' => 5,
  /* entityform-feedback-field_feedback_experienced */     ),
  /* entityform-feedback-field_feedback_experienced */     'type' => 'text_textarea',
  /* entityform-feedback-field_feedback_experienced */     'weight' => 3,
  /* entityform-feedback-field_feedback_experienced */   ),
  /* entityform-feedback-field_feedback_experienced */ );

  // Exported field_instance: 'entityform-feedback-field_feedback_operation'.
  $field_instances['entityform-feedback-field_feedback_operation'] = array(
  /* entityform-feedback-field_feedback_operation */   'bundle' => 'feedback',
  /* entityform-feedback-field_feedback_operation */   'default_value' => NULL,
  /* entityform-feedback-field_feedback_operation */   'deleted' => 0,
  /* entityform-feedback-field_feedback_operation */   'description' => 'Describe what you were attempting to accomplish on this page. Be as specific as you can about the steps you took.',
  /* entityform-feedback-field_feedback_operation */   'display' => array(
  /* entityform-feedback-field_feedback_operation */     'default' => array(
  /* entityform-feedback-field_feedback_operation */       'label' => 'above',
  /* entityform-feedback-field_feedback_operation */       'module' => 'text',
  /* entityform-feedback-field_feedback_operation */       'settings' => array(
  /* entityform-feedback-field_feedback_operation */         'field_formatter_class' => '',
  /* entityform-feedback-field_feedback_operation */       ),
  /* entityform-feedback-field_feedback_operation */       'type' => 'text_default',
  /* entityform-feedback-field_feedback_operation */       'weight' => 6,
  /* entityform-feedback-field_feedback_operation */     ),
  /* entityform-feedback-field_feedback_operation */     'full' => array(
  /* entityform-feedback-field_feedback_operation */       'label' => 'above',
  /* entityform-feedback-field_feedback_operation */       'module' => 'text',
  /* entityform-feedback-field_feedback_operation */       'settings' => array(
  /* entityform-feedback-field_feedback_operation */         'field_formatter_class' => '',
  /* entityform-feedback-field_feedback_operation */       ),
  /* entityform-feedback-field_feedback_operation */       'type' => 'text_default',
  /* entityform-feedback-field_feedback_operation */       'weight' => 6,
  /* entityform-feedback-field_feedback_operation */     ),
  /* entityform-feedback-field_feedback_operation */     'week' => array(
  /* entityform-feedback-field_feedback_operation */       'label' => 'above',
  /* entityform-feedback-field_feedback_operation */       'settings' => array(),
  /* entityform-feedback-field_feedback_operation */       'type' => 'hidden',
  /* entityform-feedback-field_feedback_operation */       'weight' => 0,
  /* entityform-feedback-field_feedback_operation */     ),
  /* entityform-feedback-field_feedback_operation */   ),
  /* entityform-feedback-field_feedback_operation */   'entity_type' => 'entityform',
  /* entityform-feedback-field_feedback_operation */   'fences_wrapper' => 'div',
  /* entityform-feedback-field_feedback_operation */   'field_name' => 'field_feedback_operation',
  /* entityform-feedback-field_feedback_operation */   'label' => 'What were you trying to do?',
  /* entityform-feedback-field_feedback_operation */   'required' => 0,
  /* entityform-feedback-field_feedback_operation */   'settings' => array(
  /* entityform-feedback-field_feedback_operation */     'better_formats' => array(
  /* entityform-feedback-field_feedback_operation */       'allowed_formats' => array(
  /* entityform-feedback-field_feedback_operation */         'filtered_html' => 'filtered_html',
  /* entityform-feedback-field_feedback_operation */         'full_html' => 'full_html',
  /* entityform-feedback-field_feedback_operation */         'plain_text' => 'plain_text',
  /* entityform-feedback-field_feedback_operation */       ),
  /* entityform-feedback-field_feedback_operation */       'allowed_formats_toggle' => 0,
  /* entityform-feedback-field_feedback_operation */       'default_order_toggle' => 0,
  /* entityform-feedback-field_feedback_operation */       'default_order_wrapper' => array(
  /* entityform-feedback-field_feedback_operation */         'formats' => array(
  /* entityform-feedback-field_feedback_operation */           'filtered_html' => array(
  /* entityform-feedback-field_feedback_operation */             'weight' => -10,
  /* entityform-feedback-field_feedback_operation */           ),
  /* entityform-feedback-field_feedback_operation */           'full_html' => array(
  /* entityform-feedback-field_feedback_operation */             'weight' => -8,
  /* entityform-feedback-field_feedback_operation */           ),
  /* entityform-feedback-field_feedback_operation */           'plain_text' => array(
  /* entityform-feedback-field_feedback_operation */             'weight' => -9,
  /* entityform-feedback-field_feedback_operation */           ),
  /* entityform-feedback-field_feedback_operation */         ),
  /* entityform-feedback-field_feedback_operation */       ),
  /* entityform-feedback-field_feedback_operation */     ),
  /* entityform-feedback-field_feedback_operation */     'text_processing' => 0,
  /* entityform-feedback-field_feedback_operation */     'user_field_privacy' => FALSE,
  /* entityform-feedback-field_feedback_operation */     'user_register_form' => FALSE,
  /* entityform-feedback-field_feedback_operation */   ),
  /* entityform-feedback-field_feedback_operation */   'widget' => array(
  /* entityform-feedback-field_feedback_operation */     'active' => 1,
  /* entityform-feedback-field_feedback_operation */     'module' => 'text',
  /* entityform-feedback-field_feedback_operation */     'settings' => array(
  /* entityform-feedback-field_feedback_operation */       'rows' => 5,
  /* entityform-feedback-field_feedback_operation */     ),
  /* entityform-feedback-field_feedback_operation */     'type' => 'text_textarea',
  /* entityform-feedback-field_feedback_operation */     'weight' => 2,
  /* entityform-feedback-field_feedback_operation */   ),
  /* entityform-feedback-field_feedback_operation */ );

  // Exported field_instance: 'entityform-feedback-field_feedback_url'.
  $field_instances['entityform-feedback-field_feedback_url'] = array(
  /* entityform-feedback-field_feedback_url */   'bundle' => 'feedback',
  /* entityform-feedback-field_feedback_url */   'default_value' => NULL,
  /* entityform-feedback-field_feedback_url */   'deleted' => 0,
  /* entityform-feedback-field_feedback_url */   'description' => 'Please copy the URL of the page you were on when you encountered your problem. If uncertain, use your browser to navigate back to that page, copy the url, then paste it in this field.',
  /* entityform-feedback-field_feedback_url */   'display' => array(
  /* entityform-feedback-field_feedback_url */     'default' => array(
  /* entityform-feedback-field_feedback_url */       'label' => 'above',
  /* entityform-feedback-field_feedback_url */       'module' => 'text',
  /* entityform-feedback-field_feedback_url */       'settings' => array(
  /* entityform-feedback-field_feedback_url */         'field_formatter_class' => '',
  /* entityform-feedback-field_feedback_url */       ),
  /* entityform-feedback-field_feedback_url */       'type' => 'text_default',
  /* entityform-feedback-field_feedback_url */       'weight' => 5,
  /* entityform-feedback-field_feedback_url */     ),
  /* entityform-feedback-field_feedback_url */     'full' => array(
  /* entityform-feedback-field_feedback_url */       'label' => 'above',
  /* entityform-feedback-field_feedback_url */       'module' => 'text',
  /* entityform-feedback-field_feedback_url */       'settings' => array(
  /* entityform-feedback-field_feedback_url */         'field_formatter_class' => '',
  /* entityform-feedback-field_feedback_url */       ),
  /* entityform-feedback-field_feedback_url */       'type' => 'text_default',
  /* entityform-feedback-field_feedback_url */       'weight' => 5,
  /* entityform-feedback-field_feedback_url */     ),
  /* entityform-feedback-field_feedback_url */     'week' => array(
  /* entityform-feedback-field_feedback_url */       'label' => 'above',
  /* entityform-feedback-field_feedback_url */       'settings' => array(),
  /* entityform-feedback-field_feedback_url */       'type' => 'hidden',
  /* entityform-feedback-field_feedback_url */       'weight' => 0,
  /* entityform-feedback-field_feedback_url */     ),
  /* entityform-feedback-field_feedback_url */   ),
  /* entityform-feedback-field_feedback_url */   'entity_type' => 'entityform',
  /* entityform-feedback-field_feedback_url */   'fences_wrapper' => 'div',
  /* entityform-feedback-field_feedback_url */   'field_name' => 'field_feedback_url',
  /* entityform-feedback-field_feedback_url */   'label' => 'Problem URL',
  /* entityform-feedback-field_feedback_url */   'required' => 0,
  /* entityform-feedback-field_feedback_url */   'settings' => array(
  /* entityform-feedback-field_feedback_url */     'better_formats' => array(
  /* entityform-feedback-field_feedback_url */       'allowed_formats' => array(
  /* entityform-feedback-field_feedback_url */         'filtered_html' => 'filtered_html',
  /* entityform-feedback-field_feedback_url */         'full_html' => 'full_html',
  /* entityform-feedback-field_feedback_url */         'plain_text' => 'plain_text',
  /* entityform-feedback-field_feedback_url */       ),
  /* entityform-feedback-field_feedback_url */       'allowed_formats_toggle' => 0,
  /* entityform-feedback-field_feedback_url */       'default_order_toggle' => 0,
  /* entityform-feedback-field_feedback_url */       'default_order_wrapper' => array(
  /* entityform-feedback-field_feedback_url */         'formats' => array(
  /* entityform-feedback-field_feedback_url */           'filtered_html' => array(
  /* entityform-feedback-field_feedback_url */             'weight' => -10,
  /* entityform-feedback-field_feedback_url */           ),
  /* entityform-feedback-field_feedback_url */           'full_html' => array(
  /* entityform-feedback-field_feedback_url */             'weight' => -8,
  /* entityform-feedback-field_feedback_url */           ),
  /* entityform-feedback-field_feedback_url */           'plain_text' => array(
  /* entityform-feedback-field_feedback_url */             'weight' => -9,
  /* entityform-feedback-field_feedback_url */           ),
  /* entityform-feedback-field_feedback_url */         ),
  /* entityform-feedback-field_feedback_url */       ),
  /* entityform-feedback-field_feedback_url */     ),
  /* entityform-feedback-field_feedback_url */     'text_processing' => 0,
  /* entityform-feedback-field_feedback_url */     'user_field_privacy' => FALSE,
  /* entityform-feedback-field_feedback_url */     'user_register_form' => FALSE,
  /* entityform-feedback-field_feedback_url */   ),
  /* entityform-feedback-field_feedback_url */   'widget' => array(
  /* entityform-feedback-field_feedback_url */     'active' => 1,
  /* entityform-feedback-field_feedback_url */     'module' => 'text',
  /* entityform-feedback-field_feedback_url */     'settings' => array(
  /* entityform-feedback-field_feedback_url */       'size' => 120,
  /* entityform-feedback-field_feedback_url */     ),
  /* entityform-feedback-field_feedback_url */     'type' => 'text_textfield',
  /* entityform-feedback-field_feedback_url */     'weight' => 1,
  /* entityform-feedback-field_feedback_url */   ),
  /* entityform-feedback-field_feedback_url */ );

  // Exported field_instance: 'entityform-feedback-field_media'.
  $field_instances['entityform-feedback-field_media'] = array(
  /* entityform-feedback-field_media */   'bundle' => 'feedback',
  /* entityform-feedback-field_media */   'deleted' => 0,
  /* entityform-feedback-field_media */   'description' => 'Attach a screenshot here to help us understand what you are seeing.',
  /* entityform-feedback-field_media */   'display' => array(
  /* entityform-feedback-field_media */     'default' => array(
  /* entityform-feedback-field_media */       'label' => 'above',
  /* entityform-feedback-field_media */       'module' => 'file',
  /* entityform-feedback-field_media */       'settings' => array(
  /* entityform-feedback-field_media */         'field_formatter_class' => '',
  /* entityform-feedback-field_media */       ),
  /* entityform-feedback-field_media */       'type' => 'file_default',
  /* entityform-feedback-field_media */       'weight' => 4,
  /* entityform-feedback-field_media */     ),
  /* entityform-feedback-field_media */     'full' => array(
  /* entityform-feedback-field_media */       'label' => 'above',
  /* entityform-feedback-field_media */       'module' => 'file',
  /* entityform-feedback-field_media */       'settings' => array(
  /* entityform-feedback-field_media */         'field_formatter_class' => '',
  /* entityform-feedback-field_media */       ),
  /* entityform-feedback-field_media */       'type' => 'file_default',
  /* entityform-feedback-field_media */       'weight' => 4,
  /* entityform-feedback-field_media */     ),
  /* entityform-feedback-field_media */     'week' => array(
  /* entityform-feedback-field_media */       'label' => 'above',
  /* entityform-feedback-field_media */       'settings' => array(),
  /* entityform-feedback-field_media */       'type' => 'hidden',
  /* entityform-feedback-field_media */       'weight' => 0,
  /* entityform-feedback-field_media */     ),
  /* entityform-feedback-field_media */   ),
  /* entityform-feedback-field_media */   'entity_type' => 'entityform',
  /* entityform-feedback-field_media */   'fences_wrapper' => 'div',
  /* entityform-feedback-field_media */   'field_name' => 'field_media',
  /* entityform-feedback-field_media */   'label' => 'Screenshot',
  /* entityform-feedback-field_media */   'required' => 0,
  /* entityform-feedback-field_media */   'settings' => array(
  /* entityform-feedback-field_media */     'description_field' => 0,
  /* entityform-feedback-field_media */     'file_directory' => 'feedback/screenshots',
  /* entityform-feedback-field_media */     'file_extensions' => 'jpg jpeg png gif pdf',
  /* entityform-feedback-field_media */     'max_filesize' => '',
  /* entityform-feedback-field_media */     'user_field_privacy' => FALSE,
  /* entityform-feedback-field_media */     'user_register_form' => FALSE,
  /* entityform-feedback-field_media */   ),
  /* entityform-feedback-field_media */   'widget' => array(
  /* entityform-feedback-field_media */     'active' => 1,
  /* entityform-feedback-field_media */     'module' => 'media',
  /* entityform-feedback-field_media */     'settings' => array(
  /* entityform-feedback-field_media */       'allowed_schemes' => array(
  /* entityform-feedback-field_media */         'private' => 'private',
  /* entityform-feedback-field_media */         'public' => 0,
  /* entityform-feedback-field_media */         'vimeo' => 0,
  /* entityform-feedback-field_media */         'youtube' => 0,
  /* entityform-feedback-field_media */       ),
  /* entityform-feedback-field_media */       'allowed_types' => array(
  /* entityform-feedback-field_media */         'audio' => 0,
  /* entityform-feedback-field_media */         'document' => 0,
  /* entityform-feedback-field_media */         'image' => 'image',
  /* entityform-feedback-field_media */         'video' => 0,
  /* entityform-feedback-field_media */       ),
  /* entityform-feedback-field_media */       'browser_plugins' => array(
  /* entityform-feedback-field_media */         'media_default--media_browser_1' => 0,
  /* entityform-feedback-field_media */         'media_default--media_browser_my_files' => 0,
  /* entityform-feedback-field_media */         'media_internet' => 0,
  /* entityform-feedback-field_media */         'upload' => 'upload',
  /* entityform-feedback-field_media */       ),
  /* entityform-feedback-field_media */     ),
  /* entityform-feedback-field_media */     'type' => 'media_generic',
  /* entityform-feedback-field_media */     'weight' => 6,
  /* entityform-feedback-field_media */   ),
  /* entityform-feedback-field_media */ );

  // Translatables
  // Included for use with string extractors like potx.
  t('Attach a screenshot here to help us understand what you are seeing.');
  t('Describe what you expected');
  t('Describe what you experienced');
  t('Describe what you were attempting to accomplish on this page. Be as specific as you can about the steps you took.');
  t('Feedback (compiled)');
  t('Please copy the URL of the page you were on when you encountered your problem. If uncertain, use your browser to navigate back to that page, copy the url, then paste it in this field.');
  t('Problem URL');
  t('Screenshot');
  t('What were you trying to do?');

  return $field_instances;
}
