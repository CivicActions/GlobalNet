@api @new @ogmembership
Feature: group.membership.feature
  Tests group membership management functions. Run time real	6m31.189s

  Scenario Outline: Administrator can remove member
    Given I am logged in as <user> with password "civicactions"
    And I go to remove the member "<name>" from <title> group
    Then I should see the button "Remove"

    Examples:
      | user     | name     | title        |
      # Course
      | "uadmin" | umember2 | "Or2 Co12GR" |
      # Group
      | "uadmin" | umember1 | "Or1 Gr5GR"  |
      # Event
      # No demo User in an Event to test


  Scenario Outline: Authenticated Member can view group members
    Given I am logged in as <user> with password "civicactions"
    And I visit the node with title <title>
    Then I should see the text <member>

    Examples:
      | user             | title        | member                 |
      # Group
      | "umember2"       | "Or2 Gr12GR" | "Ulmer Orgman Agertwo" |
      | "uorgmanager2"   | "Or2 Gr12GR" | "Uday Groupman Gerone" |
      | "ugroupmanager2" | "Or2 Gr12GR" | "Uday Groupman Gerone" |

  @javascript
  Scenario Outline: Authenticated Member can view course group members
    Given I am logged in as <user> with password "civicactions"
    And I visit the node with title <title>
    And I set browser window size to "1040" x "2500"
    And I click on the element with xpath "//a[@id='ui-id-3']"
    And I wait for AJAX to finish
    Then I should see the text <member>

    Examples:
      | user             | title       | member                 |
      # Course
      | "umember2"       | "Or2 Co9SI" | "Ulmer Orgman Agertwo" |
      | "uorgmanager2"   | "Or2 Co9SI" | "Uday Groupman Gerone" |
      | "ugroupmanager2" | "Or2 Co9SI" | "Uday Groupman Gerone" |


  Scenario Outline: Org Managers and Group Managers cannot view Block tab on create Folder page

    Given I am logged in as <user> with password "civicactions"
    And I visit the add folder form for node with title <title>
    Then I should not see the CSS selector ".vertical-tabs"

    Examples:
      | user             | title        |
      # Group
      | "uorgmanager2"   | "Or2 Gr10OR" |
      | "ugroupmanager2" | "Or2 Gr12GR" |
      # Course
      | "uorgmanager2"   | "Or2 Co9SI"  |
      | "ugroupmanager2" | "Or2 Co9SI"  |


  @javascript
  Scenario Outline: As a group manager or higher role I can enter a comma separated list to add members into a group, event or course.
    Given I am logged in as <user> with password "civicactions"
    And I visit the add bulk members form for node with title <title>
    And I enter <value> for <field>
    And I click the element with CSS selector "#edit-submit"
    When I visit the node with title <title>
    And I set browser window size to "1040" x "2500"
    And I click on the element with xpath "//a[@id='ui-id-3']"
    And I wait for AJAX to finish
    Then I should see the text <text>
    Examples:
      | user             | title       | value               | field     | text             |
      # Course
      | "uorgmanager2"   | "Or2 Co9SI" | "uadmin, umember2b" | "Members" | "Ufa Member Two" |
      | "ugroupmanager2" | "Or2 Co9SI" | "uadmin, umember2b" | "Members" | "Ufa Member Two" |


  Scenario: Blocked users are excluded from members view on /members page.
    Given I am logged in as "uadmin" with password "civicactions"
    And I visit the edit profile form for "umember1"
    And I select the radio button "Blocked" with the id "edit-status-0"
    And I click the element with CSS selector "#edit-submit--2"
    When I go to "/members"
    And I fill in "edit-search-api-views-fulltext" with "umember1"
    And I click the element with CSS selector "#edit-submit-search-member"
    Then I should not see the following "umember1"
    And I should not see the following "Umember1"
    And I visit the edit profile form for "umember1"
    And I select the radio button "Active" with the id "edit-status-1"
    And I click the element with CSS selector "#edit-submit--2"


  Scenario: User can see header text in the Manage Members report (last column) - Operations   @RD-2626

    Given I am logged in as "uadmin" with password "civicactions"
    And I go to "gcmc/group-in-gcmc"
    And I click "Manage members"
    Then I should see the text "Operations"


  Scenario: Join an Organization group @RD-2472

    Given I am logged in as "umember2" with password "civicactions"
    And I am on "or1"
    And I follow "Join organization"
    Then the url should match "or1/join"


  Scenario: Manage: Filter members @RD-2898

    Given I am logged in as "uorgmanager1" with password "civicactions"
    And I visit the node with title "Or1"
    And I follow "Manage members"
    And I select "hr_manager" from "edit-name"
    And I press "edit-submit-og-members-admin-override"
    Then I should not see the text "umember1"
    Then I should not see the text "uorgmanager1"
    Then I should see the text "uhrmanager1b"

    And I select "All" from "edit-name"
    And I press "edit-submit-og-members-admin-override"
    Then I should see the text "umember1"
    Then I should see the text "uorgmanager1"
    Then I should see the text "uhrmanager1b"

