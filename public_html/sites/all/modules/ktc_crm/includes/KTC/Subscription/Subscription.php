<?php

namespace KTC\Subscription;

include_once('Ping.php');
include_once('PingResponse.php');
include_once('CreateUpdateSubscription.php');
include_once('SubscriptionDto.php');
include_once('CrmEntityDto.php');
include_once('EANAddressDto.php');
include_once('AddressDto.php');
include_once('AddressType.php');
include_once('Region.php');
include_once('RecipientAddress.php');
include_once('CreateUpdateSubscriptionResponse.php');
include_once('RetrieveSubscriptions.php');
include_once('Request.php');
include_once('RetrieveSubscriptionsResponse.php');
include_once('RetrieveResponseOfSubscriptionDtowsdCoMqt.php');


/**
 * 
 */
class Subscription extends \SoapClient
{

  /**
   * 
   * @var array $classmap The defined classes
   * @access private
   */
  private static $classmap = array(
    'Ping' => 'KTC\Subscription\Ping',
    'PingResponse' => 'KTC\Subscription\PingResponse',
    'CreateUpdateSubscription' => 'KTC\Subscription\CreateUpdateSubscription',
    'SubscriptionDto' => 'KTC\Subscription\SubscriptionDto',
    'CrmEntityDto' => 'KTC\Subscription\CrmEntityDto',
    'EANAddressDto' => 'KTC\Subscription\EANAddressDto',
    'AddressDto' => 'KTC\Subscription\AddressDto',
    'CreateUpdateSubscriptionResponse' => 'KTC\Subscription\CreateUpdateSubscriptionResponse',
    'RetrieveSubscriptions' => 'KTC\Subscription\RetrieveSubscriptions',
    'Request' => 'KTC\Subscription\Request',
    'RetrieveSubscriptionsResponse' => 'KTC\Subscription\RetrieveSubscriptionsResponse',
    'RetrieveResponseOfSubscriptionDtowsdCoMqt' => 'KTC\Subscription\RetrieveResponseOfSubscriptionDtowsdCoMqt');

  /**
   * 
   * @param array $options A array of config values
   * @param string $wsdl The wsdl file to use
   * @access public
   */
  public function __construct(array $options = array(), $wsdl = 'http://crmtest.ktc.dk:8080/Subscription.svc?wsdl')
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
   * @param CreateUpdateSubscription $parameters
   * @access public
   * @return CreateUpdateSubscriptionResponse
   */
  public function CreateUpdateSubscription(CreateUpdateSubscription $parameters)
  {
    return $this->__soapCall('CreateUpdateSubscription', array($parameters));
  }

  /**
   * 
   * @param RetrieveSubscriptions $parameters
   * @access public
   * @return RetrieveSubscriptionsResponse
   */
  public function RetrieveSubscriptions(RetrieveSubscriptions $parameters)
  {
    return $this->__soapCall('RetrieveSubscriptions', array($parameters));
  }

}
