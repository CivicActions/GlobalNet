@api
Feature: message.feature
  Tests messaging functions. Takes 8m53.032s to run.

  @send @anonymous
  Scenario: Anonymous user cannot send messages
    Given I visit the system path "messages/new"
    Then I should get a 403 HTTP response

  @send @authenticated
  Scenario Outline: Authenticated user can access send message page, but cannot send messages to non-contacts. Administrator can send messages to non-contacts.
    Given I am logged in as <user> with password "civicactions"
    And I visit the system path "messages/new"
    Then I should get a 200 HTTP response
    And I should see the text "Write new message"
    And I fill in "edit-recipient" with "umember2, "
    And I fill in "edit-subject" with "Test - subject"
    And I fill in "edit-body-value" with "Test - message content"
    And I press the "Send message" button
    Then I should see the text <text>
    Examples:
      | user               | text                                            |
      | "uadmin"           | "A message has been sent"                       |
      | "umember1"         | "Cannot send a private message to non-contacts" |
      | "ugroupmanager1"   | "Cannot send a private message to non-contacts" |
      | "uorgmanager1"     | "Cannot send a private message to non-contacts" |


  @send @authenticated @message @inboxcheck @testerooni
  Scenario: Users interact with one another and system generated messages are evaluated.
    Given I am logged in as "umember2" with password "civicactions"
    And I go to create "post" content for the "Or2 Gr10OR" group
    And I fill in "edit-title" with "mephistopheles 11:11"
    And I fill in "edit-body-und-0-value" with "Blah Blah Blah"
    And I press "Save"
    And I visit the relationship request url for user "umember2b"
    And I click the element with CSS selector "#edit-submit"
    And I am logged out
    And I am logged in as "uadmin" with password "civicactions"
    And I visit the add people form for node with title "Or2 Gr10OR"
    And I fill in "edit-name" with "umember2b"
    And I click the element with CSS selector "#edit-submit"
    And I am logged out
    And I am logged in as "umember2b" with password "civicactions"
    And I visit the system path "/users/umember2b/relationships/requested/{user:name:umember2}/approve?destination=relationships/received"
    And I click the element with CSS selector "#edit-submit"
    And I visit the node with title "mephistopheles 11:11"
    And I fill in "edit-comment-body-und-0-value" with "Comment 0"
    And I click the element with CSS selector "#edit-submit"
    And I wait for 5 seconds
    And I fill in "edit-comment-body-und-0-value" with "Comment 1"
    And I click the element with CSS selector "#edit-submit"
    And I wait for 5 seconds
    And I fill in "edit-comment-body-und-0-value" with "Comment 2"
    And I click the element with CSS selector "#edit-submit"
    And I wait for 5 seconds
    And I visit the system path "/messages/new/{user:name:umember2}?destination=user/{user:name:umember2}"
    And I fill in "edit-subject" with "Message 0"
    And I fill in "edit-body-value" with "Message 0 Blah Blah Blah"
    And I click the element with CSS selector "#edit-submit"
    And I wait for 3 seconds
    And I visit the system path "/messages/new/{user:name:umember2}?destination=user/{user:name:umember2}"
    And I fill in "edit-subject" with "Message 1"
    And I fill in "edit-body-value" with "Message 1 Blah Blah Blah"
    And I click the element with CSS selector "#edit-submit"
    And I wait for 3 seconds
    And I visit the system path "/messages/new/{user:name:umember2}?destination=user/{user:name:umember2}"
    And I fill in "edit-subject" with "Message 2"
    And I fill in "edit-body-value" with "Message 2 Blah Blah Blah"
    And I click the element with CSS selector "#edit-submit"
    And I wait for 3 seconds
    And I am logged out
    And I am logged in as "umember2" with password "civicactions"
    Then I should see the link "3"


  @RD-1959 @RD-2354 @assignee:ethan.teague @version:3/22_Launch_Release @version:OT_Release @COMPLETED @hillary @uorgmanager2
  Scenario: Disallow users from sending messages to non-contacts

    Given I am logged in as "uorgmanager2" with password "civicactions"
    And I visit the system path "messages/new"
    And I fill in "edit-recipient" with "umember2"
    And I fill in "edit-subject" with "Test - subject"
    And I fill in "edit-body-value" with "Test - message content"
    And I press the "Send message" button
    #fails here
    Then I should see the text "Cannot send a private message to non-contacts"


  @RD-2346 @assignee:iris.ibekwe @version:OT_Release @COMPLETED @qa-admin
  Scenario: Previous & Next links should not appear

    #if the user changed poorly the test will fail.
    Given I am logged in as "qa-admin" with password "CivicActions3#"
    And I visit "messages/new"
    And I fill in "edit-recipient" with "qa-member1,"
    And I fill in "edit-subject" with "A subject"
    And I fill in "edit-body-value" with "Test - message content"
    When I press the "Send message" button
    And I visit "user/logout"
    Then I am logged in as "qa-member1" with password "CivicActions3#"
    When I visit "inbox/messages"
    And I click "A subject"
    Then I should not see "Prev | Next"


  @RD-2471 @assignee:ana.willem @version:3/22_Launch_Release @COMPLETED @hillary @qa-admin
  Scenario: After send a message should not see the Message tags

    #if the user is not qa_admin the test will fail.
    Given I am logged in as "qa-admin" with password "CivicActions3#"
    And I visit the system path "messages/new"
    Then I should get a 200 HTTP response
    And I should see the text "Write new message"
    And I fill in "edit-recipient" with "qa-member1"
    And I fill in "edit-subject" with "Test - subject"
    And I fill in "edit-body-value" with "Test - message content"
    And I press the "Send message" button
    #fails here
    And I should see the text "A message has been sent"
    And I should not see the text "modify tags"


  @RD-2522 @assignee:iris.ibekwe @version:OT_Release @COMPLETED @qa-admin
  Scenario: As a user, should not see sent messages in inbox messages list

    #if the user changed poorly the test will fail.
    Given I am logged in as "qa-admin" with password "CivicActions3#"
    And I visit the system path "messages/new"
    And I should see the text "Write new message"
    And I fill in "edit-recipient" with "qa-member1"
    And I fill in "edit-subject" with "Test - subject"
    And I fill in "edit-body-value" with "Test - message content"
    And I press the "Send message" button
    #fails here
    And I should see the text "A message has been sent"
    And I visit the system path "inbox/messages"
    Then I should not see the text "Test - subject"


  @RD-2555 @assignee:ethan.teague @version:3/22_Launch_Release @COMPLETED @uadmin
  Scenario: Form errors

    Given I am logged in as "uadmin" with password "civicactions"
    And I visit "/messages/new?to=16&admin=admin&name=George%20C.%20Marshall%20Center"
    And I should see the text "George C. Marshall Center"
    And I fill in "edit-subject" with "Test - subject"
    And I fill in "edit-body-value" with "Test - message content"
    And I click the element with CSS selector "#edit-submit"
    Then I should not see "Cannot send a private message to non-contacts"


  @RD-2297 @assignee:bob.schmitt @version:OT_Release @COMPLETED @uadmin
  Scenario: Send message link in Group Admin Menu should work and populate the recipient

    Given I am logged in as "uadmin" with password "civicactions"
    And I visit "gcmc/group-in-gcmc"
    And I click "Send message"
    And I should see the text "A group in gcmc"


  @RD-1966 @assignee:alexis.saransig @version:OT_Release @COMPLETED @ugroupmanager2
  Scenario: Should see the updated help text below the TO field

    Given I am logged in as "ugroupmanager2" with password "civicactions"
    And I go to "messages/new"
    And I should see the text "Start typing a username to write a message to another GlobalNET member"


  @RD-2624 @RD-3150 @OPEN @RD-2920 @javascript @jen_general @review
  Scenario: Send Message link loads the New Message form and after send redirects to previous page

    Given I am logged in as "qa-admin" with password "CivicActions3#"
    And I visit the system path "gcmc/group-in-gcmc"
    And I visit the system path "messages/new?destination=/gcmc/group-in-gcmc&to={node:title:A group in GCMC}&admin=admin&name=A group in GCMC"
    And print current URL
    Then I should see the text "A group in GCMC"
    And I fill in "edit-subject" with "Message to A group in GCMC"
    And I click the element with CSS selector "#wysiwyg-toggle-edit-body-value"
    And I wait for 2 seconds
    And I fill in "edit-body-value" with "Some text"
    And I click the element with CSS selector "#edit-submit"
    And I should see "message has been sent"
    Then the url should match "/gcmc/group-in-gcmc"
    Then I am logged out
    Then I am logged in as "qa-member1" with password "CivicActions3#"
    And I visit the system path "inbox/messages"
    And I wait for 2 seconds
    And I click "Some text"
    And I wait for 2 seconds
    And I click "Reply"
    And I wait for 2 seconds
    And I click the element with CSS selector "#wysiwyg-toggle-edit-body-value"
    And I fill in "edit-body-value" with "Some text as a reply"
    And I click the element with CSS selector "#edit-submit"
    Then I am logged out
    And I am logged in as "qa-admin" with password "CivicActions3#"
    And I visit the system path "inbox/messages"
    Then I should see the text "Messages (1)"
    And I should see the text "1"


  Scenario: After send a message should see the Group name in recipients list.   @RD-2469 @RD-2989

        #if the user is not qa_admin the test will fail.
        Given I am logged in as "qa-admin" with password "CivicActions3#"
        And I visit the system path "messages/new"
        Then I should get a 200 HTTP response
        And I should see the text "Write new message"
        And I fill in "edit-recipient" with "umember1, Or2 Gr10OR"
        And I fill in "edit-subject" with "Test - subject"
        And I fill in "edit-body-value" with "Test - message content"
        And I press the "Send message" button
        #fails here
        Then I should see the text "A message has been sent"
        And I should see the text "Or2 Gr10OR"
        And I should not see the following "Error"


  Scenario: Reply to message   @RD-2984

    Given I am logged in as "qa-member1" with password "CivicActions3#"
    And I visit the system path "/inbox/messages"
    And I follow "scdsdc"
    Then the url should match "/messages/view/122"


  Scenario: Private Message Autocomplete  @RD-2366 @RD-2997

      Given I am logged in as "qa-admin" with password "CivicActions3#"
        And I visit the system path "messages/new"
        And I fill in "a" for "recipient"
        Then I should not see "An AJAX HTTP error occurred. HTTP Result code: 503"


  Scenario: Confirm removal of extra private message block from header @RD-2486

    Given I am logged in as "umember1" with password "civicactions"
        And I visit "/globalnet"
        Then I should not see the CSS selector "#block-gn2-base-config-privatemsg-menu"


