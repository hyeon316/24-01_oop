#include <iostream>
using namespace std;

class cc{
public:
    cc(){
        a=2; b=3; c=4;
        cout << ii++ << " " << this << endl;
    };

    //member data
    float a,b,c;
    static int ii;
};

int cc::ii = 0;

int main(){
    cout << sizeof(cc) << endl;     //4*3 = 12byte
    cc c1, c2[2], c3, *c4,c7[3];
    c4 = new cc[10];
    cout << cc::ii << endl; //ii값 늘어난 object에 맞게 증가한다
}