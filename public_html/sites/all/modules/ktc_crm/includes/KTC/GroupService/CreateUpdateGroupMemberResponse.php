<?php

namespace KTC\GroupService;

class CreateUpdateGroupMemberResponse
{

  /**
   * 
   * @var guid $CreateUpdateGroupMemberResult
   * @access public
   */
  public $CreateUpdateGroupMemberResult = null;

  /**
   * 
   * @param guid $CreateUpdateGroupMemberResult
   * @access public
   */
  public function __construct($CreateUpdateGroupMemberResult)
  {
    $this->CreateUpdateGroupMemberResult = $CreateUpdateGroupMemberResult;
  }

}
