<?php
/**
 * @file
 * gn2_courses.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function gn2_courses_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['views-8e7db7fdd3b9d17e5eeab51b84a978eb'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => '8e7db7fdd3b9d17e5eeab51b84a978eb',
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

  $export['views-session_course_connect-block'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'session_course_connect-block',
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

  $export['views-session_course_connect-block_1'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'session_course_connect-block_1',
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

  $export['views-session_presenter-block'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'session_presenter-block',
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

  $export['views-sessions_created-block'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'sessions_created-block',
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

  $export['views-sessions_submitted-block'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'sessions_submitted-block',
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
