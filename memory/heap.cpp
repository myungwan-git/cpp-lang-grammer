#include <iostream>
using namespace std;

int main() {
    int size;
    int * pArray;

    do {
        cout << " 0보다 큰 배열 수를 입력 ! ";
        cin >> size;
    } while (size <= 0);

    pArray = new int[size];
    cout << pArray << endl;

    for(int i=0; i<size; i++) {
        cout << i << "번째 배열 인덱스의 값을 입력 : ";
        cin >> *(pArray + i);
    }

    for(int i=0; i<size; i++) {
        cout << "배열 Search " << i << endl;
        cout << *(pArray + i) << endl;
    }

    delete[] pArray;

    for (int i = 0; i < size; i++) {
        cout << "힙에서 삭제 후 배열 Search " << i << endl;
        cout << *(pArray + i) << endl;
    }

    return 0;
}