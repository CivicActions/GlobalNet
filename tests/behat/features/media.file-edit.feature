@api
Feature: media.file-edit.feature

  @RD-1011 @assignee:tom.camp

  Scenario: As a content editor I should be able to use the Replace file option when editing Folder files.

    Given I am logged in as "uadmin" with password "civicactions"
    And I visit the node with title "Resource Folder 1"
    And I follow "Edit"
    Then I should see the text "Replace file"