<?php
/**
 * @file
 * gn2_og.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function gn2_og_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'execute og_membership_delete_action'.
  $permissions['execute og_membership_delete_action'] = array(
  /* execute og_membership_delete_action */   'name' => 'execute og_membership_delete_action',
  /* execute og_membership_delete_action */   'roles' => array(
  /* execute og_membership_delete_action */     'administrator' => 'administrator',
  /* execute og_membership_delete_action */   ),
  /* execute og_membership_delete_action */   'module' => 'actions_permissions',
  /* execute og_membership_delete_action */ );

  // Exported permission: 'execute og_set_state_action'.
  $permissions['execute og_set_state_action'] = array(
  /* execute og_set_state_action */   'name' => 'execute og_set_state_action',
  /* execute og_set_state_action */   'roles' => array(
  /* execute og_set_state_action */     'administrator' => 'administrator',
  /* execute og_set_state_action */   ),
  /* execute og_set_state_action */   'module' => 'actions_permissions',
  /* execute og_set_state_action */ );

  // Exported permission: 'execute og_user_roles_action'.
  $permissions['execute og_user_roles_action'] = array(
  /* execute og_user_roles_action */   'name' => 'execute og_user_roles_action',
  /* execute og_user_roles_action */   'roles' => array(
  /* execute og_user_roles_action */     'administrator' => 'administrator',
  /* execute og_user_roles_action */   ),
  /* execute og_user_roles_action */   'module' => 'actions_permissions',
  /* execute og_user_roles_action */ );

  return $permissions;
}
