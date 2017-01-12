<?php
/**
 * @file
 * Cron script for CRM sync.
 *
 * Here we call the wanted sync functions.
 */

# un 2015.11.05: to prevent Soap timeouts
ini_set('default_socket_timeout', 1200);

// Update users from CRM.
ktc_crm_webuser_update_users();

// Update groups, grouproles and groupmembers from CRM.
ktc_crm_group_update_groups();