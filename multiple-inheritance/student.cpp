#include "student.h"

Student::Student(string name, double gp)
:Person(name),gpa(gp) {
    assert(gpa <= 4.0);
}

Student::~Student() {

}

void Student::print() {
    cout << "Student Name / GPA = " << name << " " << gpa << endl << endl;
}

