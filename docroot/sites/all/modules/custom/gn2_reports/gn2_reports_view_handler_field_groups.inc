<?php
/**
 * @file
 * Field handler for Group field.
 */

/**
 * @defgroup gn2_reports_view_handler_field_groups Views field handlers
 * @{
 * Handlers to tell Views how to build and display GN2 Group fields.
 */
class gn2_reports_view_handler_field_groups extends views_handler_field {

  function render($values) {
    $groups = $this->get_value($values);
    $gids = ($groups) ? explode('|', $groups) : NULL;
    $items = array();
    foreach ($gids as $group_id) {
      $title = db_query('SELECT title FROM {node} WHERE nid = :gid', array(':gid' => $group_id))->fetchField();
      $items[] = l($title, 'node/' . $group_id);
    }

    return (!empty($items)) ? theme_item_list(array(
      'items' => $items,
      'title' => NULL,
      'type' => 'ul',
      'attributes' => array(),
    )) : NULL;
  }

}
