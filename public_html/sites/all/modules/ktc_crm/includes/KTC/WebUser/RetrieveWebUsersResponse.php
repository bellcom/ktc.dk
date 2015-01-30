<?php

namespace KTC\WebUser;

class RetrieveWebUsersResponse
{

  /**
   * 
   * @var WebUserRetrieveResponse $RetrieveWebUsersResult
   * @access public
   */
  public $RetrieveWebUsersResult = null;

  /**
   * 
   * @param WebUserRetrieveResponse $RetrieveWebUsersResult
   * @access public
   */
  public function __construct($RetrieveWebUsersResult)
  {
    $this->RetrieveWebUsersResult = $RetrieveWebUsersResult;
  }

}
