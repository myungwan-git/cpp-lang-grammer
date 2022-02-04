#include "professor.h"

Professor::Professor(string name, double sal)
:Person(name), salary(sal) {

}

Professor::~Professor() {

}

void Professor::print() {
    cout << "Professor name / salary = " << name << " " << salary << endl << endl;
}