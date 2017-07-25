@api
  Feature: system.feature
    Tests general system features


  Scenario: Access Denied message is generated  @RD-2494

    Given I visit the system path "/node/add/post?gid={node:title:Or1}"
    Then I should get a 403 HTTP response
    And I should see the text "We are sorry"


  Scenario: Logout redirect is to organization landing page   @RD-2496

    Given I am logged in as "umember1" with password "civicactions"
    And I visit the node with title "Or1 Gr1PU Ne17OR"
    And I visit the system path "inbox/messages"
    When I follow "Log out"
    Then the url should match "or1"


  Scenario: Access Denied link @RD-2969

    Given I am logged in as "umember2" with password "civicactions"
    And I visit the node with title "Or1 Pg1PU Pu28PR"
    Then I should get a 403 HTTP response
    And I should see the text "We are sorry"

