#include "ta.h"

int main() {

    Person person("KIM");
    person.print();

    Student student("Lee",3.0);
    student.print();

    Professor professor("Kang", 20000);
    professor.print();

    TA ta("Kwon", 3.3, 330000);
    ta.print();
}