<?php

namespace KTC\WebUser;

include_once('RetrieveResponseOfWebUserDtowsdCoMqt.php');

class WebUserRetrieveResponse extends RetrieveResponseOfWebUserDtowsdCoMqt
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
