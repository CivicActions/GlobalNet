<?php
/**
 * @file
 * Form function for unsetting the CAC field.
 */

/**
 * Form constructor for the unset CAC field form.
 *
 * @param int $uid
 *   The User ID for the user object being altered.
 *
 * @see gn2_cac_clear_form_validate()
 * @see gn2_cac_clear_form_submit()
 *
 * @ingroup forms
 */
function gn2_cac_clear_form($form, &$form_state, $uid) {
  global $user;
  $edit_user = user_load($uid);

  if ($user->uid !== $edit_user->uid && !in_array('administrator', $user->roles)) {
    drupal_access_denied();
  }

  if (!isset($edit_user->pki_authentication_pki_string)) {
    $link = l(t('Click here to return to the profile page for !user', array('!user' => $edit_user->name)), 'user/' . $edit_user->uid);
    drupal_set_message(t('The CAC field is not set for the user !user. !link', array(
      '!user' => $edit_user->name,
      '!link' => $link,
    )), 'error');
    return '';
  }

  $form['header'] = array(
    '#markup' => '<div>' . t('Are you sure that you want to clear the CAC information? This action cannot be undone.') . '</div>',
  );

  $form['uid'] = array(
    '#type' => 'hidden',
    '#value' => $uid,
  );

  $form['actions']['submit'] = array(
    '#type' => 'submit',
    '#value' => t('Submit'),
  );

  $form['actions']['cancel'] = array(
    '#markup' => l(t('Cancel'), 'user/' . $uid, array('attributes' => array('class' => array('button')))),
  );

  return $form;
}

/**
 * Form validation handler for gn2_cac_clear_form().
 *
 * @see gn2_cac_clear_form_submit()
 */
function gn2_cac_clear_form_validate($form, &$form_state) {
  // If, for some reason, we don't have a UID in the form, go home.
  if (!isset($form_state['values']['uid']) && filter_input(INPUT_GET, 'destination')) {
    $destination = filter_input(INPUT_GET, 'destination');
    drupal_set_message(t('Something went wrong. Please try again.'));
    drupal_goto($destination);
  }
}

/**
 * Form submission handler for gn2_cac_clear_form().
 *
 * @see gn2_cac_clear_form_validate()
 */
function gn2_cac_clear_form_submit($form, &$form_state) {
  // Clear the pki_authentication_pki_string and save the user object.
  $entity = entity_load_single('user', $form_state['values']['uid']);
  unset($entity->pki_authentication_pki_string[LANGUAGE_NONE][0]);
  $entity->pki_authentication_pki_string[LANGUAGE_NONE] = array_values($entity->pki_authentication_pki_string[LANGUAGE_NONE]);
  entity_save('user', $entity);
  drupal_set_message(t('The CAC field was cleared successfully.'), 'status');
}
