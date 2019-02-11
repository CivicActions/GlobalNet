@api
Feature: content.nodes


  @RD-2338 @RD-2989 @assignee:ana.willem @assignee:eric.napier @version:3/22_Launch_Release @OPEN @hillary @member @umember1
  Scenario: Confirm post author name matches name in about author block

    Given I am logged in as "umember1" with password "civicactions"
    And I visit "node/{node:title:Or1 Gr1PU Po18GR}"
    #fails here
    Then I should see the text "Umar Member One" in the "sidebar" region
    Then I should see the text "Umar Member One" in the "main content" region


  @RD-2416 @assignee:richard.gilbert @version:3/22_Launch_Release @COMPLETED @administrator @uadmin
  Scenario: Confirm news node org and author info is accurate

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


  @RD-2386 @assignee:ethan.teague @version:OT_Release @COMPLETED @uadmin
  Scenario: Results tab not on Poll

    Given I am logged in as "uadmin" with password "civicactions"
    And I visit the node with title "q1"
    Then I should not see "Results" in the "content"


  @RD-2386 @assignee:ethan.teague @version:OT_Release @COMPLETED @uadmin
  Scenario: Ensure Poll Results page isn't 404 with no results

    Given I am logged in as "uadmin" with password "civicactions"
    And I visit the node with title "q1"
    And I click "Votes"
    Then I should see "This table lists all the recorded votes for this poll. If anonymous users are allowed to vote, they will be identified by the IP address of the computer they used when they voted." in the "content"


  @RD-2386 @assignee:ethan.teague @version:OT_Release @COMPLETED @uadmin
  Scenario: Ensure Poll Results Page shows results

    Given I am logged in as "uadmin" with password "civicactions"
    Then I click "a"
    Then I click "submit"
    And I visit "gcmc/q1/votes"
    Then I should see the link "uadmin"
    And I click "uadmin"
    Then I should see the text "Ura Admin Istrator"


  @RD-2480 @assignee:alexis.saransig @version:OT_Release @COMPLETED @uadmin
  Scenario: Should not be able to create User Profile Updates

    Given I am logged in as "uadmin" with password "civicactions"
    And I visit "node/add/user_profile_updates"
    Then I should get a 200 HTTP response
    And I should see the text "Add content"



  @RD-2653 @assignee:jen.harris @version:3/22_Launch_Release @COMPLETED @uorgmanager2
  Scenario: Org_manager should be able to add a Course content type to Organization

    Given I am logged in as "uorgmanager2" with password "civicactions"
    And I go to create "course" content for the "Or2" group
    Then I should see the text "Or2"
    And I fill in "edit-title" with "Create Course"
    And I fill in "edit-body-und-0-value" with "Create Course"
    And I check the box "Peace"
    And I select the radio button "Group - Can be viewed only by members of the group." with the id "edit-field-gn2-simple-access-und-group"
    And I select "open" from "edit-gn2-og-form-options"
    And I press the "Save" button
    And I should see the text "has been created"


  @RD-2653 @assignee:jen.harris @version:3/22_Launch_Release @COMPLETED @uorgmanager2
  Scenario: Org_manager should be able to add a Group content type to Organization

    Given I am logged in as "uorgmanager2" with password "civicactions"
    And I go to create "group" content for the "Or2" group
    Then I should see the text "Or2"
    And I fill in "edit-title" with "Create Group"
    And I fill in "edit-body-und-0-value" with "Create Group"
    And I check the box "Peace"
    And I select the radio button "Group - Can be viewed only by members of the group." with the id "edit-field-gn2-simple-access-und-group"
    And I select "open" from "edit-gn2-og-form-options"
    And I press the "Save" button
    And I should see the text "has been created"


  @RD-2515 @assignee:alexis.saransig @version:3/22_Launch_Release @COMPLETED @ugroupmanager2
  Scenario: Event form, you should see the updated help text for Date Description field

    Given I am logged in as "ugroupmanager2" with password "civicactions"
    And I go to create "event" content for the "Or2 Gr9SI" group
    And I should see the text "READ BEFORE USING THIS FIELD"


  @RD-2692 @version:3/22_Launch_Release @COMPLETED @uadmin
  Scenario: Confirm no preview button for comments

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


  @RD-2769 @assignee:tom.camp @version:3/22_Launch_Release @COMPLETED @umember1b @uorgmanager1
  Scenario: Simple Access: Group

    Given I am logged in as "uorgmanager1" with password "civicactions"
    And I visit the node with title "Or1"
    And I follow "Edit"
    And I select "Open" from "edit-gn2-og-form-options"
    And I fill in "edit-field-footer-description-und-0-value" with "This is the Special Content"
    And I check the box "edit-og-menu"
    And I press the "Save" button
    And I follow "Add member"
    And I fill in "edit-name" with "umember1b"
    And I press the "Add users" button
    Then I go to "user/logout"

    Given I am logged in as "umember1b" with password "civicactions"
    And I visit the node with title "Or1"
    And I follow "Groups"
    Then I should see the text "Search group content"
    Then I should not see the text "Or1 Gr4GR"


  @RD-2761 @version:3/22_Launch_Release @COMPLETED @uorgmanager1
  Scenario: Comment settings access: Org Manager

    Given I am logged in as "uorgmanager1" with password "civicactions"
    And I visit the node with title "Or1"
    And I follow "Add News"
    Then I should see the text "Comment settings"


  @RD-2875 @assignee:alexis.saransig @version:3/22_Launch_Release @COMPLETED @uadmin
  Scenario: Organization, Small Logo field with updated help text

    Given I am logged in as "uadmin" with password "civicactions"
    And I visit "node/add/organization"
    Then I should see the text 'This logo appears in the right sidebar with the “About” content, as well as on the “GlobalNET Partners” listing page.'


  @RD-2876 @assignee:alexis.saransig @version:3/22_Launch_Release @COMPLETED @uadmin
  Scenario: Organization form, Updated field names for Special Content field

    Given I am logged in as "uadmin" with password "civicactions"
    And I visit "node/add/organization"
    Then I should see the text "Footer Content"
    And I should see the text "Footer Description"
    And I should see the text "Footer Links"


  @RD-2978 @version:Release_v2.002-20160401 @COMPLETED
  Scenario: Unpublish content

    Given I am logged in as "uadmin" with password "civicactions"
    # Poll
    And  I visit the edit form for node with title "Or1 Co1PU Cg1PU Pl35PR"
    And I press the "Unpublish" button
    Then I should see the text "Unpublished"
    And  I visit the edit form for node with title "Or1 Co1PU Cg1PU Pl35PR"
    Then I press the "Publish" button
    # News
    And I visit the edit form for node with title "Or1 Pg1PU Ne28PR"
    #And I click the element with CSS selector ".group-topics legend span a"
    And I check the box "Peace"
    And I press the "Unpublish" button
    Then I should see the text "Unpublished"
    And I visit the edit form for node with title "Or1 Pg1PU Ne28PR"
    Then I press the "Publish" button
    # Post
    And  I visit the edit form for node with title "Or1 Po6PR"
    And I press the "Unpublish" button
    Then I should see the text "Unpublished"
    And  I visit the edit form for node with title "Or1 Po6PR"
    Then I press the "Publish" button
    # Announcement
    And I visit the edit form for node with title "Or1 Co1PU Cg1PU An49PR"
    And I press the "Unpublish" button
    Then I should see the text "Unpublished"
    And I visit the edit form for node with title "Or1 Co1PU Cg1PU An49PR"
    Then I press the "Publish" button
    # Publication
    And I visit the edit form for node with title "Or2 Pu14PR"
    And I press the "Unpublish" button
    Then I should see the text "Unpublished"
    And I visit the edit form for node with title "Or2 Pu14PR"
    Then I press the "Publish" button


  @RD-2721 @assignee:tom.camp @version:3/25_Release @COMPLETED
  Scenario: No private contet

    Given I am logged in as "uadmin" with password "civicactions"
    And I visit the node with title "Or1 Co1PU Cg1PU Pl35PR"
    And I follow "Edit"
    Then I should not see the CSS selector "#edit-field-gn2-simple-access-und-private"


  @RD-3007 @assignee:ana.willem @COMPLETED
  Scenario: Course/Event language appears on content if not English

    Given I am logged in as "uorgmanager1" with password "civicactions"
    And I visit the edit form for node with title "Or1 Co1PU"
    And I select "French" from "edit-field-language-und"
    And I select "Open" from "edit-gn2-og-form-options"
    And I select the radio button "Peace" with the id "edit-field-topic-und-10"
    And I click the element with CSS selector "#edit-submit"
    Then I should see the CSS selector ".field-name-field-language"


  @RD-3139 @assignee:ana.willem @COMPLETED
  Scenario: Topics need to be required on News

    Given I am logged in as "uorgmanager1" with password "civicactions"
    And I visit the system path "node/add/news?gid={node:title:Or1}"
    Then I should see the CSS selector ".required-fields.group-topics"


  @RD-3117 @assignee:ana.willem @COMPLETED
  Scenario: Remove thumbnail image field from Posts

    Given I am logged in as "ugroupmanager1" with password "civicactions"
    And I visit the edit form for node with title "Or1 Po6PR"
    Then I should not see the CSS selector "#edit-field-thumbnail-image"


  @RD-3162 @assignee:ana.willem @COMPLETED
  Scenario: Do not show feedback box w button to public users on groups events courses

    Given I am an anonymous user
    And I visit the system path "node/{node:title:Or1 Gr1PU Co15PU}"
    Then I should get a 200 HTTP response
    And I should not see the text "Have a question or comment about this" in the "sidebar" region
    And I visit the system path "node/{node:title:Or1 Gr1PU}"
    Then I should get a 200 HTTP response
    And I should not see the text "Have a question or comment about this" in the "sidebar" region
    And I visit the system path "node/{node:title:Or1 Ev1PU}"
    Then I should get a 200 HTTP response
    And I should not see the text "Have a question or comment about this" in the "sidebar" region


  @RD-3152 @assignee:ana.willem @COMPLETED
  Scenario: Redirect User to Org page after delete node in Org.

    Given I am logged in as "uorgmanager1" with password "civicactions"
    And I visit the system path "node/add/news?gid={node:title:Or1}"
    And I fill in "edit-title" with "Ishmael"
    And I fill in "edit-body-und-0-value" with "Test news"
    And I check the box "Peace"
    And I click the element with CSS selector "#edit-submit"
    Then I visit the edit form for node with title "Ishmael"
    And I click the element with CSS selector "#edit-submit"
    Then I am at "or1"


  @RD-3175 @assignee:ana.willem @COMPLETED
  Scenario: Associated Countries block should not read Associated Countries & Regions on EVENTS pages

    Given I am logged in as "uadmin" with password "civicactions"
    And I visit the system path "gcmc/mark-twain-101/event-for-mark-twain-101"
    Then I should not see the text "Associated Countries & Regions" in the "sidebar" region


  @RD-3172
  Scenario: Content revisions should be enabled on the listed content types

    Given I am logged in as "uadmin" with password "civicactions"
    And I visit the system path "node/add/about-page"
    Then the "edit-revision" checkbox should be checked
    And I visit the system path "node/add/announcement"
    Then the "edit-revision" checkbox should be checked
    And I visit the system path "node/add/course"
    Then the "edit-revision" checkbox should be checked
    And I visit the system path "node/add/course-group"
    Then the "edit-revision" checkbox should be checked
    And I visit the system path "node/add/program"
    Then the "edit-revision" checkbox should be checked
    And I visit the system path "node/add/event"
    Then the "edit-revision" checkbox should be checked
    And I visit the system path "node/add/media-gallery"
    Then the "edit-revision" checkbox should be checked
    And I visit the system path "node/add/help"
    Then the "edit-revision" checkbox should be checked
    And I visit the system path "node/add/group"
    Then the "edit-revision" checkbox should be checked
    And I visit the system path "node/add/organization"
    Then the "edit-revision" checkbox should be checked
    And I visit the system path "node/add/publication"
    Then the "edit-revision" checkbox should be checked
    And I visit the system path "node/add/poll"
    Then the "edit-revision" checkbox should be checked
    And I visit the system path "node/add/news"
    Then the "edit-revision" checkbox should be checked
    And I visit the system path "node/add/post"
    Then the "edit-revision" checkbox should be checked
    And I visit the system path "node/add/announcement"
    Then the "edit-revision" checkbox should be checked


  @RD-3135 @assignee:ana.willem @COMPLETED
  Scenario: Recommended Links Text

    Given I am logged in as "uadmin" with password "civicactions"
    And I visit the system path "node/add/course"
    Then I should see the text "Links will appear in the sidebar on the Course Landing Page."


  @RD-3132 @assignee:lisa.berry @WIP
  Scenario: When you try to add a new user to multiple groups, the list of available groups does not reflect groups in the current organization

    Given I am logged in as "uadmin" with password "civicactions"
    And I visit the system path "/admin/manage/users/add/user?destination=node/16/dashboard&gid=16"
    #And I click the element with CSS selector ".field-group-fieldset legend span a"
    Then I should see the text "Event for Group 16: Repeating Event"
    And I should see the text "A group in GCMC"
    And I should see the text "news in GCMC"

