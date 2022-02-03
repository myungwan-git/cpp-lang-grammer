#include <iostream>
#include <string>
using namespace std;

class Base {
    public:
        virtual void print() const {
            cout << " Base Class " << endl;
        }
};

class Derived : public Base {
    public:
        virtual void print() const {
            cout << " Derived Class " << endl;
        }
};

int main() {
    
    Base * ptr;
    ptr = new Base();
    ptr->print();
    delete ptr;

    ptr = new Derived();
    ptr->print();
    delete ptr;

    Base * ptr2;
    ptr2 = new Derived;
    ptr2->print();
    delete ptr2;


    return 0;
}