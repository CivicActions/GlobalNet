<?php

/**
 * @file
 * Three across panels plugin definition.
 */

$plugin = array(
  'title' => t('GN2 4 Col Panel'),
  'category' => t('GN2 Panel Layouts'),
  'icon' => 'gn2-4col.png',
  'theme' => 'gn2-4col',
  'css' => '../../css/layout/panels-layouts/gn2_4col.css',
  'regions' => array(
    'gn2-4col--header' => t('Header'),
    'gn2-4col--col1' => t('col1'),
    'gn2-4col--col2' => t('col2'),
    'gn2-4col--col3' => t('col3'),
    'gn2-4col--col4' => t('col4'),
    'gn2-4col--footer' => t('Footer'),
  ),
);
