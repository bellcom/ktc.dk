<?php

namespace KTC\WebUser;

class CreateUpdateWebUserResponse
{

  /**
   * 
   * @var guid $CreateUpdateWebUserResult
   * @access public
   */
  public $CreateUpdateWebUserResult = null;

  /**
   * 
   * @param guid $CreateUpdateWebUserResult
   * @access public
   */
  public function __construct($CreateUpdateWebUserResult)
  {
    $this->CreateUpdateWebUserResult = $CreateUpdateWebUserResult;
  }

}
