#ifndef TOP_H
#define TOP_H
#include <iostream>
#include <cassert>
#include <cmath>
using namespace std;

class Top
{
protected:
    virtual bool isValid() const = 0;

public:
    virtual void print() const = 0;
    virtual double getArea() const = 0;
    virtual double getPerimeter() const = 0;
};

#endif