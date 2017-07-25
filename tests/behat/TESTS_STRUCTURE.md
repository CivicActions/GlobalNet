# Tests Structure

### Purpose
The purpose of this document is to outline how GlobalNET tests are structured; document the nature of the files in the /behat directory, and to document some of the testing conventions we'd like to adopt. 

With any luck, this document will include best practices we've learned to keep tests as representational and as efficient as possible.

### Structure

- /features
  - Contains working Behat tests
- /media
  - Contains media objects for uploading for tests
-/test-work-in-progress
  - Contains tests that need review or are under construction. These include tests that have been removed operational tests for various reasons and need refactoring.
- /zarchive-old
  - Contains old tests, saved for research purposes.
  
####Structure of /features
The files in /features are organized by Drupal function or custom feature. (e.g. node, view, breadcrumb, user, comment, etc.). 

The naming convention is: DrupalFunction.functiontype.functionsubtype.functionaction.feature

#####EXAMPLE

Filename: role.manager.functions

	@api
	Feature: role.manager.functions(1)
    
		@administrator @orgmanager @user (2)
		Scenario: Administrators and Org Managers can access content management pages. RD-1234 (3)

			Given I am logged in as <user> with password "civicactions"
    		And I am at <path>
    		Then I should get a 200 HTTP response
        	Examples:
     	     	| user           | path                    |
     	     	| uorgmanager2   | "/admin/manage/content" |
     	     	| uadmin         | "/admin/manage/content" |
			And then I logout
    
    	@administrator @orgmanager @user
      	Scenario: Administrators and Org Managers can access content management pages.
        	Given I am logged in as <user> with password "civicactions" (4)
        	And I am at <path> (4)
        	Then I should get a 200 HTTP response
        	Examples: (4)
          		| user           | path                    | (4)
          		| uorgmanager2   | "/admin/manage/content" | (4)
          		| uadmin         | "/admin/manage/content" | (4)
        	And then I logout (5)

(1) @ symbols are used as tags which are used to distinguish groupings of tests, across features, that can be run as test subsets

(2) Feature names should equal the filename of the collection of tests, 

(3) Each scenario title should include the Jira Ticket ID associated with the test so that we can later go back to understand the scenario being tested. Scenario titles should be followed by a single empty line.

(4) Ideally tests of multiple user roles that should produce equal results should use the behat array syntax to quickly load data values in and out of tests.

(5) Ideally if a test requires you to login, you should explicitly logout at the end of a test.


####Best Practices

* Features should be groups of tests that test specific, discrete functions. At a certain point, you should split tests up so that the components they test are discrete enough to be managed as a group. Sometimes if tests fail, they cause tests following them to fail as well. We need to make our test groupings as distinct as is practical.

* Ideally if a test requires you to login, you should explicitly logout at the end of a test.

* If you need to login as an authenticated user, with no group permissions using this:

		Given I have accepted terms and am logged in as a user with the "authenticated user" role

	Instead of this:

		Given I am logged in as "umember1" with password "civicactions""

	This will run 2-4x faster.

* Getting a positive HTTP response is the fastest way to see if a function / page /content exists
    
    Then I should get a 200 HTTP response   
    
* When specifying a page, please use a relative url instead of a node title -- it makes it easier to debug if an upstream condition changes something on the page.

    


