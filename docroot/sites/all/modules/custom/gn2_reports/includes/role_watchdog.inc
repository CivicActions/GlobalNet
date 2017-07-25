<?php

/* 
 * Custom Role Watchdog.
 */

/**
 * Custom code to prepare the report.
 * See: RD-3937.
 * 
 * @global type $user
 * @param type $node
 * @return type
 */
function _gn2_reports_role_watchdog_report($node = NULL) {
  $output = '';
  $rows = array();

  $roles = user_roles();

  $header = array(
    array('data' => t('Admin'),),
    array('data' => t('Role'),),
    array('data' => t('Date'),),
    array('data' => t('Organization'),),
    array('data' => t('Group'),),
    array('data' => t('Type'),),
    array('data' => t('Role (group)'),),
    array('data' => t('Change'),),
    array('data' => t('User'),),
  );
  $query = db_select('role_watchdog', 'rw');
  $query->innerJoin('users', 'u', 'rw.aid = u.uid');
  $query->innerJoin('users', 'u2', 'rw.uid = u2.uid');
  $query->leftJoin('og_role_watchdog', 'orw', 'orw.hid = rw.hid');
  $query->innerJoin('node', 'nd', 'orw.gid = nd.nid');
  $query->addField('u2', 'name', 'admin');
  $query->addField('rw', 'uid', 'adminid');
  $query->addField('rw', 'aid', 'uid');

  if (isset($_GET['org'])) {
    // Filtered by Organization.
    global $user;
    if (!in_array('administrator', $user->roles)) {
      if (gn2_manager_is_manager(array('org_manager', 'hr_manager'))) {
        $_GET['org'] = gn2_context_get_org_id();
      }
      else {
        return;
      }
    }
    $query->leftJoin('field_data_field_parent_organization', 'po', 'po.entity_id = orw.gid');

    $db_and = db_and();
    $db_and->condition('nd.type', 'organization' , '=');
    $db_and->condition('nd.nid', $_GET['org'], '=');

    $db_or = db_or();
    $db_or->condition($db_and);
    $db_or->condition('po.field_parent_organization_target_id', $_GET['org']);

    $query->condition($db_or);
  }
  if (isset($_GET['or'])) {
    // Filtered by Org. role id.
    $query->condition('orw.rid', $_GET['or'], '=');
  }
  if (isset($_GET['gt'])) {
    // Filtered by Content type.
    $query->condition('nd.type', $_GET['gt'] , '=');
  }
  if (isset($_GET['dmin']) && isset($_GET['dmax'])) {
    // Filtered by date.
    $query->condition('rw.stamp',array($_GET['dmin'], $_GET['dmax']) , 'BETWEEN');
  }
  elseif (isset($_GET['dmin'])) {
    $query->condition('rw.stamp', $_GET['dmin'], '>=');
  }
  elseif (isset($_GET['dmax'])) {
    $query->condition('rw.stamp', $_GET['dmax'], '<=');
  }

  $query->addField('orw', 'rid', 'orid');
  $result = $query
    ->extend('PagerDefault')
    ->limit(variable_get('role_watchdog_pager', 50))
    ->fields('rw', array('hid', 'action', 'rid', 'aid', 'stamp'))
    ->fields('u', array('name'))
    ->fields('orw', array('gid'))
    ->orderBy('rw.stamp', 'DESC')
    ->execute()
    ->fetchAllAssoc('hid');

  $actions = array(t('removed from'), t('added to'), t('requested by'), t('approved for'), t('blocked'), t('unblocked'), t('rejected for'));
  $view_profile = user_access('access user profiles');
  foreach ($result as $hid => $row) {
    list($group_name, $group_type, $role) = _gn2_reports_og_role_watchdog_row_group_name($row->gid, $row->rid, $row->orid, $roles);
    // Set Organization Name.
    $org_name = "-";
    if (isset($row->gid)) {
      $group = node_load($row->gid);
      $path = new GN2PathToOrganization($group);
      $org = $path->getOrganization();
      if (!empty($org->nid)) {
        $org_name = l($org->title, drupal_get_path_alias("node/" . $org->nid));
      }
    }
    else {
      // AVOID to display incomplete content.
      continue;
    }
    // Set Admin name and roles;
    $admin_roles = '';
    if (isset($row->adminid)) {
      // Name.
      $admin_name = $view_profile ? l($row->admin, 'user/' . $row->adminid) : $row->admin;
      // Roles;
      $admin_user = user_load($row->adminid);
      $admin_roles = implode(', ', $admin_user->roles);
      if (isset($row->gid)) {
        $admin_roles .= ' / ' . implode(', ', og_get_user_roles('node', $row->gid, $row->adminid));
      }
    }
    $row_data = array(
      $admin_name,
      $admin_roles,
      format_date($row->stamp, 'custom', 'd M Y H:i'),
      $org_name,
      $group_name,
      $group_type,
      $role,
      $actions[$row->action],
      $view_profile ? l($row->name, 'user/' . $row->uid) : $row->name,
    );
    if ($node) {
      unset($row_data[2]);
    }
    $rows[] = $row_data;
  }

  if (sizeof($rows)) {
    $output .= theme('table', array('header' => $header, 'rows' => $rows, 'attributes' => array('style' => 'width: 99%;')));
    $output .= theme('pager', array('tags' => NULL));
  }
  return $output ? $output : t('No role grants made.');
}

/**
 * Helper function to prepare rows.
 * 
 * @param type $gid
 * @param type $rid
 * @param type $og_rid
 * @param type $roles
 * @param type $export
 * @return type
 */
function _gn2_reports_og_role_watchdog_row_group_name($gid, $rid, $og_rid, $roles, $export = FALSE) {
  $group_name = $group_type = $role = '-';
  if ($rid == ROLE_WATCHDOG_NO_ROLE && isset($gid)) {
    $group = node_load($gid);
    if ($group) {
      //@todo: Not sure if we need the default access check here. Wouldn't those be set on the user in some other place
      // before you got to this point?
      $query_gid = og_is_group_default_access('node', $gid) ? 0 : $gid;
      $og_roles = og_roles('node', $group->type, $gid);
      $group_name = l($group->title, 'node/' . $group->nid);
      if ($export) {
        $group_name = str_replace(',', '', $group->title);
      }
      $group_type = $group->type;
      if ($og_rid > 0) {
        $role = $og_roles[$og_rid];
      }
      else {
        $role = t("undefined");
      }
    }
  }
  else {
    $role = $roles[$rid];
  }
  return array($group_name, $group_type, $role);
}
