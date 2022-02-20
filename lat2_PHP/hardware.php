<?php

class hardware extends product{

	private $brand = "";
	private $model = "";

	public function __construct($brand = "", $model = ""){
		$this->brand = $brand;
		$this->model = $model;
	}

	public function setbrand($brand){
		$this->brand = $brand;
	}

	public function getbrand(){
		return $this->brand;
	}

	public function setmodel($model){
		$this->model = $model;
	}

	public function getmodel(){
		return $this->model;
	}

	public function printHardware(){
		echo "Brand 		: ". getbrand() ."<br>";
		echo "Model 		: ". getmodel() ."<br>";
	}
}