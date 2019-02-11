<?php
/**
 * @file
 * gn2_courses.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function gn2_courses_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function gn2_courses_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function gn2_courses_node_info() {
  $items = array(
    'course' => array(
      'name' => t('Course'),
      'base' => 'node_content',
      'description' => t('A course is a class or series of classes with a pre-defined curriculum.'),
      'has_title' => '1',
      'title_label' => t('Course Title'),
      'help' => '',
    ),
    'course_group' => array(
      'name' => t('Course Group'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Course Group Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
