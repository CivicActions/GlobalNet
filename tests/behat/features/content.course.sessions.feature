@api
Feature: content.course.sessions.feature

  Scenario: Create a course for session tests
    Given I am logged in as "uadmin" with password "civicactions"
    And I visit the system path "/node/add/course?gid=16"
    And I fill in "edit-title" with "Create Group"
    And I fill in "edit-body-und-0-value" with "Create Course"
    And I select "Open" from "edit-gn2-og-form-options"
    And I check the box "Peace"
    And I select the radio button "Public - Can be viewed by anyone on the World Wide Web." with the id "edit-field-gn2-simple-access-und-public"
    And I select the radio button "Yes" with the id "edit-field-will-this-course-have-sess-und-yes"
    And I select "open" from "edit-gn2-og-form-options"
    And I press the "Save" button
    And I should see the text "has been created"

  @javascript
  Scenario: Course Ajax tabs and Sessions UI
    Given I am logged in as "qa-admin" with password "CivicActions3#"
    And I visit the node with title "Course with New Sessions"
    And I click "Edit"
    And I wait for 2 seconds
    And I select the radio button "Yes" with the id "edit-field-will-this-course-have-sess-und-yes"
    And I press the "Save" button
    And I click "Syllabus"
    And I wait for AJAX to finish
    And I click "Another Level 1 Session"
    And I wait for AJAX to finish
    Then I should see the text "Another Level 1 Session"
    And I click "Participants"
    And I wait for AJAX to finish
    And I wait for 2 seconds
    Then I should see "Search"
    And I click "Presenters"
    And I wait for AJAX to finish
    And I wait for 2 seconds
    Then I should see "Sort by"
    And I click "Posts"
    Then I should see "Files"
