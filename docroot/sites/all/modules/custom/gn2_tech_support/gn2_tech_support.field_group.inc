<?php
/**
 * @file
 * gn2_tech_support.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function gn2_tech_support_field_group_info() {
  $field_groups = array();

   /* group_personal_info|entityform|tech_support|form */ $field_group = new stdClass();
   /* group_personal_info|entityform|tech_support|form */ $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
   /* group_personal_info|entityform|tech_support|form */ $field_group->api_version = 1;
   /* group_personal_info|entityform|tech_support|form */ $field_group->identifier = 'group_personal_info|entityform|tech_support|form';
   /* group_personal_info|entityform|tech_support|form */ $field_group->group_name = 'group_personal_info';
   /* group_personal_info|entityform|tech_support|form */ $field_group->entity_type = 'entityform';
   /* group_personal_info|entityform|tech_support|form */ $field_group->bundle = 'tech_support';
   /* group_personal_info|entityform|tech_support|form */ $field_group->mode = 'form';
   /* group_personal_info|entityform|tech_support|form */ $field_group->parent_name = '';
   /* group_personal_info|entityform|tech_support|form */ $field_group->data = array(
   /* group_personal_info|entityform|tech_support|form */   'label' => 'Personal Info',
   /* group_personal_info|entityform|tech_support|form */   'weight' => '1',
   /* group_personal_info|entityform|tech_support|form */   'children' => array(
   /* group_personal_info|entityform|tech_support|form */     0 => 'field_email',
   /* group_personal_info|entityform|tech_support|form */     1 => 'field_name_first',
   /* group_personal_info|entityform|tech_support|form */     2 => 'field_name_last',
   /* group_personal_info|entityform|tech_support|form */   ),
   /* group_personal_info|entityform|tech_support|form */   'format_type' => 'fieldset',
   /* group_personal_info|entityform|tech_support|form */   'format_settings' => array(
   /* group_personal_info|entityform|tech_support|form */     'formatter' => 'collapsible',
   /* group_personal_info|entityform|tech_support|form */     'instance_settings' => array(
   /* group_personal_info|entityform|tech_support|form */       'description' => '',
   /* group_personal_info|entityform|tech_support|form */       'classes' => 'group-personal-info field-group-fieldset',
   /* group_personal_info|entityform|tech_support|form */       'required_fields' => 1,
   /* group_personal_info|entityform|tech_support|form */     ),
   /* group_personal_info|entityform|tech_support|form */   ),
   /* group_personal_info|entityform|tech_support|form */ );
  $field_groups['group_personal_info|entityform|tech_support|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Personal Info');

  return $field_groups;
}
