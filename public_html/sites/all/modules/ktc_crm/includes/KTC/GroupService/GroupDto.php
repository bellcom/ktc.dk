<?php

namespace KTC\GroupService;

include_once('CrmEntityDto.php');

class GroupDto extends CrmEntityDto
{

  /**
   * 
   * @var boolean $Active
   * @access public
   */
  public $Active = null;

  /**
   * 
   * @var string $Description
   * @access public
   */
  public $Description = null;

  /**
   * 
   * @var dateTime $EndDate
   * @access public
   */
  public $EndDate = null;

  /**
   * 
   * @var string $GroupBrief
   * @access public
   */
  public $GroupBrief = null;

  /**
   * 
   * @var string $GroupName
   * @access public
   */
  public $GroupName = null;

  /**
   * 
   * @var ReferenceDto $GroupType
   * @access public
   */
  public $GroupType = null;

  /**
   * 
   * @var ReferenceDto $ParentGroup
   * @access public
   */
  public $ParentGroup = null;

  /**
   * 
   * @var ReferenceDto $ProfessionalField
   * @access public
   */
  public $ProfessionalField = null;

  /**
   * 
   * @var Region $Region
   * @access public
   */
  public $Region = null;

  /**
   * 
   * @var dateTime $StartDate
   * @access public
   */
  public $StartDate = null;

  /**
   * 
   * @var string $WebSite
   * @access public
   */
  public $WebSite = null;

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
