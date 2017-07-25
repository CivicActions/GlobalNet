@api
Feature: report.dashboard-admin.feature
  Testing the admin dashboard and reports 0m59.356s

Background:
  Given I am logged in as "uadmin" with password "civicactions"

  Scenario: Test that Admins can access the Admin dashboard @RD-2389

    When I visit "users/dashboard"
      Then the response status code should be 200

  Scenario: Should be able to use a Combined Search to find matches by username, name or email in /manage/users report  @RD-2036 @RD-2989

    When I visit the system path "admin/manage/users"
    And I should see the text "Combined search"
    And I fill in "edit-combine" with "umember1, Ufa, umember2@test.com"
    And I press the "Go" button
    #fails here
      Then I should see the text "Umar"
      And I should see the text "umember2b@test.com"
      And I should see the text "Ula"

  Scenario: Organization Hierarchy report exists and correctly reports a group in the organization @RD-2552

    When I visit "gcmc/dashboard/organization-hierarchy"
      Then I should see the text "Event for Group 16"
      And I should see the text "A group in GCMC"
      And I should see the text "GCMC Second Level Group"


  Scenario: Should not see "Recursion, stop" in Organization Hierarchy report @RD-2498

    When I visit "or1/dashboard/organization-hierarchy"
      Then I should not see the text "Recursion, stop"

  Scenario: Admin can access/view Orphaned Content Report @RD-3459

    When I visit "users/dashboard"
      And I click "View Orphaned Content"
      Then the response status code should be 200

  Scenario: Admin should be able see Revision Date in Manage Content page; RD-3450

    And I visit "users/dashboard"
    And I click "Manage Content"
    And I should see "Has new content"
