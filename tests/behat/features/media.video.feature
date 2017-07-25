Feature: media.video.feature

  @RD-3074 @assignee:tom.camp @version:Release_v2.4.0-20160415 @COMPLETED @javascript @wip
  Scenario: YouTube video embed link. RD-3074

    Given I am logged in as "ugroupmanager1" with password "civicactions"
    And I visit the node with title "Or1 Gr2SI"
    And I follow "Add Post"
    And I fill in "edit-title" with "Test Post"
    And I click the element with CSS selector "#cke_27"
    Given I switch to the iframe "mediaBrowser"
    And I click "Web"
    And I fill in "edit-embed-code" with "https://www.youtube.com/watch?v=ck6QG9ME2aU"
    And I press "Next"
    Then I should not see the text "The file cannot be uploaded."
