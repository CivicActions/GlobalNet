@api
Feature: content.event-registration.feature


  Scenario: Users must be activated by event manager before appearing in list of registrants @RD-2530 @RD-2935

    Given I am logged in as "uadmin" with password "civicactions"
      And I go to create "event" content for the "Or2 Gr9SI" group
      And I fill in "edit-title" with "Create Event Test 11"
      And I fill in "edit-body-und-0-value" with "Create Event"
      And I fill in "edit-field-event-date-und-0-value-datepicker-popup-0" with "01 Jan 2025"
      And I select "moderated" from "edit-gn2-og-form-options"
      And I select "General" from "edit-field-event-type-und"
      And I select "online" from "edit-field-event-location-und"
      And I check the box "Peace"
      And I select the radio button "Sitewide - Can be viewed by anyone with a GlobalNET account." with the id "edit-field-gn2-simple-access-und-sitewide"
      And I select the radio button "Yes" with the id "edit-field-registration-und-1"
      And I press the "Publish" button
        Then I should see the text "has been created"
          And I should see the text "Create Event Test 11"
          And I should see the text "Registrants (1)"

    When I visit the node with title "Create Event Test 11"
      And I click "Add Members"
      And I fill in "edit-name" with "ugroupmanager1b"
      And I press the "Add users" button
      And I visit the node with title "Create Event Test 11"
        Then I should see the text "Registrants (2)"

    When I click "Add Members"
      And I fill in "edit-name" with "ugroupmanager1"
      And I press the "Add users" button
      And I visit the node with title "Create Event Test 11"
        Then I should see the text "Registrants (3)"

    When I click "Add Members"
      And I fill in "edit-name" with "umember1b"
      And I press the "Add users" button
      And I visit the node with title "Create Event Test 11"
        Then I should see the text "Registrants (4)"

    When I click "Add Members"
      And I fill in "edit-name" with "umember1"
      And I press the "Add users" button
      And I visit the node with title "Create Event Test 11"
       Then I should see the text "Registrants (5)"

    When I click "Add Members"
    And I fill in "edit-name" with "uhrmanager1b"
    And I press the "Add users" button
    And I visit the node with title "Create Event Test 11"
      Then I should see the text "Registrants (6)"

    And I click "Add Members"
      And I fill in "edit-name" with "umember2"
      And I press the "Add users" button
      And I visit the node with title "Create Event Test 11"
        Then I should see the text "Registrants (7)"

  @RD-2740 @assignee:tom.camp @version:3/22_Launch_Release @COMPLETED @umember1
  Scenario: RSVP Block: Members

    Given I am logged in as "umember1" with password "civicactions"
    And I visit the node with title "Or1 Pg1PU Ev32GR"
    Then I should see the text "a participant in this event. If you no longer wish to see content and notifications from this event, you can leave here."

