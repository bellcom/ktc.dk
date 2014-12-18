<?php

namespace KTC\WebUser;

include_once('Ping.php');
include_once('PingResponse.php');
include_once('RetrieveWebUsers.php');
include_once('Request.php');
include_once('RetrieveWebUsersResponse.php');
include_once('RetrieveResponseOfWebUserDtowsdCoMqt.php');
include_once('WebUserDto.php');
include_once('CrmEntityDto.php');
include_once('EANAddressDto.php');
include_once('AddressDto.php');
include_once('AddressType.php');
include_once('Region.php');
include_once('CreateUpdateWebUser.php');
include_once('CreateUpdateWebUserResponse.php');


/**
 * 
 */
class WebUser extends \SoapClient
{

  /**
   * 
   * @var array $classmap The defined classes
   * @access private
   */
  private static $classmap = array(
    'Ping' => 'KTC\WebUser\Ping',
    'PingResponse' => 'KTC\WebUser\PingResponse',
    'RetrieveWebUsers' => 'KTC\WebUser\RetrieveWebUsers',
    'Request' => 'KTC\WebUser\Request',
    'RetrieveWebUsersResponse' => 'KTC\WebUser\RetrieveWebUsersResponse',
    'RetrieveResponseOfWebUserDtowsdCoMqt' => 'KTC\WebUser\RetrieveResponseOfWebUserDtowsdCoMqt',
    'WebUserDto' => 'KTC\WebUser\WebUserDto',
    'CrmEntityDto' => 'KTC\WebUser\CrmEntityDto',
    'EANAddressDto' => 'KTC\WebUser\EANAddressDto',
    'AddressDto' => 'KTC\WebUser\AddressDto',
    'CreateUpdateWebUser' => 'KTC\WebUser\CreateUpdateWebUser',
    'CreateUpdateWebUserResponse' => 'KTC\WebUser\CreateUpdateWebUserResponse');

  /**
   * 
   * @param array $options A array of config values
   * @param string $wsdl The wsdl file to use
   * @access public
   */
  public function __construct(array $options = array(), $wsdl = 'http://crmtest.ktc.dk:8080/WebUser.svc?wsdl')
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
   * @param RetrieveWebUsers $parameters
   * @access public
   * @return RetrieveWebUsersResponse
   */
  public function RetrieveWebUsers(RetrieveWebUsers $parameters)
  {
    return $this->__soapCall('RetrieveWebUsers', array($parameters));
  }

  /**
   * 
   * @param CreateUpdateWebUser $parameters
   * @access public
   * @return CreateUpdateWebUserResponse
   */
  public function CreateUpdateWebUser(CreateUpdateWebUser $parameters)
  {
    return $this->__soapCall('CreateUpdateWebUser', array($parameters));
  }

}
