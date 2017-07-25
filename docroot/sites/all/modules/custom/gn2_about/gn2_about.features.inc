<?php
/**
 * @file
 * gn2_about.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function gn2_about_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "panelizer" && $api == "panelizer") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function gn2_about_node_info() {
  $items = array(
    'about_page' => array(
      'name' => t('About Page'),
      'base' => 'node_content',
      'description' => t('About page for an organization'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
