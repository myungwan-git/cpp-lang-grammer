#include <iostream>
#include <string>
using namespace std;

// 순수가상함수로만 이루어진 추상클래스(인터페이스) 선언
// 가상함수는 재정의를 기대 또는 재정의의 가능성을 열어둔 함수로 순수 가상함수랑 다르다.
// 순수가상함수는 무조건 재정의를 강요. 
class Top
{
    private:
        virtual void one() const = 0;
    public:
        virtual void two() const = 0;
        virtual void three() const = 0;
};

class Middle1 : public Top
{
    private:
        virtual void one() const;
    public:
        virtual void two() const;
        virtual void three() const;
};
void Middle1::one() const
{
    cout << "Middle1 one() call" << endl;
}
void Middle1::two() const 
{
    cout << "Middle1 two() call" << endl;
}
void Middle1::three() const
{
    one();
    cout << "Middle1 three() call" << endl;
}


int main() {
    
    Middle1 middle;
    middle.two();
    middle.three();

    return 0;
}