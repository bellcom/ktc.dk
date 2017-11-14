<?php

/* 
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

# un 2015.11.05: to prevent Soap timeouts
ini_set('default_socket_timeout', 1200);

ktc_crm_webuser_full_update_users();