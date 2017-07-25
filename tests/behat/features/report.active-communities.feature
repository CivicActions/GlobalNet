@api @new @activecommunities
Feature: report.active-communities.feature

  @smoke @activecommunities @ettestme
  Scenario: Ensure correct access, and community ranking depending on event. Total items
    not to exceed 5.
    Given I am logged in as "uadmin" with password "civicactions"
    And I go to "/gcmc"
    # Check that the right users can access
    And user with name "admin" has access to active communities in "George C. Marshall Center"
    And user with name "umember1b" does not have access to active communities in "George C. Marshall Center"
    And user with name "umember2b" does not have access to active communities in "George C. Marshall Center"
    # Check that the community does move up
    Then I visit the active community that is number "1" in "George C. Marshall Center"
    Then I click "Add Post"
    And I enter "random stuff" for "edit-title"
    And I enter "random stuff" for "edit-body-und-0-value"
    Then I press the "edit-submit" button
    Then I visit the system path "gcmc"
    Then the group parent should be number "1" in the active communities list
    # Check that the community doesn't move up when member is added
    Given I add a member to active community "2" list order does not change
    # Check that active community list does not exceed 5
    Given active community number does not exceed "5"
