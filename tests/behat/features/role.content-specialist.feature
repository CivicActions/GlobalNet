@api
Feature: role.content-specialist.feature

  Scenario: Create Content Specialist account

    Given I am logged in as "uadmin" with password "civicactions"
    And I visit the system path "admin/people/create"
    And I enter "content.specialist@test.com" for "edit-mail"
    And I enter "Content" for "edit-field-name-first-und-0-value"
    And I enter "Specialist" for "edit-field-name-last-und-0-value"
    And I press "Create new account"
    Then I visit the system path "/admin/people"
    And I follow "content.specialist"
    And I follow "Edit"
    And I follow "Change password »"
    And I enter "CivicActions3#" for "edit-pass-pass1"
    And I enter "CivicActions3#" for "edit-pass-pass2"
    And I press "Save"
    And I visit the node with title "George C. Marshall Center"
    And I follow "Add Members"
    And I enter "content.specialist" for "edit-name"
    And I check the box "Content Specialist"
    And I press "Add users"
    And I visit the system path "/user/logout"


  Scenario: Organization links for Content Specialist

    Given I am logged in as "content.specialist" with password "CivicActions3#"
    And I visit the node with title "George C. Marshall Center"
    Then I should see the text "Add Announcement"
    And I should see the text "Add Event"
    And I should see the text "Add News"
    And I should see the text "Add Post"
    And I should see the text "Add Publication"
    And I should see the text "Add Folder"


  Scenario: Content Specialists can create public organization announcements

    Given I am logged in as "content.specialist" with password "CivicActions3#"
    And I go to create "announcement" content for the "George C. Marshall Center" group
    And I fill in "edit-title" with "Content Specialist Org Announcement"
    And I fill in "edit-body-und-0-value" with "Content Specialist Org Announcement"
    And I check the box "Peace"
    And I select the radio button "Public - Can be viewed by anyone on the World Wide Web." with the id "edit-field-gn2-simple-access-und-public"
    And I press the "Save" button
    And I should see the text "has been created"


  Scenario: Content Specialists can create public organization posts

    Given I am logged in as "content.specialist" with password "CivicActions3#"
    And I go to create "post" content for the "George C. Marshall Center" group
    And I fill in "edit-title" with "Content Specialist Org Post"
    And I fill in "edit-body-und-0-value" with "Content Specialist Org Post"
    And I check the box "Peace"
    And I select the radio button "Public - Can be viewed by anyone on the World Wide Web." with the id "edit-field-gn2-simple-access-und-public"
    And I press the "Save" button
    And I should see the text "has been created"


  Scenario: Content Specialists can create public organization events

    Given I am logged in as "content.specialist" with password "CivicActions3#"
    And I go to create "event" content for the "George C. Marshall Center" group
    And I fill in "edit-title" with "Content Specialist Org Event"
    And I fill in "edit-body-und-0-value" with "Content Specialist Org Event"
    And I select "Open" from "edit-gn2-og-form-options"
    And I select "General" from "edit-field-event-type-und"
    And I select "online" from "edit-field-event-location-und"
    And I enter "06 Mar 2020" for "edit-field-event-date-und-0-value-datepicker-popup-0"
    And I select the radio button "Yes" with the id "edit-field-registration-und-1"
    And I check the box "Peace"
    And I select the radio button "Public - Can be viewed by anyone on the World Wide Web." with the id "edit-field-gn2-simple-access-und-public"
    And I press the "Save" button
    And I should see the text "has been created"


  Scenario: Content Specialists can create public organization news

    Given I am logged in as "content.specialist" with password "CivicActions3#"
    And I go to create "news" content for the "George C. Marshall Center" group
    And I fill in "edit-title" with "Content Specialist Org News"
    And I fill in "edit-body-und-0-value" with "Content Specialist Org News"
    And I check the box "Peace"
    And I select the radio button "Public - Can be viewed by anyone on the World Wide Web." with the id "edit-field-gn2-simple-access-und-public"
    And I press the "Save" button
    And I should see the text "has been created"


  Scenario: Content Specialists can create public organization publications

    Given I am logged in as "content.specialist" with password "CivicActions3#"
    And I go to create "publication" content for the "George C. Marshall Center" group
    And I fill in "edit-title" with "Content Specialist Org Publication"
    And I fill in "edit-body-und-0-value" with "Content Specialist Org Publication"
    And I check the box "Peace"
    And I select the radio button "Public - Can be viewed by anyone on the World Wide Web." with the id "edit-field-gn2-simple-access-und-public"
    And I press the "Save" button
    And I should see the text "has been created"


  Scenario: Group links for Content Specialist

    Given I am logged in as "content.specialist" with password "CivicActions3#"
    And I visit "gcmc/group-in-gcmc"
    And I press "Manage group"
    Then I should see the text "You have been granted content specialist access for this group."
    And I should see the text "Add Announcement"
    And I should see the text "Add Event"
    And I should see the text "Add News"
    And I should see the text "Add Post"
    And I should see the text "Add Publication"
    And I should see the text "Add Folder"


  Scenario: Content Specialists can create public group announcements

    Given I am logged in as "content.specialist" with password "CivicActions3#"
    And I go to create "announcement" content for the "A group in GCMC" group
    And I fill in "edit-title" with "Content Specialist Group Announcement"
    And I fill in "edit-body-und-0-value" with "Content Specialist Group Announcement"
    And I check the box "Peace"
    And I select the radio button "Public - Can be viewed by anyone on the World Wide Web." with the id "edit-field-gn2-simple-access-und-public"
    And I press the "Save" button
    And I should see the text "has been created"


  Scenario: Content Specialists can create public group posts

    Given I am logged in as "content.specialist" with password "CivicActions3#"
    And I go to create "post" content for the "A group in GCMC" group
    And I fill in "edit-title" with "Content Specialist Group Post"
    And I fill in "edit-body-und-0-value" with "Content Specialist Group Post"
    And I check the box "Peace"
    And I select the radio button "Public - Can be viewed by anyone on the World Wide Web." with the id "edit-field-gn2-simple-access-und-public"
    And I press the "Save" button
    And I should see the text "has been created"


  Scenario: Content Specialists can create public group events

    Given I am logged in as "content.specialist" with password "CivicActions3#"
    And I go to create "event" content for the "A group in GCMC" group
    And I fill in "edit-title" with "Content Specialist Group Event"
    And I fill in "edit-body-und-0-value" with "Content Specialist Group Event"
    And I select "Open" from "edit-gn2-og-form-options"
    And I select "General" from "edit-field-event-type-und"
    And I select "online" from "edit-field-event-location-und"
    And I enter "06 Mar 2020" for "edit-field-event-date-und-0-value-datepicker-popup-0"
    And I select the radio button "Yes" with the id "edit-field-registration-und-1"
    And I check the box "Peace"
    And I select the radio button "Public - Can be viewed by anyone on the World Wide Web." with the id "edit-field-gn2-simple-access-und-public"
    And I press the "Save" button
    And I should see the text "has been created"


  Scenario: Content Specialists can create public group news

    Given I am logged in as "content.specialist" with password "CivicActions3#"
    And I go to create "news" content for the "A group in GCMC" group
    And I fill in "edit-title" with "Content Specialist Group News"
    And I fill in "edit-body-und-0-value" with "Content Specialist Group News"
    And I check the box "Peace"
    And I select the radio button "Public - Can be viewed by anyone on the World Wide Web." with the id "edit-field-gn2-simple-access-und-public"
    And I press the "Save" button
    And I should see the text "has been created"


  Scenario: Content Specialists can create public group publications

    Given I am logged in as "content.specialist" with password "CivicActions3#"
    And I go to create "publication" content for the "A group in GCMC" group
    And I fill in "edit-title" with "Content Specialist Group Publication"
    And I fill in "edit-body-und-0-value" with "Content Specialist Group Publication"
    And I check the box "Peace"
    And I select the radio button "Public - Can be viewed by anyone on the World Wide Web." with the id "edit-field-gn2-simple-access-und-public"
    And I press the "Save" button
    And I should see the text "has been created"


  Scenario: Course links for Content Specialist

    Given I am logged in as "content.specialist" with password "CivicActions3#"
    And I visit the node with title "Course with New Sessions"
    And I press "Manage course"
    Then I should see the text "You have been granted content specialist access for this group."
    And I should see the text "Add Announcement"
    And I should see the text "Add Event"
    And I should see the text "Add News"
    And I should see the text "Add Post"
    And I should see the text "Add Publication"
    And I should see the text "Add Folder"


  Scenario: Content Specialists can create public course announcements

    Given I am logged in as "content.specialist" with password "CivicActions3#"
    And I go to create "announcement" content for the "Course with New Sessions" group
    And I fill in "edit-title" with "Content Specialist Course Announcement"
    And I fill in "edit-body-und-0-value" with "Content Specialist Course Announcement"
    And I check the box "Peace"
    And I select the radio button "Public - Can be viewed by anyone on the World Wide Web." with the id "edit-field-gn2-simple-access-und-public"
    And I press the "Save" button
    And I should see the text "has been created"


  Scenario: Content Specialists can create public course posts

    Given I am logged in as "content.specialist" with password "CivicActions3#"
    And I go to create "post" content for the "Course with New Sessions" group
    And I fill in "edit-title" with "Content Specialist Course Post"
    And I fill in "edit-body-und-0-value" with "Content Specialist Course Post"
    And I check the box "Peace"
    And I select the radio button "Public - Can be viewed by anyone on the World Wide Web." with the id "edit-field-gn2-simple-access-und-public"
    And I press the "Save" button
    And I should see the text "has been created"


  Scenario: Content Specialists can create public course events

    Given I am logged in as "content.specialist" with password "CivicActions3#"
    And I go to create "event" content for the "Course with New Sessions" group
    And I fill in "edit-title" with "Content Specialist Course Event"
    And I fill in "edit-body-und-0-value" with "Content Specialist Course Event"
    And I select "Open" from "edit-gn2-og-form-options"
    And I select "General" from "edit-field-event-type-und"
    And I select "online" from "edit-field-event-location-und"
    And I enter "06 Mar 2020" for "edit-field-event-date-und-0-value-datepicker-popup-0"
    And I select the radio button "Yes" with the id "edit-field-registration-und-1"
    And I check the box "Peace"
    And I select the radio button "Public - Can be viewed by anyone on the World Wide Web." with the id "edit-field-gn2-simple-access-und-public"
    And I press the "Save" button
    And I should see the text "has been created"


  Scenario: Content Specialists can create public course news

    Given I am logged in as "content.specialist" with password "CivicActions3#"
    And I go to create "news" content for the "Course with New Sessions" group
    And I fill in "edit-title" with "Content Specialist Course News"
    And I fill in "edit-body-und-0-value" with "Content Specialist Course News"
    And I check the box "Peace"
    And I select the radio button "Public - Can be viewed by anyone on the World Wide Web." with the id "edit-field-gn2-simple-access-und-public"
    And I press the "Save" button
    And I should see the text "has been created"


  Scenario: Content Specialists can create public course publications

    Given I am logged in as "content.specialist" with password "CivicActions3#"
    And I go to create "publication" content for the "Course with New Sessions" group
    And I fill in "edit-title" with "Content Specialist Course Publication"
    And I fill in "edit-body-und-0-value" with "Content Specialist Course Publication"
    And I check the box "Peace"
    And I select the radio button "Public - Can be viewed by anyone on the World Wide Web." with the id "edit-field-gn2-simple-access-und-public"
    And I press the "Save" button
    And I should see the text "has been created"
    And I am logged out


  Scenario: Course Group links for Content Specialist

    Given I am logged in as "uadmin" with password "civicactions"
    And I go to create "course-group" content for the "Course with New Sessions" group
    And I fill in "edit-title" with "Course With Sessions Course Group"
    And I fill in "edit-body-und-0-value" with "Course With Sessions Course Group"
    And I check the box "Peace"
    And I select the radio button "Public - Can be viewed by anyone on the World Wide Web." with the id "edit-field-gn2-simple-access-und-public"
    And I select "open" from "edit-gn2-og-form-options"
    And I press the "Publish" button
    And I should see the text "has been created"
    And I am logged out
    And I am logged in as "content.specialist" with password "CivicActions3#"
    And I visit the last created node
    And I press "Manage course group"
    Then I should see the text "You have been granted content specialist access for this group."
    And I should see the text "Add Announcement"
    And I should see the text "Add Event"
    And I should see the text "Add Post"
    And I should see the text "Add Folder"


  Scenario: Content Specialists can create public course group announcements

    Given I am logged in as "content.specialist" with password "CivicActions3#"
    And I go to create "announcement" content for the "Course With Sessions Course Group" group
    And I fill in "edit-title" with "Content Specialist Course Group Announcement"
    And I fill in "edit-body-und-0-value" with "Content Specialist Course Group Announcement"
    And I check the box "Peace"
    And I select the radio button "Public - Can be viewed by anyone on the World Wide Web." with the id "edit-field-gn2-simple-access-und-public"
    And I press the "Save" button
    And I should see the text "has been created"


  Scenario: Content Specialists can create public course group posts

    Given I am logged in as "content.specialist" with password "CivicActions3#"
    And I go to create "post" content for the "Course With Sessions Course Group" group
    And I fill in "edit-title" with "Content Specialist Course Group Post"
    And I fill in "edit-body-und-0-value" with "Content Specialist Course Group Post"
    And I check the box "Peace"
    And I select the radio button "Public - Can be viewed by anyone on the World Wide Web." with the id "edit-field-gn2-simple-access-und-public"
    And I press the "Save" button
    And I should see the text "has been created"


  Scenario: Content Specialists can create public course group events

    Given I am logged in as "content.specialist" with password "CivicActions3#"
    And I go to create "event" content for the "Course With Sessions Course Group" group
    And I fill in "edit-title" with "Content Specialist Course Group Event"
    And I fill in "edit-body-und-0-value" with "Content Specialist Course Group Event"
    And I select "Open" from "edit-gn2-og-form-options"
    And I select "General" from "edit-field-event-type-und"
    And I select "online" from "edit-field-event-location-und"
    And I enter "06 Mar 2020" for "edit-field-event-date-und-0-value-datepicker-popup-0"
    And I select the radio button "Yes" with the id "edit-field-registration-und-1"
    And I check the box "Peace"
    And I select the radio button "Public - Can be viewed by anyone on the World Wide Web." with the id "edit-field-gn2-simple-access-und-public"
    And I press the "Save" button
    And I should see the text "has been created"


  Scenario: Event links for Content Specialist

    Given I am logged in as "uadmin" with password "civicactions"
    And I go to create "event" content for the "George C. Marshall Center" group
    And I fill in "edit-title" with "Content Specialist Event"
    And I fill in "edit-body-und-0-value" with "Content Specialist Event"
    And I select "Open" from "edit-gn2-og-form-options"
    And I select "General" from "edit-field-event-type-und"
    And I select "online" from "edit-field-event-location-und"
    And I enter "06 Mar 2020" for "edit-field-event-date-und-0-value-datepicker-popup-0"
    And I select the radio button "Yes" with the id "edit-field-registration-und-1"
    And I check the box "Peace"
    And I select the radio button "Public - Can be viewed by anyone on the World Wide Web." with the id "edit-field-gn2-simple-access-und-public"
    And I press the "Publish" button
    And I should see the text "has been created"
    And I am logged out
    And I am logged in as "content.specialist" with password "CivicActions3#"
    And I visit the last created node
    And I press "Manage event"
    Then I should see the text "You have been granted content specialist access for this group."
    And I should see the text "Add Announcement"
    And I should see the text "Add News"
    And I should see the text "Add Post"
    And I should see the text "Add Publication"


  Scenario: Content Specialists can create public event announcements

    Given I am logged in as "content.specialist" with password "CivicActions3#"
    And I go to create "announcement" content for the "Content Specialist Event" group
    And I fill in "edit-title" with "Content Specialist Event Announcement"
    And I fill in "edit-body-und-0-value" with "Content Specialist Event Announcement"
    And I check the box "Peace"
    And I select the radio button "Public - Can be viewed by anyone on the World Wide Web." with the id "edit-field-gn2-simple-access-und-public"
    And I press the "Save" button
    And I should see the text "has been created"


  Scenario: Content Specialists can create public event posts

    Given I am logged in as "content.specialist" with password "CivicActions3#"
    And I go to create "post" content for the "Content Specialist Event" group
    And I fill in "edit-title" with "Content Specialist Event Post"
    And I fill in "edit-body-und-0-value" with "Content Specialist Event Post"
    And I check the box "Peace"
    And I select the radio button "Public - Can be viewed by anyone on the World Wide Web." with the id "edit-field-gn2-simple-access-und-public"
    And I press the "Save" button
    And I should see the text "has been created"


  Scenario: Content Specialists can create public event news

    Given I am logged in as "content.specialist" with password "CivicActions3#"
    And I go to create "news" content for the "Content Specialist Event" group
    And I fill in "edit-title" with "Content Specialist Event News"
    And I fill in "edit-body-und-0-value" with "Content Specialist Event News"
    And I check the box "Peace"
    And I select the radio button "Public - Can be viewed by anyone on the World Wide Web." with the id "edit-field-gn2-simple-access-und-public"
    And I press the "Save" button
    And I should see the text "has been created"


  Scenario: Content Specialists can create public event publications

    Given I am logged in as "content.specialist" with password "CivicActions3#"
    And I go to create "publication" content for the "Content Specialist Event" group
    And I fill in "edit-title" with "Content Specialist Event Publication"
    And I fill in "edit-body-und-0-value" with "Content Specialist Event Publication"
    And I check the box "Peace"
    And I select the radio button "Public - Can be viewed by anyone on the World Wide Web." with the id "edit-field-gn2-simple-access-und-public"
    And I press the "Save" button
    And I should see the text "has been created"
    And I am logged out


