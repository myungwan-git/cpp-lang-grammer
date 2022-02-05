#ifndef COPY_H
#define COPY_H

#include <iostream>
using namespace std;

class Copy {
    private:
        int zero;
    public:
        Copy();
        ~Copy();
        Copy(int init);
        Copy(const Copy & copy);
        void print() const;
};

#endif