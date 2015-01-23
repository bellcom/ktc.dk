<?php

namespace KTC\GroupService;

class RetrieveGroupsResponse
{

  /**
   * 
   * @var GroupRetrieveResponse $RetrieveGroupsResult
   * @access public
   */
  public $RetrieveGroupsResult = null;

  /**
   * 
   * @param GroupRetrieveResponse $RetrieveGroupsResult
   * @access public
   */
  public function __construct($RetrieveGroupsResult)
  {
    $this->RetrieveGroupsResult = $RetrieveGroupsResult;
  }

}
