#include <iostream>
#include <string>
using namespace std;

class Person {
    private:
        long identity;
    public:
        string name;
        void setId(long identity);
        long getId() const;
};

class Student : public Person{
    private:
        long score;
    public:
        void setScore(long score);
        long getScore() const;
};

void Person::setId(long id) {
    identity = id;
}
long Person::getId() const {
    return identity;
}

void Student::setScore(long sco) {
    score = sco;
}
long Student::getScore() const {
    return score;
}

int main() {
    Person person;
    cout << "person identity is not initialize. identity = " << person.getId() << endl;
    person.setId(11111);
    cout << "person identity is initialize. identity = " << person.getId() << endl;
    person.name = "Hello";
    cout << "person name = " << person.name << endl << endl;

    Student student;
    cout << "student GPA is not initialize. GPA = " << student.getScore() << endl;
    student.setScore(50);
    cout << "student GPA is initialize. GPA = " << student.getScore() << endl;

    cout << "student identity(not initialize) = " << student.getId() << endl;
    student.setId(2222);
    cout << "student identity = " << student.getId() << endl;
    student.name = "Student";
    cout << "person name = " << person.name << endl;
    cout << "student name = " << student.name << endl;



    return 0;
}