#include <iostream>
#include <string>
using namespace std;

class Plus {
    private:
        string name;
    public:
        Plus();
        Plus(string name);
        ~Plus();
        void print();
        Plus oneInPlus(string name);
};

Plus::Plus()
:name("A")
{

}

Plus::~Plus()
{

}

Plus::Plus(string nam)
:name(nam)
{

}

void Plus::print()
{
    cout << "name = " << name << endl;
}

Plus Plus::oneInPlus(string name)
{
    Plus plus(name);
    return plus;
}

Plus one(string name)
{
    Plus plus(name);
    return plus;
}

int main(){

    Plus p1;
    cout << "p1 name = ";
    p1.print();

    Plus p2 = one("HI");
    cout << "p2 name = ";
    p2.print();

    Plus p3 = p1.oneInPlus("change");
    cout << "p1 name = ";
    p1.print();
    cout << "p2 name = ";
    p2.print();
    cout << "p3 name = ";
    p3.print();

    return 0;
}