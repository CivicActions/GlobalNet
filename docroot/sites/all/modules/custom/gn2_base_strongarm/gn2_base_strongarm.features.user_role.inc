<?php
/**
 * @file
 * gn2_base_strongarm.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function gn2_base_strongarm_user_default_roles() {
  $roles = array();

  // Exported role: authenticated user.
  $roles['authenticated user'] = array(
  /* authenticated user */   'name' => 'authenticated user',
  /* authenticated user */   'weight' => 2,
  /* authenticated user */ );

  return $roles;
}
