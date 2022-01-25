#include <iostream>
using namespace std;

void print(int arr[], int size) {
    arr[2] = 50;
    for(int i=0; i<size; i++) {
        cout << "arr" << i << " = " << arr[i] << endl;
    }
    cout << arr << endl;
}

int main () {
    int arr[10] = {1,2,3};
    cout << arr << endl;
    print(arr, 10);
    cout << "main arr[2] = " << arr[2] << endl;

    return 0;
}