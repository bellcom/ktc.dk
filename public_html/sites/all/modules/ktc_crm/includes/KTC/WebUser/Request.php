<?php

namespace KTC\WebUser;

class Request
{

  /**
   * 
   * @var int $MaxReturned
   * @access public
   */
  public $MaxReturned = null;

  /**
   * 
   * @var int $Skip
   * @access public
   */
  public $Skip = null;

  /**
   * 
   * @var dateTime $UpdatedSince
   * @access public
   */
  public $UpdatedSince = null;

  /**
   * 
   * @access public
   */
  public function __construct()
  {
  
  }

}
