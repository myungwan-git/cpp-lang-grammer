#include <iostream>
#include <string>
using namespace std;

class Top
{
    private:
        string name;
    public:
        Top() {
            name = "TOP";
            cout << "기본 생성자 호출" << endl;
        }
        Top(string nm) {
            name = nm;
            cout << "매개변수 생성자 호출 " << endl;
        }
        Top(Top & top) {
            name = top.name;
            cout << "복사 생성자 호출" << endl;
        }
        ~Top() {
            cout << "소멸자 호출 " << endl;
        }
        Top returnObject(Top top) {
            cout << "객체를 값으로 리턴 " << endl;
            return top;
        }
        Top returnObjectForRef(Top & top) {
            return top;
        }
        void print() {
            cout << "name = " << name << endl;
        }

};


int main() {

    Top top1;
    top1.print();
    cout << endl << endl;

    Top top2("top2");
    top2.print();
    cout << endl << endl;

    cout << "START " << endl;
    top2 = top1.returnObject(top1);
    top2.print();
    cout << endl << endl;

    top2 = top2.returnObject(top1);
    top2.print();
    cout << endl << endl;



    return 0;
}