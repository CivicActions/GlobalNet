<?php
/**
 * @file
 * Plugin definition.
 */

$plugin = array(
  'title' => t('GN2 Teaser'),
  'icon' => 'gn2-teaser.png',
  'category' => t('GN2 Panel Layouts'),
  'theme' => 'gn2_teaser',
  'regions' => array(
    'column1' => t('First Column'),
    'column2' => t('Second Column'),
    'column3' => t('Third Column'),
  ),
);
