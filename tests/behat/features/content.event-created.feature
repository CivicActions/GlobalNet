@api
Feature: content.event-created.feature

  @RD-2249 @RD-3155
  Scenario: Manager creates Event with registration disabled.

    Given I am logged in as "ugroupmanager2" with password "civicactions"
    And I visit the node with title "Or2 Gr11GR"
    And I follow "Add Event"
    And I select "Open" from "edit-gn2-og-form-options"
    And I fill in "edit-title" with "test event 1234"
    And I fill in "edit-body-und-0-value" with "test 12345"
    And I enter "06 Mar 2020" for "edit-field-event-date-und-0-value-datepicker-popup-0"
    And I select "General" from "edit-field-event-type-und"
    And I select "online" from "edit-field-event-location-und"
    And I select the radio button "Group - Can be viewed only by members of the group." with the id "edit-field-gn2-simple-access-und-group"
    And I select the radio button "No" with the id "edit-field-registration-und-0"
    And I check the box "Peace"
    And I should see the text "Select the language in which the event page should be displayed."
    And I should not see the CSS selector "#edit-field-group-short-title-und-0-value"
    And I press the "Save" button
    Then I should see the text "test event 1234"
    Then I visit the system path "user/logout"
    Then I am logged in as "umember2" with password "civicactions"
    And I visit the node with title "test event 1234"
    And I should not see the text "Interested in attending?"


  @RD-2249
  Scenario: Manager creates Event with registration enabled

    Given I am logged in as "ugroupmanager2" with password "civicactions"
    And I go to create event content for the "Or2 Gr11GR" group
    And I fill in "edit-title" with "test event 1234567"
    And I fill in "edit-body-und-0-value" with "test 12345678"
    And I select "Open" from "edit-gn2-og-form-options"
    And I select "General" from "edit-field-event-type-und"
    And I select "online" from "edit-field-event-location-und"
    And I enter "06 Mar 2020" for "edit-field-event-date-und-0-value-datepicker-popup-0"
    And I select the radio button "Yes" with the id "edit-field-registration-und-1"
    And I check the box "Peace"
    And I select the radio button "Organization - Can be viewed by a member of the Organization." with the id "edit-field-gn2-simple-access-und-organization"
    And I press the "Save" button
    Then I visit the system path "user/logout"
    Given I am logged in as "umember2" with password "civicactions"
    And I visit the node with title "test event 1234567"
    And I should see the text "Interested in attending?"


  @RD-2362
  Scenario: Manager creates Announcement for Event

    Given I am logged in as "ugroupmanager2" with password "civicactions"
    And I go to create event content for the "Or2 Gr11GR" group
    And I fill in "edit-title" with "nother event 55212"
    And I fill in "edit-body-und-0-value" with "this is the body"
    And I select "Open" from "edit-gn2-og-form-options"
    And I select "General" from "edit-field-event-type-und"
    And I select "online" from "edit-field-event-location-und"
    And I select the radio button "No" with the id "edit-field-registration-und-0"
    And I fill in "edit-field-event-contact-person-und-0-target-id" with "uadmin"
    And I check the box "Peace"
    And I select the radio button "Organization - Can be viewed by a member of the Organization." with the id "edit-field-gn2-simple-access-und-organization"
    And I press the "Save" button
    And I should see the text "has been created"
    When I click on the element with xpath "//li[contains(@class, 'menu__item is-leaf leaf')]/a[contains(@class, 'menu__link')]"
    And I fill in "edit-title" with "nother event 1234 announcement"
    And I fill in "edit-body-und-0-value" with "this is the announcement body"
    And I select the radio button "Organization - Can be viewed by a member of the Organization." with the id "edit-field-gn2-simple-access-und-organization"
    And I press the "Save" button
    Then I visit the system path "user/logout"
    Given I am logged in as "umember2" with password "civicactions"
    And I visit the node with title "nother event 55212"
    Then I should see the text "this is the announcement body"


  @RD-2470
  Scenario: Manager can see Registrants page

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
    And I click "See all »"
    Then I should get a 200 HTTP response
    And I should see the text "Registrants"


  @RD-2202
  Scenario: Manager add an Event to Custom Landing Page

    Given I am logged in as "uorgmanager2" with password "civicactions"
    And I go to create "event" content for the "Or2 Gr10OR" group
    Given I reload the page 1 times
    Then I should see "Event Title"
    And I fill in "edit-title" with "Event in Custom Landing Page"
    And I fill in "edit-body-und-0-value" with "Event test"
    And I select "Open" from "edit-gn2-og-form-options"
    And I select "General" from "edit-field-event-type-und"
    And I select "online" from "edit-field-event-location-und"
    And I fill in "edit-field-event-contact-person-und-0-target-id" with "uadmin"
    And I check the box "Peace"
    And I select the radio button "Group - Can be viewed only by members of the group." with the id "edit-field-gn2-simple-access-und-group"
    And I press the "Save" button
    And I should see the text "has been created"
    And I am at "or2/or2-gr10or"
    And I should see the text "Events"
    And I should see the link "Event in Custom Landing Page"


  @RD-2294
  Scenario: Confirm registration messages and links

    Given I am logged in as "uorgmanager2" with password "civicactions"
    And I visit the node with title "Or2 Gr11GR"
    And I press "Manage group"
    And I follow "Add Event"
    And I select "English" from "edit-field-language-und"
    And I select "Open" from "edit-gn2-og-form-options"
    And I fill in "edit-title" with "puppy aaabc"
    And I fill in "edit-body-und-0-value" with "puppy body 1234"
    And I fill in "edit-field-event-date-und-0-value-datepicker-popup-0" with "15 Feb 2020"
    And I select "General" from "edit-field-event-type-und"
    And I select "online" from "edit-field-event-location-und"
    And I select the radio button "Sitewide - Can be viewed by anyone with a GlobalNET account." with the id "edit-field-gn2-simple-access-und-sitewide"
    And I select "1" from "edit-field-registration-und-1"
    And I check the box "Peace"
    And I press the "Save" button
    And I visit "/user/logout"

    Given I am logged in as "umember2" with password "civicactions"
    And I visit the last created node
    Then I should see the text "Interested in attending?"
    And I click "Register for this event"
    Then I should see the text "You are a participant in this event"
    And I should see the link "leave here"
    And I follow "leave here"
    And I visit "/user/logout"

    Given I am logged in as "uorgmanager2" with password "civicactions"
    And I visit the last created node
    And I click "Edit"
    And I select "0" from "edit-field-registration-und-1"
    And I press the "Save" button
    And I visit "/user/logout"

    Given I am logged in as "umember2" with password "civicactions"
    And I visit the last created node
    Then I should not see the text "Interested in attending?"
    And I visit "/user/logout"

    Given I am logged in as "uorgmanager2" with password "civicactions"
    And I visit the node with title "Or2 Gr11GR"
    And I follow "Cancel Membership"
    And I press "Remove"
    Then I should see the text "Or2 Gr11GR"


  @RD-2783
  Scenario: Should not see Preview button when create an Event

    Given I am logged in as "uorgmanager2" with password "civicactions"
    And I go to create "event" content for the "Or2 Gr10OR" group
    And I should not see the CSS selector "#edit-preview"


  @RD-2280
  Scenario: Event creator notification

    Given I am logged in as "uadmin" with password "civicactions"
    And I go to "/gcmc"
    And I click "Add Event"
    And I fill in "edit-title" with "Test Event"
    And I fill in "edit-field-event-date-und-0-value-datepicker-popup-0" with "01 Mar 2020"
    And I select "open" from "edit-gn2-og-form-options"
    And I select "General" from "edit-field-event-type-und"
    And I select "online" from "edit-field-event-location-und"
    And I select the radio button "Sitewide - Can be viewed by anyone with a GlobalNET account." with the id "edit-field-gn2-simple-access-und-sitewide"
    And I select the radio button "Yes" with the id "edit-field-registration-und-1"
    And I check the box "Peace"
    And I press the "Publish" button
    And I visit "/user/logout"
    Given I am logged in as "umember1" with password "civicactions"
    And I visit the last created node
    And I click "Register for this event"
    And I visit "/user/logout"
    Given I am logged in as "uadmin" with password "civicactions"
    And I visit "/inbox/notifications"
    Then I should see the link "Test Event"


  @RD-3124
  Scenario: Event helper text

    Given I am logged in as "uorgmanager1" with password "civicactions"
    And I visit the node with title "Or1"
    And I follow "Add Event"
    Then I should see the text "date using DD MMM YYYY"
    And I should see the text "2:00PM as 14:00"


  @RD-3223
  Scenario: Course landing page don't show past events

    Given I am logged in as "uadmin" with password "civicactions"
    And I visit the system path "node/add/event?gid={node:title:Or2 Co8PU}"
    And I fill in "edit-title" with "Past Event"
    And I fill in "edit-body-und-0-value" with "Past Event"
    And I select "Open" from "edit-gn2-og-form-options"
    And I select "General" from "edit-field-event-type-und"
    And I select "online" from "edit-field-event-location-und"
    And I enter "06 Mar 2016" for "edit-field-event-date-und-0-value-datepicker-popup-0"
    And I select the radio button "Yes" with the id "edit-field-registration-und-1"
    And I check the box "Peace"
    And I select the radio button "Organization - Can be viewed by a member of the Organization." with the id "edit-field-gn2-simple-access-und-organization"
    And I press the "Publish" button
    And I visit the system path "node/add/event?gid={node:title:Or2 Co8PU}"
    And I fill in "edit-title" with "Future Event"
    And I fill in "edit-body-und-0-value" with "Future Event"
    And I select "Open" from "edit-gn2-og-form-options"
    And I select "General" from "edit-field-event-type-und"
    And I select "online" from "edit-field-event-location-und"
    And I enter "06 Mar 2020" for "edit-field-event-date-und-0-value-datepicker-popup-0"
    And I select the radio button "Yes" with the id "edit-field-registration-und-1"
    And I check the box "Peace"
    And I select the radio button "Organization - Can be viewed by a member of the Organization." with the id "edit-field-gn2-simple-access-und-organization"
    And I press the "Publish" button
    And I visit the node with title "Or2 Co8PU"
    And I should see the text "Future Event" in the "sidebar" region
    And I should not see the text "Past Event" in the "sidebar" region

