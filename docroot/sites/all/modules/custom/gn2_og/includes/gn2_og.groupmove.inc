<?php
/**
 * @file
 * Functions to move add group members to another group.
 */

/**
 * Form constructor for the move user form.
 *
 * @see gn2_og_move_users_form_validate()
 * @see gn2_og_move_users_form_submit()
 *
 * @ingroup forms.
 */
function gn2_og_move_users_form($form, &$form_state, $gid) {
  drupal_add_js(drupal_get_path('module', 'gn2_og') . '/js/gn2_og.move.js');
  include_once drupal_get_path('module', 'gn2_og') . '/includes/gn2_og.groupadd.inc';
  $group = node_load($gid);
  
  $form['groups'] = array(
    '#type' => 'textfield',
    '#title' => t('Choose Group(s)'),
    '#maxlength' => 1024,
    '#multiple' => TRUE,
    '#autocomplete_path' => 'move/groups/node/' . $gid . '/autocomplete',
    '#required' => TRUE,
    '#description' => t('Enter a comma separated list of groups, or begin typing the name of a group to use the autocomplete functionality.'),
  );

  $members = gn2_og_get_members_list($group);
  $form['members'] = array(
    '#title' => t('Choose members'),
    '#type' => 'checkboxes',
    '#options' => $members,
    '#required' => TRUE,
  );

  $form['submit'] = array(
    '#type' => 'submit',
    '#value' => t('Add user(s)'),
  );

  return $form;
}

/**
 * Form validation handler for the move user form.
 *
 * @see gn2_og_move_users_form_submit()
 */
function gn2_og_move_users_form_validate($form, &$form_state) {

}

/**
 * Form submission handler for the move user form.
 *
 * @see gn2_og_move_users_form_validate()
 */
function gn2_og_move_users_form_submit($form, &$form_state) {
  $add_to = array();
  $users = array();
  $groups = array_map('trim', explode(',', rtrim($form_state['values']['groups'], ', ')));
 
  foreach ($groups as $group_name) {
    if (preg_match("/\[([^\]]*)\]/", $group_name, $match)) {
      $add_to[] = $match[1];
    }
  }

  foreach ($form_state['values']['members'] as $uid) {
    if ($uid) {
      $user = user_load($uid);
      if (is_object($user)) {
        $users[] = array(
          'entity' => $user,
          'entity type' => 'user',
          'state' => OG_STATE_ACTIVE,
        );
      }
    }
  }
  
  if (!empty($add_to) && !empty($users)) {
    gn2_og_move_users_add_to_batch($add_to, $users);
  }
}

/**
 * 
 */
function gn2_og_move_users_add_to_batch($groups, $users) {
  $operations = array();
  foreach ($groups as $gid) {
    foreach ($users as $user) {
      $operations[] = array(
        'gn2_og_move_users_move_user', 
        array($gid, $user),
      );
    }
  }

  $batch = array(
    'operations' => $operations,
    'finished' => 'gn2_og_move_users_batch_finished',
    'title' => t('Moving users'),
    'init_message' => t('Moving @count users', array('@count' => count($operations))),
    'progress_message' => t('Moved @current out of @total'),
    'error_message' => t('Error moving users'),
    'file' => drupal_get_path('module', 'gn2_og') . '/includes/gn2_og.groupmove.inc',
  );

  batch_set($batch);
  $path = current_path();
  batch_process($path);
}

/**
 * 
 */
function gn2_og_move_users_move_user($gid, $user, &$context) {
  if (!isset($context['sandbox']['progress'])) {
    $context['sandbox']['progress'] = 0;
    $context['sandbox']['current_user'] = 0;
  }
  og_group('node', $gid, $user);
  $context['results'][] = $user['entity']->name;
  $context['sandbox']['progress']++;
  $context['sandbox']['current_user'] = $user['entity']->name;
}

/**
 * 
 */
function gn2_og_move_users_batch_finished($success, $results, $operations) {
  if ($success) {
    drupal_set_message(t('@count users moved successfully', array('@count' => count($results))));
  }
  else {
    $error_operation = reset($operations);
    $message = t('An error occurred while processing %error_operation with arguments: @arguments', array(
      '%error_operation' => $error_operation[0],
      '@arguments' => print_r($error_operation[1], TRUE)
    ));
    drupal_set_message($message, 'error');
  }
}

/**
 * Gets a list of members for a given group.
 *
 * @param object $group
 *   The Group node object.
 *
 * @return array
 *   Returns an array of key/value pairs uid/username
 */
function gn2_og_get_members_list($group) {
  $list = array();
  $list['all'] = t('Select all');
  $members = og_get_group_members_properties($group, array(), 'members', 'node');
  if ($members) {
    foreach ($members as $uid) {
      $list[$uid] = gn2_base_config_get_user_proper_name($uid);
    }
  }
  return $list;
}
