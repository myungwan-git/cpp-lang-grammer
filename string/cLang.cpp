#include <iostream>
using namespace std;

int main() {

    char str1[] = "Hello!";
    cout << "sizeof(str1) = " << sizeof(str1) << endl;
    cout << "strlen(str1) = " << strlen(str1) << endl;

    for(int i=0; i<sizeof(str1); i++) {
        cout << str1[i] << endl;
        if(str1[i] == '\0') {
            cout << "Is End !" << endl;
        }
    }

    char str2[] = "HI~ImJJ";
    cout << "str2 = " << str2 << endl;
    
    strncpy(str2, str1, 3);
    cout << "str2 = " << str2 << endl;

    strcpy(str2, str1);
    cout << "str2 = " << str2 << endl;
    return 0;
}