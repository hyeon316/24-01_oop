#include "fruit.h"

fruit::fruit() {
    price = 200;
    many = 2;
    day = 12;
}
fruit::fruit(float p, int n, int d) {
    price = p;
    many = n;
    day = d;
}
float fruit::show() {
    return price * many;
}
void fruit::show_all() {
    cout << "price: " << price << " " << "many: " << many << " " << "day: " << day << endl;
}
