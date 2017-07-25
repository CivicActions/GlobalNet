@api
Feature: group.feature
  Currently a grab bag of misc tests, should test basic group functionality. Run time: 13m40.516s  THIS IS A PIG

  #NEEDS TO BE BROKEN OUT


  Scenario: Simple Access: Group    @RD-2769

    Given I am logged in as "uorgmanager1" with password "civicactions"
    And I visit the node with title "Or1"
    And I follow "Edit"
    And I select "Open" from "edit-gn2-og-form-options"
    And I fill in "edit-field-footer-description-und-0-value" with "This is the Special Content"
    And I check the box "edit-og-menu"
    And I press the "Save" button
    And I follow "Add member"
    And I fill in "edit-name" with "umember1b"
    And I press the "Add users" button
    Then I go to "user/logout"

    Given I am logged in as "umember1b" with password "civicactions"
    And I visit the node with title "Or1"
    And I follow "Groups"
    Then I should see the text "Search group content"
    Then I should not see the text "Or1 Gr4GR"


  Scenario Outline: Group Managers can create content

    Given I am logged in as "ugroupmanager2" with password "civicactions"
    And I go to create <content_type> content for the "Or2 Gr11GR" group
    Then I should see the text <text>
    And I fill in "edit-title" with <text>
    And I fill in "edit-body-und-0-value" with <text>
    And I check the box "Peace"
    And I select the radio button "Group - Can be viewed only by members of the group." with the id "edit-field-gn2-simple-access-und-group"
    And I press the "Save" button
    And I should see the text "has been created"
    Examples:
      | content_type | text                  |
      | announcement | "Create Announcement" |
      | post         | "Create Post"         |


  @RD-2378 @assignee:iris.ibekwe @version:OT_Release @COMPLETED @administrator @api
  Scenario: Courses tab should have View all Courses link

    Given I have accepted terms and am logged in as a user with the "administrator" role
    And I visit the node with title "A group in GCMC"
    Then I should see "Global Warming"
    And I should see "View all courses"
    Given I click "View all courses"
    Then I should see "You are searching for content. Looking for GlobalNET members?"


  @RD-2378 @assignee:iris.ibekwe @version:OT_Release @COMPLETED @administrator @api
  Scenario: Publications tab should have View all Publications link

    Given I have accepted terms and am logged in as a user with the "administrator" role
    And I visit the node with title "A group in GCMC"
    And I click "Publications"
    And I should see "View all publications"
    Given I click "View all publications"
    Then I should see "You are searching for content. Looking for GlobalNET members?"


  @RD-1242 @assignee:richard.gilbert @version:OT_Release @COMPLETED @uorgmanager1
  Scenario: Posts sorting functionality on Group Landing page

    Given I am logged in as "uorgmanager1" with password "civicactions"
    And I visit the node with title "Or1 Gr1PU"
    And I click the element with CSS selector ".teaser_header_link--sort-date"
    And I click the element with CSS selector ".teaser_header_link--sort-person"
    And I click the element with CSS selector ".teaser_header_link--sort-comments"
    Then I should see the text "It is a long established fact that a reader"


  @RD-2289 @assignee:tom.camp @version:OT_Release @COMPLETED @uorgmanager2
  Scenario: Group members display and management

    Given I am logged in as "uorgmanager2" with password "civicactions"
    And I visit the node with title "Or2 Gr12GR"
    Then I should see the text "Uday Groupman Gerone"
    And I should see the text "Ula Member Two"
    And I should see the text "Ulmer Orgman Agertwo"
    And I follow "Manage members"
    Then I should see the text "ugroupmanager2"
    And I should see the text "umember2"
    And I should see the text "uorgmanager2"


  @RD-2493 @assignee:alexis.saransig @version:OT_Release @COMPLETED @umember1
  Scenario: Add New Post button should not appear for non-group members

    Given I am logged in as "umember1" with password "civicactions"
    And I visit "/or1/or1-gr1pu"
    And I should see the text "Add new post"
    And I visit "/user/logout"
    And I am logged in as "umember2" with password "civicactions"
    And I visit "/or1/or1-gr1pu"
    Then I should not see the text "Add new post"


  @RD-1958 @assignee:ethan.teague @version:OT_Release @COMPLETED @administrator
  Scenario: Parent Organization field appearance

    Given I have accepted terms and am logged in as a user with the "administrator" role
    When I visit "/node/add/course?gid={node:title:GlobalNET Platform}"
    Then I should see the text "Parent Organization"


  @RD-1958 @assignee:ethan.teague @version:OT_Release @COMPLETED @uorgmanager1
  Scenario: Parent Organization field appearance not available to org_manager

    Given I am logged in as "uorgmanager1" with password "civicactions"
    And I go to create "post" content for the "Or1" group
      Then I should see the text "Create Post"
      Then I verify the "edit-field-parent-organization-und" select is not found on the page


  @RD-2460 @assignee:alexis.saransig @version:3/22_Launch_Release @COMPLETED @uorgmanager2
  Scenario: Group members should see the Recent Activity block

    Given I am logged in as "uorgmanager2" with password "civicactions"
    And I go to create "post" content for the "Or2 Gr9SI" group
    And I should see the text "Create Post"
    And I fill in "edit-title" with "Test - Post content"
    And I fill in "edit-body-und-0-value" with "Test - Post description"
    And I check the box "Peace"
    And I select the radio button "Group - Can be viewed only by members of the group." with the id "edit-field-gn2-simple-access-und-group"
    And I press the "Save" button
    And I should see the text "has been created"
    And I visit the system path "user/logout"
    And I am logged in as "umember2" with password "civicactions"
    And I visit "or2/or2-gr9si"
    And I should see the CSS selector ".block-recent-activity"
    And I visit the system path "user/logout"
    And I am logged in as "umember1" with password "civicactions"
    And I visit "or2/or2-gr9si"
    And I should not see the CSS selector ".block-recent-activity"


  @RD-2625 @assignee:ethan.teague @version:3/22_Launch_Release @COMPLETED @administrator
  Scenario: Dashboard Links

    Given I am logged in as "uhrmanager1b" with password "civicactions"
    And I visit "or1/dashboard"
      Then I should see the text "Manage Members"


  @RD-2419 @assignee:richard.gilbert @version:3/22_Launch_Release @COMPLETED @administrator
  Scenario: Generic Membership settings text for groups

    Given I have accepted terms and am logged in as a user with the "administrator" role
    And I visit "node/add/group?gid={node:title:George C. Marshall Center}"
      Then I should see the text "Membership Settings"


  @RD-2419 @assignee:richard.gilbert @version:3/22_Launch_Release @COMPLETED @administrator
  Scenario: Generic Membership settings text for courses

    Given I have accepted terms and am logged in as a user with the "administrator" role
    And I visit "node/add/course?gid={node:title:George C. Marshall Center}"
      Then I should see the text "Membership Settings"


  @RD-2419 @assignee:richard.gilbert @version:3/22_Launch_Release @COMPLETED @administrator
  Scenario: Generic Membership settings text for pages

    Given I have accepted terms and am logged in as a user with the "administrator" role
    And I visit "node/add/program?gid={node:title:George C. Marshall Center}"
      Then I should see the text "Membership Settings"


  @RD-2269 @assignee:alexis.saransig @version:OT_Release @COMPLETED @uadmin
  Scenario: Should not see wysiwyd in Body field, should see updated hel texts.

    Given I am logged in as "uadmin" with password "civicactions"
    And I go to "node/add/group?gid={node:title:George C. Marshall Center}"
    Then I should see the text "he Group Description will overlay"
    And I should see the text "If you upload a Main Image"
    And I should not see the text "Rich Text Editor"


  @RD-2627 @assignee:alexis.saransig @version:3/22_Launch_Release @COMPLETED @create @qa-admin
  Scenario: Course with Membership setting as "open" - should display "Join course" button

    Given I am logged in as "qa-admin" with password "CivicActions3#"
    And I go to create "course" content for the "Or2 Gr9SI" group
    And I fill in "edit-title" with "Create Course"
    And I fill in "edit-body-und-0-value" with "Create Course"
    And I check the box "Peace"
    And I select the radio button "Public - Can be viewed by anyone on the World Wide Web." with the id "edit-field-gn2-simple-access-und-public"
    And I select "open" from "edit-gn2-og-form-options"
    And I press the "Save" button
    And I should see the text "has been created"
    And I go to "user/logout"
    And I am logged in as "ugroupmanager1" with password "civicactions"
    And I visit the last created node
    And I should see the text "Join course"


  @RD-2627 @assignee:alexis.saransig @version:3/22_Launch_Release @COMPLETED @create @qa-admin
  Scenario: Course with Membership setting as "moderated" - should display "Request Membership" button

    Given I am logged in as "qa-admin" with password "CivicActions3#"
    And I go to create "course" content for the "Or1 Gr2SI" group
    And I fill in "edit-title" with "Create Course 1234"
    And I fill in "edit-body-und-0-value" with "Create Course"
    And I check the box "Peace"
    And I select the radio button "Public - Can be viewed by anyone on the World Wide Web." with the id "edit-field-gn2-simple-access-und-public"
    And I select "moderated" from "edit-gn2-og-form-options"
    And I press the "Publish" button
    And I should see the text "has been created"
    Then I go to "user/logout"
    Then I am logged in as "ugroupmanager2" with password "civicactions"
    And I visit the node with title "Create Course 1234"
    Given I reload the page 1 times
    Then I should see "Create Course 1234"
    Then I should see "Request Membership"

  @RD-2714
  Scenario Outline: non-member is able to Request Membership to public Course/Group
    and see the updated texts.

    Given I am logged in as "qa-admin" with password "CivicActions3#"
    And I go to create "<content_type>" content for the "Or1 Gr2SI" group
    And I fill in "edit-title" with <text>
    And I fill in "edit-body-und-0-value" with <text>
    And I check the box "Peace"
    And I select the radio button "Public - Can be viewed by anyone on the World Wide Web." with the id "edit-field-gn2-simple-access-und-public"
    And I select "moderated" from "edit-gn2-og-form-options"
    And I press the "Publish" button
    And I should see the text "has been created"
    Then I go to "user/logout"
    Then I am logged in as "umember1" with password "civicactions"
    And I visit the last created node
    Then I should see <text>
    Then I click "Request Membership"
    Then I should see the text "you want to request membership"
    Then I should see the text "Add an additional message to the group manager"
    And I press the "Join" button
    Then I should see the text "is pending. You will receive a notification"
      Examples:
      | content_type  | text         |
      | group         | "NewGroup"   |
      | course        | "NewCourse"  |
      

  @RD-2627 @assignee:alexis.saransig @version:3/22_Launch_Release @COMPLETED @create @qa-admin
  Scenario: Course with Membership setting as "closed" - should display "This is a closed course...." message

    Given I am logged in as "qa-admin" with password "CivicActions3#"
    And I go to create "course" content for the "Or1 Gr2SI" group
    And I fill in "edit-title" with "Create Course 1223456"
    And I fill in "edit-body-und-0-value" with "Create Course"
    And I check the box "Peace"
    And I select the radio button "Public - Can be viewed by anyone on the World Wide Web." with the id "edit-field-gn2-simple-access-und-public"
    And I select "closed" from "edit-gn2-og-form-options"
    And I press the "Publish" button
    And I should see the text "has been created"
    And I go to "user/logout"
    And I am logged in as "ugroupmanager2" with password "civicactions"
    And I visit the node with title "Create Course 1223456"
    Given I reload the page 1 times
    Then I should see "This is a closed course."



  @RD-2550 @assignee:richard.gilbert @version:3/22_Launch_Release @COMPLETED @create @ugroupmanager2
  Scenario: Group form "help" field help text

    Given I am logged in as "ugroupmanager2" with password "civicactions"
    And I go to create "group" content for the "Or2 Gr9SI" group
    And I should see the text "Within each group users can create discussion posts, events, and resources related to that group. You can also see recent activity specific to that group."


  @RD-2701 @version:3/22_Launch_Release @COMPLETED @create @uorgmanager2
  Scenario: Subgroups tab doesn't contain Courses

    Given I am logged in as "uorgmanager2" with password "civicactions"
    And I go to create "course" content for the "Or2 Gr9SI" group
    And I should see the text "Create Course"
    And I fill in "edit-title" with "Create Course Title"
    And I fill in "edit-body-und-0-value" with "Create Course"
    And I check the box "Peace"
    And I select the radio button "Group - Can be viewed only by members of the group." with the id "edit-field-gn2-simple-access-und-group"
    And I select "open" from "edit-gn2-og-form-options"
    And I press the "Save" button
    And I should see the text "has been created"
    And I go to create "group" content for the "Or2 Gr9SI" group
    And I should see the text "Create Group"
    And I fill in "edit-title" with "Create Group Title"
    And I fill in "edit-body-und-0-value" with "Create Group"
    And I check the box "Peace"
    And I select the radio button "Group - Can be viewed only by members of the group." with the id "edit-field-gn2-simple-access-und-group"
    And I select "open" from "edit-gn2-og-form-options"
    And I press the "Save" button
    And I should see the text "has been created"
    And I visit "or2/or2-gr9si"
    And I should see the text "Create Course Title"
    And I should see the text "Create Group Title"


  @RD-2736 @assignee:alexis.saransig @version:3/22_Launch_Release @COMPLETED @create @uorgmanager2
  Scenario: Course main image should have updated help text

    Given I am logged in as "uorgmanager2" with password "civicactions"
    And I go to create "course" content for the "Or2 Gr9SI" group
    Then I should see the text "Files must not exceed 8 MB"


  @RD-1082 @RD-2764 @version:3/22_Launch_Release @COMPLETED @create @uadmin @ugroupmanager1 @umember2 @uorgmanager1
  Scenario: Group Manager Interactions

    Given I am logged in as "uadmin" with password "civicactions"
    Then I create a "organization" node with title "CA2GOV-Test-Organization" on "None" with membership "Open" and privacy "Organization"
    And I add users to the "CA2GOV-Test-Organization" group with role:
    | user      | role |
    | uorgmanager1  | org_manager |
    Then I am logged out
    Given I am logged in as "uorgmanager1" with password "civicactions"
    Then I create a "group" node with title "CA2GOV-Test-Group" on "CA2GOV-Test-Organization" with membership "Open" and privacy "Group"
        And I add users to the "CA2GOV-Test-Group" group with role:
        | user      | role |
        | ugroupmanager1  | group_manager |
    Then I am logged out
    Given I am logged in as "ugroupmanager1" with password "civicactions"
    Then I create a "group" node with title "CA2GOV-Test-Group-User-Access" on "CA2GOV-Test-Group" with membership "Open" and privacy "Group"
    And I add users to the "CA2GOV-Test-Group-User-Access" group:
    | user      |
    | umember2  |
    Then I create a "post" node with title "CA2GOV-Test-User-Read-Me" on "CA2GOV-Test-Group-User-Access" with membership "Open" and privacy "Group"
    Then I am logged out
    Given I am logged in as "umember2" with password "civicactions"
    Then I create a "post" node with title "CA2GOV-Test-User-Creation" on "CA2GOV-Test-Group-User-Access" with membership "Open" and privacy "Group"
    Then I visit the node with title "CA2GOV-Test-User-Read-Me"
    Then the response status code should be 200


  @RD-2746 @assignee:iris.ibekwe @version:3/22_Launch_Release @COMPLETED @create @uadmin
  Scenario: Current Courses block should not display a pager

    Given I am logged in as "uadmin" with password "civicactions"
            When I visit "/or1"
            And I click "Add Course"
            And I select "Open" from "edit-gn2-og-form-options"
            And I uncheck "edit-field-course-dates-und-0-show-todate"
            And I check "edit-field-topic-und-95"
            And I fill in the following:
              | edit-title            | Test Course 1         |
              | edit-body-und-0-value | Test description text |
              | edit-field-course-dates-und-0-value-datepicker-popup-0 | 29 Mar 2016 |
            And I press "Publish"
            Then I should see "Test Course 1"
        #  Rinse, scrub, repeat to create 4 course nodes

            And I visit "/or1"
            And I click "Add Course"
            And I select "Open" from "edit-gn2-og-form-options"
            And I uncheck "edit-field-course-dates-und-0-show-todate"
            And I check "edit-field-topic-und-95"
            And I fill in the following:
              | edit-title            | Test Course 2         |
              | edit-body-und-0-value | Test description text |
              | edit-field-course-dates-und-0-value-datepicker-popup-0 | 30 Mar 2016 |
            And I press "Publish"
            Then I should see "Test Course 2"

            And I visit "/or1"
            And I click "Add Course"
            And I select "Open" from "edit-gn2-og-form-options"
            And I uncheck "edit-field-course-dates-und-0-show-todate"
            And I check "edit-field-topic-und-95"
            And I fill in the following:
              | edit-title            | Test Course 3         |
              | edit-body-und-0-value | Test description text |
              | edit-field-course-dates-und-0-value-datepicker-popup-0 | 21 May 2016 |
            And I press "Publish"
            Then I should see "Test Course 3"

            And I visit "/or1"
            And I click "Add Course"
            And I select "Open" from "edit-gn2-og-form-options"
            And I uncheck "edit-field-course-dates-und-0-show-todate"
            And I check "edit-field-topic-und-95"
            And I fill in the following:
              | edit-title            | Test Course 4         |
              | edit-body-und-0-value | Test description text |
              | edit-field-course-dates-und-0-value-datepicker-popup-0 | 29 May 2016 |
            And I press "Publish"
            Then I should see "Test Course 4"

            And I visit "/or1"
            Then I should see "Test Course 1"
            And I should see "Current Courses"
            And I should not see the CSS selector "li.pager-current"


  @RD-2419 @assignee:richard.gilbert @version:3/22_Launch_Release @COMPLETED @administrator
  Scenario: Generic Membership settings text for events

    Given I have accepted terms and am logged in as a user with the "administrator" role
    And I visit "node/add/event?gid={node:title:George C. Marshall Center}"
    Then I should see the text "Membership Settings"


  @RD-2759 @assignee:tom.camp @version:3/22_Launch_Release @COMPLETED @ugroupmanager1
  Scenario: Manage Members: Header

    Given I am logged in as "ugroupmanager1" with password "civicactions"
    And I visit the node with title "Or1 Gr2SI"
    And I follow "Manage members"
    Then I should see "Total active"
    And I should see "Total pending"
    And I should see "Total blocked"


  @RD-3212 @assignee:tom.camp @COMPLETED
  Scenario: Course short title

    Given I am logged in as "uorgmanager1" with password "civicactions"
    And I visit the node with title "Or1 Gr1PU Co20PR"
    And I follow "Edit"
    And I enter "ORC" for "edit-field-group-short-title-und-0-value"
    And I select "open" from "edit-gn2-og-form-options"
    And I check the box "Peace"
    And I press "Save"
    Then I should see the text "ORC: Or1 Gr1PU Co20PR"


