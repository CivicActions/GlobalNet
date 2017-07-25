@api @add @content @organization
Feature: Adding Organizations
  As the user
  I should be able to add organizations

  @administrator
  Scenario: Administrators can create Organizations
  by members of groups in which they are members.
    Given I have accepted terms and am logged in as a user with the "administrator" role
    # Given I am logged in as "uadmin" with password "civicactions"
    And I visit "node/add/organization"
    And I fill in "edit-title" with "OrganizationTest"
    And I fill in "edit-field-org-short-title-und-0-value" with "orgt"
    And I fill in "edit-field-footer-description-und-0-value" with "Special description test"
    And I select "Open" from "edit-gn2-og-form-options"
    And I press the "Publish" button
    And I visit the node with title "OrganizationTest"
    And I click "Edit"
    And I press the "Delete" button
    And I press the "Delete" button
    Then I should see the text "has been deleted"

  @non-administrator @organizations
  Scenario Outline: Non-administrators cannot create Organizations; RD-3024.

    Given I am logged in as <user> with password "civicactions"
    And I go to "node/add/organization"
    Then I should get a 403 HTTP response
      Examples:
        |user           |
        |uorgmanager1   |
        |ugroupmanager1 |
        |umember1       |
        |uhrmanager1b   |

  @non-administrator @organizations @pa_specialist
  Scenario: Non-administrators cannot create Organizations; RD-3024.

    Given I am logged in as "uadmin" with password "civicactions"
    And I visit the add people form for node with title "Or1"
    And I fill in "edit-name" with "umember1b"
    And I check the box "edit-roles-43"
    And I press the "Add users" button
    And I am logged out
    And I am logged in as "umember1b" with password "civicactions"
    And I go to "node/add/organization"
    Then I should get a 403 HTTP response
