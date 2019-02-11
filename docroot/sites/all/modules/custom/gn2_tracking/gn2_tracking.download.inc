<?php

/**
 * @file
 * Add the ability to download the reports as a CSV file.
 */

/**
 * Create a CSV file to download.
 *
 * @param object $node
 *   The Course node object.
 * @param string $type
 *   The report type used to determine files to include.
 * @param null $id
 *   An extra parameter to be used if need be.
 */
function gn2_tracking_download($node, $type, $id = NULL) {
  switch ($type) {
    case 'interactions':
      gn2_tracking_download_main_interactions($node);
      break;

    case 'progress':
      gn2_tracking_download_progress_report($node);
      break;

    case 'member-progress':
      gn2_tracking_download_member_progress_report($node, $id);
      break;

  }
}

/**
 * Create the Course interactions report download.
 *
 * @param object $node
 *   The Course node object.
 */
function gn2_tracking_download_main_interactions($node) {
  include_once 'gn2_tracking.reports.inc';
  $sessions = gn2_tracking_get_session_data($node);
  // Get the # of Group members.
  $member_count = gn2_tracking_get_course_info($node->nid);
  // Create the Interactions table.
  $session_parsed = gn2_tracking_parse_fields($sessions, $member_count, $node->nid);
  // Convert the table array to an array we can use for the CSV.
  $rows = [];
  global $base_url;
  foreach ($session_parsed as $session) {
    $rows[] = [
      strip_tags($session['data'][0]['data']),
      $session['data'][1],
      $session['data'][2],
      str_replace('">View</a>', '', str_replace('<a href="', $base_url, $session['data'][3])),
    ];
  }
  // Create CSV of report.
  $filename = str_replace(' ', '-', $node->title) . '-clicks';
  // Header array.
  $header = [
    'Interaction',
    'Unique Clicks',
    'Completed',
    'View',
  ];

  gn2_tracking_create_csv($rows, $header, $filename);
}

/**
 * Create the Member Progress download file.
 *
 * @param object $node
 *   The Course node object.
 */
function gn2_tracking_download_progress_report($node) {
  include_once 'gn2_tracking.users.inc';
  $rows = [];
  // Get the Course sessions.
  $sessions = gn2_tracking_get_session_data($node);
  // Get a count of all possible interactions.
  $total_interactions = gn2_tracking_get_total_interactions($sessions);
  // Get all of the Course members.
  $members = gn2_tracking_get_course_members($node->nid);
  // Get site URL.
  global $base_url;
  // Create the CSV rows.
  foreach ($members as $user) {
    // Get the user's interactions.
    $completed = gn2_tracking_get_completed($user->etid, $node->nid);
    $rows[] = [
      ($user->first && $user->last) ? $user->first . ' ' . $user-> last . '(' . $user->name . ')' : $user->name,
      floor(((count($completed)/$total_interactions) * 100)) . '% (' . count($completed) . ' of ' . $total_interactions . ' interactions)',
      $base_url . '/node/' . $node->nid . '/metrics/member/interactions/' . $user->etid,
    ];
  }
  // Create CSV of report.
  $filename = str_replace(' ', '-', $node->title) . '-by-members';
  // Header array.
  $header = [
    'Member',
    '% completed',
    'View',
  ];

  gn2_tracking_create_csv($rows, $header, $filename);
}

function gn2_tracking_download_member_progress_report($node, $uid) {
  include_once 'gn2_tracking.users.inc';
  $rows = [];
  // Get the user's completed interactions.
  $completed = gn2_tracking_get_completed($uid, $node->nid);
  // Get the Course interactions.
  $sessions = gn2_tracking_get_session_data($node);
  // Compare the completed interactions with all possible interactions.
  $interactions = gn2_tracking_parse_completed($sessions, $completed);
  // Load the user so that we can get the user's first and last name.
  $user = user_load($uid);

  foreach ($interactions as $row) {
    $rows[] = [
      strip_tags($row['data'][0]['data']),
      ($row['data'][1]['data'] === '&#10005;') ? 'incomplete' : 'completed',
    ];
  }
  // Create CSV of report.
  $filename = $user->name . '-' . str_replace(' ', '-', $node->title);
  // Header array.
  $header = [
    'Interaction',
    'Status',
  ];

  gn2_tracking_create_csv($rows, $header, $filename);
}

/**
 * Creates a CSV file to download.
 *
 * @param array $rows
 *   An array containing the CSV rows.
 * @param array $header
 *   An array containing the CSV column headers.
 * @param string $filename
 *   A descriptive string to use for the filename.
 */
function gn2_tracking_create_csv(array $rows, array $header, $filename) {
  ob_clean();
  // Create the file.
  $output = fopen('php://output', 'w') or die('Can\'t open temp file.');
  header('Content-Type: application/csv');
  header('Content-Disposition: attachment; filename=' . $filename . '.csv');
  // Add the header.
  fputcsv($output, $header);
  // Add the rows.
  foreach ($rows as $row) {
    fputcsv($output, $row);
  }
  // Close the file.
  fclose($output) or die('Can\'t close temp file.');
  ob_flush();
}
