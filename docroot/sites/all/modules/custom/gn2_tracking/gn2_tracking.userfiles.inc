<?php

/**
 * @file
 * This file provides functions for the Folder individual user interactions.
 */

/**
 * Creates the individual user report of Folder files.
 *
 * @param object $node
 *   The Folder node object.
 * @param object $user
 *   The user object
 *
 * @return array
 */
function gn2_tracking_folder_individual($node, $user) {
  $rows = [];
  $header = [
    'File',
    'Status',
  ];

  // Get the Folder files.
  $files = field_get_items('node', $node, 'media_gallery_file');
  foreach ($files as $file) {
    $downloaded = db_query('SELECT tid FROM {gn2_tracking} WHERE uid = :uid AND nid = :nid AND sid = :fid',
      [':uid' => $user->uid, ':nid' => $node->nid, ':fid' => $file['fid']])->fetchField();
    $rows[] = [
      'data' => [
        [
          'data' => t('File: %file', ['%file' => $file['filename']]),
          'class' => ['level1'],
        ],
        [
          'data' => ($downloaded) ? '&#10003;' : '&#10005;',
          'class' => ($downloaded) ? 'complete' : 'incomplete',
        ],
      ],
    ];
  }

  // Get the CSV icon.
  $csv_icon = gn2_tracking_csv_icon();

  // Get username for title.
  $first = field_get_items('user', $user, 'field_name_first');
  $firstname = (!empty($first)) ? $first[0]['value'] : NULL;
  $last = field_get_items('user', $user, 'field_name_last');
  $lastname = (!empty($last)) ? $last[0]['value'] : NULL;
  $username = $firstname;
  $username .= ($lastname) ? ' ' . $lastname : NULL;
  $username .= ' (' . $user->name . ')';

  $build = [
    'header' => [
      '#type' => 'markup',
      '#markup' => '<h2>' . t('File downloaded by !user for Folder: %node',
          ['!user' => $username, '%node' => $node->title]) . '</h2>',
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
      '#markup' => l($csv_icon, 'node/' . $node->nid . '/file-metrics/user/' . $user->uid . '/download', [
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
 * Creates the individual user Folder file report CSV
 *
 * @param object $node
 *   The Folder node object.
 * @param object $user
 *   The user object.
 */
function gn2_tracking_folder_individual_download($node, $user) {
  include_once('gn2_tracking.download.inc');
  $rows = [];
  $header = [
    'File',
    'Status',
  ];

  // Get the Folder files.
  $files = field_get_items('node', $node, 'media_gallery_file');
  foreach ($files as $file) {
    $downloaded = db_query('SELECT tid FROM {gn2_tracking} WHERE uid = :uid AND nid = :nid AND sid = :fid',
      [':uid' => $user->uid, ':nid' => $node->nid, ':fid' => $file['fid']])->fetchField();
    $rows[] = [
      t('File: !file', ['!file' => $file['filename']]),
      ($downloaded) ? t('downloaded') : t('has not downloaded'),
    ];
  }

  // The download file name.
  $filename = str_replace(' ', '-', $node->title) . '-' . $user->name . '-report';

  // Create the CSV.
  gn2_tracking_create_csv($rows, $header, $filename);
}
