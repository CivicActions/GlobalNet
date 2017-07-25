<?php
/**
 * @file
 * gn2_base_config.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function gn2_base_config_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "ctools_custom_content" && $api == "ctools_content") {
    return array("version" => "1");
  }
  if ($module == "facetapi" && $api == "facetapi_defaults") {
    return array("version" => "1");
  }
  if ($module == "feeds" && $api == "feeds_importer_default") {
    return array("version" => "1");
  }
  if ($module == "feeds_tamper" && $api == "feeds_tamper_default") {
    return array("version" => "2");
  }
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "file_entity" && $api == "file_default_displays") {
    return array("version" => "1");
  }
  if ($module == "flexslider" && $api == "flexslider_default_preset") {
    return array("version" => "1");
  }
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  if ($module == "panelizer" && $api == "panelizer") {
    return array("version" => "1");
  }
  if ($module == "panels" && $api == "layouts") {
    return array("version" => "1");
  }
  if ($module == "panels_mini" && $api == "panels_default") {
    return array("version" => "1");
  }
  if ($module == "password_policy" && $api == "default_password_policy") {
    return array("version" => "1");
  }
  if ($module == "password_policy" && $api == "default_password_policy_role") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function gn2_base_config_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_default_entityform_type().
 */
function gn2_base_config_default_entityform_type() {
  $items = array();
  $items['contact_support'] = entity_import('entityform_type', '{
    "type" : "contact_support",
    "label" : "Contact GlobalNET",
    "data" : {
      "draftable" : 0,
      "draft_redirect_path" : "",
      "draft_button_text" : "",
      "draft_save_text" : { "value" : "", "format" : "full_html" },
      "submit_button_text" : "",
      "submit_confirm_msg" : "",
      "your_submissions" : "",
      "disallow_resubmit_msg" : "",
      "delete_confirm_msg" : "",
      "page_title_view" : "",
      "preview_page" : 0,
      "submission_page_title" : "Contact Support",
      "submission_text" : {
        "value" : "\\u003Cp\\u003E\\u0026nbsp;\\u003C\\/p\\u003E\\r\\n\\r\\n\\u003Cp\\u003E\\u0026nbsp;\\u003C\\/p\\u003E\\r\\n",
        "format" : "filtered_html"
      },
      "submission_show_submitted" : 0,
      "submissions_view" : "default",
      "user_submissions_view" : "default",
      "form_status" : "ENTITYFORM_OPEN",
      "roles" : { "1" : "1", "2" : "2", "9" : "9", "10" : 0 },
      "resubmit_action" : "new",
      "redirect_path" : "",
      "instruction_pre" : {
        "value" : "\\u003Cp\\u003EIf you have a technical question or need technical support, please use the Technical Support form linked in the bottom right footer.\\u003C\\/p\\u003E\\r\\n",
        "format" : "filtered_html"
      }
    },
    "weight" : "0",
    "paths" : { "submit" : {
        "source" : "eform\\/submit\\/contact-support",
        "alias" : "contact-support",
        "language" : "und"
      }
    }
  }');
  $items['course_feedback'] = entity_import('entityform_type', '{
    "type" : "course_feedback",
    "label" : "Course Feedback",
    "data" : {
      "draftable" : 0,
      "draft_redirect_path" : "",
      "draft_button_text" : "",
      "draft_save_text" : { "value" : "", "format" : "filtered_html" },
      "submit_button_text" : "",
      "submit_confirm_msg" : "",
      "your_submissions" : "",
      "disallow_resubmit_msg" : "",
      "delete_confirm_msg" : "",
      "page_title_view" : "",
      "preview_page" : 0,
      "submission_page_title" : "",
      "submission_text" : { "value" : "", "format" : "filtered_html" },
      "submission_show_submitted" : 0,
      "submissions_view" : "default",
      "user_submissions_view" : "default",
      "form_status" : "ENTITYFORM_OPEN",
      "roles" : { "2" : "2", "1" : 0, "9" : 0 },
      "resubmit_action" : "new",
      "redirect_path" : "",
      "instruction_pre" : { "value" : "", "format" : "filtered_html" }
    },
    "weight" : "0",
    "paths" : { "submit" : {
        "source" : "eform\\/submit\\/course-feedback",
        "alias" : "group-feedback-form",
        "language" : "und"
      }
    }
  }');
  $items['event_feedback'] = entity_import('entityform_type', '{
    "type" : "event_feedback",
    "label" : "Event Feedback",
    "data" : {
      "draftable" : 0,
      "draft_redirect_path" : "",
      "draft_button_text" : "",
      "draft_save_text" : { "value" : "", "format" : "filtered_html" },
      "submit_button_text" : "",
      "submit_confirm_msg" : "",
      "your_submissions" : "",
      "disallow_resubmit_msg" : "",
      "delete_confirm_msg" : "",
      "page_title_view" : "",
      "preview_page" : 0,
      "submission_page_title" : "",
      "submission_text" : { "value" : "", "format" : "filtered_html" },
      "submission_show_submitted" : 0,
      "submissions_view" : "default",
      "user_submissions_view" : "default",
      "form_status" : "ENTITYFORM_OPEN",
      "roles" : { "2" : "2", "1" : 0, "9" : 0, "10" : 0 },
      "resubmit_action" : "new",
      "redirect_path" : "",
      "instruction_pre" : { "value" : "", "format" : "filtered_html" }
    },
    "weight" : "0",
    "paths" : { "submit" : {
        "source" : "eform\\/submit\\/event-feedback",
        "alias" : "event-feedback-form",
        "language" : "und"
      }
    }
  }');
  $items['group_feedback'] = entity_import('entityform_type', '{
    "type" : "group_feedback",
    "label" : "Group Feedback",
    "data" : {
      "draftable" : 0,
      "draft_redirect_path" : "",
      "draft_button_text" : "",
      "draft_save_text" : { "value" : "", "format" : "filtered_html" },
      "submit_button_text" : "",
      "submit_confirm_msg" : "",
      "your_submissions" : "",
      "disallow_resubmit_msg" : "",
      "delete_confirm_msg" : "",
      "page_title_view" : "",
      "preview_page" : 0,
      "submission_page_title" : "",
      "submission_text" : { "value" : "", "format" : "filtered_html" },
      "submission_show_submitted" : 0,
      "submissions_view" : "default",
      "user_submissions_view" : "default",
      "form_status" : "ENTITYFORM_OPEN",
      "roles" : { "2" : "2", "1" : 0, "9" : 0, "10" : 0 },
      "resubmit_action" : "new",
      "redirect_path" : "",
      "instruction_pre" : { "value" : "", "format" : "filtered_html" }
    },
    "weight" : "0",
    "paths" : { "submit" : {
        "source" : "eform\\/submit\\/group-feedback",
        "alias" : "groups-feedback-form",
        "language" : "und"
      }
    }
  }');
  $items['reject_request'] = entity_import('entityform_type', '{
    "type" : "reject_request",
    "label" : "Reject request",
    "data" : {
      "draftable" : 0,
      "draft_redirect_path" : "",
      "draft_button_text" : "",
      "draft_save_text" : { "value" : "", "format" : "full_html" },
      "submit_button_text" : "",
      "submit_confirm_msg" : "",
      "your_submissions" : "",
      "disallow_resubmit_msg" : "",
      "delete_confirm_msg" : "",
      "page_title_view" : "",
      "preview_page" : 0,
      "submission_page_title" : "Reject request",
      "submission_text" : {
        "value" : "\\u003Cp\\u003EThe request rejected email has been updated and will be sent.\\u003C\\/p\\u003E\\r\\n\\r\\n\\u003Cp\\u003E\\u0026nbsp;\\u003C\\/p\\u003E\\r\\n",
        "format" : "filtered_html"
      },
      "submission_show_submitted" : 0,
      "submissions_view" : "default",
      "user_submissions_view" : "default",
      "form_status" : "ENTITYFORM_OPEN",
      "roles" : { "1" : "1", "2" : "2", "9" : "9" },
      "resubmit_action" : "new",
      "redirect_path" : "",
      "instruction_pre" : { "value" : "", "format" : "filtered_html" }
    },
    "weight" : "0",
    "paths" : []
  }');
  return $items;
}

