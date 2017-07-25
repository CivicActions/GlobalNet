@api
Feature: drupal.messages.feature
  Feedback messages related to creating or updating content, users, or messages should be visible to all users.




  @RD-2309 @version:3/22_Launch_Release @COMPLETED @edit @umember1
  Scenario: Authenticated users see status messages when they post a comment

        Given I am logged in as "umember1" with password "civicactions"
        And I visit "or1/or1-ne1pu"
        And I fill in "edit-comment-body-und-0-value" with "This is a comment"
        And I press the "Save" button
        Then I should see "Your comment has been posted" in the ".messages--status" element


  @RD-2309 @version:3/22_Launch_Release @COMPLETED @uadmin
  Scenario: Admin users see status messages when using the blossom admin theme

        Given I am logged in as "uadmin" with password "civicactions"
        When I visit the system path "/admin/config/development/performance"
        Then I should see the CSS selector ".page-admin"
        And I press the "Clear all caches" button
        Then I should see "The administrator role has been reset for all permissions" in the ".messages" element

