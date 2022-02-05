#include "student.h"
#include "professor.h"
#include "ta.h"

int main() {
    Person per("PER");
    Student std("STD", 3.0);
    Professor prf("PRO", 40000);
    TA ta("TA", 3.5, 25000);

    cout << " Person " << endl;
    per.print();

    cout << " Student " << endl;
    std.print();

    cout << " Professor " << endl;
    prf.print();

    cout << " TA " << endl;
    ta.print();
}