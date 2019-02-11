@api
Feature: taxonomy.topics.feature


  Scenario: Confirm text that appears when no folders or files found   @RD-2466

    Given I am logged in as "qa-admin" with password "CivicActions3#"
    And I visit the system path "/topics/test-term-1"
    Then I should see the text "No results found."


  Scenario: Should work "topics" for url instead "gn-topics"   @RD-2490

    Given I am logged in as "uadmin" with password "civicactions"
    And I visit "topics"
    And I should see the text "GlobalNET Topics"
    And I click "Peace"
    And I should see the text "News"
    And I should see the text "Publications"
    And I visit "countries"
    And I should see the text "GlobalNET Countries"
    And I click "Asia"
    And I should see the text "News"
    And I should see the text "Publications"


  Scenario: Confirm that links to topics pages work properly @RD-2923

    Given I am logged in as "uadmin" with password "civicactions"
    And I visit "topics"
    And I click "Action Learning"
    Then the url should match "/topics/action-learning"
    And I should get a 200 HTTP response
    And I visit "topics"
    And I click "Anti-Corruption"
    Then the url should match "/topics/anti-corruption"
    And I should get a 200 HTTP response
    And I visit "topics"
    And I click "Border Security and Control"
    Then the url should match "/topics/border-security-and-control"
    And I should get a 200 HTTP response
    And I visit "topics"
    And I click "Building Partnership Capacity"
    Then the url should match "/topics/building-partnership-capacity"
    And I should get a 200 HTTP response
    And I visit "topics"
    And I click "Education and Training"
    Then the url should match "/topics/education-and-training"
    And I should get a 200 HTTP response
    And I visit "topics"
    And I click "Intellectual Property Crimes"
    Then the url should match "/topics/intellectual-property-crimes"
    And I should get a 200 HTTP response


  Scenario: confirm removal of inline media information from topics teasers @RD-2399

    Given I am logged in as "qa-admin" with password "CivicActions3#"
    And I visit "/topics/Action-Learning"
    Then I should not see "media_description[und][0]"


  Scenario: Confirm taxonomy terms link to correct taxonomy pages   @RD-2102

    Given I am logged in as "qa-admin" with password "CivicActions3#"
    And I visit "/topics"
    Then I should see the link "Action Learning"
    And I should see the link "Administrative"
    And I should see the link "Anti-Corruption"
    When I click "Administrative"
    Then I should see "Administrative"
    # And it should look good
