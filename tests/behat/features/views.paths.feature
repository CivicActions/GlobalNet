@api
Feature: Testing user access for paths created in Views

  @groupmanager @member @admin @RD-3343
  Scenario Outline: Only Group Managers and Admins should be able to access Entityform submissions
    Given I am logged in as <user> with password "civicactions"
    And I visit the system path "/form-submissions/2301/list"
    Then I should get a <response> HTTP response
    Examples:
      | user              | response  |
      | "ugroupmanager1"  | 200       |
      | "umember1"        | 403       |
      | "uadmin"          | 200       |
      | "ugroupmanager2"  | 403       |

  @anonymouse @RD-3343
  Scenario: Anonymouse users shouldn't be able to access Entityform submissions
    Given I am not logged in
    And I visit the system path "/form-submissions/2301/list"
    Then I should get a 403 HTTP response
