@api @edit @profile @ot @WIP
Feature:
  To manage my Profile info
  as a Member I access my account
  to change contact, employers, education, privacy

  @member @group @wip
  Scenario Outline: A Member edits their contact, employers, education, privacy

    Given I am logged in as <user> with password <password>

    #Picture: Change settings
    And I visit the edit profile form for user <user> with open tab <tab_2>
    Then I should get a 200 HTTP response
    And I attach the file "CA2GOV-conference.jpg" to "edit-picture-upload"
    And I press the "Save" button
    Then I should see the text "The changes have been saved."

    # Name: Change name
    And I visit the edit profile form for user <user> with open tab <tab_2>
    Then I should get a 200 HTTP response
    Then I fill in "edit-field-name-first-und-0-value" with "Grayson"
    And I fill in "edit-field-name-last-und-0-value" with "Matherson"
    And I press the "Save" button
    Then I should see the text "The changes have been saved."
    Then I visit the edit profile form for user <user> with open tab <tab_2>
    Then I should get a 200 HTTP response
    And the "edit-field-name-first-und-0-value" field should contain "Grayson"
    And the "edit-field-name-last-und-0-value" field should contain "Matherson"

    # Job Title: Change job title
    And I visit the edit profile form for user <user> with open tab <tab_2>
    Then I should get a 200 HTTP response
    Then I fill in "edit-field-user-title-und-0-value" with "CIO East Division"
    And I press the "Save" button
    Then I should see the text "The changes have been saved."
    Then I visit the edit profile form for user <user> with open tab <tab_2>
    Then I should get a 200 HTTP response
    And the "edit-field-user-title-und-0-value" field should contain "CIO East Division"

    # Phone Number: Change phone
    And I visit the edit profile form for user <user> with open tab <tab_3>
    Then I should get a 200 HTTP response
    Then I fill in "edit-field-telephone-und-0-field-telephone-number-und-0-value" with "(212) 555-1212"
    And I press the "Save" button
    Then I should see the text "The changes have been saved."
    Then I visit the edit profile form for user <user> with open tab <tab_3>
    Then I should get a 200 HTTP response
    And the "edit-field-telephone-und-0-field-telephone-number-und-0-value" field should contain "(212) 555-1212"

    # Social Media: Change social
    And I visit the edit profile form for user <user> with open tab <tab_3>
    Then I should get a 200 HTTP response
    Then I fill in "edit-field-linkedin-und-0-value" with "http://www.linkedin.com/grayson_matherson"
    Then I fill in "edit-field-facebook-und-0-value" with "http://www.facebook.com/grayson_matherson"
    Then I fill in "edit-field-twitter-und-0-value" with "http://www.twitter.com/grayson_matherson"
    Then I fill in "edit-field-website-und-0-value" with "http://www.graysonmatherson.com"
    And I press the "Save" button
    Then I should see the text "The changes have been saved."
    Then I visit the edit profile form for user <user> with open tab <tab_3>
    Then I should get a 200 HTTP response
    And the "edit-field-linkedin-und-0-value" field should contain "http://www.linkedin.com/grayson_matherson"
    And the "edit-field-facebook-und-0-value" field should contain "http://www.facebook.com/grayson_matherson"
    And the "edit-field-twitter-und-0-value" field should contain "http://www.twitter.com/grayson_matherson"
    And the "edit-field-website-und-0-value" field should contain "http://www.graysonmatherson.com"

    # Biography: Change bio
    And I visit the edit profile form for user <user> with open tab <tab_4>
    Then I should get a 200 HTTP response
    Then I fill in "edit-field-bio-short-und-0-value" with "My very short bio info."
    Then I fill in "edit-field-biography-und-0-value" with "My longer very short bio info."
    And I press the "Save" button
    Then I should see the text "The changes have been saved."
    And I visit the edit profile form for user <user> with open tab <tab_4>
    Then I should get a 200 HTTP response
    And the "edit-field-bio-short-und-0-value" field should contain "My very short bio info."
    And the "edit-field-biography-und-0-value" field should contain "My longer very short bio info."

    # Employers: Change employer
    And I visit the edit profile form for user <user> with open tab <tab_5>
    Then I should get a 200 HTTP response
    Then I fill in "edit-field-employers-und-0-field-employers-company-und-0-value" with "Company One"
    Then I fill in "edit-field-employers-und-0-field-employers-location-und-0-value" with "Lawrenceville"
    Then I fill in "edit-field-employers-und-0-field-employers-position-und-0-value" with "Director Controls"
    Then I fill in "edit-field-employers-und-0-field-employment-dates-und-0-value-datepicker-popup-0" with "Feb 2015"
    And I press the "Save" button
    Then I should see the text "The changes have been saved."
    And I visit the edit profile form for user <user> with open tab <tab_5>
    Then I should get a 200 HTTP response
    And the "edit-field-employers-und-0-field-employers-company-und-0-value" field should contain "Company One"
    And the "edit-field-employers-und-0-field-employers-location-und-0-value" field should contain "Lawrenceville"
    And the "edit-field-employers-und-0-field-employers-position-und-0-value" field should contain "Director Controls"
    And the "edit-field-employers-und-0-field-employment-dates-und-0-value-datepicker-popup-0" field should contain "Feb 2015"

    # Education & Training: Change eduction
    And I visit the edit profile form for user <user> with open tab <tab_6>
    Then I should get a 200 HTTP response
    Then I fill in "edit-field-education-und-0-field-education-degree-und-0-value" with "Masters"
    Then I fill in "edit-field-education-und-0-field-education-school-und-0-value" with "Education Inst One"
    Then I check the box "edit-field-education-und-0-field-education-dates-attended-und-0-show-todate"
    Then I fill in "edit-field-education-und-0-field-education-dates-attended-und-0-value-date" with "Jan 2011"
    Then I fill in "edit-field-education-und-0-field-education-dates-attended-und-0-value2-date" with "Sep 2015"
    And I press the "Save" button
    Then I should see the text "The changes have been saved."
    And I visit the edit profile form for user <user> with open tab <tab_6>
    Then I should get a 200 HTTP response
    And the "edit-field-education-und-0-field-education-degree-und-0-value" field should contain "Masters"
    And the "edit-field-education-und-0-field-education-school-und-0-value" field should contain "Education Inst One"
    And the "edit-field-education-und-0-field-education-dates-attended-und-0-value-date" field should contain "Jan 2011"
    And the "edit-field-education-und-0-field-education-dates-attended-und-0-value2-date" field should contain "Sep 2015"

    # Education & Training: Change non-degree
    And I visit the edit profile form for user <user> with open tab <tab_6>
    Then I should get a 200 HTTP response
    Then I fill in "edit-field-training-und-0-field-training-title-und-0-value" with "Certificate of Controls"
    Then I fill in "edit-field-training-und-0-field-training-institution-und-0-value" with "Certificate Inst One"
    Then I fill in "edit-field-training-und-0-field-training-year-und-0-value" with "2015"
    Then I fill in "edit-field-training-und-0-field-training-description-und-0-value" with "Career enhancement studies"
    And I press the "Save" button
    Then I should see the text "The changes have been saved."
    And I visit the edit profile form for user <user> with open tab <tab_6>
    Then I should get a 200 HTTP response
    And the "edit-field-training-und-0-field-training-title-und-0-value" field should contain "Certificate of Controls"
    And the "edit-field-training-und-0-field-training-institution-und-0-value" field should contain "Certificate Inst One"
    And the "edit-field-training-und-0-field-training-year-und-0-value" field should contain "2015"
    And the "edit-field-training-und-0-field-training-description-und-0-value" field should contain "Career enhancement studies"

    # Interests
    And I visit the edit profile form for user <user> with open tab <tab_7>
    Then I should get a 200 HTTP response
    # Countries of Interest
    Then I check the box "edit-field-countries-of-interest-und-101"
    Then I check the box "edit-field-countries-of-interest-und-106"
    # Topics of Interest
    Then I check the box "edit-field-topics-of-interest-und-84"
    Then I check the box "edit-field-topics-of-interest-und-79"
    And I press the "Save" button
    Then I should see the text "The changes have been saved."
    And I visit the edit profile form for user <user> with open tab <tab_7>
    Then I should get a 200 HTTP response
    And the checkbox "edit-field-countries-of-interest-und-101" should be checked
    And the checkbox "edit-field-countries-of-interest-und-106" should be checked
    And the checkbox "edit-field-topics-of-interest-und-84" should be checked
    And the checkbox "edit-field-topics-of-interest-und-79" should be checked

    # Privacy Settings: Change settings
    And I visit the edit profile form for user <user> with open tab <tab_1>
    Then I should get a 200 HTTP response
    And I select "Only Contacts" from "edit-field-biography"
    And I select "Everyone" from "edit-field-employers"
    And I press the "Save Privacy Settings" button
    And I visit the edit profile form for user <user> with open tab <tab_1>
    Then I should get a 200 HTTP response
    And I should see the option "Only Contacts" selected in "edit-field-biography" dropdown
    And I should see the option "Everyone" selected in "edit-field-employers" dropdown

    # Notification Settings: Change settings
    And I visit the edit profile form for user <user> with open tab <tab_1>
    Then I should get a 200 HTTP response
    And I select "Hourly" from "edit-send-frequency"
    Then I select the radio button "No" with the id "edit-state-1"
    Then I uncheck the box "edit-pm-enable"
    And I press the "Save" button
    Then I should see the text "The changes have been saved."
    And I visit the edit profile form for user <user> with open tab <tab_1>
    Then I should get a 200 HTTP response
    And I should see the option "Hourly" selected in "edit-send-frequency" dropdown
    And the checkbox "edit-pm-enable" should not be checked
    And the checkbox "edit-state-1" should be checked

    Then I am logged out

    Given I am logged in as <user> with password <password>
    Then I visit the edit profile form for user <user> with open tab <tab_1>
    And I click "View my profile"
    # Biography display
    Then I should see the text "Biography"
    And I should see the text "Short Version"
    And I should see the text "My very short bio info."
    # Employment display
    Then I should see the text "Employment"
    And I should see the text "Director Controls"
    Then I should see the text "Company One"
    And I should see the text "February, 2015 | Lawrenceville"
    # Education display
    Then I should see the text "Education"
    And I should see the text "Masters"
    Then I should see the text "Education Inst One"
    And I should see the text "January, 2011 to September, 2015"
    # Training display
    Then I should see the text "Training And Certification"
    Then I should see the text "Certificate Inst One"
    And I should see the text "2015"
    # Countries of Interest display
    Then I should see the text "Countries of Interest"
    Then I should see the text "China"
    Then I should see the text "France"
    # Topics of Interest display
    Then I should see the text "Topics of Interest"
    Then I should see the text "Administrative"
    Then I should see the text "Communication"

    Then I am logged out

    Examples:
      | user     | role            | password       | tab_1    | tab_2        | tab_3          | tab_4     | tab_5     | tab_6                  | tab_7     |
      | umember1 | "authenticated" | "civicactions" | Settings | "Basic Info" | "Contact Info" | Biography | Employers | "Education & Training" | Interests |
