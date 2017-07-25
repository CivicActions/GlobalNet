@api @comment
Feature: comments.feature

   Scenario: Confirm no preview button for comments  @RD-2692

    Given I am logged in as "uadmin" with password "civicactions"
      And I visit "gcmc/mark-twain-101/announcement-for-mark-twain-101"
        Then I should see the text "JOIN THE CONVERSATION"
        And I should not see the CSS selector "input[id='edit-preview']"
      And I visit "gcmc/mark-twain-101/event-for-mark-twain-101"
        Then I should see the text "JOIN THE CONVERSATION"
        And I should not see the CSS selector "input[id='edit-preview']"
      And I visit "help/who-can-post-announcements"
        And I should not see the CSS selector "input[id='edit-preview']"
      And I visit "gcmc/mark-twain-101/publication-for-mark-twain-101"
        Then I should see the text "JOIN THE CONVERSATION"
        And I should not see the CSS selector "input[id='edit-preview']"


  #AS ORG MANAGER

   Scenario: Org_Manager: be able to turn on/off comments for any content on the site @RD-1712

      Given I am logged in as "uorgmanager2" with password "civicactions"
      And I visit the edit form for node with title "Or2 Pl14PR" with open tab "Comment settings"
      Then I select the radio button 'Open Users with the "Post comments" permission can post comments.' with the id "edit-comment-2"


    Scenario: Comment settings access: Org Manager   @RD-2761

      Given I am logged in as "uorgmanager1" with password "civicactions"
      And I visit the node with title "Or1"
      And I follow "Add News"
        Then I should see the text "Comment settings"


  #AS UMEMBER1

    Scenario: Authenticated users can view comments

      Given I am logged in as "umember1" with password "civicactions"
      And I visit "or1/or1-ne1pu"
      Then I should see "Join the Conversation"


    Scenario: Authenticated users can post comments

      Given I am logged in as "umember1" with password "civicactions"
      And I visit "or1/or1-ne1pu"
      And I fill in "edit-comment-body-und-0-value" with "This is the parent comment"
      And I press the "Save" button
      Then I should see "Your comment has been posted" in the ".messages--status" element


    @javascript
    Scenario: Authenticated users can reply to comments using the filtered text toggle link

      Given I am logged in as "umember1" with password "civicactions"
      And I visit "or1/or1-ne1pu"
      When I click "Disable rich-text"
      Then I should see "Enable rich-text"
      And I fill in "edit-comment-body-und-0-value" with "This is a child comment"
      And I press the "Save" button
      And I wait for "5" seconds
      Then I should see "Join the Conversation"
      And I should see "This is a child comment"


    Scenario: Authenticated users can edit and delete their own comments

      Given I am logged in as "umember1" with password "civicactions"
      And I visit "or1/or1-ne1pu"
      When I follow "edit"
      Then I should see "Edit Comment"
      Then I fill in "edit-comment-body-und-0-value" with "Editing the comment"
      And I press the "Save" button
      Then I should see "Editing the comment"
      When I follow "delete"
      Then I should see "Are you sure you want to delete the comment"
      And I press the "Delete" button
      Then I should see "The comment and all its replies have been deleted." in the ".messages--status" element


    Scenario: Auth users can post comments anonymously

      Given I am logged in as "umember1" with password "civicactions"
      And I visit "or1/or1-ne1pu"
      And I fill in "edit-comment-body-und-0-value" with "This is an anonymous comment"
      And I select the radio button with the id "edit-anonymous-publishing-options-1"
      And I press the "Save" button
      Then I should see "Your comment has been posted" in the ".messages--status" element
      Then I should see the heading "Anonymous"


    @RD-2852 @assignee:ethan.teague @version:Release_v2.002-20160401 @COMPLETED @edit @umember1
    Scenario: Comment owner should see Edit and Edit buttons. RD-2852

      Given I am logged in as "umember1" with password "civicactions"
      And I visit "or1/or1-ne1pu"
      And I fill in "edit-comment-body-und-0-value" with "This is the parent comment"
      And I press the "Save" button
      And I should see "Your comment has been posted" in the ".messages--status" element
      And I should see the CSS selector ".comment-delete"
      And I should see the CSS selector ".comment-edit"
      And I should see the CSS selector ".comment-reply"
      And I am logged out
      And I am logged in as "umember2" with password "civicactions"
      And I visit "or1/or1-ne1pu"
      And I should not see the CSS selector ".comment-delete"
      And I should not see the CSS selector ".comment-edit"
      And I should see the CSS selector ".comment-reply"
      And I am logged out

  #AS ANONYMOUS

    Scenario: Anon users cannot see comments.

      Given I am an anonymous user
      And I visit "or1/or1-ne1pu"
      Then I should not see "Join the conversation"
      And I should not see the CSS selector "#comment-form"
      And I should not see the CSS selector ".pane-node-comments"



  #TODO
  #
  # Scenario: Authenticated users cannot delete their comments if there is a reply (Requires visual testing)
