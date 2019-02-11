 <?php

/**
 * @file
 * Definition of variables for Variable API module.
 */

/**
 * Implements hook_variable_info().
 */
function jira_rest_variable_info($options) {
   $variable['jira_rest_jirainstanceurl'] = array(
    'title' => t('URL of the JIRA instance', array(), $options),
    'description' => t('Enter the URL of your JIRA instance (e.g. https://yourjira.com:8443)', array(), $options),
    'access' => 'administer site configuration',
    'group' => 'jira_rest',
  );
    $variable['jira_rest_username'] = array(
    'title' => t('Username of the default user to connect to JIRA', array(), $options),
    'description' => t('Enter the username used as default to connect to you JIRA instance (e.g. admin)', array(), $options),
    'access' => 'administer site configuration',
    'group' => 'jira_rest',
  );
    $variable['jira_rest_password'] = array(
    'title' => t('Password of the default user to connect to JIRA', array(), $options),
    'description' => t('Enter the password of the default user to connect to JIRA', array(), $options),
    'access' => 'administer site configuration',
    'group' => 'jira_rest',
  );

  return $variable;
}

/**
 * Implements hook_variable_group_info().
 */
function jira_rest_variable_group_info() {
  $groups['jira_rest'] = array(
    'title' => t('Jira REST'),
    'description' => t('Configure the Jira REST API settings.'),
    'access' => 'administer site configuration',
  );

  return $groups;
}
