@api @breadcrumbs @wip
Feature: Breadcrumbs
  As the user
  I should be able to view useful breadcrumbs on pages I visit

  @authenticated @long
  Scenario Outline: I can see breadcrumbs on a broad range of simple pages as an authenticated user
    Given I am logged in as "uadmin" with password "civicactions"
    And I visit the system path "<path>"
    Then I should see the breadcrumb "<breadcrumb>"
    Examples:
      |  path                                                 |   breadcrumb                                           |   notes                                                          |
      |  or2                                                  |                                                        |   Content types - Org landing page                               |
      |  or1/or1-pg1pu-ne24or                                 |   Or1 > Or1 Pg1PU > Or1 Pg1PU Ne24OR                   |   Content types - News                                           |
      |  or1/or1-co1pu/or1-co1pu-cg1pu/or1-co1pu-cg1pu-po41pr |   Or1 > Or1 Co1PU > Or1 Co1PU Cg1PU > Or1 Co1PU Cg1PU Po41PR | Content types - Post                                       |
      |  or1/or1-gr1pu/or1-gr1pu-pu20pr                       |   Or1 > Or1 Gr1PU > Or1 Gr1PU Pu20PR                   |   Content types - Publication                                    |
      |  or1/or1-co1pu/or1-co1pu-cg1pu/or1-co1pu-cg1pu-an49pr |   Or1 > Or1 Co1PU > Or1 Co1PU Cg1PU > Or1 Co1PU Cg1PU An49PR | Content types - Announcement                               |
      |  or1/or1-co1pu-ev24or                                 |   Or1 > Or1 Co1PU > Or1 Co1PU Ev24OR                   |   Content types - Event                                          |
      |  or1/or1-gr1pu/or1-gr1pu-co15pu                       |   Or1 > Or1 Gr1PU > Or1 Gr1PU Co15PU                   |   Content types - Course                                         |
      |  or2/or2-pg10or                                       |   Or2 > Or2 Pg10OR                                     |   Content types - Custom Landing page                            |
      |  globalnet/discover-our-history                       |   GlobalNET Platform > Discover Our History            |   Content types - About                                          |
      |  or2/or2-gr14pr                                       |   Or2 > Or2 Gr14PR                                     |   Content types - Group                                          |
      |  or1/or1-co1pu/or1-co1pu-cg4gr                        |   Or1 > Or1 Co1PU > Or1 Co1PU Cg4GR                    |   Content types - Course Group                                   |
      |  or1/or1-co1pu/or1-co1pu-cg1pu/or1-co1pu-cg1pu-pl29pu |   Or1 > Or1 Co1PU > Or1 Co1PU Cg1PU > Or1 Co1PU Cg1PU Pl29PU | Content types - Poll                                       |
      |  gcmc/group-in-gcmc/course-with-folders/folder-2      |   George C. Marshall Center > A group in GCMC > A Course with Folders > Folder 2 | Content types - Folders                |
      |  terms-of-use                                         |   Or1 > Terms of Use                                   |   Non-group content types - Page                                 |
      |  users/ugroupmanager1b                                |   Or1 > Ulyssa Group Manageroneb                            |   User pages/functions - User profile                            |
      |  account                                              |   Or1 > Account                                        |   User pages/functions - User account                            |
      #  RD-2479
      #|  users/admin/password                                 |   Or1 > Ura Admin Istrator > Password                        |   User pages/functions - Change Password                         |
      |  messages                                             |   Or1 > Ura Admin Istrator > Messages                        |   User pages/functions - Read messages                           |
      |  messages/new                                         |   Or1 > Ura Admin Istrator > Messages > Write new message    |   User pages/functions - Send message                            |
      |  relationship/{user:name:uadmin}/request              |   Or1 > Ura Admin Istrator > Request Contact                 |   User pages/functions - Request contact                         |
      |  inbox/notifications                                  |   Or1 > Ura Admin Istrator > Inbox: Notifications            |   User pages/functions - Inbox: Notifications                    |
      |  node/add/post?gid={node:title:Or2 Gr10OR}            |   Or2 > Or2 Gr10OR > Post                              |   Content entry - Entry forms                                    |
      |  or1/or1-co1pu/or1-co1pu-cg1pu/or1-co1pu-cg1pu-pl29pu/edit | Or1 > Or1 Co1PU > Or1 Co1PU Cg1PU > Or1 Co1PU Cg1PU Pl29PU > Edit | Content entry - Edit forms                       |
      |  or1/or1-gr1pu/or1-gr1pu-po19gr/delete                |   Or1 > Or1 Gr1PU > Or1 Gr1PU Po19GR > Delete          |  Content entry - Delete                                          |
      |  globalnet/womens-empowerment-news-article-in-globalnet-platform/revisions | GlobalNET Platform > Women's Empowerment News Article in GlobalNET P... > Revisions | Content entry - Revision log |
      |  comment/reply/{node:title:Post 2}/{comment:subject:le comment} | George C. Marshall Center > A group in GCMC > Post 2 > Add new comment | Content entry - Comment reply          |
     |  admin/content/file/edit-multiple/{file:filename:FAQ on NRF_3.docx}%20{file:filename:Intro - SYN 6_0.ppt}%20{file:filename:SYND01-intro.ppt}%20{file:filename:zugspitze-garmisch}%20{file:filename:picture-10-1436838936.jpg}%20{file:filename:womanpresenting.jpg}%20{file:filename:AnitaPeresin.jpg}%20{file:filename:SYND01-intro_0.ppt}%20{file:filename:FAQ on NRF_3_0.docx}%20{file:filename:Final Roster for M3-116-A-15.pdf}%20{file:filename:NATO handbook-en-2006_1.pdf}?destination=node/{node:title:Folder 2}/multiedit | George C. Marshall Center > A group in GCMC > A Course with Folders > Folder 2 > Edit multiple files | Files - Edit multiple files in folder |
      |  media-gallery/detail/{node:title:Folder 2}/{file:filename:FAQ on NRF_3.docx} |  George C. Marshall Center > A group in GCMC > A Course with Folders > Folder 2 > FAQ On NRF 3 | Files - View file in folder |
      |  eform/submit/tech-support?gid={node:title:Or2}       |   Or2 > Technical Support                              |   Entityforms - Technical Support                                |
      |  members                                              |   Or1 > Member Search                                  |   Views - Member search                                          |
      |  search?gid={node:title:Or1 Ne1PU}                    |   Or1 > Search                                         |   Views - Search                                                 |
      |  search/org/{node:title:GlobalNET Platform}?gid={node:title:Or1 Ne1PU} | Or1 > Search                          |   Views - Search (Filtered)                                      |
      |  search/group/{node:title:Or2 Gr10OR}/type/post/type/news?gid={node:title:Or2} | Or2 > Or2 Gr10OR > Search news and post content | Views - Search (Multiple types, by Group)      |
      |  search/author/{user:name:uorgmanager1}/type/post?gid={node:title:Or2} | Or2 > Search post content by Unity Orgma Nagerone | Views - Search (Single type, by user)                |
      |  or1/or1-gr1pu-ne17or/all-related-stories             |   Or1 > Or1 Gr1PU > Related Content                    | Views - More Related stories                                     |
      #the following row produces an intermittent failure in Jenkins that is difficult to produce locally.
      #|  or1/or1-co1pu/all-related-groups                     |   Or1 > Or1 Co1PU > Related Groups                     | Views - Related Groups                                           |

  @anonymous
  Scenario Outline: I can see breadcrumbs on a broad range of simple pages as an anonymous user
    Given I am not logged in
    And I visit the system path "<path>"
    Then I should see the breadcrumb "<breadcrumb>"
    Examples:
      |  path                                                 |   breadcrumb                                           |   notes                                                          |
      |  user/password                                        |   GlobalNET Platform > User account > Request new password | User pages/functions - Password reset                        |
      |  registration/or1                                     |   Or1 > Registration                                   |   Entityforms - Join Organization                                |

  @anonymous
  Scenario: I can see breadcrumbs on the password page including the org I just visited as an anonymous user
    Given I am not logged in
    # This uses the HTTP REFERER header, so we visit the organization page first.
    And I visit the system path "or1"
    And I click the element with CSS selector ".forgot_pass a"
    Then I should see the breadcrumb "Or1 > User account > Request new password"

  @anonymous
  Scenario: I can see breadcrumbs on the password page including the org for the group I just visited as an anonymous user
    Given I am not logged in
    # This uses the HTTP REFERER header, so we visit the group page first.
    And I visit the system path "or1/or1-co1pu"
    And I click the element with CSS selector ".forgot_pass a"
    Then I should see the breadcrumb "Or1 > User account > Request new password"

  @anonymous
  Scenario: I can see breadcrumbs on the password page for GlobalNET when I just visited a non-org page as an anonymous user
    Given I am not logged in
    # This uses the HTTP REFERER header, so we visit a non-org-specific page first.
    And I visit the system path "contact-support"
    And I click the element with CSS selector ".forgot_pass a"
    Then I should see the breadcrumb "GlobalNET Platform > User account > Request new password"
