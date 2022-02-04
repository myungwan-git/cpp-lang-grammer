#include "rectangle.h"

Rectangle::Rectangle(double lg, double wd)
:length(lg), width(wd) {
    if(!isValid()) {
        cout << "유효하지 않은 직사각형 입니다.";
        assert(false);
    }
}

Rectangle::~Rectangle() {

}

void Rectangle::print() const {
    cout << "직사각형의 크기 = " << length << " X " << width << endl;
}

double Rectangle::getArea() const {
    return (length * width);
}

double Rectangle::getPerimeter() const {
    return 2*(length + width);
}

bool Rectangle::isValid() const {
    return (length > 0.0 && width > 0.0);
}


