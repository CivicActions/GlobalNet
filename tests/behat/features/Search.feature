@api
Feature: search.feature
  As the user I should be able to search and refine the results with facets  5m49.080s

  @smoke
  Scenario: Check search, and check group facets in sidebar to confirm that solr search is configured and working.

    When I visit '/search?search_api_views_fulltext=GlobalNet'
    Then I should see the text "GlobalNET represents a network of organizations"

#CONTENT SEARCH

  Scenario: Search results should be filtered by Parent Organization RD-2382 RD-2877 RD-2989

    Given I am logged in as "umember1" with password "civicactions"
    And I visit the node with title "Or1"
    And I enter "lorem" for "edit-search"
    And I press "Search"
    Then the url should match "/search/org/{node:title:Or1}"
    And I click on the element with xpath "//a[contains(@href,'/search/org/{node:title:Or1}/org/{node:title:Or2}')]"
    And I wait for 5 seconds
    Then the url should match "/search/org/{node:title:Or1}/org/{node:title:Or2}"
    And I click on the element with xpath "//a[contains(@href,'/search/org/{node:title:Or1}/org/{node:title:Or2}/type/post')]"
    And I wait for 5 seconds
    Then the url should match "/search/org/{node:title:Or1}/org/{node:title:Or2}/type/post"
    And I click on the element with xpath "//a[contains(@href,'/search/org/{node:title:Or1}/org/{node:title:Or2}/type/post/type/event')]"
    And I wait for 5 seconds
    Then the url should match "/search/org/{node:title:Or1}/org/{node:title:Or2}/type/post/type/event"
    And I click on the element with xpath "//a[contains(@href,'/search/org/{node:title:Or1}/org/{node:title:Or2}/type/post')]"
    And I wait for 5 seconds
    Then the url should match "/search/org/{node:title:Or1}/org/{node:title:Or2}/type/post"


  Scenario: Parent org and status info should appear in search results for groups. RD-2402 RD-2669 RD-2970

    Given I am logged in as "qa-member1" with password "CivicActions3#"
    And I visit the node with title "George C. Marshall Center"
    And I visit "search/org/16/type/group"
    #fails here
    Then I should see the link "A group in GCMC"
    And I should see the text "This group is open; membership requests are accepted immediately."
    And I should see the link "qa-admin"

  Scenario: "Read more" link should lead to the correct page. RD-1740 RD-2970

    Given I am logged in as "uadmin" with password "civicactions"
    And I visit the system path "/search/org/{node:title:Or1}"
    And I should see the link "Read more" in the "main content" region
    When I click on the element with xpath "//div[contains(@class, 'views-row views-row-1 views-row-odd views-row-first')]/div[contains(@class, 'gn2-2col gn-two-col gn2-2col')]/div[contains(@class, 'main-content')]/div[contains(@class, 'inner')]/div[1]/h2[contains(@class, 'search-result--title')]/a"
    Then I should get a 200 HTTP response


  Scenario: Search by Author First Last Name produces results. RD-2831 RD-2989

    Given I am logged in as "ugroupmanager1" with password "civicactions"
    When I visit 'search/org/{node:title:Or1}?search_api_views_fulltext=Ulysses'
    Then I should see the text "Ulysses Managerone Group"
    When I visit 'search/org/{node:title:Or1}?search_api_views_fulltext=Managerone'
    Then I should see the text "Ulysses Managerone Group"


  Scenario: Future events should display in search RD-2502

    Given I am logged in as "uorgmanager2" with password "civicactions"
    And I go to create "event" content for the "Or2 Gr10OR" group
    And I fill in "edit-title" with "Future test event"
    And I fill in "edit-body-und-0-value" with "Event test"
    And I fill in "edit-field-event-date-und-0-value-datepicker-popup-0" with "15 Mar 2017"
    And I select "Open" from "edit-gn2-og-form-options"
    And I select "General" from "edit-field-event-type-und"
    And I select "online" from "edit-field-event-location-und"
    And I fill in "edit-field-event-contact-person-und-0-target-id" with "uadmin"
    And I check the box "Peace"
    And I press the "Save" button
    Then I should not see the text "Error"
    And I run drush "cache-clear drush"
    And I run drush "sapi-i"
    When I go to "account#tabs-0-main_bottom-5"
    And I click "Find More Events"
    And I go to "search/type/event/field_event_date%253Avalue/future"
    Then I should see the text "Future test event"


  @long
  Scenario: Search results should display the Event Date for Event content only RD-2557

    Given I am logged in as "qa-admin" with password "CivicActions3#"
    And I go to create "event" content for the "Or2 Gr10OR" group
    And I fill in "edit-title" with "My new test event testtest"
    And I fill in "edit-body-und-0-value" with "Event test"
    And I fill in "edit-field-event-date-und-0-value-datepicker-popup-0" with "15 Feb 2017"
    And I select "Open" from "edit-gn2-og-form-options"
    And I select "General" from "edit-field-event-type-und"
    And I select "online" from "edit-field-event-location-und"
    And I fill in "edit-field-event-contact-person-und-0-target-id" with "uadmin"
    And I check the box "Peace"
    And I press the "Publish" button
    And I run drush "cache-clear drush"
    And I run drush "sapi-i"
    And I wait for 5 seconds
    And I go to "search/type/event/field_event_date%253Avalue/future"
    Given I reload the page 2 times
    Then I should see the text "My new test event testtest"
    And I should see the text "15 Feb 2017"


  Scenario: Help content search results link to correct page in Guide. RD-2697

    Given I am logged in as "ugroupmanager2" with password "civicactions"
    And I visit "search?search_api_views_fulltext=recent"
    And I click "Where do I View my Recent Activity?"
    And I should see the text "GlobalNET Help Guide"
    And I should see the text "To View your Recent Activity"


  Scenario: Search result should produce "No results found" when no results are found. RD-2539

    Given I am logged in as "uadmin" with password "civicactions"
    And I go to "members?search_api_views_fulltext=leusuario&gid={node:title:Or1}"
    And I should see the text "Ensure words are spelled correctly"
    And I go to "search?search_api_views_fulltext=nocontentmatch&gid={node:title:Or1}"
    And I should see the text "Ensure words are spelled correctly"


  Scenario: Members/Content link text exists RD-2752 RD-3047

    Given I am logged in as "umember1" with password "civicactions"
    And I visit the system path "/search"
    Then I should see the text "You are searching for content"
    And I follow "Looking for GlobalNET members?"
    Then I should see the text "You are searching for GlobalNET members"
    And I follow "Looking for content?"
    Then I should see the text "You are searching for content"


