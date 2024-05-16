#include <iostream>
#include "health2.h"
using namespace std;
int main() {
	
	CHealth *students = new CHealth[5];		//5명 studnet

	for (int i = 0; i < 5; i++) {
		students[i].measure(20 + rand()%4);	//나이를 입력하고 measure function 호출
		(students + i)->run5min();			//student 객체마다 run5min function 실행
	}

	for (int i=0; i<5; i++){
		cout << students[i].cel << "C, " << students[i].faren << "F" << endl;
	}

	//inline 되어 있는 member function과 default constructor를 helath2.cpp에 구현하였음에도 정상적으로
	//작동되는것을 확인할 수 있다.

	
	delete [] students;  // delete objects
	return 123;
}

