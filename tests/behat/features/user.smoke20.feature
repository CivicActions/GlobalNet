@api @manage
Feature: user.smoke20.feature

  @smoke-20 @smoke-20-long
  Scenario: This runs through the tests to mitigate client directed worse cases.
    # First I log in as uadmin and I create content meeting certain requirements
    Given I am logged in as "uadmin" with password "civicactions"
    And I go to create "group" content for the "Or2 Gr10OR" group
    And I fill in "edit-title" with "mephistopheles 11 g"
    And I fill in "edit-body-und-0-value" with "TEST"
    And I fill in "edit-field-group-short-title-und-0-value" with "MEPH 11"
    And I select "moderated" from "edit-gn2-og-form-options"
    And I select "Or2" from "edit-field-parent-organization-und"
    And I select the radio button "Group - Can be viewed only by members of the group." with the id "edit-field-gn2-simple-access-und-group"
    And I click the element with CSS selector "#edit-submit"
    And I visit the node with title "mephistopheles 11 g"
    Then I should get a 200 HTTP response
    And I go to create "event" content for the "mephistopheles 11 g" group
    And I fill in "edit-title" with "mephistopheles 11 e"
    And I fill in "edit-body-und-0-value" with "Create Event"
    And I check the box "Peace"
    And I select "moderated" from "edit-gn2-og-form-options"
    And I select "General" from "edit-field-event-type-und"
    And I select "Online" from "edit-field-event-location-und"
    And I select "English" from "edit-field-language-und"
    And I select the radio button "Group - Can be viewed only by members of the group." with the id "edit-field-gn2-simple-access-und-group"
    And I click the element with CSS selector "#edit-submit"
    And I visit the node with title "mephistopheles 11 e"
    Then I should get a 200 HTTP response
    And I go to create "course" content for the "mephistopheles 11 g" group
    And I fill in "edit-title" with "mephistopheles 11 c"
    And I fill in "edit-body-und-0-value" with "Create Course"
    And I check the box "Peace"
    And I select "closed" from "edit-gn2-og-form-options"
    And I select the radio button "Group - Can be viewed only by members of the group." with the id "edit-field-gn2-simple-access-und-group"
    And I click the element with CSS selector "#edit-submit"
    And I visit the node with title "mephistopheles 11 c"
    Then I should get a 200 HTTP response
    # now I check some permissions for uadmin on it's own
    And I visit "/admin/manage/content"
    Then I should get a 200 HTTP response
    And I visit "/admin/people/create"
    Then I should get a 200 HTTP response
    And I visit the edit profile form for "umember2"
    Then I should get a 200 HTTP response
    # Admin menu test
    And I visit "/or2"
    And I should see "GROUP ADMIN MENU"
    # User to group test
    And I go to add users to the "Or1" group:
      | user |
      | elizabeth.general |
    Then I should get a 200 HTTP response
    # Create public content test
    And I go to create "post" content for the "Or2 Gr10OR" group
    And I fill in "edit-title" with "mephistopheles post 11:11"
    And I fill in "edit-body-und-0-value" with "mephistopheles post 11:11"
    And I check the box "Peace"
    Then I should see the CSS selector "#edit-field-gn2-simple-access-und-public"
    And I select the radio button "Public - Can be viewed by anyone on the World Wide Web." with the id "edit-field-gn2-simple-access-und-public"
    And I press the "Save" button
    Then I should see the text "has been created"
    # Then I add jen_general as the hr_manager for the or2 group
    And I add users to the "Or1" group with role:
      | user | role |
      | jen_general | hr_manager |
    Then I should see the text "has been added to the group"
    #Then I add other members to groups as a safety
    And I visit the add bulk members form for node with title "Or2 Gr10OR"
    And I enter "umember2, umember1, umember2b, uorgmanager2, uadmin" for "Members"
    And I click the element with CSS selector "#edit-submit"
    And I visit the add bulk members form for node with title "mephistopheles 11 g"
    And I enter "umember2, umember1, umember2b, uorgmanager2, uadmin" for "Members"
    And I click the element with CSS selector "#edit-submit"
    And I am logged out
    # Now I start logging in as various users and checking responses to the groups and content
    # umember1
    And I am logged in as "umember1" with password "civicactions"
    # View created content test
    And I visit the node with title "mephistopheles 11 c"
    Then I should get a 200 HTTP response
    And I visit the node with title "mephistopheles 11 e"
    Then I should get a 200 HTTP response
    And I visit the node with title "mephistopheles 11 g"
    Then I should get a 200 HTTP response
    And I am logged out
    # umember1b
    And I am logged in as "umember1b" with password "civicactions"
    # View created content test
    And I visit the node with title "mephistopheles 11 c"
    Then I should get a 403 HTTP response
    And I visit the node with title "mephistopheles 11 e"
    Then I should get a 403 HTTP response
    And I visit the node with title "mephistopheles 11 g"
    Then I should get a 403 HTTP response
    And I am logged out
    # uorgmanager2
    And I am logged in as "uorgmanager2" with password "civicactions"
    And I visit the edit profile form for "umember2"
    Then I should get a 200 HTTP response
    # Admin menu test
    And I visit "/or2"
    And I should see "GROUP ADMIN MENU"
    # Add user to group test
    And I go to add users to the "Or2" group:
      | user |
      | umember1b |
    Then I should get a 200 HTTP response
    # Create public content test
    And I go to create "post" content for the "Or2 Gr10OR" group
    And I fill in "edit-title" with "mephistopheles post 11:11"
    And I fill in "edit-body-und-0-value" with "mephistopheles post 11:11"
    And I check the box "Peace"
    Then I should see the CSS selector "#edit-field-gn2-simple-access-und-public"
    And I select the radio button "Public - Can be viewed by anyone on the World Wide Web." with the id "edit-field-gn2-simple-access-und-public"
    And I press the "Save" button
    Then I should see the text "has been created"
    And I am logged out
    # umember2
    # See group contents test
    And I am logged in as "umember2" with password "civicactions"
    And I visit the node with title "mephistopheles 11 c"
    Then I should get a 200 HTTP response
    And I visit the node with title "mephistopheles 11 e"
    Then I should get a 200 HTTP response
    And I visit the node with title "mephistopheles 11 g"
    Then I should get a 200 HTTP response
    # See own user edit page test
    And I visit the edit profile form for "umember2"
    Then I should get a 200 HTTP response
    # Change password test
    And I click the element with CSS selector ".password-link"
    And I fill in "edit-current-pass" with "civicactions"
    And I fill in "edit-pass-pass1" with "!Civicactions11"
    And I fill in "edit-pass-pass2" with "!Civicactions11"
    And I click the element with CSS selector "#edit-submit"
    Then I should not see the CSS selector ".messages error"
    And I go to create "post" content for the "Or2 Gr10OR" group
    # Can't set Public test
    Then I should not see the CSS selector "#edit-field-gn2-simple-access-und-public"
    # Add image test
    And I click the element with CSS selector "#edit-field-main-image-und-0-browse-button"
    Then I should get a 200 HTTP response
    And I am logged out
    # jen_general
    And I am logged in as "jen_general" with password "CivicActions3#"
    # Admin menu test
    And I visit "/or1"
    Then I should see "MANAGE"
    # Profile edit test
    And I visit the edit profile form for "umember1"
    Then I should get a 200 HTTP response
    # Add user to group test
    And I go to add users to the "Or1" group:
      | user |
      | umember2b |
    Then I should get a 200 HTTP response
    And I am logged out
    And I am logged in as "uadmin" with password "civicactions"
    And I run drush "upwd umember2 --password='civicactions'"