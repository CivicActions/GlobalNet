@api @add @event @content
Feature: content.event.feature  0m58.068s

  Scenario: Simple access is present in event add forms.

    Given I am logged in as "uadmin" with password "civicactions"
      And I visit "node/add/event"
       Then I should see the CSS selector "#edit-field-gn2-simple-access-und-group"

    #Associated Countries block should read Associated Countries & Regions on EVENTS pages   @RD-3175

      And I visit the system path "gcmc/mark-twain-101/event-for-mark-twain-101"
      Then I should not see the text "Associated Countries & Regions" in the "sidebar" region

  Scenario: Group Managers can create events

    Given I am logged in as "ugroupmanager2" with password "civicactions"
    And I go to create event content for the "Or2 Gr9SI" group
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


  Scenario: Org Manager can add an Event to Custom Landing Page

    Given I am logged in as "uorgmanager2" with password "civicactions"
    And I go to create "event" content for the "Or2 Gr10OR" group
    And I fill in "edit-title" with "Event in Custom Landing Page"
    And I fill in "edit-body-und-0-value" with "Event test"
    And I fill in "edit-field-event-date-und-0-value-datepicker-popup-0" with "15 Feb 2016"
    And I select "Open" from "edit-gn2-og-form-options"
    And I select "General" from "edit-field-event-type-und"
    And I select "online" from "edit-field-event-location-und"
    And I fill in "edit-field-event-contact-person-und-0-target-id" with "uadmin"
    And I check the box "Peace"
    And I select the radio button "Group - Can be viewed only by members of the group." with the id "edit-field-gn2-simple-access-und-group"
    And I press the "Save" button
    And I should see the text "has been created"
    And I should see the text "Events"
    And I should see the text "Event in Custom Landing Page"


  Scenario: Event form, you should see the updated help text for Date Description field   @RD-2515

    Given I am logged in as "ugroupmanager2" with password "civicactions"
    And I go to create "event" content for the "Or2 Gr9SI" group
    And I should see the text "READ BEFORE USING THIS FIELD"


  Scenario: Course/Event language appears on content if not English   @RD-3007

    Given I am logged in as "uorgmanager1" with password "civicactions"
    And I visit the edit form for node with title "Or1 Co1PU"
    And I select "French" from "edit-field-language-und"
    And I select "Open" from "edit-gn2-og-form-options"
    And I select the radio button "Peace" with the id "edit-field-topic-und-10"
    And I click the element with CSS selector "#edit-submit"
    Then I should see the CSS selector ".field-name-field-language"
