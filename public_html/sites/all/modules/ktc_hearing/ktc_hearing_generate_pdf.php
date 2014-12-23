<?php

//file_put_contents('test.pdf', file_get_contents(_ktc_hearing_generate_pdf(node_load(12692))));

ktc_hearing_notify_users('approved', node_load(12692));