/**
 * Implements hook_flag_default_flags().
 */
function gn2_base_config_flag_default_flags() {
  $flags = array();
  // Exported flag: "Favorite".
  $flags['favorite'] = array(
    'entity_type' => 'node',
    'title' => 'Favorite',
    'global' => 0,
    'types' => array(
      0 => 'alumni_group',
      1 => 'announcement',
      2 => 'course',
      3 => 'event',
      4 => 'group',
      5 => 'news',
      6 => 'post',
      7 => 'publication',
    ),
    'flag_short' => 'Add as Favorite',
    'flag_long' => 'Add this [node:type] to your favorites',
    'flag_message' => 'You have added <em>[node:title]</em> to your favorites',
    'unflag_short' => 'Remove from Favorites',
    'unflag_long' => 'Remove this from your Favorites',
    'unflag_message' => 'You have removed  <em>[node:title]</em> from your favorites',
    'unflag_denied_text' => '',
    'link_type' => 'toggle',
    'weight' => 0,
    'show_in_links' => array(
      'full' => 'full',
      'teaser' => 'teaser',
      'rss' => 0,
      'diff_standard' => 0,
      'teasernothumb' => 0,
      'teaserthumb' => 0,
      'token' => 0,
    ),
    'show_as_field' => 0,
    'show_on_form' => 0,
    'access_author' => '',
    'show_contextual_link' => 0,
    'i18n' => 0,
    'module' => 'gn2_base_config',
    'locked' => array(
      0 => 'name',
    ),
    'api_version' => 3,
  );
  // Exported flag: "Report comment as inappropriate".
  $flags['report_comment_as_inappropriate'] = array(
    'entity_type' => 'comment',
    'title' => 'Report comment as inappropriate',
    'global' => 1,
    'types' => array(
      0 => 'comment_node_announcement',
      1 => 'comment_node_news',
      2 => 'comment_node_post',
    ),
    'flag_short' => 'Report as inappropriate',
    'flag_long' => '',
    'flag_message' => 'You have reported this comment as inappropriate.',
    'unflag_short' => 'Unflag this comment',
    'unflag_long' => '',
    'unflag_message' => '',
    'unflag_denied_text' => 'We are sorry, you have insufficient privileges to unflag this comment.',
    'link_type' => 'toggle',
    'weight' => 0,
    'show_in_links' => array(
      'full' => 0,
      'token' => 0,
    ),
    'show_as_field' => 1,
    'show_on_form' => 0,
    'access_author' => '',
    'show_contextual_link' => 0,
    'module' => 'gn2_base_config',
    'locked' => array(
      0 => 'name',
    ),
    'api_version' => 3,
  );
  return $flags;

}

