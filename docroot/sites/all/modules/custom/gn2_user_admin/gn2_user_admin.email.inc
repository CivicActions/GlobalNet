<?php

/**
 * @file
 * Form functions for changing a user's email address.
 */

/**
 * Form constructor for gn2_user_admin_email_form.
 *
 * @see gn2_user_admin_email_form_validate()
 * @see gn2_user_admin_email_form_submit()
 */
function gn2_user_admin_email_form($form, &$form_state, $account) {
  global $user;

  // During initial form build, add the entity to the form state for use during
  // form building and processing. During a rebuild, use what is in the form
  // state.
  if (!isset($form_state['user'])) {
    $form_state['user'] = $account;
  }
  else {
    $account = $form_state['user'];
  }

  drupal_set_title(t('Change email address for user !link', array(
    '!link' => l($account->name, 'user/' . $account->uid),
  )), PASS_THROUGH);

  $form['account']['current_pass_required_values'] = array(
    '#type' => 'value',
    '#value' => array('mail' => TRUE),
  );
  // The user must enter their current password to change to a new one.
  if ($user->uid == $account->uid) {
    $protected_values['mail'] = t('E-mail address');
    $form['account']['current_pass_required_values'] = array(
      '#type' => 'value',
      '#value' => $protected_values,
    );
    $form['account']['current_pass'] = array(
      '#type' => 'password',
      '#title' => t('Current password'),
      '#size' => 25,
      '#access' => TRUE,
      '#description' => t('Current password is required in order to change your email address.'),
      '#weight' => -5,
      // Do not let web browsers remember this password, since we are trying
      // to confirm that the person submitting the form actually knows the
      // current one.
      '#attributes' => array('autocomplete' => 'off'),
    );
    $form['#validate'][] = 'user_validate_current_pass';
  }

  $form['account']['mail'] = array(
    '#type' => 'textfield',
    '#title' => t('E-mail address'),
    '#maxlength' => EMAIL_MAX_LENGTH,
    '#description' => t('A valid e-mail address. All e-mails from the system will be sent to this address. The e-mail address is not made public and will only be used if you wish to receive a new password or wish to receive certain news or notifications by e-mail.'),
    '#required' => TRUE,
    '#default_value' => $account->mail,
  );

  $form['#validate'][] = 'gn2_user_admin_email_form_validate';
  $form['#uid'] = $account->uid;
  $form['#user'] = $account;
  $form['_account'] = array('#type' => 'value', '#value' => $account);

  $form['actions'] = array('#type' => 'actions');
  $form['actions']['submit'] = array(
    '#type' => 'submit',
    '#value' => t('Save'),
  );

  return $form;
}

/**
 * Form validation handler for gn2_user_admin_email_form.
 *
 * @see gn2_user_admin_email_form_submit()
 */
function gn2_user_admin_email_form_validate($form, &$form_state) {
  $mail = $form_state['values']['mail'];
  if (!valid_email_address($mail)) {
    form_set_error('mail', t('@mail is not a valid email address.', array('@mail' => $mail,)));
  }
  // Check for duplicated email address.
  if ($mail != $form_state['user']->mail) {
    $loaded_user = user_load_by_mail($mail);
    if ($loaded_user) {
      form_set_error('mail', t('The entered email address (%mail) has already been registered on this site by another user.', array ('%mail' => $mail)));
    }
  }
}

/**
 * Form submission handler for gn2_user_admin_email_form.
 *
 * @see gn2_user_admin_email_form_validate()
 */
function gn2_user_admin_email_form_submit($form, &$form_state) {
  global $user;

  $account = $form['_account']['#value'];
  $account = $form_state['user'];

  user_module_invoke('submit', $form_state['values'], $account, 'account');
  user_save($account, array('mail' => $form_state['values']['mail']));

  drupal_set_message(t('Email has been changed.'));
}
