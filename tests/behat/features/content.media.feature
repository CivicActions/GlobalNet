@api
Feature: content.media.feature


  @RD-2185 @assignee:alexis.saransig @version:OT_Release @COMPLETED @ugroupmanager2
  Scenario: Media - .wmv and .notebook as allowed file upload types

    Given I am logged in as "ugroupmanager2" with password "civicactions"
    And I go to create "course" content for the "Or2 Gr9SI" group
    And I click the element with CSS selector "#edit-field-course-schedule-und-0-browse-button"
    Then I should see the text "wmv"
    And I should see the text "notebook"


  @RD-2323 @assignee:alexis.saransig @version:OT_Release @COMPLETED @ugroupmanager2b @uorgmanager2
  Scenario Outline: Org_manager and group_manager should not see "Blocks" area on Folder entry form

    Given I am logged in as <user> with password "civicactions"
    And I go to create "media-gallery" content for the "Or2 Gr8PU" group
    Then I should not see the CSS selector ".vertical-tabs"
    Examples:
      | user              |
      | "uorgmanager2"    |
      | "ugroupmanager2b" |


  @RD-2481 @assignee:alexis.saransig @version:OT_Release @COMPLETED @uorgmanager1
  Scenario: Org_manager should see the Add Folder button in Organizations landing page

    Given I am logged in as "uorgmanager1" with password "civicactions"
    And I visit the node with title "Or1" with open tab "Files"
    Then I should get a 200 HTTP response
    And I should see the text "ADD FOLDER"
    And I click "Add Folder"
    And I fill in "edit-title" with "Test OrgManager-1-1 Folder"
    And I fill in "edit-media-gallery-description-und-0-value" with "Test OrgManager-1-1 Folder"
    And I click the element with CSS selector "#edit-submit"
    Then I should not see the text "Error"
    And I visit the edit form for node with title "Test OrgManager-1-1 Folder"
    Then I should get a 200 HTTP response

  # Can't make this one work. I've verified visually that this test passes.
  # @RD-2694 @assignee:tom.camp @version:3/22_Launch_Release @COMPLETED @review @uadmin @javascript
  # Scenario: Org Manager should be able to edit Folders

    # Given I am logged in as "uadmin" with password "civicactions"
    # And I visit the node with title "A Course with Folders"
    # And I set browser window size to "1040" x "2500"
    # And I wait for 5 seconds
    # # Fails here - visually verified it passes & this element exists. Tried with css method, still no pass.
    # And I click on the element with xpath "//a[@id='ui-id-5']"
    # And I wait for AJAX to finish
    # And I click on the element with xpath "//tr[contains(@class, 'even views-row views-row-last')]/td[contains(@class, 'views-field views-field-title active')]/a"
    # And I click the element with CSS selector "ul.tabs.primary li:nth-child(2) a"
    # Then I should get a 200 HTTP response
    # And I visit the node with title "Folder 2"
    # And I follow "Edit files"
    # Then I should get a 200 HTTP response


  @RD-2770 @assignee:alexis.saransig @version:3/22_Launch_Release @COMPLETED @uadmin
  Scenario: Edit Media File form should avoid unnecessary fields

    Given I am logged in as "uadmin" with password "civicactions"
    And I visit "media-gallery/detail/815/1107/edit"
    And I click "Cancel"
    And I should see the text "Download original image"
    And I visit "admin/content/file/edit-multiple/1106%201107%201102%201100"
    And I should see the text "Edit multiple files"
    And I should not see the CSS selector "#edit-field-country-und"
    And I should not see the CSS selector "#edit-field-topic-und"
    And I should not see the CSS selector "#edit-field-region-und"


  @RD-2855 @assignee:ethan.teague @version:3/22_Launch_Release @COMPLETED @javascript @qa-admin
  Scenario: Web tab visible

    Given I am logged in as "qa-admin" with password "CivicActions3#"
    And I go to "/gcmc"
    And I click the element with CSS selector ".ui-icon-triangle-1-e"
    And I click "Add Post"
    And  I set browser window size to "1040" x "1000"
    And I wait for 10 seconds
    And I click the element with CSS selector "#cke_27"
    Given I switch to the iframe "mediaBrowser"
    Then I should see "Web"
    Then I should see "My Files"


  @RD-2567 @RD-2745 @RD-2970 @version:3/22_Launch_Release @OPEN @edit @qa-admin
  Scenario: Add Media Removal Functionality, and remove unused fields

    Given I am logged in as "uadmin" with password "civicactions"
    And I go to "or1/test-folder-2"
    And I click "Edit files"
    And I click "Cancel"
    Then I should see "Add media"
    Then I visit the system path "or1/test-folder-2/multiedit"
    Then I should not see the CSS selector "#edit-field-file-image-caption-und-0-value"
    And I should see the text "File Status"
    And I press the "Save" button
    Then I should see "Add media"


  @RD-3053 @assignee:richard.gilbert @version:Release_v2.5.0-20160422 @COMPLETED
  Scenario: Confirm Alphabetical Sorting of Folders

    Given I am logged in as "uorgmanager1" with password "civicactions"
    And I visit the node with title "Or1 Gr1PU" with open tab "FILES"
    And I follow "Add Folder"
    And I fill in "edit-title" with "Folder Test Z"
    And I fill in "edit-media-gallery-description-und-0-value" with "TEST"
    And I click the element with CSS selector "#edit-submit"

    And I visit the node with title "Or1 Gr1PU" with open tab "FILES"
    And I follow "Add Folder"
    And I fill in "edit-title" with "Folder Test A"
    And I fill in "edit-media-gallery-description-und-0-value" with "TEST"
    And I click the element with CSS selector "#edit-submit"

    And I visit the node with title "Or1 Gr1PU" with open tab "FILES"
    Then I should see the text "Folder Test A"
    And I should see the text "Folder Test Z"
    And "Folder Test A" should precede "Folder Test Z" in ".view-resources a"


  @RD-3045 @assignee:richard.gilbert @COMPLETED
