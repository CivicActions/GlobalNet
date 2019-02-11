<?php
/**
 * @file
 * gn2_courses.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function gn2_courses_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance:
  // 'field_collection_item-field_session-field_description'.
  $field_instances['field_collection_item-field_session-field_description'] = array(
  /* field_collection_item-field_session-field_description */   'bundle' => 'field_session',
  /* field_collection_item-field_session-field_description */   'default_value' => NULL,
  /* field_collection_item-field_session-field_description */   'deleted' => 0,
  /* field_collection_item-field_session-field_description */   'description' => '',
  /* field_collection_item-field_session-field_description */   'display' => array(
  /* field_collection_item-field_session-field_description */     'default' => array(
  /* field_collection_item-field_session-field_description */       'label' => 'hidden',
  /* field_collection_item-field_session-field_description */       'module' => 'text',
  /* field_collection_item-field_session-field_description */       'settings' => array(
  /* field_collection_item-field_session-field_description */         'field_formatter_class' => '',
  /* field_collection_item-field_session-field_description */       ),
  /* field_collection_item-field_session-field_description */       'type' => 'text_default',
  /* field_collection_item-field_session-field_description */       'weight' => 2,
  /* field_collection_item-field_session-field_description */     ),
  /* field_collection_item-field_session-field_description */     'full' => array(
  /* field_collection_item-field_session-field_description */       'label' => 'hidden',
  /* field_collection_item-field_session-field_description */       'module' => 'text',
  /* field_collection_item-field_session-field_description */       'settings' => array(
  /* field_collection_item-field_session-field_description */         'field_formatter_class' => '',
  /* field_collection_item-field_session-field_description */       ),
  /* field_collection_item-field_session-field_description */       'type' => 'text_default',
  /* field_collection_item-field_session-field_description */       'weight' => 1,
  /* field_collection_item-field_session-field_description */     ),
  /* field_collection_item-field_session-field_description */     'token' => array(
  /* field_collection_item-field_session-field_description */       'label' => 'hidden',
  /* field_collection_item-field_session-field_description */       'module' => 'text',
  /* field_collection_item-field_session-field_description */       'settings' => array(
  /* field_collection_item-field_session-field_description */         'field_formatter_class' => '',
  /* field_collection_item-field_session-field_description */       ),
  /* field_collection_item-field_session-field_description */       'type' => 'text_default',
  /* field_collection_item-field_session-field_description */       'weight' => 1,
  /* field_collection_item-field_session-field_description */     ),
  /* field_collection_item-field_session-field_description */   ),
  /* field_collection_item-field_session-field_description */   'entity_type' => 'field_collection_item',
  /* field_collection_item-field_session-field_description */   'fences_wrapper' => 'div',
  /* field_collection_item-field_session-field_description */   'field_name' => 'field_description',
  /* field_collection_item-field_session-field_description */   'label' => 'Description',
  /* field_collection_item-field_session-field_description */   'required' => 0,
  /* field_collection_item-field_session-field_description */   'settings' => array(
  /* field_collection_item-field_session-field_description */     'better_formats' => array(
  /* field_collection_item-field_session-field_description */       'allowed_formats' => array(
  /* field_collection_item-field_session-field_description */         'filtered_html' => 0,
  /* field_collection_item-field_session-field_description */         'full_html' => 0,
  /* field_collection_item-field_session-field_description */         'plain_text' => 0,
  /* field_collection_item-field_session-field_description */         'sessions_wysiwyg' => 'sessions_wysiwyg',
  /* field_collection_item-field_session-field_description */       ),
  /* field_collection_item-field_session-field_description */       'allowed_formats_toggle' => 1,
  /* field_collection_item-field_session-field_description */       'default_order_toggle' => 1,
  /* field_collection_item-field_session-field_description */       'default_order_wrapper' => array(
  /* field_collection_item-field_session-field_description */         'formats' => array(
  /* field_collection_item-field_session-field_description */           'filtered_html' => array(
  /* field_collection_item-field_session-field_description */             'weight' => -10,
  /* field_collection_item-field_session-field_description */           ),
  /* field_collection_item-field_session-field_description */           'full_html' => array(
  /* field_collection_item-field_session-field_description */             'weight' => -8,
  /* field_collection_item-field_session-field_description */           ),
  /* field_collection_item-field_session-field_description */           'plain_text' => array(
  /* field_collection_item-field_session-field_description */             'weight' => -9,
  /* field_collection_item-field_session-field_description */           ),
  /* field_collection_item-field_session-field_description */           'sessions_wysiwyg' => array(
  /* field_collection_item-field_session-field_description */             'weight' => 0,
  /* field_collection_item-field_session-field_description */           ),
  /* field_collection_item-field_session-field_description */         ),
  /* field_collection_item-field_session-field_description */       ),
  /* field_collection_item-field_session-field_description */     ),
  /* field_collection_item-field_session-field_description */     'text_processing' => 1,
  /* field_collection_item-field_session-field_description */     'user_register_form' => FALSE,
  /* field_collection_item-field_session-field_description */   ),
  /* field_collection_item-field_session-field_description */   'widget' => array(
  /* field_collection_item-field_session-field_description */     'active' => 1,
  /* field_collection_item-field_session-field_description */     'module' => 'text',
  /* field_collection_item-field_session-field_description */     'settings' => array(
  /* field_collection_item-field_session-field_description */       'rows' => 5,
  /* field_collection_item-field_session-field_description */     ),
  /* field_collection_item-field_session-field_description */     'type' => 'text_textarea',
  /* field_collection_item-field_session-field_description */     'weight' => 1,
  /* field_collection_item-field_session-field_description */   ),
  /* field_collection_item-field_session-field_description */ );

  // Exported field_instance:
  // 'field_collection_item-field_session-field_session_day'.
  $field_instances['field_collection_item-field_session-field_session_day'] = array(
  /* field_collection_item-field_session-field_session_day */   'bundle' => 'field_session',
  /* field_collection_item-field_session-field_session_day */   'default_value' => NULL,
  /* field_collection_item-field_session-field_session_day */   'deleted' => 0,
  /* field_collection_item-field_session-field_session_day */   'description' => '',
  /* field_collection_item-field_session-field_session_day */   'display' => array(
  /* field_collection_item-field_session-field_session_day */     'default' => array(
  /* field_collection_item-field_session-field_session_day */       'label' => 'hidden',
  /* field_collection_item-field_session-field_session_day */       'module' => 'field_collection',
  /* field_collection_item-field_session-field_session_day */       'settings' => array(
  /* field_collection_item-field_session-field_session_day */         'field_formatter_class' => '',
  /* field_collection_item-field_session-field_session_day */         'view_mode' => 'full',
  /* field_collection_item-field_session-field_session_day */       ),
  /* field_collection_item-field_session-field_session_day */       'type' => 'field_collection_fields',
  /* field_collection_item-field_session-field_session_day */       'weight' => 3,
  /* field_collection_item-field_session-field_session_day */     ),
  /* field_collection_item-field_session-field_session_day */     'full' => array(
  /* field_collection_item-field_session-field_session_day */       'label' => 'above',
  /* field_collection_item-field_session-field_session_day */       'module' => 'field_collection',
  /* field_collection_item-field_session-field_session_day */       'settings' => array(
  /* field_collection_item-field_session-field_session_day */         'field_formatter_class' => '',
  /* field_collection_item-field_session-field_session_day */         'view_mode' => 'full',
  /* field_collection_item-field_session-field_session_day */       ),
  /* field_collection_item-field_session-field_session_day */       'type' => 'field_collection_fields',
  /* field_collection_item-field_session-field_session_day */       'weight' => 3,
  /* field_collection_item-field_session-field_session_day */     ),
  /* field_collection_item-field_session-field_session_day */     'token' => array(
  /* field_collection_item-field_session-field_session_day */       'label' => 'above',
  /* field_collection_item-field_session-field_session_day */       'module' => 'field_collection',
  /* field_collection_item-field_session-field_session_day */       'settings' => array(
  /* field_collection_item-field_session-field_session_day */         'field_formatter_class' => '',
  /* field_collection_item-field_session-field_session_day */         'view_mode' => 'full',
  /* field_collection_item-field_session-field_session_day */       ),
  /* field_collection_item-field_session-field_session_day */       'type' => 'field_collection_fields',
  /* field_collection_item-field_session-field_session_day */       'weight' => -3,
  /* field_collection_item-field_session-field_session_day */     ),
  /* field_collection_item-field_session-field_session_day */   ),
  /* field_collection_item-field_session-field_session_day */   'entity_type' => 'field_collection_item',
  /* field_collection_item-field_session-field_session_day */   'fences_wrapper' => 'div',
  /* field_collection_item-field_session-field_session_day */   'field_name' => 'field_session_day',
  /* field_collection_item-field_session-field_session_day */   'label' => 'Day',
  /* field_collection_item-field_session-field_session_day */   'required' => 0,
  /* field_collection_item-field_session-field_session_day */   'settings' => array(
  /* field_collection_item-field_session-field_session_day */     'user_register_form' => FALSE,
  /* field_collection_item-field_session-field_session_day */   ),
  /* field_collection_item-field_session-field_session_day */   'widget' => array(
  /* field_collection_item-field_session-field_session_day */     'active' => 0,
  /* field_collection_item-field_session-field_session_day */     'module' => 'field_collection',
  /* field_collection_item-field_session-field_session_day */     'settings' => array(),
  /* field_collection_item-field_session-field_session_day */     'type' => 'field_collection_embed',
  /* field_collection_item-field_session-field_session_day */     'weight' => 4,
  /* field_collection_item-field_session-field_session_day */   ),
  /* field_collection_item-field_session-field_session_day */ );

  // Exported field_instance: 'field_collection_item-field_session-field_title'.
  $field_instances['field_collection_item-field_session-field_title'] = array(
  /* field_collection_item-field_session-field_title */   'bundle' => 'field_session',
  /* field_collection_item-field_session-field_title */   'default_value' => NULL,
  /* field_collection_item-field_session-field_title */   'deleted' => 0,
  /* field_collection_item-field_session-field_title */   'description' => '',
  /* field_collection_item-field_session-field_title */   'display' => array(
  /* field_collection_item-field_session-field_title */     'default' => array(
  /* field_collection_item-field_session-field_title */       'label' => 'hidden',
  /* field_collection_item-field_session-field_title */       'module' => 'text',
  /* field_collection_item-field_session-field_title */       'settings' => array(
  /* field_collection_item-field_session-field_title */         'field_formatter_class' => '',
  /* field_collection_item-field_session-field_title */       ),
  /* field_collection_item-field_session-field_title */       'type' => 'text_default',
  /* field_collection_item-field_session-field_title */       'weight' => 1,
  /* field_collection_item-field_session-field_title */     ),
  /* field_collection_item-field_session-field_title */     'full' => array(
  /* field_collection_item-field_session-field_title */       'label' => 'hidden',
  /* field_collection_item-field_session-field_title */       'module' => 'text',
  /* field_collection_item-field_session-field_title */       'settings' => array(
  /* field_collection_item-field_session-field_title */         'field_formatter_class' => '',
  /* field_collection_item-field_session-field_title */       ),
  /* field_collection_item-field_session-field_title */       'type' => 'text_default',
  /* field_collection_item-field_session-field_title */       'weight' => 0,
  /* field_collection_item-field_session-field_title */     ),
  /* field_collection_item-field_session-field_title */     'token' => array(
  /* field_collection_item-field_session-field_title */       'label' => 'hidden',
  /* field_collection_item-field_session-field_title */       'module' => 'text',
  /* field_collection_item-field_session-field_title */       'settings' => array(
  /* field_collection_item-field_session-field_title */         'field_formatter_class' => '',
  /* field_collection_item-field_session-field_title */       ),
  /* field_collection_item-field_session-field_title */       'type' => 'text_default',
  /* field_collection_item-field_session-field_title */       'weight' => 0,
  /* field_collection_item-field_session-field_title */     ),
  /* field_collection_item-field_session-field_title */   ),
  /* field_collection_item-field_session-field_title */   'entity_type' => 'field_collection_item',
  /* field_collection_item-field_session-field_title */   'fences_wrapper' => 'div',
  /* field_collection_item-field_session-field_title */   'field_name' => 'field_title',
  /* field_collection_item-field_session-field_title */   'label' => 'Title',
  /* field_collection_item-field_session-field_title */   'required' => 1,
  /* field_collection_item-field_session-field_title */   'settings' => array(
  /* field_collection_item-field_session-field_title */     'better_formats' => array(
  /* field_collection_item-field_session-field_title */       'allowed_formats' => array(
  /* field_collection_item-field_session-field_title */         'filtered_html' => 'filtered_html',
  /* field_collection_item-field_session-field_title */         'full_html' => 'full_html',
  /* field_collection_item-field_session-field_title */         'plain_text' => 'plain_text',
  /* field_collection_item-field_session-field_title */       ),
  /* field_collection_item-field_session-field_title */       'allowed_formats_toggle' => 0,
  /* field_collection_item-field_session-field_title */       'default_order_toggle' => 0,
  /* field_collection_item-field_session-field_title */       'default_order_wrapper' => array(
  /* field_collection_item-field_session-field_title */         'formats' => array(
  /* field_collection_item-field_session-field_title */           'filtered_html' => array(
  /* field_collection_item-field_session-field_title */             'weight' => -10,
  /* field_collection_item-field_session-field_title */           ),
  /* field_collection_item-field_session-field_title */           'full_html' => array(
  /* field_collection_item-field_session-field_title */             'weight' => -8,
  /* field_collection_item-field_session-field_title */           ),
  /* field_collection_item-field_session-field_title */           'plain_text' => array(
  /* field_collection_item-field_session-field_title */             'weight' => -9,
  /* field_collection_item-field_session-field_title */           ),
  /* field_collection_item-field_session-field_title */         ),
  /* field_collection_item-field_session-field_title */       ),
  /* field_collection_item-field_session-field_title */     ),
  /* field_collection_item-field_session-field_title */     'text_processing' => 0,
  /* field_collection_item-field_session-field_title */     'user_register_form' => FALSE,
  /* field_collection_item-field_session-field_title */   ),
  /* field_collection_item-field_session-field_title */   'widget' => array(
  /* field_collection_item-field_session-field_title */     'active' => 1,
  /* field_collection_item-field_session-field_title */     'module' => 'text',
  /* field_collection_item-field_session-field_title */     'settings' => array(
  /* field_collection_item-field_session-field_title */       'size' => 60,
  /* field_collection_item-field_session-field_title */     ),
  /* field_collection_item-field_session-field_title */     'type' => 'text_textfield',
  /* field_collection_item-field_session-field_title */     'weight' => 0,
  /* field_collection_item-field_session-field_title */   ),
  /* field_collection_item-field_session-field_title */ );

  // Exported field_instance:
  // 'field_collection_item-field_session-field_weight'.
  $field_instances['field_collection_item-field_session-field_weight'] = array(
  /* field_collection_item-field_session-field_weight */   'bundle' => 'field_session',
  /* field_collection_item-field_session-field_weight */   'default_value' => array(
  /* field_collection_item-field_session-field_weight */     0 => array(
  /* field_collection_item-field_session-field_weight */       'value' => 10000,
  /* field_collection_item-field_session-field_weight */     ),
  /* field_collection_item-field_session-field_weight */   ),
  /* field_collection_item-field_session-field_weight */   'deleted' => 0,
  /* field_collection_item-field_session-field_weight */   'description' => '',
  /* field_collection_item-field_session-field_weight */   'display' => array(
  /* field_collection_item-field_session-field_weight */     'default' => array(
  /* field_collection_item-field_session-field_weight */       'label' => 'above',
  /* field_collection_item-field_session-field_weight */       'settings' => array(),
  /* field_collection_item-field_session-field_weight */       'type' => 'hidden',
  /* field_collection_item-field_session-field_weight */       'weight' => 4,
  /* field_collection_item-field_session-field_weight */     ),
  /* field_collection_item-field_session-field_weight */   ),
  /* field_collection_item-field_session-field_weight */   'entity_type' => 'field_collection_item',
  /* field_collection_item-field_session-field_weight */   'fences_wrapper' => 'div',
  /* field_collection_item-field_session-field_weight */   'field_name' => 'field_weight',
  /* field_collection_item-field_session-field_weight */   'label' => 'Weight',
  /* field_collection_item-field_session-field_weight */   'required' => 0,
  /* field_collection_item-field_session-field_weight */   'settings' => array(
  /* field_collection_item-field_session-field_weight */     'max' => '',
  /* field_collection_item-field_session-field_weight */     'min' => '',
  /* field_collection_item-field_session-field_weight */     'prefix' => '',
  /* field_collection_item-field_session-field_weight */     'suffix' => '',
  /* field_collection_item-field_session-field_weight */     'user_register_form' => FALSE,
  /* field_collection_item-field_session-field_weight */   ),
  /* field_collection_item-field_session-field_weight */   'widget' => array(
  /* field_collection_item-field_session-field_weight */     'active' => 0,
  /* field_collection_item-field_session-field_weight */     'module' => 'number',
  /* field_collection_item-field_session-field_weight */     'settings' => array(),
  /* field_collection_item-field_session-field_weight */     'type' => 'number',
  /* field_collection_item-field_session-field_weight */     'weight' => 6,
  /* field_collection_item-field_session-field_weight */   ),
  /* field_collection_item-field_session-field_weight */ );

  // Exported field_instance:
  // 'field_collection_item-field_session_day-field_description'.
  $field_instances['field_collection_item-field_session_day-field_description'] = array(
  /* field_collection_item-field_session_day-field_description */   'bundle' => 'field_session_day',
  /* field_collection_item-field_session_day-field_description */   'default_value' => NULL,
  /* field_collection_item-field_session_day-field_description */   'deleted' => 0,
  /* field_collection_item-field_session_day-field_description */   'description' => '',
  /* field_collection_item-field_session_day-field_description */   'display' => array(
  /* field_collection_item-field_session_day-field_description */     'default' => array(
  /* field_collection_item-field_session_day-field_description */       'label' => 'hidden',
  /* field_collection_item-field_session_day-field_description */       'module' => 'text',
  /* field_collection_item-field_session_day-field_description */       'settings' => array(
  /* field_collection_item-field_session_day-field_description */         'field_formatter_class' => '',
  /* field_collection_item-field_session_day-field_description */       ),
  /* field_collection_item-field_session_day-field_description */       'type' => 'text_default',
  /* field_collection_item-field_session_day-field_description */       'weight' => 2,
  /* field_collection_item-field_session_day-field_description */     ),
  /* field_collection_item-field_session_day-field_description */   ),
  /* field_collection_item-field_session_day-field_description */   'entity_type' => 'field_collection_item',
  /* field_collection_item-field_session_day-field_description */   'fences_wrapper' => 'div',
  /* field_collection_item-field_session_day-field_description */   'field_name' => 'field_description',
  /* field_collection_item-field_session_day-field_description */   'label' => 'Description',
  /* field_collection_item-field_session_day-field_description */   'required' => 0,
  /* field_collection_item-field_session_day-field_description */   'settings' => array(
  /* field_collection_item-field_session_day-field_description */     'better_formats' => array(
  /* field_collection_item-field_session_day-field_description */       'allowed_formats' => array(
  /* field_collection_item-field_session_day-field_description */         'filtered_html' => 0,
  /* field_collection_item-field_session_day-field_description */         'full_html' => 0,
  /* field_collection_item-field_session_day-field_description */         'plain_text' => 0,
  /* field_collection_item-field_session_day-field_description */         'sessions_wysiwyg' => 'sessions_wysiwyg',
  /* field_collection_item-field_session_day-field_description */       ),
  /* field_collection_item-field_session_day-field_description */       'allowed_formats_toggle' => 1,
  /* field_collection_item-field_session_day-field_description */       'default_order_toggle' => 1,
  /* field_collection_item-field_session_day-field_description */       'default_order_wrapper' => array(
  /* field_collection_item-field_session_day-field_description */         'formats' => array(
  /* field_collection_item-field_session_day-field_description */           'filtered_html' => array(
  /* field_collection_item-field_session_day-field_description */             'weight' => -49,
  /* field_collection_item-field_session_day-field_description */           ),
  /* field_collection_item-field_session_day-field_description */           'full_html' => array(
  /* field_collection_item-field_session_day-field_description */             'weight' => -48,
  /* field_collection_item-field_session_day-field_description */           ),
  /* field_collection_item-field_session_day-field_description */           'plain_text' => array(
  /* field_collection_item-field_session_day-field_description */             'weight' => -50,
  /* field_collection_item-field_session_day-field_description */           ),
  /* field_collection_item-field_session_day-field_description */           'sessions_wysiwyg' => array(
  /* field_collection_item-field_session_day-field_description */             'weight' => 0,
  /* field_collection_item-field_session_day-field_description */           ),
  /* field_collection_item-field_session_day-field_description */         ),
  /* field_collection_item-field_session_day-field_description */       ),
  /* field_collection_item-field_session_day-field_description */     ),
  /* field_collection_item-field_session_day-field_description */     'text_processing' => 1,
  /* field_collection_item-field_session_day-field_description */     'user_register_form' => FALSE,
  /* field_collection_item-field_session_day-field_description */   ),
  /* field_collection_item-field_session_day-field_description */   'widget' => array(
  /* field_collection_item-field_session_day-field_description */     'active' => 1,
  /* field_collection_item-field_session_day-field_description */     'module' => 'text',
  /* field_collection_item-field_session_day-field_description */     'settings' => array(
  /* field_collection_item-field_session_day-field_description */       'rows' => 5,
  /* field_collection_item-field_session_day-field_description */     ),
  /* field_collection_item-field_session_day-field_description */     'type' => 'text_textarea',
  /* field_collection_item-field_session_day-field_description */     'weight' => 2,
  /* field_collection_item-field_session_day-field_description */   ),
  /* field_collection_item-field_session_day-field_description */ );

  // Exported field_instance:
  // 'field_collection_item-field_session_day-field_media'.
  $field_instances['field_collection_item-field_session_day-field_media'] = array(
  /* field_collection_item-field_session_day-field_media */   'bundle' => 'field_session_day',
  /* field_collection_item-field_session_day-field_media */   'deleted' => 0,
  /* field_collection_item-field_session_day-field_media */   'description' => 'Files must not exceed 500 MB. Allowed file types: avi csx doc docx gif gif gz jpeg jpg m4a m4v mov mp3 mp4 mpeg mpg mpv notebook odp ods odt oga ogg ogv pdf png pps ppsx ppt pptx pub tar txt weba webm webp wmv xls xlsx zip.',
  /* field_collection_item-field_session_day-field_media */   'display' => array(
  /* field_collection_item-field_session_day-field_media */     'default' => array(
  /* field_collection_item-field_session_day-field_media */       'label' => 'hidden',
  /* field_collection_item-field_session_day-field_media */       'module' => 'file_entity',
  /* field_collection_item-field_session_day-field_media */       'settings' => array(
  /* field_collection_item-field_session_day-field_media */         'field_formatter_class' => '',
  /* field_collection_item-field_session_day-field_media */         'text' => 'Download [file:name]',
  /* field_collection_item-field_session_day-field_media */       ),
  /* field_collection_item-field_session_day-field_media */       'type' => 'file_download_link',
  /* field_collection_item-field_session_day-field_media */       'weight' => 4,
  /* field_collection_item-field_session_day-field_media */     ),
  /* field_collection_item-field_session_day-field_media */   ),
  /* field_collection_item-field_session_day-field_media */   'entity_type' => 'field_collection_item',
  /* field_collection_item-field_session_day-field_media */   'fences_wrapper' => 'div',
  /* field_collection_item-field_session_day-field_media */   'field_name' => 'field_media',
  /* field_collection_item-field_session_day-field_media */   'label' => 'Associated Media',
  /* field_collection_item-field_session_day-field_media */   'required' => 0,
  /* field_collection_item-field_session_day-field_media */   'settings' => array(
  /* field_collection_item-field_session_day-field_media */     'description_field' => 0,
  /* field_collection_item-field_session_day-field_media */     'file_directory' => '',
  /* field_collection_item-field_session_day-field_media */     'file_extensions' => 'avi csx doc docx gif gz jpeg jpg m4a m4v mov mp3 mp4 mpeg mpg mpv notebook odp ods odt oga ogg ogv pdf png pps ppsx ppt pptx pub tar txt weba webm webp wmv xls xlsx zip',
  /* field_collection_item-field_session_day-field_media */     'max_filesize' => '',
  /* field_collection_item-field_session_day-field_media */     'user_register_form' => FALSE,
  /* field_collection_item-field_session_day-field_media */   ),
  /* field_collection_item-field_session_day-field_media */   'widget' => array(
  /* field_collection_item-field_session_day-field_media */     'active' => 1,
  /* field_collection_item-field_session_day-field_media */     'module' => 'media',
  /* field_collection_item-field_session_day-field_media */     'settings' => array(
  /* field_collection_item-field_session_day-field_media */       'allowed_schemes' => array(
  /* field_collection_item-field_session_day-field_media */         'livestream' => 0,
  /* field_collection_item-field_session_day-field_media */         'private' => 'private',
  /* field_collection_item-field_session_day-field_media */         'public' => 'public',
  /* field_collection_item-field_session_day-field_media */         'vimeo' => 0,
  /* field_collection_item-field_session_day-field_media */         'youtube' => 0,
  /* field_collection_item-field_session_day-field_media */       ),
  /* field_collection_item-field_session_day-field_media */       'allowed_types' => array(
  /* field_collection_item-field_session_day-field_media */         'audio' => 0,
  /* field_collection_item-field_session_day-field_media */         'document' => 'document',
  /* field_collection_item-field_session_day-field_media */         'image' => 'image',
  /* field_collection_item-field_session_day-field_media */         'video' => 'video',
  /* field_collection_item-field_session_day-field_media */       ),
  /* field_collection_item-field_session_day-field_media */       'browser_plugins' => array(
  /* field_collection_item-field_session_day-field_media */         'media_default--media_browser_1' => 0,
  /* field_collection_item-field_session_day-field_media */         'media_default--media_browser_my_files' => 'media_default--media_browser_my_files',
  /* field_collection_item-field_session_day-field_media */         'media_internet' => 0,
  /* field_collection_item-field_session_day-field_media */         'upload' => 'upload',
  /* field_collection_item-field_session_day-field_media */       ),
  /* field_collection_item-field_session_day-field_media */     ),
  /* field_collection_item-field_session_day-field_media */     'type' => 'media_generic',
  /* field_collection_item-field_session_day-field_media */     'weight' => 3,
  /* field_collection_item-field_session_day-field_media */   ),
  /* field_collection_item-field_session_day-field_media */ );

  // Exported field_instance:
  // 'field_collection_item-field_session_day-field_session_presenter'.
  $field_instances['field_collection_item-field_session_day-field_session_presenter'] = array(
  /* field_collection_item-field_session_day-field_session_presenter */   'bundle' => 'field_session_day',
  /* field_collection_item-field_session_day-field_session_presenter */   'default_value' => NULL,
  /* field_collection_item-field_session_day-field_session_presenter */   'default_value_function' => '',
  /* field_collection_item-field_session_day-field_session_presenter */   'deleted' => 0,
  /* field_collection_item-field_session_day-field_session_presenter */   'description' => 'PLEASE NOTE: Session presenters are limited to course participants.  Individuals must already be members of the course before they can be assigned the role of presenter.',
  /* field_collection_item-field_session_day-field_session_presenter */   'display' => array(
  /* field_collection_item-field_session_day-field_session_presenter */     'default' => array(
  /* field_collection_item-field_session_day-field_session_presenter */       'label' => 'hidden',
  /* field_collection_item-field_session_day-field_session_presenter */       'module' => 'entityreference',
  /* field_collection_item-field_session_day-field_session_presenter */       'settings' => array(
  /* field_collection_item-field_session_day-field_session_presenter */         'bypass_access' => FALSE,
  /* field_collection_item-field_session_day-field_session_presenter */         'field_formatter_class' => '',
  /* field_collection_item-field_session_day-field_session_presenter */         'link' => FALSE,
  /* field_collection_item-field_session_day-field_session_presenter */       ),
  /* field_collection_item-field_session_day-field_session_presenter */       'type' => 'entityreference_label',
  /* field_collection_item-field_session_day-field_session_presenter */       'weight' => 3,
  /* field_collection_item-field_session_day-field_session_presenter */     ),
  /* field_collection_item-field_session_day-field_session_presenter */   ),
  /* field_collection_item-field_session_day-field_session_presenter */   'entity_type' => 'field_collection_item',
  /* field_collection_item-field_session_day-field_session_presenter */   'fences_wrapper' => 'div',
  /* field_collection_item-field_session_day-field_session_presenter */   'field_name' => 'field_session_presenter',
  /* field_collection_item-field_session_day-field_session_presenter */   'label' => 'Session Presenter',
  /* field_collection_item-field_session_day-field_session_presenter */   'required' => 0,
  /* field_collection_item-field_session_day-field_session_presenter */   'settings' => array(
  /* field_collection_item-field_session_day-field_session_presenter */     'behaviors' => array(
  /* field_collection_item-field_session_day-field_session_presenter */       'prepopulate' => array(
  /* field_collection_item-field_session_day-field_session_presenter */         'status' => 0,
  /* field_collection_item-field_session_day-field_session_presenter */       ),
  /* field_collection_item-field_session_day-field_session_presenter */     ),
  /* field_collection_item-field_session_day-field_session_presenter */     'user_register_form' => FALSE,
  /* field_collection_item-field_session_day-field_session_presenter */   ),
  /* field_collection_item-field_session_day-field_session_presenter */   'widget' => array(
  /* field_collection_item-field_session_day-field_session_presenter */     'active' => 1,
  /* field_collection_item-field_session_day-field_session_presenter */     'module' => 'entityreference',
  /* field_collection_item-field_session_day-field_session_presenter */     'settings' => array(
  /* field_collection_item-field_session_day-field_session_presenter */       'match_operator' => 'CONTAINS',
  /* field_collection_item-field_session_day-field_session_presenter */       'path' => '',
  /* field_collection_item-field_session_day-field_session_presenter */       'size' => 60,
  /* field_collection_item-field_session_day-field_session_presenter */     ),
  /* field_collection_item-field_session_day-field_session_presenter */     'type' => 'entityreference_autocomplete',
  /* field_collection_item-field_session_day-field_session_presenter */     'weight' => 1,
  /* field_collection_item-field_session_day-field_session_presenter */   ),
  /* field_collection_item-field_session_day-field_session_presenter */ );

  // Exported field_instance:
  // 'field_collection_item-field_session_day-field_title'.
  $field_instances['field_collection_item-field_session_day-field_title'] = array(
  /* field_collection_item-field_session_day-field_title */   'bundle' => 'field_session_day',
  /* field_collection_item-field_session_day-field_title */   'default_value' => NULL,
  /* field_collection_item-field_session_day-field_title */   'deleted' => 0,
  /* field_collection_item-field_session_day-field_title */   'description' => '',
  /* field_collection_item-field_session_day-field_title */   'display' => array(
  /* field_collection_item-field_session_day-field_title */     'default' => array(
  /* field_collection_item-field_session_day-field_title */       'label' => 'hidden',
  /* field_collection_item-field_session_day-field_title */       'module' => 'text',
  /* field_collection_item-field_session_day-field_title */       'settings' => array(
  /* field_collection_item-field_session_day-field_title */         'field_formatter_class' => '',
  /* field_collection_item-field_session_day-field_title */       ),
  /* field_collection_item-field_session_day-field_title */       'type' => 'text_default',
  /* field_collection_item-field_session_day-field_title */       'weight' => 1,
  /* field_collection_item-field_session_day-field_title */     ),
  /* field_collection_item-field_session_day-field_title */   ),
  /* field_collection_item-field_session_day-field_title */   'entity_type' => 'field_collection_item',
  /* field_collection_item-field_session_day-field_title */   'fences_wrapper' => 'div',
  /* field_collection_item-field_session_day-field_title */   'field_name' => 'field_title',
  /* field_collection_item-field_session_day-field_title */   'label' => 'Title',
  /* field_collection_item-field_session_day-field_title */   'required' => 1,
  /* field_collection_item-field_session_day-field_title */   'settings' => array(
  /* field_collection_item-field_session_day-field_title */     'better_formats' => array(
  /* field_collection_item-field_session_day-field_title */       'allowed_formats' => array(
  /* field_collection_item-field_session_day-field_title */         'filtered_html' => 'filtered_html',
  /* field_collection_item-field_session_day-field_title */         'full_html' => 'full_html',
  /* field_collection_item-field_session_day-field_title */         'plain_text' => 'plain_text',
  /* field_collection_item-field_session_day-field_title */       ),
  /* field_collection_item-field_session_day-field_title */       'allowed_formats_toggle' => 0,
  /* field_collection_item-field_session_day-field_title */       'default_order_toggle' => 0,
  /* field_collection_item-field_session_day-field_title */       'default_order_wrapper' => array(
  /* field_collection_item-field_session_day-field_title */         'formats' => array(
  /* field_collection_item-field_session_day-field_title */           'filtered_html' => array(
  /* field_collection_item-field_session_day-field_title */             'weight' => -10,
  /* field_collection_item-field_session_day-field_title */           ),
  /* field_collection_item-field_session_day-field_title */           'full_html' => array(
  /* field_collection_item-field_session_day-field_title */             'weight' => -8,
  /* field_collection_item-field_session_day-field_title */           ),
  /* field_collection_item-field_session_day-field_title */           'plain_text' => array(
  /* field_collection_item-field_session_day-field_title */             'weight' => -9,
  /* field_collection_item-field_session_day-field_title */           ),
  /* field_collection_item-field_session_day-field_title */         ),
  /* field_collection_item-field_session_day-field_title */       ),
  /* field_collection_item-field_session_day-field_title */     ),
  /* field_collection_item-field_session_day-field_title */     'text_processing' => 0,
  /* field_collection_item-field_session_day-field_title */     'user_register_form' => FALSE,
  /* field_collection_item-field_session_day-field_title */   ),
  /* field_collection_item-field_session_day-field_title */   'widget' => array(
  /* field_collection_item-field_session_day-field_title */     'active' => 1,
  /* field_collection_item-field_session_day-field_title */     'module' => 'text',
  /* field_collection_item-field_session_day-field_title */     'settings' => array(
  /* field_collection_item-field_session_day-field_title */       'size' => 60,
  /* field_collection_item-field_session_day-field_title */     ),
  /* field_collection_item-field_session_day-field_title */     'type' => 'text_textfield',
  /* field_collection_item-field_session_day-field_title */     'weight' => 0,
  /* field_collection_item-field_session_day-field_title */   ),
  /* field_collection_item-field_session_day-field_title */ );

  // Exported field_instance:
  // 'field_collection_item-field_session_day-field_unit'.
  $field_instances['field_collection_item-field_session_day-field_unit'] = array(
  /* field_collection_item-field_session_day-field_unit */   'bundle' => 'field_session_day',
  /* field_collection_item-field_session_day-field_unit */   'default_value' => NULL,
  /* field_collection_item-field_session_day-field_unit */   'deleted' => 0,
  /* field_collection_item-field_session_day-field_unit */   'description' => '',
  /* field_collection_item-field_session_day-field_unit */   'display' => array(
  /* field_collection_item-field_session_day-field_unit */     'default' => array(
  /* field_collection_item-field_session_day-field_unit */       'label' => 'hidden',
  /* field_collection_item-field_session_day-field_unit */       'module' => 'field_collection',
  /* field_collection_item-field_session_day-field_unit */       'settings' => array(
  /* field_collection_item-field_session_day-field_unit */         'field_formatter_class' => '',
  /* field_collection_item-field_session_day-field_unit */         'view_mode' => 'full',
  /* field_collection_item-field_session_day-field_unit */       ),
  /* field_collection_item-field_session_day-field_unit */       'type' => 'field_collection_fields',
  /* field_collection_item-field_session_day-field_unit */       'weight' => 5,
  /* field_collection_item-field_session_day-field_unit */     ),
  /* field_collection_item-field_session_day-field_unit */   ),
  /* field_collection_item-field_session_day-field_unit */   'entity_type' => 'field_collection_item',
  /* field_collection_item-field_session_day-field_unit */   'fences_wrapper' => 'div',
  /* field_collection_item-field_session_day-field_unit */   'field_name' => 'field_unit',
  /* field_collection_item-field_session_day-field_unit */   'label' => 'Unit',
  /* field_collection_item-field_session_day-field_unit */   'required' => 0,
  /* field_collection_item-field_session_day-field_unit */   'settings' => array(
  /* field_collection_item-field_session_day-field_unit */     'user_register_form' => FALSE,
  /* field_collection_item-field_session_day-field_unit */   ),
  /* field_collection_item-field_session_day-field_unit */   'widget' => array(
  /* field_collection_item-field_session_day-field_unit */     'active' => 0,
  /* field_collection_item-field_session_day-field_unit */     'module' => 'field_collection',
  /* field_collection_item-field_session_day-field_unit */     'settings' => array(),
  /* field_collection_item-field_session_day-field_unit */     'type' => 'field_collection_embed',
  /* field_collection_item-field_session_day-field_unit */     'weight' => 4,
  /* field_collection_item-field_session_day-field_unit */   ),
  /* field_collection_item-field_session_day-field_unit */ );

  // Exported field_instance:
  // 'field_collection_item-field_session_day-field_weight'.
  $field_instances['field_collection_item-field_session_day-field_weight'] = array(
  /* field_collection_item-field_session_day-field_weight */   'bundle' => 'field_session_day',
  /* field_collection_item-field_session_day-field_weight */   'default_value' => array(
  /* field_collection_item-field_session_day-field_weight */     0 => array(
  /* field_collection_item-field_session_day-field_weight */       'value' => 10000,
  /* field_collection_item-field_session_day-field_weight */     ),
  /* field_collection_item-field_session_day-field_weight */   ),
  /* field_collection_item-field_session_day-field_weight */   'deleted' => 0,
  /* field_collection_item-field_session_day-field_weight */   'description' => '',
  /* field_collection_item-field_session_day-field_weight */   'display' => array(
  /* field_collection_item-field_session_day-field_weight */     'default' => array(
  /* field_collection_item-field_session_day-field_weight */       'label' => 'above',
  /* field_collection_item-field_session_day-field_weight */       'settings' => array(),
  /* field_collection_item-field_session_day-field_weight */       'type' => 'hidden',
  /* field_collection_item-field_session_day-field_weight */       'weight' => 6,
  /* field_collection_item-field_session_day-field_weight */     ),
  /* field_collection_item-field_session_day-field_weight */   ),
  /* field_collection_item-field_session_day-field_weight */   'entity_type' => 'field_collection_item',
  /* field_collection_item-field_session_day-field_weight */   'fences_wrapper' => 'div',
  /* field_collection_item-field_session_day-field_weight */   'field_name' => 'field_weight',
  /* field_collection_item-field_session_day-field_weight */   'label' => 'Weight',
  /* field_collection_item-field_session_day-field_weight */   'required' => 0,
  /* field_collection_item-field_session_day-field_weight */   'settings' => array(
  /* field_collection_item-field_session_day-field_weight */     'max' => 10000,
  /* field_collection_item-field_session_day-field_weight */     'min' => 0,
  /* field_collection_item-field_session_day-field_weight */     'prefix' => '',
  /* field_collection_item-field_session_day-field_weight */     'suffix' => '',
  /* field_collection_item-field_session_day-field_weight */     'user_register_form' => FALSE,
  /* field_collection_item-field_session_day-field_weight */   ),
  /* field_collection_item-field_session_day-field_weight */   'widget' => array(
  /* field_collection_item-field_session_day-field_weight */     'active' => 0,
  /* field_collection_item-field_session_day-field_weight */     'module' => 'number',
  /* field_collection_item-field_session_day-field_weight */     'settings' => array(),
  /* field_collection_item-field_session_day-field_weight */     'type' => 'number',
  /* field_collection_item-field_session_day-field_weight */     'weight' => 6,
  /* field_collection_item-field_session_day-field_weight */   ),
  /* field_collection_item-field_session_day-field_weight */ );

  // Exported field_instance:
  // 'field_collection_item-field_unit-field_description'.
  $field_instances['field_collection_item-field_unit-field_description'] = array(
  /* field_collection_item-field_unit-field_description */   'bundle' => 'field_unit',
  /* field_collection_item-field_unit-field_description */   'default_value' => NULL,
  /* field_collection_item-field_unit-field_description */   'deleted' => 0,
  /* field_collection_item-field_unit-field_description */   'description' => '',
  /* field_collection_item-field_unit-field_description */   'display' => array(
  /* field_collection_item-field_unit-field_description */     'default' => array(
  /* field_collection_item-field_unit-field_description */       'label' => 'hidden',
  /* field_collection_item-field_unit-field_description */       'module' => 'text',
  /* field_collection_item-field_unit-field_description */       'settings' => array(
  /* field_collection_item-field_unit-field_description */         'field_formatter_class' => '',
  /* field_collection_item-field_unit-field_description */       ),
  /* field_collection_item-field_unit-field_description */       'type' => 'text_default',
  /* field_collection_item-field_unit-field_description */       'weight' => 2,
  /* field_collection_item-field_unit-field_description */     ),
  /* field_collection_item-field_unit-field_description */   ),
  /* field_collection_item-field_unit-field_description */   'entity_type' => 'field_collection_item',
  /* field_collection_item-field_unit-field_description */   'fences_wrapper' => 'div',
  /* field_collection_item-field_unit-field_description */   'field_name' => 'field_description',
  /* field_collection_item-field_unit-field_description */   'label' => 'Description',
  /* field_collection_item-field_unit-field_description */   'required' => 0,
  /* field_collection_item-field_unit-field_description */   'settings' => array(
  /* field_collection_item-field_unit-field_description */     'better_formats' => array(
  /* field_collection_item-field_unit-field_description */       'allowed_formats' => array(
  /* field_collection_item-field_unit-field_description */         'filtered_html' => 0,
  /* field_collection_item-field_unit-field_description */         'full_html' => 0,
  /* field_collection_item-field_unit-field_description */         'plain_text' => 0,
  /* field_collection_item-field_unit-field_description */         'sessions_wysiwyg' => 'sessions_wysiwyg',
  /* field_collection_item-field_unit-field_description */       ),
  /* field_collection_item-field_unit-field_description */       'allowed_formats_toggle' => 1,
  /* field_collection_item-field_unit-field_description */       'default_order_toggle' => 1,
  /* field_collection_item-field_unit-field_description */       'default_order_wrapper' => array(
  /* field_collection_item-field_unit-field_description */         'formats' => array(
  /* field_collection_item-field_unit-field_description */           'filtered_html' => array(
  /* field_collection_item-field_unit-field_description */             'weight' => -10,
  /* field_collection_item-field_unit-field_description */           ),
  /* field_collection_item-field_unit-field_description */           'full_html' => array(
  /* field_collection_item-field_unit-field_description */             'weight' => -8,
  /* field_collection_item-field_unit-field_description */           ),
  /* field_collection_item-field_unit-field_description */           'plain_text' => array(
  /* field_collection_item-field_unit-field_description */             'weight' => -9,
  /* field_collection_item-field_unit-field_description */           ),
  /* field_collection_item-field_unit-field_description */           'sessions_wysiwyg' => array(
  /* field_collection_item-field_unit-field_description */             'weight' => 0,
  /* field_collection_item-field_unit-field_description */           ),
  /* field_collection_item-field_unit-field_description */         ),
  /* field_collection_item-field_unit-field_description */       ),
  /* field_collection_item-field_unit-field_description */     ),
  /* field_collection_item-field_unit-field_description */     'text_processing' => 1,
  /* field_collection_item-field_unit-field_description */     'user_register_form' => FALSE,
  /* field_collection_item-field_unit-field_description */   ),
  /* field_collection_item-field_unit-field_description */   'widget' => array(
  /* field_collection_item-field_unit-field_description */     'active' => 1,
  /* field_collection_item-field_unit-field_description */     'module' => 'text',
  /* field_collection_item-field_unit-field_description */     'settings' => array(
  /* field_collection_item-field_unit-field_description */       'rows' => 5,
  /* field_collection_item-field_unit-field_description */     ),
  /* field_collection_item-field_unit-field_description */     'type' => 'text_textarea',
  /* field_collection_item-field_unit-field_description */     'weight' => 2,
  /* field_collection_item-field_unit-field_description */   ),
  /* field_collection_item-field_unit-field_description */ );

  // Exported field_instance: 'field_collection_item-field_unit-field_media'.
  $field_instances['field_collection_item-field_unit-field_media'] = array(
  /* field_collection_item-field_unit-field_media */   'bundle' => 'field_unit',
  /* field_collection_item-field_unit-field_media */   'deleted' => 0,
  /* field_collection_item-field_unit-field_media */   'description' => 'Files must not exceed 500 MB. Allowed file types: avi csx doc docx gif gif gz jpeg jpg m4a m4v mov mp3 mp4 mpeg mpg mpv notebook odp ods odt oga ogg ogv pdf png pps ppsx ppt pptx pub tar txt weba webm webp wmv xls xlsx zip.',
  /* field_collection_item-field_unit-field_media */   'display' => array(
  /* field_collection_item-field_unit-field_media */     'default' => array(
  /* field_collection_item-field_unit-field_media */       'label' => 'hidden',
  /* field_collection_item-field_unit-field_media */       'module' => 'file',
  /* field_collection_item-field_unit-field_media */       'settings' => array(
  /* field_collection_item-field_unit-field_media */         'field_formatter_class' => '',
  /* field_collection_item-field_unit-field_media */       ),
  /* field_collection_item-field_unit-field_media */       'type' => 'file_default',
  /* field_collection_item-field_unit-field_media */       'weight' => 4,
  /* field_collection_item-field_unit-field_media */     ),
  /* field_collection_item-field_unit-field_media */   ),
  /* field_collection_item-field_unit-field_media */   'entity_type' => 'field_collection_item',
  /* field_collection_item-field_unit-field_media */   'fences_wrapper' => 'div',
  /* field_collection_item-field_unit-field_media */   'field_name' => 'field_media',
  /* field_collection_item-field_unit-field_media */   'label' => 'Associated Media',
  /* field_collection_item-field_unit-field_media */   'required' => 0,
  /* field_collection_item-field_unit-field_media */   'settings' => array(
  /* field_collection_item-field_unit-field_media */     'description_field' => 0,
  /* field_collection_item-field_unit-field_media */     'file_directory' => '',
  /* field_collection_item-field_unit-field_media */     'file_extensions' => 'avi csx doc docx gif gz jpeg jpg m4a m4v mov mp3 mp4 mpeg mpg mpv notebook odp ods odt oga ogg ogv pdf png pps ppsx ppt pptx pub tar txt weba webm webp wmv xls xlsx zip',
  /* field_collection_item-field_unit-field_media */     'max_filesize' => '',
  /* field_collection_item-field_unit-field_media */     'user_register_form' => FALSE,
  /* field_collection_item-field_unit-field_media */   ),
  /* field_collection_item-field_unit-field_media */   'widget' => array(
  /* field_collection_item-field_unit-field_media */     'active' => 1,
  /* field_collection_item-field_unit-field_media */     'module' => 'media',
  /* field_collection_item-field_unit-field_media */     'settings' => array(
  /* field_collection_item-field_unit-field_media */       'allowed_schemes' => array(
  /* field_collection_item-field_unit-field_media */         'livestream' => 0,
  /* field_collection_item-field_unit-field_media */         'private' => 'private',
  /* field_collection_item-field_unit-field_media */         'public' => 'public',
  /* field_collection_item-field_unit-field_media */         'vimeo' => 0,
  /* field_collection_item-field_unit-field_media */         'youtube' => 0,
  /* field_collection_item-field_unit-field_media */       ),
  /* field_collection_item-field_unit-field_media */       'allowed_types' => array(
  /* field_collection_item-field_unit-field_media */         'audio' => 0,
  /* field_collection_item-field_unit-field_media */         'document' => 'document',
  /* field_collection_item-field_unit-field_media */         'image' => 'image',
  /* field_collection_item-field_unit-field_media */         'video' => 'video',
  /* field_collection_item-field_unit-field_media */       ),
  /* field_collection_item-field_unit-field_media */       'browser_plugins' => array(
  /* field_collection_item-field_unit-field_media */         'media_default--media_browser_1' => 0,
  /* field_collection_item-field_unit-field_media */         'media_default--media_browser_my_files' => 'media_default--media_browser_my_files',
  /* field_collection_item-field_unit-field_media */         'media_internet' => 0,
  /* field_collection_item-field_unit-field_media */         'upload' => 'upload',
  /* field_collection_item-field_unit-field_media */       ),
  /* field_collection_item-field_unit-field_media */     ),
  /* field_collection_item-field_unit-field_media */     'type' => 'media_generic',
  /* field_collection_item-field_unit-field_media */     'weight' => 3,
  /* field_collection_item-field_unit-field_media */   ),
  /* field_collection_item-field_unit-field_media */ );

  // Exported field_instance:
  // 'field_collection_item-field_unit-field_session_presenter'.
  $field_instances['field_collection_item-field_unit-field_session_presenter'] = array(
  /* field_collection_item-field_unit-field_session_presenter */   'bundle' => 'field_unit',
  /* field_collection_item-field_unit-field_session_presenter */   'default_value' => NULL,
  /* field_collection_item-field_unit-field_session_presenter */   'default_value_function' => '',
  /* field_collection_item-field_unit-field_session_presenter */   'deleted' => 0,
  /* field_collection_item-field_unit-field_session_presenter */   'description' => 'PLEASE NOTE: Session presenters are limited to course participants.  Individuals must already be members of the course before they can be assigned the role of presenter.',
  /* field_collection_item-field_unit-field_session_presenter */   'display' => array(
  /* field_collection_item-field_unit-field_session_presenter */     'default' => array(
  /* field_collection_item-field_unit-field_session_presenter */       'label' => 'hidden',
  /* field_collection_item-field_unit-field_session_presenter */       'module' => 'entityreference',
  /* field_collection_item-field_unit-field_session_presenter */       'settings' => array(
  /* field_collection_item-field_unit-field_session_presenter */         'bypass_access' => FALSE,
  /* field_collection_item-field_unit-field_session_presenter */         'field_formatter_class' => '',
  /* field_collection_item-field_unit-field_session_presenter */         'link' => FALSE,
  /* field_collection_item-field_unit-field_session_presenter */       ),
  /* field_collection_item-field_unit-field_session_presenter */       'type' => 'entityreference_label',
  /* field_collection_item-field_unit-field_session_presenter */       'weight' => 3,
  /* field_collection_item-field_unit-field_session_presenter */     ),
  /* field_collection_item-field_unit-field_session_presenter */   ),
  /* field_collection_item-field_unit-field_session_presenter */   'entity_type' => 'field_collection_item',
  /* field_collection_item-field_unit-field_session_presenter */   'fences_wrapper' => 'div',
  /* field_collection_item-field_unit-field_session_presenter */   'field_name' => 'field_session_presenter',
  /* field_collection_item-field_unit-field_session_presenter */   'label' => 'Session Presenter',
  /* field_collection_item-field_unit-field_session_presenter */   'required' => 0,
  /* field_collection_item-field_unit-field_session_presenter */   'settings' => array(
  /* field_collection_item-field_unit-field_session_presenter */     'behaviors' => array(
  /* field_collection_item-field_unit-field_session_presenter */       'prepopulate' => array(
  /* field_collection_item-field_unit-field_session_presenter */         'status' => 0,
  /* field_collection_item-field_unit-field_session_presenter */       ),
  /* field_collection_item-field_unit-field_session_presenter */     ),
  /* field_collection_item-field_unit-field_session_presenter */     'user_register_form' => FALSE,
  /* field_collection_item-field_unit-field_session_presenter */   ),
  /* field_collection_item-field_unit-field_session_presenter */   'widget' => array(
  /* field_collection_item-field_unit-field_session_presenter */     'active' => 1,
  /* field_collection_item-field_unit-field_session_presenter */     'module' => 'entityreference',
  /* field_collection_item-field_unit-field_session_presenter */     'settings' => array(
  /* field_collection_item-field_unit-field_session_presenter */       'match_operator' => 'CONTAINS',
  /* field_collection_item-field_unit-field_session_presenter */       'path' => '',
  /* field_collection_item-field_unit-field_session_presenter */       'size' => 60,
  /* field_collection_item-field_unit-field_session_presenter */     ),
  /* field_collection_item-field_unit-field_session_presenter */     'type' => 'entityreference_autocomplete',
  /* field_collection_item-field_unit-field_session_presenter */     'weight' => 1,
  /* field_collection_item-field_unit-field_session_presenter */   ),
  /* field_collection_item-field_unit-field_session_presenter */ );

  // Exported field_instance: 'field_collection_item-field_unit-field_title'.
  $field_instances['field_collection_item-field_unit-field_title'] = array(
  /* field_collection_item-field_unit-field_title */   'bundle' => 'field_unit',
  /* field_collection_item-field_unit-field_title */   'default_value' => NULL,
  /* field_collection_item-field_unit-field_title */   'deleted' => 0,
  /* field_collection_item-field_unit-field_title */   'description' => '',
  /* field_collection_item-field_unit-field_title */   'display' => array(
  /* field_collection_item-field_unit-field_title */     'default' => array(
  /* field_collection_item-field_unit-field_title */       'label' => 'hidden',
  /* field_collection_item-field_unit-field_title */       'module' => 'text',
  /* field_collection_item-field_unit-field_title */       'settings' => array(
  /* field_collection_item-field_unit-field_title */         'field_formatter_class' => '',
  /* field_collection_item-field_unit-field_title */       ),
  /* field_collection_item-field_unit-field_title */       'type' => 'text_default',
  /* field_collection_item-field_unit-field_title */       'weight' => 1,
  /* field_collection_item-field_unit-field_title */     ),
  /* field_collection_item-field_unit-field_title */   ),
  /* field_collection_item-field_unit-field_title */   'entity_type' => 'field_collection_item',
  /* field_collection_item-field_unit-field_title */   'fences_wrapper' => 'div',
  /* field_collection_item-field_unit-field_title */   'field_name' => 'field_title',
  /* field_collection_item-field_unit-field_title */   'label' => 'Title',
  /* field_collection_item-field_unit-field_title */   'required' => 1,
  /* field_collection_item-field_unit-field_title */   'settings' => array(
  /* field_collection_item-field_unit-field_title */     'better_formats' => array(
  /* field_collection_item-field_unit-field_title */       'allowed_formats' => array(
  /* field_collection_item-field_unit-field_title */         'filtered_html' => 'filtered_html',
  /* field_collection_item-field_unit-field_title */         'full_html' => 'full_html',
  /* field_collection_item-field_unit-field_title */         'plain_text' => 'plain_text',
  /* field_collection_item-field_unit-field_title */       ),
  /* field_collection_item-field_unit-field_title */       'allowed_formats_toggle' => 0,
  /* field_collection_item-field_unit-field_title */       'default_order_toggle' => 0,
  /* field_collection_item-field_unit-field_title */       'default_order_wrapper' => array(
  /* field_collection_item-field_unit-field_title */         'formats' => array(
  /* field_collection_item-field_unit-field_title */           'filtered_html' => array(
  /* field_collection_item-field_unit-field_title */             'weight' => -10,
  /* field_collection_item-field_unit-field_title */           ),
  /* field_collection_item-field_unit-field_title */           'full_html' => array(
  /* field_collection_item-field_unit-field_title */             'weight' => -8,
  /* field_collection_item-field_unit-field_title */           ),
  /* field_collection_item-field_unit-field_title */           'plain_text' => array(
  /* field_collection_item-field_unit-field_title */             'weight' => -9,
  /* field_collection_item-field_unit-field_title */           ),
  /* field_collection_item-field_unit-field_title */         ),
  /* field_collection_item-field_unit-field_title */       ),
  /* field_collection_item-field_unit-field_title */     ),
  /* field_collection_item-field_unit-field_title */     'text_processing' => 0,
  /* field_collection_item-field_unit-field_title */     'user_register_form' => FALSE,
  /* field_collection_item-field_unit-field_title */   ),
  /* field_collection_item-field_unit-field_title */   'widget' => array(
  /* field_collection_item-field_unit-field_title */     'active' => 1,
  /* field_collection_item-field_unit-field_title */     'module' => 'text',
  /* field_collection_item-field_unit-field_title */     'settings' => array(
  /* field_collection_item-field_unit-field_title */       'size' => 60,
  /* field_collection_item-field_unit-field_title */     ),
  /* field_collection_item-field_unit-field_title */     'type' => 'text_textfield',
  /* field_collection_item-field_unit-field_title */     'weight' => 0,
  /* field_collection_item-field_unit-field_title */   ),
  /* field_collection_item-field_unit-field_title */ );

  // Exported field_instance: 'field_collection_item-field_unit-field_weight'.
  $field_instances['field_collection_item-field_unit-field_weight'] = array(
  /* field_collection_item-field_unit-field_weight */   'bundle' => 'field_unit',
  /* field_collection_item-field_unit-field_weight */   'default_value' => array(
  /* field_collection_item-field_unit-field_weight */     0 => array(
  /* field_collection_item-field_unit-field_weight */       'value' => 10000,
  /* field_collection_item-field_unit-field_weight */     ),
  /* field_collection_item-field_unit-field_weight */   ),
  /* field_collection_item-field_unit-field_weight */   'deleted' => 0,
  /* field_collection_item-field_unit-field_weight */   'description' => '',
  /* field_collection_item-field_unit-field_weight */   'display' => array(
  /* field_collection_item-field_unit-field_weight */     'default' => array(
  /* field_collection_item-field_unit-field_weight */       'label' => 'above',
  /* field_collection_item-field_unit-field_weight */       'settings' => array(),
  /* field_collection_item-field_unit-field_weight */       'type' => 'hidden',
  /* field_collection_item-field_unit-field_weight */       'weight' => 5,
  /* field_collection_item-field_unit-field_weight */     ),
  /* field_collection_item-field_unit-field_weight */   ),
  /* field_collection_item-field_unit-field_weight */   'entity_type' => 'field_collection_item',
  /* field_collection_item-field_unit-field_weight */   'fences_wrapper' => 'div',
  /* field_collection_item-field_unit-field_weight */   'field_name' => 'field_weight',
  /* field_collection_item-field_unit-field_weight */   'label' => 'Weight',
  /* field_collection_item-field_unit-field_weight */   'required' => 0,
  /* field_collection_item-field_unit-field_weight */   'settings' => array(
  /* field_collection_item-field_unit-field_weight */     'max' => '',
  /* field_collection_item-field_unit-field_weight */     'min' => '',
  /* field_collection_item-field_unit-field_weight */     'prefix' => '',
  /* field_collection_item-field_unit-field_weight */     'suffix' => '',
  /* field_collection_item-field_unit-field_weight */     'user_register_form' => FALSE,
  /* field_collection_item-field_unit-field_weight */   ),
  /* field_collection_item-field_unit-field_weight */   'widget' => array(
  /* field_collection_item-field_unit-field_weight */     'active' => 0,
  /* field_collection_item-field_unit-field_weight */     'module' => 'number',
  /* field_collection_item-field_unit-field_weight */     'settings' => array(),
  /* field_collection_item-field_unit-field_weight */     'type' => 'number',
  /* field_collection_item-field_unit-field_weight */     'weight' => 5,
  /* field_collection_item-field_unit-field_weight */   ),
  /* field_collection_item-field_unit-field_weight */ );

  // Exported field_instance: 'node-course-field_display_all_fields'.
  $field_instances['node-course-field_display_all_fields'] = array(
  /* node-course-field_display_all_fields */   'bundle' => 'course',
  /* node-course-field_display_all_fields */   'default_value' => NULL,
  /* node-course-field_display_all_fields */   'deleted' => 0,
  /* node-course-field_display_all_fields */   'description' => 'Choosing yes will display Tabs and Recommended Links to non-members.',
  /* node-course-field_display_all_fields */   'display' => array(
  /* node-course-field_display_all_fields */     'default' => array(
  /* node-course-field_display_all_fields */       'label' => 'above',
  /* node-course-field_display_all_fields */       'module' => 'list',
  /* node-course-field_display_all_fields */       'settings' => array(
  /* node-course-field_display_all_fields */         'field_formatter_class' => '',
  /* node-course-field_display_all_fields */       ),
  /* node-course-field_display_all_fields */       'type' => 'list_default',
  /* node-course-field_display_all_fields */       'weight' => 29,
  /* node-course-field_display_all_fields */     ),
  /* node-course-field_display_all_fields */     'group_teaser' => array(
  /* node-course-field_display_all_fields */       'label' => 'above',
  /* node-course-field_display_all_fields */       'settings' => array(),
  /* node-course-field_display_all_fields */       'type' => 'hidden',
  /* node-course-field_display_all_fields */       'weight' => 0,
  /* node-course-field_display_all_fields */     ),
  /* node-course-field_display_all_fields */     'search_teaser' => array(
  /* node-course-field_display_all_fields */       'label' => 'above',
  /* node-course-field_display_all_fields */       'settings' => array(),
  /* node-course-field_display_all_fields */       'type' => 'hidden',
  /* node-course-field_display_all_fields */       'weight' => 0,
  /* node-course-field_display_all_fields */     ),
  /* node-course-field_display_all_fields */     'sidebar_' => array(
  /* node-course-field_display_all_fields */       'label' => 'above',
  /* node-course-field_display_all_fields */       'settings' => array(),
  /* node-course-field_display_all_fields */       'type' => 'hidden',
  /* node-course-field_display_all_fields */       'weight' => 0,
  /* node-course-field_display_all_fields */     ),
  /* node-course-field_display_all_fields */     'sidebar_teaser_v2' => array(
  /* node-course-field_display_all_fields */       'label' => 'above',
  /* node-course-field_display_all_fields */       'settings' => array(),
  /* node-course-field_display_all_fields */       'type' => 'hidden',
  /* node-course-field_display_all_fields */       'weight' => 0,
  /* node-course-field_display_all_fields */     ),
  /* node-course-field_display_all_fields */     'teaser' => array(
  /* node-course-field_display_all_fields */       'label' => 'above',
  /* node-course-field_display_all_fields */       'settings' => array(),
  /* node-course-field_display_all_fields */       'type' => 'hidden',
  /* node-course-field_display_all_fields */       'weight' => 0,
  /* node-course-field_display_all_fields */     ),
  /* node-course-field_display_all_fields */     'teaserthumb' => array(
  /* node-course-field_display_all_fields */       'label' => 'above',
  /* node-course-field_display_all_fields */       'settings' => array(),
  /* node-course-field_display_all_fields */       'type' => 'hidden',
  /* node-course-field_display_all_fields */       'weight' => 0,
  /* node-course-field_display_all_fields */     ),
  /* node-course-field_display_all_fields */   ),
  /* node-course-field_display_all_fields */   'entity_type' => 'node',
  /* node-course-field_display_all_fields */   'fences_wrapper' => 'div',
  /* node-course-field_display_all_fields */   'field_name' => 'field_display_all_fields',
  /* node-course-field_display_all_fields */   'label' => 'Display All Fields?',
  /* node-course-field_display_all_fields */   'required' => 0,
  /* node-course-field_display_all_fields */   'settings' => array(
  /* node-course-field_display_all_fields */     'user_register_form' => FALSE,
  /* node-course-field_display_all_fields */   ),
  /* node-course-field_display_all_fields */   'widget' => array(
  /* node-course-field_display_all_fields */     'active' => 1,
  /* node-course-field_display_all_fields */     'module' => 'options',
  /* node-course-field_display_all_fields */     'settings' => array(
  /* node-course-field_display_all_fields */       'apply_chosen' => '',
  /* node-course-field_display_all_fields */     ),
  /* node-course-field_display_all_fields */     'type' => 'options_select',
  /* node-course-field_display_all_fields */     'weight' => 37,
  /* node-course-field_display_all_fields */   ),
  /* node-course-field_display_all_fields */ );

  // Exported field_instance: 'node-course-field_session'.
  $field_instances['node-course-field_session'] = array(
  /* node-course-field_session */   'bundle' => 'course',
  /* node-course-field_session */   'default_value' => NULL,
  /* node-course-field_session */   'deleted' => 0,
  /* node-course-field_session */   'description' => '',
  /* node-course-field_session */   'display' => array(
  /* node-course-field_session */     'default' => array(
  /* node-course-field_session */       'label' => 'above',
  /* node-course-field_session */       'module' => 'field_collection',
  /* node-course-field_session */       'settings' => array(
  /* node-course-field_session */         'field_formatter_class' => '',
  /* node-course-field_session */         'view_mode' => 'full',
  /* node-course-field_session */       ),
  /* node-course-field_session */       'type' => 'field_collection_fields',
  /* node-course-field_session */       'weight' => 31,
  /* node-course-field_session */     ),
  /* node-course-field_session */     'group_teaser' => array(
  /* node-course-field_session */       'label' => 'above',
  /* node-course-field_session */       'settings' => array(),
  /* node-course-field_session */       'type' => 'hidden',
  /* node-course-field_session */       'weight' => 0,
  /* node-course-field_session */     ),
  /* node-course-field_session */     'search_teaser' => array(
  /* node-course-field_session */       'label' => 'above',
  /* node-course-field_session */       'settings' => array(),
  /* node-course-field_session */       'type' => 'hidden',
  /* node-course-field_session */       'weight' => 0,
  /* node-course-field_session */     ),
  /* node-course-field_session */     'sidebar_' => array(
  /* node-course-field_session */       'label' => 'above',
  /* node-course-field_session */       'settings' => array(),
  /* node-course-field_session */       'type' => 'hidden',
  /* node-course-field_session */       'weight' => 0,
  /* node-course-field_session */     ),
  /* node-course-field_session */     'sidebar_teaser_v2' => array(
  /* node-course-field_session */       'label' => 'above',
  /* node-course-field_session */       'settings' => array(),
  /* node-course-field_session */       'type' => 'hidden',
  /* node-course-field_session */       'weight' => 0,
  /* node-course-field_session */     ),
  /* node-course-field_session */     'teaser' => array(
  /* node-course-field_session */       'label' => 'above',
  /* node-course-field_session */       'settings' => array(),
  /* node-course-field_session */       'type' => 'hidden',
  /* node-course-field_session */       'weight' => 0,
  /* node-course-field_session */     ),
  /* node-course-field_session */     'teaserthumb' => array(
  /* node-course-field_session */       'label' => 'above',
  /* node-course-field_session */       'settings' => array(),
  /* node-course-field_session */       'type' => 'hidden',
  /* node-course-field_session */       'weight' => 0,
  /* node-course-field_session */     ),
  /* node-course-field_session */   ),
  /* node-course-field_session */   'entity_type' => 'node',
  /* node-course-field_session */   'fences_wrapper' => 'div',
  /* node-course-field_session */   'field_name' => 'field_session',
  /* node-course-field_session */   'label' => 'Session',
  /* node-course-field_session */   'required' => 0,
  /* node-course-field_session */   'settings' => array(
  /* node-course-field_session */     'user_register_form' => FALSE,
  /* node-course-field_session */   ),
  /* node-course-field_session */   'widget' => array(
  /* node-course-field_session */     'active' => 0,
  /* node-course-field_session */     'module' => 'field_collection',
  /* node-course-field_session */     'settings' => array(),
  /* node-course-field_session */     'type' => 'field_collection_hidden',
  /* node-course-field_session */     'weight' => 40,
  /* node-course-field_session */   ),
  /* node-course-field_session */ );

  // Exported field_instance: 'node-course_group-field_alumni_specialist'.
  $field_instances['node-course_group-field_alumni_specialist'] = array(
  /* node-course_group-field_alumni_specialist */   'bundle' => 'course_group',
  /* node-course_group-field_alumni_specialist */   'default_value' => NULL,
  /* node-course_group-field_alumni_specialist */   'default_value_function' => '',
  /* node-course_group-field_alumni_specialist */   'deleted' => 0,
  /* node-course_group-field_alumni_specialist */   'description' => '',
  /* node-course_group-field_alumni_specialist */   'display' => array(
  /* node-course_group-field_alumni_specialist */     'default' => array(
  /* node-course_group-field_alumni_specialist */       'label' => 'above',
  /* node-course_group-field_alumni_specialist */       'module' => 'entityreference',
  /* node-course_group-field_alumni_specialist */       'settings' => array(
  /* node-course_group-field_alumni_specialist */         'bypass_access' => FALSE,
  /* node-course_group-field_alumni_specialist */         'field_formatter_class' => '',
  /* node-course_group-field_alumni_specialist */         'link' => FALSE,
  /* node-course_group-field_alumni_specialist */       ),
  /* node-course_group-field_alumni_specialist */       'type' => 'entityreference_label',
  /* node-course_group-field_alumni_specialist */       'weight' => 21,
  /* node-course_group-field_alumni_specialist */     ),
  /* node-course_group-field_alumni_specialist */     'events_list' => array(
  /* node-course_group-field_alumni_specialist */       'label' => 'above',
  /* node-course_group-field_alumni_specialist */       'settings' => array(),
  /* node-course_group-field_alumni_specialist */       'type' => 'hidden',
  /* node-course_group-field_alumni_specialist */       'weight' => 0,
  /* node-course_group-field_alumni_specialist */     ),
  /* node-course_group-field_alumni_specialist */     'group_teaser' => array(
  /* node-course_group-field_alumni_specialist */       'label' => 'above',
  /* node-course_group-field_alumni_specialist */       'settings' => array(),
  /* node-course_group-field_alumni_specialist */       'type' => 'hidden',
  /* node-course_group-field_alumni_specialist */       'weight' => 0,
  /* node-course_group-field_alumni_specialist */     ),
  /* node-course_group-field_alumni_specialist */     'one_column_teaser' => array(
  /* node-course_group-field_alumni_specialist */       'label' => 'above',
  /* node-course_group-field_alumni_specialist */       'settings' => array(),
  /* node-course_group-field_alumni_specialist */       'type' => 'hidden',
  /* node-course_group-field_alumni_specialist */       'weight' => 0,
  /* node-course_group-field_alumni_specialist */     ),
  /* node-course_group-field_alumni_specialist */     'post_teaser_group_landing_page' => array(
  /* node-course_group-field_alumni_specialist */       'label' => 'above',
  /* node-course_group-field_alumni_specialist */       'settings' => array(),
  /* node-course_group-field_alumni_specialist */       'type' => 'hidden',
  /* node-course_group-field_alumni_specialist */       'weight' => 0,
  /* node-course_group-field_alumni_specialist */     ),
  /* node-course_group-field_alumni_specialist */     'search_teaser' => array(
  /* node-course_group-field_alumni_specialist */       'label' => 'above',
  /* node-course_group-field_alumni_specialist */       'settings' => array(),
  /* node-course_group-field_alumni_specialist */       'type' => 'hidden',
  /* node-course_group-field_alumni_specialist */       'weight' => 0,
  /* node-course_group-field_alumni_specialist */     ),
  /* node-course_group-field_alumni_specialist */     'sidebar_' => array(
  /* node-course_group-field_alumni_specialist */       'label' => 'above',
  /* node-course_group-field_alumni_specialist */       'settings' => array(),
  /* node-course_group-field_alumni_specialist */       'type' => 'hidden',
  /* node-course_group-field_alumni_specialist */       'weight' => 0,
  /* node-course_group-field_alumni_specialist */     ),
  /* node-course_group-field_alumni_specialist */     'sidebar_teaser_v2' => array(
  /* node-course_group-field_alumni_specialist */       'label' => 'above',
  /* node-course_group-field_alumni_specialist */       'settings' => array(),
  /* node-course_group-field_alumni_specialist */       'type' => 'hidden',
  /* node-course_group-field_alumni_specialist */       'weight' => 0,
  /* node-course_group-field_alumni_specialist */     ),
  /* node-course_group-field_alumni_specialist */     'teaser' => array(
  /* node-course_group-field_alumni_specialist */       'label' => 'above',
  /* node-course_group-field_alumni_specialist */       'settings' => array(),
  /* node-course_group-field_alumni_specialist */       'type' => 'hidden',
  /* node-course_group-field_alumni_specialist */       'weight' => 0,
  /* node-course_group-field_alumni_specialist */     ),
  /* node-course_group-field_alumni_specialist */     'teaserthumb' => array(
  /* node-course_group-field_alumni_specialist */       'label' => 'above',
  /* node-course_group-field_alumni_specialist */       'settings' => array(),
  /* node-course_group-field_alumni_specialist */       'type' => 'hidden',
  /* node-course_group-field_alumni_specialist */       'weight' => 0,
  /* node-course_group-field_alumni_specialist */     ),
  /* node-course_group-field_alumni_specialist */     'time_and_location' => array(
  /* node-course_group-field_alumni_specialist */       'label' => 'above',
  /* node-course_group-field_alumni_specialist */       'settings' => array(),
  /* node-course_group-field_alumni_specialist */       'type' => 'hidden',
  /* node-course_group-field_alumni_specialist */       'weight' => 0,
  /* node-course_group-field_alumni_specialist */     ),
  /* node-course_group-field_alumni_specialist */     'title_and_time' => array(
  /* node-course_group-field_alumni_specialist */       'label' => 'above',
  /* node-course_group-field_alumni_specialist */       'settings' => array(),
  /* node-course_group-field_alumni_specialist */       'type' => 'hidden',
  /* node-course_group-field_alumni_specialist */       'weight' => 0,
  /* node-course_group-field_alumni_specialist */     ),
  /* node-course_group-field_alumni_specialist */   ),
  /* node-course_group-field_alumni_specialist */   'entity_type' => 'node',
  /* node-course_group-field_alumni_specialist */   'fences_wrapper' => 'div',
  /* node-course_group-field_alumni_specialist */   'field_name' => 'field_alumni_specialist',
  /* node-course_group-field_alumni_specialist */   'label' => 'Alumni Specialist',
  /* node-course_group-field_alumni_specialist */   'required' => 0,
  /* node-course_group-field_alumni_specialist */   'settings' => array(
  /* node-course_group-field_alumni_specialist */     'behaviors' => array(
  /* node-course_group-field_alumni_specialist */       'prepopulate' => array(
  /* node-course_group-field_alumni_specialist */         'status' => 0,
  /* node-course_group-field_alumni_specialist */       ),
  /* node-course_group-field_alumni_specialist */     ),
  /* node-course_group-field_alumni_specialist */     'user_register_form' => FALSE,
  /* node-course_group-field_alumni_specialist */   ),
  /* node-course_group-field_alumni_specialist */   'widget' => array(
  /* node-course_group-field_alumni_specialist */     'active' => 1,
  /* node-course_group-field_alumni_specialist */     'module' => 'entityreference',
  /* node-course_group-field_alumni_specialist */     'settings' => array(
  /* node-course_group-field_alumni_specialist */       'match_operator' => 'CONTAINS',
  /* node-course_group-field_alumni_specialist */       'path' => '',
  /* node-course_group-field_alumni_specialist */       'size' => 60,
  /* node-course_group-field_alumni_specialist */     ),
  /* node-course_group-field_alumni_specialist */     'type' => 'entityreference_autocomplete',
  /* node-course_group-field_alumni_specialist */     'weight' => 7,
  /* node-course_group-field_alumni_specialist */   ),
  /* node-course_group-field_alumni_specialist */ );

  // Exported field_instance: 'node-course_group-field_course_director'.
  $field_instances['node-course_group-field_course_director'] = array(
  /* node-course_group-field_course_director */   'bundle' => 'course_group',
  /* node-course_group-field_course_director */   'default_value' => NULL,
  /* node-course_group-field_course_director */   'default_value_function' => '',
  /* node-course_group-field_course_director */   'deleted' => 0,
  /* node-course_group-field_course_director */   'description' => '',
  /* node-course_group-field_course_director */   'display' => array(
  /* node-course_group-field_course_director */     'default' => array(
  /* node-course_group-field_course_director */       'label' => 'above',
  /* node-course_group-field_course_director */       'module' => 'entityreference',
  /* node-course_group-field_course_director */       'settings' => array(
  /* node-course_group-field_course_director */         'bypass_access' => FALSE,
  /* node-course_group-field_course_director */         'field_formatter_class' => '',
  /* node-course_group-field_course_director */         'link' => FALSE,
  /* node-course_group-field_course_director */       ),
  /* node-course_group-field_course_director */       'type' => 'entityreference_label',
  /* node-course_group-field_course_director */       'weight' => 15,
  /* node-course_group-field_course_director */     ),
  /* node-course_group-field_course_director */     'events_list' => array(
  /* node-course_group-field_course_director */       'label' => 'above',
  /* node-course_group-field_course_director */       'settings' => array(),
  /* node-course_group-field_course_director */       'type' => 'hidden',
  /* node-course_group-field_course_director */       'weight' => 0,
  /* node-course_group-field_course_director */     ),
  /* node-course_group-field_course_director */     'group_teaser' => array(
  /* node-course_group-field_course_director */       'label' => 'above',
  /* node-course_group-field_course_director */       'settings' => array(),
  /* node-course_group-field_course_director */       'type' => 'hidden',
  /* node-course_group-field_course_director */       'weight' => 0,
  /* node-course_group-field_course_director */     ),
  /* node-course_group-field_course_director */     'one_column_teaser' => array(
  /* node-course_group-field_course_director */       'label' => 'above',
  /* node-course_group-field_course_director */       'settings' => array(),
  /* node-course_group-field_course_director */       'type' => 'hidden',
  /* node-course_group-field_course_director */       'weight' => 0,
  /* node-course_group-field_course_director */     ),
  /* node-course_group-field_course_director */     'post_teaser_group_landing_page' => array(
  /* node-course_group-field_course_director */       'label' => 'above',
  /* node-course_group-field_course_director */       'settings' => array(),
  /* node-course_group-field_course_director */       'type' => 'hidden',
  /* node-course_group-field_course_director */       'weight' => 0,
  /* node-course_group-field_course_director */     ),
  /* node-course_group-field_course_director */     'search_teaser' => array(
  /* node-course_group-field_course_director */       'label' => 'above',
  /* node-course_group-field_course_director */       'settings' => array(),
  /* node-course_group-field_course_director */       'type' => 'hidden',
  /* node-course_group-field_course_director */       'weight' => 0,
  /* node-course_group-field_course_director */     ),
  /* node-course_group-field_course_director */     'sidebar_' => array(
  /* node-course_group-field_course_director */       'label' => 'above',
  /* node-course_group-field_course_director */       'settings' => array(),
  /* node-course_group-field_course_director */       'type' => 'hidden',
  /* node-course_group-field_course_director */       'weight' => 0,
  /* node-course_group-field_course_director */     ),
  /* node-course_group-field_course_director */     'sidebar_teaser_v2' => array(
  /* node-course_group-field_course_director */       'label' => 'above',
  /* node-course_group-field_course_director */       'settings' => array(),
  /* node-course_group-field_course_director */       'type' => 'hidden',
  /* node-course_group-field_course_director */       'weight' => 0,
  /* node-course_group-field_course_director */     ),
  /* node-course_group-field_course_director */     'teaser' => array(
  /* node-course_group-field_course_director */       'label' => 'above',
  /* node-course_group-field_course_director */       'settings' => array(),
  /* node-course_group-field_course_director */       'type' => 'hidden',
  /* node-course_group-field_course_director */       'weight' => 0,
  /* node-course_group-field_course_director */     ),
  /* node-course_group-field_course_director */     'teaserthumb' => array(
  /* node-course_group-field_course_director */       'label' => 'above',
  /* node-course_group-field_course_director */       'settings' => array(),
  /* node-course_group-field_course_director */       'type' => 'hidden',
  /* node-course_group-field_course_director */       'weight' => 0,
  /* node-course_group-field_course_director */     ),
  /* node-course_group-field_course_director */     'time_and_location' => array(
  /* node-course_group-field_course_director */       'label' => 'above',
  /* node-course_group-field_course_director */       'settings' => array(),
  /* node-course_group-field_course_director */       'type' => 'hidden',
  /* node-course_group-field_course_director */       'weight' => 0,
  /* node-course_group-field_course_director */     ),
  /* node-course_group-field_course_director */     'title_and_time' => array(
  /* node-course_group-field_course_director */       'label' => 'above',
  /* node-course_group-field_course_director */       'settings' => array(),
  /* node-course_group-field_course_director */       'type' => 'hidden',
  /* node-course_group-field_course_director */       'weight' => 0,
  /* node-course_group-field_course_director */     ),
  /* node-course_group-field_course_director */   ),
  /* node-course_group-field_course_director */   'entity_type' => 'node',
  /* node-course_group-field_course_director */   'fences_wrapper' => 'div',
  /* node-course_group-field_course_director */   'field_name' => 'field_course_director',
  /* node-course_group-field_course_director */   'label' => 'Course Director',
  /* node-course_group-field_course_director */   'required' => 0,
  /* node-course_group-field_course_director */   'settings' => array(
  /* node-course_group-field_course_director */     'behaviors' => array(
  /* node-course_group-field_course_director */       'prepopulate' => array(
  /* node-course_group-field_course_director */         'status' => 0,
  /* node-course_group-field_course_director */       ),
  /* node-course_group-field_course_director */     ),
  /* node-course_group-field_course_director */     'user_register_form' => FALSE,
  /* node-course_group-field_course_director */   ),
  /* node-course_group-field_course_director */   'widget' => array(
  /* node-course_group-field_course_director */     'active' => 1,
  /* node-course_group-field_course_director */     'module' => 'entityreference',
  /* node-course_group-field_course_director */     'settings' => array(
  /* node-course_group-field_course_director */       'match_operator' => 'CONTAINS',
  /* node-course_group-field_course_director */       'path' => '',
  /* node-course_group-field_course_director */       'size' => 60,
  /* node-course_group-field_course_director */     ),
  /* node-course_group-field_course_director */     'type' => 'entityreference_autocomplete',
  /* node-course_group-field_course_director */     'weight' => 0,
  /* node-course_group-field_course_director */   ),
  /* node-course_group-field_course_director */ );

  // Exported field_instance:
  // 'node-course_group-field_course_event_coordinator'.
  $field_instances['node-course_group-field_course_event_coordinator'] = array(
  /* node-course_group-field_course_event_coordinator */   'bundle' => 'course_group',
  /* node-course_group-field_course_event_coordinator */   'default_value' => NULL,
  /* node-course_group-field_course_event_coordinator */   'default_value_function' => '',
  /* node-course_group-field_course_event_coordinator */   'deleted' => 0,
  /* node-course_group-field_course_event_coordinator */   'description' => '',
  /* node-course_group-field_course_event_coordinator */   'display' => array(
  /* node-course_group-field_course_event_coordinator */     'default' => array(
  /* node-course_group-field_course_event_coordinator */       'label' => 'above',
  /* node-course_group-field_course_event_coordinator */       'module' => 'entityreference',
  /* node-course_group-field_course_event_coordinator */       'settings' => array(
  /* node-course_group-field_course_event_coordinator */         'bypass_access' => FALSE,
  /* node-course_group-field_course_event_coordinator */         'field_formatter_class' => '',
  /* node-course_group-field_course_event_coordinator */         'link' => FALSE,
  /* node-course_group-field_course_event_coordinator */       ),
  /* node-course_group-field_course_event_coordinator */       'type' => 'entityreference_label',
  /* node-course_group-field_course_event_coordinator */       'weight' => 17,
  /* node-course_group-field_course_event_coordinator */     ),
  /* node-course_group-field_course_event_coordinator */     'events_list' => array(
  /* node-course_group-field_course_event_coordinator */       'label' => 'above',
  /* node-course_group-field_course_event_coordinator */       'settings' => array(),
  /* node-course_group-field_course_event_coordinator */       'type' => 'hidden',
  /* node-course_group-field_course_event_coordinator */       'weight' => 0,
  /* node-course_group-field_course_event_coordinator */     ),
  /* node-course_group-field_course_event_coordinator */     'group_teaser' => array(
  /* node-course_group-field_course_event_coordinator */       'label' => 'above',
  /* node-course_group-field_course_event_coordinator */       'settings' => array(),
  /* node-course_group-field_course_event_coordinator */       'type' => 'hidden',
  /* node-course_group-field_course_event_coordinator */       'weight' => 0,
  /* node-course_group-field_course_event_coordinator */     ),
  /* node-course_group-field_course_event_coordinator */     'one_column_teaser' => array(
  /* node-course_group-field_course_event_coordinator */       'label' => 'above',
  /* node-course_group-field_course_event_coordinator */       'settings' => array(),
  /* node-course_group-field_course_event_coordinator */       'type' => 'hidden',
  /* node-course_group-field_course_event_coordinator */       'weight' => 0,
  /* node-course_group-field_course_event_coordinator */     ),
  /* node-course_group-field_course_event_coordinator */     'post_teaser_group_landing_page' => array(
  /* node-course_group-field_course_event_coordinator */       'label' => 'above',
  /* node-course_group-field_course_event_coordinator */       'settings' => array(),
  /* node-course_group-field_course_event_coordinator */       'type' => 'hidden',
  /* node-course_group-field_course_event_coordinator */       'weight' => 0,
  /* node-course_group-field_course_event_coordinator */     ),
  /* node-course_group-field_course_event_coordinator */     'search_teaser' => array(
  /* node-course_group-field_course_event_coordinator */       'label' => 'above',
  /* node-course_group-field_course_event_coordinator */       'settings' => array(),
  /* node-course_group-field_course_event_coordinator */       'type' => 'hidden',
  /* node-course_group-field_course_event_coordinator */       'weight' => 0,
  /* node-course_group-field_course_event_coordinator */     ),
  /* node-course_group-field_course_event_coordinator */     'sidebar_' => array(
  /* node-course_group-field_course_event_coordinator */       'label' => 'above',
  /* node-course_group-field_course_event_coordinator */       'settings' => array(),
  /* node-course_group-field_course_event_coordinator */       'type' => 'hidden',
  /* node-course_group-field_course_event_coordinator */       'weight' => 0,
  /* node-course_group-field_course_event_coordinator */     ),
  /* node-course_group-field_course_event_coordinator */     'sidebar_teaser_v2' => array(
  /* node-course_group-field_course_event_coordinator */       'label' => 'above',
  /* node-course_group-field_course_event_coordinator */       'settings' => array(),
  /* node-course_group-field_course_event_coordinator */       'type' => 'hidden',
  /* node-course_group-field_course_event_coordinator */       'weight' => 0,
  /* node-course_group-field_course_event_coordinator */     ),
  /* node-course_group-field_course_event_coordinator */     'teaser' => array(
  /* node-course_group-field_course_event_coordinator */       'label' => 'above',
  /* node-course_group-field_course_event_coordinator */       'settings' => array(),
  /* node-course_group-field_course_event_coordinator */       'type' => 'hidden',
  /* node-course_group-field_course_event_coordinator */       'weight' => 0,
  /* node-course_group-field_course_event_coordinator */     ),
  /* node-course_group-field_course_event_coordinator */     'teaserthumb' => array(
  /* node-course_group-field_course_event_coordinator */       'label' => 'above',
  /* node-course_group-field_course_event_coordinator */       'settings' => array(),
  /* node-course_group-field_course_event_coordinator */       'type' => 'hidden',
  /* node-course_group-field_course_event_coordinator */       'weight' => 0,
  /* node-course_group-field_course_event_coordinator */     ),
  /* node-course_group-field_course_event_coordinator */     'time_and_location' => array(
  /* node-course_group-field_course_event_coordinator */       'label' => 'above',
  /* node-course_group-field_course_event_coordinator */       'settings' => array(),
  /* node-course_group-field_course_event_coordinator */       'type' => 'hidden',
  /* node-course_group-field_course_event_coordinator */       'weight' => 0,
  /* node-course_group-field_course_event_coordinator */     ),
  /* node-course_group-field_course_event_coordinator */     'title_and_time' => array(
  /* node-course_group-field_course_event_coordinator */       'label' => 'above',
  /* node-course_group-field_course_event_coordinator */       'settings' => array(),
  /* node-course_group-field_course_event_coordinator */       'type' => 'hidden',
  /* node-course_group-field_course_event_coordinator */       'weight' => 0,
  /* node-course_group-field_course_event_coordinator */     ),
  /* node-course_group-field_course_event_coordinator */   ),
  /* node-course_group-field_course_event_coordinator */   'entity_type' => 'node',
  /* node-course_group-field_course_event_coordinator */   'fences_wrapper' => 'div',
  /* node-course_group-field_course_event_coordinator */   'field_name' => 'field_course_event_coordinator',
  /* node-course_group-field_course_event_coordinator */   'label' => 'Event Coordinator',
  /* node-course_group-field_course_event_coordinator */   'required' => 0,
  /* node-course_group-field_course_event_coordinator */   'settings' => array(
  /* node-course_group-field_course_event_coordinator */     'behaviors' => array(
  /* node-course_group-field_course_event_coordinator */       'prepopulate' => array(
  /* node-course_group-field_course_event_coordinator */         'status' => 0,
  /* node-course_group-field_course_event_coordinator */       ),
  /* node-course_group-field_course_event_coordinator */     ),
  /* node-course_group-field_course_event_coordinator */     'user_register_form' => FALSE,
  /* node-course_group-field_course_event_coordinator */   ),
  /* node-course_group-field_course_event_coordinator */   'widget' => array(
  /* node-course_group-field_course_event_coordinator */     'active' => 1,
  /* node-course_group-field_course_event_coordinator */     'module' => 'entityreference',
  /* node-course_group-field_course_event_coordinator */     'settings' => array(
  /* node-course_group-field_course_event_coordinator */       'match_operator' => 'CONTAINS',
  /* node-course_group-field_course_event_coordinator */       'path' => '',
  /* node-course_group-field_course_event_coordinator */       'size' => 60,
  /* node-course_group-field_course_event_coordinator */     ),
  /* node-course_group-field_course_event_coordinator */     'type' => 'entityreference_autocomplete',
  /* node-course_group-field_course_event_coordinator */     'weight' => 3,
  /* node-course_group-field_course_event_coordinator */   ),
  /* node-course_group-field_course_event_coordinator */ );

  // Exported field_instance: 'node-course_group-field_course_faculty'.
  $field_instances['node-course_group-field_course_faculty'] = array(
  /* node-course_group-field_course_faculty */   'bundle' => 'course_group',
  /* node-course_group-field_course_faculty */   'default_value' => NULL,
  /* node-course_group-field_course_faculty */   'default_value_function' => '',
  /* node-course_group-field_course_faculty */   'deleted' => 0,
  /* node-course_group-field_course_faculty */   'description' => '',
  /* node-course_group-field_course_faculty */   'display' => array(
  /* node-course_group-field_course_faculty */     'default' => array(
  /* node-course_group-field_course_faculty */       'label' => 'above',
  /* node-course_group-field_course_faculty */       'module' => 'entityreference',
  /* node-course_group-field_course_faculty */       'settings' => array(
  /* node-course_group-field_course_faculty */         'bypass_access' => FALSE,
  /* node-course_group-field_course_faculty */         'field_formatter_class' => '',
  /* node-course_group-field_course_faculty */         'link' => FALSE,
  /* node-course_group-field_course_faculty */       ),
  /* node-course_group-field_course_faculty */       'type' => 'entityreference_label',
  /* node-course_group-field_course_faculty */       'weight' => 19,
  /* node-course_group-field_course_faculty */     ),
  /* node-course_group-field_course_faculty */     'events_list' => array(
  /* node-course_group-field_course_faculty */       'label' => 'above',
  /* node-course_group-field_course_faculty */       'settings' => array(),
  /* node-course_group-field_course_faculty */       'type' => 'hidden',
  /* node-course_group-field_course_faculty */       'weight' => 0,
  /* node-course_group-field_course_faculty */     ),
  /* node-course_group-field_course_faculty */     'group_teaser' => array(
  /* node-course_group-field_course_faculty */       'label' => 'above',
  /* node-course_group-field_course_faculty */       'settings' => array(),
  /* node-course_group-field_course_faculty */       'type' => 'hidden',
  /* node-course_group-field_course_faculty */       'weight' => 0,
  /* node-course_group-field_course_faculty */     ),
  /* node-course_group-field_course_faculty */     'one_column_teaser' => array(
  /* node-course_group-field_course_faculty */       'label' => 'above',
  /* node-course_group-field_course_faculty */       'settings' => array(),
  /* node-course_group-field_course_faculty */       'type' => 'hidden',
  /* node-course_group-field_course_faculty */       'weight' => 0,
  /* node-course_group-field_course_faculty */     ),
  /* node-course_group-field_course_faculty */     'post_teaser_group_landing_page' => array(
  /* node-course_group-field_course_faculty */       'label' => 'above',
  /* node-course_group-field_course_faculty */       'settings' => array(),
  /* node-course_group-field_course_faculty */       'type' => 'hidden',
  /* node-course_group-field_course_faculty */       'weight' => 0,
  /* node-course_group-field_course_faculty */     ),
  /* node-course_group-field_course_faculty */     'search_teaser' => array(
  /* node-course_group-field_course_faculty */       'label' => 'above',
  /* node-course_group-field_course_faculty */       'settings' => array(),
  /* node-course_group-field_course_faculty */       'type' => 'hidden',
  /* node-course_group-field_course_faculty */       'weight' => 0,
  /* node-course_group-field_course_faculty */     ),
  /* node-course_group-field_course_faculty */     'sidebar_' => array(
  /* node-course_group-field_course_faculty */       'label' => 'above',
  /* node-course_group-field_course_faculty */       'settings' => array(),
  /* node-course_group-field_course_faculty */       'type' => 'hidden',
  /* node-course_group-field_course_faculty */       'weight' => 0,
  /* node-course_group-field_course_faculty */     ),
  /* node-course_group-field_course_faculty */     'sidebar_teaser_v2' => array(
  /* node-course_group-field_course_faculty */       'label' => 'above',
  /* node-course_group-field_course_faculty */       'settings' => array(),
  /* node-course_group-field_course_faculty */       'type' => 'hidden',
  /* node-course_group-field_course_faculty */       'weight' => 0,
  /* node-course_group-field_course_faculty */     ),
  /* node-course_group-field_course_faculty */     'teaser' => array(
  /* node-course_group-field_course_faculty */       'label' => 'above',
  /* node-course_group-field_course_faculty */       'settings' => array(),
  /* node-course_group-field_course_faculty */       'type' => 'hidden',
  /* node-course_group-field_course_faculty */       'weight' => 0,
  /* node-course_group-field_course_faculty */     ),
  /* node-course_group-field_course_faculty */     'teaserthumb' => array(
  /* node-course_group-field_course_faculty */       'label' => 'above',
  /* node-course_group-field_course_faculty */       'settings' => array(),
  /* node-course_group-field_course_faculty */       'type' => 'hidden',
  /* node-course_group-field_course_faculty */       'weight' => 0,
  /* node-course_group-field_course_faculty */     ),
  /* node-course_group-field_course_faculty */     'time_and_location' => array(
  /* node-course_group-field_course_faculty */       'label' => 'above',
  /* node-course_group-field_course_faculty */       'settings' => array(),
  /* node-course_group-field_course_faculty */       'type' => 'hidden',
  /* node-course_group-field_course_faculty */       'weight' => 0,
  /* node-course_group-field_course_faculty */     ),
  /* node-course_group-field_course_faculty */     'title_and_time' => array(
  /* node-course_group-field_course_faculty */       'label' => 'above',
  /* node-course_group-field_course_faculty */       'settings' => array(),
  /* node-course_group-field_course_faculty */       'type' => 'hidden',
  /* node-course_group-field_course_faculty */       'weight' => 0,
  /* node-course_group-field_course_faculty */     ),
  /* node-course_group-field_course_faculty */   ),
  /* node-course_group-field_course_faculty */   'entity_type' => 'node',
  /* node-course_group-field_course_faculty */   'fences_wrapper' => 'div',
  /* node-course_group-field_course_faculty */   'field_name' => 'field_course_faculty',
  /* node-course_group-field_course_faculty */   'label' => 'Faculty',
  /* node-course_group-field_course_faculty */   'required' => 0,
  /* node-course_group-field_course_faculty */   'settings' => array(
  /* node-course_group-field_course_faculty */     'behaviors' => array(
  /* node-course_group-field_course_faculty */       'prepopulate' => array(
  /* node-course_group-field_course_faculty */         'status' => 0,
  /* node-course_group-field_course_faculty */       ),
  /* node-course_group-field_course_faculty */     ),
  /* node-course_group-field_course_faculty */     'user_register_form' => FALSE,
  /* node-course_group-field_course_faculty */   ),
  /* node-course_group-field_course_faculty */   'widget' => array(
  /* node-course_group-field_course_faculty */     'active' => 1,
  /* node-course_group-field_course_faculty */     'module' => 'entityreference',
  /* node-course_group-field_course_faculty */     'settings' => array(
  /* node-course_group-field_course_faculty */       'match_operator' => 'CONTAINS',
  /* node-course_group-field_course_faculty */       'path' => '',
  /* node-course_group-field_course_faculty */       'size' => 60,
  /* node-course_group-field_course_faculty */     ),
  /* node-course_group-field_course_faculty */     'type' => 'entityreference_autocomplete',
  /* node-course_group-field_course_faculty */     'weight' => 5,
  /* node-course_group-field_course_faculty */   ),
  /* node-course_group-field_course_faculty */ );

  // Exported field_instance: 'node-course_group-field_course_seminar_leader'.
  $field_instances['node-course_group-field_course_seminar_leader'] = array(
  /* node-course_group-field_course_seminar_leader */   'bundle' => 'course_group',
  /* node-course_group-field_course_seminar_leader */   'default_value' => NULL,
  /* node-course_group-field_course_seminar_leader */   'default_value_function' => '',
  /* node-course_group-field_course_seminar_leader */   'deleted' => 0,
  /* node-course_group-field_course_seminar_leader */   'description' => '',
  /* node-course_group-field_course_seminar_leader */   'display' => array(
  /* node-course_group-field_course_seminar_leader */     'default' => array(
  /* node-course_group-field_course_seminar_leader */       'label' => 'above',
  /* node-course_group-field_course_seminar_leader */       'module' => 'entityreference',
  /* node-course_group-field_course_seminar_leader */       'settings' => array(
  /* node-course_group-field_course_seminar_leader */         'bypass_access' => FALSE,
  /* node-course_group-field_course_seminar_leader */         'field_formatter_class' => '',
  /* node-course_group-field_course_seminar_leader */         'link' => FALSE,
  /* node-course_group-field_course_seminar_leader */       ),
  /* node-course_group-field_course_seminar_leader */       'type' => 'entityreference_label',
  /* node-course_group-field_course_seminar_leader */       'weight' => 18,
  /* node-course_group-field_course_seminar_leader */     ),
  /* node-course_group-field_course_seminar_leader */     'events_list' => array(
  /* node-course_group-field_course_seminar_leader */       'label' => 'above',
  /* node-course_group-field_course_seminar_leader */       'settings' => array(),
  /* node-course_group-field_course_seminar_leader */       'type' => 'hidden',
  /* node-course_group-field_course_seminar_leader */       'weight' => 0,
  /* node-course_group-field_course_seminar_leader */     ),
  /* node-course_group-field_course_seminar_leader */     'group_teaser' => array(
  /* node-course_group-field_course_seminar_leader */       'label' => 'above',
  /* node-course_group-field_course_seminar_leader */       'settings' => array(),
  /* node-course_group-field_course_seminar_leader */       'type' => 'hidden',
  /* node-course_group-field_course_seminar_leader */       'weight' => 0,
  /* node-course_group-field_course_seminar_leader */     ),
  /* node-course_group-field_course_seminar_leader */     'one_column_teaser' => array(
  /* node-course_group-field_course_seminar_leader */       'label' => 'above',
  /* node-course_group-field_course_seminar_leader */       'settings' => array(),
  /* node-course_group-field_course_seminar_leader */       'type' => 'hidden',
  /* node-course_group-field_course_seminar_leader */       'weight' => 0,
  /* node-course_group-field_course_seminar_leader */     ),
  /* node-course_group-field_course_seminar_leader */     'post_teaser_group_landing_page' => array(
  /* node-course_group-field_course_seminar_leader */       'label' => 'above',
  /* node-course_group-field_course_seminar_leader */       'settings' => array(),
  /* node-course_group-field_course_seminar_leader */       'type' => 'hidden',
  /* node-course_group-field_course_seminar_leader */       'weight' => 0,
  /* node-course_group-field_course_seminar_leader */     ),
  /* node-course_group-field_course_seminar_leader */     'search_teaser' => array(
  /* node-course_group-field_course_seminar_leader */       'label' => 'above',
  /* node-course_group-field_course_seminar_leader */       'settings' => array(),
  /* node-course_group-field_course_seminar_leader */       'type' => 'hidden',
  /* node-course_group-field_course_seminar_leader */       'weight' => 0,
  /* node-course_group-field_course_seminar_leader */     ),
  /* node-course_group-field_course_seminar_leader */     'sidebar_' => array(
  /* node-course_group-field_course_seminar_leader */       'label' => 'above',
  /* node-course_group-field_course_seminar_leader */       'settings' => array(),
  /* node-course_group-field_course_seminar_leader */       'type' => 'hidden',
  /* node-course_group-field_course_seminar_leader */       'weight' => 0,
  /* node-course_group-field_course_seminar_leader */     ),
  /* node-course_group-field_course_seminar_leader */     'sidebar_teaser_v2' => array(
  /* node-course_group-field_course_seminar_leader */       'label' => 'above',
  /* node-course_group-field_course_seminar_leader */       'settings' => array(),
  /* node-course_group-field_course_seminar_leader */       'type' => 'hidden',
  /* node-course_group-field_course_seminar_leader */       'weight' => 0,
  /* node-course_group-field_course_seminar_leader */     ),
  /* node-course_group-field_course_seminar_leader */     'teaser' => array(
  /* node-course_group-field_course_seminar_leader */       'label' => 'above',
  /* node-course_group-field_course_seminar_leader */       'settings' => array(),
  /* node-course_group-field_course_seminar_leader */       'type' => 'hidden',
  /* node-course_group-field_course_seminar_leader */       'weight' => 0,
  /* node-course_group-field_course_seminar_leader */     ),
  /* node-course_group-field_course_seminar_leader */     'teaserthumb' => array(
  /* node-course_group-field_course_seminar_leader */       'label' => 'above',
  /* node-course_group-field_course_seminar_leader */       'settings' => array(),
  /* node-course_group-field_course_seminar_leader */       'type' => 'hidden',
  /* node-course_group-field_course_seminar_leader */       'weight' => 0,
  /* node-course_group-field_course_seminar_leader */     ),
  /* node-course_group-field_course_seminar_leader */     'time_and_location' => array(
  /* node-course_group-field_course_seminar_leader */       'label' => 'above',
  /* node-course_group-field_course_seminar_leader */       'settings' => array(),
  /* node-course_group-field_course_seminar_leader */       'type' => 'hidden',
  /* node-course_group-field_course_seminar_leader */       'weight' => 0,
  /* node-course_group-field_course_seminar_leader */     ),
  /* node-course_group-field_course_seminar_leader */     'title_and_time' => array(
  /* node-course_group-field_course_seminar_leader */       'label' => 'above',
  /* node-course_group-field_course_seminar_leader */       'settings' => array(),
  /* node-course_group-field_course_seminar_leader */       'type' => 'hidden',
  /* node-course_group-field_course_seminar_leader */       'weight' => 0,
  /* node-course_group-field_course_seminar_leader */     ),
  /* node-course_group-field_course_seminar_leader */   ),
  /* node-course_group-field_course_seminar_leader */   'entity_type' => 'node',
  /* node-course_group-field_course_seminar_leader */   'fences_wrapper' => 'div',
  /* node-course_group-field_course_seminar_leader */   'field_name' => 'field_course_seminar_leader',
  /* node-course_group-field_course_seminar_leader */   'label' => 'Seminar Leader',
  /* node-course_group-field_course_seminar_leader */   'required' => 0,
  /* node-course_group-field_course_seminar_leader */   'settings' => array(
  /* node-course_group-field_course_seminar_leader */     'behaviors' => array(
  /* node-course_group-field_course_seminar_leader */       'prepopulate' => array(
  /* node-course_group-field_course_seminar_leader */         'status' => 0,
  /* node-course_group-field_course_seminar_leader */       ),
  /* node-course_group-field_course_seminar_leader */     ),
  /* node-course_group-field_course_seminar_leader */     'user_register_form' => FALSE,
  /* node-course_group-field_course_seminar_leader */   ),
  /* node-course_group-field_course_seminar_leader */   'widget' => array(
  /* node-course_group-field_course_seminar_leader */     'active' => 1,
  /* node-course_group-field_course_seminar_leader */     'module' => 'entityreference',
  /* node-course_group-field_course_seminar_leader */     'settings' => array(
  /* node-course_group-field_course_seminar_leader */       'match_operator' => 'CONTAINS',
  /* node-course_group-field_course_seminar_leader */       'path' => '',
  /* node-course_group-field_course_seminar_leader */       'size' => 60,
  /* node-course_group-field_course_seminar_leader */     ),
  /* node-course_group-field_course_seminar_leader */     'type' => 'entityreference_autocomplete',
  /* node-course_group-field_course_seminar_leader */     'weight' => 4,
  /* node-course_group-field_course_seminar_leader */   ),
  /* node-course_group-field_course_seminar_leader */ );

  // Exported field_instance: 'node-course_group-field_course_support_staff'.
  $field_instances['node-course_group-field_course_support_staff'] = array(
  /* node-course_group-field_course_support_staff */   'bundle' => 'course_group',
  /* node-course_group-field_course_support_staff */   'default_value' => NULL,
  /* node-course_group-field_course_support_staff */   'default_value_function' => '',
  /* node-course_group-field_course_support_staff */   'deleted' => 0,
  /* node-course_group-field_course_support_staff */   'description' => '',
  /* node-course_group-field_course_support_staff */   'display' => array(
  /* node-course_group-field_course_support_staff */     'default' => array(
  /* node-course_group-field_course_support_staff */       'label' => 'above',
  /* node-course_group-field_course_support_staff */       'module' => 'entityreference',
  /* node-course_group-field_course_support_staff */       'settings' => array(
  /* node-course_group-field_course_support_staff */         'bypass_access' => FALSE,
  /* node-course_group-field_course_support_staff */         'field_formatter_class' => '',
  /* node-course_group-field_course_support_staff */         'link' => FALSE,
  /* node-course_group-field_course_support_staff */       ),
  /* node-course_group-field_course_support_staff */       'type' => 'entityreference_label',
  /* node-course_group-field_course_support_staff */       'weight' => 20,
  /* node-course_group-field_course_support_staff */     ),
  /* node-course_group-field_course_support_staff */     'events_list' => array(
  /* node-course_group-field_course_support_staff */       'label' => 'above',
  /* node-course_group-field_course_support_staff */       'settings' => array(),
  /* node-course_group-field_course_support_staff */       'type' => 'hidden',
  /* node-course_group-field_course_support_staff */       'weight' => 0,
  /* node-course_group-field_course_support_staff */     ),
  /* node-course_group-field_course_support_staff */     'group_teaser' => array(
  /* node-course_group-field_course_support_staff */       'label' => 'above',
  /* node-course_group-field_course_support_staff */       'settings' => array(),
  /* node-course_group-field_course_support_staff */       'type' => 'hidden',
  /* node-course_group-field_course_support_staff */       'weight' => 0,
  /* node-course_group-field_course_support_staff */     ),
  /* node-course_group-field_course_support_staff */     'one_column_teaser' => array(
  /* node-course_group-field_course_support_staff */       'label' => 'above',
  /* node-course_group-field_course_support_staff */       'settings' => array(),
  /* node-course_group-field_course_support_staff */       'type' => 'hidden',
  /* node-course_group-field_course_support_staff */       'weight' => 0,
  /* node-course_group-field_course_support_staff */     ),
  /* node-course_group-field_course_support_staff */     'post_teaser_group_landing_page' => array(
  /* node-course_group-field_course_support_staff */       'label' => 'above',
  /* node-course_group-field_course_support_staff */       'settings' => array(),
  /* node-course_group-field_course_support_staff */       'type' => 'hidden',
  /* node-course_group-field_course_support_staff */       'weight' => 0,
  /* node-course_group-field_course_support_staff */     ),
  /* node-course_group-field_course_support_staff */     'search_teaser' => array(
  /* node-course_group-field_course_support_staff */       'label' => 'above',
  /* node-course_group-field_course_support_staff */       'settings' => array(),
  /* node-course_group-field_course_support_staff */       'type' => 'hidden',
  /* node-course_group-field_course_support_staff */       'weight' => 0,
  /* node-course_group-field_course_support_staff */     ),
  /* node-course_group-field_course_support_staff */     'sidebar_' => array(
  /* node-course_group-field_course_support_staff */       'label' => 'above',
  /* node-course_group-field_course_support_staff */       'settings' => array(),
  /* node-course_group-field_course_support_staff */       'type' => 'hidden',
  /* node-course_group-field_course_support_staff */       'weight' => 0,
  /* node-course_group-field_course_support_staff */     ),
  /* node-course_group-field_course_support_staff */     'sidebar_teaser_v2' => array(
  /* node-course_group-field_course_support_staff */       'label' => 'above',
  /* node-course_group-field_course_support_staff */       'settings' => array(),
  /* node-course_group-field_course_support_staff */       'type' => 'hidden',
  /* node-course_group-field_course_support_staff */       'weight' => 0,
  /* node-course_group-field_course_support_staff */     ),
  /* node-course_group-field_course_support_staff */     'teaser' => array(
  /* node-course_group-field_course_support_staff */       'label' => 'above',
  /* node-course_group-field_course_support_staff */       'settings' => array(),
  /* node-course_group-field_course_support_staff */       'type' => 'hidden',
  /* node-course_group-field_course_support_staff */       'weight' => 0,
  /* node-course_group-field_course_support_staff */     ),
  /* node-course_group-field_course_support_staff */     'teaserthumb' => array(
  /* node-course_group-field_course_support_staff */       'label' => 'above',
  /* node-course_group-field_course_support_staff */       'settings' => array(),
  /* node-course_group-field_course_support_staff */       'type' => 'hidden',
  /* node-course_group-field_course_support_staff */       'weight' => 0,
  /* node-course_group-field_course_support_staff */     ),
  /* node-course_group-field_course_support_staff */     'time_and_location' => array(
  /* node-course_group-field_course_support_staff */       'label' => 'above',
  /* node-course_group-field_course_support_staff */       'settings' => array(),
  /* node-course_group-field_course_support_staff */       'type' => 'hidden',
  /* node-course_group-field_course_support_staff */       'weight' => 0,
  /* node-course_group-field_course_support_staff */     ),
  /* node-course_group-field_course_support_staff */     'title_and_time' => array(
  /* node-course_group-field_course_support_staff */       'label' => 'above',
  /* node-course_group-field_course_support_staff */       'settings' => array(),
  /* node-course_group-field_course_support_staff */       'type' => 'hidden',
  /* node-course_group-field_course_support_staff */       'weight' => 0,
  /* node-course_group-field_course_support_staff */     ),
  /* node-course_group-field_course_support_staff */   ),
  /* node-course_group-field_course_support_staff */   'entity_type' => 'node',
  /* node-course_group-field_course_support_staff */   'fences_wrapper' => 'div',
  /* node-course_group-field_course_support_staff */   'field_name' => 'field_course_support_staff',
  /* node-course_group-field_course_support_staff */   'label' => 'Course Support Staff',
  /* node-course_group-field_course_support_staff */   'required' => 0,
  /* node-course_group-field_course_support_staff */   'settings' => array(
  /* node-course_group-field_course_support_staff */     'behaviors' => array(
  /* node-course_group-field_course_support_staff */       'prepopulate' => array(
  /* node-course_group-field_course_support_staff */         'status' => 0,
  /* node-course_group-field_course_support_staff */       ),
  /* node-course_group-field_course_support_staff */     ),
  /* node-course_group-field_course_support_staff */     'user_register_form' => FALSE,
  /* node-course_group-field_course_support_staff */   ),
  /* node-course_group-field_course_support_staff */   'widget' => array(
  /* node-course_group-field_course_support_staff */     'active' => 1,
  /* node-course_group-field_course_support_staff */     'module' => 'entityreference',
  /* node-course_group-field_course_support_staff */     'settings' => array(
  /* node-course_group-field_course_support_staff */       'match_operator' => 'CONTAINS',
  /* node-course_group-field_course_support_staff */       'path' => '',
  /* node-course_group-field_course_support_staff */       'size' => 60,
  /* node-course_group-field_course_support_staff */     ),
  /* node-course_group-field_course_support_staff */     'type' => 'entityreference_autocomplete',
  /* node-course_group-field_course_support_staff */     'weight' => 6,
  /* node-course_group-field_course_support_staff */   ),
  /* node-course_group-field_course_support_staff */ );

  // Exported field_instance: 'node-course_group-field_deputy_course_director'.
  $field_instances['node-course_group-field_deputy_course_director'] = array(
  /* node-course_group-field_deputy_course_director */   'bundle' => 'course_group',
  /* node-course_group-field_deputy_course_director */   'default_value' => NULL,
  /* node-course_group-field_deputy_course_director */   'default_value_function' => '',
  /* node-course_group-field_deputy_course_director */   'deleted' => 0,
  /* node-course_group-field_deputy_course_director */   'description' => '',
  /* node-course_group-field_deputy_course_director */   'display' => array(
  /* node-course_group-field_deputy_course_director */     'default' => array(
  /* node-course_group-field_deputy_course_director */       'label' => 'above',
  /* node-course_group-field_deputy_course_director */       'module' => 'entityreference',
  /* node-course_group-field_deputy_course_director */       'settings' => array(
  /* node-course_group-field_deputy_course_director */         'bypass_access' => FALSE,
  /* node-course_group-field_deputy_course_director */         'field_formatter_class' => '',
  /* node-course_group-field_deputy_course_director */         'link' => FALSE,
  /* node-course_group-field_deputy_course_director */       ),
  /* node-course_group-field_deputy_course_director */       'type' => 'entityreference_label',
  /* node-course_group-field_deputy_course_director */       'weight' => 16,
  /* node-course_group-field_deputy_course_director */     ),
  /* node-course_group-field_deputy_course_director */     'events_list' => array(
  /* node-course_group-field_deputy_course_director */       'label' => 'above',
  /* node-course_group-field_deputy_course_director */       'settings' => array(),
  /* node-course_group-field_deputy_course_director */       'type' => 'hidden',
  /* node-course_group-field_deputy_course_director */       'weight' => 0,
  /* node-course_group-field_deputy_course_director */     ),
  /* node-course_group-field_deputy_course_director */     'group_teaser' => array(
  /* node-course_group-field_deputy_course_director */       'label' => 'above',
  /* node-course_group-field_deputy_course_director */       'settings' => array(),
  /* node-course_group-field_deputy_course_director */       'type' => 'hidden',
  /* node-course_group-field_deputy_course_director */       'weight' => 0,
  /* node-course_group-field_deputy_course_director */     ),
  /* node-course_group-field_deputy_course_director */     'one_column_teaser' => array(
  /* node-course_group-field_deputy_course_director */       'label' => 'above',
  /* node-course_group-field_deputy_course_director */       'settings' => array(),
  /* node-course_group-field_deputy_course_director */       'type' => 'hidden',
  /* node-course_group-field_deputy_course_director */       'weight' => 0,
  /* node-course_group-field_deputy_course_director */     ),
  /* node-course_group-field_deputy_course_director */     'post_teaser_group_landing_page' => array(
  /* node-course_group-field_deputy_course_director */       'label' => 'above',
  /* node-course_group-field_deputy_course_director */       'settings' => array(),
  /* node-course_group-field_deputy_course_director */       'type' => 'hidden',
  /* node-course_group-field_deputy_course_director */       'weight' => 0,
  /* node-course_group-field_deputy_course_director */     ),
  /* node-course_group-field_deputy_course_director */     'search_teaser' => array(
  /* node-course_group-field_deputy_course_director */       'label' => 'above',
  /* node-course_group-field_deputy_course_director */       'settings' => array(),
  /* node-course_group-field_deputy_course_director */       'type' => 'hidden',
  /* node-course_group-field_deputy_course_director */       'weight' => 0,
  /* node-course_group-field_deputy_course_director */     ),
  /* node-course_group-field_deputy_course_director */     'sidebar_' => array(
  /* node-course_group-field_deputy_course_director */       'label' => 'above',
  /* node-course_group-field_deputy_course_director */       'settings' => array(),
  /* node-course_group-field_deputy_course_director */       'type' => 'hidden',
  /* node-course_group-field_deputy_course_director */       'weight' => 0,
  /* node-course_group-field_deputy_course_director */     ),
  /* node-course_group-field_deputy_course_director */     'sidebar_teaser_v2' => array(
  /* node-course_group-field_deputy_course_director */       'label' => 'above',
  /* node-course_group-field_deputy_course_director */       'settings' => array(),
  /* node-course_group-field_deputy_course_director */       'type' => 'hidden',
  /* node-course_group-field_deputy_course_director */       'weight' => 0,
  /* node-course_group-field_deputy_course_director */     ),
  /* node-course_group-field_deputy_course_director */     'teaser' => array(
  /* node-course_group-field_deputy_course_director */       'label' => 'above',
  /* node-course_group-field_deputy_course_director */       'settings' => array(),
  /* node-course_group-field_deputy_course_director */       'type' => 'hidden',
  /* node-course_group-field_deputy_course_director */       'weight' => 0,
  /* node-course_group-field_deputy_course_director */     ),
  /* node-course_group-field_deputy_course_director */     'teaserthumb' => array(
  /* node-course_group-field_deputy_course_director */       'label' => 'above',
  /* node-course_group-field_deputy_course_director */       'settings' => array(),
  /* node-course_group-field_deputy_course_director */       'type' => 'hidden',
  /* node-course_group-field_deputy_course_director */       'weight' => 0,
  /* node-course_group-field_deputy_course_director */     ),
  /* node-course_group-field_deputy_course_director */     'time_and_location' => array(
  /* node-course_group-field_deputy_course_director */       'label' => 'above',
  /* node-course_group-field_deputy_course_director */       'settings' => array(),
  /* node-course_group-field_deputy_course_director */       'type' => 'hidden',
  /* node-course_group-field_deputy_course_director */       'weight' => 0,
  /* node-course_group-field_deputy_course_director */     ),
  /* node-course_group-field_deputy_course_director */     'title_and_time' => array(
  /* node-course_group-field_deputy_course_director */       'label' => 'above',
  /* node-course_group-field_deputy_course_director */       'settings' => array(),
  /* node-course_group-field_deputy_course_director */       'type' => 'hidden',
  /* node-course_group-field_deputy_course_director */       'weight' => 0,
  /* node-course_group-field_deputy_course_director */     ),
  /* node-course_group-field_deputy_course_director */   ),
  /* node-course_group-field_deputy_course_director */   'entity_type' => 'node',
  /* node-course_group-field_deputy_course_director */   'fences_wrapper' => 'div',
  /* node-course_group-field_deputy_course_director */   'field_name' => 'field_deputy_course_director',
  /* node-course_group-field_deputy_course_director */   'label' => 'Deputy Course Director',
  /* node-course_group-field_deputy_course_director */   'required' => 0,
  /* node-course_group-field_deputy_course_director */   'settings' => array(
  /* node-course_group-field_deputy_course_director */     'behaviors' => array(
  /* node-course_group-field_deputy_course_director */       'prepopulate' => array(
  /* node-course_group-field_deputy_course_director */         'status' => 0,
  /* node-course_group-field_deputy_course_director */       ),
  /* node-course_group-field_deputy_course_director */     ),
  /* node-course_group-field_deputy_course_director */     'user_register_form' => FALSE,
  /* node-course_group-field_deputy_course_director */   ),
  /* node-course_group-field_deputy_course_director */   'widget' => array(
  /* node-course_group-field_deputy_course_director */     'active' => 1,
  /* node-course_group-field_deputy_course_director */     'module' => 'entityreference',
  /* node-course_group-field_deputy_course_director */     'settings' => array(
  /* node-course_group-field_deputy_course_director */       'match_operator' => 'CONTAINS',
  /* node-course_group-field_deputy_course_director */       'path' => '',
  /* node-course_group-field_deputy_course_director */       'size' => 60,
  /* node-course_group-field_deputy_course_director */     ),
  /* node-course_group-field_deputy_course_director */     'type' => 'entityreference_autocomplete',
  /* node-course_group-field_deputy_course_director */     'weight' => 2,
  /* node-course_group-field_deputy_course_director */   ),
  /* node-course_group-field_deputy_course_director */ );

  // Translatables
  // Included for use with string extractors like potx.
  t('Alumni Specialist');
  t('Associated Media');
  t('Choosing yes will display Tabs and Recommended Links to non-members.');
  t('Course Director');
  t('Course Support Staff');
  t('Day');
  t('Deputy Course Director');
  t('Description');
  t('Display All Fields?');
  t('Event Coordinator');
  t('Faculty');
  t('Files must not exceed 500 MB. Allowed file types: avi csx doc docx gif gif gz jpeg jpg m4a m4v mov mp3 mp4 mpeg mpg mpv notebook odp ods odt oga ogg ogv pdf png pps ppsx ppt pptx pub tar txt weba webm webp wmv xls xlsx zip.');
  t('PLEASE NOTE: Session presenters are limited to course participants.  Individuals must already be members of the course before they can be assigned the role of presenter.');
  t('Seminar Leader');
  t('Session');
  t('Session Presenter');
  t('Title');
  t('Unit');
  t('Weight');

  return $field_instances;
}
