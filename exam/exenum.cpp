#include <iostream>

using namespace std;

class A {
    private:
        int num;
    protected:
        enum exam {
            EX0 = 0,
            EX1,
            EX2,
            EX3
        };
    public:
        A();
        ~A();
        void print() const;
};

A::A() : num(10) {
    cout << "EX3 = " << EX3 << "\n";
}
A::~A() {
    cout << "~A()" << "\n";
}
void A::print() const {
    cout << "num = " << num << "\n";
}

int main() {
    
    A a;
    a.print();

    return 0;
}