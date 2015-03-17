#!C:\Users\othniel.visky\git\votiv_repo\PHP_binary\php.exe
<?php

$count = 1;
foreach ($argv as $str)
{
	if ($str == $argv[0])
		continue;
	else
	{
		$count++;
		echo $str;
		if ($count != count($argv))
			echo "\n";
	}
}

?>