<?php

$amount = 100;
$i = 0;

$options = array(
  'MaxReturned' => $amount,
  'Skip' => ($i * $amount),
);

$webusers = ktc_crm_fetch_webusers($options);

foreach ($webusers as $user) {
  print_r($user);
}
