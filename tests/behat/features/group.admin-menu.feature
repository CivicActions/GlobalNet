@api
Feature: group.admin-menu.feature


  @RD-2443 @assignee:tom.camp @version:OT_Release @COMPLETED @ugroupmanager1
  Scenario: View course feedback

    Given I am logged in as "ugroupmanager1" with password "civicactions"
    And I visit the node with title "Or1 Co1PU"
    Then I should see "View Course Feedback"
    And I visit the node with title "Or1 Gr2SI"
    Then I should not see "View Course Feedback"


  @RD-2716 @assignee:richard.gilbert @version:3/22_Launch_Release @COMPLETED @umember1
  Scenario: General users should not see group admin menu

    Given I am logged in as "umember1" with password "civicactions"
    And I go to "gcmc/mark-twain-101/library-test-page"
    Then I should not see "GROUP ADMIN MENU"


  @RD-1739 @assignee:tom.camp @version:Release_v2.5.1-20160427 @COMPLETED
  Scenario: Course links

    Given I am logged in as "uorgmanager1" with password "civicactions"
    And I visit the node with title "Or1 Co7PR"
    Then I should see the text "Add Announcement"
    And I should see the text "Add Course Group"
    And I should see the text "Add Event"
    And I should see the text "Add Poll"
    And I should see the text "Add Post"
    And I should see the text "Add Publication"
    And I should not see the text "Add a course to this group"
    And I should not see the text "Add News"
    And I should not see the text "Add Group"


  @RD-1739 @assignee:tom.camp @version:Release_v2.5.1-20160427 @COMPLETED @wip
  Scenario: Course Group links

    Given I am logged in as "uorgmanager1" with password "civicactions"
    And I visit the node with title "Or1 Co1PU Cg6PR"
    And I press "Manage course group"
    Then I should see the text "Add Announcement"
    Then I should see the text "Add Event"
    Then I should see the text "Add Poll"
    Then I should see the text "Add Post"
    And I should not see the text "Add a course to this group"
    And I should not see the text "Add News"
    And I should not see the text "Add Group"


  @RD-1739 @assignee:tom.camp @version:Release_v2.5.1-20160427 @COMPLETED @wip
  Scenario: Custom Landing page links

    Given I am logged in as "uorgmanager1" with password "civicactions"
    And I visit the node with title "Or1 Pg6PR"
    And I press "Manage program"
    Then I should see the text "Add Announcement"
    Then I should see the text "Add Event"
    Then I should see the text "Add News"
    Then I should see the text "Add Publication"
    And I should not see the text "Add Course"
    And I should not see the text "Add Poll"
    And I should not see the text "Add Post"
    And I should not see the text "Add Group"


  @RD-1739 @assignee:tom.camp @version:Release_v2.5.1-20160427 @COMPLETED @wip
  Scenario: Group links

    Given I am logged in as "uorgmanager1" with password "civicactions"
    And I visit the node with title "Or1 Gr6PR"
    And I press "Manage group"
    Then I should see the text "Add Announcement"
    Then I should see the text "Add Course"
    Then I should see the text "Add Event"
    Then I should see the text "Add Poll"
    Then I should see the text "Add Post"
    Then I should see the text "Add Group"
    And I should see the text "Add Publication"
    And I follow "Cancel Membership"
    And I press "Remove"
    Then I should see the text "Join Group"


  @RD-3136 @RD-3275 @assignee:ana.willem @assignee:tom.camp
  Scenario: PA Specialist

    Given I am logged in as "uadmin" with password "civicactions"
    And I visit the system path "admin/people/create"
    And I enter "paspec@test.com" for "edit-mail"
    And I enter "PA" for "edit-field-name-first-und-0-value"
    And I enter "Specialist" for "edit-field-name-last-und-0-value"
    And I press "Create new account"
    Then I visit the system path "/admin/people"
    And I follow "pa.specialist"
    And I follow "Edit"
    And I follow "Change password »"
    And I enter "CivicActions3#" for "edit-pass-pass1"
    And I enter "CivicActions3#" for "edit-pass-pass2"
    And I press "Save"
    And I visit the node with title "George C. Marshall Center"
    And I follow "Add Members"
    And I enter "pa.specialist" for "edit-name"
    And I check the box "PA Specialist"
    And I press "Add users"
    And I visit the system path "/user/logout"
    Given I am logged in as "pa.specialist" with password "CivicActions3#"
    And I visit the node with title "George C. Marshall Center"
    Then I should see the text "Add Announcement"
    And I should see the text "Add News"
    And I should see the text "Add Event"
    And I should see the text "Add Post"
    And I visit the system path "node/add/event?gid={node:title:George C. Marshall Center}"
    Then I should get a 200 HTTP response
    And I select the radio button "Group - Can be viewed only by members of the group." with the id "edit-field-gn2-simple-access-und-group"
    And I select the radio button "Organization - Can be viewed by a member of the Organization." with the id "edit-field-gn2-simple-access-und-organization"
    And I visit the system path "node/add/post?gid={node:title:George C. Marshall Center}"
    Then I should get a 200 HTTP response
    And I select the radio button "Group - Can be viewed only by members of the group." with the id "edit-field-gn2-simple-access-und-group"
    And I select the radio button "Organization - Can be viewed by a member of the Organization." with the id "edit-field-gn2-simple-access-und-organization"
    And I visit the system path "node/add/announcement?gid={node:title:George C. Marshall Center}"
    Then I should get a 200 HTTP response
    And I select the radio button "Group - Can be viewed only by members of the group." with the id "edit-field-gn2-simple-access-und-group"
    And I select the radio button "Organization - Can be viewed by a member of the Organization." with the id "edit-field-gn2-simple-access-und-organization"
    And I visit the system path "node/add/news?gid={node:title:George C. Marshall Center}"
    Then I should get a 200 HTTP response
    And I select the radio button "Group - Can be viewed only by members of the group." with the id "edit-field-gn2-simple-access-und-group"
    And I select the radio button "Organization - Can be viewed by a member of the Organization." with the id "edit-field-gn2-simple-access-und-organization"


  @RD-2227 @assignee:tom.camp @WIP
  Scenario: Group Manager

    Given I am logged in as "ugroupmanager1" with password "civicactions"
    And I visit the node with title "Or1 Gr2SI"
    Then I should not see the text "Add News"
    And I should not see the text "Add Publication"

