<?php
/**
 * @file
 * Hooks provided by the DrupalAuth for simpleSAMLphp.
 */

/**
 * @addtogroup hooks
 * @{
 */

/**
 * This hook provides ability to alter user attributes.
 *
 * @param array $attributes
 *   Array of attributes that are defined in "SSP_PATH/config/authsources.php".
 *
 * @param object $user
 *   User object.
 */
function hook_drupalauth_attributes_alter(&$attributes, &$user) {
  $attributes['my_attribute'] = 'value';
}

/**
 * @} End of "addtogroup hooks".
 */
