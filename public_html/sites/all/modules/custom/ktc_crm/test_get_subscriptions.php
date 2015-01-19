<?php
$subs = ktc_crm_fetch_subscriptions();

foreach($subs->Results->SubscriptionDto as $sub) {
  if ($sub->CrmId == '0c883bd3-eb76-e411-90ba-005056a23404') {
    $subscriptiondto = $sub;
  }
}

error_log(__FILE__ . ' : ' . __LINE__ . ': ' .  print_r($subscriptiondto, 1));
//$subscriptiondto = new \KTC\Subscription\SubscriptionDto('0c883bd3-eb76-e411-90ba-005056a23404');

$subscriptiondto->StartDate = date('Y-m-d\TH:i:s', time() + 100000);
$subscriptiondto->EndDate = date('Y-m-d\TH:i:s', time());
$subscriptiondto->RecipientAddress = 'Work';

unset($subscriptiondto->OtherAddress);
unset($subscriptiondto->InvoiceAddress);

error_log(__FILE__ . ' : ' . __LINE__ . ': ' .  print_r($subscriptiondto, 1));

ktc_crm_update_user_subscription($subscriptiondto);


