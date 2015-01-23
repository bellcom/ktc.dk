<?php

namespace KTC\GroupService;

include_once('RetrieveResponseOfGroupMemberDtowsdCoMqt.php');

class GroupMemberRetrieveResponse extends RetrieveResponseOfGroupMemberDtowsdCoMqt
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
