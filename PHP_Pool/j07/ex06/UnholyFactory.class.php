<?php

Class UnholyFactory
{
	private $_absorbed = array();

	public function absorb($fighter)
	{
		if (get_parent_class($fighter) != 'Fighter')
		{
			echo "(Factory can't absorb this, it's not a fighter)" . PHP_EOL;
			return ;
		}
		if (!in_array($fighter, $this->_absorbed))
		{
			$this->_absorbed[$fighter->getFighterType()] = $fighter;
			echo "(Factory absorbed a fighter of type " . $fighter->getFighterType() . ")" . PHP_EOL;
		}
		else
			echo "(Factory already absorbed a fighter of type " . $fighter->getFighterType() . ")" . PHP_EOL;
	}

	public function fabricate($fighter)
	{
		if (array_key_exists($fighter, $this->_absorbed))
		{
			echo "(Factory fabricates a fighter of type $fighter)" . PHP_EOL;
			return (clone $this->_absorbed[$fighter]);
		}
		else
			echo "(Factory hasn't absorbed any fighter of type $fighter)" . PHP_EOL;
	}
}

?>