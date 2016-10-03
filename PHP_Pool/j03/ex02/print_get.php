<?php

$name = $_SERVER['QUERY_STRING'];

$tab = explode('&', $name);

foreach ($tab as $str)
{
	$login = explode('=', $str);
	echo "$login[0]: $login[1]\n";
}

?>
