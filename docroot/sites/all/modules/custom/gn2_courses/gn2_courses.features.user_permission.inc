<?php
/**
 * @file
 * gn2_courses.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function gn2_courses_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access PDF version'.
  $permissions['access PDF version'] = array(
  /* access PDF version */   'name' => 'access PDF version',
  /* access PDF version */   'roles' => array(
  /* access PDF version */     'administrator' => 'administrator',
  /* access PDF version */     'authenticated user' => 'authenticated user',
  /* access PDF version */   ),
  /* access PDF version */   'module' => 'print_pdf',
  /* access PDF version */ );

  // Exported permission: 'use text format sessions_wysiwyg'.
  $permissions['use text format sessions_wysiwyg'] = array(
  /* use text format sessions_wysiwyg */   'name' => 'use text format sessions_wysiwyg',
  /* use text format sessions_wysiwyg */   'roles' => array(
  /* use text format sessions_wysiwyg */     'administrator' => 'administrator',
  /* use text format sessions_wysiwyg */     'authenticated user' => 'authenticated user',
  /* use text format sessions_wysiwyg */   ),
  /* use text format sessions_wysiwyg */   'module' => 'filter',
  /* use text format sessions_wysiwyg */ );

  return $permissions;
}
