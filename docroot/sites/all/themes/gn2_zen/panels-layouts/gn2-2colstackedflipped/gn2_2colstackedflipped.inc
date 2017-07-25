<?php

/**
 * @file
 * Generic Implementation for 70:30 2-col stacked layouts (flipped).
 */

// Plugin definition.
$plugin = array(
  'title' => t('GN2 2-col Stacked Flipped Page'),
  'category' => t('GN2 Page Layouts'),
  'icon' => 'gn2_2colstacked_flipped.png',
  'theme' => 'gn2_2colstackedflipped',
  'css' => '../../css/layout/panels-layouts/gn2_2colstackedflipped.css',
  'regions' => array(
    'top' => t('Top'),
    'sidebar' => t('Sidebar'),
    'main_top' => t('Main Top'),
    'main_bottom' => t('Main Bottom'),
    'footer' => t('Footer'),
  ),
);
