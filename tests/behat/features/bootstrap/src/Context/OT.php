<?php
/**
 * @file
 * Operational Testing related context.
 */

namespace CivicActions\Drupal\Behat\Bootstrap\Context;

use Behat\Behat\Context\SnippetAcceptingContext,
  Drupal\DrupalExtension\Context\RawDrupalContext,
  Behat\Gherkin\Node\TableNode;

use Behat\Behat\Hook\Scope\AfterScenarioScope;

require_once __DIR__ . '/../../../../../../vendor/phpunit/phpunit/src/Framework/Assert/Functions.php';

/**
 * Defines functionality for performing OT (Operational Tests).
 */
class OT extends RawDrupalContext implements SnippetAcceptingContext {

  use \CivicActions\Drupal\Behat\Bootstrap\Helper\All;

  private $currentUser;

  private $backgroundUsers;

  private $token;

  private $permissionsMatrix;

  private $organization;

  private $group;

  private $creationMode;

  private $currentNode;

  private $createdNodes;


  /**
   * Initializes context.
   *
   * Every scenario gets its own context instance.
   * You can also pass arbitrary arguments to the
   * context constructor through a behat.yml.
   */
  public function __construct() {
    $this->organization = 'Or1';
    $this->group_path = 'or1-gr1pu';
    $this->group = 'Or1 Gr1PU';
    $this->token = 'CA2GOV';
  }

  /**
   * @AfterScenario @ot
   *
   * @param AfterScenarioScope $scope
   *   A behat AfterScenarioScope object.
   */
  public function cleanOT(AfterScenarioScope $scope) {
    // Clean database after @ot scenarios,
    if (!empty($this->createdNodes)) {
      $this->deleteNodeByNodeIds($this->createdNodes);
    }
  }

  /**
   * Accrue node ids of nodes created into an array.
   *
   * @param int $node_id
   *   The node id to tally.
   */
  public function tallyNodes($node_id) {
    if (!$node_id) {
      throw new \Exception('No node id provided to ' . __METHOD__);
    }
    $this->createdNodes[] = $node_id;
  }


  /**
   * Set the title token fo prepend to all content.
   *
   * @param string $token
   *   The token string.
   *
   * @When set the title token as :token
   */
  public function setTheToken($token) {
    $this->token = $token;
  }

  /**
   * Setting to create content on pre-existing demo content or not.
   *
   * @param string $mode
   *   default|custom
   *   E.g. default uses existing organization as base for all content.
   *   custom creates now top level org.
   *
   * @When set content creation mode as :mode
   */
  public function setContentCreationMode($mode) {
    $this->creationMode = $mode;
  }

  /**
   * Loads the array that is the permissions matrix.
   *
   * @When load the permissions matrix
   */
  public function loadPermissionsMatrix() {
    $this->permissionsMatrix = $this->generatePermissions();
  }

  /**
   * Generate one of each content type for each entry in the permissions matrix.
   *
   * @When I load the background data for:
   */
  public function loadBackgroundDataForType(TableNode $type) {
    $table_data = $type->getHash();
    if ($table_data) {
      foreach ($table_data as $key => $value) {
        $this->createNodesMatrix($value['type']);
      }
    }
    else {
      throw new \Exception('At least one type needed, none provided in ' . __METHOD__);
    }

  }

  /**
   * Loads users for testing.
   *
   * @When load the background users:
   */
  public function loadBackgroundUsers(TableNode $users) {
    $this->backgroundUsers = [];
    $table_data = $users->getHash();
    if ($table_data) {
      foreach ($table_data as $key => $value) {
        $this->backgroundUsers[] = $value['user'];
      }
    }
    else {
      throw new \Exception('At least one user needed, none provided in ' . __METHOD__);
    }
  }

  /**
   * Delete nodes from drupal by node ids.
   *
   * @param array $node_ids
   *   An array of nids of nodes to delete from Drupal.
   */
  private function deleteNodeByNodeIds(array $node_ids) {
    if (!empty($node_ids)) {
      node_delete_multiple($node_ids);
    }
    else {
      throw new \Exception('At least one nid is needed, none provided in ' . __METHOD__);
    }
  }

  /**
   * Decision tree on how to create a node of a certain type on a group.
   *
   * @param string $type
   *   The name of a content type.
   * @param string $group
   *   Title of a group.
   * @param array $attributes
   *   An array of custom values to use during content creation.
   */
  private function createANode($type, $group, $attributes = array()) {
    $group_target = $this->setGroupTarget($type, $group);
    $new_title = NULL;
    switch ($type) {
      case 'event':
        $new_title = $this->createAnEvent($group_target, $attributes);
        break;

      case 'post':
        $new_title = $this->createAPost($group_target, $attributes);
        break;

      case 'poll':
        $new_title = $this->createAPoll($group_target, $attributes);
        break;

      case 'announcement':
        $new_title = $this->createAnAnnouncement($group_target, $attributes);
        break;

      case 'course':
        $new_title = $this->createACourse($group_target, $attributes);
        break;

      case 'group':
        $new_title = $this->createAGroup($group_target, $attributes);
        if ($this->creationMode == "custom") {
          $this->group = $new_title;
        }
        break;

      case 'organization':
        $new_title = $this->createAnOrganization($group_target, $attributes);
        if ($this->creationMode == "custom") {
          $this->organization = $new_title;
        }
        break;

      default:
        throw new \Exception(sprintf("Missing type in %s", __METHOD__));
    }

    $this->createdNodes[] = $this->getTheNidForANodeByTitle($new_title);
    $this->currentNode = $new_title;

  }

