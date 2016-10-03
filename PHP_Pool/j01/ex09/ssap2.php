#!C:\Users\othniel.visky\git\votiv_repo\PHP_binary\php.exe
<?php

$arr = array();
$num_arr = array();
$chr_arr = array();
$asc_arr = array();
$i = 1;
while ($i < $argc)
{
	array_push($arr, $argv[$i]);
	$i++;
}
$str = implode(' ', $arr);
$arr = explode(' ', $str);
foreach($arr as $elem)
{
	if (is_numeric($elem[0]))
		array_push($num_arr, $elem);
	else if (ctype_alpha($elem[0]))
		array_push($chr_arr, $elem);
	else
		array_push($asc_arr, $elem);
}
sort($num_arr);
sort($chr_arr);
sort($asc_arr);
$final_arr = array_merge($chr_arr, $num_arr, $asc_arr);
$i = 0;
while ($i < count($final_arr))
{
	echo $final_arr[$i];
	if ($i != count($final_arr) - 1)
		echo "\n";
	$i++;
}


?>