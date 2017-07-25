@api @edit @ot @ot3 @WIP
Feature: Content creation

  @member @group @wip
  Scenario Outline: Content creation by various users on site

    Then I am logged in as <user2> with password <password>

    Then I click "My GlobalNET"

    Then I should see the text "GROUPS"
    And I should see the text "COURSES"
    And I should see the text "CONTACTS"
    And I should see the text "POSTS"
    And I should see the text "EVENTS"
    And I should see the text "FAVORITES"
    And I should see the text "ACTIVITY"
    And I should see the text "POLLS"

    # Groups: View
    And I click "Groups"
    Then I click "Or1 Gr4GR"
    And I should see the text "You are the group manager"

    # Groups: Add group
    Then I create a "group" node with title "CA2GOV-Some Alternative Group in Or1" on "Or1 Gr4GR" with membership "Open" and privacy "Group"

    # Groups: Add user
    Then I add users to the "CA2GOV-Some Alternative Group in Or1" group:
    | user      |
    | umember1  |
    | umember1b |

    # Groups: Messages, send
    Then I click "My GlobalNET"
    Then I click "CA2GOV-Some Alternative Group in Or1"
    And I should see the text "You are the group manager"
    And I should see the text "Group Admin Menu"
    Then I click "Send message"
    Then I should see the text "Write new message"
    # This field below should be filled in automatically with correct Group
    #And I fill in "edit-recipient" with "CA2GOV-Some Alternative Group in Or1"
    And I fill in "edit-subject" with "Special Unique Blast to Group"
    And I fill in "edit-body-value" with "Group blast text"
    Then I press "edit-submit"
    And I click on the element with xpath "//a[contains(text(), 'Messages (')]"

    # Groups: Messages, confirm receipt by sender
    Then I click "My GlobalNET"
    And I click on the element with xpath "//a[contains(@href,'/inbox/messages')]"
    And I click on the element with xpath "//a[contains(text(), 'Messages (')]"

    # Groups: Messages, confirm receipt by group member
    And I click on the element with xpath "//a[contains(@href,'/user/logout')]"
    Given I am logged in as <user> with password <password>
    Then I click "My GlobalNET"
    And I click on the element with xpath "//a[contains(@href,'/inbox/messages')]"
    And I click on the element with xpath "//a[contains(text(), 'Messages (')]"
    And I click on the element with xpath "//a[contains(@href,'/user/logout')]"

    #Groups: Event, add
    Given I am logged in as <user2> with password <password>
    Then I create a "event" node with title "CA2GOV-New Open Group Event" on "CA2GOV-Some Alternative Group in Or1" with membership "Open" and privacy "Organization"

    # Groups: Event, confirm by creator
    Then I click "My GlobalNET"
    Then I click "CA2GOV-Some Alternative Group in Or1"
    And I should see the text "Group Admin Menu"
    And I should see the heading "Upcoming Events"
    And I should see the link "CA2GOV-New Open Group Event"
    Then I click "CA2GOV-New Open Group Event"
    Then I should see the text "Meeting: CA2GOV-New Open Group Event"
    And I click on the element with xpath "//a[contains(@href,'/user/logout')]"

    # Groups: Event, confirm by member
    Given I am logged in as <user> with password <password>
    Then I click "My GlobalNET"
    Then I click "CA2GOV-Some Alternative Group in Or1"
    And I should see the heading "Upcoming Events"
    And I should see the link "CA2GOV-New Open Group Event"
    Then I click "CA2GOV-New Open Group Event"
    Then I should see the text "Meeting: CA2GOV-New Open Group Event"
    And I should see the heading "Interested in attending?"
    And I click "Register for this event"
    And I wait for 2 seconds
    Then I should see the text "You are a participant in this event" in the "sidebar" region
    And I click "leave here"
    Then I should see the text "Meeting: CA2GOV-New Open Group Event"
    And I should see the heading "Interested in attending?"
    And I click "Register for this event"

    # Groups: Event, search
    Then I run drush "search-api-index"
    Then I click "My GlobalNET"
    Then I click "Events"
    And I should see the link "CA2GOV-New Open Group Event"
    And I click "Find More Events"
    Then I should see the text "Looking for GlobalNET members?"
    And I should see the text "Refine by"
    And I follow the href on the link element with xpath "//a[contains(@href,'/or1')]"
    And I click on the element with xpath "//a[contains(@href,'/or1/or1-gr4gr/ca2gov-some-alternative-group-in-or1/ca2gov-new-open-group-event')]"
    And I click on the element with xpath "//a[contains(@href,'/user/logout')]"

    #Groups: Poll, add
    Given I am logged in as <user2> with password <password>
    Then I create a "poll" node with title "CA2GOV-New Poll for Group" on "CA2GOV-Some Alternative Group in Or1" with membership "Open" and privacy "Group"

    # Groups: Poll, confirm by creator
    Then I click "My GlobalNET"
    Then I click "CA2GOV-Some Alternative Group in Or1"
    And I should see the text "Group Admin Menu"
    And I should see the heading "Poll"
    And I should see the link "CA2GOV-New Poll for Group"
    And I select the radio button "Use the faster method"
    Then I press "edit-vote"
    Then I should see the text "Your vote was recorded"
    And I click on the element with xpath "//a[contains(@href,'/user/logout')]"

    # Groups: Poll, confirm by member
    Given I am logged in as <user> with password <password>
    Then I click "My GlobalNET"
    Then I click "CA2GOV-Some Alternative Group in Or1"
    And I should see the heading "Poll"
    And I should see the link "CA2GOV-New Poll for Group"
    Then I press "edit-vote"
    Then I should see the text "Your vote could not be recorded because you did not select any of the choices."
    And I should see the heading "Poll"
    And I should see the link "CA2GOV-New Poll for Group"
    And I select the radio button "Use the easier method"
    Then I press "edit-vote"
    Then I should see the text "Your vote was recorded"
    And I click on the element with xpath "//a[contains(@href,'/user/logout')]"

    #Groups: Announcement, add
    Given I am logged in as <user2> with password <password>
    Then I create a "announcement" node with title "CA2GOV-New Group Announcement" on "CA2GOV-Some Alternative Group in Or1" with membership "Open" and privacy "Organization"
    And I should see the text "CA2GOV-New Group Announcement"
    And I should see the heading "Topics"
    And I should see the link "Leadership"
    And I should see the heading "Associated Countries & Regions"
    And I should see the link "Western Europe"

    # Groups: Announcement, confirm by creator
    Then I click "My GlobalNET"
    Then I click "CA2GOV-Some Alternative Group in Or1"
    And I should see the text "Group Admin Menu"
    And I should see the heading "ANNOUNCEMENTS"
    And I should see the link "CA2GOV-New Group Announcement"
    And I click on the element with xpath "//a[contains(@href,'/user/logout')]"

    # Groups: Announcement, confirm by member
    Given I am logged in as <user> with password <password>
    Then I click "My GlobalNET"
    Then I click "CA2GOV-Some Alternative Group in Or1"
    And I should see the heading "ANNOUNCEMENTS"
    And I should see the link "CA2GOV-New Group Announcement"

    # Groups: Search all content
    Then I run drush "search-api-index"
    And I fill in "edit-search" with "Events"
    And I visit "/search?search_api_views_fulltext=Events"
    And the "edit-search-api-views-fulltext" field should contain "Events"
    And I should see the text "Refine by"
    And I follow the href on the link element with xpath "//a[contains(text(), 'English (')]"
    And I click on the element with xpath "//a[contains(@href,'/or1/or1-gr4gr/ca2gov-some-alternative-group-in-or1/ca2gov-new-open-group-event')]"


    Examples:
      | user     | user2          | user3     | password       |
      | umember1 | ugroupmanager1 | umember1b | "civicactions" |
