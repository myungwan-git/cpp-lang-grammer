#include <iostream>
#include <string>
using namespace std;

int main() {

    string str("Hello my C++");

    cout << "size = " << str.size() << endl;
    cout << "max_size = " << str.max_size() << endl;
    cout << "용적 = " << str.capacity() << endl;
    cout << "empty ? = " << boolalpha << str.empty() << endl << endl;

    str.reserve(30);
    cout << "size = " << str.size() << endl;
    cout << "max_size = " << str.max_size() << endl;
    cout << "용적 = " << str.capacity() << endl;
    cout << "empty ? = " << boolalpha << str.empty() << endl;

    return 0;
}