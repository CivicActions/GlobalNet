<?php

/**
 * @file
 * This file contains the main report for the GN2 Tracking module.
 */

/**
 * Creates the main Course report.
 * @param object $node
 *   The Course node object.
 *
 * @return array
 *   Returns the rendered HTML report.
 */
function gn2_tracking_course_report($node) {
  $sessions = gn2_tracking_get_session_data($node);
  // Get the # of Group members.
  $member_count = gn2_tracking_get_course_info($node->nid);
  // Create the Interactions table.
  $session_parsed = gn2_tracking_parse_fields($sessions, $member_count, $node->nid);
  // Header array.
  $header = [
    'Interaction',
    'Unique Clicks',
    'Completed',
    'View',
  ];


  // Get the CSV icon.
  $csv_icon = gn2_tracking_csv_icon();

  $build = [
    'header' => [
      '#type' => 'markup',
      '#markup' => '<h2>' . t('User interactions for %node', ['%node' => $node->title]) . '</h2>',
    ],
    'table' => [
      '#theme' => 'table',
      '#rows' => $session_parsed,
      '#header' => $header,
      '#attributes' => [
        'id' => 'course-report',
      ],
    ],
    'footer' => [
      '#type' => 'markup',
      '#markup' => l($csv_icon, 'node/' . $node->nid . '/metrics/download/interactions/1', [
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
function gn2_tracking_parse_fields(array $sessions, $member_count, $nid) {
  $rows = [];
  // Level 1 sessions.
  foreach ($sessions as $key => $value) {
    $title = field_get_items('field_collection_item', $value['session'], 'field_title');
    $interactions = gn2_tracking_get_interaction_count($key, $nid);
    $rows[$key] = [
      'data' => [
        [
          'data' => t('Session: %session', ['%session' => $title[0]['value']]),
          'class' => ['level1'],
        ],
        $interactions,
        floor((float) ($interactions / $member_count) * 100) . '%',
        l(t('View'), 'node/' . $nid . '/metrics/progress/' . $key),
      ],
    ];
    // Get Level 2 sessions.
    if (!empty($value['children'])) {
      foreach ($value['children'] as $id => $child) {
        $child_title = field_get_items('field_collection_item', $child['session'], 'field_title');
        $child_interactions = gn2_tracking_get_interaction_count($id, $nid);
        $rows[$id] = [
          'data' => [
            [
              'data' => t('Session: %session', ['%session' => $child_title[0]['value']]),
              'class' => ['level2'],
            ],
            $child_interactions,
            floor((float) ($child_interactions / $member_count) * 100) . '%',
            l(t('View'), 'node/' . $nid . '/metrics/progress/' . $id),
          ],
        ];
        // Add associated media.
        if (!empty($child['session']->field_media)) {
          $files = field_get_items('field_collection_item', $child['session'], 'field_media');
          foreach ($files as $file) {
            $file_interactions = gn2_tracking_get_interaction_count($file['fid'], $nid, 'Viewed file');
            $rows[$file['fid']] = [
              'data' => [
                [
                  'data' => t('File: %session', ['%session' => $file['filename']]),
                  'class' => ['level2', 'file'],
                ],
                $file_interactions,
                floor((float) ($file_interactions / $member_count) * 100) . '%',
                l(t('View'), 'node/' . $nid . '/metrics/progress/' . $file['fid']),
              ],
            ];
          }
        }
        // Get Level 3 sessions.
        if (!empty($child['children'])) {
          foreach ($child['children'] as $tid => $third) {
            $third_title = field_get_items('field_collection_item', $third['session'], 'field_title');
            $third_interactions = gn2_tracking_get_interaction_count($tid, $nid);
            $rows[$tid] = [
              'data' => [
                [
                  'data' => t('Session: %session', ['%session' => $third_title[0]['value']]),
                  'class' => ['level3'],
                ],
                $third_interactions,
                floor((float) ($third_interactions / $member_count) * 100) . '%',
                l(t('View'), 'node/' . $nid . '/metrics/progress/' . $tid)
              ],
            ];
            // Add associated media.
            if (!empty($third['session']->field_media)) {
              $files = field_get_items('field_collection_item', $third['session'], 'field_media');
              foreach ($files as $file) {
                $file_interactions = gn2_tracking_get_interaction_count($file['fid'], $nid, 'Viewed file');
                $rows[$file['fid']] = [
                  'data' => [
                    [
                      'data' => t('File: %session', ['%session' => $file['filename']]),
                      'class' => ['level3', 'file'],
                    ],
                    $file_interactions,
                    floor((float) ($file_interactions / $member_count) * 100) . '%',
                    l(t('View'), 'node/' . $nid . '/metrics/progress/' . $file['fid']),
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
 * Queries for a count of the members of a given Course.
 *
 * @param int $gid
 *   The Group/Node ID for the Course.
 *
 * @return mixed
 *   Returns a count of members or NULL.
 */
function gn2_tracking_get_course_info($gid) {
  $member_count = db_query('SELECT COUNT(id) FROM {og_membership} WHERE gid = :gid AND entity_type = :type',
    [':gid' => $gid, ':type' => 'user'])->fetchField();
  return $member_count;
}

/**
 * Queries for a count of the interactions for a given Session or File.
 *
 * @param int $sid
 *   The session or file ID.
 * @param int $nid
 *   The Course node ID.
 * @param string $action
 *   The interaction action.
 *
 * @return mixed
 *   Returns the total count or NULL.
 */
function gn2_tracking_get_interaction_count($sid, $nid, $action = 'Viewed session') {
  $count = db_query('SELECT COUNT(tid) FROM {gn2_tracking} WHERE sid = :sid AND nid = :nid AND action = :action',
    [':sid' => $sid, ':nid' => $nid, ':action' => $action])->fetchField();
  return $count;
}
