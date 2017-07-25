<?php
/**
 * @file
 * Admin form for drupalauth4ssp module.
 */

/**
 * Implements settings for the module.
 */
function drupalauth4ssp_settings() {
  $form['drupalauth4ssp_setup'] = array(
    '#type' => 'fieldset',
    '#title' => t('Basic Setup'),
    '#collapsible' => FALSE,
  );
  $form['drupalauth4ssp_setup']['drupalauth4ssp_installdir'] = array(
    '#type' => 'textfield',
    '#title' => t('Installation directory (default: /var/simplesamlphp)'),
    '#default_value' => variable_get('drupalauth4ssp_installdir', NULL),
    '#description' => t('The base directory of simpleSAMLphp. Absolute path with no trailing slash.'),
  );
  $form['drupalauth4ssp_setup']['drupalauth4ssp_authsource'] = array(
    '#type' => 'textfield',
    '#title' => t('Authentication source (The one that uses the drupalauth:External class)'),
    '#default_value' => variable_get('drupalauth4ssp_authsource', NULL),
    '#description' => t('The simpleSAMLphp authentication source.'),
  );
  $form['drupalauth4ssp_setup']['drupalauth4ssp_returnto_list'] = array(
    '#type' => 'textarea',
    '#title' => t('Allowed list of URLs for ReturnTo Parameter'),
    '#default_value' => variable_get('drupalauth4ssp_returnto_list', NULL),
    '#description' => t('Enter one URL per line. The \'*\'(wildcard) character is allowed. Example URLs are www.example.com/specific-path for a certain path and www.example.com* for all the URLs for www.example.com domain (like www.example.com; www.example.com/path1; www.example.com/path2/path3 etc.) and *example.com* for all subdomain paths (like a.example.com; a.example.com/path etc.)'),
  );

  return system_settings_form($form);
}
