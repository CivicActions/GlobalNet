<?php
/**
 * @file
 * gn2_cac.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function gn2_cac_field_group_info() {
  $field_groups = array();

   /* group_external_accounts|user|user|form */ $field_group = new stdClass();
   /* group_external_accounts|user|user|form */ $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
   /* group_external_accounts|user|user|form */ $field_group->api_version = 1;
   /* group_external_accounts|user|user|form */ $field_group->identifier = 'group_external_accounts|user|user|form';
   /* group_external_accounts|user|user|form */ $field_group->group_name = 'group_external_accounts';
   /* group_external_accounts|user|user|form */ $field_group->entity_type = 'user';
   /* group_external_accounts|user|user|form */ $field_group->bundle = 'user';
   /* group_external_accounts|user|user|form */ $field_group->mode = 'form';
   /* group_external_accounts|user|user|form */ $field_group->parent_name = 'group_settings';
   /* group_external_accounts|user|user|form */ $field_group->data = array(
   /* group_external_accounts|user|user|form */   'label' => 'External Accounts',
   /* group_external_accounts|user|user|form */   'weight' => '13',
   /* group_external_accounts|user|user|form */   'children' => array(
   /* group_external_accounts|user|user|form */     0 => 'pki_authentication_pki_string',
   /* group_external_accounts|user|user|form */   ),
   /* group_external_accounts|user|user|form */   'format_type' => 'fieldset',
   /* group_external_accounts|user|user|form */   'format_settings' => array(
   /* group_external_accounts|user|user|form */     'label' => 'External Accounts',
   /* group_external_accounts|user|user|form */     'instance_settings' => array(
   /* group_external_accounts|user|user|form */       'required_fields' => 1,
   /* group_external_accounts|user|user|form */       'id' => '',
   /* group_external_accounts|user|user|form */       'classes' => 'group-external-accounts field-group-fieldset',
   /* group_external_accounts|user|user|form */       'description' => '',
   /* group_external_accounts|user|user|form */     ),
   /* group_external_accounts|user|user|form */     'formatter' => 'collapsed',
   /* group_external_accounts|user|user|form */   ),
   /* group_external_accounts|user|user|form */ );
  $field_groups['group_external_accounts|user|user|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('External Accounts');

  return $field_groups;
}
