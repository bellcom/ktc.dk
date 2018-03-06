<?php
/**
 * @file
 * Cron script for CRM sync.
 *
 * Here we call the wanted sync functions.
 */

# un 2015.11.05: to prevent Soap timeouts
ini_set('default_socket_timeout', 1200);

ktc_crm_webuser_sync_users_accessed_today_to_crm();