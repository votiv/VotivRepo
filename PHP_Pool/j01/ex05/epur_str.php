#!C:\Users\othniel.visky\git\votiv_repo\PHP_binary\php.exe
<?php

$arr = explode(' ', $argv[1]);
$barr = array();
foreach ($arr as $str)
{
	if ($str == '')
		continue;
	else
		array_push($barr, $str);
}

echo implode(' ', $barr);

?>