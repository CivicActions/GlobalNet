<?php
/**
 * @file
 * Views acccess plugin.
 */

/**
 * Custom views access plugin that checks if the user is hr manager.
 */
class gn2_og_access_plugin_org_manager_user_access extends views_plugin_access {

  /**
   * Gets plugin's summary title.
   *
   * @return string
   *   Summary title for the plugin.
   */
  public function summary_title() {
    return t('Org Manager user access');
  }

  /**
   * Checks account has access.
   *
   * @param object $account
   *   User account.
   *
   * @return bool
   *   A value indicating if the account has access or not.
   */
  public function access($account) {
    return gn2_og_org_manager_user_access($account);
  }

  /**
   * Gets the access callback and parameters for the plugin.
   *
   * @return mixed[]
   *   Access callback for the plugin. First index is function and second
   *   is the function parameters.
   */
  public function get_access_callback() {
    return array('gn2_og_org_manager_user_access', array());
  }

}
