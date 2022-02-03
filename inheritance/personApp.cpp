#include "student.h"

int main() {

    Person person(111111111);
    cout << "Person identity = " << endl;
    person.print();
    cout << endl;

    Student student(222222222,3.3);
    cout << "Student identity / gpa = " << endl;
    student.print();
    cout << endl;

    cout << "Person identity = " << endl;
    person.print();

    
}