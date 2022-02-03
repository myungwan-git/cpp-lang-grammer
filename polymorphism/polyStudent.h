#ifndef STUDENT_H
#define STUDENT_H
#include "polyPerson.h"

class Student : public Person {
    private:
        double gpa;
    public:
        Student(string name, double gpa);
        void print() const;
};

#endif