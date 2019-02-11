<?php
/**
 * @file
 * gn2_library.features.og_features_permission.inc
 */

/**
 * Implements hook_og_features_default_permissions().
 */
function gn2_library_og_features_default_permissions() {
  $permissions = array();

  // Exported og permission: 'node:group:create resource_item content'
  $permissions['node:group:create resource_item content'] = array(
  /* 'node:group:create resource_item content' */   'roles' => array(
  /* 'node:group:create resource_item content' */     'group_manager' => 'group_manager',
  /* 'node:group:create resource_item content' */   ),
  /* 'node:group:create resource_item content' */ );

  // Exported og permission: 'node:group:delete any resource_item content'
  $permissions['node:group:delete any resource_item content'] = array(
  /* 'node:group:delete any resource_item content' */   'roles' => array(),
  /* 'node:group:delete any resource_item content' */ );

  // Exported og permission: 'node:group:delete own resource_item content'
  $permissions['node:group:delete own resource_item content'] = array(
  /* 'node:group:delete own resource_item content' */   'roles' => array(),
  /* 'node:group:delete own resource_item content' */ );

  // Exported og permission: 'node:group:update any resource_item content'
  $permissions['node:group:update any resource_item content'] = array(
  /* 'node:group:update any resource_item content' */   'roles' => array(
  /* 'node:group:update any resource_item content' */     'group_manager' => 'group_manager',
  /* 'node:group:update any resource_item content' */   ),
  /* 'node:group:update any resource_item content' */ );

  // Exported og permission: 'node:group:update own resource_item content'
  $permissions['node:group:update own resource_item content'] = array(
  /* 'node:group:update own resource_item content' */   'roles' => array(
  /* 'node:group:update own resource_item content' */     'group_manager' => 'group_manager',
  /* 'node:group:update own resource_item content' */   ),
  /* 'node:group:update own resource_item content' */ );

  // Exported og permission: 'node:program:create resource_item content'
  $permissions['node:program:create resource_item content'] = array(
  /* 'node:program:create resource_item content' */   'roles' => array(
  /* 'node:program:create resource_item content' */     'group_manager' => 'group_manager',
  /* 'node:program:create resource_item content' */   ),
  /* 'node:program:create resource_item content' */ );

  // Exported og permission: 'node:program:delete any resource_item content'
  $permissions['node:program:delete any resource_item content'] = array(
  /* 'node:program:delete any resource_item content' */   'roles' => array(),
  /* 'node:program:delete any resource_item content' */ );

  // Exported og permission: 'node:program:delete own resource_item content'
  $permissions['node:program:delete own resource_item content'] = array(
  /* 'node:program:delete own resource_item content' */   'roles' => array(),
  /* 'node:program:delete own resource_item content' */ );

  // Exported og permission: 'node:program:update any resource_item content'
  $permissions['node:program:update any resource_item content'] = array(
  /* 'node:program:update any resource_item content' */   'roles' => array(
  /* 'node:program:update any resource_item content' */     'group_manager' => 'group_manager',
  /* 'node:program:update any resource_item content' */   ),
  /* 'node:program:update any resource_item content' */ );

  // Exported og permission: 'node:program:update own resource_item content'
  $permissions['node:program:update own resource_item content'] = array(
  /* 'node:program:update own resource_item content' */   'roles' => array(
  /* 'node:program:update own resource_item content' */     'group_manager' => 'group_manager',
  /* 'node:program:update own resource_item content' */   ),
  /* 'node:program:update own resource_item content' */ );

  return $permissions;
}
