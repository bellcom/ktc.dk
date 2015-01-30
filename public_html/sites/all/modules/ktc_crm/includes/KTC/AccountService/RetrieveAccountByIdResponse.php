<?php

namespace KTC\AccountService;

class RetrieveAccountByIdResponse
{

  /**
   * 
   * @var AccountDto $RetrieveAccountByIdResult
   * @access public
   */
  public $RetrieveAccountByIdResult = null;

  /**
   * 
   * @param AccountDto $RetrieveAccountByIdResult
   * @access public
   */
  public function __construct($RetrieveAccountByIdResult)
  {
    $this->RetrieveAccountByIdResult = $RetrieveAccountByIdResult;
  }

}
