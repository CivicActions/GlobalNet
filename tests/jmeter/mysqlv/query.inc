<?php

/**
 * @addtogroup database
 * @{
 */

/**
 * @file
 * Query code for adding verbose comments to MySQL embedded database engine.
 */

// Include MySQL engine, since we extend it.
require_once DRUPAL_ROOT . '/includes/database/mysql/query.inc';

class InsertQuery_mysqlv extends InsertQuery_mysql { }

class TruncateQuery_mysqlv extends TruncateQuery_mysql { }

/**
 * @} End of "addtogroup database".
 */
