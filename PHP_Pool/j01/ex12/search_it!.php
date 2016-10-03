#!C:\Oti\PHP_binary\php.exe
<?php

$arr = array();
$i = 2;
while ($i < $argc)
{
	$far = explode(":", $argv[$i]);
	$arr[$far[0]] = $far[1];
	$i++;
}
foreach ($arr as $key => $value)
{
	if ($key == $argv[1])
		echo "$value\n";
}
?>