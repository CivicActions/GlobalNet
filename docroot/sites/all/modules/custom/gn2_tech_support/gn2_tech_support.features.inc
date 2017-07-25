<?php
/**
 * @file
 * gn2_tech_support.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function gn2_tech_support_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function gn2_tech_support_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_default_entityform_type().
 */
function gn2_tech_support_default_entityform_type() {
  $items = array();
  $items['tech_support'] = entity_import('entityform_type', '{
    "type" : "tech_support",
    "label" : "Technical Support",
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
      "submission_page_title" : "Technical Support",
      "submission_text" : {
        "value" : "\\u003Cp\\u003EThank you for your inquiry. Your request is currently pending review by the site administrator. Once resolved, a message will be sent to your email address. If you don\\u0027t see the email, please check your spam folder.\\u003C\\/p\\u003E\\r\\n\\r\\n\\u003Cp\\u003E\\u0026nbsp;\\u003C\\/p\\u003E\\r\\n",
        "format" : "filtered_html"
      },
      "submission_show_submitted" : 0,
      "submissions_view" : "default",
      "user_submissions_view" : "default",
      "form_status" : "ENTITYFORM_OPEN",
      "roles" : { "1" : "1", "2" : "2", "9" : 0, "10" : 0 },
      "resubmit_action" : "new",
      "redirect_path" : "",
      "instruction_pre" : {
        "value" : "\\u003Cp\\u003ETo get help email admin@globalnetplatform.org or submit the form below.\\u003C\\/p\\u003E\\r\\n",
        "format" : "filtered_html"
      }
    },
    "weight" : "0",
    "paths" : []
  }');
  return $items;
}
