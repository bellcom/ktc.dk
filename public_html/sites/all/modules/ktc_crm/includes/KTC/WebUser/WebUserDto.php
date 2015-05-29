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
   * @var string $AndreKompetencer
   * @access public
   */
  public $AndreKompetencer = null;

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
   * @var string $EmnerFraWeb
   * @access public
   */
  public $EmnerFraWeb = null;

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
   * @var boolean $KtcMember
   * @access public
   */
  public $KtcMember = null;

  /**
   * 
   * @var MemberCategory $KtcMemberCategory
   * @access public
   */
  public $KtcMemberCategory = null;

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
   * @var string $LastSavedByCrmName
   * @access public
   */
  public $LastSavedByCrmName = null;

  /**
   * 
   * @var string $LastSavedByDrupalName
   * @access public
   */
  public $LastSavedByDrupalName = null;

  /**
   * 
   * @var string $LinkedInBrugernavn
   * @access public
   */
  public $LinkedInBrugernavn = null;

  /**
   * 
   * @var string $MemberOther
   * @access public
   */
  public $MemberOther = null;

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
   * @var string $TwitterBrugernavn
   * @access public
   */
  public $TwitterBrugernavn = null;

  /**
   * 
   * @var string $Typo3Id
   * @access public
   */
  public $Typo3Id = null;

  /**
   * 
   * @var string $UddannelseOgKurser
   * @access public
   */
  public $UddannelseOgKurser = null;

  /**
   * 
   * @var string $UdpegningerIForeningerUdvalgOgNaevn
   * @access public
   */
  public $UdpegningerIForeningerUdvalgOgNaevn = null;

  /**
   * 
   * @var string $UserName
   * @access public
   */
  public $UserName = null;

  /**
   * 
   * @var boolean $WebUser
   * @access public
   */
  public $WebUser = null;

  /**
   * 
   * @var string $Website
   * @access public
   */
  public $Website = null;

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
