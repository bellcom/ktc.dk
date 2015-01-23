<?php

namespace KTC\GroupService;

class RetrieveResponseOfGroupDtowsdCoMqt
{

  /**
   * 
   * @var GroupDto[] $Results
   * @access public
   */
  public $Results = null;

  /**
   * 
   * @var int $Start
   * @access public
   */
  public $Start = null;

  /**
   * 
   * @var int $Total
   * @access public
   */
  public $Total = null;

  /**
   * 
   * @param int $Start
   * @param int $Total
   * @access public
   */
  public function __construct($Start, $Total)
  {
    $this->Start = $Start;
    $this->Total = $Total;
  }

}
