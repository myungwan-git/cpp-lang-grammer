#include <iostream>
using namespace std;

int main() {

    const char * str1 = "Hello My C++";
    char str2[] = "Hello";
    char str3[] = "안녕하세요";

    cout << "str1 길이 = " << strlen(str1) << endl;
    cout << "str2 길이 = " << strlen(str2) << endl;
    cout << "str3 길이 = " << strlen(str3) << endl;
    return 0;
}