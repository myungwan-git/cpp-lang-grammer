#include <iostream>
#include <string>
using namespace std;

class Top
{
    private:
        string name = "";
    public:
        Top() {
            name = "Top";
            cout << "기본 생성자 호출 " << endl;
        }
        Top(string nm) {
            name = nm;
            cout << "매개변수 생성자 호출 " << endl;
        }
        Top(const Top & top) {
            name = top.name;
            cout << "복사 생성자 호출 " << endl;
        }
        ~Top() {
            cout << "소멸자 호출 " << endl;
        }
        void objectInputForValue(Top top) {
            cout << "top name = " << top.name << endl;
        }
        void objectInputForReference(Top & top) {
            cout << "top name = " << top.name << endl;
        }
        void objectInputForPointer(Top * top) {
            cout << "top name = " << top->name << endl;
        }
        void print() {
            cout << "top name = " << name << endl;
        }

        // Top returnObject() {

        // }
};

int main() {
    Top top1;
    top1.print();
    cout << endl;

    Top top2("top2");
    cout << "top2를 매개변수값으로 전달 " << endl;
    top1.objectInputForValue(top2);
    cout << endl;

    Top top3("top3");
    cout << "top3를 매개변수 참조로 전달 " << endl;
    top1.objectInputForReference(top3);
    cout << endl;

    Top top4("top4");
    cout << "top4를 매개변수 포인터로 전달 " << endl;
    top1.objectInputForPointer(&top4);
    cout << endl;

    cout << endl << endl;
    top2.print();
    top3.print();
    top4.print();
    


    return 0;
}