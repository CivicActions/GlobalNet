<?php
/**
 * @file
 * gn2_base_config.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function gn2_base_config_taxonomy_default_vocabularies() {
  return array(
    'admin_content' => array(
      'name' => 'Administrative Content',
      'machine_name' => 'admin_content',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'help' => array(
      'name' => 'Help',
      'machine_name' => 'help',
      'description' => 'Help content',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'userpoints' => array(
      'name' => 'Userpoints',
      'machine_name' => 'userpoints',
      'description' => 'Automatically created by the userpoints module',
      'hierarchy' => 1,
      'module' => 'userpoints',
      'weight' => 0,
    ),
  );
}
