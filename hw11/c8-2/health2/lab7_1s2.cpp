#include <iostream>
#include "health2.h"
using namespace std;
int main() {
	
	CHealth *students = new CHealth[5];		//5명 studnet

	for (int i = 0; i < 3; i++) {
		students[i].measure(20 + rand()%4);	//나이를 입력하고 measure function 호출
		(students + i)->run5min();			//student 객체마다 run5min function 실행
	}

	cout << students[1].cel << "C" << endl;
	cout << students[1].faren << "F" << endl;

	
	delete [] students;  // delete objects
	return 123;
}