/**
 * Implements hook_image_default_styles().
 */
function gn2_base_config_image_default_styles() {
  $styles = array();

  // Exported image style: banner810x400.
  $styles['banner810x400'] = array(
  /* banner810x400 */   'label' => 'Banner810x400',
  /* banner810x400 */   'effects' => array(
  /* banner810x400 */     1 => array(
  /* banner810x400 */       'name' => 'image_scale_and_crop',
  /* banner810x400 */       'data' => array(
  /* banner810x400 */         'width' => 810,
  /* banner810x400 */         'height' => 400,
  /* banner810x400 */       ),
  /* banner810x400 */       'weight' => 1,
  /* banner810x400 */     ),
  /* banner810x400 */   ),
  /* banner810x400 */ );

  // Exported image style: coursebanner_800x150.
  $styles['coursebanner_800x150'] = array(
  /* coursebanner_800x150 */   'label' => 'Course Banner 800x150',
  /* coursebanner_800x150 */   'effects' => array(
  /* coursebanner_800x150 */     1 => array(
  /* coursebanner_800x150 */       'name' => 'image_scale',
  /* coursebanner_800x150 */       'data' => array(
  /* coursebanner_800x150 */         'width' => 800,
  /* coursebanner_800x150 */         'height' => '',
  /* coursebanner_800x150 */         'upscale' => 1,
  /* coursebanner_800x150 */       ),
  /* coursebanner_800x150 */       'weight' => 1,
  /* coursebanner_800x150 */     ),
  /* coursebanner_800x150 */     2 => array(
  /* coursebanner_800x150 */       'name' => 'image_crop',
  /* coursebanner_800x150 */       'data' => array(
  /* coursebanner_800x150 */         'width' => 800,
  /* coursebanner_800x150 */         'height' => 150,
  /* coursebanner_800x150 */         'anchor' => 'center-center',
  /* coursebanner_800x150 */       ),
  /* coursebanner_800x150 */       'weight' => 2,
  /* coursebanner_800x150 */     ),
  /* coursebanner_800x150 */   ),
  /* coursebanner_800x150 */ );

  // Exported image style: event_main_image.
  $styles['event_main_image'] = array(
  /* event_main_image */   'label' => 'Event Main Image (810x400)',
  /* event_main_image */   'effects' => array(
  /* event_main_image */     18 => array(
  /* event_main_image */       'name' => 'focal_point_scale_and_crop',
  /* event_main_image */       'data' => array(
  /* event_main_image */         'width' => 810,
  /* event_main_image */         'height' => 400,
  /* event_main_image */         'focal_point_advanced' => array(
  /* event_main_image */           'shift_x' => '',
  /* event_main_image */           'shift_y' => '',
  /* event_main_image */         ),
  /* event_main_image */       ),
  /* event_main_image */       'weight' => 2,
  /* event_main_image */     ),
  /* event_main_image */   ),
  /* event_main_image */ );

  // Exported image style: featured_content_image.
  $styles['featured_content_image'] = array(
  /* featured_content_image */   'label' => 'Featured Content Image (300x200)',
  /* featured_content_image */   'effects' => array(
  /* featured_content_image */     17 => array(
  /* featured_content_image */       'name' => 'focal_point_scale_and_crop',
  /* featured_content_image */       'data' => array(
  /* featured_content_image */         'width' => 300,
  /* featured_content_image */         'height' => 200,
  /* featured_content_image */         'focal_point_advanced' => array(
  /* featured_content_image */           'shift_x' => '',
  /* featured_content_image */           'shift_y' => '',
  /* featured_content_image */         ),
  /* featured_content_image */       ),
  /* featured_content_image */       'weight' => 2,
  /* featured_content_image */     ),
  /* featured_content_image */   ),
  /* featured_content_image */ );

  // Exported image style: gn2_themeparts_swap_logo.
  $styles['gn2_themeparts_swap_logo'] = array(
  /* gn2_themeparts_swap_logo */   'label' => 'gn2_themeparts_swap_logo',
  /* gn2_themeparts_swap_logo */   'effects' => array(
  /* gn2_themeparts_swap_logo */     2 => array(
  /* gn2_themeparts_swap_logo */       'name' => 'image_crop',
  /* gn2_themeparts_swap_logo */       'data' => array(
  /* gn2_themeparts_swap_logo */         'width' => 350,
  /* gn2_themeparts_swap_logo */         'height' => 100,
  /* gn2_themeparts_swap_logo */         'anchor' => 'left-top',
  /* gn2_themeparts_swap_logo */       ),
  /* gn2_themeparts_swap_logo */       'weight' => 1,
  /* gn2_themeparts_swap_logo */     ),
  /* gn2_themeparts_swap_logo */   ),
  /* gn2_themeparts_swap_logo */ );

  // Exported image style: home_page_main_image.
  $styles['home_page_main_image'] = array(
  /* home_page_main_image */   'label' => 'home page main image',
  /* home_page_main_image */   'effects' => array(
  /* home_page_main_image */     1 => array(
  /* home_page_main_image */       'name' => 'image_scale_and_crop',
  /* home_page_main_image */       'data' => array(
  /* home_page_main_image */         'width' => 875,
  /* home_page_main_image */         'height' => 450,
  /* home_page_main_image */       ),
  /* home_page_main_image */       'weight' => 1,
  /* home_page_main_image */     ),
  /* home_page_main_image */   ),
  /* home_page_main_image */ );

  // Exported image style: media_gallery__160x160_.
  $styles['media_gallery__160x160_'] = array(
  /* media_gallery__160x160_ */   'label' => 'Media Gallery (160x160)',
  /* media_gallery__160x160_ */   'effects' => array(
  /* media_gallery__160x160_ */     1 => array(
  /* media_gallery__160x160_ */       'name' => 'image_scale_and_crop',
  /* media_gallery__160x160_ */       'data' => array(
  /* media_gallery__160x160_ */         'width' => 160,
  /* media_gallery__160x160_ */         'height' => 160,
  /* media_gallery__160x160_ */       ),
  /* media_gallery__160x160_ */       'weight' => 1,
  /* media_gallery__160x160_ */     ),
  /* media_gallery__160x160_ */   ),
  /* media_gallery__160x160_ */ );

  // Exported image style: news_author_thumbnail.
  $styles['news_author_thumbnail'] = array(
  /* news_author_thumbnail */   'label' => 'News Author Thumbnail(75x75)',
  /* news_author_thumbnail */   'effects' => array(
  /* news_author_thumbnail */     5 => array(
  /* news_author_thumbnail */       'name' => 'image_scale_and_crop',
  /* news_author_thumbnail */       'data' => array(
  /* news_author_thumbnail */         'width' => 75,
  /* news_author_thumbnail */         'height' => 75,
  /* news_author_thumbnail */       ),
  /* news_author_thumbnail */       'weight' => 1,
  /* news_author_thumbnail */     ),
  /* news_author_thumbnail */   ),
  /* news_author_thumbnail */ );

  // Exported image style: news_item_main_image.
  $styles['news_item_main_image'] = array(
  /* news_item_main_image */   'label' => 'News Item Main Image(805x490)',
  /* news_item_main_image */   'effects' => array(
  /* news_item_main_image */     4 => array(
  /* news_item_main_image */       'name' => 'focal_point_scale_and_crop',
  /* news_item_main_image */       'data' => array(
  /* news_item_main_image */         'width' => 805,
  /* news_item_main_image */         'height' => 490,
  /* news_item_main_image */         'focal_point_advanced' => array(
  /* news_item_main_image */           'shift_x' => '',
  /* news_item_main_image */           'shift_y' => '',
  /* news_item_main_image */         ),
  /* news_item_main_image */       ),
  /* news_item_main_image */       'weight' => 2,
  /* news_item_main_image */     ),
  /* news_item_main_image */   ),
  /* news_item_main_image */ );

  // Exported image style: news_slideshow_image.
  $styles['news_slideshow_image'] = array(
  /* news_slideshow_image */   'label' => 'News Slideshow Image (800x490)',
  /* news_slideshow_image */   'effects' => array(
  /* news_slideshow_image */     5 => array(
  /* news_slideshow_image */       'name' => 'focal_point_scale_and_crop',
  /* news_slideshow_image */       'data' => array(
  /* news_slideshow_image */         'width' => 800,
  /* news_slideshow_image */         'height' => 490,
  /* news_slideshow_image */         'focal_point_advanced' => array(
  /* news_slideshow_image */           'shift_x' => '',
  /* news_slideshow_image */           'shift_y' => '',
  /* news_slideshow_image */         ),
  /* news_slideshow_image */       ),
  /* news_slideshow_image */       'weight' => 2,
  /* news_slideshow_image */     ),
  /* news_slideshow_image */   ),
  /* news_slideshow_image */ );

  // Exported image style: news_thumbnail.
  $styles['news_thumbnail'] = array(
  /* news_thumbnail */   'label' => 'News thumbnail (245x150)',
  /* news_thumbnail */   'effects' => array(
  /* news_thumbnail */     6 => array(
  /* news_thumbnail */       'name' => 'focal_point_scale_and_crop',
  /* news_thumbnail */       'data' => array(
  /* news_thumbnail */         'width' => 245,
  /* news_thumbnail */         'height' => 150,
  /* news_thumbnail */         'focal_point_advanced' => array(
  /* news_thumbnail */           'shift_x' => '',
  /* news_thumbnail */           'shift_y' => '',
  /* news_thumbnail */         ),
  /* news_thumbnail */       ),
  /* news_thumbnail */       'weight' => 2,
  /* news_thumbnail */     ),
  /* news_thumbnail */   ),
  /* news_thumbnail */ );

  // Exported image style: profilephoto200x200.
  $styles['profilephoto200x200'] = array(
  /* profilephoto200x200 */   'label' => 'ProfilePhoto (200x200)',
  /* profilephoto200x200 */   'effects' => array(
  /* profilephoto200x200 */     2 => array(
  /* profilephoto200x200 */       'name' => 'image_scale_and_crop',
  /* profilephoto200x200 */       'data' => array(
  /* profilephoto200x200 */         'width' => 200,
  /* profilephoto200x200 */         'height' => 200,
  /* profilephoto200x200 */       ),
  /* profilephoto200x200 */       'weight' => 1,
  /* profilephoto200x200 */     ),
  /* profilephoto200x200 */   ),
  /* profilephoto200x200 */ );

  // Exported image style: publication.
  $styles['publication'] = array(
  /* publication */   'label' => 'Publication: Featured (250x330)',
  /* publication */   'effects' => array(
  /* publication */     16 => array(
  /* publication */       'name' => 'focal_point_scale_and_crop',
  /* publication */       'data' => array(
  /* publication */         'width' => 250,
  /* publication */         'height' => 330,
  /* publication */         'focal_point_advanced' => array(
  /* publication */           'shift_x' => '',
  /* publication */           'shift_y' => '',
  /* publication */         ),
  /* publication */       ),
  /* publication */       'weight' => 2,
  /* publication */     ),
  /* publication */   ),
  /* publication */ );

  // Exported image style: publication_main.
  $styles['publication_main'] = array(
  /* publication_main */   'label' => 'Publication: Main (400 wide)',
  /* publication_main */   'effects' => array(
  /* publication_main */     13 => array(
  /* publication_main */       'name' => 'image_scale',
  /* publication_main */       'data' => array(
  /* publication_main */         'width' => 400,
  /* publication_main */         'height' => '',
  /* publication_main */         'upscale' => 0,
  /* publication_main */       ),
  /* publication_main */       'weight' => 1,
  /* publication_main */     ),
  /* publication_main */   ),
  /* publication_main */ );

  // Exported image style: publication_thumbnail__200x300_.
  $styles['publication_thumbnail__200x300_'] = array(
  /* publication_thumbnail__200x300_ */   'label' => 'Publication thumbnail (200x300)',
  /* publication_thumbnail__200x300_ */   'effects' => array(
  /* publication_thumbnail__200x300_ */     15 => array(
  /* publication_thumbnail__200x300_ */       'name' => 'focal_point_scale_and_crop',
  /* publication_thumbnail__200x300_ */       'data' => array(
  /* publication_thumbnail__200x300_ */         'width' => 200,
  /* publication_thumbnail__200x300_ */         'height' => 300,
  /* publication_thumbnail__200x300_ */         'focal_point_advanced' => array(
  /* publication_thumbnail__200x300_ */           'shift_x' => '',
  /* publication_thumbnail__200x300_ */           'shift_y' => '',
  /* publication_thumbnail__200x300_ */         ),
  /* publication_thumbnail__200x300_ */       ),
  /* publication_thumbnail__200x300_ */       'weight' => 2,
  /* publication_thumbnail__200x300_ */     ),
  /* publication_thumbnail__200x300_ */   ),
  /* publication_thumbnail__200x300_ */ );

  // Exported image style: sidebar_additional_image.
  $styles['sidebar_additional_image'] = array(
  /* sidebar_additional_image */   'label' => 'Sidebar Additional Image (345x230)',
  /* sidebar_additional_image */   'effects' => array(
  /* sidebar_additional_image */     8 => array(
  /* sidebar_additional_image */       'name' => 'focal_point_scale_and_crop',
  /* sidebar_additional_image */       'data' => array(
  /* sidebar_additional_image */         'width' => 345,
  /* sidebar_additional_image */         'height' => 230,
  /* sidebar_additional_image */         'focal_point_advanced' => array(
  /* sidebar_additional_image */           'shift_x' => '',
  /* sidebar_additional_image */           'shift_y' => '',
  /* sidebar_additional_image */         ),
  /* sidebar_additional_image */       ),
  /* sidebar_additional_image */       'weight' => 2,
  /* sidebar_additional_image */     ),
  /* sidebar_additional_image */   ),
  /* sidebar_additional_image */ );

  // Exported image style: tiny50x50.
  $styles['tiny50x50'] = array(
  /* tiny50x50 */   'label' => 'Tiny(50x50)',
  /* tiny50x50 */   'effects' => array(
  /* tiny50x50 */     1 => array(
  /* tiny50x50 */       'name' => 'image_scale_and_crop',
  /* tiny50x50 */       'data' => array(
  /* tiny50x50 */         'width' => 50,
  /* tiny50x50 */         'height' => 50,
  /* tiny50x50 */       ),
  /* tiny50x50 */       'weight' => 1,
  /* tiny50x50 */     ),
  /* tiny50x50 */   ),
  /* tiny50x50 */ );

  // Exported image style: wysiwyg-large-version.
  $styles['wysiwyg-large-version'] = array(
  /* wysiwyg-large-version */   'label' => 'WYSIWYG Large',
  /* wysiwyg-large-version */   'effects' => array(
  /* wysiwyg-large-version */     1 => array(
  /* wysiwyg-large-version */       'name' => 'image_scale',
  /* wysiwyg-large-version */       'data' => array(
  /* wysiwyg-large-version */         'width' => 480,
  /* wysiwyg-large-version */         'height' => 480,
  /* wysiwyg-large-version */         'upscale' => 0,
  /* wysiwyg-large-version */       ),
  /* wysiwyg-large-version */       'weight' => 1,
  /* wysiwyg-large-version */     ),
  /* wysiwyg-large-version */   ),
  /* wysiwyg-large-version */ );

  // Exported image style: wysiwyg-medium-version.
  $styles['wysiwyg-medium-version'] = array(
  /* wysiwyg-medium-version */   'label' => 'WYSIWYG Medium',
  /* wysiwyg-medium-version */   'effects' => array(
  /* wysiwyg-medium-version */     2 => array(
  /* wysiwyg-medium-version */       'name' => 'image_scale',
  /* wysiwyg-medium-version */       'data' => array(
  /* wysiwyg-medium-version */         'width' => 300,
  /* wysiwyg-medium-version */         'height' => 300,
  /* wysiwyg-medium-version */         'upscale' => 0,
  /* wysiwyg-medium-version */       ),
  /* wysiwyg-medium-version */       'weight' => 1,
  /* wysiwyg-medium-version */     ),
  /* wysiwyg-medium-version */   ),
  /* wysiwyg-medium-version */ );

  // Exported image style: wysiwyg-original-version.
  $styles['wysiwyg-original-version'] = array(
  /* wysiwyg-original-version */   'label' => 'WYSIWYG Original',
  /* wysiwyg-original-version */   'effects' => array(
  /* wysiwyg-original-version */     3 => array(
  /* wysiwyg-original-version */       'name' => 'image_scale',
  /* wysiwyg-original-version */       'data' => array(
  /* wysiwyg-original-version */         'width' => 10000,
  /* wysiwyg-original-version */         'height' => 10000,
  /* wysiwyg-original-version */         'upscale' => 0,
  /* wysiwyg-original-version */       ),
  /* wysiwyg-original-version */       'weight' => 1,
  /* wysiwyg-original-version */     ),
  /* wysiwyg-original-version */   ),
  /* wysiwyg-original-version */ );

  // Exported image style: wysiwyg-small-version.
  $styles['wysiwyg-small-version'] = array(
  /* wysiwyg-small-version */   'label' => 'WYSIWYG Small',
  /* wysiwyg-small-version */   'effects' => array(
  /* wysiwyg-small-version */     4 => array(
  /* wysiwyg-small-version */       'name' => 'image_scale',
  /* wysiwyg-small-version */       'data' => array(
  /* wysiwyg-small-version */         'width' => 200,
  /* wysiwyg-small-version */         'height' => 200,
  /* wysiwyg-small-version */         'upscale' => 0,
  /* wysiwyg-small-version */       ),
  /* wysiwyg-small-version */       'weight' => 1,
  /* wysiwyg-small-version */     ),
  /* wysiwyg-small-version */   ),
  /* wysiwyg-small-version */ );

  return $styles;
}

