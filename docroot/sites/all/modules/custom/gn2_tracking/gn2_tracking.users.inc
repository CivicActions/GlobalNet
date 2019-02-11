<?php

/**
 * @file
 * This file contains the individual user interactions report for the GN2 Tracking module.
 */

/**
 * Creates main report for user interactions
 *
 * @param object $node
 *   The Course node object.
 *
 * @return array
 */
function gn2_tracking_users_main_page($node) {
  $rows = [];
  // Get the Course sessions.
  $sessions = gn2_tracking_get_session_data($node);
  // Get a count of all possible interactions.
  $total_interactions = gn2_tracking_get_total_interactions($sessions);
  // Get all of the Course members.
  $members = gn2_tracking_get_course_members($node->nid);
  foreach ($members as $user) {
    // Get the user's interactions.
    $completed = gn2_tracking_get_completed($user->etid, $node->nid);
    $rows[] = [
      [
        'data' => ($user->first && $user->last) ? $user->first . ' ' . $user-> last . ' (' . $user->name . ')' : $user->name,
        'class' => 'level1',
      ],
      floor((count($completed)/$total_interactions) * 100) . '% (' . count($completed) . ' of ' . $total_interactions . ' interactions)',
      l(t('View progress'), 'node/' . $node->nid . '/metrics/member/progress/' . $user->etid)
    ];
  }

  // Get the CSV icon.
  $csv_icon = gn2_tracking_csv_icon();

  $build = [
    'header' => [
      '#type' => 'markup',
      '#markup' => '<h2>' . t('Member interactions for %node', ['%node' => $node->title]) . '</h2>',
    ],
    'table' => [
      '#theme' => 'table',
      '#rows' => $rows,
      '#header' => [
        'Member',
        '% completed',
        'View',
      ],
      '#attributes' => [
        'id' => 'user-report',
      ],
    ],
    'footer' => [
      '#type' => 'markup',
      '#markup' => l($csv_icon, 'node/' . $node->nid . '/metrics/download/progress/1', [
        'html' => TRUE,
        '#attributes' => [
          'class' => ['csv'],
        ],
      ]),
    ],
  ];

  return $build;
}

/**
 * Creates individual report for user's interactions.
 *
 * @param object $node
 *   The Course node object.
 * @param int $uid
 *   The user's ID.
 *
 * @return array
 */
function gn2_tracking_users_progress_report($node, $uid) {
  // Get the user's completed interactions.
  $completed = gn2_tracking_get_completed($uid, $node->nid);
  // Get the Course interactions.
  $sessions = gn2_tracking_get_session_data($node);
  // Compare the completed interactions with all possible interactions.
  $rows = gn2_tracking_parse_completed($sessions, $completed);
  // Load the user so that we can get the user's first and last name.
  $user = user_load($uid);
  $first = field_get_items('user', $user, 'field_name_first');
  $last = field_get_items('user', $user, 'field_name_last');
  $name = ($first && $last) ? $first[0]['value'] . ' ' . $last[0]['value'] . ' (' . $user->name . ')' : $user->name;

  // Get the CSV icon.
  $csv_icon = gn2_tracking_csv_icon();

  $build = [
    'header' => [
      '#type' => 'markup',
      '#markup' => '<h2>' . t('!member interactions for %node', ['!member' => $name, '%node' => $node->title]) . '</h2>',
    ],
    'table' => [
      '#theme' => 'table',
      '#rows' => $rows,
      '#header' => [
        'Interaction',
        'Status',
      ],
      '#attributes' => [
        'id' => 'user-report',
      ],
    ],
    'footer' => [
      '#type' => 'markup',
      '#markup' => l($csv_icon, 'node/' . $node->nid . '/metrics/download/member-progress/' . $uid, [
        'html' => TRUE,
        '#attributes' => [
          'class' => ['csv'],
        ],
      ]),
    ],
  ];

  return $build;
}

