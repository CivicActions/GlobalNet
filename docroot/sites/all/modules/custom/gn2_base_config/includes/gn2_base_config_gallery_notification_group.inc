<?php
/**
 * @file
 * gn2_base_config_gallery_notification_group.inc
 */

/**
 * Helper function to notify group members a content has been created/updated.
 */
function _gn2_base_config_notify_group_members($node) {
  global $user;

  // Loop through members.
  if ($node->is_new) {
    $go = new GN2PathToOrganization($node);
    $group = $go->getParent();
    $members = _gn2_base_config_get_members_in_group($group->nid);

    foreach ($members as $member) {
      if ($member->uid !== $user->uid) {
        _gn2_base_config_subscribe_member_get_notification($node->nid, $member->uid);
      }
    }
  }
}

/**
 * Subscribe group members to get notifications when a gallery
 * is created/updated.
 */
function _gn2_base_config_subscribe_member_get_notification($nid, $uid) {
  db_insert('subscriptions')
    ->fields(
      array(
        'module' => 'node',
        'field' => 'nid',
        'value' => $nid,
        'recipient_uid' => $uid,
        'send_interval' => 1,
        'author_uid' => -1,
        'send_updates' => 0,
        'send_comments' => 0,
      )
    )
    ->execute();
}

/**
 * Get all group members.
 */
function _gn2_base_config_get_members_in_group($gid) {
  $query = db_select('users', 'u');

  $query
    ->condition('u.uid', 0, '<>')
    ->condition('u.status', 1, '=')
    ->fields('u', array('uid', 'name', 'mail'))
    ->join('og_membership', 'ogm', "ogm.gid = :gid AND u.uid = ogm.etid AND ogm.entity_type = 'user'", array(':gid' => $gid));
  return $query->execute()->fetchAll();
}
