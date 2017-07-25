@api
Feature: manager.dashboard.feature
  Test Org and HR Manager access to the Organization dashboard.

  NOTE: THERE ARE SOME TESTS IN OTHER FEATURES THAT NEED TO BE MOVED HERE

  @hrmanager @dashboard
  Scenario: HR Manager should be able to access new account request form submissions @RD-3376

    Given I am logged in as "uhrmanager1b" with password "civicactions"
    And I visit the node with title "Or1"
    And I follow "Manage"
    And I follow "View Account Requests"
    Then I should get a 200 HTTP response

  @hrmanager @dashboard
  Scenario: HR Manager should not be able to find a group ID @RD-3376

    Given I am logged in as "uhrmanager1b" with password "civicactions"
    And I visit the node with title "Or1"
    And I follow "Manage"
    And I should not see "Get Group Information"

  @hrmanager @orgmanager @dashboard
  Scenario Outline: HR Manager and Org manager should be able see View Form Submissions link; RD-3420

    Given I am logged in as <user> with password "civicactions"
    And I visit the node with title "Or1"
    And I follow "Manage"
    And I should see "View Form Submissions"
    Examples:
    |user         |
    |uorgmanager1 |
    |uhrmanager1b |

  @orgmanager @dashboard
  Scenario Outline: Org manager should be able see Revision Date in Manage Content page; RD-3450

    Given I am logged in as <user> with password "civicactions"
    And I visit the node with title "Or1"
    And I follow "Manage"
    And I click "Manage Content"
    And I should see "Has new content"
    Examples:
    |user         |
    |uorgmanager1 |