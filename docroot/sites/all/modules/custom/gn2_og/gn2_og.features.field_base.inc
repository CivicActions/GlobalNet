<?php
/**
 * @file
 * gn2_og.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function gn2_og_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_children_groups'.
  $field_bases['field_children_groups'] = array(
  /* field_children_groups */   'active' => 1,
  /* field_children_groups */   'cardinality' => -1,
  /* field_children_groups */   'deleted' => 0,
  /* field_children_groups */   'entity_types' => array(),
  /* field_children_groups */   'field_name' => 'field_children_groups',
  /* field_children_groups */   'indexes' => array(
  /* field_children_groups */     'target_id' => array(
  /* field_children_groups */       0 => 'target_id',
  /* field_children_groups */     ),
  /* field_children_groups */   ),
  /* field_children_groups */   'locked' => 0,
  /* field_children_groups */   'module' => 'entityreference',
  /* field_children_groups */   'settings' => array(
  /* field_children_groups */     'handler' => 'base',
  /* field_children_groups */     'handler_settings' => array(
  /* field_children_groups */       'behaviors' => array(
  /* field_children_groups */         'views-select-list' => array(
  /* field_children_groups */           'status' => 0,
  /* field_children_groups */         ),
  /* field_children_groups */       ),
  /* field_children_groups */       'sort' => array(
  /* field_children_groups */         'type' => 'none',
  /* field_children_groups */       ),
  /* field_children_groups */       'target_bundles' => array(
  /* field_children_groups */         'alumni_group' => 'alumni_group',
  /* field_children_groups */         'coi' => 'coi',
  /* field_children_groups */         'course' => 'course',
  /* field_children_groups */         'course_group' => 'course_group',
  /* field_children_groups */         'event' => 'event',
  /* field_children_groups */         'group' => 'group',
  /* field_children_groups */         'program' => 'program',
  /* field_children_groups */       ),
  /* field_children_groups */     ),
  /* field_children_groups */     'target_type' => 'node',
  /* field_children_groups */   ),
  /* field_children_groups */   'translatable' => 0,
  /* field_children_groups */   'type' => 'entityreference',
  /* field_children_groups */ );

  // Exported field_base: 'field_org_short_title'.
  $field_bases['field_org_short_title'] = array(
  /* field_org_short_title */   'active' => 1,
  /* field_org_short_title */   'cardinality' => 1,
  /* field_org_short_title */   'deleted' => 0,
  /* field_org_short_title */   'entity_types' => array(),
  /* field_org_short_title */   'field_name' => 'field_org_short_title',
  /* field_org_short_title */   'indexes' => array(
  /* field_org_short_title */     'format' => array(
  /* field_org_short_title */       0 => 'format',
  /* field_org_short_title */     ),
  /* field_org_short_title */   ),
  /* field_org_short_title */   'locked' => 0,
  /* field_org_short_title */   'module' => 'text',
  /* field_org_short_title */   'settings' => array(
  /* field_org_short_title */     'max_length' => 20,
  /* field_org_short_title */   ),
  /* field_org_short_title */   'translatable' => 0,
  /* field_org_short_title */   'type' => 'text',
  /* field_org_short_title */ );

  // Exported field_base: 'field_parent_organization'.
  $field_bases['field_parent_organization'] = array(
  /* field_parent_organization */   'active' => 1,
  /* field_parent_organization */   'cardinality' => 1,
  /* field_parent_organization */   'deleted' => 0,
  /* field_parent_organization */   'entity_types' => array(),
  /* field_parent_organization */   'field_name' => 'field_parent_organization',
  /* field_parent_organization */   'indexes' => array(
  /* field_parent_organization */     'target_id' => array(
  /* field_parent_organization */       0 => 'target_id',
  /* field_parent_organization */     ),
  /* field_parent_organization */   ),
  /* field_parent_organization */   'locked' => 0,
  /* field_parent_organization */   'module' => 'entityreference',
  /* field_parent_organization */   'settings' => array(
  /* field_parent_organization */     'handler' => 'base',
  /* field_parent_organization */     'handler_settings' => array(
  /* field_parent_organization */       'behaviors' => array(
  /* field_parent_organization */         'views-select-list' => array(
  /* field_parent_organization */           'status' => 0,
  /* field_parent_organization */         ),
  /* field_parent_organization */       ),
  /* field_parent_organization */       'sort' => array(
  /* field_parent_organization */         'type' => 'none',
  /* field_parent_organization */       ),
  /* field_parent_organization */       'target_bundles' => array(
  /* field_parent_organization */         'organization' => 'organization',
  /* field_parent_organization */       ),
  /* field_parent_organization */     ),
  /* field_parent_organization */     'target_type' => 'node',
  /* field_parent_organization */   ),
  /* field_parent_organization */   'translatable' => 0,
  /* field_parent_organization */   'type' => 'entityreference',
  /* field_parent_organization */ );

  // Exported field_base: 'group_access'.
  $field_bases['group_access'] = array(
  /* group_access */   'active' => 1,
  /* group_access */   'cardinality' => 1,
  /* group_access */   'deleted' => 0,
  /* group_access */   'entity_types' => array(),
  /* group_access */   'field_name' => 'group_access',
  /* group_access */   'indexes' => array(
  /* group_access */     'value' => array(
  /* group_access */       0 => 'value',
  /* group_access */     ),
  /* group_access */   ),
  /* group_access */   'locked' => 0,
  /* group_access */   'module' => 'list',
  /* group_access */   'no_ui' => TRUE,
  /* group_access */   'settings' => array(
  /* group_access */     'allowed_values' => array(
  /* group_access */       0 => 'Public - accessible to all site users',
  /* group_access */       1 => 'Private - accessible only to group members',
  /* group_access */     ),
  /* group_access */     'allowed_values_function' => '',
  /* group_access */   ),
  /* group_access */   'translatable' => 0,
  /* group_access */   'type' => 'list_boolean',
  /* group_access */ );

  // Exported field_base: 'group_content_access'.
  $field_bases['group_content_access'] = array(
  /* group_content_access */   'active' => 1,
  /* group_content_access */   'cardinality' => 1,
  /* group_content_access */   'deleted' => 0,
  /* group_content_access */   'entity_types' => array(),
  /* group_content_access */   'field_name' => 'group_content_access',
  /* group_content_access */   'indexes' => array(
  /* group_content_access */     'value' => array(
  /* group_content_access */       0 => 'value',
  /* group_content_access */     ),
  /* group_content_access */   ),
  /* group_content_access */   'locked' => 0,
  /* group_content_access */   'module' => 'list',
  /* group_content_access */   'no_ui' => TRUE,
  /* group_content_access */   'settings' => array(
  /* group_content_access */     'allowed_values' => array(
  /* group_content_access */       0 => 'Use group defaults',
  /* group_content_access */       1 => 'Public - accessible to all site users',
  /* group_content_access */       2 => 'Private - accessible only to group members',
  /* group_content_access */     ),
  /* group_content_access */     'allowed_values_function' => '',
  /* group_content_access */   ),
  /* group_content_access */   'translatable' => 0,
  /* group_content_access */   'type' => 'list_integer',
  /* group_content_access */ );

  // Exported field_base: 'og_group_ref'.
  $field_bases['og_group_ref'] = array(
  /* og_group_ref */   'active' => 1,
  /* og_group_ref */   'cardinality' => -1,
  /* og_group_ref */   'deleted' => 0,
  /* og_group_ref */   'entity_types' => array(),
  /* og_group_ref */   'field_name' => 'og_group_ref',
  /* og_group_ref */   'indexes' => array(
  /* og_group_ref */     'target_id' => array(
  /* og_group_ref */       0 => 'target_id',
  /* og_group_ref */     ),
  /* og_group_ref */   ),
  /* og_group_ref */   'locked' => 0,
  /* og_group_ref */   'module' => 'entityreference',
  /* og_group_ref */   'settings' => array(
  /* og_group_ref */     'handler' => 'og',
  /* og_group_ref */     'handler_settings' => array(
  /* og_group_ref */       'behaviors' => array(
  /* og_group_ref */         'og_behavior' => array(
  /* og_group_ref */           'status' => TRUE,
  /* og_group_ref */         ),
  /* og_group_ref */         'views-select-list' => array(
  /* og_group_ref */           'status' => 0,
  /* og_group_ref */         ),
  /* og_group_ref */       ),
  /* og_group_ref */       'membership_type' => 'og_membership_type_default',
  /* og_group_ref */       'sort' => array(
  /* og_group_ref */         'direction' => 'ASC',
  /* og_group_ref */         'property' => 'title',
  /* og_group_ref */         'type' => 'property',
  /* og_group_ref */       ),
  /* og_group_ref */       'target_bundles' => array(),
  /* og_group_ref */     ),
  /* og_group_ref */     'handler_submit' => 'Change handler',
  /* og_group_ref */     'target_type' => 'node',
  /* og_group_ref */   ),
  /* og_group_ref */   'target_type' => 'node',
  /* og_group_ref */   'translatable' => 0,
  /* og_group_ref */   'type' => 'entityreference',
  /* og_group_ref */ );

  // Exported field_base: 'og_membership_invitation'.
  $field_bases['og_membership_invitation'] = array(
  /* og_membership_invitation */   'active' => 1,
  /* og_membership_invitation */   'cardinality' => 1,
  /* og_membership_invitation */   'deleted' => 0,
  /* og_membership_invitation */   'entity_types' => array(
  /* og_membership_invitation */     0 => 'og_membership',
  /* og_membership_invitation */   ),
  /* og_membership_invitation */   'field_name' => 'og_membership_invitation',
  /* og_membership_invitation */   'indexes' => array(
  /* og_membership_invitation */     'value' => array(
  /* og_membership_invitation */       0 => 'value',
  /* og_membership_invitation */     ),
  /* og_membership_invitation */   ),
  /* og_membership_invitation */   'locked' => 0,
  /* og_membership_invitation */   'module' => 'list',
  /* og_membership_invitation */   'settings' => array(
  /* og_membership_invitation */     'allowed_values' => array(
  /* og_membership_invitation */       0 => 'Not an invitation',
  /* og_membership_invitation */       1 => 'Invitation',
  /* og_membership_invitation */     ),
  /* og_membership_invitation */     'allowed_values_function' => '',
  /* og_membership_invitation */   ),
  /* og_membership_invitation */   'translatable' => 0,
  /* og_membership_invitation */   'type' => 'list_boolean',
  /* og_membership_invitation */ );

  // Exported field_base: 'og_user_node'.
  $field_bases['og_user_node'] = array(
  /* og_user_node */   'active' => 1,
  /* og_user_node */   'cardinality' => -1,
  /* og_user_node */   'deleted' => 0,
  /* og_user_node */   'entity_types' => array(),
  /* og_user_node */   'field_name' => 'og_user_node',
  /* og_user_node */   'indexes' => array(
  /* og_user_node */     'target_id' => array(
  /* og_user_node */       0 => 'target_id',
  /* og_user_node */     ),
  /* og_user_node */   ),
  /* og_user_node */   'locked' => 0,
  /* og_user_node */   'module' => 'entityreference',
  /* og_user_node */   'settings' => array(
  /* og_user_node */     'handler' => 'og',
  /* og_user_node */     'handler_settings' => array(
  /* og_user_node */       'behaviors' => array(
  /* og_user_node */         'og_behavior' => array(
  /* og_user_node */           'status' => TRUE,
  /* og_user_node */         ),
  /* og_user_node */         'views-select-list' => array(
  /* og_user_node */           'status' => 0,
  /* og_user_node */         ),
  /* og_user_node */       ),
  /* og_user_node */       'membership_type' => 'og_membership_type_default',
  /* og_user_node */       'sort' => array(
  /* og_user_node */         'type' => 'none',
  /* og_user_node */       ),
  /* og_user_node */       'target_bundles' => array(),
  /* og_user_node */     ),
  /* og_user_node */     'handler_submit' => 'Change handler',
  /* og_user_node */     'target_type' => 'node',
  /* og_user_node */   ),
  /* og_user_node */   'translatable' => 0,
  /* og_user_node */   'type' => 'entityreference',
  /* og_user_node */ );

  return $field_bases;
}
