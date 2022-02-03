#include "polyStudent.h"

int main() {
    Person * ptr;
    
    ptr = new Person("Kim");
    cout << "Person name = " << endl;
    ptr->print();
    cout << endl;
    delete ptr;

    ptr = new Student("Lee", 3.3);
    cout << " Student name / GPA = " << endl;
    ptr->print();
    cout << endl;
    delete ptr;

    return 0;
}