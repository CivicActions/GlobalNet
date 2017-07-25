<?php
/**
 * @file
 * gn2_sms_gateway.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function gn2_sms_gateway_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
