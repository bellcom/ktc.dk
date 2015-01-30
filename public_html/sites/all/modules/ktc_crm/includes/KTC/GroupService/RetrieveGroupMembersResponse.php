<?php

namespace KTC\GroupService;

class RetrieveGroupMembersResponse
{

  /**
   * 
   * @var GroupMemberRetrieveResponse $RetrieveGroupMembersResult
   * @access public
   */
  public $RetrieveGroupMembersResult = null;

  /**
   * 
   * @param GroupMemberRetrieveResponse $RetrieveGroupMembersResult
   * @access public
   */
  public function __construct($RetrieveGroupMembersResult)
  {
    $this->RetrieveGroupMembersResult = $RetrieveGroupMembersResult;
  }

}
