<?php

namespace KTC\WebUser;

class CreateUpdateWebUser
{

  /**
   * 
   * @var WebUserDto $user
   * @access public
   */
  public $user = null;

  /**
   * 
   * @param WebUserDto $user
   * @access public
   */
  public function __construct($user)
  {
    $this->user = $user;
  }

}
