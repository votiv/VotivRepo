#!C:\Users\othniel.visky\git\votiv_repo\PHP_binary\php.exe
<?php

$barr = array();
$str = implode(' ', $argv);
$arr = explode(' ', $str);
foreach ($arr as $str)
{
	if ($str == '' || $str == $argv[0])
		continue;
	else
		array_push($barr, $str);
}
sort($barr);
$i = 0;
while ($i < count($barr))
{
	echo $barr[$i];
	if ($i != count($barr) - 1)
		echo "\n";
	$i++;
}

?>