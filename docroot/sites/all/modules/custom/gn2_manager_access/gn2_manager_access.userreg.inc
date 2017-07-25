<?php
/**
 * @file
 * User registration form.
 *
 * This code was taken directly from user.module, with some modifications. We
 * have removed the access check looking for administer users perms and added
 * our own access checking.
 */

/**
 * Form builder; the user registration form.
 *
 * @ingroup forms
 *
 * @see user_account_form()
 * @see user_account_form_validate()
 * @see user_register_submit()
 */
function gn2_manager_access_user_form($form, &$form_state) {
  global $user;

  $admin = gn2_manager_access_user_create_access();

  // Pass access information to the submit handler. Running an access check
  // inside the submit function interferes with form processing and breaks
  // hook_form_alter().
  $form['administer_users'] = array(
    '#type' => 'value',
    '#value' => $admin,
  );

  $form['#user'] = drupal_anonymous_user();
  $form['#user_category'] = 'register';

  $form['#attached']['library'][] = array('system', 'jquery.cookie');
  $form['#attributes']['class'][] = 'user-info-from-cookie';

  // Start with the default user account fields.
  user_account_form($form, $form_state);

  // Add the password fields if they don't already exist.
  if (!array_key_exists('pass', $form['account'])) {
    $form['account']['pass'] = array(
      '#type' => 'password_confirm',
      '#size' => 25,
      '#description' => t('Provide a password for the new account in both fields.'),
      '#required' => TRUE,
    );
  }

  // Add the Status radio buttons if they don't already exist.
  if (!array_key_exists('status', $form['account'])) {
    $form['account']['status'] = array(
      '#type' => 'radios',
      '#title' => t('Status'),
      '#default_value' => $status,
      '#options' => array(t('Blocked'), t('Active')),
    );
  }
  else {
    $form['account']['status']['#access'] = $admin;
    $form['account']['status']['#weight'] = 10;
    $form['account']['status']['#default_value'] = 1;
  }
  // Add the Notify checkbox if it doesn't already exist.
  if (!array_key_exists('notify', $form['account'])) {
    $form['account']['notify'] = array(
      '#type' => 'checkbox',
      '#title' => t('Notify user of new account'),
      '#access' => $admin,
    );
  }
  else {
    $form['account']['notify']['#access'] = $admin;
    $form['account']['notify']['#weight'] = 11;
  }

  // Attach field widgets, and hide the ones where the 'user_register_form'
  // setting is not on.
  $langcode = entity_language('user', $form['#user']);
  field_attach_form('user', $form['#user'], $form, $form_state, $langcode);
  foreach (field_info_instances('user', 'user') as $field_name => $instance) {
    if (empty($instance['settings']['user_register_form'])) {
      $form[$field_name]['#access'] = FALSE;
    }
  }

  // Attaches Language field selector.
  locale_language_selector_form($form, $form_state, $form['#user']);
  $form['locale']['#access'] = TRUE;

  if ($admin) {
    // Redirect back to page which initiated the create request;
    // usually admin/people/create.
    $form_state['redirect'] = $_GET['q'];
  }

  $form['actions'] = array('#type' => 'actions');
  $form['actions']['submit'] = array(
    '#type' => 'submit',
    '#value' => t('Create new account'),
  );

  $form['#validate'][] = 'user_register_validate';
  // Add the final user registration form submit handler.
  $form['#submit'][] = 'user_register_submit';

  return $form;
}
