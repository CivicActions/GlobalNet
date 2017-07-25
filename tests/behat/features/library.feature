@api
Feature: library.feature
  Resource library tests.
  @ettest69
  Scenario: Create a resource and view in library

    Given I am logged in as "uorgmanager1" with password "civicactions"
    And I visit the node with title "Or1 Gr1PU"
    And I go to "node/add/resource-item?gid=2298"
    And I fill in "edit-title" with "Create Group Test Resource"
    And I fill in "edit-field-link-und-0-title" with "A Link"
    And I fill in "edit-field-link-und-0-url" with "http://google.com"
    And I fill in "edit-field-resource-category-und" with "Dogs"
    And I fill in "edit-field-resource-type-und" with "Cats"
    And I fill in "edit-field-resource-tags-und" with "Rats"
    And I click the element with CSS selector "#edit-submit"
    And I visit the node with title "Or1 Gr1PU"
    Then I should see the text "A Link"
