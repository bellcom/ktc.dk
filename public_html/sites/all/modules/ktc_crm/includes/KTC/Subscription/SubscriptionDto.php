<?php

namespace KTC\Subscription;

include_once('CrmEntityDto.php');

class SubscriptionDto extends CrmEntityDto
{

  /**
   * 
   * @var dateTime $EndDate
   * @access public
   */
  public $EndDate = null;

  /**
   * 
   * @var EANAddressDto $InvoiceAddress
   * @access public
   */
  public $InvoiceAddress = null;

  /**
   * 
   * @var AddressDto $OtherAddress
   * @access public
   */
  public $OtherAddress = null;

  /**
   * 
   * @var string $ProductDescription
   * @access public
   */
  public $ProductDescription = null;

  /**
   * 
   * @var guid $ProductId
   * @access public
   */
  public $ProductId = null;

  /**
   * 
   * @var RecipientAddress $RecipientAddress
   * @access public
   */
  public $RecipientAddress = null;

  /**
   * 
   * @var guid $RecipientId
   * @access public
   */
  public $RecipientId = null;

  /**
   * 
   * @var dateTime $StartDate
   * @access public
   */
  public $StartDate = null;

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
