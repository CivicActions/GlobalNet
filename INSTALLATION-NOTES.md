# Installation Notes

For GlobalNET v2.63.0 Build



## Introduction

GlobalNET v2.63.0 requires configuration of proprietary settings to take advantage of all of its features. What follows is a listing of the services currently integrated with GlobalNET along with information on where to locate/plug in the relevant system variables that link the external services with this particular GlobalNET instance.

A full instance of GlobalNET needs to include a separate installation of an Apache Solr instance with indexes of Nodes and Users. A fully-configured GlobalNET instance will be provided with the complete Dockerized version of GlobalNET

## Installation overview

GlobalNET is built on top of Drupal 7. To install an instance of GlobalNET you will need a server provisioned with:

1. Redhat, CentOS, or Debian Linux
2. Apache
3. PHP 7.0 (Configure memory_limit to at least 512M)
4. MariaDB
5. Apache Solr
6. A mailserver configured to work with your version of PHP
7. [Drush](https://github.com/drush-ops/drush)

The GlobalNET installation also connects with the external services listed below. You do not necessarily HAVE to connect to these services, but GlobalNET is configured to interface with them.

You can learn how to setup these services on the Drupal.org site, or by doing a Google search for how to install these platforms.

### Setup outline

1. Move all of the files to a directory  at the top level of your html documents, (e.g. `/var/www/globalnet/`)
2. Point your virtual host files to the `/docroot` directory inside the globalnet directory (e.g. `/var/www/globalnet/docroot`) and make sure you have mod_rewrite enabled for Apache.
3. Inside the `globalnet` directory, you will find a example database that contains the basic configuration needed to startup GlobalNET — `globalnet-example.sql.gz`
4. Create a Maria DB database to hold your sample data
5. Using drush or a mysql command, copy the sample data into your new database.
6. Duplicate  `/globalnet/docroot/sites/default/default settings.php` to create a new `/globalnet/docroot/sites/default/settings.php` file. Then configure:
    *  Database connections
    * `$conf['file_private_path'] = '/var/www/globalnet/docroot/files-private';`
    * `$conf['file_public_path'] = 'sites/default/files';`
    * `$conf['file_temporary_path'] = '/tmp';`
7. Make sure all of the directories are readable by your web server (e.g. `chown -R www-data:www-data /docroot`)
8. If required, unpack the `files-private.tar.gz` file to create a /files-private directory in the /docroot directory. This directory holds privileged files managed by Drupal's "Private file download" mechanism. Make sure the `files-private` directory is set to be readable by your apache server, but not readable by any other user.
9. From the `/globalnet/docroot` directory, download the Registry Rebuild drush extension (`drush dl registry_rebuild`).  Then run this extension (`drush rr`).
10. Run `drush fr-all -y` to setup the default configuration  by moving code from the `/sites/all/modules/custom/` feature into the database.
11. Run `drush cc all` to clear caches
12. Run `drush rules-revert-all` to make sure the Drupal Rules module has activated all the rules
13. At this point, you should be able to launch the site by launching a browser and navigating to the site you created in your Apache virtual hosts file.
14. To login for the first time, you will need to generate a "hash salt" for the settings.php file. To do this, you will need to login as the **user/1** account by running `drush uli` and then using the generated url to login to your site. Once you are in, you can change the passwords to the sample user accounts. Note that **user/1** does NOT have all of the GlobalNET admin role privileges. You can temporarily add them, but they will be removed when your session ends. The **qa-admin** account has persistent admin privileges. Once the hash salt has been set, you can then login as **qa-admin** to view the admin user interface and reports.

## Enabling External Service Configurations

What follows are the external services that are configured to work with GlobalNET v2.63.0. Some of these services are optional, failing to configure them will simple mean they are not available to your users.

The table below each service provide details about which feature or module "controls" access to the service, and where you can add your configuration variables, either in a feature or module file or through the Drupal UI (via the Admin menu).

## Adobe Connect

|     |                                                              |
| -------------------- | ------------------------------------------------------------ |
| **UI**               | users/{USER-ID}/edit -> External accounts fieldset           |
| **Module**           | gn2_adobe_connect                                            |
| **Service provider** | Adobe Connect                                                |
| **Notes**            | Nothing in code, credentials are in user account settings on GlobalNET. |



## CAC

| **Variable name**    | pki_authentication_base_root                                 |
| -------------------- | ------------------------------------------------------------ |
| **File**             | gn2_cac.strongarm.inc; line 47                               |
| **UI**               | /admin/config/people/pki_authentication                      |
| **Module**           | gn2_cac                                                      |
| **NOTES**            | This can only be tested with a valid CAC setup and CAC. Value to be modified is the URL of the CAC provider in this line:  47:  /* gn2_cac_url */  /* gn2_cac_url */ $strongarm->value = ''; |



## Captcha

| **Variable name** |                                                              |
| ----------------- | ------------------------------------------------------------ |
| **File**          | gn2_captcha.strongarm.inc line 162  = captcha token that we need to remove |
| **Module**        | gn2_captcha                                                  |
| **NOTES**         | Line 162  = captcha token value needs to be added            |



## Clickatell

| **Variable name**    | sms_clickatell_api_id, sms_clickatell_user,sms_clickatell_password, sms_enabled_carriers |
| -------------------- | ------------------------------------------------------------ |
| **File**             | gn2_sms_gateway.strongarm.inc; 33, 34, 36, 53                |
| **UI**               | /admin/smsframework/gateways/clickatell                      |
| **Module**           | gn2_sms_gateway                                              |
| **Service provider** | clickatell                                                   |



## Cron key

| **Variable name** | cron_key                               |
| ----------------- | -------------------------------------- |
| **File**          | gn2_base_strongarm.strongarm.inc; 1226 |
| **UI**            | /admin/config/system/cron/settings     |
| **Module**        | gn2_base_strongarm                     |
| **NOTES**         | Add cron key to line 1226              |



## Email confirmation, email author

| **Variable name** | email_confirm_confirmation_email_author                      |
| ----------------- | ------------------------------------------------------------ |
| **File**          | gn2_base_strongarm.strongarm.inc; 1868                       |
| **UI**            | /admin/config/people/email_confirm  /admin/config/system/site-information |
| **Module**        | gn2_base_strongarm                                           |
| **NOTES**         | Add admin email author email address, line 1868              |



## EZProxy
|            |                                                              |
| ---------- | ------------------------------------------------------------ |
| **Variable name**    | gn2_exproxy_authentication(), ezproxy_username, ezproxy_host |
| **File**             | Gn2_exproxy.module; 139, 141,                                |
| **Module**           | gn2_proxy                                                    |
| **Service provider** | EZproxy                                                      |
| **NOTES**            | EZProxy username credentials are in line 139; EZproxy host location is set on line 141 of the gn2_proxy module |



## Google Analytics

|            |                                                              |
| ---------- | ------------------------------------------------------------ |
| **File**             | gn2_base_strongarm.strongarm.inc                             |
| **UI**               | /admin/config/system/google-analytics-reports-api  /admin/config/system/usfedgov_google_analytics |
| **Module**           | US Government Google Analytics                               |
| **Service provider** | Google Analytics                                             |
| **NOTES**            | Credentials are entered in the GA module  configuration in the Drupal admin UI at /admin/config/system/usfedgov_google_analytics |



## Ilias Shibboleth settings

|            |                                                              |
| ---------- | ------------------------------------------------------------ |
| **File**   | gn2_base_strongarm.strongarm.inc; 5751, 5752;  saml20-idp-hosted.php 24, shib13-idp-hosted.php; 22, 25 |
| **Module** | gn2_base_strongarm                                           |
| **NOTES**  | *saml20-idp-hosted.php* located at /docroot/simplesaml/metadata contains authentication source server on 24*.  shib13-idp-hosted.php*  located at/docroot/simplesaml/metadata; line 22 contains org name, line 25 contains source url for the organization. |



## Jira REST

| **Variable name**    | jira_rest_password, jira_rest_username                       |
| -------------------- | ------------------------------------------------------------ |
| **File**             | gn2_support_desk.strongarm.inc; 162, 176                     |
| **UI**               | /admin/config/services/jira_rest                             |
| **Module**           | gn2_support_desk                                             |
| **Service provider** | Atlassian                                                    |
| **NOTES**            | Variable are used to connect support desk tickets to specific JIRA instances. Configured through the Drupal admin UI at /admin/config/services/jira_rest |



| **Variable name**    | jira_rest_jirainstanceurl           |
| -------------------- | ----------------------------------- |
| **File**             | gn2_support_desk.strongarm.inc; 155 |
| **UI**               | /admin/config/services/jira_rest    |
| **Module**           | Jira REST                           |



## Organization node settings (logo, contact info,main image)

|  |  |
| ----- | ------------------------------------------------------------ |
|   **NOTES**    |Organization variables (names, short titles, theme settings) for  organizations are set in organization landing page nodes. |



## Site Information

|            |                                                              |
| ---------- | ------------------------------------------------------------ |
| **File**   | gn2_tech_support/includes/gn2_tech_support_technical_support.inc: line  66 |
| **UI**     | /admin/config/system/site-information                        |
| **Module** | gn2_tech_support                                             |
| **NOTES**  | gn2_tech_support/includes/gn2_tech_support_technical_support.inc: line  66 contains the email address of the technical support provider |


