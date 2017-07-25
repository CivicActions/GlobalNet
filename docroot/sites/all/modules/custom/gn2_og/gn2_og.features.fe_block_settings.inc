<?php
/**
 * @file
 * gn2_og.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function gn2_og_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['gn2_file_download-associated_media'] = array(
    'cache' => 1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'associated_media',
    'module' => 'gn2_file_download',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'gn2_zen' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'gn2_zen',
        'weight' => -31,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['gn2_group_admin-gn2_group_admin_menu'] = array(
    'cache' => 1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'gn2_group_admin_menu',
    'module' => 'gn2_group_admin',
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

  $export['og_menu-og_single_menu_block'] = array(
    'cache' => -1,
    'css_class' => 'org__menu--main',
    'custom' => 0,
    'delta' => 'og_single_menu_block',
    'module' => 'og_menu',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'gn2_zen' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'gn2_zen',
        'weight' => -27,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['things_recently_viewed-things_recently_viewed_header'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'things_recently_viewed_header',
    'module' => 'things_recently_viewed',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(
      'authenticated user' => 2,
    ),
    'themes' => array(
      'gn2_zen' => array(
        'region' => 'header_user',
        'status' => 1,
        'theme' => 'gn2_zen',
        'weight' => -74,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-2bdd6ef6d47876d7a3ee884f661208d9'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => '2bdd6ef6d47876d7a3ee884f661208d9',
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

  $export['views-og_user_groups-block_1'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'og_user_groups-block_1',
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