  /**
   * Decision tree on what group to create a content item on.
   *
   * @param string $type
   *   The name of a content type.
   *
   * @return string $parent
   *   A group title.
   */
  private function evaluateAvailableParent($type) {

    if ($this->currentNode) {
      $parent = $this->currentNode;
    }
    else {
      switch ($type) {

        case 'organization':
          $parent = 'None';
          break;

        case 'group':
          $parent = $this->organization;
          break;

        case 'event':
        case 'post':
        case 'poll':
        case 'announcement':
        case 'course':
          $parent = $this->group;
          break;

        default:
          throw new \Exception(sprintf("Missing or unknown type in %s", __METHOD__));
      }
    }

    return $parent;
  }

  /**
   * Decision tree on how to get a node of a certain type on a group.
   *
   * @param string $type
   *   The name of a content type.
   * @param array $attributes
   *   An array of custom values to use during content creation.
   */
  private function getANode($type, $attributes = array()) {
    $new_node = NULL;

    $new_node = $this->getContentByAttributes($type, $attributes);
    if (!$new_node) {
      // No existing content was found. Create new content from scratch.
      // Evaluate for the parent to create the new content within it.
      $group = $this->evaluateAvailableParent($type);
      $this->createANode($type, $group, $attributes);
    }

    if ($new_node) {
      $this->currentNode = $new_node;
      return $new_node;
    }
    else {
      throw new \Exception(sprintf("There was an error. No new node was created in in %s", __METHOD__));
    }

  }

  /**
   * Get a node of a certain content type using certain settings.
   *
   * @When I get a :type node with membership :membership and privacy :privacy
   */
  public function iGetANode($type, $membership, $privacy) {
    $attributes['permissions'] = [
      'membership' => $membership,
      'privacy' => $privacy
    ];
    $this->getANode($type, $attributes);
  }


  /**
   * Get a node of a certain content type using certain settings.
   *
   * @When I get a :type node with membership :membership and privacy :privacy using an identifier :identifier
   */
  public function iGetANodeWithId($type, $membership, $privacy, $identifier) {
    $attributes['permissions'] = [
      'membership' => $membership,
      'privacy' => $privacy
    ];
    if ($identifier) {
      $attributes['identifier'] = $identifier;
    }
    $this->getANode($type, $attributes);
  }


  /**
   * A step to break behat processing and output some context variable values.
   *
   * A helper step for development debugging.
   *
   * @When print me
   */
  public function printMe() {
    // Uncomment below or add any values you need to inspect into this method,
    // then use step "Then print me" to break out of processing to emit output.
    // print "current parent = " . $this->currentNode; die(' end');
  }


  /**
   * Create a node of a certain content type on a group using certain settings.
   *
   * @When I create a :type node on :group with membership :membership and privacy :privacy
   */
  public function iCreateANode($type, $group, $membership, $privacy) {
    $attributes['permissions'] = [
      'membership' => $membership,
      'privacy' => $privacy
    ];
    $this->createANode($type, $group, $attributes);
  }

  /**
   * Create a node with title of a content type on a group using settings.
   *
   * @When I create a :type node with title :title on :group with membership :membership and privacy :privacy
   */
  public function iCreateANodeWithTitle($type, $title, $group, $membership, $privacy) {
    $attributes['permissions'] = [
      'membership' => $membership,
      'privacy' => $privacy
    ];
    $attributes['title'] = $title;
    $this->createANode($type, $group, $attributes);
  }

  /**
   * Create a number of nodes (as indicated by count).
   *
   * Create nodes of the specified count of a certain content type
   * on a group using certain settings.
   *
   * @param string $type
   *   The name of a content type.
   * @param TableNode $table
   *   An array of custom values to use during content creation.
   * @param string $group
   *   Title of a group.
   * @param int $count
   *   Number of nodes to create.
   *
   * @When I create :count :type nodes on :group with:
   */
  public function createNodes($type, TableNode $table, $group = '', $count = 1) {
    $attributes = $table;
    $x = 1;
    while ($x <= $count) {
      $this->createANode($type, $group, $attributes);
    }
  }

  /**
   * Create a node for each entry in the permissions matrix.
   *
   * @param string $type
   *   An node type to create.
   * @param string $group
   *   Title of a group.
   */
  private function createNodesMatrix($type, $group = '') {
    $permissions = $this->permissionsMatrix;
    if (!empty($permissions)) {
      foreach ($permissions as $membership => $privacy_settings) {
        foreach ($privacy_settings as $privacy_setting) {
          $attributes['permissions'] = [
            'membership' => $membership,
            'privacy' => $privacy_setting
          ];
          $this->createANode($type, $group, $attributes);
        }
      }
    }
    else {
      throw new \Exception(sprintf("Permissions matrix cannot be empty in %s", __METHOD__));
    }
  }

