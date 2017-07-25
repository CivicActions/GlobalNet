@api @view @common
Feature: Viewing Content



  @administrator @groupmanager @orgmanager @member @content @group
  Scenario Outline: Administrators, Members, Group Managers, and Org Manager
  can view content marked as "Group" in "Simple Access".
    Given I am logged in as <user> with password "civicactions"
    And I visit the node with title <title>
    Then I should get a 200 HTTP response
    Examples:
      | user               | title                    |
      | umember1           | "Or1 Co1PU Po27GR" |
      | ugroupmanager1     | "Or1 Gr6PR"  |
      | ugroupmanager2     | "Or2 Ev11GR" |

  @nonmember @content @group @authenticated
    # check me
  Scenario: Non-members of a group cannot view its content.
    Given I am logged in as "umember2" with password "civicactions"
    # Post
    And I visit the node with title "Or1 Gr1PU Po18GR"
    Then I should get a 403 HTTP response
    # Publication
    And I visit the node with title "Or1 Pg1PU Pu26GR"
    Then I should get a 403 HTTP response
    # News
    And I visit the node with title "Or1 Pg1PU Ne28PR"
    Then I should get a 403 HTTP response

  @orgmanager @simpleaccess @content @group
  Scenario: Organization managers can view content and groups in their organization.
    Given I am logged in as "uorgmanager1" with password "civicactions"
    # Course
    And I visit the node with title "Or1 Gr1PU Co19GR"
    Then I should get a 200 HTTP response
    # Event
    And I visit the node with title "Or1 Gr1PU Ev21PR"
    Then I should get a 200 HTTP response
    # Group
    And I visit the node with title "Or1 Gr3OR"
    Then I should get a 200 HTTP response
    # News
    And I visit the node with title "Or1 Pg1PU Ne23SI"
    Then I should get a 200 HTTP response
    # Post
    And I visit the node with title "Or1 Co1PU Po27GR"
    Then I should get a 200 HTTP response
    # Publication
    And I visit the node with title "Or1 Pg1PU Pu26GR"
    Then I should get a 200 HTTP response

