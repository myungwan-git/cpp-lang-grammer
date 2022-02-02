#include <iostream>
#include <string>
using namespace std;

int main() {

    string str;
    // cout << "Please something : ";
    // cin >> str;
    // cout << "str = " << str << endl;

    cout << "Please something : ";
    getline(cin,str);
    cout << "str = " << str << endl;

    cout << "여러줄을 입력 후 종료를 원할시 # 을 넣어주세요 : ";
    getline(cin,str,'#');
    cout << "str = " << str << endl;
    
    return 0;
}