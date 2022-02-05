#ifndef STUDENT_H
#define STUDENT_H
#include "person.h"
#include "stdType.h"

class Student : public Person, public StdType {
    public:
        Student(string name, double gpa);
        void printGPA();
        void print();
};

#endif