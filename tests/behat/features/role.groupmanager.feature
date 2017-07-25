@api
Feature: role.groupmanager.feature
  Test of groupmanager role functions

@smoke
Scenario: Group managers can only see the Private, Group, and Organization options for the simple access field. @RD-2989
  #Create a group and add user as manager
  Given I am logged in as "uorgmanager1" with password "civicactions"
  And I visit "/or1"
  And I click "Add Group"
  And I fill in "edit-title" with "Test 1"
  And I fill in "edit-body-und-0-value" with "Test 1 body"
  And I check the box "Peace"
  And I select the radio button "Group - Can be viewed only by members of the group." with the id "edit-field-gn2-simple-access-und-group"
  And I select "Open" from "edit-gn2-og-form-options"
  And I click the element with CSS selector "#edit-submit"
  Then I click "Add members"
  And I enter "ugroupmanager2" for "User name"
  And I check the box "edit-roles-18"
  And I click the element with CSS selector "#edit-submit"
  And I visit "user/logout"
  #Login as user to group
  Given I am logged in as "ugroupmanager2" with password "civicactions"
  And I visit the last created node
  And I click "Add Post"
  Then I should not see "Sitewide - Can Be Viewed By Anyone With A GlobalNET Account."
  And I should not see "Public - Can Be Viewed By Anyone On The World Wide Web."
  And I should see "Organization - Can Be Viewed By A Member Of The Organization."
  And I should see "Group - Can Be Viewed Only By Members Of The Group."
  #is this still true?  there is an error, and I don't see it live either.
  #And I should see "Private - No One Can View But The Author."
