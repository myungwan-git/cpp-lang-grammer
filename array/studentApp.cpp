#include "student.h"

int main() {
    Student student1;
    
    student1.print();

    Student studentArr[5];
    studentArr[0] = Student("userA",0);
    studentArr[1] = Student("userB", 89);
    studentArr[2] = Student("userC", 100);
    studentArr[3] = Student();
    studentArr[4] = Student();

    for(int i=0; i<5; i++) {
        studentArr[i].print();
    }

    return 0;
}