#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

class StdType
{
    protected:
        double gpa;
    public:
        virtual void printGPA() = 0;
};

class PrfType
{
    protected:
        double salary;
    public:
        virtual void printSalary() = 0;
};

class Person
{
    private:
        string name;
    public:
        Person(string nm) {
            name = nm;
        }
        void print() {
            cout << "Name = " << name << endl;
        }
};

class Student : public Person, public StdType
{
    public:
        Student(string nm, double gp) 
        :Person(nm)
        {
            gpa = gp;
        }

        void printGPA() {
            cout << "GPA = " << fixed << setprecision(2) << gpa << endl;
        }

        void print() {
            Person::print();
            printGPA();
        }
};

class Professor : public Person, public PrfType
{
    public:
        Professor(string nm, double sal)
        :Person(nm)
        {
            salary = sal;
        }
        
        void printSalary() {
            cout << "Salary : " << fixed << setprecision(2) << salary << endl;
        }
        void print() {
            Person::print();
            printSalary();
        }
};

class Ta : public Person, public StdType, public PrfType
{
    public:
        Ta(string nm, double gp, double sal)
        :Person(nm)
        {
            gpa = gp;
            salary = sal;
        }
        void printGPA() {
            cout << "GPA = " << gpa << endl;
        }
        void printSalary() {
            cout << "Salary = " << salary << endl;
        }
        void print() {
            Person::print();
            printGPA();
            printSalary();
        }
};

int main() {

    Ta ta("taName", 40, 40000);
    ta.print();

    return 0;
}