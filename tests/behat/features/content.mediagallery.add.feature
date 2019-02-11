@api @add @content @mediagallery
Feature: Adding Media Galleries
  @groupmanager @justthing
  Scenario Outline: Group Managers can create new Galleries on groups they are
  managing.
    Given I am logged in as <user> with password "civicactions"
    And I go to create "media-gallery" content for the <title> group
    And I should see the text "Create Folder"
    And I fill in "edit-title" with "Test - Media Gallery (Resource)"
    And I press the "Save" button
    Then I should see the text "has been created"
    Examples:
      | user             | title                           |
      | "ugroupmanager2" | "Or2 Gr9SI" |
