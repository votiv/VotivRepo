#!C:\Users\othniel.visky\git\votiv_repo\PHP_binary\php.exe
<?php

$tab = explode(' ', trim($argv[1]));
$i = 0;
while ($i < count($tab))
{
	if (ctype_space($tab[$i]) || $tab[$i] == '')
		{
			unset($tab[$i]);
			$tab = array_values($tab);
			$i = -1;
		}
	$i++;
}
print_r($tab);
$res = implode(" ", $tab);
echo $res;

?>