#MEMBER SEARCH

  Scenario: Member search should posess an Organization facet RD-2242

    Given I am logged in as "umember1" with password "civicactions"
    When I visit '/members'
    Then I should see the link "George C. Marshall Center" in the "sidebar" region


  Scenario: Members search page is available for authenticated users. RD-2751

    Given I am logged in as "ugroupmanager2" with password "civicactions"
    And I visit "search"
    And I should see the text "You are searching for content."
    And I click "Looking for GlobalNET members?"
    And I should get a 200 HTTP response
    And I am logged out
    And I visit "search"
    And I should not see the text "You are searching for content."
    And I go to "members"
    And I should get a 403 HTTP response


#SPECIALIZED CONTENT SEARCH

  Scenario: Members search path should reflect current Organization. RD-1456

    Given I am logged in as "umember1" with password "civicactions"
    And I visit the node with title "Or1"
    And I visit the system path "/or1/members"
    Then the url should match "/members/org/or1"

  @RD-3307 @assignee:ana.willem
  Scenario: Search from 404

    Given I am logged in as "umember1" with password "civicactions"
    And I visit the system path "kenneth"
    Then I should get a 404 HTTP response
    And I fill in "edit-search" with "group"
    And I click the element with CSS selector "#edit-submit"
    Then I wait for 5 seconds
    Then I should see the text "You are searching for content"

  Scenario: Organization navigation to news, groups, courses results in a search being triggered @RD-2602 @RD-2612 RD-2350 RD-2189

    Given I am logged in as "umember1" with password "civicactions"
    And I visit the node with title "George C. Marshall Center"
    And I follow "News"
    Then the url should match "search/org/{node:title:George C. Marshall Center}/type/news"
    And I follow "Groups"
    Then the url should match "search/org/{node:title:George C. Marshall Center}/type/group"
    And I follow "Courses"
    Then the url should match "search/org/{node:title:George C. Marshall Center}/type/course"

  Scenario: HTML in search results  @RD-2749

    Given I am logged in as "qa-member1" with password "CivicActions3#"
    When I visit the system path "/gcmc"
    And I follow "Groups"
    Then I should not see the text "&lt;p&gt;"


#NEEDS WORK
#    And I should see the link "GlobalNET Platform" in the "sidebar" region

#### Access tests
# all user roles can perform search and get faceted results:
#  anonymous users see only public content
#  authenticated users see public plus sitewide content
#  group1 members see sitewide plus group1 content but not group2 content
#  group2 members see sitewide plus group2 content but not group1 content
#  org managers see sitewide + all their org content
#  admins can see all content

#### Facet tests
#### FIXME: requires taxonomy migration
#### FIXME: requires facet checkbox implementation
# search should return facets for Group, Topic, Country, Region, Language (what else?)
# choosing a facet should limit the search
# unchoosing a facet widens search (should be same as before)
