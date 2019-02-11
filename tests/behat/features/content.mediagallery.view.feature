@api @view @content @mediagallery
Feature: Viewing Media Galleries
  See Ticket RD-1590

  #@groupmember
  #Scenario: Group Member can see gallery folder and media within.
  
  @javascript @RD-2989 @wip
  Scenario: Group member can see folder and files
    # Create the group
    Given I am logged in as "uadmin" with password "civicactions"
    And I go to "/gcmc"
    And I wait for 5 seconds
    And I click the element with CSS selector ".ui-icon-triangle-1-e"
    And I click "Add Group"
    And I fill in "edit-title" with "Test File Upload Group38"
    And I click "wysiwyg-toggle-edit-body-und-0-value"
    And I fill in "edit-body-und-0-value" with "Test File Upload Group Body"
    And I select "open" from "edit-gn2-og-form-options"
    And I click the element with CSS selector ".group-topics legend span a"
    And I check the box "Peace"
    And I press the "Publish" button
    Then I should see "You are the group manager"
    Given I visit the node with title "Test File Upload Group38" with open tab "tabs-0-group_maintabs-2"
    And I click the element with CSS selector ".view-id-resources .teaser-header-add-new-link"
    And I fill in "edit-title" with "Test File Upload Group Folder"
    And I press the "Publish" button
    Given I visit the last created node
    When I click "Add Files"
    And  I set browser window size to "1040" x "1000"
    Given I switch to the iframe "mediaBrowser"
    And I click "Library"
    And I click the element with CSS selector "#media-browser-library-list > li .media-thumbnail"
    Given I submit the form in my Media Modal
    # Add the user
    And I go to "/gcmc/test-file-upload-group38/group"
    And I click "Add people"
    And I enter "umember1" for "User name"
    And I click the element with CSS selector "#edit-submit"
    # Login as the user to view
    And I visit "/user/logout"
    Given I am logged in as "umember1" with password "civicactions"
    And I go to "/gcmc/test-file-upload-group38"
    And I click the element with CSS selector "#ui-id-2"
    Then I should see the CSS selector ".view-resources .views-field-title"


  #@RD-1969 - this is now resolved by RD-4439
  #Scenario: Mp4's show up with correct headers
    #Given I am logged in as "qa-admin" with password "CivicActions3#"
    #And I visit "system/files/SampleVideo_1280x720_1mb.mp4"
    #Then I should get a 200 HTTP response
    #Then I see that the movie header is compatible with Safari
