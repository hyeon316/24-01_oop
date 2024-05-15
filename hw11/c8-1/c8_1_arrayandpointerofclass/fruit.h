#pragma once //헤더 파일로 분리한다
class fruit { 
public:
	// constructor
	fruit() {
		price = 200; many = 2; // default values
	}
	fruit(float p, int n) {
		price = p;
		many = n;
	}
	// member data
	int many;
	float price;
	// member function
	float show() { 
	return price * many;
	}
};

