<?php

/**
 * @file
 * The file provides functions which create the user's file download report.
 */

/**
 * Creates the Folder user's file download report.
 *
 * @param object $node
 *   The Folder node object.
 *
 * @return array
 */
function gn2_tracking_folder_user_report($node) {
  $rows = [];
  $header = gn2_tracking_folder_user_report_header();

  // Get the Group which the Folder is associated.
  if (isset($node->og_group_ref)) {
    $parent = field_get_items('node', $node, 'og_group_ref');
    $group_id = $parent[0]['target_id'];
  }

  // Get all group members.
  if ($group_id) {
    $members = gn2_tracking_get_course_members($group_id);
  }

  // Get count of files.
  $files = field_get_items('node', $node, 'media_gallery_file');
  $file_count = (isset($files)) ? count($files) : NULL;

  if ($file_count && $members) {
    foreach ($members as $member) {
      $num_files = db_query('SELECT COUNT (tid) FROM {gn2_tracking} WHERE nid = :nid AND uid = :uid',
        [':nid' => $node->nid, ':uid' => $member->etid])->fetchField();
      $rows[] = [
        'data' => [
          'data' => [
            'data' => $member->first . ' ' . $member->last . ' (' . $member->name . ')',
            'class' => ['level1'],
          ],
          floor(($num_files/$file_count) * 100) . '% (' . $num_files . ' of ' . $file_count . ' files downloaded)',
          l(t('View'), 'node/' . $node->nid . '/file-metrics/user/' . $member->etid),
        ],
      ];
    }
  }

  // Get the CSV icon.
  $csv_icon = gn2_tracking_csv_icon();

  $build = [
    'header' => [
      '#type' => 'markup',
      '#markup' => '<h2>' . t('File downloads by user for Folder: %node', ['%node' => $node->title]) . '</h2>',
    ],
    'table' => [
      '#theme' => 'table',
      '#rows' => $rows,
      '#header' => $header,
      '#attributes' => [
        'id' => 'course-report',
      ],
    ],
    'footer' => [
      '#type' => 'markup',
      '#markup' => l($csv_icon, 'node/' . $node->nid . '/file-metrics/users/download', [
        'html' => TRUE,
        '#attributes' => [
          'class' => ['csv'],
        ],
      ]),
    ],
  ];

  return $build;
}

function gn2_tracking_folder_user_report_header() {
  return [
    t('Member'),
    t('% complted'),
    t('View'),
  ];
}

function gn2_tracking_folder_user_report_download($node) {
  include_once('gn2_tracking.download.inc');
  $rows = [];
  $header = gn2_tracking_folder_user_report_header();

  // Get the Group which the Folder is associated.
  if (isset($node->og_group_ref)) {
    $parent = field_get_items('node', $node, 'og_group_ref');
    $group_id = $parent[0]['target_id'];
  }

  // Get all group members.
  if ($group_id) {
    $members = gn2_tracking_get_course_members($group_id);
  }

  // Get count of files.
  $files = field_get_items('node', $node, 'media_gallery_file');
  $file_count = (isset($files)) ? count($files) : NULL;
  // Get site URL.
  global $base_url;

  if ($file_count && $members) {
    foreach ($members as $member) {
      $num_files = db_query('SELECT COUNT (tid) FROM {gn2_tracking} WHERE nid = :nid AND uid = :uid',
        [':nid' => $node->nid, ':uid' => $member->etid])->fetchField();
      $rows[] = [
        $member->first . ' ' . $member->last . ' (' . $member->name . ')',
        floor(($num_files/$file_count) * 100) . '% (' . $num_files . ' of ' . $file_count . ' files downloaded)',
        $base_url . '/node/' . $node->nid . '/file-metrics/user/' . $member->etid,
      ];
    }
  }

  // The download file name.
  $filename = str_replace(' ', '-', $node->title) . '-users-report';

  // Create the CSV.
  gn2_tracking_create_csv($rows, $header, $filename);
}
