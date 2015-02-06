<?php

namespace KTC\Subscription;

class RetrieveSubscriptionsForSubscriber
{

  /**
   * 
   * @var guid $subscriber
   * @access public
   */
  public $subscriber = null;

  /**
   * 
   * @param guid $subscriber
   * @access public
   */
  public function __construct($subscriber)
  {
    $this->subscriber = $subscriber;
  }

}
