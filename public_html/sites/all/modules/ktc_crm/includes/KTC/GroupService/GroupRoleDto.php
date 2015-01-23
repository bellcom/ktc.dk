<?php

namespace KTC\GroupService;

include_once('CrmEntityDto.php');

class GroupRoleDto extends CrmEntityDto
{

  /**
   * 
   * @var string $Name
   * @access public
   */
  public $Name = null;

  /**
   * 
   * @param guid $CrmId
   * @access public
   */
  public function __construct($CrmId)
  {
    parent::__construct($CrmId);
  }

}
