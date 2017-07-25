<?php
/**
 * @file
 * gn2_base_config.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function gn2_base_config_user_default_roles() {
  $roles = array();

  // Exported role: administrator.
  $roles['administrator'] = array(
  /* administrator */   'name' => 'administrator',
  /* administrator */   'weight' => 8,
  /* administrator */ );

  return $roles;
}
