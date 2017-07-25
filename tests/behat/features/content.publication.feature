@api
Feature: content.publication.feature

  Scenario Outline: Group Managers can create publications
    Given I am logged in as "ugroupmanager2" with password "civicactions"
    And I go to create <content_type> content for the "Or2 Ev13PR" group
    And I should see the text <text>
    And I fill in "edit-title" with <text>
    And I check the box "Peace"
    And I select the radio button "Group - Can be viewed only by members of the group." with the id "edit-field-gn2-simple-access-und-group"
    And I press the "Save" button
    And I should see the text "has been created"
    Examples:
      | content_type | text                 |
      | publication  | "Create Publication" |


  Scenario Outline: Simple access is present in event add forms.
    Given I am logged in as "uadmin" with password "civicactions"
    And I visit <path>
    Then I should see the CSS selector "#edit-field-gn2-simple-access-und-group"
    Examples:
      | path                    |
      | "/node/add/publication" |


#  Scenario: Publications missing regions & countries taxonomies from entry form @RD-3140
#
#     Given I am logged in as "uorgmanager1" with password "civicactions"
#     And I visit the node with title "Or1 Pg1PU Pu28PR"
#     And I visit the edit form for node with title "Or1 Pg1PU Pu28PR"
#     Then I should see the CSS selector ".collapsed.group-countries"
#     Then I should see the CSS selector ".collapsed.group-regions"

