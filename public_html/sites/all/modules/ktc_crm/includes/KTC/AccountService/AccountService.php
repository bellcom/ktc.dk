<?php

namespace KTC\AccountService;

include_once('Ping.php');
include_once('PingResponse.php');
include_once('RetrieveAccounts.php');
include_once('Request.php');
include_once('RetrieveAccountsResponse.php');
include_once('AccountRetrieveResponse.php');
include_once('RetrieveResponseOfAccountDtowsdCoMqt.php');
include_once('AccountDto.php');
include_once('CrmEntityDto.php');
include_once('EANAddressDto.php');
include_once('AddressDto.php');
include_once('AddressType.php');
include_once('Region.php');
include_once('RetrieveAccountById.php');
include_once('RetrieveAccountByIdResponse.php');
include_once('RetrieveContactsForAccountById.php');
include_once('RetrieveContactsForAccountByIdResponse.php');
include_once('WebUserDto.php');


/**
 * 
 */
class AccountService extends \SoapClient
{

  /**
   * 
   * @var array $classmap The defined classes
   * @access private
   */
  private static $classmap = array(
    'Ping' => 'KTC\AccountService\Ping',
    'PingResponse' => 'KTC\AccountService\PingResponse',
    'RetrieveAccounts' => 'KTC\AccountService\RetrieveAccounts',
    'Request' => 'KTC\AccountService\Request',
    'RetrieveAccountsResponse' => 'KTC\AccountService\RetrieveAccountsResponse',
    'AccountRetrieveResponse' => 'KTC\AccountService\AccountRetrieveResponse',
    'RetrieveResponseOfAccountDtowsdCoMqt' => 'KTC\AccountService\RetrieveResponseOfAccountDtowsdCoMqt',
    'AccountDto' => 'KTC\AccountService\AccountDto',
    'CrmEntityDto' => 'KTC\AccountService\CrmEntityDto',
    'EANAddressDto' => 'KTC\AccountService\EANAddressDto',
    'AddressDto' => 'KTC\AccountService\AddressDto',
    'RetrieveAccountById' => 'KTC\AccountService\RetrieveAccountById',
    'RetrieveAccountByIdResponse' => 'KTC\AccountService\RetrieveAccountByIdResponse',
    'RetrieveContactsForAccountById' => 'KTC\AccountService\RetrieveContactsForAccountById',
    'RetrieveContactsForAccountByIdResponse' => 'KTC\AccountService\RetrieveContactsForAccountByIdResponse',
    'WebUserDto' => 'KTC\AccountService\WebUserDto');

  /**
   * 
   * @param array $options A array of config values
   * @param string $wsdl The wsdl file to use
   * @access public
   */
  public function __construct(array $options = array(), $wsdl = 'http://crm.ktc.dk:8080/AccountService.svc?wsdl')
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
   * @param RetrieveAccounts $parameters
   * @access public
   * @return RetrieveAccountsResponse
   */
  public function RetrieveAccounts(RetrieveAccounts $parameters)
  {
    return $this->__soapCall('RetrieveAccounts', array($parameters));
  }

  /**
   * 
   * @param RetrieveAccountById $parameters
   * @access public
   * @return RetrieveAccountByIdResponse
   */
  public function RetrieveAccountById(RetrieveAccountById $parameters)
  {
    return $this->__soapCall('RetrieveAccountById', array($parameters));
  }

  /**
   * 
   * @param RetrieveContactsForAccountById $parameters
   * @access public
   * @return RetrieveContactsForAccountByIdResponse
   */
  public function RetrieveContactsForAccountById(RetrieveContactsForAccountById $parameters)
  {
    return $this->__soapCall('RetrieveContactsForAccountById', array($parameters));
  }

}
