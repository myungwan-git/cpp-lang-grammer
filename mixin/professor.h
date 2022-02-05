#ifndef PROPESSOR_H
#define PROPESSOR_H
#include "person.h"
#include "prfType.h"

class Professor: public Person, public PrfType {
    public:
        Professor(string name, double salary);
        void printSalary();
        void print();
};

#endif