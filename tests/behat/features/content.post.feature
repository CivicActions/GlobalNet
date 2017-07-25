@api
Feature: content.post.feature
  As the user I should be able to add posts 10m27.55s

  Scenario Outline: Members, Group Managers, and Org Managers can create Posts within their groups.
    Given I am logged in as <user> with password "civicactions"
    And I go to create "post" content for the <title> group
    And I should see the text "Create Post"
    And I fill in "edit-title" with "Test - Post content"
    And I fill in "edit-body-und-0-value" with "Test - Post description"
    And I check the box "Peace"
    And I select the radio button "Group - Can be viewed only by members of the group." with the id "edit-field-gn2-simple-access-und-group"
    And I press the "Save" button
    Then I should see the text "has been created"
    Examples:
      | user                   | title                     |
      | "umember2"             | "Or2 Gr11GR"              |
      | "uorgmanager1"         | "Or1"                     |
      | "ugroupmanager2"       | "Or2 Gr9SI"               |


  Scenario Outline: members and managers of a group can add posts to that group.

    Given I am logged in as <user> with password "civicactions"
    And I go to create "post" content for the "Or2 Gr12GR" group
    Then the response status code should be <response>
    Examples:
    | user             | response        |
    | "umember2"       | 200             |
    | "ugroupmanager2" | 200             |
    | "uorgmanager2"   | 200             |


  Scenario Outline: Non-members of a group can not add posts to that group.
    Given I am logged in as <user> with password "civicactions"
    And I go to create "post" content for the "Or1 Gr2SI" group
    Then the response status code should be <response>
    Examples:
    | user              | response        |
    | "umember1b"       | 403             |
    | "ugroupmanager1b" | 403             |
    | "uorgmanager1"    | 200             |


@smoke-20
  Scenario Outline: Org_Managers and Admins can create Posts and make them public

    Given I am logged in as <user> with password <password>
      And I go to create "post" content for the "Or2 Gr10OR" group
      And I enter <title> for "edit-title"
      And I enter <body> for "edit-body-und-0-value"
      And I check the box "Peace"
        Then I should see the CSS selector "#edit-field-gn2-simple-access-und-public"
        And I select the radio button "Public - Can be viewed by anyone on the World Wide Web." with the id "edit-field-gn2-simple-access-und-public"
        And I press the "Save" button
          Then I should see the text <response>
    Examples:
      | user           | password       | title                |body                                  |response           |
      | "uorgmanager2" | "civicactions" | "OrgManager Post"    |"This is an org_manager post"         |"has been created" |
      | "uadmin"       | "civicactions" | "Admin Post"         |"This is an admin user post"          |"has been created" |


  @smoke-20
  Scenario Outline: Only can Organization Managers can make a Public Post.
    Given I am logged in as "uadmin" with password "civicactions"
    And I visit the add people form for node with title "Or2 Gr10OR"
    And I enter <user> for "User name"
    And I click the element with CSS selector "#edit-submit"
    And I am logged out
    And I am logged in as <user> with password <password>
    And I go to create "post" content for the "Or2 Gr10OR" group
    And I enter "mephistopheles post 11:11" for "edit-title"
    And I enter "mephistopheles post 11:11" for "edit-body-und-0-value"
    And I check the box "Peace"
    Then I should not see the CSS selector "#edit-field-gn2-simple-access-und-public"

    Examples:
      | user | password |
      | umember2 | civicactions |
      | ugroupmanager2 | civicactions |


  Scenario Outline: All other autheticated users can see public posts
    Given I am logged in as <user_name> with password "civicactions"
    And I visit the node with title "Or1 Gr1PU Po15PU"
    Then I should get a 200 HTTP response
    Examples:
      | user_name      |
      | umember2       |
      | uadmin         |
      | uauthenticated |
      | ugroupmanager2 |
      | uorgmanager2   |


  Scenario Outline: Sitewide posts can be seen by authenticated users
    Given I am logged in as <user_name> with password "civicactions"
    And I visit the node with title "Or1 Gr1PU Po16SI"
    Then I should get a 200 HTTP response
    Examples:
      | user_name      |
      | uadmin         |
      | uauthenticated |
      | ugroupmanager2 |
      | umember1       |
      | uorgmanager2   |



  Scenario Outline: Posts with group visibility can be seen by members of the group

    Given I am logged in as <user_name> with password "civicactions"
    And I visit the node with title "Or1 Gr1PU Po18GR"
    Then I should get a <response> HTTP response
    Examples:
      | user_name       | response    |
      | umember1        | 200         |
      | ugroupmanager1b | 200         |
      | uorgmanager1    | 200         |


  Scenario Outline: Posts with group visibility can not be seen by non-members of the group

    Given I am logged in as <user_name> with password "civicactions"
    And I visit the node with title "Or1 Gr1PU Po18GR"
    # "Or1 Gr1PR Co3OR Po7GR" properly protected
    # "Or2 Gr2GR Co4SI Cg4SI Po12GR" ps check me: can be seen by uorgmanager1
    Then I should get a <response> HTTP response
    Examples:
      | user_name        | response    |
      | umember1b        | 403         |
      | umember2         | 403         |
      | uauthenticated   | 403         |
      | ugroupmanager1   | 403         |
      | uorgmanager1     | 200         |
      | uorgmanager2     | 403         |


  Scenario Outline: Organization content can be seen by members of the organization and child group

    Given I am logged in as <user_name> with password "civicactions"
    And I visit the node with title "Or1 Ev4GR"
    Then I should get a 200 HTTP response
    Examples:
      | user_name      |
      | umember1       |
      | ugroupmanager1 |
      | uorgmanager1   |


  Scenario Outline: Organization content can not be seen by non-members of the organization or child group

    Given I am logged in as <user_name> with password "civicactions"
    And I visit the node with title "Or1 Ev4GR"
    Then I should get a 403 HTTP response
    Examples:
      | user_name      |
      | umember2       |
      | ugroupmanager2 |
    # ps check me: uorgmanger1 should not see, but can
      | uorgmanager2   |


  Scenario: Remove thumbnail image field from Posts  @RD-3117

    Given I am logged in as "ugroupmanager1" with password "civicactions"
    And I visit the edit form for node with title "Or1 Po6PR"
    Then I should not see the CSS selector "#edit-field-thumbnail-image"


  Scenario: Confirm post author name matches name in about author block @RD-2338 @RD-2989

    Given I am logged in as "umember1" with password "civicactions"
    And I visit "node/{node:title:Or1 Gr1PU Po18GR}"
      Then I should see the text "Umar Member One" in the "sidebar" region
      Then I should see the text "Umar Member One" in the "main content" region

