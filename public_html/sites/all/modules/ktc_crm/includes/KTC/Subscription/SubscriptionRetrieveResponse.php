<?php

namespace KTC\Subscription;

include_once('RetrieveResponseOfSubscriptionDtowsdCoMqt.php');

class SubscriptionRetrieveResponse extends RetrieveResponseOfSubscriptionDtowsdCoMqt
{

  /**
   * 
   * @param int $Start
   * @param int $Total
   * @access public
   */
  public function __construct($Start, $Total)
  {
    parent::__construct($Start, $Total);
  }

}
