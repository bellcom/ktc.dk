<?php
/**
 * @file
 * ktc_netvaerk.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function ktc_netvaerk_default_rules_configuration() {
  $items = array();
  $items['og_ktc_rules_og_member_active'] = entity_import('rules_config', '{ "og_ktc_rules_og_member_active" : {
      "LABEL" : "KTC OG member subscribe (Active)",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules", "og" ],
      "ON" : { "og_user_insert" : [] },
      "IF" : [
        { "data_is" : { "data" : [ "og-membership:state" ], "value" : "1" } },
        { "entity_is_of_type" : { "entity" : [ "og-membership:group" ], "type" : "node" } }
      ],
      "DO" : [
        { "variable_add" : {
            "USING" : { "type" : "node", "value" : [ "og-membership:group" ] },
            "PROVIDE" : { "variable_added" : { "group" : "Added variable" } }
          }
        },
        { "mail" : {
            "to" : [ "account:mail" ],
            "subject" : "Your membership request was approved for \\u0027[group:title]\\u0027\\r\\n",
            "message" : "[account:name],\\r\\n\\r\\nYou are now a member in the group \\u0027[group:title]\\u0027 located at [group:url]"
          }
        },
        { "mail" : {
            "to" : [ "group:author:mail" ],
            "subject" : "[account:name] joined [group:title]",
            "message" : "[group:author:name],\\r\\n\\r\\n[account:name] joined [group:title] in [group:url]"
          }
        }
      ]
    }
  }');
  $items['og_ktc_rules_og_member_pending'] = entity_import('rules_config', '{ "og_ktc_rules_og_member_pending" : {
      "LABEL" : "KTC OG member subscribe (Pending)",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules", "og" ],
      "ON" : { "og_user_insert" : [] },
      "IF" : [
        { "data_is" : { "data" : [ "og-membership:state" ], "value" : "2" } },
        { "entity_is_of_type" : { "entity" : [ "og-membership:group" ], "type" : "node" } }
      ],
      "DO" : [
        { "variable_add" : {
            "USING" : { "type" : "node", "value" : [ "og-membership:group" ] },
            "PROVIDE" : { "variable_added" : { "group" : "Added variable" } }
          }
        },
        { "mail" : {
            "to" : [ "account:mail" ],
            "subject" : "Your membership request for \\u0027[group:title]\\u0027",
            "message" : "[account:name],\\r\\n\\r\\nYour membership to group \\u0027[group:title]\\u0027 located at [group:url] is pending approval."
          }
        },
        { "mail" : {
            "to" : [ "group:author:mail" ],
            "subject" : "[account:name] membership request [group:title]",
            "message" : "[group:author:name],\\r\\n\\r\\n[account:name] requests membership for group \\u0027[group:title]\\u0027 in [group:url].\\r\\n\\r\\n[og_membership:og-membership-request]"
          }
        }
      ]
    }
  }');
  return $items;
}
