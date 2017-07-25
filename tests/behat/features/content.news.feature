@api
Feature: content.news.feature

  Testing aspects of the news content type 0m31.620s

Scenario: View More Nodes Link   @RD-2377

    Given I am logged in as "qa-admin" with password "CivicActions3#"

        And I visit the node with title "George C. Marshall Center"
        And I click "View all news items"
          Then I should see "Search news content"

        And I visit the node with title "A group in GCMC"
         Then I should see the link "View all posts" in the "main content" region
        And I click "View all posts"
          Then I should see "Search news and post content"


  Scenario: Topics are required on News   @RD-3139

    Given I am logged in as "uorgmanager1" with password "civicactions"
    And I visit the system path "node/add/news?gid={node:title:Or1}"
    Then I should see the CSS selector ".required-fields.group-topics"

  Scenario: Confirm news node org and author info is accurate   @RD-2416

        Given I am logged in as "uadmin" with password "civicactions"
        And I visit "or1/or1-ne1pu"
        Then I should see the text "From Or1" in the "main content" region
        And I should see the link "Unity Orgma Nagerone" in the "main content" region
        # And I should see the text "/" in the "main content" region
        And I visit the edit form for node with title "Or1 Ne1pu"
        #this might be where the test was failing
        Then the "Parent Organization" field should contain "{node:title:Or1}"
        # Which is the parent org ID
        And the "edit-name" field should contain "uorgmanager1"
        And I should see the CSS selector "#edit-date"
