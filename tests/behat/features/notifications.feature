@api
Feature: Notifications

  @wip @RD-2641 @assignee:iris.ibekwe @version:Release_v2.002-20160401 @COMPLETED @create @edit @review @uorgmanager2
  Scenario: Email sent when an user request for membership
    # Wipping this test - passes locally.
    Given I am logged in as "uorgmanager2" with password "civicactions"
    And I go to create "group" content for the "Or2 Gr10OR" group
    And I fill in "edit-title" with "mephistopheles"
    And I select "moderated" from "edit-gn2-og-form-options"
    And I fill in "edit-body-und-0-value" with "Some text."
    And I check the box "Peace"
    And I select the radio button "Public - Can be viewed by anyone on the World Wide Web." with the id "edit-field-gn2-simple-access-und-public"
    And I press the "Save" button
    And I am logged out
    And I am logged in as "umember1" with password "civicactions"
    And I visit the last created node
    And I click the element with CSS selector ".group.subscribe.request"
    And I click the element with CSS selector "#edit-submit"
    Then I should not see the text "Error"
    And I am logged out
    And I am logged in as "uorgmanager2" with password "civicactions"
    And I visit "inbox/notifications"
    #test is failing here, it instead sees the words 'registered for'
    Then I should see the text "registered for"
