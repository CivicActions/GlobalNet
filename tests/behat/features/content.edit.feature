@api @edit
Feature: Editing Nodes

  @orgmanager @simpleaccess @content @group @smoke2
  Scenario: Organization managers can edit content and groups and change simple access settings to group, organization
  sitewide, and public.
    Given I am logged in as "uorgmanager1" with password "civicactions"
    # Course
    And I visit the edit form for node with title "Or1 Co1PU Cg1PU"
    Then I should see the CSS selector "#edit-field-gn2-simple-access-und-group"
    Then I should see the CSS selector "#edit-field-gn2-simple-access-und-organization"
    Then I should see the CSS selector "#edit-field-gn2-simple-access-und-sitewide"
    Then I should see the CSS selector "#edit-field-gn2-simple-access-und-public"
    # Event
    And I visit the edit form for node with title "Or1 Co1PU Ev25GR"
    Then I should see the CSS selector "#edit-field-gn2-simple-access-und-group"
    Then I should see the CSS selector "#edit-field-gn2-simple-access-und-organization"
    Then I should see the CSS selector "#edit-field-gn2-simple-access-und-sitewide"
    Then I should see the CSS selector "#edit-field-gn2-simple-access-und-public"
    # Group
    And I visit the edit form for node with title "Or1 Gr3OR"
    Then I should see the CSS selector "#edit-field-gn2-simple-access-und-group"
    Then I should see the CSS selector "#edit-field-gn2-simple-access-und-organization"
    Then I should see the CSS selector "#edit-field-gn2-simple-access-und-sitewide"
    Then I should see the CSS selector "#edit-field-gn2-simple-access-und-public"
    # News
    And I visit the edit form for node with title "Or1 Gr1PU Ne17OR"
    Then I should see the CSS selector "#edit-field-gn2-simple-access-und-group"
    Then I should see the CSS selector "#edit-field-gn2-simple-access-und-organization"
    Then I should see the CSS selector "#edit-field-gn2-simple-access-und-sitewide"
    Then I should see the CSS selector "#edit-field-gn2-simple-access-und-public"
    # Post
    And I visit the edit form for node with title "Or1 Co1PU Po27GR"
    Then I should see the CSS selector "#edit-field-gn2-simple-access-und-group"
    Then I should see the CSS selector "#edit-field-gn2-simple-access-und-organization"
    Then I should see the CSS selector "#edit-field-gn2-simple-access-und-sitewide"
    Then I should see the CSS selector "#edit-field-gn2-simple-access-und-public"
    # Publication
    And I visit the node with title "Or1 Pg1PU Pu26GR"
    And I press "Manage program"
    And I visit the edit form for node with title "Or1 Pg1PU Pu26GR"
    Then I should see the CSS selector "#edit-field-gn2-simple-access-und-group"
    Then I should see the CSS selector "#edit-field-gn2-simple-access-und-organization"
    Then I should see the CSS selector "#edit-field-gn2-simple-access-und-sitewide"
    Then I should see the CSS selector "#edit-field-gn2-simple-access-und-public"

  @groupmanager @simpleaccess @group @RD-2989
  Scenario: Group managers can edit groups and change simple access settings to group, and organization
  but not sitewide or public. Group managers can edit News, Post and Publication content and change simple access settings
  to group, organization, but not sitewide or public.
    Given I am logged in as "ugroupmanager1" with password "civicactions"
    # Post
    And I visit the edit form for node with title "Or1 Co1PU Cg1PU Po36GR"
    Then I should see the CSS selector "#edit-field-gn2-simple-access-und-group"
    Then I should see the CSS selector "#edit-field-gn2-simple-access-und-organization"
    Then I should not see the CSS selector "#edit-field-gn2-simple-access-und-sitewide"
    Then I should not see the CSS selector "#edit-field-gn2-simple-access-und-public"
    # Event
    And I visit the edit form for node with title "Or1 Co1PU Ev28PR"
    Then I should see the CSS selector "#edit-field-gn2-simple-access-und-group"
    Then I should see the CSS selector "#edit-field-gn2-simple-access-und-organization"
    Then I should not see the CSS selector "#edit-field-gn2-simple-access-und-sitewide"
    Then I should not see the CSS selector "#edit-field-gn2-simple-access-und-public"
    # Group
    And I visit the edit form for node with title "Or1 Gr5GR"
    Then I should see the CSS selector "#edit-field-gn2-simple-access-und-group"
    Then I should see the CSS selector "#edit-field-gn2-simple-access-und-organization"
    Then I should not see the CSS selector "#edit-field-gn2-simple-access-und-sitewide"
    Then I should not see the CSS selector "#edit-field-gn2-simple-access-und-public"

    Then I visit the system path "/user/logout"

    Given I am logged in as "ugroupmanager1b" with password "civicactions"
    # News
    And I visit the edit form for node with title "Or1 Gr1PU Ne19GR"
    Then I should see the CSS selector "#edit-field-gn2-simple-access-und-group"
    Then I should see the CSS selector "#edit-field-gn2-simple-access-und-organization"
    Then I should not see the CSS selector "#edit-field-gn2-simple-access-und-sitewide"
    Then I should not see the CSS selector "#edit-field-gn2-simple-access-und-public"
    # Course
    And I visit the edit form for node with title "Or1 Gr1PU Co18GR"
    Then I should see the CSS selector "#edit-field-gn2-simple-access-und-group"
    Then I should see the CSS selector "#edit-field-gn2-simple-access-und-organization"
    Then I should not see the CSS selector "#edit-field-gn2-simple-access-und-sitewide"
    Then I should not see the CSS selector "#edit-field-gn2-simple-access-und-public"
    # Publication
    And I visit the edit form for node with title "Or1 Pg1PU Pu26GR"
    Then I should see the CSS selector "#edit-field-gn2-simple-access-und-group"
    Then I should see the CSS selector "#edit-field-gn2-simple-access-und-organization"
    Then I should not see the CSS selector "#edit-field-gn2-simple-access-und-sitewide"
    Then I should not see the CSS selector "#edit-field-gn2-simple-access-und-public"

  @feature @groupmanager @group
  Scenario Outline: Group manager, can change Group settings
    Given I am logged in as <user> with password "civicactions"
    And I visit the edit form for node with title <title>
    Then I should see the text <settings_title>
    And I should see the CSS selector "#edit-gn2-og-form-options"
    Examples:
      | user             | settings_title              | title                                       |
      | "ugroupmanager1" | "Membership Settings"       | "Or1 Co1PU Cg2SI"                           |
      | "ugroupmanager2" | "Membership Settings"       | "Or2 Gr9SI"                                 |

  #### Group members
  # Group members can make content group, but cannot
  # make it organization, sitewide or public.
  @member @content @group @simpleaccess
  Scenario: Group members can make content group, but can
  not make it organization, sitewide or public. (excludes News and Publication)
    Given I am logged in as "umember1" with password "civicactions"
    # Post
    And I visit the edit form for node with title "Or1 Gr1PU Po18GR"
    Then I should see the CSS selector "#edit-field-gn2-simple-access-und-group"
    Then I should not see the CSS selector "#edit-field-gn2-simple-access-und-organization"
    Then I should not see the CSS selector "#edit-field-gn2-simple-access-und-sitewide"
    Then I should not see the CSS selector "#edit-field-gn2-simple-access-und-public"

  @orgmanager @content @group
  Scenario: Org Managers can edit groups and content under their organization.
    Given I am logged in as "uorgmanager1" with password "civicactions"
    # Course
    And I visit the edit form for node with title "Or1 Gr1PU Co19GR"
    Then I should get a 200 HTTP response
    # Event
    And I visit the edit form for node with title "Or1 Gr1PU Ev19GR"
    Then I should get a 200 HTTP response
    # Group
    And I visit the edit form for node with title "Or1 Gr7PR"
    Then I should get a 200 HTTP response
    # News
    And I visit the edit form for node with title "Or1 Gr1PU Ne19GR"
    Then I should get a 200 HTTP response
    # Post
    And I visit the edit form for node with title "Or1 Co1PU Po32PR"
    Then I should get a 200 HTTP response
    # Publication
    And I visit the edit form for node with title "Or1 Pg1PU Pu25GR"
    Then I should get a 200 HTTP response

  @administrator @content @group
  Scenario: Administrators can edit groups and content.
    Given I am logged in as "uadmin" with password "civicactions"
    # Course
    And I visit the edit form for node with title "Or2 Co10OR"
    Then I should get a 200 HTTP response
    # Event
    And I visit the edit form for node with title "Or1 Pg1PU Ev29PU"
    Then I should get a 200 HTTP response
    # Group
    And I visit the edit form for node with title "Or2 Gr13PR"
    Then I should get a 200 HTTP response
    # News
    And I visit the edit form for node with title "Or2 Ne10OR"
    Then I should get a 200 HTTP response
    # Post
    And I visit the edit form for node with title "Or1 Co1PU Po26OR"
    Then I should get a 200 HTTP response
    # Publication
    And I visit the edit form for node with title "Or1 Gr1PU Pu21PR"
    Then I should get a 200 HTTP response

  @member @content @edit
  Scenario Outline: Group members can edit their own content
    Given I am logged in as "umember1" with password "civicactions"
    And I visit the edit form for node with title "<title>"
    Then I should get a <response> HTTP response
    Examples:
    # Post -- Members can only create Posts
      | title                                                               | response |
      | Or1 Co1PU Po30PR                                                    | 200      |

  @admin @edit @content @diff @69farts
  Scenario: Administrators should be able to diff edits
    Given I am logged in as "uadmin" with password "civicactions"
    And I visit the node with title "Or1 Gr1PU"
    And I click "Edit"
    And I select "open" from "edit-gn2-og-form-options"
    And I press the "edit-submit" button
    And I follow "Revisions"
    Then I should get a 200 HTTP response

  @admin @member @edit @content @RD-3587
  Scenario: Administrators should see the panelizer tab
    Given I am logged in as "uadmin" with password "civicactions"
    And I visit the node with title "Or1"
    Then I should see the link "Customize display"

  @admin @member @edit @content @RD-3587
  Scenario: Org managers should not see the panelizer tab
    Given I am logged in as "uorgmanager1" with password "civicactions"
    And I visit the node with title "Or1"
    Then I should not see the link "Customize display"
