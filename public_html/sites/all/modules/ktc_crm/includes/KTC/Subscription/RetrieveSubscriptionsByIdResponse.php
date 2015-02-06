<?php

namespace KTC\Subscription;

class RetrieveSubscriptionsByIdResponse
{

  /**
   * 
   * @var SubscriptionDto $RetrieveSubscriptionsByIdResult
   * @access public
   */
  public $RetrieveSubscriptionsByIdResult = null;

  /**
   * 
   * @param SubscriptionDto $RetrieveSubscriptionsByIdResult
   * @access public
   */
  public function __construct($RetrieveSubscriptionsByIdResult)
  {
    $this->RetrieveSubscriptionsByIdResult = $RetrieveSubscriptionsByIdResult;
  }

}
