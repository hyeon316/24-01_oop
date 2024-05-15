#pragma once
using namespace std;
class CHealth {
public:
	// constructors
	CHealth(); //입력없으면 나이 20
	CHealth(int a);	//나이 입력

	// destructor
	~CHealth(); 

	// member data
	static int nCHealth;
	float height, cel, faren, beat,pressure;
	float BMIvalue, healthAge;
	float *beat5min, *temp5min;

	// member functions (methods)
	void measure();
	void measure(int);
	int  run5min();  // -1 emmergency


private:
	// private member data
	int age;
	float weight;

	// private member function
	void cel2faren();
	void faren2cel();
	void GetHealthAge();
	void GetBMI();
};