#include <iostream>
#include <string>
#include <cstring>
using namespace std;

template<typename T>
T smaller(const T& first, const T& second) {
    if(first < second) {
        return first;
    }
    
    return second;
}

template<>
const char* smaller(const char* const &first, const char* const &second) {
    if(strcmp(first,second) < 0) {
        return first;
    }
    
    return second;
}

int main() {
    string str1 = "str1";
    string str2 = "str2";
    cout << smaller(str1,str2) << endl;
    
    const char* s1 = "s1";
    const char* s2 = "s2";
    cout << smaller(s1, s2) << endl;

    return 0;
}