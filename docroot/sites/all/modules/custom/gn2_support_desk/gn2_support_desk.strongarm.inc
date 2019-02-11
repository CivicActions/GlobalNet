<?php
/**
 * @file
 * gn2_support_desk.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function gn2_support_desk_strongarm() {
  $export = array();

  /* comment_anonymous_support */  /* comment_anonymous_support */ $strongarm = new stdClass();
  /* comment_anonymous_support */  /* comment_anonymous_support */ $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  /* comment_anonymous_support */  /* comment_anonymous_support */ $strongarm->api_version = 1;
  /* comment_anonymous_support */  /* comment_anonymous_support */ $strongarm->name = 'comment_anonymous_support';
  /* comment_anonymous_support */  /* comment_anonymous_support */ $strongarm->value = 0;
  $export['comment_anonymous_support'] = $strongarm;

  /* comment_default_mode_support */  /* comment_default_mode_support */ $strongarm = new stdClass();
  /* comment_default_mode_support */  /* comment_default_mode_support */ $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  /* comment_default_mode_support */  /* comment_default_mode_support */ $strongarm->api_version = 1;
  /* comment_default_mode_support */  /* comment_default_mode_support */ $strongarm->name = 'comment_default_mode_support';
  /* comment_default_mode_support */  /* comment_default_mode_support */ $strongarm->value = 1;
  $export['comment_default_mode_support'] = $strongarm;

  /* comment_default_per_page_support */  /* comment_default_per_page_support */ $strongarm = new stdClass();
  /* comment_default_per_page_support */  /* comment_default_per_page_support */ $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  /* comment_default_per_page_support */  /* comment_default_per_page_support */ $strongarm->api_version = 1;
  /* comment_default_per_page_support */  /* comment_default_per_page_support */ $strongarm->name = 'comment_default_per_page_support';
  /* comment_default_per_page_support */  /* comment_default_per_page_support */ $strongarm->value = '50';
  $export['comment_default_per_page_support'] = $strongarm;

  /* comment_form_location_support */  /* comment_form_location_support */ $strongarm = new stdClass();
  /* comment_form_location_support */  /* comment_form_location_support */ $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  /* comment_form_location_support */  /* comment_form_location_support */ $strongarm->api_version = 1;
  /* comment_form_location_support */  /* comment_form_location_support */ $strongarm->name = 'comment_form_location_support';
  /* comment_form_location_support */  /* comment_form_location_support */ $strongarm->value = 1;
  $export['comment_form_location_support'] = $strongarm;

  /* comment_preview_support */  /* comment_preview_support */ $strongarm = new stdClass();
  /* comment_preview_support */  /* comment_preview_support */ $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  /* comment_preview_support */  /* comment_preview_support */ $strongarm->api_version = 1;
  /* comment_preview_support */  /* comment_preview_support */ $strongarm->name = 'comment_preview_support';
  /* comment_preview_support */  /* comment_preview_support */ $strongarm->value = '0';
  $export['comment_preview_support'] = $strongarm;

  /* comment_subject_field_support */  /* comment_subject_field_support */ $strongarm = new stdClass();
  /* comment_subject_field_support */  /* comment_subject_field_support */ $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  /* comment_subject_field_support */  /* comment_subject_field_support */ $strongarm->api_version = 1;
  /* comment_subject_field_support */  /* comment_subject_field_support */ $strongarm->name = 'comment_subject_field_support';
  /* comment_subject_field_support */  /* comment_subject_field_support */ $strongarm->value = 0;
  $export['comment_subject_field_support'] = $strongarm;

  /* comment_support */  /* comment_support */ $strongarm = new stdClass();
  /* comment_support */  /* comment_support */ $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  /* comment_support */  /* comment_support */ $strongarm->api_version = 1;
  /* comment_support */  /* comment_support */ $strongarm->name = 'comment_support';
  /* comment_support */  /* comment_support */ $strongarm->value = '2';
  $export['comment_support'] = $strongarm;

  /* field_bundle_settings_node__support */  /* field_bundle_settings_node__support */ $strongarm = new stdClass();
  /* field_bundle_settings_node__support */  /* field_bundle_settings_node__support */ $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  /* field_bundle_settings_node__support */  /* field_bundle_settings_node__support */ $strongarm->api_version = 1;
  /* field_bundle_settings_node__support */  /* field_bundle_settings_node__support */ $strongarm->name = 'field_bundle_settings_node__support';
  /* field_bundle_settings_node__support */  /* field_bundle_settings_node__support */ $strongarm->value = array(
  /* field_bundle_settings_node__support */  /* field_bundle_settings_node__support */   'view_modes' => array(
  /* field_bundle_settings_node__support */  /* field_bundle_settings_node__support */     'teaser' => array(
  /* field_bundle_settings_node__support */  /* field_bundle_settings_node__support */       'custom_settings' => TRUE,
  /* field_bundle_settings_node__support */  /* field_bundle_settings_node__support */     ),
  /* field_bundle_settings_node__support */  /* field_bundle_settings_node__support */     'teaserthumb' => array(
  /* field_bundle_settings_node__support */  /* field_bundle_settings_node__support */       'custom_settings' => FALSE,
  /* field_bundle_settings_node__support */  /* field_bundle_settings_node__support */     ),
  /* field_bundle_settings_node__support */  /* field_bundle_settings_node__support */     'events_list' => array(
  /* field_bundle_settings_node__support */  /* field_bundle_settings_node__support */       'custom_settings' => FALSE,
  /* field_bundle_settings_node__support */  /* field_bundle_settings_node__support */     ),
  /* field_bundle_settings_node__support */  /* field_bundle_settings_node__support */     'one_column_teaser' => array(
  /* field_bundle_settings_node__support */  /* field_bundle_settings_node__support */       'custom_settings' => FALSE,
  /* field_bundle_settings_node__support */  /* field_bundle_settings_node__support */     ),
  /* field_bundle_settings_node__support */  /* field_bundle_settings_node__support */     'title_and_time' => array(
  /* field_bundle_settings_node__support */  /* field_bundle_settings_node__support */       'custom_settings' => FALSE,
  /* field_bundle_settings_node__support */  /* field_bundle_settings_node__support */     ),
  /* field_bundle_settings_node__support */  /* field_bundle_settings_node__support */     'time_and_location' => array(
  /* field_bundle_settings_node__support */  /* field_bundle_settings_node__support */       'custom_settings' => FALSE,
  /* field_bundle_settings_node__support */  /* field_bundle_settings_node__support */     ),
  /* field_bundle_settings_node__support */  /* field_bundle_settings_node__support */     'sidebar_teaser_v2' => array(
  /* field_bundle_settings_node__support */  /* field_bundle_settings_node__support */       'custom_settings' => FALSE,
  /* field_bundle_settings_node__support */  /* field_bundle_settings_node__support */     ),
  /* field_bundle_settings_node__support */  /* field_bundle_settings_node__support */     'sidebar_' => array(
  /* field_bundle_settings_node__support */  /* field_bundle_settings_node__support */       'custom_settings' => FALSE,
  /* field_bundle_settings_node__support */  /* field_bundle_settings_node__support */     ),
  /* field_bundle_settings_node__support */  /* field_bundle_settings_node__support */     'search_teaser' => array(
  /* field_bundle_settings_node__support */  /* field_bundle_settings_node__support */       'custom_settings' => FALSE,
  /* field_bundle_settings_node__support */  /* field_bundle_settings_node__support */     ),
  /* field_bundle_settings_node__support */  /* field_bundle_settings_node__support */     'featured_publication' => array(
  /* field_bundle_settings_node__support */  /* field_bundle_settings_node__support */       'custom_settings' => FALSE,
  /* field_bundle_settings_node__support */  /* field_bundle_settings_node__support */     ),
  /* field_bundle_settings_node__support */  /* field_bundle_settings_node__support */     'post_teaser_group_landing_page' => array(
  /* field_bundle_settings_node__support */  /* field_bundle_settings_node__support */       'custom_settings' => FALSE,
  /* field_bundle_settings_node__support */  /* field_bundle_settings_node__support */     ),
  /* field_bundle_settings_node__support */  /* field_bundle_settings_node__support */     'group_teaser' => array(
  /* field_bundle_settings_node__support */  /* field_bundle_settings_node__support */       'custom_settings' => FALSE,
  /* field_bundle_settings_node__support */  /* field_bundle_settings_node__support */     ),
  /* field_bundle_settings_node__support */  /* field_bundle_settings_node__support */     'full' => array(
  /* field_bundle_settings_node__support */  /* field_bundle_settings_node__support */       'custom_settings' => FALSE,
  /* field_bundle_settings_node__support */  /* field_bundle_settings_node__support */     ),
  /* field_bundle_settings_node__support */  /* field_bundle_settings_node__support */     'rss' => array(
  /* field_bundle_settings_node__support */  /* field_bundle_settings_node__support */       'custom_settings' => FALSE,
  /* field_bundle_settings_node__support */  /* field_bundle_settings_node__support */     ),
  /* field_bundle_settings_node__support */  /* field_bundle_settings_node__support */     'diff_standard' => array(
  /* field_bundle_settings_node__support */  /* field_bundle_settings_node__support */       'custom_settings' => FALSE,
  /* field_bundle_settings_node__support */  /* field_bundle_settings_node__support */     ),
  /* field_bundle_settings_node__support */  /* field_bundle_settings_node__support */     'media_gallery_block' => array(
  /* field_bundle_settings_node__support */  /* field_bundle_settings_node__support */       'custom_settings' => FALSE,
  /* field_bundle_settings_node__support */  /* field_bundle_settings_node__support */     ),
  /* field_bundle_settings_node__support */  /* field_bundle_settings_node__support */     'token' => array(
  /* field_bundle_settings_node__support */  /* field_bundle_settings_node__support */       'custom_settings' => FALSE,
  /* field_bundle_settings_node__support */  /* field_bundle_settings_node__support */     ),
  /* field_bundle_settings_node__support */  /* field_bundle_settings_node__support */   ),
  /* field_bundle_settings_node__support */  /* field_bundle_settings_node__support */   'extra_fields' => array(
  /* field_bundle_settings_node__support */  /* field_bundle_settings_node__support */     'form' => array(
  /* field_bundle_settings_node__support */  /* field_bundle_settings_node__support */       'title' => array(
  /* field_bundle_settings_node__support */  /* field_bundle_settings_node__support */         'weight' => '0',
  /* field_bundle_settings_node__support */  /* field_bundle_settings_node__support */       ),
  /* field_bundle_settings_node__support */  /* field_bundle_settings_node__support */       'path' => array(
  /* field_bundle_settings_node__support */  /* field_bundle_settings_node__support */         'weight' => '10',
  /* field_bundle_settings_node__support */  /* field_bundle_settings_node__support */       ),
  /* field_bundle_settings_node__support */  /* field_bundle_settings_node__support */       'redirect' => array(
  /* field_bundle_settings_node__support */  /* field_bundle_settings_node__support */         'weight' => '11',
  /* field_bundle_settings_node__support */  /* field_bundle_settings_node__support */       ),
  /* field_bundle_settings_node__support */  /* field_bundle_settings_node__support */     ),
  /* field_bundle_settings_node__support */  /* field_bundle_settings_node__support */     'display' => array(),
  /* field_bundle_settings_node__support */  /* field_bundle_settings_node__support */   ),
  /* field_bundle_settings_node__support */  /* field_bundle_settings_node__support */ );
  $export['field_bundle_settings_node__support'] = $strongarm;

  /* jira_rest_cache_lifetime */  /* jira_rest_cache_lifetime */ $strongarm = new stdClass();
  /* jira_rest_cache_lifetime */  /* jira_rest_cache_lifetime */ $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  /* jira_rest_cache_lifetime */  /* jira_rest_cache_lifetime */ $strongarm->api_version = 1;
  /* jira_rest_cache_lifetime */  /* jira_rest_cache_lifetime */ $strongarm->name = 'jira_rest_cache_lifetime';
  /* jira_rest_cache_lifetime */  /* jira_rest_cache_lifetime */ $strongarm->value = '0';
  $export['jira_rest_cache_lifetime'] = $strongarm;

  /* jira_rest_close_issue_transition_id */  /* jira_rest_close_issue_transition_id */ $strongarm = new stdClass();
  /* jira_rest_close_issue_transition_id */  /* jira_rest_close_issue_transition_id */ $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  /* jira_rest_close_issue_transition_id */  /* jira_rest_close_issue_transition_id */ $strongarm->api_version = 1;
  /* jira_rest_close_issue_transition_id */  /* jira_rest_close_issue_transition_id */ $strongarm->name = 'jira_rest_close_issue_transition_id';
  /* jira_rest_close_issue_transition_id */  /* jira_rest_close_issue_transition_id */ $strongarm->value = '2';
  $export['jira_rest_close_issue_transition_id'] = $strongarm;

  /* jira_rest_jirainstanceurl */  /* jira_rest_jirainstanceurl */ $strongarm = new stdClass();
  /* jira_rest_jirainstanceurl */  /* jira_rest_jirainstanceurl */ $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  /* jira_rest_jirainstanceurl */  /* jira_rest_jirainstanceurl */ $strongarm->api_version = 1;
  /* jira_rest_jirainstanceurl */  /* jira_rest_jirainstanceurl */ $strongarm->name = 'jira_rest_jirainstanceurl';
  /* jira_rest_jirainstanceurl */  /* jira_rest_jirainstanceurl */ $strongarm->value = '';
  $export['jira_rest_jirainstanceurl'] = $strongarm;

  /* jira_rest_password */  /* jira_rest_password */ $strongarm = new stdClass();
  /* jira_rest_password */  /* jira_rest_password */ $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  /* jira_rest_password */  /* jira_rest_password */ $strongarm->api_version = 1;
  /* jira_rest_password */  /* jira_rest_password */ $strongarm->name = 'jira_rest_password';
  /* jira_rest_password */  /* jira_rest_password */ $strongarm->value = '';
  $export['jira_rest_password'] = $strongarm;

  /* jira_rest_resolve_issue_transition_id */  /* jira_rest_resolve_issue_transition_id */ $strongarm = new stdClass();
  /* jira_rest_resolve_issue_transition_id */  /* jira_rest_resolve_issue_transition_id */ $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  /* jira_rest_resolve_issue_transition_id */  /* jira_rest_resolve_issue_transition_id */ $strongarm->api_version = 1;
  /* jira_rest_resolve_issue_transition_id */  /* jira_rest_resolve_issue_transition_id */ $strongarm->name = 'jira_rest_resolve_issue_transition_id';
  /* jira_rest_resolve_issue_transition_id */  /* jira_rest_resolve_issue_transition_id */ $strongarm->value = '5';
  $export['jira_rest_resolve_issue_transition_id'] = $strongarm;

  /* jira_rest_username */  /* jira_rest_username */ $strongarm = new stdClass();
  /* jira_rest_username */  /* jira_rest_username */ $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  /* jira_rest_username */  /* jira_rest_username */ $strongarm->api_version = 1;
  /* jira_rest_username */  /* jira_rest_username */ $strongarm->name = 'jira_rest_username';
  /* jira_rest_username */  /* jira_rest_username */ $strongarm->value = '';
  $export['jira_rest_username'] = $strongarm;

  /* language_content_type_support */  /* language_content_type_support */ $strongarm = new stdClass();
  /* language_content_type_support */  /* language_content_type_support */ $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  /* language_content_type_support */  /* language_content_type_support */ $strongarm->api_version = 1;
  /* language_content_type_support */  /* language_content_type_support */ $strongarm->name = 'language_content_type_support';
  /* language_content_type_support */  /* language_content_type_support */ $strongarm->value = '0';
  $export['language_content_type_support'] = $strongarm;

  /* menu_options_support */  /* menu_options_support */ $strongarm = new stdClass();
  /* menu_options_support */  /* menu_options_support */ $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  /* menu_options_support */  /* menu_options_support */ $strongarm->api_version = 1;
  /* menu_options_support */  /* menu_options_support */ $strongarm->name = 'menu_options_support';
  /* menu_options_support */  /* menu_options_support */ $strongarm->value = array(
  /* menu_options_support */  /* menu_options_support */   0 => 'main-menu',
  /* menu_options_support */  /* menu_options_support */ );
  $export['menu_options_support'] = $strongarm;

  /* menu_parent_support */  /* menu_parent_support */ $strongarm = new stdClass();
  /* menu_parent_support */  /* menu_parent_support */ $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  /* menu_parent_support */  /* menu_parent_support */ $strongarm->api_version = 1;
  /* menu_parent_support */  /* menu_parent_support */ $strongarm->name = 'menu_parent_support';
  /* menu_parent_support */  /* menu_parent_support */ $strongarm->value = 'main-menu:0';
  $export['menu_parent_support'] = $strongarm;

  /* node_options_support */  /* node_options_support */ $strongarm = new stdClass();
  /* node_options_support */  /* node_options_support */ $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  /* node_options_support */  /* node_options_support */ $strongarm->api_version = 1;
  /* node_options_support */  /* node_options_support */ $strongarm->name = 'node_options_support';
  /* node_options_support */  /* node_options_support */ $strongarm->value = array(
  /* node_options_support */  /* node_options_support */   0 => 'status',
  /* node_options_support */  /* node_options_support */ );
  $export['node_options_support'] = $strongarm;

  /* node_preview_support */  /* node_preview_support */ $strongarm = new stdClass();
  /* node_preview_support */  /* node_preview_support */ $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  /* node_preview_support */  /* node_preview_support */ $strongarm->api_version = 1;
  /* node_preview_support */  /* node_preview_support */ $strongarm->name = 'node_preview_support';
  /* node_preview_support */  /* node_preview_support */ $strongarm->value = '0';
  $export['node_preview_support'] = $strongarm;

  /* node_submitted_support */  /* node_submitted_support */ $strongarm = new stdClass();
  /* node_submitted_support */  /* node_submitted_support */ $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  /* node_submitted_support */  /* node_submitted_support */ $strongarm->api_version = 1;
  /* node_submitted_support */  /* node_submitted_support */ $strongarm->name = 'node_submitted_support';
  /* node_submitted_support */  /* node_submitted_support */ $strongarm->value = 0;
  $export['node_submitted_support'] = $strongarm;

  /* simplify_comments_support */  /* simplify_comments_support */ $strongarm = new stdClass();
  /* simplify_comments_support */  /* simplify_comments_support */ $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  /* simplify_comments_support */  /* simplify_comments_support */ $strongarm->api_version = 1;
  /* simplify_comments_support */  /* simplify_comments_support */ $strongarm->name = 'simplify_comments_support';
  /* simplify_comments_support */  /* simplify_comments_support */ $strongarm->value = array();
  $export['simplify_comments_support'] = $strongarm;

  /* simplify_nodes_support */  /* simplify_nodes_support */ $strongarm = new stdClass();
  /* simplify_nodes_support */  /* simplify_nodes_support */ $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  /* simplify_nodes_support */  /* simplify_nodes_support */ $strongarm->api_version = 1;
  /* simplify_nodes_support */  /* simplify_nodes_support */ $strongarm->name = 'simplify_nodes_support';
  /* simplify_nodes_support */  /* simplify_nodes_support */ $strongarm->value = array(
  /* simplify_nodes_support */  /* simplify_nodes_support */   0 => 'author',
  /* simplify_nodes_support */  /* simplify_nodes_support */   1 => 'format',
  /* simplify_nodes_support */  /* simplify_nodes_support */   2 => 'options',
  /* simplify_nodes_support */  /* simplify_nodes_support */   3 => 'revision',
  /* simplify_nodes_support */  /* simplify_nodes_support */   4 => 'comment',
  /* simplify_nodes_support */  /* simplify_nodes_support */   5 => 'menu',
  /* simplify_nodes_support */  /* simplify_nodes_support */   6 => 'path',
  /* simplify_nodes_support */  /* simplify_nodes_support */   7 => 'redirect',
  /* simplify_nodes_support */  /* simplify_nodes_support */ );
  $export['simplify_nodes_support'] = $strongarm;

  /* track_field_changes_basic_new_support */  /* track_field_changes_basic_new_support */ $strongarm = new stdClass();
  /* track_field_changes_basic_new_support */  /* track_field_changes_basic_new_support */ $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  /* track_field_changes_basic_new_support */  /* track_field_changes_basic_new_support */ $strongarm->api_version = 1;
  /* track_field_changes_basic_new_support */  /* track_field_changes_basic_new_support */ $strongarm->name = 'track_field_changes_basic_new_support';
  /* track_field_changes_basic_new_support */  /* track_field_changes_basic_new_support */ $strongarm->value = 1;
  $export['track_field_changes_basic_new_support'] = $strongarm;

  /* track_field_changes_basic_revision_support */  /* track_field_changes_basic_revision_support */ $strongarm = new stdClass();
  /* track_field_changes_basic_revision_support */  /* track_field_changes_basic_revision_support */ $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  /* track_field_changes_basic_revision_support */  /* track_field_changes_basic_revision_support */ $strongarm->api_version = 1;
  /* track_field_changes_basic_revision_support */  /* track_field_changes_basic_revision_support */ $strongarm->name = 'track_field_changes_basic_revision_support';
  /* track_field_changes_basic_revision_support */  /* track_field_changes_basic_revision_support */ $strongarm->value = 1;
  $export['track_field_changes_basic_revision_support'] = $strongarm;

  /* track_field_changes_disable_multiple */  /* track_field_changes_disable_multiple */ $strongarm = new stdClass();
  /* track_field_changes_disable_multiple */  /* track_field_changes_disable_multiple */ $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  /* track_field_changes_disable_multiple */  /* track_field_changes_disable_multiple */ $strongarm->api_version = 1;
  /* track_field_changes_disable_multiple */  /* track_field_changes_disable_multiple */ $strongarm->name = 'track_field_changes_disable_multiple';
  /* track_field_changes_disable_multiple */  /* track_field_changes_disable_multiple */ $strongarm->value = array(
  /* track_field_changes_disable_multiple */  /* track_field_changes_disable_multiple */   'checked' => 0,
  /* track_field_changes_disable_multiple */  /* track_field_changes_disable_multiple */ );
  $export['track_field_changes_disable_multiple'] = $strongarm;

  /* track_field_changes_enable_log_support */  /* track_field_changes_enable_log_support */ $strongarm = new stdClass();
  /* track_field_changes_enable_log_support */  /* track_field_changes_enable_log_support */ $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  /* track_field_changes_enable_log_support */  /* track_field_changes_enable_log_support */ $strongarm->api_version = 1;
  /* track_field_changes_enable_log_support */  /* track_field_changes_enable_log_support */ $strongarm->name = 'track_field_changes_enable_log_support';
  /* track_field_changes_enable_log_support */  /* track_field_changes_enable_log_support */ $strongarm->value = 0;
  $export['track_field_changes_enable_log_support'] = $strongarm;

  /* track_field_changes_node_types */  /* track_field_changes_node_types */ $strongarm = new stdClass();
  /* track_field_changes_node_types */  /* track_field_changes_node_types */ $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  /* track_field_changes_node_types */  /* track_field_changes_node_types */ $strongarm->api_version = 1;
  /* track_field_changes_node_types */  /* track_field_changes_node_types */ $strongarm->name = 'track_field_changes_node_types';
  /* track_field_changes_node_types */  /* track_field_changes_node_types */ $strongarm->value = array(
  /* track_field_changes_node_types */  /* track_field_changes_node_types */   'support' => 'support',
  /* track_field_changes_node_types */  /* track_field_changes_node_types */   'about_page' => 0,
  /* track_field_changes_node_types */  /* track_field_changes_node_types */   'announcement' => 0,
  /* track_field_changes_node_types */  /* track_field_changes_node_types */   'course' => 0,
  /* track_field_changes_node_types */  /* track_field_changes_node_types */   'course_group' => 0,
  /* track_field_changes_node_types */  /* track_field_changes_node_types */   'program' => 0,
  /* track_field_changes_node_types */  /* track_field_changes_node_types */   'event' => 0,
  /* track_field_changes_node_types */  /* track_field_changes_node_types */   'media_gallery' => 0,
  /* track_field_changes_node_types */  /* track_field_changes_node_types */   'group' => 0,
  /* track_field_changes_node_types */  /* track_field_changes_node_types */   'help' => 0,
  /* track_field_changes_node_types */  /* track_field_changes_node_types */   'news' => 0,
  /* track_field_changes_node_types */  /* track_field_changes_node_types */   'organization' => 0,
  /* track_field_changes_node_types */  /* track_field_changes_node_types */   'page' => 0,
  /* track_field_changes_node_types */  /* track_field_changes_node_types */   'panel' => 0,
  /* track_field_changes_node_types */  /* track_field_changes_node_types */   'poll' => 0,
  /* track_field_changes_node_types */  /* track_field_changes_node_types */   'post' => 0,
  /* track_field_changes_node_types */  /* track_field_changes_node_types */   'publication' => 0,
  /* track_field_changes_node_types */  /* track_field_changes_node_types */ );
  $export['track_field_changes_node_types'] = $strongarm;

  /* track_field_changes_track_revision_fields_support */  /* track_field_changes_track_revision_fields_support */ $strongarm = new stdClass();
  /* track_field_changes_track_revision_fields_support */  /* track_field_changes_track_revision_fields_support */ $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  /* track_field_changes_track_revision_fields_support */  /* track_field_changes_track_revision_fields_support */ $strongarm->api_version = 1;
  /* track_field_changes_track_revision_fields_support */  /* track_field_changes_track_revision_fields_support */ $strongarm->name = 'track_field_changes_track_revision_fields_support';
  /* track_field_changes_track_revision_fields_support */  /* track_field_changes_track_revision_fields_support */ $strongarm->value = 1;
  $export['track_field_changes_track_revision_fields_support'] = $strongarm;

  return $export;
}
