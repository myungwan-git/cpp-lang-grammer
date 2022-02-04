#include "square.h"
#include "rectangle.h"
#include "triangle.h"
#include "circle.h"
#include "ellipse.h"

int main() {

    cout << "정사각형의 정보 " << endl;
    Square square(5);
    square.print();
    cout << " 넓이 = " << square.getArea() << endl;

    cout << "직사각형의 정보 " << endl;
    Rectangle rectangle(5,-3);
    rectangle.print();
    square.print();
    cout << " 넓이 = " << rectangle.getArea() << endl;

    return 0;
}