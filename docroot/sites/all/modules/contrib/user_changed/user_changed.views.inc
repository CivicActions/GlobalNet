<?php

/**
 * @file
 * Functions for Views support.
 */

/**
 * Implements hook_views_api().
 */
function user_changed_views_api() {
  return array('api' => 3.0);
}


/**
 * Implements hook_views_data_alter().
 */
function user_changed_views_data_alter(&$data) {
  $data['users']['changed'] = array(
    'title' => t('Changed'),
    'help' => t('The user\'s last modified date.' ),
    'field' => array('handler' => 'views_handler_field_date', 'click sortable' => TRUE),
    'sort' => array('handler' => 'views_handler_sort_date'),
    'filter' => array('handler' => 'views_handler_filter_date'),
  );
}