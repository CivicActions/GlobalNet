<?php
/**
 * @file
 * User operations form.
 *
 * This form allows an HR or Org Manager to perform operations on a user object.
 * Allowed operations are block, unblock, unlock.
 */

/**
 * Form builder; the user registration form.
 *
 * @param array $form
 *   The form array.
 * @param array $form_state
 *   The form_state array.
 * @param string $op
 *   The operation to perform. Can be block, unblock or unlock.
 * @param object $user
 *   The User object on which to perform the op.
 *
 * @ingroup forms
 */
function gn2_manager_access_operations_form(array $form, array &$form_state, $op, $user) {
  $operations = array('block', 'unblock', 'unlock');
  // If the operation is not in the $operations array go back to dashboard.
  if (!in_array($op, $operations)) {
    drupal_set_message(t('An error occurred'), 'error', FALSE);
    drupal_goto('admin/manage/users');
  }
  drupal_set_title(t('!op user @user', array(
      '!op' => ucfirst($op),
      '@user' => ucfirst($user->name),
    )));

  $form['header'] = array(
    '#markup' => '<h4>' . t('Are you sure that you want to !op user !user?',
          array('!op' => $op, '!user' => $user->name)) . '</h4>',
    '#attributes' => array(
      'class' => array('latest-activity--item'),
    ),
  );

  $form['operation'] = array(
    '#type' => 'hidden',
    '#value' => $op,
  );

  $form['user_id'] = array(
    '#type' => 'hidden',
    '#value' => $user->uid,
  );

  $form['actions']['submit'] = array(
    '#type' => 'submit',
    '#value' => t('!op user', array('!op' => ucfirst($op))),
    '#attributes' => array(
      'class' => array('admin-button-blue'),
    ),
  );

  $form['actions']['cancel'] = array(
    '#markup' => l(t('Cancel'), 'admin/manage/users',
            array('attributes' => array('class' => array('admin-button')))),
  );

  return $form;
}

/**
 * Form validation handler for gn2_manager_access_operations_form.
 *
 * @see gn2_manager_access_operations_form_submit()
 */
function gn2_manager_access_operations_form_validate($form, $form_state) {
  if ($form_state['values']['operation'] !== arg(4) && $form_state['values']['user_id'] !== arg(5)) {
    drupal_set_message(t('An error occurred'), 'error', FALSE);
    $destination = filter_input(INPUT_GET, 'destination');
    if ($destination) {
      drupal_goto($destination);
    }
    else {
      drupal_goto('admin/manage/users');
    }
  }
}

/**
 * Form validation handler for gn2_manager_access_operations_form.
 *
 * @see gn2_manager_access_operations_form_validate()
 */
function gn2_manager_access_operations_form_submit($form, $form_state) {
  $op = $form_state['values']['operation'];
  $uid = $form_state['values']['user_id'];
  $account = user_load($uid);

  if ($op == 'block' && is_object($account)) {
    // Use core function to block account.
    user_block_user_action($account);
    $message = t('User !name has been blocked.', array('!name' => $account->name));
    $type = 'status';
  }
  elseif (($op == 'unblock' || $op == 'unlock') && is_object($account)) {
    // Save the user object, setting status to 1.
    user_save($account, array('status' => 1));
    $message = t('User !name has been !type.',
            array('!name' => $account->name, '!type' => $op . 'ed'));
    $type = 'status';
  }
  else {
    $message = t('An error occurred');
    $type = 'error';
  }

  drupal_set_message($message, $type, FALSE);
  $destination = filter_input(INPUT_GET, 'destination');
  if ($destination) {
    drupal_goto($destination);
  }
  else {
    drupal_goto('admin/manage/users');
  }
}
