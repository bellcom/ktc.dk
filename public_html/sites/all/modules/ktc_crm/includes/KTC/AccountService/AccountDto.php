<?php

namespace KTC\AccountService;

include_once('CrmEntityDto.php');

class AccountDto extends CrmEntityDto
{

  /**
   * 
   * @var string $AccountNumber
   * @access public
   */
  public $AccountNumber = null;

  /**
   * 
   * @var AddressDto $Address
   * @access public
   */
  public $Address = null;

  /**
   * 
   * @var string $Cvr
   * @access public
   */
  public $Cvr = null;

  /**
   * 
   * @var boolean $Debitor
   * @access public
   */
  public $Debitor = null;

  /**
   * 
   * @var guid $DepartmentId
   * @access public
   */
  public $DepartmentId = null;

  /**
   * 
   * @var string $DepartmentName
   * @access public
   */
  public $DepartmentName = null;

  /**
   * 
   * @var string $Name
   * @access public
   */
  public $Name = null;

  /**
   * 
   * @var string $Phone
   * @access public
   */
  public $Phone = null;

  /**
   * 
   * @var string $PriceList
   * @access public
   */
  public $PriceList = null;

  /**
   * 
   * @var guid $TopLevelAccountId
   * @access public
   */
  public $TopLevelAccountId = null;

  /**
   * 
   * @var string $TopLevelAccountName
   * @access public
   */
  public $TopLevelAccountName = null;

  /**
   * 
   * @var string $VatTypeNumber
   * @access public
   */
  public $VatTypeNumber = null;

  /**
   * 
   * @param guid $CrmId
   * @access public
   */
  public function __construct($CrmId)
  {
    parent::__construct($CrmId);
  }

}
