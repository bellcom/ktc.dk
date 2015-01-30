<?php

namespace KTC\AccountService;

class RetrieveAccountsResponse
{

  /**
   * 
   * @var AccountRetrieveResponse $RetrieveAccountsResult
   * @access public
   */
  public $RetrieveAccountsResult = null;

  /**
   * 
   * @param AccountRetrieveResponse $RetrieveAccountsResult
   * @access public
   */
  public function __construct($RetrieveAccountsResult)
  {
    $this->RetrieveAccountsResult = $RetrieveAccountsResult;
  }

}
