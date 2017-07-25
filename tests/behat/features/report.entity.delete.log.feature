@api
Feature: report.entity-delete-log.feature

  @RD-3149
  Scenario: Admin Dashboard - Entity Delete Log Report @RD-3149

  Given I am logged in as "uadmin" with password "civicactions"
    When I go to create "news" content for the "Or2 Gr11GR" group
      And I fill in "edit-title" with "News Test content"
      And I fill in "edit-body-und-0-value" with "News Test"
      And I check the box "Peace"
      And I select the radio button "Group - Can be viewed only by members of the group." with the id "edit-field-gn2-simple-access-und-group"
      And I press the "Save" button
        Then I should see the text "has been created"
        When I visit the edit form for node with title "News Test content"
          And I press the "Delete" button
          And I press the "Delete" button
          And I go to "/admin/reports/entity-delete-log"
          Then I should see the text "News Test content"