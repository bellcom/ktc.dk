<?php

namespace KTC\AccountService;

class RetrieveContactsForAccountById
{

  /**
   * 
   * @var guid $accountId
   * @access public
   */
  public $accountId = null;

  /**
   * 
   * @param guid $accountId
   * @access public
   */
  public function __construct($accountId)
  {
    $this->accountId = $accountId;
  }

}
