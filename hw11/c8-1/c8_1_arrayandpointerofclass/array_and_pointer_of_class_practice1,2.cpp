#include <iostream>
#include "store.h"
using namespace std;


//for Array and pointer of class practice 1,2
int main(){
    store A[5],*B;  
    cout << " " << sizeof(A) << endl;       //class fruit의 크기 -> 4*2(member data) = 8
                                            //class store의 크기 -> 8*4(member data) = 32
                                            //class store의 객체가 5개 생성되었으므로 32*5= 160byte

                                            //class store의 member data를 1개 추가하였더니 A의 크기가 커졌다.


    //store.h에 total_many member function 새로 추가하였지만 sizeof(A)의 변화에 영향을 주지 않는다.   

    //객체의 크기에는 member data만 영향을 준다.

    return 123;
}