#include <iostream>
#include <string>
using namespace std;

class EqualOver
{
    private:
        string * name;
    public:
        EqualOver(string name) {
            this->name = new string;
            this->name = &name;
        }
        ~EqualOver() {
            delete []name;
            cout << "소멸자 호출" << endl;
        }
        void print() {
            cout << "name = " << *name << endl;
        }
};

int main() {

    EqualOver eo("KMW");
    eo.print();

    EqualOver eo2("LEE");
    eo2 = eo;
    eo2.print();

    return 0;
}