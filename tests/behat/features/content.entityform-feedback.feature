@api
Feature: content.entityform-feedback.feature

  @RD-2398 @assignee:alexis.saransig @version:3/22_Launch_Release @COMPLETED @RD-2920 @create @review @uorgmanager2
  Scenario: Course feedback form needs to be associated with course / group / org

    Given I am logged in as "uadmin" with password "civicactions"
    And I am at "/group-feedback-form?gid={node:title:Or2 Gr10OR}"
    And I fill in "edit-field-title-und-0-value" with "Course Feedback"
    And I fill in "edit-field-description-und-0-value" with "Feedback description"
    And I click the element with CSS selector "#edit-submit"
    And I visit the system path "/admin/manage/form/submissions/course_feedback"
    Then I should see the text "Or2 Gr10OR"


  @RD-1206 @assignee:alexis.saransig @version:OT_Release @COMPLETED @create @ugroupmanager2
  Scenario: Should be able to send Event Feedback

    Given I am logged in as "ugroupmanager2" with password "civicactions"
    And I go to create "event" content for the "Or2 Gr9SI" group
    And I should see the text "Create Event"
    And I fill in "edit-title" with "Create Event"
    And I fill in "edit-body-und-0-value" with "Create Event"
    And I select "Open" from "edit-gn2-og-form-options"
    And I select "General" from "edit-field-event-type-und"
    And I select "online" from "edit-field-event-location-und"
    And I fill in "edit-field-event-contact-person-und-0-target-id" with "uadmin"
    And I check the box "Peace"
    And I select the radio button "Group - Can be viewed only by members of the group." with the id "edit-field-gn2-simple-access-und-group"
    And I press the "Save" button
    And I should see the text "has been created"
    And I should see the text "Send Feedback"
    And I click "Send Feedback"
    Then I should get a 200 HTTP response
    And I should see the text "Event related"


  @RD-1206 @assignee:alexis.saransig @version:OT_Release @COMPLETED @create @ugroupmanager2
  Scenario: Should be able to send Group Feedback

    Given I am logged in as "ugroupmanager2" with password "civicactions"
    And I go to create "group" content for the "Or2 Gr9SI" group
    Then I should see the text "Create Group"
    And I fill in "edit-title" with "Create Group"
    And I fill in "edit-body-und-0-value" with "Create Group"
    And I check the box "Peace"
    And I select the radio button "Group - Can be viewed only by members of the group." with the id "edit-field-gn2-simple-access-und-group"
    And I select "open" from "edit-gn2-og-form-options"
    And I press the "Save" button
    And I should see the text "has been created"
    And I should see the text "Send Feedback"
    And I click "Send Feedback"
    Then I should get a 200 HTTP response
    And I should see the text "Group related"


  @RD-2631 @RD-2793 @RD-3206 @assignee:alexis.saransig @assignee:richard.gilbert @assignee:tom.camp @version:3/22_Launch_Release @COMPLETED @ugroupmanager2
  Scenario: Org-manager should be able to see View Event Feedback links and review submitted content

    Given I am logged in as "uorgmanager2" with password "civicactions"
    And I go to create "event" content for the "Or2 Gr9SI" group
    And I should see the text "Create Event"
    And I fill in "edit-title" with "Create Event"
    And I fill in "edit-body-und-0-value" with "Create Event"
    And I select "Open" from "edit-gn2-og-form-options"
    And I select "General" from "edit-field-event-type-und"
    And I select "online" from "edit-field-event-location-und"
    And I fill in "edit-field-event-contact-person-und-0-target-id" with "uadmin"
    And I check the box "Peace"
    And I select the radio button "Group - Can be viewed only by members of the group." with the id "edit-field-gn2-simple-access-und-group"
    And I press the "Save" button
    And I should see the text "has been created"
    And I click "Send Feedback"
    And I fill in "edit-field-title-und-0-value" with "Event feedback"
    And I fill in "edit-field-description-und-0-value" with "Event feedback"
    And I press the "Submit" button
    And I click "View Event Feedback"
    And I should see the text "Event Feedback"
    And I visit "or2/dashboard/forms/submissions/event_feedback"
    And I should see the text "Create Event"


  @RD-2631 @assignee:alexis.saransig @version:3/22_Launch_Release @COMPLETED @uorgmanager2
  Scenario: Org-manager should be able to see View Group Feedback links and review submitted content

    Given I am logged in as "uorgmanager2" with password "civicactions"
    And I go to create "group" content for the "Or2 Gr9SI" group
    And I should see the text "Create Group"
    And I fill in "edit-title" with "Create Group"
    And I fill in "edit-body-und-0-value" with "Create Group"
    And I check the box "Peace"
    And I select the radio button "Group - Can be viewed only by members of the group." with the id "edit-field-gn2-simple-access-und-group"
    And I select "open" from "edit-gn2-og-form-options"
    And I press the "Save" button
    And I should see the text "has been created"
    And I click "Send Feedback"
    And I fill in "edit-field-title-und-0-value" with "group feedback"
    And I fill in "edit-field-description-und-0-value" with "Group feedback"
    And I press the "Submit" button
    And I click "View Group Feedback"
    And I should see the text "Group Feedback"
    And I visit "or2/dashboard/forms/submissions/event_feedback"
    And I should see the text "Create Group"



