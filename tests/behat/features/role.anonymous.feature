@api
Feature: role.anonymous
  Testing various anonymous user scenarios 0m51.847s

  Background: Given I am an anonymous user
    Given I am an anonymous user

    Scenario: Anonymous users can see error messages when they put in the wrong password @RD-2309 @anonymous

        When I visit "/gcmc"
        And I fill in "edit-name" with "bogususer"
        And I fill in "edit-pass" with "boguspass"
        And I press "Log in"
          Then I should see "Sorry, unrecognized username or password" in the ".messages" element

    Scenario: Anonymous users should not be permitted to view various system paths

      ### Anonymous user cannot add content
      ### THIS SCRIPT WON'T WORK ANYMORE IF AN ANONYMOUS USER CAN CREATE A SUPPORT CONTENT.
        #When I visit the system path "node/add"
          #Then the response status code should be 403

      ### Anonymous should not see Admin Group Menu @RD-2722 @anonymous
        When I visit "/gcmc"
          Then I should not see the text "Group Admin Menu"

      ### Anonymous should not be able to admin groups.
        When I visit the system path "node/add/course?gid={node:title:Or2}"
          Then the response status code should be 403

        When I visit the system path "node/add/event?gid={node:title:Or2}"
         Then the response status code should be 403

        When I visit the system path "group/node/{node:title:Or1}/admin/people"
         Then the response status code should be 403

        When I visit the system path "admin"
          Then the response status code should be 403

      ### Anonymous user should not see the Add Folder button  @RD-1937 @anonymous
        When I visit "/gcmc"
          And I click "Files"
            Then I should not see "Add Folder"

   @smoke
    Scenario: Anonymous User shoulds see public landing pages
        When I am on the homepage
          Then I should get a "200" HTTP response
          And I should see the button 'Log in'


 Scenario: Sitewide posts can not be seen by anonymous users

    Given I visit the node with title "Or1 Gr1PU Po16SI"
    Then I should get a 403 HTTP response

