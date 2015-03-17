#!C:\Users\othniel.visky\git\votiv_repo\PHP_binary\php.exe
<?php

include("ft_is_sort.php");
$tab=array("!/@#;^","42","Hello World","m","salut","zZzZzZz");

if(ft_is_sort($tab))
	echo "Le tableau est trie\n";
else
	echo "Le tableau n’est pas trie\n";

?>