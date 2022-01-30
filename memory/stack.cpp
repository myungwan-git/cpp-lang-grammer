#include <iostream>
using namespace std;
int main() {

    int size;
    cout << "배열 길이 초기화 선택 : ";
    cin >> size;

    int arr[size];

    for(int i=0; i<size; i++) {
        cout << i << " 번째 index 입력 : ";
        cin >> arr[i];
    }

    for(int i=0; i<size; i++) {
        cout << i << " 번째 index = " << arr[i] << endl;
    }

    return 0;
}