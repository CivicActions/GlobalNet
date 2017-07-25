@api @WIP
Feature: OT Permission Matrix Test
  In order to verify that permissions work
  verify that Administrators and Organization Managers
  can see and apply permissions to content
  @wip
  Scenario: Administrators can create organizations
            and Organization Managers can create groups, courses,
            events, and posts at all permissions levels

    Given set content creation mode as "default"
    And set the title token as "CA2GOV-"
    And load the background users:
      | user           |
      | uorgmanager1   |
      | ugroupmanager1 |
      | umember1       |
      | umember1b      |
    Then load the permissions matrix
    Given I am logged in as "uadmin" with password "civicactions"
    Then I load the background data for:
      | type         |
      | organization |
    Then I am logged out
    And load the background users:
      | user           |
      | ugroupmanager1 |
      | umember1       |
      | umember1b      |
    Given I am logged in as "uorgmanager1" with password "civicactions"
    Then I load the background data for:
      | type   |
      | group  |
      | course |
      | event  |
      | post   |
