<?php
/**
 * @file
 * gn2_roles_perms.features.og_features_permission.inc
 */

/**
 * Implements hook_og_features_default_permissions().
 */
function gn2_roles_perms_og_features_default_permissions() {
  $permissions = array();

  // Exported og permission: 'node:alumni_group:view all voters'
  $permissions['node:alumni_group:view all voters'] = array(
  /* 'node:alumni_group:view all voters' */   'roles' => array(
  /* 'node:alumni_group:view all voters' */     'group_manager' => 'group_manager',
  /* 'node:alumni_group:view all voters' */     'org_manager' => 'org_manager',
  /* 'node:alumni_group:view all voters' */   ),
  /* 'node:alumni_group:view all voters' */ );

  // Exported og permission: 'node:alumni_group:view own voters'
  $permissions['node:alumni_group:view own voters'] = array(
  /* 'node:alumni_group:view own voters' */   'roles' => array(
  /* 'node:alumni_group:view own voters' */     'group_manager' => 'group_manager',
  /* 'node:alumni_group:view own voters' */   ),
  /* 'node:alumni_group:view own voters' */ );

  return $permissions;
}
