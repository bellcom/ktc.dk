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
            "subject" : "Din ans\\u00f8gning om medlemsskab til \\u0027[group:title]\\u0027 er blevet godkendt. ",
            "message" : "[account:name],\\r\\n\\r\\nDu er nu medlem af gruppen \\u0027[group:title]\\u0027 som kan findes p\\u00e5 [group:url]",
            "language" : [ "" ]
          }
        },
        { "mail" : {
            "to" : [ "group:author:mail" ],
            "subject" : "[account:name] meldte sig ind i [group:title]",
            "message" : "[group:author:name],\\r\\n\\r\\n[account:name] meldte sig ind i [group:title] p\\u00e5 [group:url]",
            "language" : [ "" ]
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
            "subject" : "Din anmodning om medlemsskab for \\u0027[group:title]\\u0027",
            "message" : "[account:name],\\r\\n\\r\\nDit medlemsskab til gruppen \\u0027[group:title]\\u0027 som kan findes p\\u00e5 [group:url] afventer godkendelse.",
            "language" : [ "" ]
          }
        },
        { "mail" : {
            "to" : [ "group:author:mail" ],
            "subject" : "[account:name] anmoder om medlemsskab i [group:title]",
            "message" : "[group:author:name],\\r\\n\\r\\n[account:name] anmoder om medlemsskab i gruppen \\u0027[group:title]\\u0027 som kan findes p\\u00e5 [group:url].\\r\\n\\r\\n[og_membership:og-membership-request]",
            "language" : [ "" ]
          }
        }
      ]
    }
  }');
  return $items;
}
