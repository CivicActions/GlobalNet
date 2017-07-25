<?php
/**
 * @file
 * gn2_roles_perms.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function gn2_roles_perms_strongarm() {
  $export = array();

  /* realname_registration_firstname_field */  /* realname_registration_firstname_field */ $strongarm = new stdClass();
  /* realname_registration_firstname_field */  /* realname_registration_firstname_field */ $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  /* realname_registration_firstname_field */  /* realname_registration_firstname_field */ $strongarm->api_version = 1;
  /* realname_registration_firstname_field */  /* realname_registration_firstname_field */ $strongarm->name = 'realname_registration_firstname_field';
  /* realname_registration_firstname_field */  /* realname_registration_firstname_field */ $strongarm->value = 'field_name_first';
  $export['realname_registration_firstname_field'] = $strongarm;

  /* realname_registration_format */  /* realname_registration_format */ $strongarm = new stdClass();
  /* realname_registration_format */  /* realname_registration_format */ $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  /* realname_registration_format */  /* realname_registration_format */ $strongarm->api_version = 1;
  /* realname_registration_format */  /* realname_registration_format */ $strongarm->name = 'realname_registration_format';
  /* realname_registration_format */  /* realname_registration_format */ $strongarm->value = '0';
  $export['realname_registration_format'] = $strongarm;

  /* realname_registration_lastname_field */  /* realname_registration_lastname_field */ $strongarm = new stdClass();
  /* realname_registration_lastname_field */  /* realname_registration_lastname_field */ $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  /* realname_registration_lastname_field */  /* realname_registration_lastname_field */ $strongarm->api_version = 1;
  /* realname_registration_lastname_field */  /* realname_registration_lastname_field */ $strongarm->name = 'realname_registration_lastname_field';
  /* realname_registration_lastname_field */  /* realname_registration_lastname_field */ $strongarm->value = 'field_name_last';
  $export['realname_registration_lastname_field'] = $strongarm;

  /* realname_registration_middlename_field */  /* realname_registration_middlename_field */ $strongarm = new stdClass();
  /* realname_registration_middlename_field */  /* realname_registration_middlename_field */ $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  /* realname_registration_middlename_field */  /* realname_registration_middlename_field */ $strongarm->api_version = 1;
  /* realname_registration_middlename_field */  /* realname_registration_middlename_field */ $strongarm->name = 'realname_registration_middlename_field';
  /* realname_registration_middlename_field */  /* realname_registration_middlename_field */ $strongarm->value = '';
  $export['realname_registration_middlename_field'] = $strongarm;

  /* realname_registration_tolower */  /* realname_registration_tolower */ $strongarm = new stdClass();
  /* realname_registration_tolower */  /* realname_registration_tolower */ $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  /* realname_registration_tolower */  /* realname_registration_tolower */ $strongarm->api_version = 1;
  /* realname_registration_tolower */  /* realname_registration_tolower */ $strongarm->name = 'realname_registration_tolower';
  /* realname_registration_tolower */  /* realname_registration_tolower */ $strongarm->value = 1;
  $export['realname_registration_tolower'] = $strongarm;

  /* realname_registration_ucfirst */  /* realname_registration_ucfirst */ $strongarm = new stdClass();
  /* realname_registration_ucfirst */  /* realname_registration_ucfirst */ $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  /* realname_registration_ucfirst */  /* realname_registration_ucfirst */ $strongarm->api_version = 1;
  /* realname_registration_ucfirst */  /* realname_registration_ucfirst */ $strongarm->name = 'realname_registration_ucfirst';
  /* realname_registration_ucfirst */  /* realname_registration_ucfirst */ $strongarm->value = 0;
  $export['realname_registration_ucfirst'] = $strongarm;

  /* realname_registration_use_validation */  /* realname_registration_use_validation */ $strongarm = new stdClass();
  /* realname_registration_use_validation */  /* realname_registration_use_validation */ $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  /* realname_registration_use_validation */  /* realname_registration_use_validation */ $strongarm->api_version = 1;
  /* realname_registration_use_validation */  /* realname_registration_use_validation */ $strongarm->name = 'realname_registration_use_validation';
  /* realname_registration_use_validation */  /* realname_registration_use_validation */ $strongarm->value = 1;
  $export['realname_registration_use_validation'] = $strongarm;

  return $export;
}
