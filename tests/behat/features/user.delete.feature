@api @new
Feature: Admin user can delete users

  @authenticated @og_feature @deleteuser
  Scenario Outline: Are elegible for org_manager role
    Given I am logged in as <user> with password "civicactions"
    And I am on <path>
    Then I should get a 200 HTTP response
    And I should see the text "When cancelling the account"
    And I should see the button "Cancel account"

    Examples:
      | user           | path         |
      | "uadmin"       | "/users/qa-member1/cancel" |
      | "uadmin"       | "/users/qa-member2/cancel" |
