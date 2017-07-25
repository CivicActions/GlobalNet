<?php
/**
 * @file
 * gn2_roles_perms.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function gn2_roles_perms_user_default_roles() {
  $roles = array();

  // Exported role: administrator.
  $roles['administrator'] = array(
  /* administrator */   'name' => 'administrator',
  /* administrator */   'weight' => 8,
  /* administrator */ );

  // Exported role: file admin.
  $roles['file admin'] = array(
  /* file admin */   'name' => 'file admin',
  /* file admin */   'weight' => 10,
  /* file admin */ );

  // Exported role: translator.
  $roles['translator'] = array(
  /* translator */   'name' => 'translator',
  /* translator */   'weight' => 9,
  /* translator */ );

  return $roles;
}
