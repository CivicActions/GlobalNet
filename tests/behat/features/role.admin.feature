@api
Feature: role.admin.feature
  Tests various administrative features. 5m31.509s

  NOTE: THIS IS A GRAB BAG OF TESTS, NEEDS TO BE OPTIMIZED

  @smoke
  Scenario: Add new user  @RD-2418

    Given I visit "/gcmc"
    And I am logged in as "qa-admin" with password "CivicActions3#"
    And I visit the system path "admin/people/create"
    And I fill in "Bob" for "field_name_first[und][0][value]"
    And I fill in "Smith" for "field_name_last[und][0][value]"
    And I fill in "1234@1234.com" for "edit-mail"
    And I click "submit"
    Then I should not see "Your feedback was submitted successfully"


  Scenario Outline: Administrators and Org Managers can access content management pages.

    Given I am logged in as <user> with password "civicactions"
    And I am at <path>
    Then I should get a 200 HTTP response
    Examples:
      | user           | path                    |
      | uorgmanager2   | "/admin/manage/content" |
      | uadmin         | "/admin/manage/content" |


  Scenario: Org_Manager: be able to turn on/off comments for any content on the site @RD-1712 @uorgmanager2

    Given I am logged in as "uorgmanager2" with password "civicactions"
    And I visit the edit form for node with title "Or2 Pl14PR" with open tab "Comment settings"
    Then I select the radio button 'Open Users with the "Post comments" permission can post comments.' with the id "edit-comment-2"


  Scenario: Org Manager can access Feedback Results @RD-2045 @uorgmanager2

    Given I am logged in as "uorgmanager2" with password "civicactions"
    And I go to create "course" content for the "Or2 Gr9SI" group
    Then I should see the text "Create Course"
    And I fill in "edit-title" with "Create Course 11:11"
    And I fill in "edit-body-und-0-value" with "Create Course"
    And I check the box "Peace"
    And I select the radio button "Group - Can be viewed only by members of the group." with the id "edit-field-gn2-simple-access-und-group"
    And I select "open" from "edit-gn2-og-form-options"
    And I press the "Save" button
    And I should see the text "has been created"
    And I click "Send Feedback"
    And I fill in "edit-field-title-und-0-value" with "Feedback Create Course 11:11"
    And I fill in "edit-field-description-und-0-value" with "Feedback Create Course 11:11"
    And I press the "Submit" button
    And I visit the node with title "Create Course 11:11"
    And I follow "View Course Feedback"
    And I should see the text "Feedback Form Submissions for Create Course 11:11"
    And I visit "or2/dashboard/forms/submissions/course_feedback"
    And I should see the text "Create Course 11:11"


  Scenario: Submissions link should redirect to existent page @RD-2790 @uadmin

    Given I am logged in as "qa-admin" with password "CivicActions3#"
    And I visit the system path "or1/dashboard/userforms/submissions/join_org"
    And I should see the breadcrumb "Or1 > Submissions > List"
    And I click "Submissions"
    Then I should get a 200 HTTP response


  Scenario: Should see updated Tech and Contact titles. RD-2718 @uadmin

    Given I am logged in as "qa-admin" with password "CivicActions3#"
    And I visit "admin/manage/forms"
      Then I should see the text "Technical Support"


  Scenario: Update field privacy settings upon user creation  @RD-2340 @uadmin

    Given I have accepted terms and am logged in as a user with the "administrator" role

    Given users:
    | name                  | mail         | status        | roles |
    | auth522-user-rd-2340  | foo@bar.com  | 1             | authenticated user |

    Given I reload the page 1 times
    And I visit the edit profile form for "auth522-user-rd-2340"
    Then I should see the option "Only Me" selected in "edit-field-biography" dropdown
    And I should see the option "Only Me" selected in "edit-field-education" dropdown
    And I should see the option "Only Me" selected in "edit-field-employers" dropdown


  Scenario: Link to find more groups no longer shows COI or alumni groups @RD-2345 @umember1

    Given I am logged in as "umember1" with password "civicactions"
    And I visit "/account"
    And I click "Find More Groups"
    Then I should see the text "Search group content"
    And I should not see the text "COI"
    And I should not see the text "Alumni Groups"


  Scenario: User links in the contact tab go to the alias url of a user's profile @RD-2429 @qa-admin

    Given I am logged in as "qa-admin" with password "CivicActions3#"
    When I visit "users/qa-admin/relationships"
    And I click "qa-member2"
    Then the url should match "users/*"


  Scenario: Users should not see blocked contacts @RD-2462 @qa-admin

    Given I am logged in as "qa-admin" with password "CivicActions3#"
    When I visit "/users/qa-member2"
    Then I should see the text "Quinn Memmer"
    When I click on the element with xpath "//a[contains(@href,'/users/qa-member2')]"
    When I click on the element with xpath "//a[contains(@href,'/users/qa-member2/edit')]"
    And I select the radio button "Blocked"
    And I press "edit-submit--2"
    Then I visit "/account"
    Then I should not see the link "Quinn Memmer"


  Scenario: Admin view private fields @RD-2564 @qa-admin

    Given I am logged in as "qa-admin" with password "CivicActions3#"
    And I visit the edit profile form for "qa-groupmanager"
    Then I select "me" from "edit-field-biography"
    And I press the "Save Privacy Settings" button
    Then I should see the text "Donec posuere vulputate arcu."


  Scenario: Improvements to Sidebars   @RD-2327 @qa-admin

    Given I am logged in as "qa-admin" with password "CivicActions3#"
    And I visit "/account"
      Then I should see the link "Edit My Profile & Settings"
    And I should not see the link "Account Settings"
    And I visit "/users/qa-admin"
      Then I should see the link "Edit My Profile & Settings"
    And I should see the link "Change My Profile Picture"
    And I should see the link "Change My Password"
    And I should see the text "Contact"
    And I click "Edit My Profile & Settings"
      Then I should see the link "View my Profile"


  Scenario: Group manager should not see Org Manager role on edit @RD-2695
    Given I am logged in as "ugroupmanager1b" with password "civicactions"
    And I visit the node with title "Or1 Gr1PU"
    And I follow "Manage members"
    And I follow "edit"
      Then I should not see the text "org_manager"


  Scenario: Group manager should not see Org Manager role on add @RD-2695

    Given I am logged in as "ugroupmanager1b" with password "civicactions"
    And I visit the node with title "Or1 Gr1PU"
    And I follow "Add Members"
    Then I should not see the text "org_manager"


  Scenario: Should see the updated help text in Courses tab @RD-2267

    Given I am logged in as "ugroupmanager2" with password "civicactions"
    And I go to "account"
    And I should see the text "Your most recent courses appear first"


  Scenario: CRITICAL: Admin should be able to delete an Org home page  @RD-2032

    Given I am logged in as "uadmin" with password "civicactions"
    And I visit the edit form for node with title "Or1"
    Then I should see the CSS selector "#edit-delete"
    And I visit the edit form for node with title "Or2"
    Then I should see the CSS selector "#edit-delete"
