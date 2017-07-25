<?php

/**
 * @file
 * Generic Implementation for 1-col layout.
 */

// Plugin definition.
$plugin = array(
  'title' => t('GN2 1 col'),
  'category' => t('GN2 Panel Layouts'),
  'icon' => 'gn2-1col.png',
  'theme' => 'gn2_1col',
  'regions' => array(
    'contentmain' => t('Content'),
  ),
);
