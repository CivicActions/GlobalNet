@api
Feature: theme.feature  2m31.946s

  Scenario: Logo and footer block should match @RD-2373

    Given I am logged in as "umember1" with password "civicactions"
    And I go to "/gcmc"
    Then I should see "About GCMC"
    When I click on the element with xpath "//div[@id='block-gn2-base-config-site-logo']/a"
    Then the url should match "/gcmc"


  Scenario: Theme switching: unauthenticated   @RD-3032

    Given I visit the node with title "Or1"
    And I enter "lorem" for "edit-search"
    And I press "edit-submit--2"
    Then I should see the text "About Or1"


  Scenario: Footer Links   @RD-3081

    Given I am on the homepage
    And I follow "Frequently Asked Questions"
    Then I should get a 200 HTTP response
    And I follow "How to use GlobalNET"
    Then I should get a 200 HTTP response


  Scenario: Footer: About Org   @RD-3087

    Given I am logged in as "umember1" with password "civicactions"
    And I visit the node with title "Or1"
    And I should see the text "About Or1"
    And I follow "Or1 Gr1PU"
    And I should see the text "About Or1"
    And I fill in "edit-search" with "lorem"
    And I press "Search"
    And I should see the text "About Or1"



  Scenario: Hide org shortname   @RD-2988

    Given I have accepted terms and am logged in as a user with the "administrator" role
    And I visit the node with title "George C. Marshall Center"
    And I click "Edit"
    Then I should not see the CSS selector "#edit-field-org-short-title-und-0-value:disabled"
    And I visit "/user/logout"
    And I am logged in as "jen_general" with password "CivicActions3#"
    And I visit the node with title "George C. Marshall Center"
    And I click "Edit"
    Then I should not see the CSS selector "#edit-field-org-short-title-und-0-value"


  Scenario: Dashboard, sidebar links work properly  @RD-2670

    Given I am logged in as "uadmin" with password "civicactions"
    And I visit "users/dashboard/Custom-page"
    And I should see the text "Who can create a Custom Page"

