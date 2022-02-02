#include <iostream>
#include <cassert>
#include <string>
using namespace std;

class Person {
    private:
        long identity;
    public:
        void setId(long identity);
        long getId() const;
};

void Person::setId(long identity) {
    this->identity = identity;
    assert(this->identity >= 100000000 && this->identity <= 999999999);
}

long Person::getId() const {
    return identity;
}

class Student : public Person {
    private:
        double gpa;
    public:
        void setGPA(double gpa);
        double getGPA() const;
};

void Student::setGPA(double gpa) {
    this->gpa = gpa;
    assert(gpa >= 0 && gpa <= 4.0);
}

double Student::getGPA() const {
    return gpa;
}

int main() {
    Person person;
    person.setId(111111119L);
    cout << "Person identity 정보 : " << person.getId() << endl;

    Student student;
    student.setId(111111115L);
    cout << "Person identity 정보 : " << person.getId() << endl;
    cout << "Student identity 정보 : " << student.getId() << endl;

    student.setGPA(3.5);
    cout << "Student GPA 정보 : " << student.getGPA() << endl;
}




