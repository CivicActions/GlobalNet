<?php
/**
 * @file
 * Drush commands.
 */

/**
 * Implements hook_drush_command().
 */
function gn2_metrics_drush_command() {

  $items = array();

  $items['gn2-metrics-build-group-access-stats-queue'] = array(
    'aliases' => array('gn2mbgasq'),
    'description' => 'Builds the groups access by country queue.',
  );

  return $items;

}

/**
 * Builds the groups access by country queue.
 */
function drush_gn2_metrics_build_group_access_stats_queue() {

  _gn2_metrics_build_group_access_stats_queue(TRUE);

}
