#include <iostream>
using namespace std;

int main() {

    int num1;
    double num2;
    
    cout << "int num1 = ";
    cin >> num1;

    cout << "double num2 = ";
    cin >> num2;

    try {
        if(num1 == 0) {
            throw 0;
        }
        if(num2 == 1.0) {
            throw 1.0;
        }
        
    }catch(int x) {
        cout << "num1에 0을 입력했습니다." << endl;
    }catch(double x) {
        cout << "num2에 1.0을 입력했습니다." << endl;
    }catch(...) {
        cout << "뭔가 잘못됨...." << endl;
    }

    return 0;
}