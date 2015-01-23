<?php

namespace KTC\Subscription;

class CreateUpdateSubscriptionResponse
{

  /**
   * 
   * @var guid $CreateUpdateSubscriptionResult
   * @access public
   */
  public $CreateUpdateSubscriptionResult = null;

  /**
   * 
   * @param guid $CreateUpdateSubscriptionResult
   * @access public
   */
  public function __construct($CreateUpdateSubscriptionResult)
  {
    $this->CreateUpdateSubscriptionResult = $CreateUpdateSubscriptionResult;
  }

}
