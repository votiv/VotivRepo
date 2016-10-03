#!C:\Users\othniel.visky\git\votiv_repo\PHP_binary\php.exe
<?php

function my_readline( $prompt = '' )
{
    return rtrim( fgets( STDIN ), "\n" );
}

echo "Entrez un nombre: ";
$in = rtrim(fgets(STDIN));
if (ord($in) == 4)
	exit();
else if (!is_numeric($in))
	echo "'" . $in . "'" . " n'est pas un chiffre";
else if ($in % 2 == 0)
	echo "Le chiffre " . $in . " est Pair";
else if ($in % 2 != 0)
	echo "Le chiffre " . $in . " est Impair";

?>