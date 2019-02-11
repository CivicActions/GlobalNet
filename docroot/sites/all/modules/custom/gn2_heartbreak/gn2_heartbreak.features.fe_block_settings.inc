<?php
/**
 * @file
 * gn2_heartbreak.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function gn2_heartbreak_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['gn2_file_download-gallery_media'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'gallery_media',
    'module' => 'gn2_file_download',
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

  $export['panels_mini-session_entityform_results'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'session_entityform_results',
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
    'visibility' => 0,
  );

  $export['views-node_comments-block'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'node_comments-block',
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
