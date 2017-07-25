<?php
/**
 * @file
 * Admin Dashboard view include.
 */

/**
 * Implements hook_views_plugins().
 */
function gn2_admin_dashboard_views_plugins() {
  $plugins = array(
    'access' => array(
      'gn2_admin_dashboard_manager_access' => array(
        'title' => t('Manager Dashboard Accesss'),
        'help' => t('GN2 Admin Dashboard custom access plugin'),
        'handler' => 'gn2_admin_dashboard_manager_access',
        'path' => drupal_get_path('module', 'gn2_admin_dashboard'),
      ),
    ),
  );

  return $plugins;
}
