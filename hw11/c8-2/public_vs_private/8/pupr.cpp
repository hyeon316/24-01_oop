#include <iostream>
using namespace std;
class a {
public:
float x = 100;
void showx() {
    cout << "x " << x << endl;
    cout << "y " << y << endl; //private member data를 public 에서 사용
    cout << "yy " << gety() << endl; //private member function을 public에서 사용
    cout << "------" <<endl;
}
void sety(float z) { y = z; }
float showy() { return y; }
private:
float y = 200;
float gety() { return y; }
};
int main() {
    a b;
    //cout << b.y << endl;  y는 private data로 접근 불가능 하기때문에 b.y는 오류발생
    //cout << b.gety() << endl; gety()는 private function이므로 접근 불가능하기 때문에 gety()는 오류발생
    b.showx();
    b.sety(30); // public function인 sety()에 float값 30을 입력하고 sety()가 private data에 접근하여 30을 입력
    b.showx(); 

    b.sety(50);
    b.showx();
    b.showy();
    cout << "main 에서는 class의 private data와 function을 사용할 수 없지만 \npublic data/function을 이용하여 private data/function을 수정하거나 읽을 수 있다."<<endl;
}

