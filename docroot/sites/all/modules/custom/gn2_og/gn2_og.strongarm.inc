<?php
/**
 * @file
 * gn2_og.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function gn2_og_strongarm() {
  $export = array();

  /* i18n_node_extended_group */  /* i18n_node_extended_group */ $strongarm = new stdClass();
  /* i18n_node_extended_group */  /* i18n_node_extended_group */ $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  /* i18n_node_extended_group */  /* i18n_node_extended_group */ $strongarm->api_version = 1;
  /* i18n_node_extended_group */  /* i18n_node_extended_group */ $strongarm->name = 'i18n_node_extended_group';
  /* i18n_node_extended_group */  /* i18n_node_extended_group */ $strongarm->value = '1';
  $export['i18n_node_extended_group'] = $strongarm;

  /* i18n_node_options_group */  /* i18n_node_options_group */ $strongarm = new stdClass();
  /* i18n_node_options_group */  /* i18n_node_options_group */ $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  /* i18n_node_options_group */  /* i18n_node_options_group */ $strongarm->api_version = 1;
  /* i18n_node_options_group */  /* i18n_node_options_group */ $strongarm->name = 'i18n_node_options_group';
  /* i18n_node_options_group */  /* i18n_node_options_group */ $strongarm->value = array();
  $export['i18n_node_options_group'] = $strongarm;

  /* i18n_sync_node_type_group */  /* i18n_sync_node_type_group */ $strongarm = new stdClass();
  /* i18n_sync_node_type_group */  /* i18n_sync_node_type_group */ $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  /* i18n_sync_node_type_group */  /* i18n_sync_node_type_group */ $strongarm->api_version = 1;
  /* i18n_sync_node_type_group */  /* i18n_sync_node_type_group */ $strongarm->name = 'i18n_sync_node_type_group';
  /* i18n_sync_node_type_group */  /* i18n_sync_node_type_group */ $strongarm->value = array();
  $export['i18n_sync_node_type_group'] = $strongarm;

  /* i18n_sync_node_type_organization */  /* i18n_sync_node_type_organization */ $strongarm = new stdClass();
  /* i18n_sync_node_type_organization */  /* i18n_sync_node_type_organization */ $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  /* i18n_sync_node_type_organization */  /* i18n_sync_node_type_organization */ $strongarm->api_version = 1;
  /* i18n_sync_node_type_organization */  /* i18n_sync_node_type_organization */ $strongarm->name = 'i18n_sync_node_type_organization';
  /* i18n_sync_node_type_organization */  /* i18n_sync_node_type_organization */ $strongarm->value = array();
  $export['i18n_sync_node_type_organization'] = $strongarm;

  /* language_content_type_group */  /* language_content_type_group */ $strongarm = new stdClass();
  /* language_content_type_group */  /* language_content_type_group */ $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  /* language_content_type_group */  /* language_content_type_group */ $strongarm->api_version = 1;
  /* language_content_type_group */  /* language_content_type_group */ $strongarm->name = 'language_content_type_group';
  /* language_content_type_group */  /* language_content_type_group */ $strongarm->value = '0';
  $export['language_content_type_group'] = $strongarm;

  /* language_content_type_organization */  /* language_content_type_organization */ $strongarm = new stdClass();
  /* language_content_type_organization */  /* language_content_type_organization */ $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  /* language_content_type_organization */  /* language_content_type_organization */ $strongarm->api_version = 1;
  /* language_content_type_organization */  /* language_content_type_organization */ $strongarm->name = 'language_content_type_organization';
  /* language_content_type_organization */  /* language_content_type_organization */ $strongarm->value = '0';
  $export['language_content_type_organization'] = $strongarm;

  /* og_context_negotiation_group_context */  /* og_context_negotiation_group_context */ $strongarm = new stdClass();
  /* og_context_negotiation_group_context */  /* og_context_negotiation_group_context */ $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  /* og_context_negotiation_group_context */  /* og_context_negotiation_group_context */ $strongarm->api_version = 1;
  /* og_context_negotiation_group_context */  /* og_context_negotiation_group_context */ $strongarm->name = 'og_context_negotiation_group_context';
  /* og_context_negotiation_group_context */  /* og_context_negotiation_group_context */ $strongarm->value = array(
  /* og_context_negotiation_group_context */  /* og_context_negotiation_group_context */   'url' => array(),
  /* og_context_negotiation_group_context */  /* og_context_negotiation_group_context */   'node' => array(),
  /* og_context_negotiation_group_context */  /* og_context_negotiation_group_context */   'user-view' => array(),
  /* og_context_negotiation_group_context */  /* og_context_negotiation_group_context */   'user-edit' => array(),
  /* og_context_negotiation_group_context */  /* og_context_negotiation_group_context */   'comment' => array(),
  /* og_context_negotiation_group_context */  /* og_context_negotiation_group_context */ );
  $export['og_context_negotiation_group_context'] = $strongarm;

  /* og_context_providers_weight_group_context */  /* og_context_providers_weight_group_context */ $strongarm = new stdClass();
  /* og_context_providers_weight_group_context */  /* og_context_providers_weight_group_context */ $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  /* og_context_providers_weight_group_context */  /* og_context_providers_weight_group_context */ $strongarm->api_version = 1;
  /* og_context_providers_weight_group_context */  /* og_context_providers_weight_group_context */ $strongarm->name = 'og_context_providers_weight_group_context';
  /* og_context_providers_weight_group_context */  /* og_context_providers_weight_group_context */ $strongarm->value = array(
  /* og_context_providers_weight_group_context */  /* og_context_providers_weight_group_context */   'url' => '-5',
  /* og_context_providers_weight_group_context */  /* og_context_providers_weight_group_context */   'node' => '-4',
  /* og_context_providers_weight_group_context */  /* og_context_providers_weight_group_context */   'user-edit' => '0',
  /* og_context_providers_weight_group_context */  /* og_context_providers_weight_group_context */   'comment' => '0',
  /* og_context_providers_weight_group_context */  /* og_context_providers_weight_group_context */   'user-view' => '0',
  /* og_context_providers_weight_group_context */  /* og_context_providers_weight_group_context */ );
  $export['og_context_providers_weight_group_context'] = $strongarm;

  /* og_features_ignore_og_fields */  /* og_features_ignore_og_fields */ $strongarm = new stdClass();
  /* og_features_ignore_og_fields */  /* og_features_ignore_og_fields */ $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  /* og_features_ignore_og_fields */  /* og_features_ignore_og_fields */ $strongarm->api_version = 1;
  /* og_features_ignore_og_fields */  /* og_features_ignore_og_fields */ $strongarm->name = 'og_features_ignore_og_fields';
  /* og_features_ignore_og_fields */  /* og_features_ignore_og_fields */ $strongarm->value = 0;
  $export['og_features_ignore_og_fields'] = $strongarm;

  /* og_group_manager_default_rids_node_group */  /* og_group_manager_default_rids_node_group */ $strongarm = new stdClass();
  /* og_group_manager_default_rids_node_group */  /* og_group_manager_default_rids_node_group */ $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  /* og_group_manager_default_rids_node_group */  /* og_group_manager_default_rids_node_group */ $strongarm->api_version = 1;
  /* og_group_manager_default_rids_node_group */  /* og_group_manager_default_rids_node_group */ $strongarm->name = 'og_group_manager_default_rids_node_group';
  /* og_group_manager_default_rids_node_group */  /* og_group_manager_default_rids_node_group */ $strongarm->value = array(
  /* og_group_manager_default_rids_node_group */  /* og_group_manager_default_rids_node_group */   18 => '18',
  /* og_group_manager_default_rids_node_group */  /* og_group_manager_default_rids_node_group */ );
  $export['og_group_manager_default_rids_node_group'] = $strongarm;

  /* og_group_manager_full_access */  /* og_group_manager_full_access */ $strongarm = new stdClass();
  /* og_group_manager_full_access */  /* og_group_manager_full_access */ $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  /* og_group_manager_full_access */  /* og_group_manager_full_access */ $strongarm->api_version = 1;
  /* og_group_manager_full_access */  /* og_group_manager_full_access */ $strongarm->name = 'og_group_manager_full_access';
  /* og_group_manager_full_access */  /* og_group_manager_full_access */ $strongarm->value = 0;
  $export['og_group_manager_full_access'] = $strongarm;

  /* og_node_access_strict */  /* og_node_access_strict */ $strongarm = new stdClass();
  /* og_node_access_strict */  /* og_node_access_strict */ $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  /* og_node_access_strict */  /* og_node_access_strict */ $strongarm->api_version = 1;
  /* og_node_access_strict */  /* og_node_access_strict */ $strongarm->name = 'og_node_access_strict';
  /* og_node_access_strict */  /* og_node_access_strict */ $strongarm->value = 1;
  $export['og_node_access_strict'] = $strongarm;

  /* og_orphans_delete */  /* og_orphans_delete */ $strongarm = new stdClass();
  /* og_orphans_delete */  /* og_orphans_delete */ $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  /* og_orphans_delete */  /* og_orphans_delete */ $strongarm->api_version = 1;
  /* og_orphans_delete */  /* og_orphans_delete */ $strongarm->name = 'og_orphans_delete';
  /* og_orphans_delete */  /* og_orphans_delete */ $strongarm->value = 0;
  $export['og_orphans_delete'] = $strongarm;

  /* og_ui_admin_people_view */  /* og_ui_admin_people_view */ $strongarm = new stdClass();
  /* og_ui_admin_people_view */  /* og_ui_admin_people_view */ $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  /* og_ui_admin_people_view */  /* og_ui_admin_people_view */ $strongarm->api_version = 1;
  /* og_ui_admin_people_view */  /* og_ui_admin_people_view */ $strongarm->name = 'og_ui_admin_people_view';
  /* og_ui_admin_people_view */  /* og_ui_admin_people_view */ $strongarm->value = 'og_members_admin_override:default';
  $export['og_ui_admin_people_view'] = $strongarm;

  /* og_use_queue */  /* og_use_queue */ $strongarm = new stdClass();
  /* og_use_queue */  /* og_use_queue */ $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  /* og_use_queue */  /* og_use_queue */ $strongarm->api_version = 1;
  /* og_use_queue */  /* og_use_queue */ $strongarm->name = 'og_use_queue';
  /* og_use_queue */  /* og_use_queue */ $strongarm->value = 0;
  $export['og_use_queue'] = $strongarm;

  return $export;
}
