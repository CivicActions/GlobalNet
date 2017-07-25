@api @manage
Feature: content.manage.feature
  Tests various aspects of content management. Run time 1m14.322s


  Scenario Outline: Administrators and Org Managers can access content management pages.
    Given I am logged in as <user> with password "civicactions"
    And I am at <path>
    Then I should get a 200 HTTP response
    Examples:
      | user           | path                    |
      | uorgmanager2   | "/admin/manage/content" |
      | uadmin         | "/admin/manage/content" |


  Scenario: Confirm page titles for different content types @RD-2475

    Given I am logged in as "qa-admin" with password "CivicActions3#"

    #org content type
    And I visit the node with title "NATO School"
    Then I should see "NATO School" in the "title" element

    #group content type
    And I visit the node with title "GlobalNET Second level group"
    Then I should see "GlobalNET Second level group" in the "title" element

    #course content type
    And I visit the node with title "Mark Twain 101"
    Then I should see the text "MT101: Mark Twain 101"

    #publication content type
    And I visit the node with title "Or1 Pg1PU Pu28PR"
    Then I should see "Or1 Pg1PU Pu28PR" in the "title" element

    #course group content type
    And I visit the node with title "Or1 Co1PU Cg1PU"
    Then I should see "Or1 Co1PU Cg1PU" in the "title" element

    #custom landing page (program) content type
    And I visit the node with title "Library"
    Then I should see "Library" in the "title" element

    #news item content type
    And I visit the node with title "Space Dancing Is Heating Up the Atmosphere"
    Then I should see "Space Dancing Is Heating Up the Atmosphere" in the "title" element

    #post content type
    And I visit the node with title "Post 2"
    Then I should see "Post 2" in the "title" element

    #announcement content type
    And I visit the node with title "Peace Breaks Out!"
    Then I should see "Peace Breaks Out!" in the "title" element
