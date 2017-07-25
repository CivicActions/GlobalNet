Feature: media.gallery
  Tests the "Folders" function on landing page tabs

   Scenario: Org Manager should be able to edit Folders  @RD-3020

    Given I am logged in as "uadmin" with password "civicactions"
    And I visit the node with title "Or1 Gr1PU"
    And I follow "Add Folder"
    And I fill in "edit-title" with "Test Folder 123"
    And I press "Publish"
    And I visit the system path "/user/logout"

    And I am logged in as "uorgmanager1" with password "civicactions"
    And I visit the node with title "Test Folder 123"
    And I should see the text "Edit gallery"
    And I should see the text "Edit files"
    And I follow "Edit gallery"
    Then I should get a 200 HTTP response
    And I press "Delete"
    And I wait for 5 seconds
    And I press "Delete"
    Then I should see the text "has been deleted."
  @RD-1766
  Scenario: As Org Manager I do not get access denied when I try to edit a Folder I created  @RD-1766

    Given I am logged in as "uorgmanager1" with password "civicactions"
    And I visit the node with title "Or1" with open tab "Files"
    And I visit the add folder form for node with title "Or1"
    And I fill in "edit-title" with "Test OrgManager1 Folder"
    And I fill in "edit-media-gallery-description-und-0-value" with "Test OrgManager1 Folder"
    And I click the element with CSS selector "#edit-submit"
      Then I should not see the text "Error"
    And I visit the edit form for node with title "Test OrgManager1 Folder"
      Then I should get a 200 HTTP response
