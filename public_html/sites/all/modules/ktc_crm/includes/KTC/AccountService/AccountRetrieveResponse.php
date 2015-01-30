<?php

namespace KTC\AccountService;

include_once('RetrieveResponseOfAccountDtowsdCoMqt.php');

class AccountRetrieveResponse extends RetrieveResponseOfAccountDtowsdCoMqt
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
