#include "middle1.h"

Middle1::Middle1(double lg, double wd)
    : length(lg), width(wd)
{
    if (!isValid())
    {
        cout << "유효하지 않은 직사각형 입니다.";
        assert(false);
    }
}

Middle1::~Middle1()
{
}

void Middle1::print() const
{
    cout << "직사각형의 크기 = " << length << " X " << width << endl;
}

double Middle1::getArea() const
{
    return (length * width);
}

double Middle1::getPerimeter() const
{
    return 2 * (length + width);
}

bool Middle1::isValid() const
{
    return (length > 0.0 && width > 0.0);
}
