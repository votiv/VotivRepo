<?php

Class Tyrion extends Lannister
{
	public function __construct()
	{
		parent::__construct();
		echo "My name is Tyrion" . PHP_EOL;
	}

	public function getSize()
	{
		return "Short";
	}

	public function houseMotto()
	{
		return "Hear me roar!";
	}
}

?>