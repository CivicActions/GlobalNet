<?php
/**
 * @file
 * gn2_roles_perms.features.og_features_role.inc
 */

/**
 * Implements hook_og_features_default_roles().
 */
function gn2_roles_perms_og_features_default_roles() {
  $roles = array();

  // Exported OG Role: 'node:alumni_group:org_manager'.
  $roles['node:alumni_group:org_manager'] = array(
  /* node:alumni_group:org_manager */   'gid' => 0,
  /* node:alumni_group:org_manager */   'group_type' => 'node',
  /* node:alumni_group:org_manager */   'group_bundle' => 'alumni_group',
  /* node:alumni_group:org_manager */   'name' => 'org_manager',
  /* node:alumni_group:org_manager */ );

  return $roles;
}
