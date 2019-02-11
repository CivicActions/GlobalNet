<?php
/**
 * @file
 * gn2_tech_support.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function gn2_tech_support_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'entityform-tech_support-field_anything_else'.
  $field_instances['entityform-tech_support-field_anything_else'] = array(
  /* entityform-tech_support-field_anything_else */   'bundle' => 'tech_support',
  /* entityform-tech_support-field_anything_else */   'default_value' => NULL,
  /* entityform-tech_support-field_anything_else */   'deleted' => 0,
  /* entityform-tech_support-field_anything_else */   'description' => '',
  /* entityform-tech_support-field_anything_else */   'display' => array(
  /* entityform-tech_support-field_anything_else */     'default' => array(
  /* entityform-tech_support-field_anything_else */       'label' => 'above',
  /* entityform-tech_support-field_anything_else */       'module' => 'text',
  /* entityform-tech_support-field_anything_else */       'settings' => array(
  /* entityform-tech_support-field_anything_else */         'field_formatter_class' => '',
  /* entityform-tech_support-field_anything_else */       ),
  /* entityform-tech_support-field_anything_else */       'type' => 'text_default',
  /* entityform-tech_support-field_anything_else */       'weight' => 4,
  /* entityform-tech_support-field_anything_else */     ),
  /* entityform-tech_support-field_anything_else */     'week' => array(
  /* entityform-tech_support-field_anything_else */       'label' => 'above',
  /* entityform-tech_support-field_anything_else */       'settings' => array(),
  /* entityform-tech_support-field_anything_else */       'type' => 'hidden',
  /* entityform-tech_support-field_anything_else */       'weight' => 0,
  /* entityform-tech_support-field_anything_else */     ),
  /* entityform-tech_support-field_anything_else */   ),
  /* entityform-tech_support-field_anything_else */   'entity_type' => 'entityform',
  /* entityform-tech_support-field_anything_else */   'fences_wrapper' => 'no_wrapper',
  /* entityform-tech_support-field_anything_else */   'field_name' => 'field_anything_else',
  /* entityform-tech_support-field_anything_else */   'label' => 'Additional Comments/Remarks',
  /* entityform-tech_support-field_anything_else */   'required' => 1,
  /* entityform-tech_support-field_anything_else */   'settings' => array(
  /* entityform-tech_support-field_anything_else */     'better_formats' => array(
  /* entityform-tech_support-field_anything_else */       'allowed_formats' => array(
  /* entityform-tech_support-field_anything_else */         'filtered_html' => 'filtered_html',
  /* entityform-tech_support-field_anything_else */         'full_html' => 'full_html',
  /* entityform-tech_support-field_anything_else */         'plain_text' => 'plain_text',
  /* entityform-tech_support-field_anything_else */       ),
  /* entityform-tech_support-field_anything_else */       'allowed_formats_toggle' => 0,
  /* entityform-tech_support-field_anything_else */       'default_order_toggle' => 0,
  /* entityform-tech_support-field_anything_else */       'default_order_wrapper' => array(
  /* entityform-tech_support-field_anything_else */         'formats' => array(
  /* entityform-tech_support-field_anything_else */           'filtered_html' => array(
  /* entityform-tech_support-field_anything_else */             'weight' => -10,
  /* entityform-tech_support-field_anything_else */           ),
  /* entityform-tech_support-field_anything_else */           'full_html' => array(
  /* entityform-tech_support-field_anything_else */             'weight' => -8,
  /* entityform-tech_support-field_anything_else */           ),
  /* entityform-tech_support-field_anything_else */           'plain_text' => array(
  /* entityform-tech_support-field_anything_else */             'weight' => -9,
  /* entityform-tech_support-field_anything_else */           ),
  /* entityform-tech_support-field_anything_else */         ),
  /* entityform-tech_support-field_anything_else */       ),
  /* entityform-tech_support-field_anything_else */     ),
  /* entityform-tech_support-field_anything_else */     'text_processing' => 0,
  /* entityform-tech_support-field_anything_else */     'user_field_privacy' => FALSE,
  /* entityform-tech_support-field_anything_else */     'user_register_form' => FALSE,
  /* entityform-tech_support-field_anything_else */   ),
  /* entityform-tech_support-field_anything_else */   'widget' => array(
  /* entityform-tech_support-field_anything_else */     'active' => 1,
  /* entityform-tech_support-field_anything_else */     'module' => 'text',
  /* entityform-tech_support-field_anything_else */     'settings' => array(
  /* entityform-tech_support-field_anything_else */       'rows' => 5,
  /* entityform-tech_support-field_anything_else */     ),
  /* entityform-tech_support-field_anything_else */     'type' => 'text_textarea',
  /* entityform-tech_support-field_anything_else */     'weight' => 6,
  /* entityform-tech_support-field_anything_else */   ),
  /* entityform-tech_support-field_anything_else */ );

  // Exported field_instance: 'entityform-tech_support-field_email'.
  $field_instances['entityform-tech_support-field_email'] = array(
  /* entityform-tech_support-field_email */   'bundle' => 'tech_support',
  /* entityform-tech_support-field_email */   'default_value' => NULL,
  /* entityform-tech_support-field_email */   'deleted' => 0,
  /* entityform-tech_support-field_email */   'description' => '',
  /* entityform-tech_support-field_email */   'display' => array(
  /* entityform-tech_support-field_email */     'default' => array(
  /* entityform-tech_support-field_email */       'label' => 'above',
  /* entityform-tech_support-field_email */       'module' => 'email',
  /* entityform-tech_support-field_email */       'settings' => array(
  /* entityform-tech_support-field_email */         'field_formatter_class' => '',
  /* entityform-tech_support-field_email */       ),
  /* entityform-tech_support-field_email */       'type' => 'email_default',
  /* entityform-tech_support-field_email */       'weight' => 0,
  /* entityform-tech_support-field_email */     ),
  /* entityform-tech_support-field_email */     'week' => array(
  /* entityform-tech_support-field_email */       'label' => 'above',
  /* entityform-tech_support-field_email */       'settings' => array(),
  /* entityform-tech_support-field_email */       'type' => 'hidden',
  /* entityform-tech_support-field_email */       'weight' => 0,
  /* entityform-tech_support-field_email */     ),
  /* entityform-tech_support-field_email */   ),
  /* entityform-tech_support-field_email */   'entity_type' => 'entityform',
  /* entityform-tech_support-field_email */   'fences_wrapper' => 'no_wrapper',
  /* entityform-tech_support-field_email */   'field_name' => 'field_email',
  /* entityform-tech_support-field_email */   'label' => 'Your email Address',
  /* entityform-tech_support-field_email */   'required' => 1,
  /* entityform-tech_support-field_email */   'settings' => array(
  /* entityform-tech_support-field_email */     'user_field_privacy' => FALSE,
  /* entityform-tech_support-field_email */     'user_register_form' => FALSE,
  /* entityform-tech_support-field_email */   ),
  /* entityform-tech_support-field_email */   'widget' => array(
  /* entityform-tech_support-field_email */     'active' => 1,
  /* entityform-tech_support-field_email */     'module' => 'email',
  /* entityform-tech_support-field_email */     'settings' => array(
  /* entityform-tech_support-field_email */       'size' => 60,
  /* entityform-tech_support-field_email */     ),
  /* entityform-tech_support-field_email */     'type' => 'email_textfield',
  /* entityform-tech_support-field_email */     'weight' => 5,
  /* entityform-tech_support-field_email */   ),
  /* entityform-tech_support-field_email */ );

  // Exported field_instance:
  // 'entityform-tech_support-field_how_can_we_help_you_'.
  $field_instances['entityform-tech_support-field_how_can_we_help_you_'] = array(
  /* entityform-tech_support-field_how_can_we_help_you_ */   'bundle' => 'tech_support',
  /* entityform-tech_support-field_how_can_we_help_you_ */   'default_value' => array(
  /* entityform-tech_support-field_how_can_we_help_you_ */     0 => array(
  /* entityform-tech_support-field_how_can_we_help_you_ */       'value' => 1,
  /* entityform-tech_support-field_how_can_we_help_you_ */     ),
  /* entityform-tech_support-field_how_can_we_help_you_ */   ),
  /* entityform-tech_support-field_how_can_we_help_you_ */   'deleted' => 0,
  /* entityform-tech_support-field_how_can_we_help_you_ */   'description' => '',
  /* entityform-tech_support-field_how_can_we_help_you_ */   'display' => array(
  /* entityform-tech_support-field_how_can_we_help_you_ */     'default' => array(
  /* entityform-tech_support-field_how_can_we_help_you_ */       'label' => 'above',
  /* entityform-tech_support-field_how_can_we_help_you_ */       'module' => 'list',
  /* entityform-tech_support-field_how_can_we_help_you_ */       'settings' => array(
  /* entityform-tech_support-field_how_can_we_help_you_ */         'field_formatter_class' => '',
  /* entityform-tech_support-field_how_can_we_help_you_ */       ),
  /* entityform-tech_support-field_how_can_we_help_you_ */       'type' => 'list_default',
  /* entityform-tech_support-field_how_can_we_help_you_ */       'weight' => 3,
  /* entityform-tech_support-field_how_can_we_help_you_ */     ),
  /* entityform-tech_support-field_how_can_we_help_you_ */     'week' => array(
  /* entityform-tech_support-field_how_can_we_help_you_ */       'label' => 'above',
  /* entityform-tech_support-field_how_can_we_help_you_ */       'settings' => array(),
  /* entityform-tech_support-field_how_can_we_help_you_ */       'type' => 'hidden',
  /* entityform-tech_support-field_how_can_we_help_you_ */       'weight' => 0,
  /* entityform-tech_support-field_how_can_we_help_you_ */     ),
  /* entityform-tech_support-field_how_can_we_help_you_ */   ),
  /* entityform-tech_support-field_how_can_we_help_you_ */   'entity_type' => 'entityform',
  /* entityform-tech_support-field_how_can_we_help_you_ */   'fences_wrapper' => 'no_wrapper',
  /* entityform-tech_support-field_how_can_we_help_you_ */   'field_name' => 'field_how_can_we_help_you_',
  /* entityform-tech_support-field_how_can_we_help_you_ */   'label' => 'How can we help you?',
  /* entityform-tech_support-field_how_can_we_help_you_ */   'required' => 1,
  /* entityform-tech_support-field_how_can_we_help_you_ */   'settings' => array(
  /* entityform-tech_support-field_how_can_we_help_you_ */     'user_field_privacy' => FALSE,
  /* entityform-tech_support-field_how_can_we_help_you_ */     'user_register_form' => FALSE,
  /* entityform-tech_support-field_how_can_we_help_you_ */   ),
  /* entityform-tech_support-field_how_can_we_help_you_ */   'widget' => array(
  /* entityform-tech_support-field_how_can_we_help_you_ */     'active' => 1,
  /* entityform-tech_support-field_how_can_we_help_you_ */     'module' => 'options',
  /* entityform-tech_support-field_how_can_we_help_you_ */     'settings' => array(),
  /* entityform-tech_support-field_how_can_we_help_you_ */     'type' => 'options_buttons',
  /* entityform-tech_support-field_how_can_we_help_you_ */     'weight' => 5,
  /* entityform-tech_support-field_how_can_we_help_you_ */   ),
  /* entityform-tech_support-field_how_can_we_help_you_ */ );

  // Exported field_instance: 'entityform-tech_support-field_name_first'.
  $field_instances['entityform-tech_support-field_name_first'] = array(
  /* entityform-tech_support-field_name_first */   'bundle' => 'tech_support',
  /* entityform-tech_support-field_name_first */   'default_value' => NULL,
  /* entityform-tech_support-field_name_first */   'deleted' => 0,
  /* entityform-tech_support-field_name_first */   'description' => '',
  /* entityform-tech_support-field_name_first */   'display' => array(
  /* entityform-tech_support-field_name_first */     'default' => array(
  /* entityform-tech_support-field_name_first */       'label' => 'above',
  /* entityform-tech_support-field_name_first */       'module' => 'text',
  /* entityform-tech_support-field_name_first */       'settings' => array(
  /* entityform-tech_support-field_name_first */         'field_formatter_class' => '',
  /* entityform-tech_support-field_name_first */       ),
  /* entityform-tech_support-field_name_first */       'type' => 'text_default',
  /* entityform-tech_support-field_name_first */       'weight' => 1,
  /* entityform-tech_support-field_name_first */     ),
  /* entityform-tech_support-field_name_first */     'week' => array(
  /* entityform-tech_support-field_name_first */       'label' => 'above',
  /* entityform-tech_support-field_name_first */       'settings' => array(),
  /* entityform-tech_support-field_name_first */       'type' => 'hidden',
  /* entityform-tech_support-field_name_first */       'weight' => 0,
  /* entityform-tech_support-field_name_first */     ),
  /* entityform-tech_support-field_name_first */   ),
  /* entityform-tech_support-field_name_first */   'entity_type' => 'entityform',
  /* entityform-tech_support-field_name_first */   'fences_wrapper' => 'no_wrapper',
  /* entityform-tech_support-field_name_first */   'field_name' => 'field_name_first',
  /* entityform-tech_support-field_name_first */   'label' => 'Given Name',
  /* entityform-tech_support-field_name_first */   'required' => 1,
  /* entityform-tech_support-field_name_first */   'settings' => array(
  /* entityform-tech_support-field_name_first */     'better_formats' => array(
  /* entityform-tech_support-field_name_first */       'allowed_formats' => array(
  /* entityform-tech_support-field_name_first */         'filtered_html' => 'filtered_html',
  /* entityform-tech_support-field_name_first */         'full_html' => 'full_html',
  /* entityform-tech_support-field_name_first */         'plain_text' => 'plain_text',
  /* entityform-tech_support-field_name_first */       ),
  /* entityform-tech_support-field_name_first */       'allowed_formats_toggle' => 0,
  /* entityform-tech_support-field_name_first */       'default_order_toggle' => 0,
  /* entityform-tech_support-field_name_first */       'default_order_wrapper' => array(
  /* entityform-tech_support-field_name_first */         'formats' => array(
  /* entityform-tech_support-field_name_first */           'filtered_html' => array(
  /* entityform-tech_support-field_name_first */             'weight' => -10,
  /* entityform-tech_support-field_name_first */           ),
  /* entityform-tech_support-field_name_first */           'full_html' => array(
  /* entityform-tech_support-field_name_first */             'weight' => -8,
  /* entityform-tech_support-field_name_first */           ),
  /* entityform-tech_support-field_name_first */           'plain_text' => array(
  /* entityform-tech_support-field_name_first */             'weight' => -9,
  /* entityform-tech_support-field_name_first */           ),
  /* entityform-tech_support-field_name_first */         ),
  /* entityform-tech_support-field_name_first */       ),
  /* entityform-tech_support-field_name_first */     ),
  /* entityform-tech_support-field_name_first */     'text_processing' => 0,
  /* entityform-tech_support-field_name_first */     'user_field_privacy' => FALSE,
  /* entityform-tech_support-field_name_first */     'user_register_form' => FALSE,
  /* entityform-tech_support-field_name_first */   ),
  /* entityform-tech_support-field_name_first */   'widget' => array(
  /* entityform-tech_support-field_name_first */     'active' => 1,
  /* entityform-tech_support-field_name_first */     'module' => 'text',
  /* entityform-tech_support-field_name_first */     'settings' => array(
  /* entityform-tech_support-field_name_first */       'size' => 60,
  /* entityform-tech_support-field_name_first */     ),
  /* entityform-tech_support-field_name_first */     'type' => 'text_textfield',
  /* entityform-tech_support-field_name_first */     'weight' => 3,
  /* entityform-tech_support-field_name_first */   ),
  /* entityform-tech_support-field_name_first */ );

  // Exported field_instance: 'entityform-tech_support-field_name_last'.
  $field_instances['entityform-tech_support-field_name_last'] = array(
  /* entityform-tech_support-field_name_last */   'bundle' => 'tech_support',
  /* entityform-tech_support-field_name_last */   'default_value' => NULL,
  /* entityform-tech_support-field_name_last */   'deleted' => 0,
  /* entityform-tech_support-field_name_last */   'description' => '',
  /* entityform-tech_support-field_name_last */   'display' => array(
  /* entityform-tech_support-field_name_last */     'default' => array(
  /* entityform-tech_support-field_name_last */       'label' => 'above',
  /* entityform-tech_support-field_name_last */       'module' => 'text',
  /* entityform-tech_support-field_name_last */       'settings' => array(
  /* entityform-tech_support-field_name_last */         'field_formatter_class' => '',
  /* entityform-tech_support-field_name_last */       ),
  /* entityform-tech_support-field_name_last */       'type' => 'text_default',
  /* entityform-tech_support-field_name_last */       'weight' => 2,
  /* entityform-tech_support-field_name_last */     ),
  /* entityform-tech_support-field_name_last */     'week' => array(
  /* entityform-tech_support-field_name_last */       'label' => 'above',
  /* entityform-tech_support-field_name_last */       'settings' => array(),
  /* entityform-tech_support-field_name_last */       'type' => 'hidden',
  /* entityform-tech_support-field_name_last */       'weight' => 0,
  /* entityform-tech_support-field_name_last */     ),
  /* entityform-tech_support-field_name_last */   ),
  /* entityform-tech_support-field_name_last */   'entity_type' => 'entityform',
  /* entityform-tech_support-field_name_last */   'fences_wrapper' => 'no_wrapper',
  /* entityform-tech_support-field_name_last */   'field_name' => 'field_name_last',
  /* entityform-tech_support-field_name_last */   'label' => 'Family Name',
  /* entityform-tech_support-field_name_last */   'required' => 1,
  /* entityform-tech_support-field_name_last */   'settings' => array(
  /* entityform-tech_support-field_name_last */     'better_formats' => array(
  /* entityform-tech_support-field_name_last */       'allowed_formats' => array(
  /* entityform-tech_support-field_name_last */         'filtered_html' => 'filtered_html',
  /* entityform-tech_support-field_name_last */         'full_html' => 'full_html',
  /* entityform-tech_support-field_name_last */         'plain_text' => 'plain_text',
  /* entityform-tech_support-field_name_last */       ),
  /* entityform-tech_support-field_name_last */       'allowed_formats_toggle' => 0,
  /* entityform-tech_support-field_name_last */       'default_order_toggle' => 0,
  /* entityform-tech_support-field_name_last */       'default_order_wrapper' => array(
  /* entityform-tech_support-field_name_last */         'formats' => array(
  /* entityform-tech_support-field_name_last */           'filtered_html' => array(
  /* entityform-tech_support-field_name_last */             'weight' => -10,
  /* entityform-tech_support-field_name_last */           ),
  /* entityform-tech_support-field_name_last */           'full_html' => array(
  /* entityform-tech_support-field_name_last */             'weight' => -8,
  /* entityform-tech_support-field_name_last */           ),
  /* entityform-tech_support-field_name_last */           'plain_text' => array(
  /* entityform-tech_support-field_name_last */             'weight' => -9,
  /* entityform-tech_support-field_name_last */           ),
  /* entityform-tech_support-field_name_last */         ),
  /* entityform-tech_support-field_name_last */       ),
  /* entityform-tech_support-field_name_last */     ),
  /* entityform-tech_support-field_name_last */     'text_processing' => 0,
  /* entityform-tech_support-field_name_last */     'user_field_privacy' => FALSE,
  /* entityform-tech_support-field_name_last */     'user_register_form' => FALSE,
  /* entityform-tech_support-field_name_last */   ),
  /* entityform-tech_support-field_name_last */   'widget' => array(
  /* entityform-tech_support-field_name_last */     'active' => 1,
  /* entityform-tech_support-field_name_last */     'module' => 'text',
  /* entityform-tech_support-field_name_last */     'settings' => array(
  /* entityform-tech_support-field_name_last */       'size' => 60,
  /* entityform-tech_support-field_name_last */     ),
  /* entityform-tech_support-field_name_last */     'type' => 'text_textfield',
  /* entityform-tech_support-field_name_last */     'weight' => 4,
  /* entityform-tech_support-field_name_last */   ),
  /* entityform-tech_support-field_name_last */ );

  // Exported field_instance: 'entityform-tech_support-field_notified_to'.
  $field_instances['entityform-tech_support-field_notified_to'] = array(
  /* entityform-tech_support-field_notified_to */   'bundle' => 'tech_support',
  /* entityform-tech_support-field_notified_to */   'default_value' => NULL,
  /* entityform-tech_support-field_notified_to */   'deleted' => 0,
  /* entityform-tech_support-field_notified_to */   'description' => '',
  /* entityform-tech_support-field_notified_to */   'display' => array(
  /* entityform-tech_support-field_notified_to */     'default' => array(
  /* entityform-tech_support-field_notified_to */       'label' => 'above',
  /* entityform-tech_support-field_notified_to */       'module' => 'text',
  /* entityform-tech_support-field_notified_to */       'settings' => array(
  /* entityform-tech_support-field_notified_to */         'field_formatter_class' => '',
  /* entityform-tech_support-field_notified_to */       ),
  /* entityform-tech_support-field_notified_to */       'type' => 'text_default',
  /* entityform-tech_support-field_notified_to */       'weight' => 7,
  /* entityform-tech_support-field_notified_to */     ),
  /* entityform-tech_support-field_notified_to */     'week' => array(
  /* entityform-tech_support-field_notified_to */       'label' => 'above',
  /* entityform-tech_support-field_notified_to */       'settings' => array(),
  /* entityform-tech_support-field_notified_to */       'type' => 'hidden',
  /* entityform-tech_support-field_notified_to */       'weight' => 0,
  /* entityform-tech_support-field_notified_to */     ),
  /* entityform-tech_support-field_notified_to */   ),
  /* entityform-tech_support-field_notified_to */   'entity_type' => 'entityform',
  /* entityform-tech_support-field_notified_to */   'fences_wrapper' => 'div',
  /* entityform-tech_support-field_notified_to */   'field_name' => 'field_notified_to',
  /* entityform-tech_support-field_notified_to */   'label' => 'Notified to',
  /* entityform-tech_support-field_notified_to */   'required' => 0,
  /* entityform-tech_support-field_notified_to */   'settings' => array(
  /* entityform-tech_support-field_notified_to */     'better_formats' => array(
  /* entityform-tech_support-field_notified_to */       'allowed_formats' => array(
  /* entityform-tech_support-field_notified_to */         'filtered_html' => 'filtered_html',
  /* entityform-tech_support-field_notified_to */         'full_html' => 'full_html',
  /* entityform-tech_support-field_notified_to */         'plain_text' => 'plain_text',
  /* entityform-tech_support-field_notified_to */       ),
  /* entityform-tech_support-field_notified_to */       'allowed_formats_toggle' => 0,
  /* entityform-tech_support-field_notified_to */       'default_order_toggle' => 0,
  /* entityform-tech_support-field_notified_to */       'default_order_wrapper' => array(
  /* entityform-tech_support-field_notified_to */         'formats' => array(
  /* entityform-tech_support-field_notified_to */           'filtered_html' => array(
  /* entityform-tech_support-field_notified_to */             'weight' => -10,
  /* entityform-tech_support-field_notified_to */           ),
  /* entityform-tech_support-field_notified_to */           'full_html' => array(
  /* entityform-tech_support-field_notified_to */             'weight' => -8,
  /* entityform-tech_support-field_notified_to */           ),
  /* entityform-tech_support-field_notified_to */           'plain_text' => array(
  /* entityform-tech_support-field_notified_to */             'weight' => -9,
  /* entityform-tech_support-field_notified_to */           ),
  /* entityform-tech_support-field_notified_to */         ),
  /* entityform-tech_support-field_notified_to */       ),
  /* entityform-tech_support-field_notified_to */     ),
  /* entityform-tech_support-field_notified_to */     'text_processing' => 0,
  /* entityform-tech_support-field_notified_to */     'user_register_form' => FALSE,
  /* entityform-tech_support-field_notified_to */   ),
  /* entityform-tech_support-field_notified_to */   'widget' => array(
  /* entityform-tech_support-field_notified_to */     'active' => 1,
  /* entityform-tech_support-field_notified_to */     'module' => 'text',
  /* entityform-tech_support-field_notified_to */     'settings' => array(
  /* entityform-tech_support-field_notified_to */       'rows' => 5,
  /* entityform-tech_support-field_notified_to */     ),
  /* entityform-tech_support-field_notified_to */     'type' => 'text_textarea',
  /* entityform-tech_support-field_notified_to */     'weight' => 9,
  /* entityform-tech_support-field_notified_to */   ),
  /* entityform-tech_support-field_notified_to */ );

  // Exported field_instance: 'entityform-tech_support-field_organization'.
  $field_instances['entityform-tech_support-field_organization'] = array(
  /* entityform-tech_support-field_organization */   'bundle' => 'tech_support',
  /* entityform-tech_support-field_organization */   'default_value' => NULL,
  /* entityform-tech_support-field_organization */   'default_value_function' => '',
  /* entityform-tech_support-field_organization */   'deleted' => 0,
  /* entityform-tech_support-field_organization */   'description' => '',
  /* entityform-tech_support-field_organization */   'display' => array(
  /* entityform-tech_support-field_organization */     'default' => array(
  /* entityform-tech_support-field_organization */       'label' => 'above',
  /* entityform-tech_support-field_organization */       'module' => 'entityreference',
  /* entityform-tech_support-field_organization */       'settings' => array(
  /* entityform-tech_support-field_organization */         'field_formatter_class' => '',
  /* entityform-tech_support-field_organization */         'link' => FALSE,
  /* entityform-tech_support-field_organization */       ),
  /* entityform-tech_support-field_organization */       'type' => 'entityreference_label',
  /* entityform-tech_support-field_organization */       'weight' => 6,
  /* entityform-tech_support-field_organization */     ),
  /* entityform-tech_support-field_organization */     'week' => array(
  /* entityform-tech_support-field_organization */       'label' => 'above',
  /* entityform-tech_support-field_organization */       'settings' => array(),
  /* entityform-tech_support-field_organization */       'type' => 'hidden',
  /* entityform-tech_support-field_organization */       'weight' => 0,
  /* entityform-tech_support-field_organization */     ),
  /* entityform-tech_support-field_organization */   ),
  /* entityform-tech_support-field_organization */   'entity_type' => 'entityform',
  /* entityform-tech_support-field_organization */   'fences_wrapper' => 'div',
  /* entityform-tech_support-field_organization */   'field_name' => 'field_organization',
  /* entityform-tech_support-field_organization */   'label' => 'Organization',
  /* entityform-tech_support-field_organization */   'required' => 0,
  /* entityform-tech_support-field_organization */   'settings' => array(
  /* entityform-tech_support-field_organization */     'behaviors' => array(
  /* entityform-tech_support-field_organization */       'prepopulate' => array(
  /* entityform-tech_support-field_organization */         'status' => 0,
  /* entityform-tech_support-field_organization */       ),
  /* entityform-tech_support-field_organization */     ),
  /* entityform-tech_support-field_organization */     'user_register_form' => FALSE,
  /* entityform-tech_support-field_organization */   ),
  /* entityform-tech_support-field_organization */   'widget' => array(
  /* entityform-tech_support-field_organization */     'active' => 1,
  /* entityform-tech_support-field_organization */     'module' => 'options',
  /* entityform-tech_support-field_organization */     'settings' => array(
  /* entityform-tech_support-field_organization */       'apply_chosen' => '',
  /* entityform-tech_support-field_organization */     ),
  /* entityform-tech_support-field_organization */     'type' => 'options_select',
  /* entityform-tech_support-field_organization */     'weight' => 8,
  /* entityform-tech_support-field_organization */   ),
  /* entityform-tech_support-field_organization */ );

  // Exported field_instance: 'entityform-tech_support-field_status'.
  $field_instances['entityform-tech_support-field_status'] = array(
  /* entityform-tech_support-field_status */   'bundle' => 'tech_support',
  /* entityform-tech_support-field_status */   'default_value' => array(
  /* entityform-tech_support-field_status */     0 => array(
  /* entityform-tech_support-field_status */       'value' => 0,
  /* entityform-tech_support-field_status */     ),
  /* entityform-tech_support-field_status */   ),
  /* entityform-tech_support-field_status */   'deleted' => 0,
  /* entityform-tech_support-field_status */   'description' => '',
  /* entityform-tech_support-field_status */   'display' => array(
  /* entityform-tech_support-field_status */     'default' => array(
  /* entityform-tech_support-field_status */       'label' => 'above',
  /* entityform-tech_support-field_status */       'settings' => array(),
  /* entityform-tech_support-field_status */       'type' => 'hidden',
  /* entityform-tech_support-field_status */       'weight' => 5,
  /* entityform-tech_support-field_status */     ),
  /* entityform-tech_support-field_status */     'week' => array(
  /* entityform-tech_support-field_status */       'label' => 'above',
  /* entityform-tech_support-field_status */       'settings' => array(),
  /* entityform-tech_support-field_status */       'type' => 'hidden',
  /* entityform-tech_support-field_status */       'weight' => 0,
  /* entityform-tech_support-field_status */     ),
  /* entityform-tech_support-field_status */   ),
  /* entityform-tech_support-field_status */   'entity_type' => 'entityform',
  /* entityform-tech_support-field_status */   'fences_wrapper' => 'no_wrapper',
  /* entityform-tech_support-field_status */   'field_name' => 'field_status',
  /* entityform-tech_support-field_status */   'label' => 'Status',
  /* entityform-tech_support-field_status */   'required' => 1,
  /* entityform-tech_support-field_status */   'settings' => array(
  /* entityform-tech_support-field_status */     'user_field_privacy' => FALSE,
  /* entityform-tech_support-field_status */     'user_register_form' => FALSE,
  /* entityform-tech_support-field_status */   ),
  /* entityform-tech_support-field_status */   'widget' => array(
  /* entityform-tech_support-field_status */     'active' => 1,
  /* entityform-tech_support-field_status */     'module' => 'options',
  /* entityform-tech_support-field_status */     'settings' => array(
  /* entityform-tech_support-field_status */       'apply_chosen' => '',
  /* entityform-tech_support-field_status */     ),
  /* entityform-tech_support-field_status */     'type' => 'options_select',
  /* entityform-tech_support-field_status */     'weight' => 7,
  /* entityform-tech_support-field_status */   ),
  /* entityform-tech_support-field_status */ );

  // Translatables
  // Included for use with string extractors like potx.
  t('Additional Comments/Remarks');
  t('Family Name');
  t('Given Name');
  t('How can we help you?');
  t('Notified to');
  t('Organization');
  t('Status');
  t('Your email Address');

  return $field_instances;
}
