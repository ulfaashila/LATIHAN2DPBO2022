#include <iostream>
#include <string>

using namespace std;

class hardware : public product{
private:
	string brand;
	string model;

public:
	hardware(){
		this->brand = "";
		this->model = "";
	}

	hardware(string brand, string model){
		this->brand = brand;
		this->model = model;
	}

	void setbrand(string brand){
		this->brand = brand;
	}

	void setmodel(string model){
		this->model = model;
	}


	string getbrand(){
		return brand;
	}

	string getmodel(){
		return model;
	}

	void printHardware(){
		cout << "Brand : ";
		cout << getbrand() << endl;
		cout << "Model : ";
		cout << getmodel() << endl;
	}

	~hardware(){}
};
