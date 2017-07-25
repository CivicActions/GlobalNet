<?php
/**
 * @file
 * OG related statements and helper functions.
 */

namespace CivicActions\Drupal\Behat\Bootstrap\Context;

use Behat\Behat\Tester\Exception\PendingException;
use Drupal\DrupalExtension\Context\RawDrupalContext,
    Behat\Behat\Context\SnippetAcceptingContext;

use Drupal\Component\Utility\Random;

use Behat\Behat\Context\Step,
    Behat\Behat\Context\Step\Given,
    Behat\Gherkin\Node\TableNode;

use Drupal\DrupalExtension\Hook\Scope\EntityScope;

class Og extends RawDrupalContext implements SnippetAcceptingContext {

  use \CivicActions\Drupal\Behat\Bootstrap\Helper\All;

  /**
   * Constructor.
   */
  public function __construct() {
    $this->random = new Random();
  }

  /**
   * Set test user's group role for the current group.
   *
   * @Given I am a/an :group_role of the current group
   */
  public function iAmAnOfTheCurrentGroup($group_role) {
    $group = $this->getCurrentGroupFromURL();
    $this->addMembertoGroup($group_role, $group);
  }

  /**
   * Visit the parent group.
   *
   * @Given I visit the parent group node
   */
  public function iVisitTheParentGroupNode() {
    $group = $this->getCurrentGroupFromURL();
    $this->getSession()->visit($this->locatePath('/node/' . $group->nid));
  }
  
   /**
   * Directs to the add people form for a node.
   *
   * @param string $title
   *   The title of the node to look up.
   *
   * @Given I visit the add people form for node with title :title
   */
  public function iVisitTheAddPeopleFormForNodeWithTitle($title) {
    $query = new \EntityFieldQuery();
    $query->entityCondition('entity_type', "node");
    $query->propertyCondition("title", $title);
    $query->range(0, 1);
    $results = $query->execute();
    $node = NULL;

    if (!empty($results["node"])) {
      foreach ($results["node"] as $nid => $info) {
        $node = node_load($nid);
      }
      $session = $this->getSession();
      $session->visit($this->locatePath('/group/node/' . $node->nid . '/admin/people/add-user'));
    } else {
      throw new \Exception("Node with title '{$title}' does not exist");
    }    
  }

  /**
   * Directs to the add folder form for a node.
   *
   * @param string $title
   *   The title of the node to look up.
   *
   * @throws \Exception
   * @Given I visit the add folder form for node with title :title
   */
  public function iVisitTheAddFolderFormForNodeWithTitle($title) {
    $query = new \EntityFieldQuery();
    $query->entityCondition('entity_type', "node");
    $query->propertyCondition("title", $title);
    $query->range(0, 1);
    $results = $query->execute();
    $node = NULL;

    if (!empty($results["node"])) {
      foreach ($results["node"] as $nid => $info) {
        $node = node_load($nid);
      }
      $session = $this->getSession();
      $session->visit($this->locatePath('node/add/media-gallery?gid=' . $node->nid));
    } else {
      throw new \Exception("Node with title '{$title}' does not exist");
    }
  }

  /**
   * Directs to the add member form for a node.
   *
   * @param string $title
   *   The title of the node to look up.
   *
   * @throws \Exception
   * @Given I visit the add bulk members form for node with title :title
   */
  public function iVisitTheAddMemberFormForNodeWithTitle($title) {
    $query = new \EntityFieldQuery();
    $query->entityCondition('entity_type', "node");
    $query->propertyCondition("title", $title);
    $query->range(0, 1);
    $results = $query->execute();
    $node = NULL;

    if (!empty($results["node"])) {
      foreach ($results["node"] as $nid => $info) {
        $node = node_load($nid);
      }
      $session = $this->getSession();
      $session->visit($this->locatePath('group/node/' . $node->nid . '/admin/people/addbulkmembers'));
    } else {
      throw new \Exception("Node with title '{$title}' does not exist");
    }
  }

  /**
   * Create a node belonging to the current group.
   *
   * @Given I create a/an :type (content )belonging to the current organic group
   */
  public function iCreateANodeBelongingToTheCurrentOrganicGroup($type) {
    // Get the current group.
    $group = $this->getCurrentGroupFromURL();

    // Create the group content.
    $node = (object) array(
        'og_group_ref' => $group->nid,
        'title' => $this->random->name(10),
        'status' => 1,
        'type' => $type,
    );
    // Creating the node will automatically redirect the browser to view it.
    $saved = $this->nodeCreate($node);
    $this->getSession()->visit($this->locatePath('/node/' . $saved->nid));
  }