/**
 * Implements hook_default_message_type().
 */
function gn2_base_config_default_message_type() {
  $items = array();
  $items['comment'] = entity_import('message_type', '{
    "name" : "comment",
    "description" : "Comment",
    "argument_keys" : [ "%title" ],
    "argument" : [],
    "category" : "message_type",
    "data" : {
      "token options" : { "clear" : 0 },
      "purge" : { "override" : 0, "enabled" : 0, "quota" : "", "days" : "" }
    },
    "language" : "en",
    "arguments" : null,
    "message_text" : { "en" : [
        {
          "value" : "\\u003Cp\\u003E\\u003Ca href=\\u0022[message:user:url]\\u0022\\u003E[message:user:field_name_first] [message:user:field_name_last]\\u003C\\/a\\u003E commented on \\u003Ca href=\\u0022[message:field-content:url]\\u0022\\u003E[message:field-content]\\u003C\\/a\\u003E.\\u003C\\/p\\u003E\\r\\n",
          "format" : "filtered_html",
          "safe_value" : "\\u003Cp\\u003E\\u003Ca href=\\u0022[message:user:url]\\u0022\\u003E[message:user:field_name_first] [message:user:field_name_last]\\u003C\\/a\\u003E commented on \\u003Ca href=\\u0022[message:field-content:url]\\u0022\\u003E[message:field-content]\\u003C\\/a\\u003E.\\u003C\\/p\\u003E\\n"
        }
      ]
    }
  }');
  $items['content'] = entity_import('message_type', '{
    "name" : "content",
    "description" : "Content",
    "argument_keys" : [],
    "argument" : [],
    "category" : "message_type",
    "data" : {
      "token options" : { "clear" : 0 },
      "purge" : { "override" : 0, "enabled" : 0, "quota" : "", "days" : "" }
    },
    "language" : "en",
    "arguments" : null,
    "message_text" : { "en" : [
        {
          "value" : "\\u003Cp\\u003E\\u003Ca href=\\u0022[message:user:url]\\u0022\\u003E[message:user:field_name_first] [message:user:field_name_last]\\u003C\\/a\\u003E created a new [message:field-content:content-type:name], \\u003Ca href=\\u0022[message:field-content:url]\\u0022\\u003E[message:field-content:title].\\u003C\\/a\\u003E\\u003C\\/p\\u003E\\r\\n",
          "format" : "filtered_html",
          "safe_value" : "\\u003Cp\\u003E\\u003Ca href=\\u0022[message:user:url]\\u0022\\u003E[message:user:field_name_first] [message:user:field_name_last]\\u003C\\/a\\u003E created a new [message:field-content:content-type:name], \\u003Ca href=\\u0022[message:field-content:url]\\u0022\\u003E[message:field-content:title].\\u003C\\/a\\u003E\\u003C\\/p\\u003E\\n"
        }
      ]
    }
  }');
  $items['like'] = entity_import('message_type', '{
    "name" : "like",
    "description" : "Like",
    "argument_keys" : [],
    "argument" : [],
    "category" : "message_type",
    "data" : {
      "token options" : { "clear" : 0 },
      "purge" : { "override" : 0, "enabled" : 0, "quota" : "", "days" : "" }
    },
    "language" : "en",
    "arguments" : null,
    "message_text" : { "en" : [
        {
          "value" : "\\u003Cp\\u003E\\u003Ca href=\\u0022[message:user:url]\\u0022\\u003E[message:user:field_name_first] [message:user:field_name_last]\\u003C\\/a\\u003E favorited \\u003Ca href=\\u0022[message:field-content:url]\\u0022\\u003E[message:field-content]\\u003C\\/a\\u003E.\\u003C\\/p\\u003E\\r\\n",
          "format" : "filtered_html",
          "safe_value" : "\\u003Cp\\u003E\\u003Ca href=\\u0022[message:user:url]\\u0022\\u003E[message:user:field_name_first] [message:user:field_name_last]\\u003C\\/a\\u003E favorited \\u003Ca href=\\u0022[message:field-content:url]\\u0022\\u003E[message:field-content]\\u003C\\/a\\u003E.\\u003C\\/p\\u003E\\n"
        }
      ]
    }
  }');
  return $items;
}

