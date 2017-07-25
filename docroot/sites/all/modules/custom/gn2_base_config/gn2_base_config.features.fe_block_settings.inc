<?php
/**
 * @file
 * gn2_base_config.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function gn2_base_config_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['block-use_registration'] = array(
    'cache' => -1,
    'css_class' => 'header__anon_links',
    'custom' => 0,
    'machine_name' => 'use_registration',
    'module' => 'block',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(
      'anonymous user' => 1,
    ),
    'themes' => array(
      'gn2_zen' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'gn2_zen',
        'weight' => -39,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['gn2_base_config-site-logo'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'site-logo',
    'module' => 'gn2_base_config',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'gn2_zen' => array(
        'region' => 'header',
        'status' => 1,
        'theme' => 'gn2_zen',
        'weight' => -31,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['gn2_notifications-notification_alerts'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'notification_alerts',
    'module' => 'gn2_notifications',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'gn2_zen' => array(
        'region' => 'header_user',
        'status' => 1,
        'theme' => 'gn2_zen',
        'weight' => -77,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['gn2_privatemsg-inbox-menu'] = array(
    'cache' => -1,
    'css_class' => 'inbox-menu',
    'custom' => 0,
    'delta' => 'inbox-menu',
    'module' => 'gn2_privatemsg',
    'node_types' => array(),
    'pages' => 'messages/view/*
messages/new',
    'roles' => array(),
    'themes' => array(
      'gn2_zen' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'gn2_zen',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['gn2_privatemsg-privatemsg-menu'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'privatemsg-menu',
    'module' => 'gn2_privatemsg',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'gn2_zen' => array(
        'region' => 'header_user',
        'status' => 1,
        'theme' => 'gn2_zen',
        'weight' => -78,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['gn2_privatemsg-privatemsg-new'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'privatemsg-new',
    'module' => 'gn2_privatemsg',
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

  $export['gn2_reg-gn2_reg_header'] = array(
    'cache' => 4,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'gn2_reg_header',
    'module' => 'gn2_reg',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'gn2_zen' => array(
        'region' => 'header_user',
        'status' => 1,
        'theme' => 'gn2_zen',
        'weight' => -75,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['gn2_search-search_default'] = array(
    'cache' => 1,
    'css_class' => 'custom-search-default-block',
    'custom' => 0,
    'delta' => 'search_default',
    'module' => 'gn2_search',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'gn2_zen' => array(
        'region' => 'navigation',
        'status' => 1,
        'theme' => 'gn2_zen',
        'weight' => -46,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['gn2_themeparts_swap-organization_nav'] = array(
    'cache' => 4,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'organization_nav',
    'module' => 'gn2_themeparts_swap',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'gn2_zen' => array(
        'region' => 'navigation',
        'status' => 1,
        'theme' => 'gn2_zen',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['system-main'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'main',
    'module' => 'system',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'gn2_zen' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'gn2_zen',
        'weight' => -32,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['user-login'] = array(
    'cache' => -1,
    'css_class' => 'header_utilities',
    'custom' => 0,
    'delta' => 'login',
    'module' => 'user',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'gn2_zen' => array(
        'region' => 'header_user',
        'status' => 1,
        'theme' => 'gn2_zen',
        'weight' => -79,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['views-b75ae021aa5f9582afab7dff8ea140a5'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'b75ae021aa5f9582afab7dff8ea140a5',
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

  $export['views-user_information-block'] = array(
    'cache' => -1,
    'css_class' => 'header_utilities',
    'custom' => 0,
    'delta' => 'user_information-block',
    'module' => 'views',
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
        'weight' => -76,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  return $export;
}
