@api @long
Feature: entityforms.permissions.feature

  Scenario Outline: Entityform edit paths
    Given I have accepted terms and am logged in as a user with the <role> role
    And I visit the system path "admin/structure/entityform_types/manage/<form>"
    Then I should get a <response> HTTP response
    Examples:
      | role          | form            | response |
      | authenticated | join_org        | 403      |
      | administrator | join_org        | 200      |
      | authenticated | session         | 403      |
      | administrator | session         | 200      |
      | authenticated | userreg         | 403      |
      | administrator | userreg         | 200      |
      | authenticated | course_feedback | 403      |
      | administrator | course_feedback | 200      |
      | authenticated | reject_request  | 403      |
      | administrator | reject_request  | 200      |
      | authenticated | feedback        | 403      |
      | administrator | feedback        | 200      |
      | authenticated | tech_support    | 403      |
      | administrator | tech_support    | 200      |
      | authenticated | event_feedback  | 403      |
      | administrator | event_feedback  | 200      |
      | authenticated | group_feedback  | 403      |
      | administrator | group_feedback  | 200      |

  Scenario Outline: Entityform manage fields
    Given I have accepted terms and am logged in as a user with the <role> role
    And I visit the system path "admin/structure/entityform_types/manage/<form>/fields"
    Then I should get a <response> HTTP response
    Examples:
      | role          | form            | response |
      | authenticated | join_org        | 403      |
      | administrator | join_org        | 200      |
      | authenticated | session         | 403      |
      | administrator | session         | 200      |
      | authenticated | userreg         | 403      |
      | administrator | userreg         | 200      |
      | authenticated | course_feedback | 403      |
      | administrator | course_feedback | 200      |
      | authenticated | reject_request  | 403      |
      | administrator | reject_request  | 200      |
      | authenticated | feedback        | 403      |
      | administrator | feedback        | 200      |
      | authenticated | tech_support    | 403      |
      | administrator | tech_support    | 200      |
      | authenticated | event_feedback  | 403      |
      | administrator | event_feedback  | 200      |
      | authenticated | group_feedback  | 403      |
      | administrator | group_feedback  | 200      |

  Scenario Outline: Entityform display
    Given I have accepted terms and am logged in as a user with the <role> role
    And I visit the system path "admin/structure/entityform_types/manage/<form>/display"
    Then I should get a <response> HTTP response
    Examples:
      | role          | form            | response |
      | authenticated | join_org        | 403      |
      | administrator | join_org        | 200      |
      | authenticated | session         | 403      |
      | administrator | session         | 200      |
      | authenticated | userreg         | 403      |
      | administrator | userreg         | 200      |
      | authenticated | course_feedback | 403      |
      | administrator | course_feedback | 200      |
      | authenticated | reject_request  | 403      |
      | administrator | reject_request  | 200      |
      | authenticated | feedback        | 403      |
      | administrator | feedback        | 200      |
      | authenticated | tech_support    | 403      |
      | administrator | tech_support    | 200      |
      | authenticated | event_feedback  | 403      |
      | administrator | event_feedback  | 200      |
      | authenticated | group_feedback  | 403      |
      | administrator | group_feedback  | 200      |

  Scenario Outline: Entityform clone
    Given I have accepted terms and am logged in as a user with the <role> role
    And I visit the system path "admin/structure/entityform_types/manage/<form>/clone"
    Then I should get a <response> HTTP response
    Examples:
      | role          | form            | response |
      | authenticated | join_org        | 403      |
      | administrator | join_org        | 200      |
      | authenticated | session         | 403      |
      | administrator | session         | 200      |
      | authenticated | userreg         | 403      |
      | administrator | userreg         | 200      |
      | authenticated | course_feedback | 403      |
      | administrator | course_feedback | 200      |
      | authenticated | reject_request  | 403      |
      | administrator | reject_request  | 200      |
      | authenticated | feedback        | 403      |
      | administrator | feedback        | 200      |
      | authenticated | tech_support    | 403      |
      | administrator | tech_support    | 200      |
      | authenticated | event_feedback  | 403      |
      | administrator | event_feedback  | 200      |
      | authenticated | group_feedback  | 403      |
      | administrator | group_feedback  | 200      |

  Scenario Outline: Entityform export paths
    Given I have accepted terms and am logged in as a user with the <role> role
    And I visit the system path "admin/structure/entityform_types/manage/<form>/export/csv"
    Then I should get a <response> HTTP response
    Examples:
      | role          | form            | response |
      | authenticated | join_org        | 403      |
      | administrator | join_org        | 200      |
      | authenticated | session         | 403      |
      | administrator | session         | 200      |
      | authenticated | userreg         | 403      |
      | administrator | userreg         | 200      |
      | authenticated | course_feedback | 403      |
      | administrator | course_feedback | 200      |
      | authenticated | reject_request  | 403      |
      | administrator | reject_request  | 200      |
      | authenticated | feedback        | 403      |
      | administrator | feedback        | 200      |
      | authenticated | tech_support    | 403      |
      | administrator | tech_support    | 200      |
      | authenticated | event_feedback  | 403      |
      | administrator | event_feedback  | 200      |
      | authenticated | group_feedback  | 403      |
      | administrator | group_feedback  | 200      |

  Scenario Outline: Entityform submission paths
    Given I have accepted terms and am logged in as a user with the <role> role
    And I visit the system path "admin/structure/entityform_types/manage/<form>/submissions"
    Then I should get a <response> HTTP response
    Examples:
      | role          | form            | response |
      | authenticated | join_org        | 403      |
      | administrator | join_org        | 200      |
      | authenticated | session         | 403      |
      | administrator | session         | 200      |
      | authenticated | userreg         | 403      |
      | administrator | userreg         | 200      |
      | authenticated | course_feedback | 403      |
      | administrator | course_feedback | 200      |
      | authenticated | reject_request  | 403      |
      | administrator | reject_request  | 200      |
      | authenticated | feedback        | 403      |
      | administrator | feedback        | 200      |
      | authenticated | tech_support    | 403      |
      | administrator | tech_support    | 200      |
      | authenticated | event_feedback  | 403      |
      | administrator | event_feedback  | 200      |
      | authenticated | group_feedback  | 403      |
      | administrator | group_feedback  | 200      |

  Scenario Outline: Org Manager vs not Org Manager check
    Given I am logged in as "<name>" with password "civicactions"
    And I visit the system path "admin/manage/userform/submissions/<form>"
    Then I should get a <response> HTTP response
    Examples:
      | name         | form            | response |
      | umember1     | join_org        | 403      |
      | uorgmanager1 | join_org        | 200      |
      | umember1     | session         | 403      |
      | uorgmanager1 | session         | 200      |
      | umember1     | userreg         | 403      |
      | uorgmanager1 | userreg         | 200      |
      | umember1     | course_feedback | 403      |
      | uorgmanager1 | course_feedback | 200      |
      | umember1     | reject_request  | 403      |
      | uorgmanager1 | reject_request  | 200      |
      | umember1     | feedback        | 403      |
      | uorgmanager1 | feedback        | 200      |
      | umember1     | tech_support    | 403      |
      | uorgmanager1 | tech_support    | 200      |
      | umember1     | event_feedback  | 403      |
      | uorgmanager1 | event_feedback  | 200      |
      | umember1     | group_feedback  | 403      |
      | uorgmanager1 | group_feedback  | 200      |

  @wip
  Scenario Outline: Anonymous entityform submissions 404 check
    Given I am an anonymous user
    And I visit the system path "admin/manage/userform/submissions/<form>"
    Then I should get a 403 HTTP response
    Examples:
      | form            |
      | join_org        |
      | session         |
      | userreg         |
      | course_feedback |
      | reject_request  |
      | feedback        |
      | tech_support    |
      | event_feedback  |
      | group_feedback  |

  @wip
  Scenario Outline: Anonymous entityform manage 404 check
    Given I am an anonymous user
    And I visit the system path "admin/structure/entityform_types/manage/<form>"
    And I visit the system path "admin/structure/entityform_types/manage/<form>/fields"
    And I visit the system path "admin/structure/entityform_types/manage/<form>/display"
    And I visit the system path "admin/structure/entityform_types/manage/<form>/clone"
    And I visit the system path "admin/structure/entityform_types/manage/<form>/export/csv"
    And I visit the system path "admin/structure/entityform_types/manage/<form>/submissions"
    Then I should get a 403 HTTP response
    Examples:
      | form            |
      | join_org        |
      | session         |
      | userreg         |
      | course_feedback |
      | reject_request  |
      | feedback        |
      | tech_support    |
      | event_feedback  |
      | group_feedback  |
