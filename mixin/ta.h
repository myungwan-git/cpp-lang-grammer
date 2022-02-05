#ifndef TA_H
#define TA_H
#include "person.h"
#include "stdType.h"
#include "prfType.h"

class TA : public Person, public StdType, public PrfType {
    public:
        TA(string name, double gpa, double salary);
        void printGPA();
        void printSalary();
        void print();
};

#endif