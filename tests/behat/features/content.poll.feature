@api
Feature: content.poll.feature 1m41.49s


  Scenario: Poll should not display the Cancel button  @RD-2741 @uorgmanager2

    Given I am logged in as "uorgmanager2" with password "civicactions"
    And I go to create "poll" content for the "Or2 Gr9SI" group
    Then I should see the text "Create Poll"
    And I fill in "edit-title" with "New Poll"
    And I fill in "edit-choice-new0-chtext" with "Q1"
    And I fill in "edit-choice-new1-chtext" with "Q2"
    And I select the radio button "Public - Can be viewed by anyone on the World Wide Web." with the id "edit-field-gn2-simple-access-und-public"
    And I press the "Save" button
    And I should see the text "has been created"
    And I visit "or2/or2-gr9si"
    And I should see the text "New Poll"
    And I should not see the CSS selector ".vote-form a.button"


  Scenario: Should not display the Preview button   @RD-2784 @uorgmanager1

    Given I am logged in as "uorgmanager1" with password "civicactions"
    And I visit the node with title "Or1"
    And I follow "Add Poll"
    Then I should get a 200 HTTP response
    Then I should not see the text "Preview"


  Scenario: Results tab not on Poll  @RD-2386

    Given I am logged in as "uadmin" with password "civicactions"
    And I visit the node with title "q1"
    Then I should not see "Results" in the "content"


  Scenario: Ensure Poll Results page isn't 404 with no results   @RD-2386

    Given I am logged in as "uadmin" with password "civicactions"
    And I visit the node with title "q1"
    And I click "Votes"
    Then I should see "This table lists all the recorded votes for this poll. If anonymous users are allowed to vote, they will be identified by the IP address of the computer they used when they voted." in the "content"


  Scenario: Ensure Poll Results Page shows results   @RD-2386

     Given I am logged in as "uadmin" with password "civicactions"
     Then I click "a"
     Then I click "submit"
     And I visit "gcmc/q1/votes"
     Then I should see the link "uadmin"
     And I click "uadmin"
     Then I should see the text "Ura Admin Istrator"
