<?php

/**
 * @file
 * Hooks provided by the PKI Authentication module.
 *
 * Currently there is only one hook to validate a PKI request.
 */

/**
 * @addtogroup hooks
 * @{
 */

/**
 * Performs validatation for new user requests for custom PKI type.
 *
 * This hook translates the PKI data sent back from the smart card into
 * actual user information used to create a Drupal user. If Drupal is
 * configured to require admin approval of new users, the user will be
 * created as "Blocked". See the Configuration -> People page.
 *
 * For the CAC module there is a DOD411 LDAP service to look for the
 * requestor. Use whatever validation you require and once you've validated
 * the request, return a username, email address and init value for the user.
 *
 * Return an empty array if the user does not validate. If the user validates
 * return an array with what you want in the user fields.
 *
 * NOTES: The init value should be the passed data as that is what is keyed
 *        upon on login, we use the init column in the users table. In a
 *        standard Drupal install this is the initial email address used to
 *        create the user.
 *
 *        You probably want to make sure an existing user is not going
 *        through the validation process. Regular logins are not validated
 *        here. Revoked certificates are processed by apache.
 *
 * For a real working example of how to build this hook, see the
 * pki_authentication_cac module in the modules sub-directory.
 *
 * @param string $validation_string
 *   Contains the contents of the PKI data sent from the browser. In
 *   the case of CAC it will look like: LASTNAME.FIRSTNAME.M.EDIPI
 *   where M is middle inital and EDIPI ( Electronic Data Interchange
 *   Personal Identifier ), a unique ID assigned to each person.
 *
 * @return array
 *   With indexes of 'name', 'email' and 'init' values which will be inserted
 *   into the users table creating a new user.
 */
function hook_pki_authentication_validate($validation_string) {
  // Use the $validation_string that was extracted from the pki to ascertain
  // informaiton about the user. Return a username and email address along
  // with the validation_string that will be stored in the init column of
  // the user table.
  $output = array();
  if ($the_user_is_valid) {
    $output['name'] = 'Validated User Name';
    $output['email'] = 'Validated User Email Address';
    $output['init'] = $validation_string;
  }
  return $output;
}


/**
 * @} End of "addtogroup hooks".
 */
