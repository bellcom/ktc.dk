<?php

require 'Subscription.php';

$client = new Subscription();

$request = new Request();
$retrievesubscriptions = new RetrieveSubscriptions($request);

$result = $client->RetrieveSubscriptions($retrievesubscriptions);

error_log(__FILE__ . ' : ' . __LINE__ . ': ' .  print_r($result, 1));
