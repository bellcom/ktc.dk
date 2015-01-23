<?php

namespace KTC\GroupService;

class CreateUpdateGroup
{

  /**
   * 
   * @var GroupDto $group
   * @access public
   */
  public $group = null;

  /**
   * 
   * @param GroupDto $group
   * @access public
   */
  public function __construct($group)
  {
    $this->group = $group;
  }

}
