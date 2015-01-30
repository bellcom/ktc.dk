<?php

namespace KTC\GroupService;

class RetrieveGroups
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
