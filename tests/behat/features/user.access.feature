@api @permissions @matrix

Feature: user.access.Feature:

  As an authenticated user
  I should not be able to access admin pages
  So that I can verify I have the permissions I should have.

# These are a set of random permissions that may be contained elsewhere.
# Capturing them here as a smoke test for the time being.


  @smoke
  Scenario: Authenticated User permissions
    Given I have accepted terms and am logged in as a user with the "authenticated user" role
    When I go to "/admin"
    Then I should get a "403" HTTP response
    And I should see "We are sorry"


  Scenario: Authenticated User can see password has expired message. RD-2306

    Given I have accepted terms and am logged in as a user with the "authenticated user" role
    And my password has expired
    And I am on the homepage
    Then I should see the text "Your password has expired."


  @smoke2 @admin
  Scenario: Administrator permissions permissions_watchdog config is available to administrator.

    Given I have accepted terms and am logged in as a user with the "administrator" role
    When I visit "/admin/reports/permission_watchdog"
    Then I should see the select element 'edit-roles' containing 'anonymous user'
    And I should see the select element 'edit-roles' containing 'authenticated user'
    And I should see the select element 'edit-roles' containing 'administrator'


  @member @group @access @matrix @info
  Scenario Outline: Access user info, login history

    Given I am logged in as <user> with password <password>

    # View user login history
    And I visit the login history for <user_target>
    Then I should get a "<response>" HTTP response

    Examples:
      | user         | user_target    | response   | password          |
      | umember1     | umember1       | 404        | "civicactions"    |
  #   | uorgmanager2 | umember1       | 404        | "civicactions"    |
      | uorgmanager2 | umember2       | 200        | "civicactions"    |
      | uorgmanager1 | umember1       | 200        | "civicactions"  |
      | umember1     | umember2       | 404        | "civicactions"  |
      | uadmin       | umember1       | 200        | "civicactions"  |


  @member @group @access @info
  Scenario Outline: Access user info, can see crm field

    Given I am logged in as <user> with password <password>

    # View user edit page via system path and see crm field
    And I visit the edit profile form for <user_target>
    Then I should get a <response> HTTP response
    And I should see the text <field_label>

    # View user edit page via url alias and see crm field
    Then I visit the edit profile form for <user_target> by alias
    Then I should get a <response2> HTTP response
    And I should see the text <field_label>

    Examples:
      | user           | user_target | response    | response2      |field                              | field_label   | password         |
      | uadmin         | umember1    | 200         | 200            | "edit-field-crm-id-und-0-value"   | "crm_id"      | "civicactions" |
      | uorgmanager1   | umember1    | 200         | 200            | "edit-field-crm-id-und-0-value"   | "crm_id"      | "civicactions"   |
      | uorgmanager2   | umember2    | 200         | 200            | "edit-field-crm-id-und-0-value"   | "crm_id"      | "civicactions" |


  @member @group @access @info @kook
  Scenario Outline: Access user info, can not see crm field

    Given I am logged in as <user> with password <password>
    And I visit the edit profile form for <user_target>
    Then I should get a <response> HTTP response
    And I should not see the text <field_label>

    Then I visit the edit profile form for <user_target> by alias
    Then I should get a <response2> HTTP response
    And I should not see the text <field_label>

    Examples:
      | user           | user_target     | response   | response2      | field                             | field_label  | password         |
      | umember1       | umember2        | 403        | 403            | "edit-field-crm-id-und-0-value"   | "crm_id"     | "civicactions"   |
      | umember2       | umember1        | 403        | 403            | "edit-field-crm-id-und-0-value"   | "crm_id"     | "civicactions"   |


  Scenario: Check for org_manager nested field error on user page @RD-2862 @uorgmanager2

    Given I am logged in as "uorgmanager2" with password "civicactions"
    And I go to "/users/umember2/edit"
    Then I should not see "Undefined index: group_admin_settings in field_group_fields_nest"
    And I should not see "Notice: Trying to get property of non-object in field_group_fields_nest"

  Scenario: Authenticated users can not view poll results @RD-3381

    Given I am logged in as "umember1" with password "civicactions"
    And I visit the node with title "Or1 Co1PU Cg1PU Pl31OR"
      Then I should not see the link "Votes"
    And I am on "/node/2509/votes"
      Then I should not see the text "This table lists all the recorded votes for this poll"
      Then I should get a 403 HTTP response
      And I should see the text "We are sorry"
