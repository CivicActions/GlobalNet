@api
Feature: media.file-access.feature


  @RD-2841 @RD-2979 @assignee:owen.barton @assignee:tom.camp @version:3/22_Launch_Release @version:3/25_Release @COMPLETED @anonymous
  Scenario Outline: I can access only appropriate file extensions for files served by Apache

    Given I visit the system path "<path>"
    Then I should get a "<code>" HTTP response
    Examples:
      | path                                                                           | code |
      | misc/druplicon.png                                                             | 200  |
      | misc/print.css                                                                 | 200  |
      | sites/all/themes/gn2_zen/fonts/Teko-Regular.woff                               | 200  |
      | sites/all/themes/gn2_zen/fonts/Teko-Regular.woff2                              | 200  |
      | misc/favicon.ico                                                               | 200  |
      | sites/all/modules/contrib/flexslider/assets/images/flexslider-sample-1.JPG     | 200  |
      | sites/all/libraries/flexslider/fonts/flexslider-icon.woff                      | 200  |
      | update.php                                                                     | 403  |
      | install.php                                                                    | 403  |
      | README.txt                                                                     | 403  |
      | .gitignore                                                                     | 403  |
      | scripts/drupal.sh                                                              | 403  |
      | includes/common.inc                                                            | 403  |
      | modules/system/system.info                                                     | 403  |
      | modules/system/system.install                                                  | 403  |
      | modules/system/system.module                                                   | 403  |
      | modules/system/system.test                                                     | 403  |
      | modules/system/form.api.php                                                    | 403  |
      | modules/system/system.system.admin.inc                                         | 403  |
      | sites/all/libraries/mediaelement/media/echo-hereweare.mp4                      | 403  |
      | sites/all/libraries/mediaelement/media/echo-hereweare.mp4                      | 403  |
      | sites/all/libraries/datatables/extensions/TableTools/examples/pdf_message.html | 403  |
      | sites/all/libraries/mediaelement/src/flash/FlashMediaElement.fla               | 403  |


  @RD-2841 @assignee:owen.barton @version:3/22_Launch_Release @COMPLETED @uadmin
  Scenario Outline: I can access only appropriate file extensions for files served by Drupal private files

    Given I am logged in as "uadmin" with password "civicactions"
    And I visit the system path "<path>"
    Then I should get a "<code>" HTTP response
    Examples:
      | path                                                                           | code |
      | system/files/sunsets.pdf                                                       | 200  |
      | system/files/huckfinn1.JPG                                                     | 200  |
      | system/files/clouds.docx                                                       | 200  |
      | system/files/test%2062.doc                                                     | 200  |
      | system/files/example_bad_file.exe                                              | 403  |
      | system/files/example_bad_file.html                                             | 403  |
      | system/files/example_bad_file.php                                              | 403  |


