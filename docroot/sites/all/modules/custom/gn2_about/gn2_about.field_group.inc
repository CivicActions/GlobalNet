<?php
/**
 * @file
 * gn2_about.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function gn2_about_field_group_info() {
  $field_groups = array();

   /* group_basic|node|about_page|form */ $field_group = new stdClass();
   /* group_basic|node|about_page|form */ $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
   /* group_basic|node|about_page|form */ $field_group->api_version = 1;
   /* group_basic|node|about_page|form */ $field_group->identifier = 'group_basic|node|about_page|form';
   /* group_basic|node|about_page|form */ $field_group->group_name = 'group_basic';
   /* group_basic|node|about_page|form */ $field_group->entity_type = 'node';
   /* group_basic|node|about_page|form */ $field_group->bundle = 'about_page';
   /* group_basic|node|about_page|form */ $field_group->mode = 'form';
   /* group_basic|node|about_page|form */ $field_group->parent_name = '';
   /* group_basic|node|about_page|form */ $field_group->data = array(
   /* group_basic|node|about_page|form */   'label' => 'Basic Information',
   /* group_basic|node|about_page|form */   'weight' => '0',
   /* group_basic|node|about_page|form */   'children' => array(
   /* group_basic|node|about_page|form */     0 => 'body',
   /* group_basic|node|about_page|form */     1 => 'field_call_to_action',
   /* group_basic|node|about_page|form */     2 => 'field_main_image',
   /* group_basic|node|about_page|form */     3 => 'field_administration',
   /* group_basic|node|about_page|form */     4 => 'field_employment',
   /* group_basic|node|about_page|form */     5 => 'field_leadership',
   /* group_basic|node|about_page|form */     6 => 'field_mission',
   /* group_basic|node|about_page|form */     7 => 'field_visitor_information',
   /* group_basic|node|about_page|form */     8 => 'language',
   /* group_basic|node|about_page|form */     9 => 'title',
   /* group_basic|node|about_page|form */   ),
   /* group_basic|node|about_page|form */   'format_type' => 'fieldset',
   /* group_basic|node|about_page|form */   'format_settings' => array(
   /* group_basic|node|about_page|form */     'formatter' => 'collapsible',
   /* group_basic|node|about_page|form */     'instance_settings' => array(
   /* group_basic|node|about_page|form */       'description' => '',
   /* group_basic|node|about_page|form */       'classes' => 'group-basic field-group-fieldset',
   /* group_basic|node|about_page|form */       'required_fields' => 1,
   /* group_basic|node|about_page|form */       'id' => '',
   /* group_basic|node|about_page|form */     ),
   /* group_basic|node|about_page|form */   ),
   /* group_basic|node|about_page|form */ );
  $field_groups['group_basic|node|about_page|form'] = $field_group;

   /* group_org_info|node|about_page|form */ $field_group = new stdClass();
   /* group_org_info|node|about_page|form */ $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
   /* group_org_info|node|about_page|form */ $field_group->api_version = 1;
   /* group_org_info|node|about_page|form */ $field_group->identifier = 'group_org_info|node|about_page|form';
   /* group_org_info|node|about_page|form */ $field_group->group_name = 'group_org_info';
   /* group_org_info|node|about_page|form */ $field_group->entity_type = 'node';
   /* group_org_info|node|about_page|form */ $field_group->bundle = 'about_page';
   /* group_org_info|node|about_page|form */ $field_group->mode = 'form';
   /* group_org_info|node|about_page|form */ $field_group->parent_name = '';
   /* group_org_info|node|about_page|form */ $field_group->data = array(
   /* group_org_info|node|about_page|form */   'label' => 'Organization Info',
   /* group_org_info|node|about_page|form */   'weight' => '1',
   /* group_org_info|node|about_page|form */   'children' => array(
   /* group_org_info|node|about_page|form */     0 => 'field_contact_information',
   /* group_org_info|node|about_page|form */     1 => 'field_facebook',
   /* group_org_info|node|about_page|form */     2 => 'field_linkedin',
   /* group_org_info|node|about_page|form */     3 => 'field_org_short_title',
   /* group_org_info|node|about_page|form */     4 => 'field_twitter',
   /* group_org_info|node|about_page|form */     5 => 'field_google_plus',
   /* group_org_info|node|about_page|form */     6 => 'field_youtube',
   /* group_org_info|node|about_page|form */     7 => 'field_instagram',
   /* group_org_info|node|about_page|form */   ),
   /* group_org_info|node|about_page|form */   'format_type' => 'fieldset',
   /* group_org_info|node|about_page|form */   'format_settings' => array(
   /* group_org_info|node|about_page|form */     'label' => 'Organization Info',
   /* group_org_info|node|about_page|form */     'instance_settings' => array(
   /* group_org_info|node|about_page|form */       'required_fields' => 1,
   /* group_org_info|node|about_page|form */       'id' => '',
   /* group_org_info|node|about_page|form */       'classes' => 'group-org-info field-group-fieldset',
   /* group_org_info|node|about_page|form */       'description' => '',
   /* group_org_info|node|about_page|form */     ),
   /* group_org_info|node|about_page|form */     'formatter' => 'collapsed',
   /* group_org_info|node|about_page|form */   ),
   /* group_org_info|node|about_page|form */ );
  $field_groups['group_org_info|node|about_page|form'] = $field_group;

   /* group_privacy_settings|node|about_page|form */ $field_group = new stdClass();
   /* group_privacy_settings|node|about_page|form */ $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
   /* group_privacy_settings|node|about_page|form */ $field_group->api_version = 1;
   /* group_privacy_settings|node|about_page|form */ $field_group->identifier = 'group_privacy_settings|node|about_page|form';
   /* group_privacy_settings|node|about_page|form */ $field_group->group_name = 'group_privacy_settings';
   /* group_privacy_settings|node|about_page|form */ $field_group->entity_type = 'node';
   /* group_privacy_settings|node|about_page|form */ $field_group->bundle = 'about_page';
   /* group_privacy_settings|node|about_page|form */ $field_group->mode = 'form';
   /* group_privacy_settings|node|about_page|form */ $field_group->parent_name = '';
   /* group_privacy_settings|node|about_page|form */ $field_group->data = array(
   /* group_privacy_settings|node|about_page|form */   'label' => 'Privacy Settings',
   /* group_privacy_settings|node|about_page|form */   'weight' => '3',
   /* group_privacy_settings|node|about_page|form */   'children' => array(
   /* group_privacy_settings|node|about_page|form */     0 => 'og_group_ref',
   /* group_privacy_settings|node|about_page|form */     1 => 'field_gn2_simple_access',
   /* group_privacy_settings|node|about_page|form */     2 => 'group_content_access',
   /* group_privacy_settings|node|about_page|form */   ),
   /* group_privacy_settings|node|about_page|form */   'format_type' => 'fieldset',
   /* group_privacy_settings|node|about_page|form */   'format_settings' => array(
   /* group_privacy_settings|node|about_page|form */     'label' => 'Privacy Settings',
   /* group_privacy_settings|node|about_page|form */     'instance_settings' => array(
   /* group_privacy_settings|node|about_page|form */       'required_fields' => 1,
   /* group_privacy_settings|node|about_page|form */       'id' => '',
   /* group_privacy_settings|node|about_page|form */       'classes' => 'group-privacy-settings field-group-fieldset',
   /* group_privacy_settings|node|about_page|form */       'description' => '',
   /* group_privacy_settings|node|about_page|form */     ),
   /* group_privacy_settings|node|about_page|form */     'formatter' => 'collapsed',
   /* group_privacy_settings|node|about_page|form */   ),
   /* group_privacy_settings|node|about_page|form */ );
  $field_groups['group_privacy_settings|node|about_page|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Basic Information');
  t('Organization Info');
  t('Privacy Settings');

  return $field_groups;
}
