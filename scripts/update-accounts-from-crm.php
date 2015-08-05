<?php
/**
 * @file
 * Update accounts with data from crm.
 */
echo "Updating accounts from CRM - This will take some time.";
ktc_crm_account_update_accounts();
ktc_crm_accounts_update_affected_users();
