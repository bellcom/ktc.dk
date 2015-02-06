<?php

namespace KTC\Subscription;

class RetrieveSubscriptionsResponse
{

  /**
   * 
   * @var SubscriptionRetrieveResponse $RetrieveSubscriptionsResult
   * @access public
   */
  public $RetrieveSubscriptionsResult = null;

  /**
   * 
   * @param SubscriptionRetrieveResponse $RetrieveSubscriptionsResult
   * @access public
   */
  public function __construct($RetrieveSubscriptionsResult)
  {
    $this->RetrieveSubscriptionsResult = $RetrieveSubscriptionsResult;
  }

}
