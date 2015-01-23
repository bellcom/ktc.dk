<?php

namespace KTC\GroupService;

class RetrieveGroupTypes
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
