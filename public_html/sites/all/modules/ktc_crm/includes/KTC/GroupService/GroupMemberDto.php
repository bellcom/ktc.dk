<?php

namespace KTC\GroupService;

include_once('CrmEntityDto.php');

class GroupMemberDto extends CrmEntityDto
{

  /**
   * 
   * @var ReferenceDto $Group
   * @access public
   */
  public $Group = null;

  /**
   * 
   * @var boolean $IsActiveMember
   * @access public
   */
  public $IsActiveMember = null;

  /**
   * 
   * @var ReferenceDto $Member
   * @access public
   */
  public $Member = null;

  /**
   * 
   * @var ReferenceDto $Role
   * @access public
   */
  public $Role = null;

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
