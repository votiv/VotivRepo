#!C:\Users\othniel.visky\git\votiv_repo\PHP_binary\php.exe
<?php

date_default_timezone_set('Europe/Paris');

$tab = explode(" ", $argv[1]);

$week = preg_match("/$tab[0]/i", "lundimardimercredijeudivendredisamedidimanche");
$day = preg_match("/[0-3][0-9]/", $tab[1]);
$month = preg_match("/$tab[2]/i", "janvierfevriermarsavrilmaijuinjuilletaoutseptembreoctobrenovembredecembre");
$year = preg_match("/[0-9]{4}/", $tab[3]);
$time = preg_match("/(2[0-3]|[01][0-9]):[0-5][0-9]:[0-5][0-9]/", $tab[4]);

$big = $week.$day.$month.$year.$time;
if ($big != "11111")
	exit("Wrong Format");

$patterns = array("/janvier/i","/fevrier/i","/mars/i","/avril/i","/mai/i","/juin/i","/juillet/i","/aout/i","/septembre/i","/octobre/i","/novembre/i","/decembre/i");
$replace = array("january","february","marach","april","may","june","july","august","september","october","november","december");
$tab[2] = preg_replace($patterns, $replace, $tab[2]);

array_shift($tab);
$str_dt = implode(" ", $tab);

$dt = strtotime($str_dt);
echo "$dt\n";
?>
