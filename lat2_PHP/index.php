<?php
include "product.php";
include "hardware.php";
include "memory.php";

$data = new memory();
$data->setprice("120000");
$data->setidProduct("PC3-8500");
$data->setBrand("Kingstone");
$data->setmodel("DDR4");
$data->setfrequency("2400mHz");
$data->setmemorySize("16GB");
$data->setsuppCuda("Yes");

$data->printProduct();
$data->printHardware();
$data->printMemory();

?>