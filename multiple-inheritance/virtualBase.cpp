#include <iostream>
#include <string>
using namespace std;

class Person
{
    public:
        string name = "ABC";
};
class A : virtual public Person
{

};
class B : virtual public Person
{

};
class C : public A , public B
{

};

int main() {
    Person person;
    string name = person.name;
    cout << "person name = " << name << endl;
    A a;
    cout << "A name = " << a.name << endl;
    B b;
    cout << "B name = " << b.name << endl;
    C c;
    cout << "C name = " << c.name << endl;

    return 0;
}