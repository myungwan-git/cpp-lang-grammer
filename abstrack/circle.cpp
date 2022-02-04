#include "circle.h"

Circle::Circle(double r)
: radius(r) {
    if(!isValid()) {
        cout << "유효하지 않은 원 입니다.";
        assert(false);
    }
}

Circle::~Circle() {
    
}

void Circle::print() const {
    cout << "원의 반지름 = " << radius << endl;
}

double Circle::getArea() const {
    return (3.14*radius*radius);
}

double Circle::getPerimeter() const {
    return 2 * 3.14 * radius;
}

bool Circle::isValid() const {
    return (radius > 0);
}
