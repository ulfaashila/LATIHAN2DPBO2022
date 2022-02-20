<?php

class product{

	private $price = "";
	private $idProduct = "";

	public function __construct($price = "", $idProduct = ""){
		$this->price = $price;
		$this->idProduct = $idProduct;
	}

	public function setprice($price){
		$this->price = $price;
	}

	public function getprice(){
		return $this->price;
	}

	public function setidProduct($idProduct){
		$this->idProduct = $idProduct;
	}

	public function getidProduct(){
		return $this->idProduct;
	}

	public function printProduct(){
		echo "<br>";
		echo "Price 		: ". getprice() ."<br>";
		echo "idProduct 		: ". getidProduct() ."<br>";
	}
}