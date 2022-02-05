#include "professor.h"

Professor::Professor(string name, double sal)
:Person(name) {
    salary = sal;
}

void Professor::printSalary() {
    cout << "Professor Salary = " << fixed << setprecision(2) << salary << endl;
}

void Professor::print() {
    Person::print();
    printSalary();
}