<?php
/**
 * @file
 * Admin page for the GN2 Reg module.
 */

/**
 * Form constructor for gn2_reg_admin().
 */
function gn2_reg_admin($form, &$form_state) {
  $text = variable_get('gn2_reg_tou', NULL);
  $form['gn2_reg_tou'] = array(
    '#type' => 'text_format',
    '#title' => t('Privacy Act Statement'),
    '#default_value' => (isset($text['value'])) ? $text['value'] : NULL,
    '#description' => t('Enter the text for the Privacy Act Statement'),
    '#rows' => 10,
    '#resizable' => FALSE,
    '#format' => (isset($text['format'])) ? $text['format'] : 'filtered_html',
  );

  return system_settings_form($form);
}
