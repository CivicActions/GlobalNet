@javascript @edit @profile @WIP
Feature:
  To manage my Contacts
  as a Member I access search features
  to view and interact with other Members

  @member @group @wip
  Scenario Outline: A Member interacts with Contacts

    Given I run drush "search-api-index"

    Then I am logged in as <user> with password <password>

    # Search: Contacts
    And I visit "/account"
    And I click "Contacts"
    And I click "Find New Contacts"
    Then I should see the text "Member Search"
    And I should see the text "Looking for content?"
    And I should see the text "Show results for"
    And I should see the text "Refine by"
    And I should see the text "Add Contact"

    # Search: Contacts by keyword
    Then I fill in "edit-search-api-views-fulltext" with "System"
    And I press the "edit-submit-search-member" button
    Then I visit "/members?search_api_views_fulltext=System"
    Then I wait 30 seconds or for AJAX '(typeof(jQuery)=="undefined" || (0 === jQuery.active && 0 === jQuery(":animated").length))'
    And I should see the link "System Admin"
    And I should see the text "Add Contact"
    # Search: Contacts by filter
    Then I visit "/members"
    Then I wait 30 seconds or for AJAX '(typeof(jQuery)=="undefined" || (0 === jQuery.active && 0 === jQuery(":animated").length))'
    And I click on the element with xpath "//h2[contains(text(), 'Country of Residence')]"
    Then I click "United States"
    And I visit "/members/field_country_of_residence/US"
    And I should see the link "Jen Harris"

    # Member contact via contact search results
    Then I visit "/members"
    Then I fill in "edit-search-api-views-fulltext" with "System"
    And I press the "edit-submit-search-member" button
    Then I wait 30 seconds or for AJAX '(typeof(jQuery)=="undefined" || (0 === jQuery.active && 0 === jQuery(":animated").length))'
    And I should see the text "Add Contact"
    And I click "Add Contact"
    And I press the "edit-submit" button
    Then I should see the text "Your Contact request has been sent to"

    # Member contact via member profile
    Then I visit "/members"
    And I click on the element with xpath "//h2[contains(text(), 'Country of Residence')]"
    Then I click "United States"
    And I visit "/members/field_country_of_residence/US"
    And I should see the link "Jen Harris"
    Then I fill in "edit-search-api-views-fulltext" with "Jen Harris"
    And I press the "edit-submit-search-member" button
    Then I visit "/members/field_country_of_residence/US?search_api_views_fulltext=Jen+Harris"
    Then I wait 30 seconds or for AJAX '(typeof(jQuery)=="undefined" || (0 === jQuery.active && 0 === jQuery(":animated").length))'
    And I click "Jen Harris"
    And I click "Add Contact"
    And I should see the text "Request Contact"
    And I press the "edit-submit" button
    And I should see the text "Your Contact request has been sent"

    # Search all content
    Then I click "My GlobalNET"
    And I fill in "edit-search" with "Agency"
    And I visit "/search?search_api_views_fulltext=Agency"
    Then I wait 30 seconds or for AJAX '(typeof(jQuery)=="undefined" || (0 === jQuery.active && 0 === jQuery(":animated").length))'
    And the "edit-search-api-views-fulltext" field should contain "Agency"
    And I should see the text "Refine by"
    And I click on the element with xpath "//a[contains(@href,'/globalnet-platform-privacy')]"


    Examples:
      | user       | role             | password         | new_password         | tab_1    | tab_2        | tab_3          | tab_4     | tab_5     | tab_6                  | tab_7     |
      | umember1   | "authenticated"  | "civicactions"   | "civicactions-New6"  | Settings | "Basic Info" | "Contact Info" | Biography | Employers | "Education & Training" | Interests |

