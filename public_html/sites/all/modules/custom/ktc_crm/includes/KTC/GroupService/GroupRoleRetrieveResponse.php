<?php

namespace KTC\GroupService;

include_once('RetrieveResponseOfGroupRoleDtowsdCoMqt.php');

class GroupRoleRetrieveResponse extends RetrieveResponseOfGroupRoleDtowsdCoMqt
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
