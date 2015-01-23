<?php

namespace KTC\WebUser;

include_once('CrmEntityDto.php');

class WebUserDto extends CrmEntityDto
{

  /**
   * 
   * @var boolean $Active
   * @access public
   */
  public $Active = null;

  /**
   * 
   * @var EANAddressDto[] $Adresses
   * @access public
   */
  public $Adresses = null;

  /**
   * 
   * @var dateTime $Birthday
   * @access public
   */
  public $Birthday = null;

  /**
   * 
   * @var boolean $DabyfoMember
   * @access public
   */
  public $DabyfoMember = null;

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
   * @var boolean $DpMember
   * @access public
   */
  public $DpMember = null;

  /**
   * 
   * @var string $DrupalId
   * @access public
   */
  public $DrupalId = null;

  /**
   * 
   * @var string $EMail
   * @access public
   */
  public $EMail = null;

  /**
   * 
   * @var boolean $EnvinaMember
   * @access public
   */
  public $EnvinaMember = null;

  /**
   * 
   * @var boolean $FfukMember
   * @access public
   */
  public $FfukMember = null;

  /**
   * 
   * @var string $FirstName
   * @access public
   */
  public $FirstName = null;

  /**
   * 
   * @var boolean $KefMember
   * @access public
   */
  public $KefMember = null;

  /**
   * 
   * @var boolean $KpnMember
   * @access public
   */
  public $KpnMember = null;

  /**
   * 
   * @var boolean $KvfMember
   * @access public
   */
  public $KvfMember = null;

  /**
   * 
   * @var dateTime $LastLogin
   * @access public
   */
  public $LastLogin = null;

  /**
   * 
   * @var string $LastName
   * @access public
   */
  public $LastName = null;

  /**
   * 
   * @var string $MobilePhone
   * @access public
   */
  public $MobilePhone = null;

  /**
   * 
   * @var string $Phone
   * @access public
   */
  public $Phone = null;

  /**
   * 
   * @var string $Salutation
   * @access public
   */
  public $Salutation = null;

  /**
   * 
   * @var string $Typo3Id
   * @access public
   */
  public $Typo3Id = null;

  /**
   * 
   * @var string $UserName
   * @access public
   */
  public $UserName = null;

  /**
   * 
   * @var string $Website
   * @access public
   */
  public $Website = null;

  /**
   * 
   * @var boolean $WorkAreaAdministration
   * @access public
   */
  public $WorkAreaAdministration = null;

  /**
   * 
   * @var boolean $WorkAreaAdvisory
   * @access public
   */
  public $WorkAreaAdvisory = null;

  /**
   * 
   * @var boolean $WorkAreaCaseworker
   * @access public
   */
  public $WorkAreaCaseworker = null;

  /**
   * 
   * @var boolean $WorkAreaConsultancy
   * @access public
   */
  public $WorkAreaConsultancy = null;

  /**
   * 
   * @var boolean $WorkAreaDevelopment
   * @access public
   */
  public $WorkAreaDevelopment = null;

  /**
   * 
   * @var boolean $WorkAreaManagement
   * @access public
   */
  public $WorkAreaManagement = null;

  /**
   * 
   * @var boolean $WorkAreaOther
   * @access public
   */
  public $WorkAreaOther = null;

  /**
   * 
   * @var boolean $WorkAreaPolitics
   * @access public
   */
  public $WorkAreaPolitics = null;

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
