<?php

namespace KTC\WebUser;

class RetrieveWebUserByMailResponse
{

  /**
   * 
   * @var WebUserRetrieveResponse $RetrieveWebUserByMailResult
   * @access public
   */
  public $RetrieveWebUserByMailResult = null;

  /**
   * 
   * @param WebUserRetrieveResponse $RetrieveWebUserByMailResult
   * @access public
   */
  public function __construct($RetrieveWebUserByMailResult)
  {
    $this->RetrieveWebUserByMailResult = $RetrieveWebUserByMailResult;
  }

}
