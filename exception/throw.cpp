#include <iostream>
using namespace std;


int main() {

    int num1, num2, result;
    
    for(int i=0; i<2; i++) {
        cout << "num1 정수 입력 : ";
        cin >> num1;
        cout << "num2 정수 입력 : ";
        cin >> num2;
        try
        {
            if(num2 == 0) {
                throw 0;
            }
            result = num1 / num2;
            cout << "나눗셈 결과 = " << result << endl;
        }
        catch(int x)
        {
            cout << "0으로 나눌 수 없습니다." << endl;
        }
    }

    return 0;
}