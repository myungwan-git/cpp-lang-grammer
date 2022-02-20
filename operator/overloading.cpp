#include <iostream>
#include <string>
using namespace std;

class Over
{
    private:
        int num;
    public:
        Over(int numInit) {
            num = numInit;
        }
        Over operator+(Over & over) {
            return Over(num + over.num);
        }
        Over operator+() {
            return Over(num + 1);
        }
        Over operator+(int num) {
            return Over(this->num + num);
        }
        void print() {
            cout << "num = " << num << endl;
        }
        ~Over() {
            cout << "소멸자 호출" << endl;
        }
};

int main () {

    Over over1(10);
    Over over2(20);
    over1.print();
    over2.print();
    
    Over over3 = over1 + over2;
    cout << endl << endl;
    over3.print();

    Over over4 = over3.operator+();
    over4.print();

    Over over5 = over4 + 5;
    over5.print();


    return 0;
}