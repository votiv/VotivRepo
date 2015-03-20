#!C:\Users\othniel.visky\git\votiv_repo\PHP_binary\php.exe
<?php

$pattern = "/(?<=title=\")(.*)(?=\")/i";
$file = file_get_contents($argv[1]);
$string = preg_replace_callback($pattern,
	function ($matches)
	{
		return (strtoupper($matches[1]));
	}, $file);


echo $string;

?>