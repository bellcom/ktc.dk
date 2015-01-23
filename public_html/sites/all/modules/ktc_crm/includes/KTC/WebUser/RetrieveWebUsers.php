<?php

namespace KTC\WebUser;

class RetrieveWebUsers
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
