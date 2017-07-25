@api @edit @ot @ot5 @WIP
Feature: Org Manager

  @member @group @wip
  Scenario Outline: Org Manager interactions

    Then I am logged in as <user3> with password <password>

    Then I click "My GlobalNET"

    Then I should see the text "GROUPS"
    And I should see the text "COURSES"
    And I should see the text "CONTACTS"
    And I should see the text "POSTS"
    And I should see the text "EVENTS"
    And I should see the text "FAVORITES"
    And I should see the text "ACTIVITY"
    And I should see the text "POLLS"

    # Org: View
    And I should see the link "Or1"
    Then I visit "/or1"
    And I should see the text "Group Admin Menu"

    # Org: Create group
    Then I create a "group" node with title "CA2GOV-Test Group in Or1" on "Or1" with membership "Open" and privacy "Group"
    And I should see the text "You are the group manager"

    #Org: Add user
    Then I visit "/or1"
    And I click on the element with xpath "//a[contains(@href,'/or1/dashboard')]"
    Then I should see the text "Administrative Links"
    Then I click "Add New User"
    Then I should see the text "Add User"
    And I fill in "edit-mail" with "CA2GOV-tom1.newuser@newuser.org"
    And I fill in "edit-pass-pass1" with "tomuser-66Yz"
    And I fill in "edit-pass-pass2" with "tomuser-66Yz"
    And I fill in "edit-field-name-first-und-0-value" with "Tom1"
    And I fill in "edit-field-name-last-und-0-value" with "Newuser1"
    Then I press "edit-submit"

    #Org: Add member
    Then I add users to the "Or1" group:
      | user      |
      | umember1b  |

    # Org: Manage users...
    Then I run drush "search-api-index"
    Then I visit "/or1"
    Then I click "Manage members"
    Then I should see the text "umember1b"

    # Org: Manage users... search

    # Org: Manage users... block, unblock, send message
    And I should see the link "edit"
    And I should see the link "remove"

    # Org: View submissions
    # New accounts
    Then I visit "/or1"
    And I click on the element with xpath "//a[contains(@href,'/or1/dashboard')]"
    Then I click "View Form Submissions"
    Then I should see the text "Join"
    And I should see the text "Create New Account"
    And I should see the text "Course Feedback"
    And I should see the text "Technical Support"
    # Join Organization
    Then I click on the element with xpath "//a[contains(@href,'/or1/dashboard/userforms/submissions/join_org')]"
    Then I should see the text "Submissions for"
    # Course Feedback
    Then I visit "/or1"
    And I click on the element with xpath "//a[contains(@href,'/or1/dashboard')]"
    Then I click "View Form Submissions"
    Then I click on the element with xpath "//a[contains(@href,'/or1/dashboard/forms/submissions/course_feedback')]"
    Then I should see the text "Forms"
    # Technical Support
    Then I visit "/or1"
    And I click on the element with xpath "//a[contains(@href,'/or1/dashboard')]"
    Then I click "View Form Submissions"
    Then I click on the element with xpath "//a[contains(@href,'/or1/dashboard/forms/submissions/tech_support')]"
    Then I should see the text "Forms"
    # Create New Account
    Then I visit "/or1"
    And I click on the element with xpath "//a[contains(@href,'/or1/dashboard')]"
    Then I click "View Form Submissions"
    Then I click on the element with xpath "//a[contains(@href,'/or1/dashboard/userforms/submissions/userreg')]"
    Then I should see the text "Forms"

    # Org: Organizational Hierarchy
    Then I visit "/or1"
    And I click on the element with xpath "//a[contains(@href,'/or1/dashboard')]"
    Then I click "Organization Hierarchy"
    Then I should see the text "Organization Groups Hierarchy"

    Examples:
      | user       | user2           | user3           | password        |
      | umember1   | ugroupmanager1  | uorgmanager1    |"civicactions"   |
