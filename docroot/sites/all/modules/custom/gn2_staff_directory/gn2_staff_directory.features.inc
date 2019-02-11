<?php
/**
 * @file
 * gn2_staff_directory.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function gn2_staff_directory_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "ctools_custom_content" && $api == "ctools_content") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function gn2_staff_directory_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}
