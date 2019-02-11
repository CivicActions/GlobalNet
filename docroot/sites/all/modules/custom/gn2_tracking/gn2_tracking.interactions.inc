<?php

/**
 * @file
 * This file contains the detailed interactions report for the GN2 Tracking module.
 */

/**
 * Creates the detailed interaction report.
 *
 * @param object $node
 *   The Course node object.
 * @param $sid
 *   The session or file id.
 *
 * @return array
 *   Returns the array to be rendered.
 */
function gn2_tracking_interactions_report($node, $sid) {
  // Get Course members.
  $members = gn2_tracking_get_course_members($node->nid);
  // Get the interactions.
  $interactions = gn2_tracking_get_interactions($node->nid, $sid);
  // Get the Action type.
  $action = gn2_tracking_get_actions($sid, $node->nid);
  if (!$action) {
    $action = 'Click';
  }
  // Create list.
  $items = [];

  foreach ($members as $member) {
    $name = ($member->first && $member->last) ? $member->first . ' ' . $member->last . ' (' . $member->name . ')' : $member->name;
    $viewed = (in_array($member->etid, $interactions)) ? 'has' : 'has not';
    $class = (in_array($member->etid, $interactions)) ? 'complete' : 'incomplete';
    $items[] = '<span class="' . $class . '"></span> ' . $name . ' ' . $viewed . ' ' . strtolower($action);
  }

  $build = [
    'list' => [
      '#theme' => 'item_list',
      '#items' => $items,
      '#title' => t('!action: %node', ['!action' => $action, '%node' => $node->title]),
      '#type' => 'ul',
      '#attributes' => [
        'id' => 'interaction-report',
      ],
    ],
    'footer' => [
      '#type' => 'markup',
      '#markup' => '<h4>' . l(t('&laquo; Back to main report'), 'node/' . $node->nid . '/metrics/progress',
          ['html' => TRUE]) . '</h4>',
    ],
  ];

  return $build;
}

/**
 * Queries for all of the users that have interacted with the give interaction.
 *
 * @param int $nid
 *   The Course node ID.
 * @param int $sid
 *   The Session/File ID.
 *
 * @return mixed
 */
function gn2_tracking_get_interactions($nid, $sid) {
  $interactions = db_query('SELECT uid FROM {gn2_tracking} WHERE sid = :sid AND nid = :nid',
    [':sid' => $sid, ':nid' => $nid])->fetchCol();
  return $interactions;
}

/**
 * Queries for the action type of a given interaction.
 *
 * @param int $sid
 *   The Session/File ID.
 * @param int $nid
 *   The Course node ID.
 *
 * @return mixed
 */
function gn2_tracking_get_actions($sid, $nid) {
  $action = db_query('SELECT action FROM {gn2_tracking} WHERE sid = :sid AND nid = :nid LIMIT 1',
    [':sid' => $sid, ':nid' => $nid])->fetchField();
  return $action;
}
