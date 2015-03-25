<?php

abstract class Fighter
{
	private $_fighter_type;
	
	public function __construct($fighter_type)
	{
		$this->_fighter_type = $fighter_type;
		return ;
	}

	public function getFighterType()
	{
		return $this->_fighter_type;
	}

	abstract public function fight($target);
}

?>