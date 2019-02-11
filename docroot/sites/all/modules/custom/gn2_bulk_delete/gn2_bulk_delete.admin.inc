<?php

/**
 * @file
 * Administration forms for the GN2 Bulk Delete module.
 */

/**
 * Form constructor for gn2_bulk_delete form.
 *
 * @ingroup forms
 */
function gn2_bulk_delete_admin_form($form, &$form_state) {
  $options = _gn2_bulk_delete_get_admins();
  $form['gn2_bulk_delete_mailto'] = array(
    '#type' => 'select',
    '#multiple' => TRUE,
    '#size' => 4,
    '#title' => t('Choose recipients'),
    '#description' => t('Choose the Adminstrators that should receive the bulk file delete notifications.'),
    '#default_value' => variable_get('gn2_bulk_delete_mailto', NULL),
    '#options' => $options,
  );

  return system_settings_form($form);
}