  /**
   * Generate the node title.
   *
   * @param array $attributes
   *   An array of attributes for a node.
   *
   * @return string
   *   The title of a node.
   */
  private function setNodeTitle(array $attributes) {
    $dynamic_title = NULL;

    if (!empty($attributes) && !empty($attributes['title'])) {
      $dynamic_title = $attributes['title'];
    }

    return $dynamic_title;
  }

  /**
   * Establish the admin path to create a node on a group.
   *
   * @param string $type
   *   An node type to create.
   * @param string $group
   *   Title of a group.
   */
  private function setGroupTarget($type, $group) {
    $group_target = NULL;

    if ($type) {
      // Creating an organization.
      if ($type == 'organization') {
        $group_target = "/node/add/organization";
      }
      else {
        // Creating anything else.
        if ($type == "group" && empty($group)) {
          // If creating a group type and no parent group provided,
          // create the group on the active organization.
          $group = $this->organization;
        }
        elseif ($type != "group" && empty($group)) {
          // If not creating an org or a group and no parent group provided,
          // create the new group on the active group.
          $group = $this->group;
        }

        $gid = $this->iGetTheGidForAGroupByTitle($group);
        $group_target = "/node/add/{$type}?gid={$gid}";
      }
    }
    else {
      throw new \Exception(sprintf("Missing parameter type in %s", __METHOD__));
    }

    return $group_target;
  }


  /**
   * Establish the admin path to add members on a group.
   *
   * @param string $group
   *   Title of a group.
   */
  private function setGroupAddMemberTarget($group) {
    $group_target = NULL;

    if ($group) {
      $gid = $this->iGetTheGidForAGroupByTitle($group);
      $group_target = "/group/node/{$gid}/admin/people/add-user";
    }
    else {
      throw new \Exception(sprintf("Missing parameter group in %s", __METHOD__));
    }

    return $group_target;
  }

