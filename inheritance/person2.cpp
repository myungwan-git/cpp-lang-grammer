#include "person2.h"

Person::Person(string nam)
:name(nam) {
    
}

Person::~Person() {

}

void Person::print() const {
    cout << "이름 : " << name << endl;
}

