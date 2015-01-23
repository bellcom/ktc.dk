<?php

namespace KTC\WebUser;

class RetrieveWebUsersResponse
{

  /**
   * 
   * @var RetrieveResponseOfWebUserDtowsdCoMqt $RetrieveWebUsersResult
   * @access public
   */
  public $RetrieveWebUsersResult = null;

  /**
   * 
   * @param RetrieveResponseOfWebUserDtowsdCoMqt $RetrieveWebUsersResult
   * @access public
   */
  public function __construct($RetrieveWebUsersResult)
  {
    $this->RetrieveWebUsersResult = $RetrieveWebUsersResult;
  }

}
