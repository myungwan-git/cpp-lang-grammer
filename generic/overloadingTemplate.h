#ifndef OVER_TEMPLATE_H
#define OVER_TEMPLATE_H

#include <iostream>
using namespace std;

template<typename T>
T smaller(const T &first, const T &second) {
    if(first > second) {
        return second;
    }
    return first;
}

#endif