Scenario: Custom landing page links for Content Specialist

    Given I am logged in as "uadmin" with password "civicactions"
    And I go to create "program" content for the "George C. Marshall Center" group
    And I fill in "edit-title" with "Content Specialist Landing Page"
    And I fill in "edit-body-und-0-value" with "Content Specialist Landing Page"
    And I select "Open" from "edit-gn2-og-form-options"
    And I select the radio button "Public - Can be viewed by anyone on the World Wide Web." with the id "edit-field-gn2-simple-access-und-public"
    And I press the "Publish" button
    And I should see the text "has been created"
    And I am logged out
    And I am logged in as "content.specialist" with password "CivicActions3#"
    And I visit the last created node
    And I press "Manage program"
    Then I should see the text "You have been granted content specialist access for this group."
    And I should see the text "Add Announcement"
    And I should see the text "Add Event"
    And I should see the text "Add News"
    And I should see the text "Add Publication"


  Scenario: Content Specialists can create public landing page announcements

    Given I am logged in as "content.specialist" with password "CivicActions3#"
    And I go to create "announcement" content for the "Content Specialist Landing Page" group
    And I fill in "edit-title" with "Content Specialist LP Announcement"
    And I fill in "edit-body-und-0-value" with "Content Specialist LP Announcement"
    And I check the box "Peace"
    And I select the radio button "Public - Can be viewed by anyone on the World Wide Web." with the id "edit-field-gn2-simple-access-und-public"
    And I press the "Save" button
    And I should see the text "has been created"


  Scenario: Content Specialists can create public landing page events

    Given I am logged in as "content.specialist" with password "CivicActions3#"
    And I go to create "event" content for the "Content Specialist Landing Page" group
    And I fill in "edit-title" with "Content Specialist LP Event"
    And I fill in "edit-body-und-0-value" with "Content Specialist LP Event"
    And I select "Open" from "edit-gn2-og-form-options"
    And I select "General" from "edit-field-event-type-und"
    And I select "online" from "edit-field-event-location-und"
    And I enter "06 Mar 2020" for "edit-field-event-date-und-0-value-datepicker-popup-0"
    And I select the radio button "Yes" with the id "edit-field-registration-und-1"
    And I check the box "Peace"
    And I select the radio button "Public - Can be viewed by anyone on the World Wide Web." with the id "edit-field-gn2-simple-access-und-public"
    And I press the "Save" button
    And I should see the text "has been created"


  Scenario: Content Specialists can create public landing page news

    Given I am logged in as "content.specialist" with password "CivicActions3#"
    And I go to create "news" content for the "Content Specialist Landing Page" group
    And I fill in "edit-title" with "Content Specialist LP News"
    And I fill in "edit-body-und-0-value" with "Content Specialist LP News"
    And I check the box "Peace"
    And I select the radio button "Public - Can be viewed by anyone on the World Wide Web." with the id "edit-field-gn2-simple-access-und-public"
    And I press the "Save" button
    And I should see the text "has been created"


  Scenario: Content Specialists can create public landing page publications

    Given I am logged in as "content.specialist" with password "CivicActions3#"
    And I go to create "publication" content for the "Content Specialist Landing Page" group
    And I fill in "edit-title" with "Content Specialist LP Publication"
    And I fill in "edit-body-und-0-value" with "Content Specialist LP Publication"
    And I check the box "Peace"
    And I select the radio button "Public - Can be viewed by anyone on the World Wide Web." with the id "edit-field-gn2-simple-access-und-public"
    And I press the "Save" button
    And I should see the text "has been created"

