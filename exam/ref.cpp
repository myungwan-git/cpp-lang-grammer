#include <iostream>
#include <string>
using namespace std;

int main() {

    int x = 10;
    int &rX = x;

    cout << "x = " << x << endl;
    cout << "rX = " << rX << endl;
    cout << "&x  = " << &x << endl;
    cout << "&rX = " << &rX << endl;

    string str = "This is string";
    string &rStr = str;
    cout << "str = " << str << endl;
    cout << "rStr = " << rStr << endl;
    cout << "&str  = " << &str << endl;
    cout << "&rStr = " << &rStr << endl;

    return 0;
}