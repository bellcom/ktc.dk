<?php

namespace KTC\Subscription;

class RetrieveSubscriptionsForSubscriberResponse
{

  /**
   * 
   * @var SubscriptionDto[] $RetrieveSubscriptionsForSubscriberResult
   * @access public
   */
  public $RetrieveSubscriptionsForSubscriberResult = null;

  /**
   * 
   * @param SubscriptionDto[] $RetrieveSubscriptionsForSubscriberResult
   * @access public
   */
  public function __construct($RetrieveSubscriptionsForSubscriberResult)
  {
    $this->RetrieveSubscriptionsForSubscriberResult = $RetrieveSubscriptionsForSubscriberResult;
  }

}
