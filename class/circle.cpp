/**
 * Circle 클래스를 분할컴파일 중 구현파일을 담당
 * 모든 멤버 함수를 정의한다.
 * 이 파일을 컴파일 하기 위해서는 당연히 인터페이스 파일(데이터멤버와 멤버함수를 선언한 파일)을 읽어 들여야 한다. (7번 라인)
 * 
 */
#include "circle.h"

Circle::Circle(double rds)
: radius(rds) {
    if(radius < 0.0) {
        assert(false);
    }
}

Circle::Circle()
: radius(0.0) {
    
}

Circle::Circle(const Circle& circle) 
: radius(circle.radius) {

}

Circle::~Circle() {

}

void Circle::setRadius(double value) {
    radius = value;
    if(radius < 0.0) {
        assert(false);
    }
}

double Circle::getRadius() const {
    return radius;
}

double Circle::getArea() const {
    const double PI = 3.14;
    return (PI * radius * radius);
}

double Circle::getPerimeter() const {
    const double PI = 3.14;
    return (2 * PI * radius);
}
