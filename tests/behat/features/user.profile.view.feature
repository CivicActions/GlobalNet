@api
Feature: Viewing User Profiles
  As the user
  I should be able to see the profile

  @user @profile @view @links
  Scenario: A user can see certain links on their profile.
    Given I am logged in as "umember1" with password "civicactions"
    Then I should see the following <links>
    | links      |
    | umember1 |
    | Log out    |
    When I visit "/account"
    Then I should see the following <links>
    | links              |
    | Log out            |
    | Edit My Profile    |
    | Change My Password |

  @user @profile @hr_manager @view
  Scenario: An HR Manager can view a blocked user's profile.
    Given I am logged in as "uhrmanager1b" with password "civicactions"
    And I visit the edit profile form for user "umember1" with open tab "password"
    And I select the radio button "Blocked"
    And I press "Save"
    Then I should get a 200 HTTP response
    And I visit the edit profile form for user "umember1" with open tab "password"
    And I select the radio button "Active"
    And I press "Save"
    Then I should get a 200 HTTP response
