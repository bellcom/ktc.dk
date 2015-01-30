<?php

namespace KTC\GroupService;

class RetrieveGroupMembers
{

  /**
   * 
   * @var Request $request
   * @access public
   */
  public $request = null;

  /**
   * 
   * @param Request $request
   * @access public
   */
  public function __construct($request)
  {
    $this->request = $request;
  }

}
