<?php
/**
 * @file
 * gn2_support_desk.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function gn2_support_desk_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer track field changes'.
  $permissions['administer track field changes'] = array(
  /* administer track field changes */   'name' => 'administer track field changes',
  /* administer track field changes */   'roles' => array(
  /* administer track field changes */     'administrator' => 'administrator',
  /* administer track field changes */   ),
  /* administer track field changes */   'module' => 'track_field_changes',
  /* administer track field changes */ );

  // Exported permission: 'create support content'.
  $permissions['create support content'] = array(
  /* create support content */   'name' => 'create support content',
  /* create support content */   'roles' => array(
  /* create support content */     'administrator' => 'administrator',
  /* create support content */     'anonymous user' => 'anonymous user',
  /* create support content */     'authenticated user' => 'authenticated user',
  /* create support content */   ),
  /* create support content */   'module' => 'node',
  /* create support content */ );

  // Exported permission: 'delete any support content'.
  $permissions['delete any support content'] = array(
  /* delete any support content */   'name' => 'delete any support content',
  /* delete any support content */   'roles' => array(
  /* delete any support content */     'administrator' => 'administrator',
  /* delete any support content */   ),
  /* delete any support content */   'module' => 'node',
  /* delete any support content */ );

  // Exported permission: 'delete own support content'.
  $permissions['delete own support content'] = array(
  /* delete own support content */   'name' => 'delete own support content',
  /* delete own support content */   'roles' => array(
  /* delete own support content */     'administrator' => 'administrator',
  /* delete own support content */   ),
  /* delete own support content */   'module' => 'node',
  /* delete own support content */ );

  // Exported permission: 'edit any support content'.
  $permissions['edit any support content'] = array(
  /* edit any support content */   'name' => 'edit any support content',
  /* edit any support content */   'roles' => array(
  /* edit any support content */     'administrator' => 'administrator',
  /* edit any support content */   ),
  /* edit any support content */   'module' => 'node',
  /* edit any support content */ );

  // Exported permission: 'edit own support content'.
  $permissions['edit own support content'] = array(
  /* edit own support content */   'name' => 'edit own support content',
  /* edit own support content */   'roles' => array(
  /* edit own support content */     'administrator' => 'administrator',
  /* edit own support content */   ),
  /* edit own support content */   'module' => 'node',
  /* edit own support content */ );

  return $permissions;
}
