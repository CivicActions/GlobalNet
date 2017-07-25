@api
Feature: content.announcement.feature
  Tests aspects of Announcements


  Scenario: Should see the Announcements block  @RD-2773

    Given I am logged in as "uorgmanager1" with password "civicactions"
    And I go to create "announcement" content for the "Or1 Co1PU Cg1PU" group
    And I fill in "edit-title" with "New announcement"
    And I fill in "edit-body-und-0-value" with "test text"
    And I check the box "Peace"
    And I select the radio button "Group - Can be viewed only by members of the group." with the id "edit-field-gn2-simple-access-und-group"
    And I press the "Save" button
    And I should see the text "has been created"
    And I visit "or1/or1-co1pu/or1-co1pu-cg1pu"
    And I should see the text "Announcements"
    And I should see the text "New announcement"

