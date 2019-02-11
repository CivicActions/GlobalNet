<?php
/**
 * @file
 * GN2 Manager Access views include.
 */

/**
 * Implements hook_views_plugins().
 */
function gn2_manager_access_views_plugins() {
  // Access for managers of any Org.
  return array(
    'access' => array(
      'gn2_manager_access' => array(
        'title' => t('Organization Role'),
        'help' => t('Checks if the user is manager for the given Organization.'),
        'handler' => 'gn2_manager_access_plugin_access',
        'uses options' => TRUE,
        'path' => drupal_get_path('module', 'gn2_manager_access'),
      ),
    ),
  );
}