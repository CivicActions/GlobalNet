@api @long
Feature: menu.hooks.access.feature  3m54.09s
  Scenario Outline: gn2_admin_dashboard.module menu hooks logged in
    Given I have accepted terms and am logged in as a user with the <role> role
    And I visit the system path "<path>"
    Then I should get a <response> HTTP response
    Examples:
      | path                               | role          | response |
      | node/2240/dashboard                | authenticated | 403      |
      | node/2240/dashboard                | administrator | 200      |
      | node/2240/dashboard/main           | authenticated | 403      |
      | node/2240/dashboard/main           | administrator | 200      |
      | or1/dashboard/get-group-info       | authenticated | 403      |
      | or1/dashboard/get-group-info       | administrator | 200      |
      | or1/dashboard/group-info/2240/2242 | authenticated | 403      |
      | or1/dashboard/group-info/2240/2242 | administrator | 200      |
      | dashboard/group-ajax/2240          | authenticated | 403      |
      | dashboard/group-ajax/2240          | administrator | 200      |
      | dashboard/ajax                     | authenticated | 403      |
      | dashboard/ajax                     | administrator | 200      |

  Scenario Outline: gn2_admin_dashboard.module menu hooks anonymous
    Given I am an anonymous user
    And I visit the system path "<anonpath>"
    Then I should get a 403 HTTP response
    Examples:
      | anonpath                           |
      | node/2240/dashboard                |
      | node/2240/dashboard/main           |
      | or1/dashboard/get-group-info |
      | or1/dashboard/group-info/2240/2242 |
      | dashboard/group-ajax/2240          |
      | dashboard/ajax                     |

  Scenario: gn2_adobe_connect.module menu hooks anonymous
    Given I am an anonymous user
    And I visit the system path "users/admin/adobeconnect"
    Then I should get a 403 HTTP response

  Scenario Outline: gn2_base_config.module menu hooks logged in
    Given I am an anonymous user
    And I visit the system path "<anonpath>"
    Then I should get a 403 HTTP response
    Examples:
      | anonpath              |
      | or1/or1-ev7pr         |
      | get-organization-name |

  Scenario: gn2_cac.module menu hooks not logged in
    Given I am an anonymous user
    And I visit the system path "cac/ajax"
    Then I should get a 403 HTTP response

  Scenario: gn2_ezproxy.module menu hooks logged in
    Given I have accepted terms and am logged in as a user with the "authenticated" role
    And I visit the system path "admin/config/ezproxy"
    Then I should get a 403 HTTP response

  Scenario: gn2_ezproxy.module menu hooks not logged in
    Given I am an anonymous user
    And I visit the system path "ezproxy"
    Then I should get a 403 HTTP response

  Scenario: gn2_file_download.module menu hooks not logged in
    Given I am an anonymous user
    And I visit the system path "sort-files-list-form/1/1/1"
    Then I should get a 403 HTTP response

  Scenario: gn2_group_menu.module menu hooks not logged in
    Given I am an anonymous user
    And I visit the system path "gn_url_unpublish/738"
    Then I should get a 403 HTTP response

  Scenario: gn2_invitations_menu.module menu hooks not logged in
    Given I am an anonymous user
    And I visit the system path "get-all-groups"
    Then I should get a 403 HTTP response

  Scenario Outline: gn2_manager_access.module menu hooks logged in
    Given I have accepted terms and am logged in as a user with the <role> role
    And I visit the system path "<path>"
    Then I should get a <response> HTTP response
    Examples:
      | path                        | role          | response |
      | admin/manage/users/add/user | authenticated | 403      |
      | admin/manage/users/add/user | administrator | 200      |
      | admin/manage/users/update   | authenticated | 403      |
      | admin/manage/users/update   | administrator | 200      |
      | admin/manage/users/regforms | authenticated | 403      |
      | admin/manage/users/regforms | administrator | 200      |

  Scenario Outline: gn2_manager_access.module menu hooks not logged in
    Given I am an anonymous user
    And I visit the system path "<anonpath>"
    Then I should get a 403 HTTP response
    Examples:
      | anonpath                 |
      | view/event_feedback/2240 |
      | view/group_feedback/2240 |

  Scenario Outline: gn2_metrics.module menu hooks logged in
    Given I have accepted terms and am logged in as a user with the <role> role
    And I visit the system path "<path>"
    Then I should get a <response> HTTP response
    Examples:
      | path                        | role          | response |
      | node/2240/metrics           | authenticated | 403      |
      | node/2240/metrics           | administrator | 200      |
      | node/2240/metrics/main      | authenticated | 403      |
      | node/2240/metrics/main      | administrator | 200      |
      | node/2240/metrics/analytics | authenticated | 403      |
      | node/2240/metrics/analytics | administrator | 200      |
      | node/2240/file-metrics      | authenticated | 403      |

  Scenario Outline: Group or Course managers should be able to access Metrics @RD-4356
    Given I am logged in as "ugroupmanager1" with password "civicactions"
    And I visit the system path "<path>"
    Then I should get a <response> HTTP response
    Examples:
      | path              | response |
      | node/2260/metrics | 200      |
      | node/2261/metrics | 200      |
      | node/2282/metrics | 403      |

  Scenario Outline: gn2_og.module menu hooks not logged in
    Given I am an anonymous user
    And I visit the system path "<anonpath>"
    Then I should get a 403 HTTP response
    Examples:
      | anonpath                    |
      | node/2240/metrics           |
      | node/2240/metrics/main      |
      | node/2240/metrics/analytics |
      | node/2240/file-metrics      |

  Scenario Outline: gn2_og.module menu hooks logged in
    Given I have accepted terms and am logged in as a user with the <role> role
    And I visit the system path "<path>"
    Then I should get a <response> HTTP response
    Examples:
      | path                                              | role          | response |
      | admin/reports/content-without-parent-organization | authenticated | 403      |
      | admin/reports/content-without-parent-organization | administrator | 200      |
      | group/node/2240/admin/people/addbulkmembers       | authenticated | 403      |
      | group/node/2240/admin/people/addbulkmembers       | administrator | 200      |
      | admin/people/groups                               | authenticated | 403      |
      | admin/people/groups                               | administrator | 200      |
      | users/autocomplete                                | authenticated | 403      |
      | users/autocomplete                                | administrator | 200      |
      | group/node/2240/admin/people/manage               | authenticated | 403      |
      | group/node/2240/admin/people/manage               | administrator | 200      |

  Scenario Outline: gn2_og.module menu hooks not logged in
    Given I am an anonymous user
    And I visit the system path "<anonpath>"
    Then I should get a 403 HTTP response
    Examples:
      | anonpath                                          |
      | admin/reports/content-without-parent-organization |
      | group/node/2240/admin/people/addbulkmembers       |
      | admin/people/groups                               |
      | users/autocomplete                                |
      | group/node/2240/admin/people/manage               |
      | group/node/2240/join                              |

  Scenario Outline: gn2_reg.module menu hooks logged in
    Given I have accepted terms and am logged in as a user with the <role> role
    And I visit the system path "admin/config/content/gn2_reg"
    Then I should get a <response> HTTP response
    Examples:
      | role          | response |
      | authenticated | 403      |
      | administrator | 200      |

  Scenario: gn2_reg.module menu hooks not logged in
    Given I am an anonymous user
    And I visit the system path "admin/config/content/gn2_reg"
    Then I should get a 403 HTTP response

  Scenario Outline: gn2_report_user_changes.module menu hooks logged in
    Given I have accepted terms and am logged in as a user with the <role> role
    And I visit the system path "node/2240/dashboard/user-profile-updates"
    Then I should get a <response> HTTP response
    Examples:
      | role          | response |
      | authenticated | 403      |
      | administrator | 200      |

  Scenario: gn2_report_user_changes.module menu hooks not logged in
    Given I am an anonymous user
    And I visit the system path "node/2240/dashboard/user-profile-updates"
    Then I should get a 403 HTTP response

  Scenario Outline: gn2_reports.module menu hooks logged in
    Given I have accepted terms and am logged in as a user with the <role> role
    And I visit the system path "<path>"
    Then I should get a <response> HTTP response
    Examples:
      | role          | path                                       | response |
      | authenticated | admin/reports/activity/site-activity-email | 403      |
      | administrator | admin/reports/activity/site-activity-email | 200      |
      | authenticated | admin/reports/activity/site-activity-range | 403      |
      | administrator | admin/reports/activity/site-activity-range | 200      |
      | authenticated | admin/reports/role_watchdog/export         | 403      |
      | administrator | admin/reports/role_watchdog/export         | 200      |

  Scenario Outline: gn2_reports.module menu hooks not logged in
    Given I am an anonymous user
    And I visit the system path "<path>"
    Then I should get a 403 HTTP response
    Examples:
      | path                                       |
      | admin/reports/activity/site-activity-email |
      | admin/reports/activity/site-activity-range |
      | admin/reports/role_grants/export           |

  Scenario: gn2_search.module menu hooks logged in
    Given I have accepted terms and am logged in as a user with the authenticated role
    And I visit the system path "node/2240/members"
    Then I should get a 200 HTTP response

  Scenario: gn2_search.module menu hooks not logged in
    Given I am an anonymous user
    And I visit the system path "node/2240/members"
    Then I should get a 403 HTTP response

  Scenario Outline: gn2_sessions.module menu hooks logged in
    Given I have accepted terms and am logged in as a user with the <role> role
    And I visit the system path "<path>"
    Then I should get a <response> HTTP response
    Examples:
      | role          | path                                  | response |
      | authenticated | admin/non-modal/add/93/level2         | 403      |
      | administrator | admin/non-modal/add/93/level2         | 200      |
      | authenticated | admin/non-modal/edit/93/level2/2521   | 403      |
      | administrator | admin/non-modal/edit/93/level2/2521   | 200      |
      | authenticated | admin/non-modal/delete/93/level2/2521 | 403      |
      | administrator | admin/non-modal/delete/93/level2/2521 | 200      |
      | authenticated | admin/order/2521                      | 403      |
      | administrator | admin/order/2521                      | 200      |

  Scenario Outline: gn2_sessions.module menu hooks not logged in
    Given I am an anonymous user
    And I visit the system path "<path>"
    Then I should get a 403 HTTP response
    Examples:
      | path                                  |
      | admin/non-modal/add/93/level2         |
      | admin/non-modal/edit/93/level2/2521   |
      | admin/non-modal/delete/93/level2/2521 |
      | admin/order/2521                      |

  Scenario Outline: gn2_user_admin.module menu hooks logged in
    Given I have accepted terms and am logged in as a user with the <role> role
    And I visit the system path "<path>"
    Then I should get a <response> HTTP response
    Examples:
      | role          | path                                | response |
      | authenticated | admin/config/profile-privacy-fields | 403      |
      | administrator | admin/config/profile-privacy-fields | 200      |
      | authenticated | user/55/email                       | 403      |
      | administrator | user/55/email                       | 200      |

  Scenario Outline: gn2_user_admin.module menu hooks not logged in
    Given I am an anonymous user
    And I visit the system path "<path>"
    Then I should get a 403 HTTP response
    Examples:
      | path                                |
      | admin/config/profile-privacy-fields |
      | user/55/email                       |

  Scenario Outline: userpoints_og.module menu hooks logged in
    Given I have accepted terms and am logged in as a user with the <role> role
    And I visit the system path "<path>"
    Then I should get a <response> HTTP response
    Examples:
      | role          | path                                            | response |
      | authenticated | admin/config/workflow/userpoints_og             | 403      |
      | administrator | admin/config/workflow/userpoints_og             | 200      |
      | authenticated | admin/config/workflow/userpoints_og/config      | 403      |
      | administrator | admin/config/workflow/userpoints_og/config      | 200      |
      | authenticated | admin/config/workflow/userpoints_og/batch       | 403      |
      | administrator | admin/config/workflow/userpoints_og/batch       | 200      |
      | authenticated | admin/config/workflow/userpoints_og/config/edit | 403      |
      | administrator | admin/config/workflow/userpoints_og/config/edit | 200      |

  Scenario Outline: userpoints_og.module menu hooks not logged in
    Given I am an anonymous user
    And I visit the system path "<path>"
    Then I should get a 403 HTTP response
    Examples:
      | path                                                                  |
      | admin/config/workflow/userpoints_og                                   |
      | admin/config/workflow/userpoints_og/config                            |
      | admin/config/workflow/userpoints_og/batch                             |
      | admin/config/workflow/userpoints_og/config/edit/%userpoints_og_config |

  @3498
  Scenario: Admin/HR do not get their adobe connect info on other's user pages.
    Given I have accepted terms and am logged in as a user with the administrator role
    And I visit the edit profile form for "umember1"
    Then I should see "Adobe Connect Account For Umar One (203)"
