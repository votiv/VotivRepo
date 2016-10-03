<?php

require_once 'Color.class.php';

Class Vertex
{
	public static $verbose = FALSE;
	private $_x;
	private $_y;
	private $_z;
	private $_w = 1;
	private $_color;

	public function __construct(array $kwargs)
	{
		if (!array_key_exists('x', $kwargs) || !array_key_exists('y', $kwargs) || !array_key_exists('z', $kwargs))
			return ;
		$this->setX($kwargs['x']);
		$this->setY($kwargs['y']);
		$this->setZ($kwargs['z']);
		if (array_key_exists('w', $kwargs))
			$this->setW($kwargs['w']);
		if (array_key_exists('color', $kwargs))
			$this->setColor($kwargs['color']);
		else
			$this->setColor(new Color(array('red' => 255, 'green' => 255, 'blue' => 255)));
		if (self::$verbose == TRUE)
			printf('Vertex( x: %.2f, y: %.2f, z: %.2f, w: %.2f, %s) constructed' . PHP_EOL, $this->getX(), $this->getY(), $this->getZ(), $this->getW(), $this->getColor());
		return ;
	}
	public function __destruct()
	{
		if (self::$verbose == TRUE)
			printf('Vertex( x: %.2f, y: %.2f, z: %.2f, w: %.2f, %s) destructed' . PHP_EOL, $this->getX(), $this->getY(), $this->getZ(), $this->getW(), $this->getColor());
		return ;
	}

	public function __toString()
	{
		if (self::$verbose == TRUE)
			return (sprintf('Vertex( x: %.2f, y: %.2f, z: %.2f, w: %.2f, %s)', $this->getX(), $this->getY(), $this->getZ(), $this->getW(), $this->getColor()));
		else
			return (sprintf('Vertex( x: %.2f, y: %.2f, z: %.2f, w: %.2f)', $this->getX(), $this->getY(), $this->getZ(), $this->getW()));
	}

	public static function doc()
	{
		print(file_get_contents('./Vertex.doc.txt') . PHP_EOL);
		return ;
	}

	public function getX()
	{
		return $this->_x;
	}

	public function getY()
	{
		return $this->_y;
	}

	public function getZ()
	{
		return $this->_z;
	}

	public function getW()
	{
		return $this->_w;
	}

	public function getColor()
	{
		return $this->_color;
	}

	public function setX($var)
	{
		$this->_x = $var;
		return ;
	}

	public function setY($var)
	{
		$this->_y = $var;
		return ;
	}

	public function setZ($var)
	{
		$this->_z = $var;
		return ;
	}

	public function setW($var)
	{
		$this->_w = $var;
		return ;
	}

	public function setColor(Color $Color)
	{
		$this->_color = $Color;
		return ;
	}
}

?>