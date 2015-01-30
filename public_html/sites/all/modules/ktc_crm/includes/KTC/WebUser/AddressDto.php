<?php

namespace KTC\WebUser;

class AddressDto
{

  /**
   * 
   * @var string $AddressLine1
   * @access public
   */
  public $AddressLine1 = null;

  /**
   * 
   * @var string $AddressLine2
   * @access public
   */
  public $AddressLine2 = null;

  /**
   * 
   * @var AddressType $AddressType
   * @access public
   */
  public $AddressType = null;

  /**
   * 
   * @var string $City
   * @access public
   */
  public $City = null;

  /**
   * 
   * @var string $Country
   * @access public
   */
  public $Country = null;

  /**
   * 
   * @var string $PostalCode
   * @access public
   */
  public $PostalCode = null;

  /**
   * 
   * @var Region $Region
   * @access public
   */
  public $Region = null;

  /**
   * 
   * @access public
   */
  public function __construct()
  {
  
  }

}
