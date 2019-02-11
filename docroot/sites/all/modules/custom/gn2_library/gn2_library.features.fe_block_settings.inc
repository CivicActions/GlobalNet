<?php
/**
 * @file
 * gn2_library.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function gn2_library_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  return $export;
}
