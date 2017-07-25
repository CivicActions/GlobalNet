<?php

/**
 * @file
 * Three across panels plugin definition.
 */

$plugin = array(
  'title' => t('GN2 3 Col Panel'),
  'category' => t('GN2 Panel Layouts'),
  'icon' => 'gn2-3col.png',
  'theme' => 'gn2-3col',
  'css' => '../../css/layout/panels-layouts/gn2_3col.css',
  'regions' => array(
    'gn2-3col--header' => t('Header'),
    'gn2-3col--col1' => t('col1'),
    'gn2-3col--col2' => t('col2'),
    'gn2-3col--col3' => t('col3'),
    'gn2-3col--footer' => t('Footer'),
  ),
);
