<?php
/**
 * SAML 1.1 IdP configuration for SimpleSAMLphp.
 *
 * See: https://simplesamlphp.org/docs/stable/simplesamlphp-reference-idp-hosted
 */

$metadata['__DYNAMIC:1__'] = array(

	/*
	 * The hostname of the server (VHOST) that will use this SAML entity.
	 *
	 * Can be '__DEFAULT__', to use this entry by default.
	 */
	'host' => '__DEFAULT__',

	// X.509 key and certificate. Relative to the cert directory.
	'privatekey' => '/var/www/certs/client-key.pem',
  'certificate' => '/var/www/certs/client-cert.pem',

  'OrganizationName' => array(
    'en' => 'GlobalNET',
  ),

  'OrganizationURL' => 'https://www.globalnetplatform.org',

	/*
	 * Authentication source to use. Must be one that is configured in
	 * 'config/authsources.php'.
	 */
	'auth' => 'drupal-prod',
);