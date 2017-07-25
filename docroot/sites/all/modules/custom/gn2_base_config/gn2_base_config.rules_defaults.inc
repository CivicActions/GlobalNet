<?php
/**
 * @file
 * gn2_base_config.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function gn2_base_config_default_rules_configuration() {
  $items = array();
  $items['rules_comment_message'] = entity_import('rules_config', '{ "rules_comment_message" : {
      "LABEL" : "Comment message",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "Activity log" ],
      "REQUIRES" : [ "rules", "comment" ],
      "ON" : { "comment_insert" : [] },
      "DO" : [
        { "entity_create" : {
            "USING" : {
              "type" : "message",
              "param_type" : "comment",
              "param_user" : [ "comment:author" ]
            },
            "PROVIDE" : { "entity_created" : { "entity_created" : "Created entity" } }
          }
        },
        { "data_set" : {
            "data" : [ "entity-created:field-content" ],
            "value" : [ "comment:node" ]
          }
        }
      ]
    }
  }');
  $items['rules_contact_support_submission'] = entity_import('rules_config', '{ "rules_contact_support_submission" : {
      "LABEL" : "Contact Support submission",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "Support" ],
      "REQUIRES" : [ "rules", "entityform" ],
      "ON" : { "entityform_insert" : [] },
      "IF" : [
        { "entity_is_of_bundle" : {
            "entity" : [ "entityform" ],
            "type" : "entityform",
            "bundle" : { "value" : { "contact_support" : "contact_support", "tech_support" : "tech_support" } }
          }
        }
      ],
      "DO" : [
        { "mail" : {
            "to" : "admin@globalnetplatform.org",
            "subject" : "Contact Support submission from: [entityform:field-support-name]",
            "message" : "Name: [entityform:field-support-name]\\r\\n\\r\\nEmail Address: [entityform:field-email]\\r\\n\\r\\nQuestion:\\r\\n[entityform:field-question]\\r\\n\\r\\nFor further details, view the full record: [entityform:url]",
            "language" : [ "" ]
          }
        }
      ]
    }
  }');
  $items['rules_content'] = entity_import('rules_config', '{ "rules_content" : {
      "LABEL" : "Content",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "ON" : { "node_insert" : [] },
      "IF" : [
        { "node_is_of_type" : {
            "node" : [ "node" ],
            "type" : { "value" : {
                "alumni_group" : "alumni_group",
                "announcement" : "announcement",
                "coi" : "coi",
                "course" : "course",
                "program" : "program",
                "event" : "event",
                "media_gallery" : "media_gallery",
                "group" : "group",
                "news" : "news",
                "organization" : "organization",
                "poll" : "poll",
                "post" : "post",
                "publication" : "publication"
              }
            }
          }
        }
      ],
      "DO" : [
        { "entity_create" : {
            "USING" : {
              "type" : "message",
              "param_type" : "content",
              "param_user" : [ "node:author" ]
            },
            "PROVIDE" : { "entity_created" : { "entity_created" : "Created entity" } }
          }
        },
        { "data_set" : { "data" : [ "entity-created:field-content" ], "value" : [ "node" ] } }
      ]
    }
  }');
  $items['rules_course_feedback'] = entity_import('rules_config', '{ "rules_course_feedback" : {
      "LABEL" : "Course Feedback",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules", "entityform" ],
      "ON" : { "entityform_insert" : [] },
      "IF" : [
        { "entity_is_of_bundle" : {
            "entity" : [ "entityform" ],
            "type" : "entityform",
            "bundle" : { "value" : { "course_feedback" : "course_feedback" } }
          }
        }
      ],
      "DO" : [
        { "drupal_message" : { "message" : "Your feedback was submitted successfully. Thank you." } }
      ]
    }
  }');
  $items['rules_gallery_group_member_notification'] = entity_import('rules_config', '{ "rules_gallery_group_member_notification" : {
      "LABEL" : "Gallery group member notification",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "php", "rules" ],
      "ON" : {
        "node_insert--media_gallery" : { "bundle" : "media_gallery" },
        "node_update--media_gallery" : { "bundle" : "media_gallery" }
      },
      "DO" : [
        { "php_eval" : { "code" : "_gn2_base_config_notify_group_members($node);" } }
      ]
    }
  }');
  $items['rules_help_search_result_redirect'] = entity_import('rules_config', '{ "rules_help_search_result_redirect" : {
      "LABEL" : "Help - Search result redirect",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "ON" : { "node_view--help" : { "bundle" : "help" } },
      "DO" : [
        { "redirect" : { "url" : "\\u003C?php print \\u0027guide\\/Search\\/\\u0027 . $node-\\u003Enid; ?\\u003E" } }
      ]
    }
  }');
  $items['rules_like_message'] = entity_import('rules_config', '{ "rules_like_message" : {
      "LABEL" : "Like message",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules", "flag" ],
      "ON" : { "flag_flagged_favorite" : [] },
      "IF" : [
        { "node_is_of_type" : {
            "node" : [ "flagged-node" ],
            "type" : { "value" : {
                "announcement" : "announcement",
                "news" : "news",
                "post" : "post",
                "publication" : "publication"
              }
            }
          }
        }
      ],
      "DO" : [
        { "entity_create" : {
            "USING" : {
              "type" : "message",
              "param_type" : "like",
              "param_user" : [ "flagging-user" ]
            },
            "PROVIDE" : { "entity_created" : { "entity_created" : "Created entity" } }
          }
        },
        { "data_set" : {
            "data" : [ "entity-created:field-content" ],
            "value" : [ "flagged-node" ]
          }
        }
      ]
    }
  }');
  $items['rules_link_condition__cloned'] = entity_import('rules_config', '{ "rules_link_condition__cloned" : {
      "LABEL" : "Rules link: Approve anonymous (cloned) condition",
      "PLUGIN" : "and",
      "OWNER" : "rules",
      "USES VARIABLES" : { "entityform" : { "type" : "entityform", "label" : "entityform" } },
      "AND" : []
    }
  }');
  $items['rules_link_condition_approve_anonymous'] = entity_import('rules_config', '{ "rules_link_condition_approve_anonymous" : {
      "LABEL" : "Rules link: Approve anonymous condition",
      "PLUGIN" : "and",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "USES VARIABLES" : { "entityform" : { "label" : "entityform", "type" : "entityform" } },
      "AND" : [
        { "entity_has_field" : { "entity" : [ "entityform" ], "field" : "field_email" } },
        { "entity_has_field" : { "entity" : [ "entityform" ], "field" : "field_status" } },
        { "data_is" : { "data" : [ "entityform:field-status" ], "value" : "0" } }
      ]
    }
  }');
  $items['rules_link_condition_approve_member'] = entity_import('rules_config', '{ "rules_link_condition_approve_member" : {
      "LABEL" : "Rules link: Approve member condition",
      "PLUGIN" : "and",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "USES VARIABLES" : { "entityform" : { "type" : "entityform", "label" : "entityform" } },
      "AND" : [
        { "entity_has_field" : { "entity" : [ "entityform" ], "field" : "field_organization" } },
        { "NOT data_is_empty" : { "data" : [ "entityform:field-organization" ] } },
        { "entity_has_field" : { "entity" : [ "entityform" ], "field" : "field_status" } },
        { "data_is" : { "data" : [ "entityform:field-status" ], "value" : "0" } }
      ]
    }
  }');
  $items['rules_link_condition_deny_anonymous'] = entity_import('rules_config', '{ "rules_link_condition_deny_anonymous" : {
      "LABEL" : "Rules link: Deny anonymous condition",
      "PLUGIN" : "and",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "USES VARIABLES" : { "entityform" : { "type" : "entityform", "label" : "entityform" } },
      "AND" : [
        { "entity_has_field" : { "entity" : [ "entityform" ], "field" : "field_email" } },
        { "entity_has_field" : { "entity" : [ "entityform" ], "field" : "field_status" } },
        { "data_is" : { "data" : [ "entityform:field-status" ], "value" : "0" } }
      ]
    }
  }');
  $items['rules_link_condition_deny_member'] = entity_import('rules_config', '{ "rules_link_condition_deny_member" : {
      "LABEL" : "Rules link: Deny member condition",
      "PLUGIN" : "and",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "USES VARIABLES" : { "entityform" : { "type" : "entityform", "label" : "entityform" } },
      "AND" : [
        { "entity_has_field" : { "entity" : [ "entityform" ], "field" : "field_status" } },
        { "data_is" : { "data" : [ "entityform:field-status" ], "value" : "0" } }
      ]
    }
  }');
  $items['rules_link_set_'] = entity_import('rules_config', '{ "rules_link_set_" : {
      "LABEL" : "Rules link:  rules set",
      "PLUGIN" : "rule set",
      "OWNER" : "rules",
      "USES VARIABLES" : { "" : { "type" : null, "label" : null } },
      "RULES" : []
    }
  }');
  $items['rules_link_set_approve_anonymous'] = entity_import('rules_config', '{ "rules_link_set_approve_anonymous" : {
      "LABEL" : "Rules link: Approve anonymous rules set",
      "PLUGIN" : "rule set",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules", "php", "og" ],
      "USES VARIABLES" : { "entityform" : { "label" : "entityform", "type" : "entityform" } },
      "RULES" : [
        { "RULE" : {
            "PROVIDE" : {
              "variable_added" : {
                "email_addy" : "Email address",
                "first" : "First name",
                "last" : "Last name"
              },
              "entity_created" : { "created_user" : "Created user" }
            },
            "IF" : [
              { "entity_has_field" : { "entity" : [ "entityform" ], "field" : "field_email" } },
              { "entity_has_field" : { "entity" : [ "entityform" ], "field" : "field_name_first" } },
              { "entity_has_field" : { "entity" : [ "entityform" ], "field" : "field_name_last" } },
              { "php_eval" : { "code" : "$user = user_load_by_mail($entityform-\\u003Efield_email[LANGUAGE_NONE][0][\\u0027email\\u0027]);\\r\\nif (is_object($user)) {\\r\\n  $link = l($user-\\u003Ename, \\u0027user\\/\\u0027 . $user-\\u003Euid);\\r\\n  drupal_set_message(t(\\u0027A user, !link, already exist with the email address %email\\u0027, array(\\u0027!link\\u0027 =\\u003E $link, \\u0027%email\\u0027 =\\u003E $user-\\u003Email)));\\r\\n  return FALSE;\\r\\n}\\r\\nelse {\\r\\n  return TRUE;\\r\\n}" } },
              { "entity_has_field" : { "entity" : [ "entityform" ], "field" : "field_organization" } }
            ],
            "DO" : [
              { "variable_add" : {
                  "USING" : { "type" : "text", "value" : [ "entityform:field-email" ] },
                  "PROVIDE" : { "variable_added" : { "email_addy" : "Email address" } }
                }
              },
              { "variable_add" : {
                  "USING" : { "type" : "text", "value" : [ "entityform:field-name-first" ] },
                  "PROVIDE" : { "variable_added" : { "first" : "First name" } }
                }
              },
              { "variable_add" : {
                  "USING" : { "type" : "text", "value" : [ "entityform:field-name-last" ] },
                  "PROVIDE" : { "variable_added" : { "last" : "Last name" } }
                }
              },
              { "entity_create" : {
                  "USING" : {
                    "type" : "user",
                    "param_field_name_first" : [ "first" ],
                    "param_field_name_last" : [ "last" ],
                    "param_name" : "unset_username",
                    "param_mail" : [ "email-addy" ]
                  },
                  "PROVIDE" : { "entity_created" : { "created_user" : "Created user" } }
                }
              },
              { "entity_save" : { "data" : [ "created-user" ], "immediate" : "1" } },
              { "user_unblock" : { "account" : [ "created-user" ] } }
            ],
            "LABEL" : "Create New Account"
          }
        },
        { "RULE" : {
            "PROVIDE" : { "entity_fetched" : { "org" : "Org", "user_loaded" : "User Loaded" } },
            "IF" : [
              { "entity_has_field" : { "entity" : [ "entityform" ], "field" : "field_organization" } },
              { "entity_has_field" : { "entity" : [ "entityform" ], "field" : "field_email" } }
            ],
            "DO" : [
              { "entity_fetch" : {
                  "USING" : { "type" : "node", "id" : [ "entityform:field-organization:nid" ] },
                  "PROVIDE" : { "entity_fetched" : { "org" : "Org" } }
                }
              },
              { "entity_query" : {
                  "USING" : {
                    "type" : "user",
                    "property" : "mail",
                    "value" : [ "email-addy" ],
                    "limit" : "1"
                  },
                  "PROVIDE" : { "entity_fetched" : { "user_loaded" : "User Loaded" } }
                }
              },
              { "og_subcribe_user" : { "user" : [ "user-loaded:0" ], "group" : [ "org" ] } },
              { "entity_save" : { "data" : [ "org" ], "immediate" : "1" } }
            ],
            "LABEL" : "Add member to group"
          }
        },
        { "RULE" : {
            "IF" : [
              { "entity_has_field" : { "entity" : [ "entityform" ], "field" : "field_status" } }
            ],
            "DO" : [
              { "data_set" : { "data" : [ "entityform:field-status" ], "value" : "1" } },
              { "entity_save" : { "data" : [ "entityform" ], "immediate" : "1" } },
              { "drupal_message" : { "message" : "User [created-user:name] has been approved." } },
              { "redirect" : { "url" : "group\\/node\\/[org:nid]\\/admin\\/people\\/add-user" } }
            ],
            "LABEL" : "Set status"
          }
        },
        { "RULE" : {
            "DO" : [
              { "redirect" : { "url" : "admin\\/manage\\/userform\\/submissions\\/userreg" } }
            ],
            "LABEL" : "Redirect to dashboard forms"
          }
        }
      ]
    }
  }');
  $items['rules_link_set_approve_member'] = entity_import('rules_config', '{ "rules_link_set_approve_member" : {
      "LABEL" : "Rules link: Approve member rules set",
      "PLUGIN" : "rule set",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules", "og" ],
      "USES VARIABLES" : { "entityform" : { "type" : "entityform", "label" : "entityform" } },
      "RULES" : [
        { "RULE" : {
            "PROVIDE" : { "entity_fetched" : { "org" : "Organization", "member_id" : "Member ID" } },
            "IF" : [
              { "entity_has_field" : { "entity" : [ "entityform" ], "field" : "field_organization" } }
            ],
            "DO" : [
              { "entity_fetch" : {
                  "USING" : { "type" : "node", "id" : [ "entityform:field-organization:nid" ] },
                  "PROVIDE" : { "entity_fetched" : { "org" : "Organization" } }
                }
              },
              { "entity_fetch" : {
                  "USING" : { "type" : "user", "id" : [ "entityform:uid" ] },
                  "PROVIDE" : { "entity_fetched" : { "member_id" : "Member ID" } }
                }
              },
              { "og_group_content_add" : { "entity" : [ "member-id" ], "group" : [ "org" ] } }
            ],
            "LABEL" : "Add member to group"
          }
        },
        { "RULE" : {
            "IF" : [
              { "entity_has_field" : { "entity" : [ "entityform" ], "field" : "field_status" } }
            ],
            "DO" : [
              { "data_set" : { "data" : [ "entityform:field-status" ], "value" : "1" } }
            ],
            "LABEL" : "Change status"
          }
        },
        { "RULE" : {
            "IF" : [ { "NOT data_is_empty" : { "data" : [ "member-id:mail" ] } } ],
            "DO" : [
              { "mail" : {
                  "to" : [ "member-id:mail" ],
                  "subject" : "Your request to join [org:title] has been approved",
                  "message" : "View the organization at the following URL:\\r\\n[org:url]",
                  "language" : [ "" ]
                }
              }
            ],
            "LABEL" : "Send approval email"
          }
        },
        { "RULE" : {
            "IF" : [ { "entity_is_of_type" : { "entity" : [ "org" ], "type" : "node" } } ],
            "DO" : [
              { "redirect" : { "url" : "admin\\/manage\\/userform\\/submissions\\/join_org" } }
            ],
            "LABEL" : "Redirect member to group"
          }
        }
      ]
    }
  }');
  $items['rules_link_set_deny_anonymous'] = entity_import('rules_config', '{ "rules_link_set_deny_anonymous" : {
      "LABEL" : "Rules link: Deny anonymous rules set",
      "PLUGIN" : "rule set",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "USES VARIABLES" : { "entityform" : { "type" : "entityform", "label" : "entityform" } },
      "RULES" : [
        { "RULE" : {
            "PROVIDE" : {
              "variable_added" : { "email" : "Email address" },
              "entity_fetched" : { "new_user" : "New User" }
            },
            "IF" : [
              { "entity_has_field" : { "entity" : [ "entityform" ], "field" : "field_email" } }
            ],
            "DO" : [
              { "variable_add" : {
                  "USING" : { "type" : "text", "value" : [ "entityform:field-email" ] },
                  "PROVIDE" : { "variable_added" : { "email" : "Email address" } }
                }
              },
              { "entity_query" : {
                  "USING" : {
                    "type" : "user",
                    "property" : "mail",
                    "value" : [ "email" ],
                    "limit" : "1"
                  },
                  "PROVIDE" : { "entity_fetched" : { "new_user" : "New User" } }
                }
              },
              { "user_block" : { "account" : [ "new-user:0" ] } }
            ],
            "LABEL" : "Load user"
          }
        },
        { "RULE" : {
            "IF" : [
              { "entity_has_field" : { "entity" : [ "entityform" ], "field" : "field_status" } },
              { "data_is" : { "data" : [ "new-user:0:status" ], "value" : "0" } }
            ],
            "DO" : [
              { "data_set" : { "data" : [ "entityform:field-status" ], "value" : "2" } },
              { "entity_save" : { "data" : [ "entityform" ], "immediate" : "1" } }
            ],
            "LABEL" : "Set status"
          }
        },
        { "RULE" : {
            "PROVIDE" : { "variable_added" : { "org_nid" : "Organization", "new_user_id" : "New User ID" } },
            "IF" : [
              { "entity_has_field" : { "entity" : [ "entityform" ], "field" : "field_organization" } }
            ],
            "DO" : [
              { "variable_add" : {
                  "USING" : { "type" : "integer", "value" : [ "entityform:field-organization:nid" ] },
                  "PROVIDE" : { "variable_added" : { "org_nid" : "Organization" } }
                }
              },
              { "variable_add" : {
                  "USING" : { "type" : "integer", "value" : [ "new-user:0:uid" ] },
                  "PROVIDE" : { "variable_added" : { "new_user_id" : "New User ID" } }
                }
              },
              { "redirect" : {
                  "url" : "eform\\/submit\\/reject-request?uid=[new-user-id:value]\\u0026org=[org-nid:value]",
                  "destination" : "1"
                }
              }
            ],
            "LABEL" : "Redirect to Rejections form"
          }
        }
      ]
    }
  }');
  $items['rules_link_set_deny_member'] = entity_import('rules_config', '{ "rules_link_set_deny_member" : {
      "LABEL" : "Rules link: Deny member rules set",
      "PLUGIN" : "rule set",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "USES VARIABLES" : { "entityform" : { "type" : "entityform", "label" : "entityform" } },
      "RULES" : [
        { "RULE" : {
            "IF" : [
              { "entity_has_field" : { "entity" : [ "entityform" ], "field" : "field_status" } }
            ],
            "DO" : [
              { "data_set" : { "data" : [ "entityform:field-status" ], "value" : "2" } }
            ],
            "LABEL" : "Set status"
          }
        },
        { "RULE" : {
            "PROVIDE" : { "variable_added" : { "org_nid" : "Organization ID", "member_id" : "Member ID" } },
            "IF" : [
              { "entity_has_field" : { "entity" : [ "entityform" ], "field" : "field_organization" } }
            ],
            "DO" : [
              { "variable_add" : {
                  "USING" : { "type" : "integer", "value" : [ "entityform:field-organization:nid" ] },
                  "PROVIDE" : { "variable_added" : { "org_nid" : "Organization ID" } }
                }
              },
              { "variable_add" : {
                  "USING" : { "type" : "integer", "value" : [ "entityform:uid" ] },
                  "PROVIDE" : { "variable_added" : { "member_id" : "Member ID" } }
                }
              },
              { "redirect" : {
                  "url" : "eform\\/submit\\/reject-request?uid=[member-id:value]\\u0026org=[org-nid:value]",
                  "destination" : "1"
                }
              }
            ],
            "LABEL" : "Redirect to Rejections form"
          }
        }
      ]
    }
  }');
  $items['rules_make_organization_visible'] = entity_import('rules_config', '{ "rules_make_organization_visible" : {
      "LABEL" : "Make Organization Visible",
      "PLUGIN" : "rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "USES VARIABLES" : { "my_node" : { "label" : "My Node", "type" : "node" } },
      "IF" : [
        { "entity_has_field" : { "entity" : [ "my-node" ], "field" : "field_gn2_simple_access" } }
      ],
      "DO" : [
        { "data_set" : {
            "data" : [ "my-node:field-gn2-simple-access" ],
            "value" : "organization"
          }
        }
      ]
    }
  }');
  $items['rules_make_public'] = entity_import('rules_config', '{ "rules_make_public" : {
      "LABEL" : "Make Public",
      "PLUGIN" : "rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "USES VARIABLES" : { "my_node" : { "label" : "My Node", "type" : "node" } },
      "IF" : [
        { "entity_has_field" : { "entity" : [ "my-node" ], "field" : "field_gn2_simple_access" } }
      ],
      "DO" : [
        { "data_set" : { "data" : [ "my-node:field-gn2-simple-access" ], "value" : "public" } }
      ]
    }
  }');
  $items['rules_make_sitewide'] = entity_import('rules_config', '{ "rules_make_sitewide" : {
      "LABEL" : "Make Sitewide",
      "PLUGIN" : "rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "USES VARIABLES" : { "my_node" : { "label" : "My Node", "type" : "node" } },
      "IF" : [
        { "entity_has_field" : { "entity" : [ "my-node" ], "field" : "field_gn2_simple_access" } }
      ],
      "DO" : [
        { "data_set" : { "data" : [ "my-node:field-gn2-simple-access" ], "value" : "sitewide" } }
      ]
    }
  }');
  $items['rules_member_organization_request'] = entity_import('rules_config', '{ "rules_member_organization_request" : {
      "LABEL" : "Member organization request",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "User" ],
      "REQUIRES" : [ "rules", "views_rules", "entityform" ],
      "ON" : { "entityform_insert" : [] },
      "IF" : [
        { "entity_is_of_bundle" : {
            "entity" : [ "entityform" ],
            "type" : "entityform",
            "bundle" : { "value" : { "join_org" : "join_org" } }
          }
        },
        { "entity_has_field" : { "entity" : [ "entityform" ], "field" : "field_organization" } },
        { "entity_has_field" : { "entity" : [ "entityform" ], "field" : "field_status" } },
        { "data_is" : { "data" : [ "entityform:field-status" ], "value" : "0" } }
      ],
      "DO" : [
        { "variable_add" : {
            "USING" : { "type" : "integer", "value" : [ "entityform:field-organization:nid" ] },
            "PROVIDE" : { "variable_added" : { "org_nid" : "Organization" } }
          }
        },
        { "entity_fetch" : {
            "USING" : { "type" : "node", "id" : [ "org-nid" ] },
            "PROVIDE" : { "entity_fetched" : { "group" : "Group" } }
          }
        },
        { "entity_fetch" : {
            "USING" : { "type" : "user", "id" : [ "entityform:uid" ] },
            "PROVIDE" : { "entity_fetched" : { "member" : "Member" } }
          }
        },
        { "VIEW LOOP" : {
            "VIEW" : "group_members",
            "DISPLAY" : "views_rules_2",
            "USING" : { "gid" : [ "org-nid" ] },
            "ROW VARIABLES" : { "mail" : { "mail" : "User: E-mail" } },
            "DO" : [
              { "mail" : {
                  "to" : [ "mail" ],
                  "subject" : "New user for [group:title]",
                  "message" : "[member:field-name-first] [member:field-name-last] has requested membership to [group:title]\\r\\n\\r\\nView request: [site:url]\\/admin\\/manage\\/users\\/regforms\\/[entityform:entityform-id]?destination=node\\/[org-nid:value]\\/dashboard\\/userforms\\/submissions\\/userreg",
                  "language" : [ "" ]
                }
              }
            ]
          }
        }
      ]
    }
  }');
  $items['rules_new_user_notification'] = entity_import('rules_config', '{ "rules_new_user_notification" : {
      "LABEL" : "New user notification",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "User" ],
      "REQUIRES" : [ "rules", "views_rules", "entityform" ],
      "ON" : { "entityform_insert" : [] },
      "IF" : [
        { "entity_is_of_bundle" : {
            "entity" : [ "entityform" ],
            "type" : "entityform",
            "bundle" : { "value" : { "userreg" : "userreg" } }
          }
        },
        { "entity_has_field" : { "entity" : [ "entityform" ], "field" : "field_email" } },
        { "NOT data_is_empty" : { "data" : [ "entityform:field-email" ] } },
        { "entity_has_field" : { "entity" : [ "entityform" ], "field" : "field_organization" } },
        { "NOT data_is_empty" : { "data" : [ "entityform:field-organization" ] } }
      ],
      "DO" : [
        { "variable_add" : {
            "USING" : { "type" : "integer", "value" : [ "entityform:field-organization:nid" ] },
            "PROVIDE" : { "variable_added" : { "gid" : "Group ID" } }
          }
        },
        { "entity_fetch" : {
            "USING" : { "type" : "node", "id" : [ "gid" ] },
            "PROVIDE" : { "entity_fetched" : { "org_group" : "Group" } }
          }
        },
        { "VIEW LOOP" : {
            "VIEW" : "group_members",
            "DISPLAY" : "views_rules_2",
            "USING" : { "gid" : [ "gid" ] },
            "ROW VARIABLES" : { "mail" : { "mail" : "User: E-mail" } },
            "DO" : [
              { "mail" : {
                  "to" : [ "mail" ],
                  "subject" : "New user for [org-group:title]",
                  "message" : "[entityform:field-name-first] [entityform:field-name-last] has requested membership to [org-group:title]\\r\\n\\r\\nGiven Name: [entityform:field-name-first]\\r\\nFamily Name: [entityform:field-name-last]\\r\\nEmail Address: [entityform:field-email]\\r\\n\\r\\nCountry of Residence: [entityform:field-country-of-residence]\\r\\nPreferred Language: [entityform:field-preferred-language]\\r\\nWhere do you work: [entityform:field-where-do-you-work]\\r\\n\\r\\nReason for creating an account: [entityform:field-why-do-you-want]\\r\\n\\r\\nAdditional Comments\\/Remarks: [entityform:field-anything-else]\\r\\n\\r\\nFor further details, view the full request: [entityform:url]",
                  "language" : [ "" ]
                }
              }
            ]
          }
        }
      ]
    }
  }');
  $items['rules_og_userpoints_add_content'] = entity_import('rules_config', '{ "rules_og_userpoints_add_content" : {
      "LABEL" : "OG Userpoints - Add content",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "userpoints" ],
      "REQUIRES" : [ "rules", "userpoints_rules" ],
      "ON" : { "node_insert" : [] },
      "IF" : [
        { "NOT node_is_of_type" : {
            "node" : [ "node" ],
            "type" : { "value" : { "organization" : "organization" } }
          }
        }
      ],
      "DO" : [
        { "userpoints_action_grant_points" : {
            "user" : [ "site:current-user" ],
            "points" : "2",
            "tid" : "125",
            "entity" : [ "" ],
            "operation" : "Added new content ([node:content-type])",
            "display" : "0",
            "moderate" : "approved"
          }
        }
      ]
    }
  }');
  $items['rules_og_userpoints_approbe_relationship'] = entity_import('rules_config', '{ "rules_og_userpoints_approbe_relationship" : {
      "LABEL" : "OG Userpoints - Approve Relationship",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "userpoints" ],
      "REQUIRES" : [ "userpoints_rules", "user_relationships_rules" ],
      "ON" : { "user_relationships_approve" : [] },
      "DO" : [
        { "userpoints_action_grant_points" : {
            "user" : [ "requestee" ],
            "points" : "4",
            "tid" : "128",
            "entity" : [ "" ],
            "operation" : "Approve relationship",
            "display" : "0",
            "moderate" : "approved"
          }
        }
      ]
    }
  }');
  $items['rules_og_userpoints_content_commented_on'] = entity_import('rules_config', '{ "rules_og_userpoints_content_commented_on" : {
      "LABEL" : "OG Userpoints - content commented on",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "userpoints" ],
      "REQUIRES" : [ "rules", "userpoints_rules", "comment" ],
      "ON" : { "comment_insert" : [] },
      "DO" : [
        { "userpoints_action_grant_points" : {
            "user" : [ "comment:node:author" ],
            "points" : "4",
            "tid" : "133",
            "entity" : [ "" ],
            "operation" : "Content commented on ([node:content-type])",
            "display" : "0",
            "moderate" : "approved"
          }
        }
      ]
    }
  }');
  $items['rules_og_userpoints_created_comment'] = entity_import('rules_config', '{ "rules_og_userpoints_created_comment" : {
      "LABEL" : "OG Userpoints - created comment",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "userpoints" ],
      "REQUIRES" : [ "rules", "userpoints_rules", "comment" ],
      "ON" : { "comment_insert" : [] },
      "DO" : [
        { "userpoints_action_grant_points" : {
            "user" : [ "site:current-user" ],
            "points" : "2",
            "tid" : "132",
            "entity" : [ "" ],
            "operation" : "Comment on content ([node:content-type])",
            "display" : "0",
            "moderate" : "approved"
          }
        }
      ]
    }
  }');
  $items['rules_og_userpoints_group_manager'] = entity_import('rules_config', '{ "rules_og_userpoints_group_manager" : {
      "LABEL" : "OG Userpoints - Group Manager",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "userpoints" ],
      "REQUIRES" : [ "og", "userpoints_rules" ],
      "ON" : { "og_role_grant" : [] },
      "IF" : [
        { "og_user_has_role" : {
            "account" : [ "account" ],
            "group" : [ "site:og-context--node" ],
            "roles" : { "value" : { "group_manager" : "group_manager" } }
          }
        }
      ],
      "DO" : [
        { "userpoints_action_grant_points" : {
            "user" : [ "account" ],
            "points" : "4",
            "tid" : "129",
            "entity" : [ "" ],
            "operation" : "Granted group_manager role",
            "display" : "0",
            "moderate" : "approved"
          }
        }
      ]
    }
  }');
  $items['rules_og_userpoints_request_relationship'] = entity_import('rules_config', '{ "rules_og_userpoints_request_relationship" : {
      "LABEL" : "OG Userpoints - Request Relationship",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "userpoints" ],
      "REQUIRES" : [ "userpoints_rules", "user_relationships_rules" ],
      "ON" : { "user_relationships_request" : [] },
      "DO" : [
        { "userpoints_action_grant_points" : {
            "user" : [ "requester" ],
            "points" : "4",
            "tid" : "130",
            "entity" : [ "" ],
            "operation" : "Request relationship",
            "display" : "0",
            "moderate" : "approved"
          }
        }
      ]
    }
  }');
  $items['rules_og_userpoints_user_login'] = entity_import('rules_config', '{ "rules_og_userpoints_user_login" : {
      "LABEL" : "OG Userpoints - User Login",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "userpoints" ],
      "REQUIRES" : [ "userpoints_rules", "rules" ],
      "ON" : { "user_login" : [] },
      "DO" : [
        { "userpoints_action_grant_points" : {
            "user" : [ "site:current-user" ],
            "points" : "1",
            "tid" : "131",
            "entity" : [ "" ],
            "operation" : "User Login",
            "display" : "0",
            "moderate" : "approved"
          }
        }
      ]
    }
  }');
  $items['rules_publish_node_if_releasing_now'] = entity_import('rules_config', '{ "rules_publish_node_if_releasing_now" : {
      "LABEL" : "Publish node if releasing now",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "ON" : { "node_presave" : [] },
      "IF" : [
        { "entity_has_field" : { "entity" : [ "node" ], "field" : "field_release_date_toggle" } },
        { "data_is" : { "data" : [ "node:field-release-date-toggle" ], "value" : "Now" } },
        { "entity_is_new" : { "entity" : [ "node" ] } }
      ],
      "DO" : [ { "node_publish" : { "node" : [ "node" ] } } ]
    }
  }');
  $items['rules_redirect_org_after_delete_content'] = entity_import('rules_config', '{ "rules_redirect_org_after_delete_content" : {
      "LABEL" : "Redirect to Org homepage after deleting Org content",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "ON" : { "node_delete" : [] },
      "DO" : [
        { "redirect" : { "url" : "node\\/[node:field-parent-organization:nid]" } }
      ]
    }
  }');
  $items['rules_redirect_user_profile'] = entity_import('rules_config', '{ "rules_redirect_user_profile" : {
      "LABEL" : "Redirect User Profile",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "ON" : { "user_update" : [] },
      "IF" : [
        { "user_has_role" : {
            "account" : [ "site:current-user" ],
            "roles" : { "value" : { "2" : "2" } }
          }
        }
      ],
      "DO" : [ { "redirect" : { "url" : "user\\/[account:uid]", "force" : "0" } } ]
    }
  }');
  $items['rules_send_rejection_email'] = entity_import('rules_config', '{ "rules_send_rejection_email" : {
      "LABEL" : "Send rejection email",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "User" ],
      "REQUIRES" : [ "rules", "entityform" ],
      "ON" : { "entityform_insert" : [] },
      "IF" : [
        { "entity_has_field" : { "entity" : [ "entityform" ], "field" : "field_organization" } },
        { "NOT data_is_empty" : { "data" : [ "entityform:field-organization" ] } },
        { "entity_has_field" : { "entity" : [ "entityform" ], "field" : "field_email_body" } },
        { "NOT data_is_empty" : { "data" : [ "entityform:field-email-body" ] } },
        { "entity_has_field" : { "entity" : [ "entityform" ], "field" : "field_email_address" } },
        { "NOT data_is_empty" : { "data" : [ "entityform:field-email-address" ] } }
      ],
      "DO" : [
        { "entity_fetch" : {
            "USING" : { "type" : "node", "id" : [ "entityform:field-organization:nid" ] },
            "PROVIDE" : { "entity_fetched" : { "requested_org" : "Requested Organizatin" } }
          }
        },
        { "mail" : {
            "to" : [ "entityform:field-email-address" ],
            "subject" : "Your request to join [requested-org:title] has been denied",
            "message" : [ "entityform:field-email-body" ],
            "language" : [ "" ]
          }
        },
        { "redirect" : { "url" : "admin\\/manage\\/forms" } }
      ]
    }
  }');
  $items['rules_technical_support_rule'] = entity_import('rules_config', '{ "rules_technical_support_rule" : {
      "LABEL" : "Technical Support Rule",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "Support" ],
      "REQUIRES" : [ "rules", "php", "entityform" ],
      "ON" : { "entityform_insert" : [] },
      "IF" : [
        { "entity_is_of_bundle" : {
            "entity" : [ "entityform" ],
            "type" : "entityform",
            "bundle" : { "value" : { "tech_support" : "tech_support" } }
          }
        }
      ],
      "DO" : [
        { "php_eval" : { "code" : "_gn2_tech_support_notify_org_admin($entityform, $site);" } }
      ]
    }
  }');
  $items['rules_unsubscribe_member'] = entity_import('rules_config', '{ "rules_unsubscribe_member" : {
      "LABEL" : "Unsubscribe group member",
      "PLUGIN" : "action set",
      "OWNER" : "rules",
      "REQUIRES" : [ "og" ],
      "USES VARIABLES" : {
        "user" : { "label" : "user", "type" : "user" },
        "membership" : { "label" : "membership", "type" : "og_membership" }
      },
      "ACTION SET" : [
        { "og_unsubscribe_user" : { "user" : [ "user" ], "group" : [ "site:og-context--node" ] } }
      ]
    }
  }');
  return $items;
}
