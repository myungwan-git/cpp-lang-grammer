#include "person.h"

Person::Person()
: identity(0) {

}

Person::Person(long iden)
: identity(iden) {
    assert(identity >= 100000000 && identity <= 999999999);
}

Person::Person(const Person & per)
: identity(per.identity) {

}

Person::~Person() {

}

void Person::print() const {
    cout << "Identity = " << identity << endl;
}