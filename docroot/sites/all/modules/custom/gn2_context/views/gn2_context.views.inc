<?php
/**
 * @file
 * Views specific hooks.
 */

/**
 * Implements hook_views_data().
 */
function gn2_context_views_data() {
  $data = array();
  $data['node']['organization'] = array(
    'title' => t('Organization'),
    'help' => t('Get the top most of organization of a node.'),
    'real field' => 'nid',
    'field' => array(
      'handler' => 'gn2_context_handler_organization',
    ),
  );

  $data['node']['organization_short'] = array(
    'title' => t('Organization Short Title'),
    'help' => t('Get the short title for top most of organization of a node.'),
    'real field' => 'nid',
    'field' => array(
      'handler' => 'gn2_context_handler_organization_short',
    ),
  );
  return $data;
}
