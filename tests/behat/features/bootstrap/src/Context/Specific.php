<?php
/**
 * @file
 * Context definition for Specific.
 *
 * These are site specific methods that will get moved to FeaturesContext at
 * some point.
 */

namespace CivicActions\Drupal\Behat\Bootstrap\Context;

use Drupal\DrupalExtension\Context\RawDrupalContext;

/**
 * Site-specific methods.
 */
class Specific extends RawDrupalContext {

  use \CivicActions\Drupal\Behat\Bootstrap\Helper\All;

  /**
   * Asserts the main image file for a node exists.
   *
   * @param string $title
   *   The title of the node to be looked up.
   *
   * @Given I visit the main image for node with title :title
   *
   * @Todo This step function is very specific to a given field name and should
   *   be generalized to make it less site specific.
   */
  public function iVisitTheMainImageForNodeWithTitle($title) {
    $query = new \EntityFieldQuery();
    $query->entityCondition('entity_type', 'node');
    $query->propertyCondition('title', $title);
    $query->range(0, 1);
    $results = $query->execute();
    if (!empty($results['node'])) {
      $result = array_shift($results['node']);
      $node = node_load($result->nid);
      $files = field_get_items('node', $node, 'field_main_image');
      if (!empty($files)) {
        $file = array_shift($files);
        $uri = file_create_url($file['uri']);
        $session = $this->getSession();
        $session->visit($uri);
      }
      else {
        throw new \Exception("Node with title '{$title}' does not contain a main image");
      }
    }
    else {
      throw new \Exception("Node with title '{$title}' does not exist");
    }
  }

  /**
   * Submits iframe.
   *
   * @param string $name
   *   The title of the iframe.
   *
   * @Given /^I switch to the iframe "([^"]*)"$/
   */
  public function iSwitchToIframe($name = NULL) {
    $window_name = $this->getSession()->getWindowName();
    $frame = $this->getMink()->getSession()->getDriver()->getWebDriverSession();
    $frame->frame(array('id' => $name));
  }

