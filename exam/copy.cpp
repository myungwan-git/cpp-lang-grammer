#include "copy.h"

Copy::Copy()
:zero(5) {

}

Copy::~Copy() {
    cout << "소멸자 호출 " << endl;
}

Copy::Copy(int init)
:zero(init) {

}

Copy::Copy(const Copy & co)
:zero(co.zero) {

}

void Copy::print() const {
    cout << "zero = " << zero << endl;
}