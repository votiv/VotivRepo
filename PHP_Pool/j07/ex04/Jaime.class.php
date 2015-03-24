<?php

Class Jaime
{
	public function sleepWith($person)
	{
		$class = get_class($person);
		if ($class == "Tyrion")
			echo "Not even if I'm drunk !" . PHP_EOL;
		else if ($class == "Sansa")
			echo "Let's do this." . PHP_EOL;
		else if ($class == "Cersei")
			echo "With pleasure, but only in a tower in Winterfell, then." . PHP_EOL;
	}
}

?>