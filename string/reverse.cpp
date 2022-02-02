#include <iostream>
#include <string>
using namespace std;

void reverse(string & str);

int main() {

    string str("Hello I'm C++ lang");

    reverse(str);
    cout << "str = " << str << endl;

    for(int i=0; i<str.size(); i++) {
        cout << str[i];
    }
    cout << endl;

    return 0;
}

void reverse(string & str) {
    string temp(str);
    for(int i=0; i<str.size(); i++) {
        str[i] = temp[str.size()-1-i];
        
    }
    
}