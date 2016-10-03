#!C:\Users\othniel.visky\git\votiv_repo\PHP_binary\php.exe
<?php

/*$name = $_SERVER['QUERY_STRING'];

$tab = explode('&', $name);
print_r($tab);

preg_match('/set/', $tab[0], $matches);
$mode = $matches[0];

$arr = array();
echo $mode;
switch ($mode)
{
	case 'set':
	{
		$name = explode('=', $tab[1]);
		$value = explode('=', $tab[2]);
		array_push($arr, $name[1]=>$value[1]);
		
		break;
	}
	case 'get':
		
		break;
	case 'del':
		
		break;
	default:
		echo "Not a valid action!\n";
		break;
}
print_r($arr);

*/

$data = $_SERVER['QUERY_STRING'];
print_r($data);


// set the cookies
setcookie("cookie[three]", "cookiethree");
setcookie("cookie[two]", "cookietwo");
setcookie("cookie[one]", "cookieone");

// after the page reloads, print them out
if (isset($_COOKIE['cookie'])) {
    foreach ($_COOKIE['cookie'] as $name => $value) {
        $name = htmlspecialchars($name);
        $value = htmlspecialchars($value);
        echo "$name : $value <br />\n";
    }
}

?>