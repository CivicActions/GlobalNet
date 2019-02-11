<?php
/**
 * @file
 * gn2_support_desk.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function gn2_support_desk_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
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
function gn2_support_desk_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function gn2_support_desk_node_info() {
  $items = array(
    'support' => array(
      'name' => t('Help Desk Ticket'),
      'base' => 'node_content',
      'description' => t('Help desk.'),
      'has_title' => '1',
      'title_label' => t('Support Ticket Title'),
      'help' => t('You should be logged in to GlobalNET before submitting this form if possible. Otherwise, you\'ll need to manually enter your contact information so that we can contact you.'),
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
