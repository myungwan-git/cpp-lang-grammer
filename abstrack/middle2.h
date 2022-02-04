#ifndef MIDDLE2_H
#define MIDDLE2_H
#include "top.h"

class Middle2 : public Top
{
private:
    double side;
    bool isValid() const;

public:
    Middle2(double side);
    ~Middle2();
    void print() const;
    double getArea() const;
    double getPerimeter() const;
};

#endif