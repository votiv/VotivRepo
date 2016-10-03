#!C:\Users\othniel.visky\git\votiv_repo\PHP_binary\php.exe
<?php

if ($argc != 4)
	exit("Incorrect Parameters");
$chr = trim($argv[2]);
switch ($chr)
{
	case '+':
		echo trim($argv[1]) + trim($argv[3]);
		break;
	case '-':
		echo trim($argv[1]) - trim($argv[3]);
		break;
	case '*':
		echo trim($argv[1]) * trim($argv[3]);
		break;
	case '/':
		echo trim($argv[1]) / trim($argv[3]);
		break;
	case '%':
		echo trim($argv[1]) % trim($argv[3]);
		break;
	default:
		echo "Incorrect Parameters";
		break;
}

?>