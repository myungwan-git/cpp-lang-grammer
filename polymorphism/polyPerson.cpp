#include "polyPerson.h"

Person::Person(string nam)
:name(nam) {

}

Person::~Person() {

}

void Person::print() const {
    cout << "Name = " << name << endl;
}


