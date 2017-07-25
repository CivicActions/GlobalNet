<?php

/**
 * @file
 * Generic Implementation for 70:30 2-col stacked layouts.
 */

// Plugin definition.
$plugin = array(
  'title' => t('GN2 2-col Stacked Page'),
  'category' => t('GN2 Page Layouts'),
  'icon' => 'gn2_2colstacked_page.png',
  'theme' => 'gn2_2colstacked_page',
  'css' => '../../css/layout/panels-layouts/gn2_2colstacked_page.css',
  'regions' => array(
    'top'       => t('Top'),
    'sidebar'       => t('Sidebar'),
    'main_top'  => t('Main Top'),
    'main_bottom'  => t('Main bottom'),
    'footer'  => t('Footer'),
  ),
);
