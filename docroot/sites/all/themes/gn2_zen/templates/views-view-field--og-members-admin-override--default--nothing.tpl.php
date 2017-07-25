<?php 
$temp = explode('-', $output);

// Cannot specify the exactly datetime if the users has not accessed to this group.
// The accesslog setting discards logs older than 3 months.
$output = 'Inactive for more than 3 months.';

// Select the last accessed datetime for this group.
$result = db_select('accesslog', 'al')
  ->fields('al', array('timestamp'))
  ->condition('path', 'node/' . $temp[1], '=')
  ->condition('uid', $temp[0], '=')
  ->orderBy('aid', 'DESC')
  ->range(0,1)
  ->execute()
  ->fetchAssoc();

if ($result) {
  // Format the date to be displayed.
  $output = format_date($result['timestamp'], 'short');
}

print $output;
?>