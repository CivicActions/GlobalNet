<?php
/**
 * SAML 1.1 remote SP metadata for SimpleSAMLphp.
 *
 * See: https://simplesamlphp.org/docs/stable/simplesamlphp-reference-sp-remote
 */
$metadata['https://ilias.globalnetplatform.org/shibboleth'] = array(
  'AssertionConsumerService' => 'https://ilias.globalnetplatform.org/Shibboleth.sso/SAML/POST',
  'SingleLogoutService' => 'https://ilias.globalnetplatform.org/shib_logout.php',
);

