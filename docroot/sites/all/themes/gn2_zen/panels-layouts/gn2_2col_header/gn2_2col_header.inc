<?php
/**
 * @file
 * Plugin definition.
 */

$plugin = array(
  'title' => t('GN2 2 col w/header'),
  'icon' => 'gn2-2col-header.png',
  'category' => t('GN2 Panel Layouts'),
  'theme' => 'gn2_2col_header',
  'regions' => array(
    'header' => t('Header'),
    'sidebar' => t('Content Sidebar'),
    'contentmain' => t('Content'),
  ),
);
