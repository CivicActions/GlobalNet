<?php
/**
 * @file
 * Configuration page for the pki_authentication module.
 */

/**
 * Is called from menu click.  Build the configuration form.
 *
 * We really only need to know where to be directed to for the PKI protected
 * directory which contains the registration and login forms.
 */
function pki_authentication_admin_settings() {
  global $base_root;

  $form = array();

  $form['pki_authentication_enable_regular_login'] = array(
    '#type' => 'checkbox',
    '#title' => t('Enable regular login.'),
    '#default_value' => variable_get('pki_authentication_enable_regular_login', '1'),
    '#description' => t("Checking this allows for regular user registration and login. If unchecked, usernames are extracted from the PKI and passwords are set to random allowing for only PKI logins. If unchecked, PKI logins are enabled regardless of the following setting."),
  );

  $form['pki_authentication_enable_regular_login_permission'] = array(
    '#type' => 'checkbox',
    '#title' => t('Enable regular login permission.'),
    '#default_value' => variable_get('pki_authentication_enable_regular_login_permission', '0'),
    '#description' => t("Checking this allows for regular user registration and login by roles. See Regular Logins under PKI Authentication on the Permissions page. Regular login must also be enabled."),
  );

  $form['pki_authentication_enable_pki_login'] = array(
    '#type' => 'checkbox',
    '#title' => t('Enable PKI login.'),
    '#default_value' => variable_get('pki_authentication_enable_pki_login', '1'),
    '#description' => t("Checking this allows a user to associate PKI with their login. This defaults to TRUE if Enable regular login is disabled."),
  );

  $form['pki_authentication_enable_regular_login'] = array(
    '#type' => 'checkbox',
    '#title' => t('Enable regular login.'),
    '#default_value' => variable_get('pki_authentication_enable_regular_login', '1'),
    '#description' => t("Checking this allows for regular user registration and login. If unchecked, usernames are extracted from the PKI and passwords are set to random allowing for only PKI logins."),
    '#Required' => TRUE,
  );

  $form['pki_authentication_pki_extraction_path'] = array(
    '#type' => 'textfield',
    '#title' => t('Path to PKI extraction code.'),
    '#size' => 96,
    '#default_value' => variable_get('pki_authentication_pki_extraction_path', ''),
    '#description' => t("Path to pki_authentication directory that is directly accessable but not within the Drupal framework. This is where you copied the module's misc/pki_authenticaiton/* files and is usually in the web site's misc directory. Please see the documentation for this module for more information."),
    '#Required' => TRUE,
  );

  $form['pki_authentication_pki_server_index'] = array(
    '#type' => 'textfield',
    '#title' => t('Index into _SERVER variable for PKI string.'),
    '#size' => 50,
    '#default_value' => variable_get('pki_authentication_pki_server_index', 'SSL_CLIENT_S_DN_CN'),
    '#description' => t('The extracted PKI information should be configured to return in this index of the _SERVER super global variable.'),
    '#Required' => TRUE,
  );

  $form['pki_authentication_pki_nonce_ttl'] = array(
    '#type' => 'textfield',
    '#title' => t('Number of seconds for nonce to stay valid.'),
    '#size' => 50,
    '#default_value' => variable_get('pki_authentication_pki_nonce_ttl', 300),
    '#description' => t('Should be more than the time it takes to complete a registration or login.'),
    '#Required' => TRUE,
  );

  $form['pki_authentication_base_root'] = array(
    '#type' => 'textfield',
    '#title' => t('Base URL for the web site.'),
    '#size' => 50,
    '#default_value' => variable_get('pki_authentication_base_root', $base_root),
    '#description' => t('The path back to the primary Drupal site from the pki extraction code. Configurable for complex installations that might require it.'),
    '#Required' => TRUE,
  );

  return system_settings_form($form);
}

/**
 * Validate the configuration settings form.
 */
function pki_authentication_admin_settings_validate($form, &$form_state) {
  if ($form_state['values']['pki_authentication_enable_regular_login'] == 0 and $form_state['values']['pki_authentication_enable_regular_login_permission'] == 1) {
    $form_state['values']['pki_authentication_enable_regular_login'] = 1;
    drupal_set_message(t("Setting the Enable Regular Login checkbox. It is required for permission based regular login."));
  }
}
