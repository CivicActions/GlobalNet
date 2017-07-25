@api
Feature: content.course.group.feature
  Tests various aspects of course groups  1m54.171s


  Scenario: Non members should see correct button text to Join and Members who are not admins should not see admin menu   @RD-2825

    Given I am logged in as "uorgmanager2" with password "civicactions"
    And I go to create "course-group" content for the "Or2 Co12GR" group
    And I fill in "edit-title" with "Create Course Group"
    And I fill in "edit-body-und-0-value" with "Create Course Group"
    And I check the box "Peace"
    And I select the radio button "Public - Can be viewed by anyone on the World Wide Web." with the id "edit-field-gn2-simple-access-und-public"
    And I select "open" from "edit-gn2-og-form-options"
    And I press the "Save" button
    And I should see the text "has been created"
    And I am logged out
    And I am logged in as "umember1" with password "civicactions"
    And I visit the last created node
    And I should see the text "Join course group"
    And I click "Join course group"
    Then I should not see the text "Group Admin Menu"


  Scenario: Should not see Preview button when create a new Course Group   @RD-2785

    Given I am logged in as "uorgmanager2" with password "civicactions"
    And I go to create "course-group" content for the "Or2 Gr10OR" group
    And I should not see the CSS selector "#edit-preview"


  Scenario: Should see the Description field help text @RD-2787

    Given I am logged in as "uorgmanager2" with password "civicactions"
    And I go to create "course-group" content for the "Or2 Co12GR" group
    And I should see the text "Please note: you can add additional custom group"

  # This test is based on a false premise. Creating a course
  # in parent org will not create a course group in the newly created course.
  # Scenario: Course Group tab not Subgroup tab @RD-896

    # Given I am logged in as "uadmin" with password "civicactions"
    # And I visit "/gcmc"
    # And I click "Add Course"
    # And I fill in "edit-title" with "test course 1234"
    # And I fill in "edit-body-und-0-value" with "test 12345"
    # And I select "Open" from "edit-gn2-og-form-options"
    # And I check the box "Peace"
    # And I click the element with CSS selector "#edit-submit"
    # And I click "Add Members"
    # And I enter "umember1" for "User name"
    # And I click the element with CSS selector "#edit-submit"
    # And I visit "/user/logout"
    # Given I am logged in as "umember1" with password "civicactions"
    # And I visit the last created node
    # Then I should see "Course Groups"


#   WORK IN PROGRESS TESTS

#   Scenario: Confirm Alphabetical Sorting of Course Groups and Subgroups  @RD-2733 @RD-2750 @RD-3216
#
#     Given I am logged in as "uorgmanager1" with password "civicactions"
#     And I visit the node with title "Or1 Gr1PU" with open tab "SUBGROUPS"
#     And I follow "Add Subgroup"
#     And I fill in "edit-title" with "Alpha Test Z"
#     And I fill in "edit-body-und-0-value" with "TEST"
#     And I fill in "edit-field-group-short-title-und-0-value" with "ALPHA1"
#     And I select "open" from "edit-gn2-og-form-options"
#     And I select the radio button "Group - Can be viewed only by members of the group." with the id "edit-field-gn2-simple-access-und-group"
#     And I click the element with CSS selector "#edit-submit"
#
#     And I visit the node with title "Or1 Gr1PU" with open tab "SUBGROUPS"
#     And I follow "Add Subgroup"
#     And I fill in "edit-title" with "Alpha Test A"
#     And I fill in "edit-body-und-0-value" with "TEST"
#     And I fill in "edit-field-group-short-title-und-0-value" with "ALPHA2"
#     And I select "open" from "edit-gn2-og-form-options"
#     And I select the radio button "Group - Can be viewed only by members of the group." with the id "edit-field-gn2-simple-access-und-group"
#     And I click the element with CSS selector "#edit-submit"
#
#     And I visit the node with title "Or1 Gr1PU" with open tab "SUBGROUPS"
#     Then I should see the text "Alpha Test A"
#     And I should see the text "Alpha Test Z"
#     And "Alpha Test A" should precede "Alpha Test Z" in ".subgroups--left-col a"
