#include "ta.h"

TA::TA(string nm, double gp, double sal)
:Person(nm),Student(nm,gp),Professor(nm,sal) {

}

TA::~TA() {

}

void TA::print() {
    cout << "Teaching Assistance name / gpa / salary = " << name << " " << gpa << " " << salary << endl << endl;
}