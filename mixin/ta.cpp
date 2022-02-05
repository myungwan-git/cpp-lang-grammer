#include "ta.h"

TA::TA(string nm, double gp, double sal)
:Person(nm) {
    gpa = gp;
    salary = sal;
}

void TA::printGPA() {
    cout << "TA GPA = " << gpa << endl;
}

void TA::printSalary() {
    cout << "TA Salary = " << fixed << setprecision(2) << salary << endl;
}

void TA::print() {
    Person::print();
    printGPA();
    printSalary();
}