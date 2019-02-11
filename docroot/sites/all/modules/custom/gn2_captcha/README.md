# gn2_captcha feature

_The GN2 CAPTCHA module is used for custom functions and configuration regarding to the [CAPTCHA module](https://www.drupal.org/project/captcha)._

#### Work log
09/06/2018 - @see **RD-4538: Add a captcha to the help desk form for anonymous users**  
Enabled the CAPTCHA for the Support Desk form via the UI and added a _hook_form_FORM_ID_alter_ function to only add the CAPTCHA for anonymous users.