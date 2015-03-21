<?php

if (!$_POST['login'] && !$_POST['passwd'] && !$_POST['submit'] !== 'OK')
{
	echo "ERROR\n";
	return ;
}

$pass = hash('whirlpool', $_POST['passwd']);
$user = $_POST['login'];
$new_user = array("login"=>$user, "passwd"=>$pass);

if (!file_exists('./private') || ! file_exists('./private/passwd'))
{
	mkdir('./private');
	$tab = array($new_user);
}
else
{
	$tab = unserialize(file_get_contents("./private/passwd"));
	foreach ($tab as $k => $v)
	{
		if ($v['login'] === $user)
		{
			echo "ERROR\n";
			return ;
		}
		$tab[] = $new_user;
	}
}
$tab = serialize($tab);
file_put_contents('./private/passwd', $tab);
echo "OK\n";

?>
