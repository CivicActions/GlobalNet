<?php
/**
 * @file
 * gn2_reports.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function gn2_reports_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['panels_mini-metrics'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'metrics',
    'module' => 'panels_mini',
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
    'visibility' => 1,
  );

  return $export;
}
