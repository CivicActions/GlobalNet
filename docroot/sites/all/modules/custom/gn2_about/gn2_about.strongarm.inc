<?php
/**
 * @file
 * gn2_about.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function gn2_about_strongarm() {
  $export = array();

  /* additional_settings__active_tab_about_page */  /* additional_settings__active_tab_about_page */ $strongarm = new stdClass();
  /* additional_settings__active_tab_about_page */  /* additional_settings__active_tab_about_page */ $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  /* additional_settings__active_tab_about_page */  /* additional_settings__active_tab_about_page */ $strongarm->api_version = 1;
  /* additional_settings__active_tab_about_page */  /* additional_settings__active_tab_about_page */ $strongarm->name = 'additional_settings__active_tab_about_page';
  /* additional_settings__active_tab_about_page */  /* additional_settings__active_tab_about_page */ $strongarm->value = 'edit-og';
  $export['additional_settings__active_tab_about_page'] = $strongarm;

  /* comment_about_page */  /* comment_about_page */ $strongarm = new stdClass();
  /* comment_about_page */  /* comment_about_page */ $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  /* comment_about_page */  /* comment_about_page */ $strongarm->api_version = 1;
  /* comment_about_page */  /* comment_about_page */ $strongarm->name = 'comment_about_page';
  /* comment_about_page */  /* comment_about_page */ $strongarm->value = '1';
  $export['comment_about_page'] = $strongarm;

  /* comment_anonymous_about_page */  /* comment_anonymous_about_page */ $strongarm = new stdClass();
  /* comment_anonymous_about_page */  /* comment_anonymous_about_page */ $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  /* comment_anonymous_about_page */  /* comment_anonymous_about_page */ $strongarm->api_version = 1;
  /* comment_anonymous_about_page */  /* comment_anonymous_about_page */ $strongarm->name = 'comment_anonymous_about_page';
  /* comment_anonymous_about_page */  /* comment_anonymous_about_page */ $strongarm->value = 0;
  $export['comment_anonymous_about_page'] = $strongarm;

  /* comment_changed_date_format_about_page */  /* comment_changed_date_format_about_page */ $strongarm = new stdClass();
  /* comment_changed_date_format_about_page */  /* comment_changed_date_format_about_page */ $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  /* comment_changed_date_format_about_page */  /* comment_changed_date_format_about_page */ $strongarm->api_version = 1;
  /* comment_changed_date_format_about_page */  /* comment_changed_date_format_about_page */ $strongarm->name = 'comment_changed_date_format_about_page';
  /* comment_changed_date_format_about_page */  /* comment_changed_date_format_about_page */ $strongarm->value = 'medium';
  $export['comment_changed_date_format_about_page'] = $strongarm;

  /* comment_created_date_format_about_page */  /* comment_created_date_format_about_page */ $strongarm = new stdClass();
  /* comment_created_date_format_about_page */  /* comment_created_date_format_about_page */ $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  /* comment_created_date_format_about_page */  /* comment_created_date_format_about_page */ $strongarm->api_version = 1;
  /* comment_created_date_format_about_page */  /* comment_created_date_format_about_page */ $strongarm->name = 'comment_created_date_format_about_page';
  /* comment_created_date_format_about_page */  /* comment_created_date_format_about_page */ $strongarm->value = 'medium';
  $export['comment_created_date_format_about_page'] = $strongarm;

  /* comment_default_mode_about_page */  /* comment_default_mode_about_page */ $strongarm = new stdClass();
  /* comment_default_mode_about_page */  /* comment_default_mode_about_page */ $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  /* comment_default_mode_about_page */  /* comment_default_mode_about_page */ $strongarm->api_version = 1;
  /* comment_default_mode_about_page */  /* comment_default_mode_about_page */ $strongarm->name = 'comment_default_mode_about_page';
  /* comment_default_mode_about_page */  /* comment_default_mode_about_page */ $strongarm->value = 1;
  $export['comment_default_mode_about_page'] = $strongarm;

  /* comment_default_per_page_about_page */  /* comment_default_per_page_about_page */ $strongarm = new stdClass();
  /* comment_default_per_page_about_page */  /* comment_default_per_page_about_page */ $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  /* comment_default_per_page_about_page */  /* comment_default_per_page_about_page */ $strongarm->api_version = 1;
  /* comment_default_per_page_about_page */  /* comment_default_per_page_about_page */ $strongarm->name = 'comment_default_per_page_about_page';
  /* comment_default_per_page_about_page */  /* comment_default_per_page_about_page */ $strongarm->value = '50';
  $export['comment_default_per_page_about_page'] = $strongarm;

  /* comment_default_sorting_about_page */  /* comment_default_sorting_about_page */ $strongarm = new stdClass();
  /* comment_default_sorting_about_page */  /* comment_default_sorting_about_page */ $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  /* comment_default_sorting_about_page */  /* comment_default_sorting_about_page */ $strongarm->api_version = 1;
  /* comment_default_sorting_about_page */  /* comment_default_sorting_about_page */ $strongarm->name = 'comment_default_sorting_about_page';
  /* comment_default_sorting_about_page */  /* comment_default_sorting_about_page */ $strongarm->value = '1';
  $export['comment_default_sorting_about_page'] = $strongarm;

  /* comment_expose_fields_about_page */  /* comment_expose_fields_about_page */ $strongarm = new stdClass();
  /* comment_expose_fields_about_page */  /* comment_expose_fields_about_page */ $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  /* comment_expose_fields_about_page */  /* comment_expose_fields_about_page */ $strongarm->api_version = 1;
  /* comment_expose_fields_about_page */  /* comment_expose_fields_about_page */ $strongarm->name = 'comment_expose_fields_about_page';
  /* comment_expose_fields_about_page */  /* comment_expose_fields_about_page */ $strongarm->value = 0;
  $export['comment_expose_fields_about_page'] = $strongarm;

  /* comment_form_label_about_page */  /* comment_form_label_about_page */ $strongarm = new stdClass();
  /* comment_form_label_about_page */  /* comment_form_label_about_page */ $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  /* comment_form_label_about_page */  /* comment_form_label_about_page */ $strongarm->api_version = 1;
  /* comment_form_label_about_page */  /* comment_form_label_about_page */ $strongarm->name = 'comment_form_label_about_page';
  /* comment_form_label_about_page */  /* comment_form_label_about_page */ $strongarm->value = 'Post new comment';
  $export['comment_form_label_about_page'] = $strongarm;

  /* comment_form_location_about_page */  /* comment_form_location_about_page */ $strongarm = new stdClass();
  /* comment_form_location_about_page */  /* comment_form_location_about_page */ $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  /* comment_form_location_about_page */  /* comment_form_location_about_page */ $strongarm->api_version = 1;
  /* comment_form_location_about_page */  /* comment_form_location_about_page */ $strongarm->name = 'comment_form_location_about_page';
  /* comment_form_location_about_page */  /* comment_form_location_about_page */ $strongarm->value = 1;
  $export['comment_form_location_about_page'] = $strongarm;

  /* comment_form_placement_about_page */  /* comment_form_placement_about_page */ $strongarm = new stdClass();
  /* comment_form_placement_about_page */  /* comment_form_placement_about_page */ $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  /* comment_form_placement_about_page */  /* comment_form_placement_about_page */ $strongarm->api_version = 1;
  /* comment_form_placement_about_page */  /* comment_form_placement_about_page */ $strongarm->name = 'comment_form_placement_about_page';
  /* comment_form_placement_about_page */  /* comment_form_placement_about_page */ $strongarm->value = '3';
  $export['comment_form_placement_about_page'] = $strongarm;

  /* comment_preview_about_page */  /* comment_preview_about_page */ $strongarm = new stdClass();
  /* comment_preview_about_page */  /* comment_preview_about_page */ $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  /* comment_preview_about_page */  /* comment_preview_about_page */ $strongarm->api_version = 1;
  /* comment_preview_about_page */  /* comment_preview_about_page */ $strongarm->name = 'comment_preview_about_page';
  /* comment_preview_about_page */  /* comment_preview_about_page */ $strongarm->value = '0';
  $export['comment_preview_about_page'] = $strongarm;

  /* comment_section_label_about_page */  /* comment_section_label_about_page */ $strongarm = new stdClass();
  /* comment_section_label_about_page */  /* comment_section_label_about_page */ $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  /* comment_section_label_about_page */  /* comment_section_label_about_page */ $strongarm->api_version = 1;
  /* comment_section_label_about_page */  /* comment_section_label_about_page */ $strongarm->name = 'comment_section_label_about_page';
  /* comment_section_label_about_page */  /* comment_section_label_about_page */ $strongarm->value = 'Comments';
  $export['comment_section_label_about_page'] = $strongarm;

  /* comment_subject_field_about_page */  /* comment_subject_field_about_page */ $strongarm = new stdClass();
  /* comment_subject_field_about_page */  /* comment_subject_field_about_page */ $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  /* comment_subject_field_about_page */  /* comment_subject_field_about_page */ $strongarm->api_version = 1;
  /* comment_subject_field_about_page */  /* comment_subject_field_about_page */ $strongarm->name = 'comment_subject_field_about_page';
  /* comment_subject_field_about_page */  /* comment_subject_field_about_page */ $strongarm->value = 1;
  $export['comment_subject_field_about_page'] = $strongarm;

  /* field_bundle_settings_node__about_page */  /* field_bundle_settings_node__about_page */ $strongarm = new stdClass();
  /* field_bundle_settings_node__about_page */  /* field_bundle_settings_node__about_page */ $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  /* field_bundle_settings_node__about_page */  /* field_bundle_settings_node__about_page */ $strongarm->api_version = 1;
  /* field_bundle_settings_node__about_page */  /* field_bundle_settings_node__about_page */ $strongarm->name = 'field_bundle_settings_node__about_page';
  /* field_bundle_settings_node__about_page */  /* field_bundle_settings_node__about_page */ $strongarm->value = array(
  /* field_bundle_settings_node__about_page */  /* field_bundle_settings_node__about_page */   'view_modes' => array(
  /* field_bundle_settings_node__about_page */  /* field_bundle_settings_node__about_page */     'featured_publication' => array(
  /* field_bundle_settings_node__about_page */  /* field_bundle_settings_node__about_page */       'custom_settings' => FALSE,
  /* field_bundle_settings_node__about_page */  /* field_bundle_settings_node__about_page */     ),
  /* field_bundle_settings_node__about_page */  /* field_bundle_settings_node__about_page */     'group_teaser' => array(
  /* field_bundle_settings_node__about_page */  /* field_bundle_settings_node__about_page */       'custom_settings' => FALSE,
  /* field_bundle_settings_node__about_page */  /* field_bundle_settings_node__about_page */     ),
  /* field_bundle_settings_node__about_page */  /* field_bundle_settings_node__about_page */   ),
  /* field_bundle_settings_node__about_page */  /* field_bundle_settings_node__about_page */   'extra_fields' => array(
  /* field_bundle_settings_node__about_page */  /* field_bundle_settings_node__about_page */     'form' => array(
  /* field_bundle_settings_node__about_page */  /* field_bundle_settings_node__about_page */       'title' => array(
  /* field_bundle_settings_node__about_page */  /* field_bundle_settings_node__about_page */         'weight' => '1',
  /* field_bundle_settings_node__about_page */  /* field_bundle_settings_node__about_page */       ),
  /* field_bundle_settings_node__about_page */  /* field_bundle_settings_node__about_page */       'path' => array(
  /* field_bundle_settings_node__about_page */  /* field_bundle_settings_node__about_page */         'weight' => '4',
  /* field_bundle_settings_node__about_page */  /* field_bundle_settings_node__about_page */       ),
  /* field_bundle_settings_node__about_page */  /* field_bundle_settings_node__about_page */       'redirect' => array(
  /* field_bundle_settings_node__about_page */  /* field_bundle_settings_node__about_page */         'weight' => '5',
  /* field_bundle_settings_node__about_page */  /* field_bundle_settings_node__about_page */       ),
  /* field_bundle_settings_node__about_page */  /* field_bundle_settings_node__about_page */       'language' => array(
  /* field_bundle_settings_node__about_page */  /* field_bundle_settings_node__about_page */         'weight' => '10',
  /* field_bundle_settings_node__about_page */  /* field_bundle_settings_node__about_page */       ),
  /* field_bundle_settings_node__about_page */  /* field_bundle_settings_node__about_page */     ),
  /* field_bundle_settings_node__about_page */  /* field_bundle_settings_node__about_page */     'display' => array(),
  /* field_bundle_settings_node__about_page */  /* field_bundle_settings_node__about_page */   ),
  /* field_bundle_settings_node__about_page */  /* field_bundle_settings_node__about_page */ );
  $export['field_bundle_settings_node__about_page'] = $strongarm;

  /* i18n_sync_node_type_about_page */  /* i18n_sync_node_type_about_page */ $strongarm = new stdClass();
  /* i18n_sync_node_type_about_page */  /* i18n_sync_node_type_about_page */ $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  /* i18n_sync_node_type_about_page */  /* i18n_sync_node_type_about_page */ $strongarm->api_version = 1;
  /* i18n_sync_node_type_about_page */  /* i18n_sync_node_type_about_page */ $strongarm->name = 'i18n_sync_node_type_about_page';
  /* i18n_sync_node_type_about_page */  /* i18n_sync_node_type_about_page */ $strongarm->value = array();
  $export['i18n_sync_node_type_about_page'] = $strongarm;

  /* language_content_type_about_page */  /* language_content_type_about_page */ $strongarm = new stdClass();
  /* language_content_type_about_page */  /* language_content_type_about_page */ $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  /* language_content_type_about_page */  /* language_content_type_about_page */ $strongarm->api_version = 1;
  /* language_content_type_about_page */  /* language_content_type_about_page */ $strongarm->name = 'language_content_type_about_page';
  /* language_content_type_about_page */  /* language_content_type_about_page */ $strongarm->value = '2';
  $export['language_content_type_about_page'] = $strongarm;

  /* menu_options_about_page */  /* menu_options_about_page */ $strongarm = new stdClass();
  /* menu_options_about_page */  /* menu_options_about_page */ $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  /* menu_options_about_page */  /* menu_options_about_page */ $strongarm->api_version = 1;
  /* menu_options_about_page */  /* menu_options_about_page */ $strongarm->name = 'menu_options_about_page';
  /* menu_options_about_page */  /* menu_options_about_page */ $strongarm->value = array();
  $export['menu_options_about_page'] = $strongarm;

  /* menu_parent_about_page */  /* menu_parent_about_page */ $strongarm = new stdClass();
  /* menu_parent_about_page */  /* menu_parent_about_page */ $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  /* menu_parent_about_page */  /* menu_parent_about_page */ $strongarm->api_version = 1;
  /* menu_parent_about_page */  /* menu_parent_about_page */ $strongarm->name = 'menu_parent_about_page';
  /* menu_parent_about_page */  /* menu_parent_about_page */ $strongarm->value = 'main-menu:0';
  $export['menu_parent_about_page'] = $strongarm;

  /* node_options_about_page */  /* node_options_about_page */ $strongarm = new stdClass();
  /* node_options_about_page */  /* node_options_about_page */ $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  /* node_options_about_page */  /* node_options_about_page */ $strongarm->api_version = 1;
  /* node_options_about_page */  /* node_options_about_page */ $strongarm->name = 'node_options_about_page';
  /* node_options_about_page */  /* node_options_about_page */ $strongarm->value = array(
  /* node_options_about_page */  /* node_options_about_page */   0 => 'revision',
  /* node_options_about_page */  /* node_options_about_page */ );
  $export['node_options_about_page'] = $strongarm;

  /* node_preview_about_page */  /* node_preview_about_page */ $strongarm = new stdClass();
  /* node_preview_about_page */  /* node_preview_about_page */ $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  /* node_preview_about_page */  /* node_preview_about_page */ $strongarm->api_version = 1;
  /* node_preview_about_page */  /* node_preview_about_page */ $strongarm->name = 'node_preview_about_page';
  /* node_preview_about_page */  /* node_preview_about_page */ $strongarm->value = '0';
  $export['node_preview_about_page'] = $strongarm;

  /* node_submitted_about_page */  /* node_submitted_about_page */ $strongarm = new stdClass();
  /* node_submitted_about_page */  /* node_submitted_about_page */ $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  /* node_submitted_about_page */  /* node_submitted_about_page */ $strongarm->api_version = 1;
  /* node_submitted_about_page */  /* node_submitted_about_page */ $strongarm->name = 'node_submitted_about_page';
  /* node_submitted_about_page */  /* node_submitted_about_page */ $strongarm->value = 0;
  $export['node_submitted_about_page'] = $strongarm;

  /* og_menu_enable_about_page */  /* og_menu_enable_about_page */ $strongarm = new stdClass();
  /* og_menu_enable_about_page */  /* og_menu_enable_about_page */ $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  /* og_menu_enable_about_page */  /* og_menu_enable_about_page */ $strongarm->api_version = 1;
  /* og_menu_enable_about_page */  /* og_menu_enable_about_page */ $strongarm->name = 'og_menu_enable_about_page';
  /* og_menu_enable_about_page */  /* og_menu_enable_about_page */ $strongarm->value = 0;
  $export['og_menu_enable_about_page'] = $strongarm;

  /* panelizer_defaults_node_about_page */  /* panelizer_defaults_node_about_page */ $strongarm = new stdClass();
  /* panelizer_defaults_node_about_page */  /* panelizer_defaults_node_about_page */ $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  /* panelizer_defaults_node_about_page */  /* panelizer_defaults_node_about_page */ $strongarm->api_version = 1;
  /* panelizer_defaults_node_about_page */  /* panelizer_defaults_node_about_page */ $strongarm->name = 'panelizer_defaults_node_about_page';
  /* panelizer_defaults_node_about_page */  /* panelizer_defaults_node_about_page */ $strongarm->value = array(
  /* panelizer_defaults_node_about_page */  /* panelizer_defaults_node_about_page */   'status' => 1,
  /* panelizer_defaults_node_about_page */  /* panelizer_defaults_node_about_page */   'view modes' => array(
  /* panelizer_defaults_node_about_page */  /* panelizer_defaults_node_about_page */     'page_manager' => array(
  /* panelizer_defaults_node_about_page */  /* panelizer_defaults_node_about_page */       'status' => 1,
  /* panelizer_defaults_node_about_page */  /* panelizer_defaults_node_about_page */       'default' => 1,
  /* panelizer_defaults_node_about_page */  /* panelizer_defaults_node_about_page */       'choice' => 0,
  /* panelizer_defaults_node_about_page */  /* panelizer_defaults_node_about_page */     ),
  /* panelizer_defaults_node_about_page */  /* panelizer_defaults_node_about_page */     'default' => array(
  /* panelizer_defaults_node_about_page */  /* panelizer_defaults_node_about_page */       'status' => 0,
  /* panelizer_defaults_node_about_page */  /* panelizer_defaults_node_about_page */       'default' => 0,
  /* panelizer_defaults_node_about_page */  /* panelizer_defaults_node_about_page */       'choice' => 0,
  /* panelizer_defaults_node_about_page */  /* panelizer_defaults_node_about_page */     ),
  /* panelizer_defaults_node_about_page */  /* panelizer_defaults_node_about_page */     'teaser' => array(
  /* panelizer_defaults_node_about_page */  /* panelizer_defaults_node_about_page */       'status' => 0,
  /* panelizer_defaults_node_about_page */  /* panelizer_defaults_node_about_page */       'default' => 0,
  /* panelizer_defaults_node_about_page */  /* panelizer_defaults_node_about_page */       'choice' => 0,
  /* panelizer_defaults_node_about_page */  /* panelizer_defaults_node_about_page */     ),
  /* panelizer_defaults_node_about_page */  /* panelizer_defaults_node_about_page */     'teaserthumb' => array(
  /* panelizer_defaults_node_about_page */  /* panelizer_defaults_node_about_page */       'status' => 0,
  /* panelizer_defaults_node_about_page */  /* panelizer_defaults_node_about_page */       'default' => 0,
  /* panelizer_defaults_node_about_page */  /* panelizer_defaults_node_about_page */       'choice' => 0,
  /* panelizer_defaults_node_about_page */  /* panelizer_defaults_node_about_page */     ),
  /* panelizer_defaults_node_about_page */  /* panelizer_defaults_node_about_page */     'events_list' => array(
  /* panelizer_defaults_node_about_page */  /* panelizer_defaults_node_about_page */       'status' => 0,
  /* panelizer_defaults_node_about_page */  /* panelizer_defaults_node_about_page */       'default' => 0,
  /* panelizer_defaults_node_about_page */  /* panelizer_defaults_node_about_page */       'choice' => 0,
  /* panelizer_defaults_node_about_page */  /* panelizer_defaults_node_about_page */     ),
  /* panelizer_defaults_node_about_page */  /* panelizer_defaults_node_about_page */     'one_column_teaser' => array(
  /* panelizer_defaults_node_about_page */  /* panelizer_defaults_node_about_page */       'status' => 0,
  /* panelizer_defaults_node_about_page */  /* panelizer_defaults_node_about_page */       'default' => 0,
  /* panelizer_defaults_node_about_page */  /* panelizer_defaults_node_about_page */       'choice' => 0,
  /* panelizer_defaults_node_about_page */  /* panelizer_defaults_node_about_page */     ),
  /* panelizer_defaults_node_about_page */  /* panelizer_defaults_node_about_page */     'title_and_time' => array(
  /* panelizer_defaults_node_about_page */  /* panelizer_defaults_node_about_page */       'status' => 0,
  /* panelizer_defaults_node_about_page */  /* panelizer_defaults_node_about_page */       'default' => 0,
  /* panelizer_defaults_node_about_page */  /* panelizer_defaults_node_about_page */       'choice' => 0,
  /* panelizer_defaults_node_about_page */  /* panelizer_defaults_node_about_page */     ),
  /* panelizer_defaults_node_about_page */  /* panelizer_defaults_node_about_page */     'time_and_location' => array(
  /* panelizer_defaults_node_about_page */  /* panelizer_defaults_node_about_page */       'status' => 0,
  /* panelizer_defaults_node_about_page */  /* panelizer_defaults_node_about_page */       'default' => 0,
  /* panelizer_defaults_node_about_page */  /* panelizer_defaults_node_about_page */       'choice' => 0,
  /* panelizer_defaults_node_about_page */  /* panelizer_defaults_node_about_page */     ),
  /* panelizer_defaults_node_about_page */  /* panelizer_defaults_node_about_page */     'sidebar_teaser_v2' => array(
  /* panelizer_defaults_node_about_page */  /* panelizer_defaults_node_about_page */       'status' => 0,
  /* panelizer_defaults_node_about_page */  /* panelizer_defaults_node_about_page */       'default' => 0,
  /* panelizer_defaults_node_about_page */  /* panelizer_defaults_node_about_page */       'choice' => 0,
  /* panelizer_defaults_node_about_page */  /* panelizer_defaults_node_about_page */     ),
  /* panelizer_defaults_node_about_page */  /* panelizer_defaults_node_about_page */     'sidebar_' => array(
  /* panelizer_defaults_node_about_page */  /* panelizer_defaults_node_about_page */       'status' => 0,
  /* panelizer_defaults_node_about_page */  /* panelizer_defaults_node_about_page */       'default' => 0,
  /* panelizer_defaults_node_about_page */  /* panelizer_defaults_node_about_page */       'choice' => 0,
  /* panelizer_defaults_node_about_page */  /* panelizer_defaults_node_about_page */     ),
  /* panelizer_defaults_node_about_page */  /* panelizer_defaults_node_about_page */     'search_teaser' => array(
  /* panelizer_defaults_node_about_page */  /* panelizer_defaults_node_about_page */       'status' => 0,
  /* panelizer_defaults_node_about_page */  /* panelizer_defaults_node_about_page */       'default' => 0,
  /* panelizer_defaults_node_about_page */  /* panelizer_defaults_node_about_page */       'choice' => 0,
  /* panelizer_defaults_node_about_page */  /* panelizer_defaults_node_about_page */     ),
  /* panelizer_defaults_node_about_page */  /* panelizer_defaults_node_about_page */     'post_teaser_group_landing_page' => array(
  /* panelizer_defaults_node_about_page */  /* panelizer_defaults_node_about_page */       'status' => 0,
  /* panelizer_defaults_node_about_page */  /* panelizer_defaults_node_about_page */       'default' => 0,
  /* panelizer_defaults_node_about_page */  /* panelizer_defaults_node_about_page */       'choice' => 0,
  /* panelizer_defaults_node_about_page */  /* panelizer_defaults_node_about_page */     ),
  /* panelizer_defaults_node_about_page */  /* panelizer_defaults_node_about_page */   ),
  /* panelizer_defaults_node_about_page */  /* panelizer_defaults_node_about_page */ );
  $export['panelizer_defaults_node_about_page'] = $strongarm;

  /* pathauto_node_about_page_de_pattern */  /* pathauto_node_about_page_de_pattern */ $strongarm = new stdClass();
  /* pathauto_node_about_page_de_pattern */  /* pathauto_node_about_page_de_pattern */ $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  /* pathauto_node_about_page_de_pattern */  /* pathauto_node_about_page_de_pattern */ $strongarm->api_version = 1;
  /* pathauto_node_about_page_de_pattern */  /* pathauto_node_about_page_de_pattern */ $strongarm->name = 'pathauto_node_about_page_de_pattern';
  /* pathauto_node_about_page_de_pattern */  /* pathauto_node_about_page_de_pattern */ $strongarm->value = '';
  $export['pathauto_node_about_page_de_pattern'] = $strongarm;

  /* pathauto_node_about_page_en_pattern */  /* pathauto_node_about_page_en_pattern */ $strongarm = new stdClass();
  /* pathauto_node_about_page_en_pattern */  /* pathauto_node_about_page_en_pattern */ $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  /* pathauto_node_about_page_en_pattern */  /* pathauto_node_about_page_en_pattern */ $strongarm->api_version = 1;
  /* pathauto_node_about_page_en_pattern */  /* pathauto_node_about_page_en_pattern */ $strongarm->name = 'pathauto_node_about_page_en_pattern';
  /* pathauto_node_about_page_en_pattern */  /* pathauto_node_about_page_en_pattern */ $strongarm->value = '';
  $export['pathauto_node_about_page_en_pattern'] = $strongarm;

  /* pathauto_node_about_page_es_pattern */  /* pathauto_node_about_page_es_pattern */ $strongarm = new stdClass();
  /* pathauto_node_about_page_es_pattern */  /* pathauto_node_about_page_es_pattern */ $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  /* pathauto_node_about_page_es_pattern */  /* pathauto_node_about_page_es_pattern */ $strongarm->api_version = 1;
  /* pathauto_node_about_page_es_pattern */  /* pathauto_node_about_page_es_pattern */ $strongarm->name = 'pathauto_node_about_page_es_pattern';
  /* pathauto_node_about_page_es_pattern */  /* pathauto_node_about_page_es_pattern */ $strongarm->value = '';
  $export['pathauto_node_about_page_es_pattern'] = $strongarm;

  /* pathauto_node_about_page_fr_pattern */  /* pathauto_node_about_page_fr_pattern */ $strongarm = new stdClass();
  /* pathauto_node_about_page_fr_pattern */  /* pathauto_node_about_page_fr_pattern */ $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  /* pathauto_node_about_page_fr_pattern */  /* pathauto_node_about_page_fr_pattern */ $strongarm->api_version = 1;
  /* pathauto_node_about_page_fr_pattern */  /* pathauto_node_about_page_fr_pattern */ $strongarm->name = 'pathauto_node_about_page_fr_pattern';
  /* pathauto_node_about_page_fr_pattern */  /* pathauto_node_about_page_fr_pattern */ $strongarm->value = '';
  $export['pathauto_node_about_page_fr_pattern'] = $strongarm;

  /* pathauto_node_about_page_pattern */  /* pathauto_node_about_page_pattern */ $strongarm = new stdClass();
  /* pathauto_node_about_page_pattern */  /* pathauto_node_about_page_pattern */ $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  /* pathauto_node_about_page_pattern */  /* pathauto_node_about_page_pattern */ $strongarm->api_version = 1;
  /* pathauto_node_about_page_pattern */  /* pathauto_node_about_page_pattern */ $strongarm->name = 'pathauto_node_about_page_pattern';
  /* pathauto_node_about_page_pattern */  /* pathauto_node_about_page_pattern */ $strongarm->value = '';
  $export['pathauto_node_about_page_pattern'] = $strongarm;

  /* pathauto_node_about_page_pt-br_pattern */  /* pathauto_node_about_page_pt-br_pattern */ $strongarm = new stdClass();
  /* pathauto_node_about_page_pt-br_pattern */  /* pathauto_node_about_page_pt-br_pattern */ $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  /* pathauto_node_about_page_pt-br_pattern */  /* pathauto_node_about_page_pt-br_pattern */ $strongarm->api_version = 1;
  /* pathauto_node_about_page_pt-br_pattern */  /* pathauto_node_about_page_pt-br_pattern */ $strongarm->name = 'pathauto_node_about_page_pt-br_pattern';
  /* pathauto_node_about_page_pt-br_pattern */  /* pathauto_node_about_page_pt-br_pattern */ $strongarm->value = '';
  $export['pathauto_node_about_page_pt-br_pattern'] = $strongarm;

  /* pathauto_node_about_page_ru_pattern */  /* pathauto_node_about_page_ru_pattern */ $strongarm = new stdClass();
  /* pathauto_node_about_page_ru_pattern */  /* pathauto_node_about_page_ru_pattern */ $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  /* pathauto_node_about_page_ru_pattern */  /* pathauto_node_about_page_ru_pattern */ $strongarm->api_version = 1;
  /* pathauto_node_about_page_ru_pattern */  /* pathauto_node_about_page_ru_pattern */ $strongarm->name = 'pathauto_node_about_page_ru_pattern';
  /* pathauto_node_about_page_ru_pattern */  /* pathauto_node_about_page_ru_pattern */ $strongarm->value = '';
  $export['pathauto_node_about_page_ru_pattern'] = $strongarm;

  /* pathauto_node_about_page_und_pattern */  /* pathauto_node_about_page_und_pattern */ $strongarm = new stdClass();
  /* pathauto_node_about_page_und_pattern */  /* pathauto_node_about_page_und_pattern */ $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  /* pathauto_node_about_page_und_pattern */  /* pathauto_node_about_page_und_pattern */ $strongarm->api_version = 1;
  /* pathauto_node_about_page_und_pattern */  /* pathauto_node_about_page_und_pattern */ $strongarm->name = 'pathauto_node_about_page_und_pattern';
  /* pathauto_node_about_page_und_pattern */  /* pathauto_node_about_page_und_pattern */ $strongarm->value = '';
  $export['pathauto_node_about_page_und_pattern'] = $strongarm;

  /* save_continue_about_page */  /* save_continue_about_page */ $strongarm = new stdClass();
  /* save_continue_about_page */  /* save_continue_about_page */ $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  /* save_continue_about_page */  /* save_continue_about_page */ $strongarm->api_version = 1;
  /* save_continue_about_page */  /* save_continue_about_page */ $strongarm->name = 'save_continue_about_page';
  /* save_continue_about_page */  /* save_continue_about_page */ $strongarm->value = 'Save and add fields';
  $export['save_continue_about_page'] = $strongarm;

  /* scheduler_expand_fieldset_about_page */  /* scheduler_expand_fieldset_about_page */ $strongarm = new stdClass();
  /* scheduler_expand_fieldset_about_page */  /* scheduler_expand_fieldset_about_page */ $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  /* scheduler_expand_fieldset_about_page */  /* scheduler_expand_fieldset_about_page */ $strongarm->api_version = 1;
  /* scheduler_expand_fieldset_about_page */  /* scheduler_expand_fieldset_about_page */ $strongarm->name = 'scheduler_expand_fieldset_about_page';
  /* scheduler_expand_fieldset_about_page */  /* scheduler_expand_fieldset_about_page */ $strongarm->value = '0';
  $export['scheduler_expand_fieldset_about_page'] = $strongarm;

  /* scheduler_publish_enable_about_page */  /* scheduler_publish_enable_about_page */ $strongarm = new stdClass();
  /* scheduler_publish_enable_about_page */  /* scheduler_publish_enable_about_page */ $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  /* scheduler_publish_enable_about_page */  /* scheduler_publish_enable_about_page */ $strongarm->api_version = 1;
  /* scheduler_publish_enable_about_page */  /* scheduler_publish_enable_about_page */ $strongarm->name = 'scheduler_publish_enable_about_page';
  /* scheduler_publish_enable_about_page */  /* scheduler_publish_enable_about_page */ $strongarm->value = 0;
  $export['scheduler_publish_enable_about_page'] = $strongarm;

  /* scheduler_publish_past_date_about_page */  /* scheduler_publish_past_date_about_page */ $strongarm = new stdClass();
  /* scheduler_publish_past_date_about_page */  /* scheduler_publish_past_date_about_page */ $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  /* scheduler_publish_past_date_about_page */  /* scheduler_publish_past_date_about_page */ $strongarm->api_version = 1;
  /* scheduler_publish_past_date_about_page */  /* scheduler_publish_past_date_about_page */ $strongarm->name = 'scheduler_publish_past_date_about_page';
  /* scheduler_publish_past_date_about_page */  /* scheduler_publish_past_date_about_page */ $strongarm->value = 'error';
  $export['scheduler_publish_past_date_about_page'] = $strongarm;

  /* scheduler_publish_required_about_page */  /* scheduler_publish_required_about_page */ $strongarm = new stdClass();
  /* scheduler_publish_required_about_page */  /* scheduler_publish_required_about_page */ $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  /* scheduler_publish_required_about_page */  /* scheduler_publish_required_about_page */ $strongarm->api_version = 1;
  /* scheduler_publish_required_about_page */  /* scheduler_publish_required_about_page */ $strongarm->name = 'scheduler_publish_required_about_page';
  /* scheduler_publish_required_about_page */  /* scheduler_publish_required_about_page */ $strongarm->value = 0;
  $export['scheduler_publish_required_about_page'] = $strongarm;

  /* scheduler_publish_revision_about_page */  /* scheduler_publish_revision_about_page */ $strongarm = new stdClass();
  /* scheduler_publish_revision_about_page */  /* scheduler_publish_revision_about_page */ $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  /* scheduler_publish_revision_about_page */  /* scheduler_publish_revision_about_page */ $strongarm->api_version = 1;
  /* scheduler_publish_revision_about_page */  /* scheduler_publish_revision_about_page */ $strongarm->name = 'scheduler_publish_revision_about_page';
  /* scheduler_publish_revision_about_page */  /* scheduler_publish_revision_about_page */ $strongarm->value = 0;
  $export['scheduler_publish_revision_about_page'] = $strongarm;

  /* scheduler_publish_touch_about_page */  /* scheduler_publish_touch_about_page */ $strongarm = new stdClass();
  /* scheduler_publish_touch_about_page */  /* scheduler_publish_touch_about_page */ $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  /* scheduler_publish_touch_about_page */  /* scheduler_publish_touch_about_page */ $strongarm->api_version = 1;
  /* scheduler_publish_touch_about_page */  /* scheduler_publish_touch_about_page */ $strongarm->name = 'scheduler_publish_touch_about_page';
  /* scheduler_publish_touch_about_page */  /* scheduler_publish_touch_about_page */ $strongarm->value = 0;
  $export['scheduler_publish_touch_about_page'] = $strongarm;

  /* scheduler_unpublish_enable_about_page */  /* scheduler_unpublish_enable_about_page */ $strongarm = new stdClass();
  /* scheduler_unpublish_enable_about_page */  /* scheduler_unpublish_enable_about_page */ $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  /* scheduler_unpublish_enable_about_page */  /* scheduler_unpublish_enable_about_page */ $strongarm->api_version = 1;
  /* scheduler_unpublish_enable_about_page */  /* scheduler_unpublish_enable_about_page */ $strongarm->name = 'scheduler_unpublish_enable_about_page';
  /* scheduler_unpublish_enable_about_page */  /* scheduler_unpublish_enable_about_page */ $strongarm->value = 0;
  $export['scheduler_unpublish_enable_about_page'] = $strongarm;

  /* scheduler_unpublish_required_about_page */  /* scheduler_unpublish_required_about_page */ $strongarm = new stdClass();
  /* scheduler_unpublish_required_about_page */  /* scheduler_unpublish_required_about_page */ $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  /* scheduler_unpublish_required_about_page */  /* scheduler_unpublish_required_about_page */ $strongarm->api_version = 1;
  /* scheduler_unpublish_required_about_page */  /* scheduler_unpublish_required_about_page */ $strongarm->name = 'scheduler_unpublish_required_about_page';
  /* scheduler_unpublish_required_about_page */  /* scheduler_unpublish_required_about_page */ $strongarm->value = 0;
  $export['scheduler_unpublish_required_about_page'] = $strongarm;

  /* scheduler_unpublish_revision_about_page */  /* scheduler_unpublish_revision_about_page */ $strongarm = new stdClass();
  /* scheduler_unpublish_revision_about_page */  /* scheduler_unpublish_revision_about_page */ $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  /* scheduler_unpublish_revision_about_page */  /* scheduler_unpublish_revision_about_page */ $strongarm->api_version = 1;
  /* scheduler_unpublish_revision_about_page */  /* scheduler_unpublish_revision_about_page */ $strongarm->name = 'scheduler_unpublish_revision_about_page';
  /* scheduler_unpublish_revision_about_page */  /* scheduler_unpublish_revision_about_page */ $strongarm->value = 0;
  $export['scheduler_unpublish_revision_about_page'] = $strongarm;

  /* scheduler_use_vertical_tabs_about_page */  /* scheduler_use_vertical_tabs_about_page */ $strongarm = new stdClass();
  /* scheduler_use_vertical_tabs_about_page */  /* scheduler_use_vertical_tabs_about_page */ $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  /* scheduler_use_vertical_tabs_about_page */  /* scheduler_use_vertical_tabs_about_page */ $strongarm->api_version = 1;
  /* scheduler_use_vertical_tabs_about_page */  /* scheduler_use_vertical_tabs_about_page */ $strongarm->name = 'scheduler_use_vertical_tabs_about_page';
  /* scheduler_use_vertical_tabs_about_page */  /* scheduler_use_vertical_tabs_about_page */ $strongarm->value = '1';
  $export['scheduler_use_vertical_tabs_about_page'] = $strongarm;

  /* subscriptions_default_workflow_about_page */  /* subscriptions_default_workflow_about_page */ $strongarm = new stdClass();
  /* subscriptions_default_workflow_about_page */  /* subscriptions_default_workflow_about_page */ $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  /* subscriptions_default_workflow_about_page */  /* subscriptions_default_workflow_about_page */ $strongarm->api_version = 1;
  /* subscriptions_default_workflow_about_page */  /* subscriptions_default_workflow_about_page */ $strongarm->name = 'subscriptions_default_workflow_about_page';
  /* subscriptions_default_workflow_about_page */  /* subscriptions_default_workflow_about_page */ $strongarm->value = array(
  /* subscriptions_default_workflow_about_page */  /* subscriptions_default_workflow_about_page */   'n_new' => 'n_new',
  /* subscriptions_default_workflow_about_page */  /* subscriptions_default_workflow_about_page */   'n_unpub' => 'n_unpub',
  /* subscriptions_default_workflow_about_page */  /* subscriptions_default_workflow_about_page */   'n_pub' => 'n_pub',
  /* subscriptions_default_workflow_about_page */  /* subscriptions_default_workflow_about_page */   'c_new' => 'c_new',
  /* subscriptions_default_workflow_about_page */  /* subscriptions_default_workflow_about_page */   'c_unpub' => 'c_unpub',
  /* subscriptions_default_workflow_about_page */  /* subscriptions_default_workflow_about_page */   'c_pub' => 'c_pub',
  /* subscriptions_default_workflow_about_page */  /* subscriptions_default_workflow_about_page */ );
  $export['subscriptions_default_workflow_about_page'] = $strongarm;

  /* subscriptions_workflow_about_page */  /* subscriptions_workflow_about_page */ $strongarm = new stdClass();
  /* subscriptions_workflow_about_page */  /* subscriptions_workflow_about_page */ $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  /* subscriptions_workflow_about_page */  /* subscriptions_workflow_about_page */ $strongarm->api_version = 1;
  /* subscriptions_workflow_about_page */  /* subscriptions_workflow_about_page */ $strongarm->name = 'subscriptions_workflow_about_page';
  /* subscriptions_workflow_about_page */  /* subscriptions_workflow_about_page */ $strongarm->value = array(
  /* subscriptions_workflow_about_page */  /* subscriptions_workflow_about_page */   0 => 'n_new',
  /* subscriptions_workflow_about_page */  /* subscriptions_workflow_about_page */   1 => 'n_unpub',
  /* subscriptions_workflow_about_page */  /* subscriptions_workflow_about_page */   2 => 'n_pub',
  /* subscriptions_workflow_about_page */  /* subscriptions_workflow_about_page */   3 => 'c_new',
  /* subscriptions_workflow_about_page */  /* subscriptions_workflow_about_page */   4 => 'c_unpub',
  /* subscriptions_workflow_about_page */  /* subscriptions_workflow_about_page */   5 => 'c_pub',
  /* subscriptions_workflow_about_page */  /* subscriptions_workflow_about_page */ );
  $export['subscriptions_workflow_about_page'] = $strongarm;

  /* tlcomment_node_about_page */  /* tlcomment_node_about_page */ $strongarm = new stdClass();
  /* tlcomment_node_about_page */  /* tlcomment_node_about_page */ $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  /* tlcomment_node_about_page */  /* tlcomment_node_about_page */ $strongarm->api_version = 1;
  /* tlcomment_node_about_page */  /* tlcomment_node_about_page */ $strongarm->name = 'tlcomment_node_about_page';
  /* tlcomment_node_about_page */  /* tlcomment_node_about_page */ $strongarm->value = 0;
  $export['tlcomment_node_about_page'] = $strongarm;

  return $export;
}
