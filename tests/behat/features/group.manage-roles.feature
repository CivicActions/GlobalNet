@api @new @ogroles
Feature: Og roles
  Users are eligible for different roles.

  @authenticated @og_feature @og_addmember @og_removemember @orgmanager @eligible
  Scenario Outline: Org_managers can promote users to group_manager
  but org_managers cannot promote users to org_manager.
    Given I am logged in as <user> with password "civicactions"
    And I visit the add people form for node with title <title>
    Then I see the text "group_manager"
    But I should not see the text "org_manager"

    Examples:
      | user           | title                                  |
      | "uorgmanager2" | "Or2 Gr12GR"                           |


  @authenticated @og_feature @og_addmember @og_removemember @groupmanager
  Scenario Outline: Are eligible for group_manager role
  Group_manager can add a user who is not part of the organization
    Given I am logged in as <user> with password "civicactions"
    And I visit the add people form for node with title <title>
    And I fill in "edit-name" with <name>
    And I check the box <roles_select>
    And I press the "Add users" button
    And I go to remove the member <name> from <title> group
    And I press the "Remove" button
    Then I should see the text "The membership was removed"

    Examples:
      | user                | name                   | roles_select      | title                    |
      | "uadmin"            | "qa-admin"             | "edit-roles-18"   | "Or2 Gr12GR"             |
      | "uadmin"            | "umember1"             | "edit-roles-18"   | "Or2 Gr12GR"             |
      | "uadmin"            | "ugroupmanager1"       | "edit-roles-18"   | "Or2 Gr12GR"             |
      | "uadmin"            | "uorgmanager1"         | "edit-roles-18"   | "Or2 Gr12GR"             |
      # Group manager can promote/demote a member in subgroup
      # RD-1082 Group_manager can add a user who is not part of the organization
      | "ugroupmanager2"    | "umember1"             | "edit-roles-18"   | "Or2 Gr12GR"             |
      | "ugroupmanager1b"   | "umember2"             | "edit-roles-20"   | "Or1 Gr1PU Co18GR"       |
      # creates groups and assigns the Group Manager (which is how top-level groups are formed)
      | "uorgmanager1"      | "ugroupmanager2"       | "edit-roles-20"   | "Or1 Gr1PU Co19GR"        |
      | "uorgmanager2"      | "ugroupmanager1"       | "edit-roles-18"   | "Or2 Gr12GR"             |

  @authenticated @og_feature @orgmanager @member
  Scenario Outline: Org manager can change a member role
    Given I am logged in as <user> with password "civicactions"
    And I go to edit the member <name> in <title> group
    And I uncheck the box <roles>
    And I press the "Update membership" button
    And I go to edit the member <name> in <title> group
    And I check the box "edit-roles-18"
    And I press the "Update membership" button
    Then I should see the text "has been updated"
    Examples:
      | user           | name             | roles                | title                       |
      | "uorgmanager2" | "ugroupmanager2" | "edit-roles-18"      | "Or2 Gr12GR"                |
