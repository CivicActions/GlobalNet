@api @add @content @customlandingpage
Feature: content.customlanding.add.feature

  @orgmanager
  Scenario Outline: Org Managers can create new Landing pages
  on their Organizations.
    Given I am logged in as <user> with password "civicactions"
    And I go to create "program" content for the <title> group
    And I should see the text "Create Custom landing page"
    And I fill in "edit-title" with "Test - Custom landing page"
    And I fill in "edit-body-und-0-value" with "Test - Custom landing page description"
    And I select "open" from "edit-gn2-og-form-options"
    And I press the "Save" button
    Then I should get a 200 HTTP response

    Examples:
      | user           | title  |
      | "uorgmanager1" | "Or1" |
      | "uorgmanager2" | "Or2" |
