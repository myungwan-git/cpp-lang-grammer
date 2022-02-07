#include "invoice.h"

int main() {
    Product product1("ItemA", 150.00);
    Product product2("ItemB", 300.05);

    Invoice invoice(1);
    invoice.add(1, product1);
    invoice.add(1, product2);

    invoice.print();

    return 0;
}