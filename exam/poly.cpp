#include <iostream>
#include <string>
using namespace std;

class First {
    public:
        virtual void print() const;
};
class Second : public First {
    public:
        virtual void print() const;
};

void First::print() const {
    cout << "First Class" << endl;
}
void Second::print() const {
    cout << "Second Class" << endl;
}


int main() {
    First *ptr = new First();
    ptr->print();
    delete ptr;
    cout << "### delete ptr " << endl;
    ptr->print();
    cout << "### delete ptr END " << endl;

    ptr = new Second();
    ptr->print();

    First first;
    Second second;
    First *ptrObj = &first;
    ptrObj->print();
    // delete ptrObj;
    ptrObj = &second;
    ptrObj->print();
    
    return 0;
}