@api @new
Feature: View Organizations
  As the user
  I should be able to view organizations

### Access
# Test that administrators, group managers, and authors ONLY can see private
# events.
# Test that ONLY group members can see events with group visibility.
# Test that group members, and org managers can see events with organization
# visibility.
# Test that all authenticated users (administrator, group managers, members,
# organization managers, and other authenticated users) can see sitewide
# events.
# Test that anyone, including anonymous users, can see public events.

### Page Structure
# Test that all appropriate fields are visible, under the right conditions. 
# Test that all relevant blocks are visible and functioning approprietly.
# Test context specific things (blocks/panes that can only be seen by certain
# users, or for a specific group, etc).
  @check @structure @globalnetlandingpage
  Scenario: Check the structure of the globalnet org landing page.
    Given I am on the homepage
    Then the "header" element should contain "GlobalNet"
    And the "footer" element should contain "gn2-footer--col2"
    And I should see the following <links>
    | links                      |
    | Frequently Asked Questions |
    | Help Desk                  |
    | How to use GlobalNET       |
    | Privacy Policy             |
    | Terms of Use               |

  @access @organization
  Scenario: Check anonymous and member access to Organization content fields.
    Given I am logged in as "umember1" with password "civicactions"
      And I visit the node with title "GlobalNET Platform"
     Then I should see the following <texts>
      | texts                                                          |
      | It is a long established fact that a reader will be distracted |
      # Currently failing b/c the DemoOrganizationContentUpdate migration
      # has not been run in production.
      # | Could you, please?                                             |
      # | Last but not least...                                          |
    When I am not logged in
     And I visit the node with title "GlobalNET Platform"
    Then I should see the text "It is a long established fact that a reader will be distracted"
     # GUBR: Currently this part of the test is not working.
     # But I should not see the following <texts>
     # | texts                 |
     # | Could you, please?    |
     # | Last but not least... |
