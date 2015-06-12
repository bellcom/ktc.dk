<?php

namespace KTC\WebUser;

class RetrieveWebUserByMail
{

  /**
   * 
   * @var string $email
   * @access public
   */
  public $email = null;

  /**
   * 
   * @param string $email
   * @access public
   */
  public function __construct($email)
  {
    $this->email = $email;
  }

}
