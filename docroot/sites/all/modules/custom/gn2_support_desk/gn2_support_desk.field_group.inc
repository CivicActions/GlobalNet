<?php
/**
 * @file
 * gn2_support_desk.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function gn2_support_desk_field_group_info() {
  $field_groups = array();

   /* group_admin|node|support|form */ $field_group = new stdClass();
   /* group_admin|node|support|form */ $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
   /* group_admin|node|support|form */ $field_group->api_version = 1;
   /* group_admin|node|support|form */ $field_group->identifier = 'group_admin|node|support|form';
   /* group_admin|node|support|form */ $field_group->group_name = 'group_admin';
   /* group_admin|node|support|form */ $field_group->entity_type = 'node';
   /* group_admin|node|support|form */ $field_group->bundle = 'support';
   /* group_admin|node|support|form */ $field_group->mode = 'form';
   /* group_admin|node|support|form */ $field_group->parent_name = '';
   /* group_admin|node|support|form */ $field_group->data = array(
   /* group_admin|node|support|form */   'label' => 'Admin Use Only',
   /* group_admin|node|support|form */   'weight' => '9',
   /* group_admin|node|support|form */   'children' => array(
   /* group_admin|node|support|form */     0 => 'field_admin_note',
   /* group_admin|node|support|form */     1 => 'field_parent_organization',
   /* group_admin|node|support|form */     2 => 'field_support_owner',
   /* group_admin|node|support|form */     3 => 'field_support_priority',
   /* group_admin|node|support|form */     4 => 'field_support_resolution',
   /* group_admin|node|support|form */     5 => 'field_support_status',
   /* group_admin|node|support|form */     6 => 'field_json_capture',
   /* group_admin|node|support|form */   ),
   /* group_admin|node|support|form */   'format_type' => 'fieldset',
   /* group_admin|node|support|form */   'format_settings' => array(
   /* group_admin|node|support|form */     'formatter' => 'collapsible',
   /* group_admin|node|support|form */     'instance_settings' => array(
   /* group_admin|node|support|form */       'description' => '',
   /* group_admin|node|support|form */       'classes' => 'group-admin field-group-fieldset',
   /* group_admin|node|support|form */       'required_fields' => 1,
   /* group_admin|node|support|form */       'id' => '',
   /* group_admin|node|support|form */     ),
   /* group_admin|node|support|form */   ),
   /* group_admin|node|support|form */ );
  $field_groups['group_admin|node|support|form'] = $field_group;

   /* group_personal_info|node|support|form */ $field_group = new stdClass();
   /* group_personal_info|node|support|form */ $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
   /* group_personal_info|node|support|form */ $field_group->api_version = 1;
   /* group_personal_info|node|support|form */ $field_group->identifier = 'group_personal_info|node|support|form';
   /* group_personal_info|node|support|form */ $field_group->group_name = 'group_personal_info';
   /* group_personal_info|node|support|form */ $field_group->entity_type = 'node';
   /* group_personal_info|node|support|form */ $field_group->bundle = 'support';
   /* group_personal_info|node|support|form */ $field_group->mode = 'form';
   /* group_personal_info|node|support|form */ $field_group->parent_name = '';
   /* group_personal_info|node|support|form */ $field_group->data = array(
   /* group_personal_info|node|support|form */   'label' => 'Personal Info',
   /* group_personal_info|node|support|form */   'weight' => '1',
   /* group_personal_info|node|support|form */   'children' => array(
   /* group_personal_info|node|support|form */     0 => 'field_email_address',
   /* group_personal_info|node|support|form */     1 => 'field_name_first',
   /* group_personal_info|node|support|form */     2 => 'field_name_last',
   /* group_personal_info|node|support|form */     3 => 'field_telephone_number',
   /* group_personal_info|node|support|form */   ),
   /* group_personal_info|node|support|form */   'format_type' => 'fieldset',
   /* group_personal_info|node|support|form */   'format_settings' => array(
   /* group_personal_info|node|support|form */     'label' => 'Personal Info',
   /* group_personal_info|node|support|form */     'instance_settings' => array(
   /* group_personal_info|node|support|form */       'required_fields' => 1,
   /* group_personal_info|node|support|form */       'id' => '',
   /* group_personal_info|node|support|form */       'classes' => 'group-personal-info field-group-fieldset',
   /* group_personal_info|node|support|form */       'description' => '',
   /* group_personal_info|node|support|form */     ),
   /* group_personal_info|node|support|form */     'formatter' => 'collapsible',
   /* group_personal_info|node|support|form */   ),
   /* group_personal_info|node|support|form */ );
  $field_groups['group_personal_info|node|support|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Admin Use Only');
  t('Personal Info');

  return $field_groups;
}
