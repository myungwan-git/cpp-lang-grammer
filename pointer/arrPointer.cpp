#include <iostream>
using namespace std;

int main() {
    int arr[4] = {1,2,3,4};

    for(int i=0; i<4; i++) {
        cout << "arr + " << i << " = " << arr + i << endl;
        cout << "&arr[" << i << "] = " << &arr[i] << endl << endl;
    }

    for(int i=0; i<4; i++) {
        cout << "*(arr) = " << *(arr+i) << endl;
        cout << "arr = " << arr[i] << endl;
    }
}