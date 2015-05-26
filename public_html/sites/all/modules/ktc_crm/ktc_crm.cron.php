<?php
/**
 * @file
 * Cron script for CRM sync.
 *
 * Here we call the wanted sync functions.
 */

// Update users from CRM.
ktc_crm_webuser_update_users();

// Update groups, grouproles and groupmembers from CRM.
ktc_crm_group_update_groups();
