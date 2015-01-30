<?php

namespace KTC\Subscription;

class CreateUpdateSubscription
{

  /**
   * 
   * @var SubscriptionDto $subscription
   * @access public
   */
  public $subscription = null;

  /**
   * 
   * @param SubscriptionDto $subscription
   * @access public
   */
  public function __construct($subscription)
  {
    $this->subscription = $subscription;
  }

}
