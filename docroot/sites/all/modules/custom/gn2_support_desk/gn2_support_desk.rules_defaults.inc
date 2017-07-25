<?php
/**
 * @file
 * gn2_support_desk.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function gn2_support_desk_default_rules_configuration() {
  $items = array();
  $items['rules_support_thanks'] = entity_import('rules_config', '{ "rules_support_thanks" : {
      "LABEL" : "Support Thanks",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "ON" : { "node_insert--support" : { "bundle" : "support" } },
      "DO" : [ { "redirect" : { "url" : "support\\/thanks" } } ]
    }
  }');
  return $items;
}
