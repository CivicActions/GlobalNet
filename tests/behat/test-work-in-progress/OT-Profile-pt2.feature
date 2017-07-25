@api @edit @profile @ot @WIP
Feature:
  To manage my Profile info
  as a Member I access my account
  to change email, language, timezone, password

  @member @group @wip
  Scenario Outline: A Member edits their email, language, timezone, password

    Given I am logged in as <user> with password <password>

    Then I visit "/account"
    Then I should see the text "GROUPS"
    And I should see the text "COURSES"
    And I should see the text "CONTACTS"
    And I should see the text "POSTS"
    And I should see the text "EVENTS"
    And I should see the text "FAVORITES"
    And I should see the text "ACTIVITY"
    And I should see the text "POLLS"

    # Messages
    And I click on the element with xpath "//a[contains(@href,'/inbox/messages')]"
    And I should see the text "Inbox"
    And I should see the link "New message"
    And I should see the link "Messages"

    # Notifications
    And I click on the element with xpath "//a[contains(@href,'/inbox/notifications')]"
    And I should see the text "Notifications"
    And I should see the link "New message"
    And I should see the link "Notifications"

    # Language: Change to French
    And I visit the edit profile form for user <user> with open tab <tab_1>
    Then I should get a 200 HTTP response
    Then I should see the select element "edit-language" containing "English"
    And I select "French" from "edit-language"
    And I press the "Save" button
    Then I should see the text "The changes have been saved."
    # Language: Change from Francais (French) back to Anglais (English)
    And I visit the edit profile form for user <user> with open tab <tab_1>
    Then I should get a 200 HTTP response
    And I should see the option "Français" selected in "edit-language" dropdown
    And I select "Anglais" from "edit-language"
    And I press the "Enregistrer" button
    Then I should see the text "Les changements ont été enregistrés."

    # Timezone: Change from NYC to Amsterdam
    And I visit the edit profile form for user <user> with open tab <tab_1>
    Then I should get a 200 HTTP response
    Then I should see the select element "edit-timezone--2" containing "America/New York"
    And I select "Europe/Amsterdam" from "edit-timezone--2"
    And I press the "Save" button
    Then I should see the text "The changes have been saved."
    # Timezone: Change back from Amsterdam to NYC
    And I visit the edit profile form for user <user> with open tab <tab_1>
    Then I should get a 200 HTTP response
    And I should see the option "Europe/Amsterdam" selected in "edit-timezone--2" dropdown
    And I select "America/New York" from "edit-timezone--2"
    And I press the "Save" button
    Then I should see the text "The changes have been saved."
    And I visit the edit profile form for user <user> with open tab <tab_1>
    Then I should get a 200 HTTP response
    And I should see the option "America/New_York" selected in "edit-timezone--2" dropdown

    # Email: Change email
    And I visit the edit profile form for user <user> with open tab <tab_1>
    Then I should get a 200 HTTP response
    Then I click "Change email address"
    And I should see the text "Change email address for"
    Then I fill in "edit-current-pass" with <password>
    And I fill in "edit-mail" with "new-ot-email@test.com"
    And I should see the button "Save"
    And I press the "Save" button
    Then I should see the text "Email has been changed."
    Then I visit the edit profile form for user <user> with open tab <tab_1>
    Then I should get a 200 HTTP response
    Then I click "Change email address"
    And the "edit-mail" field should contain "new-ot-email@test.com"

    # Password: Change to a new strong password, success
    And I visit the edit profile form for user <user> with open tab <tab_1>
    Then I should get a 200 HTTP response
    Then I click "Change password"
    And I should see the text <user>
    Then I fill in "edit-current-pass" with <password>
    Then I fill in "edit-pass-pass1" with <new_password>
    Then I fill in "edit-pass-pass2" with <new_password>
    And I press the "Save" button
    Then I should see the text "Password has been changed."
    # Password: Change back to original weak password, fails
    And I visit the edit profile form for user <user> with open tab <tab_1>
    Then I should get a 200 HTTP response
    Then I click "Change password"
    And I should see the text <user>
    Then I fill in "edit-current-pass" with <new_password>
    Then I fill in "edit-pass-pass1" with <password>
    Then I fill in "edit-pass-pass2" with <password>
    And I press the "Save" button
    Then I should see the text "Your password has not met the following requirement(s):"
    #Password: Change back to original
    Then I run drush 'upwd' 'umember1 --password="civicactions"'

    Examples:
      | user     | role            | password       | new_password            | tab_1    |
      | umember1 | "authenticated" | "civicactions" | "civicactions-New6" | Settings |
