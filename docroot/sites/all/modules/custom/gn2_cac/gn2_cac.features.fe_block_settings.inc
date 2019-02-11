<?php
/**
 * @file
 * gn2_cac.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function gn2_cac_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['pki_authentication-user_block'] = array(
    'cache' => 1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'user_block',
    'module' => 'pki_authentication',
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
