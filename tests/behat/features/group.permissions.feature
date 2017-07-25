@api
Feature: group.permissions.feature
  Tests group permissions. Run time: 7m18.020s

  #Do the first couple of scenarios actually test what they say they test? Are these real, actionable steps?

  Scenario: Members of a group should be able to access all groups and content within their group

    Given I am a group member
    Then I should be able to access courses, events and groups with any privacy or moderation setting within my group
    And I should be able to access announcement, news, poll, post and publication content with any privacy or moderation setting within my group

  Scenario: Non-members of a group can only access groups and group content under certain conditions

    Given I am not a member of a group
      Then I should be able to access courses, events and groups with "open,moderated,closed" moderation and "public,sitewide" privacy settings
        And I should be able to access announcement, news, poll, post and publication content with "open,moderated,closed" moderation and "public,sitewide" privacy settings
        And I should not be able to access courses, events and groups with "open,moderated,closed" moderation and "organization,group" privacy settings
        And I should not be able to access announcement, news, poll, post and publication content with "open,moderated,closed" moderation and "organization,group" privacy settings


  Scenario: Test if Participant list exists, Admin can view but nonmember cannot view. RD-2304

    Given I am logged in as "qa-admin" with password "CivicActions3#"
    And I visit the node with title 'A Course for "A group in GCMC"' with open tab "Participants"
      Then I should get a 200 HTTP response
    And I am logged out

    When I am logged in as "umember1" with password "civicactions"
      And I visit the node with title 'A Course for "A group in GCMC"'
        Then I should not see the text "Participants"

