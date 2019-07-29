<?php
/**
 * @file
 * gn2_og.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function gn2_og_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-group_export-group-membership:menutoken/5d0bc75b25ee0.
  $menu_links['menu-group_export-group-membership:menutoken/5d0bc75b25ee0'] = array(
    'menu_name' => 'menu-group',
    'link_path' => 'menutoken/5d0bc75b25ee0',
    'router_path' => 'menutoken/%',
    'link_title' => 'Export Group Membership',
    'options' => array(
      'menu_token_link_path' => 'admin/report/[node:nid]/export-group',
      'menu_token_data' => array(
        'node' => array(
          'type' => 'node',
          'plugin' => 'node_context',
          'options' => array(),
        ),
      ),
      'menu_token_options' => array(
        'clear' => 0,
      ),
      'attributes' => array(
        'title' => 'Export the list of group members',
      ),
      'alter' => FALSE,
      'identifier' => 'menu-group_export-group-membership:menutoken/5d0bc75b25ee0',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'menu-group_edit-group:node/[node:nid]/edit',
  );
  // Exported menu link: menu-group_export-organization-members:admin/report/[node:nid]/export-org.
  $menu_links['menu-group_export-organization-members:admin/report/[node:nid]/export-org'] = array(
    'menu_name' => 'menu-group',
    'link_path' => 'admin/report/[node:nid]/export-org',
    'router_path' => 'admin/report/%/export-org',
    'link_title' => 'Export Organization Members',
    'options' => array(
      'menu_token_link_path' => 'admin/report/[node:nid]/export-org',
      'menu_token_data' => array(
        'node' => array(
          'type' => 'node',
          'plugin' => 'node_context',
          'options' => array(),
        ),
      ),
      'menu_token_options' => array(
        'clear' => 0,
      ),
      'attributes' => array(
        'title' => 'Export Organizational Users (only works on the Organization landing page)',
      ),
      'alter' => FALSE,
      'identifier' => 'menu-group_export-organization-members:admin/report/[node:nid]/export-org',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'menu-group_edit-group:node/[node:nid]/edit',
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Export Group Membership');
  t('Export Organization Members');

  return $menu_links;
}
