<?php
/**
 * @file
 * Organic Groups (OG) GN2 views include.
 */

/**
 * Implements hook_views_data_alter().
 */
function gn2_og_views_data_alter(&$data) {
  $data['node']['gn2_og_pending_membership_count'] = array(
    'title' => t('Total Pending Memberships'),
    'help' => t('Total number of Memberships in review in the Group.'),
    'group' => t('GN2 OG'),
    'field' => array(
      'handler' => 'gn2_og_handler_pending_membership_count',
    ),
  );
  $data['node']['gn2_og_handler_group_managers_list'] = array(
    'title' => t('Group Managers'),
    'help' => t('Gets a comma separated list of group managers (linked to their accounts).'),
    'group' => t('GN2 OG'),
    'field' => array(
      'handler' => 'gn2_og_handler_group_managers_list',
    ),
  );
  $data['node']['gn2_og_handler_group_members_list'] = array(
    'title' => t('Group Members'),
    'help' => t('Gets a comma separated list of group members (linked to their accounts).'),
    'group' => t('GN2 OG'),
    'field' => array(
      'handler' => 'gn2_og_handler_group_members_list',
    ),
  );
}

/**
 * Implements hook_views_plugins().
 */
function gn2_og_views_plugins() {

  // Defines base categories.
  $plugins = array('access' => array());

  // Access for group managers of any group.
  $plugins['access']['gn2_og_any_group_manager_access'] = array(
    'title' => t('OG: Any group manager'),
    'help' => t('Checks if the user is manager of any group.'),
    'handler' => 'views_plugin_access_gn2_og_any_group_manager',
  );

  // Access for hr and org managers of any group.
  $plugins['access']['gn2_og_any_hr_manager_access'] = array(
    'title' => t('OG: Manager user access'),
    'help' => t('Check if the user is an HR or Org Manager.'),
    'handler' => 'gn2_og_access_plugin_manager_user_access',
  );

  // Access for org managers of any group.
  $plugins['access']['gn2_og_org_manager_access'] = array(
    'title' => t('OG: Org Manager user access'),
    'help' => t('Check if the user is an Org Manager.'),
    'handler' => 'gn2_og_access_plugin_org_manager_user_access',
  );

  $plugins['argument default'] = array(
    'gn2_og_hr_manged_orgs' => array(
      'title' => t('The organizations the user is HR manager of'),
      'handler' => 'gn2_og_plugin_argument_default_hr_managed_organizations',
    ),
  );
  
  return $plugins;
}

/**
 * Implementation of hook_views_handlers() to register all of the basic handlers
 * views uses.
 */
function gn2_og_views_handlers() {
  return array(
    'info' => array(
      'path' => drupal_get_path('module', 'gn2_og'),
    ),
    'handlers' => array(
      // The name of my handler
      'gn2_og_handler_group_status' => array(
        // The name of the handler we are extending.
        'parent' => 'views_handler_field',
      ),
    ),
  );
}
 
/**
 * Implements hook_views_data().
 */
function gn2_og_views_data() {
  $data = array();
  // Add gn2_og group
  $data['gn2_og']['table']['group'] = t('gn2_og');
  $data['gn2_og']['table']['join'] = array(
    // #global is a special flag which let's a table appear all the time.
    '#global' => array(),
  );
  // Add custom field
  $data['gn2_og']['custom_field'] = array(
    'title' => t('Group Status'),
    'help' => t('Whether the group is open, moderated, or closed.'),
    'field' => array(
      'handler' => 'gn2_og_handler_group_status',
    ),
  );
  return $data;
}
