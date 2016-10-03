#!C:\Users\othniel.visky\git\votiv_repo\PHP_binary\php.exe
<?php

function is_op($ch)
{
	if ($ch == "+" || $ch == "-" || $ch == "*" || $ch == "/" || $ch == "%")
		return true;
	else
		return false;
}

$str = str_replace(' ', '', trim($argv[1]));
$tab = str_split($str);
foreach ($tab as $elem)
{
	if (!is_numeric($elem) && !is_op($elem) && $elem != " ")
		exit ("Syntax Error");
}
print_r($tab);

$i = 0;
while ($i < count($tab))
{
	if (!is_numeric($tab[$i]))
	{
		
	}
	$i++;
}
$op = $tab[$i];
$str = implode('', $tab);
$num1 = substr($str, 0, $i);
$num2 = substr($str, $i + 1, strlen($str));

switch ($op)
{
	case '+':
		echo $num1 + $num2;
		break;
	case '-':
		echo $num1 - $num2;
		break;
	case '*':
		echo $num1 * $num2;
		break;
	case '/':
		echo $num1 / $num2;
		break;
	case '%':
		echo $num1 % $num2;
		break;
	default:
		echo "Incorrect Parameters";
		break;
}
/*if (!is_numeric($tab[$i + 1]))
			exit("Syntax Error");
		else
			break;*/

?>

