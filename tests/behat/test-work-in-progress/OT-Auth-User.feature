@api @edit @ot @ot2 @WIP
Feature: Authorized user interactions

  @member @group @wip
  Scenario Outline: Authorized users can interact with the site

    Then I am logged in as <user> with password <password>

    Then I click "My GlobalNET"

    Then I should see the text "GROUPS"
    And I should see the text "COURSES"
    And I should see the text "CONTACTS"
    And I should see the text "POSTS"
    And I should see the text "EVENTS"
    And I should see the text "FAVORITES"
    And I should see the text "ACTIVITY"
    And I should see the text "POLLS"

    # Groups: View
    Then I click "Groups"
    And I should see the link "Or1 Gr1PU"
    And I click "Or1 Gr1PU"
    And I should see the link "Cancel Membership"
    And I should see the heading "Group Leadership"

    # Groups: Interactions

    # Posts: View
    Then I click "Posts"
    And I should see the link "Or1 Gr1PU Po19GR"
    And I click "Sort by Date"
    And I click "Person"
    And I click "Most Comments"
    And I click on the element with xpath "//a[contains(@href,'/or1/or1-gr1pu/or1-gr1pu-po19gr')]"
    And I should see the text "Or1 Gr1PU Po19GR"

    #Posts: Comment
    And I should see the heading "Join the Conversation"
    And I fill in "edit-comment-body-und-0-value" with "Really insight-filled thoughts"
    And I press the "Save" button
    Then I should see the CSS selector ".messages--status"
    And I should see the text "Really insight-filled thoughts"
    And I should see the link "edit"
    And I should see the link "reply"
    And I should see the link "delete"
    And I should see the link "Send private message"

    #Posts: Add
    Then I create a "post" node with title "CA2GOV-Exemplary Test" on "Or1 Gr1PU" with membership "Open" and privacy "Group"
    Then I should see the text "Exemplary Test"
    And I should see the heading "Join the Conversation"

    # Folders
    And I click on the element with xpath "//a[contains(@href,'/user/logout')]"
    Given I am logged in as <user2> with password <password>
    Then I click "My GlobalNET"
    Then I click "Groups"
    And I click "Or1 Gr4GR"
    Then I click "Files"
    And I click "Add Folder"
    And I fill in "title" with "CA2GOV-Testing Group's Folder"
    And I select the radio button "Group - Can be viewed only by members of the group." with the id "edit-field-gn2-simple-access-und-group"
    And I press the "Save" button
    And I click on the element with xpath "//a[contains(@href,'/user/logout')]"
    Given I am logged in as <user> with password <password>
    Then I click "My GlobalNET"
    Then I click "Groups"
    And I click "Or1 Gr4GR"
    Then I should see the text "Or1 Gr4GR"
    Then I click "Files"
    And I click "CA2GOV-Testing Group's Folder"

    # Files
    Then I visit "/account"

    # Groups: Members, view, search, sort
    Then I click "My GlobalNET"
    Then I click "Groups"
    And I click "Or1 Gr4GR"
    Then I click "Members"
    And I should see the link "Ulysses Group Managerone"
    Then I fill in "edit-combine" with "Ulyssa"
    Then I press the "edit-submit-group-members" button

    # Groups: Search
    Then I click "My GlobalNET"
    Then I click "Groups"
    And I click on the element with xpath "//a[contains(@href,'/search/type/group')]"
    Then I fill in "edit-search-api-views-fulltext" with "Or1"
    And I press the "edit-submit-search-default" button
    Then I visit "/search/type/group?search_api_views_fulltext=Or1"

    # Groups: Join
    And I click on the element with xpath "//a[contains(@href,'/user/logout')]"
    Given I am logged in as <user3> with password <password>
    Then I create a "group" node with title "CA2GOV-New Or1 Testing Group" on "Or1" with membership "Moderated" and privacy "Organization"

    And I click on the element with xpath "//a[contains(@href,'/user/logout')]"

    Given I am logged in as <user> with password <password>
    Then I visit "/or1/ca2gov-new-or1-testing-group"
    Then I click "Request Membership"
    Then I see the text "Subscribe"
    And I fill in "edit-og-membership-request-und-0-value" with "Count me in"
    And I press the "edit-submit" button
    And I click on the element with xpath "//a[contains(@href,'/user/logout')]"

    Given I am logged in as <user2> with password <password>

    Then I click "My GlobalNET"

    Then I should see the text "GROUPS"
    And I should see the text "COURSES"
    And I should see the text "CONTACTS"
    And I should see the text "POSTS"
    And I should see the text "EVENTS"
    And I should see the text "FAVORITES"
    And I should see the text "ACTIVITY"
    And I should see the text "POLLS"

    # Groups: View
    And I click "Groups"
    Then I click "Or1 Gr4GR"
    And I should see the text "You are the group manager"

    # Groups: Add group
    Then I create a "group" node with title "CA2GOV-Some Alternative Group in Or1" on "Or1 Gr4GR" with membership "Moderated" and privacy "Group"
    And I should see the text "You are the group manager"

    # Groups: Add user
    Then I add users to the "CA2GOV-Some Alternative Group in Or1" group:
      | user      |
      | umember1  |
      | umember1b |

    #Groups: Event, add
    Then I create a "event" node with title "CA2GOV-New Open Group Event" on "CA2GOV-Some Alternative Group in Or1" with membership "Open" and privacy "Organization"
    And I click on the element with xpath "//a[contains(@href,'/user/logout')]"

    # Groups: Event, confirm by member
    Given I am logged in as <user> with password <password>
    Then I click "My GlobalNET"
    Then I click "CA2GOV-Some Alternative Group in Or1"
    And I should see the heading "Upcoming Events"
    And I should see the link "CA2GOV-New Open Group Event"
    Then I click "CA2GOV-New Open Group Event"
    Then I should see the text "Meeting: CA2GOV-New Open Group Event"
    # Register for an event
    And I should see the heading "Interested in attending?"
    And I click "Register for this event"
    # Un-register from the event
    Then I click "leave here"
    Then I should see the text "Meeting: CA2GOV-New Open Group Event"
    # Re-register for the event
    And I click "Register for this event"

    # Course, add
    And I click on the element with xpath "//a[contains(@href,'/user/logout')]"
    Then I am logged in as <user2> with password <password>

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
    Then I create a "course" node with title "CA2GOV-New Auth User Course for Group" on "Or1 Gr4GR" with membership "Open" and privacy "Organization"

    # Groups: Course, add members
    Then I add users to the "CA2GOV-New Auth User Course for Group" group:
      | user      |
      | umember1  |
      | umember1b |
    And I click on the element with xpath "//a[contains(@href,'/user/logout')]"

    # Course: View
    Then I am logged in as <user> with password <password>
    Then I click "My GlobalNET"
    Then I click "Groups"
    And I click "Or1 Gr4GR"
    And I click "Courses"
    And I should see the link "CA2GOV-New Auth User Course for Group"
    Then I visit "/or1/or1-gr4gr/ca2gov-new-auth-user-course-for-group"
    Then I should see the text "CA2GOV-New Auth User Course for Group"
    And I should see the link "Cancel Membership"
    Then I should see the text "SYLLABUS"
    And I should see the text "POSTS"
    And I should see the text "PARTICIPANTS"
    And I should see the text "FILES"
    And I should see the text "SUBGROUPS"
    And I should not see the text "Group Admin Menu"

    # Course: Post add
    Then I create a "post" node with title "CA2GOV-Test Post for a Course" on "CA2GOV-New Auth User Course for Group" with membership "Open" and privacy "Group"
    Then I run drush "search-api-index"

    # Course: Post View
    Then I click "My GlobalNET"
    Then I click "Courses"
    And I should see the link "CA2GOV-New Auth User Course for Group"
    Then I visit "/or1/or1-gr4gr/ca2gov-new-auth-user-course-for-group"
    Then I should see the text "CA2GOV-New Auth User Course for Group"
    And I click "Posts"
    And I should see the link "CA2GOV-Test Post for a Course"

    # Course: Post comment
    Then I click "CA2GOV-Test Post for a Course"
    And I should see the heading "Join the Conversation"
    And I fill in "edit-comment-body-und-0-value" with "Course-related insight-filled thoughts"
    And I press the "Save" button
    Then I should see the CSS selector ".messages--status"
    And I should see the text "Course-related insight-filled thoughts"
    And I should see the link "edit"
    And I should see the link "reply"
    And I should see the link "delete"
    And I should see the link "Send private message"

    Examples:
      | user       | user2           | user3           | password        |
      | umember1   | ugroupmanager1  | uorgmanager1    |"civicactions"   |
