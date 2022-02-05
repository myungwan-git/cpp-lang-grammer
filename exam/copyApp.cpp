#include "copy.h"

int main() {
    Copy co1;
    co1.print();

    Copy co2(10);
    co2.print();

    Copy co3(co1);
    co1.print();

    return 0;
}