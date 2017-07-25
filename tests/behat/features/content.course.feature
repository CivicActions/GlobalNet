@api
Feature: content.course.feature
  Testing various course related Scenarios

  Scenario: Group Managers can create courses

    Given I am logged in as "ugroupmanager2" with password "civicactions"
    And I go to create "course" content for the "Or2 Gr9SI" group
    Then I should see the text "Create Course"
    And I fill in "edit-title" with "Create Course"
    And I fill in "edit-body-und-0-value" with "Create Course"
    And I check the box "Peace"
    And I select the radio button "Group - Can be viewed only by members of the group." with the id "edit-field-gn2-simple-access-und-group"
    And I select "open" from "edit-gn2-og-form-options"
    And I press the "Save" button
    And I should see the text "has been created"

  @RD-4019
  Scenario: Anonymous should not see the Course Leadership or Alumni Specialist blocks  @RD-2803

    Given I am logged in as "uorgmanager2" with password "civicactions"
    And I go to create "course" content for the "Or2 Gr9SI" group
    Then I should see the text "Create Course"
    And I fill in "edit-title" with "Create Course"
    And I fill in "edit-body-und-0-value" with "Create Course"
    And I fill in "edit-field-course-director-und-0-target-id" with "umember1 (203)"
    And I fill in "edit-field-alumni-specialist-und-0-target-id" with "Lisa.Berry (57)"
    And I check the box "Peace"
    And I select the radio button "Public - Can be viewed by anyone on the World Wide Web." with the id "edit-field-gn2-simple-access-und-public"
    And I select "open" from "edit-gn2-og-form-options"
    And I press the "Save" button
    And I should see the text "has been created"
    And I should see the text "Course Leadership"
    And I should see the text "Alumni Specialist"
    And I visit "user/logout"
    And I visit the last created node
    And I should not see the text "Course Leadership"
    And I should not see the text "Alumni Specialist"


  Scenario: Recommended Links Text is displayed to admin on course create  @RD-3135

    Given I am logged in as "uadmin" with password "civicactions"
    And I visit the system path "node/add/course"
    Then I should see the text "Links will appear in the sidebar on the Course Landing Page."

#   Scenario: A user creates course content using WYSIWYG to embed. @RD-2970
#
#      Given I am logged in as "qa-admin" with password "CivicActions3#"
#      And  I set browser window size to "1040" x "1000"
#      And I go to create "course" content for the "Or2 Gr10OR" group
#      And I fill in "edit-title" with "Test course 42"
#      And I click the element with CSS selector ".group-topics legend span a"
#      And I check the box "Peace"
#      And I select "moderated" from "edit-gn2-og-form-options"
#      And I click "wysiwyg-toggle-edit-body-und-0-value"
#      And I click "wysiwyg-toggle-edit-body-und-0-value"
#      And I click the element with CSS selector ".cke_button__media"
#      Given I switch to the iframe "mediaBrowser"
#      And I click "My files"
#      #fails here.
#      And I click the element with CSS selector "#media-browser-library-list > li .media-thumbnail"
#      Given I submit the form in my Media Modal
#      And I wait for 10 seconds
#      And I click "wysiwyg-toggle-edit-body-und-0-value"
#      And I click "wysiwyg-toggle-edit-body-und-0-value"
#      And I click the element with CSS selector "#edit-submit"
#      And I visit the edit form for node with title "Test course 42"
#      And I click "wysiwyg-toggle-edit-body-und-0-value"
#      Then I should see "fid"
#      And I should see "view_mode"
#      And I should see "original_version"
  
  Scenario: Displays Help block for Courses; RD-3438

    Given I am logged in as "ugroupmanager2" with password "civicactions"
      And I go to create "course" content for the "Or2 Gr9SI" group
      Then I should see the text "Create Course"
        And I fill in "edit-title" with "Create Course"
        And I fill in "edit-body-und-0-value" with "Create Course"
        And I fill in "edit-field-group-help-und-0-value" with "Help text in Course"
        And I check the box "Peace"
        And I select the radio button "Group - Can be viewed only by members of the group." with the id "edit-field-gn2-simple-access-und-group"
        And I select "open" from "edit-gn2-og-form-options"
        And I press the "Save" button
        Then I should see the text "has been created"
        And I should see the text "Help text in Course"

  @RD-4018
  Scenario: A member of an organization should not see the course syllabus for a course with 'organization'-wide visibility if they are not enrolled in the course. @RD-4018

    Given I am logged in as "uorgmanager2" with password "civicactions"
    And I go to create "course" content for the "Or2 Gr9SI" group
    Then I should see the text "Create Course"
    And I fill in "edit-title" with "Test Course 11"
    And I fill in "edit-body-und-0-value" with "Test Course 11"
    And I fill in "edit-field-course-director-und-0-target-id" with "umember1 (203)"
    And I check the box "Peace"
    And I select the radio button "Organization - Can be viewed by a member of the Organization." with the id "edit-field-gn2-simple-access-und-organization"
    And I select "closed" from "edit-gn2-og-form-options"
    And I select the radio button "Yes" with the id "edit-field-will-this-course-have-sess-und-yes"
    And I press the "Save" button
    And I should see the text "has been created"
    And I should see the text "Course Leadership"
    And I visit "user/logout"
    And I am logged in as "umember2" with password "civicactions"
    And I visit the last created node
    Then I should see the text "Syllabus"
    And I should see the text "Test Course 11"
    And I should see the text "Course Leadership"
    And I should see the text "This is a closed course"
