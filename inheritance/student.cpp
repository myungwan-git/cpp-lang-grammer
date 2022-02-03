#include "student.h"

Student::Student()
:Person(),gpa(0.0) {

}

Student::Student(long iden, double gp)
: Person(iden),gpa(gp) {

}

Student::~Student() {

}

Student::Student(const Student & stu)
:Person(stu),gpa(stu.gpa) {

}

void Student::print() const {
    Person::print();
    cout << "GPA = " << fixed << setprecision(2) << gpa << endl;
}