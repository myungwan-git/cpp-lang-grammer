#include <iostream>
#include <string>
using namespace std;

class Instance {
    // string name;
    public:
        string name;
        Instance(string name);
        void print();
};

Instance::Instance(string nam)
:name(nam)
{

}

void Instance::print() 
{
    cout << "name = " << name << endl;    
}

int main() {
    Instance in1("KIM");
    in1.print();
    in1.name = "LEE";
    in1.print();
    // cout << "name = " << name << endl;

    return 0;
}