  /**
   * Adds an authenticated user to an organic group with the specified role.
   *
   * @Then add an active :user_role user to active group as :group_role
   */
  public function addActiveUserAsMemberToActiveGroup($user_role, $group_role) {

    if (!$this->loggedInWithRole($user_role)) {
      // Create user (and project).
      $user = (object) array(
        'name' => $this->getRandom()->name(8),
        'pass' => $this->getRandom()->name(16),
        'role' => $user_role,
      );
      $user->mail = "{$user->name}@example.com";

      $user = $this->userCreate($user);

      $roles = explode(',', $user_role);
      $roles = array_map('trim', $roles);
      foreach ($roles as $role) {
        if (!in_array(strtolower($role), array(
          'authenticated',
          'authenticated user',
        ))
        ) {
          // Only add roles other than 'authenticated user'.
          $this->getDriver()->userAddRole($user, $role);
        }
      }

      $this->currentUser = $user;

      $this->getSession()->visit($this->locatePath('/user'));
      $element = $this->getSession()->getPage();
      $element->fillField($this->getDrupalText('username_field'), $this->currentUser->name);
      $element->fillField($this->getDrupalText('password_field'), $this->currentUser->pass);
      $submit = $element->findButton($this->getDrupalText('log_in'));
      if (empty($submit)) {
        throw new \Exception(sprintf("No submit button at %s", $this->getSession()
          ->getCurrentUrl()));
      }

      $submit->click();

    }

    $gid = $this->iGetTheGidForAGroupByTitle($this->group);
    $group = entity_load_single('node', $gid);
    $group_type = 'node';

    list($gid, $vid, $bundle) = entity_extract_ids($group_type, $group);

    $membership = og_group($group_type, $gid, array(
      "entity type" => 'user',
      "entity" => $this->currentUser,
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

    og_role_grant($group_type, $gid, $this->currentUser->uid, $rid);
    $this->softReload();

  }

  /**
   * Adds all the background users to a group.
   *
   * @param string $group_target
   *   The admin path for the group add user.
   */
  private function addBackgroundUsersAsMemberToGroup($group_target) {
    if ($group_target) {
      foreach ($this->backgroundUsers as $user) {
        $this->addUserAsMemberToGroup($user, $group_target);
      }
    }
    else {
      throw new \Exception('Missing group target parameter in ' . __METHOD__);
    }
  }

  /**
   * Adds an specific user to a group.
   *
   * @param string $user
   *   A user name.
   * @param string $group_target
   *   The admin path for the type of node to create on a group.
   */
  private function addUserAsMemberToGroup($user, $group_target) {

    $session = $this->getSession();
    $session->visit($this->locatePath($group_target));
    $edit_page = $session->getPage();

    $edit_page->fillField("edit-name", $user);
    $edit_page->pressButton("edit-submit");

    $completion_page = $session->getPage();
    // Check for new node page title on subsequent completion success page.
    $completion_page->find('xpath', '//div[@class="messages"]//em[text()="' . $user . '"]');

  }

  /**
   * Adds a specific user to a group with a specific role.
   *
   * @param string $user
   *   A user name.
   * @param string $role
   *   An og role name.
   * @param string $group_target
   *   The admin path for the type of node to create on a group.
   */
  private function addUserAsMemberToGroupWithRole($user, $role, $group_target) {

    $session = $this->getSession();
    $session->visit($this->locatePath($group_target));
    $edit_page = $session->getPage();
    $explode_gt = explode("/", $group_target);
    $gid = $explode_gt[3];

    $node = node_load($gid);

    if (!empty($edit_page) && isset($node)) {
      $edit_page->fillField("edit-name", $user);
      if ($role == "org_manager" || $role == "group_manager" || $role == "hr_manager" || $role == "course_presenter") {
        $roles = og_roles('node', $node->type, $node->nid);
        foreach ($roles as $key => $value) {
          if ($role == $value) {
            $edit_page->checkField("edit-roles-" . $key);
          }
        }
      }
      else {
        // So we throw an Exception so the test fails.
        throw new \Exception('The role you provided is not working.');
      }
      $edit_page->pressButton("edit-submit");

      $completion_page = $session->getPage();
      // Check for new node page title on subsequent completion success page.
      $completion_page->find('xpath', '//div[@class="messages"]//em[text()="' . $user . '"]');
    }
    else {
      // So we throw an Exception so the test fails.
      throw new \Exception('There was an error trying to access the page to add this user to this group.');
    }
  }


  /**
   * Check to see if you can Add a specific user to a group.
   *
   * @param string $user
   *   A user name.
   * @param string $group_target
   *   The admin path for the type of node to create on a group.
   */
  private function addAccessUserAsMemberToGroup($user, $group_target) {

    $session = $this->getSession();
    $session->visit($this->locatePath($group_target));
    $edit_page = $session->getPage();

    if (!empty($edit_page)) {
      $edit_page->fillField("edit-name", $user);
    }
    else {
      // So we throw an Exception so the test fails.
      throw new \Exception('There was an error trying to access the page to add this user to this group.');
    }
  }

  /**
   * Check access to add a specific user to a group with a specific role.
   *
   * @param string $user
   *   A user name.
   * @param string $role
   *   An og role name.
   * @param string $group_target
   *   The admin path for the type of node to create on a group.
   */
  private function addAccessUserAsMemberToGroupWithRole($user, $role, $group_target) {

    $session = $this->getSession();
    $session->visit($this->locatePath($group_target));
    $edit_page = $session->getPage();
    $explode_gt = explode("/", $group_target);
    $gid = $explode_gt[3];

    $node = node_load($gid);

    if (!empty($edit_page) && isset($node)) {
      $edit_page->fillField("edit-name", $user);
      if ($role == "org_manager" || $role == "group_manager" || $role == "hr_manager" || $role == "course_presenter") {
        $roles = og_roles('node', $node->type, $node->nid);
        foreach ($roles as $key => $value) {
          if ($role == $value) {
            $edit_page->checkField("edit-roles-" . $key);
          }
        }
      }
      else {
        // So we throw an Exception so the test fails.
        throw new \Exception('The role you provided is not working.');
      }
    }
  }


  /**
   * Adds user(s) to a group.
   *
   * @Then I add users to the :group group:
   */
  public function iAddUsersAsMemberToAGroup($group, TableNode $users) {
    if ($group) {
      $group_target = $this->setGroupAddMemberTarget($group);
      $table_data = $users->getHash();
      if ($table_data) {
        foreach ($table_data as $key => $value) {
          $this->addUserAsMemberToGroup($value['user'], $group_target);
        }
      }
      else {
        throw new \Exception('At least one user needed, none provided in ' . __METHOD__);
      }
    }
    else {
      throw new \Exception('Group is required, none provided in ' . __METHOD__);
    }

  }


  /**
   * Adds user(s) to a group.
   *
   * @Then I add users to the :group group with role:
   */
  public function iAddUsersAsMemberToAGroupWithRole($group, TableNode $users) {
    if ($group) {
      $group_target = $this->setGroupAddMemberTarget($group);
      $table_data = $users->getHash();
      if ($table_data) {
        foreach ($table_data as $key => $value) {
          $this->addUserAsMemberToGroupWithRole($table_data[$key]['user'], $table_data[$key]['role'], $group_target);
        }
      }
      else {
        throw new \Exception('At least one user needed, none provided in ' . __METHOD__);
      }
    }
    else {
      throw new \Exception('Group is required, none provided in ' . __METHOD__);
    }

  }


  /**
   * Adds user(s) to a group.
   *
   * @Then I go to add users to the :group group:
   */
  public function iAccessAddUsersAsMemberToAGroup($group, TableNode $users) {
    if ($group) {
      $group_target = $this->setGroupAddMemberTarget($group);
      $table_data = $users->getHash();
      if ($table_data) {
        foreach ($table_data as $key => $value) {
          $this->addAccessUserAsMemberToGroup($value['user'], $group_target);
        }
      }
      else {
        throw new \Exception('At least one user needed, none provided in ' . __METHOD__);
      }
    }
    else {
      throw new \Exception('Group is required, none provided in ' . __METHOD__);
    }

  }


  /**
   * Adds user(s) to a group.
   *
   * @Then I go to add users to the :group group with role:
   */
  public function iAccessAddUsersAsMemberToAGroupWithRole($group, TableNode $users) {
    if ($group) {
      $group_target = $this->setGroupAddMemberTarget($group);
      $table_data = $users->getHash();
      if ($table_data) {
        foreach ($table_data as $key => $value) {
          $this->addAccessUserAsMemberToGroupWithRole($table_data[$key]['user'], $table_data[$key]['role'], $group_target);
        }
      }
      else {
        throw new \Exception('At least one user needed, none provided in ' . __METHOD__);
      }
    }
    else {
      throw new \Exception('Group is required, none provided in ' . __METHOD__);
    }

  }


  /**
   * Create a GN2 Event.
   *
   * @param string $group_target
   *   The admin path for the type of node to create on a group.
   * @param array $attributes
   *   An array of custom values to use during content creation.
   */
  private function createAnEvent($group_target, $attributes = array()) {

    $membership = $attributes['permissions']['membership'];
    $privacy = $attributes['permissions']['privacy'];

    $title = $this->setNodeTitle($attributes);
    if (!$title) {
      $title = $this->token . "Event-" . $membership . "-" . $privacy;
    }

    $session = $this->getSession();
    $session->visit($this->locatePath($group_target));
    $edit_page = $session->getPage();

    // Settings.
    $edit_page->selectFieldOption("edit-gn2-og-form-options", $membership);
    // Title, Description.
    $edit_page->fillField("edit-title", $title);
    $edit_page->fillField("edit-body-und-0-value", $this->token . " event test body");
    // Dates.
    $edit_page->checkField("edit-field-event-date-und-0-show-todate");
    $edit_page->fillField("edit-field-event-date-und-0-value-datepicker-popup-0", "14 Jan 2017");
    $edit_page->fillField("edit-field-event-date-und-0-value-timeEntry-popup-1", "10:00");
    $edit_page->fillField("edit-field-event-date-und-0-value2-datepicker-popup-0", "17 Jan 2017");
    $edit_page->fillField("edit-field-event-date-und-0-value2-timeEntry-popup-1", "16:00");
    // Type, location, language.
    $edit_page->selectFieldOption("edit-field-event-type-und", "Meeting");
    $edit_page->selectFieldOption("edit-field-event-location-und", "In person");
    $edit_page->fillField("edit-field-location-venue-name-und-0-value", "Vince Horton Center");
    $edit_page->selectFieldOption("edit-field-language-und", "English");
    // Attach file needed.
    // Privacy, registration.
    $this->assertSelectRadioByIdOnly('edit-field-gn2-simple-access-und-' . strtolower($privacy));
    $this->assertSelectRadioByIdOnly("edit-field-registration-und-1");
    $this->assertSelectRadioByIdOnly("edit-field-registration-list-visibili-und-registrants");
    // Topics, countries, regions.
    $edit_page->checkField('Leadership');
    $edit_page->pressButton("Save");

    $completion_page = $session->getPage();
    // Check for new node page title on subsequent completion success page.
    $completion_page->find('xpath', '//div[@class="messages"]//em[text()="' . $title . '"]');

    if ($this->backgroundUsers) {
      $group_add_member_target = $this->setGroupAddMemberTarget($title);
      $this->addBackgroundUsersAsMemberToGroup($group_add_member_target);
    }

    return $title;

  }

  /**
   * Create a GN2 Poll.
   *
   * @param string $group_target
   *   The admin path for the type of node to create on a group.
   * @param array $attributes
   *   An array of custom values to use during content creation.
   */
  private function createAPoll($group_target, $attributes = array()) {

    $membership = $attributes['permissions']['membership'];
    $privacy = $attributes['permissions']['privacy'];

    $title = $this->setNodeTitle($attributes);
    if (!$title) {
      $title = $this->token . "Poll-" . $membership . "-" . $privacy;
    }

    $session = $this->getSession();
    $session->visit($this->locatePath($group_target));
    $edit_page = $session->getPage();

    // Title, Poll options.
    $edit_page->fillField("edit-title", $title);
    $edit_page->fillField("edit-choice-new0-chtext", "Use the faster method");
    $edit_page->fillField("edit-choice-new1-chtext", "Use the easier method");
    $edit_page->selectFieldOption("edit-language", "English");
    // Privacy, registration.
    $this->assertSelectRadioByIdOnly('edit-field-gn2-simple-access-und-' . strtolower($privacy));
    $edit_page->pressButton("Save");

    $completion_page = $session->getPage();
    // Check for new node page title on subsequent completion success page.
    $completion_page->find('xpath', '//div[@class="messages"]//em[text()="' . $title . '"]');

    return $title;

  }

  /**
   * Create a GN2 Announcement.
   *
   * @param string $group_target
   *   The admin path for the type of node to create on a group.
   * @param array $attributes
   *   An array of custom values to use during content creation.
   */
  private function createAnAnnouncement($group_target, $attributes = array()) {

    $membership = $attributes['permissions']['membership'];
    $privacy = $attributes['permissions']['privacy'];

    $title = $this->setNodeTitle($attributes);
    if (!$title) {
      $title = $this->token . "Announcement-" . $membership . "-" . $privacy;
    }

    $session = $this->getSession();
    $session->visit($this->locatePath($group_target));
    $edit_page = $session->getPage();

    // Title, description.
    $edit_page->fillField("edit-title", $title);
    $edit_page->fillField("edit-body-und-0-value", $this->token . " announcement test body");
    $this->assertSelectRadioByIdOnly('edit-field-release-date-toggle-und-now');
    // Attach image needed.
    $edit_page->checkField("edit-field-topic-und-0-92-92");
    $edit_page->checkField("edit-field-topic-und-0-84-84");
    $edit_page->checkField("edit-field-country-und-0-6-6");
    $edit_page->checkField("edit-field-country-und-0-5-5");
    $edit_page->checkField("edit-field-region-und-0-8-8");
    $edit_page->checkField("edit-field-region-und-0-124-124");
    $edit_page->checkField("edit-field-region-und-0-7-7");

    // Privacy, registration.
    $this->assertSelectRadioByIdOnly('edit-field-gn2-simple-access-und-' . strtolower($privacy));
    $edit_page->pressButton("Save");

    $completion_page = $session->getPage();
    // Check for new node page title on subsequent completion success page.
    $completion_page->find('xpath', '//div[@class="messages"]//em[text()="' . $title . '"]');

    return $title;

  }

  /**
   * Create a GN2 Post.
   *
   * @param string $group_target
   *   The admin path for the type of node to create on a group.
   * @param array $attributes
   *   An array of custom values to use during content creation.
   */
  private function createAPost($group_target, $attributes = array()) {

    $membership = $attributes['permissions']['membership'];
    $privacy = $attributes['permissions']['privacy'];

    $title = $this->setNodeTitle($attributes);
    if (!$title) {
      $title = $this->token . "Post-" . $membership . "-" . $privacy;
    }

    $session = $this->getSession();
    $session->visit($this->locatePath($group_target));
    $edit_page = $session->getPage();

    // Title, Description.
    $edit_page->fillField("edit-title", $title);
    $edit_page->fillField("edit-body-und-0-value", $this->token . " post test body");
    // Topics, countries, regions.
    $edit_page->checkField('Leadership');
    // Attach file needed.
    // Privacy, registration.
    $this->assertSelectRadioByIdOnly('edit-field-gn2-simple-access-und-' . strtolower($privacy));
    $edit_page->pressButton("Save");

    $completion_page = $session->getPage();
    // Check for new node page title on subsequent completion success page.
    $completion_page->find('xpath', '//div[@class="messages"]//em[text()="' . $title . '"]');

    return $title;

  }

  /**
   * Create a GN2 Course.
   *
   * @param string $group_target
   *   The admin path for the type of node to create on a group.
   * @param array $attributes
   *   An array of custom values to use during content creation.
   */
  private function createACourse($group_target, $attributes = array()) {

    $membership = $attributes['permissions']['membership'];
    $privacy = $attributes['permissions']['privacy'];

    $title = $this->setNodeTitle($attributes);
    if (!$title) {
      $title = $this->token . "Course-" . $membership . "-" . $privacy;
    }

    $session = $this->getSession();
    $session->visit($this->locatePath($group_target));
    $edit_page = $session->getPage();

    // Settings.
    $edit_page->selectFieldOption("edit-gn2-og-form-options", $membership);
    // Title, Description.
    $edit_page->fillField("edit-title", $title);
    $edit_page->fillField("edit-body-und-0-value", $this->token . " course test body");
    // Sessions.
    $this->assertSelectRadioByIdOnly("edit-field-will-this-course-have-sess-und-yes");
    // Attach image needed.
    // Dates.
    $edit_page->checkField("edit-field-course-dates-und-0-show-todate");
    $edit_page->fillField("edit-field-course-dates-und-0-value-datepicker-popup-0", "19 Jan 2017");
    $edit_page->fillField("edit-field-course-dates-und-0-value2-datepicker-popup-0", "24 Jan 2017");
    // Links.
    $edit_page->fillField("edit-field-rec-links-und-0-title", "A Related Link");
    $edit_page->fillField("edit-field-rec-links-und-0-url", "http://www.relatedlink.com");
    // Privacy.
    $this->assertSelectRadioByIdOnly('edit-field-gn2-simple-access-und-' . strtolower($privacy));
    // Topics, countries, regions.
    $edit_page->checkField("edit-field-topic-und-92");
    $edit_page->checkField("edit-field-topic-und-84");
    $edit_page->checkField("edit-field-country-und-6");
    $edit_page->checkField("edit-field-country-und-5");
    $edit_page->checkField("edit-field-region-und-0-8-8");
    $edit_page->checkField("edit-field-region-und-0-124-124");
    $edit_page->checkField("edit-field-region-und-0-7-7");
    // Course Managers.
    $edit_page->fillField("edit-field-course-director-und-0-target-id", "ugroupmanager1b");
    $edit_page->fillField("edit-field-course-faculty-und-0-target-id", "umember1");
    $edit_page->pressButton("Save");

    $completion_page = $session->getPage();

    // Check for new node page title on subsequent completion success page.
    $completion_page->find('xpath', '//div[@class="messages"]//em[text()="' . $title . '"]');
    // Groups: Course, sessions add.
    $completion_page->find('xpath', '//form[@id="session-entityform-edit-form"]//a[contains(text(),"Add a Session")]');
    $completion_page->selectFieldOption("edit-field-type-und", "Week");
    $completion_page->fillField("edit-field-title-und-0-value", "Sample Week Session");
    $completion_page->fillField("edit-field-description-und-0-value", "Week session description");
    $completion_page->fillField("edit-field-date2-und-0-value-datepicker-popup-0", "16 Jan 2017");
    // $completion_page->fillField("edit-field-date2-und-0-value-timeEntry-popup-1", "09:00").
    $completion_page->pressButton("edit-submit--3");

    $step_page = $session->getPage();

    $step_page->find('xpath', '//span[contains(text(), "SAMPLE WEEK SESSION")]');
    $step_page->selectFieldOption("edit-field-type-und", "Day");
    $step_page->fillField("edit-field-title-und-0-value", "Sample One Day");
    $step_page->selectFieldOption("edit-field-session-association-und", "Sample Week Session");
    $step_page->selectFieldOption("edit-field-day-number-und", "2");
    $step_page->fillField("edit-field-session-presenter-und-0-target-id", "umember1");
    $step_page->fillField("edit-field-description-und-0-value", "Sample Day Session");
    $step_page->pressButton("edit-submit--3");

    $completion_page = $session->getPage();
    // Check for new node page title on subsequent completion success page.
    $completion_page->find('xpath', '//h1[text()="' . $title . '"]');

    if ($this->backgroundUsers) {
      $group_add_member_target = $this->setGroupAddMemberTarget($title);
      $this->addBackgroundUsersAsMemberToGroup($group_add_member_target);
    }

    return $title;

  }

  /**
   * Create a GN2 Group.
   *
   * @param string $group_target
   *   The admin path for the type of node to create on a group.
   * @param array $attributes
   *   An array of custom values to use during content creation.
   */
  private function createAGroup($group_target, $attributes = array()) {

    $membership = $attributes['permissions']['membership'];
    $privacy = $attributes['permissions']['privacy'];

    $title = $this->setNodeTitle($attributes);
    if (!$title) {
      $title = $this->token . "Group-" . $membership . "-" . $privacy;
    }

    $session = $this->getSession();
    $session->visit($this->locatePath($group_target));
    $edit_page = $session->getPage();

    // Title, Description.
    $edit_page->fillField("edit-title", $title);
    $edit_page->fillField("edit-body-und-0-value", $this->token . " group test body");
    // Settings.
    $edit_page->selectFieldOption("edit-gn2-og-form-options", $membership);
    // Topics, countries, regions.
    $edit_page->checkField('edit-field-topic-und-0-92-92');
    $edit_page->checkField('edit-field-topic-und-0-84-84');
    // Attach file needed.
    // Privacy, registration.
    $edit_page->selectFieldOption("edit-gn2-notification-updates-for-node", 'Yes');
    $this->assertSelectRadioByIdOnly('edit-field-gn2-simple-access-und-' . strtolower($privacy));
    $edit_page->pressButton("Save");

    $completion_page = $session->getPage();
    // Check for new node page title on subsequent completion success page.
    $completion_page->find('xpath', '//div[@class="messages"]//em[text()="' . $title . '"]');
    $completion_page->find('xpath', '//span[text()="You are the group manager"]');

    if ($this->backgroundUsers) {
      $group_add_member_target = $this->setGroupAddMemberTarget($title);
      $this->addBackgroundUsersAsMemberToGroup($group_add_member_target);
    }

    return $title;

  }

  /**
   * Create a GN2 Organization.
   *
   * @param string $group_target
   *   The admin path for the type of node to create on a group.
   * @param array $attributes
   *   An array of custom values to use during content creation.
   */
  private function createAnOrganization($group_target, $attributes = array()) {

    $membership = $attributes['permissions']['membership'];
    $privacy = $attributes['permissions']['privacy'];

    $title = $this->setNodeTitle($attributes);
    if (!$title) {
      $title = $this->token . "Organization-" . $membership . "-" . $privacy;
    }

    $session = $this->getSession();
    $session->visit($this->locatePath($group_target));
    $edit_page = $session->getPage();

    // Settings.
    $edit_page->selectFieldOption("edit-gn2-og-form-options", $membership);
    // Title, Description.
    $edit_page->fillField("edit-title", $title);
    $edit_page->fillField("edit-field-org-short-title-und-0-value", "O" . $membership[0] . $privacy[0]);
    $edit_page->fillField("edit-body-und-0-value", $this->token . " post test body");
    $edit_page->fillField("edit-field-footer-description-und-0-value", $this->token . " organization test special");
    // Styles.
    $edit_page->selectFieldOption("edit-gn2-themeparts-swap-form-options-", "Blue");
    // Attach file needed.
    // Privacy, registration.
    $this->assertSelectRadioByIdOnly('edit-group-access-und-0');
    $edit_page->pressButton("Publish");

    $completion_page = $session->getPage();
    // Check for new node page title on subsequent completion success page.
    $completion_page->find('xpath', '//div[@class="messages"]//em[text()="' . $title . '"]');

    if ($this->backgroundUsers) {
      $group_add_member_target = $this->setGroupAddMemberTarget($title);
      $this->addBackgroundUsersAsMemberToGroup($group_add_member_target);
    }

    return $title;

  }

  /**
   * Delete safely all the test data that was created related to a token.
   *
   * @param string $token
   *   The token to search on when deleting content.
   */
  private function deleteAllData($token) {

  }

  /**
   * Create the GN2 permissions matrix .
   *
   * @return array
   *   The array of GN2 permissions for creating nodes.
   */
  private function generatePermissions() {
    $membership_settings = [
      'Closed',
      'Moderated',
      'Open'
    ];
    $privacy_settings = [
      'Private',
      'Group',
      'Organization',
      'Sitewide',
      'Public'
    ];
    $matrix = [];
    foreach ($membership_settings as $membership_setting) {
      $matrix[$membership_setting] = $privacy_settings;
    }
    return $matrix;
  }

  /**
   * Finds the gid for a given group.
   *
   * @param string $group
   *   An organic group title.
   *
   * @return int $gid
   *   An organic group gid.
   *
   * @Then I get the gid for a :group by title
   */
  public function iGetTheGidForAGroupByTitle($group) {

    $gid = NULL;

    $query = new \EntityFieldQuery();
    $query->entityCondition('entity_type', "node");
    $query->propertyCondition("title", $group);
    $results = $query->execute();

    if (isset($results["node"])) {
      foreach ($results["node"] as $id => $info) {
        $group = node_load($id);
      }
    }

    if (isset($group)) {
      $gid = $group->nid;
    }
    else {
      throw new \Exception("Group with title {$group} not found.");
    }

    return $gid;
  }

  /**
   * Finds the nid for a given node title.
   *
   * @param string $node_title
   *   An node title.
   *
   * @return int $nid
   *   An node nid.
   */
  private function getTheNidForANodeByTitle($node_title) {

    $nid = NULL;

    $query = new \EntityFieldQuery();
    $query->entityCondition('entity_type', "node");
    $query->propertyCondition("title", $node_title);
    $results = $query->execute();

    if (isset($results["node"])) {
      foreach ($results["node"] as $id => $info) {
        $nid = $id;
      }
    }

    if (!isset($nid)) {
      throw new \Exception("Node with title {$node_title} not found.");
    }

    return $nid;
  }

  /**
   * Select a radio button by id.
   *
   * @When I select the radio button with the id :id
   */
  public function assertSelectRadioByIdOnly($id = '') {
    $element = $this->getSession()->getPage();
    $radio_button = $id ? $element->findById($id) : $element->find('named', array(
      'radio',
      $this->getSession()->getSelectorsHandler()->xpathLiteral($label),
    ));
    if ($radio_button === NULL) {
      throw new \Exception(sprintf('The radio button with "%s" was not found on the page %s', $id ? $id : $label, $this->getSession()
        ->getCurrentUrl()));
    }
    $value = $radio_button->getAttribute('value');
    $radio_button->selectOption($value, FALSE);
  }

  /**
   * Collects test data (nodes, files, users) from the drupal db.
   *
   * @param string $token
   *   The token by which to look up and identify test data.
   * @param string $type
   *   Content type.
   *
   * @Given I visit test content of :type
   */
  private function getTestDataWithToken($token, $type) {

    $nodes = [];
    // Get test nodes.
    $query = new \EntityFieldQuery();
    $entities = $query->entityCondition('entity_type', 'node')
      ->entityCondition('bundle', $type)
      ->propertyCondition('title', '^(' . $token . ')', 'REGEXP')
      ->range(0, 1000)
      ->execute();
    if (!empty($entities['node'])) {
      foreach ($entities['node'] as $nid => $info) {
        $nodes[] = $nid;
      }
    }
    else {
      throw new \Exception(sprintf("No matching test %s nodes with title containing %s were found", $type, $token));
    }
    return $nodes;
  }

  /**
   * Retrieve a content item from the drupal db that has certain permissions.
   *
   * @param string $type
   *   Content type.
   * @param array $attributes
   *   An array of custom values to use during content creation.
   *
   * @return array
   *   An array of node objects
   */
  private function getContentByAttributes($type, array $attributes) {

    $membership = $attributes['permissions']['membership'];
    $privacy = $attributes['permissions']['privacy'];

    $node = NULL;
    // Get a node.
    $query = db_select('node', 'n');
    $query->join('gn2_og_membership_permission', 'gn', 'gn.nid = n.nid');
    $query->join('field_data_field_gn2_simple_access', 'sa', 'sa.entity_id = n.nid');
    $result = $query
      ->fields('n', array('nid', 'title'))
      ->fields('gn', array('grouptype'))
      ->fields('sa', array('field_gn2_simple_access_value'))
      ->condition('n.type', $type)
      ->condition('gn.grouptype', $membership)
      ->condition('sa.field_gn2_simple_access_value', $privacy)
      ->range(0, 1)
      ->execute();
    if ($result) {
      foreach ($result as $record) {
        $node = $record->title;
      }
    }
    else {
      // print sprintf("No %s nodes w/ title containing %s", $type, $token);
    }

    return $node;

  }

}
