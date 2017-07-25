
CONTENTS OF THIS FILE
---------------------

 * Introduction
 * Installation
 * Login modes
 * Extending this module
 * Notes
 * Files Within this Module
 * To Do

INTRODUCTION
------------

Current maintainer: Rick Welch <rick_welch@me.com>

PKI (Public Key Infrastructure) enables users to log into secure sites
over an unsecure network using a digital certificate (cert) or key that
is part of a public and private pair. Examples of this are Common Access
Card (CAC) used by DoD, Soft Certs, and PIV cards used by the US Government.

Initial implementation of this module supports the DoD CAC but there are is
hook to easily implement other types of PKI.


INSTALLATION
------------

1) Your web server must be configured to use SSL and enable PKI protected
directories. Instructions are included on how to accomplish this on an Apache
web server. See INSTALL.txt for more information.

2) Install the module in the modules directory then copy the pki_authentication
folder in the misc folder into your sites misc area, (sites/default/misc or
sites/site-name/misc) being sure to copy the .htaccess file.

3) Be sure to update the configuration settings under
      configuration -> pki_authentication
tab and enter where the PKI protected directory is. Include both leading and
trailing slashes.

See INSTALL.txt for more detailed instructions.


LOGIN MODES
-----------

In the configuration page you can select regular login only, which is the 
standard Drupal login. You can select PKI only or both. If you allow both
types of logins you can also restrict regular logins to only people who have
a specific role. To enable this, check the "Enable regular login permission"
checkbox then select the role 'Regular login' under the PKI Authentication
header in the permisions page.


EXTENDING THIS MODULE
---------------------

There is a hook hook_pki_validate to implement validation for other PKI
types. This module contains a module that implements pki_cac validatation
so CAC is supported out-of-the-box. See pki_authentication.api.inc for
more information.

If you write your own validator, please consider sending it to the
maintainers for distribution in the modules sub-directory.

We have added a null validator for one application that had trouble connecting
to the DOD411 LDAP service. That Apache server was configured to only accept
PKI from specific CA's, thus creating a white list. And was configured for
nightly revocation updates thus creating a black list. It was deemed that this
was sufficient for the application given the difficulty doing real time 
validation.


NOTES
-----

The maintainers would like to see this module widely used and therefore
welcome suggestions, comments, bug-fixes and enhancements and will work
to integrate such into the code in a timely fashion.


FILES WITHIN THIS MODULE
------------------------

Description of files contained in this module:

      pki_authentication.info         - module information that Drupal requires
      settings.inc                    - handles the adminstrative settings
      pki_authentication.module       - login/authentication/account request
      pki_authentication.install      - removes/installs variables and db table
      pki_authentication.api.inc      - describes the PKI validation hook
      README.txt                      - this file
      INSTALL.txt                     - installation instructions, overview

      modules/pki_authentication_cac  - module with validation hook implemented
                                        for DoD CAC
      modules/pki_authentication_null - A null validator - enable one or the
                                        other or write your own.

      misc/pki_authentication/extract_pki.php - executed at login or account
                                                edit / setup: must be in a PKI
      					      	protected directory outside of
                                                Drupal control - see INSTALL.txt