Scenario: Check help text for media and image uploads

    Given I am logged in as "qa-admin" with password "CivicActions3#"

    # Attach Logo, Main Image, Thumbnail Image to Organization
    And I visit the edit form for node with title "George C. Marshall Center"
    Then I should see the text 'Small Logo'
    And I should see the text 'This logo appears in the right sidebar with the “About” content, as well as on the “GlobalNET Partners” listing page.'
    And I should see the text 'Main Image'
    And I should see the text 'The "Main Image" appears before the text'
    And I should see the text 'Thumbnail Image'
    And I should see the text 'Logo Image'
    And I should see the text 'This logo appears in the top header for the organization. Files must not exceed 1 MB. Allowed file types: png gif jpg jpeg.'

    # Add Main Image to Group
    And I visit the edit form for node with title "A group in GCMC"
    Then I should see the text 'Main Image'
    And I should see the text 'The "Main Image" appears before the text of your news item, between the title and author information. If you do not also upload a thumbnail image, this image will accompany any teasers for this news item. Files must not exceed 8 MB and be 800 x 500 in dimension. Allowed file types: png gif jpg jpeg. Images should be rectangular such that the horizontal dimensions are largest.'

    # Add Associated Files to News
    And I visit the edit form for node with title "Assess your Cyber Security Awareness"
    Then I should see the text 'Main Image'
    And I should see the text 'The "Main Image" appears before the text of your news item, between the title and author information. If you do not also upload a thumbnail image, this image will accompany any teasers for this news item. Files must not exceed 8 MB and be 800 x 500 in dimension. Allowed file types: png gif jpg jpeg. Images should be rectangular such that the horizontal dimensions are largest.'

    And I should see the text 'Thumbnail Image'

    And I should see the text 'Additional Images'
    And I should see the text 'You may upload up to three (3) "Additional Images" to accompany your news item. These images will appear at the top of the sidebar. Files must not exceed 8 MB. Allowed file types: png gif jpg jpeg.'

    And I should see the text 'Associated Files'
    And I should see the text '"Associated Files" appear below the main text of your news item. Users will be able to download one or more of them at a time. Files must not exceed 500 MB. Allowed file types: avi csx doc docx gif gif gz jpeg jpg m4a m4v mov mp3 mp4 mpeg mpg mpv notebook odp ods odt oga ogg ogv pdf png pps ppsx ppt pptx pub tar txt weba webm webp wmv xls xlsx zip.'

    # Attach Course Image, Schedule, and Syllabus to Course
    And I visit the edit form for node with title 'A Course for "Mark Twain 101"'
    Then I should see the text 'Add Course Image'

    # Attach File to Course Session
    And I visit the system path "/entityform/142/edit?course_id=829"
    Then I should see the text 'Associated Media'
    And I should see the text 'Files must not exceed 500 MB. Allowed file types: avi csx doc docx gif gif gz jpeg jpg m4a m4v mov mp3 mp4 mpeg mpg mpv notebook odp ods odt oga ogg ogv pdf png pps ppsx ppt pptx pub tar txt weba webm webp wmv xls xlsx zip.'


  @RD-3186 @assignee:ethan.teague @COMPLETED @javascript
  Scenario: Taxonomy not visible in Media Modal

    Given I am logged in as "qa-admin" with password "CivicActions3#"
    And I go to "/node/add/post?gid=16"
    And I wait for 1 seconds
    And  I set browser window size to "1040" x "1000"
    And I click the element with CSS selector "#cke_27"
    Given I switch to the iframe "mediaBrowser"
    And I click "Web"
    And I enter "https://www.youtube.com/watch?v=iK-vOxzYWWI" for "embed_code"
    Given I click Next in my Media Modal
    Then I should not see "Countries"
    And I should not see "Regions"
    And I should not see "Topics"


  @simpleaccess @content @wysiwyg @javascript @embed @wip @RD-2970
  Scenario: A user creates post content using WYSIWYG to embed.
    Given I am logged in as "umember1" with password "civicactions"
    And I set browser window size to "1040" x "1000"
    And I go to create "post" content for the "Or1 Gr3OR" group
    And I fill in "edit-title" with "Test post with image"
    And I click the element with CSS selector ".group-topics legend span a"
    And I check the box "Peace"
    And I click the element with CSS selector ".cke_button__media"
    Given I switch to the iframe "mediaBrowser"
    And I click "My files"
    And I click the element with CSS selector "#media-browser-library-list > li .media-thumbnail"
    Given I submit the form in my Media Modal
    And I wait for 10 seconds
    And I click the element with CSS selector "#edit-submit"
    Then I should see the text "has been created"
    And I visit "/user/logout"

    Given I am logged in as "uorgmanager1" with password "civicactions"
    And I visit the node with title "Test post with image"
    Then I should see the CSS selector ".file-original-version"
    And I visit "/user/logout"

    Given I am logged in as "uadmin" with password "civicactions"
    And I visit the edit form for node with title "Test post with image"
    And I click the element with CSS selector "#edit-delete"
    And I click the element with CSS selector "#edit-submit"
    Then I should see the text "has been deleted"
