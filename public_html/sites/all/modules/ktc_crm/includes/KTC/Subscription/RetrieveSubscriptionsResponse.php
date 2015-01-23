<?php

namespace KTC\Subscription;

class RetrieveSubscriptionsResponse
{

  /**
   * 
   * @var RetrieveResponseOfSubscriptionDtowsdCoMqt $RetrieveSubscriptionsResult
   * @access public
   */
  public $RetrieveSubscriptionsResult = null;

  /**
   * 
   * @param RetrieveResponseOfSubscriptionDtowsdCoMqt $RetrieveSubscriptionsResult
   * @access public
   */
  public function __construct($RetrieveSubscriptionsResult)
  {
    $this->RetrieveSubscriptionsResult = $RetrieveSubscriptionsResult;
  }

}
