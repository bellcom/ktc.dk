<?php

namespace KTC\GroupService;

class RetrieveGroupRolesResponse
{

  /**
   * 
   * @var GroupRoleRetrieveResponse $RetrieveGroupRolesResult
   * @access public
   */
  public $RetrieveGroupRolesResult = null;

  /**
   * 
   * @param GroupRoleRetrieveResponse $RetrieveGroupRolesResult
   * @access public
   */
  public function __construct($RetrieveGroupRolesResult)
  {
    $this->RetrieveGroupRolesResult = $RetrieveGroupRolesResult;
  }

}
