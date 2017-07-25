Feature: role.hr-manager.features
  Tests aspects of the hr_manager role

  Scenario: Create hr_manager role enabling complete control of user accounts of organization group members  @RD-1649 @RD-1456 @RD-3160 @RD-1812
    Given I am logged in as "uadmin" with password "civicactions"
    And I run drush "upwd uhrmanager1b --password='civicactions'"
    And I run drush "upwd uhrmanager2b --password='civicactions'"
    And I am logged out

    And I am logged in as "uhrmanager1b" with password "civicactions"
    And I visit "/users/umember1/edit"
      Then I should get a 200 HTTP response
    And I visit "/or1/dashboard"
      Then I should get a 200 HTTP response
    And I click "Add New User"
      Then I should get a 200 HTTP response
    And I visit the node with title "Or1"
    And I follow "Manage"
    And I follow "Manage Members"
      Then the url should match "/or1/dashboard/bulk-users"
    And I visit "/admin/manage/organization-users"
      Then I should get a 200 HTTP response


    When I visit the system path "or1/dashboard"
    Then I should not see the link "Create New Account Form Submissions"
    And I should not see the link "Support Form Submissions"
    And I am logged out

    And I am logged in as "uhrmanager2b" with password "civicactions"
    And I visit "/or2/dashboard"
      Then I should get a 200 HTTP response
    And I click "Bulk Import Users"
      Then I should get a 200 HTTP response
    And I visit "/users/umember2/edit"
      Then I should get a 200 HTTP response


  Scenario: HR Manager can update bio fields @RD-2340 @uhrmanager1b

    Given I am logged in as "uhrmanager1b" with password "civicactions"
    And I visit the edit profile form for user "umember1" with open tab "Biography"
    Then I should see the text "Biography"
    Then I should see the text "Please enter a short"
    Then I fill in "edit-field-biography-und-0-value" with "My longer very short bio info."
    Then I press the "Save" button
    And I visit the edit profile form for "umember1"
    Then I should see "My longer very short bio info."


  Scenario: Update user privacy settings upon user update @RD-2340 @RD-2989 @uhrmanager1b @umember1

    Given I am logged in as "uhrmanager1b" with password "civicactions"
    And I visit the edit profile form for "umember1"
    And I press "edit-submit--2"
    Given I reload the page 1 times
    And I visit the edit profile form for "umember1"
    Then I should see the option "Only Me" selected in "edit-field-biography" dropdown
    And I should see the option "Only Me" selected in "edit-field-education" dropdown
    And I should see the option "Only Me" selected in "edit-field-employers" dropdown


#   @RD-3185 @assignee:tom.camp @WIP
#   Scenario: HR Manager should be able to edit non-org members
#
#     Given I am logged in as "uhrmanager1b" with password "civicactions"
#     And I visit the system path "users/ugroupmanager1b"
#     And I follow "Edit"
#     Then I should get a 200 HTTP response


  @wip
  Scenario: User profile updates @RD-1967

    Given I am logged in as "uhrmanager1b" with password "civicactions"
    And I visit "users/umember1/edit"
    And I fill in "edit-field-user-rank-prefix-und-0-value" with "Dr."
    And I press the "Save" button
    When I visit the node with title "Or1"
    And I follow "Manage"
    And I follow "View Updated User Profiles"
    And I select "2020" from "edit-ending-report-date-year"
    And I press the "Generate Report" button
    Then I should see "umember1"
    And I should see "Rank/Prefix"

