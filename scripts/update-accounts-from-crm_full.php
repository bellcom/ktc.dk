<?php
/**
 * @file
 * Update accounts with data from crm.
 */

# un 2015.11.05: to prevent Soap timeouts
ini_set('default_socket_timeout', 1200);

//echo "Updating accounts from CRM - This will take some time.";
ktc_crm_account_update_accounts();
ktc_crm_accounts_update_affected_users();

