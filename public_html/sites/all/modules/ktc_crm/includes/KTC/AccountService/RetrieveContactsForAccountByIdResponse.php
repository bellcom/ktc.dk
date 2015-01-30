<?php

namespace KTC\AccountService;

class RetrieveContactsForAccountByIdResponse
{

  /**
   * 
   * @var WebUserDto[] $RetrieveContactsForAccountByIdResult
   * @access public
   */
  public $RetrieveContactsForAccountByIdResult = null;

  /**
   * 
   * @param WebUserDto[] $RetrieveContactsForAccountByIdResult
   * @access public
   */
  public function __construct($RetrieveContactsForAccountByIdResult)
  {
    $this->RetrieveContactsForAccountByIdResult = $RetrieveContactsForAccountByIdResult;
  }

}
