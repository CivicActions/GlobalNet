<?php
/**
 * @file
 * gn2_coi.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function gn2_coi_strongarm() {
  $export = array();

  /* language_content_type_coi */  /* language_content_type_coi */ $strongarm = new stdClass();
  /* language_content_type_coi */  /* language_content_type_coi */ $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  /* language_content_type_coi */  /* language_content_type_coi */ $strongarm->api_version = 1;
  /* language_content_type_coi */  /* language_content_type_coi */ $strongarm->name = 'language_content_type_coi';
  /* language_content_type_coi */  /* language_content_type_coi */ $strongarm->value = '2';
  $export['language_content_type_coi'] = $strongarm;

  /* pathauto_node_coi_de_pattern */  /* pathauto_node_coi_de_pattern */ $strongarm = new stdClass();
  /* pathauto_node_coi_de_pattern */  /* pathauto_node_coi_de_pattern */ $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  /* pathauto_node_coi_de_pattern */  /* pathauto_node_coi_de_pattern */ $strongarm->api_version = 1;
  /* pathauto_node_coi_de_pattern */  /* pathauto_node_coi_de_pattern */ $strongarm->name = 'pathauto_node_coi_de_pattern';
  /* pathauto_node_coi_de_pattern */  /* pathauto_node_coi_de_pattern */ $strongarm->value = '';
  $export['pathauto_node_coi_de_pattern'] = $strongarm;

  /* pathauto_node_coi_es_pattern */  /* pathauto_node_coi_es_pattern */ $strongarm = new stdClass();
  /* pathauto_node_coi_es_pattern */  /* pathauto_node_coi_es_pattern */ $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  /* pathauto_node_coi_es_pattern */  /* pathauto_node_coi_es_pattern */ $strongarm->api_version = 1;
  /* pathauto_node_coi_es_pattern */  /* pathauto_node_coi_es_pattern */ $strongarm->name = 'pathauto_node_coi_es_pattern';
  /* pathauto_node_coi_es_pattern */  /* pathauto_node_coi_es_pattern */ $strongarm->value = '';
  $export['pathauto_node_coi_es_pattern'] = $strongarm;

  /* pathauto_node_coi_fr_pattern */  /* pathauto_node_coi_fr_pattern */ $strongarm = new stdClass();
  /* pathauto_node_coi_fr_pattern */  /* pathauto_node_coi_fr_pattern */ $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  /* pathauto_node_coi_fr_pattern */  /* pathauto_node_coi_fr_pattern */ $strongarm->api_version = 1;
  /* pathauto_node_coi_fr_pattern */  /* pathauto_node_coi_fr_pattern */ $strongarm->name = 'pathauto_node_coi_fr_pattern';
  /* pathauto_node_coi_fr_pattern */  /* pathauto_node_coi_fr_pattern */ $strongarm->value = '';
  $export['pathauto_node_coi_fr_pattern'] = $strongarm;

  /* pathauto_node_coi_pt-br_pattern */  /* pathauto_node_coi_pt-br_pattern */ $strongarm = new stdClass();
  /* pathauto_node_coi_pt-br_pattern */  /* pathauto_node_coi_pt-br_pattern */ $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  /* pathauto_node_coi_pt-br_pattern */  /* pathauto_node_coi_pt-br_pattern */ $strongarm->api_version = 1;
  /* pathauto_node_coi_pt-br_pattern */  /* pathauto_node_coi_pt-br_pattern */ $strongarm->name = 'pathauto_node_coi_pt-br_pattern';
  /* pathauto_node_coi_pt-br_pattern */  /* pathauto_node_coi_pt-br_pattern */ $strongarm->value = '';
  $export['pathauto_node_coi_pt-br_pattern'] = $strongarm;

  /* pathauto_node_coi_ru_pattern */  /* pathauto_node_coi_ru_pattern */ $strongarm = new stdClass();
  /* pathauto_node_coi_ru_pattern */  /* pathauto_node_coi_ru_pattern */ $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  /* pathauto_node_coi_ru_pattern */  /* pathauto_node_coi_ru_pattern */ $strongarm->api_version = 1;
  /* pathauto_node_coi_ru_pattern */  /* pathauto_node_coi_ru_pattern */ $strongarm->name = 'pathauto_node_coi_ru_pattern';
  /* pathauto_node_coi_ru_pattern */  /* pathauto_node_coi_ru_pattern */ $strongarm->value = '';
  $export['pathauto_node_coi_ru_pattern'] = $strongarm;

  return $export;
}
