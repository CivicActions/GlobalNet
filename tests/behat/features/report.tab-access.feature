@api
Feature: report.tab-access.feature


  @RD-2817 @assignee:bob.schmitt @version:3/22_Launch_Release @COMPLETED @ugroupmanager2
  Scenario: Group Manager: Groups

    Given I am logged in as "ugroupmanager1" with password "civicactions"
    And I visit the node with title "Or1 Gr2SI"
    Then I should see "View" in the "drupal tabs" region
    And I should see "Edit" in the "drupal tabs" region
    And I should not see "Forms" in the "drupal tabs" region
    And I should not see "Group" in the "drupal tabs" region
    And I should not see "Track" in the "drupal tabs" region
    And I should not see "Panelizer" in the "drupal tabs" region
    And I should not see "Log" in the "drupal tabs" region


  @RD-2817 @assignee:bob.schmitt @version:3/22_Launch_Release @COMPLETED @ugroupmanager1
  Scenario: Group Manager: Organization

    Given I am logged in as "ugroupmanager1" with password "civicactions"
    And I visit the node with title "Or1"
    Then I should not see the "drupal tabs" region


  @RD-2817 @assignee:bob.schmitt @version:3/22_Launch_Release @COMPLETED @uorgmanager1 @wip
  Scenario: Org Manager: Organization

    Given I am logged in as "uorgmanager1" with password "civicactions"
    And I visit the node with title "Or1"
    Then I should see "View" in the "drupal tabs" region
    And I should see "Edit" in the "drupal tabs" region
    And I should see "Group" in the "drupal tabs" region
    And I should see "Metrics" in the "drupal tabs" region
    And I should see "Manage" in the "drupal tabs" region
    And I should see "Forms" in the "drupal tabs" region


  @RD-2817 @assignee:bob.schmitt @version:3/22_Launch_Release @COMPLETED @uorgmanager1 @wip
  Scenario: Org Manager: Group

    Given I am logged in as "uorgmanager1" with password "civicactions"
    And I visit the node with title "Or1 Gr6PR"
    And I press "Manage group"
    Then I should see "View" in the "drupal tabs" region
    And I should see "Edit" in the "drupal tabs" region
    And I should see "Group" in the "drupal tabs" region
    And I should see "Metrics" in the "drupal tabs" region
    And I should see "Forms" in the "drupal tabs" region
    And I follow "Cancel Membership"
    And I press "Remove"
    Then I should see the text "Join Group"


  @RD-2817 @assignee:bob.schmitt @version:3/22_Launch_Release @COMPLETED @uorgmanager1 @wip
  Scenario: Org Manager: Course

    Given I am logged in as "uorgmanager1" with password "civicactions"
    And I visit the node with title "Or1 Co6PR"
    And I press "Manage course"
    Then I should see "View" in the "drupal tabs" region
    And I should see "Edit" in the "drupal tabs" region
    And I should see "Group" in the "drupal tabs" region
    And I should see "Metrics" in the "drupal tabs" region
    And I should see "Forms" in the "drupal tabs" region
    And I follow "Cancel Membership"
    And I press "Remove"
    Then I should see the text "Join Course"


  @RD-2817 @assignee:bob.schmitt @version:3/22_Launch_Release @COMPLETED @uorgmanager1 @wip
  Scenario: Org Manager: Course Group

    Given I am logged in as "uorgmanager1" with password "civicactions"
    And I visit the node with title "Or1 Co1PU Cg4GR"
    And I press "Manage course group"
    Then I should see "View" in the "drupal tabs" region
    And I should see "Edit" in the "drupal tabs" region
    And I should see "Group" in the "drupal tabs" region
    And I should see "Metrics" in the "drupal tabs" region
    And I should see "Forms" in the "drupal tabs" region
    And I follow "Cancel Membership"
    And I press "Remove"
    Then I should see the text "Join Course Group"


  @RD-2817 @assignee:bob.schmitt @version:3/22_Launch_Release @COMPLETED @uorgmanager1 @wip
  Scenario: Org Manager: Event

    Given I am logged in as "uorgmanager1" with password "civicactions"
    And I visit the node with title "Or1 Co1PU Ev25GR"
    And I press "Manage event"
    Then I should see "View" in the "drupal tabs" region
    And I should see "Edit" in the "drupal tabs" region
    And I should see "Group" in the "drupal tabs" region
    And I should see "Metrics" in the "drupal tabs" region
    And I should see "Forms" in the "drupal tabs" region

