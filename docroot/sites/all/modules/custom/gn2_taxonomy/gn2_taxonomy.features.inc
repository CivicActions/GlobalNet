<?php
/**
 * @file
 * gn2_taxonomy.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function gn2_taxonomy_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function gn2_taxonomy_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}
