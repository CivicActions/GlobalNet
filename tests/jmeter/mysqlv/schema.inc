<?php

/**
 * @file
 * Database schema code for adding verbose comments to MySQL database servers.
 */

// Include MySQL engine, since we extend it.
require_once DRUPAL_ROOT . '/includes/database/mysql/schema.inc';

/**
 * @addtogroup schemaapi
 * @{
 */

class DatabaseSchema_mysqlv extends DatabaseSchema_mysql { }

/**
 * @} End of "addtogroup schemaapi".
 */
