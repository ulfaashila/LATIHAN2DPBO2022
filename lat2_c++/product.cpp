#include <iostream>
#include <string>

using namespace std;

class product{
private:
	string price;
	string idProduct;

public:
	product(){
		this->price = "";
		this->idProduct = "";
	}

	product(string price, string idProduct){
		this->price = price;
		this->idProduct = idProduct;
	}

	void setprice(string price){
		this->price = price;
	}

	void setidProduct(string idProduct){
		this->idProduct = idProduct;
	}


	string getprice(){
		return price;
	}

	string getidProduct(){
		return idProduct;
	}

	void printProduct(){
		cout << endl;
		cout << "Price : ";
		cout << getprice() << endl;
		cout << "id Prduct : ";
		cout << getidProduct() << endl; 
	}

	~product(){}
};
