#include <iostream>

using namespace std;

class NUMBOX
{
private:
    int num1, num2;

public:
    NUMBOX(int num1, int num2) : num1(num1), num2(num2) {}
    void ShowNumber()
    {
        cout << "num1: " << num1 << ", num2: " << num2 << endl;
    }
    NUMBOX operator+(int num)
    {
        cout << "지역 operator 실행 " << endl;
        return NUMBOX(num1 + num, num2 + num);
    }
    friend NUMBOX operator+(int num, NUMBOX ref);
};

NUMBOX operator+(int num, NUMBOX ref)
{
    cout <<"전역 operator 실행 " << endl;
    ref.num1 += num;
    ref.num2 += num;

    return ref;
}

int main()
{
    NUMBOX nb1(10, 20);
    NUMBOX result = 10 + nb1 + 40;

    nb1.ShowNumber();
    result.ShowNumber();
}