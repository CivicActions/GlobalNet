<?php

/**
 * @file
 * Installation code for adding verbose comments to MySQL embedded database engine.
 */

// Include MySQL engine, since we extend it.
require_once DRUPAL_ROOT . '/includes/database/mysql/install.inc';

/**
 * Specifies installation tasks for MySQL and equivalent databases.
 */
class DatabaseTasks_mysqlv extends DatabaseTasks_mysql { }

