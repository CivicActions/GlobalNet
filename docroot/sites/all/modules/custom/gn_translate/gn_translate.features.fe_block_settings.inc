<?php
/**
 * @file
 * gn_translate.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function gn_translate_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['block-gtranslate'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'machine_name' => 'gtranslate',
    'module' => 'block',
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
