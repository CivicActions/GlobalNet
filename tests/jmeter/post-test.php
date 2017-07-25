<?php

// Supress mail for this Drush run.
function gn2_base_config_mail_alter(&$message) {
  $message['send'] = FALSE; 
}

$num = drush_get_option('users', 100);
for ($n = 0; $n < $num; $n++) {
  $account = user_load_by_name('qa-loadtest-' . $n);
  user_save($account, array('status' => 0));
}
