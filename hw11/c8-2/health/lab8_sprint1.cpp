#include <iostream>
#include "health.h"

using namespace std;

int main(){
    CHealth VIP(65), *mario;     //65세 VIP object, mario pointer object
    CHealth VIP2(24), *mickey; //for practice, 24살 VIP2 객체 생성

    mario = new CHealth(70);    //70세 객체를 생성하고 그 주소를 mario pointer에 대입
    mickey = new CHealth(22); //for practice, 22살 객체 만들어 그 주소 mickey pointer에 대입

    cout << " " << VIP.age << " " << mario -> age << endl; //mario pointer의 주소값이 가리키는 객체의 age member data에 접근한다
    cout << " " << VIP2.age << " " << mickey -> age << endl;


    VIP.measureCel();       //체온 측정
    mario->measureCel();        //객체의 주소를 담고 있는 pointer는 ->로 member function 호출한다

    cout << " " << VIP.cel << "C " << mario->faren << "F \n";       //체온 값 불러온다
    cout << " " << VIP2.cel << "C" << mickey->faren << "F \n";


    cout << " size" << sizeof(CHealth) << "\n";     //12byte
    getchar();
    
    return 1;
}