<?php
/**
 * @file
 * Adds functionality for adding multiple users to multiple groups.
 */

/**
 * Form constructor for the multi user multi group form.
 */
function gn2_og_multi_user_multi_group_form($form, &$form_state) {
  $form['users'] = array(
    '#type' => 'textfield',
    '#title' => t('Add Users'),
    '#maxlength' => 1024,
    '#multiple' => TRUE,
    '#autocomplete_path' => 'users/autocomplete',
    '#required' => TRUE,
    '#description' => t('Enter a comma separated list of users, or begin typing the name of a user to use the autocomplete functionality.'),
  );

  $form['groups'] = array(
    '#type' => 'textfield',
    '#title' => t('To Groups'),
    '#maxlength' => 1024,
    '#multiple' => TRUE,
    '#autocomplete_path' => 'groups/autocomplete',
    '#required' => TRUE,
    '#description' => t('Enter a comma separated list of groups, or begin typing the name of a group to use the autocomplete functionality.'),
  );

  $form['submit'] = array(
    '#type' => 'submit',
    '#value' => t('Add user(s)'),
  );

  return $form;
}

/**
 * Form submission handler for the multi user multi group form.
 */
function gn2_og_multi_user_multi_group_form_submit($form, $form_state) {
  $groups = array_map('trim', explode(',', rtrim($form_state['values']['groups'], ', ')));
  $users = array_map('trim', explode(',', rtrim($form_state['values']['users'], ', ')));
  $added_users = array();
  $added_groups = array();

  foreach ($users as $user_name) {
    $uid = db_query('SELECT uid FROM {users} WHERE name = :uname', array(':uname' => $user_name))->fetchField();
    if ($uid) {
      $added_users['users'][] = l($user_name, 'user/' . $uid);
      $values = array(
        'entity' => user_load($uid),
        'entity type' => 'user',
        'state' => OG_STATE_ACTIVE,
      );
      $added_groups = gn2_og_add_user_to_groups($values, $groups);
    }
    else {
      $added_users['errors'][] = t('User %name does not exist.', array('%name' => $user_name));
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
  $grp = format_plural(count($added_groups), t('group'), t('groups'));
  $message .= theme_item_list(array(
      'items' => $added_groups['groups'],
      'title' => t('To @group:', array('@group' => $grp)),
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

  if (array_key_exists('errors', $added_groups)) {
    $message = theme_item_list(array(
        'items' => $added_groups['errors'],
        'title' => NULL,
        'type' => 'ul',
        'attributes' => array(),
      )
    );
    drupal_set_message($message, 'error', FALSE);
  }
}

/**
 * Add the user to all of the groups.
 *
 * @param array $values
 *   The OG values to add to the Group.
 * @param array $groups
 *   The Groups to which the user will be added.
 *
 * @return array
 *   An array of link to the group.
 */
function gn2_og_add_user_to_groups(array $values, array $groups) {
  $types = array(
    'course',
    'course_group',
    'event',
    'group',
    'organization',
  );
  $added_groups = array();

  foreach ($groups as $key => $group_name) {
    if (preg_match("/\[([^\]]*)\]/", $group_name, $match)) {
      og_group('node', $match[1], $values);
      $added_groups['groups'][$key] = l($group_name, 'node/' . $match[1]);
    }
    else {
      $added_groups['errors'][$key] = t('Group %name does not exist.', array('%name' => $group_name));
    }
  }

  return $added_groups;
}

/**
 * Autocomplete helper function.
 */
function _users_autocomplete($string = '') {
  $matches = array();

  if ($string) {
    $items = array_map('trim', explode(',', $string));
    $last_item = array_pop($items);
    $prefix = count($items) ? implode(', ', $items) . ', ' : '';

    // Search table `users` for user names that begin with the letters the user
    // enters in the form.
    $query = db_select('users', 'u');
    $result = $query
            ->fields('u', array('name'))
            ->condition('u.name', '%' . db_like($last_item) . '%', 'LIKE')
            ->range(0, 10)
            ->execute();
    // Add matches to $matches.
    foreach ($result as $row) {
      $name = $row->name;
      $matches[$prefix . $name . ', '] = check_plain($name);
    }
  }
  drupal_json_output($matches);
}

/**
 * Autocomplete helper function.
 */
function _groups_autocomplete($string = '') {
  $matches = array();
  $groups = array(
    'course',
    'course_group',
    'event',
    'group',
    'organization',
  );

  if ($string) {
    // Get manager's Organization.
    $org_id = gn2_context_get_org_id();

    $items = array_map('trim', explode(',', $string));
    $last_item = array_pop($items);
    $prefix = count($items) ? implode(', ', $items) . ', ' : '';

    // Search table `node` for groups that begin with the letters the user
    // enters in the form.
    $query = db_select('node', 'n');
    $query->fields('n', array('title', 'nid'));
    $query->join('node_revision', 'nr', 'nr.vid = n.vid');
    // If we have an Org ID, only return groups associated with that Org.
    if (isset($org_id)) {
      $query->join('field_data_field_parent_organization', 'p', 'p.revision_id = n.vid');
      $query->condition('p.field_parent_organization_target_id', $org_id);
    }
    $query->condition('n.title', '%' . db_like($last_item) . '%', 'LIKE');
    $query->condition('n.type', $groups, 'IN');
    $query->range(0, 10);
    $result = $query->execute();

    // Add matches to $matches.
    foreach ($result as $row) {
      $title = $row->title;
      $matches[$prefix . $title . ' [' . $row->nid . '], '] = check_plain($title);
    }
  }
  drupal_json_output($matches);
}
