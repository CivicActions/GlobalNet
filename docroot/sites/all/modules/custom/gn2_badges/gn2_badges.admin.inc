<?php
/**
 * @file
 *   Configuration settings form.
 */

/**
 * Configuration form.
 */
function gn2_badges_admin_form($form, &$form_state) {
  $form = [];

  $form['gn2_badges_level_one_title'] = [
    '#type' => 'textfield',
    '#title' => t('Level 1 badge name'),
    '#default_value' => variable_get('gn2_badges_level_one_title'),
    '#description' => t('How we should refer to level one. For instance, bronze.'),
    '#size' => 15,
    '#required' => TRUE,
  ];

  $form['gn2_badges_level_one'] = [
    '#type' => 'textfield',
    '#title' => t('Level 1 amount'),
    '#default_value' => variable_get('gn2_badges_level_one'),
    '#description' => t('The number of points needed for a user to level up to the first level.'),
    '#size' => 10,
    '#required' => TRUE,
  ];

  $form['gn2_badges_level_two_title'] = [
    '#type' => 'textfield',
    '#title' => t('Level 2 badge name'),
    '#default_value' => variable_get('gn2_badges_level_two_title'),
    '#description' => t('How we should refer to level two. For instance, silver.'),
    '#size' => 15,
    '#required' => TRUE,
  ];

  $form['gn2_badges_level_two'] = [
    '#type' => 'textfield',
    '#title' => t('Level 2 amount'),
    '#default_value' => variable_get('gn2_badges_level_two'),
    '#description' => t('The number of points needed for a user to level up to the second level.'),
    '#size' => 10,
    '#required' => TRUE,
  ];

  $form['gn2_badges_level_three_title'] = [
    '#type' => 'textfield',
    '#title' => t('Level 3 badge name'),
    '#default_value' => variable_get('gn2_badges_level_three_title'),
    '#description' => t('How we should refer to level three. For instance, gold.'),
    '#size' => 15,
    '#required' => TRUE,
  ];

  $form['gn2_badges_level_three'] = [
    '#type' => 'textfield',
    '#title' => t('Level 3 amount'),
    '#default_value' => variable_get('gn2_badges_level_three'),
    '#description' => t('The number of points needed for a user to level up to the third level.'),
    '#size' => 10,
    '#required' => TRUE,
  ];

  return system_settings_form($form);
}
