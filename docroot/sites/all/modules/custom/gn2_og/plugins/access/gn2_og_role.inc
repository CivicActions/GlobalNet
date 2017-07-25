<?php
/**
 * @file
 * CTools access plugin.
 */

/**
 * Plugins are described by creating a $plugin array that includes the file.
 */
$plugin = array(
  'title' => t('Role: Og Role'),
  'description' => t('Only displays this pane if the user has the role of...'),
  'callback' => 'gn2_og_og_role_ctools_access_check',
  'default' => array('og_role' => 1),
  'summary' => 'gn2_og_og_role_ctools_access_summary',
  'settings form' => 'gn2_og_og_role_settins_form',
  'required context' => new ctools_context_required(t('User'), 'user'),
);

/**
 * Checks the user roles to determine access.
 */
function gn2_og_og_role_ctools_access_check($conf, $context) {
  if (empty($context) || empty($context->data)) {
    return FALSE;
  }

  // If user is an adminstrator return TRUE.
  global $user;
  if (in_array('administrator', $user->roles)) {
    return TRUE;
  }

  if (arg(0) == 'node' && is_numeric(arg(1))) {
    $gid = arg(1);
    $user_roles = og_get_user_roles('node', $gid);
    $access_roles = (!empty($conf['gn2_og_access_settings'])) ?
        $conf['gn2_og_access_settings'] : array();
    $manager = array_intersect($user_roles, $access_roles);
    return (empty($manager)) ? FALSE : TRUE;
  }
}

/**
 * Creates the visibility summary.
 */
function gn2_og_og_role_ctools_access_summary($conf, $context) {
  $roles = (!empty($conf['gn2_og_access_settings'])) ? $conf['gn2_og_access_settings'] :
    array();
  if (!empty($roles)) {
    $show = array();
    foreach ($roles as $value) {
      if ($value) {
        $show[] = $value;
      }
    }
  }
  $display = (!empty($roles)) ? implode(', ', $show) : 'unset';
  return t('User has one of the following roles; !roles',
      array('!roles' => $display));
}

/**
 * Form constructor for the OG Roles settings.
 */
function gn2_og_og_role_settins_form(&$form, &$form_state, $conf) {
  $roles = array(
    'org_manager',
    'hr_manager',
    'group_manager',
    'PA Specialist',
    'member',
  );
  $form['settings']['gn2_og_access_settings'] = array(
    '#type' => 'checkboxes',
    '#title' => t('Roles'),
    '#default_value' => (empty($conf['gn2_og_access_settings'])) ? NULL : $conf['gn2_og_access_settings'],
    '#options' => drupal_map_assoc($roles),
    '#description' => t('Choose the role(s) that should access this pane.'),
  );
  return $form;
}
