#include <iostream>

const double PI = 3.14;

class Circle {
    private:
        double radius;      // 데이터 멤버. 기본적으로 private이 default지만 강조의 의미로 자주 쓰곤 한다.
    public:
        double getRadius() const;
        double getArea() const;
        double getPerimeter() const;
        void setRadius(double value);
};

double Circle::getRadius() const {
    return radius;
}

double Circle::getArea() const {
    return (PI * radius * radius);
}

double Circle::getPerimeter() const {
    return (2 * PI * radius);
}

void Circle::setRadius(double value) {
    radius = value;
}

int main() {
    std::cout << "Circle Start! " << std::endl;
    Circle circle1;
    circle1.setRadius(10.0);

    std::cout << "Radius = " << circle1.getRadius() << std::endl;
    std::cout << "Area = " << circle1.getArea() << std::endl;
    std::cout << "Perimeter = " << circle1.getPerimeter() << std::endl;

    return 0;
}