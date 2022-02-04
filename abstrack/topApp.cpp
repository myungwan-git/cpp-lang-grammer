#include "middle1.h"
#include "middle2.h"

int main() {

    cout << "정사각형의 정보 " << endl;
    Middle2 middle2(5);
    middle2.print();
    cout << " 넓이 = " << middle2.getArea() << endl;

    cout << "직사각형의 정보 " << endl;
    Middle1 middle1(5,10);
    middle1.print();
    middle2.print();
    cout << " 넓이 = " << middle1.getArea() << endl;

    return 0;
}