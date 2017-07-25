<?php

// Supress mail for this Drush run.
function gn2_base_config_mail_alter(&$message) {
  $message['send'] = FALSE; 
}

// Generate a list of paths they should visit.
$users = drush_get_option('users', 8);
$factor = drush_get_option('factor', 1);
$lines = array();
$account = user_load_by_name('qa-loadtest-0');
$groups = field_get_items('user', $account, 'og_user_node');
$nids = $uids = array();
foreach ($groups as $group) {
  $gid = $group['target_id'];
  // Include the group pages 1*factor times.
  for ($n = 0; $n < $factor; $n++) {
    $nids[$gid . '-' . $n] = $gid;
  }
  // Pick the 3*factor smallest member node IDs, so the links are predictable.
  $result = db_query_range("SELECT etid FROM {og_membership} WHERE entity_type = 'node' AND state = 1 AND gid = :gid ORDER BY etid ASC", 0, 3*$factor, array(':gid' => $gid))->fetchAllKeyed(0, 0);
  $nids += $result;
  // Pick the 1*factor smallest user IDs.
  $result = db_query_range("SELECT etid FROM {og_membership} WHERE entity_type = 'user' AND state = 1 AND gid = :gid ORDER BY etid ASC", 0, 1*$factor, array(':gid' => $gid))->fetchAllKeyed(0, 0);
  $uids += $result;
}
// Include 10*factor public node IDs. Include only those divisible by 11 to get a better spread of types, times etc. 
$result = db_query_range("SELECT nid FROM {node_access} WHERE realm = 'GN2SIMPLEACCESSPUBLIC' AND grant_view = 1 AND nid%11 = 0 ORDER BY nid ASC", 0, 10*$factor)->fetchAllKeyed(0, 0);
$nids += $result;
foreach ($nids as $nid) {
  $lines[] = url('node/' . $nid);
}
foreach ($uids as $uid) {
  $lines[] = url('user/' . $uid);
}
// Add another copy of all URLs: the duplicate URLs will test caching.
$lines = array_merge($lines, $lines);

// Make sure the number of URLs is exactly divisible by the number of users, if we can.
if (count($lines) > $users) {
  $lines = array_slice($lines, 0, floor(count($lines)/$users) * $users);
}

// Shuffle the lines to work the cache harder, but keep the shuffle deterministic.
srand(0);
shuffle($lines);
drush_print(implode("\n", $lines));
