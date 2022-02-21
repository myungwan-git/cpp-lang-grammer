#include <iostream>
#include <string>
using namespace std;

class Poin {
    private:
        int *ptr;
    public:
        Poin(int *p)
        :ptr(p) {
            cout << "Poin(int *p) / *p = " << *p << endl;
        }
        int &operator*() const {
            return *ptr;
        }
};

class PoinInsert {
    private:
        Poin poin;
    public:
        PoinInsert(int val)
        :poin(new int) {
            *poin = val;
        }
};

void poin1(int * ptr) {
    cout << "ptr = " << ptr << endl;
    cout << "*ptr = " << *ptr << endl;
    
}

int main() {
    int x = 10;
    poin1(&x);

    PoinInsert(10);
    

    return 0;
}