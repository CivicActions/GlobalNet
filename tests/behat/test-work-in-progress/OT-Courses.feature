@api @edit @ot @ot4 @WIP
Feature: Course creation on a group

  @member @group @wip
  Scenario Outline: Course creation on a group course and other interactions

    Then I am logged in as <user2> with password <password>

    Then I click "My GlobalNET"

    Then I should see the text "GROUPS"
    And I should see the text "COURSES"
    And I should see the text "CONTACTS"
    And I should see the text "POSTS"
    And I should see the text "EVENTS"
    And I should see the text "FAVORITES"

    And I click "Groups"
    Then I click "Or1 Gr4GR"
    And I should see the text "You are the group manager"

    # Groups: Course, add
    Then I create a "course" node with title "CA2GOV-New Course for Group" on "Or1 Gr4GR" with membership "Open" and privacy "Organization"

   # Groups: Course, confirm (by creator)
    Then I click "My GlobalNET"
    Then I click "Or1 Gr4GR"
    And I should see the text "Group Admin Menu"
    Then I click "Courses"
    And I should see the link "CA2GOV-New Course for Group"
    Then I click "CA2GOV-New Course for Group"
    Then I should see the text "CA2GOV-New Course for Group"
    And I should see the heading "Recommended Links"
    And I should see the link "A Related Link"

    # Groups: Course, schedule and syllabus

    # Groups: Course, add members
    Then I add users to the "CA2GOV-New Course for Group" group:
      | user      |
      | umember1  |
      | umember1b |

    # Groups: Course, confirm by member
    And I click on the element with xpath "//a[contains(@href,'/user/logout')]"
    Then I run drush "search-api-index"
    Given I am logged in as <user> with password <password>
    Then I click "My GlobalNET"
    Then I click "Or1 Gr4GR"
    Then I click "Courses"
    And I should see the link "CA2GOV-New Course for Group"
    Then I click "CA2GOV-New Course for Group"
    Then I should see the text "CA2GOV-New Course for Group"
    And I should see the heading "Recommended Links"
    And I should see the link "A Related Link"
    # Groups: Course, send feedback
    And I click "Send Feedback"
    # Check me: Goes to a page not found for me using an path such as this:
    #Then I should see the text "Course Feedback"
    #And I fill in "edit-field-title-und-0-value" with "Enthusiastic Waxing"
    #And I select the radio button "Personal"
    #And I fill in "edit-field-title-und-0-value" with "Golden words"
    #Then I press "edit-submit"
    # Check me: broken CSS on page breaks this step below
    #And I should see the text "Your feedback was submitted successfully"
    And I click on the element with xpath "//a[contains(@href,'/user/logout')]"

    # Groups: Course, Posts add
    Given I am logged in as <user2> with password <password>
    Then I create a "post" node with title "CA2GOV-Post within a Course" on "CA2GOV-New Course for Group" with membership "Open" and privacy "Group"

    # Groups: Course, Posts confirm display by creator
    Given I run drush "search-api-index"
    Then I visit "/or1/or1-gr4gr/ca2gov-new-course-for-group"
    And I click "Posts"
    And I click "Post within a Course"
    And I click on the element with xpath "//a[contains(@href,'/user/logout')]"

    # Groups: Course, Posts confirm display by member
    And I am logged in as <user> with password <password>
    Then I visit "/or1/or1-gr4gr/ca2gov-new-course-for-group"
    And I click "Posts"
    # Check me: Post title is hidden on Posts in Course for Member
    Then I click "Post within a Course"
    And I click on the element with xpath "//a[contains(@href,'/user/logout')]"

    # Groups: Course, participants
    Given I am logged in as <user2> with password <password>
    Then I visit "/or1/or1-gr4gr/ca2gov-new-course-for-group"
    And I click "Participants"
    And I click on the element with xpath "//a[contains(@href,'/users/umember1')]"

    # Groups: Course, folders and files
    Then I visit "/or1/or1-gr4gr/ca2gov-new-course-for-group"
    Then I click "Files"
    And I click "Add Folder"
    And I fill in "edit-title" with "Testing Course Folder"
    And I select "Show as grid" from "edit-field-folder-layout-und"
    And I select the radio button "Group - Can be viewed only by members of the group." with the id "edit-field-gn2-simple-access-und-group"
    And I press the "Save" button
    Then I visit "/or1/or1-gr4gr/ca2gov-new-course-for-group"
    Then I click "Files"
    And I click "Testing Course Folder"

    # Files
    And I click on the element with xpath "//a[contains(@href,'/media/browser?render=media-popup')]"
    Then I visit "/account"

    # Courses: Event, add
    Then I create a "event" node with title "CA2GOV-New Open Course Event" on "CA2GOV-New Course for Group" with membership "Open" and privacy "Organization"

    # Courses: Announcement, add
    Then I create a "announcement" node with title "CA2GOV-New Course Announcement" on "CA2GOV-New Course for Group" with membership "Open" and privacy "Organization"
    And I should see the text "CA2GOV-New Course Announcement"
    And I should see the heading "Topics"
    And I should see the link "Leadership"
    And I should see the heading "Associated Countries & Regions"
    And I should see the link "Western Europe"

    # Courses: Poll, add
    Then I create a "poll" node with title "CA2GOV-New Poll for Course" on "CA2GOV-New Course for Group" with membership "Open" and privacy "Group"
    And I click on the element with xpath "//a[contains(@href,'/user/logout')]"

    # Courses: Confirm new content display by member
    Given I am logged in as <user> with password <password>
    Then I click "My GlobalNET"
    Then I click "Or1 Gr4GR"
    Then I click "Courses"
    And I should see the link "CA2GOV-New Course for Group"
    Then I click "CA2GOV-New Course for Group"
    Then I should see the text "CA2GOV-New Course for Group"
    And I should see the heading "Recommended Links"
    And I should see the link "A Related Link"
    And I should see the heading "Announcements"
    And I should see the link "CA2GOV-New Course Announcement"
    And I should see the heading "Upcoming Events"
    And I should see the link "CA2GOV-New Open Course Event"
    And I should see the heading "Poll"
    # Check me: Link is on page but hidden
    And I should see the link "CA2GOV-New Poll for Course"

    Examples:
      | user       | user2           | user3           | password        |
      | umember1   | ugroupmanager1  | umember1b    |"civicactions"   |
