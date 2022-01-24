#include "time.h"
int main() {
    Time time(21,8,25);

    cout << "현재 시간 => ";
    time.print();

    for(int i=0; i<1400; i++) {
        time.tick();
    }

    cout << "1400초 후에는 ? => ";
    time.print();

    return 0;
}