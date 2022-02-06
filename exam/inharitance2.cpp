#include <iostream>
#include <string>
using namespace std;

class Person {
    private:
        long identity;
    public:
        Person();
        Person(long identity);
        ~Person();
        Person(const Person &person);
        void print() const;
};

class Student : public Person{
    private:
        long score;
    public:
        Student();
        Student(long score);
        ~Student();
        Student(const Student &student);
        void print() const;
};

Person::Person()
:identity(1) {

}
Person::Person(long id)
:identity(id) {

}
Person::~Person() {

}
Person::Person(const Person &person)
:identity(person.identity) {

}
void Person::print() const {
    cout << "person id = " << identity << endl;
}

Student::Student()
:score(1),Person(222) {

}
Student::~Student() {

}
Student::Student(long sc)
:score(sc) {

}
Student::Student(const Student &student)
:score(student.score) {

}
void Student::print() const {
    Person::print();
    cout << "student score = " << score << endl;
}


int main() {
    
    Person person;
    
    Student student;

    student.print();
    
    



    return 0;
}