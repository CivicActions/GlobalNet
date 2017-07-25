<?php
/**
 * @file
 * gn2_courses.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function gn2_courses_strongarm() {
  $export = array();

  /* i18n_node_extended_course_group */  /* i18n_node_extended_course_group */ $strongarm = new stdClass();
  /* i18n_node_extended_course_group */  /* i18n_node_extended_course_group */ $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  /* i18n_node_extended_course_group */  /* i18n_node_extended_course_group */ $strongarm->api_version = 1;
  /* i18n_node_extended_course_group */  /* i18n_node_extended_course_group */ $strongarm->name = 'i18n_node_extended_course_group';
  /* i18n_node_extended_course_group */  /* i18n_node_extended_course_group */ $strongarm->value = '1';
  $export['i18n_node_extended_course_group'] = $strongarm;

  /* i18n_node_options_course_group */  /* i18n_node_options_course_group */ $strongarm = new stdClass();
  /* i18n_node_options_course_group */  /* i18n_node_options_course_group */ $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  /* i18n_node_options_course_group */  /* i18n_node_options_course_group */ $strongarm->api_version = 1;
  /* i18n_node_options_course_group */  /* i18n_node_options_course_group */ $strongarm->name = 'i18n_node_options_course_group';
  /* i18n_node_options_course_group */  /* i18n_node_options_course_group */ $strongarm->value = array();
  $export['i18n_node_options_course_group'] = $strongarm;

  /* i18n_sync_node_type_course_group */  /* i18n_sync_node_type_course_group */ $strongarm = new stdClass();
  /* i18n_sync_node_type_course_group */  /* i18n_sync_node_type_course_group */ $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  /* i18n_sync_node_type_course_group */  /* i18n_sync_node_type_course_group */ $strongarm->api_version = 1;
  /* i18n_sync_node_type_course_group */  /* i18n_sync_node_type_course_group */ $strongarm->name = 'i18n_sync_node_type_course_group';
  /* i18n_sync_node_type_course_group */  /* i18n_sync_node_type_course_group */ $strongarm->value = array();
  $export['i18n_sync_node_type_course_group'] = $strongarm;

  /* language_content_type_course */  /* language_content_type_course */ $strongarm = new stdClass();
  /* language_content_type_course */  /* language_content_type_course */ $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  /* language_content_type_course */  /* language_content_type_course */ $strongarm->api_version = 1;
  /* language_content_type_course */  /* language_content_type_course */ $strongarm->name = 'language_content_type_course';
  /* language_content_type_course */  /* language_content_type_course */ $strongarm->value = '2';
  $export['language_content_type_course'] = $strongarm;

  return $export;
}
