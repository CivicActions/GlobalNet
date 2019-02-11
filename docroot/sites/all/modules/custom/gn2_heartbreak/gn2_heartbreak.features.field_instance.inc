<?php
/**
 * @file
 * gn2_heartbreak.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function gn2_heartbreak_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'comment-comment_node_media_gallery-comment_body'.
  $field_instances['comment-comment_node_media_gallery-comment_body'] = array(
  /* comment-comment_node_media_gallery-comment_body */   'bundle' => 'comment_node_media_gallery',
  /* comment-comment_node_media_gallery-comment_body */   'default_value' => NULL,
  /* comment-comment_node_media_gallery-comment_body */   'deleted' => 0,
  /* comment-comment_node_media_gallery-comment_body */   'description' => '',
  /* comment-comment_node_media_gallery-comment_body */   'display' => array(
  /* comment-comment_node_media_gallery-comment_body */     'default' => array(
  /* comment-comment_node_media_gallery-comment_body */       'label' => 'hidden',
  /* comment-comment_node_media_gallery-comment_body */       'module' => 'text',
  /* comment-comment_node_media_gallery-comment_body */       'settings' => array(
  /* comment-comment_node_media_gallery-comment_body */         'field_formatter_class' => '',
  /* comment-comment_node_media_gallery-comment_body */       ),
  /* comment-comment_node_media_gallery-comment_body */       'type' => 'text_default',
  /* comment-comment_node_media_gallery-comment_body */       'weight' => 0,
  /* comment-comment_node_media_gallery-comment_body */     ),
  /* comment-comment_node_media_gallery-comment_body */   ),
  /* comment-comment_node_media_gallery-comment_body */   'entity_type' => 'comment',
  /* comment-comment_node_media_gallery-comment_body */   'field_name' => 'comment_body',
  /* comment-comment_node_media_gallery-comment_body */   'label' => 'Comment',
  /* comment-comment_node_media_gallery-comment_body */   'required' => TRUE,
  /* comment-comment_node_media_gallery-comment_body */   'settings' => array(
  /* comment-comment_node_media_gallery-comment_body */     'text_processing' => 1,
  /* comment-comment_node_media_gallery-comment_body */     'user_field_privacy' => FALSE,
  /* comment-comment_node_media_gallery-comment_body */     'user_register_form' => FALSE,
  /* comment-comment_node_media_gallery-comment_body */   ),
  /* comment-comment_node_media_gallery-comment_body */   'widget' => array(
  /* comment-comment_node_media_gallery-comment_body */     'module' => 'text',
  /* comment-comment_node_media_gallery-comment_body */     'settings' => array(
  /* comment-comment_node_media_gallery-comment_body */       'rows' => 5,
  /* comment-comment_node_media_gallery-comment_body */     ),
  /* comment-comment_node_media_gallery-comment_body */     'type' => 'text_textarea',
  /* comment-comment_node_media_gallery-comment_body */     'weight' => 0,
  /* comment-comment_node_media_gallery-comment_body */   ),
  /* comment-comment_node_media_gallery-comment_body */ );

  // Exported field_instance: 'entityform-join_org-field_organization'.
  $field_instances['entityform-join_org-field_organization'] = array(
  /* entityform-join_org-field_organization */   'bundle' => 'join_org',
  /* entityform-join_org-field_organization */   'default_value' => NULL,
  /* entityform-join_org-field_organization */   'default_value_function' => '',
  /* entityform-join_org-field_organization */   'deleted' => 0,
  /* entityform-join_org-field_organization */   'description' => '',
  /* entityform-join_org-field_organization */   'display' => array(
  /* entityform-join_org-field_organization */     'default' => array(
  /* entityform-join_org-field_organization */       'label' => 'above',
  /* entityform-join_org-field_organization */       'module' => 'entityreference',
  /* entityform-join_org-field_organization */       'settings' => array(
  /* entityform-join_org-field_organization */         'field_formatter_class' => '',
  /* entityform-join_org-field_organization */         'link' => FALSE,
  /* entityform-join_org-field_organization */       ),
  /* entityform-join_org-field_organization */       'type' => 'entityreference_label',
  /* entityform-join_org-field_organization */       'weight' => 8,
  /* entityform-join_org-field_organization */     ),
  /* entityform-join_org-field_organization */     'week' => array(
  /* entityform-join_org-field_organization */       'label' => 'above',
  /* entityform-join_org-field_organization */       'settings' => array(),
  /* entityform-join_org-field_organization */       'type' => 'hidden',
  /* entityform-join_org-field_organization */       'weight' => 0,
  /* entityform-join_org-field_organization */     ),
  /* entityform-join_org-field_organization */   ),
  /* entityform-join_org-field_organization */   'entity_type' => 'entityform',
  /* entityform-join_org-field_organization */   'fences_wrapper' => 'no_wrapper',
  /* entityform-join_org-field_organization */   'field_name' => 'field_organization',
  /* entityform-join_org-field_organization */   'label' => 'Organization',
  /* entityform-join_org-field_organization */   'required' => 0,
  /* entityform-join_org-field_organization */   'settings' => array(
  /* entityform-join_org-field_organization */     'behaviors' => array(
  /* entityform-join_org-field_organization */       'prepopulate' => array(
  /* entityform-join_org-field_organization */         'status' => 0,
  /* entityform-join_org-field_organization */       ),
  /* entityform-join_org-field_organization */     ),
  /* entityform-join_org-field_organization */     'user_field_privacy' => FALSE,
  /* entityform-join_org-field_organization */     'user_register_form' => FALSE,
  /* entityform-join_org-field_organization */   ),
  /* entityform-join_org-field_organization */   'widget' => array(
  /* entityform-join_org-field_organization */     'active' => 1,
  /* entityform-join_org-field_organization */     'module' => 'options',
  /* entityform-join_org-field_organization */     'settings' => array(
  /* entityform-join_org-field_organization */       'apply_chosen' => '',
  /* entityform-join_org-field_organization */       'label_help_description' => '',
  /* entityform-join_org-field_organization */     ),
  /* entityform-join_org-field_organization */     'type' => 'options_select',
  /* entityform-join_org-field_organization */     'weight' => 47,
  /* entityform-join_org-field_organization */   ),
  /* entityform-join_org-field_organization */ );

  // Exported field_instance: 'entityform-join_org-field_status'.
  $field_instances['entityform-join_org-field_status'] = array(
  /* entityform-join_org-field_status */   'bundle' => 'join_org',
  /* entityform-join_org-field_status */   'default_value' => array(
  /* entityform-join_org-field_status */     0 => array(
  /* entityform-join_org-field_status */       'value' => 0,
  /* entityform-join_org-field_status */     ),
  /* entityform-join_org-field_status */   ),
  /* entityform-join_org-field_status */   'deleted' => 0,
  /* entityform-join_org-field_status */   'description' => '',
  /* entityform-join_org-field_status */   'display' => array(
  /* entityform-join_org-field_status */     'default' => array(
  /* entityform-join_org-field_status */       'label' => 'above',
  /* entityform-join_org-field_status */       'module' => 'list',
  /* entityform-join_org-field_status */       'settings' => array(
  /* entityform-join_org-field_status */         'field_formatter_class' => '',
  /* entityform-join_org-field_status */       ),
  /* entityform-join_org-field_status */       'type' => 'list_default',
  /* entityform-join_org-field_status */       'weight' => 9,
  /* entityform-join_org-field_status */     ),
  /* entityform-join_org-field_status */     'week' => array(
  /* entityform-join_org-field_status */       'label' => 'above',
  /* entityform-join_org-field_status */       'settings' => array(),
  /* entityform-join_org-field_status */       'type' => 'hidden',
  /* entityform-join_org-field_status */       'weight' => 0,
  /* entityform-join_org-field_status */     ),
  /* entityform-join_org-field_status */   ),
  /* entityform-join_org-field_status */   'entity_type' => 'entityform',
  /* entityform-join_org-field_status */   'fences_wrapper' => 'no_wrapper',
  /* entityform-join_org-field_status */   'field_name' => 'field_status',
  /* entityform-join_org-field_status */   'label' => 'Status',
  /* entityform-join_org-field_status */   'required' => 0,
  /* entityform-join_org-field_status */   'settings' => array(
  /* entityform-join_org-field_status */     'user_field_privacy' => FALSE,
  /* entityform-join_org-field_status */     'user_register_form' => FALSE,
  /* entityform-join_org-field_status */   ),
  /* entityform-join_org-field_status */   'widget' => array(
  /* entityform-join_org-field_status */     'active' => 1,
  /* entityform-join_org-field_status */     'module' => 'options',
  /* entityform-join_org-field_status */     'settings' => array(
  /* entityform-join_org-field_status */       'apply_chosen' => '',
  /* entityform-join_org-field_status */       'label_help_description' => '',
  /* entityform-join_org-field_status */     ),
  /* entityform-join_org-field_status */     'type' => 'options_select',
  /* entityform-join_org-field_status */     'weight' => 49,
  /* entityform-join_org-field_status */   ),
  /* entityform-join_org-field_status */ );

  // Exported field_instance: 'entityform-join_org-field_which_course'.
  $field_instances['entityform-join_org-field_which_course'] = array(
  /* entityform-join_org-field_which_course */   'bundle' => 'join_org',
  /* entityform-join_org-field_which_course */   'default_value' => NULL,
  /* entityform-join_org-field_which_course */   'deleted' => 0,
  /* entityform-join_org-field_which_course */   'description' => '',
  /* entityform-join_org-field_which_course */   'display' => array(
  /* entityform-join_org-field_which_course */     'default' => array(
  /* entityform-join_org-field_which_course */       'label' => 'above',
  /* entityform-join_org-field_which_course */       'module' => 'text',
  /* entityform-join_org-field_which_course */       'settings' => array(
  /* entityform-join_org-field_which_course */         'field_formatter_class' => '',
  /* entityform-join_org-field_which_course */       ),
  /* entityform-join_org-field_which_course */       'type' => 'text_default',
  /* entityform-join_org-field_which_course */       'weight' => 1,
  /* entityform-join_org-field_which_course */     ),
  /* entityform-join_org-field_which_course */     'week' => array(
  /* entityform-join_org-field_which_course */       'label' => 'above',
  /* entityform-join_org-field_which_course */       'settings' => array(),
  /* entityform-join_org-field_which_course */       'type' => 'hidden',
  /* entityform-join_org-field_which_course */       'weight' => 0,
  /* entityform-join_org-field_which_course */     ),
  /* entityform-join_org-field_which_course */   ),
  /* entityform-join_org-field_which_course */   'entity_type' => 'entityform',
  /* entityform-join_org-field_which_course */   'fences_wrapper' => 'no_wrapper',
  /* entityform-join_org-field_which_course */   'field_name' => 'field_which_course',
  /* entityform-join_org-field_which_course */   'label' => 'Which course will you be attending?',
  /* entityform-join_org-field_which_course */   'required' => 0,
  /* entityform-join_org-field_which_course */   'settings' => array(
  /* entityform-join_org-field_which_course */     'better_formats' => array(
  /* entityform-join_org-field_which_course */       'allowed_formats' => array(
  /* entityform-join_org-field_which_course */         'filtered_html' => 'filtered_html',
  /* entityform-join_org-field_which_course */         'full_html' => 'full_html',
  /* entityform-join_org-field_which_course */         'plain_text' => 'plain_text',
  /* entityform-join_org-field_which_course */       ),
  /* entityform-join_org-field_which_course */       'allowed_formats_toggle' => 0,
  /* entityform-join_org-field_which_course */       'default_order_toggle' => 0,
  /* entityform-join_org-field_which_course */       'default_order_wrapper' => array(
  /* entityform-join_org-field_which_course */         'formats' => array(
  /* entityform-join_org-field_which_course */           'filtered_html' => array(
  /* entityform-join_org-field_which_course */             'weight' => -10,
  /* entityform-join_org-field_which_course */           ),
  /* entityform-join_org-field_which_course */           'full_html' => array(
  /* entityform-join_org-field_which_course */             'weight' => -8,
  /* entityform-join_org-field_which_course */           ),
  /* entityform-join_org-field_which_course */           'plain_text' => array(
  /* entityform-join_org-field_which_course */             'weight' => -9,
  /* entityform-join_org-field_which_course */           ),
  /* entityform-join_org-field_which_course */         ),
  /* entityform-join_org-field_which_course */       ),
  /* entityform-join_org-field_which_course */     ),
  /* entityform-join_org-field_which_course */     'text_processing' => 0,
  /* entityform-join_org-field_which_course */     'user_field_privacy' => FALSE,
  /* entityform-join_org-field_which_course */     'user_register_form' => FALSE,
  /* entityform-join_org-field_which_course */   ),
  /* entityform-join_org-field_which_course */   'widget' => array(
  /* entityform-join_org-field_which_course */     'active' => 1,
  /* entityform-join_org-field_which_course */     'module' => 'text',
  /* entityform-join_org-field_which_course */     'settings' => array(
  /* entityform-join_org-field_which_course */       'label_help_description' => '',
  /* entityform-join_org-field_which_course */       'size' => 60,
  /* entityform-join_org-field_which_course */     ),
  /* entityform-join_org-field_which_course */     'type' => 'text_textfield',
  /* entityform-join_org-field_which_course */     'weight' => 34,
  /* entityform-join_org-field_which_course */   ),
  /* entityform-join_org-field_which_course */ );

  // Exported field_instance: 'entityform-join_org-field_which_course_did_you'.
  $field_instances['entityform-join_org-field_which_course_did_you'] = array(
  /* entityform-join_org-field_which_course_did_you */   'bundle' => 'join_org',
  /* entityform-join_org-field_which_course_did_you */   'default_value' => NULL,
  /* entityform-join_org-field_which_course_did_you */   'deleted' => 0,
  /* entityform-join_org-field_which_course_did_you */   'description' => '',
  /* entityform-join_org-field_which_course_did_you */   'display' => array(
  /* entityform-join_org-field_which_course_did_you */     'default' => array(
  /* entityform-join_org-field_which_course_did_you */       'label' => 'above',
  /* entityform-join_org-field_which_course_did_you */       'module' => 'text',
  /* entityform-join_org-field_which_course_did_you */       'settings' => array(
  /* entityform-join_org-field_which_course_did_you */         'field_formatter_class' => '',
  /* entityform-join_org-field_which_course_did_you */       ),
  /* entityform-join_org-field_which_course_did_you */       'type' => 'text_default',
  /* entityform-join_org-field_which_course_did_you */       'weight' => 5,
  /* entityform-join_org-field_which_course_did_you */     ),
  /* entityform-join_org-field_which_course_did_you */     'week' => array(
  /* entityform-join_org-field_which_course_did_you */       'label' => 'above',
  /* entityform-join_org-field_which_course_did_you */       'settings' => array(),
  /* entityform-join_org-field_which_course_did_you */       'type' => 'hidden',
  /* entityform-join_org-field_which_course_did_you */       'weight' => 0,
  /* entityform-join_org-field_which_course_did_you */     ),
  /* entityform-join_org-field_which_course_did_you */   ),
  /* entityform-join_org-field_which_course_did_you */   'entity_type' => 'entityform',
  /* entityform-join_org-field_which_course_did_you */   'fences_wrapper' => 'no_wrapper',
  /* entityform-join_org-field_which_course_did_you */   'field_name' => 'field_which_course_did_you',
  /* entityform-join_org-field_which_course_did_you */   'label' => 'Which course did you attend?',
  /* entityform-join_org-field_which_course_did_you */   'required' => 0,
  /* entityform-join_org-field_which_course_did_you */   'settings' => array(
  /* entityform-join_org-field_which_course_did_you */     'better_formats' => array(
  /* entityform-join_org-field_which_course_did_you */       'allowed_formats' => array(
  /* entityform-join_org-field_which_course_did_you */         'filtered_html' => 'filtered_html',
  /* entityform-join_org-field_which_course_did_you */         'full_html' => 'full_html',
  /* entityform-join_org-field_which_course_did_you */         'plain_text' => 'plain_text',
  /* entityform-join_org-field_which_course_did_you */       ),
  /* entityform-join_org-field_which_course_did_you */       'allowed_formats_toggle' => 0,
  /* entityform-join_org-field_which_course_did_you */       'default_order_toggle' => 0,
  /* entityform-join_org-field_which_course_did_you */       'default_order_wrapper' => array(
  /* entityform-join_org-field_which_course_did_you */         'formats' => array(
  /* entityform-join_org-field_which_course_did_you */           'filtered_html' => array(
  /* entityform-join_org-field_which_course_did_you */             'weight' => -10,
  /* entityform-join_org-field_which_course_did_you */           ),
  /* entityform-join_org-field_which_course_did_you */           'full_html' => array(
  /* entityform-join_org-field_which_course_did_you */             'weight' => -8,
  /* entityform-join_org-field_which_course_did_you */           ),
  /* entityform-join_org-field_which_course_did_you */           'plain_text' => array(
  /* entityform-join_org-field_which_course_did_you */             'weight' => -9,
  /* entityform-join_org-field_which_course_did_you */           ),
  /* entityform-join_org-field_which_course_did_you */         ),
  /* entityform-join_org-field_which_course_did_you */       ),
  /* entityform-join_org-field_which_course_did_you */     ),
  /* entityform-join_org-field_which_course_did_you */     'text_processing' => 0,
  /* entityform-join_org-field_which_course_did_you */     'user_field_privacy' => FALSE,
  /* entityform-join_org-field_which_course_did_you */     'user_register_form' => FALSE,
  /* entityform-join_org-field_which_course_did_you */   ),
  /* entityform-join_org-field_which_course_did_you */   'widget' => array(
  /* entityform-join_org-field_which_course_did_you */     'active' => 1,
  /* entityform-join_org-field_which_course_did_you */     'module' => 'text',
  /* entityform-join_org-field_which_course_did_you */     'settings' => array(
  /* entityform-join_org-field_which_course_did_you */       'label_help_description' => '',
  /* entityform-join_org-field_which_course_did_you */       'size' => 60,
  /* entityform-join_org-field_which_course_did_you */     ),
  /* entityform-join_org-field_which_course_did_you */     'type' => 'text_textfield',
  /* entityform-join_org-field_which_course_did_you */     'weight' => 42,
  /* entityform-join_org-field_which_course_did_you */   ),
  /* entityform-join_org-field_which_course_did_you */ );

  // Exported field_instance: 'entityform-join_org-field_which_course_teach'.
  $field_instances['entityform-join_org-field_which_course_teach'] = array(
  /* entityform-join_org-field_which_course_teach */   'bundle' => 'join_org',
  /* entityform-join_org-field_which_course_teach */   'default_value' => NULL,
  /* entityform-join_org-field_which_course_teach */   'deleted' => 0,
  /* entityform-join_org-field_which_course_teach */   'description' => '',
  /* entityform-join_org-field_which_course_teach */   'display' => array(
  /* entityform-join_org-field_which_course_teach */     'default' => array(
  /* entityform-join_org-field_which_course_teach */       'label' => 'above',
  /* entityform-join_org-field_which_course_teach */       'module' => 'text',
  /* entityform-join_org-field_which_course_teach */       'settings' => array(
  /* entityform-join_org-field_which_course_teach */         'field_formatter_class' => '',
  /* entityform-join_org-field_which_course_teach */       ),
  /* entityform-join_org-field_which_course_teach */       'type' => 'text_default',
  /* entityform-join_org-field_which_course_teach */       'weight' => 3,
  /* entityform-join_org-field_which_course_teach */     ),
  /* entityform-join_org-field_which_course_teach */     'week' => array(
  /* entityform-join_org-field_which_course_teach */       'label' => 'above',
  /* entityform-join_org-field_which_course_teach */       'settings' => array(),
  /* entityform-join_org-field_which_course_teach */       'type' => 'hidden',
  /* entityform-join_org-field_which_course_teach */       'weight' => 0,
  /* entityform-join_org-field_which_course_teach */     ),
  /* entityform-join_org-field_which_course_teach */   ),
  /* entityform-join_org-field_which_course_teach */   'entity_type' => 'entityform',
  /* entityform-join_org-field_which_course_teach */   'fences_wrapper' => 'no_wrapper',
  /* entityform-join_org-field_which_course_teach */   'field_name' => 'field_which_course_teach',
  /* entityform-join_org-field_which_course_teach */   'label' => 'Which course will you be teaching?',
  /* entityform-join_org-field_which_course_teach */   'required' => 0,
  /* entityform-join_org-field_which_course_teach */   'settings' => array(
  /* entityform-join_org-field_which_course_teach */     'better_formats' => array(
  /* entityform-join_org-field_which_course_teach */       'allowed_formats' => array(
  /* entityform-join_org-field_which_course_teach */         'filtered_html' => 'filtered_html',
  /* entityform-join_org-field_which_course_teach */         'full_html' => 'full_html',
  /* entityform-join_org-field_which_course_teach */         'plain_text' => 'plain_text',
  /* entityform-join_org-field_which_course_teach */       ),
  /* entityform-join_org-field_which_course_teach */       'allowed_formats_toggle' => 0,
  /* entityform-join_org-field_which_course_teach */       'default_order_toggle' => 0,
  /* entityform-join_org-field_which_course_teach */       'default_order_wrapper' => array(
  /* entityform-join_org-field_which_course_teach */         'formats' => array(
  /* entityform-join_org-field_which_course_teach */           'filtered_html' => array(
  /* entityform-join_org-field_which_course_teach */             'weight' => -10,
  /* entityform-join_org-field_which_course_teach */           ),
  /* entityform-join_org-field_which_course_teach */           'full_html' => array(
  /* entityform-join_org-field_which_course_teach */             'weight' => -8,
  /* entityform-join_org-field_which_course_teach */           ),
  /* entityform-join_org-field_which_course_teach */           'plain_text' => array(
  /* entityform-join_org-field_which_course_teach */             'weight' => -9,
  /* entityform-join_org-field_which_course_teach */           ),
  /* entityform-join_org-field_which_course_teach */         ),
  /* entityform-join_org-field_which_course_teach */       ),
  /* entityform-join_org-field_which_course_teach */     ),
  /* entityform-join_org-field_which_course_teach */     'text_processing' => 0,
  /* entityform-join_org-field_which_course_teach */     'user_field_privacy' => FALSE,
  /* entityform-join_org-field_which_course_teach */     'user_register_form' => FALSE,
  /* entityform-join_org-field_which_course_teach */   ),
  /* entityform-join_org-field_which_course_teach */   'widget' => array(
  /* entityform-join_org-field_which_course_teach */     'active' => 1,
  /* entityform-join_org-field_which_course_teach */     'module' => 'text',
  /* entityform-join_org-field_which_course_teach */     'settings' => array(
  /* entityform-join_org-field_which_course_teach */       'label_help_description' => '',
  /* entityform-join_org-field_which_course_teach */       'size' => 60,
  /* entityform-join_org-field_which_course_teach */     ),
  /* entityform-join_org-field_which_course_teach */     'type' => 'text_textfield',
  /* entityform-join_org-field_which_course_teach */     'weight' => 38,
  /* entityform-join_org-field_which_course_teach */   ),
  /* entityform-join_org-field_which_course_teach */ );

  // Exported field_instance: 'entityform-join_org-field_which_event_attend'.
  $field_instances['entityform-join_org-field_which_event_attend'] = array(
  /* entityform-join_org-field_which_event_attend */   'bundle' => 'join_org',
  /* entityform-join_org-field_which_event_attend */   'default_value' => NULL,
  /* entityform-join_org-field_which_event_attend */   'deleted' => 0,
  /* entityform-join_org-field_which_event_attend */   'description' => '',
  /* entityform-join_org-field_which_event_attend */   'display' => array(
  /* entityform-join_org-field_which_event_attend */     'default' => array(
  /* entityform-join_org-field_which_event_attend */       'label' => 'above',
  /* entityform-join_org-field_which_event_attend */       'module' => 'text',
  /* entityform-join_org-field_which_event_attend */       'settings' => array(
  /* entityform-join_org-field_which_event_attend */         'field_formatter_class' => '',
  /* entityform-join_org-field_which_event_attend */       ),
  /* entityform-join_org-field_which_event_attend */       'type' => 'text_default',
  /* entityform-join_org-field_which_event_attend */       'weight' => 4,
  /* entityform-join_org-field_which_event_attend */     ),
  /* entityform-join_org-field_which_event_attend */     'week' => array(
  /* entityform-join_org-field_which_event_attend */       'label' => 'above',
  /* entityform-join_org-field_which_event_attend */       'settings' => array(),
  /* entityform-join_org-field_which_event_attend */       'type' => 'hidden',
  /* entityform-join_org-field_which_event_attend */       'weight' => 0,
  /* entityform-join_org-field_which_event_attend */     ),
  /* entityform-join_org-field_which_event_attend */   ),
  /* entityform-join_org-field_which_event_attend */   'entity_type' => 'entityform',
  /* entityform-join_org-field_which_event_attend */   'fences_wrapper' => 'no_wrapper',
  /* entityform-join_org-field_which_event_attend */   'field_name' => 'field_which_event_attend',
  /* entityform-join_org-field_which_event_attend */   'label' => 'Which event will you be attending?',
  /* entityform-join_org-field_which_event_attend */   'required' => 0,
  /* entityform-join_org-field_which_event_attend */   'settings' => array(
  /* entityform-join_org-field_which_event_attend */     'better_formats' => array(
  /* entityform-join_org-field_which_event_attend */       'allowed_formats' => array(
  /* entityform-join_org-field_which_event_attend */         'filtered_html' => 'filtered_html',
  /* entityform-join_org-field_which_event_attend */         'full_html' => 'full_html',
  /* entityform-join_org-field_which_event_attend */         'plain_text' => 'plain_text',
  /* entityform-join_org-field_which_event_attend */       ),
  /* entityform-join_org-field_which_event_attend */       'allowed_formats_toggle' => 0,
  /* entityform-join_org-field_which_event_attend */       'default_order_toggle' => 0,
  /* entityform-join_org-field_which_event_attend */       'default_order_wrapper' => array(
  /* entityform-join_org-field_which_event_attend */         'formats' => array(
  /* entityform-join_org-field_which_event_attend */           'filtered_html' => array(
  /* entityform-join_org-field_which_event_attend */             'weight' => -10,
  /* entityform-join_org-field_which_event_attend */           ),
  /* entityform-join_org-field_which_event_attend */           'full_html' => array(
  /* entityform-join_org-field_which_event_attend */             'weight' => -8,
  /* entityform-join_org-field_which_event_attend */           ),
  /* entityform-join_org-field_which_event_attend */           'plain_text' => array(
  /* entityform-join_org-field_which_event_attend */             'weight' => -9,
  /* entityform-join_org-field_which_event_attend */           ),
  /* entityform-join_org-field_which_event_attend */         ),
  /* entityform-join_org-field_which_event_attend */       ),
  /* entityform-join_org-field_which_event_attend */     ),
  /* entityform-join_org-field_which_event_attend */     'text_processing' => 0,
  /* entityform-join_org-field_which_event_attend */     'user_field_privacy' => FALSE,
  /* entityform-join_org-field_which_event_attend */     'user_register_form' => FALSE,
  /* entityform-join_org-field_which_event_attend */   ),
  /* entityform-join_org-field_which_event_attend */   'widget' => array(
  /* entityform-join_org-field_which_event_attend */     'active' => 1,
  /* entityform-join_org-field_which_event_attend */     'module' => 'text',
  /* entityform-join_org-field_which_event_attend */     'settings' => array(
  /* entityform-join_org-field_which_event_attend */       'label_help_description' => '',
  /* entityform-join_org-field_which_event_attend */       'size' => 60,
  /* entityform-join_org-field_which_event_attend */     ),
  /* entityform-join_org-field_which_event_attend */     'type' => 'text_textfield',
  /* entityform-join_org-field_which_event_attend */     'weight' => 40,
  /* entityform-join_org-field_which_event_attend */   ),
  /* entityform-join_org-field_which_event_attend */ );

  // Exported field_instance: 'entityform-join_org-field_who_teaches'.
  $field_instances['entityform-join_org-field_who_teaches'] = array(
  /* entityform-join_org-field_who_teaches */   'bundle' => 'join_org',
  /* entityform-join_org-field_who_teaches */   'default_value' => NULL,
  /* entityform-join_org-field_who_teaches */   'deleted' => 0,
  /* entityform-join_org-field_who_teaches */   'description' => '',
  /* entityform-join_org-field_who_teaches */   'display' => array(
  /* entityform-join_org-field_who_teaches */     'default' => array(
  /* entityform-join_org-field_who_teaches */       'label' => 'above',
  /* entityform-join_org-field_who_teaches */       'module' => 'text',
  /* entityform-join_org-field_who_teaches */       'settings' => array(
  /* entityform-join_org-field_who_teaches */         'field_formatter_class' => '',
  /* entityform-join_org-field_who_teaches */       ),
  /* entityform-join_org-field_who_teaches */       'type' => 'text_default',
  /* entityform-join_org-field_who_teaches */       'weight' => 2,
  /* entityform-join_org-field_who_teaches */     ),
  /* entityform-join_org-field_who_teaches */     'week' => array(
  /* entityform-join_org-field_who_teaches */       'label' => 'above',
  /* entityform-join_org-field_who_teaches */       'settings' => array(),
  /* entityform-join_org-field_who_teaches */       'type' => 'hidden',
  /* entityform-join_org-field_who_teaches */       'weight' => 0,
  /* entityform-join_org-field_who_teaches */     ),
  /* entityform-join_org-field_who_teaches */   ),
  /* entityform-join_org-field_who_teaches */   'entity_type' => 'entityform',
  /* entityform-join_org-field_who_teaches */   'fences_wrapper' => 'no_wrapper',
  /* entityform-join_org-field_who_teaches */   'field_name' => 'field_who_teaches',
  /* entityform-join_org-field_who_teaches */   'label' => 'Who teaches the course?',
  /* entityform-join_org-field_who_teaches */   'required' => 0,
  /* entityform-join_org-field_who_teaches */   'settings' => array(
  /* entityform-join_org-field_who_teaches */     'better_formats' => array(
  /* entityform-join_org-field_who_teaches */       'allowed_formats' => array(
  /* entityform-join_org-field_who_teaches */         'filtered_html' => 'filtered_html',
  /* entityform-join_org-field_who_teaches */         'full_html' => 'full_html',
  /* entityform-join_org-field_who_teaches */         'plain_text' => 'plain_text',
  /* entityform-join_org-field_who_teaches */       ),
  /* entityform-join_org-field_who_teaches */       'allowed_formats_toggle' => 0,
  /* entityform-join_org-field_who_teaches */       'default_order_toggle' => 0,
  /* entityform-join_org-field_who_teaches */       'default_order_wrapper' => array(
  /* entityform-join_org-field_who_teaches */         'formats' => array(
  /* entityform-join_org-field_who_teaches */           'filtered_html' => array(
  /* entityform-join_org-field_who_teaches */             'weight' => -10,
  /* entityform-join_org-field_who_teaches */           ),
  /* entityform-join_org-field_who_teaches */           'full_html' => array(
  /* entityform-join_org-field_who_teaches */             'weight' => -8,
  /* entityform-join_org-field_who_teaches */           ),
  /* entityform-join_org-field_who_teaches */           'plain_text' => array(
  /* entityform-join_org-field_who_teaches */             'weight' => -9,
  /* entityform-join_org-field_who_teaches */           ),
  /* entityform-join_org-field_who_teaches */         ),
  /* entityform-join_org-field_who_teaches */       ),
  /* entityform-join_org-field_who_teaches */     ),
  /* entityform-join_org-field_who_teaches */     'text_processing' => 0,
  /* entityform-join_org-field_who_teaches */     'user_field_privacy' => FALSE,
  /* entityform-join_org-field_who_teaches */     'user_register_form' => FALSE,
  /* entityform-join_org-field_who_teaches */   ),
  /* entityform-join_org-field_who_teaches */   'widget' => array(
  /* entityform-join_org-field_who_teaches */     'active' => 1,
  /* entityform-join_org-field_who_teaches */     'module' => 'text',
  /* entityform-join_org-field_who_teaches */     'settings' => array(
  /* entityform-join_org-field_who_teaches */       'label_help_description' => '',
  /* entityform-join_org-field_who_teaches */       'size' => 60,
  /* entityform-join_org-field_who_teaches */     ),
  /* entityform-join_org-field_who_teaches */     'type' => 'text_textfield',
  /* entityform-join_org-field_who_teaches */     'weight' => 36,
  /* entityform-join_org-field_who_teaches */   ),
  /* entityform-join_org-field_who_teaches */ );

  // Exported field_instance: 'entityform-join_org-field_why_do_you_want'.
  $field_instances['entityform-join_org-field_why_do_you_want'] = array(
  /* entityform-join_org-field_why_do_you_want */   'bundle' => 'join_org',
  /* entityform-join_org-field_why_do_you_want */   'default_value' => array(
  /* entityform-join_org-field_why_do_you_want */     0 => array(
  /* entityform-join_org-field_why_do_you_want */       'value' => 1,
  /* entityform-join_org-field_why_do_you_want */     ),
  /* entityform-join_org-field_why_do_you_want */   ),
  /* entityform-join_org-field_why_do_you_want */   'deleted' => 0,
  /* entityform-join_org-field_why_do_you_want */   'description' => '',
  /* entityform-join_org-field_why_do_you_want */   'display' => array(
  /* entityform-join_org-field_why_do_you_want */     'default' => array(
  /* entityform-join_org-field_why_do_you_want */       'label' => 'above',
  /* entityform-join_org-field_why_do_you_want */       'module' => 'list',
  /* entityform-join_org-field_why_do_you_want */       'settings' => array(
  /* entityform-join_org-field_why_do_you_want */         'field_formatter_class' => '',
  /* entityform-join_org-field_why_do_you_want */       ),
  /* entityform-join_org-field_why_do_you_want */       'type' => 'list_default',
  /* entityform-join_org-field_why_do_you_want */       'weight' => 0,
  /* entityform-join_org-field_why_do_you_want */     ),
  /* entityform-join_org-field_why_do_you_want */     'week' => array(
  /* entityform-join_org-field_why_do_you_want */       'label' => 'above',
  /* entityform-join_org-field_why_do_you_want */       'settings' => array(),
  /* entityform-join_org-field_why_do_you_want */       'type' => 'hidden',
  /* entityform-join_org-field_why_do_you_want */       'weight' => 0,
  /* entityform-join_org-field_why_do_you_want */     ),
  /* entityform-join_org-field_why_do_you_want */   ),
  /* entityform-join_org-field_why_do_you_want */   'entity_type' => 'entityform',
  /* entityform-join_org-field_why_do_you_want */   'fences_wrapper' => 'no_wrapper',
  /* entityform-join_org-field_why_do_you_want */   'field_name' => 'field_why_do_you_want',
  /* entityform-join_org-field_why_do_you_want */   'label' => 'Why do you want to join this organization?',
  /* entityform-join_org-field_why_do_you_want */   'required' => 1,
  /* entityform-join_org-field_why_do_you_want */   'settings' => array(
  /* entityform-join_org-field_why_do_you_want */     'user_field_privacy' => FALSE,
  /* entityform-join_org-field_why_do_you_want */     'user_register_form' => FALSE,
  /* entityform-join_org-field_why_do_you_want */   ),
  /* entityform-join_org-field_why_do_you_want */   'widget' => array(
  /* entityform-join_org-field_why_do_you_want */     'active' => 1,
  /* entityform-join_org-field_why_do_you_want */     'module' => 'options',
  /* entityform-join_org-field_why_do_you_want */     'settings' => array(
  /* entityform-join_org-field_why_do_you_want */       'apply_chosen' => '',
  /* entityform-join_org-field_why_do_you_want */       'label_help_description' => '',
  /* entityform-join_org-field_why_do_you_want */     ),
  /* entityform-join_org-field_why_do_you_want */     'type' => 'options_select',
  /* entityform-join_org-field_why_do_you_want */     'weight' => 32,
  /* entityform-join_org-field_why_do_you_want */   ),
  /* entityform-join_org-field_why_do_you_want */ );

  // Exported field_instance: 'entityform-session-field_date2'.
  $field_instances['entityform-session-field_date2'] = array(
  /* entityform-session-field_date2 */   'bundle' => 'session',
  /* entityform-session-field_date2 */   'deleted' => 0,
  /* entityform-session-field_date2 */   'description' => 'The date that this week will begin. Week will span seven days including week start day, allowing for seven days to be assigned to this week. A minimum of 1 day should be added.',
  /* entityform-session-field_date2 */   'display' => array(
  /* entityform-session-field_date2 */     'default' => array(
  /* entityform-session-field_date2 */       'label' => 'above',
  /* entityform-session-field_date2 */       'module' => 'date',
  /* entityform-session-field_date2 */       'settings' => array(
  /* entityform-session-field_date2 */         'field_formatter_class' => '',
  /* entityform-session-field_date2 */         'format_type' => 'long',
  /* entityform-session-field_date2 */         'fromto' => 'both',
  /* entityform-session-field_date2 */         'multiple_from' => '',
  /* entityform-session-field_date2 */         'multiple_number' => '',
  /* entityform-session-field_date2 */         'multiple_to' => '',
  /* entityform-session-field_date2 */         'show_repeat_rule' => 'show',
  /* entityform-session-field_date2 */       ),
  /* entityform-session-field_date2 */       'type' => 'date_default',
  /* entityform-session-field_date2 */       'weight' => 3,
  /* entityform-session-field_date2 */     ),
  /* entityform-session-field_date2 */     'full' => array(
  /* entityform-session-field_date2 */       'label' => 'above',
  /* entityform-session-field_date2 */       'settings' => array(),
  /* entityform-session-field_date2 */       'type' => 'hidden',
  /* entityform-session-field_date2 */       'weight' => 0,
  /* entityform-session-field_date2 */     ),
  /* entityform-session-field_date2 */     'week' => array(
  /* entityform-session-field_date2 */       'label' => 'hidden',
  /* entityform-session-field_date2 */       'module' => 'date',
  /* entityform-session-field_date2 */       'settings' => array(
  /* entityform-session-field_date2 */         'field_formatter_class' => '',
  /* entityform-session-field_date2 */         'format_type' => 'long',
  /* entityform-session-field_date2 */         'fromto' => 'both',
  /* entityform-session-field_date2 */         'multiple_from' => '',
  /* entityform-session-field_date2 */         'multiple_number' => '',
  /* entityform-session-field_date2 */         'multiple_to' => '',
  /* entityform-session-field_date2 */         'show_repeat_rule' => 'show',
  /* entityform-session-field_date2 */       ),
  /* entityform-session-field_date2 */       'type' => 'date_default',
  /* entityform-session-field_date2 */       'weight' => 1,
  /* entityform-session-field_date2 */     ),
  /* entityform-session-field_date2 */   ),
  /* entityform-session-field_date2 */   'entity_type' => 'entityform',
  /* entityform-session-field_date2 */   'fences_wrapper' => 'div',
  /* entityform-session-field_date2 */   'field_name' => 'field_date2',
  /* entityform-session-field_date2 */   'label' => 'Date',
  /* entityform-session-field_date2 */   'required' => 1,
  /* entityform-session-field_date2 */   'settings' => array(
  /* entityform-session-field_date2 */     'default_value' => 'now',
  /* entityform-session-field_date2 */     'default_value2' => 'same',
  /* entityform-session-field_date2 */     'default_value_code' => '',
  /* entityform-session-field_date2 */     'default_value_code2' => '',
  /* entityform-session-field_date2 */     'user_register_form' => FALSE,
  /* entityform-session-field_date2 */   ),
  /* entityform-session-field_date2 */   'widget' => array(
  /* entityform-session-field_date2 */     'active' => 1,
  /* entityform-session-field_date2 */     'module' => 'date',
  /* entityform-session-field_date2 */     'settings' => array(
  /* entityform-session-field_date2 */       'increment' => 30,
  /* entityform-session-field_date2 */       'input_format' => 'd M Y - H:i:s',
  /* entityform-session-field_date2 */       'input_format_custom' => '',
  /* entityform-session-field_date2 */       'label_position' => 'above',
  /* entityform-session-field_date2 */       'repeat_collapsed' => 0,
  /* entityform-session-field_date2 */       'text_parts' => array(),
  /* entityform-session-field_date2 */       'year_range' => '-0:+1',
  /* entityform-session-field_date2 */     ),
  /* entityform-session-field_date2 */     'type' => 'date_popup',
  /* entityform-session-field_date2 */     'weight' => 9,
  /* entityform-session-field_date2 */   ),
  /* entityform-session-field_date2 */ );

  // Exported field_instance: 'entityform-session-field_day_association'.
  $field_instances['entityform-session-field_day_association'] = array(
  /* entityform-session-field_day_association */   'bundle' => 'session',
  /* entityform-session-field_day_association */   'default_value' => NULL,
  /* entityform-session-field_day_association */   'default_value_function' => '',
  /* entityform-session-field_day_association */   'deleted' => 0,
  /* entityform-session-field_day_association */   'description' => 'Choose the day with which this unit is associated',
  /* entityform-session-field_day_association */   'display' => array(
  /* entityform-session-field_day_association */     'default' => array(
  /* entityform-session-field_day_association */       'label' => 'above',
  /* entityform-session-field_day_association */       'module' => 'entityreference',
  /* entityform-session-field_day_association */       'settings' => array(
  /* entityform-session-field_day_association */         'field_formatter_class' => '',
  /* entityform-session-field_day_association */         'link' => FALSE,
  /* entityform-session-field_day_association */       ),
  /* entityform-session-field_day_association */       'type' => 'entityreference_label',
  /* entityform-session-field_day_association */       'weight' => 7,
  /* entityform-session-field_day_association */     ),
  /* entityform-session-field_day_association */     'full' => array(
  /* entityform-session-field_day_association */       'label' => 'above',
  /* entityform-session-field_day_association */       'settings' => array(),
  /* entityform-session-field_day_association */       'type' => 'hidden',
  /* entityform-session-field_day_association */       'weight' => 7,
  /* entityform-session-field_day_association */     ),
  /* entityform-session-field_day_association */     'week' => array(
  /* entityform-session-field_day_association */       'label' => 'above',
  /* entityform-session-field_day_association */       'settings' => array(),
  /* entityform-session-field_day_association */       'type' => 'hidden',
  /* entityform-session-field_day_association */       'weight' => 11,
  /* entityform-session-field_day_association */     ),
  /* entityform-session-field_day_association */   ),
  /* entityform-session-field_day_association */   'entity_type' => 'entityform',
  /* entityform-session-field_day_association */   'fences_wrapper' => 'div',
  /* entityform-session-field_day_association */   'field_name' => 'field_day_association',
  /* entityform-session-field_day_association */   'label' => 'Day Association',
  /* entityform-session-field_day_association */   'required' => 1,
  /* entityform-session-field_day_association */   'settings' => array(
  /* entityform-session-field_day_association */     'behaviors' => array(
  /* entityform-session-field_day_association */       'prepopulate' => array(
  /* entityform-session-field_day_association */         'status' => 0,
  /* entityform-session-field_day_association */       ),
  /* entityform-session-field_day_association */     ),
  /* entityform-session-field_day_association */     'user_field_privacy' => FALSE,
  /* entityform-session-field_day_association */     'user_register_form' => FALSE,
  /* entityform-session-field_day_association */   ),
  /* entityform-session-field_day_association */   'widget' => array(
  /* entityform-session-field_day_association */     'active' => 1,
  /* entityform-session-field_day_association */     'module' => 'options',
  /* entityform-session-field_day_association */     'settings' => array(
  /* entityform-session-field_day_association */       'apply_chosen' => '',
  /* entityform-session-field_day_association */       'match_operator' => 'CONTAINS',
  /* entityform-session-field_day_association */       'path' => '',
  /* entityform-session-field_day_association */       'size' => 60,
  /* entityform-session-field_day_association */     ),
  /* entityform-session-field_day_association */     'type' => 'options_select',
  /* entityform-session-field_day_association */     'weight' => 4,
  /* entityform-session-field_day_association */   ),
  /* entityform-session-field_day_association */ );

  // Exported field_instance: 'entityform-session-field_day_number'.
  $field_instances['entityform-session-field_day_number'] = array(
  /* entityform-session-field_day_number */   'bundle' => 'session',
  /* entityform-session-field_day_number */   'default_value' => array(
  /* entityform-session-field_day_number */     0 => array(
  /* entityform-session-field_day_number */       'value' => 1,
  /* entityform-session-field_day_number */     ),
  /* entityform-session-field_day_number */   ),
  /* entityform-session-field_day_number */   'deleted' => 0,
  /* entityform-session-field_day_number */   'description' => '',
  /* entityform-session-field_day_number */   'display' => array(
  /* entityform-session-field_day_number */     'default' => array(
  /* entityform-session-field_day_number */       'label' => 'above',
  /* entityform-session-field_day_number */       'module' => 'list',
  /* entityform-session-field_day_number */       'settings' => array(
  /* entityform-session-field_day_number */         'field_formatter_class' => '',
  /* entityform-session-field_day_number */       ),
  /* entityform-session-field_day_number */       'type' => 'list_default',
  /* entityform-session-field_day_number */       'weight' => 9,
  /* entityform-session-field_day_number */     ),
  /* entityform-session-field_day_number */     'full' => array(
  /* entityform-session-field_day_number */       'label' => 'above',
  /* entityform-session-field_day_number */       'settings' => array(),
  /* entityform-session-field_day_number */       'type' => 'hidden',
  /* entityform-session-field_day_number */       'weight' => 0,
  /* entityform-session-field_day_number */     ),
  /* entityform-session-field_day_number */     'week' => array(
  /* entityform-session-field_day_number */       'label' => 'above',
  /* entityform-session-field_day_number */       'module' => 'list',
  /* entityform-session-field_day_number */       'settings' => array(
  /* entityform-session-field_day_number */         'field_formatter_class' => '',
  /* entityform-session-field_day_number */       ),
  /* entityform-session-field_day_number */       'type' => 'list_default',
  /* entityform-session-field_day_number */       'weight' => 3,
  /* entityform-session-field_day_number */     ),
  /* entityform-session-field_day_number */   ),
  /* entityform-session-field_day_number */   'entity_type' => 'entityform',
  /* entityform-session-field_day_number */   'fences_wrapper' => 'div',
  /* entityform-session-field_day_number */   'field_name' => 'field_day_number',
  /* entityform-session-field_day_number */   'label' => 'Day Number',
  /* entityform-session-field_day_number */   'required' => 1,
  /* entityform-session-field_day_number */   'settings' => array(
  /* entityform-session-field_day_number */     'user_register_form' => FALSE,
  /* entityform-session-field_day_number */   ),
  /* entityform-session-field_day_number */   'widget' => array(
  /* entityform-session-field_day_number */     'active' => 1,
  /* entityform-session-field_day_number */     'module' => 'options',
  /* entityform-session-field_day_number */     'settings' => array(
  /* entityform-session-field_day_number */       'apply_chosen' => '',
  /* entityform-session-field_day_number */     ),
  /* entityform-session-field_day_number */     'type' => 'options_select',
  /* entityform-session-field_day_number */     'weight' => 5,
  /* entityform-session-field_day_number */   ),
  /* entityform-session-field_day_number */ );

  // Exported field_instance: 'entityform-session-field_description'.
  $field_instances['entityform-session-field_description'] = array(
  /* entityform-session-field_description */   'bundle' => 'session',
  /* entityform-session-field_description */   'default_value' => NULL,
  /* entityform-session-field_description */   'deleted' => 0,
  /* entityform-session-field_description */   'description' => '',
  /* entityform-session-field_description */   'display' => array(
  /* entityform-session-field_description */     'default' => array(
  /* entityform-session-field_description */       'label' => 'above',
  /* entityform-session-field_description */       'module' => 'text',
  /* entityform-session-field_description */       'settings' => array(
  /* entityform-session-field_description */         'field_formatter_class' => '',
  /* entityform-session-field_description */       ),
  /* entityform-session-field_description */       'type' => 'text_default',
  /* entityform-session-field_description */       'weight' => 4,
  /* entityform-session-field_description */     ),
  /* entityform-session-field_description */     'full' => array(
  /* entityform-session-field_description */       'label' => 'hidden',
  /* entityform-session-field_description */       'module' => 'text',
  /* entityform-session-field_description */       'settings' => array(
  /* entityform-session-field_description */         'field_formatter_class' => '',
  /* entityform-session-field_description */       ),
  /* entityform-session-field_description */       'type' => 'text_default',
  /* entityform-session-field_description */       'weight' => 1,
  /* entityform-session-field_description */     ),
  /* entityform-session-field_description */     'week' => array(
  /* entityform-session-field_description */       'label' => 'hidden',
  /* entityform-session-field_description */       'module' => 'text',
  /* entityform-session-field_description */       'settings' => array(
  /* entityform-session-field_description */         'field_formatter_class' => '',
  /* entityform-session-field_description */       ),
  /* entityform-session-field_description */       'type' => 'text_default',
  /* entityform-session-field_description */       'weight' => 4,
  /* entityform-session-field_description */     ),
  /* entityform-session-field_description */   ),
  /* entityform-session-field_description */   'entity_type' => 'entityform',
  /* entityform-session-field_description */   'fences_wrapper' => 'div',
  /* entityform-session-field_description */   'field_name' => 'field_description',
  /* entityform-session-field_description */   'label' => 'Description',
  /* entityform-session-field_description */   'required' => 0,
  /* entityform-session-field_description */   'settings' => array(
  /* entityform-session-field_description */     'better_formats' => array(
  /* entityform-session-field_description */       'allowed_formats' => array(
  /* entityform-session-field_description */         'filtered_html' => 'filtered_html',
  /* entityform-session-field_description */         'full_html' => 'full_html',
  /* entityform-session-field_description */         'plain_text' => 'plain_text',
  /* entityform-session-field_description */       ),
  /* entityform-session-field_description */       'allowed_formats_toggle' => 0,
  /* entityform-session-field_description */       'default_order_toggle' => 0,
  /* entityform-session-field_description */       'default_order_wrapper' => array(
  /* entityform-session-field_description */         'formats' => array(
  /* entityform-session-field_description */           'filtered_html' => array(
  /* entityform-session-field_description */             'weight' => -10,
  /* entityform-session-field_description */           ),
  /* entityform-session-field_description */           'full_html' => array(
  /* entityform-session-field_description */             'weight' => -8,
  /* entityform-session-field_description */           ),
  /* entityform-session-field_description */           'plain_text' => array(
  /* entityform-session-field_description */             'weight' => -9,
  /* entityform-session-field_description */           ),
  /* entityform-session-field_description */         ),
  /* entityform-session-field_description */       ),
  /* entityform-session-field_description */     ),
  /* entityform-session-field_description */     'text_processing' => 1,
  /* entityform-session-field_description */     'user_register_form' => FALSE,
  /* entityform-session-field_description */   ),
  /* entityform-session-field_description */   'widget' => array(
  /* entityform-session-field_description */     'active' => 1,
  /* entityform-session-field_description */     'module' => 'text',
  /* entityform-session-field_description */     'settings' => array(
  /* entityform-session-field_description */       'rows' => 5,
  /* entityform-session-field_description */     ),
  /* entityform-session-field_description */     'type' => 'text_textarea',
  /* entityform-session-field_description */     'weight' => 7,
  /* entityform-session-field_description */   ),
  /* entityform-session-field_description */ );

  // Exported field_instance: 'entityform-session-field_media'.
  $field_instances['entityform-session-field_media'] = array(
  /* entityform-session-field_media */   'bundle' => 'session',
  /* entityform-session-field_media */   'deleted' => 0,
  /* entityform-session-field_media */   'description' => 'Files must not exceed 500 MB. Allowed file types: avi csx doc docx gif gif gz jpeg jpg m4a m4v mov mp3 mp4 mpeg mpg mpv notebook odp ods odt oga ogg ogv pdf png pps ppsx ppt pptx pub tar txt weba webm webp wmv xls xlsx zip.',
  /* entityform-session-field_media */   'display' => array(
  /* entityform-session-field_media */     'default' => array(
  /* entityform-session-field_media */       'label' => 'above',
  /* entityform-session-field_media */       'module' => 'file',
  /* entityform-session-field_media */       'settings' => array(
  /* entityform-session-field_media */         'field_formatter_class' => '',
  /* entityform-session-field_media */       ),
  /* entityform-session-field_media */       'type' => 'file_default',
  /* entityform-session-field_media */       'weight' => 5,
  /* entityform-session-field_media */     ),
  /* entityform-session-field_media */     'full' => array(
  /* entityform-session-field_media */       'label' => 'hidden',
  /* entityform-session-field_media */       'settings' => array(),
  /* entityform-session-field_media */       'type' => 'hidden',
  /* entityform-session-field_media */       'weight' => 8,
  /* entityform-session-field_media */     ),
  /* entityform-session-field_media */     'week' => array(
  /* entityform-session-field_media */       'label' => 'above',
  /* entityform-session-field_media */       'settings' => array(),
  /* entityform-session-field_media */       'type' => 'hidden',
  /* entityform-session-field_media */       'weight' => 10,
  /* entityform-session-field_media */     ),
  /* entityform-session-field_media */   ),
  /* entityform-session-field_media */   'entity_type' => 'entityform',
  /* entityform-session-field_media */   'fences_wrapper' => 'div',
  /* entityform-session-field_media */   'field_name' => 'field_media',
  /* entityform-session-field_media */   'label' => 'Associated Media',
  /* entityform-session-field_media */   'required' => 0,
  /* entityform-session-field_media */   'settings' => array(
  /* entityform-session-field_media */     'description_field' => 0,
  /* entityform-session-field_media */     'file_directory' => '',
  /* entityform-session-field_media */     'file_extensions' => 'avi csx doc docx gif gif gz jpeg jpg m4a m4v mov mp3 mp4 mpeg mpg mpv notebook odp ods odt oga ogg ogv pdf png pps ppsx ppt pptx pub tar txt weba webm webp wmv xls xlsx zip',
  /* entityform-session-field_media */     'max_filesize' => '',
  /* entityform-session-field_media */     'user_register_form' => FALSE,
  /* entityform-session-field_media */   ),
  /* entityform-session-field_media */   'widget' => array(
  /* entityform-session-field_media */     'active' => 1,
  /* entityform-session-field_media */     'module' => 'media',
  /* entityform-session-field_media */     'settings' => array(
  /* entityform-session-field_media */       'allowed_schemes' => array(
  /* entityform-session-field_media */         'livestream' => 0,
  /* entityform-session-field_media */         'private' => 'private',
  /* entityform-session-field_media */         'public' => 'public',
  /* entityform-session-field_media */         'vimeo' => 0,
  /* entityform-session-field_media */         'youtube' => 0,
  /* entityform-session-field_media */       ),
  /* entityform-session-field_media */       'allowed_types' => array(
  /* entityform-session-field_media */         'audio' => 0,
  /* entityform-session-field_media */         'document' => 'document',
  /* entityform-session-field_media */         'image' => 'image',
  /* entityform-session-field_media */         'video' => 'video',
  /* entityform-session-field_media */       ),
  /* entityform-session-field_media */       'browser_plugins' => array(
  /* entityform-session-field_media */         'media_default--media_browser_1' => 0,
  /* entityform-session-field_media */         'media_default--media_browser_my_files' => 'media_default--media_browser_my_files',
  /* entityform-session-field_media */         'media_internet' => 0,
  /* entityform-session-field_media */         'upload' => 'upload',
  /* entityform-session-field_media */       ),
  /* entityform-session-field_media */     ),
  /* entityform-session-field_media */     'type' => 'media_generic',
  /* entityform-session-field_media */     'weight' => 10,
  /* entityform-session-field_media */   ),
  /* entityform-session-field_media */ );

  // Exported field_instance: 'entityform-session-field_node_association'.
  $field_instances['entityform-session-field_node_association'] = array(
  /* entityform-session-field_node_association */   'bundle' => 'session',
  /* entityform-session-field_node_association */   'default_value' => NULL,
  /* entityform-session-field_node_association */   'deleted' => 0,
  /* entityform-session-field_node_association */   'description' => '',
  /* entityform-session-field_node_association */   'display' => array(
  /* entityform-session-field_node_association */     'default' => array(
  /* entityform-session-field_node_association */       'label' => 'above',
  /* entityform-session-field_node_association */       'settings' => array(),
  /* entityform-session-field_node_association */       'type' => 'hidden',
  /* entityform-session-field_node_association */       'weight' => 12,
  /* entityform-session-field_node_association */     ),
  /* entityform-session-field_node_association */     'full' => array(
  /* entityform-session-field_node_association */       'label' => 'above',
  /* entityform-session-field_node_association */       'settings' => array(),
  /* entityform-session-field_node_association */       'type' => 'hidden',
  /* entityform-session-field_node_association */       'weight' => 10,
  /* entityform-session-field_node_association */     ),
  /* entityform-session-field_node_association */     'week' => array(
  /* entityform-session-field_node_association */       'label' => 'above',
  /* entityform-session-field_node_association */       'settings' => array(),
  /* entityform-session-field_node_association */       'type' => 'hidden',
  /* entityform-session-field_node_association */       'weight' => 9,
  /* entityform-session-field_node_association */     ),
  /* entityform-session-field_node_association */   ),
  /* entityform-session-field_node_association */   'entity_type' => 'entityform',
  /* entityform-session-field_node_association */   'fences_wrapper' => 'div',
  /* entityform-session-field_node_association */   'field_name' => 'field_node_association',
  /* entityform-session-field_node_association */   'label' => 'Node Association',
  /* entityform-session-field_node_association */   'required' => 0,
  /* entityform-session-field_node_association */   'settings' => array(
  /* entityform-session-field_node_association */     'text_processing' => 0,
  /* entityform-session-field_node_association */     'user_field_privacy' => FALSE,
  /* entityform-session-field_node_association */     'user_register_form' => FALSE,
  /* entityform-session-field_node_association */   ),
  /* entityform-session-field_node_association */   'widget' => array(
  /* entityform-session-field_node_association */     'active' => 1,
  /* entityform-session-field_node_association */     'module' => 'text',
  /* entityform-session-field_node_association */     'settings' => array(
  /* entityform-session-field_node_association */       'label_help_description' => '',
  /* entityform-session-field_node_association */       'size' => 60,
  /* entityform-session-field_node_association */     ),
  /* entityform-session-field_node_association */     'type' => 'text_textfield',
  /* entityform-session-field_node_association */     'weight' => 11,
  /* entityform-session-field_node_association */   ),
  /* entityform-session-field_node_association */ );

  // Exported field_instance: 'entityform-session-field_session_association'.
  $field_instances['entityform-session-field_session_association'] = array(
  /* entityform-session-field_session_association */   'bundle' => 'session',
  /* entityform-session-field_session_association */   'default_value' => NULL,
  /* entityform-session-field_session_association */   'default_value_function' => '',
  /* entityform-session-field_session_association */   'deleted' => 0,
  /* entityform-session-field_session_association */   'description' => 'Choose the week with which this day is associated',
  /* entityform-session-field_session_association */   'display' => array(
  /* entityform-session-field_session_association */     'default' => array(
  /* entityform-session-field_session_association */       'label' => 'above',
  /* entityform-session-field_session_association */       'module' => 'entityreference',
  /* entityform-session-field_session_association */       'settings' => array(
  /* entityform-session-field_session_association */         'field_formatter_class' => '',
  /* entityform-session-field_session_association */         'link' => FALSE,
  /* entityform-session-field_session_association */       ),
  /* entityform-session-field_session_association */       'type' => 'entityreference_label',
  /* entityform-session-field_session_association */       'weight' => 6,
  /* entityform-session-field_session_association */     ),
  /* entityform-session-field_session_association */     'full' => array(
  /* entityform-session-field_session_association */       'label' => 'above',
  /* entityform-session-field_session_association */       'settings' => array(),
  /* entityform-session-field_session_association */       'type' => 'hidden',
  /* entityform-session-field_session_association */       'weight' => 9,
  /* entityform-session-field_session_association */     ),
  /* entityform-session-field_session_association */     'week' => array(
  /* entityform-session-field_session_association */       'label' => 'above',
  /* entityform-session-field_session_association */       'settings' => array(),
  /* entityform-session-field_session_association */       'type' => 'hidden',
  /* entityform-session-field_session_association */       'weight' => 8,
  /* entityform-session-field_session_association */     ),
  /* entityform-session-field_session_association */   ),
  /* entityform-session-field_session_association */   'entity_type' => 'entityform',
  /* entityform-session-field_session_association */   'fences_wrapper' => 'div',
  /* entityform-session-field_session_association */   'field_name' => 'field_session_association',
  /* entityform-session-field_session_association */   'label' => 'Week Association',
  /* entityform-session-field_session_association */   'required' => 1,
  /* entityform-session-field_session_association */   'settings' => array(
  /* entityform-session-field_session_association */     'behaviors' => array(
  /* entityform-session-field_session_association */       'prepopulate' => array(
  /* entityform-session-field_session_association */         'status' => 0,
  /* entityform-session-field_session_association */       ),
  /* entityform-session-field_session_association */     ),
  /* entityform-session-field_session_association */     'user_field_privacy' => FALSE,
  /* entityform-session-field_session_association */     'user_register_form' => FALSE,
  /* entityform-session-field_session_association */   ),
  /* entityform-session-field_session_association */   'widget' => array(
  /* entityform-session-field_session_association */     'active' => 1,
  /* entityform-session-field_session_association */     'module' => 'options',
  /* entityform-session-field_session_association */     'settings' => array(
  /* entityform-session-field_session_association */       'apply_chosen' => '',
  /* entityform-session-field_session_association */       'match_operator' => 'CONTAINS',
  /* entityform-session-field_session_association */       'path' => '',
  /* entityform-session-field_session_association */       'size' => 60,
  /* entityform-session-field_session_association */     ),
  /* entityform-session-field_session_association */     'type' => 'options_select',
  /* entityform-session-field_session_association */     'weight' => 3,
  /* entityform-session-field_session_association */   ),
  /* entityform-session-field_session_association */ );

  // Exported field_instance: 'entityform-session-field_session_presenter'.
  $field_instances['entityform-session-field_session_presenter'] = array(
  /* entityform-session-field_session_presenter */   'bundle' => 'session',
  /* entityform-session-field_session_presenter */   'default_value' => NULL,
  /* entityform-session-field_session_presenter */   'default_value_function' => '',
  /* entityform-session-field_session_presenter */   'deleted' => 0,
  /* entityform-session-field_session_presenter */   'description' => 'PLEASE NOTE: Session presenters are limited to course participants.  Individuals must already be members of the course before they can be assigned the role of presenter.',
  /* entityform-session-field_session_presenter */   'display' => array(
  /* entityform-session-field_session_presenter */     'default' => array(
  /* entityform-session-field_session_presenter */       'label' => 'above',
  /* entityform-session-field_session_presenter */       'module' => 'entityreference',
  /* entityform-session-field_session_presenter */       'settings' => array(
  /* entityform-session-field_session_presenter */         'field_formatter_class' => '',
  /* entityform-session-field_session_presenter */         'link' => FALSE,
  /* entityform-session-field_session_presenter */       ),
  /* entityform-session-field_session_presenter */       'type' => 'entityreference_label',
  /* entityform-session-field_session_presenter */       'weight' => 2,
  /* entityform-session-field_session_presenter */     ),
  /* entityform-session-field_session_presenter */     'full' => array(
  /* entityform-session-field_session_presenter */       'label' => 'hidden',
  /* entityform-session-field_session_presenter */       'module' => 'entityreference',
  /* entityform-session-field_session_presenter */       'settings' => array(
  /* entityform-session-field_session_presenter */         'field_formatter_class' => '',
  /* entityform-session-field_session_presenter */         'link' => FALSE,
  /* entityform-session-field_session_presenter */       ),
  /* entityform-session-field_session_presenter */       'type' => 'entityreference_label',
  /* entityform-session-field_session_presenter */       'weight' => 2,
  /* entityform-session-field_session_presenter */     ),
  /* entityform-session-field_session_presenter */     'week' => array(
  /* entityform-session-field_session_presenter */       'label' => 'above',
  /* entityform-session-field_session_presenter */       'settings' => array(),
  /* entityform-session-field_session_presenter */       'type' => 'hidden',
  /* entityform-session-field_session_presenter */       'weight' => 6,
  /* entityform-session-field_session_presenter */     ),
  /* entityform-session-field_session_presenter */   ),
  /* entityform-session-field_session_presenter */   'entity_type' => 'entityform',
  /* entityform-session-field_session_presenter */   'fences_wrapper' => 'div',
  /* entityform-session-field_session_presenter */   'field_name' => 'field_session_presenter',
  /* entityform-session-field_session_presenter */   'label' => 'Session Presenter',
  /* entityform-session-field_session_presenter */   'required' => 0,
  /* entityform-session-field_session_presenter */   'settings' => array(
  /* entityform-session-field_session_presenter */     'behaviors' => array(
  /* entityform-session-field_session_presenter */       'prepopulate' => array(
  /* entityform-session-field_session_presenter */         'status' => 0,
  /* entityform-session-field_session_presenter */       ),
  /* entityform-session-field_session_presenter */     ),
  /* entityform-session-field_session_presenter */     'user_register_form' => FALSE,
  /* entityform-session-field_session_presenter */   ),
  /* entityform-session-field_session_presenter */   'widget' => array(
  /* entityform-session-field_session_presenter */     'active' => 1,
  /* entityform-session-field_session_presenter */     'module' => 'entityreference',
  /* entityform-session-field_session_presenter */     'settings' => array(
  /* entityform-session-field_session_presenter */       'apply_chosen' => '',
  /* entityform-session-field_session_presenter */       'match_operator' => 'CONTAINS',
  /* entityform-session-field_session_presenter */       'path' => '',
  /* entityform-session-field_session_presenter */       'size' => 60,
  /* entityform-session-field_session_presenter */     ),
  /* entityform-session-field_session_presenter */     'type' => 'entityreference_autocomplete',
  /* entityform-session-field_session_presenter */     'weight' => 6,
  /* entityform-session-field_session_presenter */   ),
  /* entityform-session-field_session_presenter */ );

  // Exported field_instance: 'entityform-session-field_shared_entity_ref'.
  $field_instances['entityform-session-field_shared_entity_ref'] = array(
  /* entityform-session-field_shared_entity_ref */   'bundle' => 'session',
  /* entityform-session-field_shared_entity_ref */   'default_value' => NULL,
  /* entityform-session-field_shared_entity_ref */   'deleted' => 0,
  /* entityform-session-field_shared_entity_ref */   'description' => '',
  /* entityform-session-field_shared_entity_ref */   'display' => array(
  /* entityform-session-field_shared_entity_ref */     'default' => array(
  /* entityform-session-field_shared_entity_ref */       'label' => 'above',
  /* entityform-session-field_shared_entity_ref */       'module' => 'text',
  /* entityform-session-field_shared_entity_ref */       'settings' => array(
  /* entityform-session-field_shared_entity_ref */         'field_formatter_class' => '',
  /* entityform-session-field_shared_entity_ref */       ),
  /* entityform-session-field_shared_entity_ref */       'type' => 'text_default',
  /* entityform-session-field_shared_entity_ref */       'weight' => 8,
  /* entityform-session-field_shared_entity_ref */     ),
  /* entityform-session-field_shared_entity_ref */     'full' => array(
  /* entityform-session-field_shared_entity_ref */       'label' => 'above',
  /* entityform-session-field_shared_entity_ref */       'settings' => array(),
  /* entityform-session-field_shared_entity_ref */       'type' => 'hidden',
  /* entityform-session-field_shared_entity_ref */       'weight' => 6,
  /* entityform-session-field_shared_entity_ref */     ),
  /* entityform-session-field_shared_entity_ref */     'week' => array(
  /* entityform-session-field_shared_entity_ref */       'label' => 'above',
  /* entityform-session-field_shared_entity_ref */       'settings' => array(),
  /* entityform-session-field_shared_entity_ref */       'type' => 'hidden',
  /* entityform-session-field_shared_entity_ref */       'weight' => 7,
  /* entityform-session-field_shared_entity_ref */     ),
  /* entityform-session-field_shared_entity_ref */   ),
  /* entityform-session-field_shared_entity_ref */   'entity_type' => 'entityform',
  /* entityform-session-field_shared_entity_ref */   'fences_wrapper' => 'div',
  /* entityform-session-field_shared_entity_ref */   'field_name' => 'field_shared_entity_ref',
  /* entityform-session-field_shared_entity_ref */   'label' => 'Shared Entity Ref',
  /* entityform-session-field_shared_entity_ref */   'required' => 0,
  /* entityform-session-field_shared_entity_ref */   'settings' => array(
  /* entityform-session-field_shared_entity_ref */     'text_processing' => 0,
  /* entityform-session-field_shared_entity_ref */     'user_field_privacy' => FALSE,
  /* entityform-session-field_shared_entity_ref */     'user_register_form' => FALSE,
  /* entityform-session-field_shared_entity_ref */   ),
  /* entityform-session-field_shared_entity_ref */   'widget' => array(
  /* entityform-session-field_shared_entity_ref */     'active' => 1,
  /* entityform-session-field_shared_entity_ref */     'module' => 'text',
  /* entityform-session-field_shared_entity_ref */     'settings' => array(
  /* entityform-session-field_shared_entity_ref */       'label_help_description' => '',
  /* entityform-session-field_shared_entity_ref */       'size' => 60,
  /* entityform-session-field_shared_entity_ref */     ),
  /* entityform-session-field_shared_entity_ref */     'type' => 'text_textfield',
  /* entityform-session-field_shared_entity_ref */     'weight' => 12,
  /* entityform-session-field_shared_entity_ref */   ),
  /* entityform-session-field_shared_entity_ref */ );

  // Exported field_instance: 'entityform-session-field_title'.
  $field_instances['entityform-session-field_title'] = array(
  /* entityform-session-field_title */   'bundle' => 'session',
  /* entityform-session-field_title */   'default_value' => NULL,
  /* entityform-session-field_title */   'deleted' => 0,
  /* entityform-session-field_title */   'description' => '',
  /* entityform-session-field_title */   'display' => array(
  /* entityform-session-field_title */     'default' => array(
  /* entityform-session-field_title */       'label' => 'above',
  /* entityform-session-field_title */       'module' => 'text',
  /* entityform-session-field_title */       'settings' => array(
  /* entityform-session-field_title */         'field_formatter_class' => '',
  /* entityform-session-field_title */       ),
  /* entityform-session-field_title */       'type' => 'text_default',
  /* entityform-session-field_title */       'weight' => 0,
  /* entityform-session-field_title */     ),
  /* entityform-session-field_title */     'full' => array(
  /* entityform-session-field_title */       'label' => 'hidden',
  /* entityform-session-field_title */       'module' => 'text',
  /* entityform-session-field_title */       'settings' => array(
  /* entityform-session-field_title */         'field_formatter_class' => '',
  /* entityform-session-field_title */       ),
  /* entityform-session-field_title */       'type' => 'text_default',
  /* entityform-session-field_title */       'weight' => 4,
  /* entityform-session-field_title */     ),
  /* entityform-session-field_title */     'week' => array(
  /* entityform-session-field_title */       'label' => 'hidden',
  /* entityform-session-field_title */       'module' => 'text',
  /* entityform-session-field_title */       'settings' => array(
  /* entityform-session-field_title */         'field_formatter_class' => '',
  /* entityform-session-field_title */       ),
  /* entityform-session-field_title */       'type' => 'text_default',
  /* entityform-session-field_title */       'weight' => 0,
  /* entityform-session-field_title */     ),
  /* entityform-session-field_title */   ),
  /* entityform-session-field_title */   'entity_type' => 'entityform',
  /* entityform-session-field_title */   'fences_wrapper' => 'div',
  /* entityform-session-field_title */   'field_name' => 'field_title',
  /* entityform-session-field_title */   'label' => 'Title',
  /* entityform-session-field_title */   'required' => 1,
  /* entityform-session-field_title */   'settings' => array(
  /* entityform-session-field_title */     'text_processing' => 0,
  /* entityform-session-field_title */     'user_field_privacy' => FALSE,
  /* entityform-session-field_title */     'user_register_form' => FALSE,
  /* entityform-session-field_title */   ),
  /* entityform-session-field_title */   'widget' => array(
  /* entityform-session-field_title */     'active' => 1,
  /* entityform-session-field_title */     'module' => 'text',
  /* entityform-session-field_title */     'settings' => array(
  /* entityform-session-field_title */       'label_help_description' => '',
  /* entityform-session-field_title */       'size' => 60,
  /* entityform-session-field_title */     ),
  /* entityform-session-field_title */     'type' => 'text_textfield',
  /* entityform-session-field_title */     'weight' => 2,
  /* entityform-session-field_title */   ),
  /* entityform-session-field_title */ );

  // Exported field_instance: 'entityform-session-field_type'.
  $field_instances['entityform-session-field_type'] = array(
  /* entityform-session-field_type */   'bundle' => 'session',
  /* entityform-session-field_type */   'default_value' => array(
  /* entityform-session-field_type */     0 => array(
  /* entityform-session-field_type */       'value' => 'Week',
  /* entityform-session-field_type */     ),
  /* entityform-session-field_type */   ),
  /* entityform-session-field_type */   'deleted' => 0,
  /* entityform-session-field_type */   'description' => 'Before Adding Days, at least one Week must be created for Day placement.
Before Adding Units, at least one Day must be created for Unit placement.',
  /* entityform-session-field_type */   'display' => array(
  /* entityform-session-field_type */     'default' => array(
  /* entityform-session-field_type */       'label' => 'above',
  /* entityform-session-field_type */       'module' => 'list',
  /* entityform-session-field_type */       'settings' => array(
  /* entityform-session-field_type */         'field_formatter_class' => '',
  /* entityform-session-field_type */       ),
  /* entityform-session-field_type */       'type' => 'list_default',
  /* entityform-session-field_type */       'weight' => 1,
  /* entityform-session-field_type */     ),
  /* entityform-session-field_type */     'full' => array(
  /* entityform-session-field_type */       'label' => 'hidden',
  /* entityform-session-field_type */       'module' => 'list',
  /* entityform-session-field_type */       'settings' => array(
  /* entityform-session-field_type */         'field_formatter_class' => '',
  /* entityform-session-field_type */       ),
  /* entityform-session-field_type */       'type' => 'list_default',
  /* entityform-session-field_type */       'weight' => 3,
  /* entityform-session-field_type */     ),
  /* entityform-session-field_type */     'week' => array(
  /* entityform-session-field_type */       'label' => 'hidden',
  /* entityform-session-field_type */       'module' => 'list',
  /* entityform-session-field_type */       'settings' => array(
  /* entityform-session-field_type */         'field_formatter_class' => '',
  /* entityform-session-field_type */       ),
  /* entityform-session-field_type */       'type' => 'list_default',
  /* entityform-session-field_type */       'weight' => 2,
  /* entityform-session-field_type */     ),
  /* entityform-session-field_type */   ),
  /* entityform-session-field_type */   'entity_type' => 'entityform',
  /* entityform-session-field_type */   'fences_wrapper' => 'div',
  /* entityform-session-field_type */   'field_name' => 'field_type',
  /* entityform-session-field_type */   'label' => 'Type',
  /* entityform-session-field_type */   'required' => 1,
  /* entityform-session-field_type */   'settings' => array(
  /* entityform-session-field_type */     'user_field_privacy' => FALSE,
  /* entityform-session-field_type */     'user_register_form' => FALSE,
  /* entityform-session-field_type */   ),
  /* entityform-session-field_type */   'widget' => array(
  /* entityform-session-field_type */     'active' => 1,
  /* entityform-session-field_type */     'module' => 'options',
  /* entityform-session-field_type */     'settings' => array(
  /* entityform-session-field_type */       'apply_chosen' => '',
  /* entityform-session-field_type */     ),
  /* entityform-session-field_type */     'type' => 'options_select',
  /* entityform-session-field_type */     'weight' => 1,
  /* entityform-session-field_type */   ),
  /* entityform-session-field_type */ );

  // Exported field_instance: 'entityform-session-field_weight'.
  $field_instances['entityform-session-field_weight'] = array(
  /* entityform-session-field_weight */   'bundle' => 'session',
  /* entityform-session-field_weight */   'default_value' => array(
  /* entityform-session-field_weight */     0 => array(
  /* entityform-session-field_weight */       'value' => 1,
  /* entityform-session-field_weight */     ),
  /* entityform-session-field_weight */   ),
  /* entityform-session-field_weight */   'deleted' => 0,
  /* entityform-session-field_weight */   'description' => 'Weight is used to determine order. Lower numbers will appear above higher numbers, i.e: 1 will be above 2 in the list of units.',
  /* entityform-session-field_weight */   'display' => array(
  /* entityform-session-field_weight */     'default' => array(
  /* entityform-session-field_weight */       'label' => 'above',
  /* entityform-session-field_weight */       'settings' => array(),
  /* entityform-session-field_weight */       'type' => 'hidden',
  /* entityform-session-field_weight */       'weight' => 11,
  /* entityform-session-field_weight */     ),
  /* entityform-session-field_weight */     'full' => array(
  /* entityform-session-field_weight */       'label' => 'above',
  /* entityform-session-field_weight */       'settings' => array(),
  /* entityform-session-field_weight */       'type' => 'hidden',
  /* entityform-session-field_weight */       'weight' => 0,
  /* entityform-session-field_weight */     ),
  /* entityform-session-field_weight */     'week' => array(
  /* entityform-session-field_weight */       'label' => 'above',
  /* entityform-session-field_weight */       'settings' => array(),
  /* entityform-session-field_weight */       'type' => 'hidden',
  /* entityform-session-field_weight */       'weight' => 5,
  /* entityform-session-field_weight */     ),
  /* entityform-session-field_weight */   ),
  /* entityform-session-field_weight */   'entity_type' => 'entityform',
  /* entityform-session-field_weight */   'fences_wrapper' => 'div',
  /* entityform-session-field_weight */   'field_name' => 'field_weight',
  /* entityform-session-field_weight */   'label' => 'Weight',
  /* entityform-session-field_weight */   'required' => 1,
  /* entityform-session-field_weight */   'settings' => array(
  /* entityform-session-field_weight */     'max' => '',
  /* entityform-session-field_weight */     'min' => '',
  /* entityform-session-field_weight */     'prefix' => '',
  /* entityform-session-field_weight */     'suffix' => '',
  /* entityform-session-field_weight */     'user_field_privacy' => FALSE,
  /* entityform-session-field_weight */     'user_register_form' => FALSE,
  /* entityform-session-field_weight */   ),
  /* entityform-session-field_weight */   'widget' => array(
  /* entityform-session-field_weight */     'active' => 0,
  /* entityform-session-field_weight */     'module' => 'number',
  /* entityform-session-field_weight */     'settings' => array(),
  /* entityform-session-field_weight */     'type' => 'number',
  /* entityform-session-field_weight */     'weight' => 8,
  /* entityform-session-field_weight */   ),
  /* entityform-session-field_weight */ );

  // Exported field_instance: 'entityform-userreg-field_anything_else'.
  $field_instances['entityform-userreg-field_anything_else'] = array(
  /* entityform-userreg-field_anything_else */   'bundle' => 'userreg',
  /* entityform-userreg-field_anything_else */   'default_value' => NULL,
  /* entityform-userreg-field_anything_else */   'deleted' => 0,
  /* entityform-userreg-field_anything_else */   'description' => '',
  /* entityform-userreg-field_anything_else */   'display' => array(
  /* entityform-userreg-field_anything_else */     'default' => array(
  /* entityform-userreg-field_anything_else */       'label' => 'above',
  /* entityform-userreg-field_anything_else */       'module' => 'text',
  /* entityform-userreg-field_anything_else */       'settings' => array(
  /* entityform-userreg-field_anything_else */         'field_formatter_class' => '',
  /* entityform-userreg-field_anything_else */       ),
  /* entityform-userreg-field_anything_else */       'type' => 'text_default',
  /* entityform-userreg-field_anything_else */       'weight' => 14,
  /* entityform-userreg-field_anything_else */     ),
  /* entityform-userreg-field_anything_else */     'week' => array(
  /* entityform-userreg-field_anything_else */       'label' => 'above',
  /* entityform-userreg-field_anything_else */       'settings' => array(),
  /* entityform-userreg-field_anything_else */       'type' => 'hidden',
  /* entityform-userreg-field_anything_else */       'weight' => 0,
  /* entityform-userreg-field_anything_else */     ),
  /* entityform-userreg-field_anything_else */   ),
  /* entityform-userreg-field_anything_else */   'entity_type' => 'entityform',
  /* entityform-userreg-field_anything_else */   'fences_wrapper' => 'no_wrapper',
  /* entityform-userreg-field_anything_else */   'field_name' => 'field_anything_else',
  /* entityform-userreg-field_anything_else */   'label' => 'Additional Comments/Remarks',
  /* entityform-userreg-field_anything_else */   'required' => 0,
  /* entityform-userreg-field_anything_else */   'settings' => array(
  /* entityform-userreg-field_anything_else */     'better_formats' => array(
  /* entityform-userreg-field_anything_else */       'allowed_formats' => array(
  /* entityform-userreg-field_anything_else */         'filtered_html' => 'filtered_html',
  /* entityform-userreg-field_anything_else */         'full_html' => 'full_html',
  /* entityform-userreg-field_anything_else */         'plain_text' => 'plain_text',
  /* entityform-userreg-field_anything_else */       ),
  /* entityform-userreg-field_anything_else */       'allowed_formats_toggle' => 0,
  /* entityform-userreg-field_anything_else */       'default_order_toggle' => 0,
  /* entityform-userreg-field_anything_else */       'default_order_wrapper' => array(
  /* entityform-userreg-field_anything_else */         'formats' => array(
  /* entityform-userreg-field_anything_else */           'filtered_html' => array(
  /* entityform-userreg-field_anything_else */             'weight' => -10,
  /* entityform-userreg-field_anything_else */           ),
  /* entityform-userreg-field_anything_else */           'full_html' => array(
  /* entityform-userreg-field_anything_else */             'weight' => -8,
  /* entityform-userreg-field_anything_else */           ),
  /* entityform-userreg-field_anything_else */           'plain_text' => array(
  /* entityform-userreg-field_anything_else */             'weight' => -9,
  /* entityform-userreg-field_anything_else */           ),
  /* entityform-userreg-field_anything_else */         ),
  /* entityform-userreg-field_anything_else */       ),
  /* entityform-userreg-field_anything_else */     ),
  /* entityform-userreg-field_anything_else */     'text_processing' => 0,
  /* entityform-userreg-field_anything_else */     'user_field_privacy' => FALSE,
  /* entityform-userreg-field_anything_else */     'user_register_form' => FALSE,
  /* entityform-userreg-field_anything_else */   ),
  /* entityform-userreg-field_anything_else */   'widget' => array(
  /* entityform-userreg-field_anything_else */     'active' => 1,
  /* entityform-userreg-field_anything_else */     'module' => 'text',
  /* entityform-userreg-field_anything_else */     'settings' => array(
  /* entityform-userreg-field_anything_else */       'label_help_description' => '',
  /* entityform-userreg-field_anything_else */       'rows' => 5,
  /* entityform-userreg-field_anything_else */     ),
  /* entityform-userreg-field_anything_else */     'type' => 'text_textarea',
  /* entityform-userreg-field_anything_else */     'weight' => 9,
  /* entityform-userreg-field_anything_else */   ),
  /* entityform-userreg-field_anything_else */ );

  // Exported field_instance:
  // 'entityform-userreg-field_country_of_representation'.
  $field_instances['entityform-userreg-field_country_of_representation'] = array(
  /* entityform-userreg-field_country_of_representation */   'bundle' => 'userreg',
  /* entityform-userreg-field_country_of_representation */   'default_value' => NULL,
  /* entityform-userreg-field_country_of_representation */   'deleted' => 0,
  /* entityform-userreg-field_country_of_representation */   'description' => 'The country you are representing on the GlobalNET system and in the classes, seminars and events you attend.',
  /* entityform-userreg-field_country_of_representation */   'display' => array(
  /* entityform-userreg-field_country_of_representation */     'default' => array(
  /* entityform-userreg-field_country_of_representation */       'label' => 'above',
  /* entityform-userreg-field_country_of_representation */       'module' => 'list',
  /* entityform-userreg-field_country_of_representation */       'settings' => array(
  /* entityform-userreg-field_country_of_representation */         'field_formatter_class' => '',
  /* entityform-userreg-field_country_of_representation */       ),
  /* entityform-userreg-field_country_of_representation */       'type' => 'list_default',
  /* entityform-userreg-field_country_of_representation */       'weight' => 17,
  /* entityform-userreg-field_country_of_representation */     ),
  /* entityform-userreg-field_country_of_representation */     'week' => array(
  /* entityform-userreg-field_country_of_representation */       'label' => 'above',
  /* entityform-userreg-field_country_of_representation */       'settings' => array(),
  /* entityform-userreg-field_country_of_representation */       'type' => 'hidden',
  /* entityform-userreg-field_country_of_representation */       'weight' => 0,
  /* entityform-userreg-field_country_of_representation */     ),
  /* entityform-userreg-field_country_of_representation */   ),
  /* entityform-userreg-field_country_of_representation */   'entity_type' => 'entityform',
  /* entityform-userreg-field_country_of_representation */   'fences_wrapper' => 'no_wrapper',
  /* entityform-userreg-field_country_of_representation */   'field_name' => 'field_country_of_representation',
  /* entityform-userreg-field_country_of_representation */   'label' => 'Country of Representation',
  /* entityform-userreg-field_country_of_representation */   'required' => 0,
  /* entityform-userreg-field_country_of_representation */   'settings' => array(
  /* entityform-userreg-field_country_of_representation */     'user_field_privacy' => FALSE,
  /* entityform-userreg-field_country_of_representation */     'user_register_form' => FALSE,
  /* entityform-userreg-field_country_of_representation */   ),
  /* entityform-userreg-field_country_of_representation */   'widget' => array(
  /* entityform-userreg-field_country_of_representation */     'active' => 1,
  /* entityform-userreg-field_country_of_representation */     'module' => 'options',
  /* entityform-userreg-field_country_of_representation */     'settings' => array(
  /* entityform-userreg-field_country_of_representation */       'apply_chosen' => '',
  /* entityform-userreg-field_country_of_representation */       'label_help_description' => '',
  /* entityform-userreg-field_country_of_representation */     ),
  /* entityform-userreg-field_country_of_representation */     'type' => 'options_select',
  /* entityform-userreg-field_country_of_representation */     'weight' => 14,
  /* entityform-userreg-field_country_of_representation */   ),
  /* entityform-userreg-field_country_of_representation */ );

  // Exported field_instance: 'entityform-userreg-field_country_of_residence'.
  $field_instances['entityform-userreg-field_country_of_residence'] = array(
  /* entityform-userreg-field_country_of_residence */   'bundle' => 'userreg',
  /* entityform-userreg-field_country_of_residence */   'default_value' => NULL,
  /* entityform-userreg-field_country_of_residence */   'deleted' => 0,
  /* entityform-userreg-field_country_of_residence */   'description' => 'The country in which you currently live.',
  /* entityform-userreg-field_country_of_residence */   'display' => array(
  /* entityform-userreg-field_country_of_residence */     'default' => array(
  /* entityform-userreg-field_country_of_residence */       'label' => 'above',
  /* entityform-userreg-field_country_of_residence */       'module' => 'list',
  /* entityform-userreg-field_country_of_residence */       'settings' => array(
  /* entityform-userreg-field_country_of_residence */         'field_formatter_class' => '',
  /* entityform-userreg-field_country_of_residence */       ),
  /* entityform-userreg-field_country_of_residence */       'type' => 'list_default',
  /* entityform-userreg-field_country_of_residence */       'weight' => 16,
  /* entityform-userreg-field_country_of_residence */     ),
  /* entityform-userreg-field_country_of_residence */     'week' => array(
  /* entityform-userreg-field_country_of_residence */       'label' => 'above',
  /* entityform-userreg-field_country_of_residence */       'settings' => array(),
  /* entityform-userreg-field_country_of_residence */       'type' => 'hidden',
  /* entityform-userreg-field_country_of_residence */       'weight' => 0,
  /* entityform-userreg-field_country_of_residence */     ),
  /* entityform-userreg-field_country_of_residence */   ),
  /* entityform-userreg-field_country_of_residence */   'entity_type' => 'entityform',
  /* entityform-userreg-field_country_of_residence */   'fences_wrapper' => 'no_wrapper',
  /* entityform-userreg-field_country_of_residence */   'field_name' => 'field_country_of_residence',
  /* entityform-userreg-field_country_of_residence */   'label' => 'Country of Residence',
  /* entityform-userreg-field_country_of_residence */   'required' => 1,
  /* entityform-userreg-field_country_of_residence */   'settings' => array(
  /* entityform-userreg-field_country_of_residence */     'user_field_privacy' => FALSE,
  /* entityform-userreg-field_country_of_residence */     'user_register_form' => FALSE,
  /* entityform-userreg-field_country_of_residence */   ),
  /* entityform-userreg-field_country_of_residence */   'widget' => array(
  /* entityform-userreg-field_country_of_residence */     'active' => 1,
  /* entityform-userreg-field_country_of_residence */     'module' => 'options',
  /* entityform-userreg-field_country_of_residence */     'settings' => array(
  /* entityform-userreg-field_country_of_residence */       'apply_chosen' => '',
  /* entityform-userreg-field_country_of_residence */       'label_help_description' => '',
  /* entityform-userreg-field_country_of_residence */     ),
  /* entityform-userreg-field_country_of_residence */     'type' => 'options_select',
  /* entityform-userreg-field_country_of_residence */     'weight' => 11,
  /* entityform-userreg-field_country_of_residence */   ),
  /* entityform-userreg-field_country_of_residence */ );

  // Exported field_instance: 'entityform-userreg-field_email'.
  $field_instances['entityform-userreg-field_email'] = array(
  /* entityform-userreg-field_email */   'bundle' => 'userreg',
  /* entityform-userreg-field_email */   'default_value' => NULL,
  /* entityform-userreg-field_email */   'deleted' => 0,
  /* entityform-userreg-field_email */   'description' => 'All emails from the system will be sent to this address. Your email address is not made public and will only be used if you wish to receive a new password or wish to receive news or notifications by email.',
  /* entityform-userreg-field_email */   'display' => array(
  /* entityform-userreg-field_email */     'default' => array(
  /* entityform-userreg-field_email */       'label' => 'above',
  /* entityform-userreg-field_email */       'module' => 'email',
  /* entityform-userreg-field_email */       'settings' => array(
  /* entityform-userreg-field_email */         'field_formatter_class' => '',
  /* entityform-userreg-field_email */       ),
  /* entityform-userreg-field_email */       'type' => 'email_default',
  /* entityform-userreg-field_email */       'weight' => 2,
  /* entityform-userreg-field_email */     ),
  /* entityform-userreg-field_email */     'week' => array(
  /* entityform-userreg-field_email */       'label' => 'above',
  /* entityform-userreg-field_email */       'settings' => array(),
  /* entityform-userreg-field_email */       'type' => 'hidden',
  /* entityform-userreg-field_email */       'weight' => 0,
  /* entityform-userreg-field_email */     ),
  /* entityform-userreg-field_email */   ),
  /* entityform-userreg-field_email */   'entity_type' => 'entityform',
  /* entityform-userreg-field_email */   'fences_wrapper' => 'no_wrapper',
  /* entityform-userreg-field_email */   'field_name' => 'field_email',
  /* entityform-userreg-field_email */   'label' => 'Your Email Address',
  /* entityform-userreg-field_email */   'required' => 1,
  /* entityform-userreg-field_email */   'settings' => array(
  /* entityform-userreg-field_email */     'user_field_privacy' => FALSE,
  /* entityform-userreg-field_email */     'user_register_form' => FALSE,
  /* entityform-userreg-field_email */   ),
  /* entityform-userreg-field_email */   'widget' => array(
  /* entityform-userreg-field_email */     'active' => 1,
  /* entityform-userreg-field_email */     'module' => 'email',
  /* entityform-userreg-field_email */     'settings' => array(
  /* entityform-userreg-field_email */       'label_help_description' => '',
  /* entityform-userreg-field_email */       'size' => 60,
  /* entityform-userreg-field_email */     ),
  /* entityform-userreg-field_email */     'type' => 'email_textfield',
  /* entityform-userreg-field_email */     'weight' => 0,
  /* entityform-userreg-field_email */   ),
  /* entityform-userreg-field_email */ );

  // Exported field_instance: 'entityform-userreg-field_name_first'.
  $field_instances['entityform-userreg-field_name_first'] = array(
  /* entityform-userreg-field_name_first */   'bundle' => 'userreg',
  /* entityform-userreg-field_name_first */   'default_value' => NULL,
  /* entityform-userreg-field_name_first */   'deleted' => 0,
  /* entityform-userreg-field_name_first */   'description' => '',
  /* entityform-userreg-field_name_first */   'display' => array(
  /* entityform-userreg-field_name_first */     'default' => array(
  /* entityform-userreg-field_name_first */       'label' => 'above',
  /* entityform-userreg-field_name_first */       'module' => 'text',
  /* entityform-userreg-field_name_first */       'settings' => array(
  /* entityform-userreg-field_name_first */         'field_formatter_class' => '',
  /* entityform-userreg-field_name_first */       ),
  /* entityform-userreg-field_name_first */       'type' => 'text_default',
  /* entityform-userreg-field_name_first */       'weight' => 0,
  /* entityform-userreg-field_name_first */     ),
  /* entityform-userreg-field_name_first */     'week' => array(
  /* entityform-userreg-field_name_first */       'label' => 'above',
  /* entityform-userreg-field_name_first */       'settings' => array(),
  /* entityform-userreg-field_name_first */       'type' => 'hidden',
  /* entityform-userreg-field_name_first */       'weight' => 0,
  /* entityform-userreg-field_name_first */     ),
  /* entityform-userreg-field_name_first */   ),
  /* entityform-userreg-field_name_first */   'entity_type' => 'entityform',
  /* entityform-userreg-field_name_first */   'fences_wrapper' => 'no_wrapper',
  /* entityform-userreg-field_name_first */   'field_name' => 'field_name_first',
  /* entityform-userreg-field_name_first */   'label' => 'Given Name',
  /* entityform-userreg-field_name_first */   'required' => 1,
  /* entityform-userreg-field_name_first */   'settings' => array(
  /* entityform-userreg-field_name_first */     'better_formats' => array(
  /* entityform-userreg-field_name_first */       'allowed_formats' => array(
  /* entityform-userreg-field_name_first */         'filtered_html' => 'filtered_html',
  /* entityform-userreg-field_name_first */         'full_html' => 'full_html',
  /* entityform-userreg-field_name_first */         'plain_text' => 'plain_text',
  /* entityform-userreg-field_name_first */       ),
  /* entityform-userreg-field_name_first */       'allowed_formats_toggle' => 0,
  /* entityform-userreg-field_name_first */       'default_order_toggle' => 0,
  /* entityform-userreg-field_name_first */       'default_order_wrapper' => array(
  /* entityform-userreg-field_name_first */         'formats' => array(
  /* entityform-userreg-field_name_first */           'filtered_html' => array(
  /* entityform-userreg-field_name_first */             'weight' => -10,
  /* entityform-userreg-field_name_first */           ),
  /* entityform-userreg-field_name_first */           'full_html' => array(
  /* entityform-userreg-field_name_first */             'weight' => -8,
  /* entityform-userreg-field_name_first */           ),
  /* entityform-userreg-field_name_first */           'plain_text' => array(
  /* entityform-userreg-field_name_first */             'weight' => -9,
  /* entityform-userreg-field_name_first */           ),
  /* entityform-userreg-field_name_first */         ),
  /* entityform-userreg-field_name_first */       ),
  /* entityform-userreg-field_name_first */     ),
  /* entityform-userreg-field_name_first */     'text_processing' => 0,
  /* entityform-userreg-field_name_first */     'user_field_privacy' => FALSE,
  /* entityform-userreg-field_name_first */     'user_register_form' => FALSE,
  /* entityform-userreg-field_name_first */   ),
  /* entityform-userreg-field_name_first */   'widget' => array(
  /* entityform-userreg-field_name_first */     'active' => 1,
  /* entityform-userreg-field_name_first */     'module' => 'text',
  /* entityform-userreg-field_name_first */     'settings' => array(
  /* entityform-userreg-field_name_first */       'label_help_description' => '',
  /* entityform-userreg-field_name_first */       'size' => 60,
  /* entityform-userreg-field_name_first */     ),
  /* entityform-userreg-field_name_first */     'type' => 'text_textfield',
  /* entityform-userreg-field_name_first */     'weight' => 1,
  /* entityform-userreg-field_name_first */   ),
  /* entityform-userreg-field_name_first */ );

  // Exported field_instance: 'entityform-userreg-field_name_last'.
  $field_instances['entityform-userreg-field_name_last'] = array(
  /* entityform-userreg-field_name_last */   'bundle' => 'userreg',
  /* entityform-userreg-field_name_last */   'default_value' => NULL,
  /* entityform-userreg-field_name_last */   'deleted' => 0,
  /* entityform-userreg-field_name_last */   'description' => '',
  /* entityform-userreg-field_name_last */   'display' => array(
  /* entityform-userreg-field_name_last */     'default' => array(
  /* entityform-userreg-field_name_last */       'label' => 'above',
  /* entityform-userreg-field_name_last */       'module' => 'text',
  /* entityform-userreg-field_name_last */       'settings' => array(
  /* entityform-userreg-field_name_last */         'field_formatter_class' => '',
  /* entityform-userreg-field_name_last */       ),
  /* entityform-userreg-field_name_last */       'type' => 'text_default',
  /* entityform-userreg-field_name_last */       'weight' => 3,
  /* entityform-userreg-field_name_last */     ),
  /* entityform-userreg-field_name_last */     'week' => array(
  /* entityform-userreg-field_name_last */       'label' => 'above',
  /* entityform-userreg-field_name_last */       'settings' => array(),
  /* entityform-userreg-field_name_last */       'type' => 'hidden',
  /* entityform-userreg-field_name_last */       'weight' => 0,
  /* entityform-userreg-field_name_last */     ),
  /* entityform-userreg-field_name_last */   ),
  /* entityform-userreg-field_name_last */   'entity_type' => 'entityform',
  /* entityform-userreg-field_name_last */   'fences_wrapper' => 'no_wrapper',
  /* entityform-userreg-field_name_last */   'field_name' => 'field_name_last',
  /* entityform-userreg-field_name_last */   'label' => 'Family Name',
  /* entityform-userreg-field_name_last */   'required' => 1,
  /* entityform-userreg-field_name_last */   'settings' => array(
  /* entityform-userreg-field_name_last */     'better_formats' => array(
  /* entityform-userreg-field_name_last */       'allowed_formats' => array(
  /* entityform-userreg-field_name_last */         'filtered_html' => 'filtered_html',
  /* entityform-userreg-field_name_last */         'full_html' => 'full_html',
  /* entityform-userreg-field_name_last */         'plain_text' => 'plain_text',
  /* entityform-userreg-field_name_last */       ),
  /* entityform-userreg-field_name_last */       'allowed_formats_toggle' => 0,
  /* entityform-userreg-field_name_last */       'default_order_toggle' => 0,
  /* entityform-userreg-field_name_last */       'default_order_wrapper' => array(
  /* entityform-userreg-field_name_last */         'formats' => array(
  /* entityform-userreg-field_name_last */           'filtered_html' => array(
  /* entityform-userreg-field_name_last */             'weight' => -10,
  /* entityform-userreg-field_name_last */           ),
  /* entityform-userreg-field_name_last */           'full_html' => array(
  /* entityform-userreg-field_name_last */             'weight' => -8,
  /* entityform-userreg-field_name_last */           ),
  /* entityform-userreg-field_name_last */           'plain_text' => array(
  /* entityform-userreg-field_name_last */             'weight' => -9,
  /* entityform-userreg-field_name_last */           ),
  /* entityform-userreg-field_name_last */         ),
  /* entityform-userreg-field_name_last */       ),
  /* entityform-userreg-field_name_last */     ),
  /* entityform-userreg-field_name_last */     'text_processing' => 0,
  /* entityform-userreg-field_name_last */     'user_field_privacy' => FALSE,
  /* entityform-userreg-field_name_last */     'user_register_form' => FALSE,
  /* entityform-userreg-field_name_last */   ),
  /* entityform-userreg-field_name_last */   'widget' => array(
  /* entityform-userreg-field_name_last */     'active' => 1,
  /* entityform-userreg-field_name_last */     'module' => 'text',
  /* entityform-userreg-field_name_last */     'settings' => array(
  /* entityform-userreg-field_name_last */       'label_help_description' => '',
  /* entityform-userreg-field_name_last */       'size' => 60,
  /* entityform-userreg-field_name_last */     ),
  /* entityform-userreg-field_name_last */     'type' => 'text_textfield',
  /* entityform-userreg-field_name_last */     'weight' => 2,
  /* entityform-userreg-field_name_last */   ),
  /* entityform-userreg-field_name_last */ );

  // Exported field_instance: 'entityform-userreg-field_nationality'.
  $field_instances['entityform-userreg-field_nationality'] = array(
  /* entityform-userreg-field_nationality */   'bundle' => 'userreg',
  /* entityform-userreg-field_nationality */   'default_value' => NULL,
  /* entityform-userreg-field_nationality */   'deleted' => 0,
  /* entityform-userreg-field_nationality */   'description' => 'The country in which you were born and/or for which you have a passport.',
  /* entityform-userreg-field_nationality */   'display' => array(
  /* entityform-userreg-field_nationality */     'default' => array(
  /* entityform-userreg-field_nationality */       'label' => 'above',
  /* entityform-userreg-field_nationality */       'module' => 'list',
  /* entityform-userreg-field_nationality */       'settings' => array(
  /* entityform-userreg-field_nationality */         'field_formatter_class' => '',
  /* entityform-userreg-field_nationality */       ),
  /* entityform-userreg-field_nationality */       'type' => 'list_default',
  /* entityform-userreg-field_nationality */       'weight' => 15,
  /* entityform-userreg-field_nationality */     ),
  /* entityform-userreg-field_nationality */     'week' => array(
  /* entityform-userreg-field_nationality */       'label' => 'above',
  /* entityform-userreg-field_nationality */       'settings' => array(),
  /* entityform-userreg-field_nationality */       'type' => 'hidden',
  /* entityform-userreg-field_nationality */       'weight' => 0,
  /* entityform-userreg-field_nationality */     ),
  /* entityform-userreg-field_nationality */   ),
  /* entityform-userreg-field_nationality */   'entity_type' => 'entityform',
  /* entityform-userreg-field_nationality */   'fences_wrapper' => 'no_wrapper',
  /* entityform-userreg-field_nationality */   'field_name' => 'field_nationality',
  /* entityform-userreg-field_nationality */   'label' => 'Nationality',
  /* entityform-userreg-field_nationality */   'required' => 0,
  /* entityform-userreg-field_nationality */   'settings' => array(
  /* entityform-userreg-field_nationality */     'user_field_privacy' => FALSE,
  /* entityform-userreg-field_nationality */     'user_register_form' => FALSE,
  /* entityform-userreg-field_nationality */   ),
  /* entityform-userreg-field_nationality */   'widget' => array(
  /* entityform-userreg-field_nationality */     'active' => 1,
  /* entityform-userreg-field_nationality */     'module' => 'options',
  /* entityform-userreg-field_nationality */     'settings' => array(
  /* entityform-userreg-field_nationality */       'apply_chosen' => '',
  /* entityform-userreg-field_nationality */       'label_help_description' => '',
  /* entityform-userreg-field_nationality */     ),
  /* entityform-userreg-field_nationality */     'type' => 'options_select',
  /* entityform-userreg-field_nationality */     'weight' => 12,
  /* entityform-userreg-field_nationality */   ),
  /* entityform-userreg-field_nationality */ );

  // Exported field_instance: 'entityform-userreg-field_organization'.
  $field_instances['entityform-userreg-field_organization'] = array(
  /* entityform-userreg-field_organization */   'bundle' => 'userreg',
  /* entityform-userreg-field_organization */   'default_value' => NULL,
  /* entityform-userreg-field_organization */   'default_value_function' => '',
  /* entityform-userreg-field_organization */   'deleted' => 0,
  /* entityform-userreg-field_organization */   'description' => '',
  /* entityform-userreg-field_organization */   'display' => array(
  /* entityform-userreg-field_organization */     'default' => array(
  /* entityform-userreg-field_organization */       'label' => 'above',
  /* entityform-userreg-field_organization */       'settings' => array(),
  /* entityform-userreg-field_organization */       'type' => 'hidden',
  /* entityform-userreg-field_organization */       'weight' => 20,
  /* entityform-userreg-field_organization */     ),
  /* entityform-userreg-field_organization */     'week' => array(
  /* entityform-userreg-field_organization */       'label' => 'above',
  /* entityform-userreg-field_organization */       'settings' => array(),
  /* entityform-userreg-field_organization */       'type' => 'hidden',
  /* entityform-userreg-field_organization */       'weight' => 0,
  /* entityform-userreg-field_organization */     ),
  /* entityform-userreg-field_organization */   ),
  /* entityform-userreg-field_organization */   'entity_type' => 'entityform',
  /* entityform-userreg-field_organization */   'fences_wrapper' => 'no_wrapper',
  /* entityform-userreg-field_organization */   'field_name' => 'field_organization',
  /* entityform-userreg-field_organization */   'label' => 'Organization',
  /* entityform-userreg-field_organization */   'required' => 0,
  /* entityform-userreg-field_organization */   'settings' => array(
  /* entityform-userreg-field_organization */     'behaviors' => array(
  /* entityform-userreg-field_organization */       'prepopulate' => array(
  /* entityform-userreg-field_organization */         'status' => 0,
  /* entityform-userreg-field_organization */       ),
  /* entityform-userreg-field_organization */     ),
  /* entityform-userreg-field_organization */     'user_field_privacy' => FALSE,
  /* entityform-userreg-field_organization */     'user_register_form' => FALSE,
  /* entityform-userreg-field_organization */   ),
  /* entityform-userreg-field_organization */   'widget' => array(
  /* entityform-userreg-field_organization */     'active' => 1,
  /* entityform-userreg-field_organization */     'module' => 'options',
  /* entityform-userreg-field_organization */     'settings' => array(
  /* entityform-userreg-field_organization */       'apply_chosen' => '',
  /* entityform-userreg-field_organization */       'label_help_description' => '',
  /* entityform-userreg-field_organization */     ),
  /* entityform-userreg-field_organization */     'type' => 'options_select',
  /* entityform-userreg-field_organization */     'weight' => 31,
  /* entityform-userreg-field_organization */   ),
  /* entityform-userreg-field_organization */ );

  // Exported field_instance: 'entityform-userreg-field_preferred_language'.
  $field_instances['entityform-userreg-field_preferred_language'] = array(
  /* entityform-userreg-field_preferred_language */   'bundle' => 'userreg',
  /* entityform-userreg-field_preferred_language */   'default_value' => array(
  /* entityform-userreg-field_preferred_language */     0 => array(
  /* entityform-userreg-field_preferred_language */       'value' => 'English',
  /* entityform-userreg-field_preferred_language */     ),
  /* entityform-userreg-field_preferred_language */   ),
  /* entityform-userreg-field_preferred_language */   'deleted' => 0,
  /* entityform-userreg-field_preferred_language */   'description' => '',
  /* entityform-userreg-field_preferred_language */   'display' => array(
  /* entityform-userreg-field_preferred_language */     'default' => array(
  /* entityform-userreg-field_preferred_language */       'label' => 'above',
  /* entityform-userreg-field_preferred_language */       'module' => 'list',
  /* entityform-userreg-field_preferred_language */       'settings' => array(
  /* entityform-userreg-field_preferred_language */         'field_formatter_class' => '',
  /* entityform-userreg-field_preferred_language */       ),
  /* entityform-userreg-field_preferred_language */       'type' => 'list_default',
  /* entityform-userreg-field_preferred_language */       'weight' => 18,
  /* entityform-userreg-field_preferred_language */     ),
  /* entityform-userreg-field_preferred_language */     'week' => array(
  /* entityform-userreg-field_preferred_language */       'label' => 'hidden',
  /* entityform-userreg-field_preferred_language */       'settings' => array(),
  /* entityform-userreg-field_preferred_language */       'type' => 'hidden',
  /* entityform-userreg-field_preferred_language */       'weight' => 0,
  /* entityform-userreg-field_preferred_language */     ),
  /* entityform-userreg-field_preferred_language */   ),
  /* entityform-userreg-field_preferred_language */   'entity_type' => 'entityform',
  /* entityform-userreg-field_preferred_language */   'fences_wrapper' => 'no_wrapper',
  /* entityform-userreg-field_preferred_language */   'field_name' => 'field_preferred_language',
  /* entityform-userreg-field_preferred_language */   'label' => 'Preferred Language',
  /* entityform-userreg-field_preferred_language */   'required' => 0,
  /* entityform-userreg-field_preferred_language */   'settings' => array(
  /* entityform-userreg-field_preferred_language */     'user_field_privacy' => FALSE,
  /* entityform-userreg-field_preferred_language */     'user_register_form' => FALSE,
  /* entityform-userreg-field_preferred_language */   ),
  /* entityform-userreg-field_preferred_language */   'widget' => array(
  /* entityform-userreg-field_preferred_language */     'active' => 1,
  /* entityform-userreg-field_preferred_language */     'module' => 'options',
  /* entityform-userreg-field_preferred_language */     'settings' => array(
  /* entityform-userreg-field_preferred_language */       'apply_chosen' => '',
  /* entityform-userreg-field_preferred_language */       'label_help_description' => '',
  /* entityform-userreg-field_preferred_language */     ),
  /* entityform-userreg-field_preferred_language */     'type' => 'options_select',
  /* entityform-userreg-field_preferred_language */     'weight' => 15,
  /* entityform-userreg-field_preferred_language */   ),
  /* entityform-userreg-field_preferred_language */ );

  // Exported field_instance: 'entityform-userreg-field_status'.
  $field_instances['entityform-userreg-field_status'] = array(
  /* entityform-userreg-field_status */   'bundle' => 'userreg',
  /* entityform-userreg-field_status */   'default_value' => array(
  /* entityform-userreg-field_status */     0 => array(
  /* entityform-userreg-field_status */       'value' => 0,
  /* entityform-userreg-field_status */     ),
  /* entityform-userreg-field_status */   ),
  /* entityform-userreg-field_status */   'deleted' => 0,
  /* entityform-userreg-field_status */   'description' => '',
  /* entityform-userreg-field_status */   'display' => array(
  /* entityform-userreg-field_status */     'default' => array(
  /* entityform-userreg-field_status */       'label' => 'above',
  /* entityform-userreg-field_status */       'module' => 'list',
  /* entityform-userreg-field_status */       'settings' => array(
  /* entityform-userreg-field_status */         'field_formatter_class' => '',
  /* entityform-userreg-field_status */       ),
  /* entityform-userreg-field_status */       'type' => 'list_default',
  /* entityform-userreg-field_status */       'weight' => 23,
  /* entityform-userreg-field_status */     ),
  /* entityform-userreg-field_status */     'week' => array(
  /* entityform-userreg-field_status */       'label' => 'above',
  /* entityform-userreg-field_status */       'settings' => array(),
  /* entityform-userreg-field_status */       'type' => 'hidden',
  /* entityform-userreg-field_status */       'weight' => 0,
  /* entityform-userreg-field_status */     ),
  /* entityform-userreg-field_status */   ),
  /* entityform-userreg-field_status */   'entity_type' => 'entityform',
  /* entityform-userreg-field_status */   'fences_wrapper' => 'no_wrapper',
  /* entityform-userreg-field_status */   'field_name' => 'field_status',
  /* entityform-userreg-field_status */   'label' => 'Status',
  /* entityform-userreg-field_status */   'required' => 1,
  /* entityform-userreg-field_status */   'settings' => array(
  /* entityform-userreg-field_status */     'user_field_privacy' => FALSE,
  /* entityform-userreg-field_status */     'user_register_form' => FALSE,
  /* entityform-userreg-field_status */   ),
  /* entityform-userreg-field_status */   'widget' => array(
  /* entityform-userreg-field_status */     'active' => 1,
  /* entityform-userreg-field_status */     'module' => 'options',
  /* entityform-userreg-field_status */     'settings' => array(
  /* entityform-userreg-field_status */       'apply_chosen' => '',
  /* entityform-userreg-field_status */       'label_help_description' => '',
  /* entityform-userreg-field_status */     ),
  /* entityform-userreg-field_status */     'type' => 'options_select',
  /* entityform-userreg-field_status */     'weight' => 35,
  /* entityform-userreg-field_status */   ),
  /* entityform-userreg-field_status */ );

  // Exported field_instance: 'entityform-userreg-field_where_do_you_work'.
  $field_instances['entityform-userreg-field_where_do_you_work'] = array(
  /* entityform-userreg-field_where_do_you_work */   'bundle' => 'userreg',
  /* entityform-userreg-field_where_do_you_work */   'default_value' => NULL,
  /* entityform-userreg-field_where_do_you_work */   'deleted' => 0,
  /* entityform-userreg-field_where_do_you_work */   'description' => '',
  /* entityform-userreg-field_where_do_you_work */   'display' => array(
  /* entityform-userreg-field_where_do_you_work */     'default' => array(
  /* entityform-userreg-field_where_do_you_work */       'label' => 'above',
  /* entityform-userreg-field_where_do_you_work */       'module' => 'list',
  /* entityform-userreg-field_where_do_you_work */       'settings' => array(
  /* entityform-userreg-field_where_do_you_work */         'field_formatter_class' => '',
  /* entityform-userreg-field_where_do_you_work */       ),
  /* entityform-userreg-field_where_do_you_work */       'type' => 'list_default',
  /* entityform-userreg-field_where_do_you_work */       'weight' => 19,
  /* entityform-userreg-field_where_do_you_work */     ),
  /* entityform-userreg-field_where_do_you_work */     'week' => array(
  /* entityform-userreg-field_where_do_you_work */       'label' => 'above',
  /* entityform-userreg-field_where_do_you_work */       'settings' => array(),
  /* entityform-userreg-field_where_do_you_work */       'type' => 'hidden',
  /* entityform-userreg-field_where_do_you_work */       'weight' => 0,
  /* entityform-userreg-field_where_do_you_work */     ),
  /* entityform-userreg-field_where_do_you_work */   ),
  /* entityform-userreg-field_where_do_you_work */   'entity_type' => 'entityform',
  /* entityform-userreg-field_where_do_you_work */   'fences_wrapper' => 'no_wrapper',
  /* entityform-userreg-field_where_do_you_work */   'field_name' => 'field_where_do_you_work',
  /* entityform-userreg-field_where_do_you_work */   'label' => 'Where do you work',
  /* entityform-userreg-field_where_do_you_work */   'required' => 0,
  /* entityform-userreg-field_where_do_you_work */   'settings' => array(
  /* entityform-userreg-field_where_do_you_work */     'user_field_privacy' => FALSE,
  /* entityform-userreg-field_where_do_you_work */     'user_register_form' => FALSE,
  /* entityform-userreg-field_where_do_you_work */   ),
  /* entityform-userreg-field_where_do_you_work */   'widget' => array(
  /* entityform-userreg-field_where_do_you_work */     'active' => 1,
  /* entityform-userreg-field_where_do_you_work */     'module' => 'options',
  /* entityform-userreg-field_where_do_you_work */     'settings' => array(
  /* entityform-userreg-field_where_do_you_work */       'apply_chosen' => '',
  /* entityform-userreg-field_where_do_you_work */       'label_help_description' => '',
  /* entityform-userreg-field_where_do_you_work */     ),
  /* entityform-userreg-field_where_do_you_work */     'type' => 'options_select',
  /* entityform-userreg-field_where_do_you_work */     'weight' => 16,
  /* entityform-userreg-field_where_do_you_work */   ),
  /* entityform-userreg-field_where_do_you_work */ );

  // Exported field_instance: 'entityform-userreg-field_which_course'.
  $field_instances['entityform-userreg-field_which_course'] = array(
  /* entityform-userreg-field_which_course */   'bundle' => 'userreg',
  /* entityform-userreg-field_which_course */   'default_value' => NULL,
  /* entityform-userreg-field_which_course */   'deleted' => 0,
  /* entityform-userreg-field_which_course */   'description' => '',
  /* entityform-userreg-field_which_course */   'display' => array(
  /* entityform-userreg-field_which_course */     'default' => array(
  /* entityform-userreg-field_which_course */       'label' => 'above',
  /* entityform-userreg-field_which_course */       'module' => 'text',
  /* entityform-userreg-field_which_course */       'settings' => array(
  /* entityform-userreg-field_which_course */         'field_formatter_class' => '',
  /* entityform-userreg-field_which_course */       ),
  /* entityform-userreg-field_which_course */       'type' => 'text_default',
  /* entityform-userreg-field_which_course */       'weight' => 9,
  /* entityform-userreg-field_which_course */     ),
  /* entityform-userreg-field_which_course */     'week' => array(
  /* entityform-userreg-field_which_course */       'label' => 'above',
  /* entityform-userreg-field_which_course */       'settings' => array(),
  /* entityform-userreg-field_which_course */       'type' => 'hidden',
  /* entityform-userreg-field_which_course */       'weight' => 0,
  /* entityform-userreg-field_which_course */     ),
  /* entityform-userreg-field_which_course */   ),
  /* entityform-userreg-field_which_course */   'entity_type' => 'entityform',
  /* entityform-userreg-field_which_course */   'fences_wrapper' => 'no_wrapper',
  /* entityform-userreg-field_which_course */   'field_name' => 'field_which_course',
  /* entityform-userreg-field_which_course */   'label' => 'Which course will you be attending?',
  /* entityform-userreg-field_which_course */   'required' => 0,
  /* entityform-userreg-field_which_course */   'settings' => array(
  /* entityform-userreg-field_which_course */     'better_formats' => array(
  /* entityform-userreg-field_which_course */       'allowed_formats' => array(
  /* entityform-userreg-field_which_course */         'filtered_html' => 'filtered_html',
  /* entityform-userreg-field_which_course */         'full_html' => 'full_html',
  /* entityform-userreg-field_which_course */         'plain_text' => 'plain_text',
  /* entityform-userreg-field_which_course */       ),
  /* entityform-userreg-field_which_course */       'allowed_formats_toggle' => 0,
  /* entityform-userreg-field_which_course */       'default_order_toggle' => 0,
  /* entityform-userreg-field_which_course */       'default_order_wrapper' => array(
  /* entityform-userreg-field_which_course */         'formats' => array(
  /* entityform-userreg-field_which_course */           'filtered_html' => array(
  /* entityform-userreg-field_which_course */             'weight' => -10,
  /* entityform-userreg-field_which_course */           ),
  /* entityform-userreg-field_which_course */           'full_html' => array(
  /* entityform-userreg-field_which_course */             'weight' => -8,
  /* entityform-userreg-field_which_course */           ),
  /* entityform-userreg-field_which_course */           'plain_text' => array(
  /* entityform-userreg-field_which_course */             'weight' => -9,
  /* entityform-userreg-field_which_course */           ),
  /* entityform-userreg-field_which_course */         ),
  /* entityform-userreg-field_which_course */       ),
  /* entityform-userreg-field_which_course */     ),
  /* entityform-userreg-field_which_course */     'text_processing' => 0,
  /* entityform-userreg-field_which_course */     'user_field_privacy' => FALSE,
  /* entityform-userreg-field_which_course */     'user_register_form' => FALSE,
  /* entityform-userreg-field_which_course */   ),
  /* entityform-userreg-field_which_course */   'widget' => array(
  /* entityform-userreg-field_which_course */     'active' => 1,
  /* entityform-userreg-field_which_course */     'module' => 'text',
  /* entityform-userreg-field_which_course */     'settings' => array(
  /* entityform-userreg-field_which_course */       'label_help_description' => '',
  /* entityform-userreg-field_which_course */       'size' => 60,
  /* entityform-userreg-field_which_course */     ),
  /* entityform-userreg-field_which_course */     'type' => 'text_textfield',
  /* entityform-userreg-field_which_course */     'weight' => 4,
  /* entityform-userreg-field_which_course */   ),
  /* entityform-userreg-field_which_course */ );

  // Exported field_instance: 'entityform-userreg-field_which_course_did_you'.
  $field_instances['entityform-userreg-field_which_course_did_you'] = array(
  /* entityform-userreg-field_which_course_did_you */   'bundle' => 'userreg',
  /* entityform-userreg-field_which_course_did_you */   'default_value' => NULL,
  /* entityform-userreg-field_which_course_did_you */   'deleted' => 0,
  /* entityform-userreg-field_which_course_did_you */   'description' => '',
  /* entityform-userreg-field_which_course_did_you */   'display' => array(
  /* entityform-userreg-field_which_course_did_you */     'default' => array(
  /* entityform-userreg-field_which_course_did_you */       'label' => 'above',
  /* entityform-userreg-field_which_course_did_you */       'module' => 'text',
  /* entityform-userreg-field_which_course_did_you */       'settings' => array(
  /* entityform-userreg-field_which_course_did_you */         'field_formatter_class' => '',
  /* entityform-userreg-field_which_course_did_you */       ),
  /* entityform-userreg-field_which_course_did_you */       'type' => 'text_default',
  /* entityform-userreg-field_which_course_did_you */       'weight' => 13,
  /* entityform-userreg-field_which_course_did_you */     ),
  /* entityform-userreg-field_which_course_did_you */     'week' => array(
  /* entityform-userreg-field_which_course_did_you */       'label' => 'above',
  /* entityform-userreg-field_which_course_did_you */       'settings' => array(),
  /* entityform-userreg-field_which_course_did_you */       'type' => 'hidden',
  /* entityform-userreg-field_which_course_did_you */       'weight' => 0,
  /* entityform-userreg-field_which_course_did_you */     ),
  /* entityform-userreg-field_which_course_did_you */   ),
  /* entityform-userreg-field_which_course_did_you */   'entity_type' => 'entityform',
  /* entityform-userreg-field_which_course_did_you */   'fences_wrapper' => 'no_wrapper',
  /* entityform-userreg-field_which_course_did_you */   'field_name' => 'field_which_course_did_you',
  /* entityform-userreg-field_which_course_did_you */   'label' => 'Which course did you attend?',
  /* entityform-userreg-field_which_course_did_you */   'required' => 0,
  /* entityform-userreg-field_which_course_did_you */   'settings' => array(
  /* entityform-userreg-field_which_course_did_you */     'better_formats' => array(
  /* entityform-userreg-field_which_course_did_you */       'allowed_formats' => array(
  /* entityform-userreg-field_which_course_did_you */         'filtered_html' => 'filtered_html',
  /* entityform-userreg-field_which_course_did_you */         'full_html' => 'full_html',
  /* entityform-userreg-field_which_course_did_you */         'plain_text' => 'plain_text',
  /* entityform-userreg-field_which_course_did_you */       ),
  /* entityform-userreg-field_which_course_did_you */       'allowed_formats_toggle' => 0,
  /* entityform-userreg-field_which_course_did_you */       'default_order_toggle' => 0,
  /* entityform-userreg-field_which_course_did_you */       'default_order_wrapper' => array(
  /* entityform-userreg-field_which_course_did_you */         'formats' => array(
  /* entityform-userreg-field_which_course_did_you */           'filtered_html' => array(
  /* entityform-userreg-field_which_course_did_you */             'weight' => -10,
  /* entityform-userreg-field_which_course_did_you */           ),
  /* entityform-userreg-field_which_course_did_you */           'full_html' => array(
  /* entityform-userreg-field_which_course_did_you */             'weight' => -8,
  /* entityform-userreg-field_which_course_did_you */           ),
  /* entityform-userreg-field_which_course_did_you */           'plain_text' => array(
  /* entityform-userreg-field_which_course_did_you */             'weight' => -9,
  /* entityform-userreg-field_which_course_did_you */           ),
  /* entityform-userreg-field_which_course_did_you */         ),
  /* entityform-userreg-field_which_course_did_you */       ),
  /* entityform-userreg-field_which_course_did_you */     ),
  /* entityform-userreg-field_which_course_did_you */     'text_processing' => 0,
  /* entityform-userreg-field_which_course_did_you */     'user_field_privacy' => FALSE,
  /* entityform-userreg-field_which_course_did_you */     'user_register_form' => FALSE,
  /* entityform-userreg-field_which_course_did_you */   ),
  /* entityform-userreg-field_which_course_did_you */   'widget' => array(
  /* entityform-userreg-field_which_course_did_you */     'active' => 1,
  /* entityform-userreg-field_which_course_did_you */     'module' => 'text',
  /* entityform-userreg-field_which_course_did_you */     'settings' => array(
  /* entityform-userreg-field_which_course_did_you */       'label_help_description' => '',
  /* entityform-userreg-field_which_course_did_you */       'size' => 60,
  /* entityform-userreg-field_which_course_did_you */     ),
  /* entityform-userreg-field_which_course_did_you */     'type' => 'text_textfield',
  /* entityform-userreg-field_which_course_did_you */     'weight' => 8,
  /* entityform-userreg-field_which_course_did_you */   ),
  /* entityform-userreg-field_which_course_did_you */ );

  // Exported field_instance: 'entityform-userreg-field_which_course_teach'.
  $field_instances['entityform-userreg-field_which_course_teach'] = array(
  /* entityform-userreg-field_which_course_teach */   'bundle' => 'userreg',
  /* entityform-userreg-field_which_course_teach */   'default_value' => NULL,
  /* entityform-userreg-field_which_course_teach */   'deleted' => 0,
  /* entityform-userreg-field_which_course_teach */   'description' => '',
  /* entityform-userreg-field_which_course_teach */   'display' => array(
  /* entityform-userreg-field_which_course_teach */     'default' => array(
  /* entityform-userreg-field_which_course_teach */       'label' => 'above',
  /* entityform-userreg-field_which_course_teach */       'module' => 'text',
  /* entityform-userreg-field_which_course_teach */       'settings' => array(
  /* entityform-userreg-field_which_course_teach */         'field_formatter_class' => '',
  /* entityform-userreg-field_which_course_teach */       ),
  /* entityform-userreg-field_which_course_teach */       'type' => 'text_default',
  /* entityform-userreg-field_which_course_teach */       'weight' => 11,
  /* entityform-userreg-field_which_course_teach */     ),
  /* entityform-userreg-field_which_course_teach */     'week' => array(
  /* entityform-userreg-field_which_course_teach */       'label' => 'above',
  /* entityform-userreg-field_which_course_teach */       'settings' => array(),
  /* entityform-userreg-field_which_course_teach */       'type' => 'hidden',
  /* entityform-userreg-field_which_course_teach */       'weight' => 0,
  /* entityform-userreg-field_which_course_teach */     ),
  /* entityform-userreg-field_which_course_teach */   ),
  /* entityform-userreg-field_which_course_teach */   'entity_type' => 'entityform',
  /* entityform-userreg-field_which_course_teach */   'fences_wrapper' => 'no_wrapper',
  /* entityform-userreg-field_which_course_teach */   'field_name' => 'field_which_course_teach',
  /* entityform-userreg-field_which_course_teach */   'label' => 'Which course will you be teaching?',
  /* entityform-userreg-field_which_course_teach */   'required' => 0,
  /* entityform-userreg-field_which_course_teach */   'settings' => array(
  /* entityform-userreg-field_which_course_teach */     'better_formats' => array(
  /* entityform-userreg-field_which_course_teach */       'allowed_formats' => array(
  /* entityform-userreg-field_which_course_teach */         'filtered_html' => 'filtered_html',
  /* entityform-userreg-field_which_course_teach */         'full_html' => 'full_html',
  /* entityform-userreg-field_which_course_teach */         'plain_text' => 'plain_text',
  /* entityform-userreg-field_which_course_teach */       ),
  /* entityform-userreg-field_which_course_teach */       'allowed_formats_toggle' => 0,
  /* entityform-userreg-field_which_course_teach */       'default_order_toggle' => 0,
  /* entityform-userreg-field_which_course_teach */       'default_order_wrapper' => array(
  /* entityform-userreg-field_which_course_teach */         'formats' => array(
  /* entityform-userreg-field_which_course_teach */           'filtered_html' => array(
  /* entityform-userreg-field_which_course_teach */             'weight' => -10,
  /* entityform-userreg-field_which_course_teach */           ),
  /* entityform-userreg-field_which_course_teach */           'full_html' => array(
  /* entityform-userreg-field_which_course_teach */             'weight' => -8,
  /* entityform-userreg-field_which_course_teach */           ),
  /* entityform-userreg-field_which_course_teach */           'plain_text' => array(
  /* entityform-userreg-field_which_course_teach */             'weight' => -9,
  /* entityform-userreg-field_which_course_teach */           ),
  /* entityform-userreg-field_which_course_teach */         ),
  /* entityform-userreg-field_which_course_teach */       ),
  /* entityform-userreg-field_which_course_teach */     ),
  /* entityform-userreg-field_which_course_teach */     'text_processing' => 0,
  /* entityform-userreg-field_which_course_teach */     'user_field_privacy' => FALSE,
  /* entityform-userreg-field_which_course_teach */     'user_register_form' => FALSE,
  /* entityform-userreg-field_which_course_teach */   ),
  /* entityform-userreg-field_which_course_teach */   'widget' => array(
  /* entityform-userreg-field_which_course_teach */     'active' => 1,
  /* entityform-userreg-field_which_course_teach */     'module' => 'text',
  /* entityform-userreg-field_which_course_teach */     'settings' => array(
  /* entityform-userreg-field_which_course_teach */       'label_help_description' => '',
  /* entityform-userreg-field_which_course_teach */       'size' => 60,
  /* entityform-userreg-field_which_course_teach */     ),
  /* entityform-userreg-field_which_course_teach */     'type' => 'text_textfield',
  /* entityform-userreg-field_which_course_teach */     'weight' => 6,
  /* entityform-userreg-field_which_course_teach */   ),
  /* entityform-userreg-field_which_course_teach */ );

  // Exported field_instance: 'entityform-userreg-field_which_event_attend'.
  $field_instances['entityform-userreg-field_which_event_attend'] = array(
  /* entityform-userreg-field_which_event_attend */   'bundle' => 'userreg',
  /* entityform-userreg-field_which_event_attend */   'default_value' => NULL,
  /* entityform-userreg-field_which_event_attend */   'deleted' => 0,
  /* entityform-userreg-field_which_event_attend */   'description' => '',
  /* entityform-userreg-field_which_event_attend */   'display' => array(
  /* entityform-userreg-field_which_event_attend */     'default' => array(
  /* entityform-userreg-field_which_event_attend */       'label' => 'above',
  /* entityform-userreg-field_which_event_attend */       'module' => 'text',
  /* entityform-userreg-field_which_event_attend */       'settings' => array(
  /* entityform-userreg-field_which_event_attend */         'field_formatter_class' => '',
  /* entityform-userreg-field_which_event_attend */       ),
  /* entityform-userreg-field_which_event_attend */       'type' => 'text_default',
  /* entityform-userreg-field_which_event_attend */       'weight' => 12,
  /* entityform-userreg-field_which_event_attend */     ),
  /* entityform-userreg-field_which_event_attend */     'week' => array(
  /* entityform-userreg-field_which_event_attend */       'label' => 'above',
  /* entityform-userreg-field_which_event_attend */       'settings' => array(),
  /* entityform-userreg-field_which_event_attend */       'type' => 'hidden',
  /* entityform-userreg-field_which_event_attend */       'weight' => 0,
  /* entityform-userreg-field_which_event_attend */     ),
  /* entityform-userreg-field_which_event_attend */   ),
  /* entityform-userreg-field_which_event_attend */   'entity_type' => 'entityform',
  /* entityform-userreg-field_which_event_attend */   'fences_wrapper' => 'no_wrapper',
  /* entityform-userreg-field_which_event_attend */   'field_name' => 'field_which_event_attend',
  /* entityform-userreg-field_which_event_attend */   'label' => 'Which event will you be attending?',
  /* entityform-userreg-field_which_event_attend */   'required' => 0,
  /* entityform-userreg-field_which_event_attend */   'settings' => array(
  /* entityform-userreg-field_which_event_attend */     'better_formats' => array(
  /* entityform-userreg-field_which_event_attend */       'allowed_formats' => array(
  /* entityform-userreg-field_which_event_attend */         'filtered_html' => 'filtered_html',
  /* entityform-userreg-field_which_event_attend */         'full_html' => 'full_html',
  /* entityform-userreg-field_which_event_attend */         'plain_text' => 'plain_text',
  /* entityform-userreg-field_which_event_attend */       ),
  /* entityform-userreg-field_which_event_attend */       'allowed_formats_toggle' => 0,
  /* entityform-userreg-field_which_event_attend */       'default_order_toggle' => 0,
  /* entityform-userreg-field_which_event_attend */       'default_order_wrapper' => array(
  /* entityform-userreg-field_which_event_attend */         'formats' => array(
  /* entityform-userreg-field_which_event_attend */           'filtered_html' => array(
  /* entityform-userreg-field_which_event_attend */             'weight' => -10,
  /* entityform-userreg-field_which_event_attend */           ),
  /* entityform-userreg-field_which_event_attend */           'full_html' => array(
  /* entityform-userreg-field_which_event_attend */             'weight' => -8,
  /* entityform-userreg-field_which_event_attend */           ),
  /* entityform-userreg-field_which_event_attend */           'plain_text' => array(
  /* entityform-userreg-field_which_event_attend */             'weight' => -9,
  /* entityform-userreg-field_which_event_attend */           ),
  /* entityform-userreg-field_which_event_attend */         ),
  /* entityform-userreg-field_which_event_attend */       ),
  /* entityform-userreg-field_which_event_attend */     ),
  /* entityform-userreg-field_which_event_attend */     'text_processing' => 0,
  /* entityform-userreg-field_which_event_attend */     'user_field_privacy' => FALSE,
  /* entityform-userreg-field_which_event_attend */     'user_register_form' => FALSE,
  /* entityform-userreg-field_which_event_attend */   ),
  /* entityform-userreg-field_which_event_attend */   'widget' => array(
  /* entityform-userreg-field_which_event_attend */     'active' => 1,
  /* entityform-userreg-field_which_event_attend */     'module' => 'text',
  /* entityform-userreg-field_which_event_attend */     'settings' => array(
  /* entityform-userreg-field_which_event_attend */       'label_help_description' => '',
  /* entityform-userreg-field_which_event_attend */       'size' => 60,
  /* entityform-userreg-field_which_event_attend */     ),
  /* entityform-userreg-field_which_event_attend */     'type' => 'text_textfield',
  /* entityform-userreg-field_which_event_attend */     'weight' => 7,
  /* entityform-userreg-field_which_event_attend */   ),
  /* entityform-userreg-field_which_event_attend */ );

  // Exported field_instance: 'entityform-userreg-field_who_teaches'.
  $field_instances['entityform-userreg-field_who_teaches'] = array(
  /* entityform-userreg-field_who_teaches */   'bundle' => 'userreg',
  /* entityform-userreg-field_who_teaches */   'default_value' => NULL,
  /* entityform-userreg-field_who_teaches */   'deleted' => 0,
  /* entityform-userreg-field_who_teaches */   'description' => '',
  /* entityform-userreg-field_who_teaches */   'display' => array(
  /* entityform-userreg-field_who_teaches */     'default' => array(
  /* entityform-userreg-field_who_teaches */       'label' => 'above',
  /* entityform-userreg-field_who_teaches */       'module' => 'text',
  /* entityform-userreg-field_who_teaches */       'settings' => array(
  /* entityform-userreg-field_who_teaches */         'field_formatter_class' => '',
  /* entityform-userreg-field_who_teaches */       ),
  /* entityform-userreg-field_who_teaches */       'type' => 'text_default',
  /* entityform-userreg-field_who_teaches */       'weight' => 10,
  /* entityform-userreg-field_who_teaches */     ),
  /* entityform-userreg-field_who_teaches */     'week' => array(
  /* entityform-userreg-field_who_teaches */       'label' => 'above',
  /* entityform-userreg-field_who_teaches */       'settings' => array(),
  /* entityform-userreg-field_who_teaches */       'type' => 'hidden',
  /* entityform-userreg-field_who_teaches */       'weight' => 0,
  /* entityform-userreg-field_who_teaches */     ),
  /* entityform-userreg-field_who_teaches */   ),
  /* entityform-userreg-field_who_teaches */   'entity_type' => 'entityform',
  /* entityform-userreg-field_who_teaches */   'fences_wrapper' => 'no_wrapper',
  /* entityform-userreg-field_who_teaches */   'field_name' => 'field_who_teaches',
  /* entityform-userreg-field_who_teaches */   'label' => 'Who teaches the course?',
  /* entityform-userreg-field_who_teaches */   'required' => 0,
  /* entityform-userreg-field_who_teaches */   'settings' => array(
  /* entityform-userreg-field_who_teaches */     'better_formats' => array(
  /* entityform-userreg-field_who_teaches */       'allowed_formats' => array(
  /* entityform-userreg-field_who_teaches */         'filtered_html' => 'filtered_html',
  /* entityform-userreg-field_who_teaches */         'full_html' => 'full_html',
  /* entityform-userreg-field_who_teaches */         'plain_text' => 'plain_text',
  /* entityform-userreg-field_who_teaches */       ),
  /* entityform-userreg-field_who_teaches */       'allowed_formats_toggle' => 0,
  /* entityform-userreg-field_who_teaches */       'default_order_toggle' => 0,
  /* entityform-userreg-field_who_teaches */       'default_order_wrapper' => array(
  /* entityform-userreg-field_who_teaches */         'formats' => array(
  /* entityform-userreg-field_who_teaches */           'filtered_html' => array(
  /* entityform-userreg-field_who_teaches */             'weight' => -10,
  /* entityform-userreg-field_who_teaches */           ),
  /* entityform-userreg-field_who_teaches */           'full_html' => array(
  /* entityform-userreg-field_who_teaches */             'weight' => -8,
  /* entityform-userreg-field_who_teaches */           ),
  /* entityform-userreg-field_who_teaches */           'plain_text' => array(
  /* entityform-userreg-field_who_teaches */             'weight' => -9,
  /* entityform-userreg-field_who_teaches */           ),
  /* entityform-userreg-field_who_teaches */         ),
  /* entityform-userreg-field_who_teaches */       ),
  /* entityform-userreg-field_who_teaches */     ),
  /* entityform-userreg-field_who_teaches */     'text_processing' => 0,
  /* entityform-userreg-field_who_teaches */     'user_field_privacy' => FALSE,
  /* entityform-userreg-field_who_teaches */     'user_register_form' => FALSE,
  /* entityform-userreg-field_who_teaches */   ),
  /* entityform-userreg-field_who_teaches */   'widget' => array(
  /* entityform-userreg-field_who_teaches */     'active' => 1,
  /* entityform-userreg-field_who_teaches */     'module' => 'text',
  /* entityform-userreg-field_who_teaches */     'settings' => array(
  /* entityform-userreg-field_who_teaches */       'label_help_description' => '',
  /* entityform-userreg-field_who_teaches */       'size' => 60,
  /* entityform-userreg-field_who_teaches */     ),
  /* entityform-userreg-field_who_teaches */     'type' => 'text_textfield',
  /* entityform-userreg-field_who_teaches */     'weight' => 5,
  /* entityform-userreg-field_who_teaches */   ),
  /* entityform-userreg-field_who_teaches */ );

  // Exported field_instance: 'entityform-userreg-field_why_do_you_want'.
  $field_instances['entityform-userreg-field_why_do_you_want'] = array(
  /* entityform-userreg-field_why_do_you_want */   'bundle' => 'userreg',
  /* entityform-userreg-field_why_do_you_want */   'default_value' => NULL,
  /* entityform-userreg-field_why_do_you_want */   'deleted' => 0,
  /* entityform-userreg-field_why_do_you_want */   'description' => '',
  /* entityform-userreg-field_why_do_you_want */   'display' => array(
  /* entityform-userreg-field_why_do_you_want */     'default' => array(
  /* entityform-userreg-field_why_do_you_want */       'label' => 'above',
  /* entityform-userreg-field_why_do_you_want */       'module' => 'list',
  /* entityform-userreg-field_why_do_you_want */       'settings' => array(
  /* entityform-userreg-field_why_do_you_want */         'field_formatter_class' => '',
  /* entityform-userreg-field_why_do_you_want */       ),
  /* entityform-userreg-field_why_do_you_want */       'type' => 'list_default',
  /* entityform-userreg-field_why_do_you_want */       'weight' => 8,
  /* entityform-userreg-field_why_do_you_want */     ),
  /* entityform-userreg-field_why_do_you_want */     'week' => array(
  /* entityform-userreg-field_why_do_you_want */       'label' => 'above',
  /* entityform-userreg-field_why_do_you_want */       'settings' => array(),
  /* entityform-userreg-field_why_do_you_want */       'type' => 'hidden',
  /* entityform-userreg-field_why_do_you_want */       'weight' => 0,
  /* entityform-userreg-field_why_do_you_want */     ),
  /* entityform-userreg-field_why_do_you_want */   ),
  /* entityform-userreg-field_why_do_you_want */   'entity_type' => 'entityform',
  /* entityform-userreg-field_why_do_you_want */   'fences_wrapper' => 'no_wrapper',
  /* entityform-userreg-field_why_do_you_want */   'field_name' => 'field_why_do_you_want',
  /* entityform-userreg-field_why_do_you_want */   'label' => 'Why do you want to create an account?',
  /* entityform-userreg-field_why_do_you_want */   'required' => 1,
  /* entityform-userreg-field_why_do_you_want */   'settings' => array(
  /* entityform-userreg-field_why_do_you_want */     'user_field_privacy' => FALSE,
  /* entityform-userreg-field_why_do_you_want */     'user_register_form' => FALSE,
  /* entityform-userreg-field_why_do_you_want */   ),
  /* entityform-userreg-field_why_do_you_want */   'widget' => array(
  /* entityform-userreg-field_why_do_you_want */     'active' => 1,
  /* entityform-userreg-field_why_do_you_want */     'module' => 'options',
  /* entityform-userreg-field_why_do_you_want */     'settings' => array(
  /* entityform-userreg-field_why_do_you_want */       'apply_chosen' => '',
  /* entityform-userreg-field_why_do_you_want */       'label_help_description' => '',
  /* entityform-userreg-field_why_do_you_want */     ),
  /* entityform-userreg-field_why_do_you_want */     'type' => 'options_select',
  /* entityform-userreg-field_why_do_you_want */     'weight' => 3,
  /* entityform-userreg-field_why_do_you_want */   ),
  /* entityform-userreg-field_why_do_you_want */ );

  // Exported field_instance: 'node-media_gallery-field_country'.
  $field_instances['node-media_gallery-field_country'] = array(
  /* node-media_gallery-field_country */   'bundle' => 'media_gallery',
  /* node-media_gallery-field_country */   'default_value' => NULL,
  /* node-media_gallery-field_country */   'deleted' => 0,
  /* node-media_gallery-field_country */   'description' => '',
  /* node-media_gallery-field_country */   'display' => array(
  /* node-media_gallery-field_country */     'default' => array(
  /* node-media_gallery-field_country */       'label' => 'above',
  /* node-media_gallery-field_country */       'module' => 'taxonomy',
  /* node-media_gallery-field_country */       'settings' => array(
  /* node-media_gallery-field_country */         'field_formatter_class' => '',
  /* node-media_gallery-field_country */       ),
  /* node-media_gallery-field_country */       'type' => 'taxonomy_term_reference_link',
  /* node-media_gallery-field_country */       'weight' => 18,
  /* node-media_gallery-field_country */     ),
  /* node-media_gallery-field_country */     'events_list' => array(
  /* node-media_gallery-field_country */       'label' => 'above',
  /* node-media_gallery-field_country */       'settings' => array(),
  /* node-media_gallery-field_country */       'type' => 'hidden',
  /* node-media_gallery-field_country */       'weight' => 0,
  /* node-media_gallery-field_country */     ),
  /* node-media_gallery-field_country */     'full' => array(
  /* node-media_gallery-field_country */       'label' => 'above',
  /* node-media_gallery-field_country */       'settings' => array(),
  /* node-media_gallery-field_country */       'type' => 'hidden',
  /* node-media_gallery-field_country */       'weight' => 7,
  /* node-media_gallery-field_country */     ),
  /* node-media_gallery-field_country */     'media_gallery_block' => array(
  /* node-media_gallery-field_country */       'label' => 'above',
  /* node-media_gallery-field_country */       'settings' => array(),
  /* node-media_gallery-field_country */       'type' => 'hidden',
  /* node-media_gallery-field_country */       'weight' => 0,
  /* node-media_gallery-field_country */     ),
  /* node-media_gallery-field_country */     'one_column_teaser' => array(
  /* node-media_gallery-field_country */       'label' => 'above',
  /* node-media_gallery-field_country */       'settings' => array(),
  /* node-media_gallery-field_country */       'type' => 'hidden',
  /* node-media_gallery-field_country */       'weight' => 0,
  /* node-media_gallery-field_country */     ),
  /* node-media_gallery-field_country */     'post_teaser_group_landing_page' => array(
  /* node-media_gallery-field_country */       'label' => 'above',
  /* node-media_gallery-field_country */       'settings' => array(),
  /* node-media_gallery-field_country */       'type' => 'hidden',
  /* node-media_gallery-field_country */       'weight' => 0,
  /* node-media_gallery-field_country */     ),
  /* node-media_gallery-field_country */     'sidebar_' => array(
  /* node-media_gallery-field_country */       'label' => 'above',
  /* node-media_gallery-field_country */       'settings' => array(),
  /* node-media_gallery-field_country */       'type' => 'hidden',
  /* node-media_gallery-field_country */       'weight' => 0,
  /* node-media_gallery-field_country */     ),
  /* node-media_gallery-field_country */     'sidebar_teaser_v2' => array(
  /* node-media_gallery-field_country */       'label' => 'above',
  /* node-media_gallery-field_country */       'settings' => array(),
  /* node-media_gallery-field_country */       'type' => 'hidden',
  /* node-media_gallery-field_country */       'weight' => 0,
  /* node-media_gallery-field_country */     ),
  /* node-media_gallery-field_country */     'teaser' => array(
  /* node-media_gallery-field_country */       'label' => 'above',
  /* node-media_gallery-field_country */       'settings' => array(),
  /* node-media_gallery-field_country */       'type' => 'hidden',
  /* node-media_gallery-field_country */       'weight' => 0,
  /* node-media_gallery-field_country */     ),
  /* node-media_gallery-field_country */     'teaser_w_thumb_and_search' => array(
  /* node-media_gallery-field_country */       'label' => 'above',
  /* node-media_gallery-field_country */       'settings' => array(),
  /* node-media_gallery-field_country */       'type' => 'hidden',
  /* node-media_gallery-field_country */       'weight' => 0,
  /* node-media_gallery-field_country */     ),
  /* node-media_gallery-field_country */     'teaserthumb' => array(
  /* node-media_gallery-field_country */       'label' => 'above',
  /* node-media_gallery-field_country */       'settings' => array(),
  /* node-media_gallery-field_country */       'type' => 'hidden',
  /* node-media_gallery-field_country */       'weight' => 0,
  /* node-media_gallery-field_country */     ),
  /* node-media_gallery-field_country */     'time_and_location' => array(
  /* node-media_gallery-field_country */       'label' => 'above',
  /* node-media_gallery-field_country */       'settings' => array(),
  /* node-media_gallery-field_country */       'type' => 'hidden',
  /* node-media_gallery-field_country */       'weight' => 0,
  /* node-media_gallery-field_country */     ),
  /* node-media_gallery-field_country */     'title_and_time' => array(
  /* node-media_gallery-field_country */       'label' => 'above',
  /* node-media_gallery-field_country */       'settings' => array(),
  /* node-media_gallery-field_country */       'type' => 'hidden',
  /* node-media_gallery-field_country */       'weight' => 0,
  /* node-media_gallery-field_country */     ),
  /* node-media_gallery-field_country */   ),
  /* node-media_gallery-field_country */   'entity_type' => 'node',
  /* node-media_gallery-field_country */   'fences_wrapper' => 'no_wrapper',
  /* node-media_gallery-field_country */   'field_name' => 'field_country',
  /* node-media_gallery-field_country */   'label' => 'Countries',
  /* node-media_gallery-field_country */   'required' => 0,
  /* node-media_gallery-field_country */   'settings' => array(
  /* node-media_gallery-field_country */     'user_field_privacy' => FALSE,
  /* node-media_gallery-field_country */     'user_register_form' => FALSE,
  /* node-media_gallery-field_country */   ),
  /* node-media_gallery-field_country */   'widget' => array(
  /* node-media_gallery-field_country */     'active' => 1,
  /* node-media_gallery-field_country */     'module' => 'term_reference_tree',
  /* node-media_gallery-field_country */     'settings' => array(
  /* node-media_gallery-field_country */       'cascading_selection' => 0,
  /* node-media_gallery-field_country */       'filter_view' => '',
  /* node-media_gallery-field_country */       'label_help_description' => '',
  /* node-media_gallery-field_country */       'leaves_only' => 0,
  /* node-media_gallery-field_country */       'max_depth' => '',
  /* node-media_gallery-field_country */       'parent_term_id' => '',
  /* node-media_gallery-field_country */       'select_parents' => 0,
  /* node-media_gallery-field_country */       'start_minimized' => 0,
  /* node-media_gallery-field_country */       'token_display' => '',
  /* node-media_gallery-field_country */       'track_list' => 0,
  /* node-media_gallery-field_country */     ),
  /* node-media_gallery-field_country */     'type' => 'term_reference_tree',
  /* node-media_gallery-field_country */     'weight' => 4,
  /* node-media_gallery-field_country */   ),
  /* node-media_gallery-field_country */ );

  // Exported field_instance: 'node-media_gallery-field_folder_layout'.
  $field_instances['node-media_gallery-field_folder_layout'] = array(
  /* node-media_gallery-field_folder_layout */   'bundle' => 'media_gallery',
  /* node-media_gallery-field_folder_layout */   'default_value' => array(
  /* node-media_gallery-field_folder_layout */     0 => array(
  /* node-media_gallery-field_folder_layout */       'value' => 1,
  /* node-media_gallery-field_folder_layout */     ),
  /* node-media_gallery-field_folder_layout */   ),
  /* node-media_gallery-field_folder_layout */   'deleted' => 0,
  /* node-media_gallery-field_folder_layout */   'description' => '',
  /* node-media_gallery-field_folder_layout */   'display' => array(
  /* node-media_gallery-field_folder_layout */     'default' => array(
  /* node-media_gallery-field_folder_layout */       'label' => 'above',
  /* node-media_gallery-field_folder_layout */       'module' => 'list',
  /* node-media_gallery-field_folder_layout */       'settings' => array(
  /* node-media_gallery-field_folder_layout */         'field_formatter_class' => '',
  /* node-media_gallery-field_folder_layout */       ),
  /* node-media_gallery-field_folder_layout */       'type' => 'list_default',
  /* node-media_gallery-field_folder_layout */       'weight' => 16,
  /* node-media_gallery-field_folder_layout */     ),
  /* node-media_gallery-field_folder_layout */     'events_list' => array(
  /* node-media_gallery-field_folder_layout */       'label' => 'above',
  /* node-media_gallery-field_folder_layout */       'settings' => array(),
  /* node-media_gallery-field_folder_layout */       'type' => 'hidden',
  /* node-media_gallery-field_folder_layout */       'weight' => 0,
  /* node-media_gallery-field_folder_layout */     ),
  /* node-media_gallery-field_folder_layout */     'full' => array(
  /* node-media_gallery-field_folder_layout */       'label' => 'above',
  /* node-media_gallery-field_folder_layout */       'settings' => array(),
  /* node-media_gallery-field_folder_layout */       'type' => 'hidden',
  /* node-media_gallery-field_folder_layout */       'weight' => 2,
  /* node-media_gallery-field_folder_layout */     ),
  /* node-media_gallery-field_folder_layout */     'media_gallery_block' => array(
  /* node-media_gallery-field_folder_layout */       'label' => 'above',
  /* node-media_gallery-field_folder_layout */       'settings' => array(),
  /* node-media_gallery-field_folder_layout */       'type' => 'hidden',
  /* node-media_gallery-field_folder_layout */       'weight' => 0,
  /* node-media_gallery-field_folder_layout */     ),
  /* node-media_gallery-field_folder_layout */     'one_column_teaser' => array(
  /* node-media_gallery-field_folder_layout */       'label' => 'above',
  /* node-media_gallery-field_folder_layout */       'settings' => array(),
  /* node-media_gallery-field_folder_layout */       'type' => 'hidden',
  /* node-media_gallery-field_folder_layout */       'weight' => 0,
  /* node-media_gallery-field_folder_layout */     ),
  /* node-media_gallery-field_folder_layout */     'post_teaser_group_landing_page' => array(
  /* node-media_gallery-field_folder_layout */       'label' => 'above',
  /* node-media_gallery-field_folder_layout */       'settings' => array(),
  /* node-media_gallery-field_folder_layout */       'type' => 'hidden',
  /* node-media_gallery-field_folder_layout */       'weight' => 0,
  /* node-media_gallery-field_folder_layout */     ),
  /* node-media_gallery-field_folder_layout */     'sidebar_' => array(
  /* node-media_gallery-field_folder_layout */       'label' => 'above',
  /* node-media_gallery-field_folder_layout */       'settings' => array(),
  /* node-media_gallery-field_folder_layout */       'type' => 'hidden',
  /* node-media_gallery-field_folder_layout */       'weight' => 0,
  /* node-media_gallery-field_folder_layout */     ),
  /* node-media_gallery-field_folder_layout */     'sidebar_teaser' => array(
  /* node-media_gallery-field_folder_layout */       'label' => 'above',
  /* node-media_gallery-field_folder_layout */       'settings' => array(),
  /* node-media_gallery-field_folder_layout */       'type' => 'hidden',
  /* node-media_gallery-field_folder_layout */       'weight' => 0,
  /* node-media_gallery-field_folder_layout */     ),
  /* node-media_gallery-field_folder_layout */     'sidebar_teaser_v2' => array(
  /* node-media_gallery-field_folder_layout */       'label' => 'above',
  /* node-media_gallery-field_folder_layout */       'settings' => array(),
  /* node-media_gallery-field_folder_layout */       'type' => 'hidden',
  /* node-media_gallery-field_folder_layout */       'weight' => 0,
  /* node-media_gallery-field_folder_layout */     ),
  /* node-media_gallery-field_folder_layout */     'teaser' => array(
  /* node-media_gallery-field_folder_layout */       'label' => 'above',
  /* node-media_gallery-field_folder_layout */       'settings' => array(),
  /* node-media_gallery-field_folder_layout */       'type' => 'hidden',
  /* node-media_gallery-field_folder_layout */       'weight' => 0,
  /* node-media_gallery-field_folder_layout */     ),
  /* node-media_gallery-field_folder_layout */     'teaser_w_thumb_and_search' => array(
  /* node-media_gallery-field_folder_layout */       'label' => 'above',
  /* node-media_gallery-field_folder_layout */       'settings' => array(),
  /* node-media_gallery-field_folder_layout */       'type' => 'hidden',
  /* node-media_gallery-field_folder_layout */       'weight' => 0,
  /* node-media_gallery-field_folder_layout */     ),
  /* node-media_gallery-field_folder_layout */     'teaserthumb' => array(
  /* node-media_gallery-field_folder_layout */       'label' => 'above',
  /* node-media_gallery-field_folder_layout */       'settings' => array(),
  /* node-media_gallery-field_folder_layout */       'type' => 'hidden',
  /* node-media_gallery-field_folder_layout */       'weight' => 0,
  /* node-media_gallery-field_folder_layout */     ),
  /* node-media_gallery-field_folder_layout */     'time_and_location' => array(
  /* node-media_gallery-field_folder_layout */       'label' => 'above',
  /* node-media_gallery-field_folder_layout */       'settings' => array(),
  /* node-media_gallery-field_folder_layout */       'type' => 'hidden',
  /* node-media_gallery-field_folder_layout */       'weight' => 0,
  /* node-media_gallery-field_folder_layout */     ),
  /* node-media_gallery-field_folder_layout */     'title_and_time' => array(
  /* node-media_gallery-field_folder_layout */       'label' => 'above',
  /* node-media_gallery-field_folder_layout */       'settings' => array(),
  /* node-media_gallery-field_folder_layout */       'type' => 'hidden',
  /* node-media_gallery-field_folder_layout */       'weight' => 0,
  /* node-media_gallery-field_folder_layout */     ),
  /* node-media_gallery-field_folder_layout */   ),
  /* node-media_gallery-field_folder_layout */   'entity_type' => 'node',
  /* node-media_gallery-field_folder_layout */   'fences_wrapper' => 'no_wrapper',
  /* node-media_gallery-field_folder_layout */   'field_name' => 'field_folder_layout',
  /* node-media_gallery-field_folder_layout */   'label' => 'Folder layout',
  /* node-media_gallery-field_folder_layout */   'required' => 1,
  /* node-media_gallery-field_folder_layout */   'settings' => array(
  /* node-media_gallery-field_folder_layout */     'user_field_privacy' => FALSE,
  /* node-media_gallery-field_folder_layout */     'user_register_form' => FALSE,
  /* node-media_gallery-field_folder_layout */   ),
  /* node-media_gallery-field_folder_layout */   'widget' => array(
  /* node-media_gallery-field_folder_layout */     'active' => 1,
  /* node-media_gallery-field_folder_layout */     'module' => 'options',
  /* node-media_gallery-field_folder_layout */     'settings' => array(
  /* node-media_gallery-field_folder_layout */       'apply_chosen' => '',
  /* node-media_gallery-field_folder_layout */       'label_help_description' => '',
  /* node-media_gallery-field_folder_layout */     ),
  /* node-media_gallery-field_folder_layout */     'type' => 'options_select',
  /* node-media_gallery-field_folder_layout */     'weight' => 4,
  /* node-media_gallery-field_folder_layout */   ),
  /* node-media_gallery-field_folder_layout */ );

  // Exported field_instance: 'node-media_gallery-field_gn2_simple_access'.
  $field_instances['node-media_gallery-field_gn2_simple_access'] = array(
  /* node-media_gallery-field_gn2_simple_access */   'bundle' => 'media_gallery',
  /* node-media_gallery-field_gn2_simple_access */   'default_value' => array(
  /* node-media_gallery-field_gn2_simple_access */     0 => array(
  /* node-media_gallery-field_gn2_simple_access */       'value' => 'group',
  /* node-media_gallery-field_gn2_simple_access */     ),
  /* node-media_gallery-field_gn2_simple_access */   ),
  /* node-media_gallery-field_gn2_simple_access */   'deleted' => 0,
  /* node-media_gallery-field_gn2_simple_access */   'description' => '',
  /* node-media_gallery-field_gn2_simple_access */   'display' => array(
  /* node-media_gallery-field_gn2_simple_access */     'default' => array(
  /* node-media_gallery-field_gn2_simple_access */       'label' => 'above',
  /* node-media_gallery-field_gn2_simple_access */       'module' => 'list',
  /* node-media_gallery-field_gn2_simple_access */       'settings' => array(
  /* node-media_gallery-field_gn2_simple_access */         'field_formatter_class' => '',
  /* node-media_gallery-field_gn2_simple_access */       ),
  /* node-media_gallery-field_gn2_simple_access */       'type' => 'list_default',
  /* node-media_gallery-field_gn2_simple_access */       'weight' => 15,
  /* node-media_gallery-field_gn2_simple_access */     ),
  /* node-media_gallery-field_gn2_simple_access */     'events_list' => array(
  /* node-media_gallery-field_gn2_simple_access */       'label' => 'above',
  /* node-media_gallery-field_gn2_simple_access */       'settings' => array(),
  /* node-media_gallery-field_gn2_simple_access */       'type' => 'hidden',
  /* node-media_gallery-field_gn2_simple_access */       'weight' => 0,
  /* node-media_gallery-field_gn2_simple_access */     ),
  /* node-media_gallery-field_gn2_simple_access */     'full' => array(
  /* node-media_gallery-field_gn2_simple_access */       'label' => 'above',
  /* node-media_gallery-field_gn2_simple_access */       'settings' => array(),
  /* node-media_gallery-field_gn2_simple_access */       'type' => 'hidden',
  /* node-media_gallery-field_gn2_simple_access */       'weight' => 5,
  /* node-media_gallery-field_gn2_simple_access */     ),
  /* node-media_gallery-field_gn2_simple_access */     'media_gallery_block' => array(
  /* node-media_gallery-field_gn2_simple_access */       'label' => 'above',
  /* node-media_gallery-field_gn2_simple_access */       'settings' => array(),
  /* node-media_gallery-field_gn2_simple_access */       'type' => 'hidden',
  /* node-media_gallery-field_gn2_simple_access */       'weight' => 0,
  /* node-media_gallery-field_gn2_simple_access */     ),
  /* node-media_gallery-field_gn2_simple_access */     'one_column_teaser' => array(
  /* node-media_gallery-field_gn2_simple_access */       'label' => 'above',
  /* node-media_gallery-field_gn2_simple_access */       'settings' => array(),
  /* node-media_gallery-field_gn2_simple_access */       'type' => 'hidden',
  /* node-media_gallery-field_gn2_simple_access */       'weight' => 0,
  /* node-media_gallery-field_gn2_simple_access */     ),
  /* node-media_gallery-field_gn2_simple_access */     'post_teaser_group_landing_page' => array(
  /* node-media_gallery-field_gn2_simple_access */       'label' => 'above',
  /* node-media_gallery-field_gn2_simple_access */       'settings' => array(),
  /* node-media_gallery-field_gn2_simple_access */       'type' => 'hidden',
  /* node-media_gallery-field_gn2_simple_access */       'weight' => 0,
  /* node-media_gallery-field_gn2_simple_access */     ),
  /* node-media_gallery-field_gn2_simple_access */     'sidebar_' => array(
  /* node-media_gallery-field_gn2_simple_access */       'label' => 'above',
  /* node-media_gallery-field_gn2_simple_access */       'settings' => array(),
  /* node-media_gallery-field_gn2_simple_access */       'type' => 'hidden',
  /* node-media_gallery-field_gn2_simple_access */       'weight' => 0,
  /* node-media_gallery-field_gn2_simple_access */     ),
  /* node-media_gallery-field_gn2_simple_access */     'sidebar_teaser' => array(
  /* node-media_gallery-field_gn2_simple_access */       'label' => 'above',
  /* node-media_gallery-field_gn2_simple_access */       'settings' => array(),
  /* node-media_gallery-field_gn2_simple_access */       'type' => 'hidden',
  /* node-media_gallery-field_gn2_simple_access */       'weight' => 0,
  /* node-media_gallery-field_gn2_simple_access */     ),
  /* node-media_gallery-field_gn2_simple_access */     'sidebar_teaser_v2' => array(
  /* node-media_gallery-field_gn2_simple_access */       'label' => 'above',
  /* node-media_gallery-field_gn2_simple_access */       'settings' => array(),
  /* node-media_gallery-field_gn2_simple_access */       'type' => 'hidden',
  /* node-media_gallery-field_gn2_simple_access */       'weight' => 0,
  /* node-media_gallery-field_gn2_simple_access */     ),
  /* node-media_gallery-field_gn2_simple_access */     'teaser' => array(
  /* node-media_gallery-field_gn2_simple_access */       'label' => 'above',
  /* node-media_gallery-field_gn2_simple_access */       'settings' => array(),
  /* node-media_gallery-field_gn2_simple_access */       'type' => 'hidden',
  /* node-media_gallery-field_gn2_simple_access */       'weight' => 0,
  /* node-media_gallery-field_gn2_simple_access */     ),
  /* node-media_gallery-field_gn2_simple_access */     'teaser_w_thumb_and_search' => array(
  /* node-media_gallery-field_gn2_simple_access */       'label' => 'above',
  /* node-media_gallery-field_gn2_simple_access */       'settings' => array(),
  /* node-media_gallery-field_gn2_simple_access */       'type' => 'hidden',
  /* node-media_gallery-field_gn2_simple_access */       'weight' => 0,
  /* node-media_gallery-field_gn2_simple_access */     ),
  /* node-media_gallery-field_gn2_simple_access */     'teaserthumb' => array(
  /* node-media_gallery-field_gn2_simple_access */       'label' => 'above',
  /* node-media_gallery-field_gn2_simple_access */       'settings' => array(),
  /* node-media_gallery-field_gn2_simple_access */       'type' => 'hidden',
  /* node-media_gallery-field_gn2_simple_access */       'weight' => 0,
  /* node-media_gallery-field_gn2_simple_access */     ),
  /* node-media_gallery-field_gn2_simple_access */     'time_and_location' => array(
  /* node-media_gallery-field_gn2_simple_access */       'label' => 'above',
  /* node-media_gallery-field_gn2_simple_access */       'settings' => array(),
  /* node-media_gallery-field_gn2_simple_access */       'type' => 'hidden',
  /* node-media_gallery-field_gn2_simple_access */       'weight' => 0,
  /* node-media_gallery-field_gn2_simple_access */     ),
  /* node-media_gallery-field_gn2_simple_access */     'title_and_time' => array(
  /* node-media_gallery-field_gn2_simple_access */       'label' => 'above',
  /* node-media_gallery-field_gn2_simple_access */       'settings' => array(),
  /* node-media_gallery-field_gn2_simple_access */       'type' => 'hidden',
  /* node-media_gallery-field_gn2_simple_access */       'weight' => 0,
  /* node-media_gallery-field_gn2_simple_access */     ),
  /* node-media_gallery-field_gn2_simple_access */   ),
  /* node-media_gallery-field_gn2_simple_access */   'entity_type' => 'node',
  /* node-media_gallery-field_gn2_simple_access */   'fences_wrapper' => 'no_wrapper',
  /* node-media_gallery-field_gn2_simple_access */   'field_name' => 'field_gn2_simple_access',
  /* node-media_gallery-field_gn2_simple_access */   'label' => 'Who can see this content?',
  /* node-media_gallery-field_gn2_simple_access */   'required' => 1,
  /* node-media_gallery-field_gn2_simple_access */   'settings' => array(
  /* node-media_gallery-field_gn2_simple_access */     'user_field_privacy' => FALSE,
  /* node-media_gallery-field_gn2_simple_access */     'user_register_form' => FALSE,
  /* node-media_gallery-field_gn2_simple_access */   ),
  /* node-media_gallery-field_gn2_simple_access */   'widget' => array(
  /* node-media_gallery-field_gn2_simple_access */     'active' => 1,
  /* node-media_gallery-field_gn2_simple_access */     'module' => 'options',
  /* node-media_gallery-field_gn2_simple_access */     'settings' => array(
  /* node-media_gallery-field_gn2_simple_access */       'label_help_description' => '',
  /* node-media_gallery-field_gn2_simple_access */     ),
  /* node-media_gallery-field_gn2_simple_access */     'type' => 'options_buttons',
  /* node-media_gallery-field_gn2_simple_access */     'weight' => 13,
  /* node-media_gallery-field_gn2_simple_access */   ),
  /* node-media_gallery-field_gn2_simple_access */ );

  // Exported field_instance: 'node-media_gallery-field_region'.
  $field_instances['node-media_gallery-field_region'] = array(
  /* node-media_gallery-field_region */   'bundle' => 'media_gallery',
  /* node-media_gallery-field_region */   'default_value' => NULL,
  /* node-media_gallery-field_region */   'deleted' => 0,
  /* node-media_gallery-field_region */   'description' => '',
  /* node-media_gallery-field_region */   'display' => array(
  /* node-media_gallery-field_region */     'default' => array(
  /* node-media_gallery-field_region */       'label' => 'above',
  /* node-media_gallery-field_region */       'module' => 'taxonomy',
  /* node-media_gallery-field_region */       'settings' => array(
  /* node-media_gallery-field_region */         'field_formatter_class' => '',
  /* node-media_gallery-field_region */       ),
  /* node-media_gallery-field_region */       'type' => 'taxonomy_term_reference_link',
  /* node-media_gallery-field_region */       'weight' => 19,
  /* node-media_gallery-field_region */     ),
  /* node-media_gallery-field_region */     'events_list' => array(
  /* node-media_gallery-field_region */       'label' => 'above',
  /* node-media_gallery-field_region */       'settings' => array(),
  /* node-media_gallery-field_region */       'type' => 'hidden',
  /* node-media_gallery-field_region */       'weight' => 0,
  /* node-media_gallery-field_region */     ),
  /* node-media_gallery-field_region */     'full' => array(
  /* node-media_gallery-field_region */       'label' => 'above',
  /* node-media_gallery-field_region */       'settings' => array(),
  /* node-media_gallery-field_region */       'type' => 'hidden',
  /* node-media_gallery-field_region */       'weight' => 4,
  /* node-media_gallery-field_region */     ),
  /* node-media_gallery-field_region */     'media_gallery_block' => array(
  /* node-media_gallery-field_region */       'label' => 'above',
  /* node-media_gallery-field_region */       'settings' => array(),
  /* node-media_gallery-field_region */       'type' => 'hidden',
  /* node-media_gallery-field_region */       'weight' => 0,
  /* node-media_gallery-field_region */     ),
  /* node-media_gallery-field_region */     'one_column_teaser' => array(
  /* node-media_gallery-field_region */       'label' => 'above',
  /* node-media_gallery-field_region */       'settings' => array(),
  /* node-media_gallery-field_region */       'type' => 'hidden',
  /* node-media_gallery-field_region */       'weight' => 0,
  /* node-media_gallery-field_region */     ),
  /* node-media_gallery-field_region */     'post_teaser_group_landing_page' => array(
  /* node-media_gallery-field_region */       'label' => 'above',
  /* node-media_gallery-field_region */       'settings' => array(),
  /* node-media_gallery-field_region */       'type' => 'hidden',
  /* node-media_gallery-field_region */       'weight' => 0,
  /* node-media_gallery-field_region */     ),
  /* node-media_gallery-field_region */     'sidebar_' => array(
  /* node-media_gallery-field_region */       'label' => 'above',
  /* node-media_gallery-field_region */       'settings' => array(),
  /* node-media_gallery-field_region */       'type' => 'hidden',
  /* node-media_gallery-field_region */       'weight' => 0,
  /* node-media_gallery-field_region */     ),
  /* node-media_gallery-field_region */     'sidebar_teaser_v2' => array(
  /* node-media_gallery-field_region */       'label' => 'above',
  /* node-media_gallery-field_region */       'settings' => array(),
  /* node-media_gallery-field_region */       'type' => 'hidden',
  /* node-media_gallery-field_region */       'weight' => 0,
  /* node-media_gallery-field_region */     ),
  /* node-media_gallery-field_region */     'teaser' => array(
  /* node-media_gallery-field_region */       'label' => 'above',
  /* node-media_gallery-field_region */       'settings' => array(),
  /* node-media_gallery-field_region */       'type' => 'hidden',
  /* node-media_gallery-field_region */       'weight' => 0,
  /* node-media_gallery-field_region */     ),
  /* node-media_gallery-field_region */     'teaser_w_thumb_and_search' => array(
  /* node-media_gallery-field_region */       'label' => 'above',
  /* node-media_gallery-field_region */       'settings' => array(),
  /* node-media_gallery-field_region */       'type' => 'hidden',
  /* node-media_gallery-field_region */       'weight' => 0,
  /* node-media_gallery-field_region */     ),
  /* node-media_gallery-field_region */     'teaserthumb' => array(
  /* node-media_gallery-field_region */       'label' => 'above',
  /* node-media_gallery-field_region */       'settings' => array(),
  /* node-media_gallery-field_region */       'type' => 'hidden',
  /* node-media_gallery-field_region */       'weight' => 0,
  /* node-media_gallery-field_region */     ),
  /* node-media_gallery-field_region */     'time_and_location' => array(
  /* node-media_gallery-field_region */       'label' => 'above',
  /* node-media_gallery-field_region */       'settings' => array(),
  /* node-media_gallery-field_region */       'type' => 'hidden',
  /* node-media_gallery-field_region */       'weight' => 0,
  /* node-media_gallery-field_region */     ),
  /* node-media_gallery-field_region */     'title_and_time' => array(
  /* node-media_gallery-field_region */       'label' => 'above',
  /* node-media_gallery-field_region */       'settings' => array(),
  /* node-media_gallery-field_region */       'type' => 'hidden',
  /* node-media_gallery-field_region */       'weight' => 0,
  /* node-media_gallery-field_region */     ),
  /* node-media_gallery-field_region */   ),
  /* node-media_gallery-field_region */   'entity_type' => 'node',
  /* node-media_gallery-field_region */   'fences_wrapper' => 'no_wrapper',
  /* node-media_gallery-field_region */   'field_name' => 'field_region',
  /* node-media_gallery-field_region */   'label' => 'Regions',
  /* node-media_gallery-field_region */   'required' => 0,
  /* node-media_gallery-field_region */   'settings' => array(
  /* node-media_gallery-field_region */     'user_field_privacy' => FALSE,
  /* node-media_gallery-field_region */     'user_register_form' => FALSE,
  /* node-media_gallery-field_region */   ),
  /* node-media_gallery-field_region */   'widget' => array(
  /* node-media_gallery-field_region */     'active' => 1,
  /* node-media_gallery-field_region */     'module' => 'term_reference_tree',
  /* node-media_gallery-field_region */     'settings' => array(
  /* node-media_gallery-field_region */       'cascading_selection' => 0,
  /* node-media_gallery-field_region */       'filter_view' => '',
  /* node-media_gallery-field_region */       'label_help_description' => '',
  /* node-media_gallery-field_region */       'leaves_only' => 0,
  /* node-media_gallery-field_region */       'max_depth' => '',
  /* node-media_gallery-field_region */       'parent_term_id' => '',
  /* node-media_gallery-field_region */       'select_parents' => 0,
  /* node-media_gallery-field_region */       'start_minimized' => 0,
  /* node-media_gallery-field_region */       'token_display' => '',
  /* node-media_gallery-field_region */       'track_list' => 0,
  /* node-media_gallery-field_region */     ),
  /* node-media_gallery-field_region */     'type' => 'term_reference_tree',
  /* node-media_gallery-field_region */     'weight' => 5,
  /* node-media_gallery-field_region */   ),
  /* node-media_gallery-field_region */ );

  // Exported field_instance: 'node-media_gallery-field_topic'.
  $field_instances['node-media_gallery-field_topic'] = array(
  /* node-media_gallery-field_topic */   'bundle' => 'media_gallery',
  /* node-media_gallery-field_topic */   'default_value' => NULL,
  /* node-media_gallery-field_topic */   'deleted' => 0,
  /* node-media_gallery-field_topic */   'description' => '',
  /* node-media_gallery-field_topic */   'display' => array(
  /* node-media_gallery-field_topic */     'default' => array(
  /* node-media_gallery-field_topic */       'label' => 'above',
  /* node-media_gallery-field_topic */       'module' => 'taxonomy',
  /* node-media_gallery-field_topic */       'settings' => array(
  /* node-media_gallery-field_topic */         'field_formatter_class' => '',
  /* node-media_gallery-field_topic */       ),
  /* node-media_gallery-field_topic */       'type' => 'taxonomy_term_reference_link',
  /* node-media_gallery-field_topic */       'weight' => 17,
  /* node-media_gallery-field_topic */     ),
  /* node-media_gallery-field_topic */     'events_list' => array(
  /* node-media_gallery-field_topic */       'label' => 'above',
  /* node-media_gallery-field_topic */       'settings' => array(),
  /* node-media_gallery-field_topic */       'type' => 'hidden',
  /* node-media_gallery-field_topic */       'weight' => 0,
  /* node-media_gallery-field_topic */     ),
  /* node-media_gallery-field_topic */     'full' => array(
  /* node-media_gallery-field_topic */       'label' => 'above',
  /* node-media_gallery-field_topic */       'settings' => array(),
  /* node-media_gallery-field_topic */       'type' => 'hidden',
  /* node-media_gallery-field_topic */       'weight' => 6,
  /* node-media_gallery-field_topic */     ),
  /* node-media_gallery-field_topic */     'media_gallery_block' => array(
  /* node-media_gallery-field_topic */       'label' => 'above',
  /* node-media_gallery-field_topic */       'settings' => array(),
  /* node-media_gallery-field_topic */       'type' => 'hidden',
  /* node-media_gallery-field_topic */       'weight' => 0,
  /* node-media_gallery-field_topic */     ),
  /* node-media_gallery-field_topic */     'one_column_teaser' => array(
  /* node-media_gallery-field_topic */       'label' => 'above',
  /* node-media_gallery-field_topic */       'settings' => array(),
  /* node-media_gallery-field_topic */       'type' => 'hidden',
  /* node-media_gallery-field_topic */       'weight' => 0,
  /* node-media_gallery-field_topic */     ),
  /* node-media_gallery-field_topic */     'post_teaser_group_landing_page' => array(
  /* node-media_gallery-field_topic */       'label' => 'above',
  /* node-media_gallery-field_topic */       'settings' => array(),
  /* node-media_gallery-field_topic */       'type' => 'hidden',
  /* node-media_gallery-field_topic */       'weight' => 0,
  /* node-media_gallery-field_topic */     ),
  /* node-media_gallery-field_topic */     'sidebar_' => array(
  /* node-media_gallery-field_topic */       'label' => 'above',
  /* node-media_gallery-field_topic */       'settings' => array(),
  /* node-media_gallery-field_topic */       'type' => 'hidden',
  /* node-media_gallery-field_topic */       'weight' => 0,
  /* node-media_gallery-field_topic */     ),
  /* node-media_gallery-field_topic */     'sidebar_teaser' => array(
  /* node-media_gallery-field_topic */       'label' => 'above',
  /* node-media_gallery-field_topic */       'settings' => array(),
  /* node-media_gallery-field_topic */       'type' => 'hidden',
  /* node-media_gallery-field_topic */       'weight' => 0,
  /* node-media_gallery-field_topic */     ),
  /* node-media_gallery-field_topic */     'sidebar_teaser_v2' => array(
  /* node-media_gallery-field_topic */       'label' => 'above',
  /* node-media_gallery-field_topic */       'settings' => array(),
  /* node-media_gallery-field_topic */       'type' => 'hidden',
  /* node-media_gallery-field_topic */       'weight' => 0,
  /* node-media_gallery-field_topic */     ),
  /* node-media_gallery-field_topic */     'teaser' => array(
  /* node-media_gallery-field_topic */       'label' => 'above',
  /* node-media_gallery-field_topic */       'settings' => array(),
  /* node-media_gallery-field_topic */       'type' => 'hidden',
  /* node-media_gallery-field_topic */       'weight' => 0,
  /* node-media_gallery-field_topic */     ),
  /* node-media_gallery-field_topic */     'teaser_w_thumb_and_search' => array(
  /* node-media_gallery-field_topic */       'label' => 'above',
  /* node-media_gallery-field_topic */       'settings' => array(),
  /* node-media_gallery-field_topic */       'type' => 'hidden',
  /* node-media_gallery-field_topic */       'weight' => 0,
  /* node-media_gallery-field_topic */     ),
  /* node-media_gallery-field_topic */     'teaserthumb' => array(
  /* node-media_gallery-field_topic */       'label' => 'above',
  /* node-media_gallery-field_topic */       'settings' => array(),
  /* node-media_gallery-field_topic */       'type' => 'hidden',
  /* node-media_gallery-field_topic */       'weight' => 0,
  /* node-media_gallery-field_topic */     ),
  /* node-media_gallery-field_topic */     'time_and_location' => array(
  /* node-media_gallery-field_topic */       'label' => 'above',
  /* node-media_gallery-field_topic */       'settings' => array(),
  /* node-media_gallery-field_topic */       'type' => 'hidden',
  /* node-media_gallery-field_topic */       'weight' => 0,
  /* node-media_gallery-field_topic */     ),
  /* node-media_gallery-field_topic */     'title_and_time' => array(
  /* node-media_gallery-field_topic */       'label' => 'above',
  /* node-media_gallery-field_topic */       'settings' => array(),
  /* node-media_gallery-field_topic */       'type' => 'hidden',
  /* node-media_gallery-field_topic */       'weight' => 0,
  /* node-media_gallery-field_topic */     ),
  /* node-media_gallery-field_topic */   ),
  /* node-media_gallery-field_topic */   'entity_type' => 'node',
  /* node-media_gallery-field_topic */   'fences_wrapper' => 'no_wrapper',
  /* node-media_gallery-field_topic */   'field_name' => 'field_topic',
  /* node-media_gallery-field_topic */   'label' => 'Topics',
  /* node-media_gallery-field_topic */   'required' => 0,
  /* node-media_gallery-field_topic */   'settings' => array(
  /* node-media_gallery-field_topic */     'user_field_privacy' => FALSE,
  /* node-media_gallery-field_topic */     'user_register_form' => FALSE,
  /* node-media_gallery-field_topic */   ),
  /* node-media_gallery-field_topic */   'widget' => array(
  /* node-media_gallery-field_topic */     'active' => 1,
  /* node-media_gallery-field_topic */     'module' => 'term_reference_tree',
  /* node-media_gallery-field_topic */     'settings' => array(
  /* node-media_gallery-field_topic */       'cascading_selection' => 0,
  /* node-media_gallery-field_topic */       'filter_view' => '',
  /* node-media_gallery-field_topic */       'label_help_description' => '',
  /* node-media_gallery-field_topic */       'leaves_only' => 0,
  /* node-media_gallery-field_topic */       'max_depth' => '',
  /* node-media_gallery-field_topic */       'parent_term_id' => '',
  /* node-media_gallery-field_topic */       'select_parents' => 0,
  /* node-media_gallery-field_topic */       'start_minimized' => 0,
  /* node-media_gallery-field_topic */       'token_display' => '',
  /* node-media_gallery-field_topic */       'track_list' => 0,
  /* node-media_gallery-field_topic */     ),
  /* node-media_gallery-field_topic */     'type' => 'term_reference_tree',
  /* node-media_gallery-field_topic */     'weight' => 3,
  /* node-media_gallery-field_topic */   ),
  /* node-media_gallery-field_topic */ );

  // Exported field_instance: 'node-media_gallery-group_content_access'.
  $field_instances['node-media_gallery-group_content_access'] = array(
  /* node-media_gallery-group_content_access */   'bundle' => 'media_gallery',
  /* node-media_gallery-group_content_access */   'default_value' => array(
  /* node-media_gallery-group_content_access */     0 => array(
  /* node-media_gallery-group_content_access */       'value' => 0,
  /* node-media_gallery-group_content_access */     ),
  /* node-media_gallery-group_content_access */   ),
  /* node-media_gallery-group_content_access */   'deleted' => 0,
  /* node-media_gallery-group_content_access */   'description' => '',
  /* node-media_gallery-group_content_access */   'display' => array(
  /* node-media_gallery-group_content_access */     'default' => array(
  /* node-media_gallery-group_content_access */       'label' => 'above',
  /* node-media_gallery-group_content_access */       'module' => 'list',
  /* node-media_gallery-group_content_access */       'settings' => array(
  /* node-media_gallery-group_content_access */         'field_formatter_class' => '',
  /* node-media_gallery-group_content_access */       ),
  /* node-media_gallery-group_content_access */       'type' => 'list_default',
  /* node-media_gallery-group_content_access */       'weight' => 14,
  /* node-media_gallery-group_content_access */     ),
  /* node-media_gallery-group_content_access */     'events_list' => array(
  /* node-media_gallery-group_content_access */       'label' => 'above',
  /* node-media_gallery-group_content_access */       'settings' => array(),
  /* node-media_gallery-group_content_access */       'type' => 'hidden',
  /* node-media_gallery-group_content_access */       'weight' => 0,
  /* node-media_gallery-group_content_access */     ),
  /* node-media_gallery-group_content_access */     'full' => array(
  /* node-media_gallery-group_content_access */       'label' => 'above',
  /* node-media_gallery-group_content_access */       'settings' => array(),
  /* node-media_gallery-group_content_access */       'type' => 'hidden',
  /* node-media_gallery-group_content_access */       'weight' => 9,
  /* node-media_gallery-group_content_access */     ),
  /* node-media_gallery-group_content_access */     'media_gallery_block' => array(
  /* node-media_gallery-group_content_access */       'label' => 'above',
  /* node-media_gallery-group_content_access */       'settings' => array(),
  /* node-media_gallery-group_content_access */       'type' => 'hidden',
  /* node-media_gallery-group_content_access */       'weight' => 0,
  /* node-media_gallery-group_content_access */     ),
  /* node-media_gallery-group_content_access */     'one_column_teaser' => array(
  /* node-media_gallery-group_content_access */       'label' => 'above',
  /* node-media_gallery-group_content_access */       'settings' => array(),
  /* node-media_gallery-group_content_access */       'type' => 'hidden',
  /* node-media_gallery-group_content_access */       'weight' => 0,
  /* node-media_gallery-group_content_access */     ),
  /* node-media_gallery-group_content_access */     'post_teaser_group_landing_page' => array(
  /* node-media_gallery-group_content_access */       'label' => 'above',
  /* node-media_gallery-group_content_access */       'settings' => array(),
  /* node-media_gallery-group_content_access */       'type' => 'hidden',
  /* node-media_gallery-group_content_access */       'weight' => 0,
  /* node-media_gallery-group_content_access */     ),
  /* node-media_gallery-group_content_access */     'sidebar_' => array(
  /* node-media_gallery-group_content_access */       'label' => 'above',
  /* node-media_gallery-group_content_access */       'settings' => array(),
  /* node-media_gallery-group_content_access */       'type' => 'hidden',
  /* node-media_gallery-group_content_access */       'weight' => 0,
  /* node-media_gallery-group_content_access */     ),
  /* node-media_gallery-group_content_access */     'sidebar_teaser' => array(
  /* node-media_gallery-group_content_access */       'label' => 'above',
  /* node-media_gallery-group_content_access */       'settings' => array(),
  /* node-media_gallery-group_content_access */       'type' => 'hidden',
  /* node-media_gallery-group_content_access */       'weight' => 0,
  /* node-media_gallery-group_content_access */     ),
  /* node-media_gallery-group_content_access */     'sidebar_teaser_v2' => array(
  /* node-media_gallery-group_content_access */       'label' => 'above',
  /* node-media_gallery-group_content_access */       'settings' => array(),
  /* node-media_gallery-group_content_access */       'type' => 'hidden',
  /* node-media_gallery-group_content_access */       'weight' => 0,
  /* node-media_gallery-group_content_access */     ),
  /* node-media_gallery-group_content_access */     'teaser' => array(
  /* node-media_gallery-group_content_access */       'label' => 'above',
  /* node-media_gallery-group_content_access */       'settings' => array(),
  /* node-media_gallery-group_content_access */       'type' => 'hidden',
  /* node-media_gallery-group_content_access */       'weight' => 0,
  /* node-media_gallery-group_content_access */     ),
  /* node-media_gallery-group_content_access */     'teaser_w_thumb_and_search' => array(
  /* node-media_gallery-group_content_access */       'label' => 'above',
  /* node-media_gallery-group_content_access */       'settings' => array(),
  /* node-media_gallery-group_content_access */       'type' => 'hidden',
  /* node-media_gallery-group_content_access */       'weight' => 0,
  /* node-media_gallery-group_content_access */     ),
  /* node-media_gallery-group_content_access */     'teaserthumb' => array(
  /* node-media_gallery-group_content_access */       'label' => 'above',
  /* node-media_gallery-group_content_access */       'settings' => array(),
  /* node-media_gallery-group_content_access */       'type' => 'hidden',
  /* node-media_gallery-group_content_access */       'weight' => 0,
  /* node-media_gallery-group_content_access */     ),
  /* node-media_gallery-group_content_access */     'time_and_location' => array(
  /* node-media_gallery-group_content_access */       'label' => 'above',
  /* node-media_gallery-group_content_access */       'settings' => array(),
  /* node-media_gallery-group_content_access */       'type' => 'hidden',
  /* node-media_gallery-group_content_access */       'weight' => 0,
  /* node-media_gallery-group_content_access */     ),
  /* node-media_gallery-group_content_access */     'title_and_time' => array(
  /* node-media_gallery-group_content_access */       'label' => 'above',
  /* node-media_gallery-group_content_access */       'settings' => array(),
  /* node-media_gallery-group_content_access */       'type' => 'hidden',
  /* node-media_gallery-group_content_access */       'weight' => 0,
  /* node-media_gallery-group_content_access */     ),
  /* node-media_gallery-group_content_access */   ),
  /* node-media_gallery-group_content_access */   'entity_type' => 'node',
  /* node-media_gallery-group_content_access */   'field_name' => 'group_content_access',
  /* node-media_gallery-group_content_access */   'label' => 'Group content visibility',
  /* node-media_gallery-group_content_access */   'required' => TRUE,
  /* node-media_gallery-group_content_access */   'settings' => array(
  /* node-media_gallery-group_content_access */     'user_field_privacy' => FALSE,
  /* node-media_gallery-group_content_access */     'user_register_form' => FALSE,
  /* node-media_gallery-group_content_access */   ),
  /* node-media_gallery-group_content_access */   'view modes' => array(
  /* node-media_gallery-group_content_access */     'full' => array(
  /* node-media_gallery-group_content_access */       'label' => 'above',
  /* node-media_gallery-group_content_access */       'type' => 'list_default',
  /* node-media_gallery-group_content_access */     ),
  /* node-media_gallery-group_content_access */     'teaser' => array(
  /* node-media_gallery-group_content_access */       'label' => 'above',
  /* node-media_gallery-group_content_access */       'type' => 'list_default',
  /* node-media_gallery-group_content_access */     ),
  /* node-media_gallery-group_content_access */   ),
  /* node-media_gallery-group_content_access */   'widget' => array(
  /* node-media_gallery-group_content_access */     'module' => 'options',
  /* node-media_gallery-group_content_access */     'settings' => array(
  /* node-media_gallery-group_content_access */       'apply_chosen' => '',
  /* node-media_gallery-group_content_access */     ),
  /* node-media_gallery-group_content_access */     'type' => 'options_select',
  /* node-media_gallery-group_content_access */     'weight' => 12,
  /* node-media_gallery-group_content_access */   ),
  /* node-media_gallery-group_content_access */   'widget_type' => 'options_select',
  /* node-media_gallery-group_content_access */ );

  // Exported field_instance: 'node-media_gallery-media_gallery_allow_download'.
  $field_instances['node-media_gallery-media_gallery_allow_download'] = array(
  /* node-media_gallery-media_gallery_allow_download */   'bundle' => 'media_gallery',
  /* node-media_gallery-media_gallery_allow_download */   'default_value' => array(
  /* node-media_gallery-media_gallery_allow_download */     0 => array(
  /* node-media_gallery-media_gallery_allow_download */       'value' => 1,
  /* node-media_gallery-media_gallery_allow_download */     ),
  /* node-media_gallery-media_gallery_allow_download */   ),
  /* node-media_gallery-media_gallery_allow_download */   'deleted' => 0,
  /* node-media_gallery-media_gallery_allow_download */   'description' => 'Display a "download original image" link',
  /* node-media_gallery-media_gallery_allow_download */   'display' => array(
  /* node-media_gallery-media_gallery_allow_download */     'default' => array(
  /* node-media_gallery-media_gallery_allow_download */       'label' => 'hidden',
  /* node-media_gallery-media_gallery_allow_download */       'settings' => array(),
  /* node-media_gallery-media_gallery_allow_download */       'type' => 'hidden',
  /* node-media_gallery-media_gallery_allow_download */       'weight' => 8,
  /* node-media_gallery-media_gallery_allow_download */     ),
  /* node-media_gallery-media_gallery_allow_download */     'events_list' => array(
  /* node-media_gallery-media_gallery_allow_download */       'label' => 'above',
  /* node-media_gallery-media_gallery_allow_download */       'settings' => array(),
  /* node-media_gallery-media_gallery_allow_download */       'type' => 'hidden',
  /* node-media_gallery-media_gallery_allow_download */       'weight' => 0,
  /* node-media_gallery-media_gallery_allow_download */     ),
  /* node-media_gallery-media_gallery_allow_download */     'full' => array(
  /* node-media_gallery-media_gallery_allow_download */       'label' => 'hidden',
  /* node-media_gallery-media_gallery_allow_download */       'settings' => array(),
  /* node-media_gallery-media_gallery_allow_download */       'type' => 'hidden',
  /* node-media_gallery-media_gallery_allow_download */       'weight' => 17,
  /* node-media_gallery-media_gallery_allow_download */     ),
  /* node-media_gallery-media_gallery_allow_download */     'media_gallery_block' => array(
  /* node-media_gallery-media_gallery_allow_download */       'label' => 'hidden',
  /* node-media_gallery-media_gallery_allow_download */       'settings' => array(),
  /* node-media_gallery-media_gallery_allow_download */       'type' => 'hidden',
  /* node-media_gallery-media_gallery_allow_download */       'weight' => 8,
  /* node-media_gallery-media_gallery_allow_download */     ),
  /* node-media_gallery-media_gallery_allow_download */     'one_column_teaser' => array(
  /* node-media_gallery-media_gallery_allow_download */       'label' => 'above',
  /* node-media_gallery-media_gallery_allow_download */       'settings' => array(),
  /* node-media_gallery-media_gallery_allow_download */       'type' => 'hidden',
  /* node-media_gallery-media_gallery_allow_download */       'weight' => 0,
  /* node-media_gallery-media_gallery_allow_download */     ),
  /* node-media_gallery-media_gallery_allow_download */     'post_teaser_group_landing_page' => array(
  /* node-media_gallery-media_gallery_allow_download */       'label' => 'above',
  /* node-media_gallery-media_gallery_allow_download */       'settings' => array(),
  /* node-media_gallery-media_gallery_allow_download */       'type' => 'hidden',
  /* node-media_gallery-media_gallery_allow_download */       'weight' => 0,
  /* node-media_gallery-media_gallery_allow_download */     ),
  /* node-media_gallery-media_gallery_allow_download */     'sidebar_' => array(
  /* node-media_gallery-media_gallery_allow_download */       'label' => 'above',
  /* node-media_gallery-media_gallery_allow_download */       'settings' => array(),
  /* node-media_gallery-media_gallery_allow_download */       'type' => 'hidden',
  /* node-media_gallery-media_gallery_allow_download */       'weight' => 0,
  /* node-media_gallery-media_gallery_allow_download */     ),
  /* node-media_gallery-media_gallery_allow_download */     'sidebar_teaser' => array(
  /* node-media_gallery-media_gallery_allow_download */       'label' => 'above',
  /* node-media_gallery-media_gallery_allow_download */       'settings' => array(),
  /* node-media_gallery-media_gallery_allow_download */       'type' => 'hidden',
  /* node-media_gallery-media_gallery_allow_download */       'weight' => 0,
  /* node-media_gallery-media_gallery_allow_download */     ),
  /* node-media_gallery-media_gallery_allow_download */     'sidebar_teaser_v2' => array(
  /* node-media_gallery-media_gallery_allow_download */       'label' => 'above',
  /* node-media_gallery-media_gallery_allow_download */       'settings' => array(),
  /* node-media_gallery-media_gallery_allow_download */       'type' => 'hidden',
  /* node-media_gallery-media_gallery_allow_download */       'weight' => 0,
  /* node-media_gallery-media_gallery_allow_download */     ),
  /* node-media_gallery-media_gallery_allow_download */     'teaser' => array(
  /* node-media_gallery-media_gallery_allow_download */       'label' => 'hidden',
  /* node-media_gallery-media_gallery_allow_download */       'settings' => array(),
  /* node-media_gallery-media_gallery_allow_download */       'type' => 'hidden',
  /* node-media_gallery-media_gallery_allow_download */       'weight' => 8,
  /* node-media_gallery-media_gallery_allow_download */     ),
  /* node-media_gallery-media_gallery_allow_download */     'teaser_w_thumb_and_search' => array(
  /* node-media_gallery-media_gallery_allow_download */       'label' => 'above',
  /* node-media_gallery-media_gallery_allow_download */       'settings' => array(),
  /* node-media_gallery-media_gallery_allow_download */       'type' => 'hidden',
  /* node-media_gallery-media_gallery_allow_download */       'weight' => 0,
  /* node-media_gallery-media_gallery_allow_download */     ),
  /* node-media_gallery-media_gallery_allow_download */     'teaserthumb' => array(
  /* node-media_gallery-media_gallery_allow_download */       'label' => 'above',
  /* node-media_gallery-media_gallery_allow_download */       'settings' => array(),
  /* node-media_gallery-media_gallery_allow_download */       'type' => 'hidden',
  /* node-media_gallery-media_gallery_allow_download */       'weight' => 0,
  /* node-media_gallery-media_gallery_allow_download */     ),
  /* node-media_gallery-media_gallery_allow_download */     'time_and_location' => array(
  /* node-media_gallery-media_gallery_allow_download */       'label' => 'above',
  /* node-media_gallery-media_gallery_allow_download */       'settings' => array(),
  /* node-media_gallery-media_gallery_allow_download */       'type' => 'hidden',
  /* node-media_gallery-media_gallery_allow_download */       'weight' => 0,
  /* node-media_gallery-media_gallery_allow_download */     ),
  /* node-media_gallery-media_gallery_allow_download */     'title_and_time' => array(
  /* node-media_gallery-media_gallery_allow_download */       'label' => 'above',
  /* node-media_gallery-media_gallery_allow_download */       'settings' => array(),
  /* node-media_gallery-media_gallery_allow_download */       'type' => 'hidden',
  /* node-media_gallery-media_gallery_allow_download */       'weight' => 0,
  /* node-media_gallery-media_gallery_allow_download */     ),
  /* node-media_gallery-media_gallery_allow_download */   ),
  /* node-media_gallery-media_gallery_allow_download */   'entity_type' => 'node',
  /* node-media_gallery-media_gallery_allow_download */   'field_name' => 'media_gallery_allow_download',
  /* node-media_gallery-media_gallery_allow_download */   'label' => 'Allow downloading of the original image',
  /* node-media_gallery-media_gallery_allow_download */   'required' => FALSE,
  /* node-media_gallery-media_gallery_allow_download */   'settings' => array(
  /* node-media_gallery-media_gallery_allow_download */     'user_field_privacy' => FALSE,
  /* node-media_gallery-media_gallery_allow_download */     'user_register_form' => FALSE,
  /* node-media_gallery-media_gallery_allow_download */   ),
  /* node-media_gallery-media_gallery_allow_download */   'widget' => array(
  /* node-media_gallery-media_gallery_allow_download */     'module' => 'options',
  /* node-media_gallery-media_gallery_allow_download */     'settings' => array(
  /* node-media_gallery-media_gallery_allow_download */       'display_label' => 0,
  /* node-media_gallery-media_gallery_allow_download */     ),
  /* node-media_gallery-media_gallery_allow_download */     'type' => 'options_onoff',
  /* node-media_gallery-media_gallery_allow_download */     'weight' => 18,
  /* node-media_gallery-media_gallery_allow_download */   ),
  /* node-media_gallery-media_gallery_allow_download */ );

  // Exported field_instance: 'node-media_gallery-media_gallery_block_columns'.
  $field_instances['node-media_gallery-media_gallery_block_columns'] = array(
  /* node-media_gallery-media_gallery_block_columns */   'bundle' => 'media_gallery',
  /* node-media_gallery-media_gallery_block_columns */   'default_value' => array(
  /* node-media_gallery-media_gallery_block_columns */     0 => array(
  /* node-media_gallery-media_gallery_block_columns */       'value' => 2,
  /* node-media_gallery-media_gallery_block_columns */     ),
  /* node-media_gallery-media_gallery_block_columns */   ),
  /* node-media_gallery-media_gallery_block_columns */   'deleted' => 0,
  /* node-media_gallery-media_gallery_block_columns */   'description' => '',
  /* node-media_gallery-media_gallery_block_columns */   'display' => array(
  /* node-media_gallery-media_gallery_block_columns */     'default' => array(
  /* node-media_gallery-media_gallery_block_columns */       'label' => 'hidden',
  /* node-media_gallery-media_gallery_block_columns */       'settings' => array(),
  /* node-media_gallery-media_gallery_block_columns */       'type' => 'hidden',
  /* node-media_gallery-media_gallery_block_columns */       'weight' => 10,
  /* node-media_gallery-media_gallery_block_columns */     ),
  /* node-media_gallery-media_gallery_block_columns */     'events_list' => array(
  /* node-media_gallery-media_gallery_block_columns */       'label' => 'above',
  /* node-media_gallery-media_gallery_block_columns */       'settings' => array(),
  /* node-media_gallery-media_gallery_block_columns */       'type' => 'hidden',
  /* node-media_gallery-media_gallery_block_columns */       'weight' => 0,
  /* node-media_gallery-media_gallery_block_columns */     ),
  /* node-media_gallery-media_gallery_block_columns */     'full' => array(
  /* node-media_gallery-media_gallery_block_columns */       'label' => 'hidden',
  /* node-media_gallery-media_gallery_block_columns */       'settings' => array(),
  /* node-media_gallery-media_gallery_block_columns */       'type' => 'hidden',
  /* node-media_gallery-media_gallery_block_columns */       'weight' => 19,
  /* node-media_gallery-media_gallery_block_columns */     ),
  /* node-media_gallery-media_gallery_block_columns */     'media_gallery_block' => array(
  /* node-media_gallery-media_gallery_block_columns */       'label' => 'hidden',
  /* node-media_gallery-media_gallery_block_columns */       'settings' => array(),
  /* node-media_gallery-media_gallery_block_columns */       'type' => 'hidden',
  /* node-media_gallery-media_gallery_block_columns */       'weight' => 10,
  /* node-media_gallery-media_gallery_block_columns */     ),
  /* node-media_gallery-media_gallery_block_columns */     'one_column_teaser' => array(
  /* node-media_gallery-media_gallery_block_columns */       'label' => 'above',
  /* node-media_gallery-media_gallery_block_columns */       'settings' => array(),
  /* node-media_gallery-media_gallery_block_columns */       'type' => 'hidden',
  /* node-media_gallery-media_gallery_block_columns */       'weight' => 0,
  /* node-media_gallery-media_gallery_block_columns */     ),
  /* node-media_gallery-media_gallery_block_columns */     'post_teaser_group_landing_page' => array(
  /* node-media_gallery-media_gallery_block_columns */       'label' => 'above',
  /* node-media_gallery-media_gallery_block_columns */       'settings' => array(),
  /* node-media_gallery-media_gallery_block_columns */       'type' => 'hidden',
  /* node-media_gallery-media_gallery_block_columns */       'weight' => 0,
  /* node-media_gallery-media_gallery_block_columns */     ),
  /* node-media_gallery-media_gallery_block_columns */     'sidebar_' => array(
  /* node-media_gallery-media_gallery_block_columns */       'label' => 'above',
  /* node-media_gallery-media_gallery_block_columns */       'settings' => array(),
  /* node-media_gallery-media_gallery_block_columns */       'type' => 'hidden',
  /* node-media_gallery-media_gallery_block_columns */       'weight' => 0,
  /* node-media_gallery-media_gallery_block_columns */     ),
  /* node-media_gallery-media_gallery_block_columns */     'sidebar_teaser' => array(
  /* node-media_gallery-media_gallery_block_columns */       'label' => 'above',
  /* node-media_gallery-media_gallery_block_columns */       'settings' => array(),
  /* node-media_gallery-media_gallery_block_columns */       'type' => 'hidden',
  /* node-media_gallery-media_gallery_block_columns */       'weight' => 0,
  /* node-media_gallery-media_gallery_block_columns */     ),
  /* node-media_gallery-media_gallery_block_columns */     'sidebar_teaser_v2' => array(
  /* node-media_gallery-media_gallery_block_columns */       'label' => 'above',
  /* node-media_gallery-media_gallery_block_columns */       'settings' => array(),
  /* node-media_gallery-media_gallery_block_columns */       'type' => 'hidden',
  /* node-media_gallery-media_gallery_block_columns */       'weight' => 0,
  /* node-media_gallery-media_gallery_block_columns */     ),
  /* node-media_gallery-media_gallery_block_columns */     'teaser' => array(
  /* node-media_gallery-media_gallery_block_columns */       'label' => 'hidden',
  /* node-media_gallery-media_gallery_block_columns */       'settings' => array(),
  /* node-media_gallery-media_gallery_block_columns */       'type' => 'hidden',
  /* node-media_gallery-media_gallery_block_columns */       'weight' => 10,
  /* node-media_gallery-media_gallery_block_columns */     ),
  /* node-media_gallery-media_gallery_block_columns */     'teaser_w_thumb_and_search' => array(
  /* node-media_gallery-media_gallery_block_columns */       'label' => 'above',
  /* node-media_gallery-media_gallery_block_columns */       'settings' => array(),
  /* node-media_gallery-media_gallery_block_columns */       'type' => 'hidden',
  /* node-media_gallery-media_gallery_block_columns */       'weight' => 0,
  /* node-media_gallery-media_gallery_block_columns */     ),
  /* node-media_gallery-media_gallery_block_columns */     'teaserthumb' => array(
  /* node-media_gallery-media_gallery_block_columns */       'label' => 'above',
  /* node-media_gallery-media_gallery_block_columns */       'settings' => array(),
  /* node-media_gallery-media_gallery_block_columns */       'type' => 'hidden',
  /* node-media_gallery-media_gallery_block_columns */       'weight' => 0,
  /* node-media_gallery-media_gallery_block_columns */     ),
  /* node-media_gallery-media_gallery_block_columns */     'time_and_location' => array(
  /* node-media_gallery-media_gallery_block_columns */       'label' => 'above',
  /* node-media_gallery-media_gallery_block_columns */       'settings' => array(),
  /* node-media_gallery-media_gallery_block_columns */       'type' => 'hidden',
  /* node-media_gallery-media_gallery_block_columns */       'weight' => 0,
  /* node-media_gallery-media_gallery_block_columns */     ),
  /* node-media_gallery-media_gallery_block_columns */     'title_and_time' => array(
  /* node-media_gallery-media_gallery_block_columns */       'label' => 'above',
  /* node-media_gallery-media_gallery_block_columns */       'settings' => array(),
  /* node-media_gallery-media_gallery_block_columns */       'type' => 'hidden',
  /* node-media_gallery-media_gallery_block_columns */       'weight' => 0,
  /* node-media_gallery-media_gallery_block_columns */     ),
  /* node-media_gallery-media_gallery_block_columns */   ),
  /* node-media_gallery-media_gallery_block_columns */   'entity_type' => 'node',
  /* node-media_gallery-media_gallery_block_columns */   'field_name' => 'media_gallery_block_columns',
  /* node-media_gallery-media_gallery_block_columns */   'label' => 'Number of columns',
  /* node-media_gallery-media_gallery_block_columns */   'required' => TRUE,
  /* node-media_gallery-media_gallery_block_columns */   'settings' => array(
  /* node-media_gallery-media_gallery_block_columns */     'user_field_privacy' => FALSE,
  /* node-media_gallery-media_gallery_block_columns */     'user_register_form' => FALSE,
  /* node-media_gallery-media_gallery_block_columns */   ),
  /* node-media_gallery-media_gallery_block_columns */   'widget' => array(
  /* node-media_gallery-media_gallery_block_columns */     'module' => 'options',
  /* node-media_gallery-media_gallery_block_columns */     'settings' => array(
  /* node-media_gallery-media_gallery_block_columns */       'apply_chosen' => '',
  /* node-media_gallery-media_gallery_block_columns */     ),
  /* node-media_gallery-media_gallery_block_columns */     'type' => 'options_select',
  /* node-media_gallery-media_gallery_block_columns */     'weight' => 14,
  /* node-media_gallery-media_gallery_block_columns */   ),
  /* node-media_gallery-media_gallery_block_columns */ );

  // Exported field_instance: 'node-media_gallery-media_gallery_block_rows'.
  $field_instances['node-media_gallery-media_gallery_block_rows'] = array(
  /* node-media_gallery-media_gallery_block_rows */   'bundle' => 'media_gallery',
  /* node-media_gallery-media_gallery_block_rows */   'default_value' => array(
  /* node-media_gallery-media_gallery_block_rows */     0 => array(
  /* node-media_gallery-media_gallery_block_rows */       'value' => 3,
  /* node-media_gallery-media_gallery_block_rows */     ),
  /* node-media_gallery-media_gallery_block_rows */   ),
  /* node-media_gallery-media_gallery_block_rows */   'deleted' => 0,
  /* node-media_gallery-media_gallery_block_rows */   'description' => '',
  /* node-media_gallery-media_gallery_block_rows */   'display' => array(
  /* node-media_gallery-media_gallery_block_rows */     'default' => array(
  /* node-media_gallery-media_gallery_block_rows */       'label' => 'hidden',
  /* node-media_gallery-media_gallery_block_rows */       'settings' => array(),
  /* node-media_gallery-media_gallery_block_rows */       'type' => 'hidden',
  /* node-media_gallery-media_gallery_block_rows */       'weight' => 11,
  /* node-media_gallery-media_gallery_block_rows */     ),
  /* node-media_gallery-media_gallery_block_rows */     'events_list' => array(
  /* node-media_gallery-media_gallery_block_rows */       'label' => 'above',
  /* node-media_gallery-media_gallery_block_rows */       'settings' => array(),
  /* node-media_gallery-media_gallery_block_rows */       'type' => 'hidden',
  /* node-media_gallery-media_gallery_block_rows */       'weight' => 0,
  /* node-media_gallery-media_gallery_block_rows */     ),
  /* node-media_gallery-media_gallery_block_rows */     'full' => array(
  /* node-media_gallery-media_gallery_block_rows */       'label' => 'hidden',
  /* node-media_gallery-media_gallery_block_rows */       'settings' => array(),
  /* node-media_gallery-media_gallery_block_rows */       'type' => 'hidden',
  /* node-media_gallery-media_gallery_block_rows */       'weight' => 20,
  /* node-media_gallery-media_gallery_block_rows */     ),
  /* node-media_gallery-media_gallery_block_rows */     'media_gallery_block' => array(
  /* node-media_gallery-media_gallery_block_rows */       'label' => 'hidden',
  /* node-media_gallery-media_gallery_block_rows */       'settings' => array(),
  /* node-media_gallery-media_gallery_block_rows */       'type' => 'hidden',
  /* node-media_gallery-media_gallery_block_rows */       'weight' => 11,
  /* node-media_gallery-media_gallery_block_rows */     ),
  /* node-media_gallery-media_gallery_block_rows */     'one_column_teaser' => array(
  /* node-media_gallery-media_gallery_block_rows */       'label' => 'above',
  /* node-media_gallery-media_gallery_block_rows */       'settings' => array(),
  /* node-media_gallery-media_gallery_block_rows */       'type' => 'hidden',
  /* node-media_gallery-media_gallery_block_rows */       'weight' => 0,
  /* node-media_gallery-media_gallery_block_rows */     ),
  /* node-media_gallery-media_gallery_block_rows */     'post_teaser_group_landing_page' => array(
  /* node-media_gallery-media_gallery_block_rows */       'label' => 'above',
  /* node-media_gallery-media_gallery_block_rows */       'settings' => array(),
  /* node-media_gallery-media_gallery_block_rows */       'type' => 'hidden',
  /* node-media_gallery-media_gallery_block_rows */       'weight' => 0,
  /* node-media_gallery-media_gallery_block_rows */     ),
  /* node-media_gallery-media_gallery_block_rows */     'sidebar_' => array(
  /* node-media_gallery-media_gallery_block_rows */       'label' => 'above',
  /* node-media_gallery-media_gallery_block_rows */       'settings' => array(),
  /* node-media_gallery-media_gallery_block_rows */       'type' => 'hidden',
  /* node-media_gallery-media_gallery_block_rows */       'weight' => 0,
  /* node-media_gallery-media_gallery_block_rows */     ),
  /* node-media_gallery-media_gallery_block_rows */     'sidebar_teaser' => array(
  /* node-media_gallery-media_gallery_block_rows */       'label' => 'above',
  /* node-media_gallery-media_gallery_block_rows */       'settings' => array(),
  /* node-media_gallery-media_gallery_block_rows */       'type' => 'hidden',
  /* node-media_gallery-media_gallery_block_rows */       'weight' => 0,
  /* node-media_gallery-media_gallery_block_rows */     ),
  /* node-media_gallery-media_gallery_block_rows */     'sidebar_teaser_v2' => array(
  /* node-media_gallery-media_gallery_block_rows */       'label' => 'above',
  /* node-media_gallery-media_gallery_block_rows */       'settings' => array(),
  /* node-media_gallery-media_gallery_block_rows */       'type' => 'hidden',
  /* node-media_gallery-media_gallery_block_rows */       'weight' => 0,
  /* node-media_gallery-media_gallery_block_rows */     ),
  /* node-media_gallery-media_gallery_block_rows */     'teaser' => array(
  /* node-media_gallery-media_gallery_block_rows */       'label' => 'hidden',
  /* node-media_gallery-media_gallery_block_rows */       'settings' => array(),
  /* node-media_gallery-media_gallery_block_rows */       'type' => 'hidden',
  /* node-media_gallery-media_gallery_block_rows */       'weight' => 11,
  /* node-media_gallery-media_gallery_block_rows */     ),
  /* node-media_gallery-media_gallery_block_rows */     'teaser_w_thumb_and_search' => array(
  /* node-media_gallery-media_gallery_block_rows */       'label' => 'above',
  /* node-media_gallery-media_gallery_block_rows */       'settings' => array(),
  /* node-media_gallery-media_gallery_block_rows */       'type' => 'hidden',
  /* node-media_gallery-media_gallery_block_rows */       'weight' => 0,
  /* node-media_gallery-media_gallery_block_rows */     ),
  /* node-media_gallery-media_gallery_block_rows */     'teaserthumb' => array(
  /* node-media_gallery-media_gallery_block_rows */       'label' => 'above',
  /* node-media_gallery-media_gallery_block_rows */       'settings' => array(),
  /* node-media_gallery-media_gallery_block_rows */       'type' => 'hidden',
  /* node-media_gallery-media_gallery_block_rows */       'weight' => 0,
  /* node-media_gallery-media_gallery_block_rows */     ),
  /* node-media_gallery-media_gallery_block_rows */     'time_and_location' => array(
  /* node-media_gallery-media_gallery_block_rows */       'label' => 'above',
  /* node-media_gallery-media_gallery_block_rows */       'settings' => array(),
  /* node-media_gallery-media_gallery_block_rows */       'type' => 'hidden',
  /* node-media_gallery-media_gallery_block_rows */       'weight' => 0,
  /* node-media_gallery-media_gallery_block_rows */     ),
  /* node-media_gallery-media_gallery_block_rows */     'title_and_time' => array(
  /* node-media_gallery-media_gallery_block_rows */       'label' => 'above',
  /* node-media_gallery-media_gallery_block_rows */       'settings' => array(),
  /* node-media_gallery-media_gallery_block_rows */       'type' => 'hidden',
  /* node-media_gallery-media_gallery_block_rows */       'weight' => 0,
  /* node-media_gallery-media_gallery_block_rows */     ),
  /* node-media_gallery-media_gallery_block_rows */   ),
  /* node-media_gallery-media_gallery_block_rows */   'entity_type' => 'node',
  /* node-media_gallery-media_gallery_block_rows */   'field_name' => 'media_gallery_block_rows',
  /* node-media_gallery-media_gallery_block_rows */   'label' => 'Number of rows',
  /* node-media_gallery-media_gallery_block_rows */   'required' => TRUE,
  /* node-media_gallery-media_gallery_block_rows */   'settings' => array(
  /* node-media_gallery-media_gallery_block_rows */     'max' => '',
  /* node-media_gallery-media_gallery_block_rows */     'min' => 1,
  /* node-media_gallery-media_gallery_block_rows */     'prefix' => '',
  /* node-media_gallery-media_gallery_block_rows */     'suffix' => '',
  /* node-media_gallery-media_gallery_block_rows */     'user_field_privacy' => FALSE,
  /* node-media_gallery-media_gallery_block_rows */     'user_register_form' => FALSE,
  /* node-media_gallery-media_gallery_block_rows */   ),
  /* node-media_gallery-media_gallery_block_rows */   'widget' => array(
  /* node-media_gallery-media_gallery_block_rows */     'module' => 'number',
  /* node-media_gallery-media_gallery_block_rows */     'settings' => array(),
  /* node-media_gallery-media_gallery_block_rows */     'type' => 'number',
  /* node-media_gallery-media_gallery_block_rows */     'weight' => 19,
  /* node-media_gallery-media_gallery_block_rows */   ),
  /* node-media_gallery-media_gallery_block_rows */ );

  // Exported field_instance: 'node-media_gallery-media_gallery_collection'.
  $field_instances['node-media_gallery-media_gallery_collection'] = array(
  /* node-media_gallery-media_gallery_collection */   'bundle' => 'media_gallery',
  /* node-media_gallery-media_gallery_collection */   'default_value' => array(
  /* node-media_gallery-media_gallery_collection */     0 => array(
  /* node-media_gallery-media_gallery_collection */       'tid' => 13,
  /* node-media_gallery-media_gallery_collection */     ),
  /* node-media_gallery-media_gallery_collection */   ),
  /* node-media_gallery-media_gallery_collection */   'deleted' => 0,
  /* node-media_gallery-media_gallery_collection */   'description' => '',
  /* node-media_gallery-media_gallery_collection */   'display' => array(
  /* node-media_gallery-media_gallery_collection */     'default' => array(
  /* node-media_gallery-media_gallery_collection */       'label' => 'hidden',
  /* node-media_gallery-media_gallery_collection */       'settings' => array(),
  /* node-media_gallery-media_gallery_collection */       'type' => 'hidden',
  /* node-media_gallery-media_gallery_collection */       'weight' => 12,
  /* node-media_gallery-media_gallery_collection */     ),
  /* node-media_gallery-media_gallery_collection */     'events_list' => array(
  /* node-media_gallery-media_gallery_collection */       'label' => 'above',
  /* node-media_gallery-media_gallery_collection */       'settings' => array(),
  /* node-media_gallery-media_gallery_collection */       'type' => 'hidden',
  /* node-media_gallery-media_gallery_collection */       'weight' => 0,
  /* node-media_gallery-media_gallery_collection */     ),
  /* node-media_gallery-media_gallery_collection */     'full' => array(
  /* node-media_gallery-media_gallery_collection */       'label' => 'above',
  /* node-media_gallery-media_gallery_collection */       'settings' => array(),
  /* node-media_gallery-media_gallery_collection */       'type' => 'hidden',
  /* node-media_gallery-media_gallery_collection */       'weight' => 3,
  /* node-media_gallery-media_gallery_collection */     ),
  /* node-media_gallery-media_gallery_collection */     'media_gallery_block' => array(
  /* node-media_gallery-media_gallery_collection */       'label' => 'above',
  /* node-media_gallery-media_gallery_collection */       'settings' => array(),
  /* node-media_gallery-media_gallery_collection */       'type' => 'hidden',
  /* node-media_gallery-media_gallery_collection */       'weight' => 0,
  /* node-media_gallery-media_gallery_collection */     ),
  /* node-media_gallery-media_gallery_collection */     'one_column_teaser' => array(
  /* node-media_gallery-media_gallery_collection */       'label' => 'above',
  /* node-media_gallery-media_gallery_collection */       'settings' => array(),
  /* node-media_gallery-media_gallery_collection */       'type' => 'hidden',
  /* node-media_gallery-media_gallery_collection */       'weight' => 0,
  /* node-media_gallery-media_gallery_collection */     ),
  /* node-media_gallery-media_gallery_collection */     'post_teaser_group_landing_page' => array(
  /* node-media_gallery-media_gallery_collection */       'label' => 'above',
  /* node-media_gallery-media_gallery_collection */       'settings' => array(),
  /* node-media_gallery-media_gallery_collection */       'type' => 'hidden',
  /* node-media_gallery-media_gallery_collection */       'weight' => 0,
  /* node-media_gallery-media_gallery_collection */     ),
  /* node-media_gallery-media_gallery_collection */     'sidebar_' => array(
  /* node-media_gallery-media_gallery_collection */       'label' => 'above',
  /* node-media_gallery-media_gallery_collection */       'settings' => array(),
  /* node-media_gallery-media_gallery_collection */       'type' => 'hidden',
  /* node-media_gallery-media_gallery_collection */       'weight' => 0,
  /* node-media_gallery-media_gallery_collection */     ),
  /* node-media_gallery-media_gallery_collection */     'sidebar_teaser' => array(
  /* node-media_gallery-media_gallery_collection */       'label' => 'above',
  /* node-media_gallery-media_gallery_collection */       'settings' => array(),
  /* node-media_gallery-media_gallery_collection */       'type' => 'hidden',
  /* node-media_gallery-media_gallery_collection */       'weight' => 0,
  /* node-media_gallery-media_gallery_collection */     ),
  /* node-media_gallery-media_gallery_collection */     'sidebar_teaser_v2' => array(
  /* node-media_gallery-media_gallery_collection */       'label' => 'above',
  /* node-media_gallery-media_gallery_collection */       'settings' => array(),
  /* node-media_gallery-media_gallery_collection */       'type' => 'hidden',
  /* node-media_gallery-media_gallery_collection */       'weight' => 0,
  /* node-media_gallery-media_gallery_collection */     ),
  /* node-media_gallery-media_gallery_collection */     'teaser' => array(
  /* node-media_gallery-media_gallery_collection */       'label' => 'hidden',
  /* node-media_gallery-media_gallery_collection */       'settings' => array(),
  /* node-media_gallery-media_gallery_collection */       'type' => 'hidden',
  /* node-media_gallery-media_gallery_collection */       'weight' => 12,
  /* node-media_gallery-media_gallery_collection */     ),
  /* node-media_gallery-media_gallery_collection */     'teaser_w_thumb_and_search' => array(
  /* node-media_gallery-media_gallery_collection */       'label' => 'above',
  /* node-media_gallery-media_gallery_collection */       'settings' => array(),
  /* node-media_gallery-media_gallery_collection */       'type' => 'hidden',
  /* node-media_gallery-media_gallery_collection */       'weight' => 0,
  /* node-media_gallery-media_gallery_collection */     ),
  /* node-media_gallery-media_gallery_collection */     'teaserthumb' => array(
  /* node-media_gallery-media_gallery_collection */       'label' => 'above',
  /* node-media_gallery-media_gallery_collection */       'settings' => array(),
  /* node-media_gallery-media_gallery_collection */       'type' => 'hidden',
  /* node-media_gallery-media_gallery_collection */       'weight' => 0,
  /* node-media_gallery-media_gallery_collection */     ),
  /* node-media_gallery-media_gallery_collection */     'time_and_location' => array(
  /* node-media_gallery-media_gallery_collection */       'label' => 'above',
  /* node-media_gallery-media_gallery_collection */       'settings' => array(),
  /* node-media_gallery-media_gallery_collection */       'type' => 'hidden',
  /* node-media_gallery-media_gallery_collection */       'weight' => 0,
  /* node-media_gallery-media_gallery_collection */     ),
  /* node-media_gallery-media_gallery_collection */     'title_and_time' => array(
  /* node-media_gallery-media_gallery_collection */       'label' => 'above',
  /* node-media_gallery-media_gallery_collection */       'settings' => array(),
  /* node-media_gallery-media_gallery_collection */       'type' => 'hidden',
  /* node-media_gallery-media_gallery_collection */       'weight' => 0,
  /* node-media_gallery-media_gallery_collection */     ),
  /* node-media_gallery-media_gallery_collection */   ),
  /* node-media_gallery-media_gallery_collection */   'entity_type' => 'node',
  /* node-media_gallery-media_gallery_collection */   'field_name' => 'media_gallery_collection',
  /* node-media_gallery-media_gallery_collection */   'label' => 'Gallery collection',
  /* node-media_gallery-media_gallery_collection */   'required' => FALSE,
  /* node-media_gallery-media_gallery_collection */   'settings' => array(
  /* node-media_gallery-media_gallery_collection */     'user_field_privacy' => FALSE,
  /* node-media_gallery-media_gallery_collection */     'user_register_form' => FALSE,
  /* node-media_gallery-media_gallery_collection */   ),
  /* node-media_gallery-media_gallery_collection */   'widget' => array(
  /* node-media_gallery-media_gallery_collection */     'module' => 'options',
  /* node-media_gallery-media_gallery_collection */     'settings' => array(
  /* node-media_gallery-media_gallery_collection */       'apply_chosen' => '',
  /* node-media_gallery-media_gallery_collection */     ),
  /* node-media_gallery-media_gallery_collection */     'type' => 'options_select',
  /* node-media_gallery-media_gallery_collection */     'weight' => 21,
  /* node-media_gallery-media_gallery_collection */   ),
  /* node-media_gallery-media_gallery_collection */ );

  // Exported field_instance: 'node-media_gallery-media_gallery_columns'.
  $field_instances['node-media_gallery-media_gallery_columns'] = array(
  /* node-media_gallery-media_gallery_columns */   'bundle' => 'media_gallery',
  /* node-media_gallery-media_gallery_columns */   'default_value' => array(
  /* node-media_gallery-media_gallery_columns */     0 => array(
  /* node-media_gallery-media_gallery_columns */       'value' => 4,
  /* node-media_gallery-media_gallery_columns */     ),
  /* node-media_gallery-media_gallery_columns */   ),
  /* node-media_gallery-media_gallery_columns */   'deleted' => 0,
  /* node-media_gallery-media_gallery_columns */   'description' => '',
  /* node-media_gallery-media_gallery_columns */   'display' => array(
  /* node-media_gallery-media_gallery_columns */     'default' => array(
  /* node-media_gallery-media_gallery_columns */       'label' => 'hidden',
  /* node-media_gallery-media_gallery_columns */       'settings' => array(),
  /* node-media_gallery-media_gallery_columns */       'type' => 'hidden',
  /* node-media_gallery-media_gallery_columns */       'weight' => 5,
  /* node-media_gallery-media_gallery_columns */     ),
  /* node-media_gallery-media_gallery_columns */     'events_list' => array(
  /* node-media_gallery-media_gallery_columns */       'label' => 'above',
  /* node-media_gallery-media_gallery_columns */       'settings' => array(),
  /* node-media_gallery-media_gallery_columns */       'type' => 'hidden',
  /* node-media_gallery-media_gallery_columns */       'weight' => 0,
  /* node-media_gallery-media_gallery_columns */     ),
  /* node-media_gallery-media_gallery_columns */     'full' => array(
  /* node-media_gallery-media_gallery_columns */       'label' => 'hidden',
  /* node-media_gallery-media_gallery_columns */       'settings' => array(),
  /* node-media_gallery-media_gallery_columns */       'type' => 'hidden',
  /* node-media_gallery-media_gallery_columns */       'weight' => 14,
  /* node-media_gallery-media_gallery_columns */     ),
  /* node-media_gallery-media_gallery_columns */     'media_gallery_block' => array(
  /* node-media_gallery-media_gallery_columns */       'label' => 'hidden',
  /* node-media_gallery-media_gallery_columns */       'settings' => array(),
  /* node-media_gallery-media_gallery_columns */       'type' => 'hidden',
  /* node-media_gallery-media_gallery_columns */       'weight' => 5,
  /* node-media_gallery-media_gallery_columns */     ),
  /* node-media_gallery-media_gallery_columns */     'one_column_teaser' => array(
  /* node-media_gallery-media_gallery_columns */       'label' => 'above',
  /* node-media_gallery-media_gallery_columns */       'settings' => array(),
  /* node-media_gallery-media_gallery_columns */       'type' => 'hidden',
  /* node-media_gallery-media_gallery_columns */       'weight' => 0,
  /* node-media_gallery-media_gallery_columns */     ),
  /* node-media_gallery-media_gallery_columns */     'post_teaser_group_landing_page' => array(
  /* node-media_gallery-media_gallery_columns */       'label' => 'above',
  /* node-media_gallery-media_gallery_columns */       'settings' => array(),
  /* node-media_gallery-media_gallery_columns */       'type' => 'hidden',
  /* node-media_gallery-media_gallery_columns */       'weight' => 0,
  /* node-media_gallery-media_gallery_columns */     ),
  /* node-media_gallery-media_gallery_columns */     'sidebar_' => array(
  /* node-media_gallery-media_gallery_columns */       'label' => 'above',
  /* node-media_gallery-media_gallery_columns */       'settings' => array(),
  /* node-media_gallery-media_gallery_columns */       'type' => 'hidden',
  /* node-media_gallery-media_gallery_columns */       'weight' => 0,
  /* node-media_gallery-media_gallery_columns */     ),
  /* node-media_gallery-media_gallery_columns */     'sidebar_teaser' => array(
  /* node-media_gallery-media_gallery_columns */       'label' => 'above',
  /* node-media_gallery-media_gallery_columns */       'settings' => array(),
  /* node-media_gallery-media_gallery_columns */       'type' => 'hidden',
  /* node-media_gallery-media_gallery_columns */       'weight' => 0,
  /* node-media_gallery-media_gallery_columns */     ),
  /* node-media_gallery-media_gallery_columns */     'sidebar_teaser_v2' => array(
  /* node-media_gallery-media_gallery_columns */       'label' => 'above',
  /* node-media_gallery-media_gallery_columns */       'settings' => array(),
  /* node-media_gallery-media_gallery_columns */       'type' => 'hidden',
  /* node-media_gallery-media_gallery_columns */       'weight' => 0,
  /* node-media_gallery-media_gallery_columns */     ),
  /* node-media_gallery-media_gallery_columns */     'teaser' => array(
  /* node-media_gallery-media_gallery_columns */       'label' => 'hidden',
  /* node-media_gallery-media_gallery_columns */       'settings' => array(),
  /* node-media_gallery-media_gallery_columns */       'type' => 'hidden',
  /* node-media_gallery-media_gallery_columns */       'weight' => 5,
  /* node-media_gallery-media_gallery_columns */     ),
  /* node-media_gallery-media_gallery_columns */     'teaser_w_thumb_and_search' => array(
  /* node-media_gallery-media_gallery_columns */       'label' => 'above',
  /* node-media_gallery-media_gallery_columns */       'settings' => array(),
  /* node-media_gallery-media_gallery_columns */       'type' => 'hidden',
  /* node-media_gallery-media_gallery_columns */       'weight' => 0,
  /* node-media_gallery-media_gallery_columns */     ),
  /* node-media_gallery-media_gallery_columns */     'teaserthumb' => array(
  /* node-media_gallery-media_gallery_columns */       'label' => 'above',
  /* node-media_gallery-media_gallery_columns */       'settings' => array(),
  /* node-media_gallery-media_gallery_columns */       'type' => 'hidden',
  /* node-media_gallery-media_gallery_columns */       'weight' => 0,
  /* node-media_gallery-media_gallery_columns */     ),
  /* node-media_gallery-media_gallery_columns */     'time_and_location' => array(
  /* node-media_gallery-media_gallery_columns */       'label' => 'above',
  /* node-media_gallery-media_gallery_columns */       'settings' => array(),
  /* node-media_gallery-media_gallery_columns */       'type' => 'hidden',
  /* node-media_gallery-media_gallery_columns */       'weight' => 0,
  /* node-media_gallery-media_gallery_columns */     ),
  /* node-media_gallery-media_gallery_columns */     'title_and_time' => array(
  /* node-media_gallery-media_gallery_columns */       'label' => 'above',
  /* node-media_gallery-media_gallery_columns */       'settings' => array(),
  /* node-media_gallery-media_gallery_columns */       'type' => 'hidden',
  /* node-media_gallery-media_gallery_columns */       'weight' => 0,
  /* node-media_gallery-media_gallery_columns */     ),
  /* node-media_gallery-media_gallery_columns */   ),
  /* node-media_gallery-media_gallery_columns */   'entity_type' => 'node',
  /* node-media_gallery-media_gallery_columns */   'field_name' => 'media_gallery_columns',
  /* node-media_gallery-media_gallery_columns */   'label' => 'Number of columns',
  /* node-media_gallery-media_gallery_columns */   'required' => TRUE,
  /* node-media_gallery-media_gallery_columns */   'settings' => array(
  /* node-media_gallery-media_gallery_columns */     'user_field_privacy' => FALSE,
  /* node-media_gallery-media_gallery_columns */     'user_register_form' => FALSE,
  /* node-media_gallery-media_gallery_columns */   ),
  /* node-media_gallery-media_gallery_columns */   'widget' => array(
  /* node-media_gallery-media_gallery_columns */     'module' => 'options',
  /* node-media_gallery-media_gallery_columns */     'settings' => array(
  /* node-media_gallery-media_gallery_columns */       'apply_chosen' => '',
  /* node-media_gallery-media_gallery_columns */     ),
  /* node-media_gallery-media_gallery_columns */     'type' => 'options_select',
  /* node-media_gallery-media_gallery_columns */     'weight' => 9,
  /* node-media_gallery-media_gallery_columns */   ),
  /* node-media_gallery-media_gallery_columns */ );

  // Exported field_instance: 'node-media_gallery-media_gallery_description'.
  $field_instances['node-media_gallery-media_gallery_description'] = array(
  /* node-media_gallery-media_gallery_description */   'bundle' => 'media_gallery',
  /* node-media_gallery-media_gallery_description */   'default_value' => NULL,
  /* node-media_gallery-media_gallery_description */   'deleted' => 0,
  /* node-media_gallery-media_gallery_description */   'description' => '',
  /* node-media_gallery-media_gallery_description */   'display' => array(
  /* node-media_gallery-media_gallery_description */     'default' => array(
  /* node-media_gallery-media_gallery_description */       'label' => 'hidden',
  /* node-media_gallery-media_gallery_description */       'module' => 'text',
  /* node-media_gallery-media_gallery_description */       'settings' => array(
  /* node-media_gallery-media_gallery_description */         'field_formatter_class' => '',
  /* node-media_gallery-media_gallery_description */       ),
  /* node-media_gallery-media_gallery_description */       'type' => 'text_default',
  /* node-media_gallery-media_gallery_description */       'weight' => 0,
  /* node-media_gallery-media_gallery_description */     ),
  /* node-media_gallery-media_gallery_description */     'events_list' => array(
  /* node-media_gallery-media_gallery_description */       'label' => 'above',
  /* node-media_gallery-media_gallery_description */       'settings' => array(),
  /* node-media_gallery-media_gallery_description */       'type' => 'hidden',
  /* node-media_gallery-media_gallery_description */       'weight' => 0,
  /* node-media_gallery-media_gallery_description */     ),
  /* node-media_gallery-media_gallery_description */     'full' => array(
  /* node-media_gallery-media_gallery_description */       'label' => 'hidden',
  /* node-media_gallery-media_gallery_description */       'settings' => array(),
  /* node-media_gallery-media_gallery_description */       'type' => 'hidden',
  /* node-media_gallery-media_gallery_description */       'weight' => 10,
  /* node-media_gallery-media_gallery_description */     ),
  /* node-media_gallery-media_gallery_description */     'media_gallery_block' => array(
  /* node-media_gallery-media_gallery_description */       'label' => 'hidden',
  /* node-media_gallery-media_gallery_description */       'settings' => array(),
  /* node-media_gallery-media_gallery_description */       'type' => 'hidden',
  /* node-media_gallery-media_gallery_description */       'weight' => 0,
  /* node-media_gallery-media_gallery_description */     ),
  /* node-media_gallery-media_gallery_description */     'one_column_teaser' => array(
  /* node-media_gallery-media_gallery_description */       'label' => 'above',
  /* node-media_gallery-media_gallery_description */       'settings' => array(),
  /* node-media_gallery-media_gallery_description */       'type' => 'hidden',
  /* node-media_gallery-media_gallery_description */       'weight' => 0,
  /* node-media_gallery-media_gallery_description */     ),
  /* node-media_gallery-media_gallery_description */     'post_teaser_group_landing_page' => array(
  /* node-media_gallery-media_gallery_description */       'label' => 'above',
  /* node-media_gallery-media_gallery_description */       'settings' => array(),
  /* node-media_gallery-media_gallery_description */       'type' => 'hidden',
  /* node-media_gallery-media_gallery_description */       'weight' => 0,
  /* node-media_gallery-media_gallery_description */     ),
  /* node-media_gallery-media_gallery_description */     'sidebar_' => array(
  /* node-media_gallery-media_gallery_description */       'label' => 'above',
  /* node-media_gallery-media_gallery_description */       'settings' => array(),
  /* node-media_gallery-media_gallery_description */       'type' => 'hidden',
  /* node-media_gallery-media_gallery_description */       'weight' => 0,
  /* node-media_gallery-media_gallery_description */     ),
  /* node-media_gallery-media_gallery_description */     'sidebar_teaser' => array(
  /* node-media_gallery-media_gallery_description */       'label' => 'above',
  /* node-media_gallery-media_gallery_description */       'settings' => array(),
  /* node-media_gallery-media_gallery_description */       'type' => 'hidden',
  /* node-media_gallery-media_gallery_description */       'weight' => 0,
  /* node-media_gallery-media_gallery_description */     ),
  /* node-media_gallery-media_gallery_description */     'sidebar_teaser_v2' => array(
  /* node-media_gallery-media_gallery_description */       'label' => 'above',
  /* node-media_gallery-media_gallery_description */       'settings' => array(),
  /* node-media_gallery-media_gallery_description */       'type' => 'hidden',
  /* node-media_gallery-media_gallery_description */       'weight' => 0,
  /* node-media_gallery-media_gallery_description */     ),
  /* node-media_gallery-media_gallery_description */     'teaser' => array(
  /* node-media_gallery-media_gallery_description */       'label' => 'hidden',
  /* node-media_gallery-media_gallery_description */       'settings' => array(),
  /* node-media_gallery-media_gallery_description */       'type' => 'hidden',
  /* node-media_gallery-media_gallery_description */       'weight' => 0,
  /* node-media_gallery-media_gallery_description */     ),
  /* node-media_gallery-media_gallery_description */     'teaser_w_thumb_and_search' => array(
  /* node-media_gallery-media_gallery_description */       'label' => 'above',
  /* node-media_gallery-media_gallery_description */       'settings' => array(),
  /* node-media_gallery-media_gallery_description */       'type' => 'hidden',
  /* node-media_gallery-media_gallery_description */       'weight' => 0,
  /* node-media_gallery-media_gallery_description */     ),
  /* node-media_gallery-media_gallery_description */     'teaserthumb' => array(
  /* node-media_gallery-media_gallery_description */       'label' => 'above',
  /* node-media_gallery-media_gallery_description */       'settings' => array(),
  /* node-media_gallery-media_gallery_description */       'type' => 'hidden',
  /* node-media_gallery-media_gallery_description */       'weight' => 0,
  /* node-media_gallery-media_gallery_description */     ),
  /* node-media_gallery-media_gallery_description */     'time_and_location' => array(
  /* node-media_gallery-media_gallery_description */       'label' => 'above',
  /* node-media_gallery-media_gallery_description */       'settings' => array(),
  /* node-media_gallery-media_gallery_description */       'type' => 'hidden',
  /* node-media_gallery-media_gallery_description */       'weight' => 0,
  /* node-media_gallery-media_gallery_description */     ),
  /* node-media_gallery-media_gallery_description */     'title_and_time' => array(
  /* node-media_gallery-media_gallery_description */       'label' => 'above',
  /* node-media_gallery-media_gallery_description */       'settings' => array(),
  /* node-media_gallery-media_gallery_description */       'type' => 'hidden',
  /* node-media_gallery-media_gallery_description */       'weight' => 0,
  /* node-media_gallery-media_gallery_description */     ),
  /* node-media_gallery-media_gallery_description */   ),
  /* node-media_gallery-media_gallery_description */   'entity_type' => 'node',
  /* node-media_gallery-media_gallery_description */   'field_name' => 'media_gallery_description',
  /* node-media_gallery-media_gallery_description */   'label' => 'Description',
  /* node-media_gallery-media_gallery_description */   'required' => FALSE,
  /* node-media_gallery-media_gallery_description */   'settings' => array(
  /* node-media_gallery-media_gallery_description */     'text_processing' => 1,
  /* node-media_gallery-media_gallery_description */     'user_field_privacy' => FALSE,
  /* node-media_gallery-media_gallery_description */     'user_register_form' => FALSE,
  /* node-media_gallery-media_gallery_description */   ),
  /* node-media_gallery-media_gallery_description */   'widget' => array(
  /* node-media_gallery-media_gallery_description */     'module' => 'text',
  /* node-media_gallery-media_gallery_description */     'settings' => array(
  /* node-media_gallery-media_gallery_description */       'rows' => 4,
  /* node-media_gallery-media_gallery_description */     ),
  /* node-media_gallery-media_gallery_description */     'type' => 'text_textarea',
  /* node-media_gallery-media_gallery_description */     'weight' => 3,
  /* node-media_gallery-media_gallery_description */   ),
  /* node-media_gallery-media_gallery_description */ );

  // Exported field_instance: 'node-media_gallery-media_gallery_expose_block'.
  $field_instances['node-media_gallery-media_gallery_expose_block'] = array(
  /* node-media_gallery-media_gallery_expose_block */   'bundle' => 'media_gallery',
  /* node-media_gallery-media_gallery_expose_block */   'default_value' => array(
  /* node-media_gallery-media_gallery_expose_block */     0 => array(
  /* node-media_gallery-media_gallery_expose_block */       'value' => 0,
  /* node-media_gallery-media_gallery_expose_block */     ),
  /* node-media_gallery-media_gallery_expose_block */   ),
  /* node-media_gallery-media_gallery_expose_block */   'deleted' => 0,
  /* node-media_gallery-media_gallery_expose_block */   'description' => '',
  /* node-media_gallery-media_gallery_expose_block */   'display' => array(
  /* node-media_gallery-media_gallery_expose_block */     'default' => array(
  /* node-media_gallery-media_gallery_expose_block */       'label' => 'hidden',
  /* node-media_gallery-media_gallery_expose_block */       'settings' => array(),
  /* node-media_gallery-media_gallery_expose_block */       'type' => 'hidden',
  /* node-media_gallery-media_gallery_expose_block */       'weight' => 9,
  /* node-media_gallery-media_gallery_expose_block */     ),
  /* node-media_gallery-media_gallery_expose_block */     'events_list' => array(
  /* node-media_gallery-media_gallery_expose_block */       'label' => 'above',
  /* node-media_gallery-media_gallery_expose_block */       'settings' => array(),
  /* node-media_gallery-media_gallery_expose_block */       'type' => 'hidden',
  /* node-media_gallery-media_gallery_expose_block */       'weight' => 0,
  /* node-media_gallery-media_gallery_expose_block */     ),
  /* node-media_gallery-media_gallery_expose_block */     'full' => array(
  /* node-media_gallery-media_gallery_expose_block */       'label' => 'hidden',
  /* node-media_gallery-media_gallery_expose_block */       'settings' => array(),
  /* node-media_gallery-media_gallery_expose_block */       'type' => 'hidden',
  /* node-media_gallery-media_gallery_expose_block */       'weight' => 18,
  /* node-media_gallery-media_gallery_expose_block */     ),
  /* node-media_gallery-media_gallery_expose_block */     'media_gallery_block' => array(
  /* node-media_gallery-media_gallery_expose_block */       'label' => 'hidden',
  /* node-media_gallery-media_gallery_expose_block */       'settings' => array(),
  /* node-media_gallery-media_gallery_expose_block */       'type' => 'hidden',
  /* node-media_gallery-media_gallery_expose_block */       'weight' => 9,
  /* node-media_gallery-media_gallery_expose_block */     ),
  /* node-media_gallery-media_gallery_expose_block */     'one_column_teaser' => array(
  /* node-media_gallery-media_gallery_expose_block */       'label' => 'above',
  /* node-media_gallery-media_gallery_expose_block */       'settings' => array(),
  /* node-media_gallery-media_gallery_expose_block */       'type' => 'hidden',
  /* node-media_gallery-media_gallery_expose_block */       'weight' => 0,
  /* node-media_gallery-media_gallery_expose_block */     ),
  /* node-media_gallery-media_gallery_expose_block */     'post_teaser_group_landing_page' => array(
  /* node-media_gallery-media_gallery_expose_block */       'label' => 'above',
  /* node-media_gallery-media_gallery_expose_block */       'settings' => array(),
  /* node-media_gallery-media_gallery_expose_block */       'type' => 'hidden',
  /* node-media_gallery-media_gallery_expose_block */       'weight' => 0,
  /* node-media_gallery-media_gallery_expose_block */     ),
  /* node-media_gallery-media_gallery_expose_block */     'sidebar_' => array(
  /* node-media_gallery-media_gallery_expose_block */       'label' => 'above',
  /* node-media_gallery-media_gallery_expose_block */       'settings' => array(),
  /* node-media_gallery-media_gallery_expose_block */       'type' => 'hidden',
  /* node-media_gallery-media_gallery_expose_block */       'weight' => 0,
  /* node-media_gallery-media_gallery_expose_block */     ),
  /* node-media_gallery-media_gallery_expose_block */     'sidebar_teaser' => array(
  /* node-media_gallery-media_gallery_expose_block */       'label' => 'above',
  /* node-media_gallery-media_gallery_expose_block */       'settings' => array(),
  /* node-media_gallery-media_gallery_expose_block */       'type' => 'hidden',
  /* node-media_gallery-media_gallery_expose_block */       'weight' => 0,
  /* node-media_gallery-media_gallery_expose_block */     ),
  /* node-media_gallery-media_gallery_expose_block */     'sidebar_teaser_v2' => array(
  /* node-media_gallery-media_gallery_expose_block */       'label' => 'above',
  /* node-media_gallery-media_gallery_expose_block */       'settings' => array(),
  /* node-media_gallery-media_gallery_expose_block */       'type' => 'hidden',
  /* node-media_gallery-media_gallery_expose_block */       'weight' => 0,
  /* node-media_gallery-media_gallery_expose_block */     ),
  /* node-media_gallery-media_gallery_expose_block */     'teaser' => array(
  /* node-media_gallery-media_gallery_expose_block */       'label' => 'hidden',
  /* node-media_gallery-media_gallery_expose_block */       'settings' => array(),
  /* node-media_gallery-media_gallery_expose_block */       'type' => 'hidden',
  /* node-media_gallery-media_gallery_expose_block */       'weight' => 9,
  /* node-media_gallery-media_gallery_expose_block */     ),
  /* node-media_gallery-media_gallery_expose_block */     'teaser_w_thumb_and_search' => array(
  /* node-media_gallery-media_gallery_expose_block */       'label' => 'above',
  /* node-media_gallery-media_gallery_expose_block */       'settings' => array(),
  /* node-media_gallery-media_gallery_expose_block */       'type' => 'hidden',
  /* node-media_gallery-media_gallery_expose_block */       'weight' => 0,
  /* node-media_gallery-media_gallery_expose_block */     ),
  /* node-media_gallery-media_gallery_expose_block */     'teaserthumb' => array(
  /* node-media_gallery-media_gallery_expose_block */       'label' => 'above',
  /* node-media_gallery-media_gallery_expose_block */       'settings' => array(),
  /* node-media_gallery-media_gallery_expose_block */       'type' => 'hidden',
  /* node-media_gallery-media_gallery_expose_block */       'weight' => 0,
  /* node-media_gallery-media_gallery_expose_block */     ),
  /* node-media_gallery-media_gallery_expose_block */     'time_and_location' => array(
  /* node-media_gallery-media_gallery_expose_block */       'label' => 'above',
  /* node-media_gallery-media_gallery_expose_block */       'settings' => array(),
  /* node-media_gallery-media_gallery_expose_block */       'type' => 'hidden',
  /* node-media_gallery-media_gallery_expose_block */       'weight' => 0,
  /* node-media_gallery-media_gallery_expose_block */     ),
  /* node-media_gallery-media_gallery_expose_block */     'title_and_time' => array(
  /* node-media_gallery-media_gallery_expose_block */       'label' => 'above',
  /* node-media_gallery-media_gallery_expose_block */       'settings' => array(),
  /* node-media_gallery-media_gallery_expose_block */       'type' => 'hidden',
  /* node-media_gallery-media_gallery_expose_block */       'weight' => 0,
  /* node-media_gallery-media_gallery_expose_block */     ),
  /* node-media_gallery-media_gallery_expose_block */   ),
  /* node-media_gallery-media_gallery_expose_block */   'entity_type' => 'node',
  /* node-media_gallery-media_gallery_expose_block */   'field_name' => 'media_gallery_expose_block',
  /* node-media_gallery-media_gallery_expose_block */   'label' => 'Create a block of most recently added media',
  /* node-media_gallery-media_gallery_expose_block */   'required' => FALSE,
  /* node-media_gallery-media_gallery_expose_block */   'settings' => array(
  /* node-media_gallery-media_gallery_expose_block */     'user_field_privacy' => FALSE,
  /* node-media_gallery-media_gallery_expose_block */     'user_register_form' => FALSE,
  /* node-media_gallery-media_gallery_expose_block */   ),
  /* node-media_gallery-media_gallery_expose_block */   'widget' => array(
  /* node-media_gallery-media_gallery_expose_block */     'module' => 'options',
  /* node-media_gallery-media_gallery_expose_block */     'settings' => array(
  /* node-media_gallery-media_gallery_expose_block */       'display_label' => 0,
  /* node-media_gallery-media_gallery_expose_block */     ),
  /* node-media_gallery-media_gallery_expose_block */     'type' => 'options_onoff',
  /* node-media_gallery-media_gallery_expose_block */     'weight' => 12,
  /* node-media_gallery-media_gallery_expose_block */   ),
  /* node-media_gallery-media_gallery_expose_block */ );

  // Exported field_instance: 'node-media_gallery-media_gallery_file'.
  $field_instances['node-media_gallery-media_gallery_file'] = array(
  /* node-media_gallery-media_gallery_file */   'bundle' => 'media_gallery',
  /* node-media_gallery-media_gallery_file */   'deleted' => 0,
  /* node-media_gallery-media_gallery_file */   'description' => '',
  /* node-media_gallery-media_gallery_file */   'display' => array(
  /* node-media_gallery-media_gallery_file */     'default' => array(
  /* node-media_gallery-media_gallery_file */       'label' => 'hidden',
  /* node-media_gallery-media_gallery_file */       'module' => 'media_gallery',
  /* node-media_gallery-media_gallery_file */       'settings' => array(
  /* node-media_gallery-media_gallery_file */         'field_formatter_class' => '',
  /* node-media_gallery-media_gallery_file */         'file_view_mode' => 'media_gallery_thumbnail',
  /* node-media_gallery-media_gallery_file */       ),
  /* node-media_gallery-media_gallery_file */       'type' => 'media_gallery',
  /* node-media_gallery-media_gallery_file */       'weight' => 2,
  /* node-media_gallery-media_gallery_file */     ),
  /* node-media_gallery-media_gallery_file */     'events_list' => array(
  /* node-media_gallery-media_gallery_file */       'label' => 'above',
  /* node-media_gallery-media_gallery_file */       'settings' => array(),
  /* node-media_gallery-media_gallery_file */       'type' => 'hidden',
  /* node-media_gallery-media_gallery_file */       'weight' => 0,
  /* node-media_gallery-media_gallery_file */     ),
  /* node-media_gallery-media_gallery_file */     'full' => array(
  /* node-media_gallery-media_gallery_file */       'label' => 'hidden',
  /* node-media_gallery-media_gallery_file */       'module' => 'media_gallery',
  /* node-media_gallery-media_gallery_file */       'settings' => array(
  /* node-media_gallery-media_gallery_file */         'field_formatter_class' => '',
  /* node-media_gallery-media_gallery_file */         'file_view_mode' => 'media_gallery_thumbnail',
  /* node-media_gallery-media_gallery_file */       ),
  /* node-media_gallery-media_gallery_file */       'type' => 'media_gallery',
  /* node-media_gallery-media_gallery_file */       'weight' => 0,
  /* node-media_gallery-media_gallery_file */     ),
  /* node-media_gallery-media_gallery_file */     'media_gallery_block' => array(
  /* node-media_gallery-media_gallery_file */       'label' => 'hidden',
  /* node-media_gallery-media_gallery_file */       'module' => 'media_gallery',
  /* node-media_gallery-media_gallery_file */       'settings' => array(
  /* node-media_gallery-media_gallery_file */         'field_formatter_class' => '',
  /* node-media_gallery-media_gallery_file */         'file_view_mode' => 'media_gallery_block_thumbnail',
  /* node-media_gallery-media_gallery_file */       ),
  /* node-media_gallery-media_gallery_file */       'type' => 'media_gallery',
  /* node-media_gallery-media_gallery_file */       'weight' => 2,
  /* node-media_gallery-media_gallery_file */     ),
  /* node-media_gallery-media_gallery_file */     'one_column_teaser' => array(
  /* node-media_gallery-media_gallery_file */       'label' => 'above',
  /* node-media_gallery-media_gallery_file */       'settings' => array(),
  /* node-media_gallery-media_gallery_file */       'type' => 'hidden',
  /* node-media_gallery-media_gallery_file */       'weight' => 0,
  /* node-media_gallery-media_gallery_file */     ),
  /* node-media_gallery-media_gallery_file */     'post_teaser_group_landing_page' => array(
  /* node-media_gallery-media_gallery_file */       'label' => 'above',
  /* node-media_gallery-media_gallery_file */       'settings' => array(),
  /* node-media_gallery-media_gallery_file */       'type' => 'hidden',
  /* node-media_gallery-media_gallery_file */       'weight' => 0,
  /* node-media_gallery-media_gallery_file */     ),
  /* node-media_gallery-media_gallery_file */     'sidebar_' => array(
  /* node-media_gallery-media_gallery_file */       'label' => 'above',
  /* node-media_gallery-media_gallery_file */       'settings' => array(),
  /* node-media_gallery-media_gallery_file */       'type' => 'hidden',
  /* node-media_gallery-media_gallery_file */       'weight' => 0,
  /* node-media_gallery-media_gallery_file */     ),
  /* node-media_gallery-media_gallery_file */     'sidebar_teaser' => array(
  /* node-media_gallery-media_gallery_file */       'label' => 'above',
  /* node-media_gallery-media_gallery_file */       'settings' => array(),
  /* node-media_gallery-media_gallery_file */       'type' => 'hidden',
  /* node-media_gallery-media_gallery_file */       'weight' => 0,
  /* node-media_gallery-media_gallery_file */     ),
  /* node-media_gallery-media_gallery_file */     'sidebar_teaser_v2' => array(
  /* node-media_gallery-media_gallery_file */       'label' => 'above',
  /* node-media_gallery-media_gallery_file */       'settings' => array(),
  /* node-media_gallery-media_gallery_file */       'type' => 'hidden',
  /* node-media_gallery-media_gallery_file */       'weight' => 0,
  /* node-media_gallery-media_gallery_file */     ),
  /* node-media_gallery-media_gallery_file */     'teaser' => array(
  /* node-media_gallery-media_gallery_file */       'label' => 'hidden',
  /* node-media_gallery-media_gallery_file */       'module' => 'media_gallery',
  /* node-media_gallery-media_gallery_file */       'settings' => array(
  /* node-media_gallery-media_gallery_file */         'field_formatter_class' => '',
  /* node-media_gallery-media_gallery_file */         'file_view_mode' => 'media_gallery_collection_thumbnail',
  /* node-media_gallery-media_gallery_file */       ),
  /* node-media_gallery-media_gallery_file */       'type' => 'media_gallery',
  /* node-media_gallery-media_gallery_file */       'weight' => 2,
  /* node-media_gallery-media_gallery_file */     ),
  /* node-media_gallery-media_gallery_file */     'teaser_w_thumb_and_search' => array(
  /* node-media_gallery-media_gallery_file */       'label' => 'above',
  /* node-media_gallery-media_gallery_file */       'settings' => array(),
  /* node-media_gallery-media_gallery_file */       'type' => 'hidden',
  /* node-media_gallery-media_gallery_file */       'weight' => 0,
  /* node-media_gallery-media_gallery_file */     ),
  /* node-media_gallery-media_gallery_file */     'teaserthumb' => array(
  /* node-media_gallery-media_gallery_file */       'label' => 'above',
  /* node-media_gallery-media_gallery_file */       'settings' => array(),
  /* node-media_gallery-media_gallery_file */       'type' => 'hidden',
  /* node-media_gallery-media_gallery_file */       'weight' => 0,
  /* node-media_gallery-media_gallery_file */     ),
  /* node-media_gallery-media_gallery_file */     'time_and_location' => array(
  /* node-media_gallery-media_gallery_file */       'label' => 'above',
  /* node-media_gallery-media_gallery_file */       'settings' => array(),
  /* node-media_gallery-media_gallery_file */       'type' => 'hidden',
  /* node-media_gallery-media_gallery_file */       'weight' => 0,
  /* node-media_gallery-media_gallery_file */     ),
  /* node-media_gallery-media_gallery_file */     'title_and_time' => array(
  /* node-media_gallery-media_gallery_file */       'label' => 'above',
  /* node-media_gallery-media_gallery_file */       'settings' => array(),
  /* node-media_gallery-media_gallery_file */       'type' => 'hidden',
  /* node-media_gallery-media_gallery_file */       'weight' => 0,
  /* node-media_gallery-media_gallery_file */     ),
  /* node-media_gallery-media_gallery_file */   ),
  /* node-media_gallery-media_gallery_file */   'entity_type' => 'node',
  /* node-media_gallery-media_gallery_file */   'field_name' => 'media_gallery_file',
  /* node-media_gallery-media_gallery_file */   'label' => 'Gallery media',
  /* node-media_gallery-media_gallery_file */   'required' => FALSE,
  /* node-media_gallery-media_gallery_file */   'settings' => array(
  /* node-media_gallery-media_gallery_file */     'description_field' => 0,
  /* node-media_gallery-media_gallery_file */     'file_directory' => '',
  /* node-media_gallery-media_gallery_file */     'file_extensions' => 'txt',
  /* node-media_gallery-media_gallery_file */     'max_filesize' => '',
  /* node-media_gallery-media_gallery_file */     'user_field_privacy' => FALSE,
  /* node-media_gallery-media_gallery_file */     'user_register_form' => FALSE,
  /* node-media_gallery-media_gallery_file */   ),
  /* node-media_gallery-media_gallery_file */   'widget' => array(
  /* node-media_gallery-media_gallery_file */     'module' => 'media',
  /* node-media_gallery-media_gallery_file */     'settings' => array(
  /* node-media_gallery-media_gallery_file */       'allowed_schemes' => array(
  /* node-media_gallery-media_gallery_file */         'public' => 'public',
  /* node-media_gallery-media_gallery_file */       ),
  /* node-media_gallery-media_gallery_file */       'allowed_types' => array(
  /* node-media_gallery-media_gallery_file */         'audio' => 'audio',
  /* node-media_gallery-media_gallery_file */         'document' => 'document',
  /* node-media_gallery-media_gallery_file */         'image' => 'image',
  /* node-media_gallery-media_gallery_file */         'video' => 'video',
  /* node-media_gallery-media_gallery_file */       ),
  /* node-media_gallery-media_gallery_file */       'browser_plugins' => array(),
  /* node-media_gallery-media_gallery_file */     ),
  /* node-media_gallery-media_gallery_file */     'type' => 'media_generic',
  /* node-media_gallery-media_gallery_file */     'weight' => 6,
  /* node-media_gallery-media_gallery_file */   ),
  /* node-media_gallery-media_gallery_file */ );

  // Exported field_instance: 'node-media_gallery-media_gallery_format'.
  $field_instances['node-media_gallery-media_gallery_format'] = array(
  /* node-media_gallery-media_gallery_format */   'bundle' => 'media_gallery',
  /* node-media_gallery-media_gallery_format */   'default_value' => array(
  /* node-media_gallery-media_gallery_format */     0 => array(
  /* node-media_gallery-media_gallery_format */       'value' => 'lightbox',
  /* node-media_gallery-media_gallery_format */     ),
  /* node-media_gallery-media_gallery_format */   ),
  /* node-media_gallery-media_gallery_format */   'deleted' => 0,
  /* node-media_gallery-media_gallery_format */   'description' => '',
  /* node-media_gallery-media_gallery_format */   'display' => array(
  /* node-media_gallery-media_gallery_format */     'default' => array(
  /* node-media_gallery-media_gallery_format */       'label' => 'hidden',
  /* node-media_gallery-media_gallery_format */       'settings' => array(),
  /* node-media_gallery-media_gallery_format */       'type' => 'hidden',
  /* node-media_gallery-media_gallery_format */       'weight' => 3,
  /* node-media_gallery-media_gallery_format */     ),
  /* node-media_gallery-media_gallery_format */     'events_list' => array(
  /* node-media_gallery-media_gallery_format */       'label' => 'above',
  /* node-media_gallery-media_gallery_format */       'settings' => array(),
  /* node-media_gallery-media_gallery_format */       'type' => 'hidden',
  /* node-media_gallery-media_gallery_format */       'weight' => 0,
  /* node-media_gallery-media_gallery_format */     ),
  /* node-media_gallery-media_gallery_format */     'full' => array(
  /* node-media_gallery-media_gallery_format */       'label' => 'hidden',
  /* node-media_gallery-media_gallery_format */       'settings' => array(),
  /* node-media_gallery-media_gallery_format */       'type' => 'hidden',
  /* node-media_gallery-media_gallery_format */       'weight' => 12,
  /* node-media_gallery-media_gallery_format */     ),
  /* node-media_gallery-media_gallery_format */     'media_gallery_block' => array(
  /* node-media_gallery-media_gallery_format */       'label' => 'hidden',
  /* node-media_gallery-media_gallery_format */       'settings' => array(),
  /* node-media_gallery-media_gallery_format */       'type' => 'hidden',
  /* node-media_gallery-media_gallery_format */       'weight' => 3,
  /* node-media_gallery-media_gallery_format */     ),
  /* node-media_gallery-media_gallery_format */     'one_column_teaser' => array(
  /* node-media_gallery-media_gallery_format */       'label' => 'above',
  /* node-media_gallery-media_gallery_format */       'settings' => array(),
  /* node-media_gallery-media_gallery_format */       'type' => 'hidden',
  /* node-media_gallery-media_gallery_format */       'weight' => 0,
  /* node-media_gallery-media_gallery_format */     ),
  /* node-media_gallery-media_gallery_format */     'post_teaser_group_landing_page' => array(
  /* node-media_gallery-media_gallery_format */       'label' => 'above',
  /* node-media_gallery-media_gallery_format */       'settings' => array(),
  /* node-media_gallery-media_gallery_format */       'type' => 'hidden',
  /* node-media_gallery-media_gallery_format */       'weight' => 0,
  /* node-media_gallery-media_gallery_format */     ),
  /* node-media_gallery-media_gallery_format */     'sidebar_' => array(
  /* node-media_gallery-media_gallery_format */       'label' => 'above',
  /* node-media_gallery-media_gallery_format */       'settings' => array(),
  /* node-media_gallery-media_gallery_format */       'type' => 'hidden',
  /* node-media_gallery-media_gallery_format */       'weight' => 0,
  /* node-media_gallery-media_gallery_format */     ),
  /* node-media_gallery-media_gallery_format */     'sidebar_teaser' => array(
  /* node-media_gallery-media_gallery_format */       'label' => 'above',
  /* node-media_gallery-media_gallery_format */       'settings' => array(),
  /* node-media_gallery-media_gallery_format */       'type' => 'hidden',
  /* node-media_gallery-media_gallery_format */       'weight' => 0,
  /* node-media_gallery-media_gallery_format */     ),
  /* node-media_gallery-media_gallery_format */     'sidebar_teaser_v2' => array(
  /* node-media_gallery-media_gallery_format */       'label' => 'above',
  /* node-media_gallery-media_gallery_format */       'settings' => array(),
  /* node-media_gallery-media_gallery_format */       'type' => 'hidden',
  /* node-media_gallery-media_gallery_format */       'weight' => 0,
  /* node-media_gallery-media_gallery_format */     ),
  /* node-media_gallery-media_gallery_format */     'teaser' => array(
  /* node-media_gallery-media_gallery_format */       'label' => 'hidden',
  /* node-media_gallery-media_gallery_format */       'settings' => array(),
  /* node-media_gallery-media_gallery_format */       'type' => 'hidden',
  /* node-media_gallery-media_gallery_format */       'weight' => 3,
  /* node-media_gallery-media_gallery_format */     ),
  /* node-media_gallery-media_gallery_format */     'teaser_w_thumb_and_search' => array(
  /* node-media_gallery-media_gallery_format */       'label' => 'above',
  /* node-media_gallery-media_gallery_format */       'settings' => array(),
  /* node-media_gallery-media_gallery_format */       'type' => 'hidden',
  /* node-media_gallery-media_gallery_format */       'weight' => 0,
  /* node-media_gallery-media_gallery_format */     ),
  /* node-media_gallery-media_gallery_format */     'teaserthumb' => array(
  /* node-media_gallery-media_gallery_format */       'label' => 'above',
  /* node-media_gallery-media_gallery_format */       'settings' => array(),
  /* node-media_gallery-media_gallery_format */       'type' => 'hidden',
  /* node-media_gallery-media_gallery_format */       'weight' => 0,
  /* node-media_gallery-media_gallery_format */     ),
  /* node-media_gallery-media_gallery_format */     'time_and_location' => array(
  /* node-media_gallery-media_gallery_format */       'label' => 'above',
  /* node-media_gallery-media_gallery_format */       'settings' => array(),
  /* node-media_gallery-media_gallery_format */       'type' => 'hidden',
  /* node-media_gallery-media_gallery_format */       'weight' => 0,
  /* node-media_gallery-media_gallery_format */     ),
  /* node-media_gallery-media_gallery_format */     'title_and_time' => array(
  /* node-media_gallery-media_gallery_format */       'label' => 'above',
  /* node-media_gallery-media_gallery_format */       'settings' => array(),
  /* node-media_gallery-media_gallery_format */       'type' => 'hidden',
  /* node-media_gallery-media_gallery_format */       'weight' => 0,
  /* node-media_gallery-media_gallery_format */     ),
  /* node-media_gallery-media_gallery_format */   ),
  /* node-media_gallery-media_gallery_format */   'entity_type' => 'node',
  /* node-media_gallery-media_gallery_format */   'field_name' => 'media_gallery_format',
  /* node-media_gallery-media_gallery_format */   'label' => 'Gallery format',
  /* node-media_gallery-media_gallery_format */   'required' => TRUE,
  /* node-media_gallery-media_gallery_format */   'settings' => array(
  /* node-media_gallery-media_gallery_format */     'user_field_privacy' => FALSE,
  /* node-media_gallery-media_gallery_format */     'user_register_form' => FALSE,
  /* node-media_gallery-media_gallery_format */   ),
  /* node-media_gallery-media_gallery_format */   'widget' => array(
  /* node-media_gallery-media_gallery_format */     'module' => 'options',
  /* node-media_gallery-media_gallery_format */     'settings' => array(),
  /* node-media_gallery-media_gallery_format */     'type' => 'options_buttons',
  /* node-media_gallery-media_gallery_format */     'weight' => 7,
  /* node-media_gallery-media_gallery_format */   ),
  /* node-media_gallery-media_gallery_format */ );

  // Exported field_instance:
  // 'node-media_gallery-media_gallery_image_info_where'.
  $field_instances['node-media_gallery-media_gallery_image_info_where'] = array(
  /* node-media_gallery-media_gallery_image_info_where */   'bundle' => 'media_gallery',
  /* node-media_gallery-media_gallery_image_info_where */   'default_value' => array(
  /* node-media_gallery-media_gallery_image_info_where */     0 => array(
  /* node-media_gallery-media_gallery_image_info_where */       'value' => 'hover',
  /* node-media_gallery-media_gallery_image_info_where */     ),
  /* node-media_gallery-media_gallery_image_info_where */   ),
  /* node-media_gallery-media_gallery_image_info_where */   'deleted' => 0,
  /* node-media_gallery-media_gallery_image_info_where */   'description' => '',
  /* node-media_gallery-media_gallery_image_info_where */   'display' => array(
  /* node-media_gallery-media_gallery_image_info_where */     'default' => array(
  /* node-media_gallery-media_gallery_image_info_where */       'label' => 'hidden',
  /* node-media_gallery-media_gallery_image_info_where */       'settings' => array(),
  /* node-media_gallery-media_gallery_image_info_where */       'type' => 'hidden',
  /* node-media_gallery-media_gallery_image_info_where */       'weight' => 7,
  /* node-media_gallery-media_gallery_image_info_where */     ),
  /* node-media_gallery-media_gallery_image_info_where */     'events_list' => array(
  /* node-media_gallery-media_gallery_image_info_where */       'label' => 'above',
  /* node-media_gallery-media_gallery_image_info_where */       'settings' => array(),
  /* node-media_gallery-media_gallery_image_info_where */       'type' => 'hidden',
  /* node-media_gallery-media_gallery_image_info_where */       'weight' => 0,
  /* node-media_gallery-media_gallery_image_info_where */     ),
  /* node-media_gallery-media_gallery_image_info_where */     'full' => array(
  /* node-media_gallery-media_gallery_image_info_where */       'label' => 'hidden',
  /* node-media_gallery-media_gallery_image_info_where */       'settings' => array(),
  /* node-media_gallery-media_gallery_image_info_where */       'type' => 'hidden',
  /* node-media_gallery-media_gallery_image_info_where */       'weight' => 16,
  /* node-media_gallery-media_gallery_image_info_where */     ),
  /* node-media_gallery-media_gallery_image_info_where */     'media_gallery_block' => array(
  /* node-media_gallery-media_gallery_image_info_where */       'label' => 'hidden',
  /* node-media_gallery-media_gallery_image_info_where */       'settings' => array(),
  /* node-media_gallery-media_gallery_image_info_where */       'type' => 'hidden',
  /* node-media_gallery-media_gallery_image_info_where */       'weight' => 7,
  /* node-media_gallery-media_gallery_image_info_where */     ),
  /* node-media_gallery-media_gallery_image_info_where */     'one_column_teaser' => array(
  /* node-media_gallery-media_gallery_image_info_where */       'label' => 'above',
  /* node-media_gallery-media_gallery_image_info_where */       'settings' => array(),
  /* node-media_gallery-media_gallery_image_info_where */       'type' => 'hidden',
  /* node-media_gallery-media_gallery_image_info_where */       'weight' => 0,
  /* node-media_gallery-media_gallery_image_info_where */     ),
  /* node-media_gallery-media_gallery_image_info_where */     'post_teaser_group_landing_page' => array(
  /* node-media_gallery-media_gallery_image_info_where */       'label' => 'above',
  /* node-media_gallery-media_gallery_image_info_where */       'settings' => array(),
  /* node-media_gallery-media_gallery_image_info_where */       'type' => 'hidden',
  /* node-media_gallery-media_gallery_image_info_where */       'weight' => 0,
  /* node-media_gallery-media_gallery_image_info_where */     ),
  /* node-media_gallery-media_gallery_image_info_where */     'sidebar_' => array(
  /* node-media_gallery-media_gallery_image_info_where */       'label' => 'above',
  /* node-media_gallery-media_gallery_image_info_where */       'settings' => array(),
  /* node-media_gallery-media_gallery_image_info_where */       'type' => 'hidden',
  /* node-media_gallery-media_gallery_image_info_where */       'weight' => 0,
  /* node-media_gallery-media_gallery_image_info_where */     ),
  /* node-media_gallery-media_gallery_image_info_where */     'sidebar_teaser' => array(
  /* node-media_gallery-media_gallery_image_info_where */       'label' => 'above',
  /* node-media_gallery-media_gallery_image_info_where */       'settings' => array(),
  /* node-media_gallery-media_gallery_image_info_where */       'type' => 'hidden',
  /* node-media_gallery-media_gallery_image_info_where */       'weight' => 0,
  /* node-media_gallery-media_gallery_image_info_where */     ),
  /* node-media_gallery-media_gallery_image_info_where */     'sidebar_teaser_v2' => array(
  /* node-media_gallery-media_gallery_image_info_where */       'label' => 'above',
  /* node-media_gallery-media_gallery_image_info_where */       'settings' => array(),
  /* node-media_gallery-media_gallery_image_info_where */       'type' => 'hidden',
  /* node-media_gallery-media_gallery_image_info_where */       'weight' => 0,
  /* node-media_gallery-media_gallery_image_info_where */     ),
  /* node-media_gallery-media_gallery_image_info_where */     'teaser' => array(
  /* node-media_gallery-media_gallery_image_info_where */       'label' => 'hidden',
  /* node-media_gallery-media_gallery_image_info_where */       'settings' => array(),
  /* node-media_gallery-media_gallery_image_info_where */       'type' => 'hidden',
  /* node-media_gallery-media_gallery_image_info_where */       'weight' => 7,
  /* node-media_gallery-media_gallery_image_info_where */     ),
  /* node-media_gallery-media_gallery_image_info_where */     'teaser_w_thumb_and_search' => array(
  /* node-media_gallery-media_gallery_image_info_where */       'label' => 'above',
  /* node-media_gallery-media_gallery_image_info_where */       'settings' => array(),
  /* node-media_gallery-media_gallery_image_info_where */       'type' => 'hidden',
  /* node-media_gallery-media_gallery_image_info_where */       'weight' => 0,
  /* node-media_gallery-media_gallery_image_info_where */     ),
  /* node-media_gallery-media_gallery_image_info_where */     'teaserthumb' => array(
  /* node-media_gallery-media_gallery_image_info_where */       'label' => 'above',
  /* node-media_gallery-media_gallery_image_info_where */       'settings' => array(),
  /* node-media_gallery-media_gallery_image_info_where */       'type' => 'hidden',
  /* node-media_gallery-media_gallery_image_info_where */       'weight' => 0,
  /* node-media_gallery-media_gallery_image_info_where */     ),
  /* node-media_gallery-media_gallery_image_info_where */     'time_and_location' => array(
  /* node-media_gallery-media_gallery_image_info_where */       'label' => 'above',
  /* node-media_gallery-media_gallery_image_info_where */       'settings' => array(),
  /* node-media_gallery-media_gallery_image_info_where */       'type' => 'hidden',
  /* node-media_gallery-media_gallery_image_info_where */       'weight' => 0,
  /* node-media_gallery-media_gallery_image_info_where */     ),
  /* node-media_gallery-media_gallery_image_info_where */     'title_and_time' => array(
  /* node-media_gallery-media_gallery_image_info_where */       'label' => 'above',
  /* node-media_gallery-media_gallery_image_info_where */       'settings' => array(),
  /* node-media_gallery-media_gallery_image_info_where */       'type' => 'hidden',
  /* node-media_gallery-media_gallery_image_info_where */       'weight' => 0,
  /* node-media_gallery-media_gallery_image_info_where */     ),
  /* node-media_gallery-media_gallery_image_info_where */   ),
  /* node-media_gallery-media_gallery_image_info_where */   'entity_type' => 'node',
  /* node-media_gallery-media_gallery_image_info_where */   'field_name' => 'media_gallery_image_info_where',
  /* node-media_gallery-media_gallery_image_info_where */   'label' => 'Media information',
  /* node-media_gallery-media_gallery_image_info_where */   'required' => TRUE,
  /* node-media_gallery-media_gallery_image_info_where */   'settings' => array(
  /* node-media_gallery-media_gallery_image_info_where */     'user_field_privacy' => FALSE,
  /* node-media_gallery-media_gallery_image_info_where */     'user_register_form' => FALSE,
  /* node-media_gallery-media_gallery_image_info_where */   ),
  /* node-media_gallery-media_gallery_image_info_where */   'widget' => array(
  /* node-media_gallery-media_gallery_image_info_where */     'module' => 'options',
  /* node-media_gallery-media_gallery_image_info_where */     'settings' => array(
  /* node-media_gallery-media_gallery_image_info_where */       'apply_chosen' => '',
  /* node-media_gallery-media_gallery_image_info_where */     ),
  /* node-media_gallery-media_gallery_image_info_where */     'type' => 'options_select',
  /* node-media_gallery-media_gallery_image_info_where */     'weight' => 16,
  /* node-media_gallery-media_gallery_image_info_where */   ),
  /* node-media_gallery-media_gallery_image_info_where */ );

  // Exported field_instance:
  // 'node-media_gallery-media_gallery_lightbox_extras'.
  $field_instances['node-media_gallery-media_gallery_lightbox_extras'] = array(
  /* node-media_gallery-media_gallery_lightbox_extras */   'bundle' => 'media_gallery',
  /* node-media_gallery-media_gallery_lightbox_extras */   'default_value' => array(
  /* node-media_gallery-media_gallery_lightbox_extras */     0 => array(
  /* node-media_gallery-media_gallery_lightbox_extras */       'value' => 1,
  /* node-media_gallery-media_gallery_lightbox_extras */     ),
  /* node-media_gallery-media_gallery_lightbox_extras */   ),
  /* node-media_gallery-media_gallery_lightbox_extras */   'deleted' => 0,
  /* node-media_gallery-media_gallery_lightbox_extras */   'description' => 'Show title and description',
  /* node-media_gallery-media_gallery_lightbox_extras */   'display' => array(
  /* node-media_gallery-media_gallery_lightbox_extras */     'default' => array(
  /* node-media_gallery-media_gallery_lightbox_extras */       'label' => 'hidden',
  /* node-media_gallery-media_gallery_lightbox_extras */       'settings' => array(),
  /* node-media_gallery-media_gallery_lightbox_extras */       'type' => 'hidden',
  /* node-media_gallery-media_gallery_lightbox_extras */       'weight' => 4,
  /* node-media_gallery-media_gallery_lightbox_extras */     ),
  /* node-media_gallery-media_gallery_lightbox_extras */     'events_list' => array(
  /* node-media_gallery-media_gallery_lightbox_extras */       'label' => 'above',
  /* node-media_gallery-media_gallery_lightbox_extras */       'settings' => array(),
  /* node-media_gallery-media_gallery_lightbox_extras */       'type' => 'hidden',
  /* node-media_gallery-media_gallery_lightbox_extras */       'weight' => 0,
  /* node-media_gallery-media_gallery_lightbox_extras */     ),
  /* node-media_gallery-media_gallery_lightbox_extras */     'full' => array(
  /* node-media_gallery-media_gallery_lightbox_extras */       'label' => 'hidden',
  /* node-media_gallery-media_gallery_lightbox_extras */       'settings' => array(),
  /* node-media_gallery-media_gallery_lightbox_extras */       'type' => 'hidden',
  /* node-media_gallery-media_gallery_lightbox_extras */       'weight' => 13,
  /* node-media_gallery-media_gallery_lightbox_extras */     ),
  /* node-media_gallery-media_gallery_lightbox_extras */     'media_gallery_block' => array(
  /* node-media_gallery-media_gallery_lightbox_extras */       'label' => 'hidden',
  /* node-media_gallery-media_gallery_lightbox_extras */       'settings' => array(),
  /* node-media_gallery-media_gallery_lightbox_extras */       'type' => 'hidden',
  /* node-media_gallery-media_gallery_lightbox_extras */       'weight' => 4,
  /* node-media_gallery-media_gallery_lightbox_extras */     ),
  /* node-media_gallery-media_gallery_lightbox_extras */     'one_column_teaser' => array(
  /* node-media_gallery-media_gallery_lightbox_extras */       'label' => 'above',
  /* node-media_gallery-media_gallery_lightbox_extras */       'settings' => array(),
  /* node-media_gallery-media_gallery_lightbox_extras */       'type' => 'hidden',
  /* node-media_gallery-media_gallery_lightbox_extras */       'weight' => 0,
  /* node-media_gallery-media_gallery_lightbox_extras */     ),
  /* node-media_gallery-media_gallery_lightbox_extras */     'post_teaser_group_landing_page' => array(
  /* node-media_gallery-media_gallery_lightbox_extras */       'label' => 'above',
  /* node-media_gallery-media_gallery_lightbox_extras */       'settings' => array(),
  /* node-media_gallery-media_gallery_lightbox_extras */       'type' => 'hidden',
  /* node-media_gallery-media_gallery_lightbox_extras */       'weight' => 0,
  /* node-media_gallery-media_gallery_lightbox_extras */     ),
  /* node-media_gallery-media_gallery_lightbox_extras */     'sidebar_' => array(
  /* node-media_gallery-media_gallery_lightbox_extras */       'label' => 'above',
  /* node-media_gallery-media_gallery_lightbox_extras */       'settings' => array(),
  /* node-media_gallery-media_gallery_lightbox_extras */       'type' => 'hidden',
  /* node-media_gallery-media_gallery_lightbox_extras */       'weight' => 0,
  /* node-media_gallery-media_gallery_lightbox_extras */     ),
  /* node-media_gallery-media_gallery_lightbox_extras */     'sidebar_teaser' => array(
  /* node-media_gallery-media_gallery_lightbox_extras */       'label' => 'above',
  /* node-media_gallery-media_gallery_lightbox_extras */       'settings' => array(),
  /* node-media_gallery-media_gallery_lightbox_extras */       'type' => 'hidden',
  /* node-media_gallery-media_gallery_lightbox_extras */       'weight' => 0,
  /* node-media_gallery-media_gallery_lightbox_extras */     ),
  /* node-media_gallery-media_gallery_lightbox_extras */     'sidebar_teaser_v2' => array(
  /* node-media_gallery-media_gallery_lightbox_extras */       'label' => 'above',
  /* node-media_gallery-media_gallery_lightbox_extras */       'settings' => array(),
  /* node-media_gallery-media_gallery_lightbox_extras */       'type' => 'hidden',
  /* node-media_gallery-media_gallery_lightbox_extras */       'weight' => 0,
  /* node-media_gallery-media_gallery_lightbox_extras */     ),
  /* node-media_gallery-media_gallery_lightbox_extras */     'teaser' => array(
  /* node-media_gallery-media_gallery_lightbox_extras */       'label' => 'hidden',
  /* node-media_gallery-media_gallery_lightbox_extras */       'settings' => array(),
  /* node-media_gallery-media_gallery_lightbox_extras */       'type' => 'hidden',
  /* node-media_gallery-media_gallery_lightbox_extras */       'weight' => 4,
  /* node-media_gallery-media_gallery_lightbox_extras */     ),
  /* node-media_gallery-media_gallery_lightbox_extras */     'teaser_w_thumb_and_search' => array(
  /* node-media_gallery-media_gallery_lightbox_extras */       'label' => 'above',
  /* node-media_gallery-media_gallery_lightbox_extras */       'settings' => array(),
  /* node-media_gallery-media_gallery_lightbox_extras */       'type' => 'hidden',
  /* node-media_gallery-media_gallery_lightbox_extras */       'weight' => 0,
  /* node-media_gallery-media_gallery_lightbox_extras */     ),
  /* node-media_gallery-media_gallery_lightbox_extras */     'teaserthumb' => array(
  /* node-media_gallery-media_gallery_lightbox_extras */       'label' => 'above',
  /* node-media_gallery-media_gallery_lightbox_extras */       'settings' => array(),
  /* node-media_gallery-media_gallery_lightbox_extras */       'type' => 'hidden',
  /* node-media_gallery-media_gallery_lightbox_extras */       'weight' => 0,
  /* node-media_gallery-media_gallery_lightbox_extras */     ),
  /* node-media_gallery-media_gallery_lightbox_extras */     'time_and_location' => array(
  /* node-media_gallery-media_gallery_lightbox_extras */       'label' => 'above',
  /* node-media_gallery-media_gallery_lightbox_extras */       'settings' => array(),
  /* node-media_gallery-media_gallery_lightbox_extras */       'type' => 'hidden',
  /* node-media_gallery-media_gallery_lightbox_extras */       'weight' => 0,
  /* node-media_gallery-media_gallery_lightbox_extras */     ),
  /* node-media_gallery-media_gallery_lightbox_extras */     'title_and_time' => array(
  /* node-media_gallery-media_gallery_lightbox_extras */       'label' => 'above',
  /* node-media_gallery-media_gallery_lightbox_extras */       'settings' => array(),
  /* node-media_gallery-media_gallery_lightbox_extras */       'type' => 'hidden',
  /* node-media_gallery-media_gallery_lightbox_extras */       'weight' => 0,
  /* node-media_gallery-media_gallery_lightbox_extras */     ),
  /* node-media_gallery-media_gallery_lightbox_extras */   ),
  /* node-media_gallery-media_gallery_lightbox_extras */   'entity_type' => 'node',
  /* node-media_gallery-media_gallery_lightbox_extras */   'field_name' => 'media_gallery_lightbox_extras',
  /* node-media_gallery-media_gallery_lightbox_extras */   'label' => 'Lightbox title and description',
  /* node-media_gallery-media_gallery_lightbox_extras */   'required' => FALSE,
  /* node-media_gallery-media_gallery_lightbox_extras */   'settings' => array(
  /* node-media_gallery-media_gallery_lightbox_extras */     'user_field_privacy' => FALSE,
  /* node-media_gallery-media_gallery_lightbox_extras */     'user_register_form' => FALSE,
  /* node-media_gallery-media_gallery_lightbox_extras */   ),
  /* node-media_gallery-media_gallery_lightbox_extras */   'widget' => array(
  /* node-media_gallery-media_gallery_lightbox_extras */     'module' => 'options',
  /* node-media_gallery-media_gallery_lightbox_extras */     'settings' => array(
  /* node-media_gallery-media_gallery_lightbox_extras */       'display_label' => 0,
  /* node-media_gallery-media_gallery_lightbox_extras */     ),
  /* node-media_gallery-media_gallery_lightbox_extras */     'type' => 'options_onoff',
  /* node-media_gallery-media_gallery_lightbox_extras */     'weight' => 8,
  /* node-media_gallery-media_gallery_lightbox_extras */   ),
  /* node-media_gallery-media_gallery_lightbox_extras */ );

  // Exported field_instance: 'node-media_gallery-media_gallery_rows'.
  $field_instances['node-media_gallery-media_gallery_rows'] = array(
  /* node-media_gallery-media_gallery_rows */   'bundle' => 'media_gallery',
  /* node-media_gallery-media_gallery_rows */   'default_value' => array(
  /* node-media_gallery-media_gallery_rows */     0 => array(
  /* node-media_gallery-media_gallery_rows */       'value' => 3,
  /* node-media_gallery-media_gallery_rows */     ),
  /* node-media_gallery-media_gallery_rows */   ),
  /* node-media_gallery-media_gallery_rows */   'deleted' => 0,
  /* node-media_gallery-media_gallery_rows */   'description' => '',
  /* node-media_gallery-media_gallery_rows */   'display' => array(
  /* node-media_gallery-media_gallery_rows */     'default' => array(
  /* node-media_gallery-media_gallery_rows */       'label' => 'hidden',
  /* node-media_gallery-media_gallery_rows */       'settings' => array(),
  /* node-media_gallery-media_gallery_rows */       'type' => 'hidden',
  /* node-media_gallery-media_gallery_rows */       'weight' => 6,
  /* node-media_gallery-media_gallery_rows */     ),
  /* node-media_gallery-media_gallery_rows */     'events_list' => array(
  /* node-media_gallery-media_gallery_rows */       'label' => 'above',
  /* node-media_gallery-media_gallery_rows */       'settings' => array(),
  /* node-media_gallery-media_gallery_rows */       'type' => 'hidden',
  /* node-media_gallery-media_gallery_rows */       'weight' => 0,
  /* node-media_gallery-media_gallery_rows */     ),
  /* node-media_gallery-media_gallery_rows */     'full' => array(
  /* node-media_gallery-media_gallery_rows */       'label' => 'hidden',
  /* node-media_gallery-media_gallery_rows */       'settings' => array(),
  /* node-media_gallery-media_gallery_rows */       'type' => 'hidden',
  /* node-media_gallery-media_gallery_rows */       'weight' => 15,
  /* node-media_gallery-media_gallery_rows */     ),
  /* node-media_gallery-media_gallery_rows */     'media_gallery_block' => array(
  /* node-media_gallery-media_gallery_rows */       'label' => 'hidden',
  /* node-media_gallery-media_gallery_rows */       'settings' => array(),
  /* node-media_gallery-media_gallery_rows */       'type' => 'hidden',
  /* node-media_gallery-media_gallery_rows */       'weight' => 6,
  /* node-media_gallery-media_gallery_rows */     ),
  /* node-media_gallery-media_gallery_rows */     'one_column_teaser' => array(
  /* node-media_gallery-media_gallery_rows */       'label' => 'above',
  /* node-media_gallery-media_gallery_rows */       'settings' => array(),
  /* node-media_gallery-media_gallery_rows */       'type' => 'hidden',
  /* node-media_gallery-media_gallery_rows */       'weight' => 0,
  /* node-media_gallery-media_gallery_rows */     ),
  /* node-media_gallery-media_gallery_rows */     'post_teaser_group_landing_page' => array(
  /* node-media_gallery-media_gallery_rows */       'label' => 'above',
  /* node-media_gallery-media_gallery_rows */       'settings' => array(),
  /* node-media_gallery-media_gallery_rows */       'type' => 'hidden',
  /* node-media_gallery-media_gallery_rows */       'weight' => 0,
  /* node-media_gallery-media_gallery_rows */     ),
  /* node-media_gallery-media_gallery_rows */     'sidebar_' => array(
  /* node-media_gallery-media_gallery_rows */       'label' => 'above',
  /* node-media_gallery-media_gallery_rows */       'settings' => array(),
  /* node-media_gallery-media_gallery_rows */       'type' => 'hidden',
  /* node-media_gallery-media_gallery_rows */       'weight' => 0,
  /* node-media_gallery-media_gallery_rows */     ),
  /* node-media_gallery-media_gallery_rows */     'sidebar_teaser' => array(
  /* node-media_gallery-media_gallery_rows */       'label' => 'above',
  /* node-media_gallery-media_gallery_rows */       'settings' => array(),
  /* node-media_gallery-media_gallery_rows */       'type' => 'hidden',
  /* node-media_gallery-media_gallery_rows */       'weight' => 0,
  /* node-media_gallery-media_gallery_rows */     ),
  /* node-media_gallery-media_gallery_rows */     'sidebar_teaser_v2' => array(
  /* node-media_gallery-media_gallery_rows */       'label' => 'above',
  /* node-media_gallery-media_gallery_rows */       'settings' => array(),
  /* node-media_gallery-media_gallery_rows */       'type' => 'hidden',
  /* node-media_gallery-media_gallery_rows */       'weight' => 0,
  /* node-media_gallery-media_gallery_rows */     ),
  /* node-media_gallery-media_gallery_rows */     'teaser' => array(
  /* node-media_gallery-media_gallery_rows */       'label' => 'hidden',
  /* node-media_gallery-media_gallery_rows */       'settings' => array(),
  /* node-media_gallery-media_gallery_rows */       'type' => 'hidden',
  /* node-media_gallery-media_gallery_rows */       'weight' => 6,
  /* node-media_gallery-media_gallery_rows */     ),
  /* node-media_gallery-media_gallery_rows */     'teaser_w_thumb_and_search' => array(
  /* node-media_gallery-media_gallery_rows */       'label' => 'above',
  /* node-media_gallery-media_gallery_rows */       'settings' => array(),
  /* node-media_gallery-media_gallery_rows */       'type' => 'hidden',
  /* node-media_gallery-media_gallery_rows */       'weight' => 0,
  /* node-media_gallery-media_gallery_rows */     ),
  /* node-media_gallery-media_gallery_rows */     'teaserthumb' => array(
  /* node-media_gallery-media_gallery_rows */       'label' => 'above',
  /* node-media_gallery-media_gallery_rows */       'settings' => array(),
  /* node-media_gallery-media_gallery_rows */       'type' => 'hidden',
  /* node-media_gallery-media_gallery_rows */       'weight' => 0,
  /* node-media_gallery-media_gallery_rows */     ),
  /* node-media_gallery-media_gallery_rows */     'time_and_location' => array(
  /* node-media_gallery-media_gallery_rows */       'label' => 'above',
  /* node-media_gallery-media_gallery_rows */       'settings' => array(),
  /* node-media_gallery-media_gallery_rows */       'type' => 'hidden',
  /* node-media_gallery-media_gallery_rows */       'weight' => 0,
  /* node-media_gallery-media_gallery_rows */     ),
  /* node-media_gallery-media_gallery_rows */     'title_and_time' => array(
  /* node-media_gallery-media_gallery_rows */       'label' => 'above',
  /* node-media_gallery-media_gallery_rows */       'settings' => array(),
  /* node-media_gallery-media_gallery_rows */       'type' => 'hidden',
  /* node-media_gallery-media_gallery_rows */       'weight' => 0,
  /* node-media_gallery-media_gallery_rows */     ),
  /* node-media_gallery-media_gallery_rows */   ),
  /* node-media_gallery-media_gallery_rows */   'entity_type' => 'node',
  /* node-media_gallery-media_gallery_rows */   'field_name' => 'media_gallery_rows',
  /* node-media_gallery-media_gallery_rows */   'label' => 'Number of rows',
  /* node-media_gallery-media_gallery_rows */   'required' => TRUE,
  /* node-media_gallery-media_gallery_rows */   'settings' => array(
  /* node-media_gallery-media_gallery_rows */     'max' => '',
  /* node-media_gallery-media_gallery_rows */     'min' => 1,
  /* node-media_gallery-media_gallery_rows */     'prefix' => '',
  /* node-media_gallery-media_gallery_rows */     'suffix' => '',
  /* node-media_gallery-media_gallery_rows */     'user_field_privacy' => FALSE,
  /* node-media_gallery-media_gallery_rows */     'user_register_form' => FALSE,
  /* node-media_gallery-media_gallery_rows */   ),
  /* node-media_gallery-media_gallery_rows */   'widget' => array(
  /* node-media_gallery-media_gallery_rows */     'module' => 'number',
  /* node-media_gallery-media_gallery_rows */     'settings' => array(),
  /* node-media_gallery-media_gallery_rows */     'type' => 'number',
  /* node-media_gallery-media_gallery_rows */     'weight' => 10,
  /* node-media_gallery-media_gallery_rows */   ),
  /* node-media_gallery-media_gallery_rows */ );

  // Exported field_instance: 'node-media_gallery-og_group_ref'.
  $field_instances['node-media_gallery-og_group_ref'] = array(
  /* node-media_gallery-og_group_ref */   'bundle' => 'media_gallery',
  /* node-media_gallery-og_group_ref */   'default_value' => NULL,
  /* node-media_gallery-og_group_ref */   'deleted' => 0,
  /* node-media_gallery-og_group_ref */   'description' => '',
  /* node-media_gallery-og_group_ref */   'display' => array(
  /* node-media_gallery-og_group_ref */     'default' => array(
  /* node-media_gallery-og_group_ref */       'label' => 'above',
  /* node-media_gallery-og_group_ref */       'module' => 'og_ui',
  /* node-media_gallery-og_group_ref */       'settings' => array(
  /* node-media_gallery-og_group_ref */         'field_formatter_class' => '',
  /* node-media_gallery-og_group_ref */       ),
  /* node-media_gallery-og_group_ref */       'type' => 'og_list_default',
  /* node-media_gallery-og_group_ref */       'weight' => 13,
  /* node-media_gallery-og_group_ref */     ),
  /* node-media_gallery-og_group_ref */     'events_list' => array(
  /* node-media_gallery-og_group_ref */       'label' => 'above',
  /* node-media_gallery-og_group_ref */       'settings' => array(),
  /* node-media_gallery-og_group_ref */       'type' => 'hidden',
  /* node-media_gallery-og_group_ref */       'weight' => 0,
  /* node-media_gallery-og_group_ref */     ),
  /* node-media_gallery-og_group_ref */     'full' => array(
  /* node-media_gallery-og_group_ref */       'label' => 'above',
  /* node-media_gallery-og_group_ref */       'settings' => array(),
  /* node-media_gallery-og_group_ref */       'type' => 'hidden',
  /* node-media_gallery-og_group_ref */       'weight' => 8,
  /* node-media_gallery-og_group_ref */     ),
  /* node-media_gallery-og_group_ref */     'media_gallery_block' => array(
  /* node-media_gallery-og_group_ref */       'label' => 'above',
  /* node-media_gallery-og_group_ref */       'settings' => array(),
  /* node-media_gallery-og_group_ref */       'type' => 'hidden',
  /* node-media_gallery-og_group_ref */       'weight' => 0,
  /* node-media_gallery-og_group_ref */     ),
  /* node-media_gallery-og_group_ref */     'one_column_teaser' => array(
  /* node-media_gallery-og_group_ref */       'label' => 'above',
  /* node-media_gallery-og_group_ref */       'settings' => array(),
  /* node-media_gallery-og_group_ref */       'type' => 'hidden',
  /* node-media_gallery-og_group_ref */       'weight' => 0,
  /* node-media_gallery-og_group_ref */     ),
  /* node-media_gallery-og_group_ref */     'post_teaser_group_landing_page' => array(
  /* node-media_gallery-og_group_ref */       'label' => 'above',
  /* node-media_gallery-og_group_ref */       'settings' => array(),
  /* node-media_gallery-og_group_ref */       'type' => 'hidden',
  /* node-media_gallery-og_group_ref */       'weight' => 0,
  /* node-media_gallery-og_group_ref */     ),
  /* node-media_gallery-og_group_ref */     'sidebar_' => array(
  /* node-media_gallery-og_group_ref */       'label' => 'above',
  /* node-media_gallery-og_group_ref */       'settings' => array(),
  /* node-media_gallery-og_group_ref */       'type' => 'hidden',
  /* node-media_gallery-og_group_ref */       'weight' => 0,
  /* node-media_gallery-og_group_ref */     ),
  /* node-media_gallery-og_group_ref */     'sidebar_teaser' => array(
  /* node-media_gallery-og_group_ref */       'label' => 'above',
  /* node-media_gallery-og_group_ref */       'settings' => array(),
  /* node-media_gallery-og_group_ref */       'type' => 'hidden',
  /* node-media_gallery-og_group_ref */       'weight' => 0,
  /* node-media_gallery-og_group_ref */     ),
  /* node-media_gallery-og_group_ref */     'sidebar_teaser_v2' => array(
  /* node-media_gallery-og_group_ref */       'label' => 'above',
  /* node-media_gallery-og_group_ref */       'settings' => array(),
  /* node-media_gallery-og_group_ref */       'type' => 'hidden',
  /* node-media_gallery-og_group_ref */       'weight' => 0,
  /* node-media_gallery-og_group_ref */     ),
  /* node-media_gallery-og_group_ref */     'teaser' => array(
  /* node-media_gallery-og_group_ref */       'label' => 'above',
  /* node-media_gallery-og_group_ref */       'settings' => array(),
  /* node-media_gallery-og_group_ref */       'type' => 'hidden',
  /* node-media_gallery-og_group_ref */       'weight' => 0,
  /* node-media_gallery-og_group_ref */     ),
  /* node-media_gallery-og_group_ref */     'teaser_w_thumb_and_search' => array(
  /* node-media_gallery-og_group_ref */       'label' => 'above',
  /* node-media_gallery-og_group_ref */       'settings' => array(),
  /* node-media_gallery-og_group_ref */       'type' => 'hidden',
  /* node-media_gallery-og_group_ref */       'weight' => 0,
  /* node-media_gallery-og_group_ref */     ),
  /* node-media_gallery-og_group_ref */     'teaserthumb' => array(
  /* node-media_gallery-og_group_ref */       'label' => 'above',
  /* node-media_gallery-og_group_ref */       'settings' => array(),
  /* node-media_gallery-og_group_ref */       'type' => 'hidden',
  /* node-media_gallery-og_group_ref */       'weight' => 0,
  /* node-media_gallery-og_group_ref */     ),
  /* node-media_gallery-og_group_ref */     'time_and_location' => array(
  /* node-media_gallery-og_group_ref */       'label' => 'above',
  /* node-media_gallery-og_group_ref */       'settings' => array(),
  /* node-media_gallery-og_group_ref */       'type' => 'hidden',
  /* node-media_gallery-og_group_ref */       'weight' => 0,
  /* node-media_gallery-og_group_ref */     ),
  /* node-media_gallery-og_group_ref */     'title_and_time' => array(
  /* node-media_gallery-og_group_ref */       'label' => 'above',
  /* node-media_gallery-og_group_ref */       'settings' => array(),
  /* node-media_gallery-og_group_ref */       'type' => 'hidden',
  /* node-media_gallery-og_group_ref */       'weight' => 0,
  /* node-media_gallery-og_group_ref */     ),
  /* node-media_gallery-og_group_ref */   ),
  /* node-media_gallery-og_group_ref */   'entity_type' => 'node',
  /* node-media_gallery-og_group_ref */   'field_name' => 'og_group_ref',
  /* node-media_gallery-og_group_ref */   'label' => 'Groups audience',
  /* node-media_gallery-og_group_ref */   'required' => FALSE,
  /* node-media_gallery-og_group_ref */   'settings' => array(
  /* node-media_gallery-og_group_ref */     'behaviors' => array(
  /* node-media_gallery-og_group_ref */       'og_widget' => array(
  /* node-media_gallery-og_group_ref */         'admin' => array(
  /* node-media_gallery-og_group_ref */           'widget_type' => 'entityreference_autocomplete',
  /* node-media_gallery-og_group_ref */         ),
  /* node-media_gallery-og_group_ref */         'default' => array(
  /* node-media_gallery-og_group_ref */           'widget_type' => 'options_select',
  /* node-media_gallery-og_group_ref */         ),
  /* node-media_gallery-og_group_ref */         'status' => TRUE,
  /* node-media_gallery-og_group_ref */       ),
  /* node-media_gallery-og_group_ref */     ),
  /* node-media_gallery-og_group_ref */     'user_field_privacy' => FALSE,
  /* node-media_gallery-og_group_ref */     'user_register_form' => FALSE,
  /* node-media_gallery-og_group_ref */   ),
  /* node-media_gallery-og_group_ref */   'view modes' => array(
  /* node-media_gallery-og_group_ref */     'full' => array(
  /* node-media_gallery-og_group_ref */       'custom settings' => FALSE,
  /* node-media_gallery-og_group_ref */       'label' => 'Full',
  /* node-media_gallery-og_group_ref */       'type' => 'og_list_default',
  /* node-media_gallery-og_group_ref */     ),
  /* node-media_gallery-og_group_ref */     'teaser' => array(
  /* node-media_gallery-og_group_ref */       'custom settings' => FALSE,
  /* node-media_gallery-og_group_ref */       'label' => 'Teaser',
  /* node-media_gallery-og_group_ref */       'type' => 'og_list_default',
  /* node-media_gallery-og_group_ref */     ),
  /* node-media_gallery-og_group_ref */   ),
  /* node-media_gallery-og_group_ref */   'widget' => array(
  /* node-media_gallery-og_group_ref */     'module' => 'og',
  /* node-media_gallery-og_group_ref */     'settings' => array(),
  /* node-media_gallery-og_group_ref */     'type' => 'og_complex',
  /* node-media_gallery-og_group_ref */     'weight' => 11,
  /* node-media_gallery-og_group_ref */   ),
  /* node-media_gallery-og_group_ref */ );

  // Exported field_instance: 'taxonomy_term-gallery_collections-field_license'.
  $field_instances['taxonomy_term-gallery_collections-field_license'] = array(
  /* taxonomy_term-gallery_collections-field_license */   'bundle' => 'gallery_collections',
  /* taxonomy_term-gallery_collections-field_license */   'default_value' => array(
  /* taxonomy_term-gallery_collections-field_license */     0 => array(
  /* taxonomy_term-gallery_collections-field_license */       'value' => 'nothing',
  /* taxonomy_term-gallery_collections-field_license */     ),
  /* taxonomy_term-gallery_collections-field_license */   ),
  /* taxonomy_term-gallery_collections-field_license */   'deleted' => 0,
  /* taxonomy_term-gallery_collections-field_license */   'description' => 'Choose a default <a href="http://creativecommons.org">Creative Commons</a> license for all Gallery media. Later you can change the license for each piece of media.',
  /* taxonomy_term-gallery_collections-field_license */   'display' => array(
  /* taxonomy_term-gallery_collections-field_license */     'default' => array(
  /* taxonomy_term-gallery_collections-field_license */       'label' => 'hidden',
  /* taxonomy_term-gallery_collections-field_license */       'settings' => array(),
  /* taxonomy_term-gallery_collections-field_license */       'type' => 'hidden',
  /* taxonomy_term-gallery_collections-field_license */       'weight' => 3,
  /* taxonomy_term-gallery_collections-field_license */     ),
  /* taxonomy_term-gallery_collections-field_license */   ),
  /* taxonomy_term-gallery_collections-field_license */   'entity_type' => 'taxonomy_term',
  /* taxonomy_term-gallery_collections-field_license */   'field_name' => 'field_license',
  /* taxonomy_term-gallery_collections-field_license */   'label' => 'Default license settings',
  /* taxonomy_term-gallery_collections-field_license */   'required' => TRUE,
  /* taxonomy_term-gallery_collections-field_license */   'settings' => array(
  /* taxonomy_term-gallery_collections-field_license */     'user_field_privacy' => FALSE,
  /* taxonomy_term-gallery_collections-field_license */     'user_register_form' => FALSE,
  /* taxonomy_term-gallery_collections-field_license */   ),
  /* taxonomy_term-gallery_collections-field_license */   'weight' => 14,
  /* taxonomy_term-gallery_collections-field_license */   'widget' => array(
  /* taxonomy_term-gallery_collections-field_license */     'module' => 'options',
  /* taxonomy_term-gallery_collections-field_license */     'settings' => array(
  /* taxonomy_term-gallery_collections-field_license */       'apply_chosen' => '',
  /* taxonomy_term-gallery_collections-field_license */     ),
  /* taxonomy_term-gallery_collections-field_license */     'type' => 'options_select',
  /* taxonomy_term-gallery_collections-field_license */     'weight' => 34,
  /* taxonomy_term-gallery_collections-field_license */   ),
  /* taxonomy_term-gallery_collections-field_license */ );

  // Exported field_instance:
  // 'taxonomy_term-gallery_collections-media_gallery_columns'.
  $field_instances['taxonomy_term-gallery_collections-media_gallery_columns'] = array(
  /* taxonomy_term-gallery_collections-media_gallery_columns */   'bundle' => 'gallery_collections',
  /* taxonomy_term-gallery_collections-media_gallery_columns */   'default_value' => array(
  /* taxonomy_term-gallery_collections-media_gallery_columns */     0 => array(
  /* taxonomy_term-gallery_collections-media_gallery_columns */       'value' => 4,
  /* taxonomy_term-gallery_collections-media_gallery_columns */     ),
  /* taxonomy_term-gallery_collections-media_gallery_columns */   ),
  /* taxonomy_term-gallery_collections-media_gallery_columns */   'deleted' => 0,
  /* taxonomy_term-gallery_collections-media_gallery_columns */   'description' => '',
  /* taxonomy_term-gallery_collections-media_gallery_columns */   'display' => array(
  /* taxonomy_term-gallery_collections-media_gallery_columns */     'default' => array(
  /* taxonomy_term-gallery_collections-media_gallery_columns */       'label' => 'hidden',
  /* taxonomy_term-gallery_collections-media_gallery_columns */       'settings' => array(),
  /* taxonomy_term-gallery_collections-media_gallery_columns */       'type' => 'hidden',
  /* taxonomy_term-gallery_collections-media_gallery_columns */       'weight' => 0,
  /* taxonomy_term-gallery_collections-media_gallery_columns */     ),
  /* taxonomy_term-gallery_collections-media_gallery_columns */     'full' => array(
  /* taxonomy_term-gallery_collections-media_gallery_columns */       'label' => 'hidden',
  /* taxonomy_term-gallery_collections-media_gallery_columns */       'settings' => array(),
  /* taxonomy_term-gallery_collections-media_gallery_columns */       'type' => 'hidden',
  /* taxonomy_term-gallery_collections-media_gallery_columns */       'weight' => 0,
  /* taxonomy_term-gallery_collections-media_gallery_columns */     ),
  /* taxonomy_term-gallery_collections-media_gallery_columns */   ),
  /* taxonomy_term-gallery_collections-media_gallery_columns */   'entity_type' => 'taxonomy_term',
  /* taxonomy_term-gallery_collections-media_gallery_columns */   'field_name' => 'media_gallery_columns',
  /* taxonomy_term-gallery_collections-media_gallery_columns */   'label' => 'Number of columns',
  /* taxonomy_term-gallery_collections-media_gallery_columns */   'required' => TRUE,
  /* taxonomy_term-gallery_collections-media_gallery_columns */   'settings' => array(
  /* taxonomy_term-gallery_collections-media_gallery_columns */     'user_field_privacy' => FALSE,
  /* taxonomy_term-gallery_collections-media_gallery_columns */     'user_register_form' => FALSE,
  /* taxonomy_term-gallery_collections-media_gallery_columns */   ),
  /* taxonomy_term-gallery_collections-media_gallery_columns */   'widget' => array(
  /* taxonomy_term-gallery_collections-media_gallery_columns */     'module' => 'options',
  /* taxonomy_term-gallery_collections-media_gallery_columns */     'settings' => array(
  /* taxonomy_term-gallery_collections-media_gallery_columns */       'apply_chosen' => '',
  /* taxonomy_term-gallery_collections-media_gallery_columns */     ),
  /* taxonomy_term-gallery_collections-media_gallery_columns */     'type' => 'options_select',
  /* taxonomy_term-gallery_collections-media_gallery_columns */     'weight' => 31,
  /* taxonomy_term-gallery_collections-media_gallery_columns */   ),
  /* taxonomy_term-gallery_collections-media_gallery_columns */ );

  // Exported field_instance:
  // 'taxonomy_term-gallery_collections-media_gallery_image_info_where'.
  $field_instances['taxonomy_term-gallery_collections-media_gallery_image_info_where'] = array(
  /* taxonomy_term-gallery_collections-media_gallery_image_info_where */   'bundle' => 'gallery_collections',
  /* taxonomy_term-gallery_collections-media_gallery_image_info_where */   'default_value' => array(
  /* taxonomy_term-gallery_collections-media_gallery_image_info_where */     0 => array(
  /* taxonomy_term-gallery_collections-media_gallery_image_info_where */       'value' => 'hover',
  /* taxonomy_term-gallery_collections-media_gallery_image_info_where */     ),
  /* taxonomy_term-gallery_collections-media_gallery_image_info_where */   ),
  /* taxonomy_term-gallery_collections-media_gallery_image_info_where */   'deleted' => 0,
  /* taxonomy_term-gallery_collections-media_gallery_image_info_where */   'description' => '',
  /* taxonomy_term-gallery_collections-media_gallery_image_info_where */   'display' => array(
  /* taxonomy_term-gallery_collections-media_gallery_image_info_where */     'default' => array(
  /* taxonomy_term-gallery_collections-media_gallery_image_info_where */       'label' => 'hidden',
  /* taxonomy_term-gallery_collections-media_gallery_image_info_where */       'settings' => array(),
  /* taxonomy_term-gallery_collections-media_gallery_image_info_where */       'type' => 'hidden',
  /* taxonomy_term-gallery_collections-media_gallery_image_info_where */       'weight' => 2,
  /* taxonomy_term-gallery_collections-media_gallery_image_info_where */     ),
  /* taxonomy_term-gallery_collections-media_gallery_image_info_where */     'full' => array(
  /* taxonomy_term-gallery_collections-media_gallery_image_info_where */       'label' => 'hidden',
  /* taxonomy_term-gallery_collections-media_gallery_image_info_where */       'settings' => array(),
  /* taxonomy_term-gallery_collections-media_gallery_image_info_where */       'type' => 'hidden',
  /* taxonomy_term-gallery_collections-media_gallery_image_info_where */       'weight' => 2,
  /* taxonomy_term-gallery_collections-media_gallery_image_info_where */     ),
  /* taxonomy_term-gallery_collections-media_gallery_image_info_where */   ),
  /* taxonomy_term-gallery_collections-media_gallery_image_info_where */   'entity_type' => 'taxonomy_term',
  /* taxonomy_term-gallery_collections-media_gallery_image_info_where */   'field_name' => 'media_gallery_image_info_where',
  /* taxonomy_term-gallery_collections-media_gallery_image_info_where */   'label' => 'Gallery information',
  /* taxonomy_term-gallery_collections-media_gallery_image_info_where */   'required' => TRUE,
  /* taxonomy_term-gallery_collections-media_gallery_image_info_where */   'settings' => array(
  /* taxonomy_term-gallery_collections-media_gallery_image_info_where */     'user_field_privacy' => FALSE,
  /* taxonomy_term-gallery_collections-media_gallery_image_info_where */     'user_register_form' => FALSE,
  /* taxonomy_term-gallery_collections-media_gallery_image_info_where */   ),
  /* taxonomy_term-gallery_collections-media_gallery_image_info_where */   'widget' => array(
  /* taxonomy_term-gallery_collections-media_gallery_image_info_where */     'module' => 'options',
  /* taxonomy_term-gallery_collections-media_gallery_image_info_where */     'settings' => array(
  /* taxonomy_term-gallery_collections-media_gallery_image_info_where */       'apply_chosen' => '',
  /* taxonomy_term-gallery_collections-media_gallery_image_info_where */     ),
  /* taxonomy_term-gallery_collections-media_gallery_image_info_where */     'type' => 'options_select',
  /* taxonomy_term-gallery_collections-media_gallery_image_info_where */     'weight' => 33,
  /* taxonomy_term-gallery_collections-media_gallery_image_info_where */   ),
  /* taxonomy_term-gallery_collections-media_gallery_image_info_where */ );

  // Exported field_instance:
  // 'taxonomy_term-gallery_collections-media_gallery_rows'.
  $field_instances['taxonomy_term-gallery_collections-media_gallery_rows'] = array(
  /* taxonomy_term-gallery_collections-media_gallery_rows */   'bundle' => 'gallery_collections',
  /* taxonomy_term-gallery_collections-media_gallery_rows */   'default_value' => array(
  /* taxonomy_term-gallery_collections-media_gallery_rows */     0 => array(
  /* taxonomy_term-gallery_collections-media_gallery_rows */       'value' => 3,
  /* taxonomy_term-gallery_collections-media_gallery_rows */     ),
  /* taxonomy_term-gallery_collections-media_gallery_rows */   ),
  /* taxonomy_term-gallery_collections-media_gallery_rows */   'deleted' => 0,
  /* taxonomy_term-gallery_collections-media_gallery_rows */   'description' => '',
  /* taxonomy_term-gallery_collections-media_gallery_rows */   'display' => array(
  /* taxonomy_term-gallery_collections-media_gallery_rows */     'default' => array(
  /* taxonomy_term-gallery_collections-media_gallery_rows */       'label' => 'hidden',
  /* taxonomy_term-gallery_collections-media_gallery_rows */       'settings' => array(),
  /* taxonomy_term-gallery_collections-media_gallery_rows */       'type' => 'hidden',
  /* taxonomy_term-gallery_collections-media_gallery_rows */       'weight' => 1,
  /* taxonomy_term-gallery_collections-media_gallery_rows */     ),
  /* taxonomy_term-gallery_collections-media_gallery_rows */     'full' => array(
  /* taxonomy_term-gallery_collections-media_gallery_rows */       'label' => 'hidden',
  /* taxonomy_term-gallery_collections-media_gallery_rows */       'settings' => array(),
  /* taxonomy_term-gallery_collections-media_gallery_rows */       'type' => 'hidden',
  /* taxonomy_term-gallery_collections-media_gallery_rows */       'weight' => 1,
  /* taxonomy_term-gallery_collections-media_gallery_rows */     ),
  /* taxonomy_term-gallery_collections-media_gallery_rows */   ),
  /* taxonomy_term-gallery_collections-media_gallery_rows */   'entity_type' => 'taxonomy_term',
  /* taxonomy_term-gallery_collections-media_gallery_rows */   'field_name' => 'media_gallery_rows',
  /* taxonomy_term-gallery_collections-media_gallery_rows */   'label' => 'Number of rows',
  /* taxonomy_term-gallery_collections-media_gallery_rows */   'required' => TRUE,
  /* taxonomy_term-gallery_collections-media_gallery_rows */   'settings' => array(
  /* taxonomy_term-gallery_collections-media_gallery_rows */     'max' => '',
  /* taxonomy_term-gallery_collections-media_gallery_rows */     'min' => 1,
  /* taxonomy_term-gallery_collections-media_gallery_rows */     'prefix' => '',
  /* taxonomy_term-gallery_collections-media_gallery_rows */     'suffix' => '',
  /* taxonomy_term-gallery_collections-media_gallery_rows */     'user_field_privacy' => FALSE,
  /* taxonomy_term-gallery_collections-media_gallery_rows */     'user_register_form' => FALSE,
  /* taxonomy_term-gallery_collections-media_gallery_rows */   ),
  /* taxonomy_term-gallery_collections-media_gallery_rows */   'widget' => array(
  /* taxonomy_term-gallery_collections-media_gallery_rows */     'module' => 'number',
  /* taxonomy_term-gallery_collections-media_gallery_rows */     'settings' => array(),
  /* taxonomy_term-gallery_collections-media_gallery_rows */     'type' => 'number',
  /* taxonomy_term-gallery_collections-media_gallery_rows */     'weight' => 32,
  /* taxonomy_term-gallery_collections-media_gallery_rows */   ),
  /* taxonomy_term-gallery_collections-media_gallery_rows */ );

  // Translatables
  // Included for use with string extractors like potx.
  t('Additional Comments/Remarks');
  t('All emails from the system will be sent to this address. Your email address is not made public and will only be used if you wish to receive a new password or wish to receive news or notifications by email.');
  t('Allow downloading of the original image');
  t('Associated Media');
  t('Before Adding Days, at least one Week must be created for Day placement.
Before Adding Units, at least one Day must be created for Unit placement.');
  t('Choose a default <a href="http://creativecommons.org">Creative Commons</a> license for all Gallery media. Later you can change the license for each piece of media.');
  t('Choose the day with which this unit is associated');
  t('Choose the week with which this day is associated');
  t('Comment');
  t('Countries');
  t('Country of Representation');
  t('Country of Residence');
  t('Create a block of most recently added media');
  t('Date');
  t('Day Association');
  t('Day Number');
  t('Default license settings');
  t('Description');
  t('Display a "download original image" link');
  t('Family Name');
  t('Files must not exceed 500 MB. Allowed file types: avi csx doc docx gif gif gz jpeg jpg m4a m4v mov mp3 mp4 mpeg mpg mpv notebook odp ods odt oga ogg ogv pdf png pps ppsx ppt pptx pub tar txt weba webm webp wmv xls xlsx zip.');
  t('Folder layout');
  t('Gallery collection');
  t('Gallery format');
  t('Gallery information');
  t('Gallery media');
  t('Given Name');
  t('Group content visibility');
  t('Groups audience');
  t('Lightbox title and description');
  t('Media information');
  t('Nationality');
  t('Node Association');
  t('Number of columns');
  t('Number of rows');
  t('Organization');
  t('PLEASE NOTE: Session presenters are limited to course participants.  Individuals must already be members of the course before they can be assigned the role of presenter.');
  t('Preferred Language');
  t('Regions');
  t('Session Presenter');
  t('Shared Entity Ref');
  t('Show title and description');
  t('Status');
  t('The country in which you currently live.');
  t('The country in which you were born and/or for which you have a passport.');
  t('The country you are representing on the GlobalNET system and in the classes, seminars and events you attend.');
  t('The date that this week will begin. Week will span seven days including week start day, allowing for seven days to be assigned to this week. A minimum of 1 day should be added.');
  t('Title');
  t('Topics');
  t('Type');
  t('Week Association');
  t('Weight');
  t('Weight is used to determine order. Lower numbers will appear above higher numbers, i.e: 1 will be above 2 in the list of units.');
  t('Where do you work');
  t('Which course did you attend?');
  t('Which course will you be attending?');
  t('Which course will you be teaching?');
  t('Which event will you be attending?');
  t('Who can see this content?');
  t('Who teaches the course?');
  t('Why do you want to create an account?');
  t('Why do you want to join this organization?');
  t('Your Email Address');

  return $field_instances;
}
