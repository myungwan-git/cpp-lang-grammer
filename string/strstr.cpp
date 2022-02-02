#include <iostream>
using namespace std;

int main() {
    char str[] = "Hello C++ Why did";
    char * pStr = strstr(str, "C++");

    cout << "pStr = " << pStr << endl;
    
    cout << pStr-str << endl;

    return 0;
}