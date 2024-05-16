#pragma once
#include <iostream>
using namespace std;
class fruit {
public:
    fruit();
    fruit(float p, int n, int d);
    int many;
    float price;
    int day;
    float show();
    void show_all();
}; 