  /**
   * Create a node belonging to the current group.
   *
   * @And I create a/an <type> (content )belonging to the group <group>
   */
  public function iCreateANodeBelongingToGroup($type, $group) {
    $query = new \EntityFieldQuery();
    $query->entityCondition('entity_type', "node");
    $query->propertyCondition("gid", $group);
    $query->propertyCondition("type", $type);
    $query->range(0, 1);
    $result1 = $query->execute();

    // Create the group content.
    $node = (object) array(
        'og_group_ref' => $group->nid,
        'title' => $this->random->name(10),
        'status' => 1,
        'type' => $type,
    );
    // Creating the node will automatically redirect the browser to view it.
    $saved = $this->nodeCreate($node);
    $this->getSession()->visit($this->locatePath('/node/' . $saved->nid));
  }

  /**
   * Create 'type' content belonging to the current group from a table.
   *
   * | title    | author     | status | created           |
   * | My title | Joe Editor | 1      | 2014-10-17 8:00am |
   * | ...      | ...        | ...    | ...               |
   *
   * @Given :type content belonging to the current organic group:
   */
  public function createNodesInGroup($type, TableNode $nodes_table) {
    // Get the current group.
    $group = $this->getCurrentGroupFromURL();

    foreach ($nodes_table->getHash() as $node_hash) {
      $node = (object) $node_hash;
      $node->type = $type;
      $node->og_group_ref = $group->nid;
      // Ensure node is published.
      $node->status = 1;
      $saved = $this->nodeCreate($node);
    }
    // Leave the browser on the last created node.
    $this->getSession()->visit($this->locatePath('/node/' . $saved->nid));
  }

  /**
   * Create a node belonging to a group.
   *
   * @Given I am viewing a/an :type belonging to a/an :group_type
   */
  public function iAmViewingANodeBelongingToAGroup($type, $group_type) {
    // Create the organic group.
    $node = (object) array(
      'title' => $this->random->name(),
      'type' => $group_type,
    );
    $this->nodeCreate($node);
    $group = $this->getLastCreatedEntity("node");

    // Create the group content.
    $node = (object) array(
      'og_group_ref' => $group->nid,
      'title' => $this->random->name(),
      'type' => $type,
    );
    // Creating the node will automatically redirect the browser to view it.
    $saved = $this->nodeCreate($node);
    $this->getSession()->visit($this->locatePath('/node/' . $saved->nid));
  }

  /**
   * Set test user's group role of a group.
   *
   * @Given I am a/an :group_role of a/an :group_type( group)
   */
  public function iAmAOfAnGroup($group_role, $group_type) {
    $group = $this->createNode($group_type);
    $this->addMembertoGroup($group_role, $group);
  }

  /**
   * Adds a member to an organic group with the specified role.
   *
   * @param string $group_role
   *   The machine name of the group role.
   *
   * @param object $group
   *   The group node.
   *
   * @param string $group_type
   *   (optional) The group's entity type.
   *
   * @throws \Exception
   */
  public function addMembertoGroup($group_role, $group, $group_type = 'node') {
    $user = $this->getLastCreatedEntity('user');
    list($gid, $vid, $bundle) = entity_extract_ids($group_type, $group);

    $membership = og_group($group_type, $gid, array(
      "entity type" => 'user',
      "entity" => $user,
    ));

    if (!$membership) {
      throw new \Exception("The Organic Group membership could not be created.");
    }

    // Add role for membership.
    $roles = og_roles($group_type, $group->type, $gid);
    $rid = array_search($group_role, $roles);

    if (!$rid) {
      throw new \Exception("'$group_role' is not a valid group role.");
    }

    og_role_grant($group_type, $gid, $user->uid, $rid);
    $this->softReload();
  }

  /**
   * Gets current Organic Group context from URL.
   *
   * @return object
   *   The group object.
   */
  public function getCurrentGroupFromURL() {
    // Get group context using node from current URL. Note that we cannot rely
    // on menu_get_item(), or og_context_determine_context() due to $_GET['q']
    // not being set correctly.
    $group_type = 'node';
    $node = $this->getNodeFromUrl();
    $context = _group_context_handler_entity($group_type, $node);
    if (!$context) {
      throw new \Exception("No active organic group context could be found.");
    }
    $gid = reset($context[$group_type]);
    $group = entity_load_single($group_type, $gid);

    return $group;
  }

