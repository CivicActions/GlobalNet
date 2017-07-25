@api
Feature: contacts.feature

  @RD-2534 @RD-2989 @assignee:ana.willem @assignee:eric.napier @version:3/22_Launch_Release @OPEN @edit @hillary @qa-admin
  Scenario: Send message link should not appear in the current logged in user profile page

    Given I am logged in as "qa-admin" with password "CivicActions3#"
    And I visit "relationship/{user:name:umember1}/request"
    And I click the element with CSS selector "#edit-submit"
    And I am logged out
    And I am logged in as "umember1" with password "civicactions"
    And I visit "relationships/received"
    And I click "Approve"
    And I should see the text "Are you sure you want to approve"
    And I click the element with CSS selector "#edit-submit"
    And I visit "users/qa-admin"
    #fails here
    And I should see the text "Send message"
    And I visit "users/umember1"
    Then I should not see the CSS selector "icon-email"


  @RD-2501 @assignee:alexis.saransig @version:3/22_Launch_Release @COMPLETED @uadmin
  Scenario: Pending requests should appear with the text Cancel Pending

    Given I am logged in as 'uadmin' with password "civicactions"
    And I visit the relationship request url for user 'umember1'
    And I press the "Send" button
    And I am at '/account'
    And I should see the text 'Cancel pending'

