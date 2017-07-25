@api @new @imagestyle
Feature: media.imagestyles.feature 

  As a site admin
  I want to ensure that all needed image styles are configured correctly.

  @smoke2 @imagestyle
  Scenario: All image styles are present.
    Given I have accepted terms and am logged in as a user with the "administrator" role
    # Given I am logged in as "uadmin" with password "civicactions"
    When I visit "/admin/config/media/image-styles"
    Then I should see the following <links>
    | links                               |
    | Focal Point Preview                 |
    | Thumbnail (100x100)                 |
    | Medium (220x220)                    |
    | Large (480x480)                     |
    | Media thumbnail (100x100)           |
    | media_gallery_thumbnail             |
    | media_gallery_large                 |
    | Banner810x400                       |
    | Course Banner 800x150               |
    | Event Main Image (810x400)          |
    | Featured Content Image (300x200)    |
    | gn2_themeparts_swap_logo            |
    | home page main image                |
    | Media Gallery (160x160)             |
    | News Author Thumbnail(75x75)        |
    | News Item Main Image(805x490)       |
    | News Slideshow Image (800x490)      |
    | News thumbnail (245x150)            |
    | ProfilePhoto (200x200)              |
    | Publication: Featured (250x330)     |
    | Publication: Main (400 wide)        |
    | Publication thumbnail (200x300)     |
    | Sidebar Additional Image (345x230)  |
    | Tiny(50x50)                         |
    | WYSIWYG Large                       |
    | WYSIWYG Medium                      |
    | WYSIWYG Original                    |
    | WYSIWYG Small                       |
