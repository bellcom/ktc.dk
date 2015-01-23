<?php

namespace KTC\GroupService;

include_once('RetrieveResponseOfGroupDtowsdCoMqt.php');

class GroupRetrieveResponse extends RetrieveResponseOfGroupDtowsdCoMqt
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
