@api @wip @SAS
Feature: Simple Access Admin
  As a group manager/organization manager
  I want to easily move multiple pieces of content to be Organization/Sitewide/Public visible
  So usuful content can be easily shared up the chain

  Scenario: Group managers can access the "Promote to Organization" view and actions
    # Only group managers of the relevant group have access.
    Given I am logged in as "uadmin" with password "civicactions"
    Given "group" content: 
      | title          | status | 
      | Test Group 1   |  1     |
    And I visit the last created node
    And I am an "group_manager" of the current group
    And "group" content: 
      | title          | status | 
      | Test Group 2   |  1     |
    And I visit "promote-organization" for the last "group" group
    Then the response status code should be 403

    # Group managers have access.
    And I am not logged in
    And I have accepted terms and am logged in as a user with the "authenticated user" role
    And I visit the last created node
    And I am an "group_manager" of the current group
    And I visit "promote-organization" for the last "group" group
    Then the response status code should be 200
    And I should see the select element "edit-operation" containing "Make Organization"
    
    # Members do not have access.
    And I am not logged in
    And I have accepted terms and am logged in as a user with the "authenticated user" role
    And I visit the last created node 
    And I am a "member" of the current group
    And I visit "promote-organization" for the last "group" group
    Then the response status code should be 403

  Scenario: Organization managers can access the "Promote to Sitewide/Public" view and actions
    # Only org managers of the relevant group have access.
    Given "organization" content: 
      | title          | status | 
      | Test Org 1     |  1     |
    And I have accepted terms and am logged in as a user with the "authenticated user" role
    And I visit the last created node
    And I am an "org_manager" of the current group
    And "organization" content: 
      | title          | status | 
      | Test Org 2     |  1     |
    And I visit "promote-sitewide-public" for the last "organization" group
    Then the response status code should be 403
    
    # Org managers have access.
    And I am not logged in
    And I have accepted terms and am logged in as a user with the "authenticated user" role
    And I visit the last created node
    And I am an "org_manager" of the current group
    And I visit "promote-sitewide-public" for the last "organization" group
    Then the response status code should be 200
    And I should see the select element "edit-operation" containing "Make Sitewide"
    And I should see the select element "edit-operation" containing "Make Public"
    
    # Members do not have access.
    And I am not logged in
    And I have accepted terms and am logged in as a user with the "authenticated user" role
    And I visit the last created node 
    And I am a "member" of the current group
    And I visit "promote-sitewide-public" for the last "group" group
    Then the response status code should be 403
