@api
Feature: content.organization-landing.feature
  Testing aspects of the organization landing page

  @smoke @administrator @orgmanager @landing
  Scenario Outline: Site admins can change the org landing page layout, but
  org_managers can not.

    Given I am logged in as <user> with password "civicactions"
    When I am on "/admin/structure/panels/layouts"
    Then I should get a <response> HTTP response
    Examples:
      | user           | response |
      | "uadmin"       | 200      |
      | "uorgmanager1" | 403      |


  @administrator @orgmanager @groupmanager @hrmanager @landing
  Scenario Outline: Site admins and org_managers can change the group landing
  page layout, but groupmanagers and hrmanagers can not.

    Given I am logged in as <user> with password "civicactions"
    When I am on "/or1/or1-gr1pu/edit"
    Then I should get a <response> HTTP response
    Examples:
      | user             | response  |
      | "uadmin"         | 200       |
      | "uorgmanager1"   | 200       |
      | "ugroupmanager1" | 403       |
      | "uhrmanager1b"   | 403       |


  Scenario: CRITICAL: Org_man should not be able to delete their own Org home page  @RD-2032

    And I visit the edit form for node with title "Or1"
    Then I should not see the CSS selector "#edit-delete"

    Then I am logged in as "uadmin" with password "civicactions"
    And I visit the edit form for node with title "Or1"
    Then I should see the CSS selector "#edit-delete"
    And I visit the edit form for node with title "Or2"
    Then I should see the CSS selector "#edit-delete"


  Scenario: Organization, Small Logo field with updated help text   @RD-2875

    Given I am logged in as "uadmin" with password "civicactions"
    And I visit "node/add/organization"
    Then I should see the text 'This logo appears in the right sidebar with the “About” content, as well as on the “GlobalNET Partners” listing page.'


  Scenario: Organization form, Updated field names for Special Content field   @RD-2876

    Given I am logged in as "uadmin" with password "civicactions"
    And I visit "node/add/organization"
    Then I should see the text "Footer Content"
    And I should see the text "Footer Description"
    And I should see the text "Footer Links"

  Scenario: Public posts should be visible to Anonymous users @RD-4357

    Given I am logged in as "qa-admin" with password "CivicActions3#"
    And I visit the node with title "A group in GCMC"
    And I follow "Add News"
    And I enter "New News item" for "edit-title"
    And I enter "Body text" for "edit-body-und-0-value"
    And I select the radio button "Public - Can be viewed by anyone on the World Wide Web." with the id "edit-field-gn2-simple-access-und-public"
    And I press the "Save" button
    And I am logged out
    And I visit the node with title "Or1"
    And I click "Globalnet News"
    Then I should see the text "New News item"
