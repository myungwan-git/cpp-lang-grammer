#include <iostream>
#include <string>
using namespace std;

class Top
{
    private:
        string name;
    public:
        Top(string nm)
        :name(nm) {

        }
        ~Top() {
            cout << "소멸자 호출" << endl;
        }
        void print() {
            cout << "name = " << name << endl;
        }
};

int main() {
    
    Top top1("AAA");
    top1.print();
    
    Top top2("BBB");
    top2.print();

    top2 = top1;
    top2.print();


    return 0;
}