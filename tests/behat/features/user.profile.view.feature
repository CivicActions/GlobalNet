@api
Feature: user.profile.view.feature
  As a user  I should be able to see my profile

  @user @profile @view @links
  Scenario: A user can see certain links on their profile.
    Given I am logged in as "umember1" with password "civicactions"
    Then I should see the following <links>
    | links        |
    | My GlobalNET |
    | Log out      |
    When I visit "/account"
    Then I should see the following <links>
    | links                         |
    | Log out                       |
    | Edit My Profile & Settings    |
    | Change My Password            |

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
