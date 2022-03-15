#include <iostream>
using namespace std;

template<typename T, int N>
void print(T(&arr)[N]) {
    for(int i=0; i<N; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr1[2] = {1, 2};
    double arr2[2] = {10.00, 20.04};

    print(arr1);
    print(arr2);

    return 0;
}