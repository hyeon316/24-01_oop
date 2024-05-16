#include <iostream>
using namespace std;
#include "fruit.h"
#include "store.h"

int main() {
    store A, B;
    B = store(3, 4, 5, 100, 200, 300, 400, 8, 12);
    cout << "Total cost for store A: " << A.total() << endl;
    cout << "Total cost for store B: " << B.total() << endl;
    cout << "Price of peach in store A: " << A.peach.price << endl;
    cout << "Price of mango in store B: " << B.mango.price << endl;
    return 0;
}
