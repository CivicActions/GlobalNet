Feature: user.user-points.feature
   User points measure how active a user is on GlobalNET

  Scenario: Only admin users can see user points panel   @RD-2683 @qa-admin @ugroupmanager1 @umember1 @uorgmanager1

    Given I am logged in as "umember1" with password "civicactions"
    And I visit "/account"
    Then I should not see the text "YOUR USER POINTS"
    And I visit "/user/logout"

    Then I am logged in as "ugroupmanager1" with password "civicactions"
    And I visit "/account"
    Then I should not see the text "YOUR USER POINTS"
    And I visit "/user/logout"

    Then I am logged in as "uorgmanager1" with password "civicactions"
    And I visit "/account"
    Then I should not see the text "YOUR USER POINTS"
    And I visit "/user/logout"

    Given I am logged in as "qa-admin" with password "CivicActions3#"
    And I visit "/account"
    Then I should see the text "YOUR USER POINTS"