<?php

// Suppress mail for this Drush run.
function gn2_base_config_mail_alter(&$message) {
  $message['send'] = FALSE; 
}

// Ensure users are unblocked and don't have to change their passwords,
// then create a file of one-time login links.
$lines = array();
$users = drush_get_option('users', 8);
$timestamp = REQUEST_TIME;
for ($n = 0; $n < $users; $n++) {
  $account = user_load_by_name('qa-loadtest-' . $n);
  db_delete("password_policy_expiration")
    ->condition("uid", $account->uid)
    ->execute();
  db_insert("password_policy_history")
    ->fields(array("uid" => $account->uid, "pass" => "", "created" => time()))
    ->execute();
  db_update("password_policy_force_change")
    ->fields(array("force_change" => 0))
    ->condition("uid", $account->uid)
    ->execute();
  user_save($account, array('status' => 1));
  $lines[] = url("user/reset/$account->uid/$timestamp/" . user_pass_rehash($account->pass, $timestamp, $account->login, $account->uid) . '/login');
}
drush_print(implode("\n", $lines));
