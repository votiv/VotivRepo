<?php

Class NightsWatch implements IFighter
{
	private $_fight;

	public function recruit($person)
	{
		if (method_exists($person, 'fight'))
			$_fight = $person->fight() . PHP_EOL;
	}

	public function fight()
	{
		echo $_fight;
	}
}

?>