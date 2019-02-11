<?php

/**
 * @file
 * Provides a list of users with the given role ID.
 */

/**
 * Creates a page listing users with a given role ID.
 *
 * @param int $rid
 *   The OG role ID to list.
 *
 * @return array
 *   Returns a render array.
 */
function gn2_report_users_by_role($rid) {
  $role_data = db_query('SELECT * FROM {og_role} WHERE rid = :rid', [
    ':rid' => $rid,
  ])->fetch();

  $content = [
    '#theme' => 'page',
    '#type' => 'page',
    '#show_messages' => TRUE,
  ];
  $content['content']['system_main']['header'] = [
    '#markup' => '<h2>' . t('%bundle users with the %role role', [
      '%bundle' => ucfirst($role_data->group_bundle),
      '%role' => $role_data->name,
    ]) . '</h2>',
  ];
  $content['content']['system_main']['main'] = gn2_reports_create_user_list($rid);
  return $content;
}

/**
 * Create the paginated user list.
 *
 * @param int $rid
 *   The OG role ID.
 *
 * @return array
 *   Returns the pagination render array.
 */
function gn2_reports_create_user_list($rid) {
  $users = gn2_reports_get_users_by_role($rid);
  $rows = gn2_reports_create_rows($rid, $users);
  $header = [
    ['data' => t('Username')],
    ['data' => t('First name')],
    ['data' => t('Last name')],
    ['data' => t('Groups')],
    ['data' => t('View')],
    ['data' => t('Edit')],
  ];
  $build = [
    'pager_table' => [
      '#theme' => 'table',
      '#header' => $header,
      '#rows' => $rows,
      '#empty' => t('Empty'),
    ],
    'pager_pager' => [
      '#theme' => 'pager',
    ],
  ];
  return $build;
}

/**
 * Queries for the user data for given an OG role ID.
 *
 * @param int $rid
 *   OG role ID.
 *
 * @return mixed
 *   Returns an array or NULL.
 */
function gn2_reports_get_users_by_role($rid) {
  $query = db_select('og_users_roles', 'our')->extend('PagerDefault');
  $query->fields('our', ['uid'])->distinct();
  $query->join('users', 'u', 'u.uid = our.uid');
  $query->addField('u', 'name');
  $query->join('field_data_field_name_first', 'first', 'first.entity_id = u.uid');
  $query->addField('first', 'field_name_first_value', 'first');
  $query->join('field_data_field_name_last', 'last', 'last.entity_id = u.uid');
  $query->addField('last', 'field_name_last_value', 'last');
  $query->condition('our.rid', $rid);
  $query->condition('our.uid', 1, '<>');
  $query->condition('first.bundle', 'user', '=');
  $query->condition('last.bundle', 'user', '=');
  $query->limit(50);
  $query->orderBy('u.name');
  return $query->execute()->fetchAllAssoc('uid');
}

/**
 * Create the table rows for the paginated view.
 *
 * @param int $rid
 *   The OG role ID.
 * @param array $users
 *   The user's data.
 *
 * @return array
 *   Returns an array of row data.
 */
function gn2_reports_create_rows($rid, array $users) {
  $rows = [];
  foreach ($users as $uid => $user_data) {
    $groups = gn2_reports_list_users_groups($rid, $uid);
    $rows[] = [
      l($user_data->name, 'user/' . $uid),
      $user_data->first,
      $user_data->last,
      $groups,
      l('View profile', 'user/' . $uid),
      l('Edit', 'user/' . $uid . '/edit'),
    ];
  }
  return $rows;
}

/**
 * Creates the paginated list of users.
 *
 * @param int $rid
 *   OG role ID.
 * @param int $uid
 *   User's ID.
 *
 * @return null|string
 */
function gn2_reports_list_users_groups($rid, $uid) {
  $groups = gn2_reports_get_users_groups($rid, $uid);
  if ($groups) {
    $items = [];
    foreach ($groups as $nid => $group) {
      $items[] = l($group->title, 'node/' . $nid);
    }
  }

  return (isset($items)) ? theme_item_list([
    'items' => $items,
    'title' => NULL,
    'type' => 'ul',
    'attributes' => [],
  ]) : NULL;
}

/**
 * Query for a given users groups for a given role ID.
 *
 * @param int $rid
 *   OG role ID.
 * @param int $uid
 *   User's ID.
 *
 * @return mixed
 *   Returns an array or NULL.
 */
function gn2_reports_get_users_groups($rid, $uid) {
  $query = db_select('og_users_roles', 'our');
  $query->fields('our', ['gid']);
  $query->join('node', 'n', 'n.nid = our.gid');
  $query->addField('n', 'title');
  $query->condition('our.rid', $rid);
  $query->condition('our.uid', $uid);
  $query->orderBy('n.title', 'ASC');
  return $query->execute()->fetchAllAssoc('gid');
}
