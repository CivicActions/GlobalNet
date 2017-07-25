@api @new
Feature: user.contacts.feature 

  @relationship @request @authenticated
  Scenario Outline: Authenticated user has access to request Contact relationship
    Given I am logged in as <user> with password "civicactions"
    And I am at '/relationship/{user:name:umember1}/request'
    Then I should get a 200 HTTP response
    And I should see the text "Request Contact"
    Examples:
      | user               |
      | "uadmin"           |
      | "umember2"         |
      | "ugroupmanager2"   |
      | "uorgmanager2"     |

  @relationship @request @authenticated @WIP
  Scenario Outline: Authenticated user can request Contact relationship
    Given I am logged in as <user> with password "civicactions"
    And I visit the relationship request url for user <requested>
    And I press the "Send" button
    And I am at '/relationships/sent'
    And I click the element with CSS selector "a.user_relationships_popup_link"
    And I press the "Yes" button
    Then I should see the text "has been canceled"
    Examples:
      | user               | requested            |
      | "uadmin"           | uauthenticated       |
      | "umember2"         | uauthenticated       |
      | "ugroupmanager2"   | uauthenticated       |
      | "uorgmanager2"     | uauthenticated       |
