#include "polyStudent.h"

Student::Student(string nam, double gp)
:Person(nam), gpa(gp) {

}

void Student::print() const {
    Person::print();
    cout << " GPA = " << gpa << endl;
}