<?php
/**
 * @file
 * gn2_cac.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function gn2_cac_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
