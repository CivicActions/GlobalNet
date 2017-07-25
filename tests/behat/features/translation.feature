Feature: translation.feature


  Scenario: Add translator role to authenticated user  @RD-1647 @qa-admin

    Given I am logged in as "qa-admin" with password "CivicActions3#"
    And I go to "/users/umember1/edit"
    And I check "edit-roles-10"
    And I press the "Save" button
    And I visit "/user/logout"
    Given I reload the page 1 times
    Given I am logged in as "umember1" with password "civicactions"
    And I go to "/gcmc"
    Then I should see the link "Translation"
    And I should see the link "Help"
    Given I visit "/admin/tmgmt"
    And I check "edit-views-bulk-operations-0"
    And I select "rules_component::rules_tmgmt_job_accept_translation" from "edit-operation"
    And I press the "Execute" button
    Given I reload the page 1 times
    Then I should see the text "Accept Translation"


  Scenario: Org manager translation perms @jen_general @uadmin

    # Make sure we can't see translation items
    Given I am logged in as "jen_general" with password "CivicActions3#"
    And I go to "/gcmc"
    Then I should not see the link "Translation"
    Given I visit "/user/logout"
    Given I reload the page 1 times

    #Assign Translation role, make sure we can.
    Given I am logged in as "uadmin" with password "civicactions"
    And I go to "/users/jengeneral/edit"
    And I check "edit-roles-10"
    And I press the "Save" button
    And I visit "/user/logout"
    Given I reload the page 1 times
    Given I am logged in as "jen_general" with password "CivicActions3#"
    And I go to "/gcmc"
    Then I should see the link "Translation"
    And I should see the link "Help"
    Given I visit "/admin/tmgmt"
    And I check "edit-views-bulk-operations-0"
    And I select "rules_component::rules_tmgmt_job_accept_translation" from "edit-operation"
    And I press the "Execute" button
    Given I reload the page 1 times
    Then I should see the text "Accept Translation"

