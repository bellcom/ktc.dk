<?php

namespace KTC\GroupService;

class CreateUpdateGroupResponse
{

  /**
   * 
   * @var guid $CreateUpdateGroupResult
   * @access public
   */
  public $CreateUpdateGroupResult = null;

  /**
   * 
   * @param guid $CreateUpdateGroupResult
   * @access public
   */
  public function __construct($CreateUpdateGroupResult)
  {
    $this->CreateUpdateGroupResult = $CreateUpdateGroupResult;
  }

}