  /**
   * Step function to go edit a memeber in a group.
   *
   * @Given I go to edit the member :name in :title group
   */
  public function iGoToEditTheMemberInGroup($name, $title) {
    $nid = 0; $uid = 0; $ogid = 0;

    $query = new \EntityFieldQuery();
    $query->entityCondition('entity_type', "user");
    $query->propertyCondition("name", $name);
    $query->range(0, 1);
    $result1 = $query->execute();
    $user = NULL;
    if ($result1) {
      foreach ($result1["user"] as $id => $info) {
        $uid = $id;
      }
    }

    $query = new \EntityFieldQuery();
    $query->entityCondition('entity_type', "node");
    $query->propertyCondition("title", $title);
    $result2 = $query->execute();
    $group = NULL;
    if (isset($result2["node"])) {
      foreach ($result2["node"] as $id => $info) {
        $nid = $id;
      }
    }

    $ogid = db_select('og_membership', 'o')
      ->fields('o', array('id'))
      ->condition('etid', $uid)
      ->condition('gid', $nid)
      ->execute()
      ->fetchField();

    if ($uid != 0 && $nid != 0) {
      $session = $this->getSession();
      $session->visit($this->locatePath("/group/node/{$nid}/admin/people/edit-membership/{$ogid}"));
    }
    elseif ($uid == 0) {
      throw new \Exception("User with name '{$name}' does not exist");
    }
    elseif ($nid == 0) {
      throw new \Exception("Node with title '{$title}' does not exist");
    }
  }

  /**
   * Step function to get to the last view page from the last group.
   *
   * @Given I visit :view_page for the last :group_type group
   */
  public function iVisitTheViewPageForTheLastGroupOfType($view_page, $group_type) {
    try {
      $node = $this->getLastCreatedEntityFromDb('node', $group_type);
      $this->getSession()->visit($this->locatePath('/' . $view_page . '/' . $node->nid));
    }
    catch (\Behat\Mink\Exception\ExpectationException $e) {
    }
  }

  /**
   * Step function to remove a member from the group.
   *
   * @Given I go to remove the member :name from :title group
   */
  public function iGoToRemoveTheMemberFromGroup($name, $title) {
    $nid = 0; $uid = 0; $ogid = 0;

    $query = new \EntityFieldQuery();
    $query->entityCondition('entity_type', "user");
    $query->propertyCondition("name", $name);
    $query->range(0, 1);
    $result1 = $query->execute();
    $user = NULL;
    if ($result1) {
      foreach ($result1["user"] as $id => $info) {
        $uid = $id;
      }
    }

    $query = new \EntityFieldQuery();
    $query->entityCondition('entity_type', "node");
    $query->propertyCondition("title", $title);
    $result2 = $query->execute();
    $group = NULL;
    if (isset($result2["node"])) {
      foreach ($result2["node"] as $id => $info) {
        $nid = $id;
      }
    }

    $ogid = db_select('og_membership', 'o')
      ->fields('o', array('id'))
      ->condition('etid', $uid)
      ->condition('gid', $nid)
      ->execute()
      ->fetchField();

    if ($uid != 0 && $nid != 0) {
      $session = $this->getSession();
      $session->visit($this->locatePath("/group/node/{$nid}/admin/people/delete-membership/{$ogid}"));
    }
    elseif ($uid == 0) {
      throw new \Exception("User with name '{$name}' does not exist");
    }
    elseif ($nid == 0) {
      throw new \Exception("Node with title '{$title}' does not exist");
    }
  }

  /**
   * Populates required fields before node creation.
   *
   * @beforeNodeCreate
   */
  public function nodePreSave(EntityScope $scope) {
    $node = $scope->getEntity();

    switch ($node->type) {
      case 'organization':
        // $node->field_org_abbreviation = $this->random->string(10);
        break;
    }

    // If a group has been specified via title, load it and set
    // og_group_ref correctly.
    if (!empty($node->Group)) {
      $query = new \EntityFieldQuery();

      $entities = $query->entityCondition('entity_type', 'node')
        ->propertyCondition('type', 'group')
        ->propertyCondition('title', $node->Group)
        ->execute();

      if (!empty($entities['node'])) {
        $nids = array_keys($entities['node']);
        $group_nid = reset($nids);
        $node->og_group_ref = $group_nid;
      }
    }
  }

  /**
   * Create a parent organic group for all group content nodes.
   *
   * For group content, automatically create the parent group and assign
   * it to the og_group_ref field. To prevent an infinite loop, we do not do
   * this for nodes can also act as groups.
   *
   * @param obj $node
   *   A node that is about to be saved.
   *
   * @TODO This method needs to be re-worked so the group type 'group' is no
   * hardcoded in.  That name is site-specific.
   */
  public function createParentGroup($node) {
    if (og_is_group_content_type('node', $node->type) && !og_is_group_type('node', $node->type)) {
      if (empty($node->og_group_ref)) {
        $this->createNode('group');
        $group = $this->getLastCreatedNode();
        $node->og_group_ref = (!empty($group->nid)) ? $group->nid : '';
      }
    }
  }
}
