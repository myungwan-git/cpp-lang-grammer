#include <iostream>
#include <cassert>
#include <string>
using namespace std;

// class Person
// {
//     protected:
//         string name = "";
//     public:
//         Person(string nm)
//         {
//             name = nm;    
//         };
//         ~Person() {

//         };
//         void print() {
//             cout << "Person" << endl;
//             cout << "Name = " << name << endl << endl;
//         };
// };

// class Student : virtual public Person
// {
//     protected:
//         double gpa = 0;
//     public:
//         Student(string nm, double gp)
//         :Person(nm), gpa(gp) {
            
//         };
//         ~Student() {
            
//         };
//         void print() {
//             cout << "Student " << endl;
//             cout << "Name = " << name << endl;
//             cout << "GPA = " << gpa << endl << endl;
//         };
// };

// class Professor : virtual public Person
// {
//     protected:
//         double salary = 0;
//     public:
//         Professor(string nm, double sal)
//         :Person(nm),salary(sal) {

//         };
//         ~Professor() {

//         };
//         void print() {
//             cout << "Professor "<< endl;
//             cout << "Name = " << name << endl << endl;
            
//         }
// };

// class TA : public Professor, public Student
// {
//     public:
//         TA(string nm, double gp, double sal)
//         :Person(nm), Student(nm, gp), Professor(nm, sal) {

//         }
//         ~TA() {

//         }
//         void print() {
//             cout << "Teaching Assistance = " << endl;
//             cout << "Name = " << name << "  ";
//             cout << "GPA = " << gpa << "  ";
//             cout << "Salary = " << salary << endl << endl;

//             Person::print();
//         }
// };


// int main() {

//     Person person("personName");
//     person.print();

//     Student student("studentName", 10);
//     student.print();

//     Professor professor("professorName",300000);
//     professor.print();

//     TA ta("taName", 20, 500000);
//     ta.print();

//     return 0;
// }

class Person
{
private:
    string name = "";

public:
    Person(string nm)
    {
        name = nm;
    };
    ~Person(){

    };
    void print()
    {
        cout << "Person" << endl;
        cout << "Name = " << name << endl
             << endl;
    };
};

class Student : virtual public Person
{
private:
    double gpa = 0;

public:
    Student(string nm, double gp)
        : Person(nm), gpa(gp){

                      };
    ~Student(){

    };
    void print()
    {
        cout << "Student " << endl;
        cout << "GPA = " << gpa << endl
             << endl;
        Person::print();
    };
};

class Professor : virtual public Person
{
private:
    double salary = 0;

public:
    Professor(string nm, double sal)
        : Person(nm), salary(sal){

                      };
    ~Professor(){

    };
    void print()
    {
        cout << "Professor " << endl;
        cout << "sal = " << salary << endl
             << endl;
        Person::print();
    }
};

class TA : public Professor, public Student
{
public:
    TA(string nm, double gp, double sal)
        : Person(nm), Student(nm, gp), Professor(nm, sal)
    {
    }
    ~TA()
    {
    }
    void print()
    {
        cout << "Teaching Assistance = " << endl;
        Person::print();
        Student::print();
        Professor::print();
    }
};

int main()
{

    // Person person("personName");
    // person.print();

    // Student student("studentName", 10);
    // student.print();

    // Professor professor("professorName", 300000);
    // professor.print();

    TA ta("taName", 20, 500000);
    ta.print();

    return 0;
}