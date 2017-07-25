<?php
/**
 * @file
 * gn2_base_config.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function gn2_base_config_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'delete own comments'.
  $permissions['delete own comments'] = array(
  /* delete own comments */   'name' => 'delete own comments',
  /* delete own comments */   'roles' => array(
  /* delete own comments */     'administrator' => 'administrator',
  /* delete own comments */     'authenticated user' => 'authenticated user',
  /* delete own comments */   ),
  /* delete own comments */   'module' => 'comment_goodness',
  /* delete own comments */ );

  return $permissions;
}
