<?php

namespace KTC\WebUser;

class CrmEntityDto
{

  /**
   * 
   * @var guid $CrmId
   * @access public
   */
  public $CrmId = null;

  /**
   * 
   * @param guid $CrmId
   * @access public
   */
  public function __construct($CrmId)
  {
    $this->CrmId = $CrmId;
  }

}
