<?php
/**
 * @file
 * The sole purpose for this file is to live in a PKI protected directory, to
 *    extract certificate info from the CAC or other PKI, create a one time
 *    use token, record the cert in the database with the token then pass the
 *    token back into the Drupal environment for login or registration.
 */

// Boot up just enough drupal to get to the database and variables.
chdir($_SERVER['DOCUMENT_ROOT']);
require_once './includes/bootstrap.inc';
define('DRUPAL_ROOT', getcwd());
drupal_bootstrap(DRUPAL_BOOTSTRAP_VARIABLES);

// $pki_index - how the pki string will come to us. See configuration.
$pki_index = variable_get('pki_authentication_pki_server_index', 'SSL_CLIENT_S_DN_CN');

// $ttl - number of seconds for the edipi to be saved in the database.
$ttl = variable_get('pki_authentication_pki_nonce_ttl', 300);

// $my_url - the URL back to our calling Drupal site.
$my_url = variable_get('pki_authentication_base_root', $base_root);

// Get the info from the PKI. There must be a proper .htaccess file in this dir
// otherwise $_SERVER['SSL_CLIENT_S_DN_CN'] will be empty. If things are set
// up correctly $_SERVER['SSL_CLIENT_S_DN_CN'] should contain something like
// LASTNAME.M.FIRSTNAME.UNIQUE_ID.
if (empty($_SERVER[$pki_index])) {
  die("<meta http-equiv='refresh' content='0;url=" . $my_url . "'>");
}
$pki = $_SERVER[$pki_index];
$data = array(
  'pki_string' => $pki,
);
// This entry will expire in $ttl seconds.
$ts = time() + $ttl;

$nonce = pki_authentication_str_rand();

$foo = db_insert('pki_authentication_temp')
  ->fields(array(
      'nonce' => $nonce,
      'ttl' => $ts,
      'data' => serialize($data),
    ))
  ->execute();
if (isset($_GET['form'])) {
  if ($_GET['form'] == 'user_profile_form' and !empty($_GET['uid'])) {
    die("<meta http-equiv='refresh' content='0;url=" . $my_url . "/user/" . $_GET['uid'] . "/edit?T=$nonce'>");
  }
  if ($_GET['form'] == 'user_register_form') {
    die("<meta http-equiv='refresh' content='0;url=" . $my_url . "/user/register?T=$nonce'>");
  }
  if ($_GET['form'] == 'user_login' or $_GET['form'] == 'user_login_block') {
    die("<meta http-equiv='refresh' content='0;url=" . $my_url . "/user/pki_login/$nonce'>");
  }
}
die("<meta http-equiv='refresh' content='0;url=" . $my_url . "'>");
/**
 * Lightweight nonce generator.
 *
 * @todo: consider using drupal_get_token. - we do not have a full Drupal stack,
 *                                           function not available
 */
function pki_authentication_str_rand($length=32, $seeds='AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsTtUuVvWwXxYyZz0123456789') {
  $str = '';
  $seeds_count = strlen($seeds);
  for ($i = 0; $length > $i; $i++) {
    $str .= $seeds{mt_rand(0, $seeds_count - 1)};
  }
  return $str;
}
