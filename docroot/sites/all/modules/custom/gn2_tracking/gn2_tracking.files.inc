<?php

/**
 * @file
 * The Folder content type reports.
 */

/**
 * Creates the Folder file download report.
 *
 * @param object $node
 *   The Folder node object.
 *
 * @return array
 */
function gn2_tracking_folder_report($node) {
  $rows = [];
  $header = [
    'File',
    'File Size',
    'Total Downloads',
  ];
  // Get all of the files in the Folder.
  $files = field_get_items('node', $node, 'media_gallery_file');
  if ($files) {
    foreach ($files as $file) {
      $total_downloads = db_query('SELECT COUNT(tid) FROM {gn2_tracking} WHERE sid = :fid AND nid = :nid',
        [':fid' => $file['fid'], ':nid' => $node->nid])->fetchField();
      $rows[$file['fid']] = [
        'data' => [
          [
            'data' => $file['filename'],
            'class' => ['level1'],
          ],
          format_size($file['filesize']),
          $total_downloads,
        ],
      ];
    }
  }

  // Get the CSV icon.
  $csv_icon = gn2_tracking_csv_icon();

  $build = [
    'header' => [
      '#type' => 'markup',
      '#markup' => '<h2>' . t('File downloads for Folder: %node', ['%node' => $node->title]) . '</h2>',
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
      '#markup' => l($csv_icon, 'node/' . $node->nid . '/file-metrics/download', [
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
 * Create the CSV download for the Folder file download report.
 *
 * @param object $node
 *   The Folder node object.
 */
function gn2_tracking_folder_report_download($node) {
  include_once('gn2_tracking.download.inc');
  $rows = [];
  $header = [
    'File',
    'File Size',
    'Total Downloads',
  ];

  // Get all of the files in the Folder.
  $files = field_get_items('node', $node, 'media_gallery_file');
  if ($files) {
    foreach ($files as $file) {
      $total_downloads = db_query('SELECT COUNT(tid) FROM {gn2_tracking} WHERE sid = :fid AND nid = :nid',
        [':fid' => $file['fid'], ':nid' => $node->nid])->fetchField();
      $rows[] = [
        $file['filename'],
        format_size($file['filesize']),
        $total_downloads,
      ];
    }
  }

  // The download file name.
  $filename = str_replace(' ', '-', $node->title) . '-file-downloads';

  // Create the CSV.
  gn2_tracking_create_csv($rows, $header, $filename);
}
