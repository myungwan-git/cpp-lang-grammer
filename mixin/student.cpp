#include "student.h"

Student::Student(string name, double gp)
:Person(name) {
    gpa = gp;
}

void Student::printGPA() {
    cout << "GPA = " << fixed << setprecision(2) << gpa << endl;
}

void Student::print() {
    Person::print();
    printGPA();
}