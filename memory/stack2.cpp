#include <iostream>
using namespace std;
int main() {
    int size;
    cin >> size;
    double array[size];

    for(int i=0; i<size; i++) {
        cin >> array[i];
        cout << "  arr = " << array[i] << endl;
    }


    return 0;
}