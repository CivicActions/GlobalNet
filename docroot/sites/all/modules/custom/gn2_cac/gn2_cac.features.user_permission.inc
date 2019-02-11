<?php
/**
 * @file
 * gn2_cac.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function gn2_cac_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer pki'.
  $permissions['administer pki'] = array(
  /* administer pki */   'name' => 'administer pki',
  /* administer pki */   'roles' => array(
  /* administer pki */     'administrator' => 'administrator',
  /* administer pki */   ),
  /* administer pki */   'module' => 'pki_authentication',
  /* administer pki */ );

  return $permissions;
}
