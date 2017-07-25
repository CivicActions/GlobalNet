<?php

/**
 * @file
 * Two across panels plugin definition.
 */

$plugin = array(
  'title' => t('GN2 2 col v2 Panel'),
  'category' => t('GN2 Panel Layouts'),
  'icon' => 'gn2-2col-v2.png',
  'theme' => 'gn2-2col-v2',
  'css' => '../../css/layout/panels-layouts/gn2_2col_v2.css',
  'regions' => array(
    'gn2-2col-v2--header' => t('Header'),
    'gn2-2col-v2--col1' => t('col1'),
    'gn2-2col-v2--col2' => t('col2'),
    'gn2-2col-v2--footer' => t('Footer'),
  ),
);
