<?php

namespace KTC\GroupService;

include_once('RetrieveResponseOfGroupTypeDtowsdCoMqt.php');

class GroupTypeRetrieveResponse extends RetrieveResponseOfGroupTypeDtowsdCoMqt
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