/**
 * Creates the array to create the table to be displayed.
 *
 * @param array $sessions
 *   The Course sessions with field collections.
 * @param int $member_count
 *   The total number of members for the Course.
 * @param int $nid
 *   The Course node ID.
 *
 * @return array
 *   Returns the array with the table rows.
 */
function gn2_tracking_parse_completed(array $sessions, $completed) {
  $rows = [];
  // Level 1 sessions.
  foreach ($sessions as $key => $value) {
    $title = field_get_items('field_collection_item', $value['session'], 'field_title');
    $rows[$key] = [
      'data' => [
        [
          'data' => t('Session: %session', ['%session' => $title[0]['value']]),
          'class' => ['level1'],
        ],
        [
          'data' => (in_array($key, $completed)) ? '&#10003;' : '&#10005;',
          'class' => (in_array($key, $completed)) ? 'complete' : 'incomplete',
        ],
      ],
    ];
    // Get Level 2 sessions.
    if (!empty($value['children'])) {
      foreach ($value['children'] as $id => $child) {
        $child_title = field_get_items('field_collection_item', $child['session'], 'field_title');
        $rows[$id] = [
          'data' => [
            [
              'data' => t('Session: %session', ['%session' => $child_title[0]['value']]),
              'class' => ['level2'],
            ],
            [
              'data' => (in_array($id, $completed)) ? '&#10003;' : '&#10005;',
              'class' => (in_array($id, $completed)) ? 'complete' : 'incomplete',
            ],
          ],
        ];
        // Add associated media.
        if (!empty($child['session']->field_media)) {
          $files = field_get_items('field_collection_item', $child['session'], 'field_media');
          foreach ($files as $file) {
            $rows[$file['fid']] = [
              'data' => [
                [
                  'data' => t('File: %session', ['%session' => $file['filename']]),
                  'class' => ['level2', 'file'],
                ],
                [
                  'data' => (in_array($file['fid'], $completed)) ? '&#10003;' : '&#10005;',
                  'class' => (in_array($file['fid'], $completed)) ? 'complete' : 'incomplete',
                ],
              ],
            ];
          }
        }
        // Get Level 3 sessions.
        if (!empty($child['children'])) {
          foreach ($child['children'] as $tid => $third) {
            $third_title = field_get_items('field_collection_item', $third['session'], 'field_title');
            $rows[$tid] = [
              'data' => [
                [
                  'data' => t('Session: %session', ['%session' => $third_title[0]['value']]),
                  'class' => ['level3'],
                ],
                [
                  'data' => (in_array($tid, $completed)) ? '&#10003;' : '&#10005;',
                  'class' => (in_array($tid, $completed)) ? 'complete' : 'incomplete',
                ],
              ],
            ];
            // Add associated media.
            if (!empty($third['session']->field_media)) {
              $files = field_get_items('field_collection_item', $third['session'], 'field_media');
              foreach ($files as $file) {
                $rows[$file['fid']] = [
                  'data' => [
                    [
                      'data' => t('File: %session', ['%session' => $file['filename']]),
                      'class' => ['level3', 'file'],
                    ],
                    [
                      'data' => (in_array($file['fid'], $completed)) ? '&#10003;' : '&#10005;',
                      'class' => (in_array($file['fid'], $completed)) ? 'complete' : 'incomplete',
                    ],
                  ],
                ];
              }
            }
          }
        }
      }
    }
  }
  return $rows;
}

/**
 * Queries for all completed user's interactions for a given Course.
 *
 * @param int $uid
 *   The User's ID.
 * @param int $nid
 *   The Course node ID.
 *
 * @return mixed
 */
function gn2_tracking_get_completed($uid, $nid) {
  $count = db_query('SELECT sid FROM {gn2_tracking} WHERE uid = :uid AND nid = :nid',
    [':uid' => $uid, ':nid' => $nid])->fetchCol();
  return $count;
}
