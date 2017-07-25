<?php

/**
 * @file
 * Provide user vid argument handler.
 */

/**
 * Argument handler to accept a user revision id.
 */
class views_handler_argument_user_vid extends views_handler_argument_numeric {
  /**
   * Override the behavior of title(). Get the title of the revision.
   */
  public function title_query() {
    $names = array();
    $result = db_select('user_revision', 'ur')
      ->fields('ur', array('name'))
      ->condition('ur.uid', $this->value)
      ->execute()
      ->fetchAll();
    foreach ($result as $account) {
      $names[] = check_plain($account->name);
    }
    return $names;
  }
}
