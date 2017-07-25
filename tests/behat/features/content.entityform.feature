 @api
 Feature: content.entityform.feature
  Tests Entityform functions 1m6.127s

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

#Note: Test appears incomplete
  Scenario: Should see the correct links and help text for Contact Globalnet and Technical Support pages  @RD-2656 @RD-2529

    Given I am logged in as "umember1" with password "civicactions"
    Given I am on the homepage
    And I click "Contact GlobalNET"
      Then I should see the text "I have a problem with my password"
    Then the url should match "/node/add/support"

 Scenario: Request an organizational account @RD-2472

    Given I am on "or1"
    And I follow "Request an account"
    Then the url should match "or1/registration"

  @groupmanager @admin @RD-3343
  Scenario Outline: Group Managers and Admins should be able view form submissions
    Given I am logged in as <user> with password "civicactions"
    And I visit the node with title "Or1 Gr4GR"
    And I follow "View Form Submissions"
    Then I should get a 200 HTTP response 
    Examples:
      | user             |
      | "ugroupmanager1" |
      | "uadmin"         |
