<?php

/**
 * @file
 * Database interface code for adding verbose comments to MySQL database servers.
 */

// Include MySQL engine, since we extend it.
require_once DRUPAL_ROOT . '/includes/database/mysql/database.inc';

/**
 * @addtogroup database
 * @{
 */

class DatabaseConnection_mysqlv extends DatabaseConnection_mysql {
  public function query($query, array $args = array(), $options = array()) {  
    global $user;
    $uid = empty($user->uid) ? 'none' : $user->uid;
    $path = $_GET['q'];
    $trace = '';
    $backtrace = debug_backtrace();
    foreach ($backtrace as $i => $call) {
      $trace .= $call['function'] . '=>';
    }
    $query .= " /* path:$path user:$uid trace:$trace */";
    return parent::query($query, $args, $options);
  }
}

/**
 * @} End of "addtogroup database".
 */
