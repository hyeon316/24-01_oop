#include <iostream>
#include <cmath>  // for rand( )
#include "health2.h"


CHealth::CHealth(){nCHealth++; age = 20; beat5min = temp5min = nullptr;} //practice
CHealth::CHealth(int a) {	age = a;}

CHealth::~CHealth() {
	nCHealth--; 
	cout << "  count " << nCHealth << endl;
	if (beat5min != nullptr) delete beat5min; 
	if (temp5min != nullptr) delete temp5min; 
	else cout << " no allocated memory \n";
}
int CHealth::nCHealth = 0; //static variable nCHealth 0으로 초기화

//private function
void CHealth::cel2faren(){faren = cel * 9.0 / 5.0 + 32.0;} 		//practice
void CHealth::GetBMI(){ BMIvalue = weight / height / height; }
void CHealth::faren2cel() { cel = (faren - 32) * 5.0 / 9.0; }
void CHealth::GetHealthAge(){healthAge = beat / pressure;} 		//practice

//practice
// health2.h의 private function 2개를 helath2.cpp에 넣을 수 있다.
// health2.h의 default constructor도 health2.cpp에서 구현할 수 있다.


void CHealth::measure(int a) {	age = a;   measure();}

void CHealth::measure() {
	cel = rand() % 10 + 30.0; 	 //체온 측정 섭씨값
	cel2faren();  // private function //화씨값 계산
	height = 1.6 + (rand() % 30) / 10.0;	//키 측정
	weight = 50. + rand() % 30;			//몸무게 측정
    beat = 70 + rand() % 15; 			//심박수 측정
	pressure = 90. + rand() % 30;		//혈압 측정
	GetBMI();  //bmi 측정    	
	GetHealthAge(); //건강 나이 측정
}
int CHealth::run5min() {
	int nn = 5 * 60;  // every seconds for 5minutes
	if (beat5min == nullptr) beat5min = new float[nn]; //심박수 데이터 저장 배열
	if (temp5min == nullptr) temp5min = new float[nn];;	//혈압 데이터 저장 배열
	for (int n = 0; n < nn; n++) {			//심박수와 혈압 저장?
		beat5min[n] = 80 + rand() % 20;
		temp5min[n] = 35 + rand() % 5;
		if (temp5min[n] > 41 || beat5min[n] > 101)  return -1; //이상있으면 emergency
	}
	return 1;
}

