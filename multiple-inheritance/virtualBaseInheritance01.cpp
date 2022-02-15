#include <iostream>
#include <string>
using namespace std;

class A
{
    private:
        void print1() {cout << "A print1" << endl;}
        string name = "nameGG";
    public:
        void print2() {cout << "A print2" << "name = " << name << endl;}
};

class B : virtual public A
{
    // private:
    //     void print1() { cout << "B print1" << endl; }

    // public:
    //     void print2() { cout << "B print2" << endl; }
};

class C : virtual public A
{
    // private:
    //     void print1() { cout << "C print1" << endl; }

    // public:
    //     void print2() { cout << "C print2" << endl; }
};

class D : public B , public C
{
    // private:
    //     void print1() { cout << "D print1" << endl; }

    public:
        void print2() { cout << "Class D " << endl; A::print2(); }
};

int main() {
    B b;
    b.print2();
    C c;
    c.print2();
    
    D d;
    d.print2();

    return 0;
}