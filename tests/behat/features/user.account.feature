@api
Feature: user.account


  @RD-2332 @assignee:richard.gilbert @version:OT_Release @COMPLETED @edit @umember1
  Scenario: Testing for multiple user account attributes for umember1

    Given I am logged in as "umember1" with password "civicactions"

      ### A user can add social media links to their profile

      And I visit the edit profile form for user "umember1" with open tab "Contact Info"
      And I enter "http://www.linkedin.com/in/irisibekwe" for 'LinkedIn'
      And I enter "https://www.facebook.com/bixgomez" for 'Facebook'
      And I enter "https://twitter.com/bixgomez/" for 'Twitter'
      And I enter "http://junkdrawerphotos.com/" for 'Website'
      And I press the "Save" button

      And I visit "/users/umember1"
      Then I should see the link "LinkedIn"
      And I should see the link "Facebook"
      And I should see the link "Twitter"
      And I should see the link "Website"

      ### Specific help text for profile photo appears in edit form

      And I visit the edit profile form for user "umember1" with open tab "Basic Info"
      Then I should see the text "Your virtual face or picture. Pictures larger than 500x500 pixels will be scaled down. For best results, please upload a JPG image."
      And I should not see the text "Profile photo is limited to 100KB in size."

      ### Member can edit profile @RD-3003 and update email address  @RD-2328 @umember1

      And I visit "/account"
      And I follow "Edit My Profile & Settings"
      And I follow "Change email address »"
      Then the url should match "/users/umember1/email"

      ### Shortcut link to Change Notification Settings is appropriate @RD-3158

      And I visit "/account"
      And I follow "Change Notification Settings"
      Then the url should match "/users/umember1/edit"

      And I visit "/users/umember1"
      And I follow "Change Notification Settings"
      Then the url should match "/users/umember1/edit"

      ### Member should be able to update the Employer section @RD-2648 @umember1

      And I visit "users/umember1/edit"
      And I fill in "edit-field-employers-und-0-field-employers-company-und-0-value" with "Company Test"
      And I fill in "edit-field-employers-und-0-field-employment-dates-und-0-value-datepicker-popup-0" with "Jan 2015"
      And I click the element with CSS selector "#edit-submit--2"
      Then I should see the text "Company Test"

      ### Test for specific help text for telephone info in edit form @RD-2985

      And I visit the edit profile form for user "umember1" with open tab "Contact Info"
      Then I should see the text 'Turning off "Receive Notifications" will turn off SMS and Email notifications. If you enter a mobile number and have these notifications enabled, you will get SMS messages from GlobalNET when other users send you messages.'

      ### Member should see updated message in user edit page  @RD-2347 @RD-2970

      And I visit the edit profile form for user "umember1" with open tab "settings"
      Then I should get a 200 HTTP response
      And I select the radio button "No" with the id "edit-state-1"
      And I press the "Save" button
      And I visit the edit profile form for user "umember1" with open tab "settings"
      And I should see "Your notifications are suspended"
      And I click "here"

      ### Test of password policy @RD-2367  @RD-2334 @umember1

      And I visit "/account"
      And I follow "Edit My Profile & Settings"
      And I follow "Change password »"
      Then the url should match "/users/umember1/password"
      Then I should see "Password must contain at least one digit."
      And I should see "Password must not match last 8 passwords."
      And I should see "Password must be at least 8 characters in length."
      And I should see "Password must contain at least one punctuation (not whitespace or an alphanumeric) character."
      And I should see "Password must contain at least one uppercase character."


  Scenario: Failed login attempt returns message of failed login @RD-2150 @RD-3100 @umember1

    Given I am logged in as "umember1" with password "civicactions"
    And I follow "Log out"
    And I am on the homepage
    And I enter "umember1" for 'Username'
    And I enter "civicact" for 'Password'
    And I press the 'Log in' button
    Then I should see the text "remaining before your account is temporarily blocked"


  @RD-3221 @assignee:tom.camp @COMPLETED
  Scenario: Request an account

    Given I am not logged in
    And I visit the node with title "Or1"
    And I follow "Request an account"
    And I press "Accept"
    Then I should see the text "Step 1 of 2"
