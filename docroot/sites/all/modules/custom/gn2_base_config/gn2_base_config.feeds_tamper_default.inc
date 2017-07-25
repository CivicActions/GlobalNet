<?php
/**
 * @file
 * gn2_base_config.feeds_tamper_default.inc
 */

/**
 * Implements hook_feeds_tamper_default().
 */
function gn2_base_config_feeds_tamper_default() {
  $export = array();

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'import_users-groups-explode';
  $feeds_tamper->importer = 'import_users';
  $feeds_tamper->source = 'groups';
  $feeds_tamper->plugin_id = 'explode';
  $feeds_tamper->settings = array(
    'separator' => '|',
    'limit' => '',
    'real_separator' => '|',
  );
  $feeds_tamper->weight = 2;
  $feeds_tamper->description = 'Explode';
  $export['import_users-groups-explode'] = $feeds_tamper;

  return $export;
}
