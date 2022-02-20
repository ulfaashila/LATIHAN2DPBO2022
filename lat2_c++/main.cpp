#include<iostream>
#include<string>
using namespace std;
#include "product.cpp"
#include "hardware.cpp"
#include "memory.cpp"



int main(){
	memory O_memo;
	O_memo.setprice("12000");
	O_memo.setidProduct("PC3-8500");
	O_memo.setbrand("Samsung");
	O_memo.setmodel("DDR4");
	O_memo.setfrequency("2500mHz");
	O_memo.setmemorySize("16GB");
	O_memo.setsuppCuda("Yes");

	O_memo.printProduct();
	O_memo.printHardware();
	O_memo.printMemory();
}
