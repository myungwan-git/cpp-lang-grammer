#include "triangle.h"

Triangle::Triangle(double s1, double s2, double s3)
:side1(s1), side2(s2), side3(s3) {
    if(!isValid()) {
        cout << "유효하지 않은 삼각형 입니다.";
        assert(false);
    }
}

Triangle::~Triangle() {

}

void Triangle::print() const {
    cout << "삼각형의 크기 = " << side1 << " X " << side2 << " X " << side3 << endl;
}

double Triangle::getArea() const {
    double s = (side1 + side2 + side3) / 2;
    return (sqrt(s * (s-side1) * (s-side2) * (s-side3)));
}

double Triangle::getPerimeter() const {
    return (side1 + side2 + side3);
}

bool Triangle::isValid() const {
    bool fact1 = (side1 + side2) > side3;
    bool fact2 = (side1 + side3) > side2;
    bool fact3 = (side2 + side3) > side1;
    return (fact1 && fact2 && fact3);
}
