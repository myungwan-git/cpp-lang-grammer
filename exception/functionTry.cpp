#include <iostream>
#include <string>
using namespace std;

class SP {
    private:
        int * ptr;
    public:
        SP(int * p) 
        :ptr(p) {
            cout << "p = " << p << endl;
        }
        ~SP() {
            delete ptr;
        }
        int & operator*() const {
            return *ptr;
        }
        int * operator->() const {
            return ptr;
        }
};

class Integer {
    private:
        SP sp;
    public:
        Integer(int val)
        try: sp(new int) {
            *sp = val;
        }catch(...) {
            throw;
        }
        ~Integer() {
            
        }
        int getValue() {
            return *sp;
        }
};

int main() {


    for(int i=0; i<10; i++) {
        try{
            Integer integer(i);
            cout << integer.getValue() << endl;
        }catch(...) {
            cout << "예외 발생 ###############" << endl;
        }
    }

    return 0;
}