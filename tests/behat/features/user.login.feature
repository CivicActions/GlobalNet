@api @new @user @login @logout
Feature: Users can login/logout
  As the user
  I should be able to login/logout  

  Scenario Outline: A user can login and logout
    Given I am on the homepage
    When I enter <name> for 'Username'
    And I enter "civicactions" for 'Password'
    And I press the 'Log in' button
    And I click "Log out"

  Examples:
    | name           | 
    | uadmin         |
    | uauthenticated |
    | umember1       |
    | ugroupmanager2 |    
    | uorgmanager1   |
