<?php

namespace KTC\GroupService;

class CreateUpdateGroupMember
{

  /**
   * 
   * @var GroupMemberDto $groupMember
   * @access public
   */
  public $groupMember = null;

  /**
   * 
   * @param GroupMemberDto $groupMember
   * @access public
   */
  public function __construct($groupMember)
  {
    $this->groupMember = $groupMember;
  }

}
