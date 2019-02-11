<?php
/**
 * @file
 * gn2_notifications.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function gn2_notifications_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['views-gn2_notifications-block'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'gn2_notifications-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'gn2_zen' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'gn2_zen',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  return $export;
}
