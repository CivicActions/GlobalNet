<?php
/**
 * @file
 * Non-hook helper functions.
 */

/**
 * Only members of a given group can add content to that group.
 *
 * @param string $content_type
 *   Content type machine name to check.
 * @param int $gid
 *   Group ID to check.
 *
 * @return string
 *   Constant NODE_ACCESS_DENY if User cannot add content.
 *   Constant NODE_ACCESS_IGNORE if User can add content.
 */
function gn2_simple_access_node_creation_access($content_type = '', $gid = NULL) {
  // Get the group context provided through the URL.
  if (is_null($gid)) {
    $gid = GN2GroupIDExtractor::fromUrl();
  }
  if (!is_null($gid) && !empty($content_type)) {
    // If the current user does not belong to group provided as context
    // or has no permissions on the content -- deny access.
    $user_is_in_group = gn2_simple_access_user_is_in_group($gid);
    $user_has_perms = og_user_access('node', $gid, "create " . $content_type . " content");
    if (!$user_is_in_group || !$user_has_perms) {
      return NODE_ACCESS_DENY;
    }
  }
  else {
    watchdog('gn2_simple_access', 'Insufficient data for processing', WATCHDOG_WARNING);
    return NODE_ACCESS_DENY;
  }
  // Otherwise, let node access do its thing.
  return NODE_ACCESS_IGNORE;
}

/**
 * Fix the og_group_ref when necessary.
 *
 * @param object $entity
 *   An entity.
 */
function gn2_simple_access_fixing_og_group_ref($entity) {
  // There is a bug in how behat test create nodes that is removing our
  // og reference, it would be good to fix it in the drupal driver,
  // but for now, lets fix it in here.
  // Original is used by the createNode in drupal driver, but it should
  // not exist if this is a new entity.
  // @todo Remove after the Drupal driver is fixed.
  $created_by_behat_drupal_driver = isset($entity->is_new) && $entity->is_new == 1
    && isset($entity->original) && isset($entity->og_group_ref);

  // For some reason, in some cases the og_group_ref field is empty in editing
  // ops, this is/should be an impossible situation.
  $messed_up_og_reference = isset($entity->is_new) && $entity->is_new == 0
    && isset($entity->original) && isset($entity->og_group_ref)
    && empty($entity->og_group_ref[LANGUAGE_NONE]);

  if ($created_by_behat_drupal_driver) {
    $gids = $entity->og_group_ref + $entity->original->og_group_ref;
    foreach ($gids as $gid) {
      $entity->og_group_ref[LANGUAGE_NONE][] = array('target_id' => $gid);
    }
  }

  if ($messed_up_og_reference) {
    $entity->og_group_ref = $entity->original->og_group_ref;
  }
}

/**
 * Check that we have a group and topmost organization.
 *
 * @param array $group_ids
 *   An array of arrays, each inner array has a key 'target_id' with the
 *   value being the group_id.
 */
function gn2_simple_access_correct_group_and_org(array $group_ids) {
  $flip_flop = array(0 => 1, 1 => 0);
  foreach ($flip_flop as $group1 => $group2) {
    $gid = $group_ids[$group1]['target_id'];
    $node = node_load($gid);
    $path = new GN2PathToOrganization($node);
    $org = $path->getOrganization();
    if ($group_ids[$group2]['target_id'] == $org->nid) {
      return TRUE;
    }
  }
  return FALSE;
}

/**
 * Get the visibility chosen for this entity.
 *
 * @param object $entity
 *   An entity.
 *
 * @return string
 *   Visibility of this entity (group, organization, sitewide, or
 *   public).
 */
function gn2_simple_access_get_visibility($entity) {
  $items = field_get_items("node", $entity, "field_gn2_simple_access");
  $visibility = NULL;

  if (is_string($items)) {
    return $items;
  }

  if ($items !== FALSE && is_array($items)) {
    $item = reset($items);
    $visibility = $item['value'];
  }
  return $visibility;
}

/**
 * Recursively search for an organization up the tree given a group id.
 *
 * @param int $gid
 *   Group id.
 *
 * @return mixed
 *   The group id or null if non was found.
 */
