<?php
/**
 * @file
 * gn2_base_config_technical_support.inc
 */

/**
 * Send email to Org managers. Used in "rules_technical_support_rule".
 */
function _gn2_tech_support_notify_org_admin($entityform, $site) {
  global $user;

  $gid = 11;
  if (isset($entityform->field_organization[LANGUAGE_NONE][0]['target_id'])) {
    $gid = $entityform->field_organization[LANGUAGE_NONE][0]['target_id'];
  }
  $node = node_load($gid);
  $to = $entityform->field_notified_to[LANGUAGE_NONE][0]['value'];

  global $language;
  $options = list_allowed_values(field_info_field('field_how_can_we_help_you_'));
  $option = $options[$entityform->field_how_can_we_help_you_[LANGUAGE_NONE][0]['value']];

  $params['subject'] = t('Technical Support') . ' - ' . $node->title;
  $params['body']    = array(
    t('Details'),
    t('Name') . ': ' . $entityform->field_name_first[LANGUAGE_NONE][0]['value'] . ' ' .
    $entityform->field_name_last[LANGUAGE_NONE][0]['value'] . " (unvalidated)",
    t('Email') . ': ' . $entityform->field_email[LANGUAGE_NONE][0]['email'] . " (unvalidated)",
    t('Type') . ': ' . $option,
    t('Text') . ': ' . $entityform->field_anything_else[LANGUAGE_NONE][0]['value'],
    t('Link') . ': ' . l(t('View submission and update status.'), 'entityform/' . $entityform->entityform_id,
        array('absolute' => TRUE)),
  );
  // The mail subject and body are added in gn2_tech_support_mail().
  drupal_mail('gn2_tech_support', 'technical-support', $to, $language, $params);
}

/**
 * Get all the users with certain roles in a group.
 *
 * @param $gid
 *   The group unique ID.
 * @param $rids
 *   Array with the role IDs to query.
 * @param $group_type
 *   The group entity type.
 */
function gn2_tech_support_get_users_by_roles($gid, $rids = array(), $group_type = 'node') {
  $query = db_select('og_users_roles', 'og_users_roles');
  $query->fields('og_users_roles', array('uid'))
    ->condition('gid', $gid)
    ->condition('group_type', $group_type);
  if (!empty($rids)) {
    $query->condition('rid', $rids, 'IN');
  }
  return $query->execute()
    ->fetchAll();
}

/**
 * Function to get members email address.
 */
function _gn2_tech_support_get_org_members_email_address($gid) {
  global $user;
  $response = variable_get('site_mail', '') . ', ';

  // Get all of the Roles for this Group.
  $node = node_load($gid);
  if (!$node) {
    return '';
  }
  $roles = og_roles('node', $node->type, $node->nid);
  // Find the Role ID for org_manager.
  $rid = array_search('org_manager', $roles);
  if (!$rid) {
    return '';
  }
  $admins = gn2_tech_support_get_users_by_roles($gid, array($rid));
  foreach ($admins as $admin) {
    $admin = user_load($admin->uid);
    if ($admin->uid !== $user->uid && $admin->status == 1) {
      $response .= $admin->mail . ', ';
    }
  }
  return $response;
}
