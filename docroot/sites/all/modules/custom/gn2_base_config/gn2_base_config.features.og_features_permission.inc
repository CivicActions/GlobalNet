<?php
/**
 * @file
 * gn2_base_config.features.og_features_permission.inc
 */

/**
 * Implements hook_og_features_default_permissions().
 */
function gn2_base_config_og_features_default_permissions() {
  $permissions = array();

  // Exported og permission: 'node:alumni_group:invite any user'
  $permissions['node:alumni_group:invite any user'] = array(
  /* 'node:alumni_group:invite any user' */   'roles' => array(
  /* 'node:alumni_group:invite any user' */     'group_manager' => 'group_manager',
  /* 'node:alumni_group:invite any user' */   ),
  /* 'node:alumni_group:invite any user' */ );

  // Exported og permission: 'node:coi:invite any user'
  $permissions['node:coi:invite any user'] = array(
  /* 'node:coi:invite any user' */   'roles' => array(
  /* 'node:coi:invite any user' */     'group_manager' => 'group_manager',
  /* 'node:coi:invite any user' */   ),
  /* 'node:coi:invite any user' */ );

  // Exported og permission: 'node:course:invite any user'
  $permissions['node:course:invite any user'] = array(
  /* 'node:course:invite any user' */   'roles' => array(
  /* 'node:course:invite any user' */     'group_manager' => 'group_manager',
  /* 'node:course:invite any user' */   ),
  /* 'node:course:invite any user' */ );

  // Exported og permission: 'node:event:invite any user'
  $permissions['node:event:invite any user'] = array(
  /* 'node:event:invite any user' */   'roles' => array(
  /* 'node:event:invite any user' */     'group_manager' => 'group_manager',
  /* 'node:event:invite any user' */   ),
  /* 'node:event:invite any user' */ );

  // Exported og permission: 'node:group:invite any user'
  $permissions['node:group:invite any user'] = array(
  /* 'node:group:invite any user' */   'roles' => array(
  /* 'node:group:invite any user' */     'group_manager' => 'group_manager',
  /* 'node:group:invite any user' */   ),
  /* 'node:group:invite any user' */ );

  // Exported og permission: 'node:program:invite any user'
  $permissions['node:program:invite any user'] = array(
  /* 'node:program:invite any user' */   'roles' => array(
  /* 'node:program:invite any user' */     'group_manager' => 'group_manager',
  /* 'node:program:invite any user' */   ),
  /* 'node:program:invite any user' */ );

  return $permissions;
}
