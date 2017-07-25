<?php

/**
 * @file
 * Plugin to provide access to Organization managers.
 */

/**
 * Plugins are described by creating a $plugin array which will be used
 * by the system that includes this file.
 */
$plugin = array(
  'title' => t("User: Organization manager access to member account"),
  'description' => t('Allow org_managers to their Organization members (e.g. login history).'),
  'callback' => 'gn2_base_config_og_orgmanager_ctools_access_check',
  'summary' => 'gn2_base_config_og_orgmanager_ctools_access_summary',
  'required context' => array(
    new ctools_context_required(t('Account of member'), 'user'),
    new ctools_context_required(t('Current user'), 'user'),
  ),
);

/**
 * Check for access.
 */
function gn2_base_config_og_orgmanager_ctools_access_check($__conf, $contexts) {
  $account = $contexts[0]->data;
  $user = $contexts[1]->data;
  return gn2_manager_access_account($user, $account);
}

/**
 * Provide a summary description.
 */
function gn2_base_config_og_orgmanager_ctools_access_summary($conf, $contexts) {
  return t('Allow if current user is an Organization Manager attempting access to the account of a member of their organization.');
}
