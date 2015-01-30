<?php

namespace KTC\WebUser;

include_once('AddressDto.php');

class EANAddressDto extends AddressDto
{

  /**
   * 
   * @var string $EAN
   * @access public
   */
  public $EAN = null;

  /**
   * 
   * @access public
   */
  public function __construct()
  {
    parent::__construct();
  }

}
