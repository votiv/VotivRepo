#!C:\Users\othniel.visky\git\votiv_repo\PHP_binary\php.exe
<?php

function get_text_from_tag($string)
{
    $pattern = "/\<a ?.*>(\s*.*\s*)\</";
    preg_match($pattern, $string, $matches);
    print_r($matches);
    $string = preg_replace("/$matches[1]/", strtoupper($matches[1]), $string);
    return $string;
}

$file = file('page.html');



foreach ($file as $line)
{
	echo get_text_from_tag($line);
}


?>