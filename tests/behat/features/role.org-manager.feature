@api
Feature: role.org-manager.functions

  Background: I login as uorgmanager1
   Given I am logged in as "uorgmanager1" with password "civicactions"


  Scenario: Org Manager should not see Org Manager role @RD-2695

    When I visit the node with title "Or1 Gr1PU"
    And I follow "Add Members"
    Then I should not see the text "org_manager"



  Scenario: Org Manager should not see Org Manager role on edit  @RD-2695

    When I visit the node with title "Or1 Gr1PU"
    And I follow "Manage members"
    And I follow "edit"
    Then I should not see the text "org_manager"


  Scenario: Managers shouldn't see Request Message on edit @RD-2547

    When I visit the node with title "Or1 Gr1PU"
    And I follow "Manage members"
    And I follow "edit"
    Then I should not see the text "Request message"


  Scenario: Managers shouldn't see Request message or Invitation on add  @RD-2547

    When I visit the node with title "Or1 Gr1PU"
    And I follow "Add Members"
    Then I should not see the text "Request message"
    And I should not see the text "Invitation"


  Scenario: Org_manager needs to be able to invite users, add Courses and Course groups   @RD-1900

    When I visit the node with title "Or1"
    And I follow "Add Members"
    And I follow "Invite Users"
    Then I should get a 200 HTTP response
    And I go to create "event" content for the "Or1" group
    Then I should get a 200 HTTP response
    And I go to create "course" content for the "Or1" group
    Then I should get a 200 HTTP response


  Scenario: Org Manager: be able to see admin/manage/content only in their org   @RD-1718

    And I visit the node with title "Or1"
    And I click "Add Members" in the "sidebar" region
    Then I should get a 200 HTTP response
    And I visit the node with title "Or2"
    Then I should not see the text "Group Admin Menu"


  Scenario: Org_Manager: be able to change content author  @RD-1716

    And I visit the edit form for node with title "Or1 Co1PU"
    Then I should get a 200 HTTP response
    And I visit the edit form for node with title "Or1 Co1PU"
    Then I should get a 200 HTTP response
    And I visit the edit form for node with title "Or2 Pl14PR"
    Then I should get a 403 HTTP response
    And I visit the edit form for node with title "Or2 Pl10OR"
    Then I should get a 403 HTTP response


  Scenario: Organization manager able to View any group and any group Metrics tab that they are responsible for @RD-1725

    And I visit the node with title "Or1 Gr1PU Co18GR"
    And I follow "Metrics"
    Then I should get a 200 HTTP response
    And I visit the node with title "Or2 Co9SI"
    Then I should see the text "Metrics"


  Scenario: Org Manager can view all organizational metrics @RD-3110  @RD-3196

    And I visit the node with title "Or1"
    And I follow "Metrics"
    And I follow "View metrics"
    Then I should get a "200" HTTP response
    Then I should see the text "ASSOCIATED CONTENT"
    And I should see the text "ASSOCIATED GROUPS"
    And I should see the link "User Engagement"
    And I follow "User Engagement"
    Then I should see the text "Bar Graph"


  Scenario: User edit: Undefined index warning @RD-3006

    And I visit the system path "/users/umember1"
    And I follow "Edit"
    Then I should not see the text "Undefined index:"


  Scenario: Org Manager should not see "OG" word in Operations select field @RD-3312

    When I visit the node with title "Or1 Gr1PU"
    And I follow "Manage members"
    Then I should not see the text "Modify OG user roles"
    And I should see the text "Modify user roles"

  Scenario: Org_manager should be able to add a Course content type to Organization   @RD-2653

    When I go to create "course" content for the "Or1" group
    Then I should see the text "Or1"
    And I fill in "edit-title" with "Create Course"
    And I fill in "edit-body-und-0-value" with "Create Course"
    And I check the box "Peace"
    And I select the radio button "Group - Can be viewed only by members of the group." with the id "edit-field-gn2-simple-access-und-group"
    And I select "open" from "edit-gn2-og-form-options"
    And I press the "Save" button
    And I should see the text "has been created"

  Scenario: Org_Manager: be able to view poll results @RD-3381

    And I visit the node with title "Or1 Co1PU Cg1PU Pl31OR"
    Then I should see the link "Votes"
    And I follow "Votes"
    Then I should see the text "This table lists all the recorded votes for this poll"

  @RD-2938
  Scenario Outline: Managers shouldn't see Invite Users tab @RD-2938

    And I visit the node with title "<texts>"
    And I follow "Manage members"
    Then I should not see the text "Invite Users"

    Examples:
      | texts            |
      | Or1 Gr1PU        |
      | Or1 Gr1PU Co15PU |
      | Or1 Pg1PU Ev29PU |
