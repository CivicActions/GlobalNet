<?php
/**
 * @file
 * gn2_base_strongarm.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function gn2_base_strongarm_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "elysia_cron" && $api == "default_elysia_cron_rules") {
    return array("version" => "1");
  }
  if ($module == "file_entity" && $api == "file_default_displays") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_password_policy_features_default_policy().
 */
function gn2_base_strongarm_password_policy_features_default_policy() {
  return array(
    'GlobalNET password policy' => array(
      'name' => 'GlobalNET password policy',
      'description' => 'GlobalNET password policy',
      'enabled' => 1,
      'policy' => array(
        'digit' => 1,
        'history' => 8,
        'length' => 8,
        'punctuation' => 1,
        'uppercase' => 1,
      ),
      'created' => 1432243170,
      'expiration' => 90,
      'warning' => '14,5,1',
      'weight' => 0,
      'roles' => array(
        'authenticated user' => 'authenticated user',
        'administrator' => 'administrator',
      ),
    ),
  );
}
