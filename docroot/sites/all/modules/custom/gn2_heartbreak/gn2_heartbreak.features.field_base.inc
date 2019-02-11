<?php
/**
 * @file
 * gn2_heartbreak.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function gn2_heartbreak_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_anything_else'.
  $field_bases['field_anything_else'] = array(
  /* field_anything_else */   'active' => 1,
  /* field_anything_else */   'cardinality' => 1,
  /* field_anything_else */   'deleted' => 0,
  /* field_anything_else */   'entity_types' => array(),
  /* field_anything_else */   'field_name' => 'field_anything_else',
  /* field_anything_else */   'indexes' => array(
  /* field_anything_else */     'format' => array(
  /* field_anything_else */       0 => 'format',
  /* field_anything_else */     ),
  /* field_anything_else */   ),
  /* field_anything_else */   'locked' => 0,
  /* field_anything_else */   'module' => 'text',
  /* field_anything_else */   'settings' => array(),
  /* field_anything_else */   'translatable' => 0,
  /* field_anything_else */   'type' => 'text_long',
  /* field_anything_else */ );

  // Exported field_base: 'field_date2'.
  $field_bases['field_date2'] = array(
  /* field_date2 */   'active' => 1,
  /* field_date2 */   'cardinality' => 1,
  /* field_date2 */   'deleted' => 0,
  /* field_date2 */   'entity_types' => array(),
  /* field_date2 */   'field_name' => 'field_date2',
  /* field_date2 */   'indexes' => array(),
  /* field_date2 */   'locked' => 0,
  /* field_date2 */   'module' => 'date',
  /* field_date2 */   'settings' => array(
  /* field_date2 */     'cache_count' => 4,
  /* field_date2 */     'cache_enabled' => 0,
  /* field_date2 */     'granularity' => array(
  /* field_date2 */       'day' => 'day',
  /* field_date2 */       'hour' => 0,
  /* field_date2 */       'minute' => 0,
  /* field_date2 */       'month' => 'month',
  /* field_date2 */       'second' => 0,
  /* field_date2 */       'year' => 'year',
  /* field_date2 */     ),
  /* field_date2 */     'repeat' => 0,
  /* field_date2 */     'timezone_db' => '',
  /* field_date2 */     'todate' => '',
  /* field_date2 */     'tz_handling' => 'none',
  /* field_date2 */   ),
  /* field_date2 */   'translatable' => 0,
  /* field_date2 */   'type' => 'date',
  /* field_date2 */ );

  // Exported field_base: 'field_day_number'.
  $field_bases['field_day_number'] = array(
  /* field_day_number */   'active' => 1,
  /* field_day_number */   'cardinality' => 1,
  /* field_day_number */   'deleted' => 0,
  /* field_day_number */   'entity_types' => array(),
  /* field_day_number */   'field_name' => 'field_day_number',
  /* field_day_number */   'indexes' => array(
  /* field_day_number */     'value' => array(
  /* field_day_number */       0 => 'value',
  /* field_day_number */     ),
  /* field_day_number */   ),
  /* field_day_number */   'locked' => 0,
  /* field_day_number */   'module' => 'list',
  /* field_day_number */   'settings' => array(
  /* field_day_number */     'allowed_values' => array(
  /* field_day_number */       1 => 1,
  /* field_day_number */       2 => 2,
  /* field_day_number */       3 => 3,
  /* field_day_number */       4 => 4,
  /* field_day_number */       5 => 5,
  /* field_day_number */       6 => 6,
  /* field_day_number */       7 => 7,
  /* field_day_number */       8 => 8,
  /* field_day_number */       9 => 9,
  /* field_day_number */       10 => 10,
  /* field_day_number */       11 => 11,
  /* field_day_number */       12 => 12,
  /* field_day_number */       13 => 13,
  /* field_day_number */       14 => 14,
  /* field_day_number */       15 => 15,
  /* field_day_number */       16 => 16,
  /* field_day_number */       17 => 17,
  /* field_day_number */       18 => 18,
  /* field_day_number */       19 => 19,
  /* field_day_number */       20 => 20,
  /* field_day_number */     ),
  /* field_day_number */     'allowed_values_function' => '',
  /* field_day_number */   ),
  /* field_day_number */   'translatable' => 0,
  /* field_day_number */   'type' => 'list_integer',
  /* field_day_number */ );

  // Exported field_base: 'field_weight'.
  $field_bases['field_weight'] = array(
  /* field_weight */   'active' => 1,
  /* field_weight */   'cardinality' => 1,
  /* field_weight */   'deleted' => 0,
  /* field_weight */   'entity_types' => array(),
  /* field_weight */   'field_name' => 'field_weight',
  /* field_weight */   'indexes' => array(),
  /* field_weight */   'locked' => 0,
  /* field_weight */   'module' => 'number',
  /* field_weight */   'settings' => array(),
  /* field_weight */   'translatable' => 0,
  /* field_weight */   'type' => 'number_integer',
  /* field_weight */ );

  // Exported field_base: 'field_which_course'.
  $field_bases['field_which_course'] = array(
  /* field_which_course */   'active' => 1,
  /* field_which_course */   'cardinality' => 1,
  /* field_which_course */   'deleted' => 0,
  /* field_which_course */   'entity_types' => array(),
  /* field_which_course */   'field_name' => 'field_which_course',
  /* field_which_course */   'indexes' => array(
  /* field_which_course */     'format' => array(
  /* field_which_course */       0 => 'format',
  /* field_which_course */     ),
  /* field_which_course */   ),
  /* field_which_course */   'locked' => 0,
  /* field_which_course */   'module' => 'text',
  /* field_which_course */   'settings' => array(
  /* field_which_course */     'max_length' => 255,
  /* field_which_course */   ),
  /* field_which_course */   'translatable' => 0,
  /* field_which_course */   'type' => 'text',
  /* field_which_course */ );

  // Exported field_base: 'field_which_course_did_you'.
  $field_bases['field_which_course_did_you'] = array(
  /* field_which_course_did_you */   'active' => 1,
  /* field_which_course_did_you */   'cardinality' => 1,
  /* field_which_course_did_you */   'deleted' => 0,
  /* field_which_course_did_you */   'entity_types' => array(),
  /* field_which_course_did_you */   'field_name' => 'field_which_course_did_you',
  /* field_which_course_did_you */   'indexes' => array(
  /* field_which_course_did_you */     'format' => array(
  /* field_which_course_did_you */       0 => 'format',
  /* field_which_course_did_you */     ),
  /* field_which_course_did_you */   ),
  /* field_which_course_did_you */   'locked' => 0,
  /* field_which_course_did_you */   'module' => 'text',
  /* field_which_course_did_you */   'settings' => array(
  /* field_which_course_did_you */     'max_length' => 255,
  /* field_which_course_did_you */   ),
  /* field_which_course_did_you */   'translatable' => 0,
  /* field_which_course_did_you */   'type' => 'text',
  /* field_which_course_did_you */ );

  // Exported field_base: 'field_which_course_teach'.
  $field_bases['field_which_course_teach'] = array(
  /* field_which_course_teach */   'active' => 1,
  /* field_which_course_teach */   'cardinality' => 1,
  /* field_which_course_teach */   'deleted' => 0,
  /* field_which_course_teach */   'entity_types' => array(),
  /* field_which_course_teach */   'field_name' => 'field_which_course_teach',
  /* field_which_course_teach */   'indexes' => array(
  /* field_which_course_teach */     'format' => array(
  /* field_which_course_teach */       0 => 'format',
  /* field_which_course_teach */     ),
  /* field_which_course_teach */   ),
  /* field_which_course_teach */   'locked' => 0,
  /* field_which_course_teach */   'module' => 'text',
  /* field_which_course_teach */   'settings' => array(
  /* field_which_course_teach */     'max_length' => 255,
  /* field_which_course_teach */   ),
  /* field_which_course_teach */   'translatable' => 0,
  /* field_which_course_teach */   'type' => 'text',
  /* field_which_course_teach */ );

  // Exported field_base: 'field_which_event_attend'.
  $field_bases['field_which_event_attend'] = array(
  /* field_which_event_attend */   'active' => 1,
  /* field_which_event_attend */   'cardinality' => 1,
  /* field_which_event_attend */   'deleted' => 0,
  /* field_which_event_attend */   'entity_types' => array(),
  /* field_which_event_attend */   'field_name' => 'field_which_event_attend',
  /* field_which_event_attend */   'indexes' => array(
  /* field_which_event_attend */     'format' => array(
  /* field_which_event_attend */       0 => 'format',
  /* field_which_event_attend */     ),
  /* field_which_event_attend */   ),
  /* field_which_event_attend */   'locked' => 0,
  /* field_which_event_attend */   'module' => 'text',
  /* field_which_event_attend */   'settings' => array(
  /* field_which_event_attend */     'max_length' => 255,
  /* field_which_event_attend */   ),
  /* field_which_event_attend */   'translatable' => 0,
  /* field_which_event_attend */   'type' => 'text',
  /* field_which_event_attend */ );

  // Exported field_base: 'field_who_teaches'.
  $field_bases['field_who_teaches'] = array(
  /* field_who_teaches */   'active' => 1,
  /* field_who_teaches */   'cardinality' => 1,
  /* field_who_teaches */   'deleted' => 0,
  /* field_who_teaches */   'entity_types' => array(),
  /* field_who_teaches */   'field_name' => 'field_who_teaches',
  /* field_who_teaches */   'indexes' => array(
  /* field_who_teaches */     'format' => array(
  /* field_who_teaches */       0 => 'format',
  /* field_who_teaches */     ),
  /* field_who_teaches */   ),
  /* field_who_teaches */   'locked' => 0,
  /* field_who_teaches */   'module' => 'text',
  /* field_who_teaches */   'settings' => array(
  /* field_who_teaches */     'max_length' => 255,
  /* field_who_teaches */   ),
  /* field_who_teaches */   'translatable' => 0,
  /* field_who_teaches */   'type' => 'text',
  /* field_who_teaches */ );

  // Exported field_base: 'field_why_do_you_want'.
  $field_bases['field_why_do_you_want'] = array(
  /* field_why_do_you_want */   'active' => 1,
  /* field_why_do_you_want */   'cardinality' => 1,
  /* field_why_do_you_want */   'deleted' => 0,
  /* field_why_do_you_want */   'entity_types' => array(),
  /* field_why_do_you_want */   'field_name' => 'field_why_do_you_want',
  /* field_why_do_you_want */   'indexes' => array(
  /* field_why_do_you_want */     'value' => array(
  /* field_why_do_you_want */       0 => 'value',
  /* field_why_do_you_want */     ),
  /* field_why_do_you_want */   ),
  /* field_why_do_you_want */   'locked' => 0,
  /* field_why_do_you_want */   'module' => 'list',
  /* field_why_do_you_want */   'settings' => array(
  /* field_why_do_you_want */     'allowed_values' => array(
  /* field_why_do_you_want */       1 => 'To attend a course',
  /* field_why_do_you_want */       2 => 'To teach a course, seminar or workshop',
  /* field_why_do_you_want */       3 => 'To attend an event',
  /* field_why_do_you_want */       4 => 'I attended a course in the past',
  /* field_why_do_you_want */       5 => 'Other',
  /* field_why_do_you_want */     ),
  /* field_why_do_you_want */     'allowed_values_function' => '',
  /* field_why_do_you_want */   ),
  /* field_why_do_you_want */   'translatable' => 0,
  /* field_why_do_you_want */   'type' => 'list_integer',
  /* field_why_do_you_want */ );

  // Exported field_base: 'media_gallery_allow_download'.
  $field_bases['media_gallery_allow_download'] = array(
  /* media_gallery_allow_download */   'active' => 1,
  /* media_gallery_allow_download */   'cardinality' => 1,
  /* media_gallery_allow_download */   'deleted' => 0,
  /* media_gallery_allow_download */   'entity_types' => array(),
  /* media_gallery_allow_download */   'field_name' => 'media_gallery_allow_download',
  /* media_gallery_allow_download */   'indexes' => array(
  /* media_gallery_allow_download */     'value' => array(
  /* media_gallery_allow_download */       0 => 'value',
  /* media_gallery_allow_download */     ),
  /* media_gallery_allow_download */   ),
  /* media_gallery_allow_download */   'locked' => 1,
  /* media_gallery_allow_download */   'module' => 'list',
  /* media_gallery_allow_download */   'settings' => array(
  /* media_gallery_allow_download */     'allowed_values' => array(),
  /* media_gallery_allow_download */     'allowed_values_function' => '_media_gallery_get_allow_download_values',
  /* media_gallery_allow_download */   ),
  /* media_gallery_allow_download */   'translatable' => 0,
  /* media_gallery_allow_download */   'type' => 'list_boolean',
  /* media_gallery_allow_download */ );

  // Exported field_base: 'media_gallery_block_columns'.
  $field_bases['media_gallery_block_columns'] = array(
  /* media_gallery_block_columns */   'active' => 1,
  /* media_gallery_block_columns */   'cardinality' => 1,
  /* media_gallery_block_columns */   'deleted' => 0,
  /* media_gallery_block_columns */   'entity_types' => array(),
  /* media_gallery_block_columns */   'field_name' => 'media_gallery_block_columns',
  /* media_gallery_block_columns */   'indexes' => array(
  /* media_gallery_block_columns */     'value' => array(
  /* media_gallery_block_columns */       0 => 'value',
  /* media_gallery_block_columns */     ),
  /* media_gallery_block_columns */   ),
  /* media_gallery_block_columns */   'locked' => 1,
  /* media_gallery_block_columns */   'module' => 'list',
  /* media_gallery_block_columns */   'settings' => array(
  /* media_gallery_block_columns */     'allowed_values' => array(),
  /* media_gallery_block_columns */     'allowed_values_function' => '_media_gallery_get_block_columns_values',
  /* media_gallery_block_columns */   ),
  /* media_gallery_block_columns */   'translatable' => 0,
  /* media_gallery_block_columns */   'type' => 'list_float',
  /* media_gallery_block_columns */ );

  // Exported field_base: 'media_gallery_block_rows'.
  $field_bases['media_gallery_block_rows'] = array(
  /* media_gallery_block_rows */   'active' => 1,
  /* media_gallery_block_rows */   'cardinality' => 1,
  /* media_gallery_block_rows */   'deleted' => 0,
  /* media_gallery_block_rows */   'entity_types' => array(),
  /* media_gallery_block_rows */   'field_name' => 'media_gallery_block_rows',
  /* media_gallery_block_rows */   'indexes' => array(),
  /* media_gallery_block_rows */   'locked' => 1,
  /* media_gallery_block_rows */   'module' => 'number',
  /* media_gallery_block_rows */   'settings' => array(),
  /* media_gallery_block_rows */   'translatable' => 0,
  /* media_gallery_block_rows */   'type' => 'number_integer',
  /* media_gallery_block_rows */ );

  // Exported field_base: 'media_gallery_collection'.
  $field_bases['media_gallery_collection'] = array(
  /* media_gallery_collection */   'active' => 1,
  /* media_gallery_collection */   'cardinality' => 1,
  /* media_gallery_collection */   'deleted' => 0,
  /* media_gallery_collection */   'entity_types' => array(),
  /* media_gallery_collection */   'field_name' => 'media_gallery_collection',
  /* media_gallery_collection */   'indexes' => array(
  /* media_gallery_collection */     'tid' => array(
  /* media_gallery_collection */       0 => 'tid',
  /* media_gallery_collection */     ),
  /* media_gallery_collection */   ),
  /* media_gallery_collection */   'locked' => 0,
  /* media_gallery_collection */   'module' => 'taxonomy',
  /* media_gallery_collection */   'settings' => array(
  /* media_gallery_collection */     'allowed_values' => array(
  /* media_gallery_collection */       0 => array(
  /* media_gallery_collection */         'vocabulary' => 'gallery_collections',
  /* media_gallery_collection */         'parent' => 0,
  /* media_gallery_collection */       ),
  /* media_gallery_collection */     ),
  /* media_gallery_collection */     'options_list_callback' => NULL,
  /* media_gallery_collection */   ),
  /* media_gallery_collection */   'translatable' => 0,
  /* media_gallery_collection */   'type' => 'taxonomy_term_reference',
  /* media_gallery_collection */ );

  // Exported field_base: 'media_gallery_columns'.
  $field_bases['media_gallery_columns'] = array(
  /* media_gallery_columns */   'active' => 1,
  /* media_gallery_columns */   'cardinality' => 1,
  /* media_gallery_columns */   'deleted' => 0,
  /* media_gallery_columns */   'entity_types' => array(),
  /* media_gallery_columns */   'field_name' => 'media_gallery_columns',
  /* media_gallery_columns */   'indexes' => array(
  /* media_gallery_columns */     'value' => array(
  /* media_gallery_columns */       0 => 'value',
  /* media_gallery_columns */     ),
  /* media_gallery_columns */   ),
  /* media_gallery_columns */   'locked' => 1,
  /* media_gallery_columns */   'module' => 'list',
  /* media_gallery_columns */   'settings' => array(
  /* media_gallery_columns */     'allowed_values' => array(),
  /* media_gallery_columns */     'allowed_values_function' => '_media_gallery_get_columns_values',
  /* media_gallery_columns */   ),
  /* media_gallery_columns */   'translatable' => 0,
  /* media_gallery_columns */   'type' => 'list_float',
  /* media_gallery_columns */ );

  // Exported field_base: 'media_gallery_description'.
  $field_bases['media_gallery_description'] = array(
  /* media_gallery_description */   'active' => 1,
  /* media_gallery_description */   'cardinality' => 1,
  /* media_gallery_description */   'deleted' => 0,
  /* media_gallery_description */   'entity_types' => array(),
  /* media_gallery_description */   'field_name' => 'media_gallery_description',
  /* media_gallery_description */   'indexes' => array(
  /* media_gallery_description */     'format' => array(
  /* media_gallery_description */       0 => 'format',
  /* media_gallery_description */     ),
  /* media_gallery_description */   ),
  /* media_gallery_description */   'locked' => 1,
  /* media_gallery_description */   'module' => 'text',
  /* media_gallery_description */   'settings' => array(),
  /* media_gallery_description */   'translatable' => 0,
  /* media_gallery_description */   'type' => 'text_long',
  /* media_gallery_description */ );

  // Exported field_base: 'media_gallery_expose_block'.
  $field_bases['media_gallery_expose_block'] = array(
  /* media_gallery_expose_block */   'active' => 1,
  /* media_gallery_expose_block */   'cardinality' => 1,
  /* media_gallery_expose_block */   'deleted' => 0,
  /* media_gallery_expose_block */   'entity_types' => array(),
  /* media_gallery_expose_block */   'field_name' => 'media_gallery_expose_block',
  /* media_gallery_expose_block */   'indexes' => array(
  /* media_gallery_expose_block */     'value' => array(
  /* media_gallery_expose_block */       0 => 'value',
  /* media_gallery_expose_block */     ),
  /* media_gallery_expose_block */   ),
  /* media_gallery_expose_block */   'locked' => 1,
  /* media_gallery_expose_block */   'module' => 'list',
  /* media_gallery_expose_block */   'settings' => array(
  /* media_gallery_expose_block */     'allowed_values' => array(),
  /* media_gallery_expose_block */     'allowed_values_function' => '_media_gallery_get_expose_block_values',
  /* media_gallery_expose_block */   ),
  /* media_gallery_expose_block */   'translatable' => 0,
  /* media_gallery_expose_block */   'type' => 'list_boolean',
  /* media_gallery_expose_block */ );

  // Exported field_base: 'media_gallery_file'.
  $field_bases['media_gallery_file'] = array(
  /* media_gallery_file */   'active' => 1,
  /* media_gallery_file */   'cardinality' => -1,
  /* media_gallery_file */   'deleted' => 0,
  /* media_gallery_file */   'entity_types' => array(),
  /* media_gallery_file */   'field_name' => 'media_gallery_file',
  /* media_gallery_file */   'indexes' => array(
  /* media_gallery_file */     'fid' => array(
  /* media_gallery_file */       0 => 'fid',
  /* media_gallery_file */     ),
  /* media_gallery_file */   ),
  /* media_gallery_file */   'locked' => 0,
  /* media_gallery_file */   'module' => 'file',
  /* media_gallery_file */   'settings' => array(
  /* media_gallery_file */     'display_default' => 0,
  /* media_gallery_file */     'display_field' => 0,
  /* media_gallery_file */     'uri_scheme' => 'private',
  /* media_gallery_file */   ),
  /* media_gallery_file */   'translatable' => 0,
  /* media_gallery_file */   'type' => 'file',
  /* media_gallery_file */ );

  // Exported field_base: 'media_gallery_format'.
  $field_bases['media_gallery_format'] = array(
  /* media_gallery_format */   'active' => 1,
  /* media_gallery_format */   'cardinality' => 1,
  /* media_gallery_format */   'deleted' => 0,
  /* media_gallery_format */   'entity_types' => array(),
  /* media_gallery_format */   'field_name' => 'media_gallery_format',
  /* media_gallery_format */   'indexes' => array(
  /* media_gallery_format */     'value' => array(
  /* media_gallery_format */       0 => 'value',
  /* media_gallery_format */     ),
  /* media_gallery_format */   ),
  /* media_gallery_format */   'locked' => 1,
  /* media_gallery_format */   'module' => 'list',
  /* media_gallery_format */   'settings' => array(
  /* media_gallery_format */     'allowed_values' => array(),
  /* media_gallery_format */     'allowed_values_function' => '_media_gallery_get_format_values',
  /* media_gallery_format */   ),
  /* media_gallery_format */   'translatable' => 0,
  /* media_gallery_format */   'type' => 'list_text',
  /* media_gallery_format */ );

  // Exported field_base: 'media_gallery_image_info_where'.
  $field_bases['media_gallery_image_info_where'] = array(
  /* media_gallery_image_info_where */   'active' => 1,
  /* media_gallery_image_info_where */   'cardinality' => 1,
  /* media_gallery_image_info_where */   'deleted' => 0,
  /* media_gallery_image_info_where */   'entity_types' => array(),
  /* media_gallery_image_info_where */   'field_name' => 'media_gallery_image_info_where',
  /* media_gallery_image_info_where */   'indexes' => array(
  /* media_gallery_image_info_where */     'value' => array(
  /* media_gallery_image_info_where */       0 => 'value',
  /* media_gallery_image_info_where */     ),
  /* media_gallery_image_info_where */   ),
  /* media_gallery_image_info_where */   'locked' => 1,
  /* media_gallery_image_info_where */   'module' => 'list',
  /* media_gallery_image_info_where */   'settings' => array(
  /* media_gallery_image_info_where */     'allowed_values' => array(),
  /* media_gallery_image_info_where */     'allowed_values_function' => '_media_gallery_get_image_info_placement_values',
  /* media_gallery_image_info_where */   ),
  /* media_gallery_image_info_where */   'translatable' => 0,
  /* media_gallery_image_info_where */   'type' => 'list_text',
  /* media_gallery_image_info_where */ );

  // Exported field_base: 'media_gallery_lightbox_extras'.
  $field_bases['media_gallery_lightbox_extras'] = array(
  /* media_gallery_lightbox_extras */   'active' => 1,
  /* media_gallery_lightbox_extras */   'cardinality' => 1,
  /* media_gallery_lightbox_extras */   'deleted' => 0,
  /* media_gallery_lightbox_extras */   'entity_types' => array(),
  /* media_gallery_lightbox_extras */   'field_name' => 'media_gallery_lightbox_extras',
  /* media_gallery_lightbox_extras */   'indexes' => array(
  /* media_gallery_lightbox_extras */     'value' => array(
  /* media_gallery_lightbox_extras */       0 => 'value',
  /* media_gallery_lightbox_extras */     ),
  /* media_gallery_lightbox_extras */   ),
  /* media_gallery_lightbox_extras */   'locked' => 1,
  /* media_gallery_lightbox_extras */   'module' => 'list',
  /* media_gallery_lightbox_extras */   'settings' => array(
  /* media_gallery_lightbox_extras */     'allowed_values' => array(),
  /* media_gallery_lightbox_extras */     'allowed_values_function' => '_media_gallery_get_lightbox_extras_values',
  /* media_gallery_lightbox_extras */   ),
  /* media_gallery_lightbox_extras */   'translatable' => 0,
  /* media_gallery_lightbox_extras */   'type' => 'list_boolean',
  /* media_gallery_lightbox_extras */ );

  // Exported field_base: 'media_gallery_rows'.
  $field_bases['media_gallery_rows'] = array(
  /* media_gallery_rows */   'active' => 1,
  /* media_gallery_rows */   'cardinality' => 1,
  /* media_gallery_rows */   'deleted' => 0,
  /* media_gallery_rows */   'entity_types' => array(),
  /* media_gallery_rows */   'field_name' => 'media_gallery_rows',
  /* media_gallery_rows */   'indexes' => array(),
  /* media_gallery_rows */   'locked' => 1,
  /* media_gallery_rows */   'module' => 'number',
  /* media_gallery_rows */   'settings' => array(),
  /* media_gallery_rows */   'translatable' => 0,
  /* media_gallery_rows */   'type' => 'number_integer',
  /* media_gallery_rows */ );

  return $field_bases;
}
