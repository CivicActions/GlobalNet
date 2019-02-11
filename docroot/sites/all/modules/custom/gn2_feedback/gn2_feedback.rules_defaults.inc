<?php
/**
 * @file
 * gn2_feedback.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function gn2_feedback_default_rules_configuration() {
  $items = array();
  $items['rules_feedback_c'] = entity_import('rules_config', '{ "rules_feedback_c" : {
      "LABEL" : "Feedback: Compile feedback field",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules", "entityform" ],
      "ON" : { "entityform_presave" : [] },
      "IF" : [
        { "entity_is_of_bundle" : {
            "entity" : [ "entityform" ],
            "type" : "entityform",
            "bundle" : { "value" : { "feedback" : "feedback" } }
          }
        },
        { "entity_has_field" : { "entity" : [ "entityform" ], "field" : "field_feedback_url" } },
        { "entity_has_field" : { "entity" : [ "entityform" ], "field" : "field_feedback_operation" } },
        { "entity_has_field" : { "entity" : [ "entityform" ], "field" : "field_feedback_expected" } },
        { "entity_has_field" : { "entity" : [ "entityform" ], "field" : "field_feedback_experienced" } },
        { "entity_has_field" : { "entity" : [ "entityform" ], "field" : "field_feedback" } }
      ],
      "DO" : [
        { "data_set" : {
            "data" : [ "entityform:field-feedback" ],
            "value" : "*URL*\\r\\n[entityform:field-feedback-url]\\r\\n\\r\\n*OPERATION*\\r\\n[entityform:field_feedback_operation]\\r\\n\\r\\n*EXPERIENCED*\\r\\n[entityform:field_feedback_experienced]\\r\\n\\r\\n*EXPECTED*\\r\\n[entityform:field_feedback_expected]\\r\\n\\r\\n*COMMENTS*\\r\\n[entityform:field_user_feedback]\\r\\n\\r\\n\\r\\n\\r\\n"
          }
        },
        { "entity_save" : { "data" : [ "entityform" ], "immediate" : "1" } }
      ]
    }
  }');
  $items['rules_notify_feedback_submission'] = entity_import('rules_config', '{ "rules_notify_feedback_submission" : {
      "LABEL" : "Notify Feedback Submission",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules", "views_rules", "entityform" ],
      "ON" : { "entityform_insert" : [] },
      "IF" : [
        { "entity_is_of_bundle" : {
            "entity" : [ "entityform" ],
            "type" : "entityform",
            "bundle" : { "value" : {
                "course_feedback" : "course_feedback",
                "event_feedback" : "event_feedback",
                "group_feedback" : "group_feedback"
              }
            }
          }
        }
      ],
      "DO" : [
        { "variable_add" : {
            "USING" : { "type" : "integer", "value" : [ "entityform:field-organization:nid" ] },
            "PROVIDE" : { "variable_added" : { "gid" : "Group ID" } }
          }
        },
        { "entity_fetch" : {
            "USING" : { "type" : "node", "id" : [ "gid" ] },
            "PROVIDE" : { "entity_fetched" : { "og_group" : "Group" } }
          }
        },
        { "VIEW LOOP" : {
            "VIEW" : "group_members",
            "DISPLAY" : "views_rules_1",
            "USING" : { "gid" : [ "gid" ] },
            "ROW VARIABLES" : { "mail" : { "mail" : "User: E-mail" } },
            "DO" : [
              { "mail" : {
                  "to" : [ "mail" ],
                  "subject" : "New Feedback Submission for [og-group:title]",
                  "message" : "In the feedback submission reports:\\r\\n\\r\\nSubject: [entityform:field_title]\\r\\nCategory: [entityform:field-feedback-category]\\r\\nDescription: [entityform:field-description]\\r\\n\\r\\nFor further details, view the full request: [entityform:url]",
                  "language" : [ "" ]
                }
              }
            ]
          }
        }
      ]
    }
  }');
  return $items;
}
