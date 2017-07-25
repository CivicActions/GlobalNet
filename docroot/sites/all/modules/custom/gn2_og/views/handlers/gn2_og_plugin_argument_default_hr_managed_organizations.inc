<?php

/**
 * @file
 * Holds the class defining the Views plugin loading the organization the user
 * is an hr manager of.
 */

/**
 * The class defining the Views plugin loading the groups of the acting user.
 */
class gn2_og_plugin_argument_default_hr_managed_organizations extends views_plugin_argument_default {

  /**
   * List the options relevant for this plugin.
   */
  function option_definition() {
    $options = parent::option_definition();
    $groups = og_get_all_group_entity();
    $options['group_type'] = array('default' => key($groups));
    $options['glue'] = array('default' => '+');

    return $options;
  }

  /**
   * Provide the default form for setting options.
   */
  function options_form(&$form, &$form_state) {
    $form['group_type'] = array(
      '#type' => 'select',
      '#title' => t('Group type'),
      '#description' => t('Select the group type.'),
      '#options' => og_get_all_group_entity(),
      '#default_value' => $this->options['group_type'],
      '#required' => og_get_all_group_entity(),
    );
    $form['glue'] = array(
      '#type' => 'select',
      '#title' => t('Concatenator'),
      '#description' => t('Select the concatenator used to merge multiple group IDs. Remember to turn on the "Allow multiple values" option in the "more" settings for this contextual filter.'),
      '#options' => array('+' => '+', ',' => ','),
      '#default_value' => $this->options['glue'],
    );
  }

  /**
   * Get the default argument.
   */
  function get_argument() {

    // Returns the joint list of items.
    $nids = gn2_og_get_orgs_user_is_hr_manager();
    return implode($this->options['glue'], $nids);
    
  }
}
