#include <iostream>
using namespace std;

class First {
    protected:
        int num;
    public:
        void print();
};

class Second : public First {
    public:
        void setNum(int num);

};

class Third final : public Second {
    public:
        void setNum(int num);
};

void First::print() {
    cout << "num = " << num << endl;
}

void Second::setNum(int nu)
{
    num = nu;
}

void Third::setNum(int nu)
{
    num = nu;
}

int main() {
    First first;
    Second second;
    Third third;

    first.print();
    
    second.setNum(10);
    second.print();
    
    return 0;
}


