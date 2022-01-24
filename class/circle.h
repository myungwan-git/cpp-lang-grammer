
/**
 * Circle 클래스의 분할컴파일중 인터페이스 파일을 담당
 * 데이터멤버와 멤버함수를 선언
 * 구현 파일과 애플리케이션 파일에서 읽어들여 사용한다.
 */
#ifndef CIRCLE_H
#define CIRCLE_H
#include <iostream>
#include <cassert>
#include "circle.h"
using namespace std;

class Circle {
    private:
        double radius;
    public:
        Circle(double radius);
        Circle();
        Circle(const Circle& circle);
        ~Circle();
        void setRadius(double radius);
        double getRadius() const;
        double getArea() const;
        double getPerimeter() const;
};

#endif