function gn2_simple_access_get_organization($gid) {
  $node = node_load($gid);
  // This node might be the organization.
  if ($node->type == "organization") {
    return $node->nid;
  }
  $groups = og_get_entity_groups("node", $node);
  if (isset($groups['node'])) {
    $nodes = node_load_multiple($groups['node']);
    foreach ($nodes as $node) {
      if ($node->type == "organization") {
        return $node->nid;
      }
    }

    // If we did not find any organizations, lets look at the next level.
    foreach ($nodes as $node) {
      $nid = gn2_simple_access_get_organization($node->nid);
      if ($nid) {
        return $nid;
      }
    }
  }

  return NULL;
}

/**
 * Modify the state of og_fields to match the organization visibility.
 *
 * @param object $entity
 *   An entity object.
 */
function gn2_simple_access_set_og_perms_for_organization($entity) {
  gn2_simple_access_set_og_perms_for_group($entity);

  $gid_extractor = new GN2GroupIDExtractor();
  $gid_extractor->setNode($entity);
  $gid = $gid_extractor->extract();

  // There is no need to check for the existance of gid, as
  // gn2_simple_access_set_og_perms_for_group() would have failed already.
  $org_id = gn2_simple_access_get_organization($gid);
  if ($org_id) {
    $entity->og_group_ref[LANGUAGE_NONE][1] = array('target_id' => $org_id, 'field_mode' => 'default');
  }
  else {
    throw new Exception("The given group does not belong to an organization.");
  }
}

/**
 * Modify the state of og_fields to match the group visibility.
 *
 * @param object $entity
 *   An entity object.
 */
function gn2_simple_access_set_og_perms_for_group($entity) {
  if (empty($entity->clone)) {
    $gid_extractor = new GN2GroupIDExtractor();
    $gid_extractor->setNode($entity);
    $gid = $gid_extractor->extract();

    if (isset($gid)) {
      $entity->og_group_ref = array(
        LANGUAGE_NONE =>
          array(
            0 =>
              array(
                'target_id' => $gid,
                'field_mode' => 'default',
              ),
          ),
      );
    }
    else {
      throw new Exception("No node managed by simple access can be saved
    without the context of a group. Node id {$entity->nid} does not have a 
    group.");
    }
  }
}

/**
 * Check access to a node with sitewide visibility.
 *
 * @param object $node
 *   A node object.
 * @param object $account
 *   A user object.
 *
 * @return int
 *   Whether the given account can access the node or not.
 */
function gn2_simple_access_sitewide_check($node, $account) {
  // Every authenticated user has access.
  if ($account->uid != 0) {
    return NODE_ACCESS_ALLOW;
  }
  else {
    return NODE_ACCESS_DENY;
  }
}

/**
 * Get the group id from information in the form state.
 *
 * @param array $form_state
 *   Form state.
 *
 * @return int
 *   The group id.
 */
function gn2_simple_access_get_gid_from_form_state(array $form_state) {
  $gid_extractor = new GN2GroupIDExtractor();
  $gid_extractor->setFormState($form_state);
  if (isset($form_state['#node'])) {
    $gid_extractor->setNode($form_state['#node']);
  }
  elseif (isset($form_state['node'])) {
    $gid_extractor->setNode($form_state['node']);
  }
  $gid = $gid_extractor->extract();
  return $gid;
}

/**
 * Has a gid been given as a parameter in the url.
 */
function gn2_simple_access_has_gid() {
  $gid = GN2GroupIDExtractor::fromUrl();
  if (isset($gid)) {
    return TRUE;
  }
  else {
    return FALSE;
  }
}

/**
 * Check if user is in a Group.
 *
 * @param int $gid
 *   Group ID to check.
 *
 * @return bool
 *   TRUE if User belongs to the passed in Group.
 *   FALSE if User is not in the passed in Group.
 */
function gn2_simple_access_user_is_in_group($gid) {
  // Get the groups the current user belongs to.
  $groups = og_get_entity_groups();
  // If current user does not belong to group provided as context return false.
  if (isset($groups['node']) && array_search($gid, $groups['node']) === FALSE) {
    return FALSE;
  }
  return TRUE;
}
