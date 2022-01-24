/**
 * Circle 클래스의 분할컴파일중 애플리케이션파일
 * 객체의 멤버 함수를 호출해서 처리하는 로직을 담당
 * 이 파일을 컴파일하려면 역시 인터페이서 파일을 읽어 들여야 함.
 */

#include "circle.h"
int main() {
    Circle circle1(5.2);
    cout << "반지름 = " << circle1.getRadius() << endl;
    cout << "넓이 = " << circle1.getArea() << endl << endl;

    Circle circle2(circle1);
    cout << "반지름 = " << circle2.getRadius() << endl;
    cout << "넓이 = " << circle2.getArea() << endl << endl;

    Circle circle3;
    cout << "반지름 = " << circle3.getRadius() << endl;
    cout << "넓이 = " << circle3.getArea() << endl << endl;

    return 0;
}