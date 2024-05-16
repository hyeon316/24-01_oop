#include <iostream>
using namespace std;
class fruit {
public:
    fruit() {
        price = 200; many = 2; day = 12;
    }
    fruit(float p, int n, int d) {
        price = p;
        many = n;
        day = d;
    }
    int many;
    float price;
    int day;
    void operator*=(int n) {
        many *= n;
    }
    float show() {
        return price * many;
    }
};
class store {
public:
    store() {};
    store(int a, int b, int c, float d, float e, float f, float g, float h, float i) {
        apple = fruit(d, a, b);
        pear = fruit(e, a, c);
        peach = fruit(f, a, c);
        mango = fruit(g, a, h);
    }
    fruit apple, pear, peach, mango;
    float total() {
        return apple.show() + pear.show() + peach.show() + mango.show();
    }
    void operator*=(int n) {
        apple *= n;
        pear *= n;
        peach *= n;
        mango *= n;
    }
};
int main() {
    store A(3, 4, 5, 100, 200, 300, 400, 8, 12);
    cout << "Initial total cost for store A: " << A.total() << endl;
    A *= 2;
    cout << "Total cost for store A after doubling the quantities: " << A.total() << endl;
    store B(1, 2, 3, 50, 60, 70, 80, 5, 10);
    cout << "Initial total cost for store B: " << B.total() << endl;
    B *= 2;
    cout << "Total cost for store B after doubling the quantities: " << B.total() << endl;
    return 0;
}
