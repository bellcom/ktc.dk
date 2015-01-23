<?php

namespace KTC\GroupService;

class RetrieveGroupTypesResponse
{

  /**
   * 
   * @var GroupTypeRetrieveResponse $RetrieveGroupTypesResult
   * @access public
   */
  public $RetrieveGroupTypesResult = null;

  /**
   * 
   * @param GroupTypeRetrieveResponse $RetrieveGroupTypesResult
   * @access public
   */
  public function __construct($RetrieveGroupTypesResult)
  {
    $this->RetrieveGroupTypesResult = $RetrieveGroupTypesResult;
  }

}
