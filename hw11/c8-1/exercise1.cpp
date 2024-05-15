#include <iostream>
using namespace std;


class fruit{
public:

    fruit(){
        price=200; many=2; day=12;
    }

    fruit(float p, int n, int d){
        price = p;
        many = n;
        day = d;

    }

    int many;
    float price;
    int day;

    float show(){
        return price*many;
    }

    void show_all(){
        cout << "price: " << price << " " << "many: " << many << " " << "day: " << day << endl;
    }
};

int main() {
	fruit apple, pear, peach, mango;

	pear = fruit(300, 5,10);
	peach = fruit(1000, 5,5);
    mango = fruit(700,8,7);

    cout << "price * many" << endl;

	cout << "apple" << " "<< apple.show() << endl;
	cout << "pear" << " "<< pear.show() << endl;
	cout << "peach" << " "<< peach.show() << endl;
    cout << "mango"<< " "<< mango.show() << endl;

    cout << endl;
    
    cout << "show all" << endl;
    
    cout << "apple" << endl; 
    apple.show_all();

    cout << "peach" << endl; 
    peach.show_all();

    cout << "pear" << endl; 
    pear.show_all();

    cout << "mango" << endl; 
    mango.show_all();

	return 123;
}
