<?php
/**
 * @file
 * gn2_base_config.features.user_relationship.inc
 */

/**
 * Implements hook_user_relationships_default_relationships().
 */
function gn2_base_config_user_relationships_default_relationships() {
  $relationships = array();

  // Exported user_relationship style: contact.
  $relationships['contact'] = array(
    'name' => 'Contact',
    'plural_name' => 'contacts',
    'is_oneway' => 0,
    'is_reciprocal' => 0,
    'requires_approval' => 1,
    'expires_val' => 0,
    'reverse_name' => '',
    'name_capitalized' => 'Contact',
    'plural_name_capitalized' => 'Contacts',
    'reverse_name_capitalized' => '',
    'reverse_plural_name' => '',
    'reverse_plural_name_capitalized' => '',
    'machine_name' => 'contact',
  );

  return $relationships;
}
