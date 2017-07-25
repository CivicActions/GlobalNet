@api
Feature: help.feature

  Scenario: Group, Course or Org manager should see Help content marked for Managers @RD-2818

    #No login step was here and so I am adding it for a user 3/21 6:30pm after JiraTests 135 Fail
    Given I have accepted terms and am logged in as a user with the "authenticated user" role
    And I visit "guide"
    And I should not see the text "Where can I View Events in a Group?"
    And I am logged out

    And I am logged in as "uadmin" with password "civicactions"
    And I visit the edit form for node with title "Where can I View Events in a Group?"
    And I select the radio button "Yes" with the id "edit-field-group-manager-display-und-1"
    And I press the "Save" button
    And I am logged out

    #Org manager adds group manager to group, group_manager sees guide help
    And I am logged in as "uadmin" with password "civicactions"
    And I add users to the "Or2 Gr8PU" group with role:
      | user | role |
      | umember1 | group_manager |
    And I am logged out
    And I am logged in as "umember1" with password "civicactions"
    And I visit "guide"
    And I should see the text "Where can I View Events in a Group?"

  @RD-3211 @COMPLETED @javascript
  Scenario: Guide page search form

    Given I have accepted terms and am logged in as a user with the "authenticated user" role
    And I visit the system path "/guide"
    Then I should see the text "Keyword search"
    And I am logged out

  @RD-3400 @help
  Scenario: Help should be viewable by all users: @RD-3400

    Given I have accepted terms and am logged in as a user with the "authenticated user" role
    And I visit "/guide"
    Then I should see the text "How do I sign in?"
    And I follow "How do I sign in?"
    And I should see the text "Go to your Organization's Home page"
    And I am logged out
    Given I am an anonymous user
    And I visit "/guide"
    Then I should see the text "How do I sign in?"
    And I follow "How do I sign in?"
    And I should see the text "Go to your Organization's Home page"