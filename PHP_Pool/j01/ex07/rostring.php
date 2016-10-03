#!C:\Users\othniel.visky\git\votiv_repo\PHP_binary\php.exe
<?php

$arr = explode(' ', $argv[1]);
$str = $arr[0];
array_shift($arr);
array_push($arr, $str);
echo implode(" ", $arr);

?>