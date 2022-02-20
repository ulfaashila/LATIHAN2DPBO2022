<?php

class memory extends hardware{

	private $frequency = "";
	private $memorySize = "";
	private $suppCuda = "";

	public function __construct($frequency = "", $memorySize = "", $suppCuda = ""){
		$this->frequency = $frequency;
		$this->memorySize = $memorySize;
		$this->suppCuda = $suppCuda;
	}

	public function setfrequency($frequency){
		$this->frequency = $frequency;
	}

	public function getfrequency(){
		return $this->frequency;
	}

	public function setmemorySize($memorySize){
		$this->memorySize = $memorySize;
	}

	public function getmemorySize(){
		return $this->memorySize;
	}

	public function setsuppCuda($suppCuda){
		$this->suppCuda = $suppCuda;
	}

	public function getsuppCuda(){
		return $this->suppCuda;
	}

	public function printHardware(){
		echo "frequency 		: ". getfrequency() ."<br>";
		echo "Memory Size 		: ". getmemorySize() ."<br>";
		echo "Cuda 		: ". getsuppCuda() ."<br>";
	}
}