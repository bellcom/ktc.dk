<?php

namespace KTC\GroupService;

include_once('GroupDto.php');
include_once('CrmEntityDto.php');
include_once('ReferenceDto.php');
include_once('Region.php');
include_once('Request.php');
include_once('GroupRetrieveResponse.php');
include_once('RetrieveResponseOfGroupDtowsdCoMqt.php');
include_once('GroupMemberDto.php');
include_once('GroupMemberRetrieveResponse.php');
include_once('RetrieveResponseOfGroupMemberDtowsdCoMqt.php');
include_once('GroupRoleRetrieveResponse.php');
include_once('RetrieveResponseOfGroupRoleDtowsdCoMqt.php');
include_once('GroupRoleDto.php');
include_once('GroupTypeRetrieveResponse.php');
include_once('RetrieveResponseOfGroupTypeDtowsdCoMqt.php');
include_once('GroupTypeDto.php');
include_once('Ping.php');
include_once('PingResponse.php');
include_once('CreateUpdateGroup.php');
include_once('CreateUpdateGroupResponse.php');
include_once('RetrieveGroups.php');
include_once('RetrieveGroupsResponse.php');
include_once('CreateUpdateGroupMember.php');
include_once('CreateUpdateGroupMemberResponse.php');
include_once('RetrieveGroupMembers.php');
include_once('RetrieveGroupMembersResponse.php');
include_once('RetrieveGroupRoles.php');
include_once('RetrieveGroupRolesResponse.php');
include_once('RetrieveGroupTypes.php');
include_once('RetrieveGroupTypesResponse.php');


/**
 * 
 */
class GroupService extends \SoapClient
{

  /**
   * 
   * @var array $classmap The defined classes
   * @access private
   */
  private static $classmap = array(
    'GroupDto' => 'KTC\GroupService\GroupDto',
    'CrmEntityDto' => 'KTC\GroupService\CrmEntityDto',
    'ReferenceDto' => 'KTC\GroupService\ReferenceDto',
    'Request' => 'KTC\GroupService\Request',
    'GroupRetrieveResponse' => 'KTC\GroupService\GroupRetrieveResponse',
    'RetrieveResponseOfGroupDtowsdCoMqt' => 'KTC\GroupService\RetrieveResponseOfGroupDtowsdCoMqt',
    'GroupMemberDto' => 'KTC\GroupService\GroupMemberDto',
    'GroupMemberRetrieveResponse' => 'KTC\GroupService\GroupMemberRetrieveResponse',
    'RetrieveResponseOfGroupMemberDtowsdCoMqt' => 'KTC\GroupService\RetrieveResponseOfGroupMemberDtowsdCoMqt',
    'GroupRoleRetrieveResponse' => 'KTC\GroupService\GroupRoleRetrieveResponse',
    'RetrieveResponseOfGroupRoleDtowsdCoMqt' => 'KTC\GroupService\RetrieveResponseOfGroupRoleDtowsdCoMqt',
    'GroupRoleDto' => 'KTC\GroupService\GroupRoleDto',
    'GroupTypeRetrieveResponse' => 'KTC\GroupService\GroupTypeRetrieveResponse',
    'RetrieveResponseOfGroupTypeDtowsdCoMqt' => 'KTC\GroupService\RetrieveResponseOfGroupTypeDtowsdCoMqt',
    'GroupTypeDto' => 'KTC\GroupService\GroupTypeDto',
    'Ping' => 'KTC\GroupService\Ping',
    'PingResponse' => 'KTC\GroupService\PingResponse',
    'CreateUpdateGroup' => 'KTC\GroupService\CreateUpdateGroup',
    'CreateUpdateGroupResponse' => 'KTC\GroupService\CreateUpdateGroupResponse',
    'RetrieveGroups' => 'KTC\GroupService\RetrieveGroups',
    'RetrieveGroupsResponse' => 'KTC\GroupService\RetrieveGroupsResponse',
    'CreateUpdateGroupMember' => 'KTC\GroupService\CreateUpdateGroupMember',
    'CreateUpdateGroupMemberResponse' => 'KTC\GroupService\CreateUpdateGroupMemberResponse',
    'RetrieveGroupMembers' => 'KTC\GroupService\RetrieveGroupMembers',
    'RetrieveGroupMembersResponse' => 'KTC\GroupService\RetrieveGroupMembersResponse',
    'RetrieveGroupRoles' => 'KTC\GroupService\RetrieveGroupRoles',
    'RetrieveGroupRolesResponse' => 'KTC\GroupService\RetrieveGroupRolesResponse',
    'RetrieveGroupTypes' => 'KTC\GroupService\RetrieveGroupTypes',
    'RetrieveGroupTypesResponse' => 'KTC\GroupService\RetrieveGroupTypesResponse');

  /**
   * 
   * @param array $options A array of config values
   * @param string $wsdl The wsdl file to use
   * @access public
   */
  public function __construct(array $options = array(), $wsdl = 'http://crmtest.ktc.dk:8080/GroupService.svc?wsdl')
  {
    foreach (self::$classmap as $key => $value) {
      if (!isset($options['classmap'][$key])) {
        $options['classmap'][$key] = $value;
      }
    }
    
    parent::__construct($wsdl, $options);
  }

  /**
   * 
   * @param Ping $parameters
   * @access public
   * @return PingResponse
   */
  public function Ping(Ping $parameters)
  {
    return $this->__soapCall('Ping', array($parameters));
  }

  /**
   * 
   * @param CreateUpdateGroup $parameters
   * @access public
   * @return CreateUpdateGroupResponse
   */
  public function CreateUpdateGroup(CreateUpdateGroup $parameters)
  {
    return $this->__soapCall('CreateUpdateGroup', array($parameters));
  }

  /**
   * 
   * @param RetrieveGroups $parameters
   * @access public
   * @return RetrieveGroupsResponse
   */
  public function RetrieveGroups(RetrieveGroups $parameters)
  {
    return $this->__soapCall('RetrieveGroups', array($parameters));
  }

  /**
   * 
   * @param CreateUpdateGroupMember $parameters
   * @access public
   * @return CreateUpdateGroupMemberResponse
   */
  public function CreateUpdateGroupMember(CreateUpdateGroupMember $parameters)
  {
    return $this->__soapCall('CreateUpdateGroupMember', array($parameters));
  }

  /**
   * 
   * @param RetrieveGroupMembers $parameters
   * @access public
   * @return RetrieveGroupMembersResponse
   */
  public function RetrieveGroupMembers(RetrieveGroupMembers $parameters)
  {
    return $this->__soapCall('RetrieveGroupMembers', array($parameters));
  }

  /**
   * 
   * @param RetrieveGroupRoles $parameters
   * @access public
   * @return RetrieveGroupRolesResponse
   */
  public function RetrieveGroupRoles(RetrieveGroupRoles $parameters)
  {
    return $this->__soapCall('RetrieveGroupRoles', array($parameters));
  }

  /**
   * 
   * @param RetrieveGroupTypes $parameters
   * @access public
   * @return RetrieveGroupTypesResponse
   */
  public function RetrieveGroupTypes(RetrieveGroupTypes $parameters)
  {
    return $this->__soapCall('RetrieveGroupTypes', array($parameters));
  }

}
