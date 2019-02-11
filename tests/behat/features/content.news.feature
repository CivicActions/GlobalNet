@api
Feature: content.news.feature

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
