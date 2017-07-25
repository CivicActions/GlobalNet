<?php

namespace CivicActions\Drupal\Behat\Bootstrap\Helper;

/**
 * Various Helper functions intended for inclusion in a Behat Context Class.
 */
trait ContentGroupsUserPermissions {

  /**
   * Finds the nid for a given node.
   *
   * @param string $title
   *   An node title.
   *
   * @return int $nid
   *   An node nid.
   */
  public function iGetTheNidForNodeByTitle($title) {

    $query = new \EntityFieldQuery();
    $query->entityCondition('entity_type', "node");
    $query->propertyCondition("title", $title);
    $results = $query->execute();

    if (isset($results["node"])) {
      foreach ($results["node"] as $id => $info) {
        $nid = $id;
      }
    }

    if (!isset($nid)) {
      throw new \Exception("Node with title {$title} not found.");
    }
    return $nid;
  }

  /**
   * Assigns user to a Group.
   *
   * @param int $gid
   *   The nid of the group node to add the user to.
   * @param object $user
   *   The full user object.
   */
  public function addUserToGroup($gid, $user) {
    og_group('node', $gid, $values = array(
      "entity_type" => "user",
      "entity" => $user,
    ), $save_created = TRUE);

    // Query to check if user was added to group.
    $query = db_select('og_membership', 'og');
    $query->condition('entity_type', 'user');
    $query->condition('etid', $user->uid);
    $query->condition('gid', $gid);
    $query->fields('og');
    $results = $query->execute()->fetch();
    if (empty($results)) {
      throw new \Exception("User '{$user->name}' was not successfully added to the group.");
    }
  }

  /**
   * Accept the terms and conditions of Use.
   */
  public function iAcceptTheTaC() {
    $element = $this->getSession()->getPage();
    $element->checkField('Accept Terms & Conditions of Use');
    $submit = $element->findButton('Confirm');
    if (empty($submit)) {
      throw new \Exception(sprintf("Could not accept the TaC, no submit button at %s", $this->getSession()->getCurrentUrl()));
    }

    $submit->click();
  }

  /**
   * Creates and authenticates a user with the given role(s).
   *
   * @param string $role
   *   Role of the user to create.
   * @param bool $login
   *   Set True if the user should login after created.
   *
   * @return object $user
   *   A newly created user object.
   */
  public function createNewUserByRole($role, $login = TRUE) {
    // Check if a user with this role is already logged in.
    if (!$this->loggedInWithRole($role)) {
      // Create user (and project).
      $user = (object) array(
        'name' => $this->getRandom()->name(8),
        'pass' => $this->getRandom()->name(16),
        'role' => $role,
      );
      $user->mail = "{$user->name}@example.com";

      $this->userCreate($user);

      $roles = explode(',', $role);
      $roles = array_map('trim', $roles);
      foreach ($roles as $role) {
        if (!in_array(strtolower($role), array('authenticated', 'authenticated user'))) {
          // Only add roles other than 'authenticated user'.
          $this->getDriver()->userAddRole($user, $role);
        }
      }
      if ($login) {
        // Login.
        $this->login();
      }
    }
    return $user;
  }

  /**
   * Create a node under a certain group that has certain permissions.
   *
   * @param string $type
   *   Content type.
   * @param array $attributes
   *   An array of custom values to use during content creation.
   *
   * @return object
   *   A newly created node object
   */
  public function createGroupNode($type, $attributes) {
    // If no existing content is found, create new content.
    $group = $this->group;
    $gid = $this->gid;
    $node = new \stdClass();
    $node->type = $type;
    $node->body['und'] = 'lorem ipsum';
    $node->field_gn2_simple_access['und'] = $attributes['permissions']['privacy'];
    $node->status = 1;
    $node->language = 'en';
    $node->og_group_ref['und'] = $gid;
    $node->title = $group . ' ' . $type . ' node, ' . $attributes['permissions']['privacy'] . ' privacy, ';
    if (array_key_exists('membership', $attributes['permissions'])) {
      $node->title .= $attributes['permissions']['membership'] . ' membership';
    }
    if ($type == 'poll') {
      $node->choice = array();
      $node->runtime = 0;
      $node->active = 1;
    }
    $node = $this->getDriver()->createNode($node);

    return $node;
  }

  /**
   * Get node object, create new node if a match does not already exist.
   *
   * @param string $type
   *   The name of a content type.
   * @param array $attributes
   *   An array of custom values to use during search and/or content creation.
   *
   * @return object
   *   A node object
   */
  private function getNode($type, $attributes = array()) {
    $existing_node = NULL;

    // Check if a node exists with the given attributes (membership, privacy).
    $existing_node = $this->getContentByAttributes($type, $attributes);

    if (!$existing_node) {
      // Create a new Node if no existing node with specified attributes exists.
      $node = $this->createGroupNode($type, $attributes);

      // Add OG membership permissions: open, closed or moderated.
      if (array_key_exists('membership', $attributes['permissions']) && !empty($attributes['permissions']['membership'])) {
        gn2_og_write_membership_permission($node->nid, $attributes['permissions']['membership']);
      }
      if (!empty($node)) {
        return $node;
      }
      else {
        throw new \Exception(sprintf("There was an error. No new node was created in %s", __METHOD__));
      }
    }
    else {
      return $existing_node;
    }
  }

  /**
   * Retrieve a content item from the drupal db that has certain permissions.
   *
   * @param string $type
   *   Content type.
   * @param array $attributes
   *   An array of custom permission values to search on.
   *
   * @return object
   *   A matching node object, or NULL if no match
   */
  public function getContentByAttributes($type, array $attributes) {
    if (array_key_exists('membership', $attributes['permissions'])) {
      $membership = $attributes['permissions']['membership'];
    }
    else {
      $membership = '';
    }
    $privacy = $attributes['permissions']['privacy'];
    $node = NULL;
    // Get a node of matching $type and $attributes.
    $query = db_select('node', 'n');
    $query->join('gn2_og_membership_permission', 'gn', 'gn.nid = n.nid');
    $query->join('field_data_field_gn2_simple_access', 'sa', 'sa.entity_id = n.nid');
    $query->join('og_membership', 'og', 'og.etid = n.nid');
    $result = $query
      ->fields('n', array('nid', 'title'))
      ->fields('gn', array('grouptype'))
      ->fields('sa', array('field_gn2_simple_access_value'))
      ->condition('n.type', $type)
      ->condition('gn.grouptype', $membership)
      ->condition('og.gid', $this->gid)
      ->condition('sa.field_gn2_simple_access_value', $privacy)
      ->execute();
    if ($result->rowCount() != 0) {
      while ($record = $result->fetchAssoc()) {
        if (!empty($record)) {
          $node = node_load($record['nid']);
        }
      }
    }

    return $node;
  }

  /**
   * Retrieve a node matching attributes then check user access on it.
   *
   * @param string $type
   *   Content type.
   * @param array $attributes
   *   An array of custom permission values to search on.
   *
   * @return object
   *   A matching node object, or NULL if no match
   */
  public function checkNodeAccess($type, $attributes) {
    $node = $this->getNode($type, $attributes);
    $session = $this->getSession();
    $session->visit('/node/' . $node->nid);
    $status = $session->getStatusCode();

    return $status;
  }

}
