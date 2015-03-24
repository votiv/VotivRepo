<?php

Class Tyrion
{
	public function sleepWith($person)
	{
		$class = get_class($person);
		if ($class == "Jaime")
			echo "Not even if I'm drunk !" . PHP_EOL;
		else if ($class == "Sansa")
			echo "Let's do this." . PHP_EOL;
		else if ($class == "Cersei")
			echo "Not even if I'm drunk !" . PHP_EOL;
	}
}

?>