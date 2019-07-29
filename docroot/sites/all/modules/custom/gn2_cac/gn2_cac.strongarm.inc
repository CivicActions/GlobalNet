<?php
/**
 * @file
 * gn2_cac.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function gn2_cac_strongarm() {
  $export = array();

  /* gn2_cac_description */  /* gn2_cac_description */ $strongarm = new stdClass();
  /* gn2_cac_description */  /* gn2_cac_description */ $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  /* gn2_cac_description */  /* gn2_cac_description */ $strongarm->api_version = 1;
  /* gn2_cac_description */  /* gn2_cac_description */ $strongarm->name = 'gn2_cac_description';
  /* gn2_cac_description */  /* gn2_cac_description */ $strongarm->value = '<h3>SET UP CAC Login</h3>
<p>Common Access Card (CAC) Login is for use by DoD users with the CAC smart card via the Internet Explorer browser. Other browsers may work; however Internet Explorer is the supported browser.  Follow these steps to set up your account:</p>
<ol>
  <li>Ensure you are using Internet Explorer</li>
  <li>Login to GlobalNET with your username and password.</li>
  <li>Place your CAC card in the reader.</li>
  <li>Click on the My GlobalNET</li>
  <li>Click Edit My Profile & Settings</li>
  <li>Scroll down to External Accounts, click arrow to open</li>
  <li>Click the Extract certificate information from your CAC card link and follow the directions to extract the date from your EMAIL certificate</li>
  <li>You should see a Banner message that tells you, Your PKI information has been extracted (your name), but has not yet been saved! - Click here to save the information to your user profile.</li>
  <li>Click the link "Click here" to save</li>
  <li>You should see the message that changed have been saved.</li>
  <li>You should be able to log in with your CAC</li>
