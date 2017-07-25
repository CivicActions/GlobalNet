<?php

namespace CivicActions\Drupal\Behat\Bootstrap\Context;

use Drupal\DrupalExtension\Context\RawDrupalContext;

/**
 * Context Class functions for performing User Permissions Matrix tests.
 */
class UserAccessPermissions extends RawDrupalContext {

  use \CivicActions\Drupal\Behat\Bootstrap\Helper\All;

  use \CivicActions\Drupal\Behat\Bootstrap\Helper\ContentGroupsUserPermissions;

  /**
   * Initializes context.
   */
  public function __construct() {
    $this->organization = 'Or1';
    $this->group = 'Or1 Gr1PU';
    $this->gid = $this->iGetTheNidForNodeByTitle($this->group);
    $this->memberships = array(
      'open',
      'closed',
      'moderated',
    );
    $this->simple_access_settings = array(
      'public',
      'sitewide',
      'organization',
      'group',
    );
    $this->group_node_types = array(
      'course',
      'event',
      'group',
    );
    $this->group_content = array(
      'announcement',
      'news',
      'poll',
      'post',
      'publication',
    );
  }

  /**
   * Create new authenticated user and add that user to a group.
   *
   * @Given I am a group member
   */
  public function iAmGroupMember() {
    $user = $this->createNewUserByRole('authenticated');
    $gid = $this->gid;
    $this->addUserToGroup($gid, $user);
  }

  /**
   * Create new authenticated user not assigned to any group.
   *
   * @Given I am not a member of a group
   */
  public function iAmNotGroupMember() {
    $this->createNewUserByRole('authenticated');
  }

  /**
   * Asserts user can access groups with any moderation or privacy settings.
   *
   * @Then I should be able to access courses, events and groups with any privacy or moderation setting within my group
   */
  public function assertUserAccessGroupsInGroupWithAllSettings() {
    $attributes = array();
    foreach ($this->group_node_types as $type) {
      foreach ($this->simple_access_settings as $privacy) {
        foreach ($this->memberships as $membership) {
          $attributes['permissions']['privacy'] = $privacy;
          $attributes['permissions']['membership'] = $membership;
          $status = $this->checkNodeAccess($type, $attributes);
          if ($status != 200) {
            throw new \Exception("Group member does not have access to " . $type . " node with privacy " . $privacy . " and moderation status " . $membership . ". Status Code: " . $status);
          }
        }
      }
    }
  }

  /**
   * Asserts user can access content with any moderation or privacy settings.
   *
   * @Then I should be able to access announcement, news, poll, post and publication content with any privacy or moderation setting within my group
   */
  public function assertUserAccessContentInGroupWithAllSettings() {
    $attributes = array();
    foreach ($this->group_content as $type) {
      foreach ($this->simple_access_settings as $privacy) {
        $attributes['permissions']['privacy'] = $privacy;
        $status = $this->checkNodeAccess($type, $attributes);
        if ($status != 200) {
          throw new \Exception("Group member does not have access to " . $type . " node with privacy " . $privacy . " and moderation status " . $membership . ". Status Code: " . $status);
        }
      }
    }
  }

  /**
   * Asserts user can access groups settings.
   *
   * @param string $moderation
   *   The moderation setting of the node to be looked up.
   * @param string $privacy
   *   The privacy setting of the node to be looked up.
   *
   * @Then I should be able to access courses, events and groups with :moderation moderation and :privacy privacy settings
   */
  public function assertUserAccessGroupsWithSpecificSettings($moderation, $privacy) {
    $moderation_settings = explode(',', $moderation);
    $privacy_settings = explode(',', $privacy);
    $attributes = array();
    foreach ($this->group_node_types as $type) {
      foreach ($privacy_settings as $privacy) {
        foreach ($moderation_settings as $membership) {
          $attributes['permissions']['privacy'] = $privacy;
          $attributes['permissions']['membership'] = $membership;
          $status = $this->checkNodeAccess($type, $attributes);
          if ($status != 200) {
            throw new \Exception("Group member does not have access to " . $type . " node with privacy " . $privacy . " and moderation status " . $membership . ". Status Code: " . $status);
          }
        }
      }
    }
  }

  /**
   * Asserts user can't access groups with specific settings.
   *
   * @param string $moderation
   *   The moderation setting of the node to be looked up.
   * @param string $privacy
   *   The privacy setting of the node to be looked up.
   *
   * @Then I should not be able to access courses, events and groups with :moderation moderation and :privacy privacy settings
   */
  public function assertUserCantAccessGroupsWithSpecificSettings($moderation, $privacy) {
    $moderation_settings = explode(',', $moderation);
    $privacy_settings = explode(',', $privacy);
    foreach ($this->group_node_types as $type) {
      foreach ($privacy_settings as $privacy) {
        foreach ($moderation_settings as $membership) {
          $attributes['permissions']['privacy'] = $privacy;
          $attributes['permissions']['membership'] = $membership;
          $status = $this->checkNodeAccess($type, $attributes);
          if ($status == 200) {
            throw new \Exception("User should be blocked but instead has gained access to " . $type . " node with privacy " . $privacy . " and moderation status " . $membership . ". Status Code: " . $status);
          }
        }
      }
    }
  }

  /**
   * Asserts user can access group content with specific settings.
   *
   * @param string $moderation
   *   The moderation setting of the node to be looked up.
   * @param string $privacy
   *   The privacy setting of the node to be looked up.
   *
   * @Then I should be able to access announcement, news, poll, post and publication content with :moderation moderation and :privacy privacy settings
   */
  public function assertUserAccessGroupContentWithSpecificSettings($moderation, $privacy) {
    $moderation_settings = explode(',', $moderation);
    $privacy_settings = explode(',', $privacy);
    $attributes = array();
    foreach ($this->group_content as $type) {
      foreach ($privacy_settings as $privacy) {
        $attributes['permissions']['privacy'] = $privacy;
        $status = $this->checkNodeAccess($type, $attributes);
        if ($status != 200) {
          throw new \Exception("Group member does not have access to " . $type . " node with privacy " . $privacy . " and moderation status " . $membership . ". Status Code: " . $status);
        }
      }
    }
  }

  /**
   * Asserts user can't access group content with specific settings.
   *
   * @param string $moderation
   *   The moderation setting of the node to be looked up.
   * @param string $privacy
   *   The privacy setting of the node to be looked up.
   *
   * @Then I should not be able to access announcement, news, poll, post and publication content with :moderation moderation and :privacy privacy settings
   */
  public function assertUserCantAccessGroupContentWithSpecificSettings($moderation, $privacy) {
    $moderation_settings = explode(',', $moderation);
    $privacy_settings = explode(',', $privacy);
    $attributes = array();
    foreach ($this->group_content as $type) {
      foreach ($privacy_settings as $privacy) {
        $attributes['permissions']['privacy'] = $privacy;
        $status = $this->checkNodeAccess($type, $attributes);
        if ($status == 200) {
          throw new \Exception("User should be blocked but instead has gained access to " . $type . " node with privacy " . $privacy . " and moderation status " . $membership . ". Status Code: " . $status);
        }
      }
    }
  }

}
