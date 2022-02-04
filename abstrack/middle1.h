#ifndef MIDDLE_H
#define MIDDLE_H
#include "top.h"

class Middle1 : public Top
{
private:
    double length;
    double width;
    bool isValid() const;

public:
    Middle1(double length, double width);
    ~Middle1();
    void print() const;
    double getArea() const;
    double getPerimeter() const;
};

#endif