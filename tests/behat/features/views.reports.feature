Feature: Views Reports
  Test for access to Views reports

  @RD-3482 @admin
  Scenario: Admins should be able to access the All Bulk Imports Report
    
    Given I am logged in as "uadmin" with password "civicactions"
    And I visit the system path "/admin/people"
    And I follow "Bulk Import Report"
    Then I should get a 200 HTTP response

  @RD-3482 @orgmanager @hrmanager
  Scenario Outline: Org and HR Managers should be able to access the Org Bulk Imports Report
    
    Given I am logged in as <user> with password "civicactions"
    And I visit the system path "/or1/dashboard/bulk-import-report"
    Then I should get a <response> HTTP response

    Examples:
      | user              | response  |
      | uadmin            | 200       |
      | uorgmanager1      | 200       |
      | uhrmanager1b      | 200       |
      | uorgmanager2      | 403       |
      | uhrmanager2b      | 403       |
      | umember1          | 403       |
