#include <iostream>
using namespace std;

int *largeNum(int * x, int * y) {
    cout << "largeNum x = " << x << endl;
    cout << "largeNum &x = " << &x << endl;
    cout << "largeNum *x = " << *x << endl;

    if(*x > *y) {
        return x;
    }
    return y;
}

int main() {
    int x = 10, y = 20;
    int * pLarge = largeNum(&x,&y);
    int large = *(largeNum(&x,&y));

    cout << "pLarge = " << *pLarge << endl;
    cout << "large = " << large << endl;

    return 0;
}