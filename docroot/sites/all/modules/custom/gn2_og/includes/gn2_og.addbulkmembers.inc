<?php
/**
 * @file
 * Functions to add bulk members.
 */

/**
 * Form constructor for the add bulk members form.
 */
function _gn2_og_add_bulk_members($form, &$form_state, $gid) {
  $form['users'] = array(
    '#type' => 'textarea',
    '#title' => t('Members'),
    '#description' => 'Type the username(s) or paste a plain-text with usernames separated with commas.',
    '#rows' => 10,
    '#resizable' => TRUE,
  );
  $form['gid'] = array(
    '#type' => 'hidden',
    '#value' => $gid,
  );
  $form['submit'] = array(
    '#type' => 'submit',
    '#value' => t('Add'),
  );
  $form['cancel'] = array(
    '#markup' => l(t('Cancel'), 'node/' . $gid, array('attributes' => array('class' => array('button')))),
  );

  return $form;
}

/**
 * Form submission handler.
 */
function _gn2_og_add_bulk_members_submit($form, &$form_state) {
  $gid = $form_state['values']['gid'];
  $users = array_map('trim', explode(',', rtrim($form_state['values']['users'], ', ')));
  $added_users = array();

  foreach ($users as $username) {
    $result = db_select('users', 'u')
      ->fields('u', array('uid'))
      ->condition('name', $username)
      ->execute()
      ->fetchAll();

    if ($result) {
      foreach ($result as $obj) {
        $user = user_load($obj->uid);
        $added_users['users'][] = l($user->name, 'user/' . $obj->uid);
        $values = array(
          'entity' => $user,
          'entity type' => 'user',
          'state' => OG_STATE_ACTIVE,
        );

        og_group('node', $gid, $values);
      }
    }
    else {
      $added_users['errors'][] = t('User %name does not exist.', array('%name' => $username));
    }
  }

  $usr = format_plural(count($added_users), t('User'), t('Users'));
  $message = theme_item_list(array(
      'items' => $added_users['users'],
      'title' => t('@user added:', array('@user' => $usr)),
      'type' => 'ul',
      'attributes' => array(),
    )
  );
  drupal_set_message($message);

  if (array_key_exists('errors', $added_users)) {
    $message = theme_item_list(array(
        'items' => $added_users['errors'],
        'title' => NULL,
        'type' => 'ul',
        'attributes' => array(),
      )
    );
    drupal_set_message($message, 'error', FALSE);
  }
}
