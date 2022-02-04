#include "person.h"

Person::Person(string nam)
:name(nam) {

}

Person::~Person() {

}

void Person::print() {
    cout << "Person name = " << name << endl;
}