#include <iostream>
#include <string>

using namespace std;

class memory : public hardware{
private:
	string frequency;
	string memorySize;
	string suppCuda;

public:
	memory(){
		this->frequency = "";
		this->memorySize = "";
		this->suppCuda = "";	
	}

	memory(string frequency, string memorySize, string suppCuda){
		this->frequency = frequency;
		this->memorySize = memorySize;
		this->suppCuda = suppCuda;
	}

	void setfrequency(string frequency){
		this->frequency = frequency;
	}

	void setmemorySize(string memorySize){
		this->memorySize = memorySize;
	}

	void setsuppCuda(string suppCuda){
		this->suppCuda = suppCuda;
	}


	string getfrequency(){
		return frequency;
	}

	string getmemorySize(){
		return memorySize;
	}

	string getsuppCuda(){
		return suppCuda;
	}

	void printMemory(){
		cout << "Frequency : ";
		cout << getfrequency() << endl;
		cout << "Memory : ";
		cout << getmemorySize() << endl;
		cout << "Cuda : ";
		cout << getsuppCuda() << endl;
	}

	~memory(){}
};
