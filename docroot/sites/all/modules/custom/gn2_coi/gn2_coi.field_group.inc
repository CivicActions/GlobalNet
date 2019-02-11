<?php
/**
 * @file
 * gn2_coi.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function gn2_coi_field_group_info() {
  $field_groups = array();

   /* group_basic|node|coi|form */ $field_group = new stdClass();
   /* group_basic|node|coi|form */ $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
   /* group_basic|node|coi|form */ $field_group->api_version = 1;
   /* group_basic|node|coi|form */ $field_group->identifier = 'group_basic|node|coi|form';
   /* group_basic|node|coi|form */ $field_group->group_name = 'group_basic';
   /* group_basic|node|coi|form */ $field_group->entity_type = 'node';
   /* group_basic|node|coi|form */ $field_group->bundle = 'coi';
   /* group_basic|node|coi|form */ $field_group->mode = 'form';
   /* group_basic|node|coi|form */ $field_group->parent_name = '';
   /* group_basic|node|coi|form */ $field_group->data = array(
   /* group_basic|node|coi|form */   'label' => 'Basic Information',
   /* group_basic|node|coi|form */   'weight' => '0',
   /* group_basic|node|coi|form */   'children' => array(
   /* group_basic|node|coi|form */     0 => 'body',
   /* group_basic|node|coi|form */     1 => 'field_group_help',
   /* group_basic|node|coi|form */     2 => 'field_group_short_title',
   /* group_basic|node|coi|form */     3 => 'field_main_image',
   /* group_basic|node|coi|form */     4 => 'field_rec_links',
   /* group_basic|node|coi|form */     5 => 'language',
   /* group_basic|node|coi|form */     6 => 'title',
   /* group_basic|node|coi|form */     7 => 'og_menu',
   /* group_basic|node|coi|form */   ),
   /* group_basic|node|coi|form */   'format_type' => 'fieldset',
   /* group_basic|node|coi|form */   'format_settings' => array(
   /* group_basic|node|coi|form */     'formatter' => 'collapsible',
   /* group_basic|node|coi|form */     'instance_settings' => array(
   /* group_basic|node|coi|form */       'description' => '',
   /* group_basic|node|coi|form */       'classes' => 'group-basic field-group-fieldset',
   /* group_basic|node|coi|form */       'required_fields' => 1,
   /* group_basic|node|coi|form */     ),
   /* group_basic|node|coi|form */   ),
   /* group_basic|node|coi|form */ );
  $field_groups['group_basic|node|coi|form'] = $field_group;

   /* group_countries|node|coi|form */ $field_group = new stdClass();
   /* group_countries|node|coi|form */ $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
   /* group_countries|node|coi|form */ $field_group->api_version = 1;
   /* group_countries|node|coi|form */ $field_group->identifier = 'group_countries|node|coi|form';
   /* group_countries|node|coi|form */ $field_group->group_name = 'group_countries';
   /* group_countries|node|coi|form */ $field_group->entity_type = 'node';
   /* group_countries|node|coi|form */ $field_group->bundle = 'coi';
   /* group_countries|node|coi|form */ $field_group->mode = 'form';
   /* group_countries|node|coi|form */ $field_group->parent_name = '';
   /* group_countries|node|coi|form */ $field_group->data = array(
   /* group_countries|node|coi|form */   'label' => 'Countries',
   /* group_countries|node|coi|form */   'weight' => '5',
   /* group_countries|node|coi|form */   'children' => array(
   /* group_countries|node|coi|form */     0 => 'field_country',
   /* group_countries|node|coi|form */   ),
   /* group_countries|node|coi|form */   'format_type' => 'fieldset',
   /* group_countries|node|coi|form */   'format_settings' => array(
   /* group_countries|node|coi|form */     'label' => 'Countries',
   /* group_countries|node|coi|form */     'instance_settings' => array(
   /* group_countries|node|coi|form */       'required_fields' => 0,
   /* group_countries|node|coi|form */       'classes' => 'group-countries field-group-fieldset',
   /* group_countries|node|coi|form */       'description' => '',
   /* group_countries|node|coi|form */     ),
   /* group_countries|node|coi|form */     'formatter' => 'collapsed',
   /* group_countries|node|coi|form */   ),
   /* group_countries|node|coi|form */ );
  $field_groups['group_countries|node|coi|form'] = $field_group;

   /* group_privacy|node|coi|form */ $field_group = new stdClass();
   /* group_privacy|node|coi|form */ $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
   /* group_privacy|node|coi|form */ $field_group->api_version = 1;
   /* group_privacy|node|coi|form */ $field_group->identifier = 'group_privacy|node|coi|form';
   /* group_privacy|node|coi|form */ $field_group->group_name = 'group_privacy';
   /* group_privacy|node|coi|form */ $field_group->entity_type = 'node';
   /* group_privacy|node|coi|form */ $field_group->bundle = 'coi';
   /* group_privacy|node|coi|form */ $field_group->mode = 'form';
   /* group_privacy|node|coi|form */ $field_group->parent_name = '';
   /* group_privacy|node|coi|form */ $field_group->data = array(
   /* group_privacy|node|coi|form */   'label' => 'Privacy Settings',
   /* group_privacy|node|coi|form */   'weight' => '1',
   /* group_privacy|node|coi|form */   'children' => array(
   /* group_privacy|node|coi|form */     0 => 'group_content_access',
   /* group_privacy|node|coi|form */     1 => 'group_group',
   /* group_privacy|node|coi|form */     2 => 'og_group_ref',
   /* group_privacy|node|coi|form */     3 => 'og_roles_permissions',
   /* group_privacy|node|coi|form */     4 => 'group_access',
   /* group_privacy|node|coi|form */     5 => 'field_gn2_simple_access',
   /* group_privacy|node|coi|form */   ),
   /* group_privacy|node|coi|form */   'format_type' => 'fieldset',
   /* group_privacy|node|coi|form */   'format_settings' => array(
   /* group_privacy|node|coi|form */     'label' => 'Privacy Settings',
   /* group_privacy|node|coi|form */     'instance_settings' => array(
   /* group_privacy|node|coi|form */       'required_fields' => 0,
   /* group_privacy|node|coi|form */       'classes' => 'group-privacy field-group-fieldset',
   /* group_privacy|node|coi|form */       'description' => '',
   /* group_privacy|node|coi|form */     ),
   /* group_privacy|node|coi|form */     'formatter' => 'collapsed',
   /* group_privacy|node|coi|form */   ),
   /* group_privacy|node|coi|form */ );
  $field_groups['group_privacy|node|coi|form'] = $field_group;

   /* group_regions|node|coi|form */ $field_group = new stdClass();
   /* group_regions|node|coi|form */ $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
   /* group_regions|node|coi|form */ $field_group->api_version = 1;
   /* group_regions|node|coi|form */ $field_group->identifier = 'group_regions|node|coi|form';
   /* group_regions|node|coi|form */ $field_group->group_name = 'group_regions';
   /* group_regions|node|coi|form */ $field_group->entity_type = 'node';
   /* group_regions|node|coi|form */ $field_group->bundle = 'coi';
   /* group_regions|node|coi|form */ $field_group->mode = 'form';
   /* group_regions|node|coi|form */ $field_group->parent_name = '';
   /* group_regions|node|coi|form */ $field_group->data = array(
   /* group_regions|node|coi|form */   'label' => 'Regions',
   /* group_regions|node|coi|form */   'weight' => '6',
   /* group_regions|node|coi|form */   'children' => array(
   /* group_regions|node|coi|form */     0 => 'field_region',
   /* group_regions|node|coi|form */   ),
   /* group_regions|node|coi|form */   'format_type' => 'fieldset',
   /* group_regions|node|coi|form */   'format_settings' => array(
   /* group_regions|node|coi|form */     'label' => 'Regions',
   /* group_regions|node|coi|form */     'instance_settings' => array(
   /* group_regions|node|coi|form */       'required_fields' => 0,
   /* group_regions|node|coi|form */       'classes' => 'group-regions field-group-fieldset',
   /* group_regions|node|coi|form */       'description' => '',
   /* group_regions|node|coi|form */     ),
   /* group_regions|node|coi|form */     'formatter' => 'collapsed',
   /* group_regions|node|coi|form */   ),
   /* group_regions|node|coi|form */ );
  $field_groups['group_regions|node|coi|form'] = $field_group;

   /* group_topics|node|coi|form */ $field_group = new stdClass();
   /* group_topics|node|coi|form */ $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
   /* group_topics|node|coi|form */ $field_group->api_version = 1;
   /* group_topics|node|coi|form */ $field_group->identifier = 'group_topics|node|coi|form';
   /* group_topics|node|coi|form */ $field_group->group_name = 'group_topics';
   /* group_topics|node|coi|form */ $field_group->entity_type = 'node';
   /* group_topics|node|coi|form */ $field_group->bundle = 'coi';
   /* group_topics|node|coi|form */ $field_group->mode = 'form';
   /* group_topics|node|coi|form */ $field_group->parent_name = '';
   /* group_topics|node|coi|form */ $field_group->data = array(
   /* group_topics|node|coi|form */   'label' => 'Topics',
   /* group_topics|node|coi|form */   'weight' => '4',
   /* group_topics|node|coi|form */   'children' => array(
   /* group_topics|node|coi|form */     0 => 'field_topic',
   /* group_topics|node|coi|form */   ),
   /* group_topics|node|coi|form */   'format_type' => 'fieldset',
   /* group_topics|node|coi|form */   'format_settings' => array(
   /* group_topics|node|coi|form */     'label' => 'Topics',
   /* group_topics|node|coi|form */     'instance_settings' => array(
   /* group_topics|node|coi|form */       'required_fields' => 1,
   /* group_topics|node|coi|form */       'classes' => 'group-topics field-group-fieldset',
   /* group_topics|node|coi|form */       'description' => '',
   /* group_topics|node|coi|form */     ),
   /* group_topics|node|coi|form */     'formatter' => 'collapsed',
   /* group_topics|node|coi|form */   ),
   /* group_topics|node|coi|form */ );
  $field_groups['group_topics|node|coi|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Basic Information');
  t('Countries');
  t('Privacy Settings');
  t('Regions');
  t('Topics');

  return $field_groups;
}