/**
 * Implements hook_node_info().
 */
function gn2_base_config_node_info() {
  $items = array(
    'alumni_group' => array(
      'name' => t('Alumni Group'),
      'base' => 'node_content',
      'description' => t('An alumni group is a community of people who have attended events and classes together.'),
      'has_title' => '1',
      'title_label' => t('Alumni Group Title'),
      'help' => '',
    ),
    'announcement' => array(
      'name' => t('Announcement'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'event' => array(
      'name' => t('Event'),
      'base' => 'node_content',
      'description' => t('An event is a series of activities attended by members of a group.'),
      'has_title' => '1',
      'title_label' => t('Event Title'),
      'help' => '',
    ),
    'help' => array(
      'name' => t('Help'),
      'base' => 'node_content',
      'description' => t('Help content'),
      'has_title' => '1',
      'title_label' => t('Help Title'),
      'help' => '',
    ),
    'news' => array(
      'name' => t('News'),
      'base' => 'node_content',
      'description' => t('News is a persistent content type to share news about your group, event, course, or organization.'),
      'has_title' => '1',
      'title_label' => t('News Title'),
      'help' => '',
    ),
    'page' => array(
      'name' => t('Page'),
      'base' => 'node_content',
      'description' => t('A basic page'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'post' => array(
      'name' => t('Post'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'program' => array(
      'name' => t('Custom landing page'),
      'base' => 'node_content',
      'description' => t('A group landing page.'),
      'has_title' => '1',
      'title_label' => t('Program Name'),
      'help' => '',
    ),
    'publication' => array(
      'name' => t('Publication'),
      'base' => 'node_content',
      'description' => t('Use the publication content type to describe, review or disseminate a publication. This content type has separate fields that allow users to search by title, author, date of publication and publisher.'),
      'has_title' => '1',
      'title_label' => t('Publication Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}

/**
 * Implements hook_default_rules_link().
 */
function gn2_base_config_default_rules_link() {
  $items = array();
  $items['approve_anonymous'] = entity_import('rules_link', '{
    "settings" : {
      "text" : "Approve",
      "link_type" : "token",
      "bundles" : { "userreg" : "userreg" },
      "entity_link" : 0
    },
    "name" : "approve_anonymous",
    "label" : "Approve anonymous",
    "path" : "approve_anonymous",
    "entity_type" : "entityform"
  }');
  $items['approve_member'] = entity_import('rules_link', '{
    "settings" : {
      "text" : "Approve",
      "link_type" : "token",
      "bundles" : { "join_org" : "join_org" },
      "entity_link" : 0
    },
    "name" : "approve_member",
    "label" : "Approve member",
    "path" : "approve_member",
    "entity_type" : "entityform"
  }');
  $items['deny_anonymous'] = entity_import('rules_link', '{
    "settings" : {
      "text" : "Deny",
      "link_type" : "token",
      "bundles" : { "userreg" : "userreg" },
      "entity_link" : 0
    },
    "name" : "deny_anonymous",
    "label" : "Deny anonymous",
    "path" : "deny_anonymous",
    "entity_type" : "entityform"
  }');
  $items['deny_member'] = entity_import('rules_link', '{
    "settings" : {
      "text" : "Deny",
      "link_type" : "token",
      "bundles" : { "join_org" : "join_org" },
      "entity_link" : 0
    },
    "name" : "deny_member",
    "label" : "Deny member",
    "path" : "deny_member",
    "entity_type" : "entityform"
  }');
  return $items;
}
