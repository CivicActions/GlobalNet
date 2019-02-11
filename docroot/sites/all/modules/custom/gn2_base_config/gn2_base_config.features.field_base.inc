<?php
/**
 * @file
 * gn2_base_config.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function gn2_base_config_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'body'.
  $field_bases['body'] = array(
  /* body */   'active' => 1,
  /* body */   'cardinality' => 1,
  /* body */   'deleted' => 0,
  /* body */   'entity_types' => array(
  /* body */     0 => 'node',
  /* body */   ),
  /* body */   'field_name' => 'body',
  /* body */   'indexes' => array(
  /* body */     'format' => array(
  /* body */       0 => 'format',
  /* body */     ),
  /* body */   ),
  /* body */   'locked' => 0,
  /* body */   'module' => 'text',
  /* body */   'settings' => array(),
  /* body */   'translatable' => 0,
  /* body */   'type' => 'text_with_summary',
  /* body */ );

  // Exported field_base: 'comment_body'.
  $field_bases['comment_body'] = array(
  /* comment_body */   'active' => 1,
  /* comment_body */   'cardinality' => 1,
  /* comment_body */   'deleted' => 0,
  /* comment_body */   'entity_types' => array(
  /* comment_body */     0 => 'comment',
  /* comment_body */   ),
  /* comment_body */   'field_name' => 'comment_body',
  /* comment_body */   'indexes' => array(
  /* comment_body */     'format' => array(
  /* comment_body */       0 => 'format',
  /* comment_body */     ),
  /* comment_body */   ),
  /* comment_body */   'locked' => 0,
  /* comment_body */   'module' => 'text',
  /* comment_body */   'settings' => array(),
  /* comment_body */   'translatable' => 0,
  /* comment_body */   'type' => 'text_long',
  /* comment_body */ );

  // Exported field_base: 'field_additional_images'.
  $field_bases['field_additional_images'] = array(
  /* field_additional_images */   'active' => 1,
  /* field_additional_images */   'cardinality' => 3,
  /* field_additional_images */   'deleted' => 0,
  /* field_additional_images */   'entity_types' => array(),
  /* field_additional_images */   'field_name' => 'field_additional_images',
  /* field_additional_images */   'indexes' => array(
  /* field_additional_images */     'fid' => array(
  /* field_additional_images */       0 => 'fid',
  /* field_additional_images */     ),
  /* field_additional_images */   ),
  /* field_additional_images */   'locked' => 0,
  /* field_additional_images */   'module' => 'image',
  /* field_additional_images */   'settings' => array(
  /* field_additional_images */     'default_image' => 0,
  /* field_additional_images */     'uri_scheme' => 'private',
  /* field_additional_images */   ),
  /* field_additional_images */   'translatable' => 0,
  /* field_additional_images */   'type' => 'image',
  /* field_additional_images */ );

  // Exported field_base: 'field_addl_contact_info'.
  $field_bases['field_addl_contact_info'] = array(
  /* field_addl_contact_info */   'active' => 1,
  /* field_addl_contact_info */   'cardinality' => 1,
  /* field_addl_contact_info */   'deleted' => 0,
  /* field_addl_contact_info */   'entity_types' => array(),
  /* field_addl_contact_info */   'field_name' => 'field_addl_contact_info',
  /* field_addl_contact_info */   'indexes' => array(
  /* field_addl_contact_info */     'format' => array(
  /* field_addl_contact_info */       0 => 'format',
  /* field_addl_contact_info */     ),
  /* field_addl_contact_info */   ),
  /* field_addl_contact_info */   'locked' => 0,
  /* field_addl_contact_info */   'module' => 'text',
  /* field_addl_contact_info */   'settings' => array(),
  /* field_addl_contact_info */   'translatable' => 0,
  /* field_addl_contact_info */   'type' => 'text_long',
  /* field_addl_contact_info */ );

  // Exported field_base: 'field_admin_content'.
  $field_bases['field_admin_content'] = array(
  /* field_admin_content */   'active' => 1,
  /* field_admin_content */   'cardinality' => 1,
  /* field_admin_content */   'deleted' => 0,
  /* field_admin_content */   'entity_types' => array(),
  /* field_admin_content */   'field_name' => 'field_admin_content',
  /* field_admin_content */   'indexes' => array(
  /* field_admin_content */     'tid' => array(
  /* field_admin_content */       0 => 'tid',
  /* field_admin_content */     ),
  /* field_admin_content */   ),
  /* field_admin_content */   'locked' => 0,
  /* field_admin_content */   'module' => 'taxonomy',
  /* field_admin_content */   'settings' => array(
  /* field_admin_content */     'allowed_values' => array(
  /* field_admin_content */       0 => array(
  /* field_admin_content */         'vocabulary' => 'admin_content',
  /* field_admin_content */         'parent' => 0,
  /* field_admin_content */       ),
  /* field_admin_content */     ),
  /* field_admin_content */     'options_list_callback' => NULL,
  /* field_admin_content */   ),
  /* field_admin_content */   'translatable' => 0,
  /* field_admin_content */   'type' => 'taxonomy_term_reference',
  /* field_admin_content */ );

  // Exported field_base: 'field_administration'.
  $field_bases['field_administration'] = array(
  /* field_administration */   'active' => 1,
  /* field_administration */   'cardinality' => 1,
  /* field_administration */   'deleted' => 0,
  /* field_administration */   'entity_types' => array(),
  /* field_administration */   'field_name' => 'field_administration',
  /* field_administration */   'indexes' => array(
  /* field_administration */     'format' => array(
  /* field_administration */       0 => 'format',
  /* field_administration */     ),
  /* field_administration */   ),
  /* field_administration */   'locked' => 0,
  /* field_administration */   'module' => 'text',
  /* field_administration */   'settings' => array(),
  /* field_administration */   'translatable' => 0,
  /* field_administration */   'type' => 'text_long',
  /* field_administration */ );

  // Exported field_base: 'field_allow_account_request'.
  $field_bases['field_allow_account_request'] = array(
  /* field_allow_account_request */   'active' => 1,
  /* field_allow_account_request */   'cardinality' => 1,
  /* field_allow_account_request */   'deleted' => 0,
  /* field_allow_account_request */   'entity_types' => array(),
  /* field_allow_account_request */   'field_name' => 'field_allow_account_request',
  /* field_allow_account_request */   'indexes' => array(
  /* field_allow_account_request */     'value' => array(
  /* field_allow_account_request */       0 => 'value',
  /* field_allow_account_request */     ),
  /* field_allow_account_request */   ),
  /* field_allow_account_request */   'locked' => 0,
  /* field_allow_account_request */   'module' => 'list',
  /* field_allow_account_request */   'settings' => array(
  /* field_allow_account_request */     'allowed_values' => array(
  /* field_allow_account_request */       0 => '',
  /* field_allow_account_request */       1 => '',
  /* field_allow_account_request */     ),
  /* field_allow_account_request */     'allowed_values_function' => '',
  /* field_allow_account_request */   ),
  /* field_allow_account_request */   'translatable' => 0,
  /* field_allow_account_request */   'type' => 'list_boolean',
  /* field_allow_account_request */ );

  // Exported field_base: 'field_alumni_specialist'.
  $field_bases['field_alumni_specialist'] = array(
  /* field_alumni_specialist */   'active' => 1,
  /* field_alumni_specialist */   'cardinality' => -1,
  /* field_alumni_specialist */   'deleted' => 0,
  /* field_alumni_specialist */   'entity_types' => array(),
  /* field_alumni_specialist */   'field_name' => 'field_alumni_specialist',
  /* field_alumni_specialist */   'indexes' => array(
  /* field_alumni_specialist */     'target_id' => array(
  /* field_alumni_specialist */       0 => 'target_id',
  /* field_alumni_specialist */     ),
  /* field_alumni_specialist */   ),
  /* field_alumni_specialist */   'locked' => 0,
  /* field_alumni_specialist */   'module' => 'entityreference',
  /* field_alumni_specialist */   'settings' => array(
  /* field_alumni_specialist */     'handler' => 'base',
  /* field_alumni_specialist */     'handler_settings' => array(
  /* field_alumni_specialist */       'behaviors' => array(
  /* field_alumni_specialist */         'views-select-list' => array(
  /* field_alumni_specialist */           'status' => 0,
  /* field_alumni_specialist */         ),
  /* field_alumni_specialist */       ),
  /* field_alumni_specialist */       'sort' => array(
  /* field_alumni_specialist */         'type' => 'none',
  /* field_alumni_specialist */       ),
  /* field_alumni_specialist */       'target_bundles' => array(),
  /* field_alumni_specialist */     ),
  /* field_alumni_specialist */     'target_type' => 'user',
  /* field_alumni_specialist */   ),
  /* field_alumni_specialist */   'translatable' => 0,
  /* field_alumni_specialist */   'type' => 'entityreference',
  /* field_alumni_specialist */ );

  // Exported field_base: 'field_bio_short'.
  $field_bases['field_bio_short'] = array(
  /* field_bio_short */   'active' => 1,
  /* field_bio_short */   'cardinality' => 1,
  /* field_bio_short */   'deleted' => 0,
  /* field_bio_short */   'entity_types' => array(),
  /* field_bio_short */   'field_name' => 'field_bio_short',
  /* field_bio_short */   'indexes' => array(
  /* field_bio_short */     'format' => array(
  /* field_bio_short */       0 => 'format',
  /* field_bio_short */     ),
  /* field_bio_short */   ),
  /* field_bio_short */   'locked' => 0,
  /* field_bio_short */   'module' => 'text',
  /* field_bio_short */   'settings' => array(),
  /* field_bio_short */   'translatable' => 0,
  /* field_bio_short */   'type' => 'text_long',
  /* field_bio_short */ );

  // Exported field_base: 'field_biography'.
  $field_bases['field_biography'] = array(
  /* field_biography */   'active' => 1,
  /* field_biography */   'cardinality' => 1,
  /* field_biography */   'deleted' => 0,
  /* field_biography */   'entity_types' => array(),
  /* field_biography */   'field_name' => 'field_biography',
  /* field_biography */   'indexes' => array(
  /* field_biography */     'format' => array(
  /* field_biography */       0 => 'format',
  /* field_biography */     ),
  /* field_biography */   ),
  /* field_biography */   'locked' => 0,
  /* field_biography */   'module' => 'text',
  /* field_biography */   'settings' => array(),
  /* field_biography */   'translatable' => 0,
  /* field_biography */   'type' => 'text_long',
  /* field_biography */ );

  // Exported field_base: 'field_building_floor_room'.
  $field_bases['field_building_floor_room'] = array(
  /* field_building_floor_room */   'active' => 1,
  /* field_building_floor_room */   'cardinality' => 1,
  /* field_building_floor_room */   'deleted' => 0,
  /* field_building_floor_room */   'entity_types' => array(),
  /* field_building_floor_room */   'field_name' => 'field_building_floor_room',
  /* field_building_floor_room */   'indexes' => array(
  /* field_building_floor_room */     'format' => array(
  /* field_building_floor_room */       0 => 'format',
  /* field_building_floor_room */     ),
  /* field_building_floor_room */   ),
  /* field_building_floor_room */   'locked' => 0,
  /* field_building_floor_room */   'module' => 'text',
  /* field_building_floor_room */   'settings' => array(
  /* field_building_floor_room */     'max_length' => 255,
  /* field_building_floor_room */   ),
  /* field_building_floor_room */   'translatable' => 0,
  /* field_building_floor_room */   'type' => 'text',
  /* field_building_floor_room */ );

  // Exported field_base: 'field_call_to_action'.
  $field_bases['field_call_to_action'] = array(
  /* field_call_to_action */   'active' => 1,
  /* field_call_to_action */   'cardinality' => 1,
  /* field_call_to_action */   'deleted' => 0,
  /* field_call_to_action */   'entity_types' => array(),
  /* field_call_to_action */   'field_name' => 'field_call_to_action',
  /* field_call_to_action */   'indexes' => array(
  /* field_call_to_action */     'format' => array(
  /* field_call_to_action */       0 => 'format',
  /* field_call_to_action */     ),
  /* field_call_to_action */   ),
  /* field_call_to_action */   'locked' => 0,
  /* field_call_to_action */   'module' => 'text',
  /* field_call_to_action */   'settings' => array(),
  /* field_call_to_action */   'translatable' => 0,
  /* field_call_to_action */   'type' => 'text_long',
  /* field_call_to_action */ );

  // Exported field_base: 'field_cocom_region'.
  $field_bases['field_cocom_region'] = array(
  /* field_cocom_region */   'active' => 1,
  /* field_cocom_region */   'cardinality' => 1,
  /* field_cocom_region */   'deleted' => 0,
  /* field_cocom_region */   'entity_types' => array(),
  /* field_cocom_region */   'field_name' => 'field_cocom_region',
  /* field_cocom_region */   'indexes' => array(
  /* field_cocom_region */     'value' => array(
  /* field_cocom_region */       0 => 'value',
  /* field_cocom_region */     ),
  /* field_cocom_region */   ),
  /* field_cocom_region */   'locked' => 0,
  /* field_cocom_region */   'module' => 'list',
  /* field_cocom_region */   'settings' => array(
  /* field_cocom_region */     'allowed_values' => array(
  /* field_cocom_region */       'africom' => 'AfriCom',
  /* field_cocom_region */       'centcom' => 'CentCom',
  /* field_cocom_region */       'eucom' => 'EUCom',
  /* field_cocom_region */       'northcom' => 'NorthCom',
  /* field_cocom_region */       'pacom' => 'PaCom',
  /* field_cocom_region */       'southcom' => 'SouthCom',
  /* field_cocom_region */     ),
  /* field_cocom_region */     'allowed_values_function' => '',
  /* field_cocom_region */   ),
  /* field_cocom_region */   'translatable' => 0,
  /* field_cocom_region */   'type' => 'list_text',
  /* field_cocom_region */ );

  // Exported field_base: 'field_comment_file'.
  $field_bases['field_comment_file'] = array(
  /* field_comment_file */   'active' => 1,
  /* field_comment_file */   'cardinality' => 1,
  /* field_comment_file */   'deleted' => 0,
  /* field_comment_file */   'entity_types' => array(),
  /* field_comment_file */   'field_name' => 'field_comment_file',
  /* field_comment_file */   'indexes' => array(
  /* field_comment_file */     'fid' => array(
  /* field_comment_file */       0 => 'fid',
  /* field_comment_file */     ),
  /* field_comment_file */   ),
  /* field_comment_file */   'locked' => 0,
  /* field_comment_file */   'module' => 'file',
  /* field_comment_file */   'settings' => array(
  /* field_comment_file */     'display_default' => 0,
  /* field_comment_file */     'display_field' => 0,
  /* field_comment_file */     'uri_scheme' => 'private',
  /* field_comment_file */   ),
  /* field_comment_file */   'translatable' => 0,
  /* field_comment_file */   'type' => 'file',
  /* field_comment_file */ );

  // Exported field_base: 'field_connect_to_node'.
  $field_bases['field_connect_to_node'] = array(
  /* field_connect_to_node */   'active' => 1,
  /* field_connect_to_node */   'cardinality' => 1,
  /* field_connect_to_node */   'deleted' => 0,
  /* field_connect_to_node */   'entity_types' => array(),
  /* field_connect_to_node */   'field_name' => 'field_connect_to_node',
  /* field_connect_to_node */   'indexes' => array(
  /* field_connect_to_node */     'target_id' => array(
  /* field_connect_to_node */       0 => 'target_id',
  /* field_connect_to_node */     ),
  /* field_connect_to_node */   ),
  /* field_connect_to_node */   'locked' => 0,
  /* field_connect_to_node */   'module' => 'entityreference',
  /* field_connect_to_node */   'settings' => array(
  /* field_connect_to_node */     'handler' => 'views',
  /* field_connect_to_node */     'handler_settings' => array(
  /* field_connect_to_node */       'behaviors' => array(
  /* field_connect_to_node */         'views-select-list' => array(
  /* field_connect_to_node */           'status' => 0,
  /* field_connect_to_node */         ),
  /* field_connect_to_node */       ),
  /* field_connect_to_node */       'view' => array(
  /* field_connect_to_node */         'args' => array(),
  /* field_connect_to_node */         'display_name' => 'entityreference_1',
  /* field_connect_to_node */         'view_name' => 'session_course_connect',
  /* field_connect_to_node */       ),
  /* field_connect_to_node */     ),
  /* field_connect_to_node */     'target_type' => 'node',
  /* field_connect_to_node */   ),
  /* field_connect_to_node */   'translatable' => 0,
  /* field_connect_to_node */   'type' => 'entityreference',
  /* field_connect_to_node */ );

  // Exported field_base: 'field_contact_information'.
  $field_bases['field_contact_information'] = array(
  /* field_contact_information */   'active' => 1,
  /* field_contact_information */   'cardinality' => 1,
  /* field_contact_information */   'deleted' => 0,
  /* field_contact_information */   'entity_types' => array(),
  /* field_contact_information */   'field_name' => 'field_contact_information',
  /* field_contact_information */   'indexes' => array(
  /* field_contact_information */     'format' => array(
  /* field_contact_information */       0 => 'format',
  /* field_contact_information */     ),
  /* field_contact_information */   ),
  /* field_contact_information */   'locked' => 0,
  /* field_contact_information */   'module' => 'text',
  /* field_contact_information */   'settings' => array(),
  /* field_contact_information */   'translatable' => 0,
  /* field_contact_information */   'type' => 'text_long',
  /* field_contact_information */ );

  // Exported field_base: 'field_content'.
  $field_bases['field_content'] = array(
  /* field_content */   'active' => 1,
  /* field_content */   'cardinality' => 1,
  /* field_content */   'deleted' => 0,
  /* field_content */   'entity_types' => array(),
  /* field_content */   'field_name' => 'field_content',
  /* field_content */   'indexes' => array(
  /* field_content */     'target_id' => array(
  /* field_content */       0 => 'target_id',
  /* field_content */     ),
  /* field_content */   ),
  /* field_content */   'locked' => 0,
  /* field_content */   'module' => 'entityreference',
  /* field_content */   'settings' => array(
  /* field_content */     'handler' => 'base',
  /* field_content */     'handler_settings' => array(
  /* field_content */       'behaviors' => array(
  /* field_content */         'views-select-list' => array(
  /* field_content */           'status' => 0,
  /* field_content */         ),
  /* field_content */       ),
  /* field_content */       'sort' => array(
  /* field_content */         'type' => 'none',
  /* field_content */       ),
  /* field_content */       'target_bundles' => array(),
  /* field_content */     ),
  /* field_content */     'target_type' => 'node',
  /* field_content */   ),
  /* field_content */   'translatable' => 0,
  /* field_content */   'type' => 'entityreference',
  /* field_content */ );

  // Exported field_base: 'field_countries_of_interest'.
  $field_bases['field_countries_of_interest'] = array(
  /* field_countries_of_interest */   'active' => 1,
  /* field_countries_of_interest */   'cardinality' => -1,
  /* field_countries_of_interest */   'deleted' => 0,
  /* field_countries_of_interest */   'entity_types' => array(),
  /* field_countries_of_interest */   'field_name' => 'field_countries_of_interest',
  /* field_countries_of_interest */   'indexes' => array(
  /* field_countries_of_interest */     'tid' => array(
  /* field_countries_of_interest */       0 => 'tid',
  /* field_countries_of_interest */     ),
  /* field_countries_of_interest */   ),
  /* field_countries_of_interest */   'locked' => 0,
  /* field_countries_of_interest */   'module' => 'taxonomy',
  /* field_countries_of_interest */   'settings' => array(
  /* field_countries_of_interest */     'allowed_values' => array(
  /* field_countries_of_interest */       0 => array(
  /* field_countries_of_interest */         'vocabulary' => 'countries',
  /* field_countries_of_interest */         'parent' => 0,
  /* field_countries_of_interest */       ),
  /* field_countries_of_interest */     ),
  /* field_countries_of_interest */     'options_list_callback' => NULL,
  /* field_countries_of_interest */   ),
  /* field_countries_of_interest */   'translatable' => 0,
  /* field_countries_of_interest */   'type' => 'taxonomy_term_reference',
  /* field_countries_of_interest */ );

  // Exported field_base: 'field_country'.
  $field_bases['field_country'] = array(
  /* field_country */   'active' => 1,
  /* field_country */   'cardinality' => -1,
  /* field_country */   'deleted' => 0,
  /* field_country */   'entity_types' => array(),
  /* field_country */   'field_name' => 'field_country',
  /* field_country */   'indexes' => array(
  /* field_country */     'tid' => array(
  /* field_country */       0 => 'tid',
  /* field_country */     ),
  /* field_country */   ),
  /* field_country */   'locked' => 0,
  /* field_country */   'module' => 'taxonomy',
  /* field_country */   'settings' => array(
  /* field_country */     'allowed_values' => array(
  /* field_country */       0 => array(
  /* field_country */         'vocabulary' => 'countries',
  /* field_country */         'parent' => 0,
  /* field_country */       ),
  /* field_country */     ),
  /* field_country */     'options_list_callback' => NULL,
  /* field_country */   ),
  /* field_country */   'translatable' => 0,
  /* field_country */   'type' => 'taxonomy_term_reference',
  /* field_country */ );

  // Exported field_base: 'field_country_of_representation'.
  $field_bases['field_country_of_representation'] = array(
  /* field_country_of_representation */   'active' => 1,
  /* field_country_of_representation */   'cardinality' => 1,
  /* field_country_of_representation */   'deleted' => 0,
  /* field_country_of_representation */   'entity_types' => array(),
  /* field_country_of_representation */   'field_name' => 'field_country_of_representation',
  /* field_country_of_representation */   'indexes' => array(
  /* field_country_of_representation */     'value' => array(
  /* field_country_of_representation */       0 => 'value',
  /* field_country_of_representation */     ),
  /* field_country_of_representation */   ),
  /* field_country_of_representation */   'locked' => 0,
  /* field_country_of_representation */   'module' => 'list',
  /* field_country_of_representation */   'settings' => array(
  /* field_country_of_representation */     'allowed_values' => array(
  /* field_country_of_representation */       'AF' => 'Afghanistan',
  /* field_country_of_representation */       'AX' => 'Åland Islands',
  /* field_country_of_representation */       'AL' => 'Albania',
  /* field_country_of_representation */       'DZ' => 'Algeria',
  /* field_country_of_representation */       'AS' => 'American Samoa',
  /* field_country_of_representation */       'AD' => 'Andorra',
  /* field_country_of_representation */       'AO' => 'Angola',
  /* field_country_of_representation */       'AI' => 'Anguilla',
  /* field_country_of_representation */       'AQ' => 'Antarctica',
  /* field_country_of_representation */       'AG' => 'Antigua/Barbuda',
  /* field_country_of_representation */       'AR' => 'Argentina',
  /* field_country_of_representation */       'AM' => 'Armenia',
  /* field_country_of_representation */       'AW' => 'Aruba',
  /* field_country_of_representation */       'AU' => 'Australia',
  /* field_country_of_representation */       'AT' => 'Austria',
  /* field_country_of_representation */       'AZ' => 'Azerbaijan',
  /* field_country_of_representation */       'BS' => 'Bahamas',
  /* field_country_of_representation */       'BH' => 'Bahrain',
  /* field_country_of_representation */       'BD' => 'Bangladesh',
  /* field_country_of_representation */       'BB' => 'Barbados',
  /* field_country_of_representation */       'BY' => 'Belarus',
  /* field_country_of_representation */       'BE' => 'Belgium',
  /* field_country_of_representation */       'BZ' => 'Belize',
  /* field_country_of_representation */       'BJ' => 'Benin',
  /* field_country_of_representation */       'BM' => 'Bermuda',
  /* field_country_of_representation */       'BT' => 'Bhutan',
  /* field_country_of_representation */       'BO' => 'Bolivia',
  /* field_country_of_representation */       'BA' => 'Bosnia/Herzegovina',
  /* field_country_of_representation */       'BW' => 'Botswana',
  /* field_country_of_representation */       'BV' => 'Bouvet Island',
  /* field_country_of_representation */       'BR' => 'Brazil',
  /* field_country_of_representation */       'BN' => 'Brunei Darussalam',
  /* field_country_of_representation */       'BG' => 'Bulgaria',
  /* field_country_of_representation */       'BF' => 'Burkina Faso',
  /* field_country_of_representation */       'BI' => 'Burundi',
  /* field_country_of_representation */       'KH' => 'Cambodia',
  /* field_country_of_representation */       'CM' => 'Cameroon',
  /* field_country_of_representation */       'CA' => 'Canada',
  /* field_country_of_representation */       'CV' => 'Cape Verde',
  /* field_country_of_representation */       'KY' => 'Cayman Islands',
  /* field_country_of_representation */       'CF' => 'Central African Republic',
  /* field_country_of_representation */       'TD' => 'Chad',
  /* field_country_of_representation */       'CL' => 'Chile',
  /* field_country_of_representation */       'CN' => 'China',
  /* field_country_of_representation */       'CX' => 'Christmas Island',
  /* field_country_of_representation */       'CC' => 'Cocos (Keeling) Islands',
  /* field_country_of_representation */       'CO' => 'Colombia',
  /* field_country_of_representation */       'KM' => 'Comoros',
  /* field_country_of_representation */       'CD' => 'Congo, Democratic Republic',
  /* field_country_of_representation */       'CG' => 'Congo, Republic of',
  /* field_country_of_representation */       'CK' => 'Cook Islands',
  /* field_country_of_representation */       'CR' => 'Costa Rica',
  /* field_country_of_representation */       'CI' => 'Côte D\'Ivoire',
  /* field_country_of_representation */       'HR' => 'Croatia',
  /* field_country_of_representation */       'CU' => 'Cuba',
  /* field_country_of_representation */       'CY' => 'Cyprus',
  /* field_country_of_representation */       'CZ' => 'Czech Republic',
  /* field_country_of_representation */       'DK' => 'Denmark',
  /* field_country_of_representation */       'DJ' => 'Djibouti',
  /* field_country_of_representation */       'DM' => 'Dominica',
  /* field_country_of_representation */       'DO' => 'Dominican Republic',
  /* field_country_of_representation */       'EC' => 'Ecuador',
  /* field_country_of_representation */       'EG' => 'Egypt',
  /* field_country_of_representation */       'SV' => 'El Salvador',
  /* field_country_of_representation */       'GQ' => 'Equatorial Guinea',
  /* field_country_of_representation */       'ER' => 'Eritrea',
  /* field_country_of_representation */       'EE' => 'Estonia',
  /* field_country_of_representation */       'ET' => 'Ethiopia',
  /* field_country_of_representation */       'FK' => 'Falkland Islands(Malvinas)',
  /* field_country_of_representation */       'FO' => 'Faroe Islands',
  /* field_country_of_representation */       'FJ' => 'Fiji',
  /* field_country_of_representation */       'FI' => 'Finland',
  /* field_country_of_representation */       'FR' => 'France',
  /* field_country_of_representation */       'GF' => 'French Guiana',
  /* field_country_of_representation */       'PF' => 'French Polynesia',
  /* field_country_of_representation */       'TF' => 'French Southern Territories',
  /* field_country_of_representation */       'GA' => 'Gabon',
  /* field_country_of_representation */       'GM' => 'Gambia',
  /* field_country_of_representation */       'GE' => 'Georgia',
  /* field_country_of_representation */       'DE' => 'Germany',
  /* field_country_of_representation */       'GH' => 'Ghana',
  /* field_country_of_representation */       'GI' => 'Gibraltar',
  /* field_country_of_representation */       'GR' => 'Greece',
  /* field_country_of_representation */       'GL' => 'Greenland',
  /* field_country_of_representation */       'GD' => 'Grenada',
  /* field_country_of_representation */       'GP' => 'Guadeloupe',
  /* field_country_of_representation */       'GU' => 'Guam',
  /* field_country_of_representation */       'GT' => 'Guatemala',
  /* field_country_of_representation */       'GG' => 'Guernsey',
  /* field_country_of_representation */       'GN' => 'Guinea',
  /* field_country_of_representation */       'GW' => 'Guinea-Bissau',
  /* field_country_of_representation */       'GY' => 'Guyana',
  /* field_country_of_representation */       'HT' => 'Haiti',
  /* field_country_of_representation */       'HM' => 'Heard Island/Mcdonald Islands',
  /* field_country_of_representation */       'HN' => 'Honduras',
  /* field_country_of_representation */       'HK' => 'Hong Kong',
  /* field_country_of_representation */       'HU' => 'Hungary',
  /* field_country_of_representation */       'IS' => 'Iceland',
  /* field_country_of_representation */       'IN' => 'India',
  /* field_country_of_representation */       'ID' => 'Indonesia',
  /* field_country_of_representation */       'IR' => 'Iran',
  /* field_country_of_representation */       'IQ' => 'Iraq',
  /* field_country_of_representation */       'IE' => 'Ireland',
  /* field_country_of_representation */       'IM' => 'Isle Of Man',
  /* field_country_of_representation */       'IL' => 'Israel',
  /* field_country_of_representation */       'IT' => 'Italy',
  /* field_country_of_representation */       'JM' => 'Jamaica',
  /* field_country_of_representation */       'JP' => 'Japan',
  /* field_country_of_representation */       'JE' => 'Jersey',
  /* field_country_of_representation */       'JO' => 'Jordan',
  /* field_country_of_representation */       'KZ' => 'Kazakhstan',
  /* field_country_of_representation */       'KE' => 'Kenya',
  /* field_country_of_representation */       'KI' => 'Kiribati',
  /* field_country_of_representation */       'KV' => 'Kosovo',
  /* field_country_of_representation */       'KW' => 'Kuwait',
  /* field_country_of_representation */       'KG' => 'Kyrgyzstan',
  /* field_country_of_representation */       'LA' => 'Laos',
  /* field_country_of_representation */       'LV' => 'Latvia',
  /* field_country_of_representation */       'LB' => 'Lebanon',
  /* field_country_of_representation */       'LS' => 'Lesotho',
  /* field_country_of_representation */       'LR' => 'Liberia',
  /* field_country_of_representation */       'LY' => 'Libya',
  /* field_country_of_representation */       'LI' => 'Liechtenstein',
  /* field_country_of_representation */       'LT' => 'Lithuania',
  /* field_country_of_representation */       'LU' => 'Luxembourg',
  /* field_country_of_representation */       'MO' => 'Macao',
  /* field_country_of_representation */       'MK' => 'Macedonia',
  /* field_country_of_representation */       'FYROM' => 'Macedonia, Former Yugoslav Republic of',
  /* field_country_of_representation */       'MG' => 'Madagascar',
  /* field_country_of_representation */       'MW' => 'Malawi',
  /* field_country_of_representation */       'MY' => 'Malaysia',
  /* field_country_of_representation */       'MV' => 'Maldives',
  /* field_country_of_representation */       'ML' => 'Mali',
  /* field_country_of_representation */       'MT' => 'Malta',
  /* field_country_of_representation */       'MH' => 'Marshall Islands',
  /* field_country_of_representation */       'MQ' => 'Martinique',
  /* field_country_of_representation */       'MR' => 'Mauritania',
  /* field_country_of_representation */       'MU' => 'Mauritius',
  /* field_country_of_representation */       'YT' => 'Mayotte',
  /* field_country_of_representation */       'MX' => 'Mexico',
  /* field_country_of_representation */       'FM' => 'Micronesia',
  /* field_country_of_representation */       'MD' => 'Moldova',
  /* field_country_of_representation */       'MC' => 'Monaco',
  /* field_country_of_representation */       'MN' => 'Mongolia',
  /* field_country_of_representation */       'ME' => 'Montenegro',
  /* field_country_of_representation */       'MS' => 'Montserrat',
  /* field_country_of_representation */       'MA' => 'Morocco',
  /* field_country_of_representation */       'MZ' => 'Mozambique',
  /* field_country_of_representation */       'MM' => 'Myanmar',
  /* field_country_of_representation */       'NA' => 'Namibia',
  /* field_country_of_representation */       'NR' => 'Nauru',
  /* field_country_of_representation */       'NP' => 'Nepal',
  /* field_country_of_representation */       'NL' => 'Netherlands',
  /* field_country_of_representation */       'AN' => 'Netherlands Antilles',
  /* field_country_of_representation */       'NC' => 'New Caledonia',
  /* field_country_of_representation */       'NZ' => 'New Zealand',
  /* field_country_of_representation */       'NI' => 'Nicaragua',
  /* field_country_of_representation */       'NE' => 'Niger',
  /* field_country_of_representation */       'NG' => 'Nigeria',
  /* field_country_of_representation */       'NU' => 'Niue',
  /* field_country_of_representation */       'NF' => 'Norfolk Island',
  /* field_country_of_representation */       'KP' => 'North Korea',
  /* field_country_of_representation */       'MP' => 'Northern Mariana Islands',
  /* field_country_of_representation */       'NO' => 'Norway',
  /* field_country_of_representation */       'OM' => 'Oman',
  /* field_country_of_representation */       'PK' => 'Pakistan',
  /* field_country_of_representation */       'PW' => 'Palau',
  /* field_country_of_representation */       'PS' => 'Palestine',
  /* field_country_of_representation */       'PA' => 'Panama',
  /* field_country_of_representation */       'PG' => 'Papua New Guinea',
  /* field_country_of_representation */       'PY' => 'Paraguay',
  /* field_country_of_representation */       'PE' => 'Peru',
  /* field_country_of_representation */       'PH' => 'Philippines',
  /* field_country_of_representation */       'PN' => 'Pitcairn',
  /* field_country_of_representation */       'PL' => 'Poland',
  /* field_country_of_representation */       'PT' => 'Portugal',
  /* field_country_of_representation */       'PR' => 'Puerto Rico',
  /* field_country_of_representation */       'QA' => 'Qatar',
  /* field_country_of_representation */       'RE' => 'Réunion',
  /* field_country_of_representation */       'RO' => 'Romania',
  /* field_country_of_representation */       'RU' => 'Russian Federation',
  /* field_country_of_representation */       'RW' => 'Rwanda',
  /* field_country_of_representation */       'WS' => 'Samoa',
  /* field_country_of_representation */       'SM' => 'San Marino',
  /* field_country_of_representation */       'ST' => 'Sao Tome/Principe',
  /* field_country_of_representation */       'SA' => 'Saudi Arabia',
  /* field_country_of_representation */       'SN' => 'Senegal',
  /* field_country_of_representation */       'RS' => 'Serbia',
  /* field_country_of_representation */       'SC' => 'Seychelles',
  /* field_country_of_representation */       'SL' => 'Sierra Leone',
  /* field_country_of_representation */       'SG' => 'Singapore',
  /* field_country_of_representation */       'SK' => 'Slovakia',
  /* field_country_of_representation */       'SI' => 'Slovenia',
  /* field_country_of_representation */       'SB' => 'Solomon Islands',
  /* field_country_of_representation */       'SO' => 'Somalia',
  /* field_country_of_representation */       'ZA' => 'South Africa',
  /* field_country_of_representation */       'GS' => 'South Georgia/Sandwich Islands',
  /* field_country_of_representation */       'KR' => 'South Korea',
  /* field_country_of_representation */       'SS' => 'South Sudan',
  /* field_country_of_representation */       'ES' => 'Spain',
  /* field_country_of_representation */       'LK' => 'Sri Lanka',
  /* field_country_of_representation */       'BL' => 'St. Barthélemy',
  /* field_country_of_representation */       'SH' => 'St. Helena',
  /* field_country_of_representation */       'KN' => 'St. Kitts/Nevis',
  /* field_country_of_representation */       'LC' => 'St. Lucia',
  /* field_country_of_representation */       'MF' => 'St. Martin',
  /* field_country_of_representation */       'PM' => 'St. Pierre/Miquelon',
  /* field_country_of_representation */       'VC' => 'St. Vincent/The Grenadines',
  /* field_country_of_representation */       'SD' => 'Sudan',
  /* field_country_of_representation */       'SR' => 'Suriname',
  /* field_country_of_representation */       'SJ' => 'Svalbard/Jan Mayen',
  /* field_country_of_representation */       'SZ' => 'Swaziland',
  /* field_country_of_representation */       'SE' => 'Sweden',
  /* field_country_of_representation */       'CH' => 'Switzerland',
  /* field_country_of_representation */       'SY' => 'Syrian Arab Republic',
  /* field_country_of_representation */       'TW' => 'Taiwan',
  /* field_country_of_representation */       'TJ' => 'Tajikistan',
  /* field_country_of_representation */       'TZ' => 'Tanzania',
  /* field_country_of_representation */       'TH' => 'Thailand',
  /* field_country_of_representation */       'TL' => 'Timor-Leste',
  /* field_country_of_representation */       'TG' => 'Togo',
  /* field_country_of_representation */       'TK' => 'Tokelau',
  /* field_country_of_representation */       'TO' => 'Tonga',
  /* field_country_of_representation */       'TT' => 'Trinidad And Tobago',
  /* field_country_of_representation */       'TN' => 'Tunisia',
  /* field_country_of_representation */       'TR' => 'Turkey',
  /* field_country_of_representation */       'TM' => 'Turkmenistan',
  /* field_country_of_representation */       'TC' => 'Turks/Caicos Islands',
  /* field_country_of_representation */       'TV' => 'Tuvalu',
  /* field_country_of_representation */       'UG' => 'Uganda',
  /* field_country_of_representation */       'UA' => 'Ukraine',
  /* field_country_of_representation */       'AE' => 'United Arab Emirates',
  /* field_country_of_representation */       'GB' => 'United Kingdom',
  /* field_country_of_representation */       'US' => 'United States',
  /* field_country_of_representation */       'UM' => 'United States Minor Islands',
  /* field_country_of_representation */       'UY' => 'Uruguay',
  /* field_country_of_representation */       'UZ' => 'Uzbekistan',
  /* field_country_of_representation */       'VU' => 'Vanuatu',
  /* field_country_of_representation */       'VA' => 'Vatican City State',
  /* field_country_of_representation */       'VE' => 'Venezuela',
  /* field_country_of_representation */       'VN' => 'Viet Nam',
  /* field_country_of_representation */       'VG' => '"Virgin Islands, British"',
  /* field_country_of_representation */       'VI' => '"Virgin Islands, U.S."',
  /* field_country_of_representation */       'WF' => 'Wallis/Futuna',
  /* field_country_of_representation */       'YE' => 'Yemen',
  /* field_country_of_representation */       'ZM' => 'Zambia',
  /* field_country_of_representation */       'ZW' => 'Zimbabwe',
  /* field_country_of_representation */     ),
  /* field_country_of_representation */     'allowed_values_function' => '',
  /* field_country_of_representation */   ),
  /* field_country_of_representation */   'translatable' => 0,
  /* field_country_of_representation */   'type' => 'list_text',
  /* field_country_of_representation */ );

  // Exported field_base: 'field_country_of_residence'.
  $field_bases['field_country_of_residence'] = array(
  /* field_country_of_residence */   'active' => 1,
  /* field_country_of_residence */   'cardinality' => 1,
  /* field_country_of_residence */   'deleted' => 0,
  /* field_country_of_residence */   'entity_types' => array(),
  /* field_country_of_residence */   'field_name' => 'field_country_of_residence',
  /* field_country_of_residence */   'indexes' => array(
  /* field_country_of_residence */     'value' => array(
  /* field_country_of_residence */       0 => 'value',
  /* field_country_of_residence */     ),
  /* field_country_of_residence */   ),
  /* field_country_of_residence */   'locked' => 0,
  /* field_country_of_residence */   'module' => 'list',
  /* field_country_of_residence */   'settings' => array(
  /* field_country_of_residence */     'allowed_values' => array(
  /* field_country_of_residence */       'AF' => 'Afghanistan',
  /* field_country_of_residence */       'AX' => 'Åland Islands',
  /* field_country_of_residence */       'AL' => 'Albania',
  /* field_country_of_residence */       'DZ' => 'Algeria',
  /* field_country_of_residence */       'AS' => 'American Samoa',
  /* field_country_of_residence */       'AD' => 'Andorra',
  /* field_country_of_residence */       'AO' => 'Angola',
  /* field_country_of_residence */       'AI' => 'Anguilla',
  /* field_country_of_residence */       'AQ' => 'Antarctica',
  /* field_country_of_residence */       'AG' => 'Antigua/Barbuda',
  /* field_country_of_residence */       'AR' => 'Argentina',
  /* field_country_of_residence */       'AM' => 'Armenia',
  /* field_country_of_residence */       'AW' => 'Aruba',
  /* field_country_of_residence */       'AU' => 'Australia',
  /* field_country_of_residence */       'AT' => 'Austria',
  /* field_country_of_residence */       'AZ' => 'Azerbaijan',
  /* field_country_of_residence */       'BS' => 'Bahamas',
  /* field_country_of_residence */       'BH' => 'Bahrain',
  /* field_country_of_residence */       'BD' => 'Bangladesh',
  /* field_country_of_residence */       'BB' => 'Barbados',
  /* field_country_of_residence */       'BY' => 'Belarus',
  /* field_country_of_residence */       'BE' => 'Belgium',
  /* field_country_of_residence */       'BZ' => 'Belize',
  /* field_country_of_residence */       'BJ' => 'Benin',
  /* field_country_of_residence */       'BM' => 'Bermuda',
  /* field_country_of_residence */       'BT' => 'Bhutan',
  /* field_country_of_residence */       'BO' => 'Bolivia',
  /* field_country_of_residence */       'BA' => 'Bosnia/Herzegovina',
  /* field_country_of_residence */       'BW' => 'Botswana',
  /* field_country_of_residence */       'BV' => 'Bouvet Island',
  /* field_country_of_residence */       'BR' => 'Brazil',
  /* field_country_of_residence */       'BN' => 'Brunei Darussalam',
  /* field_country_of_residence */       'BG' => 'Bulgaria',
  /* field_country_of_residence */       'BF' => 'Burkina Faso',
  /* field_country_of_residence */       'BI' => 'Burundi',
  /* field_country_of_residence */       'KH' => 'Cambodia',
  /* field_country_of_residence */       'CM' => 'Cameroon',
  /* field_country_of_residence */       'CA' => 'Canada',
  /* field_country_of_residence */       'CV' => 'Cape Verde',
  /* field_country_of_residence */       'KY' => 'Cayman Islands',
  /* field_country_of_residence */       'CF' => 'Central African Republic',
  /* field_country_of_residence */       'TD' => 'Chad',
  /* field_country_of_residence */       'CL' => 'Chile',
  /* field_country_of_residence */       'CN' => 'China',
  /* field_country_of_residence */       'CX' => 'Christmas Island',
  /* field_country_of_residence */       'CC' => 'Cocos (Keeling) Islands',
  /* field_country_of_residence */       'CO' => 'Colombia',
  /* field_country_of_residence */       'KM' => 'Comoros',
  /* field_country_of_residence */       'CD' => 'Congo, Democratic Republic',
  /* field_country_of_residence */       'CG' => 'Congo, Republic of',
  /* field_country_of_residence */       'CK' => 'Cook Islands',
  /* field_country_of_residence */       'CR' => 'Costa Rica',
  /* field_country_of_residence */       'CI' => 'Côte D\'Ivoire',
  /* field_country_of_residence */       'HR' => 'Croatia',
  /* field_country_of_residence */       'CU' => 'Cuba',
  /* field_country_of_residence */       'CY' => 'Cyprus',
  /* field_country_of_residence */       'CZ' => 'Czech Republic',
  /* field_country_of_residence */       'DK' => 'Denmark',
  /* field_country_of_residence */       'DJ' => 'Djibouti',
  /* field_country_of_residence */       'DM' => 'Dominica',
  /* field_country_of_residence */       'DO' => 'Dominican Republic',
  /* field_country_of_residence */       'EC' => 'Ecuador',
  /* field_country_of_residence */       'EG' => 'Egypt',
  /* field_country_of_residence */       'SV' => 'El Salvador',
  /* field_country_of_residence */       'GQ' => 'Equatorial Guinea',
  /* field_country_of_residence */       'ER' => 'Eritrea',
  /* field_country_of_residence */       'EE' => 'Estonia',
  /* field_country_of_residence */       'ET' => 'Ethiopia',
  /* field_country_of_residence */       'FK' => 'Falkland Islands(Malvinas)',
  /* field_country_of_residence */       'FO' => 'Faroe Islands',
  /* field_country_of_residence */       'FJ' => 'Fiji',
  /* field_country_of_residence */       'FI' => 'Finland',
  /* field_country_of_residence */       'FR' => 'France',
  /* field_country_of_residence */       'GF' => 'French Guiana',
  /* field_country_of_residence */       'PF' => 'French Polynesia',
  /* field_country_of_residence */       'TF' => 'French Southern Territories',
  /* field_country_of_residence */       'GA' => 'Gabon',
  /* field_country_of_residence */       'GM' => 'Gambia',
  /* field_country_of_residence */       'GE' => 'Georgia',
  /* field_country_of_residence */       'DE' => 'Germany',
  /* field_country_of_residence */       'GH' => 'Ghana',
  /* field_country_of_residence */       'GI' => 'Gibraltar',
  /* field_country_of_residence */       'GR' => 'Greece',
  /* field_country_of_residence */       'GL' => 'Greenland',
  /* field_country_of_residence */       'GD' => 'Grenada',
  /* field_country_of_residence */       'GP' => 'Guadeloupe',
  /* field_country_of_residence */       'GU' => 'Guam',
  /* field_country_of_residence */       'GT' => 'Guatemala',
  /* field_country_of_residence */       'GG' => 'Guernsey',
  /* field_country_of_residence */       'GN' => 'Guinea',
  /* field_country_of_residence */       'GW' => 'Guinea-Bissau',
  /* field_country_of_residence */       'GY' => 'Guyana',
  /* field_country_of_residence */       'HT' => 'Haiti',
  /* field_country_of_residence */       'HM' => 'Heard Island/Mcdonald Islands',
  /* field_country_of_residence */       'HN' => 'Honduras',
  /* field_country_of_residence */       'HK' => 'Hong Kong',
  /* field_country_of_residence */       'HU' => 'Hungary',
  /* field_country_of_residence */       'IS' => 'Iceland',
  /* field_country_of_residence */       'IN' => 'India',
  /* field_country_of_residence */       'ID' => 'Indonesia',
  /* field_country_of_residence */       'IR' => 'Iran',
  /* field_country_of_residence */       'IQ' => 'Iraq',
  /* field_country_of_residence */       'IE' => 'Ireland',
  /* field_country_of_residence */       'IM' => 'Isle Of Man',
  /* field_country_of_residence */       'IL' => 'Israel',
  /* field_country_of_residence */       'IT' => 'Italy',
  /* field_country_of_residence */       'JM' => 'Jamaica',
  /* field_country_of_residence */       'JP' => 'Japan',
  /* field_country_of_residence */       'JE' => 'Jersey',
  /* field_country_of_residence */       'JO' => 'Jordan',
  /* field_country_of_residence */       'KZ' => 'Kazakhstan',
  /* field_country_of_residence */       'KE' => 'Kenya',
  /* field_country_of_residence */       'KI' => 'Kiribati',
  /* field_country_of_residence */       'KV' => 'Kosovo',
  /* field_country_of_residence */       'KW' => 'Kuwait',
  /* field_country_of_residence */       'KG' => 'Kyrgyzstan',
  /* field_country_of_residence */       'LA' => 'Laos',
  /* field_country_of_residence */       'LV' => 'Latvia',
  /* field_country_of_residence */       'LB' => 'Lebanon',
  /* field_country_of_residence */       'LS' => 'Lesotho',
  /* field_country_of_residence */       'LR' => 'Liberia',
  /* field_country_of_residence */       'LY' => 'Libya',
  /* field_country_of_residence */       'LI' => 'Liechtenstein',
  /* field_country_of_residence */       'LT' => 'Lithuania',
  /* field_country_of_residence */       'LU' => 'Luxembourg',
  /* field_country_of_residence */       'MO' => 'Macao',
  /* field_country_of_residence */       'MK' => 'Macedonia',
  /* field_country_of_residence */       'FYROM' => 'Macedonia, Former Yugoslav Republic of',
  /* field_country_of_residence */       'MG' => 'Madagascar',
  /* field_country_of_residence */       'MW' => 'Malawi',
  /* field_country_of_residence */       'MY' => 'Malaysia',
  /* field_country_of_residence */       'MV' => 'Maldives',
  /* field_country_of_residence */       'ML' => 'Mali',
  /* field_country_of_residence */       'MT' => 'Malta',
  /* field_country_of_residence */       'MH' => 'Marshall Islands',
  /* field_country_of_residence */       'MQ' => 'Martinique',
  /* field_country_of_residence */       'MR' => 'Mauritania',
  /* field_country_of_residence */       'MU' => 'Mauritius',
  /* field_country_of_residence */       'YT' => 'Mayotte',
  /* field_country_of_residence */       'MX' => 'Mexico',
  /* field_country_of_residence */       'FM' => 'Micronesia',
  /* field_country_of_residence */       'MD' => 'Moldova',
  /* field_country_of_residence */       'MC' => 'Monaco',
  /* field_country_of_residence */       'MN' => 'Mongolia',
  /* field_country_of_residence */       'ME' => 'Montenegro',
  /* field_country_of_residence */       'MS' => 'Montserrat',
  /* field_country_of_residence */       'MA' => 'Morocco',
  /* field_country_of_residence */       'MZ' => 'Mozambique',
  /* field_country_of_residence */       'MM' => 'Myanmar',
  /* field_country_of_residence */       'NA' => 'Namibia',
  /* field_country_of_residence */       'NR' => 'Nauru',
  /* field_country_of_residence */       'NP' => 'Nepal',
  /* field_country_of_residence */       'NL' => 'Netherlands',
  /* field_country_of_residence */       'AN' => 'Netherlands Antilles',
  /* field_country_of_residence */       'NC' => 'New Caledonia',
  /* field_country_of_residence */       'NZ' => 'New Zealand',
  /* field_country_of_residence */       'NI' => 'Nicaragua',
  /* field_country_of_residence */       'NE' => 'Niger',
  /* field_country_of_residence */       'NG' => 'Nigeria',
  /* field_country_of_residence */       'NU' => 'Niue',
  /* field_country_of_residence */       'NF' => 'Norfolk Island',
  /* field_country_of_residence */       'KP' => 'North Korea',
  /* field_country_of_residence */       'MP' => 'Northern Mariana Islands',
  /* field_country_of_residence */       'NO' => 'Norway',
  /* field_country_of_residence */       'OM' => 'Oman',
  /* field_country_of_residence */       'PK' => 'Pakistan',
  /* field_country_of_residence */       'PW' => 'Palau',
  /* field_country_of_residence */       'PS' => 'Palestine',
  /* field_country_of_residence */       'PA' => 'Panama',
  /* field_country_of_residence */       'PG' => 'Papua New Guinea',
  /* field_country_of_residence */       'PY' => 'Paraguay',
  /* field_country_of_residence */       'PE' => 'Peru',
  /* field_country_of_residence */       'PH' => 'Philippines',
  /* field_country_of_residence */       'PN' => 'Pitcairn',
  /* field_country_of_residence */       'PL' => 'Poland',
  /* field_country_of_residence */       'PT' => 'Portugal',
  /* field_country_of_residence */       'PR' => 'Puerto Rico',
  /* field_country_of_residence */       'QA' => 'Qatar',
  /* field_country_of_residence */       'RE' => 'Réunion',
  /* field_country_of_residence */       'RO' => 'Romania',
  /* field_country_of_residence */       'RU' => 'Russian Federation',
  /* field_country_of_residence */       'RW' => 'Rwanda',
  /* field_country_of_residence */       'WS' => 'Samoa',
  /* field_country_of_residence */       'SM' => 'San Marino',
  /* field_country_of_residence */       'ST' => 'Sao Tome/Principe',
  /* field_country_of_residence */       'SA' => 'Saudi Arabia',
  /* field_country_of_residence */       'SN' => 'Senegal',
  /* field_country_of_residence */       'RS' => 'Serbia',
  /* field_country_of_residence */       'SC' => 'Seychelles',
  /* field_country_of_residence */       'SL' => 'Sierra Leone',
  /* field_country_of_residence */       'SG' => 'Singapore',
  /* field_country_of_residence */       'SK' => 'Slovakia',
  /* field_country_of_residence */       'SI' => 'Slovenia',
  /* field_country_of_residence */       'SB' => 'Solomon Islands',
  /* field_country_of_residence */       'SO' => 'Somalia',
  /* field_country_of_residence */       'ZA' => 'South Africa',
  /* field_country_of_residence */       'GS' => 'South Georgia/Sandwich Islands',
  /* field_country_of_residence */       'KR' => 'South Korea',
  /* field_country_of_residence */       'SS' => 'South Sudan',
  /* field_country_of_residence */       'ES' => 'Spain',
  /* field_country_of_residence */       'LK' => 'Sri Lanka',
  /* field_country_of_residence */       'BL' => 'St. Barthélemy',
  /* field_country_of_residence */       'SH' => 'St. Helena',
  /* field_country_of_residence */       'KN' => 'St. Kitts/Nevis',
  /* field_country_of_residence */       'LC' => 'St. Lucia',
  /* field_country_of_residence */       'MF' => 'St. Martin',
  /* field_country_of_residence */       'PM' => 'St. Pierre/Miquelon',
  /* field_country_of_residence */       'VC' => 'St. Vincent/The Grenadines',
  /* field_country_of_residence */       'SD' => 'Sudan',
  /* field_country_of_residence */       'SR' => 'Suriname',
  /* field_country_of_residence */       'SJ' => 'Svalbard/Jan Mayen',
  /* field_country_of_residence */       'SZ' => 'Swaziland',
  /* field_country_of_residence */       'SE' => 'Sweden',
  /* field_country_of_residence */       'CH' => 'Switzerland',
  /* field_country_of_residence */       'SY' => 'Syrian Arab Republic',
  /* field_country_of_residence */       'TW' => 'Taiwan',
  /* field_country_of_residence */       'TJ' => 'Tajikistan',
  /* field_country_of_residence */       'TZ' => 'Tanzania',
  /* field_country_of_residence */       'TH' => 'Thailand',
  /* field_country_of_residence */       'TL' => 'Timor-Leste',
  /* field_country_of_residence */       'TG' => 'Togo',
  /* field_country_of_residence */       'TK' => 'Tokelau',
  /* field_country_of_residence */       'TO' => 'Tonga',
  /* field_country_of_residence */       'TT' => 'Trinidad And Tobago',
  /* field_country_of_residence */       'TN' => 'Tunisia',
  /* field_country_of_residence */       'TR' => 'Turkey',
  /* field_country_of_residence */       'TM' => 'Turkmenistan',
  /* field_country_of_residence */       'TC' => 'Turks/Caicos Islands',
  /* field_country_of_residence */       'TV' => 'Tuvalu',
  /* field_country_of_residence */       'UG' => 'Uganda',
  /* field_country_of_residence */       'UA' => 'Ukraine',
  /* field_country_of_residence */       'AE' => 'United Arab Emirates',
  /* field_country_of_residence */       'GB' => 'United Kingdom',
  /* field_country_of_residence */       'US' => 'United States',
  /* field_country_of_residence */       'UM' => 'United States Minor Islands',
  /* field_country_of_residence */       'UY' => 'Uruguay',
  /* field_country_of_residence */       'UZ' => 'Uzbekistan',
  /* field_country_of_residence */       'VU' => 'Vanuatu',
  /* field_country_of_residence */       'VA' => 'Vatican City State',
  /* field_country_of_residence */       'VE' => 'Venezuela',
  /* field_country_of_residence */       'VN' => 'Viet Nam',
  /* field_country_of_residence */       'VG' => '"Virgin Islands, British"',
  /* field_country_of_residence */       'VI' => '"Virgin Islands, U.S."',
  /* field_country_of_residence */       'WF' => 'Wallis/Futuna',
  /* field_country_of_residence */       'YE' => 'Yemen',
  /* field_country_of_residence */       'ZM' => 'Zambia',
  /* field_country_of_residence */       'ZW' => 'Zimbabwe',
  /* field_country_of_residence */     ),
  /* field_country_of_residence */     'allowed_values_function' => '',
  /* field_country_of_residence */   ),
  /* field_country_of_residence */   'translatable' => 0,
  /* field_country_of_residence */   'type' => 'list_text',
  /* field_country_of_residence */ );

  // Exported field_base: 'field_course_dates'.
  $field_bases['field_course_dates'] = array(
  /* field_course_dates */   'active' => 1,
  /* field_course_dates */   'cardinality' => 1,
  /* field_course_dates */   'deleted' => 0,
  /* field_course_dates */   'entity_types' => array(),
  /* field_course_dates */   'field_name' => 'field_course_dates',
  /* field_course_dates */   'indexes' => array(),
  /* field_course_dates */   'locked' => 0,
  /* field_course_dates */   'module' => 'date',
  /* field_course_dates */   'settings' => array(
  /* field_course_dates */     'cache_count' => 4,
  /* field_course_dates */     'cache_enabled' => 0,
  /* field_course_dates */     'granularity' => array(
  /* field_course_dates */       'day' => 'day',
  /* field_course_dates */       'hour' => 0,
  /* field_course_dates */       'minute' => 0,
  /* field_course_dates */       'month' => 'month',
  /* field_course_dates */       'second' => 0,
  /* field_course_dates */       'year' => 'year',
  /* field_course_dates */     ),
  /* field_course_dates */     'repeat' => 0,
  /* field_course_dates */     'timezone_db' => '',
  /* field_course_dates */     'todate' => 'optional',
  /* field_course_dates */     'tz_handling' => 'none',
  /* field_course_dates */   ),
  /* field_course_dates */   'translatable' => 0,
  /* field_course_dates */   'type' => 'datetime',
  /* field_course_dates */ );

  // Exported field_base: 'field_course_director'.
  $field_bases['field_course_director'] = array(
  /* field_course_director */   'active' => 1,
  /* field_course_director */   'cardinality' => -1,
  /* field_course_director */   'deleted' => 0,
  /* field_course_director */   'entity_types' => array(),
  /* field_course_director */   'field_name' => 'field_course_director',
  /* field_course_director */   'indexes' => array(
  /* field_course_director */     'target_id' => array(
  /* field_course_director */       0 => 'target_id',
  /* field_course_director */     ),
  /* field_course_director */   ),
  /* field_course_director */   'locked' => 0,
  /* field_course_director */   'module' => 'entityreference',
  /* field_course_director */   'settings' => array(
  /* field_course_director */     'handler' => 'base',
  /* field_course_director */     'handler_settings' => array(
  /* field_course_director */       'behaviors' => array(
  /* field_course_director */         'views-select-list' => array(
  /* field_course_director */           'status' => 0,
  /* field_course_director */         ),
  /* field_course_director */       ),
  /* field_course_director */       'sort' => array(
  /* field_course_director */         'type' => 'none',
  /* field_course_director */       ),
  /* field_course_director */       'target_bundles' => array(),
  /* field_course_director */     ),
  /* field_course_director */     'target_type' => 'user',
  /* field_course_director */   ),
  /* field_course_director */   'translatable' => 0,
  /* field_course_director */   'type' => 'entityreference',
  /* field_course_director */ );

  // Exported field_base: 'field_course_event_coordinator'.
  $field_bases['field_course_event_coordinator'] = array(
  /* field_course_event_coordinator */   'active' => 1,
  /* field_course_event_coordinator */   'cardinality' => -1,
  /* field_course_event_coordinator */   'deleted' => 0,
  /* field_course_event_coordinator */   'entity_types' => array(),
  /* field_course_event_coordinator */   'field_name' => 'field_course_event_coordinator',
  /* field_course_event_coordinator */   'indexes' => array(
  /* field_course_event_coordinator */     'target_id' => array(
  /* field_course_event_coordinator */       0 => 'target_id',
  /* field_course_event_coordinator */     ),
  /* field_course_event_coordinator */   ),
  /* field_course_event_coordinator */   'locked' => 0,
  /* field_course_event_coordinator */   'module' => 'entityreference',
  /* field_course_event_coordinator */   'settings' => array(
  /* field_course_event_coordinator */     'handler' => 'base',
  /* field_course_event_coordinator */     'handler_settings' => array(
  /* field_course_event_coordinator */       'behaviors' => array(
  /* field_course_event_coordinator */         'views-select-list' => array(
  /* field_course_event_coordinator */           'status' => 0,
  /* field_course_event_coordinator */         ),
  /* field_course_event_coordinator */       ),
  /* field_course_event_coordinator */       'sort' => array(
  /* field_course_event_coordinator */         'type' => 'none',
  /* field_course_event_coordinator */       ),
  /* field_course_event_coordinator */       'target_bundles' => array(),
  /* field_course_event_coordinator */     ),
  /* field_course_event_coordinator */     'target_type' => 'user',
  /* field_course_event_coordinator */   ),
  /* field_course_event_coordinator */   'translatable' => 0,
  /* field_course_event_coordinator */   'type' => 'entityreference',
  /* field_course_event_coordinator */ );

  // Exported field_base: 'field_course_faculty'.
  $field_bases['field_course_faculty'] = array(
  /* field_course_faculty */   'active' => 1,
  /* field_course_faculty */   'cardinality' => -1,
  /* field_course_faculty */   'deleted' => 0,
  /* field_course_faculty */   'entity_types' => array(),
  /* field_course_faculty */   'field_name' => 'field_course_faculty',
  /* field_course_faculty */   'indexes' => array(
  /* field_course_faculty */     'target_id' => array(
  /* field_course_faculty */       0 => 'target_id',
  /* field_course_faculty */     ),
  /* field_course_faculty */   ),
  /* field_course_faculty */   'locked' => 0,
  /* field_course_faculty */   'module' => 'entityreference',
  /* field_course_faculty */   'settings' => array(
  /* field_course_faculty */     'handler' => 'base',
  /* field_course_faculty */     'handler_settings' => array(
  /* field_course_faculty */       'behaviors' => array(
  /* field_course_faculty */         'views-select-list' => array(
  /* field_course_faculty */           'status' => 0,
  /* field_course_faculty */         ),
  /* field_course_faculty */       ),
  /* field_course_faculty */       'sort' => array(
  /* field_course_faculty */         'type' => 'none',
  /* field_course_faculty */       ),
  /* field_course_faculty */       'target_bundles' => array(),
  /* field_course_faculty */     ),
  /* field_course_faculty */     'target_type' => 'user',
  /* field_course_faculty */   ),
  /* field_course_faculty */   'translatable' => 0,
  /* field_course_faculty */   'type' => 'entityreference',
  /* field_course_faculty */ );

  // Exported field_base: 'field_course_schedule'.
  $field_bases['field_course_schedule'] = array(
  /* field_course_schedule */   'active' => 1,
  /* field_course_schedule */   'cardinality' => -1,
  /* field_course_schedule */   'deleted' => 0,
  /* field_course_schedule */   'entity_types' => array(),
  /* field_course_schedule */   'field_name' => 'field_course_schedule',
  /* field_course_schedule */   'indexes' => array(
  /* field_course_schedule */     'fid' => array(
  /* field_course_schedule */       0 => 'fid',
  /* field_course_schedule */     ),
  /* field_course_schedule */   ),
  /* field_course_schedule */   'locked' => 0,
  /* field_course_schedule */   'module' => 'file',
  /* field_course_schedule */   'settings' => array(
  /* field_course_schedule */     'display_default' => 0,
  /* field_course_schedule */     'display_field' => 0,
  /* field_course_schedule */     'uri_scheme' => 'private',
  /* field_course_schedule */   ),
  /* field_course_schedule */   'translatable' => 0,
  /* field_course_schedule */   'type' => 'file',
  /* field_course_schedule */ );

  // Exported field_base: 'field_course_seminar_leader'.
  $field_bases['field_course_seminar_leader'] = array(
  /* field_course_seminar_leader */   'active' => 1,
  /* field_course_seminar_leader */   'cardinality' => -1,
  /* field_course_seminar_leader */   'deleted' => 0,
  /* field_course_seminar_leader */   'entity_types' => array(),
  /* field_course_seminar_leader */   'field_name' => 'field_course_seminar_leader',
  /* field_course_seminar_leader */   'indexes' => array(
  /* field_course_seminar_leader */     'target_id' => array(
  /* field_course_seminar_leader */       0 => 'target_id',
  /* field_course_seminar_leader */     ),
  /* field_course_seminar_leader */   ),
  /* field_course_seminar_leader */   'locked' => 0,
  /* field_course_seminar_leader */   'module' => 'entityreference',
  /* field_course_seminar_leader */   'settings' => array(
  /* field_course_seminar_leader */     'handler' => 'base',
  /* field_course_seminar_leader */     'handler_settings' => array(
  /* field_course_seminar_leader */       'behaviors' => array(
  /* field_course_seminar_leader */         'views-select-list' => array(
  /* field_course_seminar_leader */           'status' => 0,
  /* field_course_seminar_leader */         ),
  /* field_course_seminar_leader */       ),
  /* field_course_seminar_leader */       'sort' => array(
  /* field_course_seminar_leader */         'type' => 'none',
  /* field_course_seminar_leader */       ),
  /* field_course_seminar_leader */       'target_bundles' => array(),
  /* field_course_seminar_leader */     ),
  /* field_course_seminar_leader */     'target_type' => 'user',
  /* field_course_seminar_leader */   ),
  /* field_course_seminar_leader */   'translatable' => 0,
  /* field_course_seminar_leader */   'type' => 'entityreference',
  /* field_course_seminar_leader */ );

  // Exported field_base: 'field_course_support_staff'.
  $field_bases['field_course_support_staff'] = array(
  /* field_course_support_staff */   'active' => 1,
  /* field_course_support_staff */   'cardinality' => -1,
  /* field_course_support_staff */   'deleted' => 0,
  /* field_course_support_staff */   'entity_types' => array(),
  /* field_course_support_staff */   'field_name' => 'field_course_support_staff',
  /* field_course_support_staff */   'indexes' => array(
  /* field_course_support_staff */     'target_id' => array(
  /* field_course_support_staff */       0 => 'target_id',
  /* field_course_support_staff */     ),
  /* field_course_support_staff */   ),
  /* field_course_support_staff */   'locked' => 0,
  /* field_course_support_staff */   'module' => 'entityreference',
  /* field_course_support_staff */   'settings' => array(
  /* field_course_support_staff */     'handler' => 'base',
  /* field_course_support_staff */     'handler_settings' => array(
  /* field_course_support_staff */       'behaviors' => array(
  /* field_course_support_staff */         'views-select-list' => array(
  /* field_course_support_staff */           'status' => 0,
  /* field_course_support_staff */         ),
  /* field_course_support_staff */       ),
  /* field_course_support_staff */       'sort' => array(
  /* field_course_support_staff */         'type' => 'none',
  /* field_course_support_staff */       ),
  /* field_course_support_staff */       'target_bundles' => array(),
  /* field_course_support_staff */     ),
  /* field_course_support_staff */     'target_type' => 'user',
  /* field_course_support_staff */   ),
  /* field_course_support_staff */   'translatable' => 0,
  /* field_course_support_staff */   'type' => 'entityreference',
  /* field_course_support_staff */ );

  // Exported field_base: 'field_course_syllabus'.
  $field_bases['field_course_syllabus'] = array(
  /* field_course_syllabus */   'active' => 1,
  /* field_course_syllabus */   'cardinality' => -1,
  /* field_course_syllabus */   'deleted' => 0,
  /* field_course_syllabus */   'entity_types' => array(),
  /* field_course_syllabus */   'field_name' => 'field_course_syllabus',
  /* field_course_syllabus */   'indexes' => array(
  /* field_course_syllabus */     'fid' => array(
  /* field_course_syllabus */       0 => 'fid',
  /* field_course_syllabus */     ),
  /* field_course_syllabus */   ),
  /* field_course_syllabus */   'locked' => 0,
  /* field_course_syllabus */   'module' => 'file',
  /* field_course_syllabus */   'settings' => array(
  /* field_course_syllabus */     'display_default' => 0,
  /* field_course_syllabus */     'display_field' => 0,
  /* field_course_syllabus */     'uri_scheme' => 'private',
  /* field_course_syllabus */   ),
  /* field_course_syllabus */   'translatable' => 0,
  /* field_course_syllabus */   'type' => 'file',
  /* field_course_syllabus */ );

  // Exported field_base: 'field_crm_id'.
  $field_bases['field_crm_id'] = array(
  /* field_crm_id */   'active' => 1,
  /* field_crm_id */   'cardinality' => 1,
  /* field_crm_id */   'deleted' => 0,
  /* field_crm_id */   'entity_types' => array(),
  /* field_crm_id */   'field_name' => 'field_crm_id',
  /* field_crm_id */   'indexes' => array(
  /* field_crm_id */     'format' => array(
  /* field_crm_id */       0 => 'format',
  /* field_crm_id */     ),
  /* field_crm_id */   ),
  /* field_crm_id */   'locked' => 0,
  /* field_crm_id */   'module' => 'text',
  /* field_crm_id */   'settings' => array(
  /* field_crm_id */     'max_length' => 255,
  /* field_crm_id */   ),
  /* field_crm_id */   'translatable' => 0,
  /* field_crm_id */   'type' => 'text',
  /* field_crm_id */ );

  // Exported field_base: 'field_crm_source'.
  $field_bases['field_crm_source'] = array(
  /* field_crm_source */   'active' => 1,
  /* field_crm_source */   'cardinality' => 1,
  /* field_crm_source */   'deleted' => 0,
  /* field_crm_source */   'entity_types' => array(),
  /* field_crm_source */   'field_name' => 'field_crm_source',
  /* field_crm_source */   'indexes' => array(
  /* field_crm_source */     'format' => array(
  /* field_crm_source */       0 => 'format',
  /* field_crm_source */     ),
  /* field_crm_source */   ),
  /* field_crm_source */   'locked' => 0,
  /* field_crm_source */   'module' => 'text',
  /* field_crm_source */   'settings' => array(
  /* field_crm_source */     'max_length' => 255,
  /* field_crm_source */   ),
  /* field_crm_source */   'translatable' => 0,
  /* field_crm_source */   'type' => 'text',
  /* field_crm_source */ );

  // Exported field_base: 'field_cv_resume'.
  $field_bases['field_cv_resume'] = array(
  /* field_cv_resume */   'active' => 1,
  /* field_cv_resume */   'cardinality' => 1,
  /* field_cv_resume */   'deleted' => 0,
  /* field_cv_resume */   'entity_types' => array(),
  /* field_cv_resume */   'field_name' => 'field_cv_resume',
  /* field_cv_resume */   'indexes' => array(
  /* field_cv_resume */     'fid' => array(
  /* field_cv_resume */       0 => 'fid',
  /* field_cv_resume */     ),
  /* field_cv_resume */   ),
  /* field_cv_resume */   'locked' => 0,
  /* field_cv_resume */   'module' => 'file',
  /* field_cv_resume */   'settings' => array(
  /* field_cv_resume */     'display_default' => 0,
  /* field_cv_resume */     'display_field' => 0,
  /* field_cv_resume */     'uri_scheme' => 'public',
  /* field_cv_resume */   ),
  /* field_cv_resume */   'translatable' => 0,
  /* field_cv_resume */   'type' => 'file',
  /* field_cv_resume */ );

  // Exported field_base: 'field_date_of_death'.
  $field_bases['field_date_of_death'] = array(
  /* field_date_of_death */   'active' => 1,
  /* field_date_of_death */   'cardinality' => 1,
  /* field_date_of_death */   'deleted' => 0,
  /* field_date_of_death */   'entity_types' => array(),
  /* field_date_of_death */   'field_name' => 'field_date_of_death',
  /* field_date_of_death */   'indexes' => array(),
  /* field_date_of_death */   'locked' => 0,
  /* field_date_of_death */   'module' => 'date',
  /* field_date_of_death */   'settings' => array(
  /* field_date_of_death */     'cache_count' => 4,
  /* field_date_of_death */     'cache_enabled' => 0,
  /* field_date_of_death */     'granularity' => array(
  /* field_date_of_death */       'day' => 'day',
  /* field_date_of_death */       'hour' => 0,
  /* field_date_of_death */       'minute' => 0,
  /* field_date_of_death */       'month' => 'month',
  /* field_date_of_death */       'second' => 0,
  /* field_date_of_death */       'year' => 'year',
  /* field_date_of_death */     ),
  /* field_date_of_death */     'repeat' => 0,
  /* field_date_of_death */     'timezone_db' => '',
  /* field_date_of_death */     'todate' => '',
  /* field_date_of_death */     'tz_handling' => 'none',
  /* field_date_of_death */   ),
  /* field_date_of_death */   'translatable' => 0,
  /* field_date_of_death */   'type' => 'datetime',
  /* field_date_of_death */ );

  // Exported field_base: 'field_day_association'.
  $field_bases['field_day_association'] = array(
  /* field_day_association */   'active' => 1,
  /* field_day_association */   'cardinality' => 1,
  /* field_day_association */   'deleted' => 0,
  /* field_day_association */   'entity_types' => array(),
  /* field_day_association */   'field_name' => 'field_day_association',
  /* field_day_association */   'indexes' => array(
  /* field_day_association */     'target_id' => array(
  /* field_day_association */       0 => 'target_id',
  /* field_day_association */     ),
  /* field_day_association */   ),
  /* field_day_association */   'locked' => 0,
  /* field_day_association */   'module' => 'entityreference',
  /* field_day_association */   'settings' => array(
  /* field_day_association */     'handler' => 'views',
  /* field_day_association */     'handler_settings' => array(
  /* field_day_association */       'behaviors' => array(
  /* field_day_association */         'views-select-list' => array(
  /* field_day_association */           'status' => 0,
  /* field_day_association */         ),
  /* field_day_association */       ),
  /* field_day_association */       'view' => array(
  /* field_day_association */         'args' => array(),
  /* field_day_association */         'display_name' => 'entityreference_2',
  /* field_day_association */         'view_name' => 'sessions_submitted',
  /* field_day_association */       ),
  /* field_day_association */     ),
  /* field_day_association */     'target_type' => 'entityform',
  /* field_day_association */   ),
  /* field_day_association */   'translatable' => 0,
  /* field_day_association */   'type' => 'entityreference',
  /* field_day_association */ );

  // Exported field_base: 'field_deputy_course_director'.
  $field_bases['field_deputy_course_director'] = array(
  /* field_deputy_course_director */   'active' => 1,
  /* field_deputy_course_director */   'cardinality' => -1,
  /* field_deputy_course_director */   'deleted' => 0,
  /* field_deputy_course_director */   'entity_types' => array(),
  /* field_deputy_course_director */   'field_name' => 'field_deputy_course_director',
  /* field_deputy_course_director */   'indexes' => array(
  /* field_deputy_course_director */     'target_id' => array(
  /* field_deputy_course_director */       0 => 'target_id',
  /* field_deputy_course_director */     ),
  /* field_deputy_course_director */   ),
  /* field_deputy_course_director */   'locked' => 0,
  /* field_deputy_course_director */   'module' => 'entityreference',
  /* field_deputy_course_director */   'settings' => array(
  /* field_deputy_course_director */     'handler' => 'base',
  /* field_deputy_course_director */     'handler_settings' => array(
  /* field_deputy_course_director */       'behaviors' => array(
  /* field_deputy_course_director */         'views-select-list' => array(
  /* field_deputy_course_director */           'status' => 0,
  /* field_deputy_course_director */         ),
  /* field_deputy_course_director */       ),
  /* field_deputy_course_director */       'sort' => array(
  /* field_deputy_course_director */         'type' => 'none',
  /* field_deputy_course_director */       ),
  /* field_deputy_course_director */       'target_bundles' => array(),
  /* field_deputy_course_director */     ),
  /* field_deputy_course_director */     'target_type' => 'user',
  /* field_deputy_course_director */   ),
  /* field_deputy_course_director */   'translatable' => 0,
  /* field_deputy_course_director */   'type' => 'entityreference',
  /* field_deputy_course_director */ );

  // Exported field_base: 'field_description'.
  $field_bases['field_description'] = array(
  /* field_description */   'active' => 1,
  /* field_description */   'cardinality' => 1,
  /* field_description */   'deleted' => 0,
  /* field_description */   'entity_types' => array(),
  /* field_description */   'field_name' => 'field_description',
  /* field_description */   'indexes' => array(
  /* field_description */     'format' => array(
  /* field_description */       0 => 'format',
  /* field_description */     ),
  /* field_description */   ),
  /* field_description */   'locked' => 0,
  /* field_description */   'module' => 'text',
  /* field_description */   'settings' => array(),
  /* field_description */   'translatable' => 0,
  /* field_description */   'type' => 'text_long',
  /* field_description */ );

  // Exported field_base: 'field_domain'.
  $field_bases['field_domain'] = array(
  /* field_domain */   'active' => 1,
  /* field_domain */   'cardinality' => -1,
  /* field_domain */   'deleted' => 0,
  /* field_domain */   'entity_types' => array(),
  /* field_domain */   'field_name' => 'field_domain',
  /* field_domain */   'indexes' => array(
  /* field_domain */     'format' => array(
  /* field_domain */       0 => 'format',
  /* field_domain */     ),
  /* field_domain */   ),
  /* field_domain */   'locked' => 0,
  /* field_domain */   'module' => 'text',
  /* field_domain */   'settings' => array(
  /* field_domain */     'max_length' => 255,
  /* field_domain */   ),
  /* field_domain */   'translatable' => 0,
  /* field_domain */   'type' => 'text',
  /* field_domain */ );

  // Exported field_base: 'field_education'.
  $field_bases['field_education'] = array(
  /* field_education */   'active' => 1,
  /* field_education */   'cardinality' => -1,
  /* field_education */   'deleted' => 0,
  /* field_education */   'entity_types' => array(),
  /* field_education */   'field_name' => 'field_education',
  /* field_education */   'indexes' => array(
  /* field_education */     'revision_id' => array(
  /* field_education */       0 => 'revision_id',
  /* field_education */     ),
  /* field_education */     'value' => array(
  /* field_education */       0 => 'value',
  /* field_education */     ),
  /* field_education */   ),
  /* field_education */   'locked' => 0,
  /* field_education */   'module' => 'field_collection',
  /* field_education */   'settings' => array(
  /* field_education */     'hide_blank_items' => 1,
  /* field_education */     'hide_initial_item' => FALSE,
  /* field_education */     'path' => '',
  /* field_education */   ),
  /* field_education */   'translatable' => 0,
  /* field_education */   'type' => 'field_collection',
  /* field_education */ );

  // Exported field_base: 'field_education_dates_attended'.
  $field_bases['field_education_dates_attended'] = array(
  /* field_education_dates_attended */   'active' => 1,
  /* field_education_dates_attended */   'cardinality' => 1,
  /* field_education_dates_attended */   'deleted' => 0,
  /* field_education_dates_attended */   'entity_types' => array(),
  /* field_education_dates_attended */   'field_name' => 'field_education_dates_attended',
  /* field_education_dates_attended */   'indexes' => array(),
  /* field_education_dates_attended */   'locked' => 0,
  /* field_education_dates_attended */   'module' => 'date',
  /* field_education_dates_attended */   'settings' => array(
  /* field_education_dates_attended */     'cache_count' => 4,
  /* field_education_dates_attended */     'cache_enabled' => 0,
  /* field_education_dates_attended */     'granularity' => array(
  /* field_education_dates_attended */       'day' => 0,
  /* field_education_dates_attended */       'hour' => 0,
  /* field_education_dates_attended */       'minute' => 0,
  /* field_education_dates_attended */       'month' => 'month',
  /* field_education_dates_attended */       'second' => 0,
  /* field_education_dates_attended */       'year' => 'year',
  /* field_education_dates_attended */     ),
  /* field_education_dates_attended */     'repeat' => 0,
  /* field_education_dates_attended */     'timezone_db' => '',
  /* field_education_dates_attended */     'todate' => 'optional',
  /* field_education_dates_attended */     'tz_handling' => 'none',
  /* field_education_dates_attended */   ),
  /* field_education_dates_attended */   'translatable' => 0,
  /* field_education_dates_attended */   'type' => 'datetime',
  /* field_education_dates_attended */ );

  // Exported field_base: 'field_education_degree'.
  $field_bases['field_education_degree'] = array(
  /* field_education_degree */   'active' => 1,
  /* field_education_degree */   'cardinality' => 1,
  /* field_education_degree */   'deleted' => 0,
  /* field_education_degree */   'entity_types' => array(),
  /* field_education_degree */   'field_name' => 'field_education_degree',
  /* field_education_degree */   'indexes' => array(
  /* field_education_degree */     'format' => array(
  /* field_education_degree */       0 => 'format',
  /* field_education_degree */     ),
  /* field_education_degree */   ),
  /* field_education_degree */   'locked' => 0,
  /* field_education_degree */   'module' => 'text',
  /* field_education_degree */   'settings' => array(
  /* field_education_degree */     'max_length' => 255,
  /* field_education_degree */   ),
  /* field_education_degree */   'translatable' => 0,
  /* field_education_degree */   'type' => 'text',
  /* field_education_degree */ );

  // Exported field_base: 'field_education_description'.
  $field_bases['field_education_description'] = array(
  /* field_education_description */   'active' => 1,
  /* field_education_description */   'cardinality' => 1,
  /* field_education_description */   'deleted' => 0,
  /* field_education_description */   'entity_types' => array(),
  /* field_education_description */   'field_name' => 'field_education_description',
  /* field_education_description */   'indexes' => array(
  /* field_education_description */     'format' => array(
  /* field_education_description */       0 => 'format',
  /* field_education_description */     ),
  /* field_education_description */   ),
  /* field_education_description */   'locked' => 0,
  /* field_education_description */   'module' => 'text',
  /* field_education_description */   'settings' => array(),
  /* field_education_description */   'translatable' => 0,
  /* field_education_description */   'type' => 'text_long',
  /* field_education_description */ );

  // Exported field_base: 'field_education_school'.
  $field_bases['field_education_school'] = array(
  /* field_education_school */   'active' => 1,
  /* field_education_school */   'cardinality' => 1,
  /* field_education_school */   'deleted' => 0,
  /* field_education_school */   'entity_types' => array(),
  /* field_education_school */   'field_name' => 'field_education_school',
  /* field_education_school */   'indexes' => array(
  /* field_education_school */     'format' => array(
  /* field_education_school */       0 => 'format',
  /* field_education_school */     ),
  /* field_education_school */   ),
  /* field_education_school */   'locked' => 0,
  /* field_education_school */   'module' => 'text',
  /* field_education_school */   'settings' => array(
  /* field_education_school */     'max_length' => 255,
  /* field_education_school */   ),
  /* field_education_school */   'translatable' => 0,
  /* field_education_school */   'type' => 'text',
  /* field_education_school */ );

  // Exported field_base: 'field_education_school_website'.
  $field_bases['field_education_school_website'] = array(
  /* field_education_school_website */   'active' => 1,
  /* field_education_school_website */   'cardinality' => 1,
  /* field_education_school_website */   'deleted' => 0,
  /* field_education_school_website */   'entity_types' => array(),
  /* field_education_school_website */   'field_name' => 'field_education_school_website',
  /* field_education_school_website */   'indexes' => array(
  /* field_education_school_website */     'format' => array(
  /* field_education_school_website */       0 => 'format',
  /* field_education_school_website */     ),
  /* field_education_school_website */   ),
  /* field_education_school_website */   'locked' => 0,
  /* field_education_school_website */   'module' => 'text',
  /* field_education_school_website */   'settings' => array(
  /* field_education_school_website */     'max_length' => 255,
  /* field_education_school_website */   ),
  /* field_education_school_website */   'translatable' => 0,
  /* field_education_school_website */   'type' => 'text',
  /* field_education_school_website */ );

  // Exported field_base: 'field_email'.
  $field_bases['field_email'] = array(
  /* field_email */   'active' => 1,
  /* field_email */   'cardinality' => 1,
  /* field_email */   'deleted' => 0,
  /* field_email */   'entity_types' => array(),
  /* field_email */   'field_name' => 'field_email',
  /* field_email */   'indexes' => array(),
  /* field_email */   'locked' => 0,
  /* field_email */   'module' => 'email',
  /* field_email */   'settings' => array(),
  /* field_email */   'translatable' => 0,
  /* field_email */   'type' => 'email',
  /* field_email */ );

  // Exported field_base: 'field_email_address'.
  $field_bases['field_email_address'] = array(
  /* field_email_address */   'active' => 1,
  /* field_email_address */   'cardinality' => 1,
  /* field_email_address */   'deleted' => 0,
  /* field_email_address */   'entity_types' => array(),
  /* field_email_address */   'field_name' => 'field_email_address',
  /* field_email_address */   'indexes' => array(),
  /* field_email_address */   'locked' => 0,
  /* field_email_address */   'module' => 'email',
  /* field_email_address */   'settings' => array(),
  /* field_email_address */   'translatable' => 0,
  /* field_email_address */   'type' => 'email',
  /* field_email_address */ );

  // Exported field_base: 'field_email_body'.
  $field_bases['field_email_body'] = array(
  /* field_email_body */   'active' => 1,
  /* field_email_body */   'cardinality' => 1,
  /* field_email_body */   'deleted' => 0,
  /* field_email_body */   'entity_types' => array(),
  /* field_email_body */   'field_name' => 'field_email_body',
  /* field_email_body */   'indexes' => array(
  /* field_email_body */     'format' => array(
  /* field_email_body */       0 => 'format',
  /* field_email_body */     ),
  /* field_email_body */   ),
  /* field_email_body */   'locked' => 0,
  /* field_email_body */   'module' => 'text',
  /* field_email_body */   'settings' => array(),
  /* field_email_body */   'translatable' => 0,
  /* field_email_body */   'type' => 'text_long',
  /* field_email_body */ );

  // Exported field_base: 'field_employers'.
  $field_bases['field_employers'] = array(
  /* field_employers */   'active' => 1,
  /* field_employers */   'cardinality' => -1,
  /* field_employers */   'deleted' => 0,
  /* field_employers */   'entity_types' => array(),
  /* field_employers */   'field_name' => 'field_employers',
  /* field_employers */   'indexes' => array(
  /* field_employers */     'revision_id' => array(
  /* field_employers */       0 => 'revision_id',
  /* field_employers */     ),
  /* field_employers */     'value' => array(
  /* field_employers */       0 => 'value',
  /* field_employers */     ),
  /* field_employers */   ),
  /* field_employers */   'locked' => 0,
  /* field_employers */   'module' => 'field_collection',
  /* field_employers */   'settings' => array(
  /* field_employers */     'hide_blank_items' => 1,
  /* field_employers */     'hide_initial_item' => FALSE,
  /* field_employers */     'path' => '',
  /* field_employers */   ),
  /* field_employers */   'translatable' => 0,
  /* field_employers */   'type' => 'field_collection',
  /* field_employers */ );

  // Exported field_base: 'field_employers_company'.
  $field_bases['field_employers_company'] = array(
  /* field_employers_company */   'active' => 1,
  /* field_employers_company */   'cardinality' => 1,
  /* field_employers_company */   'deleted' => 0,
  /* field_employers_company */   'entity_types' => array(),
  /* field_employers_company */   'field_name' => 'field_employers_company',
  /* field_employers_company */   'indexes' => array(
  /* field_employers_company */     'format' => array(
  /* field_employers_company */       0 => 'format',
  /* field_employers_company */     ),
  /* field_employers_company */   ),
  /* field_employers_company */   'locked' => 0,
  /* field_employers_company */   'module' => 'text',
  /* field_employers_company */   'settings' => array(
  /* field_employers_company */     'max_length' => 255,
  /* field_employers_company */   ),
  /* field_employers_company */   'translatable' => 0,
  /* field_employers_company */   'type' => 'text',
  /* field_employers_company */ );

  // Exported field_base: 'field_employers_company_website'.
  $field_bases['field_employers_company_website'] = array(
  /* field_employers_company_website */   'active' => 1,
  /* field_employers_company_website */   'cardinality' => 1,
  /* field_employers_company_website */   'deleted' => 0,
  /* field_employers_company_website */   'entity_types' => array(),
  /* field_employers_company_website */   'field_name' => 'field_employers_company_website',
  /* field_employers_company_website */   'indexes' => array(
  /* field_employers_company_website */     'format' => array(
  /* field_employers_company_website */       0 => 'format',
  /* field_employers_company_website */     ),
  /* field_employers_company_website */   ),
  /* field_employers_company_website */   'locked' => 0,
  /* field_employers_company_website */   'module' => 'text',
  /* field_employers_company_website */   'settings' => array(
  /* field_employers_company_website */     'max_length' => 255,
  /* field_employers_company_website */   ),
  /* field_employers_company_website */   'translatable' => 0,
  /* field_employers_company_website */   'type' => 'text',
  /* field_employers_company_website */ );

  // Exported field_base: 'field_employers_location'.
  $field_bases['field_employers_location'] = array(
  /* field_employers_location */   'active' => 1,
  /* field_employers_location */   'cardinality' => 1,
  /* field_employers_location */   'deleted' => 0,
  /* field_employers_location */   'entity_types' => array(),
  /* field_employers_location */   'field_name' => 'field_employers_location',
  /* field_employers_location */   'indexes' => array(
  /* field_employers_location */     'format' => array(
  /* field_employers_location */       0 => 'format',
  /* field_employers_location */     ),
  /* field_employers_location */   ),
  /* field_employers_location */   'locked' => 0,
  /* field_employers_location */   'module' => 'text',
  /* field_employers_location */   'settings' => array(
  /* field_employers_location */     'max_length' => 255,
  /* field_employers_location */   ),
  /* field_employers_location */   'translatable' => 0,
  /* field_employers_location */   'type' => 'text',
  /* field_employers_location */ );

  // Exported field_base: 'field_employers_position'.
  $field_bases['field_employers_position'] = array(
  /* field_employers_position */   'active' => 1,
  /* field_employers_position */   'cardinality' => 1,
  /* field_employers_position */   'deleted' => 0,
  /* field_employers_position */   'entity_types' => array(),
  /* field_employers_position */   'field_name' => 'field_employers_position',
  /* field_employers_position */   'indexes' => array(
  /* field_employers_position */     'format' => array(
  /* field_employers_position */       0 => 'format',
  /* field_employers_position */     ),
  /* field_employers_position */   ),
  /* field_employers_position */   'locked' => 0,
  /* field_employers_position */   'module' => 'text',
  /* field_employers_position */   'settings' => array(
  /* field_employers_position */     'max_length' => 255,
  /* field_employers_position */   ),
  /* field_employers_position */   'translatable' => 0,
  /* field_employers_position */   'type' => 'text',
  /* field_employers_position */ );

  // Exported field_base: 'field_employment'.
  $field_bases['field_employment'] = array(
  /* field_employment */   'active' => 1,
  /* field_employment */   'cardinality' => 1,
  /* field_employment */   'deleted' => 0,
  /* field_employment */   'entity_types' => array(),
  /* field_employment */   'field_name' => 'field_employment',
  /* field_employment */   'indexes' => array(
  /* field_employment */     'format' => array(
  /* field_employment */       0 => 'format',
  /* field_employment */     ),
  /* field_employment */   ),
  /* field_employment */   'locked' => 0,
  /* field_employment */   'module' => 'text',
  /* field_employment */   'settings' => array(),
  /* field_employment */   'translatable' => 0,
  /* field_employment */   'type' => 'text_long',
  /* field_employment */ );

  // Exported field_base: 'field_employment_dates'.
  $field_bases['field_employment_dates'] = array(
  /* field_employment_dates */   'active' => 1,
  /* field_employment_dates */   'cardinality' => 1,
  /* field_employment_dates */   'deleted' => 0,
  /* field_employment_dates */   'entity_types' => array(),
  /* field_employment_dates */   'field_name' => 'field_employment_dates',
  /* field_employment_dates */   'indexes' => array(),
  /* field_employment_dates */   'locked' => 0,
  /* field_employment_dates */   'module' => 'date',
  /* field_employment_dates */   'settings' => array(
  /* field_employment_dates */     'cache_count' => 4,
  /* field_employment_dates */     'cache_enabled' => 0,
  /* field_employment_dates */     'granularity' => array(
  /* field_employment_dates */       'day' => 0,
  /* field_employment_dates */       'hour' => 0,
  /* field_employment_dates */       'minute' => 0,
  /* field_employment_dates */       'month' => 'month',
  /* field_employment_dates */       'second' => 0,
  /* field_employment_dates */       'year' => 'year',
  /* field_employment_dates */     ),
  /* field_employment_dates */     'repeat' => 0,
  /* field_employment_dates */     'timezone_db' => '',
  /* field_employment_dates */     'todate' => 'optional',
  /* field_employment_dates */     'tz_handling' => 'none',
  /* field_employment_dates */   ),
  /* field_employment_dates */   'translatable' => 0,
  /* field_employment_dates */   'type' => 'datetime',
  /* field_employment_dates */ );

  // Exported field_base: 'field_event_address'.
  $field_bases['field_event_address'] = array(
  /* field_event_address */   'active' => 1,
  /* field_event_address */   'cardinality' => 1,
  /* field_event_address */   'deleted' => 0,
  /* field_event_address */   'entity_types' => array(),
  /* field_event_address */   'field_name' => 'field_event_address',
  /* field_event_address */   'indexes' => array(),
  /* field_event_address */   'locked' => 0,
  /* field_event_address */   'module' => 'addressfield',
  /* field_event_address */   'settings' => array(),
  /* field_event_address */   'translatable' => 0,
  /* field_event_address */   'type' => 'addressfield',
  /* field_event_address */ );

  // Exported field_base: 'field_event_contact_person'.
  $field_bases['field_event_contact_person'] = array(
  /* field_event_contact_person */   'active' => 1,
  /* field_event_contact_person */   'cardinality' => -1,
  /* field_event_contact_person */   'deleted' => 0,
  /* field_event_contact_person */   'entity_types' => array(),
  /* field_event_contact_person */   'field_name' => 'field_event_contact_person',
  /* field_event_contact_person */   'indexes' => array(
  /* field_event_contact_person */     'target_id' => array(
  /* field_event_contact_person */       0 => 'target_id',
  /* field_event_contact_person */     ),
  /* field_event_contact_person */   ),
  /* field_event_contact_person */   'locked' => 0,
  /* field_event_contact_person */   'module' => 'entityreference',
  /* field_event_contact_person */   'settings' => array(
  /* field_event_contact_person */     'handler' => 'base',
  /* field_event_contact_person */     'handler_settings' => array(
  /* field_event_contact_person */       'behaviors' => array(
  /* field_event_contact_person */         'views-select-list' => array(
  /* field_event_contact_person */           'status' => 0,
  /* field_event_contact_person */         ),
  /* field_event_contact_person */       ),
  /* field_event_contact_person */       'sort' => array(
  /* field_event_contact_person */         'type' => 'none',
  /* field_event_contact_person */       ),
  /* field_event_contact_person */       'target_bundles' => array(),
  /* field_event_contact_person */     ),
  /* field_event_contact_person */     'target_type' => 'user',
  /* field_event_contact_person */   ),
  /* field_event_contact_person */   'translatable' => 0,
  /* field_event_contact_person */   'type' => 'entityreference',
  /* field_event_contact_person */ );

  // Exported field_base: 'field_event_date'.
  $field_bases['field_event_date'] = array(
  /* field_event_date */   'active' => 1,
  /* field_event_date */   'cardinality' => -1,
  /* field_event_date */   'deleted' => 0,
  /* field_event_date */   'entity_types' => array(),
  /* field_event_date */   'field_name' => 'field_event_date',
  /* field_event_date */   'indexes' => array(),
  /* field_event_date */   'locked' => 0,
  /* field_event_date */   'module' => 'date',
  /* field_event_date */   'settings' => array(
  /* field_event_date */     'cache_count' => 4,
  /* field_event_date */     'cache_enabled' => 0,
  /* field_event_date */     'granularity' => array(
  /* field_event_date */       'day' => 'day',
  /* field_event_date */       'hour' => 'hour',
  /* field_event_date */       'minute' => 'minute',
  /* field_event_date */       'month' => 'month',
  /* field_event_date */       'second' => 0,
  /* field_event_date */       'year' => 'year',
  /* field_event_date */     ),
  /* field_event_date */     'repeat' => 1,
  /* field_event_date */     'timezone_db' => 'America/New_York',
  /* field_event_date */     'todate' => 'optional',
  /* field_event_date */     'tz_handling' => 'date',
  /* field_event_date */   ),
  /* field_event_date */   'translatable' => 0,
  /* field_event_date */   'type' => 'date',
  /* field_event_date */ );

  // Exported field_base: 'field_event_date_description'.
  $field_bases['field_event_date_description'] = array(
  /* field_event_date_description */   'active' => 1,
  /* field_event_date_description */   'cardinality' => 1,
  /* field_event_date_description */   'deleted' => 0,
  /* field_event_date_description */   'entity_types' => array(),
  /* field_event_date_description */   'field_name' => 'field_event_date_description',
  /* field_event_date_description */   'indexes' => array(
  /* field_event_date_description */     'format' => array(
  /* field_event_date_description */       0 => 'format',
  /* field_event_date_description */     ),
  /* field_event_date_description */   ),
  /* field_event_date_description */   'locked' => 0,
  /* field_event_date_description */   'module' => 'text',
  /* field_event_date_description */   'settings' => array(),
  /* field_event_date_description */   'translatable' => 0,
  /* field_event_date_description */   'type' => 'text_long',
  /* field_event_date_description */ );

  // Exported field_base: 'field_event_location'.
  $field_bases['field_event_location'] = array(
  /* field_event_location */   'active' => 1,
  /* field_event_location */   'cardinality' => 1,
  /* field_event_location */   'deleted' => 0,
  /* field_event_location */   'entity_types' => array(),
  /* field_event_location */   'field_name' => 'field_event_location',
  /* field_event_location */   'indexes' => array(
  /* field_event_location */     'value' => array(
  /* field_event_location */       0 => 'value',
  /* field_event_location */     ),
  /* field_event_location */   ),
  /* field_event_location */   'locked' => 0,
  /* field_event_location */   'module' => 'list',
  /* field_event_location */   'settings' => array(
  /* field_event_location */     'allowed_values' => array(
  /* field_event_location */       'online' => 'Online',
  /* field_event_location */       'telephone' => 'Telephone',
  /* field_event_location */       'in_person' => 'In person',
  /* field_event_location */       'adobe_open' => 'Open Adobe Connect',
  /* field_event_location */       'adobe_moderated' => 'Moderated Adobe Connect',
  /* field_event_location */     ),
  /* field_event_location */     'allowed_values_function' => '',
  /* field_event_location */   ),
  /* field_event_location */   'translatable' => 0,
  /* field_event_location */   'type' => 'list_text',
  /* field_event_location */ );

  // Exported field_base: 'field_event_start_date'.
  $field_bases['field_event_start_date'] = array(
  /* field_event_start_date */   'active' => 1,
  /* field_event_start_date */   'cardinality' => 1,
  /* field_event_start_date */   'deleted' => 0,
  /* field_event_start_date */   'entity_types' => array(),
  /* field_event_start_date */   'field_name' => 'field_event_start_date',
  /* field_event_start_date */   'indexes' => array(),
  /* field_event_start_date */   'locked' => 0,
  /* field_event_start_date */   'module' => 'date',
  /* field_event_start_date */   'settings' => array(
  /* field_event_start_date */     'cache_count' => 4,
  /* field_event_start_date */     'cache_enabled' => 0,
  /* field_event_start_date */     'granularity' => array(
  /* field_event_start_date */       'day' => 'day',
  /* field_event_start_date */       'hour' => 'hour',
  /* field_event_start_date */       'minute' => 'minute',
  /* field_event_start_date */       'month' => 'month',
  /* field_event_start_date */       'second' => 0,
  /* field_event_start_date */       'year' => 'year',
  /* field_event_start_date */     ),
  /* field_event_start_date */     'repeat' => 0,
  /* field_event_start_date */     'timezone_db' => '',
  /* field_event_start_date */     'todate' => '',
  /* field_event_start_date */     'tz_handling' => 'none',
  /* field_event_start_date */   ),
  /* field_event_start_date */   'translatable' => 0,
  /* field_event_start_date */   'type' => 'datetime',
  /* field_event_start_date */ );

  // Exported field_base: 'field_event_telephone_number'.
  $field_bases['field_event_telephone_number'] = array(
  /* field_event_telephone_number */   'active' => 1,
  /* field_event_telephone_number */   'cardinality' => 1,
  /* field_event_telephone_number */   'deleted' => 0,
  /* field_event_telephone_number */   'entity_types' => array(),
  /* field_event_telephone_number */   'field_name' => 'field_event_telephone_number',
  /* field_event_telephone_number */   'indexes' => array(
  /* field_event_telephone_number */     'format' => array(
  /* field_event_telephone_number */       0 => 'format',
  /* field_event_telephone_number */     ),
  /* field_event_telephone_number */   ),
  /* field_event_telephone_number */   'locked' => 0,
  /* field_event_telephone_number */   'module' => 'text',
  /* field_event_telephone_number */   'settings' => array(
  /* field_event_telephone_number */     'max_length' => 255,
  /* field_event_telephone_number */   ),
  /* field_event_telephone_number */   'translatable' => 0,
  /* field_event_telephone_number */   'type' => 'text',
  /* field_event_telephone_number */ );

  // Exported field_base: 'field_event_telephone_pin'.
  $field_bases['field_event_telephone_pin'] = array(
  /* field_event_telephone_pin */   'active' => 1,
  /* field_event_telephone_pin */   'cardinality' => 1,
  /* field_event_telephone_pin */   'deleted' => 0,
  /* field_event_telephone_pin */   'entity_types' => array(),
  /* field_event_telephone_pin */   'field_name' => 'field_event_telephone_pin',
  /* field_event_telephone_pin */   'indexes' => array(
  /* field_event_telephone_pin */     'format' => array(
  /* field_event_telephone_pin */       0 => 'format',
  /* field_event_telephone_pin */     ),
  /* field_event_telephone_pin */   ),
  /* field_event_telephone_pin */   'locked' => 0,
  /* field_event_telephone_pin */   'module' => 'text',
  /* field_event_telephone_pin */   'settings' => array(
  /* field_event_telephone_pin */     'max_length' => 255,
  /* field_event_telephone_pin */   ),
  /* field_event_telephone_pin */   'translatable' => 0,
  /* field_event_telephone_pin */   'type' => 'text',
  /* field_event_telephone_pin */ );

  // Exported field_base: 'field_event_type'.
  $field_bases['field_event_type'] = array(
  /* field_event_type */   'active' => 1,
  /* field_event_type */   'cardinality' => 1,
  /* field_event_type */   'deleted' => 0,
  /* field_event_type */   'entity_types' => array(),
  /* field_event_type */   'field_name' => 'field_event_type',
  /* field_event_type */   'indexes' => array(
  /* field_event_type */     'value' => array(
  /* field_event_type */       0 => 'value',
  /* field_event_type */     ),
  /* field_event_type */   ),
  /* field_event_type */   'locked' => 0,
  /* field_event_type */   'module' => 'list',
  /* field_event_type */   'settings' => array(
  /* field_event_type */     'allowed_values' => array(
  /* field_event_type */       'General' => 'General',
  /* field_event_type */       'Alumni Meeting' => 'Alumni Meeting',
  /* field_event_type */       'Conference' => 'Conference',
  /* field_event_type */       'Meeting' => 'Meeting',
  /* field_event_type */       'Seminar' => 'Seminar',
  /* field_event_type */       'Session' => 'Session',
  /* field_event_type */       'Workshop' => 'Workshop',
  /* field_event_type */     ),
  /* field_event_type */     'allowed_values_function' => '',
  /* field_event_type */   ),
  /* field_event_type */   'translatable' => 0,
  /* field_event_type */   'type' => 'list_text',
  /* field_event_type */ );

  // Exported field_base: 'field_facebook'.
  $field_bases['field_facebook'] = array(
  /* field_facebook */   'active' => 1,
  /* field_facebook */   'cardinality' => 1,
  /* field_facebook */   'deleted' => 0,
  /* field_facebook */   'entity_types' => array(),
  /* field_facebook */   'field_name' => 'field_facebook',
  /* field_facebook */   'indexes' => array(
  /* field_facebook */     'format' => array(
  /* field_facebook */       0 => 'format',
  /* field_facebook */     ),
  /* field_facebook */   ),
  /* field_facebook */   'locked' => 0,
  /* field_facebook */   'module' => 'text',
  /* field_facebook */   'settings' => array(
  /* field_facebook */     'max_length' => 255,
  /* field_facebook */   ),
  /* field_facebook */   'translatable' => 0,
  /* field_facebook */   'type' => 'text',
  /* field_facebook */ );

  // Exported field_base: 'field_feedback_category'.
  $field_bases['field_feedback_category'] = array(
  /* field_feedback_category */   'active' => 1,
  /* field_feedback_category */   'cardinality' => 1,
  /* field_feedback_category */   'deleted' => 0,
  /* field_feedback_category */   'entity_types' => array(),
  /* field_feedback_category */   'field_name' => 'field_feedback_category',
  /* field_feedback_category */   'indexes' => array(
  /* field_feedback_category */     'value' => array(
  /* field_feedback_category */       0 => 'value',
  /* field_feedback_category */     ),
  /* field_feedback_category */   ),
  /* field_feedback_category */   'locked' => 0,
  /* field_feedback_category */   'module' => 'list',
  /* field_feedback_category */   'settings' => array(
  /* field_feedback_category */     'allowed_values' => array(
  /* field_feedback_category */       'Course-related' => 'Course Related',
  /* field_feedback_category */       'Administrative' => 'Administrative (lodging, food, transportation, support)',
  /* field_feedback_category */       'Technical' => 'Technical (computer, GlobalNET, internet access, mobile devices)',
  /* field_feedback_category */       'Personal' => 'Personal',
  /* field_feedback_category */     ),
  /* field_feedback_category */     'allowed_values_function' => '',
  /* field_feedback_category */   ),
  /* field_feedback_category */   'translatable' => 0,
  /* field_feedback_category */   'type' => 'list_text',
  /* field_feedback_category */ );

  // Exported field_base: 'field_feedback_category_event'.
  $field_bases['field_feedback_category_event'] = array(
  /* field_feedback_category_event */   'active' => 1,
  /* field_feedback_category_event */   'cardinality' => 1,
  /* field_feedback_category_event */   'deleted' => 0,
  /* field_feedback_category_event */   'entity_types' => array(),
  /* field_feedback_category_event */   'field_name' => 'field_feedback_category_event',
  /* field_feedback_category_event */   'indexes' => array(
  /* field_feedback_category_event */     'value' => array(
  /* field_feedback_category_event */       0 => 'value',
  /* field_feedback_category_event */     ),
  /* field_feedback_category_event */   ),
  /* field_feedback_category_event */   'locked' => 0,
  /* field_feedback_category_event */   'module' => 'list',
  /* field_feedback_category_event */   'settings' => array(
  /* field_feedback_category_event */     'allowed_values' => array(
  /* field_feedback_category_event */       'Event-related' => 'Event Related',
  /* field_feedback_category_event */       'Administrative' => 'Administrative (lodging, food, transportation, support)',
  /* field_feedback_category_event */       'Technical' => 'Technical (computer, GlobalNET, internet access, mobile devices)',
  /* field_feedback_category_event */       'Personal' => 'Personal',
  /* field_feedback_category_event */     ),
  /* field_feedback_category_event */     'allowed_values_function' => '',
  /* field_feedback_category_event */   ),
  /* field_feedback_category_event */   'translatable' => 0,
  /* field_feedback_category_event */   'type' => 'list_text',
  /* field_feedback_category_event */ );

  // Exported field_base: 'field_feedback_category_group'.
  $field_bases['field_feedback_category_group'] = array(
  /* field_feedback_category_group */   'active' => 1,
  /* field_feedback_category_group */   'cardinality' => 1,
  /* field_feedback_category_group */   'deleted' => 0,
  /* field_feedback_category_group */   'entity_types' => array(),
  /* field_feedback_category_group */   'field_name' => 'field_feedback_category_group',
  /* field_feedback_category_group */   'indexes' => array(
  /* field_feedback_category_group */     'value' => array(
  /* field_feedback_category_group */       0 => 'value',
  /* field_feedback_category_group */     ),
  /* field_feedback_category_group */   ),
  /* field_feedback_category_group */   'locked' => 0,
  /* field_feedback_category_group */   'module' => 'list',
  /* field_feedback_category_group */   'settings' => array(
  /* field_feedback_category_group */     'allowed_values' => array(
  /* field_feedback_category_group */       'Group-related' => 'Group Related',
  /* field_feedback_category_group */       'Administrative' => 'Administrative (lodging, food, transportation, support)',
  /* field_feedback_category_group */       'Technical' => 'Technical (computer, GlobalNET, internet access, mobile devices)',
  /* field_feedback_category_group */       'Personal' => 'Personal',
  /* field_feedback_category_group */     ),
  /* field_feedback_category_group */     'allowed_values_function' => '',
  /* field_feedback_category_group */   ),
  /* field_feedback_category_group */   'translatable' => 0,
  /* field_feedback_category_group */   'type' => 'list_text',
  /* field_feedback_category_group */ );

  // Exported field_base: 'field_file_document_title_text'.
  $field_bases['field_file_document_title_text'] = array(
  /* field_file_document_title_text */   'active' => 1,
  /* field_file_document_title_text */   'cardinality' => 1,
  /* field_file_document_title_text */   'deleted' => 0,
  /* field_file_document_title_text */   'entity_types' => array(),
  /* field_file_document_title_text */   'field_name' => 'field_file_document_title_text',
  /* field_file_document_title_text */   'indexes' => array(
  /* field_file_document_title_text */     'format' => array(
  /* field_file_document_title_text */       0 => 'format',
  /* field_file_document_title_text */     ),
  /* field_file_document_title_text */   ),
  /* field_file_document_title_text */   'locked' => 0,
  /* field_file_document_title_text */   'module' => 'text',
  /* field_file_document_title_text */   'settings' => array(
  /* field_file_document_title_text */     'max_length' => 255,
  /* field_file_document_title_text */   ),
  /* field_file_document_title_text */   'translatable' => 0,
  /* field_file_document_title_text */   'type' => 'text',
  /* field_file_document_title_text */ );

  // Exported field_base: 'field_file_image_alt_text'.
  $field_bases['field_file_image_alt_text'] = array(
  /* field_file_image_alt_text */   'active' => 1,
  /* field_file_image_alt_text */   'cardinality' => 1,
  /* field_file_image_alt_text */   'deleted' => 0,
  /* field_file_image_alt_text */   'entity_types' => array(),
  /* field_file_image_alt_text */   'field_name' => 'field_file_image_alt_text',
  /* field_file_image_alt_text */   'indexes' => array(
  /* field_file_image_alt_text */     'format' => array(
  /* field_file_image_alt_text */       0 => 'format',
  /* field_file_image_alt_text */     ),
  /* field_file_image_alt_text */   ),
  /* field_file_image_alt_text */   'locked' => 0,
  /* field_file_image_alt_text */   'module' => 'text',
  /* field_file_image_alt_text */   'settings' => array(
  /* field_file_image_alt_text */     'max_length' => 255,
  /* field_file_image_alt_text */   ),
  /* field_file_image_alt_text */   'translatable' => 0,
  /* field_file_image_alt_text */   'type' => 'text',
  /* field_file_image_alt_text */ );

  // Exported field_base: 'field_file_image_caption'.
  $field_bases['field_file_image_caption'] = array(
  /* field_file_image_caption */   'active' => 1,
  /* field_file_image_caption */   'cardinality' => 1,
  /* field_file_image_caption */   'deleted' => 0,
  /* field_file_image_caption */   'entity_types' => array(),
  /* field_file_image_caption */   'field_name' => 'field_file_image_caption',
  /* field_file_image_caption */   'indexes' => array(
  /* field_file_image_caption */     'format' => array(
  /* field_file_image_caption */       0 => 'format',
  /* field_file_image_caption */     ),
  /* field_file_image_caption */   ),
  /* field_file_image_caption */   'locked' => 0,
  /* field_file_image_caption */   'module' => 'text',
  /* field_file_image_caption */   'settings' => array(),
  /* field_file_image_caption */   'translatable' => 0,
  /* field_file_image_caption */   'type' => 'text_long',
  /* field_file_image_caption */ );

  // Exported field_base: 'field_file_image_title_text'.
  $field_bases['field_file_image_title_text'] = array(
  /* field_file_image_title_text */   'active' => 1,
  /* field_file_image_title_text */   'cardinality' => 1,
  /* field_file_image_title_text */   'deleted' => 0,
  /* field_file_image_title_text */   'entity_types' => array(),
  /* field_file_image_title_text */   'field_name' => 'field_file_image_title_text',
  /* field_file_image_title_text */   'indexes' => array(
  /* field_file_image_title_text */     'format' => array(
  /* field_file_image_title_text */       0 => 'format',
  /* field_file_image_title_text */     ),
  /* field_file_image_title_text */   ),
  /* field_file_image_title_text */   'locked' => 0,
  /* field_file_image_title_text */   'module' => 'text',
  /* field_file_image_title_text */   'settings' => array(
  /* field_file_image_title_text */     'max_length' => 255,
  /* field_file_image_title_text */   ),
  /* field_file_image_title_text */   'translatable' => 0,
  /* field_file_image_title_text */   'type' => 'text',
  /* field_file_image_title_text */ );

  // Exported field_base: 'field_folder_layout'.
  $field_bases['field_folder_layout'] = array(
  /* field_folder_layout */   'active' => 1,
  /* field_folder_layout */   'cardinality' => 1,
  /* field_folder_layout */   'deleted' => 0,
  /* field_folder_layout */   'entity_types' => array(),
  /* field_folder_layout */   'field_name' => 'field_folder_layout',
  /* field_folder_layout */   'indexes' => array(
  /* field_folder_layout */     'value' => array(
  /* field_folder_layout */       0 => 'value',
  /* field_folder_layout */     ),
  /* field_folder_layout */   ),
  /* field_folder_layout */   'locked' => 0,
  /* field_folder_layout */   'module' => 'list',
  /* field_folder_layout */   'settings' => array(
  /* field_folder_layout */     'allowed_values' => array(
  /* field_folder_layout */       0 => 'Show as grid',
  /* field_folder_layout */       1 => 'Show as list',
  /* field_folder_layout */     ),
  /* field_folder_layout */     'allowed_values_function' => '',
  /* field_folder_layout */   ),
  /* field_folder_layout */   'translatable' => 0,
  /* field_folder_layout */   'type' => 'list_integer',
  /* field_folder_layout */ );

  // Exported field_base: 'field_folder_type'.
  $field_bases['field_folder_type'] = array(
  /* field_folder_type */   'active' => 1,
  /* field_folder_type */   'cardinality' => 1,
  /* field_folder_type */   'deleted' => 0,
  /* field_folder_type */   'entity_types' => array(),
  /* field_folder_type */   'field_name' => 'field_folder_type',
  /* field_folder_type */   'indexes' => array(
  /* field_folder_type */     'value' => array(
  /* field_folder_type */       0 => 'value',
  /* field_folder_type */     ),
  /* field_folder_type */   ),
  /* field_folder_type */   'locked' => 0,
  /* field_folder_type */   'module' => 'list',
  /* field_folder_type */   'settings' => array(
  /* field_folder_type */     'allowed_values' => array(
  /* field_folder_type */       0 => 'File list',
  /* field_folder_type */       1 => 'Photo gallery',
  /* field_folder_type */     ),
  /* field_folder_type */     'allowed_values_function' => '',
  /* field_folder_type */   ),
  /* field_folder_type */   'translatable' => 0,
  /* field_folder_type */   'type' => 'list_integer',
  /* field_folder_type */ );

  // Exported field_base: 'field_footer_description'.
  $field_bases['field_footer_description'] = array(
  /* field_footer_description */   'active' => 1,
  /* field_footer_description */   'cardinality' => 1,
  /* field_footer_description */   'deleted' => 0,
  /* field_footer_description */   'entity_types' => array(),
  /* field_footer_description */   'field_name' => 'field_footer_description',
  /* field_footer_description */   'indexes' => array(
  /* field_footer_description */     'format' => array(
  /* field_footer_description */       0 => 'format',
  /* field_footer_description */     ),
  /* field_footer_description */   ),
  /* field_footer_description */   'locked' => 0,
  /* field_footer_description */   'module' => 'text',
  /* field_footer_description */   'settings' => array(),
  /* field_footer_description */   'translatable' => 0,
  /* field_footer_description */   'type' => 'text_long',
  /* field_footer_description */ );

  // Exported field_base: 'field_google_plus'.
  $field_bases['field_google_plus'] = array(
  /* field_google_plus */   'active' => 1,
  /* field_google_plus */   'cardinality' => 1,
  /* field_google_plus */   'deleted' => 0,
  /* field_google_plus */   'entity_types' => array(),
  /* field_google_plus */   'field_name' => 'field_google_plus',
  /* field_google_plus */   'indexes' => array(
  /* field_google_plus */     'format' => array(
  /* field_google_plus */       0 => 'format',
  /* field_google_plus */     ),
  /* field_google_plus */   ),
  /* field_google_plus */   'locked' => 0,
  /* field_google_plus */   'module' => 'text',
  /* field_google_plus */   'settings' => array(
  /* field_google_plus */     'max_length' => 255,
  /* field_google_plus */   ),
  /* field_google_plus */   'translatable' => 0,
  /* field_google_plus */   'type' => 'text',
  /* field_google_plus */ );

  // Exported field_base: 'field_group_help'.
  $field_bases['field_group_help'] = array(
  /* field_group_help */   'active' => 1,
  /* field_group_help */   'cardinality' => 1,
  /* field_group_help */   'deleted' => 0,
  /* field_group_help */   'entity_types' => array(),
  /* field_group_help */   'field_name' => 'field_group_help',
  /* field_group_help */   'indexes' => array(
  /* field_group_help */     'format' => array(
  /* field_group_help */       0 => 'format',
  /* field_group_help */     ),
  /* field_group_help */   ),
  /* field_group_help */   'locked' => 0,
  /* field_group_help */   'module' => 'text',
  /* field_group_help */   'settings' => array(),
  /* field_group_help */   'translatable' => 0,
  /* field_group_help */   'type' => 'text_long',
  /* field_group_help */ );

  // Exported field_base: 'field_group_manager'.
  $field_bases['field_group_manager'] = array(
  /* field_group_manager */   'active' => 1,
  /* field_group_manager */   'cardinality' => 1,
  /* field_group_manager */   'deleted' => 0,
  /* field_group_manager */   'entity_types' => array(),
  /* field_group_manager */   'field_name' => 'field_group_manager',
  /* field_group_manager */   'indexes' => array(
  /* field_group_manager */     'target_id' => array(
  /* field_group_manager */       0 => 'target_id',
  /* field_group_manager */     ),
  /* field_group_manager */   ),
  /* field_group_manager */   'locked' => 0,
  /* field_group_manager */   'module' => 'entityreference',
  /* field_group_manager */   'settings' => array(
  /* field_group_manager */     'handler' => 'base',
  /* field_group_manager */     'handler_settings' => array(
  /* field_group_manager */       'behaviors' => array(
  /* field_group_manager */         'views-select-list' => array(
  /* field_group_manager */           'status' => 0,
  /* field_group_manager */         ),
  /* field_group_manager */       ),
  /* field_group_manager */       'sort' => array(
  /* field_group_manager */         'type' => 'none',
  /* field_group_manager */       ),
  /* field_group_manager */       'target_bundles' => array(),
  /* field_group_manager */     ),
  /* field_group_manager */     'target_type' => 'user',
  /* field_group_manager */   ),
  /* field_group_manager */   'translatable' => 0,
  /* field_group_manager */   'type' => 'entityreference',
  /* field_group_manager */ );

  // Exported field_base: 'field_group_manager_display'.
  $field_bases['field_group_manager_display'] = array(
  /* field_group_manager_display */   'active' => 1,
  /* field_group_manager_display */   'cardinality' => 1,
  /* field_group_manager_display */   'deleted' => 0,
  /* field_group_manager_display */   'entity_types' => array(),
  /* field_group_manager_display */   'field_name' => 'field_group_manager_display',
  /* field_group_manager_display */   'indexes' => array(
  /* field_group_manager_display */     'value' => array(
  /* field_group_manager_display */       0 => 'value',
  /* field_group_manager_display */     ),
  /* field_group_manager_display */   ),
  /* field_group_manager_display */   'locked' => 0,
  /* field_group_manager_display */   'module' => 'list',
  /* field_group_manager_display */   'settings' => array(
  /* field_group_manager_display */     'allowed_values' => array(
  /* field_group_manager_display */       0 => 'No',
  /* field_group_manager_display */       1 => 'Yes',
  /* field_group_manager_display */     ),
  /* field_group_manager_display */     'allowed_values_function' => '',
  /* field_group_manager_display */   ),
  /* field_group_manager_display */   'translatable' => 0,
  /* field_group_manager_display */   'type' => 'list_boolean',
  /* field_group_manager_display */ );

  // Exported field_base: 'field_group_reference'.
  $field_bases['field_group_reference'] = array(
  /* field_group_reference */   'active' => 1,
  /* field_group_reference */   'cardinality' => 1,
  /* field_group_reference */   'deleted' => 0,
  /* field_group_reference */   'entity_types' => array(),
  /* field_group_reference */   'field_name' => 'field_group_reference',
  /* field_group_reference */   'indexes' => array(
  /* field_group_reference */     'target_id' => array(
  /* field_group_reference */       0 => 'target_id',
  /* field_group_reference */     ),
  /* field_group_reference */   ),
  /* field_group_reference */   'locked' => 0,
  /* field_group_reference */   'module' => 'entityreference',
  /* field_group_reference */   'settings' => array(
  /* field_group_reference */     'handler' => 'base',
  /* field_group_reference */     'handler_settings' => array(
  /* field_group_reference */       'behaviors' => array(
  /* field_group_reference */         'views-select-list' => array(
  /* field_group_reference */           'status' => 0,
  /* field_group_reference */         ),
  /* field_group_reference */       ),
  /* field_group_reference */       'sort' => array(
  /* field_group_reference */         'type' => 'none',
  /* field_group_reference */       ),
  /* field_group_reference */       'target_bundles' => array(
  /* field_group_reference */         'group' => 'group',
  /* field_group_reference */       ),
  /* field_group_reference */     ),
  /* field_group_reference */     'target_type' => 'node',
  /* field_group_reference */   ),
  /* field_group_reference */   'translatable' => 0,
  /* field_group_reference */   'type' => 'entityreference',
  /* field_group_reference */ );

  // Exported field_base: 'field_group_short_title'.
  $field_bases['field_group_short_title'] = array(
  /* field_group_short_title */   'active' => 1,
  /* field_group_short_title */   'cardinality' => 1,
  /* field_group_short_title */   'deleted' => 0,
  /* field_group_short_title */   'entity_types' => array(),
  /* field_group_short_title */   'field_name' => 'field_group_short_title',
  /* field_group_short_title */   'indexes' => array(
  /* field_group_short_title */     'format' => array(
  /* field_group_short_title */       0 => 'format',
  /* field_group_short_title */     ),
  /* field_group_short_title */   ),
  /* field_group_short_title */   'locked' => 0,
  /* field_group_short_title */   'module' => 'text',
  /* field_group_short_title */   'settings' => array(
  /* field_group_short_title */     'max_length' => 100,
  /* field_group_short_title */   ),
  /* field_group_short_title */   'translatable' => 0,
  /* field_group_short_title */   'type' => 'text',
  /* field_group_short_title */ );

  // Exported field_base: 'field_help_topics'.
  $field_bases['field_help_topics'] = array(
  /* field_help_topics */   'active' => 1,
  /* field_help_topics */   'cardinality' => -1,
  /* field_help_topics */   'deleted' => 0,
  /* field_help_topics */   'entity_types' => array(),
  /* field_help_topics */   'field_name' => 'field_help_topics',
  /* field_help_topics */   'indexes' => array(
  /* field_help_topics */     'tid' => array(
  /* field_help_topics */       0 => 'tid',
  /* field_help_topics */     ),
  /* field_help_topics */   ),
  /* field_help_topics */   'locked' => 0,
  /* field_help_topics */   'module' => 'taxonomy',
  /* field_help_topics */   'settings' => array(
  /* field_help_topics */     'allowed_values' => array(
  /* field_help_topics */       0 => array(
  /* field_help_topics */         'vocabulary' => 'help',
  /* field_help_topics */         'parent' => 0,
  /* field_help_topics */       ),
  /* field_help_topics */     ),
  /* field_help_topics */     'options_list_callback' => NULL,
  /* field_help_topics */   ),
  /* field_help_topics */   'translatable' => 0,
  /* field_help_topics */   'type' => 'taxonomy_term_reference',
  /* field_help_topics */ );

  // Exported field_base: 'field_iso2'.
  $field_bases['field_iso2'] = array(
  /* field_iso2 */   'active' => 1,
  /* field_iso2 */   'cardinality' => 1,
  /* field_iso2 */   'deleted' => 0,
  /* field_iso2 */   'entity_types' => array(),
  /* field_iso2 */   'field_name' => 'field_iso2',
  /* field_iso2 */   'indexes' => array(
  /* field_iso2 */     'format' => array(
  /* field_iso2 */       0 => 'format',
  /* field_iso2 */     ),
  /* field_iso2 */   ),
  /* field_iso2 */   'label' => 'ISO-2 country code',
  /* field_iso2 */   'locked' => 0,
  /* field_iso2 */   'module' => 'text',
  /* field_iso2 */   'settings' => array(
  /* field_iso2 */     'max_length' => 255,
  /* field_iso2 */   ),
  /* field_iso2 */   'translatable' => 0,
  /* field_iso2 */   'type' => 'text',
  /* field_iso2 */ );

  // Exported field_base: 'field_iso3'.
  $field_bases['field_iso3'] = array(
  /* field_iso3 */   'active' => 1,
  /* field_iso3 */   'cardinality' => 1,
  /* field_iso3 */   'deleted' => 0,
  /* field_iso3 */   'entity_types' => array(),
  /* field_iso3 */   'field_name' => 'field_iso3',
  /* field_iso3 */   'indexes' => array(
  /* field_iso3 */     'format' => array(
  /* field_iso3 */       0 => 'format',
  /* field_iso3 */     ),
  /* field_iso3 */   ),
  /* field_iso3 */   'label' => 'ISO-3 country code',
  /* field_iso3 */   'locked' => 0,
  /* field_iso3 */   'module' => 'text',
  /* field_iso3 */   'settings' => array(
  /* field_iso3 */     'max_length' => 255,
  /* field_iso3 */   ),
  /* field_iso3 */   'translatable' => 0,
  /* field_iso3 */   'type' => 'text',
  /* field_iso3 */ );

  // Exported field_base: 'field_job_description'.
  $field_bases['field_job_description'] = array(
  /* field_job_description */   'active' => 1,
  /* field_job_description */   'cardinality' => 1,
  /* field_job_description */   'deleted' => 0,
  /* field_job_description */   'entity_types' => array(),
  /* field_job_description */   'field_name' => 'field_job_description',
  /* field_job_description */   'indexes' => array(
  /* field_job_description */     'format' => array(
  /* field_job_description */       0 => 'format',
  /* field_job_description */     ),
  /* field_job_description */   ),
  /* field_job_description */   'locked' => 0,
  /* field_job_description */   'module' => 'text',
  /* field_job_description */   'settings' => array(),
  /* field_job_description */   'translatable' => 0,
  /* field_job_description */   'type' => 'text_long',
  /* field_job_description */ );

  // Exported field_base: 'field_language'.
  $field_bases['field_language'] = array(
  /* field_language */   'active' => 1,
  /* field_language */   'cardinality' => 1,
  /* field_language */   'deleted' => 0,
  /* field_language */   'entity_types' => array(),
  /* field_language */   'field_name' => 'field_language',
  /* field_language */   'indexes' => array(
  /* field_language */     'value' => array(
  /* field_language */       0 => 'value',
  /* field_language */     ),
  /* field_language */   ),
  /* field_language */   'locked' => 0,
  /* field_language */   'module' => 'list',
  /* field_language */   'settings' => array(
  /* field_language */     'allowed_values' => array(
  /* field_language */       'Language Neutral' => 'Language Neutral',
  /* field_language */       'Arabic' => 'Arabic',
  /* field_language */       'English' => 'English',
  /* field_language */       'French' => 'French',
  /* field_language */       'German' => 'German',
  /* field_language */       'Spanish' => 'Spanish',
  /* field_language */     ),
  /* field_language */     'allowed_values_function' => '',
  /* field_language */   ),
  /* field_language */   'translatable' => 0,
  /* field_language */   'type' => 'list_text',
  /* field_language */ );

  // Exported field_base: 'field_leadership'.
  $field_bases['field_leadership'] = array(
  /* field_leadership */   'active' => 1,
  /* field_leadership */   'cardinality' => 1,
  /* field_leadership */   'deleted' => 0,
  /* field_leadership */   'entity_types' => array(),
  /* field_leadership */   'field_name' => 'field_leadership',
  /* field_leadership */   'indexes' => array(
  /* field_leadership */     'format' => array(
  /* field_leadership */       0 => 'format',
  /* field_leadership */     ),
  /* field_leadership */   ),
  /* field_leadership */   'locked' => 0,
  /* field_leadership */   'module' => 'text',
  /* field_leadership */   'settings' => array(),
  /* field_leadership */   'translatable' => 0,
  /* field_leadership */   'type' => 'text_long',
  /* field_leadership */ );

  // Exported field_base: 'field_license'.
  $field_bases['field_license'] = array(
  /* field_license */   'active' => 1,
  /* field_license */   'cardinality' => 1,
  /* field_license */   'deleted' => 0,
  /* field_license */   'entity_types' => array(),
  /* field_license */   'field_name' => 'field_license',
  /* field_license */   'indexes' => array(
  /* field_license */     'value' => array(
  /* field_license */       0 => 'value',
  /* field_license */     ),
  /* field_license */   ),
  /* field_license */   'locked' => 1,
  /* field_license */   'module' => 'list',
  /* field_license */   'settings' => array(
  /* field_license */     'allowed_values' => array(),
  /* field_license */     'allowed_values_function' => '_media_gallery_get_field_license_values',
  /* field_license */   ),
  /* field_license */   'translatable' => 0,
  /* field_license */   'type' => 'list_text',
  /* field_license */ );

  // Exported field_base: 'field_linkedin'.
  $field_bases['field_linkedin'] = array(
  /* field_linkedin */   'active' => 1,
  /* field_linkedin */   'cardinality' => 1,
  /* field_linkedin */   'deleted' => 0,
  /* field_linkedin */   'entity_types' => array(),
  /* field_linkedin */   'field_name' => 'field_linkedin',
  /* field_linkedin */   'indexes' => array(
  /* field_linkedin */     'format' => array(
  /* field_linkedin */       0 => 'format',
  /* field_linkedin */     ),
  /* field_linkedin */   ),
  /* field_linkedin */   'locked' => 0,
  /* field_linkedin */   'module' => 'text',
  /* field_linkedin */   'settings' => array(
  /* field_linkedin */     'max_length' => 255,
  /* field_linkedin */   ),
  /* field_linkedin */   'translatable' => 0,
  /* field_linkedin */   'type' => 'text',
  /* field_linkedin */ );

  // Exported field_base: 'field_location_venue_name'.
  $field_bases['field_location_venue_name'] = array(
  /* field_location_venue_name */   'active' => 1,
  /* field_location_venue_name */   'cardinality' => 1,
  /* field_location_venue_name */   'deleted' => 0,
  /* field_location_venue_name */   'entity_types' => array(),
  /* field_location_venue_name */   'field_name' => 'field_location_venue_name',
  /* field_location_venue_name */   'indexes' => array(
  /* field_location_venue_name */     'format' => array(
  /* field_location_venue_name */       0 => 'format',
  /* field_location_venue_name */     ),
  /* field_location_venue_name */   ),
  /* field_location_venue_name */   'locked' => 0,
  /* field_location_venue_name */   'module' => 'text',
  /* field_location_venue_name */   'settings' => array(
  /* field_location_venue_name */     'max_length' => 255,
  /* field_location_venue_name */   ),
  /* field_location_venue_name */   'translatable' => 0,
  /* field_location_venue_name */   'type' => 'text',
  /* field_location_venue_name */ );

  // Exported field_base: 'field_logo'.
  $field_bases['field_logo'] = array(
  /* field_logo */   'active' => 1,
  /* field_logo */   'cardinality' => 1,
  /* field_logo */   'deleted' => 0,
  /* field_logo */   'entity_types' => array(),
  /* field_logo */   'field_name' => 'field_logo',
  /* field_logo */   'indexes' => array(
  /* field_logo */     'fid' => array(
  /* field_logo */       0 => 'fid',
  /* field_logo */     ),
  /* field_logo */   ),
  /* field_logo */   'locked' => 0,
  /* field_logo */   'module' => 'image',
  /* field_logo */   'settings' => array(
  /* field_logo */     'default_image' => 0,
  /* field_logo */     'uri_scheme' => 'public',
  /* field_logo */   ),
  /* field_logo */   'translatable' => 0,
  /* field_logo */   'type' => 'image',
  /* field_logo */ );

  // Exported field_base: 'field_main_image'.
  $field_bases['field_main_image'] = array(
  /* field_main_image */   'active' => 1,
  /* field_main_image */   'cardinality' => 1,
  /* field_main_image */   'deleted' => 0,
  /* field_main_image */   'entity_types' => array(),
  /* field_main_image */   'field_name' => 'field_main_image',
  /* field_main_image */   'indexes' => array(
  /* field_main_image */     'fid' => array(
  /* field_main_image */       0 => 'fid',
  /* field_main_image */     ),
  /* field_main_image */   ),
  /* field_main_image */   'locked' => 0,
  /* field_main_image */   'module' => 'image',
  /* field_main_image */   'settings' => array(
  /* field_main_image */     'default_image' => 0,
  /* field_main_image */     'uri_scheme' => 'private',
  /* field_main_image */   ),
  /* field_main_image */   'translatable' => 0,
  /* field_main_image */   'type' => 'image',
  /* field_main_image */ );

  // Exported field_base: 'field_media'.
  $field_bases['field_media'] = array(
  /* field_media */   'active' => 1,
  /* field_media */   'cardinality' => -1,
  /* field_media */   'deleted' => 0,
  /* field_media */   'entity_types' => array(),
  /* field_media */   'field_name' => 'field_media',
  /* field_media */   'indexes' => array(
  /* field_media */     'fid' => array(
  /* field_media */       0 => 'fid',
  /* field_media */     ),
  /* field_media */   ),
  /* field_media */   'locked' => 0,
  /* field_media */   'module' => 'file',
  /* field_media */   'settings' => array(
  /* field_media */     'display_default' => 1,
  /* field_media */     'display_field' => 1,
  /* field_media */     'uri_scheme' => 'private',
  /* field_media */   ),
  /* field_media */   'translatable' => 0,
  /* field_media */   'type' => 'file',
  /* field_media */ );

  // Exported field_base: 'field_mission'.
  $field_bases['field_mission'] = array(
  /* field_mission */   'active' => 1,
  /* field_mission */   'cardinality' => 1,
  /* field_mission */   'deleted' => 0,
  /* field_mission */   'entity_types' => array(),
  /* field_mission */   'field_name' => 'field_mission',
  /* field_mission */   'indexes' => array(
  /* field_mission */     'format' => array(
  /* field_mission */       0 => 'format',
  /* field_mission */     ),
  /* field_mission */   ),
  /* field_mission */   'locked' => 0,
  /* field_mission */   'module' => 'text',
  /* field_mission */   'settings' => array(),
  /* field_mission */   'translatable' => 0,
  /* field_mission */   'type' => 'text_long',
  /* field_mission */ );

  // Exported field_base: 'field_name_first'.
  $field_bases['field_name_first'] = array(
  /* field_name_first */   'active' => 1,
  /* field_name_first */   'cardinality' => 1,
  /* field_name_first */   'deleted' => 0,
  /* field_name_first */   'entity_types' => array(),
  /* field_name_first */   'field_name' => 'field_name_first',
  /* field_name_first */   'indexes' => array(
  /* field_name_first */     'format' => array(
  /* field_name_first */       0 => 'format',
  /* field_name_first */     ),
  /* field_name_first */   ),
  /* field_name_first */   'locked' => 0,
  /* field_name_first */   'module' => 'text',
  /* field_name_first */   'settings' => array(
  /* field_name_first */     'max_length' => 40,
  /* field_name_first */   ),
  /* field_name_first */   'translatable' => 0,
  /* field_name_first */   'type' => 'text',
  /* field_name_first */ );

  // Exported field_base: 'field_name_last'.
  $field_bases['field_name_last'] = array(
  /* field_name_last */   'active' => 1,
  /* field_name_last */   'cardinality' => 1,
  /* field_name_last */   'deleted' => 0,
  /* field_name_last */   'entity_types' => array(),
  /* field_name_last */   'field_name' => 'field_name_last',
  /* field_name_last */   'indexes' => array(
  /* field_name_last */     'format' => array(
  /* field_name_last */       0 => 'format',
  /* field_name_last */     ),
  /* field_name_last */   ),
  /* field_name_last */   'locked' => 0,
  /* field_name_last */   'module' => 'text',
  /* field_name_last */   'settings' => array(
  /* field_name_last */     'max_length' => 60,
  /* field_name_last */   ),
  /* field_name_last */   'translatable' => 0,
  /* field_name_last */   'type' => 'text',
  /* field_name_last */ );

  // Exported field_base: 'field_name_middle'.
  $field_bases['field_name_middle'] = array(
  /* field_name_middle */   'active' => 1,
  /* field_name_middle */   'cardinality' => 1,
  /* field_name_middle */   'deleted' => 0,
  /* field_name_middle */   'entity_types' => array(),
  /* field_name_middle */   'field_name' => 'field_name_middle',
  /* field_name_middle */   'indexes' => array(
  /* field_name_middle */     'format' => array(
  /* field_name_middle */       0 => 'format',
  /* field_name_middle */     ),
  /* field_name_middle */   ),
  /* field_name_middle */   'locked' => 0,
  /* field_name_middle */   'module' => 'text',
  /* field_name_middle */   'settings' => array(
  /* field_name_middle */     'max_length' => 255,
  /* field_name_middle */   ),
  /* field_name_middle */   'translatable' => 0,
  /* field_name_middle */   'type' => 'text',
  /* field_name_middle */ );

  // Exported field_base: 'field_nationality'.
  $field_bases['field_nationality'] = array(
  /* field_nationality */   'active' => 1,
  /* field_nationality */   'cardinality' => 1,
  /* field_nationality */   'deleted' => 0,
  /* field_nationality */   'entity_types' => array(),
  /* field_nationality */   'field_name' => 'field_nationality',
  /* field_nationality */   'indexes' => array(
  /* field_nationality */     'value' => array(
  /* field_nationality */       0 => 'value',
  /* field_nationality */     ),
  /* field_nationality */   ),
  /* field_nationality */   'locked' => 0,
  /* field_nationality */   'module' => 'list',
  /* field_nationality */   'settings' => array(
  /* field_nationality */     'allowed_values' => array(
  /* field_nationality */       'AF' => 'Afghanistan',
  /* field_nationality */       'AX' => 'Åland Islands',
  /* field_nationality */       'AL' => 'Albania',
  /* field_nationality */       'DZ' => 'Algeria',
  /* field_nationality */       'AS' => 'American Samoa',
  /* field_nationality */       'AD' => 'Andorra',
  /* field_nationality */       'AO' => 'Angola',
  /* field_nationality */       'AI' => 'Anguilla',
  /* field_nationality */       'AQ' => 'Antarctica',
  /* field_nationality */       'AG' => 'Antigua/Barbuda',
  /* field_nationality */       'AR' => 'Argentina',
  /* field_nationality */       'AM' => 'Armenia',
  /* field_nationality */       'AW' => 'Aruba',
  /* field_nationality */       'AU' => 'Australia',
  /* field_nationality */       'AT' => 'Austria',
  /* field_nationality */       'AZ' => 'Azerbaijan',
  /* field_nationality */       'BS' => 'Bahamas',
  /* field_nationality */       'BH' => 'Bahrain',
  /* field_nationality */       'BD' => 'Bangladesh',
  /* field_nationality */       'BB' => 'Barbados',
  /* field_nationality */       'BY' => 'Belarus',
  /* field_nationality */       'BE' => 'Belgium',
  /* field_nationality */       'BZ' => 'Belize',
  /* field_nationality */       'BJ' => 'Benin',
  /* field_nationality */       'BM' => 'Bermuda',
  /* field_nationality */       'BT' => 'Bhutan',
  /* field_nationality */       'BO' => 'Bolivia',
  /* field_nationality */       'BA' => 'Bosnia/Herzegovina',
  /* field_nationality */       'BW' => 'Botswana',
  /* field_nationality */       'BV' => 'Bouvet Island',
  /* field_nationality */       'BR' => 'Brazil',
  /* field_nationality */       'BN' => 'Brunei Darussalam',
  /* field_nationality */       'BG' => 'Bulgaria',
  /* field_nationality */       'BF' => 'Burkina Faso',
  /* field_nationality */       'BI' => 'Burundi',
  /* field_nationality */       'KH' => 'Cambodia',
  /* field_nationality */       'CM' => 'Cameroon',
  /* field_nationality */       'CA' => 'Canada',
  /* field_nationality */       'CV' => 'Cape Verde',
  /* field_nationality */       'KY' => 'Cayman Islands',
  /* field_nationality */       'CF' => 'Central African Republic',
  /* field_nationality */       'TD' => 'Chad',
  /* field_nationality */       'CL' => 'Chile',
  /* field_nationality */       'CN' => 'China',
  /* field_nationality */       'CX' => 'Christmas Island',
  /* field_nationality */       'CC' => 'Cocos (Keeling) Islands',
  /* field_nationality */       'CO' => 'Colombia',
  /* field_nationality */       'KM' => 'Comoros',
  /* field_nationality */       'CD' => 'Congo, Democratic Republic',
  /* field_nationality */       'CG' => 'Congo, Republic of',
  /* field_nationality */       'CK' => 'Cook Islands',
  /* field_nationality */       'CR' => 'Costa Rica',
  /* field_nationality */       'CI' => 'Côte D\'Ivoire',
  /* field_nationality */       'HR' => 'Croatia',
  /* field_nationality */       'CU' => 'Cuba',
  /* field_nationality */       'CY' => 'Cyprus',
  /* field_nationality */       'CZ' => 'Czech Republic',
  /* field_nationality */       'DK' => 'Denmark',
  /* field_nationality */       'DJ' => 'Djibouti',
  /* field_nationality */       'DM' => 'Dominica',
  /* field_nationality */       'DO' => 'Dominican Republic',
  /* field_nationality */       'EC' => 'Ecuador',
  /* field_nationality */       'EG' => 'Egypt',
  /* field_nationality */       'SV' => 'El Salvador',
  /* field_nationality */       'GQ' => 'Equatorial Guinea',
  /* field_nationality */       'ER' => 'Eritrea',
  /* field_nationality */       'EE' => 'Estonia',
  /* field_nationality */       'ET' => 'Ethiopia',
  /* field_nationality */       'FK' => 'Falkland Islands(Malvinas)',
  /* field_nationality */       'FO' => 'Faroe Islands',
  /* field_nationality */       'FJ' => 'Fiji',
  /* field_nationality */       'FI' => 'Finland',
  /* field_nationality */       'FR' => 'France',
  /* field_nationality */       'GF' => 'French Guiana',
  /* field_nationality */       'PF' => 'French Polynesia',
  /* field_nationality */       'TF' => 'French Southern Territories',
  /* field_nationality */       'GA' => 'Gabon',
  /* field_nationality */       'GM' => 'Gambia',
  /* field_nationality */       'GE' => 'Georgia',
  /* field_nationality */       'DE' => 'Germany',
  /* field_nationality */       'GH' => 'Ghana',
  /* field_nationality */       'GI' => 'Gibraltar',
  /* field_nationality */       'GR' => 'Greece',
  /* field_nationality */       'GL' => 'Greenland',
  /* field_nationality */       'GD' => 'Grenada',
  /* field_nationality */       'GP' => 'Guadeloupe',
  /* field_nationality */       'GU' => 'Guam',
  /* field_nationality */       'GT' => 'Guatemala',
  /* field_nationality */       'GG' => 'Guernsey',
  /* field_nationality */       'GN' => 'Guinea',
  /* field_nationality */       'GW' => 'Guinea-Bissau',
  /* field_nationality */       'GY' => 'Guyana',
  /* field_nationality */       'HT' => 'Haiti',
  /* field_nationality */       'HM' => 'Heard Island/Mcdonald Islands',
  /* field_nationality */       'HN' => 'Honduras',
  /* field_nationality */       'HK' => 'Hong Kong',
  /* field_nationality */       'HU' => 'Hungary',
  /* field_nationality */       'IS' => 'Iceland',
  /* field_nationality */       'IN' => 'India',
  /* field_nationality */       'ID' => 'Indonesia',
  /* field_nationality */       'IR' => 'Iran',
  /* field_nationality */       'IQ' => 'Iraq',
  /* field_nationality */       'IE' => 'Ireland',
  /* field_nationality */       'IM' => 'Isle Of Man',
  /* field_nationality */       'IL' => 'Israel',
  /* field_nationality */       'IT' => 'Italy',
  /* field_nationality */       'JM' => 'Jamaica',
  /* field_nationality */       'JP' => 'Japan',
  /* field_nationality */       'JE' => 'Jersey',
  /* field_nationality */       'JO' => 'Jordan',
  /* field_nationality */       'KZ' => 'Kazakhstan',
  /* field_nationality */       'KE' => 'Kenya',
  /* field_nationality */       'KI' => 'Kiribati',
  /* field_nationality */       'KV' => 'Kosovo',
  /* field_nationality */       'KW' => 'Kuwait',
  /* field_nationality */       'KG' => 'Kyrgyzstan',
  /* field_nationality */       'LA' => 'Laos',
  /* field_nationality */       'LV' => 'Latvia',
  /* field_nationality */       'LB' => 'Lebanon',
  /* field_nationality */       'LS' => 'Lesotho',
  /* field_nationality */       'LR' => 'Liberia',
  /* field_nationality */       'LY' => 'Libya',
  /* field_nationality */       'LI' => 'Liechtenstein',
  /* field_nationality */       'LT' => 'Lithuania',
  /* field_nationality */       'LU' => 'Luxembourg',
  /* field_nationality */       'MO' => 'Macao',
  /* field_nationality */       'MK' => 'Macedonia',
  /* field_nationality */       'FYROM' => 'Macedonia, Former Yugoslav Republic of',
  /* field_nationality */       'MG' => 'Madagascar',
  /* field_nationality */       'MW' => 'Malawi',
  /* field_nationality */       'MY' => 'Malaysia',
  /* field_nationality */       'MV' => 'Maldives',
  /* field_nationality */       'ML' => 'Mali',
  /* field_nationality */       'MT' => 'Malta',
  /* field_nationality */       'MH' => 'Marshall Islands',
  /* field_nationality */       'MQ' => 'Martinique',
  /* field_nationality */       'MR' => 'Mauritania',
  /* field_nationality */       'MU' => 'Mauritius',
  /* field_nationality */       'YT' => 'Mayotte',
  /* field_nationality */       'MX' => 'Mexico',
  /* field_nationality */       'FM' => 'Micronesia',
  /* field_nationality */       'MD' => 'Moldova',
  /* field_nationality */       'MC' => 'Monaco',
  /* field_nationality */       'MN' => 'Mongolia',
  /* field_nationality */       'ME' => 'Montenegro',
  /* field_nationality */       'MS' => 'Montserrat',
  /* field_nationality */       'MA' => 'Morocco',
  /* field_nationality */       'MZ' => 'Mozambique',
  /* field_nationality */       'MM' => 'Myanmar',
  /* field_nationality */       'NA' => 'Namibia',
  /* field_nationality */       'NR' => 'Nauru',
  /* field_nationality */       'NP' => 'Nepal',
  /* field_nationality */       'NL' => 'Netherlands',
  /* field_nationality */       'AN' => 'Netherlands Antilles',
  /* field_nationality */       'NC' => 'New Caledonia',
  /* field_nationality */       'NZ' => 'New Zealand',
  /* field_nationality */       'NI' => 'Nicaragua',
  /* field_nationality */       'NE' => 'Niger',
  /* field_nationality */       'NG' => 'Nigeria',
  /* field_nationality */       'NU' => 'Niue',
  /* field_nationality */       'NF' => 'Norfolk Island',
  /* field_nationality */       'KP' => 'North Korea',
  /* field_nationality */       'MP' => 'Northern Mariana Islands',
  /* field_nationality */       'NO' => 'Norway',
  /* field_nationality */       'OM' => 'Oman',
  /* field_nationality */       'PK' => 'Pakistan',
  /* field_nationality */       'PW' => 'Palau',
  /* field_nationality */       'PS' => 'Palestine',
  /* field_nationality */       'PA' => 'Panama',
  /* field_nationality */       'PG' => 'Papua New Guinea',
  /* field_nationality */       'PY' => 'Paraguay',
  /* field_nationality */       'PE' => 'Peru',
  /* field_nationality */       'PH' => 'Philippines',
  /* field_nationality */       'PN' => 'Pitcairn',
  /* field_nationality */       'PL' => 'Poland',
  /* field_nationality */       'PT' => 'Portugal',
  /* field_nationality */       'PR' => 'Puerto Rico',
  /* field_nationality */       'QA' => 'Qatar',
  /* field_nationality */       'RE' => 'Réunion',
  /* field_nationality */       'RO' => 'Romania',
  /* field_nationality */       'RU' => 'Russian Federation',
  /* field_nationality */       'RW' => 'Rwanda',
  /* field_nationality */       'WS' => 'Samoa',
  /* field_nationality */       'SM' => 'San Marino',
  /* field_nationality */       'ST' => 'Sao Tome/Principe',
  /* field_nationality */       'SA' => 'Saudi Arabia',
  /* field_nationality */       'SN' => 'Senegal',
  /* field_nationality */       'RS' => 'Serbia',
  /* field_nationality */       'SC' => 'Seychelles',
  /* field_nationality */       'SL' => 'Sierra Leone',
  /* field_nationality */       'SG' => 'Singapore',
  /* field_nationality */       'SK' => 'Slovakia',
  /* field_nationality */       'SI' => 'Slovenia',
  /* field_nationality */       'SB' => 'Solomon Islands',
  /* field_nationality */       'SO' => 'Somalia',
  /* field_nationality */       'ZA' => 'South Africa',
  /* field_nationality */       'GS' => 'South Georgia/Sandwich Islands',
  /* field_nationality */       'KR' => 'South Korea',
  /* field_nationality */       'SS' => 'South Sudan',
  /* field_nationality */       'ES' => 'Spain',
  /* field_nationality */       'LK' => 'Sri Lanka',
  /* field_nationality */       'BL' => 'St. Barthélemy',
  /* field_nationality */       'SH' => 'St. Helena',
  /* field_nationality */       'KN' => 'St. Kitts/Nevis',
  /* field_nationality */       'LC' => 'St. Lucia',
  /* field_nationality */       'MF' => 'St. Martin',
  /* field_nationality */       'PM' => 'St. Pierre/Miquelon',
  /* field_nationality */       'VC' => 'St. Vincent/The Grenadines',
  /* field_nationality */       'SD' => 'Sudan',
  /* field_nationality */       'SR' => 'Suriname',
  /* field_nationality */       'SJ' => 'Svalbard/Jan Mayen',
  /* field_nationality */       'SZ' => 'Swaziland',
  /* field_nationality */       'SE' => 'Sweden',
  /* field_nationality */       'CH' => 'Switzerland',
  /* field_nationality */       'SY' => 'Syrian Arab Republic',
  /* field_nationality */       'TW' => 'Taiwan',
  /* field_nationality */       'TJ' => 'Tajikistan',
  /* field_nationality */       'TZ' => 'Tanzania',
  /* field_nationality */       'TH' => 'Thailand',
  /* field_nationality */       'TL' => 'Timor-Leste',
  /* field_nationality */       'TG' => 'Togo',
  /* field_nationality */       'TK' => 'Tokelau',
  /* field_nationality */       'TO' => 'Tonga',
  /* field_nationality */       'TT' => 'Trinidad And Tobago',
  /* field_nationality */       'TN' => 'Tunisia',
  /* field_nationality */       'TR' => 'Turkey',
  /* field_nationality */       'TM' => 'Turkmenistan',
  /* field_nationality */       'TC' => 'Turks/Caicos Islands',
  /* field_nationality */       'TV' => 'Tuvalu',
  /* field_nationality */       'UG' => 'Uganda',
  /* field_nationality */       'UA' => 'Ukraine',
  /* field_nationality */       'AE' => 'United Arab Emirates',
  /* field_nationality */       'GB' => 'United Kingdom',
  /* field_nationality */       'US' => 'United States',
  /* field_nationality */       'UM' => 'United States Minor Islands',
  /* field_nationality */       'UY' => 'Uruguay',
  /* field_nationality */       'UZ' => 'Uzbekistan',
  /* field_nationality */       'VU' => 'Vanuatu',
  /* field_nationality */       'VA' => 'Vatican City State',
  /* field_nationality */       'VE' => 'Venezuela',
  /* field_nationality */       'VN' => 'Viet Nam',
  /* field_nationality */       'VG' => '"Virgin Islands, British"',
  /* field_nationality */       'VI' => '"Virgin Islands, U.S."',
  /* field_nationality */       'WF' => 'Wallis/Futuna',
  /* field_nationality */       'YE' => 'Yemen',
  /* field_nationality */       'ZM' => 'Zambia',
  /* field_nationality */       'ZW' => 'Zimbabwe',
  /* field_nationality */     ),
  /* field_nationality */     'allowed_values_function' => '',
  /* field_nationality */   ),
  /* field_nationality */   'translatable' => 0,
  /* field_nationality */   'type' => 'list_text',
  /* field_nationality */ );

  // Exported field_base: 'field_node_association'.
  $field_bases['field_node_association'] = array(
  /* field_node_association */   'active' => 1,
  /* field_node_association */   'cardinality' => 1,
  /* field_node_association */   'deleted' => 0,
  /* field_node_association */   'entity_types' => array(),
  /* field_node_association */   'field_name' => 'field_node_association',
  /* field_node_association */   'indexes' => array(
  /* field_node_association */     'format' => array(
  /* field_node_association */       0 => 'format',
  /* field_node_association */     ),
  /* field_node_association */   ),
  /* field_node_association */   'locked' => 0,
  /* field_node_association */   'module' => 'text',
  /* field_node_association */   'settings' => array(
  /* field_node_association */     'max_length' => 255,
  /* field_node_association */   ),
  /* field_node_association */   'translatable' => 0,
  /* field_node_association */   'type' => 'text',
  /* field_node_association */ );

  // Exported field_base: 'field_notification'.
  $field_bases['field_notification'] = array(
  /* field_notification */   'active' => 1,
  /* field_notification */   'cardinality' => 1,
  /* field_notification */   'deleted' => 0,
  /* field_notification */   'entity_types' => array(),
  /* field_notification */   'field_name' => 'field_notification',
  /* field_notification */   'indexes' => array(
  /* field_notification */     'value' => array(
  /* field_notification */       0 => 'value',
  /* field_notification */     ),
  /* field_notification */   ),
  /* field_notification */   'locked' => 0,
  /* field_notification */   'module' => 'list',
  /* field_notification */   'settings' => array(
  /* field_notification */     'allowed_values' => array(
  /* field_notification */       0 => 'no',
  /* field_notification */       1 => 'yes',
  /* field_notification */     ),
  /* field_notification */     'allowed_values_function' => '',
  /* field_notification */   ),
  /* field_notification */   'translatable' => 0,
  /* field_notification */   'type' => 'list_boolean',
  /* field_notification */ );

  // Exported field_base: 'field_notification_recipients'.
  $field_bases['field_notification_recipients'] = array(
  /* field_notification_recipients */   'active' => 1,
  /* field_notification_recipients */   'cardinality' => 1,
  /* field_notification_recipients */   'deleted' => 0,
  /* field_notification_recipients */   'entity_types' => array(),
  /* field_notification_recipients */   'field_name' => 'field_notification_recipients',
  /* field_notification_recipients */   'indexes' => array(
  /* field_notification_recipients */     'target_id' => array(
  /* field_notification_recipients */       0 => 'target_id',
  /* field_notification_recipients */     ),
  /* field_notification_recipients */   ),
  /* field_notification_recipients */   'locked' => 0,
  /* field_notification_recipients */   'module' => 'entityreference',
  /* field_notification_recipients */   'settings' => array(
  /* field_notification_recipients */     'handler' => 'base',
  /* field_notification_recipients */     'handler_settings' => array(
  /* field_notification_recipients */       'behaviors' => array(
  /* field_notification_recipients */         'views-select-list' => array(
  /* field_notification_recipients */           'status' => 0,
  /* field_notification_recipients */         ),
  /* field_notification_recipients */       ),
  /* field_notification_recipients */       'sort' => array(
  /* field_notification_recipients */         'type' => 'none',
  /* field_notification_recipients */       ),
  /* field_notification_recipients */       'target_bundles' => array(),
  /* field_notification_recipients */     ),
  /* field_notification_recipients */     'target_type' => 'user',
  /* field_notification_recipients */   ),
  /* field_notification_recipients */   'translatable' => 0,
  /* field_notification_recipients */   'type' => 'entityreference',
  /* field_notification_recipients */ );

  // Exported field_base: 'field_numcode'.
  $field_bases['field_numcode'] = array(
  /* field_numcode */   'active' => 1,
  /* field_numcode */   'cardinality' => 1,
  /* field_numcode */   'deleted' => 0,
  /* field_numcode */   'entity_types' => array(),
  /* field_numcode */   'field_name' => 'field_numcode',
  /* field_numcode */   'indexes' => array(),
  /* field_numcode */   'label' => 'Country number code',
  /* field_numcode */   'locked' => 0,
  /* field_numcode */   'module' => 'number',
  /* field_numcode */   'settings' => array(),
  /* field_numcode */   'translatable' => 0,
  /* field_numcode */   'type' => 'number_integer',
  /* field_numcode */ );

  // Exported field_base: 'field_org_role'.
  $field_bases['field_org_role'] = array(
  /* field_org_role */   'active' => 1,
  /* field_org_role */   'cardinality' => 1,
  /* field_org_role */   'deleted' => 0,
  /* field_org_role */   'entity_types' => array(),
  /* field_org_role */   'field_name' => 'field_org_role',
  /* field_org_role */   'indexes' => array(
  /* field_org_role */     'value' => array(
  /* field_org_role */       0 => 'value',
  /* field_org_role */     ),
  /* field_org_role */   ),
  /* field_org_role */   'locked' => 0,
  /* field_org_role */   'module' => 'list',
  /* field_org_role */   'settings' => array(
  /* field_org_role */     'allowed_values' => array(
  /* field_org_role */       'Participant' => 'Participant',
  /* field_org_role */       'Faculty' => 'Faculty',
  /* field_org_role */       'Alumni' => 'Alumni',
  /* field_org_role */       'Staff' => 'Staff',
  /* field_org_role */     ),
  /* field_org_role */     'allowed_values_function' => '',
  /* field_org_role */   ),
  /* field_org_role */   'translatable' => 0,
  /* field_org_role */   'type' => 'list_text',
  /* field_org_role */ );

  // Exported field_base: 'field_organization'.
  $field_bases['field_organization'] = array(
  /* field_organization */   'active' => 1,
  /* field_organization */   'cardinality' => 1,
  /* field_organization */   'deleted' => 0,
  /* field_organization */   'entity_types' => array(),
  /* field_organization */   'field_name' => 'field_organization',
  /* field_organization */   'indexes' => array(
  /* field_organization */     'target_id' => array(
  /* field_organization */       0 => 'target_id',
  /* field_organization */     ),
  /* field_organization */   ),
  /* field_organization */   'locked' => 0,
  /* field_organization */   'module' => 'entityreference',
  /* field_organization */   'settings' => array(
  /* field_organization */     'handler' => 'base',
  /* field_organization */     'handler_settings' => array(
  /* field_organization */       'behaviors' => array(
  /* field_organization */         'views-select-list' => array(
  /* field_organization */           'status' => 0,
  /* field_organization */         ),
  /* field_organization */       ),
  /* field_organization */       'sort' => array(
  /* field_organization */         'type' => 'none',
  /* field_organization */       ),
  /* field_organization */       'target_bundles' => array(
  /* field_organization */         'organization' => 'organization',
  /* field_organization */       ),
  /* field_organization */     ),
  /* field_organization */     'target_type' => 'node',
  /* field_organization */   ),
  /* field_organization */   'translatable' => 0,
  /* field_organization */   'type' => 'entityreference',
  /* field_organization */ );

  // Exported field_base: 'field_other_location_details'.
  $field_bases['field_other_location_details'] = array(
  /* field_other_location_details */   'active' => 1,
  /* field_other_location_details */   'cardinality' => 1,
  /* field_other_location_details */   'deleted' => 0,
  /* field_other_location_details */   'entity_types' => array(),
  /* field_other_location_details */   'field_name' => 'field_other_location_details',
  /* field_other_location_details */   'indexes' => array(
  /* field_other_location_details */     'format' => array(
  /* field_other_location_details */       0 => 'format',
  /* field_other_location_details */     ),
  /* field_other_location_details */   ),
  /* field_other_location_details */   'locked' => 0,
  /* field_other_location_details */   'module' => 'text',
  /* field_other_location_details */   'settings' => array(),
  /* field_other_location_details */   'translatable' => 0,
  /* field_other_location_details */   'type' => 'text_long',
  /* field_other_location_details */ );

  // Exported field_base: 'field_page_purpose'.
  $field_bases['field_page_purpose'] = array(
  /* field_page_purpose */   'active' => 1,
  /* field_page_purpose */   'cardinality' => 1,
  /* field_page_purpose */   'deleted' => 0,
  /* field_page_purpose */   'entity_types' => array(),
  /* field_page_purpose */   'field_name' => 'field_page_purpose',
  /* field_page_purpose */   'indexes' => array(
  /* field_page_purpose */     'format' => array(
  /* field_page_purpose */       0 => 'format',
  /* field_page_purpose */     ),
  /* field_page_purpose */   ),
  /* field_page_purpose */   'locked' => 0,
  /* field_page_purpose */   'module' => 'text',
  /* field_page_purpose */   'settings' => array(),
  /* field_page_purpose */   'translatable' => 0,
  /* field_page_purpose */   'type' => 'text_long',
  /* field_page_purpose */ );

  // Exported field_base: 'field_preferred_language'.
  $field_bases['field_preferred_language'] = array(
  /* field_preferred_language */   'active' => 1,
  /* field_preferred_language */   'cardinality' => 1,
  /* field_preferred_language */   'deleted' => 0,
  /* field_preferred_language */   'entity_types' => array(),
  /* field_preferred_language */   'field_name' => 'field_preferred_language',
  /* field_preferred_language */   'indexes' => array(
  /* field_preferred_language */     'value' => array(
  /* field_preferred_language */       0 => 'value',
  /* field_preferred_language */     ),
  /* field_preferred_language */   ),
  /* field_preferred_language */   'locked' => 0,
  /* field_preferred_language */   'module' => 'list',
  /* field_preferred_language */   'settings' => array(
  /* field_preferred_language */     'allowed_values' => array(
  /* field_preferred_language */       'Arabic' => 'Arabic',
  /* field_preferred_language */       'English' => 'English',
  /* field_preferred_language */       'French' => 'French',
  /* field_preferred_language */       'German' => 'German',
  /* field_preferred_language */       'Portuguese' => 'Portuguese',
  /* field_preferred_language */       'Russian' => 'Russian',
  /* field_preferred_language */       'Spanish' => 'Spanish',
  /* field_preferred_language */     ),
  /* field_preferred_language */     'allowed_values_function' => '',
  /* field_preferred_language */   ),
  /* field_preferred_language */   'translatable' => 0,
  /* field_preferred_language */   'type' => 'list_text',
  /* field_preferred_language */ );

  // Exported field_base: 'field_presenter'.
  $field_bases['field_presenter'] = array(
  /* field_presenter */   'active' => 1,
  /* field_presenter */   'cardinality' => 1,
  /* field_presenter */   'deleted' => 0,
  /* field_presenter */   'entity_types' => array(),
  /* field_presenter */   'field_name' => 'field_presenter',
  /* field_presenter */   'indexes' => array(
  /* field_presenter */     'target_id' => array(
  /* field_presenter */       0 => 'target_id',
  /* field_presenter */     ),
  /* field_presenter */   ),
  /* field_presenter */   'locked' => 0,
  /* field_presenter */   'module' => 'entityreference',
  /* field_presenter */   'settings' => array(
  /* field_presenter */     'handler' => 'views',
  /* field_presenter */     'handler_settings' => array(
  /* field_presenter */       'behaviors' => array(
  /* field_presenter */         'views-select-list' => array(
  /* field_presenter */           'status' => 0,
  /* field_presenter */         ),
  /* field_presenter */       ),
  /* field_presenter */       'view' => array(
  /* field_presenter */         'args' => array(),
  /* field_presenter */         'display_name' => 'entityreference_1',
  /* field_presenter */         'view_name' => 'session_presenter',
  /* field_presenter */       ),
  /* field_presenter */     ),
  /* field_presenter */     'target_type' => 'user',
  /* field_presenter */   ),
  /* field_presenter */   'translatable' => 0,
  /* field_presenter */   'type' => 'entityreference',
  /* field_presenter */ );

  // Exported field_base: 'field_publication_author'.
  $field_bases['field_publication_author'] = array(
  /* field_publication_author */   'active' => 1,
  /* field_publication_author */   'cardinality' => 1,
  /* field_publication_author */   'deleted' => 0,
  /* field_publication_author */   'entity_types' => array(),
  /* field_publication_author */   'field_name' => 'field_publication_author',
  /* field_publication_author */   'indexes' => array(
  /* field_publication_author */     'format' => array(
  /* field_publication_author */       0 => 'format',
  /* field_publication_author */     ),
  /* field_publication_author */   ),
  /* field_publication_author */   'locked' => 0,
  /* field_publication_author */   'module' => 'text',
  /* field_publication_author */   'settings' => array(
  /* field_publication_author */     'max_length' => 255,
  /* field_publication_author */   ),
  /* field_publication_author */   'translatable' => 0,
  /* field_publication_author */   'type' => 'text',
  /* field_publication_author */ );

  // Exported field_base: 'field_publication_date'.
  $field_bases['field_publication_date'] = array(
  /* field_publication_date */   'active' => 1,
  /* field_publication_date */   'cardinality' => 1,
  /* field_publication_date */   'deleted' => 0,
  /* field_publication_date */   'entity_types' => array(),
  /* field_publication_date */   'field_name' => 'field_publication_date',
  /* field_publication_date */   'indexes' => array(),
  /* field_publication_date */   'locked' => 0,
  /* field_publication_date */   'module' => 'date',
  /* field_publication_date */   'settings' => array(
  /* field_publication_date */     'cache_count' => 4,
  /* field_publication_date */     'cache_enabled' => 0,
  /* field_publication_date */     'granularity' => array(
  /* field_publication_date */       'day' => 'day',
  /* field_publication_date */       'hour' => 0,
  /* field_publication_date */       'minute' => 0,
  /* field_publication_date */       'month' => 'month',
  /* field_publication_date */       'second' => 0,
  /* field_publication_date */       'year' => 'year',
  /* field_publication_date */     ),
  /* field_publication_date */     'repeat' => 0,
  /* field_publication_date */     'timezone_db' => '',
  /* field_publication_date */     'todate' => '',
  /* field_publication_date */     'tz_handling' => 'none',
  /* field_publication_date */   ),
  /* field_publication_date */   'translatable' => 0,
  /* field_publication_date */   'type' => 'datetime',
  /* field_publication_date */ );

  // Exported field_base: 'field_publisher'.
  $field_bases['field_publisher'] = array(
  /* field_publisher */   'active' => 1,
  /* field_publisher */   'cardinality' => 1,
  /* field_publisher */   'deleted' => 0,
  /* field_publisher */   'entity_types' => array(),
  /* field_publisher */   'field_name' => 'field_publisher',
  /* field_publisher */   'indexes' => array(
  /* field_publisher */     'format' => array(
  /* field_publisher */       0 => 'format',
  /* field_publisher */     ),
  /* field_publisher */   ),
  /* field_publisher */   'locked' => 0,
  /* field_publisher */   'module' => 'text',
  /* field_publisher */   'settings' => array(
  /* field_publisher */     'max_length' => 255,
  /* field_publisher */   ),
  /* field_publisher */   'translatable' => 0,
  /* field_publisher */   'type' => 'text',
  /* field_publisher */ );

  // Exported field_base: 'field_question'.
  $field_bases['field_question'] = array(
  /* field_question */   'active' => 1,
  /* field_question */   'cardinality' => 1,
  /* field_question */   'deleted' => 0,
  /* field_question */   'entity_types' => array(),
  /* field_question */   'field_name' => 'field_question',
  /* field_question */   'indexes' => array(
  /* field_question */     'format' => array(
  /* field_question */       0 => 'format',
  /* field_question */     ),
  /* field_question */   ),
  /* field_question */   'locked' => 0,
  /* field_question */   'module' => 'text',
  /* field_question */   'settings' => array(),
  /* field_question */   'translatable' => 0,
  /* field_question */   'type' => 'text_long',
  /* field_question */ );

  // Exported field_base: 'field_rec_links'.
  $field_bases['field_rec_links'] = array(
  /* field_rec_links */   'active' => 1,
  /* field_rec_links */   'cardinality' => -1,
  /* field_rec_links */   'deleted' => 0,
  /* field_rec_links */   'entity_types' => array(),
  /* field_rec_links */   'field_name' => 'field_rec_links',
  /* field_rec_links */   'indexes' => array(),
  /* field_rec_links */   'locked' => 0,
  /* field_rec_links */   'module' => 'link',
  /* field_rec_links */   'settings' => array(
  /* field_rec_links */     'attributes' => array(
  /* field_rec_links */       'class' => '',
  /* field_rec_links */       'rel' => '',
  /* field_rec_links */       'target' => 'default',
  /* field_rec_links */     ),
  /* field_rec_links */     'display' => array(
  /* field_rec_links */       'url_cutoff' => 80,
  /* field_rec_links */     ),
  /* field_rec_links */     'enable_tokens' => 1,
  /* field_rec_links */     'title' => 'optional',
  /* field_rec_links */     'title_maxlength' => 128,
  /* field_rec_links */     'title_value' => '',
  /* field_rec_links */     'url' => 0,
  /* field_rec_links */   ),
  /* field_rec_links */   'translatable' => 0,
  /* field_rec_links */   'type' => 'link_field',
  /* field_rec_links */ );

  // Exported field_base: 'field_recommended_links'.
  $field_bases['field_recommended_links'] = array(
  /* field_recommended_links */   'active' => 1,
  /* field_recommended_links */   'cardinality' => 1,
  /* field_recommended_links */   'deleted' => 0,
  /* field_recommended_links */   'entity_types' => array(),
  /* field_recommended_links */   'field_name' => 'field_recommended_links',
  /* field_recommended_links */   'indexes' => array(
  /* field_recommended_links */     'format' => array(
  /* field_recommended_links */       0 => 'format',
  /* field_recommended_links */     ),
  /* field_recommended_links */   ),
  /* field_recommended_links */   'locked' => 0,
  /* field_recommended_links */   'module' => 'text',
  /* field_recommended_links */   'settings' => array(),
  /* field_recommended_links */   'translatable' => 0,
  /* field_recommended_links */   'type' => 'text_long',
  /* field_recommended_links */ );

  // Exported field_base: 'field_region'.
  $field_bases['field_region'] = array(
  /* field_region */   'active' => 1,
  /* field_region */   'cardinality' => -1,
  /* field_region */   'deleted' => 0,
  /* field_region */   'entity_types' => array(),
  /* field_region */   'field_name' => 'field_region',
  /* field_region */   'indexes' => array(
  /* field_region */     'tid' => array(
  /* field_region */       0 => 'tid',
  /* field_region */     ),
  /* field_region */   ),
  /* field_region */   'locked' => 0,
  /* field_region */   'module' => 'taxonomy',
  /* field_region */   'settings' => array(
  /* field_region */     'allowed_values' => array(
  /* field_region */       0 => array(
  /* field_region */         'vocabulary' => 'regions',
  /* field_region */         'parent' => 0,
  /* field_region */       ),
  /* field_region */     ),
  /* field_region */     'options_list_callback' => NULL,
  /* field_region */   ),
  /* field_region */   'translatable' => 0,
  /* field_region */   'type' => 'taxonomy_term_reference',
  /* field_region */ );

  // Exported field_base: 'field_registration'.
  $field_bases['field_registration'] = array(
  /* field_registration */   'active' => 1,
  /* field_registration */   'cardinality' => 1,
  /* field_registration */   'deleted' => 0,
  /* field_registration */   'entity_types' => array(),
  /* field_registration */   'field_name' => 'field_registration',
  /* field_registration */   'indexes' => array(
  /* field_registration */     'value' => array(
  /* field_registration */       0 => 'value',
  /* field_registration */     ),
  /* field_registration */   ),
  /* field_registration */   'locked' => 0,
  /* field_registration */   'module' => 'list',
  /* field_registration */   'settings' => array(
  /* field_registration */     'allowed_values' => array(
  /* field_registration */       0 => 'No',
  /* field_registration */       1 => 'Yes',
  /* field_registration */     ),
  /* field_registration */     'allowed_values_function' => '',
  /* field_registration */   ),
  /* field_registration */   'translatable' => 0,
  /* field_registration */   'type' => 'list_boolean',
  /* field_registration */ );

  // Exported field_base: 'field_registration_limit'.
  $field_bases['field_registration_limit'] = array(
  /* field_registration_limit */   'active' => 1,
  /* field_registration_limit */   'cardinality' => 1,
  /* field_registration_limit */   'deleted' => 0,
  /* field_registration_limit */   'entity_types' => array(),
  /* field_registration_limit */   'field_name' => 'field_registration_limit',
  /* field_registration_limit */   'indexes' => array(
  /* field_registration_limit */     'value' => array(
  /* field_registration_limit */       0 => 'value',
  /* field_registration_limit */     ),
  /* field_registration_limit */   ),
  /* field_registration_limit */   'locked' => 0,
  /* field_registration_limit */   'module' => 'list',
  /* field_registration_limit */   'settings' => array(
  /* field_registration_limit */     'allowed_values' => array(
  /* field_registration_limit */       0 => 'No',
  /* field_registration_limit */       1 => 'Yes',
  /* field_registration_limit */     ),
  /* field_registration_limit */     'allowed_values_function' => '',
  /* field_registration_limit */   ),
  /* field_registration_limit */   'translatable' => 0,
  /* field_registration_limit */   'type' => 'list_boolean',
  /* field_registration_limit */ );

  // Exported field_base: 'field_registration_limit_number'.
  $field_bases['field_registration_limit_number'] = array(
  /* field_registration_limit_number */   'active' => 1,
  /* field_registration_limit_number */   'cardinality' => 1,
  /* field_registration_limit_number */   'deleted' => 0,
  /* field_registration_limit_number */   'entity_types' => array(),
  /* field_registration_limit_number */   'field_name' => 'field_registration_limit_number',
  /* field_registration_limit_number */   'indexes' => array(),
  /* field_registration_limit_number */   'locked' => 0,
  /* field_registration_limit_number */   'module' => 'number',
  /* field_registration_limit_number */   'settings' => array(),
  /* field_registration_limit_number */   'translatable' => 0,
  /* field_registration_limit_number */   'type' => 'number_integer',
  /* field_registration_limit_number */ );

  // Exported field_base: 'field_registration_list_visibili'.
  $field_bases['field_registration_list_visibili'] = array(
  /* field_registration_list_visibili */   'active' => 1,
  /* field_registration_list_visibili */   'cardinality' => 1,
  /* field_registration_list_visibili */   'deleted' => 0,
  /* field_registration_list_visibili */   'entity_types' => array(),
  /* field_registration_list_visibili */   'field_name' => 'field_registration_list_visibili',
  /* field_registration_list_visibili */   'indexes' => array(
  /* field_registration_list_visibili */     'value' => array(
  /* field_registration_list_visibili */       0 => 'value',
  /* field_registration_list_visibili */     ),
  /* field_registration_list_visibili */   ),
  /* field_registration_list_visibili */   'locked' => 0,
  /* field_registration_list_visibili */   'module' => 'list',
  /* field_registration_list_visibili */   'settings' => array(
  /* field_registration_list_visibili */     'allowed_values' => array(
  /* field_registration_list_visibili */       'anyone' => 'Anyone who can see the event',
  /* field_registration_list_visibili */       'registrants' => 'Invitees and registrants only',
  /* field_registration_list_visibili */       'admin' => 'Event contact person, group manager(s), and sites admin only',
  /* field_registration_list_visibili */     ),
  /* field_registration_list_visibili */     'allowed_values_function' => '',
  /* field_registration_list_visibili */   ),
  /* field_registration_list_visibili */   'translatable' => 0,
  /* field_registration_list_visibili */   'type' => 'list_text',
  /* field_registration_list_visibili */ );

  // Exported field_base: 'field_release_date_toggle'.
  $field_bases['field_release_date_toggle'] = array(
  /* field_release_date_toggle */   'active' => 1,
  /* field_release_date_toggle */   'cardinality' => 1,
  /* field_release_date_toggle */   'deleted' => 0,
  /* field_release_date_toggle */   'entity_types' => array(),
  /* field_release_date_toggle */   'field_name' => 'field_release_date_toggle',
  /* field_release_date_toggle */   'indexes' => array(
  /* field_release_date_toggle */     'value' => array(
  /* field_release_date_toggle */       0 => 'value',
  /* field_release_date_toggle */     ),
  /* field_release_date_toggle */   ),
  /* field_release_date_toggle */   'locked' => 0,
  /* field_release_date_toggle */   'module' => 'list',
  /* field_release_date_toggle */   'settings' => array(
  /* field_release_date_toggle */     'allowed_values' => array(
  /* field_release_date_toggle */       'Now' => 'Now',
  /* field_release_date_toggle */       'Later' => 'Later',
  /* field_release_date_toggle */     ),
  /* field_release_date_toggle */     'allowed_values_function' => '',
  /* field_release_date_toggle */   ),
  /* field_release_date_toggle */   'translatable' => 0,
  /* field_release_date_toggle */   'type' => 'list_text',
  /* field_release_date_toggle */ );

  // Exported field_base: 'field_require_nationality'.
  $field_bases['field_require_nationality'] = array(
  /* field_require_nationality */   'active' => 1,
  /* field_require_nationality */   'cardinality' => 1,
  /* field_require_nationality */   'deleted' => 0,
  /* field_require_nationality */   'entity_types' => array(),
  /* field_require_nationality */   'field_name' => 'field_require_nationality',
  /* field_require_nationality */   'indexes' => array(
  /* field_require_nationality */     'value' => array(
  /* field_require_nationality */       0 => 'value',
  /* field_require_nationality */     ),
  /* field_require_nationality */   ),
  /* field_require_nationality */   'locked' => 0,
  /* field_require_nationality */   'module' => 'list',
  /* field_require_nationality */   'settings' => array(
  /* field_require_nationality */     'allowed_values' => array(
  /* field_require_nationality */       0 => '',
  /* field_require_nationality */       1 => '',
  /* field_require_nationality */     ),
  /* field_require_nationality */     'allowed_values_function' => '',
  /* field_require_nationality */   ),
  /* field_require_nationality */   'translatable' => 0,
  /* field_require_nationality */   'type' => 'list_boolean',
  /* field_require_nationality */ );

  // Exported field_base: 'field_session_association'.
  $field_bases['field_session_association'] = array(
  /* field_session_association */   'active' => 1,
  /* field_session_association */   'cardinality' => 1,
  /* field_session_association */   'deleted' => 0,
  /* field_session_association */   'entity_types' => array(),
  /* field_session_association */   'field_name' => 'field_session_association',
  /* field_session_association */   'indexes' => array(
  /* field_session_association */     'target_id' => array(
  /* field_session_association */       0 => 'target_id',
  /* field_session_association */     ),
  /* field_session_association */   ),
  /* field_session_association */   'locked' => 0,
  /* field_session_association */   'module' => 'entityreference',
  /* field_session_association */   'settings' => array(
  /* field_session_association */     'handler' => 'views',
  /* field_session_association */     'handler_settings' => array(
  /* field_session_association */       'behaviors' => array(
  /* field_session_association */         'views-select-list' => array(
  /* field_session_association */           'status' => 0,
  /* field_session_association */         ),
  /* field_session_association */       ),
  /* field_session_association */       'view' => array(
  /* field_session_association */         'args' => array(),
  /* field_session_association */         'display_name' => 'entityreference_1',
  /* field_session_association */         'view_name' => 'sessions_submitted',
  /* field_session_association */       ),
  /* field_session_association */     ),
  /* field_session_association */     'target_type' => 'entityform',
  /* field_session_association */   ),
  /* field_session_association */   'translatable' => 0,
  /* field_session_association */   'type' => 'entityreference',
  /* field_session_association */ );

  // Exported field_base: 'field_session_presenter'.
  $field_bases['field_session_presenter'] = array(
  /* field_session_presenter */   'active' => 1,
  /* field_session_presenter */   'cardinality' => -1,
  /* field_session_presenter */   'deleted' => 0,
  /* field_session_presenter */   'entity_types' => array(),
  /* field_session_presenter */   'field_name' => 'field_session_presenter',
  /* field_session_presenter */   'indexes' => array(
  /* field_session_presenter */     'target_id' => array(
  /* field_session_presenter */       0 => 'target_id',
  /* field_session_presenter */     ),
  /* field_session_presenter */   ),
  /* field_session_presenter */   'locked' => 0,
  /* field_session_presenter */   'module' => 'entityreference',
  /* field_session_presenter */   'settings' => array(
  /* field_session_presenter */     'handler' => 'views',
  /* field_session_presenter */     'handler_settings' => array(
  /* field_session_presenter */       'behaviors' => array(
  /* field_session_presenter */         'views-select-list' => array(
  /* field_session_presenter */           'status' => 0,
  /* field_session_presenter */         ),
  /* field_session_presenter */       ),
  /* field_session_presenter */       'view' => array(
  /* field_session_presenter */         'args' => array(),
  /* field_session_presenter */         'display_name' => 'entityreference_1',
  /* field_session_presenter */         'view_name' => 'session_presenter',
  /* field_session_presenter */       ),
  /* field_session_presenter */     ),
  /* field_session_presenter */     'target_type' => 'user',
  /* field_session_presenter */   ),
  /* field_session_presenter */   'translatable' => 0,
  /* field_session_presenter */   'type' => 'entityreference',
  /* field_session_presenter */ );

  // Exported field_base: 'field_shared_entity_ref'.
  $field_bases['field_shared_entity_ref'] = array(
  /* field_shared_entity_ref */   'active' => 1,
  /* field_shared_entity_ref */   'cardinality' => 1,
  /* field_shared_entity_ref */   'deleted' => 0,
  /* field_shared_entity_ref */   'entity_types' => array(),
  /* field_shared_entity_ref */   'field_name' => 'field_shared_entity_ref',
  /* field_shared_entity_ref */   'indexes' => array(
  /* field_shared_entity_ref */     'format' => array(
  /* field_shared_entity_ref */       0 => 'format',
  /* field_shared_entity_ref */     ),
  /* field_shared_entity_ref */   ),
  /* field_shared_entity_ref */   'locked' => 0,
  /* field_shared_entity_ref */   'module' => 'text',
  /* field_shared_entity_ref */   'settings' => array(
  /* field_shared_entity_ref */     'max_length' => 255,
  /* field_shared_entity_ref */   ),
  /* field_shared_entity_ref */   'translatable' => 0,
  /* field_shared_entity_ref */   'type' => 'text',
  /* field_shared_entity_ref */ );

  // Exported field_base: 'field_special_links'.
  $field_bases['field_special_links'] = array(
  /* field_special_links */   'active' => 1,
  /* field_special_links */   'cardinality' => 6,
  /* field_special_links */   'deleted' => 0,
  /* field_special_links */   'entity_types' => array(),
  /* field_special_links */   'field_name' => 'field_special_links',
  /* field_special_links */   'indexes' => array(),
  /* field_special_links */   'locked' => 0,
  /* field_special_links */   'module' => 'link',
  /* field_special_links */   'settings' => array(
  /* field_special_links */     'attributes' => array(
  /* field_special_links */       'class' => '',
  /* field_special_links */       'rel' => '',
  /* field_special_links */       'target' => 'default',
  /* field_special_links */     ),
  /* field_special_links */     'display' => array(
  /* field_special_links */       'url_cutoff' => 80,
  /* field_special_links */     ),
  /* field_special_links */     'enable_tokens' => 1,
  /* field_special_links */     'title' => 'optional',
  /* field_special_links */     'title_maxlength' => 128,
  /* field_special_links */     'title_value' => '',
  /* field_special_links */     'url' => 0,
  /* field_special_links */   ),
  /* field_special_links */   'translatable' => 0,
  /* field_special_links */   'type' => 'link_field',
  /* field_special_links */ );

  // Exported field_base: 'field_status'.
  $field_bases['field_status'] = array(
  /* field_status */   'active' => 1,
  /* field_status */   'cardinality' => 1,
  /* field_status */   'deleted' => 0,
  /* field_status */   'entity_types' => array(),
  /* field_status */   'field_name' => 'field_status',
  /* field_status */   'indexes' => array(
  /* field_status */     'value' => array(
  /* field_status */       0 => 'value',
  /* field_status */     ),
  /* field_status */   ),
  /* field_status */   'locked' => 0,
  /* field_status */   'module' => 'list',
  /* field_status */   'settings' => array(
  /* field_status */     'allowed_values' => array(
  /* field_status */       0 => 'Pending',
  /* field_status */       1 => 'Approved',
  /* field_status */       2 => 'Denied',
  /* field_status */     ),
  /* field_status */     'allowed_values_function' => '',
  /* field_status */   ),
  /* field_status */   'translatable' => 0,
  /* field_status */   'type' => 'list_integer',
  /* field_status */ );

  // Exported field_base: 'field_subtitle'.
  $field_bases['field_subtitle'] = array(
  /* field_subtitle */   'active' => 1,
  /* field_subtitle */   'cardinality' => 1,
  /* field_subtitle */   'deleted' => 0,
  /* field_subtitle */   'entity_types' => array(),
  /* field_subtitle */   'field_name' => 'field_subtitle',
  /* field_subtitle */   'indexes' => array(
  /* field_subtitle */     'format' => array(
  /* field_subtitle */       0 => 'format',
  /* field_subtitle */     ),
  /* field_subtitle */   ),
  /* field_subtitle */   'locked' => 0,
  /* field_subtitle */   'module' => 'text',
  /* field_subtitle */   'settings' => array(
  /* field_subtitle */     'max_length' => 255,
  /* field_subtitle */   ),
  /* field_subtitle */   'translatable' => 0,
  /* field_subtitle */   'type' => 'text',
  /* field_subtitle */ );

  // Exported field_base: 'field_support_name'.
  $field_bases['field_support_name'] = array(
  /* field_support_name */   'active' => 1,
  /* field_support_name */   'cardinality' => 1,
  /* field_support_name */   'deleted' => 0,
  /* field_support_name */   'entity_types' => array(),
  /* field_support_name */   'field_name' => 'field_support_name',
  /* field_support_name */   'indexes' => array(
  /* field_support_name */     'format' => array(
  /* field_support_name */       0 => 'format',
  /* field_support_name */     ),
  /* field_support_name */   ),
  /* field_support_name */   'locked' => 0,
  /* field_support_name */   'module' => 'text',
  /* field_support_name */   'settings' => array(
  /* field_support_name */     'max_length' => 255,
  /* field_support_name */   ),
  /* field_support_name */   'translatable' => 0,
  /* field_support_name */   'type' => 'text',
  /* field_support_name */ );

  // Exported field_base: 'field_tags'.
  $field_bases['field_tags'] = array(
  /* field_tags */   'active' => 1,
  /* field_tags */   'cardinality' => -1,
  /* field_tags */   'deleted' => 0,
  /* field_tags */   'entity_types' => array(),
  /* field_tags */   'field_name' => 'field_tags',
  /* field_tags */   'indexes' => array(
  /* field_tags */     'tid' => array(
  /* field_tags */       0 => 'tid',
  /* field_tags */     ),
  /* field_tags */   ),
  /* field_tags */   'locked' => 0,
  /* field_tags */   'module' => 'taxonomy',
  /* field_tags */   'settings' => array(
  /* field_tags */     'allowed_values' => array(
  /* field_tags */       0 => array(
  /* field_tags */         'vocabulary' => 'tags',
  /* field_tags */         'parent' => 0,
  /* field_tags */       ),
  /* field_tags */     ),
  /* field_tags */     'options_list_callback' => NULL,
  /* field_tags */   ),
  /* field_tags */   'translatable' => 0,
  /* field_tags */   'type' => 'taxonomy_term_reference',
  /* field_tags */ );

  // Exported field_base: 'field_telephone'.
  $field_bases['field_telephone'] = array(
  /* field_telephone */   'active' => 1,
  /* field_telephone */   'cardinality' => -1,
  /* field_telephone */   'deleted' => 0,
  /* field_telephone */   'entity_types' => array(),
  /* field_telephone */   'field_name' => 'field_telephone',
  /* field_telephone */   'indexes' => array(
  /* field_telephone */     'revision_id' => array(
  /* field_telephone */       0 => 'revision_id',
  /* field_telephone */     ),
  /* field_telephone */     'value' => array(
  /* field_telephone */       0 => 'value',
  /* field_telephone */     ),
  /* field_telephone */   ),
  /* field_telephone */   'locked' => 0,
  /* field_telephone */   'module' => 'field_collection',
  /* field_telephone */   'settings' => array(
  /* field_telephone */     'hide_blank_items' => 1,
  /* field_telephone */     'hide_initial_item' => FALSE,
  /* field_telephone */     'path' => '',
  /* field_telephone */   ),
  /* field_telephone */   'translatable' => 0,
  /* field_telephone */   'type' => 'field_collection',
  /* field_telephone */ );

  // Exported field_base: 'field_telephone_country_code'.
  $field_bases['field_telephone_country_code'] = array(
  /* field_telephone_country_code */   'active' => 1,
  /* field_telephone_country_code */   'cardinality' => 1,
  /* field_telephone_country_code */   'deleted' => 0,
  /* field_telephone_country_code */   'entity_types' => array(),
  /* field_telephone_country_code */   'field_name' => 'field_telephone_country_code',
  /* field_telephone_country_code */   'indexes' => array(
  /* field_telephone_country_code */     'value' => array(
  /* field_telephone_country_code */       0 => 'value',
  /* field_telephone_country_code */     ),
  /* field_telephone_country_code */   ),
  /* field_telephone_country_code */   'locked' => 0,
  /* field_telephone_country_code */   'module' => 'list',
  /* field_telephone_country_code */   'settings' => array(
  /* field_telephone_country_code */     'allowed_values' => array(
  /* field_telephone_country_code */       '+93' => 'Afghanistan',
  /* field_telephone_country_code */       '+355' => 'Albania +355',
  /* field_telephone_country_code */       '+213' => 'Algeria +213',
  /* field_telephone_country_code */       '+376' => 'Andorra +376',
  /* field_telephone_country_code */       '+244' => 'Angola +244',
  /* field_telephone_country_code */       '+54' => 'Argentina +54',
  /* field_telephone_country_code */       '+374' => 'Armenia +374',
  /* field_telephone_country_code */       '+297' => 'Aruba +297',
  /* field_telephone_country_code */       '+43' => 'Austria +43',
  /* field_telephone_country_code */       '+994' => 'Azerbaijan +994',
  /* field_telephone_country_code */       '+973' => 'Bahrain +973',
  /* field_telephone_country_code */       '+880' => 'Bangladesh +880',
  /* field_telephone_country_code */       '+375' => 'Belarus +375',
  /* field_telephone_country_code */       '+32' => 'Belgium +32',
  /* field_telephone_country_code */       '+501' => 'Belize +501',
  /* field_telephone_country_code */       '+229' => 'Benin +229',
  /* field_telephone_country_code */       '+975' => 'Bhutan +975',
  /* field_telephone_country_code */       '+591' => 'Bolivia +591',
  /* field_telephone_country_code */       '+387' => 'Bosnia and Herzegovina +387',
  /* field_telephone_country_code */       '+267' => 'Botswana +267',
  /* field_telephone_country_code */       '+55' => 'Brazil +55',
  /* field_telephone_country_code */       '+246' => 'British Indian Ocean Territory +246',
  /* field_telephone_country_code */       '+673' => 'Brunei +673',
  /* field_telephone_country_code */       '+359' => 'Bulgaria +359',
  /* field_telephone_country_code */       '+226' => 'Burkina Faso +226',
  /* field_telephone_country_code */       '+257' => 'Burundi +257',
  /* field_telephone_country_code */       '+855' => 'Cambodia +855',
  /* field_telephone_country_code */       '+237' => 'Cameroon +237',
  /* field_telephone_country_code */       '+238' => 'Cape Verde +238',
  /* field_telephone_country_code */       '+236' => 'Central African Republic +236',
  /* field_telephone_country_code */       '+235' => 'Chad +235',
  /* field_telephone_country_code */       '+56' => 'Chile +56',
  /* field_telephone_country_code */       '+86' => 'China +86',
  /* field_telephone_country_code */       '+61' => 'Cocos-Keeling Islands +61',
  /* field_telephone_country_code */       '+57' => 'Colombia +57',
  /* field_telephone_country_code */       '+242' => 'Congo, Republic of the +242',
  /* field_telephone_country_code */       '+243' => 'Congo, Democratic Republic of +243',
  /* field_telephone_country_code */       '+682' => 'Cook Islands +682',
  /* field_telephone_country_code */       '+506' => 'Costa Rica +506',
  /* field_telephone_country_code */       '+385' => 'Croatia +385',
  /* field_telephone_country_code */       '+53' => 'Cuba +53',
  /* field_telephone_country_code */       '+357' => 'Cyprus +357',
  /* field_telephone_country_code */       '+420' => 'Czech Republic +420',
  /* field_telephone_country_code */       '+45' => 'Denmark +45',
  /* field_telephone_country_code */       '+253' => 'Djibouti +253',
  /* field_telephone_country_code */       '+670' => 'East Timor +670',
  /* field_telephone_country_code */       '+593' => 'Ecuador +593',
  /* field_telephone_country_code */       '+20' => 'Egypt +20',
  /* field_telephone_country_code */       '+503' => 'Equatorial Guinea +240',
  /* field_telephone_country_code */       '+291' => 'Estonia +372',
  /* field_telephone_country_code */       '+251' => 'Ethiopia +251',
  /* field_telephone_country_code */       '+500' => 'Falkland Islands +500',
  /* field_telephone_country_code */       '+298' => 'Faroe Islands +298',
  /* field_telephone_country_code */       '+679' => 'Fiji +679',
  /* field_telephone_country_code */       '+358' => 'Finland +358',
  /* field_telephone_country_code */       '+33' => 'France +33',
  /* field_telephone_country_code */       '+594' => 'French Guiana +594',
  /* field_telephone_country_code */       '+689' => 'French Polynesia +689',
  /* field_telephone_country_code */       '+241' => 'Gabon +241',
  /* field_telephone_country_code */       '+220' => 'Gambia, The +220',
  /* field_telephone_country_code */       '+995' => 'Georgia +995',
  /* field_telephone_country_code */       '+49' => 'Germany +49',
  /* field_telephone_country_code */       '+233' => 'Ghana +233',
  /* field_telephone_country_code */       '+350' => 'Gibraltar +350',
  /* field_telephone_country_code */       '+30' => 'Greece +30',
  /* field_telephone_country_code */       '+299' => 'Greenland +299',
  /* field_telephone_country_code */       '+590' => 'Guadeloupe +590',
  /* field_telephone_country_code */       '+502' => 'Guatemala +502',
  /* field_telephone_country_code */       '+224' => 'Guinea +224',
  /* field_telephone_country_code */       '+245' => 'Guinea-Bissau +245',
  /* field_telephone_country_code */       '+592' => 'Guyana +592',
  /* field_telephone_country_code */       '+509' => 'Haiti +509',
  /* field_telephone_country_code */       '+504' => 'Honduras +504',
  /* field_telephone_country_code */       '+852' => 'Hong Kong +852',
  /* field_telephone_country_code */       '+36' => 'Hungary +36',
  /* field_telephone_country_code */       '+354' => 'Iceland +354',
  /* field_telephone_country_code */       '+91' => 'India +91',
  /* field_telephone_country_code */       '+62' => 'Indonesia +62',
  /* field_telephone_country_code */       '+98' => 'Iran +98',
  /* field_telephone_country_code */       '+964' => 'Iraq +964',
  /* field_telephone_country_code */       '+353' => 'Ireland +353',
  /* field_telephone_country_code */       '+972' => 'Israel +972',
  /* field_telephone_country_code */       '+39' => 'Italy +39',
  /* field_telephone_country_code */       '+225' => 'Ivory Coast +225',
  /* field_telephone_country_code */       '+81' => 'Japan +81',
  /* field_telephone_country_code */       '+962' => 'Jordan +962',
  /* field_telephone_country_code */       '+254' => 'Kenya +254',
  /* field_telephone_country_code */       '+686' => 'Kiribati +686',
  /* field_telephone_country_code */       '+383' => 'Kosovo +383',
  /* field_telephone_country_code */       '+965' => 'Kuwait +965',
  /* field_telephone_country_code */       '+996' => 'Kyrgyzstan +996',
  /* field_telephone_country_code */       '+856' => 'Laos +856',
  /* field_telephone_country_code */       '+371' => 'Latvia +371',
  /* field_telephone_country_code */       '+961' => 'Lebanon +961',
  /* field_telephone_country_code */       '+266' => 'Lesotho +266',
  /* field_telephone_country_code */       '+231' => 'Liberia +231',
  /* field_telephone_country_code */       '+218' => 'Libya +218',
  /* field_telephone_country_code */       '+423' => 'Liechtenstein +423',
  /* field_telephone_country_code */       '+370' => 'Lithuania +370',
  /* field_telephone_country_code */       '+352' => 'Luxembourg +352',
  /* field_telephone_country_code */       '+853' => 'Macau +853',
  /* field_telephone_country_code */       '+389' => 'Macedonia, Former Yugoslav Republic of +389',
  /* field_telephone_country_code */       '+261' => 'Madagascar +261',
  /* field_telephone_country_code */       '+265' => 'Malawi +265',
  /* field_telephone_country_code */       '+60' => 'Malaysia +60',
  /* field_telephone_country_code */       '+960' => 'Maldives +960',
  /* field_telephone_country_code */       '+223' => 'Mali +223',
  /* field_telephone_country_code */       '+356' => 'Malta +356',
  /* field_telephone_country_code */       '+692' => 'Marshall Islands +692',
  /* field_telephone_country_code */       '+596' => 'Martinique +596',
  /* field_telephone_country_code */       '+222' => 'Mauritania +222',
  /* field_telephone_country_code */       '+230' => 'Mauritius +230',
  /* field_telephone_country_code */       '+269' => 'Mayotte +269',
  /* field_telephone_country_code */       '+52' => 'Mexico +52',
  /* field_telephone_country_code */       '+691' => 'Micronesia, Federated States of +691',
  /* field_telephone_country_code */       '+373' => 'Moldova +373',
  /* field_telephone_country_code */       '+377' => 'Monaco +377',
  /* field_telephone_country_code */       '+976' => 'Mongolia +976',
  /* field_telephone_country_code */       '+212' => 'Morocco +212',
  /* field_telephone_country_code */       '+258' => 'Mozambique +258',
  /* field_telephone_country_code */       '+95' => 'Myanmar +95',
  /* field_telephone_country_code */       '+264' => 'Namibia +264',
  /* field_telephone_country_code */       '+674' => 'Nauru +674',
  /* field_telephone_country_code */       '+977' => 'Nepal +977',
  /* field_telephone_country_code */       '+31' => 'Netherlands +31',
  /* field_telephone_country_code */       '+599' => 'Netherlands Antilles +599',
  /* field_telephone_country_code */       '+687' => 'New Caledonia +687',
  /* field_telephone_country_code */       '+64' => 'New Zealand +64',
  /* field_telephone_country_code */       '+505' => 'Nicaragua +505',
  /* field_telephone_country_code */       '+227' => 'Niger +227',
  /* field_telephone_country_code */       '+234' => 'Nigeria +234',
  /* field_telephone_country_code */       '+683' => 'Niue +683',
  /* field_telephone_country_code */       '+672' => 'Norfolk Island +672',
  /* field_telephone_country_code */       '+850' => 'North Korea +850',
  /* field_telephone_country_code */       '+47' => 'Norway +47',
  /* field_telephone_country_code */       '+968' => 'Oman +968',
  /* field_telephone_country_code */       '+92' => 'Pakistan +92',
  /* field_telephone_country_code */       '+680' => 'Palau +680',
  /* field_telephone_country_code */       '+970' => 'Palestine +970',
  /* field_telephone_country_code */       '+507' => 'Panama +507',
  /* field_telephone_country_code */       '+675' => 'Papua New Guinea +675',
  /* field_telephone_country_code */       '+595' => 'Paraguay +595',
  /* field_telephone_country_code */       '+51' => 'Peru +51',
  /* field_telephone_country_code */       '+63' => 'Philippines +63',
  /* field_telephone_country_code */       '+48' => 'Poland +48',
  /* field_telephone_country_code */       '+351' => 'Portugal +351',
  /* field_telephone_country_code */       '+974' => 'Qatar +974',
  /* field_telephone_country_code */       '+40' => 'Romania +40',
  /* field_telephone_country_code */       '+7' => 'Russia +7',
  /* field_telephone_country_code */       '+250' => 'Rwanda +250',
  /* field_telephone_country_code */       '+290' => 'Saint Helena +290',
  /* field_telephone_country_code */       '+508' => 'Saint Pierre and Miquelon +508',
  /* field_telephone_country_code */       '+378' => 'San Marino +378',
  /* field_telephone_country_code */       '+239' => 'Sao Tome and Principe +239',
  /* field_telephone_country_code */       '+966' => 'Saudi Arabia +966',
  /* field_telephone_country_code */       '+221' => 'Senegal +221',
  /* field_telephone_country_code */       '+381' => 'Serbia +381',
  /* field_telephone_country_code */       '+248' => 'Seychelles +248',
  /* field_telephone_country_code */       '+232' => 'Sierra Leone +232',
  /* field_telephone_country_code */       '+65' => 'Singapore +65',
  /* field_telephone_country_code */       '+421' => 'Slovakia +421',
  /* field_telephone_country_code */       '+386' => 'Slovenia +386',
  /* field_telephone_country_code */       '+677' => 'Solomon Islands +677',
  /* field_telephone_country_code */       '+252' => 'Somalia +252',
  /* field_telephone_country_code */       '+27' => 'South Africa +27',
  /* field_telephone_country_code */       '+82' => 'South Korea +82',
  /* field_telephone_country_code */       '+34' => 'Spain +34',
  /* field_telephone_country_code */       '+94' => 'Sri Lanka +94',
  /* field_telephone_country_code */       '+249' => 'Sudan +249',
  /* field_telephone_country_code */       '+597' => 'Suriname +597',
  /* field_telephone_country_code */       '+268' => 'Swaziland +268',
  /* field_telephone_country_code */       '+46' => 'Sweden +46',
  /* field_telephone_country_code */       '+41' => 'Switzerland +41',
  /* field_telephone_country_code */       '+963' => 'Syria +963',
  /* field_telephone_country_code */       '+886' => 'Taiwan +886',
  /* field_telephone_country_code */       '+992' => 'Tajikistan +992',
  /* field_telephone_country_code */       '+255' => 'Tanzania +255',
  /* field_telephone_country_code */       '+66' => 'Thailand +66',
  /* field_telephone_country_code */       '+228' => 'Togo +228',
  /* field_telephone_country_code */       '+690' => 'Tokelau +690',
  /* field_telephone_country_code */       '+676' => 'Tonga +676',
  /* field_telephone_country_code */       '+216' => 'Tunisia +216',
  /* field_telephone_country_code */       '+90' => 'Turkey +90',
  /* field_telephone_country_code */       '+993' => 'Turkmenistan +993',
  /* field_telephone_country_code */       '+688' => 'Tuvalu +688',
  /* field_telephone_country_code */       '+256' => 'Uganda +256',
  /* field_telephone_country_code */       '+380' => 'Ukraine +380',
  /* field_telephone_country_code */       '+971' => 'United Arab Emirates +971',
  /* field_telephone_country_code */       '+44' => 'United Kingdom +44',
  /* field_telephone_country_code */       '+1' => 'United States +1',
  /* field_telephone_country_code */       '+01' => 'US Virgin Islands +1',
  /* field_telephone_country_code */       '+598' => 'Uruguay +598',
  /* field_telephone_country_code */       '+998' => 'Uzbekistan +998',
  /* field_telephone_country_code */       '+678' => 'Vanuatu +678',
  /* field_telephone_country_code */       '+58' => 'Venezuela +58',
  /* field_telephone_country_code */       '+84' => 'Vietnam +84',
  /* field_telephone_country_code */       '+681' => 'Wallis and Futuna +681',
  /* field_telephone_country_code */       '+967' => 'Yemen +967',
  /* field_telephone_country_code */       '+260' => 'Zambia +260',
  /* field_telephone_country_code */       '+263' => 'Zimbabwe +263',
  /* field_telephone_country_code */     ),
  /* field_telephone_country_code */     'allowed_values_function' => '',
  /* field_telephone_country_code */   ),
  /* field_telephone_country_code */   'translatable' => 0,
  /* field_telephone_country_code */   'type' => 'list_text',
  /* field_telephone_country_code */ );

  // Exported field_base: 'field_telephone_extension'.
  $field_bases['field_telephone_extension'] = array(
  /* field_telephone_extension */   'active' => 1,
  /* field_telephone_extension */   'cardinality' => 1,
  /* field_telephone_extension */   'deleted' => 0,
  /* field_telephone_extension */   'entity_types' => array(),
  /* field_telephone_extension */   'field_name' => 'field_telephone_extension',
  /* field_telephone_extension */   'indexes' => array(),
  /* field_telephone_extension */   'locked' => 0,
  /* field_telephone_extension */   'module' => 'number',
  /* field_telephone_extension */   'settings' => array(),
  /* field_telephone_extension */   'translatable' => 0,
  /* field_telephone_extension */   'type' => 'number_integer',
  /* field_telephone_extension */ );

  // Exported field_base: 'field_telephone_number'.
  $field_bases['field_telephone_number'] = array(
  /* field_telephone_number */   'active' => 1,
  /* field_telephone_number */   'cardinality' => 1,
  /* field_telephone_number */   'deleted' => 0,
  /* field_telephone_number */   'entity_types' => array(),
  /* field_telephone_number */   'field_name' => 'field_telephone_number',
  /* field_telephone_number */   'indexes' => array(
  /* field_telephone_number */     'format' => array(
  /* field_telephone_number */       0 => 'format',
  /* field_telephone_number */     ),
  /* field_telephone_number */   ),
  /* field_telephone_number */   'locked' => 0,
  /* field_telephone_number */   'module' => 'text',
  /* field_telephone_number */   'settings' => array(
  /* field_telephone_number */     'max_length' => 255,
  /* field_telephone_number */   ),
  /* field_telephone_number */   'translatable' => 0,
  /* field_telephone_number */   'type' => 'text',
  /* field_telephone_number */ );

  // Exported field_base: 'field_telephone_type'.
  $field_bases['field_telephone_type'] = array(
  /* field_telephone_type */   'active' => 1,
  /* field_telephone_type */   'cardinality' => 1,
  /* field_telephone_type */   'deleted' => 0,
  /* field_telephone_type */   'entity_types' => array(),
  /* field_telephone_type */   'field_name' => 'field_telephone_type',
  /* field_telephone_type */   'indexes' => array(
  /* field_telephone_type */     'value' => array(
  /* field_telephone_type */       0 => 'value',
  /* field_telephone_type */     ),
  /* field_telephone_type */   ),
  /* field_telephone_type */   'locked' => 0,
  /* field_telephone_type */   'module' => 'list',
  /* field_telephone_type */   'settings' => array(
  /* field_telephone_type */     'allowed_values' => array(
  /* field_telephone_type */       'Home' => 'Home',
  /* field_telephone_type */       'Mobile' => 'Mobile',
  /* field_telephone_type */       'Work' => 'Work',
  /* field_telephone_type */       'Other' => 'Other',
  /* field_telephone_type */     ),
  /* field_telephone_type */     'allowed_values_function' => '',
  /* field_telephone_type */   ),
  /* field_telephone_type */   'translatable' => 0,
  /* field_telephone_type */   'type' => 'list_text',
  /* field_telephone_type */ );

  // Exported field_base: 'field_thumbnail_image'.
  $field_bases['field_thumbnail_image'] = array(
  /* field_thumbnail_image */   'active' => 1,
  /* field_thumbnail_image */   'cardinality' => 1,
  /* field_thumbnail_image */   'deleted' => 0,
  /* field_thumbnail_image */   'entity_types' => array(),
  /* field_thumbnail_image */   'field_name' => 'field_thumbnail_image',
  /* field_thumbnail_image */   'indexes' => array(
  /* field_thumbnail_image */     'fid' => array(
  /* field_thumbnail_image */       0 => 'fid',
  /* field_thumbnail_image */     ),
  /* field_thumbnail_image */   ),
  /* field_thumbnail_image */   'locked' => 0,
  /* field_thumbnail_image */   'module' => 'image',
  /* field_thumbnail_image */   'settings' => array(
  /* field_thumbnail_image */     'default_image' => 0,
  /* field_thumbnail_image */     'uri_scheme' => 'private',
  /* field_thumbnail_image */   ),
  /* field_thumbnail_image */   'translatable' => 0,
  /* field_thumbnail_image */   'type' => 'image',
  /* field_thumbnail_image */ );

  // Exported field_base: 'field_title'.
  $field_bases['field_title'] = array(
  /* field_title */   'active' => 1,
  /* field_title */   'cardinality' => 1,
  /* field_title */   'deleted' => 0,
  /* field_title */   'entity_types' => array(),
  /* field_title */   'field_name' => 'field_title',
  /* field_title */   'indexes' => array(
  /* field_title */     'format' => array(
  /* field_title */       0 => 'format',
  /* field_title */     ),
  /* field_title */   ),
  /* field_title */   'locked' => 0,
  /* field_title */   'module' => 'text',
  /* field_title */   'settings' => array(
  /* field_title */     'max_length' => 255,
  /* field_title */   ),
  /* field_title */   'translatable' => 0,
  /* field_title */   'type' => 'text',
  /* field_title */ );

  // Exported field_base: 'field_topic'.
  $field_bases['field_topic'] = array(
  /* field_topic */   'active' => 1,
  /* field_topic */   'cardinality' => -1,
  /* field_topic */   'deleted' => 0,
  /* field_topic */   'entity_types' => array(),
  /* field_topic */   'field_name' => 'field_topic',
  /* field_topic */   'indexes' => array(
  /* field_topic */     'tid' => array(
  /* field_topic */       0 => 'tid',
  /* field_topic */     ),
  /* field_topic */   ),
  /* field_topic */   'locked' => 0,
  /* field_topic */   'module' => 'taxonomy',
  /* field_topic */   'settings' => array(
  /* field_topic */     'allowed_values' => array(
  /* field_topic */       0 => array(
  /* field_topic */         'vocabulary' => 'topics',
  /* field_topic */         'parent' => 0,
  /* field_topic */       ),
  /* field_topic */     ),
  /* field_topic */     'options_list_callback' => NULL,
  /* field_topic */   ),
  /* field_topic */   'translatable' => 0,
  /* field_topic */   'type' => 'taxonomy_term_reference',
  /* field_topic */ );

  // Exported field_base: 'field_topics_of_interest'.
  $field_bases['field_topics_of_interest'] = array(
  /* field_topics_of_interest */   'active' => 1,
  /* field_topics_of_interest */   'cardinality' => -1,
  /* field_topics_of_interest */   'deleted' => 0,
  /* field_topics_of_interest */   'entity_types' => array(),
  /* field_topics_of_interest */   'field_name' => 'field_topics_of_interest',
  /* field_topics_of_interest */   'indexes' => array(
  /* field_topics_of_interest */     'tid' => array(
  /* field_topics_of_interest */       0 => 'tid',
  /* field_topics_of_interest */     ),
  /* field_topics_of_interest */   ),
  /* field_topics_of_interest */   'locked' => 0,
  /* field_topics_of_interest */   'module' => 'taxonomy',
  /* field_topics_of_interest */   'settings' => array(
  /* field_topics_of_interest */     'allowed_values' => array(
  /* field_topics_of_interest */       0 => array(
  /* field_topics_of_interest */         'vocabulary' => 'topics',
  /* field_topics_of_interest */         'parent' => 0,
  /* field_topics_of_interest */       ),
  /* field_topics_of_interest */     ),
  /* field_topics_of_interest */     'options_list_callback' => NULL,
  /* field_topics_of_interest */   ),
  /* field_topics_of_interest */   'translatable' => 0,
  /* field_topics_of_interest */   'type' => 'taxonomy_term_reference',
  /* field_topics_of_interest */ );

  // Exported field_base: 'field_training'.
  $field_bases['field_training'] = array(
  /* field_training */   'active' => 1,
  /* field_training */   'cardinality' => -1,
  /* field_training */   'deleted' => 0,
  /* field_training */   'entity_types' => array(),
  /* field_training */   'field_name' => 'field_training',
  /* field_training */   'indexes' => array(
  /* field_training */     'revision_id' => array(
  /* field_training */       0 => 'revision_id',
  /* field_training */     ),
  /* field_training */     'value' => array(
  /* field_training */       0 => 'value',
  /* field_training */     ),
  /* field_training */   ),
  /* field_training */   'locked' => 0,
  /* field_training */   'module' => 'field_collection',
  /* field_training */   'settings' => array(
  /* field_training */     'hide_blank_items' => 1,
  /* field_training */     'hide_initial_item' => FALSE,
  /* field_training */     'path' => '',
  /* field_training */   ),
  /* field_training */   'translatable' => 0,
  /* field_training */   'type' => 'field_collection',
  /* field_training */ );

  // Exported field_base: 'field_training_description'.
  $field_bases['field_training_description'] = array(
  /* field_training_description */   'active' => 1,
  /* field_training_description */   'cardinality' => 1,
  /* field_training_description */   'deleted' => 0,
  /* field_training_description */   'entity_types' => array(),
  /* field_training_description */   'field_name' => 'field_training_description',
  /* field_training_description */   'indexes' => array(
  /* field_training_description */     'format' => array(
  /* field_training_description */       0 => 'format',
  /* field_training_description */     ),
  /* field_training_description */   ),
  /* field_training_description */   'locked' => 0,
  /* field_training_description */   'module' => 'text',
  /* field_training_description */   'settings' => array(),
  /* field_training_description */   'translatable' => 0,
  /* field_training_description */   'type' => 'text_long',
  /* field_training_description */ );

  // Exported field_base: 'field_training_institution'.
  $field_bases['field_training_institution'] = array(
  /* field_training_institution */   'active' => 1,
  /* field_training_institution */   'cardinality' => 1,
  /* field_training_institution */   'deleted' => 0,
  /* field_training_institution */   'entity_types' => array(),
  /* field_training_institution */   'field_name' => 'field_training_institution',
  /* field_training_institution */   'indexes' => array(
  /* field_training_institution */     'format' => array(
  /* field_training_institution */       0 => 'format',
  /* field_training_institution */     ),
  /* field_training_institution */   ),
  /* field_training_institution */   'locked' => 0,
  /* field_training_institution */   'module' => 'text',
  /* field_training_institution */   'settings' => array(
  /* field_training_institution */     'max_length' => 255,
  /* field_training_institution */   ),
  /* field_training_institution */   'translatable' => 0,
  /* field_training_institution */   'type' => 'text',
  /* field_training_institution */ );

  // Exported field_base: 'field_training_title'.
  $field_bases['field_training_title'] = array(
  /* field_training_title */   'active' => 1,
  /* field_training_title */   'cardinality' => 1,
  /* field_training_title */   'deleted' => 0,
  /* field_training_title */   'entity_types' => array(),
  /* field_training_title */   'field_name' => 'field_training_title',
  /* field_training_title */   'indexes' => array(
  /* field_training_title */     'format' => array(
  /* field_training_title */       0 => 'format',
  /* field_training_title */     ),
  /* field_training_title */   ),
  /* field_training_title */   'locked' => 0,
  /* field_training_title */   'module' => 'text',
  /* field_training_title */   'settings' => array(
  /* field_training_title */     'max_length' => 255,
  /* field_training_title */   ),
  /* field_training_title */   'translatable' => 0,
  /* field_training_title */   'type' => 'text',
  /* field_training_title */ );

  // Exported field_base: 'field_training_website'.
  $field_bases['field_training_website'] = array(
  /* field_training_website */   'active' => 1,
  /* field_training_website */   'cardinality' => 1,
  /* field_training_website */   'deleted' => 0,
  /* field_training_website */   'entity_types' => array(),
  /* field_training_website */   'field_name' => 'field_training_website',
  /* field_training_website */   'indexes' => array(
  /* field_training_website */     'format' => array(
  /* field_training_website */       0 => 'format',
  /* field_training_website */     ),
  /* field_training_website */   ),
  /* field_training_website */   'locked' => 0,
  /* field_training_website */   'module' => 'text',
  /* field_training_website */   'settings' => array(
  /* field_training_website */     'max_length' => 255,
  /* field_training_website */   ),
  /* field_training_website */   'translatable' => 0,
  /* field_training_website */   'type' => 'text',
  /* field_training_website */ );

  // Exported field_base: 'field_training_year'.
  $field_bases['field_training_year'] = array(
  /* field_training_year */   'active' => 1,
  /* field_training_year */   'cardinality' => 1,
  /* field_training_year */   'deleted' => 0,
  /* field_training_year */   'entity_types' => array(),
  /* field_training_year */   'field_name' => 'field_training_year',
  /* field_training_year */   'indexes' => array(),
  /* field_training_year */   'locked' => 0,
  /* field_training_year */   'module' => 'number',
  /* field_training_year */   'settings' => array(),
  /* field_training_year */   'translatable' => 0,
  /* field_training_year */   'type' => 'number_integer',
  /* field_training_year */ );

  // Exported field_base: 'field_twitter'.
  $field_bases['field_twitter'] = array(
  /* field_twitter */   'active' => 1,
  /* field_twitter */   'cardinality' => 1,
  /* field_twitter */   'deleted' => 0,
  /* field_twitter */   'entity_types' => array(),
  /* field_twitter */   'field_name' => 'field_twitter',
  /* field_twitter */   'indexes' => array(
  /* field_twitter */     'format' => array(
  /* field_twitter */       0 => 'format',
  /* field_twitter */     ),
  /* field_twitter */   ),
  /* field_twitter */   'locked' => 0,
  /* field_twitter */   'module' => 'text',
  /* field_twitter */   'settings' => array(
  /* field_twitter */     'max_length' => 255,
  /* field_twitter */   ),
  /* field_twitter */   'translatable' => 0,
  /* field_twitter */   'type' => 'text',
  /* field_twitter */ );

  // Exported field_base: 'field_type'.
  $field_bases['field_type'] = array(
  /* field_type */   'active' => 1,
  /* field_type */   'cardinality' => 1,
  /* field_type */   'deleted' => 0,
  /* field_type */   'entity_types' => array(),
  /* field_type */   'field_name' => 'field_type',
  /* field_type */   'indexes' => array(
  /* field_type */     'value' => array(
  /* field_type */       0 => 'value',
  /* field_type */     ),
  /* field_type */   ),
  /* field_type */   'locked' => 0,
  /* field_type */   'module' => 'list',
  /* field_type */   'settings' => array(
  /* field_type */     'allowed_values' => array(
  /* field_type */       'Week' => 'Week',
  /* field_type */       'Day' => 'Day',
  /* field_type */       'Unit' => 'Unit',
  /* field_type */     ),
  /* field_type */     'allowed_values_function' => '',
  /* field_type */   ),
  /* field_type */   'translatable' => 0,
  /* field_type */   'type' => 'list_text',
  /* field_type */ );

  // Exported field_base: 'field_updated_date'.
  $field_bases['field_updated_date'] = array(
  /* field_updated_date */   'active' => 1,
  /* field_updated_date */   'cardinality' => 1,
  /* field_updated_date */   'deleted' => 0,
  /* field_updated_date */   'entity_types' => array(),
  /* field_updated_date */   'field_name' => 'field_updated_date',
  /* field_updated_date */   'indexes' => array(),
  /* field_updated_date */   'locked' => 0,
  /* field_updated_date */   'module' => 'date',
  /* field_updated_date */   'settings' => array(
  /* field_updated_date */     'cache_count' => 4,
  /* field_updated_date */     'cache_enabled' => 0,
  /* field_updated_date */     'granularity' => array(
  /* field_updated_date */       'day' => 'day',
  /* field_updated_date */       'hour' => 'hour',
  /* field_updated_date */       'minute' => 'minute',
  /* field_updated_date */       'month' => 'month',
  /* field_updated_date */       'second' => 0,
  /* field_updated_date */       'year' => 'year',
  /* field_updated_date */     ),
  /* field_updated_date */     'repeat' => 0,
  /* field_updated_date */     'timezone_db' => 'UTC',
  /* field_updated_date */     'todate' => '',
  /* field_updated_date */     'tz_handling' => 'site',
  /* field_updated_date */   ),
  /* field_updated_date */   'translatable' => 0,
  /* field_updated_date */   'type' => 'datetime',
  /* field_updated_date */ );

  // Exported field_base: 'field_updated_fields'.
  $field_bases['field_updated_fields'] = array(
  /* field_updated_fields */   'active' => 1,
  /* field_updated_fields */   'cardinality' => 1,
  /* field_updated_fields */   'deleted' => 0,
  /* field_updated_fields */   'entity_types' => array(),
  /* field_updated_fields */   'field_name' => 'field_updated_fields',
  /* field_updated_fields */   'indexes' => array(
  /* field_updated_fields */     'format' => array(
  /* field_updated_fields */       0 => 'format',
  /* field_updated_fields */     ),
  /* field_updated_fields */   ),
  /* field_updated_fields */   'locked' => 0,
  /* field_updated_fields */   'module' => 'text',
  /* field_updated_fields */   'settings' => array(),
  /* field_updated_fields */   'translatable' => 0,
  /* field_updated_fields */   'type' => 'text_long',
  /* field_updated_fields */ );

  // Exported field_base: 'field_user'.
  $field_bases['field_user'] = array(
  /* field_user */   'active' => 1,
  /* field_user */   'cardinality' => 1,
  /* field_user */   'deleted' => 0,
  /* field_user */   'entity_types' => array(),
  /* field_user */   'field_name' => 'field_user',
  /* field_user */   'indexes' => array(
  /* field_user */     'target_id' => array(
  /* field_user */       0 => 'target_id',
  /* field_user */     ),
  /* field_user */   ),
  /* field_user */   'locked' => 0,
  /* field_user */   'module' => 'entityreference',
  /* field_user */   'settings' => array(
  /* field_user */     'handler' => 'base',
  /* field_user */     'handler_settings' => array(
  /* field_user */       'behaviors' => array(
  /* field_user */         'views-select-list' => array(
  /* field_user */           'status' => 0,
  /* field_user */         ),
  /* field_user */       ),
  /* field_user */       'sort' => array(
  /* field_user */         'type' => 'none',
  /* field_user */       ),
  /* field_user */       'target_bundles' => array(),
  /* field_user */     ),
  /* field_user */     'target_type' => 'user',
  /* field_user */   ),
  /* field_user */   'translatable' => 0,
  /* field_user */   'type' => 'entityreference',
  /* field_user */ );

  // Exported field_base: 'field_user_feedback'.
  $field_bases['field_user_feedback'] = array(
  /* field_user_feedback */   'active' => 1,
  /* field_user_feedback */   'cardinality' => 1,
  /* field_user_feedback */   'deleted' => 0,
  /* field_user_feedback */   'entity_types' => array(),
  /* field_user_feedback */   'field_name' => 'field_user_feedback',
  /* field_user_feedback */   'indexes' => array(
  /* field_user_feedback */     'format' => array(
  /* field_user_feedback */       0 => 'format',
  /* field_user_feedback */     ),
  /* field_user_feedback */   ),
  /* field_user_feedback */   'locked' => 0,
  /* field_user_feedback */   'module' => 'text',
  /* field_user_feedback */   'settings' => array(),
  /* field_user_feedback */   'translatable' => 0,
  /* field_user_feedback */   'type' => 'text_long',
  /* field_user_feedback */ );

  // Exported field_base: 'field_user_organization'.
  $field_bases['field_user_organization'] = array(
  /* field_user_organization */   'active' => 1,
  /* field_user_organization */   'cardinality' => 1,
  /* field_user_organization */   'deleted' => 0,
  /* field_user_organization */   'entity_types' => array(),
  /* field_user_organization */   'field_name' => 'field_user_organization',
  /* field_user_organization */   'indexes' => array(
  /* field_user_organization */     'format' => array(
  /* field_user_organization */       0 => 'format',
  /* field_user_organization */     ),
  /* field_user_organization */   ),
  /* field_user_organization */   'locked' => 0,
  /* field_user_organization */   'module' => 'text',
  /* field_user_organization */   'settings' => array(
  /* field_user_organization */     'max_length' => 80,
  /* field_user_organization */   ),
  /* field_user_organization */   'translatable' => 0,
  /* field_user_organization */   'type' => 'text',
  /* field_user_organization */ );

  // Exported field_base: 'field_user_rank_prefix'.
  $field_bases['field_user_rank_prefix'] = array(
  /* field_user_rank_prefix */   'active' => 1,
  /* field_user_rank_prefix */   'cardinality' => 1,
  /* field_user_rank_prefix */   'deleted' => 0,
  /* field_user_rank_prefix */   'entity_types' => array(),
  /* field_user_rank_prefix */   'field_name' => 'field_user_rank_prefix',
  /* field_user_rank_prefix */   'indexes' => array(
  /* field_user_rank_prefix */     'format' => array(
  /* field_user_rank_prefix */       0 => 'format',
  /* field_user_rank_prefix */     ),
  /* field_user_rank_prefix */   ),
  /* field_user_rank_prefix */   'locked' => 0,
  /* field_user_rank_prefix */   'module' => 'text',
  /* field_user_rank_prefix */   'settings' => array(
  /* field_user_rank_prefix */     'max_length' => 255,
  /* field_user_rank_prefix */   ),
  /* field_user_rank_prefix */   'translatable' => 0,
  /* field_user_rank_prefix */   'type' => 'text',
  /* field_user_rank_prefix */ );

  // Exported field_base: 'field_user_suffix'.
  $field_bases['field_user_suffix'] = array(
  /* field_user_suffix */   'active' => 1,
  /* field_user_suffix */   'cardinality' => 1,
  /* field_user_suffix */   'deleted' => 0,
  /* field_user_suffix */   'entity_types' => array(),
  /* field_user_suffix */   'field_name' => 'field_user_suffix',
  /* field_user_suffix */   'indexes' => array(
  /* field_user_suffix */     'value' => array(
  /* field_user_suffix */       0 => 'value',
  /* field_user_suffix */     ),
  /* field_user_suffix */   ),
  /* field_user_suffix */   'locked' => 0,
  /* field_user_suffix */   'module' => 'list',
  /* field_user_suffix */   'settings' => array(
  /* field_user_suffix */     'allowed_values' => array(
  /* field_user_suffix */       'Jr.' => 'Jr.',
  /* field_user_suffix */       'Sr.' => 'Sr.',
  /* field_user_suffix */       'III' => 'III',
  /* field_user_suffix */       'IV' => 'IV',
  /* field_user_suffix */     ),
  /* field_user_suffix */     'allowed_values_function' => '',
  /* field_user_suffix */   ),
  /* field_user_suffix */   'translatable' => 0,
  /* field_user_suffix */   'type' => 'list_text',
  /* field_user_suffix */ );

  // Exported field_base: 'field_user_title'.
  $field_bases['field_user_title'] = array(
  /* field_user_title */   'active' => 1,
  /* field_user_title */   'cardinality' => 1,
  /* field_user_title */   'deleted' => 0,
  /* field_user_title */   'entity_types' => array(),
  /* field_user_title */   'field_name' => 'field_user_title',
  /* field_user_title */   'indexes' => array(
  /* field_user_title */     'format' => array(
  /* field_user_title */       0 => 'format',
  /* field_user_title */     ),
  /* field_user_title */   ),
  /* field_user_title */   'locked' => 0,
  /* field_user_title */   'module' => 'text',
  /* field_user_title */   'settings' => array(
  /* field_user_title */     'max_length' => 80,
  /* field_user_title */   ),
  /* field_user_title */   'translatable' => 0,
  /* field_user_title */   'type' => 'text',
  /* field_user_title */ );

  // Exported field_base: 'field_visitor_information'.
  $field_bases['field_visitor_information'] = array(
  /* field_visitor_information */   'active' => 1,
  /* field_visitor_information */   'cardinality' => 1,
  /* field_visitor_information */   'deleted' => 0,
  /* field_visitor_information */   'entity_types' => array(),
  /* field_visitor_information */   'field_name' => 'field_visitor_information',
  /* field_visitor_information */   'indexes' => array(
  /* field_visitor_information */     'format' => array(
  /* field_visitor_information */       0 => 'format',
  /* field_visitor_information */     ),
  /* field_visitor_information */   ),
  /* field_visitor_information */   'locked' => 0,
  /* field_visitor_information */   'module' => 'text',
  /* field_visitor_information */   'settings' => array(),
  /* field_visitor_information */   'translatable' => 0,
  /* field_visitor_information */   'type' => 'text_long',
  /* field_visitor_information */ );

  // Exported field_base: 'field_web_conference_detail'.
  $field_bases['field_web_conference_detail'] = array(
  /* field_web_conference_detail */   'active' => 1,
  /* field_web_conference_detail */   'cardinality' => 1,
  /* field_web_conference_detail */   'deleted' => 0,
  /* field_web_conference_detail */   'entity_types' => array(),
  /* field_web_conference_detail */   'field_name' => 'field_web_conference_detail',
  /* field_web_conference_detail */   'indexes' => array(
  /* field_web_conference_detail */     'format' => array(
  /* field_web_conference_detail */       0 => 'format',
  /* field_web_conference_detail */     ),
  /* field_web_conference_detail */   ),
  /* field_web_conference_detail */   'locked' => 0,
  /* field_web_conference_detail */   'module' => 'text',
  /* field_web_conference_detail */   'settings' => array(),
  /* field_web_conference_detail */   'translatable' => 0,
  /* field_web_conference_detail */   'type' => 'text_long',
  /* field_web_conference_detail */ );

  // Exported field_base: 'field_website'.
  $field_bases['field_website'] = array(
  /* field_website */   'active' => 1,
  /* field_website */   'cardinality' => 1,
  /* field_website */   'deleted' => 0,
  /* field_website */   'entity_types' => array(),
  /* field_website */   'field_name' => 'field_website',
  /* field_website */   'indexes' => array(
  /* field_website */     'format' => array(
  /* field_website */       0 => 'format',
  /* field_website */     ),
  /* field_website */   ),
  /* field_website */   'locked' => 0,
  /* field_website */   'module' => 'text',
  /* field_website */   'settings' => array(
  /* field_website */     'max_length' => 255,
  /* field_website */   ),
  /* field_website */   'translatable' => 0,
  /* field_website */   'type' => 'text',
  /* field_website */ );

  // Exported field_base: 'field_where_do_you_work'.
  $field_bases['field_where_do_you_work'] = array(
  /* field_where_do_you_work */   'active' => 1,
  /* field_where_do_you_work */   'cardinality' => 1,
  /* field_where_do_you_work */   'deleted' => 0,
  /* field_where_do_you_work */   'entity_types' => array(),
  /* field_where_do_you_work */   'field_name' => 'field_where_do_you_work',
  /* field_where_do_you_work */   'indexes' => array(
  /* field_where_do_you_work */     'value' => array(
  /* field_where_do_you_work */       0 => 'value',
  /* field_where_do_you_work */     ),
  /* field_where_do_you_work */   ),
  /* field_where_do_you_work */   'locked' => 0,
  /* field_where_do_you_work */   'module' => 'list',
  /* field_where_do_you_work */   'settings' => array(
  /* field_where_do_you_work */     'allowed_values' => array(
  /* field_where_do_you_work */       'Government Agency' => 'Government Agency',
  /* field_where_do_you_work */       'Embassy' => 'Embassy',
  /* field_where_do_you_work */       'University' => 'University',
  /* field_where_do_you_work */       'Other' => 'Other',
  /* field_where_do_you_work */     ),
  /* field_where_do_you_work */     'allowed_values_function' => '',
  /* field_where_do_you_work */   ),
  /* field_where_do_you_work */   'translatable' => 0,
  /* field_where_do_you_work */   'type' => 'list_text',
  /* field_where_do_you_work */ );

  // Exported field_base: 'field_will_this_course_have_sess'.
  $field_bases['field_will_this_course_have_sess'] = array(
  /* field_will_this_course_have_sess */   'active' => 1,
  /* field_will_this_course_have_sess */   'cardinality' => 1,
  /* field_will_this_course_have_sess */   'deleted' => 0,
  /* field_will_this_course_have_sess */   'entity_types' => array(),
  /* field_will_this_course_have_sess */   'field_name' => 'field_will_this_course_have_sess',
  /* field_will_this_course_have_sess */   'indexes' => array(
  /* field_will_this_course_have_sess */     'value' => array(
  /* field_will_this_course_have_sess */       0 => 'value',
  /* field_will_this_course_have_sess */     ),
  /* field_will_this_course_have_sess */   ),
  /* field_will_this_course_have_sess */   'locked' => 0,
  /* field_will_this_course_have_sess */   'module' => 'list',
  /* field_will_this_course_have_sess */   'settings' => array(
  /* field_will_this_course_have_sess */     'allowed_values' => array(
  /* field_will_this_course_have_sess */       'yes' => 'Yes',
  /* field_will_this_course_have_sess */       'no' => 'No',
  /* field_will_this_course_have_sess */     ),
  /* field_will_this_course_have_sess */     'allowed_values_function' => '',
  /* field_will_this_course_have_sess */   ),
  /* field_will_this_course_have_sess */   'translatable' => 0,
  /* field_will_this_course_have_sess */   'type' => 'list_text',
  /* field_will_this_course_have_sess */ );

  // Exported field_base: 'field_youtube'.
  $field_bases['field_youtube'] = array(
  /* field_youtube */   'active' => 1,
  /* field_youtube */   'cardinality' => 1,
  /* field_youtube */   'deleted' => 0,
  /* field_youtube */   'entity_types' => array(),
  /* field_youtube */   'field_name' => 'field_youtube',
  /* field_youtube */   'indexes' => array(
  /* field_youtube */     'format' => array(
  /* field_youtube */       0 => 'format',
  /* field_youtube */     ),
  /* field_youtube */   ),
  /* field_youtube */   'locked' => 0,
  /* field_youtube */   'module' => 'text',
  /* field_youtube */   'settings' => array(
  /* field_youtube */     'max_length' => 255,
  /* field_youtube */   ),
  /* field_youtube */   'translatable' => 0,
  /* field_youtube */   'type' => 'text',
  /* field_youtube */ );

  // Exported field_base: 'group_group'.
  $field_bases['group_group'] = array(
  /* group_group */   'active' => 1,
  /* group_group */   'cardinality' => 1,
  /* group_group */   'deleted' => 0,
  /* group_group */   'entity_types' => array(),
  /* group_group */   'field_name' => 'group_group',
  /* group_group */   'indexes' => array(
  /* group_group */     'value' => array(
  /* group_group */       0 => 'value',
  /* group_group */     ),
  /* group_group */   ),
  /* group_group */   'locked' => 0,
  /* group_group */   'module' => 'list',
  /* group_group */   'settings' => array(
  /* group_group */     'allowed_values' => array(
  /* group_group */       0 => 'Not a group',
  /* group_group */       1 => 'Group',
  /* group_group */     ),
  /* group_group */     'allowed_values_function' => '',
  /* group_group */   ),
  /* group_group */   'translatable' => 0,
  /* group_group */   'type' => 'list_boolean',
  /* group_group */ );

  // Exported field_base: 'media_description'.
  $field_bases['media_description'] = array(
  /* media_description */   'active' => 1,
  /* media_description */   'cardinality' => 1,
  /* media_description */   'deleted' => 0,
  /* media_description */   'entity_types' => array(),
  /* media_description */   'field_name' => 'media_description',
  /* media_description */   'indexes' => array(
  /* media_description */     'format' => array(
  /* media_description */       0 => 'format',
  /* media_description */     ),
  /* media_description */   ),
  /* media_description */   'locked' => 1,
  /* media_description */   'module' => 'text',
  /* media_description */   'settings' => array(),
  /* media_description */   'translatable' => 0,
  /* media_description */   'type' => 'text_long',
  /* media_description */ );

  // Exported field_base: 'media_title'.
  $field_bases['media_title'] = array(
  /* media_title */   'active' => 1,
  /* media_title */   'cardinality' => 1,
  /* media_title */   'deleted' => 0,
  /* media_title */   'entity_types' => array(),
  /* media_title */   'field_name' => 'media_title',
  /* media_title */   'indexes' => array(
  /* media_title */     'format' => array(
  /* media_title */       0 => 'format',
  /* media_title */     ),
  /* media_title */   ),
  /* media_title */   'locked' => 1,
  /* media_title */   'module' => 'text',
  /* media_title */   'settings' => array(
  /* media_title */     'max_length' => 255,
  /* media_title */   ),
  /* media_title */   'translatable' => 0,
  /* media_title */   'type' => 'text',
  /* media_title */ );

  // Exported field_base: 'message_text'.
  $field_bases['message_text'] = array(
  /* message_text */   'active' => 1,
  /* message_text */   'cardinality' => -1,
  /* message_text */   'deleted' => 0,
  /* message_text */   'entity_types' => array(
  /* message_text */     0 => 'message_type',
  /* message_text */   ),
  /* message_text */   'field_name' => 'message_text',
  /* message_text */   'indexes' => array(
  /* message_text */     'format' => array(
  /* message_text */       0 => 'format',
  /* message_text */     ),
  /* message_text */   ),
  /* message_text */   'locked' => 1,
  /* message_text */   'module' => 'text',
  /* message_text */   'settings' => array(
  /* message_text */     'message_text' => TRUE,
  /* message_text */   ),
  /* message_text */   'translatable' => 1,
  /* message_text */   'type' => 'text_long',
  /* message_text */ );

  // Exported field_base: 'og_entityform_group_ref'.
  $field_bases['og_entityform_group_ref'] = array(
  /* og_entityform_group_ref */   'active' => 1,
  /* og_entityform_group_ref */   'cardinality' => -1,
  /* og_entityform_group_ref */   'deleted' => 0,
  /* og_entityform_group_ref */   'entity_types' => array(),
  /* og_entityform_group_ref */   'field_name' => 'og_entityform_group_ref',
  /* og_entityform_group_ref */   'indexes' => array(
  /* og_entityform_group_ref */     'target_id' => array(
  /* og_entityform_group_ref */       0 => 'target_id',
  /* og_entityform_group_ref */     ),
  /* og_entityform_group_ref */   ),
  /* og_entityform_group_ref */   'locked' => 0,
  /* og_entityform_group_ref */   'module' => 'entityreference',
  /* og_entityform_group_ref */   'settings' => array(
  /* og_entityform_group_ref */     'handler' => 'og',
  /* og_entityform_group_ref */     'handler_settings' => array(
  /* og_entityform_group_ref */       'behaviors' => array(
  /* og_entityform_group_ref */         'og_behavior' => array(
  /* og_entityform_group_ref */           'status' => TRUE,
  /* og_entityform_group_ref */         ),
  /* og_entityform_group_ref */         'views-select-list' => array(
  /* og_entityform_group_ref */           'status' => 0,
  /* og_entityform_group_ref */         ),
  /* og_entityform_group_ref */       ),
  /* og_entityform_group_ref */       'membership_type' => 'og_membership_type_default',
  /* og_entityform_group_ref */       'sort' => array(
  /* og_entityform_group_ref */         'type' => 'none',
  /* og_entityform_group_ref */       ),
  /* og_entityform_group_ref */       'target_bundles' => array(),
  /* og_entityform_group_ref */     ),
  /* og_entityform_group_ref */     'handler_submit' => 'Change handler',
  /* og_entityform_group_ref */     'target_type' => 'node',
  /* og_entityform_group_ref */   ),
  /* og_entityform_group_ref */   'translatable' => 0,
  /* og_entityform_group_ref */   'type' => 'entityreference',
  /* og_entityform_group_ref */ );

  // Exported field_base: 'og_membership_request'.
  $field_bases['og_membership_request'] = array(
  /* og_membership_request */   'active' => 1,
  /* og_membership_request */   'cardinality' => 1,
  /* og_membership_request */   'deleted' => 0,
  /* og_membership_request */   'entity_types' => array(
  /* og_membership_request */     0 => 'og_membership',
  /* og_membership_request */   ),
  /* og_membership_request */   'field_name' => 'og_membership_request',
  /* og_membership_request */   'indexes' => array(
  /* og_membership_request */     'format' => array(
  /* og_membership_request */       0 => 'format',
  /* og_membership_request */     ),
  /* og_membership_request */   ),
  /* og_membership_request */   'locked' => 0,
  /* og_membership_request */   'module' => 'text',
  /* og_membership_request */   'settings' => array(),
  /* og_membership_request */   'translatable' => 0,
  /* og_membership_request */   'type' => 'text_long',
  /* og_membership_request */ );

  // Exported field_base: 'og_roles_permissions'.
  $field_bases['og_roles_permissions'] = array(
  /* og_roles_permissions */   'active' => 1,
  /* og_roles_permissions */   'cardinality' => 1,
  /* og_roles_permissions */   'deleted' => 0,
  /* og_roles_permissions */   'entity_types' => array(),
  /* og_roles_permissions */   'field_name' => 'og_roles_permissions',
  /* og_roles_permissions */   'indexes' => array(
  /* og_roles_permissions */     'value' => array(
  /* og_roles_permissions */       0 => 'value',
  /* og_roles_permissions */     ),
  /* og_roles_permissions */   ),
  /* og_roles_permissions */   'locked' => 0,
  /* og_roles_permissions */   'module' => 'list',
  /* og_roles_permissions */   'settings' => array(
  /* og_roles_permissions */     'allowed_values' => array(
  /* og_roles_permissions */       0 => 'Use default roles and permissions',
  /* og_roles_permissions */       1 => 'Override default roles and permissions',
  /* og_roles_permissions */     ),
  /* og_roles_permissions */     'allowed_values_function' => '',
  /* og_roles_permissions */   ),
  /* og_roles_permissions */   'translatable' => 0,
  /* og_roles_permissions */   'type' => 'list_boolean',
  /* og_roles_permissions */ );

  return $field_bases;
}