</ol>
<h3>Log in with CAC card instructions</h3>
<ol>
<li>Ensure you are using Internet Explorer browser <i>(Other browsers may work, but Internet Explorer is the supported browser)</i></li>
<li>Insert your CAC card</li>
<li>Click the Log in with CAC button</li>
<li>You should be prompted to select you certificate. Select EMAIL certificate and click OK.</li>
<li>You should get a popup prompting you to enter you pin. Type your pin number and click OK.</li>
<li>You should be logged on the GlobalNET</li>
</ol>';
  $export['gn2_cac_description'] = $strongarm;

  /* gn2_cac_url */  /* gn2_cac_url */ $strongarm = new stdClass();
  /* gn2_cac_url */  /* gn2_cac_url */ $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  /* gn2_cac_url */  /* gn2_cac_url */ $strongarm->api_version = 1;
  /* gn2_cac_url */  /* gn2_cac_url */ $strongarm->name = 'gn2_cac_url';
  /* gn2_cac_url */  /* gn2_cac_url */ $strongarm->value = '';
  $export['gn2_cac_url'] = $strongarm;

  /* pki_authentication_base_root */  /* pki_authentication_base_root */ $strongarm = new stdClass();
  /* pki_authentication_base_root */  /* pki_authentication_base_root */ $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  /* pki_authentication_base_root */  /* pki_authentication_base_root */ $strongarm->api_version = 1;
  /* pki_authentication_base_root */  /* pki_authentication_base_root */ $strongarm->name = 'pki_authentication_base_root';
  /* pki_authentication_base_root */  /* pki_authentication_base_root */ $strongarm->value = 'https://stage.globalnetplatform.org';
  $export['pki_authentication_base_root'] = $strongarm;

  /* pki_authentication_enable_pki_login */  /* pki_authentication_enable_pki_login */ $strongarm = new stdClass();
  /* pki_authentication_enable_pki_login */  /* pki_authentication_enable_pki_login */ $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  /* pki_authentication_enable_pki_login */  /* pki_authentication_enable_pki_login */ $strongarm->api_version = 1;
  /* pki_authentication_enable_pki_login */  /* pki_authentication_enable_pki_login */ $strongarm->name = 'pki_authentication_enable_pki_login';
  /* pki_authentication_enable_pki_login */  /* pki_authentication_enable_pki_login */ $strongarm->value = 1;
  $export['pki_authentication_enable_pki_login'] = $strongarm;

  /* pki_authentication_enable_regular_login */  /* pki_authentication_enable_regular_login */ $strongarm = new stdClass();
  /* pki_authentication_enable_regular_login */  /* pki_authentication_enable_regular_login */ $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  /* pki_authentication_enable_regular_login */  /* pki_authentication_enable_regular_login */ $strongarm->api_version = 1;
  /* pki_authentication_enable_regular_login */  /* pki_authentication_enable_regular_login */ $strongarm->name = 'pki_authentication_enable_regular_login';
  /* pki_authentication_enable_regular_login */  /* pki_authentication_enable_regular_login */ $strongarm->value = 1;
  $export['pki_authentication_enable_regular_login'] = $strongarm;

  /* pki_authentication_enable_regular_login_permission */  /* pki_authentication_enable_regular_login_permission */ $strongarm = new stdClass();
  /* pki_authentication_enable_regular_login_permission */  /* pki_authentication_enable_regular_login_permission */ $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  /* pki_authentication_enable_regular_login_permission */  /* pki_authentication_enable_regular_login_permission */ $strongarm->api_version = 1;
  /* pki_authentication_enable_regular_login_permission */  /* pki_authentication_enable_regular_login_permission */ $strongarm->name = 'pki_authentication_enable_regular_login_permission';
  /* pki_authentication_enable_regular_login_permission */  /* pki_authentication_enable_regular_login_permission */ $strongarm->value = 0;
  $export['pki_authentication_enable_regular_login_permission'] = $strongarm;

  /* pki_authentication_pki_extraction_path */  /* pki_authentication_pki_extraction_path */ $strongarm = new stdClass();
  /* pki_authentication_pki_extraction_path */  /* pki_authentication_pki_extraction_path */ $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  /* pki_authentication_pki_extraction_path */  /* pki_authentication_pki_extraction_path */ $strongarm->api_version = 1;
  /* pki_authentication_pki_extraction_path */  /* pki_authentication_pki_extraction_path */ $strongarm->name = 'pki_authentication_pki_extraction_path';
  /* pki_authentication_pki_extraction_path */  /* pki_authentication_pki_extraction_path */ $strongarm->value = '/pki_authentication/';
  $export['pki_authentication_pki_extraction_path'] = $strongarm;

  /* pki_authentication_pki_nonce_ttl */  /* pki_authentication_pki_nonce_ttl */ $strongarm = new stdClass();
  /* pki_authentication_pki_nonce_ttl */  /* pki_authentication_pki_nonce_ttl */ $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  /* pki_authentication_pki_nonce_ttl */  /* pki_authentication_pki_nonce_ttl */ $strongarm->api_version = 1;
  /* pki_authentication_pki_nonce_ttl */  /* pki_authentication_pki_nonce_ttl */ $strongarm->name = 'pki_authentication_pki_nonce_ttl';
  /* pki_authentication_pki_nonce_ttl */  /* pki_authentication_pki_nonce_ttl */ $strongarm->value = '300';
  $export['pki_authentication_pki_nonce_ttl'] = $strongarm;

  /* pki_authentication_pki_server_index */  /* pki_authentication_pki_server_index */ $strongarm = new stdClass();
  /* pki_authentication_pki_server_index */  /* pki_authentication_pki_server_index */ $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  /* pki_authentication_pki_server_index */  /* pki_authentication_pki_server_index */ $strongarm->api_version = 1;
  /* pki_authentication_pki_server_index */  /* pki_authentication_pki_server_index */ $strongarm->name = 'pki_authentication_pki_server_index';
  /* pki_authentication_pki_server_index */  /* pki_authentication_pki_server_index */ $strongarm->value = 'SSL_CLIENT_S_DN_CN';
  $export['pki_authentication_pki_server_index'] = $strongarm;

  return $export;
}
