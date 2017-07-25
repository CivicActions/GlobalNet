<?php
/**
 * @file
 * gn2_base_config.default_password_policy.inc
 */

/**
 * Implements hook_default_password_policy().
 */
function gn2_base_config_default_password_policy() {
  $export = array();

   /* GlobalNET Password Policy */ $password_policy = new stdClass();
   /* GlobalNET Password Policy */ $password_policy->disabled = FALSE; /* Edit this to true to make a default password_policy disabled initially */
   /* GlobalNET Password Policy */ $password_policy->api_version = 1;
   /* GlobalNET Password Policy */ $password_policy->name = 'GlobalNET Password Policy';
   /* GlobalNET Password Policy */ $password_policy->description = 'Basic password policy';
   /* GlobalNET Password Policy */ $password_policy->enabled = TRUE;
   /* GlobalNET Password Policy */ $password_policy->policy = array(
   /* GlobalNET Password Policy */   'username' => '1',
   /* GlobalNET Password Policy */   'uppercase' => '1',
   /* GlobalNET Password Policy */   'punctuation' => '1',
   /* GlobalNET Password Policy */   'length' => '8',
   /* GlobalNET Password Policy */   'history' => '3',
   /* GlobalNET Password Policy */   'digit_placement' => '1',
   /* GlobalNET Password Policy */ );
   /* GlobalNET Password Policy */ $password_policy->created = 1432164623;
   /* GlobalNET Password Policy */ $password_policy->expiration = 90;
   /* GlobalNET Password Policy */ $password_policy->warning = '14,5,1';
   /* GlobalNET Password Policy */ $password_policy->weight = FALSE;
  $export['GlobalNET Password Policy'] = $password_policy;

  return $export;
}
