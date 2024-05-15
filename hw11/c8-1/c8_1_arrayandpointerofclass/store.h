#pragma once
#include "fruit.h" //fruit.h class 불러온다
class store {
public:
	store() {			//default constructor
	}; 

	store(int a, int b, int c, float d, float e, float f) { //constructor
		apple = fruit(d, a);
		pear = fruit(e, b);
		peach = fruit(f, c);
		watermelon = fruit(d,a); //for practice 1 member data 추가
	}

    //member data
	fruit apple, pear, peach, watermelon; //default constructor 이용해서 apple pear peach object 생성


    //member function

	float total(){          //전체 가격 낸다
    float x = apple.show(); //apple 총 가격
	x += pear.show();   //pear 총 가격
	x += peach.show();  //peach 총 가격
	x += watermelon.show(); //watermelon 총 가격
	return x; 
    }

	int total_many(){		//for practice 2 member function 추가 //전체 개수 낸다
	int m = apple.many;
	m += pear.many;
	m += peach.many;
	m += watermelon.many;
	return m;
	}
};