#include <iostream>
#include <string>
using namespace std;

class Over
{
    private:
        int num = 0;
    public:
        Over(int num) {
            this->num = num;
        }
        Over operator++() {
            // return Over(num+1);
            num++;
            return *this;
        }
        Over operator++(int) {
            num++;
            return *this;
        }
        void print() {
            cout << "num = " << num << endl;
        }
};


int main() {
    Over over1(0);
    over1.print();

    Over over2 = ++over1;
    over2.print();

    Over over3 = over2++;
    over3.print();


    return 0;
}