  /**
   * Switches to iframe.
   *
   * @Given I submit the form in my Media Modal
   */
  public function iSubmitTheFormInMediaModal() {
    $js = 'jQuery(document).ready(function() {
      jQuery(".button-yes").removeClass("fake-submit");
      setTimeout(function(){
        jQuery(".button-yes").click();
      })
    })';
    $this->getSession()->executeScript($js);
  }

  /**
   * Clicks Next in iframe.
   *
   * @Given I click Next in my Media Modal
   */
  public function iClickNextInMediaModal() {
    $js = 'jQuery(document).ready(function() {
      setTimeout(function(){
        jQuery("#edit-next").click();
      })
    })';
    $this->getSession()->executeScript($js);
  }

  /**
   * Sets page size.
   *
   * @param string $width
   *   The browser width in pixels.
   * @param string $height
   *   The browser height in pixels.
   *
   * @Given /^I set browser window size to "([^"]*)" x "([^"]*)"$/
   */
  public function iSetBrowserWindowSizeToX($width, $height) {
    $this->getSession()->resizeWindow((int) $width, (int) $height, 'current');
  }

  /**
   * Asserts user has access to active communities.
   *
   * @param string $title
   *   The title of the node to be looked up.
   * @param string $user_name
   *   The name of the user to be loaded.
   *
   * @Given user with name :user_name has access to active communities in :title
   */
  public function userWithNameHasAccessToActiveCommunitiesIn($title, $user_name) {
    if (!empty($title)) {
      $user = user_load_by_name($user_name);
      $elements = $this->getSession()->getPage()->findAll('css', '.active-communities--item--title');
      foreach ($elements as $element) {
        $name = $element->getText();
        $query = new \EntityFieldQuery();
        $query->entityCondition('entity_type', "node");
        $query->propertyCondition("title", $name);
        $query->range(0, 1);
        $results = $query->execute();
        $node = NULL;

        if (!empty($results["node"])) {
          foreach ($results["node"] as $id => $info) {
            $entity = entity_load_single("node", $id);
            $access = node_access('view', $entity, $user);
            if (!$access) {
              throw new \Exception("User with name '{$user_name}' does not have permission to access '{$title}'");
            }
          }
        }
      }
    }
    else {
      throw new \Exception("Node with title '{$title}' is not accessible");
    }
  }

  /**
   * Asserts user does not have access to active communities.
   *
   * @param string $title
   *   The title of the node to be looked up.
   * @param string $user_name
   *   The name of the user to be loaded.
   *
   * @Given user with name :user_name does not have access to active communities in :title
   */
  public function userWithNameDoesNotHaveAccessToActiveCommunitiesIn($title, $user_name) {
    if (!empty($title)) {
      $user = user_load_by_name($user_name);
      $elements = $this->getSession()->getPage()->findAll('css', '.active-communities--item--title');
      foreach ($elements as $element) {
        $name = $element->getText();
        $query = new \EntityFieldQuery();
        $query->entityCondition('entity_type', "node");
        $query->propertyCondition("title", $name);
        $query->range(0, 1);
        $results = $query->execute();
        $node = NULL;

        if (!empty($results["node"])) {
          foreach ($results["node"] as $id => $info) {
            $entity = entity_load_single("node", $id);
            $access = node_access('view', $entity, $user);
            if ($access) {
              throw new \Exception("User with name '{$user_name}' does have permission to access '{$title}'");
            }
          }
        }
      }
    }
    else {
      throw new \Exception("Node with title '{$title}' is not accessible");
    }
  }

  /**
   * Grabs active community and visits.
   *
   * @param string $number
   *   The number order where node appears in active community list.
   * @param string $title
   *   The title of the node to be looked up.
   *
   * @Given I visit the active community that is number :number in :title
   */
  public function iVisitTheActiveCommunityThatIsNumberIn($number, $title) {
    if (!empty($title)) {
      $key = $number - 1;
      $elements = $this->getSession()->getPage()->findAll('css', '.active-communities--item--title');

      $name = $elements[$key]->getText();
      $query = new \EntityFieldQuery();
      $query->entityCondition('entity_type', "node");
      $query->propertyCondition("title", $name);
      $query->range(0, 1);
      $results = $query->execute();
      $node = NULL;

      if (!empty($results["node"])) {
        foreach ($results["node"] as $id => $info) {
          $entity = entity_load_single("node", $id);
          $this->getSession()->visit($this->locatePath('/node/' . $id));
        }
      }
      else {
        throw new \Exception("Node with title '{$title}' doesn't have any active communities");
      }
    }
    else {
      throw new \Exception("Node with title '{$title}' is not accessible");
    }
  }

  /**
   * Visit the group parent of the last created node.
   *
   * @Given I visit the group parent of the last created node
   */
  public function iVisitTheGroupParentOfTheLastCreatedNode() {
    $node = $this->getLastCreatedEntityFromDb('node');
    $this->getSession()->visit($this->locatePath('/node/' . $node->og_group_ref[LANGUAGE_NONE][0]['target_id']));
  }

  /**
   * Asserts last active group jumped up in list.
   *
   * @param string $number
   *   The number order where node appears in active community list.
   *
   * @Given the group parent should be number :number in the active communities list
   */
  public function theGroupParentShouldBeNumberInTheActiveCommunitiesList($number) {
    $last_created = $this->getLastCreatedEntityFromDb('node');
    $node = node_load($last_created->og_group_ref[LANGUAGE_NONE][0]['target_id']);
    $title = $node->title;

    $key = $number - 1;
    $elements = $this->getSession()->getPage()->findAll('css', '.active-communities--item--title');
    $count = count($elements);
    $name = $elements[$key]->getText();
    if ($title != $name) {
      throw new \Exception("The group parent is not number '{$number}' in active communities");
    }
  }

  /**
   * Asserts group does not jump in list after member add.
   *
   * @param string $number
   *   The number order where node appears in active community list.
   *
   * @Given I add a member to active community :number list order does not change
   */
  public function iAddAMemberToActiveCommunityOrderDoesNotChange($number) {

    $key = $number - 1;
    $elements = $this->getSession()->getPage()->findAll('css', '.active-communities--item--title');
    $name = $elements[$key]->getText();
    $query = new \EntityFieldQuery();
    $query->entityCondition('entity_type', "node");
    $query->propertyCondition("title", $name);
    $query->range(0, 1);
    $results = $query->execute();
    $node = NULL;

    if (!empty($results["node"])) {
      foreach ($results["node"] as $id => $info) {
        $entity = entity_load_single("node", $id);
        $values = array(
          'entity_type' => 'user',
          'entity' => 29,
        );
        og_group('node', $id, $values);
      }
      $this->getSession()->visit($this->locatePath('/node/16'));
      if ($name !== $elements[$key]->getText()) {
        throw new \Exception("Active community is not number '{$number}'");
      }
    }
    else {
      throw new \Exception("Active community number '{$number}' is not present");
    }
  }

  /**
   * Asserts active community limit.
   *
   * @param string $number
   *   The count of active communities in list.
   *
   * @Given active community number does not exceed :number
   */
  public function activeCommunityNumberDoesNotExceed($number) {
    $elements = $this->getSession()->getPage()->findAll('css', '.active-communities--item--title');
    $count = count($elements);
    if ($count > $number) {
      throw new \Exception("Active community count is '{$count}'");
    }
  }

  /**
   * Asserts the presense of a main image on a page with a specific title.
   *
   * @param string $style
   *   The style of the image to be asserted.
   * @param string $title
   *   The title of the node to be loaded.
   *
   * @Given I visit the :style image style of the main image for node with title :title
   *
   * @Todo This step function is very specific to a given field name and should
   *   be generalized to make it less site specific.
   */
  public function iVisitTheStyleOfMainImageForNodeWithTitle($style, $title) {
    $query = new \EntityFieldQuery();
    $query->entityCondition('entity_type', 'node');
    $query->propertyCondition('title', $title);
    $query->range(0, 1);
    $results = $query->execute();
    if (!empty($results['node'])) {
      $result = array_shift($results['node']);
      $node = node_load($result->nid);
      $files = field_get_items('node', $node, 'field_main_image');
      if (!empty($files)) {
        $file = array_shift($files);
        $uri = image_style_url($style, $file['uri']);
        $session = $this->getSession();
        $session->visit($uri);
      }
      else {
        throw new \Exception("Node with title '{$title}' does not contain a main image");
      }
    }
    else {
      throw new \Exception("Node with title '{$title}' does not exist");
    }
  }

  /**
   * Step function to visit the relationship request url for a user.
   *
   * @Given I visit the relationship request url for user :requested
   */
  public function iVisitTheRelationshipRequestUrlForUser($requested) {
    $query = new \EntityFieldQuery();
    $query->entityCondition('entity_type', "user");
    $query->propertyCondition("name", $requested);
    $query->range(0, 1);
    $results = $query->execute();
    $user = NULL;
    if ($results) {
      foreach ($results["user"] as $id => $info) {
        $user = entity_load_single("user", $id);
      }
    }

    if (isset($user)) {
      $session = $this->getSession();
      $session->visit($this->locatePath("/relationship/{$user->uid}/request"));
    }
    else {
      throw new \Exception("User with name '{$requested}' does not exist");
    }
  }

  /**
   * Creates and authenticates a user with the given role(s).
   *
   * @Given I have accepted terms and am logged in as a user with the :role role(s)
   */
  public function assertAcceptedAuthenticatedByRole($role) {
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

      // Login.
      $this->login();
    }
  }

  /**
   * Creates, authenticates user with given name, password and role(s).
   *
   * @Given a new custom user with name :name password :password and :role role(s)
   */
  public function createNewCustomUser($name, $password, $role) {
    $this->createCustomUser($name, $password, $role);
  }

  /**
   * Creates, authenticates a random user with given password and role(s).
   *
   * @Given a new random user with password :password and :role role(s)
   */
  public function createNewRandomUserWithCustomPassword($password, $role) {
    $name = '';
    $this->createCustomUser($name, $password, $role);
  }

  /**
   * Creates, authenticates user with optional given name, password and role(s).
   *
   * @param string $name
   *   The username to login with.
   * @param string $password
   *   The password to login with.
   * @param array|string $role
   *   The role(s) to login with.
   *
   * @throws \Behat\Mink\Exception\ElementNotFoundException
   *    Needs comment.
   *
   * @returns void
   */
  private function createCustomUser($name = '', $password = '', $role) {

    // Check if a user with this role is already logged in.
    if (!$this->loggedInWithRole($role)) {
      // Create user (and project).
      $user = (object) array(
        'name' => ($name != '') ? $name : $this->getRandom()->name(8),
        'pass' => ($password != '') ? $password : $this->getRandom()->name(16),
        'role' => $role,
      );
      $user->mail = "{$user->name}@example.com";

      $this->userCreate($user);

      $roles = explode(',', $role);
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

      // Login.
      $this->login();
    }
  }

  /**
   * Asserts logging in as a specific user with a specific password.
   *
   * @param string $username
   *   The username to login with.
   * @param string $password
   *   The password to login with.
   *
   * @throws \Behat\Mink\Exception\ElementNotFoundException
   *    Needs comment.
   * @throws \Exception
   *    Needs comment.
   *
   * @Given I am logged in as :username with password :password
   */
  public function iAmLoggedInAsWithPassword($username, $password) {
    // Check that user authenticates before logging in through the UI.
    if ($uid = user_authenticate($username, $password)) {
      $session = $this->getSession();
      $page = $session->getPage();
      $session->visit($this->locatePath('/user'));
      $page->fillField('Username', $username);
      $page->fillField('Password', $password);

      $login_button_text = $this->getDrupalText('log_in');
      $submit = $page->findButton($login_button_text);
      if (empty($submit)) {
        throw new \Exception(sprintf("No submit button at %s", $this->getSession()->getCurrentUrl()));
      }
      // Log in.
      $submit->click();
    }
    else {
      throw new \Exception(sprintf("Could not authenticate user '%s'", $username));
    }

    if (strpos($this->getSession()->getCurrentUrl(), 'legal_accept')) {
      $this->iAcceptTheTaC();
    }
  }

  /**
   * Asserts logging in as a specific user with a specific password.
   *
   * @param string $username
   *   The username to login with.
   * @param string $password
   *   The password to login with.
   *
   * @throws \Behat\Mink\Exception\ElementNotFoundException
   *   Needs comment.
   * @throws \Exception
   *    Needs comment.
   *
   * @And I am logged in as :username with password :password
   */
  public function andIAmLoggedInAsWithPassword($username, $password) {
    // Check that user authenticates before logging in through the UI.
    if ($uid = user_authenticate($username, $password)) {
      $session = $this->getSession();
      $page = $session->getPage();
      $session->visit($this->locatePath('/user'));
      $page->fillField('Username', $username);
      $page->fillField('Password', $password);

      $login_button_text = $this->getDrupalText('log_in');
      $submit = $page->findButton($login_button_text);
      if (empty($submit)) {
        throw new \Exception(sprintf("No submit button at %s", $this->getSession()->getCurrentUrl()));
      }
      // Log in.
      $submit->click();
    }
    else {
      throw new \Exception(sprintf("Could not authenticate user '%s'", $username));
    }

    if (strpos($this->getSession()->getCurrentUrl(), 'legal_accept')) {
      $this->iAcceptTheTaC();
    }
    $url = $this->getSession()->getCurrentUrl();
    print_r($url);
  }

  /**
   * Asserts that the Terms and Conditions could be accepted.
   *
   * @Then I accept the Terms and Conditions of Use
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
   * Asserts that the Terms and Conditions could be accepted.
   *
   * @Then I see that the movie header is compatible with Safari
   */
  public function iValidateMovieHeader() {
    $headers = $this->getSession()->getResponseHeaders();

    if (empty($headers)) {
      throw new \Exception(sprintf("There is no header information for the page you are visiting."));
    }

    if ($headers['Content-Type'][0] != "video/mp4") {
      throw new \Exception(sprintf("Your header information does not have the 'video/mp4' encoding.  Are you sure you are at the page of the actual resource/file, and not on the page of content where that file appears?"));
    }
  }

  /**
   * Creates content for a given group.
   *
   * @Given I go to create :content_type content for the :group_title group
   */
  public function iGoToCreateContentForTheGroup($content_type, $group_title) {
    $group = NULL;

    $query = new \EntityFieldQuery();
    $query->entityCondition('entity_type', "node");
    $query->propertyCondition("title", $group_title);
    $results = $query->execute();

    if (isset($results["node"])) {
      foreach ($results["node"] as $id => $info) {
        $group = node_load($id);
      }
    }

    if (isset($group)) {
      $path = "/node/add/{$content_type}?gid={$group->nid}";
      $this->getSession()->visit($this->locatePath($path));
    }
    else {
      throw new \Exception("Group {$group_title} not found.");
    }
  }

  /**
   * Creates content for a given group.
   *
   * @Then I go to create <type> content for the <group> group
   */
  public function iGoToCreateTypeContentForTheGroup($type, $group) {
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
      $path = "/node/add/{$type}?gid={$group->nid}";
      $this->getSession()->visit($this->locatePath($path));
    }
    else {
      throw new \Exception("Group {$group} not found.");
    }
  }

  /**
   * Creates content for a given group.
   *
   * @Then I go to create "([^"]*)" content for the "([^"]*)"$/ group
   */
  public function iGoToCreateQuoteTypeContentForTheGroup($type, $group) {
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
      $path = "/node/add/{$type}?gid={$group->nid}";
      $this->getSession()->visit($this->locatePath($path));
    }
    else {
      throw new \Exception("Group {$group} not found.");
    }
  }

  /**
   * View a private file associated with a user.
   *
   * @Given I go to private file associated with username :username
   */
  public function iGoToPrivateFileAssociatedWithUsername($username) {
    $user = user_load_by_name($username);
    $uid = $user->uid;

    $query = new \EntityFieldQuery();
    $results = $query->entityCondition('entity_type', 'file')
             ->propertyCondition('uid', $uid)
             ->execute();
    if (empty($results['file'])) {
      throw new \Exception("File for user {$username} was not found.");
    }
    foreach ($results['file'] as $result) {
      $file = file_load($result->fid);
      if (strstr($file->uri, 'private')) {
        $image_uri = $file->uri;
        break;
      }
    }

    $url = file_create_url($image_uri);
    $session = $this->getSession();
    $session->visit($url);
  }

  /**
   * View image style of image.
   *
   * @Given I go to :image_style image style for image associated with username :username
   */
  public function iGoToImageStyleForImageAssociatedWithUsername($image_style, $username) {
    $user = user_load_by_name($username);
    $uid = $user->uid;

    $field = field_info_instance('node', 'field_main_image', 'post');
    $extensions = str_replace(' ', '|', $field['settings']['file_extensions']);

    $query = new \EntityFieldQuery();
    $results = $query->entityCondition('entity_type', 'file')
             ->propertyCondition('uid', $uid)
             ->execute();
    if (empty($results['file'])) {
      throw new \Exception("Image associated with user {$username} was not found.");
    }
    foreach ($results['file'] as $result) {
      $file = file_load($result->fid);
      if (strstr($file->uri, 'private') && preg_match('/^.*\.(' . $extensions . ')$/i', $file->uri)) {
        $image_uri = $file->uri;
        break;
      }
    }

    $url = image_style_url($image_style, $image_uri);
    $session = $this->getSession();
    $session->visit($url);
  }

  /**
   * Step function to assert that user can view all content marked 'public'.
   *
   * @Given I can view all content marked public
   */
  public function assertICanViewAllContentMarkedPublic() {
    $content_types = array(
      "post",
      "announcement",
      "news",
      "publication",
      "group",
      "event",
      "organization",
      "alumni_group",
      "course",
    );
    $content_count = 0;
    foreach ($content_types as $content_type) {
      // Get all node ids that match criteria.
      $query = db_select('node', 'n');
      $join = $query->join('field_data_field_gn2_simple_access', 'gn2', 'n.nid = gn2.entity_id');
      $query
        ->fields('n', array('nid'))
        ->fields('n', array('type'))
        ->condition('n.type', $content_type)
        ->condition('n.status', 1)
        ->condition('gn2.field_gn2_simple_access_value', 'public');
      $nids = $query->execute()
        ->fetchCol();

      if (!empty($nids)) {
        // Get latest node that matches criteria,
        // load full node object and check node access.
        $latest_nid = max($nids);
        $node = entity_load_single("node", $latest_nid);
        $pass = node_access("view", $node);
        if (empty($pass)) {
          throw new \Exception("User cannot access {$node->type} node with title '{$node->title}'");
        }
        else {
          $content_count++;
        }
      }
    }
    // Make sure at least 1 content type check has been performed.
    if ($content_count < 1) {
      throw new \Exception("No content found for testing anonymous user access to public content");
    }
  }

  /**
   * Step function to expire the current logged in user's password.
   *
   * @Given my password has expired
   */
  public function myPasswordHasExpired() {
    db_query('UPDATE password_policy_force_change SET force_change = 1 WHERE uid = ' . $this->user->uid);
  }


  /**
   * Asserts logging out.
   *
   * @Given I am logged out
   */
  public function iAmLoggedOut() {
    $session = $this->getSession();
    $session->visit($this->locatePath('/user/logout'));
  }

  /**
   * Directs current user to their edit profile form with horizontal tab open.
   *
   * @param string $tab
   *   The tab to open.
   *
   * @Given I visit my edit profile form with open tab :tab
   */
  public function iVisitMyEditProfileFormWithOpenTab($tab) {
    $session = $this->getSession();
    $session->visit($this->locatePath('/user/' . $this->user->uid . '/edit#' . $tab));
  }

  /**
   * This function is meant to support the automated test found in RD-2733.
   *
   * @Then /^"([^"]*)" should precede "([^"]*)" in "([^"]*)"$/
   */
  public function shouldPrecedeIn($text_before, $text_after, $css_query) {
    $items = array_map(
      function ($element) {
        return $element->getText();
      },
      $this->getSession()->getPage()->findAll('css', $css_query)
    );
    assertGreaterThan(
      array_search($text_before, $items),
      array_search($text_after, $items),
      "$text_before does not proceed $text_after"
    );
  }

}
