<?php
/**
 * @file
 * gn2_library.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function gn2_library_strongarm() {
  $export = array();

  /* comment_anonymous_resource_item */  /* comment_anonymous_resource_item */ $strongarm = new stdClass();
  /* comment_anonymous_resource_item */  /* comment_anonymous_resource_item */ $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  /* comment_anonymous_resource_item */  /* comment_anonymous_resource_item */ $strongarm->api_version = 1;
  /* comment_anonymous_resource_item */  /* comment_anonymous_resource_item */ $strongarm->name = 'comment_anonymous_resource_item';
  /* comment_anonymous_resource_item */  /* comment_anonymous_resource_item */ $strongarm->value = 0;
  $export['comment_anonymous_resource_item'] = $strongarm;

  /* comment_default_mode_resource_item */  /* comment_default_mode_resource_item */ $strongarm = new stdClass();
  /* comment_default_mode_resource_item */  /* comment_default_mode_resource_item */ $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  /* comment_default_mode_resource_item */  /* comment_default_mode_resource_item */ $strongarm->api_version = 1;
  /* comment_default_mode_resource_item */  /* comment_default_mode_resource_item */ $strongarm->name = 'comment_default_mode_resource_item';
  /* comment_default_mode_resource_item */  /* comment_default_mode_resource_item */ $strongarm->value = 0;
  $export['comment_default_mode_resource_item'] = $strongarm;

  /* comment_default_per_page_resource_item */  /* comment_default_per_page_resource_item */ $strongarm = new stdClass();
  /* comment_default_per_page_resource_item */  /* comment_default_per_page_resource_item */ $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  /* comment_default_per_page_resource_item */  /* comment_default_per_page_resource_item */ $strongarm->api_version = 1;
  /* comment_default_per_page_resource_item */  /* comment_default_per_page_resource_item */ $strongarm->name = 'comment_default_per_page_resource_item';
  /* comment_default_per_page_resource_item */  /* comment_default_per_page_resource_item */ $strongarm->value = '50';
  $export['comment_default_per_page_resource_item'] = $strongarm;

  /* comment_form_location_resource_item */  /* comment_form_location_resource_item */ $strongarm = new stdClass();
  /* comment_form_location_resource_item */  /* comment_form_location_resource_item */ $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  /* comment_form_location_resource_item */  /* comment_form_location_resource_item */ $strongarm->api_version = 1;
  /* comment_form_location_resource_item */  /* comment_form_location_resource_item */ $strongarm->name = 'comment_form_location_resource_item';
  /* comment_form_location_resource_item */  /* comment_form_location_resource_item */ $strongarm->value = 0;
  $export['comment_form_location_resource_item'] = $strongarm;

  /* comment_preview_resource_item */  /* comment_preview_resource_item */ $strongarm = new stdClass();
  /* comment_preview_resource_item */  /* comment_preview_resource_item */ $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  /* comment_preview_resource_item */  /* comment_preview_resource_item */ $strongarm->api_version = 1;
  /* comment_preview_resource_item */  /* comment_preview_resource_item */ $strongarm->name = 'comment_preview_resource_item';
  /* comment_preview_resource_item */  /* comment_preview_resource_item */ $strongarm->value = '0';
  $export['comment_preview_resource_item'] = $strongarm;

  /* comment_resource_item */  /* comment_resource_item */ $strongarm = new stdClass();
  /* comment_resource_item */  /* comment_resource_item */ $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  /* comment_resource_item */  /* comment_resource_item */ $strongarm->api_version = 1;
  /* comment_resource_item */  /* comment_resource_item */ $strongarm->name = 'comment_resource_item';
  /* comment_resource_item */  /* comment_resource_item */ $strongarm->value = '0';
  $export['comment_resource_item'] = $strongarm;

  /* comment_subject_field_resource_item */  /* comment_subject_field_resource_item */ $strongarm = new stdClass();
  /* comment_subject_field_resource_item */  /* comment_subject_field_resource_item */ $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  /* comment_subject_field_resource_item */  /* comment_subject_field_resource_item */ $strongarm->api_version = 1;
  /* comment_subject_field_resource_item */  /* comment_subject_field_resource_item */ $strongarm->name = 'comment_subject_field_resource_item';
  /* comment_subject_field_resource_item */  /* comment_subject_field_resource_item */ $strongarm->value = 0;
  $export['comment_subject_field_resource_item'] = $strongarm;

  /* field_bundle_settings_node__resource_item */  /* field_bundle_settings_node__resource_item */ $strongarm = new stdClass();
  /* field_bundle_settings_node__resource_item */  /* field_bundle_settings_node__resource_item */ $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  /* field_bundle_settings_node__resource_item */  /* field_bundle_settings_node__resource_item */ $strongarm->api_version = 1;
  /* field_bundle_settings_node__resource_item */  /* field_bundle_settings_node__resource_item */ $strongarm->name = 'field_bundle_settings_node__resource_item';
  /* field_bundle_settings_node__resource_item */  /* field_bundle_settings_node__resource_item */ $strongarm->value = array(
  /* field_bundle_settings_node__resource_item */  /* field_bundle_settings_node__resource_item */   'view_modes' => array(
  /* field_bundle_settings_node__resource_item */  /* field_bundle_settings_node__resource_item */     'teaser' => array(
  /* field_bundle_settings_node__resource_item */  /* field_bundle_settings_node__resource_item */       'custom_settings' => TRUE,
  /* field_bundle_settings_node__resource_item */  /* field_bundle_settings_node__resource_item */     ),
  /* field_bundle_settings_node__resource_item */  /* field_bundle_settings_node__resource_item */     'teaserthumb' => array(
  /* field_bundle_settings_node__resource_item */  /* field_bundle_settings_node__resource_item */       'custom_settings' => TRUE,
  /* field_bundle_settings_node__resource_item */  /* field_bundle_settings_node__resource_item */     ),
  /* field_bundle_settings_node__resource_item */  /* field_bundle_settings_node__resource_item */     'events_list' => array(
  /* field_bundle_settings_node__resource_item */  /* field_bundle_settings_node__resource_item */       'custom_settings' => TRUE,
  /* field_bundle_settings_node__resource_item */  /* field_bundle_settings_node__resource_item */     ),
  /* field_bundle_settings_node__resource_item */  /* field_bundle_settings_node__resource_item */     'one_column_teaser' => array(
  /* field_bundle_settings_node__resource_item */  /* field_bundle_settings_node__resource_item */       'custom_settings' => TRUE,
  /* field_bundle_settings_node__resource_item */  /* field_bundle_settings_node__resource_item */     ),
  /* field_bundle_settings_node__resource_item */  /* field_bundle_settings_node__resource_item */     'title_and_time' => array(
  /* field_bundle_settings_node__resource_item */  /* field_bundle_settings_node__resource_item */       'custom_settings' => TRUE,
  /* field_bundle_settings_node__resource_item */  /* field_bundle_settings_node__resource_item */     ),
  /* field_bundle_settings_node__resource_item */  /* field_bundle_settings_node__resource_item */     'time_and_location' => array(
  /* field_bundle_settings_node__resource_item */  /* field_bundle_settings_node__resource_item */       'custom_settings' => TRUE,
  /* field_bundle_settings_node__resource_item */  /* field_bundle_settings_node__resource_item */     ),
  /* field_bundle_settings_node__resource_item */  /* field_bundle_settings_node__resource_item */     'sidebar_teaser_v2' => array(
  /* field_bundle_settings_node__resource_item */  /* field_bundle_settings_node__resource_item */       'custom_settings' => TRUE,
  /* field_bundle_settings_node__resource_item */  /* field_bundle_settings_node__resource_item */     ),
  /* field_bundle_settings_node__resource_item */  /* field_bundle_settings_node__resource_item */     'sidebar_' => array(
  /* field_bundle_settings_node__resource_item */  /* field_bundle_settings_node__resource_item */       'custom_settings' => TRUE,
  /* field_bundle_settings_node__resource_item */  /* field_bundle_settings_node__resource_item */     ),
  /* field_bundle_settings_node__resource_item */  /* field_bundle_settings_node__resource_item */     'search_teaser' => array(
  /* field_bundle_settings_node__resource_item */  /* field_bundle_settings_node__resource_item */       'custom_settings' => TRUE,
  /* field_bundle_settings_node__resource_item */  /* field_bundle_settings_node__resource_item */     ),
  /* field_bundle_settings_node__resource_item */  /* field_bundle_settings_node__resource_item */     'featured_publication' => array(
  /* field_bundle_settings_node__resource_item */  /* field_bundle_settings_node__resource_item */       'custom_settings' => TRUE,
  /* field_bundle_settings_node__resource_item */  /* field_bundle_settings_node__resource_item */     ),
  /* field_bundle_settings_node__resource_item */  /* field_bundle_settings_node__resource_item */     'post_teaser_group_landing_page' => array(
  /* field_bundle_settings_node__resource_item */  /* field_bundle_settings_node__resource_item */       'custom_settings' => TRUE,
  /* field_bundle_settings_node__resource_item */  /* field_bundle_settings_node__resource_item */     ),
  /* field_bundle_settings_node__resource_item */  /* field_bundle_settings_node__resource_item */     'group_teaser' => array(
  /* field_bundle_settings_node__resource_item */  /* field_bundle_settings_node__resource_item */       'custom_settings' => TRUE,
  /* field_bundle_settings_node__resource_item */  /* field_bundle_settings_node__resource_item */     ),
  /* field_bundle_settings_node__resource_item */  /* field_bundle_settings_node__resource_item */     'full' => array(
  /* field_bundle_settings_node__resource_item */  /* field_bundle_settings_node__resource_item */       'custom_settings' => FALSE,
  /* field_bundle_settings_node__resource_item */  /* field_bundle_settings_node__resource_item */     ),
  /* field_bundle_settings_node__resource_item */  /* field_bundle_settings_node__resource_item */     'rss' => array(
  /* field_bundle_settings_node__resource_item */  /* field_bundle_settings_node__resource_item */       'custom_settings' => FALSE,
  /* field_bundle_settings_node__resource_item */  /* field_bundle_settings_node__resource_item */     ),
  /* field_bundle_settings_node__resource_item */  /* field_bundle_settings_node__resource_item */     'diff_standard' => array(
  /* field_bundle_settings_node__resource_item */  /* field_bundle_settings_node__resource_item */       'custom_settings' => FALSE,
  /* field_bundle_settings_node__resource_item */  /* field_bundle_settings_node__resource_item */     ),
  /* field_bundle_settings_node__resource_item */  /* field_bundle_settings_node__resource_item */     'media_gallery_block' => array(
  /* field_bundle_settings_node__resource_item */  /* field_bundle_settings_node__resource_item */       'custom_settings' => FALSE,
  /* field_bundle_settings_node__resource_item */  /* field_bundle_settings_node__resource_item */     ),
  /* field_bundle_settings_node__resource_item */  /* field_bundle_settings_node__resource_item */     'token' => array(
  /* field_bundle_settings_node__resource_item */  /* field_bundle_settings_node__resource_item */       'custom_settings' => FALSE,
  /* field_bundle_settings_node__resource_item */  /* field_bundle_settings_node__resource_item */     ),
  /* field_bundle_settings_node__resource_item */  /* field_bundle_settings_node__resource_item */   ),
  /* field_bundle_settings_node__resource_item */  /* field_bundle_settings_node__resource_item */   'extra_fields' => array(
  /* field_bundle_settings_node__resource_item */  /* field_bundle_settings_node__resource_item */     'form' => array(
  /* field_bundle_settings_node__resource_item */  /* field_bundle_settings_node__resource_item */       'title' => array(
  /* field_bundle_settings_node__resource_item */  /* field_bundle_settings_node__resource_item */         'weight' => '0',
  /* field_bundle_settings_node__resource_item */  /* field_bundle_settings_node__resource_item */       ),
  /* field_bundle_settings_node__resource_item */  /* field_bundle_settings_node__resource_item */       'path' => array(
  /* field_bundle_settings_node__resource_item */  /* field_bundle_settings_node__resource_item */         'weight' => '2',
  /* field_bundle_settings_node__resource_item */  /* field_bundle_settings_node__resource_item */       ),
  /* field_bundle_settings_node__resource_item */  /* field_bundle_settings_node__resource_item */       'redirect' => array(
  /* field_bundle_settings_node__resource_item */  /* field_bundle_settings_node__resource_item */         'weight' => '3',
  /* field_bundle_settings_node__resource_item */  /* field_bundle_settings_node__resource_item */       ),
  /* field_bundle_settings_node__resource_item */  /* field_bundle_settings_node__resource_item */     ),
  /* field_bundle_settings_node__resource_item */  /* field_bundle_settings_node__resource_item */     'display' => array(),
  /* field_bundle_settings_node__resource_item */  /* field_bundle_settings_node__resource_item */   ),
  /* field_bundle_settings_node__resource_item */  /* field_bundle_settings_node__resource_item */ );
  $export['field_bundle_settings_node__resource_item'] = $strongarm;

  /* i18n_node_extended_resource_item */  /* i18n_node_extended_resource_item */ $strongarm = new stdClass();
  /* i18n_node_extended_resource_item */  /* i18n_node_extended_resource_item */ $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  /* i18n_node_extended_resource_item */  /* i18n_node_extended_resource_item */ $strongarm->api_version = 1;
  /* i18n_node_extended_resource_item */  /* i18n_node_extended_resource_item */ $strongarm->name = 'i18n_node_extended_resource_item';
  /* i18n_node_extended_resource_item */  /* i18n_node_extended_resource_item */ $strongarm->value = 1;
  $export['i18n_node_extended_resource_item'] = $strongarm;

  /* i18n_node_options_resource_item */  /* i18n_node_options_resource_item */ $strongarm = new stdClass();
  /* i18n_node_options_resource_item */  /* i18n_node_options_resource_item */ $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  /* i18n_node_options_resource_item */  /* i18n_node_options_resource_item */ $strongarm->api_version = 1;
  /* i18n_node_options_resource_item */  /* i18n_node_options_resource_item */ $strongarm->name = 'i18n_node_options_resource_item';
  /* i18n_node_options_resource_item */  /* i18n_node_options_resource_item */ $strongarm->value = array();
  $export['i18n_node_options_resource_item'] = $strongarm;

  /* i18n_sync_node_type_resource_item */  /* i18n_sync_node_type_resource_item */ $strongarm = new stdClass();
  /* i18n_sync_node_type_resource_item */  /* i18n_sync_node_type_resource_item */ $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  /* i18n_sync_node_type_resource_item */  /* i18n_sync_node_type_resource_item */ $strongarm->api_version = 1;
  /* i18n_sync_node_type_resource_item */  /* i18n_sync_node_type_resource_item */ $strongarm->name = 'i18n_sync_node_type_resource_item';
  /* i18n_sync_node_type_resource_item */  /* i18n_sync_node_type_resource_item */ $strongarm->value = array();
  $export['i18n_sync_node_type_resource_item'] = $strongarm;

  /* language_content_type_resource_item */  /* language_content_type_resource_item */ $strongarm = new stdClass();
  /* language_content_type_resource_item */  /* language_content_type_resource_item */ $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  /* language_content_type_resource_item */  /* language_content_type_resource_item */ $strongarm->api_version = 1;
  /* language_content_type_resource_item */  /* language_content_type_resource_item */ $strongarm->name = 'language_content_type_resource_item';
  /* language_content_type_resource_item */  /* language_content_type_resource_item */ $strongarm->value = '0';
  $export['language_content_type_resource_item'] = $strongarm;

  /* menu_options_resource_item */  /* menu_options_resource_item */ $strongarm = new stdClass();
  /* menu_options_resource_item */  /* menu_options_resource_item */ $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  /* menu_options_resource_item */  /* menu_options_resource_item */ $strongarm->api_version = 1;
  /* menu_options_resource_item */  /* menu_options_resource_item */ $strongarm->name = 'menu_options_resource_item';
  /* menu_options_resource_item */  /* menu_options_resource_item */ $strongarm->value = array(
  /* menu_options_resource_item */  /* menu_options_resource_item */   0 => 'main-menu',
  /* menu_options_resource_item */  /* menu_options_resource_item */ );
  $export['menu_options_resource_item'] = $strongarm;

  /* menu_parent_resource_item */  /* menu_parent_resource_item */ $strongarm = new stdClass();
  /* menu_parent_resource_item */  /* menu_parent_resource_item */ $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  /* menu_parent_resource_item */  /* menu_parent_resource_item */ $strongarm->api_version = 1;
  /* menu_parent_resource_item */  /* menu_parent_resource_item */ $strongarm->name = 'menu_parent_resource_item';
  /* menu_parent_resource_item */  /* menu_parent_resource_item */ $strongarm->value = 'main-menu:0';
  $export['menu_parent_resource_item'] = $strongarm;

  /* node_options_resource_item */  /* node_options_resource_item */ $strongarm = new stdClass();
  /* node_options_resource_item */  /* node_options_resource_item */ $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  /* node_options_resource_item */  /* node_options_resource_item */ $strongarm->api_version = 1;
  /* node_options_resource_item */  /* node_options_resource_item */ $strongarm->name = 'node_options_resource_item';
  /* node_options_resource_item */  /* node_options_resource_item */ $strongarm->value = array(
  /* node_options_resource_item */  /* node_options_resource_item */   0 => 'status',
  /* node_options_resource_item */  /* node_options_resource_item */ );
  $export['node_options_resource_item'] = $strongarm;

  /* node_preview_resource_item */  /* node_preview_resource_item */ $strongarm = new stdClass();
  /* node_preview_resource_item */  /* node_preview_resource_item */ $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  /* node_preview_resource_item */  /* node_preview_resource_item */ $strongarm->api_version = 1;
  /* node_preview_resource_item */  /* node_preview_resource_item */ $strongarm->name = 'node_preview_resource_item';
  /* node_preview_resource_item */  /* node_preview_resource_item */ $strongarm->value = '1';
  $export['node_preview_resource_item'] = $strongarm;

  /* node_submitted_resource_item */  /* node_submitted_resource_item */ $strongarm = new stdClass();
  /* node_submitted_resource_item */  /* node_submitted_resource_item */ $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  /* node_submitted_resource_item */  /* node_submitted_resource_item */ $strongarm->api_version = 1;
  /* node_submitted_resource_item */  /* node_submitted_resource_item */ $strongarm->name = 'node_submitted_resource_item';
  /* node_submitted_resource_item */  /* node_submitted_resource_item */ $strongarm->value = 0;
  $export['node_submitted_resource_item'] = $strongarm;

  return $export;
}
