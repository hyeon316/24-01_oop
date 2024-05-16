#pragma once
#include <iostream>
#include "fruit.h"
using namespace std;

class store {
public:
    store();
    store(int a, int b, int c, float d, float e, float f, float g, float h, float i);
    float total();
    fruit apple, pear, peach, mango;
};
