#include "employee.h"

Employee::Employee(string nam, double salar)
:Person(nam),salary(salar) {

}

Employee::~Employee() {

}

void Employee::print() const {
    Person::print();
    cout << "급여 = " << salary << endl;
}