#   @RD-3251 @assignee:ethan.teague @WIP
#   Scenario: Hide the Syllabus Tab, Recommended Links, Presenters Tab on course to non-members
#
#     Given I have accepted terms and am logged in as a user with the "administrator" role
#     And I visit the system path "gcmc/group-in-gcmc/course-for-group-in-gcmc/edit"
#     And I select the radio button "Sitewide - Can be viewed by anyone with a GlobalNET account." with the id "edit-field-gn2-simple-access-und-sitewide"
#     And I select "Yes" from "edit-field-display-all-fields-und"
#     And I click the element with CSS selector "#edit-submit"
#     Then I visit "/user/logout"
#     Given I am logged in as "umember1" with password "civicactions"
#     And I visit the system path "gcmc/group-in-gcmc/course-for-group-in-gcmc"
#     Then I should see the link "Course Groups"
#     Then I visit "/user/logout"
#     Given I have accepted terms and am logged in as a user with the "administrator" role
#     And I visit the system path "gcmc/group-in-gcmc/course-for-group-in-gcmc/edit"
#     And I select "No" from "edit-field-display-all-fields-und"
#     And I click the element with CSS selector "#edit-submit"
#     Then I visit "/user/logout"
#     Given I am logged in as "umember1" with password "civicactions"
#     And I visit the system path "gcmc/group-in-gcmc/course-for-group-in-gcmc"
#     Then I should not see the link "Course Groups"
#     Then I visit "/user/logout"
#     Given I have accepted terms and am logged in as a user with the "administrator" role
#     And I visit the system path "group/node/819/admin/people/add-user"
#     And I enter "umember1" for "User name"
#     And I press the "Add users" button
#     Then I visit "/user/logout"
#     Given I am logged in as "umember1" with password "civicactions"
#     And I visit the system path "gcmc/group-in-gcmc/course-for-group-in-gcmc"
#     Then I should see the link "Course Groups"

#   @RD-2690 @assignee:alaine.karoleff @OPEN @create @qa-admin @wip
#   Scenario: Ability to send messages or request contact with members
#
#     Given I am logged in as "qa-admin" with password "CivicActions3#"
#     And I visit the node with title "A group in GCMC"
#     Then I should see the text "Qualia Admin"
#     And I should see the text "Quain Memberski"
#     #this test was testing for something that is no longer true. This test will need to be re-evaluated for what should be true, and then specified accordingly.

  @RD-2360 @ana.willem
  Scenario: Topics from parent automatically populate child.
    Given I am logged in as "uadmin" with password "civicactions"
    And I visit the system path "/node/add/event?gid={node:title:A group in GCMC}"
    Then the "edit-field-topic-und-97" checkbox should be checked
    Then the "edit-field-topic-und-90" checkbox should be checked
    Then the "edit-field-topic-und-92" checkbox should be checked
    Then the "edit-field-topic-und-12" checkbox should be checked