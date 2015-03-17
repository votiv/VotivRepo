<?php

function ft_is_sort($tab)
{
	$copy = $tab;
	sort($tab);
	$str1 = implode(' ', $tab);
	$str2 = implode(' ', $copy);
	if (strcmp($str1, $str2) == 0)
		return true;
	else
		return false;
}

?>