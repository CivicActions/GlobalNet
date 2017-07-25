<?php
/**
 * @file
 * gn2_base_config.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function gn2_base_config_strongarm() {
  $export = array();

  /* comment_anonymous_course_group */  /* comment_anonymous_course_group */ $strongarm = new stdClass();
  /* comment_anonymous_course_group */  /* comment_anonymous_course_group */ $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  /* comment_anonymous_course_group */  /* comment_anonymous_course_group */ $strongarm->api_version = 1;
  /* comment_anonymous_course_group */  /* comment_anonymous_course_group */ $strongarm->name = 'comment_anonymous_course_group';
  /* comment_anonymous_course_group */  /* comment_anonymous_course_group */ $strongarm->value = 0;
  $export['comment_anonymous_course_group'] = $strongarm;

  /* comment_course_group */  /* comment_course_group */ $strongarm = new stdClass();
  /* comment_course_group */  /* comment_course_group */ $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  /* comment_course_group */  /* comment_course_group */ $strongarm->api_version = 1;
  /* comment_course_group */  /* comment_course_group */ $strongarm->name = 'comment_course_group';
  /* comment_course_group */  /* comment_course_group */ $strongarm->value = '0';
  $export['comment_course_group'] = $strongarm;

  /* comment_default_mode_course_group */  /* comment_default_mode_course_group */ $strongarm = new stdClass();
  /* comment_default_mode_course_group */  /* comment_default_mode_course_group */ $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  /* comment_default_mode_course_group */  /* comment_default_mode_course_group */ $strongarm->api_version = 1;
  /* comment_default_mode_course_group */  /* comment_default_mode_course_group */ $strongarm->name = 'comment_default_mode_course_group';
  /* comment_default_mode_course_group */  /* comment_default_mode_course_group */ $strongarm->value = 1;
  $export['comment_default_mode_course_group'] = $strongarm;

  /* comment_default_per_page_course_group */  /* comment_default_per_page_course_group */ $strongarm = new stdClass();
  /* comment_default_per_page_course_group */  /* comment_default_per_page_course_group */ $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  /* comment_default_per_page_course_group */  /* comment_default_per_page_course_group */ $strongarm->api_version = 1;
  /* comment_default_per_page_course_group */  /* comment_default_per_page_course_group */ $strongarm->name = 'comment_default_per_page_course_group';
  /* comment_default_per_page_course_group */  /* comment_default_per_page_course_group */ $strongarm->value = '50';
  $export['comment_default_per_page_course_group'] = $strongarm;

  /* comment_form_location_course_group */  /* comment_form_location_course_group */ $strongarm = new stdClass();
  /* comment_form_location_course_group */  /* comment_form_location_course_group */ $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  /* comment_form_location_course_group */  /* comment_form_location_course_group */ $strongarm->api_version = 1;
  /* comment_form_location_course_group */  /* comment_form_location_course_group */ $strongarm->name = 'comment_form_location_course_group';
  /* comment_form_location_course_group */  /* comment_form_location_course_group */ $strongarm->value = 1;
  $export['comment_form_location_course_group'] = $strongarm;

  /* comment_preview_course_group */  /* comment_preview_course_group */ $strongarm = new stdClass();
  /* comment_preview_course_group */  /* comment_preview_course_group */ $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  /* comment_preview_course_group */  /* comment_preview_course_group */ $strongarm->api_version = 1;
  /* comment_preview_course_group */  /* comment_preview_course_group */ $strongarm->name = 'comment_preview_course_group';
  /* comment_preview_course_group */  /* comment_preview_course_group */ $strongarm->value = '0';
  $export['comment_preview_course_group'] = $strongarm;

  /* comment_subject_field_course_group */  /* comment_subject_field_course_group */ $strongarm = new stdClass();
  /* comment_subject_field_course_group */  /* comment_subject_field_course_group */ $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  /* comment_subject_field_course_group */  /* comment_subject_field_course_group */ $strongarm->api_version = 1;
  /* comment_subject_field_course_group */  /* comment_subject_field_course_group */ $strongarm->name = 'comment_subject_field_course_group';
  /* comment_subject_field_course_group */  /* comment_subject_field_course_group */ $strongarm->value = 1;
  $export['comment_subject_field_course_group'] = $strongarm;

  /* field_bundle_settings_node__course_group */  /* field_bundle_settings_node__course_group */ $strongarm = new stdClass();
  /* field_bundle_settings_node__course_group */  /* field_bundle_settings_node__course_group */ $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  /* field_bundle_settings_node__course_group */  /* field_bundle_settings_node__course_group */ $strongarm->api_version = 1;
  /* field_bundle_settings_node__course_group */  /* field_bundle_settings_node__course_group */ $strongarm->name = 'field_bundle_settings_node__course_group';
  /* field_bundle_settings_node__course_group */  /* field_bundle_settings_node__course_group */ $strongarm->value = array(
  /* field_bundle_settings_node__course_group */  /* field_bundle_settings_node__course_group */   'view_modes' => array(
  /* field_bundle_settings_node__course_group */  /* field_bundle_settings_node__course_group */     'featured_publication' => array(
  /* field_bundle_settings_node__course_group */  /* field_bundle_settings_node__course_group */       'custom_settings' => FALSE,
  /* field_bundle_settings_node__course_group */  /* field_bundle_settings_node__course_group */     ),
  /* field_bundle_settings_node__course_group */  /* field_bundle_settings_node__course_group */     'post_teaser_group_landing_page' => array(
  /* field_bundle_settings_node__course_group */  /* field_bundle_settings_node__course_group */       'custom_settings' => TRUE,
  /* field_bundle_settings_node__course_group */  /* field_bundle_settings_node__course_group */     ),
  /* field_bundle_settings_node__course_group */  /* field_bundle_settings_node__course_group */     'recursive_subgroups' => array(
  /* field_bundle_settings_node__course_group */  /* field_bundle_settings_node__course_group */       'custom_settings' => TRUE,
  /* field_bundle_settings_node__course_group */  /* field_bundle_settings_node__course_group */     ),
  /* field_bundle_settings_node__course_group */  /* field_bundle_settings_node__course_group */     'group_teaser' => array(
  /* field_bundle_settings_node__course_group */  /* field_bundle_settings_node__course_group */       'custom_settings' => TRUE,
  /* field_bundle_settings_node__course_group */  /* field_bundle_settings_node__course_group */     ),
  /* field_bundle_settings_node__course_group */  /* field_bundle_settings_node__course_group */   ),
  /* field_bundle_settings_node__course_group */  /* field_bundle_settings_node__course_group */   'extra_fields' => array(
  /* field_bundle_settings_node__course_group */  /* field_bundle_settings_node__course_group */     'form' => array(
  /* field_bundle_settings_node__course_group */  /* field_bundle_settings_node__course_group */       'language' => array(
  /* field_bundle_settings_node__course_group */  /* field_bundle_settings_node__course_group */         'weight' => '6',
  /* field_bundle_settings_node__course_group */  /* field_bundle_settings_node__course_group */       ),
  /* field_bundle_settings_node__course_group */  /* field_bundle_settings_node__course_group */       'title' => array(
  /* field_bundle_settings_node__course_group */  /* field_bundle_settings_node__course_group */         'weight' => '1',
  /* field_bundle_settings_node__course_group */  /* field_bundle_settings_node__course_group */       ),
  /* field_bundle_settings_node__course_group */  /* field_bundle_settings_node__course_group */       'og_menu' => array(
  /* field_bundle_settings_node__course_group */  /* field_bundle_settings_node__course_group */         'weight' => '6',
  /* field_bundle_settings_node__course_group */  /* field_bundle_settings_node__course_group */       ),
  /* field_bundle_settings_node__course_group */  /* field_bundle_settings_node__course_group */       'path' => array(
  /* field_bundle_settings_node__course_group */  /* field_bundle_settings_node__course_group */         'weight' => '8',
  /* field_bundle_settings_node__course_group */  /* field_bundle_settings_node__course_group */       ),
  /* field_bundle_settings_node__course_group */  /* field_bundle_settings_node__course_group */       'redirect' => array(
  /* field_bundle_settings_node__course_group */  /* field_bundle_settings_node__course_group */         'weight' => '9',
  /* field_bundle_settings_node__course_group */  /* field_bundle_settings_node__course_group */       ),
  /* field_bundle_settings_node__course_group */  /* field_bundle_settings_node__course_group */     ),
  /* field_bundle_settings_node__course_group */  /* field_bundle_settings_node__course_group */     'display' => array(),
  /* field_bundle_settings_node__course_group */  /* field_bundle_settings_node__course_group */   ),
  /* field_bundle_settings_node__course_group */  /* field_bundle_settings_node__course_group */ );
  $export['field_bundle_settings_node__course_group'] = $strongarm;

  /* i18n_node_extended_alumni_group */  /* i18n_node_extended_alumni_group */ $strongarm = new stdClass();
  /* i18n_node_extended_alumni_group */  /* i18n_node_extended_alumni_group */ $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  /* i18n_node_extended_alumni_group */  /* i18n_node_extended_alumni_group */ $strongarm->api_version = 1;
  /* i18n_node_extended_alumni_group */  /* i18n_node_extended_alumni_group */ $strongarm->name = 'i18n_node_extended_alumni_group';
  /* i18n_node_extended_alumni_group */  /* i18n_node_extended_alumni_group */ $strongarm->value = '1';
  $export['i18n_node_extended_alumni_group'] = $strongarm;

  /* i18n_node_extended_announcement */  /* i18n_node_extended_announcement */ $strongarm = new stdClass();
  /* i18n_node_extended_announcement */  /* i18n_node_extended_announcement */ $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  /* i18n_node_extended_announcement */  /* i18n_node_extended_announcement */ $strongarm->api_version = 1;
  /* i18n_node_extended_announcement */  /* i18n_node_extended_announcement */ $strongarm->name = 'i18n_node_extended_announcement';
  /* i18n_node_extended_announcement */  /* i18n_node_extended_announcement */ $strongarm->value = '1';
  $export['i18n_node_extended_announcement'] = $strongarm;

  /* i18n_node_extended_event */  /* i18n_node_extended_event */ $strongarm = new stdClass();
  /* i18n_node_extended_event */  /* i18n_node_extended_event */ $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  /* i18n_node_extended_event */  /* i18n_node_extended_event */ $strongarm->api_version = 1;
  /* i18n_node_extended_event */  /* i18n_node_extended_event */ $strongarm->name = 'i18n_node_extended_event';
  /* i18n_node_extended_event */  /* i18n_node_extended_event */ $strongarm->value = '1';
  $export['i18n_node_extended_event'] = $strongarm;

  /* i18n_node_extended_news */  /* i18n_node_extended_news */ $strongarm = new stdClass();
  /* i18n_node_extended_news */  /* i18n_node_extended_news */ $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  /* i18n_node_extended_news */  /* i18n_node_extended_news */ $strongarm->api_version = 1;
  /* i18n_node_extended_news */  /* i18n_node_extended_news */ $strongarm->name = 'i18n_node_extended_news';
  /* i18n_node_extended_news */  /* i18n_node_extended_news */ $strongarm->value = '1';
  $export['i18n_node_extended_news'] = $strongarm;

  /* i18n_node_extended_organization */  /* i18n_node_extended_organization */ $strongarm = new stdClass();
  /* i18n_node_extended_organization */  /* i18n_node_extended_organization */ $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  /* i18n_node_extended_organization */  /* i18n_node_extended_organization */ $strongarm->api_version = 1;
  /* i18n_node_extended_organization */  /* i18n_node_extended_organization */ $strongarm->name = 'i18n_node_extended_organization';
  /* i18n_node_extended_organization */  /* i18n_node_extended_organization */ $strongarm->value = '4';
  $export['i18n_node_extended_organization'] = $strongarm;

  /* i18n_node_extended_page */  /* i18n_node_extended_page */ $strongarm = new stdClass();
  /* i18n_node_extended_page */  /* i18n_node_extended_page */ $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  /* i18n_node_extended_page */  /* i18n_node_extended_page */ $strongarm->api_version = 1;
  /* i18n_node_extended_page */  /* i18n_node_extended_page */ $strongarm->name = 'i18n_node_extended_page';
  /* i18n_node_extended_page */  /* i18n_node_extended_page */ $strongarm->value = '1';
  $export['i18n_node_extended_page'] = $strongarm;

  /* i18n_node_options_alumni_group */  /* i18n_node_options_alumni_group */ $strongarm = new stdClass();
  /* i18n_node_options_alumni_group */  /* i18n_node_options_alumni_group */ $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  /* i18n_node_options_alumni_group */  /* i18n_node_options_alumni_group */ $strongarm->api_version = 1;
  /* i18n_node_options_alumni_group */  /* i18n_node_options_alumni_group */ $strongarm->name = 'i18n_node_options_alumni_group';
  /* i18n_node_options_alumni_group */  /* i18n_node_options_alumni_group */ $strongarm->value = array(
  /* i18n_node_options_alumni_group */  /* i18n_node_options_alumni_group */   0 => 'current',
  /* i18n_node_options_alumni_group */  /* i18n_node_options_alumni_group */ );
  $export['i18n_node_options_alumni_group'] = $strongarm;

  /* i18n_node_options_announcement */  /* i18n_node_options_announcement */ $strongarm = new stdClass();
  /* i18n_node_options_announcement */  /* i18n_node_options_announcement */ $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  /* i18n_node_options_announcement */  /* i18n_node_options_announcement */ $strongarm->api_version = 1;
  /* i18n_node_options_announcement */  /* i18n_node_options_announcement */ $strongarm->name = 'i18n_node_options_announcement';
  /* i18n_node_options_announcement */  /* i18n_node_options_announcement */ $strongarm->value = array(
  /* i18n_node_options_announcement */  /* i18n_node_options_announcement */   0 => 'current',
  /* i18n_node_options_announcement */  /* i18n_node_options_announcement */ );
  $export['i18n_node_options_announcement'] = $strongarm;

  /* i18n_node_options_event */  /* i18n_node_options_event */ $strongarm = new stdClass();
  /* i18n_node_options_event */  /* i18n_node_options_event */ $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  /* i18n_node_options_event */  /* i18n_node_options_event */ $strongarm->api_version = 1;
  /* i18n_node_options_event */  /* i18n_node_options_event */ $strongarm->name = 'i18n_node_options_event';
  /* i18n_node_options_event */  /* i18n_node_options_event */ $strongarm->value = array(
  /* i18n_node_options_event */  /* i18n_node_options_event */   0 => 'current',
  /* i18n_node_options_event */  /* i18n_node_options_event */ );
  $export['i18n_node_options_event'] = $strongarm;

  /* i18n_node_options_news */  /* i18n_node_options_news */ $strongarm = new stdClass();
  /* i18n_node_options_news */  /* i18n_node_options_news */ $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  /* i18n_node_options_news */  /* i18n_node_options_news */ $strongarm->api_version = 1;
  /* i18n_node_options_news */  /* i18n_node_options_news */ $strongarm->name = 'i18n_node_options_news';
  /* i18n_node_options_news */  /* i18n_node_options_news */ $strongarm->value = array(
  /* i18n_node_options_news */  /* i18n_node_options_news */   0 => 'current',
  /* i18n_node_options_news */  /* i18n_node_options_news */ );
  $export['i18n_node_options_news'] = $strongarm;

  /* i18n_node_options_organization */  /* i18n_node_options_organization */ $strongarm = new stdClass();
  /* i18n_node_options_organization */  /* i18n_node_options_organization */ $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  /* i18n_node_options_organization */  /* i18n_node_options_organization */ $strongarm->api_version = 1;
  /* i18n_node_options_organization */  /* i18n_node_options_organization */ $strongarm->name = 'i18n_node_options_organization';
  /* i18n_node_options_organization */  /* i18n_node_options_organization */ $strongarm->value = array(
  /* i18n_node_options_organization */  /* i18n_node_options_organization */   0 => 'current',
  /* i18n_node_options_organization */  /* i18n_node_options_organization */ );
  $export['i18n_node_options_organization'] = $strongarm;

  /* i18n_node_options_page */  /* i18n_node_options_page */ $strongarm = new stdClass();
  /* i18n_node_options_page */  /* i18n_node_options_page */ $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  /* i18n_node_options_page */  /* i18n_node_options_page */ $strongarm->api_version = 1;
  /* i18n_node_options_page */  /* i18n_node_options_page */ $strongarm->name = 'i18n_node_options_page';
  /* i18n_node_options_page */  /* i18n_node_options_page */ $strongarm->value = array(
  /* i18n_node_options_page */  /* i18n_node_options_page */   0 => 'current',
  /* i18n_node_options_page */  /* i18n_node_options_page */ );
  $export['i18n_node_options_page'] = $strongarm;

  /* i18n_sync_node_type_news */  /* i18n_sync_node_type_news */ $strongarm = new stdClass();
  /* i18n_sync_node_type_news */  /* i18n_sync_node_type_news */ $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  /* i18n_sync_node_type_news */  /* i18n_sync_node_type_news */ $strongarm->api_version = 1;
  /* i18n_sync_node_type_news */  /* i18n_sync_node_type_news */ $strongarm->name = 'i18n_sync_node_type_news';
  /* i18n_sync_node_type_news */  /* i18n_sync_node_type_news */ $strongarm->value = array();
  $export['i18n_sync_node_type_news'] = $strongarm;

  /* i18n_sync_node_type_post */  /* i18n_sync_node_type_post */ $strongarm = new stdClass();
  /* i18n_sync_node_type_post */  /* i18n_sync_node_type_post */ $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  /* i18n_sync_node_type_post */  /* i18n_sync_node_type_post */ $strongarm->api_version = 1;
  /* i18n_sync_node_type_post */  /* i18n_sync_node_type_post */ $strongarm->name = 'i18n_sync_node_type_post';
  /* i18n_sync_node_type_post */  /* i18n_sync_node_type_post */ $strongarm->value = array();
  $export['i18n_sync_node_type_post'] = $strongarm;

  /* language_content_type_course_group */  /* language_content_type_course_group */ $strongarm = new stdClass();
  /* language_content_type_course_group */  /* language_content_type_course_group */ $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  /* language_content_type_course_group */  /* language_content_type_course_group */ $strongarm->api_version = 1;
  /* language_content_type_course_group */  /* language_content_type_course_group */ $strongarm->name = 'language_content_type_course_group';
  /* language_content_type_course_group */  /* language_content_type_course_group */ $strongarm->value = '2';
  $export['language_content_type_course_group'] = $strongarm;

  /* language_content_type_user_profile_updates */  /* language_content_type_user_profile_updates */ $strongarm = new stdClass();
  /* language_content_type_user_profile_updates */  /* language_content_type_user_profile_updates */ $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  /* language_content_type_user_profile_updates */  /* language_content_type_user_profile_updates */ $strongarm->api_version = 1;
  /* language_content_type_user_profile_updates */  /* language_content_type_user_profile_updates */ $strongarm->name = 'language_content_type_user_profile_updates';
  /* language_content_type_user_profile_updates */  /* language_content_type_user_profile_updates */ $strongarm->value = '0';
  $export['language_content_type_user_profile_updates'] = $strongarm;

  /* menu_options_course_group */  /* menu_options_course_group */ $strongarm = new stdClass();
  /* menu_options_course_group */  /* menu_options_course_group */ $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  /* menu_options_course_group */  /* menu_options_course_group */ $strongarm->api_version = 1;
  /* menu_options_course_group */  /* menu_options_course_group */ $strongarm->name = 'menu_options_course_group';
  /* menu_options_course_group */  /* menu_options_course_group */ $strongarm->value = array();
  $export['menu_options_course_group'] = $strongarm;

  /* menu_options_user_profile_updates */  /* menu_options_user_profile_updates */ $strongarm = new stdClass();
  /* menu_options_user_profile_updates */  /* menu_options_user_profile_updates */ $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  /* menu_options_user_profile_updates */  /* menu_options_user_profile_updates */ $strongarm->api_version = 1;
  /* menu_options_user_profile_updates */  /* menu_options_user_profile_updates */ $strongarm->name = 'menu_options_user_profile_updates';
  /* menu_options_user_profile_updates */  /* menu_options_user_profile_updates */ $strongarm->value = array();
  $export['menu_options_user_profile_updates'] = $strongarm;

  /* menu_parent_course_group */  /* menu_parent_course_group */ $strongarm = new stdClass();
  /* menu_parent_course_group */  /* menu_parent_course_group */ $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  /* menu_parent_course_group */  /* menu_parent_course_group */ $strongarm->api_version = 1;
  /* menu_parent_course_group */  /* menu_parent_course_group */ $strongarm->name = 'menu_parent_course_group';
  /* menu_parent_course_group */  /* menu_parent_course_group */ $strongarm->value = 'main-menu:0';
  $export['menu_parent_course_group'] = $strongarm;

  /* menu_parent_user_profile_updates */  /* menu_parent_user_profile_updates */ $strongarm = new stdClass();
  /* menu_parent_user_profile_updates */  /* menu_parent_user_profile_updates */ $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  /* menu_parent_user_profile_updates */  /* menu_parent_user_profile_updates */ $strongarm->api_version = 1;
  /* menu_parent_user_profile_updates */  /* menu_parent_user_profile_updates */ $strongarm->name = 'menu_parent_user_profile_updates';
  /* menu_parent_user_profile_updates */  /* menu_parent_user_profile_updates */ $strongarm->value = 'main-menu:0';
  $export['menu_parent_user_profile_updates'] = $strongarm;

  /* node_options_course_group */  /* node_options_course_group */ $strongarm = new stdClass();
  /* node_options_course_group */  /* node_options_course_group */ $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  /* node_options_course_group */  /* node_options_course_group */ $strongarm->api_version = 1;
  /* node_options_course_group */  /* node_options_course_group */ $strongarm->name = 'node_options_course_group';
  /* node_options_course_group */  /* node_options_course_group */ $strongarm->value = array(
  /* node_options_course_group */  /* node_options_course_group */   0 => 'status',
  /* node_options_course_group */  /* node_options_course_group */   1 => 'revision',
  /* node_options_course_group */  /* node_options_course_group */ );
  $export['node_options_course_group'] = $strongarm;

  /* node_options_user_profile_updates */  /* node_options_user_profile_updates */ $strongarm = new stdClass();
  /* node_options_user_profile_updates */  /* node_options_user_profile_updates */ $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  /* node_options_user_profile_updates */  /* node_options_user_profile_updates */ $strongarm->api_version = 1;
  /* node_options_user_profile_updates */  /* node_options_user_profile_updates */ $strongarm->name = 'node_options_user_profile_updates';
  /* node_options_user_profile_updates */  /* node_options_user_profile_updates */ $strongarm->value = array(
  /* node_options_user_profile_updates */  /* node_options_user_profile_updates */   0 => 'status',
  /* node_options_user_profile_updates */  /* node_options_user_profile_updates */ );
  $export['node_options_user_profile_updates'] = $strongarm;

  /* node_preview_course_group */  /* node_preview_course_group */ $strongarm = new stdClass();
  /* node_preview_course_group */  /* node_preview_course_group */ $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  /* node_preview_course_group */  /* node_preview_course_group */ $strongarm->api_version = 1;
  /* node_preview_course_group */  /* node_preview_course_group */ $strongarm->name = 'node_preview_course_group';
  /* node_preview_course_group */  /* node_preview_course_group */ $strongarm->value = '0';
  $export['node_preview_course_group'] = $strongarm;

  /* node_submitted_course_group */  /* node_submitted_course_group */ $strongarm = new stdClass();
  /* node_submitted_course_group */  /* node_submitted_course_group */ $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  /* node_submitted_course_group */  /* node_submitted_course_group */ $strongarm->api_version = 1;
  /* node_submitted_course_group */  /* node_submitted_course_group */ $strongarm->name = 'node_submitted_course_group';
  /* node_submitted_course_group */  /* node_submitted_course_group */ $strongarm->value = 0;
  $export['node_submitted_course_group'] = $strongarm;

  /* node_submitted_user_profile_updates */  /* node_submitted_user_profile_updates */ $strongarm = new stdClass();
  /* node_submitted_user_profile_updates */  /* node_submitted_user_profile_updates */ $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  /* node_submitted_user_profile_updates */  /* node_submitted_user_profile_updates */ $strongarm->api_version = 1;
  /* node_submitted_user_profile_updates */  /* node_submitted_user_profile_updates */ $strongarm->name = 'node_submitted_user_profile_updates';
  /* node_submitted_user_profile_updates */  /* node_submitted_user_profile_updates */ $strongarm->value = 0;
  $export['node_submitted_user_profile_updates'] = $strongarm;

  /* page_manager_term_view_disabled */  /* page_manager_term_view_disabled */ $strongarm = new stdClass();
  /* page_manager_term_view_disabled */  /* page_manager_term_view_disabled */ $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  /* page_manager_term_view_disabled */  /* page_manager_term_view_disabled */ $strongarm->api_version = 1;
  /* page_manager_term_view_disabled */  /* page_manager_term_view_disabled */ $strongarm->name = 'page_manager_term_view_disabled';
  /* page_manager_term_view_disabled */  /* page_manager_term_view_disabled */ $strongarm->value = FALSE;
  $export['page_manager_term_view_disabled'] = $strongarm;

  /* panelizer_defaults_node_course_group */  /* panelizer_defaults_node_course_group */ $strongarm = new stdClass();
  /* panelizer_defaults_node_course_group */  /* panelizer_defaults_node_course_group */ $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  /* panelizer_defaults_node_course_group */  /* panelizer_defaults_node_course_group */ $strongarm->api_version = 1;
  /* panelizer_defaults_node_course_group */  /* panelizer_defaults_node_course_group */ $strongarm->name = 'panelizer_defaults_node_course_group';
  /* panelizer_defaults_node_course_group */  /* panelizer_defaults_node_course_group */ $strongarm->value = array(
  /* panelizer_defaults_node_course_group */  /* panelizer_defaults_node_course_group */   'status' => 0,
  /* panelizer_defaults_node_course_group */  /* panelizer_defaults_node_course_group */   'view modes' => array(
  /* panelizer_defaults_node_course_group */  /* panelizer_defaults_node_course_group */     'page_manager' => array(
  /* panelizer_defaults_node_course_group */  /* panelizer_defaults_node_course_group */       'status' => 0,
  /* panelizer_defaults_node_course_group */  /* panelizer_defaults_node_course_group */       'default' => 0,
  /* panelizer_defaults_node_course_group */  /* panelizer_defaults_node_course_group */       'choice' => 0,
  /* panelizer_defaults_node_course_group */  /* panelizer_defaults_node_course_group */     ),
  /* panelizer_defaults_node_course_group */  /* panelizer_defaults_node_course_group */     'default' => array(
  /* panelizer_defaults_node_course_group */  /* panelizer_defaults_node_course_group */       'status' => 0,
  /* panelizer_defaults_node_course_group */  /* panelizer_defaults_node_course_group */       'default' => 0,
  /* panelizer_defaults_node_course_group */  /* panelizer_defaults_node_course_group */       'choice' => 0,
  /* panelizer_defaults_node_course_group */  /* panelizer_defaults_node_course_group */     ),
  /* panelizer_defaults_node_course_group */  /* panelizer_defaults_node_course_group */     'full' => array(
  /* panelizer_defaults_node_course_group */  /* panelizer_defaults_node_course_group */       'status' => 0,
  /* panelizer_defaults_node_course_group */  /* panelizer_defaults_node_course_group */       'default' => 0,
  /* panelizer_defaults_node_course_group */  /* panelizer_defaults_node_course_group */       'choice' => 0,
  /* panelizer_defaults_node_course_group */  /* panelizer_defaults_node_course_group */     ),
  /* panelizer_defaults_node_course_group */  /* panelizer_defaults_node_course_group */     'teaser' => array(
  /* panelizer_defaults_node_course_group */  /* panelizer_defaults_node_course_group */       'status' => 0,
  /* panelizer_defaults_node_course_group */  /* panelizer_defaults_node_course_group */       'default' => 0,
  /* panelizer_defaults_node_course_group */  /* panelizer_defaults_node_course_group */       'choice' => 0,
  /* panelizer_defaults_node_course_group */  /* panelizer_defaults_node_course_group */     ),
  /* panelizer_defaults_node_course_group */  /* panelizer_defaults_node_course_group */     'rss' => array(
  /* panelizer_defaults_node_course_group */  /* panelizer_defaults_node_course_group */       'status' => 0,
  /* panelizer_defaults_node_course_group */  /* panelizer_defaults_node_course_group */       'default' => 0,
  /* panelizer_defaults_node_course_group */  /* panelizer_defaults_node_course_group */       'choice' => 0,
  /* panelizer_defaults_node_course_group */  /* panelizer_defaults_node_course_group */     ),
  /* panelizer_defaults_node_course_group */  /* panelizer_defaults_node_course_group */     'teaserthumb' => array(
  /* panelizer_defaults_node_course_group */  /* panelizer_defaults_node_course_group */       'status' => 0,
  /* panelizer_defaults_node_course_group */  /* panelizer_defaults_node_course_group */       'default' => 0,
  /* panelizer_defaults_node_course_group */  /* panelizer_defaults_node_course_group */       'choice' => 0,
  /* panelizer_defaults_node_course_group */  /* panelizer_defaults_node_course_group */     ),
  /* panelizer_defaults_node_course_group */  /* panelizer_defaults_node_course_group */     'events_list' => array(
  /* panelizer_defaults_node_course_group */  /* panelizer_defaults_node_course_group */       'status' => 0,
  /* panelizer_defaults_node_course_group */  /* panelizer_defaults_node_course_group */       'default' => 0,
  /* panelizer_defaults_node_course_group */  /* panelizer_defaults_node_course_group */       'choice' => 0,
  /* panelizer_defaults_node_course_group */  /* panelizer_defaults_node_course_group */     ),
  /* panelizer_defaults_node_course_group */  /* panelizer_defaults_node_course_group */     'one_column_teaser' => array(
  /* panelizer_defaults_node_course_group */  /* panelizer_defaults_node_course_group */       'status' => 0,
  /* panelizer_defaults_node_course_group */  /* panelizer_defaults_node_course_group */       'default' => 0,
  /* panelizer_defaults_node_course_group */  /* panelizer_defaults_node_course_group */       'choice' => 0,
  /* panelizer_defaults_node_course_group */  /* panelizer_defaults_node_course_group */     ),
  /* panelizer_defaults_node_course_group */  /* panelizer_defaults_node_course_group */     'title_and_time' => array(
  /* panelizer_defaults_node_course_group */  /* panelizer_defaults_node_course_group */       'status' => 0,
  /* panelizer_defaults_node_course_group */  /* panelizer_defaults_node_course_group */       'default' => 0,
  /* panelizer_defaults_node_course_group */  /* panelizer_defaults_node_course_group */       'choice' => 0,
  /* panelizer_defaults_node_course_group */  /* panelizer_defaults_node_course_group */     ),
  /* panelizer_defaults_node_course_group */  /* panelizer_defaults_node_course_group */     'time_and_location' => array(
  /* panelizer_defaults_node_course_group */  /* panelizer_defaults_node_course_group */       'status' => 0,
  /* panelizer_defaults_node_course_group */  /* panelizer_defaults_node_course_group */       'default' => 0,
  /* panelizer_defaults_node_course_group */  /* panelizer_defaults_node_course_group */       'choice' => 0,
  /* panelizer_defaults_node_course_group */  /* panelizer_defaults_node_course_group */     ),
  /* panelizer_defaults_node_course_group */  /* panelizer_defaults_node_course_group */     'sidebar_teaser_v2' => array(
  /* panelizer_defaults_node_course_group */  /* panelizer_defaults_node_course_group */       'status' => 0,
  /* panelizer_defaults_node_course_group */  /* panelizer_defaults_node_course_group */       'default' => 0,
  /* panelizer_defaults_node_course_group */  /* panelizer_defaults_node_course_group */       'choice' => 0,
  /* panelizer_defaults_node_course_group */  /* panelizer_defaults_node_course_group */     ),
  /* panelizer_defaults_node_course_group */  /* panelizer_defaults_node_course_group */     'sidebar_' => array(
  /* panelizer_defaults_node_course_group */  /* panelizer_defaults_node_course_group */       'status' => 0,
  /* panelizer_defaults_node_course_group */  /* panelizer_defaults_node_course_group */       'default' => 0,
  /* panelizer_defaults_node_course_group */  /* panelizer_defaults_node_course_group */       'choice' => 0,
  /* panelizer_defaults_node_course_group */  /* panelizer_defaults_node_course_group */     ),
  /* panelizer_defaults_node_course_group */  /* panelizer_defaults_node_course_group */     'search_teaser' => array(
  /* panelizer_defaults_node_course_group */  /* panelizer_defaults_node_course_group */       'status' => 0,
  /* panelizer_defaults_node_course_group */  /* panelizer_defaults_node_course_group */       'default' => 0,
  /* panelizer_defaults_node_course_group */  /* panelizer_defaults_node_course_group */       'choice' => 0,
  /* panelizer_defaults_node_course_group */  /* panelizer_defaults_node_course_group */     ),
  /* panelizer_defaults_node_course_group */  /* panelizer_defaults_node_course_group */     'featured_publication' => array(
  /* panelizer_defaults_node_course_group */  /* panelizer_defaults_node_course_group */       'status' => 0,
  /* panelizer_defaults_node_course_group */  /* panelizer_defaults_node_course_group */       'default' => 0,
  /* panelizer_defaults_node_course_group */  /* panelizer_defaults_node_course_group */       'choice' => 0,
  /* panelizer_defaults_node_course_group */  /* panelizer_defaults_node_course_group */     ),
  /* panelizer_defaults_node_course_group */  /* panelizer_defaults_node_course_group */     'post_teaser_group_landing_page' => array(
  /* panelizer_defaults_node_course_group */  /* panelizer_defaults_node_course_group */       'status' => 0,
  /* panelizer_defaults_node_course_group */  /* panelizer_defaults_node_course_group */       'default' => 0,
  /* panelizer_defaults_node_course_group */  /* panelizer_defaults_node_course_group */       'choice' => 0,
  /* panelizer_defaults_node_course_group */  /* panelizer_defaults_node_course_group */     ),
  /* panelizer_defaults_node_course_group */  /* panelizer_defaults_node_course_group */     'group_teaser' => array(
  /* panelizer_defaults_node_course_group */  /* panelizer_defaults_node_course_group */       'status' => 0,
  /* panelizer_defaults_node_course_group */  /* panelizer_defaults_node_course_group */       'default' => 0,
  /* panelizer_defaults_node_course_group */  /* panelizer_defaults_node_course_group */       'choice' => 0,
  /* panelizer_defaults_node_course_group */  /* panelizer_defaults_node_course_group */     ),
  /* panelizer_defaults_node_course_group */  /* panelizer_defaults_node_course_group */     'media_gallery_block' => array(
  /* panelizer_defaults_node_course_group */  /* panelizer_defaults_node_course_group */       'status' => 0,
  /* panelizer_defaults_node_course_group */  /* panelizer_defaults_node_course_group */       'default' => 0,
  /* panelizer_defaults_node_course_group */  /* panelizer_defaults_node_course_group */       'choice' => 0,
  /* panelizer_defaults_node_course_group */  /* panelizer_defaults_node_course_group */     ),
  /* panelizer_defaults_node_course_group */  /* panelizer_defaults_node_course_group */     'token' => array(
  /* panelizer_defaults_node_course_group */  /* panelizer_defaults_node_course_group */       'status' => 0,
  /* panelizer_defaults_node_course_group */  /* panelizer_defaults_node_course_group */       'default' => 0,
  /* panelizer_defaults_node_course_group */  /* panelizer_defaults_node_course_group */       'choice' => 0,
  /* panelizer_defaults_node_course_group */  /* panelizer_defaults_node_course_group */     ),
  /* panelizer_defaults_node_course_group */  /* panelizer_defaults_node_course_group */   ),
  /* panelizer_defaults_node_course_group */  /* panelizer_defaults_node_course_group */ );
  $export['panelizer_defaults_node_course_group'] = $strongarm;

  /* panelizer_node:course:default_selection */  /* panelizer_node:course:default_selection */ $strongarm = new stdClass();
  /* panelizer_node:course:default_selection */  /* panelizer_node:course:default_selection */ $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  /* panelizer_node:course:default_selection */  /* panelizer_node:course:default_selection */ $strongarm->api_version = 1;
  /* panelizer_node:course:default_selection */  /* panelizer_node:course:default_selection */ $strongarm->name = 'panelizer_node:course:default_selection';
  /* panelizer_node:course:default_selection */  /* panelizer_node:course:default_selection */ $strongarm->value = 0;
  $export['panelizer_node:course:default_selection'] = $strongarm;

  /* panelizer_node:course:page_manager_selection */  /* panelizer_node:course:page_manager_selection */ $strongarm = new stdClass();
  /* panelizer_node:course:page_manager_selection */  /* panelizer_node:course:page_manager_selection */ $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  /* panelizer_node:course:page_manager_selection */  /* panelizer_node:course:page_manager_selection */ $strongarm->api_version = 1;
  /* panelizer_node:course:page_manager_selection */  /* panelizer_node:course:page_manager_selection */ $strongarm->name = 'panelizer_node:course:page_manager_selection';
  /* panelizer_node:course:page_manager_selection */  /* panelizer_node:course:page_manager_selection */ $strongarm->value = 'node:course:default';
  $export['panelizer_node:course:page_manager_selection'] = $strongarm;

  /* panelizer_node:course:teaserthumb_selection */  /* panelizer_node:course:teaserthumb_selection */ $strongarm = new stdClass();
  /* panelizer_node:course:teaserthumb_selection */  /* panelizer_node:course:teaserthumb_selection */ $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  /* panelizer_node:course:teaserthumb_selection */  /* panelizer_node:course:teaserthumb_selection */ $strongarm->api_version = 1;
  /* panelizer_node:course:teaserthumb_selection */  /* panelizer_node:course:teaserthumb_selection */ $strongarm->name = 'panelizer_node:course:teaserthumb_selection';
  /* panelizer_node:course:teaserthumb_selection */  /* panelizer_node:course:teaserthumb_selection */ $strongarm->value = 'node:course:default:teaserthumb';
  $export['panelizer_node:course:teaserthumb_selection'] = $strongarm;

  /* panelizer_node:course:teaser_selection */  /* panelizer_node:course:teaser_selection */ $strongarm = new stdClass();
  /* panelizer_node:course:teaser_selection */  /* panelizer_node:course:teaser_selection */ $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  /* panelizer_node:course:teaser_selection */  /* panelizer_node:course:teaser_selection */ $strongarm->api_version = 1;
  /* panelizer_node:course:teaser_selection */  /* panelizer_node:course:teaser_selection */ $strongarm->name = 'panelizer_node:course:teaser_selection';
  /* panelizer_node:course:teaser_selection */  /* panelizer_node:course:teaser_selection */ $strongarm->value = 0;
  $export['panelizer_node:course:teaser_selection'] = $strongarm;

  return $export;
}
