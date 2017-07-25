@api @new @edituserprofile @user
Feature: user.profile.edit.feature

  @new @editexternalcrm
  Scenario Outline: Edit the RCPAMS User ID field in the user profile
    Given I am logged in as <user> with password "civicactions"
    And I visit the edit profile form for user <user> with open tab <tab>
    Then I should get a 200 HTTP response
    And I should see the CSS selector "#edit-field-crm-source"
    And I should see the CSS selector "#edit-field-crm-id"
    Examples:
      | user             | tab |
      | uorgmanager2     | password |
      | uorgmanager1     | password |

  @new @editexternalcrm
  Scenario Outline: Edit the RCPAMS User ID field in the user profile
    Given I am logged in as <user> with password "civicactions"
    And I am at <path>
    Then I should get a 200 HTTP response
    And I should not see the CSS selector "#edit-field-crm-source-und-0-value"
    And I should not see the CSS selector "#edit-field-crm-id-und-0-value"
    Examples:
      | user               | path                          |
      | umember2           | "users/umember2/edit"         |
      | ugroupmanager1     | "users/ugroupmanager1/edit"   |


  @new @user @access @profile @link
  Scenario Outline: User can access to his own profile edit link.
    Administrator user can access any profile edit link.
    Given I am logged in as <user> with password "civicactions"
    And I am at <path>
    And I should see the following <links>
      | links   |
      | Edit    |
    And I click 'Edit'
    Then I should get a 200 HTTP response
    And I should see the text "Edit Profile"
    Examples:
      | user           | path                   |
      | uorgmanager2   | "users/uorgmanager2"   |
      | ugroupmanager1 | "users/ugroupmanager1" |
      | umember1       | "users/umember1"       |
      | uadmin         | "users/uadmin"         |
      | uadmin         | "users/uorgmanager2"   |
      | uadmin         | "users/ugroupmanager2" |
      | uadmin         | "users/umember1"       |


  @new @user @notaccess @profile @editlink
  Scenario Outline: Non-administrator users cannot access the edit form for another user's profile.
    Given I am logged in as <user> with password "civicactions"
    And I visit the edit profile form for <other_user>
    Then I should get a 403 HTTP response
    Examples:
      | user           | other_user       |
      | uorgmanager2   | "uorgmanager1"   |
      | ugroupmanager1 | "ugroupmanager2" |
      | umember1       | "umember2"       |


Scenario: Profile fields visible to user   @RD-2786 @qa-member1

    Given I am logged in as "qa-member1" with password "CivicActions3#"
    And I go to "/users/qa-member1/edit"
    And I enter "contacts" for "edit-field-education"
    And I click the element with CSS selector "#edit-submit"
    And I go to "/users/qa-member1"
    Then I should see "Business Masters"

 Scenario: User should not see the Current Password field on User Edit Profile page   @RD-2432 @uorgmanager2

    Given I am logged in as "uorgmanager2" with password "civicactions"
    And I visit the edit profile form for user "uorgmanager2" with open tab "settings"
    Then I should get a 200 HTTP response
    And I should not see the text "Current Password"

@RD-1822 @assignee:tom.camp @version:OT_Release @COMPLETED
  Scenario: Org_man, hr_man and admin roles are unable view user profile content

    Given I am logged in as "uadmin" with password "civicactions"
    And I visit "/users/umember2"
    Then I should see the link "Masquerade as umember2"
    And I visit "/users/umember1"
    Then I should see the link "Masquerade as umember1"
    And I am logged out
    And I am logged in as "uorgmanager2" with password "civicactions"
    And I go to edit the member "umember2" in "Or2" group
    Then I should get a 200 HTTP response
    And I visit "/users/umember2"
    Then I should get a 200 HTTP response
    And I am logged out
    And I am logged in as "uorgmanager1" with password "civicactions"
    And I go to edit the member "umember1" in "Or1" group
    Then I should get a 200 HTTP response
    And I visit "/users/umember1"
    Then I should get a 200 HTTP response

@user @profile
  Scenario: User must verify new email address in order to change their email
    
    Given I am logged in as "umember1" with password "civicactions"
    And I follow "My GlobalNET"
    And I follow "Edit My Profile & Settings"
    And I follow "Change email address »"
    And I enter "civicactions" for "Current password"
    And I enter "umember2+2@test.com" for "E-mail address "
    And I press "Save"
    Then I should see the text "A confirmation email has been sent to your new email address."

  @RD-3039 @editprofile
  Scenario Outline: Administrator edits any other user profile with no errors. @RD-3039
    Given I am logged in as "uadmin" with password "civicactions"
    And I am at <path>
    When I press the "Save" button
    Then I should not see the text "Notice: Undefined index"

    Examples:
      | path                          |
      | "users/umember2/edit"         |
      | "users/ugroupmanager1/edit"   |
