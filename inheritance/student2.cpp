#include "student2.h"

Student::Student(string nam, double gp)
:Person(nam), gpa(gp) {

}

Student::~Student() {

}

void Student::print() const {
    Person::print();
    cout << "GPA = " << gpa << endl;
}