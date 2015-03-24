<?php

Class Color
{
	public static $verbose = FALSE;
	public $red = 0;
	public $green = 0;
	public $blue= 0;

	public static function doc()
	{
		print (file_get_contents('./Color.doc.txt'));
		return ;
	}

	public function __construct (array $kwargs)
	{
		if (array_key_exists('red', $kwargs))
			$this->red = $kwargs['red'] % 256;
		if (array_key_exists('green', $kwargs))
			$this->green = $kwargs['green'] % 256;
		if (array_key_exists('blue', $kwargs))
			$this->blue = $kwargs['blue'] % 256;
		if (array_key_exists('rgb', $kwargs))
		{
			$this->red = ($kwargs['rgb'] >> 16) % 256;
			$this->green = ($kwargs['rgb'] >> 8) % 256;
			$this->blue = $kwargs['rgb'] % 256;
		}
		if (self::$verbose == TRUE)
			printf('Color( red: %3d, green: %3d, blue: %3d ) constructed.' . PHP_EOL, $this->red, $this->green, $this->blue);
		return ;
	}

	public function __destruct()
	{
		if (self::$verbose == TRUE)
			printf('Color( red: %3d, green: %3d, blue: %3d ) destructed.' . PHP_EOL, $this->red, $this->green, $this->blue);
		return ;
	}

	public function __toString()
	{
		return (sprintf('Color( red: %3d, green: %3d, blue: %3d )', $this->red, $this->green, $this->blue));
	}

	public function add(Color $instance)
	{
		return (new Color(array('red' => $this->red + $instance->red, 'green' => $this->green + $instance->green, 'blue' => $this->blue + $instance->blue)));
	}

	public function sub(Color $instance)
	{
		return (new Color(array('red' => $this->red - $instance->red, 'green' => $this->green - $instance->green, 'blue' => $this->blue - $instance->blue)));
	}

	public function mult($multiplier)
	{
		return (new Color(array('red' => $this->red * $multiplier, 'green' => $this->green * $multiplier, 'blue' => $this->blue * $multiplier)));
	}
}

?>
