<?php
/**
 * @file
 * A file that contains a form and ajax function to return Group information.
 */

/**
 * Form constructor for gn2_admin_dashboard_info_form.
 *
 * @see gn2_admin_dashboard_info_form_validate()
 * @see gn2_admin_dashboard_info_form_submit()
 *
 * @ingroup forms
 */
function gn2_admin_dashboard_info_form($form, &$form_state, $org) {
  $form['org_id'] = array(
    '#type' => 'hidden',
    '#value' => $org->nid,
  );

  $form['group'] = array(
    '#type' => 'textfield',
    '#title' => t('Group'),
    '#size' => 60,
    '#maxlength' => 128,
    '#autocomplete_path' => 'dashboard/group-ajax/' . $org->nid,
    '#description' => t('Enter the name of the Group for whom you would like information.'),
    '#required' => TRUE,
  );

  $form['submit'] = array(
    '#type' => 'submit',
    '#value' => t('Submit'),
  );

  return $form;
}

/**
 * Form validation handler for gn2_admin_dashboard_info_form.
 *
 * @see gn2_admin_dashboard_info_form_submit()
 */
function gn2_admin_dashboard_info_form_validate($form, &$form_state) {
  if (!isset($form_state['values']['group'])) {
    form_set_error('group');
  }
}

/**
 * Form submission handler for gn2_admin_dashboard_info_form.
 *
 * @see gn2_admin_dashboard_info_form_validate()
 */
function gn2_admin_dashboard_info_form_submit($form, &$form_state) {
  $group = $form_state['values']['group'];
  $org_id = $form_state['values']['org_id'];
  preg_match_all("/\[([^\]]*)\]/", $group, $matches);
  if (is_numeric($matches[1][0])) {
    $nid = $matches[1][0];
    drupal_goto('node/' . $org_id . '/dashboard/group-info/' . $org_id . '/' . $nid);
  }
}

/**
 * Ajax function returning groups for a given Organization.
 */
function _gn2_admin_dashboard_get_groups($org_id, $string) {
  $matches = array();
  $types = array(
    'coi',
    'course',
    'course_group',
    'event',
    'group',
    'program',
  );

  $query = db_select('node', 'n');
  $query->fields('n', array('title', 'nid'));
  $query->join('field_data_field_parent_organization', 'po', 'po.revision_id = n.vid AND po.entity_id = n.nid');
  $query->condition('po.field_parent_organization_target_id', $org_id);
  $query->condition('n.type', $types, 'IN');
  $query->condition('n.title', '%' . db_like($string) . '%', 'LIKE');
  $result = $query->execute();

  foreach ($result as $row) {
    $matches[check_plain($row->title) . ' [' . $row->nid . ']'] = check_plain($row->title);
  }

  drupal_json_output($matches);
}

/**
 * Displays a page containing the Group information.
 *
 * @param int $org
 *   The Org node ID.
 * @param int $gid
 *   The Group ID.
 */
function gn2_admin_dashboard_group_info($org, $gid) {
  $node = node_load($gid);
  $group_mgrs = gn2_admin_dashboard_get_group_managers($gid, $node->type);
  if ($group_mgrs) {
    $items = array();
    foreach ($group_mgrs as $user) {
      $items[] = l($user->name, 'user/' . $user->uid);
    }
    $managers = (empty($items)) ? 'No managers' : theme_item_list(array(
      'items' => $items,
      'type' => 'ul',
      'title' => NULL,
      'attributes' => array(),
    ));
  }
  $links = array();
  $links[] = l(t('&laquo; Back to group search'), 'node/' . $org . '/dashboard/get-group-info', array('html' => TRUE));
  $links[] = l(t('&laquo; Back to dashboard'), 'node/' . $org . '/dashboard', array('html' => TRUE));
  $link_list = theme_item_list(array(
    'items' => $links,
    'type' => 'ul',
    'title' => NULL,
    'attributes' => array('class' => array('nobullet')),
  ));

  return theme('gn2_dashboard_group', array(
    'title' => l($node->title, 'node/' . $node->nid, array('html' => TRUE)),
    'gid' => $node->nid,
    'man_title' => format_plural(count($items), t('Manager'), t('Managers')),
    'managers' => $managers,
    'links' => $link_list,
  ));
}

/**
 * Return the managers for a given group.
 */
function gn2_admin_dashboard_get_group_managers($gid, $type) {
  $subquery = db_select('og_role', 'ogr');
  $subquery->addField('ogr', 'rid');
  $subquery->condition('group_bundle', $type);
  $subquery->condition('name', 'group_manager');

  $query = db_select('og_membership', 'ogm');
  $query->join('node', 'n', 'n.nid = ogm.gid');
  $query->join('users', 'u', 'u.uid = ogm.etid');
  $query->join('og_users_roles', 'our', 'our.uid = ogm.etid');
  $query->fields('u', array('uid', 'name'));
  $query->condition('ogm.gid', $gid);
  $query->condition('ogm.entity_type', 'user');
  $query->condition('our.rid', $subquery, 'IN');
  $query->distinct();
  $result = $query->execute()->fetchAll();

  return $result;
}
