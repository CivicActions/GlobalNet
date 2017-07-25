@api
Feature: Content.feature  3m54.09s

  Scenario: Confirm post author name matches name in about author block   @RD-2338 @RD-2989

        Given I am logged in as "umember1" with password "civicactions"
        And I visit "node/{node:title:Or1 Gr1PU Po18GR}"
        #fails here
        Then I should see the text "Umar Member One" in the "sidebar" region
        Then I should see the text "Umar Member One" in the "main content" region


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

  @RD-2393
  Scenario: Confirm correct appearance of author for anonymous posts   @RD-2393

    Given I am logged in as "qa-admin" with password "CivicActions3#"
      When I visit the edit form for node with title "Or1 Po4GR"
        And I select the radio button "Post as Anonymous" with the id "edit-anonymous-publishing-options-1"
        And I press the "Save" button
          Then I should see "Or1 Po4GR"
          And I should see the text "From Or1 | anonymous"
      When I visit "/or1"
        And I click "Posts"
          Then I should see the text "anonymous"
          Then I should see the text "/"


  Scenario: Unpublish content   @RD-2978

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


  Scenario: No private content   @RD-2721

    Given I am logged in as "uadmin" with password "civicactions"
    And I visit the node with title "Or1 Co1PU Cg1PU Pl35PR"
    And I follow "Edit"
    Then I should not see the CSS selector "#edit-field-gn2-simple-access-und-private"



  Scenario: Do not show feedback box w button to public users on groups events courses @RD-3162

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


  @smoke
  Scenario: Administrators can add groups and content.
    Given I have accepted terms and am logged in as a user with the "administrator" role
    When I visit "node/add"
    Then I should see the following <texts>
    | texts               |
    | Alumni Group        |
    | Announcement        |
    | Course              |
    | Course Group        |
    | Custom landing page |
    | Event               |
    | Folder              |
    | Group               |
    | Help                |
    | News                |
    | Organization        |
    | Page                |
    | Poll                |
    | Post                |
    | Publication         |



#   @RD-3172 @OPEN @wip
#   Scenario: Content revisions should be enabled on the listed content types
#
#     Given I am logged in as "uadmin" with password "civicactions"
#     And I visit the system path "node/add/about-page"
#     Then the "edit-revision" checkbox should be checked
#     And I visit the system path "node/add/announcement"
#     Then the "edit-revision" checkbox should be checked
#     And I visit the system path "node/add/course"
#     Then the "edit-revision" checkbox should be checked
#     And I visit the system path "node/add/course-group"
#     Then the "edit-revision" checkbox should be checked
#     And I visit the system path "node/add/program"
#     Then the "edit-revision" checkbox should be checked
#     And I visit the system path "node/add/event"
#     Then the "edit-revision" checkbox should be checked
#     And I visit the system path "node/add/media-gallery"
#     Then the "edit-revision" checkbox should be checked
#     And I visit the system path "node/add/help"
#     Then the "edit-revision" checkbox should be checked
#     And I visit the system path "node/add/group"
#     Then the "edit-revision" checkbox should be checked
#     And I visit the system path "node/add/organization"
#     Then the "edit-revision" checkbox should be checked
#     And I visit the system path "node/add/publication"
#     Then the "edit-revision" checkbox should be checked
#     And I visit the system path "node/add/poll"
#     Then the "edit-revision" checkbox should be checked
#     And I visit the system path "node/add/news"
#     Then the "edit-revision" checkbox should be checked
#     And I visit the system path "node/add/post"
#     Then the "edit-revision" checkbox should be checked
#     And I visit the system path "node/add/announcement"
#     Then the "edit-revision" checkbox should be checked




#   @RD-3132 @assignee:lisa.berry @WIP
#   Scenario: When you try to add a new user to multiple groups, the list of available groups does not reflect groups in the current organization
#
#     Given I am logged in as "uadmin" with password "civicactions"
#     And I visit the system path "/admin/manage/users/add/user?destination=node/16/dashboard&gid=16"
#     #And I click the element with CSS selector ".field-group-fieldset legend span a"
#     Then I should see the text "Event for Group 16: Repeating Event"
#     And I should see the text "A group in GCMC"
#     And I should see the text "news in GCMC"

