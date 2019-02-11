<?php
/**
 * @file
 * Views acccess plugin.
 */

/**
 * Custom views access plugin that checks if the user is hr manager.
 */
class gn2_manager_access_plugin_access extends views_plugin_access {
  
  /**
   * Gets plugin's summary title.
   *
   * @return string
   *   Summary title for the plugin.
   */
  function summary_title() {
    $count = count($this->options['gn2_roles']);
    if ($count < 1) {
      return t('No role(s) selected');
    }
    elseif ($count > 1) {
      return t('Multiple roles selected');
    }
    else{
      $option = reset($this->options['gn2_roles']);
      return check_plain($option);
    }
  }

  /**
   * Gets the access callback and parameters for the plugin.
   *
   * @return mixed[]
   *   Access callback for the plugin. First index is function and second
   *   is the function parameters.
   */
  function get_access_callback() {
    return array('gn2_manager_access_is_organization_manager', array(array_filter($this->options['gn2_roles'])));
  }

  /**
   * Define the default options.
   */
  function option_definition() {
    $options = parent::option_definition();
    $options['gn2_roles'] = array('default' => array());
    
    return $options;
  }

  /**
   * Roles form.
   */
  function options_form(&$form, &$form_state) {
    parent::options_form($form, $form_state);
    $form['gn2_roles'] = array(
      '#type' => 'checkboxes',
      '#title' => t('Which OG Roles should have access?'),
      '#default_value' => $this->options['gn2_roles'],
      '#options' => array(
        'org_manager' => 'Org Manager',
        'hr_manager' => 'HR Manager',
        'faculty' => 'Faculty',
      ),
    );
  }

  /**
   * Roles form validate.
   */
  function options_validate(&$form, &$form_state) {
    if (!array_filter($form_state['values']['access_options']['gn2_roles'])) {
      form_error($form['gn2_roles'], t('You must select at least one role.'));
    }
  }

  /**
   * Roles form submit.
   */
  function options_submit(&$form, &$form_state) {
    $form_state['values']['access_options']['gn2_roles'] = array_filter($form_state['values']['access_options']['gn2_roles']);
  }
}