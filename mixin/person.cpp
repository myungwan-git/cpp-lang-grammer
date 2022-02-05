#include "person.h"

Person::Person(string nam)
:name(nam) {
    
}

void Person::print() {
    cout << "Person name = " << name << endl;
}