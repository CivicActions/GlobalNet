@api
Feature: report.dashboard-manager.feature

  Testing dashboard functions and reports 2m6.723s

  Background: Login as uorgamanager1
    Given I am logged in as "uorgmanager1" with password "civicactions"

  Scenario: Organization Dashboard: Org Manager  @RD-2441 @RD-2989 @RD-3292 @uorgmanager1

      And I visit the system path "/or1"
      And I click "Manage"
      Then I should see the text "Administrative Links"
      And I click "Manage Members"
      #fails here
      And I should see the text "umember1"
      And I should see the text "uorgmanager1"
      Then I visit the system path "/or1"
      And I click "Manage"
      Then I click "Manage Content"
      Then I should see the CSS selector ".vbo-select"
      Then I should see the text "Published"
      And I should see the text "Type"
      And I should see the text "Title"
      And I should see the text "PostDate"
      Then I visit the system path "/or1"
#       And I click "Manage"
#       Then I click "View Form Submissions"
#       And I should see the text "Course Feedback"
#       And I should see the text "Technical Support"


  Scenario: Test that org manager can't access the sitewide user dashboard @RD-2389  @uorgmanager1

    Given I visit the system path "users/dashboard"
      Then I should get a 403 HTTP response

  Scenario: Org_manager can create a user via the organization dashboard  @RD-2405  @uorgmanager1

    When I visit the system path "/or1/dashboard"
    And I follow "Add New User"
    And I fill in "edit-mail" with "testuser1z2z@user.com"
    And I fill in "edit-field-name-first-und-0-value" with "Test"
    And I fill in "edit-field-name-last-und-0-value" with "User"
    And I press "Create new account"
    And I visit the system path "/or1/group"
    And I follow "People"
      Then I should see "test.user"

  Scenario: Organization Dashboard: Content filter @RD-3031

    When I visit the node with title "Or1"
    And I follow "Manage"
    And I follow "Manage Content"
      Then I should see the CSS selector "#edit-title"
      And I should see the CSS selector "#edit-uid"

  Scenario: Organization Dashboard: Manage Files @RD-3226

    When I visit the node with title "Or1"
    And I follow "Manage"
    And I follow "Manage Files"
      Then I should see the CSS selector "#edit-type"
      And I should see the CSS selector "#edit-submit-admin-files"

  Scenario: Organization Dashboard: Manage Users - combined filter @RD-3412

    When I visit the node with title "Or1"
    And I follow "Manage"
    And I follow "Manage Members"
    And I fill in "edit-combine" with "Manageroneb"
    And I click the element with CSS selector "#edit-submit-user-bulk-block"
      Then I should see the text "Ulyssa"

  Scenario: Organization Dashboard: Content Analytics @RD-3161

    When I visit the node with title "Or1"
    And I follow "Manage"
    And I follow "Content Analytics"
      Then I should get a 200 HTTP response