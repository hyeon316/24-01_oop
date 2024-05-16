#include "store.h"
store::store() {}
store::store(int a, int b, int c, float d, float e, float f, float g, float h, float i) {
    apple = fruit(d, a, b);
    pear = fruit(e, a, c);
    peach = fruit(f, a, c);
    mango = fruit(g, a, h);
}
float store::total() {
    return apple.show() + pear.show() + peach.show() + mango.show();
}
