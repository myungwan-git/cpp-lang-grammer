#include "student2.h"
#include "employee.h"

int main() {
    Person person("sangsang");
    cout << " Person name = " << endl;
    person.print();
    cout << endl;

    Student student("kmong",3.1);
    cout << "student name / GPA = " << endl;
    student.print();
    cout << endl;

    Employee employee("yespee",450.5);
    cout << "employee name / salary = " << endl;
    employee.print();
    
    

    return 0;
}