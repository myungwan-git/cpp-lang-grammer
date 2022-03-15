#include <iostream>
using namespace std;

template<typename T>
T smaller(T first, T second) {
    if(first < second) {
        return first;
    }

    return second;
}

int main() {
    int smallInt = smaller(10,20);
    cout << "small = " << smallInt << endl;
    
    double smallDou = smaller(10.2, 0.04);
    cout << "small double = " << smallDou << endl;

    cout << "int AND double small = " << smaller(40.0, 10.334) << endl;

    return 0;
}