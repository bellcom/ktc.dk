
## Group integration

The group integration consists of a couple of calls to the CRM webservice, as well as some functionality that translates these informations to Organic groups memberships and roles.

### Hooks
In almost all hooks, we check for some context. From where is the process executed. We check if it is a user initiated action, are relevant $_POST/$_GET variables set. Otherwise we would be roundsending information from the webservice, back again.

Example:
```
cron run
-> user should be added to group
    (og_group)
-> which would fire hook
    (hook_og_membership_insert)
-> which would send a new membership object to the webservice
```

hook_cron()
  Not implemented specifically for the group interface, but `ktc_crm_fecth_groupmembers()` is called from hook_cron.

hook_og_membership_delete()
  Creates an empty GroupMembershipDto from the membership UUID, and sends this to CRM, thus removing the membership there aswell.

hook_og_membership_insert()
  As with the deleting a membership, we create a GroupMembershipDto with the relevant uuids, and send this to CRM. See hook_og_role_grant() for role specific stuff.

hook_og_role_grant()
  When a user is granted a role in a group, we generate a GroupMembershipDto where the "Role" attribute is filled in with CRM's UUID for the role.
  This hook is also called if a new member is granted a role upon adding to the group.

hook_og_role_revoke()
  In order to revoke a users role, we have to be a little creative. Currently we can't send an "empty" role to CRM in order to remove it, so instead we (hardcoded) specify the role Member, if no other membership is specified.

### Memberships
Members in Organic groups (entities) are extended include a CRM UUID field (field_crm_uuid). This is nessecary because CRM identifies all memberships as unique entities.

### Roles
Roles in Organic groups are updated on each cron run. These are maintained by their plain text names. CRM UUIDs are fetched when needed (on user role updates).
