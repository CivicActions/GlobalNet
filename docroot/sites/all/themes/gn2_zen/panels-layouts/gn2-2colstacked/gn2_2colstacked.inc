<?php

/**
 * @file
 * Generic Implementation for 70:30 2-col stacked layouts.
 */

// Plugin definition.
$plugin = array(
  'title' => t('GN2 2-col Stacked Panel'),
  'category' => t('GN2 Panel Layouts'),
  'icon' => 'gn2_2colstacked.png',
  'theme' => 'gn2_2colstacked',
  'css' => '../../css/layout/panels-layouts/gn2_2colstacked.css',
  'regions' => array(
    'top'       => t('Top'),
    'sidebar'       => t('Sidebar'),
    'main_top'  => t('Main Top'),
    'main_bottom'  => t('Main bottom'),
    'footer'  => t('Footer'),
  ),
);
