#include <iostream>
using namespace std;

class Circle {
    private:
        double radius;
    public:
        Circle();
        Circle(double radius);
        Circle(const Circle &circle);
        ~Circle();
        void setRadius(double radius);
        double getRadius() const;
        double getArea() const;
        double getPerimeter() const;
};

Circle::Circle(double radius)
: radius(radius) {
    cout << "매개변수가 있는 생성자 호출 radius값 초기화 = " << radius << endl;
}

Circle::Circle()
: radius(0.0) {
    cout << "기본생성자 호출 radius값 초기화 = 0.0" << endl;
}

Circle::Circle(const Circle& circle)
: radius(circle.radius) {
    cout << "복사생성자 호출 radius값 초기화 = " << circle.radius << endl;
}

Circle::~Circle() {
    cout << "소멸자가 호출 radius = " << radius << endl;
}

void Circle::setRadius(double value) {
    radius = value;
}

double Circle::getRadius() const {
    return radius;
}

double Circle::getArea() const {
    const double PI = 3.14;
    return 2 * PI * radius;
}

double Circle::getPerimeter() const {
    const double PI = 3.14;
    return 2 * PI * radius;
}



int main() {
    Circle circle1(5.5);
    cout << "Radius = " << circle1.getRadius() << endl;
    cout << "Area = " << circle1.getArea() << endl << endl;

    Circle circle2(circle1);
    cout << "Radius = " << circle2.getRadius() << endl;
    cout << "Area = " << circle2.getArea() << endl << endl;

    Circle circle3;
    cout << "Radius = " << circle3.getRadius() << endl;
    cout << "Area = " << circle3.getArea() << endl << endl;

    return 0;
}