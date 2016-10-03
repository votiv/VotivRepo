<?php

function ft_split($string)
{
	$arr = explode(' ', $string);
	$barr = array();
	foreach ($arr as $str)
	{
		if ($str == '')
			continue;
		else
			array_push($barr, $str);
	}
	sort($barr);
	return ($barr);
}

?>