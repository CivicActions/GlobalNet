@api
Feature: content.support.feature
  As logged in user I should be able to add support.

  Scenario Outline: logged in user can create a support content.
    Given I am logged in as <user> with password "civicactions"
    And I go to create "support" content for the "Or1 Gr1PU" group
    And I fill in "edit-field-description-und-0-value" with <text>
    And I select the radio button "Other" with the id "edit-field-support-category-und-6"
    And I press the "Save" button
    Then I should see the text "Thank you"
    And I am logged out
    And I am logged in as "uadmin" with password "civicactions"
    And I go to "admin/manage/support"
    And I should see the text <text>

    Examples:
      | user             | text                   |
      | "umember1"       | "test - umember"       |
      | "ugroupmanager1" | "test - ugroupmanager" |

  @RD-4000
  Scenario: logged in user can create a support content and admin should be able to choose from correct list of potential owners.
    Given I am logged in as "uorgmanager1" with password "civicactions"
    And I go to create "support" content for the "Or1 Gr1PU" group
    And I fill in "edit-field-description-und-0-value" with "test - umember1"
    And I select "{user:name:uadmin}" from "edit-field-support-owner-und"
    And I select the radio button "Other" with the id "edit-field-support-category-und-6"
    And I press the "Save" button
    Then I should see the text "Thank you"
    And I am logged out
    And I am logged in as "uadmin" with password "civicactions"
    And I visit the edit form of the last created "support" node
    And I select "{user:name:uorgmanager1}" from "edit-field-support-owner-und"
    And I select "{user:name:qa-admin}" from "edit-field-support-owner-und"

  @RD-4000
  Scenario: anonymous user can create a support content.
    Given I am an anonymous user
    And I go to "node/add/support?gid={node:title:Or1 Ne1PU}"
    And I fill in "edit-field-name-first-und-0-value" with "Firstname"
    And I fill in "edit-field-name-last-und-0-value" with "Lastname"
    And I fill in "edit-field-email-address-und-0-email" with "test@mail.com"
    And I select the radio button "Other" with the id "edit-field-support-category-und-6"
    And I fill in "edit-field-description-und-0-value" with "Test - support"
    And I press the "Save" button
    Then I should see the text "Thank you"
    And I am logged in as "uadmin" with password "civicactions"
    And I go to "admin/manage/support"
    And I should see the text "Test - support"
    And I am logged out
    And I am logged in as "uorgmanager1" with password "civicactions"
    And I visit the last created node
    And I click on the element with xpath "//a[contains(@href,'#tabs-0-main_bottom-2')]"
    #And I should see the text "Add New Jira Ticket"
    Then I should see the CSS selector "input[id='edit-gn2-support-desk-jira-submit']"


  @RD-3890
  Scenario: users have appropriate access to org tickets & fields and queues
    And I am logged in as "uadmin" with password "civicactions"
    Then I go to "node/add/support?gid=16"
    And I select the radio button with the id "edit-field-support-category-und-2"
    And I fill in "edit-field-description-und-0-value" with "Test text"
    And I press the "Publish" button
    Then I go to "gcmc/dashboard/support"
    Then I should get a 200 HTTP response
    And go to "admin/manage/support"
    Then I should get a 200 HTTP response
    And I am logged out

    Given I am an anonymous user
    And I visit the last created node
    Then I should not see the text "Reporter Details"
    And go to "admin/manage/support"
    Then I go to "gcmc/dashboard/support"
    Then I should get a 403 HTTP response

    Given I am logged in as "umember1" with password "civicactions"
    Then I go to "gcmc/dashboard/support"
    Then I should get a 403 HTTP response
    And go to "admin/manage/support"
    Then I should get a 403 HTTP response
    And I am logged out

    And I am logged in as "jen_general" with password "CivicActions3#"
    And I visit the last created node
    Then I should see the text "Edit"
    Then I go to "gcmc/dashboard/support"
    Then I should get a 200 HTTP response
    And go to "admin/manage/support"
    Then I should get a 403 HTTP response
    And I am logged out

    And I am logged in as "qa-member1" with password "CivicActions3#"
    Then I go to "gcmc/dashboard/support"
    Then I should get a 200 HTTP response
    And go to "admin/manage/support"
    Then I should get a 403 HTTP response


