<?php

/**
 * @file
 * Views access plugin.
 */


/**
 * Custom views access plugin that checks if the user is a manager.
 *
 * @ingroup views_access_plugins
 */
class gn2_og_access_plugin_manager_access extends views_plugin_access {

  /**
   * Gets plugin's summary title.
   *
   * @return string
   *   Summary title for the plugin.
   */
  function summary_title() {
    $roles = $this->options['roles'];
    $roles_display = (!empty($roles)) ? implode(', ', $roles) : 'not set';
    return t('Roles: !roles', ['!roles' => $roles_display]);
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
  function access($account) {
    return gn2_og_manager_has_access($this->options['roles'], $roles);
  }

  /**
   * Gets the access callback and parameters for the plugin.
   *
   * @return mixed[]
   *   Access callback for the plugin. First index is function and second
   *   is the function parameters.
   */
  function get_access_callback() {
    return array('gn2_og_manager_has_access', [$this->options['roles']]);
  }

  /**
   * Define the default options.
   */
  function option_definition() {
    $options = parent::option_definition();
    $options['roles'] = ['default' => []];

    return $options;
  }

  /**
   * Role selection form.
   */
  function options_form(&$form, &$form_state) {
    parent::options_form($form, $form_state);
    $roles = db_query('SELECT DISTINCT(name) FROM {og_role} WHERE name NOT IN (:roles)', [':roles' => ['member', 'non-member']])->fetchCol();
    $form['roles'] = [
      '#title' => t('OG Roles'),
      '#type' => 'checkboxes',
      '#options' => drupal_map_assoc($roles),
      '#default_value' => $this->options['roles'],
      '#description' => t('Select the role(s) that should be able to access this View.'),
    ];
  }

  /**
   * Role form validate.
   */
  function options_validate(&$form, &$form_state) {
    if (!array_filter($form_state['values']['access_options']['roles'])) {
      form_error($form['roles'], t('You must select at least one role.'));
    }
  }

  /**
   * Role form submit.
   */
  function options_submit(&$form, &$form_state) {
    $form_state['values']['access_options']['roles'] = array_filter($form_state['values']['access_options']['roles']);
  }
}
