<?php

/**
 * @file
 * Three across panels plugin definition.
 */

$plugin = array(
  'title' => t('GN2 Footer Panel'),
  'category' => t('GN2 Panel Layouts'),
  'icon' => 'gn2-footer.png',
  'theme' => 'gn2-footer',
  'css' => '../../css/layout/panels-layouts/gn2_footer.css',
  'regions' => array(
    'gn2-footer--col1--info' => t('col1 info'),
    'gn2-footer--col1--nav' => t('col1 nav'),
    'gn2-footer--col2--info' => t('col2 info'),
    'gn2-footer--col2--nav--left' => t('col2 nav left'),
    'gn2-footer--col2--nav--right' => t('col2 nav right'),
    'gn2-footer--col3--info' => t('col3 info'),
    'gn2-footer--col3--nav' => t('col3 nav'),
  ),
);
