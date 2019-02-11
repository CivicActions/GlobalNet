<?php

/**
 * @file
 * Generates the OG User roles report.
 */

/**
 * OG Roles report main page.
 */
function gn2_report_og_user_roles() {
  $roles = gn2_report_get_og_roles();
  $role_count = [];
  $content = [
    '#theme' => 'page',
    '#type' => 'page',
    '#show_messages' => TRUE,
  ];
  foreach ($roles as $rid => $role_data) {
    $role_count[$role_data->group_bundle][$rid] = [
      'count' => gn2_report_get_role_count($rid),
      'name' => $role_data->name,
    ];
  }
  if (!empty($role_count)) {
    $content['content'] = gn2_report_sort_roles_data($role_count);
    $content['content']['system_main'] = [];
  }
  return $content;
}

/**
 * Queries for a list of all OG roles except non-member and member.
 *
 * @return mixed
 *   Returns an array of role data or NULL.
 */
function gn2_report_get_og_roles() {
  $dont_list = [
    'non-member',
    'member',
  ];
  $query = db_select('og_role', 'ogr')
    ->fields('ogr')
    ->condition('name', $dont_list, 'NOT IN');
  return $query->execute()->fetchAllAssoc('rid');
}

/**
 * Queries for a count for a given role ID.
 *
 * @param int $rid
 *   The OG Role ID.
 *
 * @return mixed
 *   Return the number of user with a given role or 0.
 */
function gn2_report_get_role_count($rid) {
  $query = db_select('og_users_roles', 'our')
    ->fields('our', ['uid'])->distinct()
    ->condition('our.rid', $rid)
    ->condition('our.uid', 1, '<>');
  $row_count = $query->countQuery()->execute()->fetchField();
  return $row_count;
}

/**
 * Sort the role data into table themeable arrays.
 *
 * @param array $role_count
 *   An array containing the count and the name of the role.
 *
 * @return array
 *   Returns a render array.
 */
function gn2_report_sort_roles_data(array $role_count) {
  $items = [];
  foreach ($role_count as $type => $role) {
    $items[$type] = [
      '#theme' => 'table',
      '#header' => [
        [
          'data' => t('!type roles', ['!type' => ucwords($type)]),
          'colspan' => 2,
        ],
      ],
      '#attributes' => [],
    ];
    foreach ($role as $rid => $count) {
      $items[$type]['#rows'][] = [
        $count['name'] . ' (' . $count['count'] . ')',
        l('View users »', 'admin/reports/og-role/' . $rid),
      ];
    }
  }
  return $items;
}
