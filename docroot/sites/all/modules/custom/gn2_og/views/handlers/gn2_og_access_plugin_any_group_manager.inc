<?php
/**
 * @file
 * Views acccess plugin.
 */

/**
 * Custom views access plugin that checks if the user is group manager.
 */
class views_plugin_access_gn2_og_any_group_manager extends views_plugin_access {

  /**
   * Gets plugin's summary title.
   *
   * @return string
   *   Summary title for the plugin.
   */
  public function summary_title() {
    return t('Any group manager access');
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
    return gn2_og_any_group_manager_access($account);
  }

  /**
   * Gets the access callback and parameters for the plugin.
   *
   * @return mixed[]
   *   Access callback for the plugin. First index is function and second
   *   is the function parameters.
   */
  public function get_access_callback() {
    return array('gn2_og_any_group_manager_access', array());
  }

}
