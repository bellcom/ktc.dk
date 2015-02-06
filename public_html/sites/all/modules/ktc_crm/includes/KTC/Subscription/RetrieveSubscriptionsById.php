<?php

namespace KTC\Subscription;

class RetrieveSubscriptionsById
{

  /**
   * 
   * @var guid $subscriptionId
   * @access public
   */
  public $subscriptionId = null;

  /**
   * 
   * @param guid $subscriptionId
   * @access public
   */
  public function __construct($subscriptionId)
  {
    $this->subscriptionId = $subscriptionId;
  }

}
