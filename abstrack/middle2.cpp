#include "middle2.h"

Middle2::Middle2(double s)
    : side(s)
{
    if (!isValid())
    {
        cout << "유효하지 않은 정사각형입니다.";
        assert(false);
    }
}

Middle2::~Middle2()
{
}

void Middle2::print() const
{
    cout << "정사가곃ㅇ의 크기 = " << side << endl;
}

double Middle2::getArea() const
{
    return (side * side);
}

double Middle2::getPerimeter() const
{
    return (4 * side);
}

bool Middle2::isValid() const
{
    return (side > 0.0);
}
