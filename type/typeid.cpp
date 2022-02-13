#include <iostream>
#include <string>
#include <typeinfo>
using namespace std;

class Person {
    
};
class Student : public Person{
    
};
int main() {
    Person person;
    Student student;
    
    Person *ptr1 = new Student;
    
    cout << typeid(person).name() << endl;
    cout << typeid(student).name() << endl;
    cout << typeid(ptr1).name() << endl;

    return 0;
}