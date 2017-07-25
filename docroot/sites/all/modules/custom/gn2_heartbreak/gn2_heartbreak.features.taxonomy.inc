<?php
/**
 * @file
 * gn2_heartbreak.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function gn2_heartbreak_taxonomy_default_vocabularies() {
  return array(
    'gallery_collections' => array(
      'name' => 'Gallery collections',
      'machine_name' => 'gallery_collections',
      'description' => 'Groups of rich media galleries',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
