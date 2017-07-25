@api @delete @common
Feature: content.delete.feature

  #### Authenticated user
  # Can delete a node if the user is allowed.


  Scenario: Group Managers can delete groups they manage but no other groups (Course, Group, Event)

    Given I am logged in as "ugroupmanager1" with password "civicactions"
    # Course
    And I visit the delete form for node with title "Or1 Co4GR"
    Then I should get a 200 HTTP response
    And I should see the button "Delete"
    And I visit the delete form for node with title "Or2 Co11GR"
    Then I should get a 403 HTTP response
    # Group
    And I visit the delete form for node with title "Or1 Gr4GR"
    Then I should get a 200 HTTP response
    And I should see the button "Delete"
    And I visit the delete form for node with title "Or2 Gr9SI"
    Then I should get a 403 HTTP response
    # Event
    And I visit the delete form for node with title "Or1 Co1PU Ev25GR"
    Then I should get a 200 HTTP response
    And I should see the button "Delete"
    And I visit the delete form for node with title "Or2 Ev11GR"
    Then I should get a 403 HTTP response


  Scenario: Organization managers can delete groups in their organization but no other groups (Course, Group, Event)

    Given I am logged in as "uorgmanager2" with password "civicactions"
    # Course
    And I visit the delete form for node with title "Or2 Co9SI"
    Then I should get a 200 HTTP response
    And I should see the button "Delete"
    And I visit the delete form for node with title "Or1 Co1PU Cg2SI"
    Then I should get a 403 HTTP response
    # Group
    And I visit the delete form for node with title "Or2 Gr11GR"
    Then I should get a 200 HTTP response
    And I should see the button "Delete"
    And I visit the delete form for node with title "Or1 Gr4GR"
    Then I should get a 403 HTTP response
    # Event
    And I visit the delete form for node with title "Or2 Ev12GR"
    Then I should get a 200 HTTP response
    And I should see the button "Delete"
    And I visit the delete form for node with title "Or1 Pg1PU Ev33GR"
    Then I should get a 403 HTTP response


  Scenario: Administrators can delete all groups (Course, Group, Event)

    Given I am logged in as "uadmin" with password "civicactions"
    # Group
    And I visit the delete form for node with title "Or2 Gr13PR"
    Then I should get a 200 HTTP response
    And I should see the button "Delete"
    And I visit the delete form for node with title "Or1 Gr6PR"
    Then I should get a 200 HTTP response
    And I should see the button "Delete"
    # Event
    And I visit the delete form for node with title "Or1 Gr1PU Ev15PU"
    Then I should get a 200 HTTP response
    And I should see the button "Delete"
    And I visit the delete form for node with title "Or2 Ev9SI"
    Then I should get a 200 HTTP response
    And I should see the button "Delete"
    # Course
    And I visit the delete form for node with title "Or2 Co13PR"
    Then I should get a 200 HTTP response
    And I should see the button "Delete"
    And I visit the delete form for node with title "Or1 Co3OR"
    Then I should get a 200 HTTP response
    And I should see the button "Delete"


  Scenario: Organization managers can delete content in their organization but no other content (News only)

    Given I am logged in as "uorgmanager1" with password "civicactions"
    And I visit the node with title "Or1 Co1PU Cg1PU Po34SI"
    And I press "Manage course group"
    And I visit the delete form for node with title "Or1 Co1PU Cg1PU Po34SI"
    Then I should get a 200 HTTP response
    And I should see the button "Delete"


  Scenario: Administrators can delete any content (Publication, News, Post)

    Given I am logged in as "uadmin" with password "civicactions"
    # Publication
    And I visit the delete form for node with title "Or1 Gr1PU Pu17OR"
    Then I should get a 200 HTTP response
    And I should see the button "Delete"
    And I visit the delete form for node with title "Or2 Pu12GR"
    Then I should get a 200 HTTP response
    And I should see the button "Delete"
    # News
    And I visit the delete form for node with title "Or2 Ne11GR"
    Then I should get a 200 HTTP response
    And I should see the button "Delete"
    And I visit the delete form for node with title "Or1 Pg1PU Ne23SI"
    Then I should get a 200 HTTP response
    And I should see the button "Delete"
    # Post
    And I visit the delete form for node with title "Or1 Gr1PU Po21PR"
    Then I should get a 200 HTTP response
    And I should see the button "Delete"
    And I visit the delete form for node with title "Or2 Po11GR"
    Then I should get a 200 HTTP response
    And I should see the button "Delete"


  Scenario: Group managers can delete content for groups they manage but no other content (News, Post)

    Given I am logged in as "ugroupmanager1" with password "civicactions"
    # News
    And I visit the delete form for node with title "Or1 Co1PU Cg1PU Po33PU"
    Then I should get a 200 HTTP response
    And I should see the button "Delete"
    And I visit the delete form for node with title "Or1 Ne2SI"
    Then I should get a 403 HTTP response
      # Post
    And I visit the delete form for node with title "Or1 Co1PU Po26OR"
    Then I should get a 200 HTTP response
    And I should see the button "Delete"
    And I visit the delete form for node with title "Or1 Gr1PU Po18GR"
    Then I should get a 403 HTTP response



  Scenario: Redirect User to Org page after delete node in Org. @RD-3152

    Given I am logged in as "uorgmanager1" with password "civicactions"
    And I visit the system path "node/add/news?gid={node:title:Or1}"
    And I fill in "edit-title" with "Ishmael"
    And I fill in "edit-body-und-0-value" with "Test news"
    And I check the box "Peace"
    And I click the element with CSS selector "#edit-submit"
    Then I visit the edit form for node with title "Ishmael"
    And I click the element with CSS selector "#edit-submit"
    Then I am at "or1"